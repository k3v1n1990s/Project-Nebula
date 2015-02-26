#include "PhysicsWorld.h"
#include "PhysicsWorldObject.inl"
#include <Physicis/Collision/Collider/BoxCollider.h>
#include <Physicis/Collision/Collider/SphereCollider.h>
#include <Physicis/Collision/Collider/ConvexHullCollider.h>
#include <Physicis/Collision/BroadPhase/BroadPhaseCollisionFeedback.h>
#include <Physicis/Collision/NarrowPhase/NarrowPhaseCollisionDetection.h>
#include <Physicis/Collision/NarrowPhase/GJKSolver.h>
#include <Physicis/Entity/RigidBody.h>
#include <Primitives/GameObject.h>
#include <Scene/IModel.h>
#include <Utility/Math.h>
#include <Utility/LoaderThread.h>
#include <Scene/Scene.h>

using namespace Math;

PhysicsWorld::PhysicsWorld(const PhysicsWorldConfig& config)
	: m_config(config),
	  m_locked(false)
{
}

PhysicsWorld::~PhysicsWorld()
{
}

PhysicsWorldConfig PhysicsWorld::getConfig() const
{
	return m_config;
}

void PhysicsWorld::start()
{
	foreach(PhysicsWorldObject* entity, m_entityList)
	{
		RigidBody* rb = dynamic_cast<RigidBody*>(entity);
		if(rb->getMotionType() != RigidBody::MOTION_FIXED)
		{
			rb->executeUserInput();
		}
	}
}

void PhysicsWorld::simulate(const float deltaTime)
{
	// don't update the physics world when it is locked
	if (m_locked)
	{
		return;
	}

	m_timeStep = deltaTime;

	// update the physics objects
	foreach(PhysicsWorldObject* entity, m_entityList)
	{
		RigidBody* rb = dynamic_cast<RigidBody*>(entity);
		if(rb->getMotionType() != RigidBody::MOTION_FIXED)
		{
			rb->update(deltaTime);
		}
	}

	// handle the collision detection
	//handleCollisions();
}

bool PhysicsWorld::isLocked()
{
	return m_locked;
}

void PhysicsWorld::lock()
{
	m_locked = true;
}

void PhysicsWorld::unlock()
{
	m_locked = false;
}

void PhysicsWorld::addEntity( PhysicsWorldObject* entity )
{
	bool lockState = m_locked;

	lock();
	// add the rigid body and its collider
	m_entityList << entity;
	addBroadPhaseCollider(dynamic_cast<RigidBody*>(entity)->getBroadPhaseCollider().data());
	entity->setWorld(this);

	// if the world is not locked before the operation
	// unlock it
	if(!lockState) unlock();
}

void PhysicsWorld::removeEntity( PhysicsWorldObject* entity )
{
	bool lockState = m_locked;

	lock();
	// remove the rigid body and its collider
	m_entityList.removeOne(entity);
	removeBroadPhaseCollider(dynamic_cast<RigidBody*>(entity)->getBroadPhaseCollider().data());

	// if the world is not locked before the operation
	// unlock it
	if(!lockState) unlock();
}

void PhysicsWorld::addBroadPhaseCollider( ICollider* collider )
{
	bool lockState = m_locked;

	lock();
	// add the rigid body and its collider, make sure it's unique
	foreach(ICollider* col, m_broadPhaseColliderList)
	{
		if (col == collider)
		{
			if(!lockState) unlock();
			return;
		}
	}
	m_broadPhaseColliderList << collider;
	
	// generate the collision pairs
	generateCollisionPairs();

	// if the world is not locked before the operation
	// unlock it
	if(!lockState) unlock();
}

void PhysicsWorld::removeBroadPhaseCollider( ICollider* collider )
{
	// remove it
	int idx = m_broadPhaseColliderList.indexOf(collider);
	if (idx > -1)
		m_broadPhaseColliderList.removeAt(idx);

	// generate the collision pairs again
	generateCollisionPairs();
}

void PhysicsWorld::generateCollisionPairs()
{
	m_collisionPairs.clear();

	for (int i = 0; i < m_broadPhaseColliderList.size() - 1; ++i)
		for (int j = i + 1; j < m_broadPhaseColliderList.size(); ++j)
			m_collisionPairs << CollisionPairPtr(new CollisionPair(m_broadPhaseColliderList[i], m_broadPhaseColliderList[j]));
}

int PhysicsWorld::entitiesCount()
{
	return m_entityList.count();
}

void PhysicsWorld::handleCollisions()
{
	foreach(CollisionPairPtr pair, m_collisionPairs)
	{
		ICollider* cA = pair->pColliderA;
		ICollider* cB = pair->pColliderB;

		// mark the bounding volume as green
		cA->setColor(Qt::green);
		cB->setColor(Qt::green);

		// collision detection on broad phase
		BroadPhaseCollisionFeedback broadPhaseResult = cA->onBroadPhase(cB);

		// if colliding on broad phase
		if (broadPhaseResult.isColliding())
		{
			// mark the bounding volume as red
			cA->setColor(Qt::red);
			cB->setColor(Qt::red);

			// go to narrow phase
			NarrowPhaseCollisionFeedback collisionInfo;
			GJKSolver solver;
			ColliderPtr chA = cA->getRigidBody()->getNarrowPhaseCollider();
			ColliderPtr chB = cB->getRigidBody()->getNarrowPhaseCollider();

			// if colliding on narrow phase
			if (solver.checkCollision(chA.data(), chB.data(), collisionInfo, true))
			{
				// check whether the contact point is the same as the last one
				vec3 currentContactPoint = 0.5f * (collisionInfo.closestPntAWorld + collisionInfo.closestPntBWorld);
				float difference = (currentContactPoint - pair->contactPoint).lengthSquared();

				// if the difference is too small, means the contact point is the same, ignore it
				// only deal with the case when the contact point is not the same
				if (difference > 1e-2)
				{
					// get the two rigid bodies
					RigidBody* bodyA = cA->getRigidBody();
					RigidBody* bodyB = cB->getRigidBody();

					// update the contact point in the pair
					pair->contactPoint = currentContactPoint;

					// render the contact point
// 					Scene* scene = bodyA->gameObject()->getScene();
// 					GameObjectPtr go = scene->createEmptyGameObject("Contact Point");
// 					go->setPosition(currentContactPoint);
// 					go->setScale(0.05);
// 					LoaderThread loader(scene, "../Resource/Models/Common/sphere.obj", go, scene->sceneRoot(), false);
// 					ModelPtr model = go->getComponent("Model").dynamicCast<IModel>();
// 					ShadingTechniquePtr tech = model->renderingEffect();
//  				tech->enable();
// 					tech->setMatEmissiveColor(Qt::red);

					vec3 n = collisionInfo.contactNormalWorld;

					// find the exact Time of Impact (TOI) and back track each rigid body
					//backToTimeOfImpact(bodyA, bodyB);
// 					bodyA->backTrack(m_timeStep * 0.5f);
// 					bodyB->backTrack(m_timeStep * 0.5f);
					ImpulsePair impuseMagnitudePair = computeContactImpulseMagnitude(&collisionInfo);

 					// apply impulse based on the direction
					if (bodyA->getMotionType() != RigidBody::MOTION_FIXED)
						bodyA->applyPointImpulse(-impuseMagnitudePair.magnitudeA * n, collisionInfo.closestPntAWorld);

					if (bodyB->getMotionType() != RigidBody::MOTION_FIXED)
						bodyB->applyPointImpulse(impuseMagnitudePair.magnitudeB * n, collisionInfo.closestPntBWorld);
				}
			}
		}
	}
}

void PhysicsWorld::boarderCheck( RigidBody* rb )
{
	vec3 pos = rb->getPosition();
	if (pos.x() > 5)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(-1,0,0)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.x()) < 1.0f)
		{
			rb->setLinearVelocity(vec3( - 1.0f, v.y(), v.z()));
		}
	}
	if ( pos.x() < -5)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(1,0,0)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.x()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(+ 1.0f, v.y(), v.z()));
		}
	}
	if (pos.y() > 10)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(0,-1,0)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.y()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(v.x(), - 1.0f, v.z()));
		}
	}
	if ( pos.y() < 1)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(0,1,0)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.y()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(v.x(), + 1.0f, v.z()));
		}
	}
	if (pos.z() > 5)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(0,0,-1)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.z()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(v.x(), v.y(), - 1.0f));
		}
	}
	if ( pos.z() < -5)
	{
		rb->setLinearVelocity(Math::Vector3::reflect(rb->getLinearVelocity(), vec3(0,0,1)));
		vec3 v = rb->getLinearVelocity();
		if (qAbs(v.z()) < 1.0f)
		{
			rb->setLinearVelocity(vec3(v.x(), v.y(), 1.0f));
		}
	}
}

void PhysicsWorld::reset()
{
	lock();
	m_entityList.clear();
	m_broadPhaseColliderList.clear();
	m_collisionPairs.clear();
}

void PhysicsWorld::backToTimeOfImpact( RigidBody* rb1, RigidBody* rb2 )
{
	// store the current information of the rigid body
	Transform trans1 = rb1->getTransform();
	Transform trans2 = rb2->getTransform();
	vec3 lv1 = rb1->getLinearVelocity();
	vec3 lv2 = rb2->getLinearVelocity();
	vec3 av1 = rb1->getAngularVelocity();
	vec3 av2 = rb2->getAngularVelocity();

	int loopCount = 0;
	int operation = 1;
	NarrowPhaseCollisionFeedback collisionInfo;
	collisionInfo.penetrationDepth = FLT_MAX;
	float epsilon = 0.01f;

	// loop until the penetration depth is at a satisfied level
	while(collisionInfo.penetrationDepth > epsilon)
	{
		++loopCount;

		float fraction = 0.0f;
		for (int i = 1; i < loopCount + 1; ++i)
		{
			fraction += operation * pow(0.5f, i);
		}

		if (qFuzzyCompare(fraction, 1.0f))
		{
			break;
		}

		// reset the rigid bodies
		rb1->setTransform(trans1);
		rb2->setTransform(trans2);
		rb1->setLinearVelocity(lv1);
		rb2->setLinearVelocity(lv2);
		rb1->setAngularVelocity(av1);
		rb2->setAngularVelocity(av2);

		// back track the rigid bodies for a certain duration
		// using binary search
		rb1->backTrack(fraction * m_timeStep);
		rb2->backTrack(fraction * m_timeStep);

		GJKSolver solver;
		ColliderPtr collider1 = rb1->getNarrowPhaseCollider();
		ColliderPtr collider2 = rb2->getNarrowPhaseCollider();

		// if they are colliding
		if (solver.checkCollision(collider1.data(), collider2.data(), collisionInfo, true))
		{
			// if the penetration depth is under the threshold break the loop
			if(collisionInfo.penetrationDepth <= epsilon) break;

			// otherwise, it means that we have back tracked too near, go further
			else
			{
				operation = 1;
				continue;
			}
		}
		// if not, means that we have back tracked too far, go back by reducing the factor
		else
		{
			operation = -1;
			continue;
		}
	}
}

ImpulsePair PhysicsWorld::computeContactImpulseMagnitude( const NarrowPhaseCollisionFeedback* pCollisionInfo )
{
	RigidBody* A = pCollisionInfo->pObjA->getRigidBody();
	RigidBody* B = pCollisionInfo->pObjB->getRigidBody();

	vec3 n = pCollisionInfo->contactNormalWorld;

	vec3 pointVelocityA = A->getPointVelocityWorld(pCollisionInfo->closestPntAWorld);
	vec3 pointVelocityB = B->getPointVelocityWorld(pCollisionInfo->closestPntBWorld);
	float Vrel = vec3::dotProduct(n, pointVelocityA - pointVelocityB);

	// check if Vrel == 0
	if (qFuzzyIsNull(Vrel)) return ImpulsePair();

	float kA = -(1 + A->getRestitution());
	float kB = -(1 + B->getRestitution());

	float massInvA = A->getMotionType() == RigidBody::MOTION_FIXED ?
		             0.0f : A->getMassInv();
	float massInvB = B->getMotionType() == RigidBody::MOTION_FIXED ?
					 0.0f : B->getMassInv();

	float massInvSum = massInvA + massInvB;
	vec3 rA = pCollisionInfo->closestPntAWorld - A->getCenterOfMassInWorld();
	vec3 rB = pCollisionInfo->closestPntBWorld - B->getCenterOfMassInWorld();
	
	glm::mat3 IAInv = A->getInertiaInvWorld();
	glm::mat3 IBInv = B->getInertiaInvWorld();
	vec3 rACrossN = vec3::crossProduct(rA, n);
	vec3 rBCrossN = vec3::crossProduct(rB, n);

	float termA = A->getMotionType() == RigidBody::MOTION_FIXED ? 0.0f :
		          vec3::dotProduct(n, vec3::crossProduct(Converter::toQtVec3(IAInv * Converter::toGLMVec3(rACrossN)), rA));

	float termB = B->getMotionType() == RigidBody::MOTION_FIXED ? 0.0f :
				  vec3::dotProduct(n, vec3::crossProduct(Converter::toQtVec3(IBInv * Converter::toGLMVec3(rBCrossN)), rB));

	float denominator = massInvSum + termA + termB;
	
	ImpulsePair pair;
	pair.magnitudeA = qAbs(kA * Vrel / denominator);
	pair.magnitudeB = qAbs(kB * Vrel / denominator);

	return pair;
}

void PhysicsWorld::elasticCollisionResponse( RigidBody* rb1, RigidBody* rb2 )
{
	float m1 = rb1->getMass();
	float m2 = rb2->getMass();
	vec3 v1 = rb1->getLinearVelocity();
	vec3 v2 = rb2->getLinearVelocity();

	// Momentum Conservation Principle
	// in this case, the system does not lose kinematics energy
	vec3 v1Prime = v1*(m1-m2)/(m1+m2) + v2*(2*m2)/(m1+m2);
	vec3 v2Prime = v1*(2*m1)/(m1+m2) - v2*(m1-m2)/(m1+m2);

	rb1->setLinearVelocity(v1Prime);
	rb2->setLinearVelocity(v2Prime);
}
