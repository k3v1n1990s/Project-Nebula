/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HK_ENTITY_ENTITY_BROAD_PHASE_LISTENER
#define HK_ENTITY_ENTITY_BROAD_PHASE_LISTENER

#include <Common/Base/Object/hkReferencedObject.h>
#include <Physics2012/Collide/Dispatch/BroadPhase/hkpBroadPhaseListener.h>

class hkpWorld;

	// This class is used internally by hkpWorld to dispatch broadphase pairs to the relevant lists.
class hkpEntityEntityBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener
{
	public:
				
		HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);

		hkpEntityEntityBroadPhaseListener( hkpWorld* world);

			// Adds the collision pair elements A and B if they are phantoms
		virtual void addCollisionPair( hkpTypedBroadPhaseHandlePair& pair );

			// Removes the collision pair elements A and B if they are phantoms
		virtual void removeCollisionPair( hkpTypedBroadPhaseHandlePair& pair );

	private:
		hkpWorld* m_world;
};


#endif // HK_ENTITY_ENTITY_BROAD_PHASE_LISTENER

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
