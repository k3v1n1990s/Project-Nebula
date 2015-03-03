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

// Generated from 'Common/Base/Reflection/hkClassMember.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Base/Reflection/hkClassMember.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkClassClass;
extern const hkClass hkClassEnumClass;
extern const hkClass hkCustomAttributesClass;
extern const hkClassEnum* hkClassMemberFlagValuesEnum;
extern const hkClassEnum* hkClassMemberTypeEnum;

//
// Enum hkClassMember::Type
//
static const hkInternalClassEnumItem hkClassMemberTypeEnumItems[] =
{
	{0, "TYPE_VOID"},
	{1, "TYPE_BOOL"},
	{2, "TYPE_CHAR"},
	{3, "TYPE_INT8"},
	{4, "TYPE_UINT8"},
	{5, "TYPE_INT16"},
	{6, "TYPE_UINT16"},
	{7, "TYPE_INT32"},
	{8, "TYPE_UINT32"},
	{9, "TYPE_INT64"},
	{10, "TYPE_UINT64"},
	{11, "TYPE_REAL"},
	{12, "TYPE_VECTOR4"},
	{13, "TYPE_QUATERNION"},
	{14, "TYPE_MATRIX3"},
	{15, "TYPE_ROTATION"},
	{16, "TYPE_QSTRANSFORM"},
	{17, "TYPE_MATRIX4"},
	{18, "TYPE_TRANSFORM"},
	{19, "TYPE_ZERO"},
	{20, "TYPE_POINTER"},
	{21, "TYPE_FUNCTIONPOINTER"},
	{22, "TYPE_ARRAY"},
	{23, "TYPE_INPLACEARRAY"},
	{24, "TYPE_ENUM"},
	{25, "TYPE_STRUCT"},
	{26, "TYPE_SIMPLEARRAY"},
	{27, "TYPE_HOMOGENEOUSARRAY"},
	{28, "TYPE_VARIANT"},
	{29, "TYPE_CSTRING"},
	{30, "TYPE_ULONG"},
	{31, "TYPE_FLAGS"},
	{32, "TYPE_HALF"},
	{33, "TYPE_STRINGPTR"},
	{34, "TYPE_RELARRAY"},
	{35, "TYPE_MAX"},
};

//
// Enum hkClassMember::FlagValues
//
static const hkInternalClassEnumItem hkClassMemberFlagValuesEnumItems[] =
{
	{0, "FLAGS_NONE"},
	{128, "ALIGN_8"},
	{256, "ALIGN_16"},
	{512, "NOT_OWNED"},
	{1024, "SERIALIZE_IGNORED"},
	{2048, "ALIGN_32"},
	{256, "ALIGN_REAL"},
};

//
// Enum hkClassMember::DeprecatedFlagValues
//
static const hkInternalClassEnumItem hkClassMemberDeprecatedFlagValuesEnumItems[] =
{
	{8, "DEPRECATED_SIZE_8"},
	{8, "DEPRECATED_ENUM_8"},
	{16, "DEPRECATED_SIZE_16"},
	{16, "DEPRECATED_ENUM_16"},
	{32, "DEPRECATED_SIZE_32"},
	{32, "DEPRECATED_ENUM_32"},
};
static const hkInternalClassEnum hkClassMemberEnums[] = {
	{"Type", hkClassMemberTypeEnumItems, 36, HK_NULL, 0 },
	{"FlagValues", hkClassMemberFlagValuesEnumItems, 7, HK_NULL, 0 },
	{"DeprecatedFlagValues", hkClassMemberDeprecatedFlagValuesEnumItems, 6, HK_NULL, 0 }
};
const hkClassEnum* hkClassMemberTypeEnum = reinterpret_cast<const hkClassEnum*>(&hkClassMemberEnums[0]);
const hkClassEnum* hkClassMemberFlagValuesEnum = reinterpret_cast<const hkClassEnum*>(&hkClassMemberEnums[1]);
const hkClassEnum* hkClassMemberDeprecatedFlagValuesEnum = reinterpret_cast<const hkClassEnum*>(&hkClassMemberEnums[2]);

//
// Class hkClassMember
//
const hkInternalClassMember hkClassMember::Members[] =
{
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_CSTRING, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkClassMember,m_name), HK_NULL },
	{ "class", &hkClassClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkClassMember,m_class), HK_NULL },
	{ "enum", &hkClassEnumClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkClassMember,m_enum), HK_NULL },
	{ "type", HK_NULL, hkClassMemberTypeEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkClassMember,m_type), HK_NULL },
	{ "subtype", HK_NULL, hkClassMemberTypeEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkClassMember,m_subtype), HK_NULL },
	{ "cArraySize", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkClassMember,m_cArraySize), HK_NULL },
	{ "flags", HK_NULL, hkClassMemberFlagValuesEnum, hkClassMember::TYPE_FLAGS, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkClassMember,m_flags), HK_NULL },
	{ "offset", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkClassMember,m_offset), HK_NULL },
	{ "attributes", &hkCustomAttributesClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkClassMember,m_attributes), HK_NULL }
};
extern const hkClass hkClassMemberClass;
const hkClass hkClassMemberClass(
	"hkClassMember",
	HK_NULL, // parent
	sizeof(::hkClassMember),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkClassMemberEnums),
	3, // enums
	reinterpret_cast<const hkClassMember*>(hkClassMember::Members),
	HK_COUNT_OF(hkClassMember::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkClassMember::staticClass()
{
	return hkClassMemberClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkClassMember*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkClassMember(void* p)
{
	static_cast<hkClassMember*>(p)->~hkClassMember();
}
extern const hkTypeInfo hkClassMemberTypeInfo;
const hkTypeInfo hkClassMemberTypeInfo(
	"hkClassMember",
	"!hkClassMember",
	HK_NULL,
	cleanupLoadedObjecthkClassMember,
	HK_NULL,
	sizeof(hkClassMember)
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
