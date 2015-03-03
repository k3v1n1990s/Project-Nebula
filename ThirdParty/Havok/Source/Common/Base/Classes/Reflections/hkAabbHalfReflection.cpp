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

// Generated from 'Common/Base/Types/Geometry/Aabb/hkAabbHalf.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Base/Types/Geometry/Aabb/hkAabbHalf.h>
#define True true
#define False false


//
// Class hkAabbHalf
//
static const hkInternalClassMember hkAabbHalfClass_Members[] =
{
	{ "data", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 6, 0, HK_OFFSET_OF(hkAabbHalf,m_data), HK_NULL },
	{ "extras", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 2, 0, HK_OFFSET_OF(hkAabbHalf,m_extras), HK_NULL }
};
extern const hkClass hkAabbHalfClass;
const hkClass hkAabbHalfClass(
	"hkAabbHalf",
	HK_NULL, // parent
	sizeof(::hkAabbHalf),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkAabbHalfClass_Members),
	HK_COUNT_OF(hkAabbHalfClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkAabbHalf::staticClass()
{
	return hkAabbHalfClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkAabbHalf*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkAabbHalf(void* p)
{
	static_cast<hkAabbHalf*>(p)->~hkAabbHalf();
}
extern const hkTypeInfo hkAabbHalfTypeInfo;
const hkTypeInfo hkAabbHalfTypeInfo(
	"hkAabbHalf",
	"!hkAabbHalf",
	HK_NULL,
	cleanupLoadedObjecthkAabbHalf,
	HK_NULL,
	sizeof(hkAabbHalf)
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
