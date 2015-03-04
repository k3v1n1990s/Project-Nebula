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

// Generated from 'Physics2012/Dynamics/Entity/hkpEntity.h'
#include <Physics2012/Dynamics/hkpDynamics.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Dynamics/Entity/hkpEntity.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkLocalFrameClass;
extern const hkClass hkSpuCollisionCallbackUtilClass;
extern const hkClass hkpBreakableBodyClass;
extern const hkClass hkpConstraintInstanceClass;
extern const hkClass hkpEntityExtendedListenersClass;
extern const hkClass hkpEntitySpuCollisionCallbackClass;
extern const hkClass hkpMaterialClass;
extern const hkClass hkpMaxSizeMotionClass;
extern const hkClass hkpSimulationIslandClass;

//
// Enum hkpEntity::SpuCollisionCallbackEventFilter
//
static const hkInternalClassEnumItem hkpEntitySpuCollisionCallbackEventFilterEnumItems[] =
{
	{0, "SPU_SEND_NONE"},
	{1, "SPU_SEND_CONTACT_POINT_ADDED"},
	{2, "SPU_SEND_CONTACT_POINT_PROCESS"},
	{4, "SPU_SEND_CONTACT_POINT_REMOVED"},
	{3, "SPU_SEND_CONTACT_POINT_ADDED_OR_PROCESS"},
};
static const hkInternalClassEnum hkpEntityEnums[] = {
	{"SpuCollisionCallbackEventFilter", hkpEntitySpuCollisionCallbackEventFilterEnumItems, 5, HK_NULL, 0 }
};
const hkClassEnum* hkpEntitySpuCollisionCallbackEventFilterEnum = reinterpret_cast<const hkClassEnum*>(&hkpEntityEnums[0]);

//
// Class hkpEntity::SmallArraySerializeOverrideType
//
static const hkInternalClassMember hkpEntity_SmallArraySerializeOverrideTypeClass_Members[] =
{
	{ "data", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity::SmallArraySerializeOverrideType,m_data), HK_NULL },
	{ "size", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity::SmallArraySerializeOverrideType,m_size), HK_NULL },
	{ "capacityAndFlags", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity::SmallArraySerializeOverrideType,m_capacityAndFlags), HK_NULL }
};
extern const hkClass hkpEntitySmallArraySerializeOverrideTypeClass;
const hkClass hkpEntitySmallArraySerializeOverrideTypeClass(
	"hkpEntitySmallArraySerializeOverrideType",
	HK_NULL, // parent
	sizeof(hkpEntity::SmallArraySerializeOverrideType),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpEntity_SmallArraySerializeOverrideTypeClass_Members),
	HK_COUNT_OF(hkpEntity_SmallArraySerializeOverrideTypeClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpEntity::SmallArraySerializeOverrideType::staticClass()
{
	return hkpEntitySmallArraySerializeOverrideTypeClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpEntity::SmallArraySerializeOverrideType*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkpEntitySmallArraySerializeOverrideType(void* p)
{
	static_cast<hkpEntity::SmallArraySerializeOverrideType*>(p)->~SmallArraySerializeOverrideType();
}
extern const hkTypeInfo hkpEntitySmallArraySerializeOverrideTypeTypeInfo;
const hkTypeInfo hkpEntitySmallArraySerializeOverrideTypeTypeInfo(
	"hkpEntitySmallArraySerializeOverrideType",
	"!hkpEntity::SmallArraySerializeOverrideType",
	HK_NULL,
	cleanupLoadedObjecthkpEntitySmallArraySerializeOverrideType,
	HK_NULL,
	sizeof(hkpEntity::SmallArraySerializeOverrideType)
	);
#endif

//
// Class hkpEntity::SpuCollisionCallback
//
static const hkInternalClassMember hkpEntity_SpuCollisionCallbackClass_Members[] =
{
	{ "util", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity::SpuCollisionCallback,m_util), HK_NULL },
	{ "capacity", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity::SpuCollisionCallback,m_capacity), HK_NULL },
	{ "eventFilter", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity::SpuCollisionCallback,m_eventFilter), HK_NULL },
	{ "userFilter", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity::SpuCollisionCallback,m_userFilter), HK_NULL }
};
const hkClass hkpEntitySpuCollisionCallbackClass(
	"hkpEntitySpuCollisionCallback",
	HK_NULL, // parent
	sizeof(hkpEntity::SpuCollisionCallback),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpEntity_SpuCollisionCallbackClass_Members),
	HK_COUNT_OF(hkpEntity_SpuCollisionCallbackClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpEntity::SpuCollisionCallback::staticClass()
{
	return hkpEntitySpuCollisionCallbackClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpEntity::SpuCollisionCallback*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpEntitySpuCollisionCallback(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpEntity::SpuCollisionCallback(f);
}
static void HK_CALL cleanupLoadedObjecthkpEntitySpuCollisionCallback(void* p)
{
	static_cast<hkpEntity::SpuCollisionCallback*>(p)->~SpuCollisionCallback();
}
extern const hkTypeInfo hkpEntitySpuCollisionCallbackTypeInfo;
const hkTypeInfo hkpEntitySpuCollisionCallbackTypeInfo(
	"hkpEntitySpuCollisionCallback",
	"!hkpEntity::SpuCollisionCallback",
	finishLoadedObjecthkpEntitySpuCollisionCallback,
	cleanupLoadedObjecthkpEntitySpuCollisionCallback,
	HK_NULL,
	sizeof(hkpEntity::SpuCollisionCallback)
	);
#endif

//
// Class hkpEntity::ExtendedListeners
//
static const hkInternalClassMember hkpEntity_ExtendedListenersClass_Members[] =
{
	{ "activationListeners", &hkpEntitySmallArraySerializeOverrideTypeClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity::ExtendedListeners,m_activationListeners), HK_NULL },
	{ "entityListeners", &hkpEntitySmallArraySerializeOverrideTypeClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity::ExtendedListeners,m_entityListeners), HK_NULL }
};
const hkClass hkpEntityExtendedListenersClass(
	"hkpEntityExtendedListeners",
	HK_NULL, // parent
	sizeof(hkpEntity::ExtendedListeners),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpEntity_ExtendedListenersClass_Members),
	HK_COUNT_OF(hkpEntity_ExtendedListenersClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpEntity::ExtendedListeners::staticClass()
{
	return hkpEntityExtendedListenersClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpEntity::ExtendedListeners*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL cleanupLoadedObjecthkpEntityExtendedListeners(void* p)
{
	static_cast<hkpEntity::ExtendedListeners*>(p)->~ExtendedListeners();
}
extern const hkTypeInfo hkpEntityExtendedListenersTypeInfo;
const hkTypeInfo hkpEntityExtendedListenersTypeInfo(
	"hkpEntityExtendedListeners",
	"!hkpEntity::ExtendedListeners",
	HK_NULL,
	cleanupLoadedObjecthkpEntityExtendedListeners,
	HK_NULL,
	sizeof(hkpEntity::ExtendedListeners)
	);
#endif

//
// Class hkpEntity
//
extern const hkClass hkpWorldObjectClass;

// hkpEntity_motion attributes
static const hkDataObjectTypeAttribute hkpEntity_motion_hkDataObjectType = { "hkpMotion" };
static const hkInternalCustomAttributes::Attribute hkpEntity_motion_AttributesList[] =
{
	{ "hk.DataObjectType", &hkpEntity_motion_hkDataObjectType, &hkDataObjectTypeAttributeClass }
};
static const hkInternalCustomAttributes hkpEntity_motion_Attributes = { hkpEntity_motion_AttributesList, HK_COUNT_OF(hkpEntity_motion_AttributesList) };
const hkInternalClassMember hkpEntity::Members[] =
{
	{ "material", &hkpMaterialClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_material), HK_NULL },
	{ "limitContactImpulseUtilAndFlag", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_limitContactImpulseUtilAndFlag), HK_NULL },
	{ "damageMultiplier", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_damageMultiplier), HK_NULL },
	{ "breakableBody", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_breakableBody), HK_NULL },
	{ "solverData", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_solverData), HK_NULL },
	{ "storageIndex", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_storageIndex), HK_NULL },
	{ "contactPointCallbackDelay", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT16, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_contactPointCallbackDelay), HK_NULL },
	{ "constraintsMaster", &hkpEntitySmallArraySerializeOverrideTypeClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_constraintsMaster), HK_NULL },
	{ "constraintsSlave", &hkpConstraintInstanceClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_POINTER, 0, 0|hkClassMember::NOT_OWNED|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_constraintsSlave), HK_NULL },
	{ "constraintRuntime", HK_NULL, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_UINT8, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_constraintRuntime), HK_NULL },
	{ "simulationIsland", HK_NULL, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_simulationIsland), HK_NULL },
	{ "autoRemoveLevel", HK_NULL, HK_NULL, hkClassMember::TYPE_INT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_autoRemoveLevel), HK_NULL },
	{ "numShapeKeysInContactPointProperties", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_numShapeKeysInContactPointProperties), HK_NULL },
	{ "responseModifierFlags", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT8, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_responseModifierFlags), HK_NULL },
	{ "uid", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_uid), HK_NULL },
	{ "spuCollisionCallback", &hkpEntitySpuCollisionCallbackClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_spuCollisionCallback), HK_NULL },
	{ "motion", &hkpMaxSizeMotionClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_motion), &hkpEntity_motion_Attributes },
	{ "contactListeners", &hkpEntitySmallArraySerializeOverrideTypeClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_contactListeners), HK_NULL },
	{ "actions", &hkpEntitySmallArraySerializeOverrideTypeClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_actions), HK_NULL },
	{ "localFrame", &hkLocalFrameClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpEntity,m_localFrame), HK_NULL },
	{ "extendedListeners", &hkpEntityExtendedListenersClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpEntity,m_extendedListeners), HK_NULL },
	{ "npData", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpEntity,m_npData), HK_NULL }
};
namespace
{
	struct hkpEntity_DefaultStruct
	{
		int s_defaultOffsets[22];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		float m_damageMultiplier;
		hkUint32 m_uid;
	};
	const hkpEntity_DefaultStruct hkpEntity_Default =
	{
		{-1,-1,HK_OFFSET_OF(hkpEntity_DefaultStruct,m_damageMultiplier),-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,HK_OFFSET_OF(hkpEntity_DefaultStruct,m_uid),-1,-1,-1,-1,-1,-1,-1},
		1,0xffffffff
	};
}
extern const hkClass hkpEntityClass;
const hkClass hkpEntityClass(
	"hkpEntity",
	&hkpWorldObjectClass, // parent
	sizeof(::hkpEntity),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpEntityEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkpEntity::Members),
	HK_COUNT_OF(hkpEntity::Members),
	&hkpEntity_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(3) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpEntity::staticClass()
{
	return hkpEntityClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpEntity*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpEntity(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpEntity(f);
}
static void HK_CALL cleanupLoadedObjecthkpEntity(void* p)
{
	static_cast<hkpEntity*>(p)->~hkpEntity();
}
static const void* HK_CALL getVtablehkpEntity()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpEntity).hash_code()));
	#else
	return ((const void*)(typeid(hkpEntity).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpEntity)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpEntity(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpEntityTypeInfo;
const hkTypeInfo hkpEntityTypeInfo(
	"hkpEntity",
	"!hkpEntity",
	finishLoadedObjecthkpEntity,
	cleanupLoadedObjecthkpEntity,
	getVtablehkpEntity(),
	sizeof(hkpEntity)
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
