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

// Generated from 'Common/SceneData/Light/hkxLight.h'
#include <Common/SceneData/hkSceneData.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/SceneData/Light/hkxLight.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClassEnum* hkxLightLightTypeEnum;

//
// Enum hkxLight::LightType
//
static const hkInternalClassEnumItem hkxLightLightTypeEnumItems[] =
{
	{0, "POINT_LIGHT"},
	{1, "DIRECTIONAL_LIGHT"},
	{2, "SPOT_LIGHT"},
};
static const hkInternalClassEnum hkxLightEnums[] = {
	{"LightType", hkxLightLightTypeEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hkxLightLightTypeEnum = reinterpret_cast<const hkClassEnum*>(&hkxLightEnums[0]);

//
// Class hkxLight
//
extern const hkClass hkReferencedObjectClass;

static const hkInternalClassMember hkxLightClass_Members[] =
{
	{ "type", HK_NULL, hkxLightLightTypeEnum, hkClassMember::TYPE_ENUM, hkClassMember::TYPE_INT8, 0, 0, HK_OFFSET_OF(hkxLight,m_type), HK_NULL },
	{ "position", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_position), HK_NULL },
	{ "direction", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_direction), HK_NULL },
	{ "color", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_color), HK_NULL },
	{ "angle", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_angle), HK_NULL },
	{ "range", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_range), HK_NULL },
	{ "fadeStart", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_fadeStart), HK_NULL },
	{ "fadeEnd", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_fadeEnd), HK_NULL },
	{ "decayRate", HK_NULL, HK_NULL, hkClassMember::TYPE_INT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_decayRate), HK_NULL },
	{ "intensity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_intensity), HK_NULL },
	{ "shadowCaster", HK_NULL, HK_NULL, hkClassMember::TYPE_BOOL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkxLight,m_shadowCaster), HK_NULL }
};
extern const hkClass hkxLightClass;
const hkClass hkxLightClass(
	"hkxLight",
	&hkReferencedObjectClass, // parent
	sizeof(::hkxLight),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkxLightEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkxLightClass_Members),
	HK_COUNT_OF(hkxLightClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(3) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkxLight::staticClass()
{
	return hkxLightClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkxLight*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkxLight(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkxLight(f);
}
static void HK_CALL cleanupLoadedObjecthkxLight(void* p)
{
	static_cast<hkxLight*>(p)->~hkxLight();
}
static const void* HK_CALL getVtablehkxLight()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkxLight).hash_code()));
	#else
	return ((const void*)(typeid(hkxLight).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkxLight)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkxLight(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkxLightTypeInfo;
const hkTypeInfo hkxLightTypeInfo(
	"hkxLight",
	"!hkxLight",
	finishLoadedObjecthkxLight,
	cleanupLoadedObjecthkxLight,
	getVtablehkxLight(),
	sizeof(hkxLight)
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