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

// Generated from 'Common/SceneData/Material/hkxTextureInplace.h'
#include <Common/SceneData/hkSceneData.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/SceneData/Material/hkxTextureInplace.h>
#define True true
#define False false


//
// Class hkxTextureInplace
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkxTextureInplaceClass_Members[] =
{
	{ "fileType", HK_NULL, HK_NULL, hkClassMember::TYPE_CHAR, hkClassMember::TYPE_VOID, 4, 0, HK_OFFSET_OF(hkxTextureInplace,m_fileType), HK_NULL },
	{ "data", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0, HK_OFFSET_OF(hkxTextureInplace,m_data), HK_NULL },
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxTextureInplace,m_name), HK_NULL },
	{ "originalFilename", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxTextureInplace,m_originalFilename), HK_NULL }
};
extern const hkClass hkxTextureInplaceClass;
const hkClass hkxTextureInplaceClass(
	"hkxTextureInplace",
	&hkReferencedObjectClass, // parent
	sizeof(::hkxTextureInplace),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkxTextureInplaceClass_Members),
	HK_COUNT_OF(hkxTextureInplaceClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkxTextureInplace::staticClass()
{
	return hkxTextureInplaceClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkxTextureInplace*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkxTextureInplace(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkxTextureInplace(f);
}
static void HK_CALL cleanupLoadedObjecthkxTextureInplace(void* p)
{
	static_cast<hkxTextureInplace*>(p)->~hkxTextureInplace();
}
static const void* HK_CALL getVtablehkxTextureInplace()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkxTextureInplace).hash_code()));
	#else
	return ((const void*)(typeid(hkxTextureInplace).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkxTextureInplace)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkxTextureInplace(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkxTextureInplaceTypeInfo;
const hkTypeInfo hkxTextureInplaceTypeInfo(
	"hkxTextureInplace",
	"!hkxTextureInplace",
	finishLoadedObjecthkxTextureInplace,
	cleanupLoadedObjecthkxTextureInplace,
	getVtablehkxTextureInplace(),
	sizeof(hkxTextureInplace)
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
