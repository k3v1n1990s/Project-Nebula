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

// Generated from 'Common/Base/Reflection/hkCustomAttributes.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Base/Reflection/hkCustomAttributes.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkCustomAttributesAttributeClass;

//
// Class hkCustomAttributes::Attribute
//
static const hkInternalClassMember hkCustomAttributes_AttributeClass_Members[] =
{
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_CSTRING, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkCustomAttributes::Attribute,m_name), HK_NULL },
	{ "value", HK_NULL, HK_NULL, hkClassMember::TYPE_VARIANT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkCustomAttributes::Attribute,m_value), HK_NULL }
};
const hkClass hkCustomAttributesAttributeClass(
	"hkCustomAttributesAttribute",
	HK_NULL, // parent
	sizeof(hkCustomAttributes::Attribute),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkCustomAttributes_AttributeClass_Members),
	HK_COUNT_OF(hkCustomAttributes_AttributeClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkCustomAttributes::Attribute::staticClass()
{
	return hkCustomAttributesAttributeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkCustomAttributes::Attribute*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkCustomAttributesAttribute(void* p)
{
	static_cast<hkCustomAttributes::Attribute*>(p)->~Attribute();
}
extern const hkTypeInfo hkCustomAttributesAttributeTypeInfo;
const hkTypeInfo hkCustomAttributesAttributeTypeInfo(
	"hkCustomAttributesAttribute",
	"!hkCustomAttributes::Attribute",
	HK_NULL,
	cleanupLoadedObjecthkCustomAttributesAttribute,
	HK_NULL,
	sizeof(hkCustomAttributes::Attribute)
	);
#endif

//
// Class hkCustomAttributes
//
const hkInternalClassMember hkCustomAttributes::Members[] =
{
	{ "attributes", &hkCustomAttributesAttributeClass, HK_NULL, hkClassMember::TYPE_SIMPLEARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkCustomAttributes,m_attributes), HK_NULL }
};
extern const hkClass hkCustomAttributesClass;
const hkClass hkCustomAttributesClass(
	"hkCustomAttributes",
	HK_NULL, // parent
	sizeof(::hkCustomAttributes),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkCustomAttributes::Members),
	HK_COUNT_OF(hkCustomAttributes::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkCustomAttributes::staticClass()
{
	return hkCustomAttributesClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkCustomAttributes*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkCustomAttributes(void* p)
{
	static_cast<hkCustomAttributes*>(p)->~hkCustomAttributes();
}
extern const hkTypeInfo hkCustomAttributesTypeInfo;
const hkTypeInfo hkCustomAttributesTypeInfo(
	"hkCustomAttributes",
	"!hkCustomAttributes",
	HK_NULL,
	cleanupLoadedObjecthkCustomAttributes,
	HK_NULL,
	sizeof(hkCustomAttributes)
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
