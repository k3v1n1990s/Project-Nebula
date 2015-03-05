/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKNP_COLLISION_PAIR_H
#define HKNP_COLLISION_PAIR_H

#include <Physics/Physics/hknpTypes.h>
#include <Common/Base/Container/BlockStream/hkBlockStream.h>

/// A collision pair, used to report collisions to the deactivation manager.
struct hknpCollisionPair
{
	hknpSolverId m_id[2];
	hknpCellIndex m_cell[2];
};

/// A block stream writer for collision pairs, see \a hknpCollisionPair
class hknpCdPairWriter: public hkBlockStream<hknpCollisionPair>::Writer {};
class hknpCdPairStream:	public hkBlockStream<struct hknpCollisionPair> {};

#endif // HKNP_COLLISION_PAIR_H

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