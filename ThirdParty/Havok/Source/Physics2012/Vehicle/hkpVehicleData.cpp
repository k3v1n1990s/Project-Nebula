/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics2012/Vehicle/hkpVehicle.h>

#include <Physics2012/Vehicle/hkpVehicleData.h>

#include <Physics/ConstraintSolver/VehicleFriction/hkpVehicleFrictionSolver.h>

hkpVehicleData::hkpVehicleData()
{
	m_numWheels = 0;
	m_chassisOrientation.setZero();
	m_torqueRollFactor = 0.0f;
	m_torquePitchFactor = 0.0f;
	m_torqueYawFactor = 1.0f;
	m_extraTorqueFactor = 0.0f;
	m_maxVelocityForPositionalFriction = 10.0f;
	m_chassisUnitInertiaYaw = 1.0f;
	m_chassisUnitInertiaRoll = 1.0f;
	m_chassisUnitInertiaPitch = 1.0f;
	m_frictionEqualizer = 0.0f;
	m_normalClippingAngleCos = 0.1f;
	// m_wheelParams
	// m_wheelsAxle
	// m_numWheelsPerAxle
	m_chassisFrictionInertiaInvDiag.setZero();
	m_gravity.setZero();
	m_alreadyInitialised = false;
	m_maxFrictionSolverMassRatio = 30.0f;
}

void hkpVehicleData::init( const hkArray<struct hkpVehicleSuspension::SuspensionWheelParameters>& suspensionWheelParams, hkpRigidBody* chassis)
{
	// This initialisation should be called only once.
	HK_ASSERT(0x3f55ea27, !m_alreadyInitialised );
	m_alreadyInitialised = true;

	//
	// Check that data is consistent, in particular that every array that should contain
	// as many elements as there are wheels actually does.
	//
	HK_ASSERT(0x37c79b1e, m_numWheels > 0 );
	HK_ASSERT(0x70620a0b, m_wheelParams.getSize() == m_numWheels );

	// Check if the chassis coordinate space defines a valid rotation (check if it's determinant
	// is not zero)
#ifdef HK_DEBUG
	hkReal determinant;
	{
		hkVector4 r0; r0.setCross( m_chassisOrientation.getColumn<1>(), m_chassisOrientation.getColumn<2>() );
		determinant = m_chassisOrientation.getColumn<0>().dot<3>(r0).getReal();
	}
	HK_ASSERT2( 0x65456786, hkMath::fabs(determinant) > HK_REAL_EPSILON * 100, " Please specify a non-zero rotation for the chassis orientation system.");
#endif



	//
	// Wheels
	//



	// 1) Count the number of axles
	int w_it;
	int newNumAxles = 0;
	for (w_it=0; w_it< m_numWheels; w_it++)
	{
		const int wheel_axle = m_wheelParams[w_it].m_axle;
		if ( ( wheel_axle + 1 ) > newNumAxles)
		{
			newNumAxles = wheel_axle + 1;
		}
	}

	if(newNumAxles > m_numWheelsPerAxle.getSize()) // need to resize?
	{
		m_numWheelsPerAxle.setSize(newNumAxles);
	}

	// 2) Count the number of wheels on each axle
	for (int ax_it=0; ax_it<m_numWheelsPerAxle.getSize(); ax_it++)
	{
		m_numWheelsPerAxle[ax_it] = 0;
	}

	for (w_it=0; w_it<m_numWheels; w_it++)
	{
		const int wheel_axle = m_wheelParams[w_it].m_axle;
		m_numWheelsPerAxle[wheel_axle]++;
	}

	//
	//	Create a special friction inertia
	//
	{  // set diagonal of rot inertia tensor for normal stuff
		hkMatrix3 matrix;
		matrix.setIdentity();
		hkVector4 y,r,p;

		y.setAbs( m_chassisOrientation.getColumn<0>() );
		r.setAbs( m_chassisOrientation.getColumn<1>() );
		p.setAbs( m_chassisOrientation.getColumn<2>() );


		hkVector4 unitDiagonal;
		HK_ASSERT2(0x5adbef9e,  m_torqueYawFactor != 0.0f, "m_torqueYawFactor cannot be zero! Leave at default or change value.");
		unitDiagonal.setMul( hkSimdReal::fromFloat(m_torqueYawFactor   / m_chassisUnitInertiaYaw),   y);
		unitDiagonal.addMul( hkSimdReal::fromFloat(m_torqueRollFactor  / m_chassisUnitInertiaRoll),  r);
		unitDiagonal.addMul( hkSimdReal::fromFloat(m_torquePitchFactor / m_chassisUnitInertiaPitch), p);
		unitDiagonal(3) = 1.0f;

		m_chassisFrictionInertiaInvDiag.setMul( chassis->getRigidMotion()->getMassInv(), unitDiagonal);
	}
}

/*
 * Havok SDK - Base file, BUILD(#20130912)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2013
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available from salesteam@havok.com.
 * 
 */