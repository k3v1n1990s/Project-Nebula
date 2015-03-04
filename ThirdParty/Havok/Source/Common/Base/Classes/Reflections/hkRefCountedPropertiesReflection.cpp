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

// Generated from 'Common/Base/Types/Properties/hkRefCountedProperties.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Base/Types/Properties/hkRefCountedProperties.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkRefCountedPropertiesEntryClass;
extern const hkClass hkReferencedObjectClass;

//
// Enum hkRefCountedProperties::ReferenceCountHandling
//
static const hkInternalClassEnumItem hkRefCountedPropertiesReferenceCountHandlingEnumItems[] =
{
	{0, "REFERENCE_COUNT_INCREMENT"},
	{1, "REFERENCE_COUNT_IGNORE"},
};
static const hkInternalClassEnum hkRefCountedPropertiesEnums[] = {
	{"ReferenceCountHandling", hkRefCountedPropertiesReferenceCountHandlingEnumItems, 2, HK_NULL, 0 }
};
const hkClassEnum* hkRefCountedPropertiesReferenceCountHandlingEnum = reinterpret_cast<const hkClassEnum*>(&hkRefCountedPropertiesEnums[0]);

//
// Class hkRefCountedProperties::Entry
//
static const hkInternalClassMember hkRefCountedProperties_EntryClass_Members[] =
{
	{ "object", &hkReferencedObjectClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkRefCountedProperties::Entry,m_object), HK_NULL },
	{ "key", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkRefCountedProperties::Entry,m_key), HK_NULL },
	{ "flags", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkRefCountedProperties::Entry,m_flags), HK_NULL }
};
const hkClass hkRefCountedPropertiesEntryClass(
	"hkRefCountedPropertiesEntry",
	HK_NULL, // parent
	sizeof(hkRefCountedProperties::Entry),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkRefCountedProperties_EntryClass_Members),
	HK_COUNT_OF(hkRefCountedProperties_EntryClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkRefCountedProperties::Entry::staticClass()
{
	return hkRefCountedPropertiesEntryClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkRefCountedProperties::Entry*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkRefCountedPropertiesEntry(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkRefCountedProperties::Entry(f);
}
static void HK_CALL cleanupLoadedObjecthkRefCountedPropertiesEntry(void* p)
{
	static_cast<hkRefCountedProperties::Entry*>(p)->~Entry();
}
extern const hkTypeInfo hkRefCountedPropertiesEntryTypeInfo;
const hkTypeInfo hkRefCountedPropertiesEntryTypeInfo(
	"hkRefCountedPropertiesEntry",
	"!hkRefCountedProperties::Entry",
	finishLoadedObjecthkRefCountedPropertiesEntry,
	cleanupLoadedObjecthkRefCountedPropertiesEntry,
	HK_NULL,
	sizeof(hkRefCountedProperties::Entry)
	);
#endif

//
// Class hkRefCountedProperties
//
const hkInternalClassMember hkRefCountedProperties::Members[] =
{
	{ "entries", &hkRefCountedPropertiesEntryClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkRefCountedProperties,m_entries), HK_NULL }
};
extern const hkClass hkRefCountedPropertiesClass;
const hkClass hkRefCountedPropertiesClass(
	"hkRefCountedProperties",
	HK_NULL, // parent
	sizeof(::hkRefCountedProperties),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkRefCountedPropertiesEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkRefCountedProperties::Members),
	HK_COUNT_OF(hkRefCountedProperties::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkRefCountedProperties::staticClass()
{
	return hkRefCountedPropertiesClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkRefCountedProperties*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkRefCountedProperties(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkRefCountedProperties(f);
}
static void HK_CALL cleanupLoadedObjecthkRefCountedProperties(void* p)
{
	static_cast<hkRefCountedProperties*>(p)->~hkRefCountedProperties();
}
extern const hkTypeInfo hkRefCountedPropertiesTypeInfo;
const hkTypeInfo hkRefCountedPropertiesTypeInfo(
	"hkRefCountedProperties",
	"!hkRefCountedProperties",
	finishLoadedObjecthkRefCountedProperties,
	cleanupLoadedObjecthkRefCountedProperties,
	HK_NULL,
	sizeof(hkRefCountedProperties)
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
