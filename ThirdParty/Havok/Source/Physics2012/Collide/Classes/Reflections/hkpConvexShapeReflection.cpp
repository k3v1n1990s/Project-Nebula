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

// Generated from 'Physics2012/Collide/Shape/Convex/hkpConvexShape.h'
#include <Physics2012/Collide/hkpCollide.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Physics2012/Collide/Shape/Convex/hkpConvexShape.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkpSingleShapeContainerClass;

//
// Enum hkpConvexShape::WeldResult
//
static const hkInternalClassEnumItem hkpConvexShapeWeldResultEnumItems[] =
{
	{0, "WELD_RESULT_REJECT_CONTACT_POINT"},
	{1, "WELD_RESULT_ACCEPT_CONTACT_POINT_MODIFIED"},
	{2, "WELD_RESULT_ACCEPT_CONTACT_POINT_UNMODIFIED"},
};
static const hkInternalClassEnum hkpConvexShapeEnums[] = {
	{"WeldResult", hkpConvexShapeWeldResultEnumItems, 3, HK_NULL, 0 }
};
const hkClassEnum* hkpConvexShapeWeldResultEnum = reinterpret_cast<const hkClassEnum*>(&hkpConvexShapeEnums[0]);

//
// Class hkpConvexShape
//
extern const hkClass hkpSphereRepShapeClass;

const hkInternalClassMember hkpConvexShape::Members[] =
{
	{ "radius", HK_NULL, HK_NULL, hkClassMember::TYPE_REAL, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpConvexShape,m_radius), HK_NULL }
};
extern const hkClass hkpConvexShapeClass;
const hkClass hkpConvexShapeClass(
	"hkpConvexShape",
	&hkpSphereRepShapeClass, // parent
	sizeof(::hkpConvexShape),
	HK_NULL,
	0, // interfaces
	reinterpret_cast<const hkClassEnum*>(hkpConvexShapeEnums),
	1, // enums
	reinterpret_cast<const hkClassMember*>(hkpConvexShape::Members),
	HK_COUNT_OF(hkpConvexShape::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpConvexShape::staticClass()
{
	return hkpConvexShapeClass;
}
#endif

//
// Class hkpConvexTransformShapeBase
//

const hkInternalClassMember hkpConvexTransformShapeBase::Members[] =
{
	{ "childShape", &hkpSingleShapeContainerClass, HK_NULL, hkClassMember::TYPE_STRUCT, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkpConvexTransformShapeBase,m_childShape), HK_NULL },
	{ "childShapeSizeForSpu", HK_NULL, HK_NULL, hkClassMember::TYPE_INT32, hkClassMember::TYPE_VOID, 0, 0|hkClassMember::SERIALIZE_IGNORED, HK_OFFSET_OF(hkpConvexTransformShapeBase,m_childShapeSizeForSpu), HK_NULL }
};
extern const hkClass hkpConvexTransformShapeBaseClass;
const hkClass hkpConvexTransformShapeBaseClass(
	"hkpConvexTransformShapeBase",
	&hkpConvexShapeClass, // parent
	sizeof(::hkpConvexTransformShapeBase),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkpConvexTransformShapeBase::Members),
	HK_COUNT_OF(hkpConvexTransformShapeBase::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkpConvexTransformShapeBase::staticClass()
{
	return hkpConvexTransformShapeBaseClass;
}
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