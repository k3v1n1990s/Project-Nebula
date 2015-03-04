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

// Generated from 'Physics2012/Collide/Shape/Convex/Cylinder/hkpCylinderShape.h'
#include <Physics2012/Collide/hkpCollide.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Collide/Shape/Convex/Cylinder/hkpCylinderShape.h>
#define True true
#define False false


//
// Enum hkpCylinderShape::VertexIdEncoding
//
static const hkInternalClassEnumItem hkpCylinderShapeVertexIdEncodingEnumItems[] =
{
	{7, "VERTEX_ID_ENCODING_IS_BASE_A_SHIFT"},
	{6, "VERTEX_ID_ENCODING_SIN_SIGN_SHIFT"},
	{5, "VERTEX_ID_ENCODING_COS_SIGN_SHIFT"},
	{4, "VERTEX_ID_ENCODING_IS_SIN_LESSER_SHIFT"},
	{15, "VERTEX_ID_ENCODING_VALUE_MASK"},
};
static const hkInternalClassEnum hkpCylinderShapeEnums[] = {
	{"VertexIdEncoding", hkpCylinderShapeVertexIdEncodingEnumItems, 5, HK_NULL, 0 }
};
const hkClassEnum* hkpCylinderShapeVertexIdEncodingEnum = reinterpret_cast<const hkClassEnum*>(&hkpCylinderShapeEnums[0]);

//
// Class hkpCylinderShape
//
extern const hkClass hkpConvexShapeClass;

const hkInternalClassMember hkpCylinderShape::Members[] =
{
	{ "cylRadius", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCylinderShape,m_cylRadius), HK_NULL },
	{ "cylBaseRadiusFactorForHeightFieldCollisions", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCylinderShape,m_cylBaseRadiusFactorForHeightFieldCollisions), HK_NULL },
	{ "vertexA", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCylinderShape,m_vertexA), HK_NULL },
	{ "vertexB", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCylinderShape,m_vertexB), HK_NULL },
	{ "perpendicular1", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCylinderShape,m_perpendicular1), HK_NULL },
	{ "perpendicular2", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCylinderShape,m_perpendicular2), HK_NULL }
};
namespace
{
	struct hkpCylinderShape_DefaultStruct
	{
		int s_defaultOffsets[6];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		float m_cylBaseRadiusFactorForHeightFieldCollisions;
	};
	const hkpCylinderShape_DefaultStruct hkpCylinderShape_Default =
	{
		{-1,HK_OFFSET_OF(hkpCylinderShape_DefaultStruct,m_cylBaseRadiusFactorForHeightFieldCollisions),-1,-1,-1,-1},
		0.8
	};
}
extern const hkClass hkpCylinderShapeClass;
const hkClass hkpCylinderShapeClass(
	"hkpCylinderShape",
	&hkpConvexShapeClass, // parent
	sizeof(::hkpCylinderShape),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpCylinderShapeEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkpCylinderShape::Members),
	HK_COUNT_OF(hkpCylinderShape::Members),
	&hkpCylinderShape_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpCylinderShape::staticClass()
{
	return hkpCylinderShapeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpCylinderShape*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpCylinderShape(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpCylinderShape(f);
}
static void HK_CALL cleanupLoadedObjecthkpCylinderShape(void* p)
{
	static_cast<hkpCylinderShape*>(p)->~hkpCylinderShape();
}
static const void* HK_CALL getVtablehkpCylinderShape()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpCylinderShape).hash_code()));
	#else
	return ((const void*)(typeid(hkpCylinderShape).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpCylinderShape)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpCylinderShape(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpCylinderShapeTypeInfo;
const hkTypeInfo hkpCylinderShapeTypeInfo(
	"hkpCylinderShape",
	"!hkpCylinderShape",
	finishLoadedObjecthkpCylinderShape,
	cleanupLoadedObjecthkpCylinderShape,
	getVtablehkpCylinderShape(),
	sizeof(hkpCylinderShape)
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
