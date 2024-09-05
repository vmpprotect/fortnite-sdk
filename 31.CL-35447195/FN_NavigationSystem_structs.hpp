#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NavigationSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NavigationSystem.NavLinkGenerationJumpDownConfig
	// Size: 0x40 (0x40 - 0x0)
	struct FNavLinkGenerationJumpDownConfig	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float JumpLength; // 0x4(0x4)
		float JumpDistanceFromEdge; // 0x8(0x4)
		float JumpMaxDepth; // 0xC(0x4)
		float JumpEndsHeightTolerance; // 0x10(0x4)
		float SamplingSeparationFactor; // 0x14(0x4)
		float FilterDistanceThreshold; // 0x18(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UClass LinkProxyClass; // 0x20(0x8)
		FNavLinkId LinkProxyId; // 0x28(0x8)
		UBaseGeneratedNavLinksProxy LinkProxy; // 0x30(0x8)
		bool bLinkProxyRegistered; // 0x38(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct NavigationSystem.NavLinkGenerationJumpOverConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FNavLinkGenerationJumpOverConfig	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float JumpGapWidth; // 0x4(0x4)
		float JumpGapHeightTolerance; // 0x8(0x4)
		float JumpDistanceFromGapCenter; // 0xC(0x4)
		float JumpHeight; // 0x10(0x4)
		float JumpEndsHeightTolerance; // 0x14(0x4)
		float SamplingSeparationFactor; // 0x18(0x4)
		float FilterDistanceThreshold; // 0x1C(0x4)
	};


	// Struct NavigationSystem.NavCollisionCylinder
	// Size: 0x20 (0x20 - 0x0)
	struct FNavCollisionCylinder	
	{
	public:
		FVector Offset; // 0x0(0x18)
		float Radius; // 0x18(0x4)
		float Height; // 0x1C(0x4)
	};


	// Struct NavigationSystem.NavCollisionBox
	// Size: 0x30 (0x30 - 0x0)
	struct FNavCollisionBox	
	{
	public:
		FVector Offset; // 0x0(0x18)
		FVector Extent; // 0x18(0x18)
	};


	// Struct NavigationSystem.NavigationFilterArea
	// Size: 0x18 (0x18 - 0x0)
	struct FNavigationFilterArea	
	{
	public:
		UClass AreaClass; // 0x0(0x8)
		float TravelCostOverride; // 0x8(0x4)
		float EnteringCostOverride; // 0xC(0x4)
		bool bIsExcluded : 1; // 0x10:0(0x1)
		bool bOverrideTravelCost : 1; // 0x10:1(0x1)
		bool bOverrideEnteringCost : 1; // 0x10:2(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct NavigationSystem.NavigationFilterFlags
	// Size: 0x4 (0x4 - 0x0)
	struct FNavigationFilterFlags	
	{
	public:
		bool bNavFlag0 : 1; // 0x0:0(0x1)
		bool bNavFlag1 : 1; // 0x0:1(0x1)
		bool bNavFlag2 : 1; // 0x0:2(0x1)
		bool bNavFlag3 : 1; // 0x0:3(0x1)
		bool bNavFlag4 : 1; // 0x0:4(0x1)
		bool bNavFlag5 : 1; // 0x0:5(0x1)
		bool bNavFlag6 : 1; // 0x0:6(0x1)
		bool bNavFlag7 : 1; // 0x0:7(0x1)
		bool bNavFlag8 : 1; // 0x1:0(0x1)
		bool bNavFlag9 : 1; // 0x1:1(0x1)
		bool bNavFlag10 : 1; // 0x1:2(0x1)
		bool bNavFlag11 : 1; // 0x1:3(0x1)
		bool bNavFlag12 : 1; // 0x1:4(0x1)
		bool bNavFlag13 : 1; // 0x1:5(0x1)
		bool bNavFlag14 : 1; // 0x1:6(0x1)
		bool bNavFlag15 : 1; // 0x1:7(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
	};


	// Struct NavigationSystem.NavGraphEdge
	// Size: 0x18 (0x18 - 0x0)
	struct FNavGraphEdge	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct NavigationSystem.NavGraphNode
	// Size: 0x18 (0x18 - 0x0)
	struct FNavGraphNode	
	{
	public:
		UObject Owner; // 0x0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct NavigationSystem.SupportedAreaData
	// Size: 0x20 (0x20 - 0x0)
	struct FSupportedAreaData	
	{
	public:
		FString AreaClassName; // 0x0(0x10)
		int32_t AreaID; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UClass AreaClass; // 0x18(0x8)
	};


	// Struct NavigationSystem.NavLinkCustomInstanceData
	// Inherited from FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x10 (0x78 - 0x68)
	struct FNavLinkCustomInstanceData : public FActorComponentInstanceData	
	{
	public:
		FNavLinkId CustomLinkId; // 0x68(0x8)
		FNavLinkAuxiliaryId AuxiliaryCustomLinkId; // 0x70(0x8)
	};


	// Struct NavigationSystem.RecastNavMeshGenerationProperties
	// Size: 0x40 (0x40 - 0x0)
	struct FRecastNavMeshGenerationProperties	
	{
	public:
		int32_t TilePoolSize; // 0x0(0x4)
		float TileSizeUU; // 0x4(0x4)
		float CellSize; // 0x8(0x4)
		float CellHeight; // 0xC(0x4)
		float AgentRadius; // 0x10(0x4)
		float AgentHeight; // 0x14(0x4)
		float AgentMaxSlope; // 0x18(0x4)
		float AgentMaxStepHeight; // 0x1C(0x4)
		float MinRegionArea; // 0x20(0x4)
		float MergeRegionSize; // 0x24(0x4)
		float MaxSimplificationError; // 0x28(0x4)
		int32_t TileNumberHardLimit; // 0x2C(0x4)
		TEnumAsByte RegionPartitioning; // 0x30(0x1)
		TEnumAsByte LayerPartitioning; // 0x31(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		int32_t RegionChunkSplits; // 0x34(0x4)
		int32_t LayerChunkSplits; // 0x38(0x4)
		bool bSortNavigationAreasByCost : 1; // 0x3C:0(0x1)
		bool bPerformVoxelFiltering : 1; // 0x3C:1(0x1)
		bool bMarkLowHeightAreas : 1; // 0x3C:2(0x1)
		bool bUseExtraTopCellWhenMarkingAreas : 1; // 0x3C:3(0x1)
		bool bFilterLowSpanSequences : 1; // 0x3C:4(0x1)
		bool bFilterLowSpanFromTileCache : 1; // 0x3C:5(0x1)
		bool bFixedTilePoolSize : 1; // 0x3C:6(0x1)
		bool bIsWorldPartitioned : 1; // 0x3C:7(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
	};


	// Struct NavigationSystem.RecastNavMeshTileGenerationDebug
	// Size: 0x24 (0x24 - 0x0)
	struct FRecastNavMeshTileGenerationDebug	
	{
	public:
		bool bEnabled : 1; // 0x0:0(0x1)
		unsigned char UnknownData05_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FIntVector TileCoordinate; // 0x4(0xC)
		bool bGenerateDebugTileOnly : 1; // 0x10:0(0x1)
		bool bCollisionGeometry : 1; // 0x10:1(0x1)
		unsigned char UnknownData06_5[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		EHeightFieldRenderMode HeightFieldRenderMode; // 0x14(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		bool bHeightfieldFromRasterization : 1; // 0x18:0(0x1)
		bool bHeightfieldPostInclusionBoundsFiltering : 1; // 0x18:1(0x1)
		bool bHeightfieldPostHeightFiltering : 1; // 0x18:2(0x1)
		bool bHeightfieldBounds : 1; // 0x18:3(0x1)
		bool bCompactHeightfield : 1; // 0x18:4(0x1)
		bool bCompactHeightfieldEroded : 1; // 0x18:5(0x1)
		bool bHeightFieldLayers : 1; // 0x18:6(0x1)
		bool bCompactHeightfieldRegions : 1; // 0x18:7(0x1)
		bool bCompactHeightfieldDistances : 1; // 0x19:0(0x1)
		bool bTileCacheLayerAreas : 1; // 0x19:1(0x1)
		bool bTileCacheLayerRegions : 1; // 0x19:2(0x1)
		bool bSkipContourSimplification : 1; // 0x19:3(0x1)
		bool bTileCacheContours : 1; // 0x19:4(0x1)
		bool bTileCachePolyMesh : 1; // 0x19:5(0x1)
		bool bTileCacheDetailMesh : 1; // 0x19:6(0x1)
		unsigned char UnknownData08_5[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		uint16_t LinkGenerationDebugFlags; // 0x1C(0x2)
		unsigned char UnknownData09_6[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
		int32_t LinkGenerationSelectedEdge; // 0x20(0x4)
	};


	// Struct NavigationSystem.NavMeshResolutionParam
	// Size: 0xC (0xC - 0x0)
	struct FNavMeshResolutionParam	
	{
	public:
		float CellSize; // 0x0(0x4)
		float CellHeight; // 0x4(0x4)
		float AgentMaxStepHeight; // 0x8(0x4)
	};

}
