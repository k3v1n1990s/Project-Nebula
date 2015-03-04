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

// Generated from 'Common/Serialize/UnitTest/PatchObjectTest/patchObjectTest.h'
#include <Common/Serialize/hkSerialize.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Serialize/UnitTest/PatchObjectTest/patchObjectTest.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass PatchObjectTestSubClassClass;
extern const hkClass PatchObjectTestExtraAddedClass;

//
// Class PatchObjectTestExtraAdded
//
static const hkInternalClassMember PatchObjectTestExtraAddedClass_Members[] =
{
	{ "extraInt", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(PatchObjectTestExtraAdded,m_extraInt), HK_NULL }
};
const hkClass PatchObjectTestExtraAddedClass(
	"PatchObjectTestExtraAdded",
	HK_NULL, // parent
	sizeof(::PatchObjectTestExtraAdded),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(PatchObjectTestExtraAddedClass_Members),
	HK_COUNT_OF(PatchObjectTestExtraAddedClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL PatchObjectTestExtraAdded::staticClass()
{
	return PatchObjectTestExtraAddedClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<PatchObjectTestExtraAdded*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjectPatchObjectTestExtraAdded(void* p)
{
	static_cast<PatchObjectTestExtraAdded*>(p)->~PatchObjectTestExtraAdded();
}
extern const hkTypeInfo PatchObjectTestExtraAddedTypeInfo;
const hkTypeInfo PatchObjectTestExtraAddedTypeInfo(
	"PatchObjectTestExtraAdded",
	"!PatchObjectTestExtraAdded",
	HK_NULL,
	cleanupLoadedObjectPatchObjectTestExtraAdded,
	HK_NULL,
	sizeof(PatchObjectTestExtraAdded)
	);
#endif

//
// Class PatchObjectTest::SubClass
//
static const hkInternalClassMember PatchObjectTest_SubClassClass_Members[] =
{
	{ "testAddedMember", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(PatchObjectTest::SubClass,m_testAddedMember), HK_NULL },
	{ "testBigMember", HK_NULL, HK_NULL, hkClassMember::TYPE_INT64, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(PatchObjectTest::SubClass,m_testBigMember), HK_NULL },
	{ "testEmbedStructAdd", &PatchObjectTestExtraAddedClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(PatchObjectTest::SubClass,m_testEmbedStructAdd), HK_NULL }
};
const hkClass PatchObjectTestSubClassClass(
	"PatchObjectTestSubClass",
	HK_NULL, // parent
	sizeof(PatchObjectTest::SubClass),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(PatchObjectTest_SubClassClass_Members),
	HK_COUNT_OF(PatchObjectTest_SubClassClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(2) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL PatchObjectTest::SubClass::staticClass()
{
	return PatchObjectTestSubClassClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<PatchObjectTest::SubClass*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjectPatchObjectTestSubClass(void* p)
{
	static_cast<PatchObjectTest::SubClass*>(p)->~SubClass();
}
extern const hkTypeInfo PatchObjectTestSubClassTypeInfo;
const hkTypeInfo PatchObjectTestSubClassTypeInfo(
	"PatchObjectTestSubClass",
	"!PatchObjectTest::SubClass",
	HK_NULL,
	cleanupLoadedObjectPatchObjectTestSubClass,
	HK_NULL,
	sizeof(PatchObjectTest::SubClass)
	);
#endif

//
// Class PatchObjectTest
//
static const hkInternalClassMember PatchObjectTestClass_Members[] =
{
	{ "firstMember", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(PatchObjectTest,m_firstMember), HK_NULL },
	{ "testStructArray", &PatchObjectTestSubClassClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(PatchObjectTest,m_testStructArray), HK_NULL },
	{ "middleMember", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(PatchObjectTest,m_middleMember), HK_NULL },
	{ "embeddedStruct", &PatchObjectTestSubClassClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(PatchObjectTest,m_embeddedStruct), HK_NULL },
	{ "lastMember", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(PatchObjectTest,m_lastMember), HK_NULL }
};
extern const hkClass PatchObjectTestClass;
const hkClass PatchObjectTestClass(
	"PatchObjectTest",
	HK_NULL, // parent
	sizeof(::PatchObjectTest),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(PatchObjectTestClass_Members),
	HK_COUNT_OF(PatchObjectTestClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL PatchObjectTest::staticClass()
{
	return PatchObjectTestClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<PatchObjectTest*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjectPatchObjectTest(void* p)
{
	static_cast<PatchObjectTest*>(p)->~PatchObjectTest();
}
extern const hkTypeInfo PatchObjectTestTypeInfo;
const hkTypeInfo PatchObjectTestTypeInfo(
	"PatchObjectTest",
	"!PatchObjectTest",
	HK_NULL,
	cleanupLoadedObjectPatchObjectTest,
	HK_NULL,
	sizeof(PatchObjectTest)
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
