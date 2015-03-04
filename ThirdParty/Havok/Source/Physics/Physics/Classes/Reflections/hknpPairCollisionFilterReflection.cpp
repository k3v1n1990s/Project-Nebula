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

// Generated from 'Physics/Physics/Collide/Filter/Pair/hknpPairCollisionFilter.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Collide/Filter/Pair/hknpPairCollisionFilter.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hknpBodyIdClass;
extern const hkClass hknpCollisionFilterClass;

//
// Class hknpPairCollisionFilter::MapPairFilterKeyOverrideType
//
static const hkInternalClassMember hknpPairCollisionFilter_MapPairFilterKeyOverrideTypeClass_Members[] =
{
	{ "elem", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hknpPairCollisionFilter::MapPairFilterKeyOverrideType,m_elem), HK_NULL },
	{ "numElems", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpPairCollisionFilter::MapPairFilterKeyOverrideType,m_numElems), HK_NULL },
	{ "hashMod", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hknpPairCollisionFilter::MapPairFilterKeyOverrideType,m_hashMod), HK_NULL }
};
extern const hkClass hknpPairCollisionFilterMapPairFilterKeyOverrideTypeClass;
const hkClass hknpPairCollisionFilterMapPairFilterKeyOverrideTypeClass(
	"hknpPairCollisionFilterMapPairFilterKeyOverrideType",
	HK_NULL, // parent
	sizeof(hknpPairCollisionFilter::MapPairFilterKeyOverrideType),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpPairCollisionFilter_MapPairFilterKeyOverrideTypeClass_Members),
	HK_COUNT_OF(hknpPairCollisionFilter_MapPairFilterKeyOverrideTypeClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpPairCollisionFilter::MapPairFilterKeyOverrideType::staticClass()
{
	return hknpPairCollisionFilterMapPairFilterKeyOverrideTypeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpPairCollisionFilter::MapPairFilterKeyOverrideType*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthknpPairCollisionFilterMapPairFilterKeyOverrideType(void* p)
{
	static_cast<hknpPairCollisionFilter::MapPairFilterKeyOverrideType*>(p)->~MapPairFilterKeyOverrideType();
}
extern const hkTypeInfo hknpPairCollisionFilterMapPairFilterKeyOverrideTypeTypeInfo;
const hkTypeInfo hknpPairCollisionFilterMapPairFilterKeyOverrideTypeTypeInfo(
	"hknpPairCollisionFilterMapPairFilterKeyOverrideType",
	"!hknpPairCollisionFilter::MapPairFilterKeyOverrideType",
	HK_NULL,
	cleanupLoadedObjecthknpPairCollisionFilterMapPairFilterKeyOverrideType,
	HK_NULL,
	sizeof(hknpPairCollisionFilter::MapPairFilterKeyOverrideType)
	);
#endif

//
// Class hknpPairCollisionFilter
//

extern const hkClass hkMaphknpPairCollisionFilterKeyunsignedinthknpPairCollisionFilterMapOperationshkContainerHeapAllocatorClass;

static const hkInternalClassMember hknpPairCollisionFilterClass_Members[] =
{
	{ "disabledPairs", &hknpPairCollisionFilterMapPairFilterKeyOverrideTypeClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hknpPairCollisionFilter,m_disabledPairs), HK_NULL },
	{ "childFilter", &hknpCollisionFilterClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hknpPairCollisionFilter,m_childFilter), HK_NULL }
};
extern const hkClass hknpPairCollisionFilterClass;
const hkClass hknpPairCollisionFilterClass(
	"hknpPairCollisionFilter",
	&hknpCollisionFilterClass, // parent
	sizeof(::hknpPairCollisionFilter),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hknpPairCollisionFilterClass_Members),
	HK_COUNT_OF(hknpPairCollisionFilterClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpPairCollisionFilter::staticClass()
{
	return hknpPairCollisionFilterClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpPairCollisionFilter*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthknpPairCollisionFilter(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hknpPairCollisionFilter(f);
}
static void HK_CALL cleanupLoadedObjecthknpPairCollisionFilter(void* p)
{
	static_cast<hknpPairCollisionFilter*>(p)->~hknpPairCollisionFilter();
}
static const void* HK_CALL getVtablehknpPairCollisionFilter()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hknpPairCollisionFilter).hash_code()));
	#else
	return ((const void*)(typeid(hknpPairCollisionFilter).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hknpPairCollisionFilter)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hknpPairCollisionFilter(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hknpPairCollisionFilterTypeInfo;
const hkTypeInfo hknpPairCollisionFilterTypeInfo(
	"hknpPairCollisionFilter",
	"!hknpPairCollisionFilter",
	finishLoadedObjecthknpPairCollisionFilter,
	cleanupLoadedObjecthknpPairCollisionFilter,
	getVtablehknpPairCollisionFilter(),
	sizeof(hknpPairCollisionFilter)
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
