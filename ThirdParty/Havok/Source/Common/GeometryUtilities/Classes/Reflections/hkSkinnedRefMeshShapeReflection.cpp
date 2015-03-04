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

// Generated from 'Common/GeometryUtilities/Mesh/Skin/hkSkinnedRefMeshShape.h'
#include <Common/GeometryUtilities/hkGeometryUtilities.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/GeometryUtilities/Mesh/Skin/hkSkinnedRefMeshShape.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkSkinnedMeshShapeClass;
extern const hkClass hkVector4fClass;

//
// Class hkSkinnedRefMeshShape
//
extern const hkClass hkMeshShapeClass;

const hkInternalClassMember hkSkinnedRefMeshShape::Members[] =
{
	{ "skinnedMeshShape", &hkSkinnedMeshShapeClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkSkinnedRefMeshShape,m_skinnedMeshShape), HK_NULL },
	{ "bones", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_INT16, 0, 0, HK_OFFSET_OF(hkSkinnedRefMeshShape,m_bones), HK_NULL },
	{ "localFromRootTransforms", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_VECTOR4, 0, 0, HK_OFFSET_OF(hkSkinnedRefMeshShape,m_localFromRootTransforms), HK_NULL },
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkSkinnedRefMeshShape,m_name), HK_NULL }
};
extern const hkClass hkSkinnedRefMeshShapeClass;
const hkClass hkSkinnedRefMeshShapeClass(
	"hkSkinnedRefMeshShape",
	&hkMeshShapeClass, // parent
	sizeof(::hkSkinnedRefMeshShape),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkSkinnedRefMeshShape::Members),
	HK_COUNT_OF(hkSkinnedRefMeshShape::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkSkinnedRefMeshShape::staticClass()
{
	return hkSkinnedRefMeshShapeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkSkinnedRefMeshShape*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkSkinnedRefMeshShape(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkSkinnedRefMeshShape(f);
}
static void HK_CALL cleanupLoadedObjecthkSkinnedRefMeshShape(void* p)
{
	static_cast<hkSkinnedRefMeshShape*>(p)->~hkSkinnedRefMeshShape();
}
static const void* HK_CALL getVtablehkSkinnedRefMeshShape()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkSkinnedRefMeshShape).hash_code()));
	#else
	return ((const void*)(typeid(hkSkinnedRefMeshShape).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkSkinnedRefMeshShape)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkSkinnedRefMeshShape(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkSkinnedRefMeshShapeTypeInfo;
const hkTypeInfo hkSkinnedRefMeshShapeTypeInfo(
	"hkSkinnedRefMeshShape",
	"!hkSkinnedRefMeshShape",
	finishLoadedObjecthkSkinnedRefMeshShape,
	cleanupLoadedObjecthkSkinnedRefMeshShape,
	getVtablehkSkinnedRefMeshShape(),
	sizeof(hkSkinnedRefMeshShape)
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
