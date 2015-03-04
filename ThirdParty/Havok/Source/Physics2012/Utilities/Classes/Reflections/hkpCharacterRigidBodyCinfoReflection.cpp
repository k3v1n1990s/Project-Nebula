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

// Generated from 'Physics2012/Utilities/CharacterControl/CharacterRigidBody/hkpCharacterRigidBodyCinfo.h'
#include <Common/Base/hkBase.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Utilities/CharacterControl/CharacterRigidBody/hkpCharacterRigidBodyCinfo.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpShapeClass;

//
// Class hkpCharacterRigidBodyCinfo
//
extern const hkClass hkpCharacterControllerCinfoClass;

// hkpCharacterRigidBodyCinfo_collisionFilterInfo attributes
static const hkUiAttribute hkpCharacterRigidBodyCinfo_collisionFilterInfo_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_collisionFilterInfo_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterRigidBodyCinfo_collisionFilterInfo_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_collisionFilterInfo_Attributes = { hkpCharacterRigidBodyCinfo_collisionFilterInfo_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_collisionFilterInfo_AttributesList) };
// hkpCharacterRigidBodyCinfo_shape attributes
static const hkUiAttribute hkpCharacterRigidBodyCinfo_shape_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_shape_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterRigidBodyCinfo_shape_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_shape_Attributes = { hkpCharacterRigidBodyCinfo_shape_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_shape_AttributesList) };
// hkpCharacterRigidBodyCinfo_position attributes
static const hkUiAttribute hkpCharacterRigidBodyCinfo_position_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_position_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterRigidBodyCinfo_position_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_position_Attributes = { hkpCharacterRigidBodyCinfo_position_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_position_AttributesList) };
// hkpCharacterRigidBodyCinfo_rotation attributes
static const hkUiAttribute hkpCharacterRigidBodyCinfo_rotation_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_rotation_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterRigidBodyCinfo_rotation_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_rotation_Attributes = { hkpCharacterRigidBodyCinfo_rotation_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_rotation_AttributesList) };
// hkpCharacterRigidBodyCinfo_mass attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_mass_hkRangeReal( 0.000000f, 1000.000000f, 0.000000f, 1000.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_mass_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_mass_hkDescription = { "The character rigid body mass." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_mass_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_mass_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_mass_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_mass_Attributes = { hkpCharacterRigidBodyCinfo_mass_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_mass_AttributesList) };
// hkpCharacterRigidBodyCinfo_friction attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_friction_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_friction_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_friction_hkDescription = { "The friction of the character rigid body." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_friction_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_friction_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_friction_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_friction_Attributes = { hkpCharacterRigidBodyCinfo_friction_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_friction_AttributesList) };
// hkpCharacterRigidBodyCinfo_maxLinearVelocity attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_maxLinearVelocity_hkRangeReal( 0.000000f, 100.000000f, 0.000000f, 100.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_maxLinearVelocity_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_maxLinearVelocity_hkDescription = { "The maximum linear velocity of the character rigid body." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_maxLinearVelocity_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_maxLinearVelocity_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_maxLinearVelocity_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_maxLinearVelocity_Attributes = { hkpCharacterRigidBodyCinfo_maxLinearVelocity_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_maxLinearVelocity_AttributesList) };
// hkpCharacterRigidBodyCinfo_allowedPenetrationDepth attributes
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_allowedPenetrationDepth_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_allowedPenetrationDepth_hkDescription = { "The maximum allowed penetration for this object. The default is -0.1. This is a hint to the engine to see how much CPU the engine should invest to keep this object from penetrating. A good choice is 5% - 20% of the smallest diameter of the object." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_allowedPenetrationDepth_AttributesList[] =
{
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_allowedPenetrationDepth_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_allowedPenetrationDepth_Attributes = { hkpCharacterRigidBodyCinfo_allowedPenetrationDepth_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_allowedPenetrationDepth_AttributesList) };
// hkpCharacterRigidBodyCinfo_up attributes
static const hkUiAttribute hkpCharacterRigidBodyCinfo_up_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_up_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterRigidBodyCinfo_up_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_up_Attributes = { hkpCharacterRigidBodyCinfo_up_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_up_AttributesList) };
// hkpCharacterRigidBodyCinfo_maxSlope attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_maxSlope_hkRangeReal( 0.000000f, 1.570796f, 0.000000f, 1.570796f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_maxSlope_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_maxSlope_hkDescription = { "The maximum slope that the character can walk up. This angle is measured in radians from the horizontal. The default value is pi / 3." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_maxSlope_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_maxSlope_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_maxSlope_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_maxSlope_Attributes = { hkpCharacterRigidBodyCinfo_maxSlope_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_maxSlope_AttributesList) };
// hkpCharacterRigidBodyCinfo_maxForce attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_maxForce_hkRangeReal( 0.000000f, 100000.000000f, 0.000000f, 100000.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_maxForce_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_maxForce_hkDescription = { " The maximum force of character." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_maxForce_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_maxForce_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_maxForce_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_maxForce_Attributes = { hkpCharacterRigidBodyCinfo_maxForce_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_maxForce_AttributesList) };
// hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_hkRangeReal( 0.000000f, 100.000000f, 0.000000f, 100.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_hkDescription = { "If the character's shape is a capsule, then this is used to define the height of a region around its center where we redirect contact point normals. The region extends from above the capsule's upper vertex to below the lower vertex by this height, expressed as a factor of the capsule's radius." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_Attributes = { hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_AttributesList) };
// hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkRangeReal( 0.000000f, 100.000000f, 0.000000f, 100.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkDescription = { "The maximum speed for the simplex solver." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_Attributes = { hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_AttributesList) };
// hkpCharacterRigidBodyCinfo_supportDistance attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_supportDistance_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_supportDistance_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_supportDistance_hkDescription = { "A character is considered supported if it is less than this distance above its supporting planes." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_supportDistance_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_supportDistance_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_supportDistance_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_supportDistance_Attributes = { hkpCharacterRigidBodyCinfo_supportDistance_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_supportDistance_AttributesList) };
// hkpCharacterRigidBodyCinfo_hardSupportDistance attributes
static const hkRangeRealAttribute hkpCharacterRigidBodyCinfo_hardSupportDistance_hkRangeReal( 0.000000f, 1.000000f, 0.000000f, 1.000000f );
#ifdef HK_CONFIG_STRIP_hkDescription
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_hardSupportDistance_hkDescription = { HK_NULL };
#else
static const hkDescriptionAttribute hkpCharacterRigidBodyCinfo_hardSupportDistance_hkDescription = { "A character should keep falling until it is this distance or less from its supporting planes." };
#endif
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_hardSupportDistance_AttributesList[] =
{
	{ "hk.RangeReal", &hkpCharacterRigidBodyCinfo_hardSupportDistance_hkRangeReal, &hkRangeRealAttributeClass },
	{ "hk.Description", &hkpCharacterRigidBodyCinfo_hardSupportDistance_hkDescription, &hkDescriptionAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_hardSupportDistance_Attributes = { hkpCharacterRigidBodyCinfo_hardSupportDistance_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_hardSupportDistance_AttributesList) };
// hkpCharacterRigidBodyCinfo_vdbColor attributes
static const hkUiAttribute hkpCharacterRigidBodyCinfo_vdbColor_hkUi = { False, hkUiAttribute::NONE, "", "", "", false, false, false };
static const hkInternalCustomAttributes::Attribute hkpCharacterRigidBodyCinfo_vdbColor_AttributesList[] =
{
	{ "hk.Ui", &hkpCharacterRigidBodyCinfo_vdbColor_hkUi, &hkUiAttributeClass }
};
static const hkInternalCustomAttributes hkpCharacterRigidBodyCinfo_vdbColor_Attributes = { hkpCharacterRigidBodyCinfo_vdbColor_AttributesList, HK_COUNT_OF(hkpCharacterRigidBodyCinfo_vdbColor_AttributesList) };
static const hkInternalClassMember hkpCharacterRigidBodyCinfoClass_Members[] =
{
	{ "collisionFilterInfo", HK_NULL, HK_NULL, hkClassMember::TYPE_UINT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_collisionFilterInfo), &hkpCharacterRigidBodyCinfo_collisionFilterInfo_Attributes },
	{ "shape", &hkpShapeClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_shape), &hkpCharacterRigidBodyCinfo_shape_Attributes },
	{ "position", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_position), &hkpCharacterRigidBodyCinfo_position_Attributes },
	{ "rotation", HK_NULL, HK_NULL, hkClassMember::TYPE_QUATERNION, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_rotation), &hkpCharacterRigidBodyCinfo_rotation_Attributes },
	{ "mass", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_mass), &hkpCharacterRigidBodyCinfo_mass_Attributes },
	{ "friction", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_friction), &hkpCharacterRigidBodyCinfo_friction_Attributes },
	{ "maxLinearVelocity", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_maxLinearVelocity), &hkpCharacterRigidBodyCinfo_maxLinearVelocity_Attributes },
	{ "allowedPenetrationDepth", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_allowedPenetrationDepth), &hkpCharacterRigidBodyCinfo_allowedPenetrationDepth_Attributes },
	{ "up", HK_NULL, HK_NULL, hkClassMember::TYPE_VECTOR4, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_up), &hkpCharacterRigidBodyCinfo_up_Attributes },
	{ "maxSlope", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_maxSlope), &hkpCharacterRigidBodyCinfo_maxSlope_Attributes },
	{ "maxForce", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_maxForce), &hkpCharacterRigidBodyCinfo_maxForce_Attributes },
	{ "unweldingHeightOffsetFactor", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_unweldingHeightOffsetFactor), &hkpCharacterRigidBodyCinfo_unweldingHeightOffsetFactor_Attributes },
	{ "maxSpeedForSimplexSolver", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_maxSpeedForSimplexSolver), &hkpCharacterRigidBodyCinfo_maxSpeedForSimplexSolver_Attributes },
	{ "supportDistance", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_supportDistance), &hkpCharacterRigidBodyCinfo_supportDistance_Attributes },
	{ "hardSupportDistance", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_hardSupportDistance), &hkpCharacterRigidBodyCinfo_hardSupportDistance_Attributes },
	{ "vdbColor", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpCharacterRigidBodyCinfo,m_vdbColor), &hkpCharacterRigidBodyCinfo_vdbColor_Attributes }
};
namespace
{
	struct hkpCharacterRigidBodyCinfo_DefaultStruct
	{
		int s_defaultOffsets[16];
		typedef hkInt8 _hkBool;
		typedef hkFloat32 _hkVector4[4];
		typedef hkReal _hkQuaternion[4];
		typedef hkReal _hkMatrix3[12];
		typedef hkReal _hkRotation[12];
		typedef hkReal _hkQsTransform[12];
		typedef hkReal _hkMatrix4[16];
		typedef hkReal _hkTransform[16];
		float m_mass;
		float m_maxLinearVelocity;
		float m_allowedPenetrationDepth;
		float m_maxSlope;
		float m_maxForce;
		float m_unweldingHeightOffsetFactor;
		float m_maxSpeedForSimplexSolver;
		float m_supportDistance;
	};
	const hkpCharacterRigidBodyCinfo_DefaultStruct hkpCharacterRigidBodyCinfo_Default =
	{
		{-1,-1,-1,-1,HK_OFFSET_OF(hkpCharacterRigidBodyCinfo_DefaultStruct,m_mass),hkClassMember::HK_CLASS_ZERO_DEFAULT,HK_OFFSET_OF(hkpCharacterRigidBodyCinfo_DefaultStruct,m_maxLinearVelocity),HK_OFFSET_OF(hkpCharacterRigidBodyCinfo_DefaultStruct,m_allowedPenetrationDepth),-1,HK_OFFSET_OF(hkpCharacterRigidBodyCinfo_DefaultStruct,m_maxSlope),HK_OFFSET_OF(hkpCharacterRigidBodyCinfo_DefaultStruct,m_maxForce),HK_OFFSET_OF(hkpCharacterRigidBodyCinfo_DefaultStruct,m_unweldingHeightOffsetFactor),HK_OFFSET_OF(hkpCharacterRigidBodyCinfo_DefaultStruct,m_maxSpeedForSimplexSolver),HK_OFFSET_OF(hkpCharacterRigidBodyCinfo_DefaultStruct,m_supportDistance),hkClassMember::HK_CLASS_ZERO_DEFAULT,-1},
		100.0,20.0,-0.1,1.04719755,1000.0,0.5,10.0,0.1
	};
}
extern const hkClass hkpCharacterRigidBodyCinfoClass;
const hkClass hkpCharacterRigidBodyCinfoClass(
	"hkpCharacterRigidBodyCinfo",
	&hkpCharacterControllerCinfoClass, // parent
	sizeof(::hkpCharacterRigidBodyCinfo),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpCharacterRigidBodyCinfoClass_Members),
	HK_COUNT_OF(hkpCharacterRigidBodyCinfoClass_Members),
	&hkpCharacterRigidBodyCinfo_Default,
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpCharacterRigidBodyCinfo::staticClass()
{
	return hkpCharacterRigidBodyCinfoClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkpCharacterRigidBodyCinfo*>(0))) == sizeof(hkBool::CompileTimeTrueType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkpCharacterRigidBodyCinfo(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkpCharacterRigidBodyCinfo(f);
}
static void HK_CALL cleanupLoadedObjecthkpCharacterRigidBodyCinfo(void* p)
{
	static_cast<hkpCharacterRigidBodyCinfo*>(p)->~hkpCharacterRigidBodyCinfo();
}
static const void* HK_CALL getVtablehkpCharacterRigidBodyCinfo()
{
	#if HK_LINKONCE_VTABLES==0
	#if HK_HASHCODE_VTABLE_REGISTRY==1
	return ((const void*)(typeid(hkpCharacterRigidBodyCinfo).hash_code()));
	#else
	return ((const void*)(typeid(hkpCharacterRigidBodyCinfo).name()));
	#endif
	#else
	union { HK_ALIGN16(void* ptr); char buf[sizeof(hkpCharacterRigidBodyCinfo)]; } u;
	hkFinishLoadedObjectFlag f;
	new (u.buf) hkpCharacterRigidBodyCinfo(f);
	return u.ptr;
	#endif
}
extern const hkTypeInfo hkpCharacterRigidBodyCinfoTypeInfo;
const hkTypeInfo hkpCharacterRigidBodyCinfoTypeInfo(
	"hkpCharacterRigidBodyCinfo",
	"!hkpCharacterRigidBodyCinfo",
	finishLoadedObjecthkpCharacterRigidBodyCinfo,
	cleanupLoadedObjecthkpCharacterRigidBodyCinfo,
	getVtablehkpCharacterRigidBodyCinfo(),
	sizeof(hkpCharacterRigidBodyCinfo)
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
