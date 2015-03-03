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

// Generated from 'Physics2012/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.h'
#include <Physics2012/Collide/hkpCollide.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpMoppCodeClass;
extern const hkClass hkpSingleShapeContainerClass;

//
// Class hkMoppBvTreeShapeBase
//
extern const hkClass hkpBvTreeShapeClass;

static const hkInternalClassMember hkMoppBvTreeShapeBaseClass_Members[] =
{
	{ "code", &hkpMoppCodeClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkMoppBvTreeShapeBase,m_code), HK_NULL },
	{ "moppData", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkMoppBvTreeShapeBase,m_moppData), HK_NULL },
	{ "moppDataSize", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkMoppBvTreeShapeBase,m_moppDataSize), HK_NULL },
	{ "codeInfoCopy", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkMoppBvTreeShapeBase,m_codeInfoCopy), HK_NULL }
};
extern const hkClass hkMoppBvTreeShapeBaseClass;
const hkClass hkMoppBvTreeShapeBaseClass(
	"hkMoppBvTreeShapeBase",
	&hkpBvTreeShapeClass, // parent
	sizeof(::hkMoppBvTreeShapeBase),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkMoppBvTreeShapeBaseClass_Members),
	HK_COUNT_OF(hkMoppBvTreeShapeBaseClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkMoppBvTreeShapeBase::staticClass()
{
	return hkMoppBvTreeShapeBaseClass;
}
#endif

//
// Class hkpMoppBvTreeShape
//

const hkInternalClassMember hkpMoppBvTreeShape::Members[] =
{
	{ "child", &hkpSingleShapeContainerClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpMoppBvTreeShape,m_child), HK_NULL },
	{ "childSize", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpMoppBvTreeShape,m_childSize), HK_NULL }
};
extern const hkClass hkpMoppBvTreeShapeClass;
const hkClass hkpMoppBvTreeShapeClass(
	"hkpMoppBvTreeShape",
	&hkMoppBvTreeShapeBaseClass, // parent
	sizeof(::hkpMoppBvTreeShape),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpMoppBvTreeShape::Members),
	HK_COUNT_OF(hkpMoppBvTreeShape::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpMoppBvTreeShape::staticClass()
{
	return hkpMoppBvTreeShapeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpMoppBvTreeShape*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpMoppBvTreeShape(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpMoppBvTreeShape(f);
}
static void HK_CALL cleanupLoadedObjecthkpMoppBvTreeShape(void* p)
{
	static_cast<hkpMoppBvTreeShape*>(p)->~hkpMoppBvTreeShape();
}
static const void* HK_CALL getVtablehkpMoppBvTreeShape()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpMoppBvTreeShape).hash_code()));
	#else
	return ((const void*)(typeid(hkpMoppBvTreeShape).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpMoppBvTreeShape)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpMoppBvTreeShape(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpMoppBvTreeShapeTypeInfo;
const hkTypeInfo hkpMoppBvTreeShapeTypeInfo(
	"hkpMoppBvTreeShape",
	"!hkpMoppBvTreeShape",
	finishLoadedObjecthkpMoppBvTreeShape,
	cleanupLoadedObjecthkpMoppBvTreeShape,
	getVtablehkpMoppBvTreeShape(),
	sizeof(hkpMoppBvTreeShape)
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