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

// Generated from 'Physics2012/Vehicle/Engine/Default/hkpVehicleDefaultEngine.h'
#include <Physics2012/Vehicle/hkpVehicle.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Vehicle/Engine/Default/hkpVehicleDefaultEngine.h>
#define True true
#define False false


//
// Class hkpVehicleDefaultEngine
//
extern const hkClass hkpVehicleEngineClass;

static const hkInternalClassMember hkpVehicleDefaultEngineClass_Members[] =
{
	{ "minRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_minRPM), HK_NULL },
	{ "optRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_optRPM), HK_NULL },
	{ "maxRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_maxRPM), HK_NULL },
	{ "maxTorque", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_maxTorque), HK_NULL },
	{ "torqueFactorAtMinRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_torqueFactorAtMinRPM), HK_NULL },
	{ "torqueFactorAtMaxRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_torqueFactorAtMaxRPM), HK_NULL },
	{ "resistanceFactorAtMinRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_resistanceFactorAtMinRPM), HK_NULL },
	{ "resistanceFactorAtOptRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_resistanceFactorAtOptRPM), HK_NULL },
	{ "resistanceFactorAtMaxRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_resistanceFactorAtMaxRPM), HK_NULL },
	{ "clutchSlipRPM", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpVehicleDefaultEngine,m_clutchSlipRPM), HK_NULL }
};
extern const hkClass hkpVehicleDefaultEngineClass;
const hkClass hkpVehicleDefaultEngineClass(
	"hkpVehicleDefaultEngine",
	&hkpVehicleEngineClass, // parent
	sizeof(::hkpVehicleDefaultEngine),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpVehicleDefaultEngineClass_Members),
	HK_COUNT_OF(hkpVehicleDefaultEngineClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpVehicleDefaultEngine::staticClass()
{
	return hkpVehicleDefaultEngineClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpVehicleDefaultEngine*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpVehicleDefaultEngine(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpVehicleDefaultEngine(f);
}
static void HK_CALL cleanupLoadedObjecthkpVehicleDefaultEngine(void* p)
{
	static_cast<hkpVehicleDefaultEngine*>(p)->~hkpVehicleDefaultEngine();
}
static const void* HK_CALL getVtablehkpVehicleDefaultEngine()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpVehicleDefaultEngine).hash_code()));
	#else
	return ((const void*)(typeid(hkpVehicleDefaultEngine).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpVehicleDefaultEngine)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpVehicleDefaultEngine(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpVehicleDefaultEngineTypeInfo;
const hkTypeInfo hkpVehicleDefaultEngineTypeInfo(
	"hkpVehicleDefaultEngine",
	"!hkpVehicleDefaultEngine",
	finishLoadedObjecthkpVehicleDefaultEngine,
	cleanupLoadedObjecthkpVehicleDefaultEngine,
	getVtablehkpVehicleDefaultEngine(),
	sizeof(hkpVehicleDefaultEngine)
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
