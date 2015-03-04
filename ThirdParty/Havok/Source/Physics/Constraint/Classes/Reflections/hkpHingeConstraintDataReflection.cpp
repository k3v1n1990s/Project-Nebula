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

// Generated from 'Physics/Constraint/Data/Hinge/hkpHingeConstraintData.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Data/Hinge/hkpHingeConstraintData.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkp2dAngConstraintAtomClass;
extern const hkClass hkpBallSocketConstraintAtomClass;
extern const hkClass hkpHingeConstraintDataAtomsClass;
extern const hkClass hkpSetLocalTransformsConstraintAtomClass;
extern const hkClass hkpSetupStabilizationAtomClass;
extern const hkClass hkpSolverResultsClass;

//
// Enum hkpHingeConstraintData::Atoms::Axis
//
static const hkInternalClassEnumItem hkpHingeConstraintDataAtomsAxisEnumItems[] =
{
	{0, "AXIS_AXLE"},
};
static const hkInternalClassEnum hkpHingeConstraintDataAtomsEnums[] = {
	{"Axis", hkpHingeConstraintDataAtomsAxisEnumItems, 1, HK_NULL, 0 }
};
const hkClassEnum* hkpHingeConstraintDataAtomsAxisEnum = reinterpret_cast<const hkClassEnum*>(&hkpHingeConstraintDataAtomsEnums[0]);

//
// Class hkpHingeConstraintData::Atoms
//
static const hkInternalClassMember hkpHingeConstraintData_AtomsClass_Members[] =
{
	{ "transforms", &hkpSetLocalTransformsConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpHingeConstraintData::Atoms,m_transforms), HK_NULL },
	{ "setupStabilization", &hkpSetupStabilizationAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpHingeConstraintData::Atoms,m_setupStabilization), HK_NULL },
	{ "2dAng", &hkp2dAngConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpHingeConstraintData::Atoms,m_2dAng), HK_NULL },
	{ "ballSocket", &hkpBallSocketConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpHingeConstraintData::Atoms,m_ballSocket), HK_NULL }
};
const hkClass hkpHingeConstraintDataAtomsClass(
	"hkpHingeConstraintDataAtoms",
	HK_NULL, // parent
	sizeof(hkpHingeConstraintData::Atoms),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpHingeConstraintDataAtomsEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkpHingeConstraintData_AtomsClass_Members),
	HK_COUNT_OF(hkpHingeConstraintData_AtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpHingeConstraintData::Atoms::staticClass()
{
	return hkpHingeConstraintDataAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpHingeConstraintData::Atoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpHingeConstraintDataAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpHingeConstraintData::Atoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpHingeConstraintDataAtoms(void* p)
{
	static_cast<hkpHingeConstraintData::Atoms*>(p)->~Atoms();
}
extern const hkTypeInfo hkpHingeConstraintDataAtomsTypeInfo;
const hkTypeInfo hkpHingeConstraintDataAtomsTypeInfo(
	"hkpHingeConstraintDataAtoms",
	"!hkpHingeConstraintData::Atoms",
	finishLoadedObjecthkpHingeConstraintDataAtoms,
	cleanupLoadedObjecthkpHingeConstraintDataAtoms,
	HK_NULL,
	sizeof(hkpHingeConstraintData::Atoms)
	);
#endif

//
// Class hkpHingeConstraintData
//
extern const hkClass hkpConstraintDataClass;

static const hkInternalClassMember hkpHingeConstraintDataClass_Members[] =
{
	{ "atoms", &hkpHingeConstraintDataAtomsClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpHingeConstraintData,m_atoms), HK_NULL }
};
extern const hkClass hkpHingeConstraintDataClass;
const hkClass hkpHingeConstraintDataClass(
	"hkpHingeConstraintData",
	&hkpConstraintDataClass, // parent
	sizeof(::hkpHingeConstraintData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpHingeConstraintDataClass_Members),
	HK_COUNT_OF(hkpHingeConstraintDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpHingeConstraintData::staticClass()
{
	return hkpHingeConstraintDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpHingeConstraintData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpHingeConstraintData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpHingeConstraintData(f);
}
static void HK_CALL cleanupLoadedObjecthkpHingeConstraintData(void* p)
{
	static_cast<hkpHingeConstraintData*>(p)->~hkpHingeConstraintData();
}
static const void* HK_CALL getVtablehkpHingeConstraintData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpHingeConstraintData).hash_code()));
	#else
	return ((const void*)(typeid(hkpHingeConstraintData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpHingeConstraintData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpHingeConstraintData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpHingeConstraintDataTypeInfo;
const hkTypeInfo hkpHingeConstraintDataTypeInfo(
	"hkpHingeConstraintData",
	"!hkpHingeConstraintData",
	finishLoadedObjecthkpHingeConstraintData,
	cleanupLoadedObjecthkpHingeConstraintData,
	getVtablehkpHingeConstraintData(),
	sizeof(hkpHingeConstraintData)
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
