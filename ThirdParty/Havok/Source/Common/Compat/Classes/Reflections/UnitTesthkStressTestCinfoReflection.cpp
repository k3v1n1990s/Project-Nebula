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

// Generated from 'Common/Compat/Deprecated/UnitTest/Xml/hkStressTestCinfo.h'
#include <Common/Compat/hkCompat.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Compat/Deprecated/UnitTest/Xml/hkStressTestCinfo.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkBoolClass;
extern const hkClass hkMatrix3fClass;
extern const hkClass hkMatrix4fClass;
extern const hkClass hkQuaternionfClass;
extern const hkClass hkRotationfClass;
extern const hkClass hkStressTestCinfoSimpleStructClass;
extern const hkClass hkStressTestCinfoStructWithArraysClass;
extern const hkClass hkStressTestCinfoStructWithVtableClass;
extern const hkClass hkTransformfClass;
extern const hkClass hkVector4fClass;
extern const hkClassEnum* hkStressTestCinfoAnEnumEnum;

//
// Enum hkStressTestCinfo::AnEnum
//
static const hkInternalClassEnumItem hkStressTestCinfoAnEnumEnumItems[] =
{
	{0, "VAL_INVALID"},
	{10, "VAL_TEN"},
	{11, "VAL_ELEVEN"},
	{20, "VAL_TWENTY"},
};
static const hkInternalClassEnum hkStressTestCinfoEnums[] = {
	{"AnEnum", hkStressTestCinfoAnEnumEnumItems, 4, HK_NULL, 0 }
};
const hkClassEnum* hkStressTestCinfoAnEnumEnum = reinterpret_cast<const hkClassEnum*>(&hkStressTestCinfoEnums[0]);

//
// Class hkStressTestCinfo::SimpleStruct
//
static const hkInternalClassMember hkStressTestCinfo_SimpleStructClass_Members[] =
{
	{ "key", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo::SimpleStruct,m_key), HK_NULL },
	{ "value", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo::SimpleStruct,m_value), HK_NULL }
};
const hkClass hkStressTestCinfoSimpleStructClass(
	"hkStressTestCinfoSimpleStruct",
	HK_NULL, // parent
	sizeof(hkStressTestCinfo::SimpleStruct),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkStressTestCinfo_SimpleStructClass_Members),
	HK_COUNT_OF(hkStressTestCinfo_SimpleStructClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkStressTestCinfo::SimpleStruct::staticClass()
{
	return hkStressTestCinfoSimpleStructClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkStressTestCinfo::SimpleStruct*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkStressTestCinfoSimpleStruct(void* p)
{
	static_cast<hkStressTestCinfo::SimpleStruct*>(p)->~SimpleStruct();
}
extern const hkTypeInfo hkStressTestCinfoSimpleStructTypeInfo;
const hkTypeInfo hkStressTestCinfoSimpleStructTypeInfo(
	"hkStressTestCinfoSimpleStruct",
	"!hkStressTestCinfo::SimpleStruct",
	HK_NULL,
	cleanupLoadedObjecthkStressTestCinfoSimpleStruct,
	HK_NULL,
	sizeof(hkStressTestCinfo::SimpleStruct)
	);
#endif

//
// Class hkStressTestCinfo::StructWithVirtualFunctions
//
static const hkInternalClassMember hkStressTestCinfo_StructWithVirtualFunctionsClass_Members[] =
{
	{ "value", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo::StructWithVirtualFunctions,m_value), HK_NULL }
};
extern const hkClass hkStressTestCinfoStructWithVirtualFunctionsClass;
const hkClass hkStressTestCinfoStructWithVirtualFunctionsClass(
	"hkStressTestCinfoStructWithVirtualFunctions",
	HK_NULL, // parent
	sizeof(hkStressTestCinfo::StructWithVirtualFunctions),
	HK_NULL,
	1, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkStressTestCinfo_StructWithVirtualFunctionsClass_Members),
	HK_COUNT_OF(hkStressTestCinfo_StructWithVirtualFunctionsClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkStressTestCinfo::StructWithVirtualFunctions::staticClass()
{
	return hkStressTestCinfoStructWithVirtualFunctionsClass;
}
#endif

//
// Class hkStressTestCinfo::StructWithVtable
//

static const hkInternalClassMember hkStressTestCinfo_StructWithVtableClass_Members[] =
{
	{ "newvalue", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo::StructWithVtable,m_newvalue), HK_NULL }
};
const hkClass hkStressTestCinfoStructWithVtableClass(
	"hkStressTestCinfoStructWithVtable",
	&hkStressTestCinfoStructWithVirtualFunctionsClass, // parent
	sizeof(hkStressTestCinfo::StructWithVtable),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkStressTestCinfo_StructWithVtableClass_Members),
	HK_COUNT_OF(hkStressTestCinfo_StructWithVtableClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkStressTestCinfo::StructWithVtable::staticClass()
{
	return hkStressTestCinfoStructWithVtableClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkStressTestCinfo::StructWithVtable*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkStressTestCinfoStructWithVtable(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkStressTestCinfo::StructWithVtable(f);
}
static void HK_CALL cleanupLoadedObjecthkStressTestCinfoStructWithVtable(void* p)
{
	static_cast<hkStressTestCinfo::StructWithVtable*>(p)->~StructWithVtable();
}
static const void* HK_CALL getVtablehkStressTestCinfoStructWithVtable()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkStressTestCinfo::StructWithVtable).hash_code()));
	#else
	return ((const void*)(typeid(hkStressTestCinfo::StructWithVtable).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkStressTestCinfo::StructWithVtable)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkStressTestCinfo::StructWithVtable(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkStressTestCinfoStructWithVtableTypeInfo;
const hkTypeInfo hkStressTestCinfoStructWithVtableTypeInfo(
	"hkStressTestCinfoStructWithVtable",
	"!hkStressTestCinfo::StructWithVtable",
	finishLoadedObjecthkStressTestCinfoStructWithVtable,
	cleanupLoadedObjecthkStressTestCinfoStructWithVtable,
	getVtablehkStressTestCinfoStructWithVtable(),
	sizeof(hkStressTestCinfo::StructWithVtable)
	);
#endif

//
// Class hkStressTestCinfo::StructWithArrays
//
static const hkInternalClassMember hkStressTestCinfo_StructWithArraysClass_Members[] =
{
	{ "anArray", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkStressTestCinfo::StructWithArrays,m_anArray), HK_NULL },
	{ "anArrayOfPointers", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_CSTRING, 0, 0, HK_OFFSET_OF(hkStressTestCinfo::StructWithArrays,m_anArrayOfPointers), HK_NULL },
	{ "anArrayOfStructs", &hkStressTestCinfoStructWithVtableClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkStressTestCinfo::StructWithArrays,m_anArrayOfStructs), HK_NULL }
};
const hkClass hkStressTestCinfoStructWithArraysClass(
	"hkStressTestCinfoStructWithArrays",
	HK_NULL, // parent
	sizeof(hkStressTestCinfo::StructWithArrays),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkStressTestCinfo_StructWithArraysClass_Members),
	HK_COUNT_OF(hkStressTestCinfo_StructWithArraysClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkStressTestCinfo::StructWithArrays::staticClass()
{
	return hkStressTestCinfoStructWithArraysClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkStressTestCinfo::StructWithArrays*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkStressTestCinfoStructWithArrays(void* p)
{
	static_cast<hkStressTestCinfo::StructWithArrays*>(p)->~StructWithArrays();
}
extern const hkTypeInfo hkStressTestCinfoStructWithArraysTypeInfo;
const hkTypeInfo hkStressTestCinfoStructWithArraysTypeInfo(
	"hkStressTestCinfoStructWithArrays",
	"!hkStressTestCinfo::StructWithArrays",
	HK_NULL,
	cleanupLoadedObjecthkStressTestCinfoStructWithArrays,
	HK_NULL,
	sizeof(hkStressTestCinfo::StructWithArrays)
	);
#endif

//
// Class hkStressTestCinfo
//
static const hkInternalClassMember hkStressTestCinfoClass_Members[] =
{
	{ "simpleBool", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleBool), HK_NULL },
	{ "simpleChar", HK_NULL, HK_NULL, hkClassMember::TYPE_CHAR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleChar), HK_NULL },
	{ "simpleInt8", HK_NULL, HK_NULL, hkClassMember::TYPE_INT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleInt8), HK_NULL },
	{ "simpleUint8", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleUint8), HK_NULL },
	{ "simpleInt16", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleInt16), HK_NULL },
	{ "simpleUint16", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleUint16), HK_NULL },
	{ "simpleInt32", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleInt32), HK_NULL },
	{ "simpleUint32", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleUint32), HK_NULL },
	{ "simpleInt64", HK_NULL, HK_NULL, hkClassMember::TYPE_INT64, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleInt64), HK_NULL },
	{ "simpleUint64", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT64, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleUint64), HK_NULL },
	{ "simpleReal", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleReal), HK_NULL },
	{ "simpleVector4", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleVector4), HK_NULL },
	{ "simpleQuaternion", HK_NULL, HK_NULL, hkClassMember::TYPE_QUATERNION, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleQuaternion), HK_NULL },
	{ "simpleMatrix3", HK_NULL, HK_NULL, hkClassMember::TYPE_MATRIX3, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleMatrix3), HK_NULL },
	{ "simpleRotation", HK_NULL, HK_NULL, hkClassMember::TYPE_ROTATION, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleRotation), HK_NULL },
	{ "simpleMatrix4", HK_NULL, HK_NULL, hkClassMember::TYPE_MATRIX4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleMatrix4), HK_NULL },
	{ "simpleTransform", HK_NULL, HK_NULL, hkClassMember::TYPE_TRANSFORM, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleTransform), HK_NULL },
	{ "optionalPtr", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_optionalPtr), HK_NULL },
	{ "simpleEnum", HK_NULL, hkStressTestCinfoAnEnumEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleEnum), HK_NULL },
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_CSTRING, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_name), HK_NULL },
	{ "metaSyntacticVariable", HK_NULL, HK_NULL, hkClassMember::TYPE_CSTRING, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_metaSyntacticVariable), HK_NULL },
	{ "simpleStruct", &hkStressTestCinfoSimpleStructClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleStruct), HK_NULL },
	{ "simpleStructCarray", &hkStressTestCinfoSimpleStructClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 6, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleStructCarray), HK_NULL },
	{ "simpleBoolPointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_BOOL, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleBoolPointer), HK_NULL },
	{ "simpleCharPointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_CHAR, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCharPointer), HK_NULL },
	{ "simpleInt8Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleInt8Pointer), HK_NULL },
	{ "simpleUint8Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleUint8Pointer), HK_NULL },
	{ "simpleInt16Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_INT16, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleInt16Pointer), HK_NULL },
	{ "simpleUint16Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleUint16Pointer), HK_NULL },
	{ "simpleInt32Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_INT32, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleInt32Pointer), HK_NULL },
	{ "simpleUint32Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleUint32Pointer), HK_NULL },
	{ "simpleInt64Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_INT64, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleInt64Pointer), HK_NULL },
	{ "simpleUint64Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_UINT64, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleUint64Pointer), HK_NULL },
	{ "simpleRealPointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleRealPointer), HK_NULL },
	{ "simpleVector4Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VECTOR4, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleVector4Pointer), HK_NULL },
	{ "simpleQuaternionPointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_QUATERNION, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleQuaternionPointer), HK_NULL },
	{ "simpleMatrix3Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_MATRIX3, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleMatrix3Pointer), HK_NULL },
	{ "simpleRotationPointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_ROTATION, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleRotationPointer), HK_NULL },
	{ "simpleMatrix4Pointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_MATRIX4, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleMatrix4Pointer), HK_NULL },
	{ "simpleTransformPointer", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_TRANSFORM, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleTransformPointer), HK_NULL },
	{ "arrayCharEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayCharEmpty), HK_NULL },
	{ "arrayInt8Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayInt8Empty), HK_NULL },
	{ "arrayUint8Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayUint8Empty), HK_NULL },
	{ "arrayInt16Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_INT16, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayInt16Empty), HK_NULL },
	{ "arrayUint16Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayUint16Empty), HK_NULL },
	{ "arrayInt32Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_INT32, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayInt32Empty), HK_NULL },
	{ "arrayUint32Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT32, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayUint32Empty), HK_NULL },
	{ "arrayInt64Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_INT64, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayInt64Empty), HK_NULL },
	{ "arrayUint64Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT64, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayUint64Empty), HK_NULL },
	{ "arrayRealEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayRealEmpty), HK_NULL },
	{ "arrayVector4Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_VECTOR4, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayVector4Empty), HK_NULL },
	{ "arrayQuaternionEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_QUATERNION, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayQuaternionEmpty), HK_NULL },
	{ "arrayMatrix3Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_MATRIX3, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayMatrix3Empty), HK_NULL },
	{ "arrayRotationEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_ROTATION, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayRotationEmpty), HK_NULL },
	{ "arrayMatrix4Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_MATRIX4, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayMatrix4Empty), HK_NULL },
	{ "arrayTransformEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_TRANSFORM, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayTransformEmpty), HK_NULL },
	{ "arrayBoolEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_BOOL, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayBoolEmpty), HK_NULL },
	{ "arrayRealWithIntializer", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_REAL, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayRealWithIntializer), HK_NULL },
	{ "arrayVector4WithIntializer", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_VECTOR4, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayVector4WithIntializer), HK_NULL },
	{ "simpleCarrayBoolEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayBoolEmpty), HK_NULL },
	{ "simpleCarrayCharEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_CHAR, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayCharEmpty), HK_NULL },
	{ "simpleCarrayInt8Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_INT8, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayInt8Empty), HK_NULL },
	{ "simpleCarrayUint8Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayUint8Empty), HK_NULL },
	{ "simpleCarrayInt16Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayInt16Empty), HK_NULL },
	{ "simpleCarrayUint16Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayUint16Empty), HK_NULL },
	{ "simpleCarrayInt32Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayInt32Empty), HK_NULL },
	{ "simpleCarrayUint32Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayUint32Empty), HK_NULL },
	{ "simpleCarrayInt64Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_INT64, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayInt64Empty), HK_NULL },
	{ "simpleCarrayUint64Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT64, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayUint64Empty), HK_NULL },
	{ "simpleCarrayRealEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayRealEmpty), HK_NULL },
	{ "simpleCarrayVector4Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayVector4Empty), HK_NULL },
	{ "simpleCarrayQuaternionEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_QUATERNION, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayQuaternionEmpty), HK_NULL },
	{ "simpleCarrayMatrix3Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_MATRIX3, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayMatrix3Empty), HK_NULL },
	{ "simpleCarrayRotationEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_ROTATION, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayRotationEmpty), HK_NULL },
	{ "simpleCarrayMatrix4Empty", HK_NULL, HK_NULL, hkClassMember::TYPE_MATRIX4, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayMatrix4Empty), HK_NULL },
	{ "simpleCarrayTransformEmpty", HK_NULL, HK_NULL, hkClassMember::TYPE_TRANSFORM, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayTransformEmpty), HK_NULL },
	{ "simpleCarrayRealOneInit", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayRealOneInit), HK_NULL },
	{ "simpleCarrayRealFullInit", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleCarrayRealFullInit), HK_NULL },
	{ "arrayStructPtrs", &hkStressTestCinfoSimpleStructClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_POINTER, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayStructPtrs), HK_NULL },
	{ "arrayStructEmpty", &hkStressTestCinfoSimpleStructClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_arrayStructEmpty), HK_NULL },
	{ "carrayStructEmpty", &hkStressTestCinfoSimpleStructClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_carrayStructEmpty), HK_NULL },
	{ "carrayStructInit", &hkStressTestCinfoSimpleStructClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 5, 0, HK_OFFSET_OF(hkStressTestCinfo,m_carrayStructInit), HK_NULL },
	{ "simpleArray", HK_NULL, HK_NULL, hkClassMember::TYPE_SIMPLEARRAY, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_simpleArray), HK_NULL },
	{ "serializeAsZero", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_serializeAsZero), HK_NULL },
	{ "serializePointerAsZero", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_serializePointerAsZero), HK_NULL },
	{ "serializeArrayAsZero", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT16, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_serializeArrayAsZero), HK_NULL },
	{ "structWithArrays", &hkStressTestCinfoStructWithArraysClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkStressTestCinfo,m_structWithArrays), HK_NULL }
};
extern const hkClass hkStressTestCinfoClass;
const hkClass hkStressTestCinfoClass(
	"hkStressTestCinfo",
	HK_NULL, // parent
	sizeof(::hkStressTestCinfo),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkStressTestCinfoEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkStressTestCinfoClass_Members),
	HK_COUNT_OF(hkStressTestCinfoClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkStressTestCinfo::staticClass()
{
	return hkStressTestCinfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkStressTestCinfo*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkStressTestCinfo(void* p)
{
	static_cast<hkStressTestCinfo*>(p)->~hkStressTestCinfo();
}
extern const hkTypeInfo hkStressTestCinfoTypeInfo;
const hkTypeInfo hkStressTestCinfoTypeInfo(
	"hkStressTestCinfo",
	"!hkStressTestCinfo",
	HK_NULL,
	cleanupLoadedObjecthkStressTestCinfo,
	HK_NULL,
	sizeof(hkStressTestCinfo)
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
