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

// Generated from 'Physics/Constraint/Data/StiffSpring/hkpStiffSpringConstraintData.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Constraint/Data/StiffSpring/hkpStiffSpringConstraintData.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpSetLocalTranslationsConstraintAtomClass;
extern const hkClass hkpSetupStabilizationAtomClass;
extern const hkClass hkpSolverResultsClass;
extern const hkClass hkpStiffSpringConstraintAtomClass;
extern const hkClass hkpStiffSpringConstraintDataAtomsClass;

//
// Class hkpStiffSpringConstraintData::Atoms
//
static const hkInternalClassMember hkpStiffSpringConstraintData_AtomsClass_Members[] =
{
	{ "pivots", &hkpSetLocalTranslationsConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpStiffSpringConstraintData::Atoms,m_pivots), HK_NULL },
	{ "setupStabilization", &hkpSetupStabilizationAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpStiffSpringConstraintData::Atoms,m_setupStabilization), HK_NULL },
	{ "spring", &hkpStiffSpringConstraintAtomClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpStiffSpringConstraintData::Atoms,m_spring), HK_NULL }
};
const hkClass hkpStiffSpringConstraintDataAtomsClass(
	"hkpStiffSpringConstraintDataAtoms",
	HK_NULL, // parent
	sizeof(hkpStiffSpringConstraintData::Atoms),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpStiffSpringConstraintData_AtomsClass_Members),
	HK_COUNT_OF(hkpStiffSpringConstraintData_AtomsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpStiffSpringConstraintData::Atoms::staticClass()
{
	return hkpStiffSpringConstraintDataAtomsClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpStiffSpringConstraintData::Atoms*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpStiffSpringConstraintDataAtoms(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpStiffSpringConstraintData::Atoms(f);
}
static void HK_CALL cleanupLoadedObjecthkpStiffSpringConstraintDataAtoms(void* p)
{
	static_cast<hkpStiffSpringConstraintData::Atoms*>(p)->~Atoms();
}
extern const hkTypeInfo hkpStiffSpringConstraintDataAtomsTypeInfo;
const hkTypeInfo hkpStiffSpringConstraintDataAtomsTypeInfo(
	"hkpStiffSpringConstraintDataAtoms",
	"!hkpStiffSpringConstraintData::Atoms",
	finishLoadedObjecthkpStiffSpringConstraintDataAtoms,
	cleanupLoadedObjecthkpStiffSpringConstraintDataAtoms,
	HK_NULL,
	sizeof(hkpStiffSpringConstraintData::Atoms)
	);
#endif

//
// Class hkpStiffSpringConstraintData
//
extern const hkClass hkpConstraintDataClass;

static const hkInternalClassMember hkpStiffSpringConstraintDataClass_Members[] =
{
	{ "atoms", &hkpStiffSpringConstraintDataAtomsClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::ALIGN_REAL, HK_OFFSET_OF(hkpStiffSpringConstraintData,m_atoms), HK_NULL }
};
extern const hkClass hkpStiffSpringConstraintDataClass;
const hkClass hkpStiffSpringConstraintDataClass(
	"hkpStiffSpringConstraintData",
	&hkpConstraintDataClass, // parent
	sizeof(::hkpStiffSpringConstraintData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpStiffSpringConstraintDataClass_Members),
	HK_COUNT_OF(hkpStiffSpringConstraintDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpStiffSpringConstraintData::staticClass()
{
	return hkpStiffSpringConstraintDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpStiffSpringConstraintData*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpStiffSpringConstraintData(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpStiffSpringConstraintData(f);
}
static void HK_CALL cleanupLoadedObjecthkpStiffSpringConstraintData(void* p)
{
	static_cast<hkpStiffSpringConstraintData*>(p)->~hkpStiffSpringConstraintData();
}
static const void* HK_CALL getVtablehkpStiffSpringConstraintData()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpStiffSpringConstraintData).hash_code()));
	#else
	return ((const void*)(typeid(hkpStiffSpringConstraintData).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpStiffSpringConstraintData)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpStiffSpringConstraintData(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpStiffSpringConstraintDataTypeInfo;
const hkTypeInfo hkpStiffSpringConstraintDataTypeInfo(
	"hkpStiffSpringConstraintData",
	"!hkpStiffSpringConstraintData",
	finishLoadedObjecthkpStiffSpringConstraintData,
	cleanupLoadedObjecthkpStiffSpringConstraintData,
	getVtablehkpStiffSpringConstraintData(),
	sizeof(hkpStiffSpringConstraintData)
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