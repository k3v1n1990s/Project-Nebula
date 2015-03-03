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

// Generated from 'Physics/Physics/Collide/Shape/hknpShapeType.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Collide/Shape/hknpShapeType.h>
#define True true
#define False false


//
// Enum hknpShapeType::Enum
//
static const hkInternalClassEnumItem hknpShapeTypeEnumEnumItems[] =
{
	{0, "CONVEX"},
	{1, "CONVEX_POLYTOPE"},
	{2, "SPHERE"},
	{3, "CAPSULE"},
	{4, "TRIANGLE"},
	{5, "COMPRESSED_MESH"},
	{6, "EXTERN_MESH"},
	{7, "STATIC_COMPOUND"},
	{8, "DYNAMIC_COMPOUND"},
	{9, "HEIGHT_FIELD"},
	{10, "COMPRESSED_HEIGHT_FIELD"},
	{11, "SCALED_CONVEX"},
	{12, "MASKED_COMPOSITE"},
	{13, "USER_0"},
	{14, "USER_1"},
	{15, "USER_2"},
	{16, "USER_3"},
	{17, "NUM_SHAPE_TYPES"},
	{18, "INVALID"},
};
static const hkInternalClassEnum hknpShapeTypeEnums[] = {
	{"Enum", hknpShapeTypeEnumEnumItems, 19, HK_NULL, 0 }
};
const hkClassEnum* hknpShapeTypeEnumEnum = reinterpret_cast<const hkClassEnum*>(&hknpShapeTypeEnums[0]);

//
// Class hknpShapeType
//
extern const hkClass hknpShapeTypeClass;
const hkClass hknpShapeTypeClass(
	"hknpShapeType",
	HK_NULL, // parent
	sizeof(::hknpShapeType),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hknpShapeTypeEnums),
	1, // enums
	HK_NULL,
	0,
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpShapeType::staticClass()
{
	return hknpShapeTypeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpShapeType*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthknpShapeType(void* p)
{
	static_cast<hknpShapeType*>(p)->~hknpShapeType();
}
extern const hkTypeInfo hknpShapeTypeTypeInfo;
const hkTypeInfo hknpShapeTypeTypeInfo(
	"hknpShapeType",
	"!hknpShapeType",
	HK_NULL,
	cleanupLoadedObjecthknpShapeType,
	HK_NULL,
	sizeof(hknpShapeType)
	);
#endif

//
// Enum hknpCollisionDispatchType::Enum
//
static const hkInternalClassEnumItem hknpCollisionDispatchTypeEnumEnumItems[] =
{
	{0, "CONVEX"},
	{1, "COMPOSITE"},
	{2, "DISTANCE_FIELD"},
	{3, "USER"},
	{4, "NUM_TYPES"},
};
static const hkInternalClassEnum hknpCollisionDispatchTypeEnums[] = {
	{"Enum", hknpCollisionDispatchTypeEnumEnumItems, 5, HK_NULL, 0 }
};
const hkClassEnum* hknpCollisionDispatchTypeEnumEnum = reinterpret_cast<const hkClassEnum*>(&hknpCollisionDispatchTypeEnums[0]);

//
// Class hknpCollisionDispatchType
//
extern const hkClass hknpCollisionDispatchTypeClass;
const hkClass hknpCollisionDispatchTypeClass(
	"hknpCollisionDispatchType",
	HK_NULL, // parent
	sizeof(::hknpCollisionDispatchType),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hknpCollisionDispatchTypeEnums),
	1, // enums
	HK_NULL,
	0,
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpCollisionDispatchType::staticClass()
{
	return hknpCollisionDispatchTypeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpCollisionDispatchType*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthknpCollisionDispatchType(void* p)
{
	static_cast<hknpCollisionDispatchType*>(p)->~hknpCollisionDispatchType();
}
extern const hkTypeInfo hknpCollisionDispatchTypeTypeInfo;
const hkTypeInfo hknpCollisionDispatchTypeTypeInfo(
	"hknpCollisionDispatchType",
	"!hknpCollisionDispatchType",
	HK_NULL,
	cleanupLoadedObjecthknpCollisionDispatchType,
	HK_NULL,
	sizeof(hknpCollisionDispatchType)
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