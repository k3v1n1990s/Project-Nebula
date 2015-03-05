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

// Generated from 'Physics/Physics/Dynamics/Action/CentrifugalForce/hknpCentrifugalForceAction.h'
#include <Physics/Physics/hknpPhysics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics/Physics/Dynamics/Action/CentrifugalForce/hknpCentrifugalForceAction.h>
#define True true
#define False false


//
// Class hknpCentrifugalForceAction
//
extern const hkClass hknpUnaryActionClass;

extern const hkClass hknpCentrifugalForceActionClass;
const hkClass hknpCentrifugalForceActionClass(
	"hknpCentrifugalForceAction",
	&hknpUnaryActionClass, // parent
	sizeof(::hknpCentrifugalForceAction),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	HK_NULL,
	0,
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hknpCentrifugalForceAction::staticClass()
{
	return hknpCentrifugalForceActionClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hknpCentrifugalForceAction*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthknpCentrifugalForceAction(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hknpCentrifugalForceAction(f);
}
static void HK_CALL cleanupLoadedObjecthknpCentrifugalForceAction(void* p)
{
	static_cast<hknpCentrifugalForceAction*>(p)->~hknpCentrifugalForceAction();
}
static const void* HK_CALL getVtablehknpCentrifugalForceAction()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hknpCentrifugalForceAction).hash_code()));
	#else
	return ((const void*)(typeid(hknpCentrifugalForceAction).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hknpCentrifugalForceAction)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hknpCentrifugalForceAction(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hknpCentrifugalForceActionTypeInfo;
const hkTypeInfo hknpCentrifugalForceActionTypeInfo(
	"hknpCentrifugalForceAction",
	"!hknpCentrifugalForceAction",
	finishLoadedObjecthknpCentrifugalForceAction,
	cleanupLoadedObjecthknpCentrifugalForceAction,
	getVtablehknpCentrifugalForceAction(),
	sizeof(hknpCentrifugalForceAction)
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