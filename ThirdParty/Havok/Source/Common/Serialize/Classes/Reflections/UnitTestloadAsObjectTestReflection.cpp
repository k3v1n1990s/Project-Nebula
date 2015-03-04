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

// Generated from 'Common/Serialize/UnitTest/loadAsObject/loadAsObjectTest.h'
#include <Common/Serialize/hkSerialize.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Serialize/UnitTest/loadAsObject/loadAsObjectTest.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass TestSimpleStructClass;
extern const hkClass TestSupportedVirtualSimpleDataClass;
extern const hkClass TestSupportedVirtualClass;
extern const hkClass TestUnsupportedSimpleArrayClass;
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkStringPtrClass;
extern const hkClass hkVariantClass;

//
// Class TestSimpleStruct
//
static const hkInternalClassMember TestSimpleStructClass_Members[] =
{
	{ "int", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestSimpleStruct,m_int), HK_NULL },
	{ "real", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestSimpleStruct,m_real), HK_NULL }
};
const hkClass TestSimpleStructClass(
	"TestSimpleStruct",
	HK_NULL, // parent
	sizeof(::TestSimpleStruct),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestSimpleStructClass_Members),
	HK_COUNT_OF(TestSimpleStructClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestSimpleStruct::staticClass()
{
	return TestSimpleStructClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestSimpleStruct*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjectTestSimpleStruct(void* p)
{
	static_cast<TestSimpleStruct*>(p)->~TestSimpleStruct();
}
extern const hkTypeInfo TestSimpleStructTypeInfo;
const hkTypeInfo TestSimpleStructTypeInfo(
	"TestSimpleStruct",
	"!TestSimpleStruct",
	HK_NULL,
	cleanupLoadedObjectTestSimpleStruct,
	HK_NULL,
	sizeof(TestSimpleStruct)
	);
#endif

//
// Class TestUnsupportedCstring
//
static const hkInternalClassMember TestUnsupportedCstringClass_Members[] =
{
	{ "string", HK_NULL, HK_NULL, hkClassMember::TYPE_CSTRING, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestUnsupportedCstring,m_string), HK_NULL }
};
extern const hkClass TestUnsupportedCstringClass;
const hkClass TestUnsupportedCstringClass(
	"TestUnsupportedCstring",
	HK_NULL, // parent
	sizeof(::TestUnsupportedCstring),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestUnsupportedCstringClass_Members),
	HK_COUNT_OF(TestUnsupportedCstringClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestUnsupportedCstring::staticClass()
{
	return TestUnsupportedCstringClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestUnsupportedCstring*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestUnsupportedCstring(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestUnsupportedCstring(f);
}
static void HK_CALL cleanupLoadedObjectTestUnsupportedCstring(void* p)
{
	static_cast<TestUnsupportedCstring*>(p)->~TestUnsupportedCstring();
}
extern const hkTypeInfo TestUnsupportedCstringTypeInfo;
const hkTypeInfo TestUnsupportedCstringTypeInfo(
	"TestUnsupportedCstring",
	"!TestUnsupportedCstring",
	finishLoadedObjectTestUnsupportedCstring,
	cleanupLoadedObjectTestUnsupportedCstring,
	HK_NULL,
	sizeof(TestUnsupportedCstring)
	);
#endif

//
// Class TestUnsupportedCstringArray
//
static const hkInternalClassMember TestUnsupportedCstringArrayClass_Members[] =
{
	{ "strings", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_CSTRING, 0, 0, HK_OFFSET_OF(TestUnsupportedCstringArray,m_strings), HK_NULL }
};
extern const hkClass TestUnsupportedCstringArrayClass;
const hkClass TestUnsupportedCstringArrayClass(
	"TestUnsupportedCstringArray",
	HK_NULL, // parent
	sizeof(::TestUnsupportedCstringArray),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestUnsupportedCstringArrayClass_Members),
	HK_COUNT_OF(TestUnsupportedCstringArrayClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestUnsupportedCstringArray::staticClass()
{
	return TestUnsupportedCstringArrayClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestUnsupportedCstringArray*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestUnsupportedCstringArray(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestUnsupportedCstringArray(f);
}
static void HK_CALL cleanupLoadedObjectTestUnsupportedCstringArray(void* p)
{
	static_cast<TestUnsupportedCstringArray*>(p)->~TestUnsupportedCstringArray();
}
extern const hkTypeInfo TestUnsupportedCstringArrayTypeInfo;
const hkTypeInfo TestUnsupportedCstringArrayTypeInfo(
	"TestUnsupportedCstringArray",
	"!TestUnsupportedCstringArray",
	finishLoadedObjectTestUnsupportedCstringArray,
	cleanupLoadedObjectTestUnsupportedCstringArray,
	HK_NULL,
	sizeof(TestUnsupportedCstringArray)
	);
#endif

//
// Class TestUnsupportedVariant
//
static const hkInternalClassMember TestUnsupportedVariantClass_Members[] =
{
	{ "variant", HK_NULL, HK_NULL, hkClassMember::TYPE_VARIANT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestUnsupportedVariant,m_variant), HK_NULL }
};
extern const hkClass TestUnsupportedVariantClass;
const hkClass TestUnsupportedVariantClass(
	"TestUnsupportedVariant",
	HK_NULL, // parent
	sizeof(::TestUnsupportedVariant),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestUnsupportedVariantClass_Members),
	HK_COUNT_OF(TestUnsupportedVariantClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestUnsupportedVariant::staticClass()
{
	return TestUnsupportedVariantClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestUnsupportedVariant*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestUnsupportedVariant(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestUnsupportedVariant(f);
}
static void HK_CALL cleanupLoadedObjectTestUnsupportedVariant(void* p)
{
	static_cast<TestUnsupportedVariant*>(p)->~TestUnsupportedVariant();
}
extern const hkTypeInfo TestUnsupportedVariantTypeInfo;
const hkTypeInfo TestUnsupportedVariantTypeInfo(
	"TestUnsupportedVariant",
	"!TestUnsupportedVariant",
	finishLoadedObjectTestUnsupportedVariant,
	cleanupLoadedObjectTestUnsupportedVariant,
	HK_NULL,
	sizeof(TestUnsupportedVariant)
	);
#endif

//
// Class TestUnsupportedVariantArray
//
static const hkInternalClassMember TestUnsupportedVariantArrayClass_Members[] =
{
	{ "variant", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_VARIANT, 0, 0, HK_OFFSET_OF(TestUnsupportedVariantArray,m_variant), HK_NULL }
};
extern const hkClass TestUnsupportedVariantArrayClass;
const hkClass TestUnsupportedVariantArrayClass(
	"TestUnsupportedVariantArray",
	HK_NULL, // parent
	sizeof(::TestUnsupportedVariantArray),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestUnsupportedVariantArrayClass_Members),
	HK_COUNT_OF(TestUnsupportedVariantArrayClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestUnsupportedVariantArray::staticClass()
{
	return TestUnsupportedVariantArrayClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestUnsupportedVariantArray*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestUnsupportedVariantArray(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestUnsupportedVariantArray(f);
}
static void HK_CALL cleanupLoadedObjectTestUnsupportedVariantArray(void* p)
{
	static_cast<TestUnsupportedVariantArray*>(p)->~TestUnsupportedVariantArray();
}
extern const hkTypeInfo TestUnsupportedVariantArrayTypeInfo;
const hkTypeInfo TestUnsupportedVariantArrayTypeInfo(
	"TestUnsupportedVariantArray",
	"!TestUnsupportedVariantArray",
	finishLoadedObjectTestUnsupportedVariantArray,
	cleanupLoadedObjectTestUnsupportedVariantArray,
	HK_NULL,
	sizeof(TestUnsupportedVariantArray)
	);
#endif

//
// Class TestUnsupportedSimpleArray
//
static const hkInternalClassMember TestUnsupportedSimpleArrayClass_Members[] =
{
	{ "ints", HK_NULL, HK_NULL, hkClassMember::TYPE_SIMPLEARRAY, hkClassMember::TYPE_INT32, 0, 0, HK_OFFSET_OF(TestUnsupportedSimpleArray,m_ints), HK_NULL }
};
const hkClass TestUnsupportedSimpleArrayClass(
	"TestUnsupportedSimpleArray",
	HK_NULL, // parent
	sizeof(::TestUnsupportedSimpleArray),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestUnsupportedSimpleArrayClass_Members),
	HK_COUNT_OF(TestUnsupportedSimpleArrayClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestUnsupportedSimpleArray::staticClass()
{
	return TestUnsupportedSimpleArrayClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestUnsupportedSimpleArray*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestUnsupportedSimpleArray(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestUnsupportedSimpleArray(f);
}
static void HK_CALL cleanupLoadedObjectTestUnsupportedSimpleArray(void* p)
{
	static_cast<TestUnsupportedSimpleArray*>(p)->~TestUnsupportedSimpleArray();
}
extern const hkTypeInfo TestUnsupportedSimpleArrayTypeInfo;
const hkTypeInfo TestUnsupportedSimpleArrayTypeInfo(
	"TestUnsupportedSimpleArray",
	"!TestUnsupportedSimpleArray",
	finishLoadedObjectTestUnsupportedSimpleArray,
	cleanupLoadedObjectTestUnsupportedSimpleArray,
	HK_NULL,
	sizeof(TestUnsupportedSimpleArray)
	);
#endif

//
// Class TestUnsupportedHomogeneousArray
//
static const hkInternalClassMember TestUnsupportedHomogeneousArrayClass_Members[] =
{
	{ "data", HK_NULL, HK_NULL, hkClassMember::TYPE_HOMOGENEOUSARRAY, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestUnsupportedHomogeneousArray,m_dataClass), HK_NULL }
};
extern const hkClass TestUnsupportedHomogeneousArrayClass;
const hkClass TestUnsupportedHomogeneousArrayClass(
	"TestUnsupportedHomogeneousArray",
	HK_NULL, // parent
	sizeof(::TestUnsupportedHomogeneousArray),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestUnsupportedHomogeneousArrayClass_Members),
	HK_COUNT_OF(TestUnsupportedHomogeneousArrayClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestUnsupportedHomogeneousArray::staticClass()
{
	return TestUnsupportedHomogeneousArrayClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestUnsupportedHomogeneousArray*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestUnsupportedHomogeneousArray(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestUnsupportedHomogeneousArray(f);
}
static void HK_CALL cleanupLoadedObjectTestUnsupportedHomogeneousArray(void* p)
{
	static_cast<TestUnsupportedHomogeneousArray*>(p)->~TestUnsupportedHomogeneousArray();
}
extern const hkTypeInfo TestUnsupportedHomogeneousArrayTypeInfo;
const hkTypeInfo TestUnsupportedHomogeneousArrayTypeInfo(
	"TestUnsupportedHomogeneousArray",
	"!TestUnsupportedHomogeneousArray",
	finishLoadedObjectTestUnsupportedHomogeneousArray,
	cleanupLoadedObjectTestUnsupportedHomogeneousArray,
	HK_NULL,
	sizeof(TestUnsupportedHomogeneousArray)
	);
#endif

//
// Class TestMemberOfUnsupportedClass
//
static const hkInternalClassMember TestMemberOfUnsupportedClassClass_Members[] =
{
	{ "simpleArray", &TestUnsupportedSimpleArrayClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestMemberOfUnsupportedClass,m_simpleArray), HK_NULL }
};
extern const hkClass TestMemberOfUnsupportedClassClass;
const hkClass TestMemberOfUnsupportedClassClass(
	"TestMemberOfUnsupportedClass",
	HK_NULL, // parent
	sizeof(::TestMemberOfUnsupportedClass),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestMemberOfUnsupportedClassClass_Members),
	HK_COUNT_OF(TestMemberOfUnsupportedClassClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestMemberOfUnsupportedClass::staticClass()
{
	return TestMemberOfUnsupportedClassClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestMemberOfUnsupportedClass*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestMemberOfUnsupportedClass(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestMemberOfUnsupportedClass(f);
}
static void HK_CALL cleanupLoadedObjectTestMemberOfUnsupportedClass(void* p)
{
	static_cast<TestMemberOfUnsupportedClass*>(p)->~TestMemberOfUnsupportedClass();
}
extern const hkTypeInfo TestMemberOfUnsupportedClassTypeInfo;
const hkTypeInfo TestMemberOfUnsupportedClassTypeInfo(
	"TestMemberOfUnsupportedClass",
	"!TestMemberOfUnsupportedClass",
	finishLoadedObjectTestMemberOfUnsupportedClass,
	cleanupLoadedObjectTestMemberOfUnsupportedClass,
	HK_NULL,
	sizeof(TestMemberOfUnsupportedClass)
	);
#endif

//
// Class TestSupportedVirtual::SimpleData
//
static const hkInternalClassMember TestSupportedVirtual_SimpleDataClass_Members[] =
{
	{ "real", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestSupportedVirtual::SimpleData,m_real), HK_NULL },
	{ "int", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestSupportedVirtual::SimpleData,m_int), HK_NULL }
};
const hkClass TestSupportedVirtualSimpleDataClass(
	"TestSupportedVirtualSimpleData",
	HK_NULL, // parent
	sizeof(TestSupportedVirtual::SimpleData),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestSupportedVirtual_SimpleDataClass_Members),
	HK_COUNT_OF(TestSupportedVirtual_SimpleDataClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestSupportedVirtual::SimpleData::staticClass()
{
	return TestSupportedVirtualSimpleDataClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestSupportedVirtual::SimpleData*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjectTestSupportedVirtualSimpleData(void* p)
{
	static_cast<TestSupportedVirtual::SimpleData*>(p)->~SimpleData();
}
extern const hkTypeInfo TestSupportedVirtualSimpleDataTypeInfo;
const hkTypeInfo TestSupportedVirtualSimpleDataTypeInfo(
	"TestSupportedVirtualSimpleData",
	"!TestSupportedVirtual::SimpleData",
	HK_NULL,
	cleanupLoadedObjectTestSupportedVirtualSimpleData,
	HK_NULL,
	sizeof(TestSupportedVirtual::SimpleData)
	);
#endif

//
// Class TestSupportedVirtual
//

const hkInternalClassMember TestSupportedVirtual::Members[] =
{
	{ "string", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestSupportedVirtual,m_string), HK_NULL },
	{ "stringArray", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRINGPTR, 0, 0, HK_OFFSET_OF(TestSupportedVirtual,m_stringArray), HK_NULL },
	{ "half", HK_NULL, HK_NULL, hkClassMember::TYPE_HALF, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(TestSupportedVirtual,m_half), HK_NULL },
	{ "simpleData", &TestSupportedVirtualSimpleDataClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(TestSupportedVirtual,m_simpleData), HK_NULL },
	{ "variant", &hkReferencedObjectClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(TestSupportedVirtual,m_variant), HK_NULL },
	{ "variants", &hkReferencedObjectClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_POINTER, 0, 0, HK_OFFSET_OF(TestSupportedVirtual,m_variants), HK_NULL }
};
const hkClass TestSupportedVirtualClass(
	"TestSupportedVirtual",
	&hkReferencedObjectClass, // parent
	sizeof(::TestSupportedVirtual),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestSupportedVirtual::Members),
	HK_COUNT_OF(TestSupportedVirtual::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestSupportedVirtual::staticClass()
{
	return TestSupportedVirtualClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestSupportedVirtual*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestSupportedVirtual(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestSupportedVirtual(f);
}
static void HK_CALL cleanupLoadedObjectTestSupportedVirtual(void* p)
{
	static_cast<TestSupportedVirtual*>(p)->~TestSupportedVirtual();
}
static const void* HK_CALL getVtableTestSupportedVirtual()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(TestSupportedVirtual).hash_code()));
	#else
	return ((const void*)(typeid(TestSupportedVirtual).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(TestSupportedVirtual)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) TestSupportedVirtual(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo TestSupportedVirtualTypeInfo;
const hkTypeInfo TestSupportedVirtualTypeInfo(
	"TestSupportedVirtual",
	"!TestSupportedVirtual",
	finishLoadedObjectTestSupportedVirtual,
	cleanupLoadedObjectTestSupportedVirtual,
	getVtableTestSupportedVirtual(),
	sizeof(TestSupportedVirtual)
	);
#endif

//
// Class TestSupportedNonVirtual
//
const hkInternalClassMember TestSupportedNonVirtual::Members[] =
{
	{ "object", &TestSupportedVirtualClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(TestSupportedNonVirtual,m_object), HK_NULL },
	{ "simple", &TestSimpleStructClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(TestSupportedNonVirtual,m_simple), HK_NULL }
};
extern const hkClass TestSupportedNonVirtualClass;
const hkClass TestSupportedNonVirtualClass(
	"TestSupportedNonVirtual",
	HK_NULL, // parent
	sizeof(::TestSupportedNonVirtual),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(TestSupportedNonVirtual::Members),
	HK_COUNT_OF(TestSupportedNonVirtual::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL TestSupportedNonVirtual::staticClass()
{
	return TestSupportedNonVirtualClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<TestSupportedNonVirtual*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjectTestSupportedNonVirtual(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) TestSupportedNonVirtual(f);
}
static void HK_CALL cleanupLoadedObjectTestSupportedNonVirtual(void* p)
{
	static_cast<TestSupportedNonVirtual*>(p)->~TestSupportedNonVirtual();
}
extern const hkTypeInfo TestSupportedNonVirtualTypeInfo;
const hkTypeInfo TestSupportedNonVirtualTypeInfo(
	"TestSupportedNonVirtual",
	"!TestSupportedNonVirtual",
	finishLoadedObjectTestSupportedNonVirtual,
	cleanupLoadedObjectTestSupportedNonVirtual,
	HK_NULL,
	sizeof(TestSupportedNonVirtual)
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
