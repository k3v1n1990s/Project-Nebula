#pragma once
#include <Utility/EngineCommon.h>
#include <Physicis/Geometry/BoxShape.h>
#include <Physicis/Geometry/SphereShape.h>

struct MassProperties
{
	/// Initialize (to zero data).
	MassProperties() 
		: m_volume(0),
		  m_mass(0),
		  m_centerOfMass(vec3(0, 0, 0)) 
	{  m_inertiaTensor.setToIdentity(); }

	void scaleToDensity(float density);

	void scaleToMass(float newMass);

	/// The volume of an object.
	float m_volume;

	/// The mass of an object.
	float m_mass;

	/// The center of mass.
	vec3 m_centerOfMass;

	/// The inertia tensor.
	mat3 m_inertiaTensor;
};


class RigidBodyConfig
{
public:
	RigidBodyConfig(void);
	~RigidBodyConfig(void);

	//
	// Members
	//

	/// The collision detection representation for this entity.
	const AbstractShape* m_shape;

	/// The initial position of the body.
	/// This defaults to 0,0,0.
	vec3 m_position;

	/// The initial rotation of the body.
	/// This defaults to the Identity quaternion.
	quart m_rotation;

	/// The initial linear velocity of the body.
	/// This defaults to 0,0,0.
	vec3 m_linearVelocity;

	/// The initial angular velocity of the body in world space.
	/// This defaults to 0,0,0.
	vec3 m_angularVelocity;

	/// The inertia tensor of the rigid body. Use the hkpInertiaTensorComputer class to
	/// set the inertia to suitable values.
	/// This defaults to the identity matrix.
	mat3 m_inertiaTensor;

	/// The center of mass in the local space of the rigid body.
	/// This defaults to 0,0,0.
	vec3 m_centerOfMass;

	/// The mass of the body.
	/// This defaults to 1.
	float m_mass;

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
};
