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

// Generated from 'Physics2012/Collide/Filter/hkpCollisionFilter.h'
#include <Physics2012/Collide/hkpCollide.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Collide/Filter/hkpCollisionFilter.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClassEnum* hkpCollisionFilterhkpFilterTypeEnum;

//
// Enum hkpCollisionFilter::hkpFilterType
//
static const hkInternalClassEnumItem hkpCollisionFilterhkpFilterTypeEnumItems[] =
{
	{0, "HK_FILTER_UNKNOWN"},
	{1, "HK_FILTER_NULL"},
	{2, "HK_FILTER_GROUP"},
	{3, "HK_FILTER_LIST"},
	{4, "HK_FILTER_CUSTOM"},
	{5, "HK_FILTER_PAIR"},
	{6, "HK_FILTER_CONSTRAINT"},
};
static const hkInternalClassEnum hkpCollisionFilterEnums[] = {
	{"hkpFilterType", hkpCollisionFilterhkpFilterTypeEnumItems, 7, HK_NULL, 0 }
};
const hkClassEnum* hkpCollisionFilterhkpFilterTypeEnum = reinterpret_cast<const hkClassEnum*>(&hkpCollisionFilterEnums[0]);

//
// Class hkpCollisionFilter
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkpCollisionFilterClass_Members[] =
{
	{ "prepad", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 2, 0, HK_OFFSET_OF(hkpCollisionFilter,m_prepad), HK_NULL },
	{ "type", HK_NULL, hkpCollisionFilterhkpFilterTypeEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkpCollisionFilter,m_type), HK_NULL },
	{ "postpad", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 3, 0, HK_OFFSET_OF(hkpCollisionFilter,m_postpad), HK_NULL }
};
extern const hkClass hkpCollisionFilterClass;
const hkClass hkpCollisionFilterClass(
	"hkpCollisionFilter",
	&hkReferencedObjectClass, // parent
	sizeof(::hkpCollisionFilter),
	HK_NULL,
	4, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpCollisionFilterEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkpCollisionFilterClass_Members),
	HK_COUNT_OF(hkpCollisionFilterClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpCollisionFilter::staticClass()
{
	return hkpCollisionFilterClass;
}
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
