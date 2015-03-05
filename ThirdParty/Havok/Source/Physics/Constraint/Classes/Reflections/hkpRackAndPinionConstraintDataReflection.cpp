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

// Generated from 'Physics/Constraint/Data/RackAndPinion/hkpRackAndPinionConstraintData.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Data/RackAndPinion/hkpRackAndPinionConstraintData.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpRackAndPinionConstraintAtomClass;
extern const hkClass hkpRackAndPinionConstraintDataAtomsClass;
extern const hkClass hkpSetLocalTransformsConstraintAtomClass;
extern const hkClass hkpSolverResultsClass;

//
// Enum hkpRackAndPinionConstraintData::Type
//
static const hkInternalClassEnumItem hkpRackAndPinionConstraintDataTypeEnumItems[] =
{
	{0, "TYPE_RACK_AND_PINION"},
	{1, "TYPE_SCREW"},
};
static const hkInternalClassEnum hkpRackAndPinionConstraintDataEnums[] = {
	{"Type", hkpRackAndPinionConstraintDataTypeEnumItems, 2, HK_NULL, 0 }
};
const hkClassEnum* hkpRackAndPinionConstraintDataTypeEnum = reinterpret_cast<const hkClassEnum*>(&hkpRackAndPinionConstraintDataEnums[0]);

//
// Class hkpRackAndPinionConstraintData::Atoms
//
static const hkInternalClassMember hkpRackAndPinionConstraintData_AtomsClass_Members[] =
{
	{ "transforms", &hkpSetLocalTransformsConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpRackAndPinionConstraintData::Atoms,m_transforms), HK_NULL },
	{ "rackAndPinion", &hkpRackAndPinionConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpRackAndPinionConstraintData::Atoms,m_rackAndPinion), HK_NULL }
};
const hkClass hkpRackAndPinionConstraintDataAtomsClass(
	"hkpRackAndPinionConstraintDataAtoms",
	HK_NULL, // parent
	sizeof(hkpRackAndPinionConstraintData::Atoms),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpRackAndPinionConstraintData_AtomsClass_Members),
	HK_COUNT_OF(hkpRackAndPinionConstraintData_AtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpRackAndPinionConstraintData::Atoms::staticClass()
{
	return hkpRackAndPinionConstraintDataAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpRackAndPinionConstraintData::Atoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpRackAndPinionConstraintDataAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpRackAndPinionConstraintData::Atoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpRackAndPinionConstraintDataAtoms(void* p)
{
	static_cast<hkpRackAndPinionConstraintData::Atoms*>(p)->~Atoms();
}
extern const hkTypeInfo hkpRackAndPinionConstraintDataAtomsTypeInfo;
const hkTypeInfo hkpRackAndPinionConstraintDataAtomsTypeInfo(
	"hkpRackAndPinionConstraintDataAtoms",
	"!hkpRackAndPinionConstraintData::Atoms",
	finishLoadedObjecthkpRackAndPinionConstraintDataAtoms,
	cleanupLoadedObjecthkpRackAndPinionConstraintDataAtoms,
	HK_NULL,
	sizeof(hkpRackAndPinionConstraintData::Atoms)
	);
#endif

//
// Class hkpRackAndPinionConstraintData
//
extern const hkClass hkpConstraintDataClass;

static const hkInternalClassMember hkpRackAndPinionConstraintDataClass_Members[] =
{
	{ "atoms", &hkpRackAndPinionConstraintDataAtomsClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpRackAndPinionConstraintData,m_atoms), HK_NULL }
};
extern const hkClass hkpRackAndPinionConstraintDataClass;
const hkClass hkpRackAndPinionConstraintDataClass(
	"hkpRackAndPinionConstraintData",
	&hkpConstraintDataClass, // parent
	sizeof(::hkpRackAndPinionConstraintData),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpRackAndPinionConstraintDataEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkpRackAndPinionConstraintDataClass_Members),
	HK_COUNT_OF(hkpRackAndPinionConstraintDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpRackAndPinionConstraintData::staticClass()
{
	return hkpRackAndPinionConstraintDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpRackAndPinionConstraintData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpRackAndPinionConstraintData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpRackAndPinionConstraintData(f);
}
static void HK_CALL cleanupLoadedObjecthkpRackAndPinionConstraintData(void* p)
{
	static_cast<hkpRackAndPinionConstraintData*>(p)->~hkpRackAndPinionConstraintData();
}
static const void* HK_CALL getVtablehkpRackAndPinionConstraintData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpRackAndPinionConstraintData).hash_code()));
	#else
	return ((const void*)(typeid(hkpRackAndPinionConstraintData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpRackAndPinionConstraintData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpRackAndPinionConstraintData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpRackAndPinionConstraintDataTypeInfo;
const hkTypeInfo hkpRackAndPinionConstraintDataTypeInfo(
	"hkpRackAndPinionConstraintData",
	"!hkpRackAndPinionConstraintData",
	finishLoadedObjecthkpRackAndPinionConstraintData,
	cleanupLoadedObjecthkpRackAndPinionConstraintData,
	getVtablehkpRackAndPinionConstraintData(),
	sizeof(hkpRackAndPinionConstraintData)
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