/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

//HK_REFLECTION_PARSER_EXCLUDE_FILE

// Autogenerated by generateReflections.py (reflectedClasses.py)
// Changes will not be lost unless:
// - The workspace is re-generated using build.py
// - The corresponding reflection database (reflection.db) is deleted
// - The --force-output or --force-rebuild option is added to the pre-build generateReflection.py execution

// Generated from 'Physics2012/Dynamics/World/Simulation/hkpSimulation.h'
#include <Physics2012/Dynamics/hkpDynamics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Dynamics/World/Simulation/hkpSimulation.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpWorldClass;
extern const hkClassEnum* hkpSimulationLastProcessingStepEnum;

//
// Enum hkpSimulation::FindContacts
//
static const hkInternalClassEnumItem hkpSimulationFindContactsEnumItems[] =
{
	{0, "FIND_CONTACTS_DEFAULT"},
	{1, "FIND_CONTACTS_EXTRA"},
};

//
// Enum hkpSimulation::ResetCollisionInformation
//
static const hkInternalClassEnumItem hkpSimulationResetCollisionInformationEnumItems[] =
{
	{1, "RESET_TOI"},
	{2, "RESET_TIM"},
	{4, "RESET_AABB"},
	{7, "RESET_ALL"},
};

//
// Enum hkpSimulation::LastProcessingStep
//
static const hkInternalClassEnumItem hkpSimulationLastProcessingStepEnumItems[] =
{
	{0, "INTEGRATE"},
	{1, "COLLIDE"},
};
static const hkInternalClassEnum hkpSimulationEnums[] = {
	{"FindContacts", hkpSimulationFindContactsEnumItems, 2, HK_NULL, 0 },
	{"ResetCollisionInformation", hkpSimulationResetCollisionInformationEnumItems, 4, HK_NULL, 0 },
	{"LastProcessingStep", hkpSimulationLastProcessingStepEnumItems, 2, HK_NULL, 0 }
};
const hkClassEnum* hkpSimulationFindContactsEnum = reinterpret_cast<const hkClassEnum*>(&hkpSimulationEnums[0]);
const hkClassEnum* hkpSimulationResetCollisionInformationEnum = reinterpret_cast<const hkClassEnum*>(&hkpSimulationEnums[1]);
const hkClassEnum* hkpSimulationLastProcessingStepEnum = reinterpret_cast<const hkClassEnum*>(&hkpSimulationEnums[2]);

//
// Class hkpSimulation
//
extern const hkClass hkReferencedObjectClass;

const hkInternalClassMember hkpSimulation::Members[] =
{
	{ "determinismCheckFrameCounter", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSimulation,m_determinismCheckFrameCounter), HK_NULL },
	{ "world", &hkpWorldClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpSimulation,m_world), HK_NULL },
	{ "lastProcessingStep", HK_NULL, hkpSimulationLastProcessingStepEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkpSimulation,m_lastProcessingStep), HK_NULL },
	{ "currentTime", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSimulation,m_currentTime), HK_NULL },
	{ "currentPsiTime", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSimulation,m_currentPsiTime), HK_NULL },
	{ "physicsDeltaTime", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSimulation,m_physicsDeltaTime), HK_NULL },
	{ "simulateUntilTime", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSimulation,m_simulateUntilTime), HK_NULL },
	{ "frameMarkerPsiSnap", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSimulation,m_frameMarkerPsiSnap), HK_NULL },
	{ "previousStepResult", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpSimulation,m_previousStepResult), HK_NULL }
};
extern const hkClass hkpSimulationClass;
const hkClass hkpSimulationClass(
	"hkpSimulation",
	&hkReferencedObjectClass, // parent
	sizeof(::hkpSimulation),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpSimulationEnums),
	3, // enums
	reinterpret_cast<const hkClassMember*>(hkpSimulation::Members),
	HK_COUNT_OF(hkpSimulation::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	hkClass::FLAGS_NOT_SERIALIZABLE,
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpSimulation::staticClass()
{
	return hkpSimulationClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpSimulation*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpSimulation(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpSimulation(f);
}
static void HK_CALL cleanupLoadedObjecthkpSimulation(void* p)
{
	static_cast<hkpSimulation*>(p)->~hkpSimulation();
}
static const void* HK_CALL getVtablehkpSimulation()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpSimulation).hash_code()));
	#else
	return ((const void*)(typeid(hkpSimulation).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpSimulation)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpSimulation(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpSimulationTypeInfo;
const hkTypeInfo hkpSimulationTypeInfo(
	"hkpSimulation",
	"!hkpSimulation",
	finishLoadedObjecthkpSimulation,
	cleanupLoadedObjecthkpSimulation,
	getVtablehkpSimulation(),
	sizeof(hkpSimulation)
	);
#endif

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