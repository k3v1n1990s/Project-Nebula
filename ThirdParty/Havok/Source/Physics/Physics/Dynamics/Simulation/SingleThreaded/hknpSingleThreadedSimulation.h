/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKNP_SINGLE_THREADED_SIMULATION_H
#define HKNP_SINGLE_THREADED_SIMULATION_H

#include <Physics/Physics/Dynamics/Simulation/hknpSimulation.h>


/// Single threaded simulation.
class hknpSingleThreadedSimulation : public hknpSimulation
{
	public:

		HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_PHYSICS, hknpSingleThreadedSimulation);

		//
		// hknpSimulation implementation
		//

		virtual void collide( hknpSimulationContext& simulationContext, hknpSolverData*& solverDataOut ) HK_OVERRIDE;

		virtual void solve( hknpSimulationContext& simulationContext, hknpSolverData* solverData ) HK_OVERRIDE;
};

#include <Physics/Physics/Dynamics/Simulation/SingleThreaded/hknpSingleThreadedSimulation.inl>


#endif // HKNP_SINGLE_THREADED_SIMULATION_H

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