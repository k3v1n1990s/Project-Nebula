/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics2012/Collide/hkpCollide.h>

#include <Physics2012/Collide/Agent/hkpCollisionAgent.h>


void hkpCollisionAgent::invalidateTim( const hkpCollisionInput& input)
{
}

void hkpCollisionAgent::warpTime(hkTime oldTime, hkTime newTime, const hkpCollisionInput& input)
{
}


void hkpCollisionAgent::removePoint( hkContactPointId idToRemove )
{
	HK_ASSERT2(0xf021f734, 0, "Internal Warning: Not implemented");
}

void hkpCollisionAgent::commitPotential( hkContactPointId newId )
{
	HK_ASSERT2(0xf021f735, 0, "Internal Warning: Not implemented");
}

void hkpCollisionAgent::createZombie( hkContactPointId idTobecomeZombie )
{
	HK_ASSERT2(0xf021f736, 0, "Internal Warning: Not implemented");
}

// Set register agents to null unless such functionality is required
hkpCollisionAgent::RegisterAgentFunction hkpCollisionAgent::registerHeightFieldAgent = HK_NULL;

/*
 * Havok SDK - Product file, BUILD(#20130912)
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
