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

// Generated from 'Common/GeometryUtilities/Mesh/hkMeshVertexBuffer.h'
#include <Common/GeometryUtilities/hkGeometryUtilities.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/GeometryUtilities/Mesh/hkMeshVertexBuffer.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkMeshVertexBufferLockedVerticesBufferClass;
extern const hkClass hkVertexFormatElementClass;
extern const hkClassEnum* hkVertexFormatComponentTypeEnum;
extern const hkClassEnum* hkVertexFormatComponentUsageEnum;
extern const hkClassEnum* hkVertexFormatHintFlagsEnum;

//
// Enum hkVertexFormat::ComponentType
//
static const hkInternalClassEnumItem hkVertexFormatComponentTypeEnumItems[] =
{
	{0, "TYPE_NONE"},
	{1, "TYPE_INT8"},
	{2, "TYPE_UINT8"},
	{3, "TYPE_INT16"},
	{4, "TYPE_UINT16"},
	{5, "TYPE_INT32"},
	{6, "TYPE_UINT32"},
	{7, "TYPE_UINT8_DWORD"},
	{8, "TYPE_ARGB32"},
	{9, "TYPE_FLOAT16"},
	{10, "TYPE_FLOAT32"},
	{11, "TYPE_VECTOR4"},
	{12, "TYPE_LAST"},
};

//
// Enum hkVertexFormat::ComponentUsage
//
static const hkInternalClassEnumItem hkVertexFormatComponentUsageEnumItems[] =
{
	{0, "USAGE_NONE"},
	{1, "USAGE_POSITION"},
	{2, "USAGE_NORMAL"},
	{3, "USAGE_COLOR"},
	{4, "USAGE_TANGENT"},
	{5, "USAGE_BINORMAL"},
	{6, "USAGE_BLEND_MATRIX_INDEX"},
	{7, "USAGE_BLEND_WEIGHTS"},
	{8, "USAGE_BLEND_WEIGHTS_LAST_IMPLIED"},
	{9, "USAGE_TEX_COORD"},
	{10, "USAGE_POINT_SIZE"},
	{11, "USAGE_USER"},
	{12, "USAGE_LAST"},
};

//
// Enum hkVertexFormat::HintFlags
//
static const hkInternalClassEnumItem hkVertexFormatHintFlagsEnumItems[] =
{
	{1, "FLAG_READ"},
	{2, "FLAG_WRITE"},
	{4, "FLAG_DYNAMIC"},
	{8, "FLAG_NOT_SHARED"},
};

//
// Enum hkVertexFormat::SharingType
//
static const hkInternalClassEnumItem hkVertexFormatSharingTypeEnumItems[] =
{
	{0, "SHARING_ALL_SHARED"},
	{1, "SHARING_ALL_NOT_SHARED"},
	{2, "SHARING_MIXTURE"},
};
static const hkInternalClassEnum hkVertexFormatEnums[] = {
	{"ComponentType", hkVertexFormatComponentTypeEnumItems, 13, HK_NULL, 0 },
	{"ComponentUsage", hkVertexFormatComponentUsageEnumItems, 13, HK_NULL, 0 },
	{"HintFlags", hkVertexFormatHintFlagsEnumItems, 4, HK_NULL, 0 },
	{"SharingType", hkVertexFormatSharingTypeEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hkVertexFormatComponentTypeEnum = reinterpret_cast<const hkClassEnum*>(&hkVertexFormatEnums[0]);
const hkClassEnum* hkVertexFormatComponentUsageEnum = reinterpret_cast<const hkClassEnum*>(&hkVertexFormatEnums[1]);
const hkClassEnum* hkVertexFormatHintFlagsEnum = reinterpret_cast<const hkClassEnum*>(&hkVertexFormatEnums[2]);
const hkClassEnum* hkVertexFormatSharingTypeEnum = reinterpret_cast<const hkClassEnum*>(&hkVertexFormatEnums[3]);

//
// Class hkVertexFormat::Element
//
static const hkInternalClassMember hkVertexFormat_ElementClass_Members[] =
{
	{ "dataType", HK_NULL, hkVertexFormatComponentTypeEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkVertexFormat::Element,m_dataType), HK_NULL },
	{ "numValues", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkVertexFormat::Element,m_numValues), HK_NULL },
	{ "usage", HK_NULL, hkVertexFormatComponentUsageEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkVertexFormat::Element,m_usage), HK_NULL },
	{ "subUsage", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkVertexFormat::Element,m_subUsage), HK_NULL },
	{ "flags", HK_NULL, hkVertexFormatHintFlagsEnum, hkClassMember::TYPE_FLAGS, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkVertexFormat::Element,m_flags), HK_NULL },
	{ "pad", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 3, 0, HK_OFFSET_OF(hkVertexFormat::Element,m_pad), HK_NULL }
};
const hkClass hkVertexFormatElementClass(
	"hkVertexFormatElement",
	HK_NULL, // parent
	sizeof(hkVertexFormat::Element),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkVertexFormat_ElementClass_Members),
	HK_COUNT_OF(hkVertexFormat_ElementClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkVertexFormat::Element::staticClass()
{
	return hkVertexFormatElementClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkVertexFormat::Element*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkVertexFormatElement(void* p)
{
	static_cast<hkVertexFormat::Element*>(p)->~Element();
}
extern const hkTypeInfo hkVertexFormatElementTypeInfo;
const hkTypeInfo hkVertexFormatElementTypeInfo(
	"hkVertexFormatElement",
	"!hkVertexFormat::Element",
	HK_NULL,
	cleanupLoadedObjecthkVertexFormatElement,
	HK_NULL,
	sizeof(hkVertexFormat::Element)
	);
#endif

//
// Class hkVertexFormat
//
static const hkInternalClassMember hkVertexFormatClass_Members[] =
{
	{ "elements", &hkVertexFormatElementClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 32, 0, HK_OFFSET_OF(hkVertexFormat,m_elements), HK_NULL },
	{ "numElements", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkVertexFormat,m_numElements), HK_NULL }
};
extern const hkClass hkVertexFormatClass;
const hkClass hkVertexFormatClass(
	"hkVertexFormat",
	HK_NULL, // parent
	sizeof(::hkVertexFormat),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkVertexFormatEnums),
	4, // enums
	reinterpret_cast<const hkClassMember*>(hkVertexFormatClass_Members),
	HK_COUNT_OF(hkVertexFormatClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkVertexFormat::staticClass()
{
	return hkVertexFormatClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkVertexFormat*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkVertexFormat(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkVertexFormat(f);
}
static void HK_CALL cleanupLoadedObjecthkVertexFormat(void* p)
{
	static_cast<hkVertexFormat*>(p)->~hkVertexFormat();
}
extern const hkTypeInfo hkVertexFormatTypeInfo;
const hkTypeInfo hkVertexFormatTypeInfo(
	"hkVertexFormat",
	"!hkVertexFormat",
	finishLoadedObjecthkVertexFormat,
	cleanupLoadedObjecthkVertexFormat,
	HK_NULL,
	sizeof(hkVertexFormat)
	);
#endif

//
// Enum hkMeshVertexBuffer::Flags
//
static const hkInternalClassEnumItem hkMeshVertexBufferFlagsEnumItems[] =
{
	{1, "ACCESS_READ"},
	{2, "ACCESS_WRITE"},
	{3, "ACCESS_READ_WRITE"},
	{4, "ACCESS_WRITE_DISCARD"},
	{8, "ACCESS_ELEMENT_ARRAY"},
};

//
// Enum hkMeshVertexBuffer::LockResult
//
static const hkInternalClassEnumItem hkMeshVertexBufferLockResultEnumItems[] =
{
	{0, "RESULT_FAILURE"},
	{1, "RESULT_SUCCESS"},
	{2, "RESULT_IN_USE"},
};
static const hkInternalClassEnum hkMeshVertexBufferEnums[] = {
	{"Flags", hkMeshVertexBufferFlagsEnumItems, 5, HK_NULL, 0 },
	{"LockResult", hkMeshVertexBufferLockResultEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hkMeshVertexBufferFlagsEnum = reinterpret_cast<const hkClassEnum*>(&hkMeshVertexBufferEnums[0]);
const hkClassEnum* hkMeshVertexBufferLockResultEnum = reinterpret_cast<const hkClassEnum*>(&hkMeshVertexBufferEnums[1]);

//
// Class hkMeshVertexBuffer
//
extern const hkClass hkReferencedObjectClass;

extern const hkClass hkMeshVertexBufferClass;
const hkClass hkMeshVertexBufferClass(
	"hkMeshVertexBuffer",
	&hkReferencedObjectClass, // parent
	sizeof(::hkMeshVertexBuffer),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkMeshVertexBufferEnums),
	2, // enums
	HK_NULL,
	0,
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkMeshVertexBuffer::staticClass()
{
	return hkMeshVertexBufferClass;
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