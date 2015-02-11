#pragma once
#include <Physicis/World/PhysicsWorldObject.h>
#include <Physicis/Geometry/IShape.h>
#include <Utility/Math.h>

struct MassProperties
{
	/// Initialize (to zero data).
	MassProperties() 
		: m_volume(0),
		m_mass(0),
		m_centerOfMass(vec3(0, 0, 0)) 
	{  m_inertiaTensor.setToIdentity(); }

	void scaleToDensity(float density)
	{
		scaleToMass(m_volume * density);
	}
	void scaleToMass(float newMass)
	{
		if(newMass < 0) return;
		float k = newMass / m_mass;

		m_mass = newMass;
		m_inertiaTensor *= k;
	}

	/// The volume of an object.
	float m_volume;

	/// The mass of an object.
	float m_mass;

	/// The center of mass.
	vec3 m_centerOfMass;

	/// The inertia tensor.
	mat3 m_inertiaTensor;
};

class ICollider;
typedef QSharedPointer<ICollider> ColliderPtr;

class RigidBody : public PhysicsWorldObject
{
public:

	enum MotionType
	{
		MOTION_SPHERE_INERTIA,
		MOTION_BOX_INERTIA,
		MOTION_KEYFRAMED,
		MOTION_FIXED,
		MOTION_MAX_ID
	};

	// Construct a default rigid body
	RigidBody(const vec3& position = Math::Vector3::ZERO, 
		      const quat& rotation = Math::Quaternion::ZERO, 
			  QObject* parent = 0);

	virtual QString className() { return "RigidBody"; }

	virtual ~RigidBody();
	virtual void update(const float dt);
	//
	// Shape
	//

	void setShape(const IShape* shape);
	const IShape* getShape() const;

	//
	// Collider
	//
	void attachCollider(ColliderPtr col);
	inline ColliderPtr getCollider() const { return m_collider; };

	//
	// MASS, INERTIA AND DENSITY PROPERTIES.
	//

	/// Sets the mass properties
	void setMassProperties(const MassProperties& mp);

	/// Gets the mass of the rigid body.
	inline float getMass() const { return m_mass; }

	/// Gets the 1.0/mass of the rigid body.
	inline float getMassInv() const { return m_massInv; }

	/// Sets the mass of the rigid body.
	void setMass(float m);

	/// Sets the inverse mass of the rigid body.
	void setMassInv(float mInv);

	/// Gets the inertia tensor (around the center of mass) in local space.
	virtual mat3 getInertiaLocal() const = 0;

	/// Sets the inertia tensor of the rigid body in local space. Advanced use only.
	virtual void setInertiaLocal(const mat3& inertia) = 0;

	/// Gets the inertia tensor (around the center of mass) in world space.
	virtual mat3 getInertiaWorld() const = 0;
	
	/// Gets the inverse inertia tensor in world space.
	virtual mat3 getInertiaInvWorld() const = 0;
	
	/// Gets the inverse inertia tensor in local space.
	virtual mat3 getInertiaInvLocal() const = 0;

	/// Sets the inertia tensor of the rigid body by supplying its inverse. Advanced use only.
	virtual void setInertiaInvLocal(const mat3& inertiaInv) = 0;


	//
	// CENTER OF MASS.
	//

	/// Explicitly sets the center of mass of the rigid body in local space.
	void setCenterOfMassLocal(const vec3& centerOfMass);

	/// Gets the center of mass of the rigid body in the rigid body's local space.
	inline const vec3& getCenterOfMassLocal() const { return m_centerOfMass; }

	/// Gets the center of mass of the rigid body in world space.
	inline const vec3 getCenterOfMassInWorld() const {	return m_position + m_centerOfMass; }

	//
	// POSITION ACCESS.
	//

	/// Returns the position (the local space origin) for this rigid body, in world space.
	inline const vec3& getPosition() const { return m_position; }

	// Returns the position changed (the local space origin) for this rigid body, in world space.
	inline const vec3& getDeltaPosition() const { return m_deltaPosition; }

	/// Sets the position (the local space origin) of this rigid body, in world space.
	void setPosition(const vec3& position);

	/// Returns the rotation from local to world space for this rigid body.
	inline const quat& getRotation() const { return m_rotation; }

	/// Returns the rotation changed from local to world space for this rigid body.
	inline const quat& getDeltaRotation() const { return m_deltaRotation;	}
	inline const vec3& getEulerAngles() const { return m_eulerAngles;}
	inline const mat3& getRotationMatrix() const { return m_rotationMatrix; }
	inline const mat4& getTransformMatrix() const { return m_transformMatrix; }

	/// Sets the rotation from local to world Space for this rigid body.
	/// This activates the body and its simulation island if it is inactive.
	void setRotation(const quat& rotation);

	/// Sets the position and rotation of the rigid body, in world space.
	void setPositionAndRotation(const vec3& position, const quat& rotation);

	//
	// VELOCITY ACCESS.
	//

	/// Returns the linear velocity of the center of mass of the rigid body, in world space.
	inline const vec3& getLinearVelocity() const { return m_linearVelocity;	}


	/// Sets the linear velocity at the center of mass, in world space.
	/// This activates the body and its simulation island if it is inactive.
	inline void	setLinearVelocity(const vec3& newVel) { m_linearVelocity = newVel; }

	/// Returns the angular velocity around the center of mass, in world space.
	inline const vec3& getAngularVelocity() const {	return m_angularVelocity; }

	/// Sets the angular velocity around the center of mass, in world space.
	/// This activates the body and its simulation island if it is inactive.
	inline void	setAngularVelocity(const vec3& newVel) { m_angularVelocity = newVel; }

	/// Gets the velocity of point p on the rigid body in world space.
	inline vec3 getPointVelocity(const vec3& p) const {	return m_linearVelocity + vec3::crossProduct(m_angularVelocity, p - m_centerOfMass); }

	//
	// IMPULSE APPLICATION.
	//

	/// Applies an impulse (in world space) to the center of mass.
	/// This activates the body and its simulation island if it is inactive.
	inline void applyLinearImpulse(const vec3& imp) { m_linearVelocity += m_massInv * imp; }

	/// Applies an impulse (in world space) at the point p in world space.
	/// This activates the body and its simulation island if it is inactive.
	virtual void applyPointImpulse(const vec3& imp, const vec3& p) = 0;

	/// Applies an instantaneous change in angular velocity (in world space) around
	/// the center of mass.
	/// This activates the body and its simulation island if it is inactive.
	virtual void applyAngularImpulse(const vec3& imp) = 0;

	//
	// FORCE AND TORQUE APPLICATION
	//

	/// Applies a constant force (in world space) to the rigid body. The force is applied to the
	/// center of mass.
	void applyConstantForce(const vec3& force) { m_forceAccum = force; }

	/// increase a delta force (in world space) to the rigid body. The force is applied to the
	/// center of mass.
	void increaseForce(const vec3& deltaForce) { m_forceAccum += deltaForce; }

	// Reset the force on the rigid body.
	void resetForce() { m_forceAccum.setX(0.0f); m_forceAccum.setY(0.0f); m_forceAccum.setZ(0.0f); }

	/// Applies a force (in world space) to the rigid body. The force is applied to the
	/// center of mass.
	virtual void applyForce(const float deltaTime, const vec3& force) = 0;

	/// Applies a force (in world space) to the rigid body at the point p in world space.
	virtual void applyForce(const float deltaTime, const vec3& force, const vec3& p) = 0;

	/// Applies the specified torque (in world space) to the rigid body. (Note: the inline
	/// is for internal use only).
	virtual void applyTorque(const float deltaTime, const vec3& torque) = 0;

	//
	// DAMPING
	//

	/// Naive momentum damping.
	inline float getLinearDamping() { return m_linearDamping; }

	/// Naive momentum damping.
	inline void setLinearDamping( float d ) { m_linearDamping = d; }

	/// Naive momentum damping.
	inline float getAngularDamping() { return m_angularDamping;	}

	/// Naive momentum damping.
	inline void setAngularDamping( float d ) { m_angularDamping = d; }

	/// Time factor.
	inline float getTimeFactor() { return m_timeFactor;	}

	/// Time factor.
	inline void setTimeFactor( float f ) { m_timeFactor = f; }


	//
	// Friction and Restitution
	//

	/// Returns the friction coefficient (dynamic and static) from the material.
	inline float getFriction() const { return m_friction; }

	/// Sets the friction coefficient of the material. Note: Setting this will not update existing contact information.
	void setFriction( float newFriction );

	/// Returns the default restitution from the material.
	//  restitution = bounciness (1 should give object all its energy back, 0 means it just sits there, etc.).
	inline float getRestitution() const { return m_restitution; }

	/// Sets the restitution coefficient of the material. Note: Setting this will not update existing contact information.
	void setRestitution( float newRestitution );

	//
	// GRAVITY FACTOR
	//

	/// Get the current gravity factor.
	inline float getGravityFactor() { return m_gravityFactor; }

	/// Set the gravity factor.
	inline void setGravityFactor(float gravityFactor) { m_gravityFactor = gravityFactor; }

public:

	//
	// Members
	//

	/// The motion type of the rigid body.
	MotionType	m_MotionType;

	/// The collision detection representation for this entity.
	const IShape* m_shape;

	/// The mass of the body.
	/// This defaults to 1.
	float m_mass;

	/// The inverse mass of the body.
	/// This defaults to 1.
	float m_massInv;

	/// The initial position of the body.
	/// This defaults to 0,0,0.
	vec3 m_position;

	/// The position changed of the body after each update.
	/// This defaults to 0,0,0.
	vec3 m_deltaPosition;

	/// The initial rotation of the body.
	/// This defaults to the Identity quaternion.
	quat m_rotation;

	/// The rotation changed of the body after each update.
	/// This defaults to the Identity quaternion.
	quat m_deltaRotation;

	// The rotation matrix of the body
	// This defaults to the identity matrix
	mat3 m_rotationMatrix;

	// The transform matrix of the body(scaling not included)
	// This defaults to the identity matrix
	mat4 m_transformMatrix;

	/// The initial linear velocity of the body.
	/// This defaults to 0,0,0.
	vec3 m_linearVelocity;

	/// The initial angular velocity of the body in world space.
	/// This defaults to 0,0,0.
	vec3 m_angularVelocity;

	/// The inertia tensor of the rigid body. 
	/// This defaults to the identity matrix.
	mat3 m_inertiaTensor;

	/// The inverse of inertia tensor of the rigid body.
	mat3 m_inertiaTensorInv;

	/// The inverse of inertia tensor of the rigid body in world space.
	mat3 m_inertiaTensorInvWorld;

	/// The center of mass in the local space of the rigid body.
	/// This defaults to 0,0,0.
	vec3 m_centerOfMass;

	/// The initial linear damping of the body.
	/// This defaults to 0.
	float m_linearDamping;

	/// The initial angular damping of the body.
	/// This defaults to 0.05.
	float m_angularDamping;

	/// Gravity factor used to control gravity on a per body basis. Defaults to 1.0
	float m_gravityFactor;

	/// The initial friction of the body.
	/// This defaults to 0.5.
	float m_friction;

	/// The initial restitution of the body.
	/// This defaults to 0.4.
	float m_restitution;

	/// The maximum linear velocity of the body (in m/s).
	/// This defaults to 200.
	float m_maxLinearVelocity;

	/// The maximum angular velocity of the body (in rad/s).
	/// This defaults to 200.
	float m_maxAngularVelocity;

	/// The initial time factor of the body.
	/// This defaults to 1.
	float m_timeFactor;

	/// The angular velocity * dt which was used in the last integration step.
	vec3 m_eulerAngles; 

	/// A sphere around the center of mass which completely encapsulates the object
	float m_objectRadius;

	/// The net force (gravity not included) applied on the center of the mass
	vec3 m_forceAccum;

	vec3 m_torqueAccum;

private:
	ColliderPtr m_collider;
};

typedef QSharedPointer<RigidBody> RigidBodyPtr;

