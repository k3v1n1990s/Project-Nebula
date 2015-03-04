/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2013 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

// AI specific product patches applied to release 700.
// This file is #included by hkaiPatches_700.cpp

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshSimplificationUtilsSettings", 0)
	HK_PATCH_MEMBER_ADDED_REAL("maxArea", 1.500000f)
	HK_PATCH_MEMBER_ADDED_REAL("concaveMaxArea", 0.150000f)
	HK_PATCH_MEMBER_ADDED_REAL("minCorridorWidth", 0.400000f)
	HK_PATCH_MEMBER_ADDED_REAL("maxCorridorWidth", 0.600000f)
	HK_PATCH_MEMBER_ADDED_REAL("holeReplacementArea", 1.000000f)
	HK_PATCH_MEMBER_ADDED_REAL("maxLoopShrinkFraction", 0.750000f)
	HK_PATCH_MEMBER_ADDED_REAL("maxHeightError", 1.500000f)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshGenerationUtilsSettings", 0)
	HK_PATCH_MEMBER_ADDED("characterHeight", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("up", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("maxWalkableSlope", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("degenerateAreaThreshold", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("convexThreshold", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("edgeMatchingParams", TYPE_STRUCT, "hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 0)
	HK_PATCH_MEMBER_ADDED("minRegionArea", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("carvers", TYPE_ARRAY_OBJECT, "hkaiCarver", 0)
	HK_PATCH_MEMBER_ADDED("materialMap", TYPE_ARRAY_STRUCT, "hkaiNavMeshGenerationUtilsMaterialConstructionPair", 0)
	HK_PATCH_MEMBER_ADDED("weldInputVertices", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("weldThreshold", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("enableSimplification", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("simplificationSettings", TYPE_STRUCT, "hkaiNavMeshSimplificationUtilsSettings", 0)
	HK_PATCH_MEMBER_ADDED("loopFinderSettings", TYPE_STRUCT, "hkaiLoopFinderSettings", 0)
	HK_PATCH_MEMBER_ADDED("pruneColinearHoleVertices", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("mergeColinearEdges", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("saveInputSnapshot", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("snapshotFilename", TYPE_CSTRING, HK_NULL, 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkaiNavMeshSimplificationUtilsSettings", 0)
	HK_PATCH_DEPENDS("hkaiNavMeshGenerationUtilsMaterialConstructionPair", 0)
	HK_PATCH_DEPENDS("hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 0)
	HK_PATCH_DEPENDS("hkaiLoopFinderSettings", 0)
	HK_PATCH_DEPENDS("hkaiCarver", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiLoopFinderSettings", 0)
	HK_PATCH_MEMBER_ADDED("colinearAngle", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("colinearDistance", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("degenerateLength", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshGenerationUtilsMaterialConstructionPair", 0)
	HK_PATCH_MEMBER_ADDED("materialIndex", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("flags", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshGenerationSnapshot", 0)
	HK_PATCH_MEMBER_ADDED("geometry", TYPE_STRUCT, "hkGeometry", 0)
	HK_PATCH_MEMBER_ADDED("settings", TYPE_STRUCT, "hkaiNavMeshGenerationUtilsSettings", 0)
	HK_PATCH_DEPENDS("hkGeometry", 0)
	HK_PATCH_DEPENDS("hkaiNavMeshGenerationUtilsSettings", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 0, "hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 1)
	HK_PATCH_MEMBER_ADDED("maxOverhang", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiDirectedGraphExplicitCostEdge", 0, "hkaiDirectedGraphExplicitCostEdge", 1)
	HK_PATCH_MEMBER_ADDED("flags", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationUtilsSettings", 0, "hkaiNavMeshGenerationUtilsSettings", 1)
	HK_PATCH_MEMBER_ADDED("minDistanceToSpawnPoints", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("regionSpawnPoints", TYPE_ARRAY_VEC_4, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationUtilsSettings", 1, "hkaiNavMeshGenerationUtilsSettings", 2)
	HK_PATCH_MEMBER_ADDED("minCharacterWidth", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshEdge", 2, "hkaiNavMeshEdge", 3)
	HK_PATCH_MEMBER_RENAMED("flags", "old_flags")
	HK_PATCH_MEMBER_ADDED("flags", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("cutInfo", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_FUNCTION(hkaiNavMeshEdge_2_to_3)
	HK_PATCH_MEMBER_REMOVED("old_flags", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiPathSegment", 0)
	HK_PATCH_MEMBER_ADDED("position", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("userEdgeData", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("userEdgeType", TYPE_BYTE, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiPath", 5, "hkaiPath", 6)
	HK_PATCH_MEMBER_REMOVED("positions", TYPE_ARRAY_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("navMeshEdges", TYPE_ARRAY_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("startNode", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("goalNode", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("hasUserEdges", TYPE_BYTE, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("mediator", TYPE_OBJECT, "hkaiNavMeshQueryMediator", 0)
	HK_PATCH_MEMBER_REMOVED("navMeshManager", TYPE_OBJECT, "hkaiNavMeshManager", 0)
	HK_PATCH_MEMBER_ADDED("segments", TYPE_ARRAY_STRUCT, "hkaiPathSegment", 0)
	HK_PATCH_DEPENDS("hkaiNavMeshQueryMediator", 0)
	HK_PATCH_DEPENDS("hkaiNavMeshManager", 3)
	HK_PATCH_DEPENDS("hkaiPathSegment", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationUtilsSettings", 2, "hkaiNavMeshGenerationUtilsSettings", 3)
	HK_PATCH_MEMBER_ADDED("maxHorizontalRange", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("maxVerticalRange", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshGenerationSettings", 0)
    HK_PATCH_MEMBER_ADDED_REAL("maxHorizontalRange", 10000.000000f)
    HK_PATCH_MEMBER_ADDED_REAL("maxVerticalRange", 1000.000000f)
    HK_PATCH_MEMBER_ADDED_REAL("characterHeight", 1.750000f)
    HK_PATCH_MEMBER_ADDED("up", TYPE_VEC_4, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED_REAL("maxWalkableSlope", 1.047198f)
    HK_PATCH_MEMBER_ADDED("degenerateAreaThreshold", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("convexThreshold", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("edgeMatchingParams", TYPE_STRUCT, "hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 0)
    HK_PATCH_MEMBER_ADDED_REAL("minRegionArea", 5.000000f)
    HK_PATCH_MEMBER_ADDED("minDistanceToSpawnPoints", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("regionSpawnPoints", TYPE_ARRAY_VEC_4, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("carvers", TYPE_ARRAY_OBJECT, "hkaiCarver", 0)
    HK_PATCH_MEMBER_ADDED("materialMap", TYPE_ARRAY_STRUCT, "hkaiNavMeshGenerationSettingsMaterialConstructionPair", 0)
    HK_PATCH_MEMBER_ADDED("weldInputVertices", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("weldThreshold", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED_REAL("minCharacterWidth", 0.000000f)
    HK_PATCH_MEMBER_ADDED("enableSimplification", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("simplificationSettings", TYPE_STRUCT, "hkaiNavMeshSimplificationUtilsSettings", 0)
    HK_PATCH_MEMBER_ADDED("loopFinderSettings", TYPE_STRUCT, "hkaiLoopFinderSettings", 0)
    HK_PATCH_MEMBER_ADDED("pruneColinearHoleVertices", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("mergeColinearEdges", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("saveInputSnapshot", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("snapshotFilename", TYPE_CSTRING, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("localSettings", TYPE_ARRAY_STRUCT, "hkaiNavMeshGenerationSettingsLocalSettings", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationSettingsMaterialConstructionPair", 0)
    HK_PATCH_DEPENDS("hkBaseObject", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshSimplificationUtilsSettings", 0)
    HK_PATCH_DEPENDS("hkaiLoopFinderSettings", 0)
    HK_PATCH_DEPENDS("hkaiCarver", 0)
    HK_PATCH_DEPENDS("hkReferencedObject", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationSettingsLocalSettings", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 0)
    HK_PATCH_MEMBER_ADDED_REAL("maxStepHeight", 0.500000f)
    HK_PATCH_MEMBER_ADDED_REAL("maxSeparation", 0.100000f)
    HK_PATCH_MEMBER_ADDED_REAL("maxOverhang", 0.010000f)
    HK_PATCH_MEMBER_ADDED_REAL("cosAlignmentAngle", 0.996195f)
    HK_PATCH_MEMBER_ADDED_REAL("minEdgeOverlap", 0.020000f)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshGenerationSettingsLocalSettings", 0)
    HK_PATCH_MEMBER_ADDED("aabb", TYPE_STRUCT, "hkAabb", 0)
    HK_PATCH_MEMBER_ADDED("maxWalkableSlope", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("edgeMatchingParams", TYPE_STRUCT, "hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 0)
    HK_PATCH_MEMBER_ADDED("simplificationSettings", TYPE_STRUCT, "hkaiNavMeshSimplificationUtilsSettings", 0)
    HK_PATCH_DEPENDS("hkAabb", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshSimplificationUtilsSettings", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshGenerationSettingsMaterialConstructionPair", 0)
    HK_PATCH_MEMBER_ADDED("materialIndex", TYPE_INT, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("flags", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshCutter", 6, "hkaiNavMeshCutter", 7)
    HK_PATCH_MEMBER_REMOVED("edgeMatchParams", TYPE_STRUCT, "hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 0)
    HK_PATCH_MEMBER_ADDED("edgeMatchParams", TYPE_STRUCT, "hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 1)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 0)
    //HK_PATCH_FUNCTION(hkaiNavMeshCutter_6_to_7)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationSnapshot", 0, "hkaiNavMeshGenerationSnapshot", 1)
    HK_PATCH_MEMBER_REMOVED("settings", TYPE_STRUCT, "hkaiNavMeshGenerationUtilsSettings", 0)
    HK_PATCH_MEMBER_ADDED("settings", TYPE_STRUCT, "hkaiNavMeshGenerationSettings", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationUtilsSettings", 3)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationSettings", 0)
    //HK_PATCH_FUNCTION(hkaiNavMeshGenerationSnapshot_0_to_1)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 1, HK_NULL, HK_CLASS_REMOVED)
    HK_PATCH_MEMBER_REMOVED("maxStepHeight", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("maxSeparation", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("cosAlignmentAngle", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("minEdgeOverlap", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("maxOverhang", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationUtilsSettings", 3, HK_NULL, HK_CLASS_REMOVED)
    HK_PATCH_MEMBER_REMOVED("characterHeight", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("up", TYPE_VEC_4, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("maxWalkableSlope", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("degenerateAreaThreshold", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("convexThreshold", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("edgeMatchingParams", TYPE_STRUCT, "hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 0)
    HK_PATCH_MEMBER_REMOVED("minRegionArea", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("carvers", TYPE_ARRAY_OBJECT, "hkaiCarver", 0)
    HK_PATCH_MEMBER_REMOVED("materialMap", TYPE_ARRAY_STRUCT, "hkaiNavMeshGenerationUtilsMaterialConstructionPair", 0)
    HK_PATCH_MEMBER_REMOVED("weldInputVertices", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("weldThreshold", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("enableSimplification", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("simplificationSettings", TYPE_STRUCT, "hkaiNavMeshSimplificationUtilsSettings", 0)
    HK_PATCH_MEMBER_REMOVED("loopFinderSettings", TYPE_STRUCT, "hkaiLoopFinderSettings", 0)
    HK_PATCH_MEMBER_REMOVED("pruneColinearHoleVertices", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("mergeColinearEdges", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("saveInputSnapshot", TYPE_BYTE, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("snapshotFilename", TYPE_CSTRING, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("minDistanceToSpawnPoints", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("regionSpawnPoints", TYPE_ARRAY_VEC_4, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("minCharacterWidth", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("maxHorizontalRange", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("maxVerticalRange", TYPE_REAL, HK_NULL, 0)
    HK_PATCH_DEPENDS("hkBaseObject", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshSimplificationUtilsSettings", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationUtilsMaterialConstructionPair", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationUtilsEdgeMatchingParameters", 1)
    HK_PATCH_DEPENDS("hkaiLoopFinderSettings", 0)
    HK_PATCH_DEPENDS("hkaiCarver", 0)
    HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationUtilsMaterialConstructionPair", 0, HK_NULL, HK_CLASS_REMOVED)
    HK_PATCH_MEMBER_REMOVED("materialIndex", TYPE_INT, HK_NULL, 0)
    HK_PATCH_MEMBER_REMOVED("flags", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiNavMeshGenerationSettingsMaterialSimplificationSettingsPair", 0)
    HK_PATCH_MEMBER_ADDED("materialIndex", TYPE_INT, HK_NULL, 0)
    HK_PATCH_MEMBER_ADDED("simplificationSettings", TYPE_STRUCT, "hkaiNavMeshSimplificationUtilsSettings", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshSimplificationUtilsSettings", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationSettings", 0, "hkaiNavMeshGenerationSettings", 1)
    HK_PATCH_MEMBER_ADDED("materialSettingsMap", TYPE_ARRAY_STRUCT, "hkaiNavMeshGenerationSettingsMaterialSimplificationSettingsPair", 0)
    HK_PATCH_DEPENDS("hkaiNavMeshGenerationSettingsMaterialSimplificationSettingsPair", 0)
    //HK_PATCH_FUNCTION(hkaiNavMeshGenerationSettings_0_to_1)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationSettings", 1, "hkaiNavMeshGenerationSettings", 2)
	HK_PATCH_MEMBER_ADDED("quantizationGridSize", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationSettings", 2, "hkaiNavMeshGenerationSettings", 3)
	HK_PATCH_MEMBER_ADDED("degenerateWidthThreshold", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()


HK_PATCH_BEGIN("hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 0, "hkaiNavMeshGenerationSettingsEdgeMatchingParameters", 1)
	HK_PATCH_MEMBER_RENAMED("cosAlignmentAngle", "cosPlanarAlignmentAngle")
	HK_PATCH_MEMBER_ADDED_REAL("cosVerticalAlignmentAngle", 0.5f)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMesh", 3, "hkaiNavMesh", 4)
	HK_PATCH_MEMBER_REMOVED("userEdges", TYPE_ARRAY_STRUCT, "hkaiNavMeshUserEdge", 0)
	HK_PATCH_DEPENDS("hkaiNavMeshUserEdge", 1)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshUserEdge", 1, HK_NULL, HK_CLASS_REMOVED)
	HK_PATCH_MEMBER_REMOVED("startPoint", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("endPoint", TYPE_VEC_4, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("faceIndex", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("oppositeFace", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("data", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("oppositeSectionUid", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiDefaultLocalSteeringPathFollowingProperties", 0, "hkaiDefaultLocalSteeringPathFollowingProperties", 1)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationSettings", 3, "hkaiNavMeshGenerationSettings", 4)
	HK_PATCH_MEMBER_REMOVED("carvers", TYPE_ARRAY_OBJECT, "hkaiCarver", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkaiCarver", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN(HK_NULL, HK_CLASS_ADDED, "hkaiVolume", 0)
	HK_PATCH_PARENT_SET(HK_NULL, "hkReferencedObject")
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiCarver", 0, HK_NULL, HK_CLASS_REMOVED)
	HK_PATCH_PARENT_SET("hkReferencedObject", HK_NULL)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationSettings", 4, "hkaiNavMeshGenerationSettings", 5)
	HK_PATCH_MEMBER_ADDED("carvers", TYPE_ARRAY_OBJECT, "hkaiVolume", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkaiVolume", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshGenerationSettingsLocalSettings", 0, "hkaiNavMeshGenerationSettingsLocalSettings", 1)
	HK_PATCH_MEMBER_REMOVED("aabb", TYPE_STRUCT, "hkAabb", 0)
	HK_PATCH_MEMBER_ADDED("volume", TYPE_OBJECT, "hkaiVolume", 0)
	HK_PATCH_DEPENDS("hkAabb", 0)
	HK_PATCH_DEPENDS("hkBaseObject", 0)
	HK_PATCH_DEPENDS("hkaiVolume", 0)
	HK_PATCH_DEPENDS("hkReferencedObject", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiWorld", 9, "hkaiWorld", 10)
	HK_PATCH_MEMBER_REMOVED("cutOptions", TYPE_STRUCT, "hkaiNavMeshCutterCutOptions", 0)
	HK_PATCH_MEMBER_REMOVED("silhouetteQuantizationBits", TYPE_INT, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("silhouetteRadius", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_REMOVED("maxObjectSize", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_MEMBER_ADDED("silhouetteExtrusion", TYPE_REAL, HK_NULL, 0)
	HK_PATCH_DEPENDS("hkaiNavMeshCutterCutOptions", 0)
HK_PATCH_END()

HK_PATCH_BEGIN("hkaiNavMeshCutterCutOptions", 0, HK_NULL, HK_CLASS_REMOVED)
	HK_PATCH_MEMBER_REMOVED("cutFaceType", TYPE_INT, HK_NULL, 0)
HK_PATCH_END()


HK_PATCH_BEGIN("hkaiNavMeshSimplificationUtilsSettings", 0, "hkaiNavMeshSimplificationUtilsSettings", 1)
   HK_PATCH_MEMBER_ADDED("useHeightPartitioning", TYPE_BYTE, HK_NULL, 0)
   HK_PATCH_MEMBER_ADDED("maxPartitioningHeight", TYPE_REAL, HK_NULL, 0)
HK_PATCH_END()

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
