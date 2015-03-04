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

// Generated from 'Common/Serialize/Util/hkRootLevelContainer.h'
#include <Common/Serialize/hkSerialize.h>
#include <Common/Base/Reflection/hkClass.h>
#include <Common/Base/Reflection/hkInternalClassMember.h>
#include <Common/Base/Reflection/hkTypeInfo.h>
#include <Common/Base/Reflection/Attributes/hkAttributes.h>
#include <Common/Serialize/Util/hkRootLevelContainer.h>
#define True true
#define False false


// External pointer and enum types
extern const hkClass hkReferencedObjectClass;
extern const hkClass hkRootLevelContainerNamedVariantClass;

//
// Class hkRootLevelContainer::NamedVariant
//
const hkInternalClassMember hkRootLevelContainer::NamedVariant::Members[] =
{
	{ "name", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkRootLevelContainer::NamedVariant,m_name), HK_NULL },
	{ "className", HK_NULL, HK_NULL, hkClassMember::TYPE_STRINGPTR, hkClassMember::TYPE_VOID, 0, 0, HK_OFFSET_OF(hkRootLevelContainer::NamedVariant,m_className), HK_NULL },
	{ "variant", &hkReferencedObjectClass, HK_NULL, hkClassMember::TYPE_POINTER, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkRootLevelContainer::NamedVariant,m_variant), HK_NULL }
};
const hkClass hkRootLevelContainerNamedVariantClass(
	"hkRootLevelContainerNamedVariant",
	HK_NULL, // parent
	sizeof(hkRootLevelContainer::NamedVariant),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkRootLevelContainer::NamedVariant::Members),
	HK_COUNT_OF(hkRootLevelContainer::NamedVariant::Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(1) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkRootLevelContainer::NamedVariant::staticClass()
{
	return hkRootLevelContainerNamedVariantClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkRootLevelContainer::NamedVariant*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkRootLevelContainerNamedVariant(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkRootLevelContainer::NamedVariant(f);
}
static void HK_CALL cleanupLoadedObjecthkRootLevelContainerNamedVariant(void* p)
{
	static_cast<hkRootLevelContainer::NamedVariant*>(p)->~NamedVariant();
}
extern const hkTypeInfo hkRootLevelContainerNamedVariantTypeInfo;
const hkTypeInfo hkRootLevelContainerNamedVariantTypeInfo(
	"hkRootLevelContainerNamedVariant",
	"!hkRootLevelContainer::NamedVariant",
	finishLoadedObjecthkRootLevelContainerNamedVariant,
	cleanupLoadedObjecthkRootLevelContainerNamedVariant,
	HK_NULL,
	sizeof(hkRootLevelContainer::NamedVariant)
	);
#endif

//
// Class hkRootLevelContainer
//
static const hkInternalClassMember hkRootLevelContainerClass_Members[] =
{
	{ "namedVariants", &hkRootLevelContainerNamedVariantClass, HK_NULL, hkClassMember::TYPE_ARRAY, hkClassMember::TYPE_STRUCT, 0, 0, HK_OFFSET_OF(hkRootLevelContainer,m_namedVariants), HK_NULL }
};
extern const hkClass hkRootLevelContainerClass;
const hkClass hkRootLevelContainerClass(
	"hkRootLevelContainer",
	HK_NULL, // parent
	sizeof(::hkRootLevelContainer),
	HK_NULL,
	0, // interfaces
	HK_NULL,
	0, // enums
	reinterpret_cast<const hkClassMember*>(hkRootLevelContainerClass_Members),
	HK_COUNT_OF(hkRootLevelContainerClass_Members),
	HK_NULL, // defaults
	HK_NULL, // attributes
	0, // flags
	hkUint32(0) // version
	);
#ifndef HK_HKCLASS_DEFINITION_ONLY
const hkClass& HK_CALL hkRootLevelContainer::staticClass()
{
	return hkRootLevelContainerClass;
}
HK_COMPILE_TIME_ASSERT2( \
	sizeof(hkIsVirtual(static_cast<hkRootLevelContainer*>(0))) == sizeof(hkBool::CompileTimeFalseType), \
	REFLECTION_PARSER_VTABLE_DETECTION_FAILED );
static void HK_CALL finishLoadedObjecthkRootLevelContainer(void* p, int finishing = 1)
{
	hkFinishLoadedObjectFlag f;
	f.m_finishing = finishing;
	new (p) hkRootLevelContainer(f);
}
static void HK_CALL cleanupLoadedObjecthkRootLevelContainer(void* p)
{
	static_cast<hkRootLevelContainer*>(p)->~hkRootLevelContainer();
}
extern const hkTypeInfo hkRootLevelContainerTypeInfo;
const hkTypeInfo hkRootLevelContainerTypeInfo(
	"hkRootLevelContainer",
	"!hkRootLevelContainer",
	finishLoadedObjecthkRootLevelContainer,
	cleanupLoadedObjecthkRootLevelContainer,
	HK_NULL,
	sizeof(hkRootLevelContainer)
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
