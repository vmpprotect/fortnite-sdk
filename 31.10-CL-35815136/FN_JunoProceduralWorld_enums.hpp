#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoProceduralWorld
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/JunoProceduralWorld.EJunoGetMergedCaveDataRegistryDataResult
	enum EJunoGetMergedCaveDataRegistryDataResult
	{
		EJunoGetMergedCaveDataRegistryDataResult__Success = 0,
		EJunoGetMergedCaveDataRegistryDataResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellType
	enum EJunoCaveGeneratorShellType
	{
		EJunoCaveGeneratorShellType__Room = 0,
		EJunoCaveGeneratorShellType__Connector = 1,
		EJunoCaveGeneratorShellType__Entrance = 2,
		EJunoCaveGeneratorShellType__Hero = 3,
		EJunoCaveGeneratorShellType__FeatureRoom = 4,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellSize
	enum EJunoCaveGeneratorShellSize
	{
		EJunoCaveGeneratorShellSize__Small = 0,
		EJunoCaveGeneratorShellSize__Medium = 1,
		EJunoCaveGeneratorShellSize__Large = 2,
		EJunoCaveGeneratorShellSize__Hallway = 3,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorShellTags
	enum EJunoCaveGeneratorShellTags
	{
		EJunoCaveGeneratorShellTags__BearCave = 0,
		EJunoCaveGeneratorShellTags__WolfCave = 1,
		EJunoCaveGeneratorShellTags__TreasureCave = 2,
		EJunoCaveGeneratorShellTags__PirateCave = 3,
		EJunoCaveGeneratorShellTags__AnimalDen = 4,
		EJunoCaveGeneratorShellTags__BossRoom = 5,
		EJunoCaveGeneratorShellTags__MysteryRoom = 6,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorLayoutTags
	enum EJunoCaveGeneratorLayoutTags
	{
		EJunoCaveGeneratorLayoutTags__OroMine = 0,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorPCGType
	enum EJunoCaveGeneratorPCGType
	{
		EJunoCaveGeneratorPCGType__GemsAndOre = 0,
		EJunoCaveGeneratorPCGType__GemsAndOre_HighValue = 1,
		EJunoCaveGeneratorPCGType__Mushroom = 2,
		EJunoCaveGeneratorPCGType__Plants = 3,
		EJunoCaveGeneratorPCGType__Ceiling = 4,
		EJunoCaveGeneratorPCGType__Clutter = 5,
		EJunoCaveGeneratorPCGType__Rare = 6,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorRuleMode
	enum EJunoCaveGeneratorRuleMode
	{
		EJunoCaveGeneratorRuleMode__Basic = 0,
		EJunoCaveGeneratorRuleMode__Template = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCaveGeneratorTypeTeleporterRuleType
	enum EJunoCaveGeneratorTypeTeleporterRuleType
	{
		EJunoCaveGeneratorTypeTeleporterRuleType__Disabled = 0,
		EJunoCaveGeneratorTypeTeleporterRuleType__MarkerShortcut = 1,
	};


	// Enum /Script/JunoProceduralWorld.EAddChainResult
	enum EAddChainResult
	{
		EAddChainResult__Success = 0,
		EAddChainResult__NoMatchingShell = 1,
		EAddChainResult__InvalidAttachIndex = 2,
		EAddChainResult__NoExitsLeft = 3,
		EAddChainResult__CannotFitShell = 4,
		EAddChainResult__NoShellsGenerated = 5,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCaveTheme_DEPRECATED
	enum EJunoCaveTheme_DEPRECATED
	{
		EJunoCaveTheme_DEPRECATED__Grassland = 0,
		EJunoCaveTheme_DEPRECATED__DarkForest = 1,
		EJunoCaveTheme_DEPRECATED__Tropical = 2,
		EJunoCaveTheme_DEPRECATED__Alpine = 3,
		EJunoCaveTheme_DEPRECATED__Desert = 4,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCreateCaveResult
	enum EJunoCreateCaveResult
	{
		EJunoCreateCaveResult__Success = 0,
		EJunoCreateCaveResult__Failure = 1,
		EJunoCreateCaveResult__Disabled = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoQueryCaveDataResult
	enum EJunoQueryCaveDataResult
	{
		EJunoQueryCaveDataResult__NotReady = 0,
		EJunoQueryCaveDataResult__NotAllowed = 1,
		EJunoQueryCaveDataResult__Cached = 2,
		EJunoQueryCaveDataResult__NoEntry = 3,
	};


	// Enum /Script/JunoProceduralWorld.EJunoQueryCaveSurfaceDataStateResult
	enum EJunoQueryCaveSurfaceDataStateResult
	{
		EJunoQueryCaveSurfaceDataStateResult__NotReady = 0,
		EJunoQueryCaveSurfaceDataStateResult__NotAllowed = 1,
		EJunoQueryCaveSurfaceDataStateResult__Cached = 2,
		EJunoQueryCaveSurfaceDataStateResult__NoEntry = 3,
	};


	// Enum /Script/JunoProceduralWorld.EJunoGetCaveSurfaceDataForEntranceResult
	enum EJunoGetCaveSurfaceDataForEntranceResult
	{
		EJunoGetCaveSurfaceDataForEntranceResult__NotReady = 0,
		EJunoGetCaveSurfaceDataForEntranceResult__NotAllowed = 1,
		EJunoGetCaveSurfaceDataForEntranceResult__IsACave = 2,
		EJunoGetCaveSurfaceDataForEntranceResult__NotACave = 3,
	};


	// Enum /Script/JunoProceduralWorld.EJunoGetCaveShellInstanceDataResult
	enum EJunoGetCaveShellInstanceDataResult
	{
		EJunoGetCaveShellInstanceDataResult__Success = 0,
		EJunoGetCaveShellInstanceDataResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoGetBestCaveResult
	enum EJunoGetBestCaveResult
	{
		EJunoGetBestCaveResult__Success = 0,
		EJunoGetBestCaveResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCalculateCaveDistanceResult
	enum EJunoCalculateCaveDistanceResult
	{
		EJunoCalculateCaveDistanceResult__Success = 0,
		EJunoCalculateCaveDistanceResult__ParentIDsNotCorrect = 1,
		EJunoCalculateCaveDistanceResult__ShellsAreNotConnected = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoGetCaveDataCollectionsFromRegistryResult
	enum EJunoGetCaveDataCollectionsFromRegistryResult
	{
		EJunoGetCaveDataCollectionsFromRegistryResult__Success = 0,
		EJunoGetCaveDataCollectionsFromRegistryResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoHLODMapActorsPersistenceMigrationLevel
	enum EJunoHLODMapActorsPersistenceMigrationLevel
	{
		EJunoHLODMapActorsPersistenceMigrationLevel__None = 0,
		EJunoHLODMapActorsPersistenceMigrationLevel__NonHLOD = 1,
		EJunoHLODMapActorsPersistenceMigrationLevel__HLOD = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoPCGVolumeSource
	enum EJunoPCGVolumeSource
	{
		EJunoPCGVolumeSource__Transient = 0,
		EJunoPCGVolumeSource__Persistent = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoFindNextMatchingPOIResourceResult
	enum EJunoFindNextMatchingPOIResourceResult
	{
		EJunoFindNextMatchingPOIResourceResult__Found = 0,
		EJunoFindNextMatchingPOIResourceResult__NotFound = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCreateLevelResult
	enum EJunoCreateLevelResult
	{
		EJunoCreateLevelResult__Success = 0,
		EJunoCreateLevelResult__Failed = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoCompareTagSetsResult
	enum EJunoCompareTagSetsResult
	{
		EJunoCompareTagSetsResult__NoMatch = 0,
		EJunoCompareTagSetsResult__PartialMatch = 1,
		EJunoCompareTagSetsResult__FullMatch = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoResolveWorldSoftObjectPathResult
	enum EJunoResolveWorldSoftObjectPathResult
	{
		EJunoResolveWorldSoftObjectPathResult__Success = 0,
		EJunoResolveWorldSoftObjectPathResult__NotAWorldObject = 1,
		EJunoResolveWorldSoftObjectPathResult__InvalidPath = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoLevelInstanceMode
	enum EJunoLevelInstanceMode
	{
		EJunoLevelInstanceMode__Disabled = 0,
		EJunoLevelInstanceMode__StreamingWP = 1,
		EJunoLevelInstanceMode__CellInjection = 2,
	};


	// Enum /Script/JunoProceduralWorld.EPCGJunoPersistenceMigrationResultFlags
	enum EPCGJunoPersistenceMigrationResultFlags
	{
		EPCGJunoPersistenceMigrationResultFlags__None = 0,
		EPCGJunoPersistenceMigrationResultFlags__MigrationApplied = 1,
		EPCGJunoPersistenceMigrationResultFlags__PersistentDataReset = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoWorldPartitionRuntimeHashType
	enum EJunoWorldPartitionRuntimeHashType
	{
		EJunoWorldPartitionRuntimeHashType__WorldPartitionSpatialHash = 0,
		EJunoWorldPartitionRuntimeHashType__WorldPartitionHashSet = 1,
		EJunoWorldPartitionRuntimeHashType__VersionPlusOne = 2,
		EJunoWorldPartitionRuntimeHashType__LatestVersion = 1,
		EJunoWorldPartitionRuntimeHashType__Invalid = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoWorldRegistryType
	enum EJunoWorldRegistryType
	{
		EJunoWorldRegistryType__Invalid = 0,
		EJunoWorldRegistryType__POI = 1,
		EJunoWorldRegistryType__Enemy = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoGetWorldTileTransformResult
	enum EJunoGetWorldTileTransformResult
	{
		EJunoGetWorldTileTransformResult__Success = 0,
		EJunoGetWorldTileTransformResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoGetWorldTileBoundsResult
	enum EJunoGetWorldTileBoundsResult
	{
		EJunoGetWorldTileBoundsResult__Success = 0,
		EJunoGetWorldTileBoundsResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoTileStatus
	enum EJunoTileStatus
	{
		EJunoTileStatus__Disabled = 0,
		EJunoTileStatus__Enabled = 1,
		EJunoTileStatus__Deprecated = 2,
		EJunoTileStatus__Instantiated = 3,
		EJunoTileStatus__Reserved = 4,
		EJunoTileStatus__OutOfBounds = 5,
	};


	// Enum /Script/JunoProceduralWorld.EJunoTileGenerationType
	enum EJunoTileGenerationType
	{
		EJunoTileGenerationType__Unknown = 0,
		EJunoTileGenerationType__Cooked = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoWorldTilePOIType
	enum EJunoWorldTilePOIType
	{
		EJunoWorldTilePOIType__Overworld = 0,
		EJunoWorldTilePOIType__Cave = 1,
		EJunoWorldTilePOIType__CaveEntrance = 2,
		EJunoWorldTilePOIType__Bridge = 3,
		EJunoWorldTilePOIType__FishingSpot = 4,
	};


	// Enum /Script/JunoProceduralWorld.EJunoPOIDistributionMethod
	enum EJunoPOIDistributionMethod
	{
		EJunoPOIDistributionMethod__Random = 0,
		EJunoPOIDistributionMethod__AdditionalPOI = 1,
		EJunoPOIDistributionMethod__CaveGeneratorRule = 2,
	};


	// Enum /Script/JunoProceduralWorld.EPCGJunoPOIIAMPreferredLevel
	enum EPCGJunoPOIIAMPreferredLevel
	{
		EPCGJunoPOIIAMPreferredLevel__None = 0,
		EPCGJunoPOIIAMPreferredLevel__Default = 1,
		EPCGJunoPOIIAMPreferredLevel__NonHLOD = 2,
		EPCGJunoPOIIAMPreferredLevel__HLOD = 3,
	};


	// Enum /Script/JunoProceduralWorld.EJunoWorldTileAdditionalPOIType
	enum EJunoWorldTileAdditionalPOIType
	{
		EJunoWorldTileAdditionalPOIType__CosmeticPOI = 0,
		EJunoWorldTileAdditionalPOIType__EncounterPOI = 1,
		EJunoWorldTileAdditionalPOIType__TransitionCaveEntrance = 2,
		EJunoWorldTileAdditionalPOIType__TransitionCaveExit = 3,
		EJunoWorldTileAdditionalPOIType__Cave = 4,
	};


	// Enum /Script/JunoProceduralWorld.EJunoWorldTileAdditionalPOIPlacement
	enum EJunoWorldTileAdditionalPOIPlacement
	{
		EJunoWorldTileAdditionalPOIPlacement__Random = 0,
		EJunoWorldTileAdditionalPOIPlacement__NearEventTile = 1,
		EJunoWorldTileAdditionalPOIPlacement__WorldOriginTile = 2,
		EJunoWorldTileAdditionalPOIPlacement__TaggedTileAndSlot = 3,
		EJunoWorldTileAdditionalPOIPlacement__SessionOriginTile = 4,
		EJunoWorldTileAdditionalPOIPlacement__OnePerTile = 5,
		EJunoWorldTileAdditionalPOIPlacement__OnePerFourTiles = 6,
		EJunoWorldTileAdditionalPOIPlacement__OnePerFourTilesExceptSessionOrigin = 7,
		EJunoWorldTileAdditionalPOIPlacement__Rare = 8,
		EJunoWorldTileAdditionalPOIPlacement__UnitTests = 9,
	};


	// Enum /Script/JunoProceduralWorld.EJunoAdditionalPOIOrientation
	enum EJunoAdditionalPOIOrientation
	{
		EJunoAdditionalPOIOrientation__Random = 0,
		EJunoAdditionalPOIOrientation__FaceYToWorldOrigin = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoAdditionalPOIWorldMode
	enum EJunoAdditionalPOIWorldMode
	{
		EJunoAdditionalPOIWorldMode__AllWorlds = 0,
		EJunoAdditionalPOIWorldMode__NewWorldsOnly = 1,
		EJunoAdditionalPOIWorldMode__OldWorldsOnly = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoPOISlotState
	enum EJunoPOISlotState
	{
		EJunoPOISlotState__Normal = 0,
		EJunoPOISlotState__Unused = 1,
		EJunoPOISlotState__Cosmetic = 2,
		EJunoPOISlotState__CaveEntrance = 3,
		EJunoPOISlotState__UnusedNearWorldStart = 4,
	};


	// Enum /Script/JunoProceduralWorld.EJunoWorldTileInjectedLevelType
	enum EJunoWorldTileInjectedLevelType
	{
		EJunoWorldTileInjectedLevelType__POI = 0,
		EJunoWorldTileInjectedLevelType__Cave = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoWorldTileEventBuilderRestrictionType
	enum EJunoWorldTileEventBuilderRestrictionType
	{
		EJunoWorldTileEventBuilderRestrictionType__Exclude = 0,
		EJunoWorldTileEventBuilderRestrictionType__Include = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoWorldTileEventBuilderRestrictionShape
	enum EJunoWorldTileEventBuilderRestrictionShape
	{
		EJunoWorldTileEventBuilderRestrictionShape__Circle = 0,
		EJunoWorldTileEventBuilderRestrictionShape__Box = 1,
	};


	// Enum /Script/JunoProceduralWorld.EPushFrontierResult
	enum EPushFrontierResult
	{
		EPushFrontierResult__Continue = 0,
		EPushFrontierResult__Success = 1,
		EPushFrontierResult__Fail = 2,
		EPushFrontierResult__OutOfFrontierNodes = 3,
		EPushFrontierResult__NoNewFrontierCreated = 4,
		EPushFrontierResult__ReachedMaxCost = 5,
		EPushFrontierResult__ReachedMaxSteps = 6,
		EPushFrontierResult__ReachedDestination = 7,
		EPushFrontierResult__NoValidResult = 8,
	};


	// Enum /Script/JunoProceduralWorld.EPathfinderNodeState
	enum EPathfinderNodeState
	{
		EPathfinderNodeState__Normal = 0,
		EPathfinderNodeState__Snap = 1,
		EPathfinderNodeState__Warp = 2,
		EPathfinderNodeState__Invalid = 3,
	};


	// Enum /Script/JunoProceduralWorld.EJunoRepresentation
	enum EJunoRepresentation
	{
		EJunoRepresentation__None = 0,
		EJunoRepresentation__Actor = 1,
		EJunoRepresentation__Instance = 2,
	};


	// Enum /Script/JunoProceduralWorld.EJunoPOISize
	enum EJunoPOISize
	{
		EJunoPOISize__None = 0,
		EJunoPOISize__JPOI_1x1 = 1,
		EJunoPOISize__JPOI_2x2 = 2,
		EJunoPOISize__JPOI_3x3 = 3,
		EJunoPOISize__JPOI_4x4 = 4,
		EJunoPOISize__JPOI_5x5 = 5,
		EJunoPOISize__JPOI_8x8 = 8,
		EJunoPOISize__JPOI_10x10 = A,
		EJunoPOISize__JPOI_11x11 = B,
	};


	// Enum /Script/JunoProceduralWorld.PCGJunoApplyMaskNodeMode
	enum PCGJunoApplyMaskNodeMode
	{
		PCGJunoApplyMaskNodeMode__Subtract = 0,
		PCGJunoApplyMaskNodeMode__Intersect = 1,
		PCGJunoApplyMaskNodeMode__SubtractSmaller = 2,
		PCGJunoApplyMaskNodeMode__SubtractLarger = 3,
	};


	// Enum /Script/JunoProceduralWorld.ELandmassRiverTier
	enum ELandmassRiverTier
	{
		ELandmassRiverTier__Default = 0,
	};


	// Enum /Script/JunoProceduralWorld.EQueryPOIStateResult
	enum EQueryPOIStateResult
	{
		EQueryPOIStateResult__NotReady = 0,
		EQueryPOIStateResult__NotAllowed = 1,
		EQueryPOIStateResult__Cached = 2,
		EQueryPOIStateResult__NoEntry = 3,
	};


	// Enum /Script/JunoProceduralWorld.EGeneratePOIResult
	enum EGeneratePOIResult
	{
		EGeneratePOIResult__Success = 0,
		EGeneratePOIResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoMarkSlotPOIUnusedResult
	enum EJunoMarkSlotPOIUnusedResult
	{
		EJunoMarkSlotPOIUnusedResult__Success = 0,
		EJunoMarkSlotPOIUnusedResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoSetSlotPOIMetaDataResult
	enum EJunoSetSlotPOIMetaDataResult
	{
		EJunoSetSlotPOIMetaDataResult__Success = 0,
		EJunoSetSlotPOIMetaDataResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoGetMatchingPOIsFromDataRegistryResult
	enum EJunoGetMatchingPOIsFromDataRegistryResult
	{
		EJunoGetMatchingPOIsFromDataRegistryResult__Success = 0,
		EJunoGetMatchingPOIsFromDataRegistryResult__Failure = 1,
	};


	// Enum /Script/JunoProceduralWorld.EJunoPOISlotSelectionMode
	enum EJunoPOISlotSelectionMode
	{
		EJunoPOISlotSelectionMode__Default = 0,
		EJunoPOISlotSelectionMode__EncounterPOI = 1,
		EJunoPOISlotSelectionMode__CosmeticPOI = 2,
	};


	// Enum /Script/JunoProceduralWorld.EVerticalDirection
	enum EVerticalDirection
	{
		EVerticalDirection__Both = 0,
		EVerticalDirection__DownwardOnly = 1,
		EVerticalDirection__UpwardOnly = 2,
	};


	// Enum /Script/JunoProceduralWorld.ELandmassRoadTier
	enum ELandmassRoadTier
	{
		ELandmassRoadTier__Default = 0,
		ELandmassRoadTier__Dirt = 1,
		ELandmassRoadTier__Rural = 2,
		ELandmassRoadTier__Metropolitan = 3,
		ELandmassRoadTier__Suburban = 4,
		ELandmassRoadTier__Highway = 5,
		ELandmassRoadTier__BreadCrumbs = 6,
		ELandmassRoadTier__Hidden = 7,
	};


	// Enum /Script/JunoProceduralWorld.ERouteGenerationState
	enum ERouteGenerationState
	{
		ERouteGenerationState__Inactive = 0,
		ERouteGenerationState__Active = 1,
		ERouteGenerationState__Dormant = 2,
	};


	// Enum /Script/JunoProceduralWorld.ERouteAvoidancePrimitiveType
	enum ERouteAvoidancePrimitiveType
	{
		ERouteAvoidancePrimitiveType__Disc = 0,
		ERouteAvoidancePrimitiveType__Curve = 1,
		ERouteAvoidancePrimitiveType__ProceduralRoutes = 2,
	};


	// Enum /Script/JunoProceduralWorld.EProceduralRouteGuideSetSelectMethod
	enum EProceduralRouteGuideSetSelectMethod
	{
		EProceduralRouteGuideSetSelectMethod__UseTileId = 0,
		EProceduralRouteGuideSetSelectMethod__UseTileIndex = 1,
	};


	// Enum /Script/JunoProceduralWorld.EProceduralRiverAnchorType
	enum EProceduralRiverAnchorType
	{
		EProceduralRiverAnchorType__Source = 0,
		EProceduralRiverAnchorType__Lake = 1,
		EProceduralRiverAnchorType__Coastline = 2,
		EProceduralRiverAnchorType__DeepSea = 3,
	};


	// Enum /Script/JunoProceduralWorld.PCGJunoFractalNoise2DMode
	enum PCGJunoFractalNoise2DMode
	{
		PCGJunoFractalNoise2DMode__Perlin = 0,
		PCGJunoFractalNoise2DMode__Caustic = 1,
		PCGJunoFractalNoise2DMode__Voronoi = 2,
		PCGJunoFractalNoise2DMode__TiledVoronoi = 3,
		PCGJunoFractalNoise2DMode__Brownian = 4,
		PCGJunoFractalNoise2DMode__EdgeMask = 5,
	};


	// Enum /Script/JunoProceduralWorld.PCGJunoFractalNoise2DEdgeMode
	enum PCGJunoFractalNoise2DEdgeMode
	{
		PCGJunoFractalNoise2DEdgeMode__Perlin = 0,
		PCGJunoFractalNoise2DEdgeMode__Caustic = 1,
		PCGJunoFractalNoise2DEdgeMode__Brownian = 2,
	};


	// Enum /Script/JunoProceduralWorld.PCGJunoFractalDensityMode
	enum PCGJunoFractalDensityMode
	{
		PCGJunoFractalDensityMode__Ignore = 0,
		PCGJunoFractalDensityMode__Set = 1,
		PCGJunoFractalDensityMode__Add = 2,
		PCGJunoFractalDensityMode__Multiply = 3,
	};

}
