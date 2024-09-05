#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Landscape
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Landscape.ERTDrawingType
	enum ERTDrawingType
	{
		ERTDrawingType__RTAtlas = 0,
		ERTDrawingType__RTAtlasToNonAtlas = 1,
		ERTDrawingType__RTNonAtlasToAtlas = 2,
		ERTDrawingType__RTNonAtlas = 3,
		ERTDrawingType__RTMips = 4,
	};


	// Enum /Script/Landscape.EHeightmapRTType
	enum EHeightmapRTType
	{
		EHeightmapRTType__HeightmapRT_CombinedAtlas = 0,
		EHeightmapRTType__HeightmapRT_CombinedNonAtlas = 1,
		EHeightmapRTType__HeightmapRT_Scratch1 = 2,
		EHeightmapRTType__HeightmapRT_Scratch2 = 3,
		EHeightmapRTType__HeightmapRT_Scratch3 = 4,
		EHeightmapRTType__HeightmapRT_BoundaryNormal = 5,
		EHeightmapRTType__HeightmapRT_Mip1 = 6,
		EHeightmapRTType__HeightmapRT_Mip2 = 7,
		EHeightmapRTType__HeightmapRT_Mip3 = 8,
		EHeightmapRTType__HeightmapRT_Mip4 = 9,
		EHeightmapRTType__HeightmapRT_Mip5 = A,
		EHeightmapRTType__HeightmapRT_Mip6 = B,
		EHeightmapRTType__HeightmapRT_Mip7 = C,
		EHeightmapRTType__HeightmapRT_Count = D,
	};


	// Enum /Script/Landscape.EWeightmapRTType
	enum EWeightmapRTType
	{
		EWeightmapRTType__WeightmapRT_Scratch_RGBA = 0,
		EWeightmapRTType__WeightmapRT_Scratch1 = 1,
		EWeightmapRTType__WeightmapRT_Scratch2 = 2,
		EWeightmapRTType__WeightmapRT_Scratch3 = 3,
		EWeightmapRTType__WeightmapRT_Mip0 = 4,
		EWeightmapRTType__WeightmapRT_Mip1 = 5,
		EWeightmapRTType__WeightmapRT_Mip2 = 6,
		EWeightmapRTType__WeightmapRT_Mip3 = 7,
		EWeightmapRTType__WeightmapRT_Mip4 = 8,
		EWeightmapRTType__WeightmapRT_Mip5 = 9,
		EWeightmapRTType__WeightmapRT_Mip6 = A,
		EWeightmapRTType__WeightmapRT_Mip7 = B,
		EWeightmapRTType__WeightmapRT_Count = C,
	};


	// Enum /Script/Landscape.ELandscapeBlendMode
	enum ELandscapeBlendMode
	{
		LSBM_AdditiveBlend = 0,
		LSBM_AlphaBlend = 1,
	};


	// Enum /Script/Landscape.ELandscapeClearMode
	enum ELandscapeClearMode
	{
		Clear_Weightmap = 1,
		Clear_Heightmap = 2,
		Clear_All = 3,
	};


	// Enum /Script/Landscape.ELandscapeToolTargetType
	enum ELandscapeToolTargetType
	{
		ELandscapeToolTargetType__Heightmap = 0,
		ELandscapeToolTargetType__Weightmap = 1,
		ELandscapeToolTargetType__Visibility = 2,
		ELandscapeToolTargetType__Invalid = 3,
	};


	// Enum /Script/Landscape.ELandscapeGizmoType
	enum ELandscapeGizmoType
	{
		LGT_None = 0,
		LGT_Height = 1,
		LGT_Weight = 2,
	};


	// Enum /Script/Landscape.ELandscapeGizmoSnapType
	enum ELandscapeGizmoSnapType
	{
		ELandscapeGizmoSnapType__None = 0,
		ELandscapeGizmoSnapType__Component = 1,
		ELandscapeGizmoSnapType__Texel = 2,
	};


	// Enum /Script/Landscape.EGrassScaling
	enum EGrassScaling
	{
		EGrassScaling__Uniform = 0,
		EGrassScaling__Free = 1,
		EGrassScaling__LockXY = 2,
	};


	// Enum /Script/Landscape.ESplineModulationColorMask
	enum ESplineModulationColorMask
	{
		ESplineModulationColorMask__Red = 0,
		ESplineModulationColorMask__Green = 1,
		ESplineModulationColorMask__Blue = 2,
		ESplineModulationColorMask__Alpha = 3,
	};


	// Enum /Script/Landscape.ELandscapeDirtyingMode
	enum ELandscapeDirtyingMode
	{
		ELandscapeDirtyingMode__Auto = 0,
		ELandscapeDirtyingMode__InLandscapeModeOnly = 1,
		ELandscapeDirtyingMode__InLandscapeModeAndUserTriggeredChanges = 2,
	};


	// Enum /Script/Landscape.LandscapeSplineMeshOrientation
	enum LandscapeSplineMeshOrientation
	{
		LSMO_XUp = 0,
		LSMO_YUp = 1,
	};


	// Enum /Script/Landscape.ELandscapeLayerBlendType
	enum ELandscapeLayerBlendType
	{
		LB_WeightBlend = 0,
		LB_AlphaBlend = 1,
		LB_HeightBlend = 2,
	};


	// Enum /Script/Landscape.ETerrainCoordMappingType
	enum ETerrainCoordMappingType
	{
		TCMT_Auto = 0,
		TCMT_XY = 1,
		TCMT_XZ = 2,
		TCMT_YZ = 3,
	};


	// Enum /Script/Landscape.ELandscapeCustomizedCoordType
	enum ELandscapeCustomizedCoordType
	{
		LCCT_None = 0,
		LCCT_CustomUV0 = 1,
		LCCT_CustomUV1 = 2,
		LCCT_CustomUV2 = 3,
		LCCT_WeightMapUV = 4,
	};


	// Enum /Script/Landscape.ELandscapeResizeMode
	enum ELandscapeResizeMode
	{
		ELandscapeResizeMode__Resample = 0,
		ELandscapeResizeMode__Clip = 1,
		ELandscapeResizeMode__Expand = 2,
	};


	// Enum /Script/Landscape.ELandscapeImportAlphamapType
	enum ELandscapeImportAlphamapType
	{
		ELandscapeImportAlphamapType__Additive = 0,
		ELandscapeImportAlphamapType__Layered = 1,
	};


	// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
	enum ELandscapeLayerPaintingRestriction
	{
		ELandscapeLayerPaintingRestriction__None = 0,
		ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
		ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
		ELandscapeLayerPaintingRestriction__UseComponentAllowList = 3,
	};


	// Enum /Script/Landscape.ELandscapeLayerDisplayMode
	enum ELandscapeLayerDisplayMode
	{
		ELandscapeLayerDisplayMode__Default = 0,
		ELandscapeLayerDisplayMode__Alphabetical = 1,
		ELandscapeLayerDisplayMode__UserSpecific = 2,
	};


	// Enum /Script/Landscape.ELandscapeHLODTextureSizePolicy
	enum ELandscapeHLODTextureSizePolicy
	{
		ELandscapeHLODTextureSizePolicy__AutomaticSize = 0,
		ELandscapeHLODTextureSizePolicy__SpecificSize = 1,
	};


	// Enum /Script/Landscape.ELandscapeHLODMeshSourceLODPolicy
	enum ELandscapeHLODMeshSourceLODPolicy
	{
		ELandscapeHLODMeshSourceLODPolicy__AutomaticLOD = 0,
		ELandscapeHLODMeshSourceLODPolicy__SpecificLOD = 1,
		ELandscapeHLODMeshSourceLODPolicy__LowestDetailLOD = 2,
	};


	// Enum /Script/Landscape.ELandscapeLODFalloff
	enum ELandscapeLODFalloff
	{
		ELandscapeLODFalloff__Linear = 0,
		ELandscapeLODFalloff__SquareRoot = 1,
	};

}
