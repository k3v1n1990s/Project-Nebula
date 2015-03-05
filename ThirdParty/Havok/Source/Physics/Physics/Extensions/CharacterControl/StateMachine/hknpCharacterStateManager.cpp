/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#include <Physics/Physics/hknpPhysics.h>
#include <Physics/Physics/Extensions/CharacterControl/StateMachine/hknpCharacterStateManager.h>


hknpCharacterStateManager::hknpCharacterStateManager()
{
	for (int i=0; i < hknpCharacterState::HK_CHARACTER_MAX_STATE_ID; i++)
	{
		m_states[i] = HK_NULL;
	}
}

hknpCharacterStateManager::~hknpCharacterStateManager()
{
	for (int i=0; i < hknpCharacterState::HK_CHARACTER_MAX_STATE_ID; i++)
	{
		if (m_states[i] != HK_NULL)
		{
			m_states[i]->removeReference();
			m_states[i] = HK_NULL;
		}
	}
}

void hknpCharacterStateManager::registerState(hknpCharacterState* state, hknpCharacterState::hknpCharacterStateType stateType)
{
	state->addReference();

	hknpCharacterState* oldState = m_states[stateType];

	if (oldState != HK_NULL)
	{
		oldState->removeReference();
	}

	m_states[stateType] = state;
}

hknpCharacterState* hknpCharacterStateManager::getState(hknpCharacterState::hknpCharacterStateType stateType) const
{
	return m_states[stateType];
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