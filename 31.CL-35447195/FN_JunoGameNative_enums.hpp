#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoGameNative
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/JunoGameNative.EJunoBuildingPlacementType
	enum EJunoBuildingPlacementType
	{
		EJunoBuildingPlacementType__GuidedSnapping = 0,
		EJunoBuildingPlacementType__Connectivity = 1,
		EJunoBuildingPlacementType__SnapPlacement = 2,
		EJunoBuildingPlacementType__NoTarget = 3,
	};


	// Enum /Script/JunoGameNative.EJunoBuildingBehaviorState
	enum EJunoBuildingBehaviorState
	{
		EJunoBuildingBehaviorState__Uninitialized = 0,
		EJunoBuildingBehaviorState__Pending = 1,
		EJunoBuildingBehaviorState__Ready = 2,
		EJunoBuildingBehaviorState__Invalid = 3,
		EJunoBuildingBehaviorState__Disabled = 4,
	};


	// Enum /Script/JunoGameNative.EJunoBiomeHabitat
	enum EJunoBiomeHabitat
	{
		EJunoBiomeHabitat__Unknown = 0,
		EJunoBiomeHabitat__POI = 1,
		EJunoBiomeHabitat__Cave = 2,
		EJunoBiomeHabitat__Stone = 3,
		EJunoBiomeHabitat__Asphalt = 4,
		EJunoBiomeHabitat__Snow = 5,
		EJunoBiomeHabitat__Dirt = 6,
		EJunoBiomeHabitat__Sand = 7,
		EJunoBiomeHabitat__Grass = 8,
		EJunoBiomeHabitat__Flowers = 9,
		EJunoBiomeHabitat__Heather = A,
		EJunoBiomeHabitat__Moss = B,
		EJunoBiomeHabitat__Ocean = C,
		EJunoBiomeHabitat__Lake = D,
		EJunoBiomeHabitat__River = E,
		EJunoBiomeHabitat__Max = F,
	};


	// Enum /Script/JunoGameNative.EJunoBiome
	enum EJunoBiome
	{
		EJunoBiome__Unknown = 0,
		EJunoBiome__Grasslands = 1,
		EJunoBiome__DarkForest = 2,
		EJunoBiome__Desert = 3,
		EJunoBiome__Tropical = 4,
		EJunoBiome__Alpine = 5,
		EJunoBiome__Water = 6,
		EJunoBiome__Jungle = 7,
		EJunoBiome__Mountain = 8,
		EJunoBiome__Reserved = 9,
		EJunoBiome__Max = A,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomePointModificationContext
	enum EJunoAwesomePointModificationContext
	{
		EJunoAwesomePointModificationContext__Cheat = 0,
		EJunoAwesomePointModificationContext__Interaction = 1,
		EJunoAwesomePointModificationContext__ActorPlacement = 2,
		EJunoAwesomePointModificationContext__ActorRemoval = 3,
		EJunoAwesomePointModificationContext__QuestCompletion = 4,
	};


	// Enum /Script/JunoGameNative.EJunoPawnEmotionalState
	enum EJunoPawnEmotionalState
	{
		EJunoPawnEmotionalState__Default = 0,
		EJunoPawnEmotionalState__Happy = 1,
		EJunoPawnEmotionalState__Sad = 2,
	};


	// Enum /Script/JunoGameNative.EPassiveCraftingDoneReason
	enum EPassiveCraftingDoneReason
	{
		EPassiveCraftingDoneReason__UnexpectedError = 0,
		EPassiveCraftingDoneReason__PlayerStopped = 1,
		EPassiveCraftingDoneReason__NoOutputSpace = 2,
		EPassiveCraftingDoneReason__MissingIngredients = 3,
	};


	// Enum /Script/JunoGameNative.EJunoCaveType
	enum EJunoCaveType
	{
		EJunoCaveType__Unknown = 0,
		EJunoCaveType__Surface = 1,
		EJunoCaveType__Lava = 2,
		EJunoCaveType__Rift = 3,
		EJunoCaveType__Ruins = 4,
		EJunoCaveType__SurfaceMines = 5,
		EJunoCaveType__Pirate = 6,
		EJunoCaveType__Bear = 7,
		EJunoCaveType__Treasure = 8,
		EJunoCaveType__BossRoom = 9,
		EJunoCaveType__Max = A,
	};


	// Enum /Script/JunoGameNative.EJunoCustomIndicatorState
	enum EJunoCustomIndicatorState
	{
		EJunoCustomIndicatorState__None = 0,
		EJunoCustomIndicatorState__Hidden = 1,
		EJunoCustomIndicatorState__Shown = 2,
	};


	// Enum /Script/JunoGameNative.EJunoActorLocationInfoResolvedState
	enum EJunoActorLocationInfoResolvedState
	{
		EJunoActorLocationInfoResolvedState__WorldTile = 0,
		EJunoActorLocationInfoResolvedState__Actor = 1,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomeUpgradeBuiltObjectsRequirementType
	enum EJunoAwesomeUpgradeBuiltObjectsRequirementType
	{
		EJunoAwesomeUpgradeBuiltObjectsRequirementType__CraftingRowName = 0,
		EJunoAwesomeUpgradeBuiltObjectsRequirementType__ItemDefinitionTagQuery = 1,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomeUpgradeRecruitmentRequirementType
	enum EJunoAwesomeUpgradeRecruitmentRequirementType
	{
		EJunoAwesomeUpgradeRecruitmentRequirementType__Villager = 0,
		EJunoAwesomeUpgradeRecruitmentRequirementType__Creature = 1,
		EJunoAwesomeUpgradeRecruitmentRequirementType__Any = 2,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomeUpgradeStepType
	enum EJunoAwesomeUpgradeStepType
	{
		EJunoAwesomeUpgradeStepType__BuiltObjects = 0,
		EJunoAwesomeUpgradeStepType__PersistantTag = 1,
		EJunoAwesomeUpgradeStepType__WorldReaction = 2,
		EJunoAwesomeUpgradeStepType__RecruitedCount = 3,
	};


	// Enum /Script/JunoGameNative.EJunoCompassDirection
	enum EJunoCompassDirection
	{
		EJunoCompassDirection__Unknown = 0,
		EJunoCompassDirection__North = 1,
		EJunoCompassDirection__NorthEast = 2,
		EJunoCompassDirection__East = 3,
		EJunoCompassDirection__SouthEast = 4,
		EJunoCompassDirection__South = 5,
		EJunoCompassDirection__SouthWest = 6,
		EJunoCompassDirection__West = 7,
		EJunoCompassDirection__NorthWest = 8,
		EJunoCompassDirection__Max = 9,
	};


	// Enum /Script/JunoGameNative.EJunoTrackedActorRefreshReason
	enum EJunoTrackedActorRefreshReason
	{
		EJunoTrackedActorRefreshReason__LocationChanged = 0,
		EJunoTrackedActorRefreshReason__NetRelDistanceChanged = 1,
		EJunoTrackedActorRefreshReason__NumberOfRelevantActorsChanged = 2,
		EJunoTrackedActorRefreshReason__Unknown = 3,
	};


	// Enum /Script/JunoGameNative.EJunoCampUpgradeRewardFilters
	enum EJunoCampUpgradeRewardFilters
	{
		EJunoCampUpgradeRewardFilters__None = 0,
		EJunoCampUpgradeRewardFilters__General = 1,
		EJunoCampUpgradeRewardFilters__BiomeSpecific = 2,
		EJunoCampUpgradeRewardFilters__GenericEvent = 4,
	};


	// Enum /Script/JunoGameNative.EJunoRecruitmentObjectAcceptedPawnType
	enum EJunoRecruitmentObjectAcceptedPawnType
	{
		EJunoRecruitmentObjectAcceptedPawnType__None = 0,
		EJunoRecruitmentObjectAcceptedPawnType__Player = 1,
		EJunoRecruitmentObjectAcceptedPawnType__NPC = 2,
		EJunoRecruitmentObjectAcceptedPawnType__Creature = 4,
	};


	// Enum /Script/JunoGameNative.EChaosEventSize
	enum EChaosEventSize
	{
		EChaosEventSize__Single = 0,
		EChaosEventSize__Small = 1,
		EChaosEventSize__Medium = 2,
		EChaosEventSize__Large = 3,
		EChaosEventSize__Default = 1,
	};


	// Enum /Script/JunoGameNative.EJunoContactDirection
	enum EJunoContactDirection
	{
		EJunoContactDirection__PosX = 0,
		EJunoContactDirection__NegX = 1,
		EJunoContactDirection__PosY = 2,
		EJunoContactDirection__NegY = 3,
		EJunoContactDirection__PosZ = 4,
		EJunoContactDirection__NegZ = 5,
	};


	// Enum /Script/JunoGameNative.EJunoDumpWorldPersistentContentsVerbosity
	enum EJunoDumpWorldPersistentContentsVerbosity
	{
		EJunoDumpWorldPersistentContentsVerbosity__Compact = 0,
		EJunoDumpWorldPersistentContentsVerbosity__Default = 1,
		EJunoDumpWorldPersistentContentsVerbosity__Verbose = 2,
	};


	// Enum /Script/JunoGameNative.EJunoGeneratePersistenceAssetsReportCommandletAction
	enum EJunoGeneratePersistenceAssetsReportCommandletAction
	{
		EJunoGeneratePersistenceAssetsReportCommandletAction__None = 0,
		EJunoGeneratePersistenceAssetsReportCommandletAction__GeneratePersistenceSchema = 1,
		EJunoGeneratePersistenceAssetsReportCommandletAction__GeneratePersistenceAssetsReport = 2,
		EJunoGeneratePersistenceAssetsReportCommandletAction__GeneratePersistenceAssetsBackwardCompatibiliyReport = 3,
	};


	// Enum /Script/JunoGameNative.EJunoGeometryCollectionAssemblerDurationType
	enum EJunoGeometryCollectionAssemblerDurationType
	{
		EJunoGeometryCollectionAssemblerDurationType__Default = 0,
		EJunoGeometryCollectionAssemblerDurationType__CalculateLayerCount = 1,
		EJunoGeometryCollectionAssemblerDurationType__SpecifyLayerCount = 2,
	};


	// Enum /Script/JunoGameNative.EJunoKnowledgeState
	enum EJunoKnowledgeState
	{
		EJunoKnowledgeState__Hidden = 0,
		EJunoKnowledgeState__Revealed = 1,
		EJunoKnowledgeState__Acquired = 2,
	};


	// Enum /Script/JunoGameNative.EJunoPersistenceAssetBackwardCompatibilityIssueType
	enum EJunoPersistenceAssetBackwardCompatibilityIssueType
	{
		EJunoPersistenceAssetBackwardCompatibilityIssueType__None = 0,
		EJunoPersistenceAssetBackwardCompatibilityIssueType__Missing = 1,
		EJunoPersistenceAssetBackwardCompatibilityIssueType__NoLongerCooked = 2,
		EJunoPersistenceAssetBackwardCompatibilityIssueType__IncompatibleContents = 3,
	};


	// Enum /Script/JunoGameNative.EJunoGeneratePersistenceAssetCustomDumpMode
	enum EJunoGeneratePersistenceAssetCustomDumpMode
	{
		EJunoGeneratePersistenceAssetCustomDumpMode__None = 0,
		EJunoGeneratePersistenceAssetCustomDumpMode__InCookOnly = 1,
		EJunoGeneratePersistenceAssetCustomDumpMode__All = 2,
	};


	// Enum /Script/JunoGameNative.EJunoWorldSaveDataState
	enum EJunoWorldSaveDataState
	{
		EJunoWorldSaveDataState__Uninitialized = 0,
		EJunoWorldSaveDataState__Loading = 1,
		EJunoWorldSaveDataState__Loaded = 2,
		EJunoWorldSaveDataState__CheckingIn = 3,
		EJunoWorldSaveDataState__CheckedIn = 4,
	};


	// Enum /Script/JunoGameNative.EJunoLevelSaveDataState
	enum EJunoLevelSaveDataState
	{
		EJunoLevelSaveDataState__None = 0,
		EJunoLevelSaveDataState__CheckedOut = 1,
		EJunoLevelSaveDataState__Applied = 2,
		EJunoLevelSaveDataState__CheckedIn = 3,
	};


	// Enum /Script/JunoGameNative.EJunoWorldPersistenceType
	enum EJunoWorldPersistenceType
	{
		EJunoWorldPersistenceType__Online = 0,
		EJunoWorldPersistenceType__Memory = 1,
	};


	// Enum /Script/JunoGameNative.EJunoWorldReadOnly
	enum EJunoWorldReadOnly
	{
		EJunoWorldReadOnly__No = 0,
		EJunoWorldReadOnly__Yes = 1,
	};


	// Enum /Script/JunoGameNative.EJunoPersistenceUnrecoverableErrorResponse
	enum EJunoPersistenceUnrecoverableErrorResponse
	{
		EJunoPersistenceUnrecoverableErrorResponse__CrashServer = 0,
		EJunoPersistenceUnrecoverableErrorResponse__ShutdownServer = 1,
		EJunoPersistenceUnrecoverableErrorResponse__Ignore = 2,
	};


	// Enum /Script/JunoGameNative.EJunoBuildModeType
	enum EJunoBuildModeType
	{
		EJunoBuildModeType__BuildMode = 0,
		EJunoBuildModeType__GuidedBuildingMode = 1,
		EJunoBuildModeType__NumOfBuildModes = 2,
		EJunoBuildModeType__ActionMode = 3,
	};


	// Enum /Script/JunoGameNative.EJunoPersistenceFeatureCheckoutState
	enum EJunoPersistenceFeatureCheckoutState
	{
		EJunoPersistenceFeatureCheckoutState__None = 0,
		EJunoPersistenceFeatureCheckoutState__CheckedOut = 1,
		EJunoPersistenceFeatureCheckoutState__CheckedIn = 2,
	};


	// Enum /Script/JunoGameNative.EJunoPersistenceReportOptions
	enum EJunoPersistenceReportOptions
	{
		EJunoPersistenceReportOptions__None = 0,
		EJunoPersistenceReportOptions__ActorTemplateDataEnabled = 1,
		EJunoPersistenceReportOptions__ActorInstanceDataEnabled = 2,
		EJunoPersistenceReportOptions__JunoUpdateActionDataEnabled = 4,
		EJunoPersistenceReportOptions__JunoDeleteActionDataEnabled = 8,
		EJunoPersistenceReportOptions__JunoPersistenceFeaturesDataEnabled = 10,
		EJunoPersistenceReportOptions__DataEnabledDefaultFlags = 1F,
		EJunoPersistenceReportOptions__ShowReportHeader = 20,
		EJunoPersistenceReportOptions__ShowPlayspaceHeaders = 40,
		EJunoPersistenceReportOptions__ShowSubreportsHeaders = 80,
		EJunoPersistenceReportOptions__ShowTablesHeaders = 100,
		EJunoPersistenceReportOptions__ShowIndividualItemsStats = 200,
		EJunoPersistenceReportOptions__ShowAggregatedStats = 400,
		EJunoPersistenceReportOptions__ShowDefaultFlags = 5E0,
	};


	// Enum /Script/JunoGameNative.EJunoWorldConditionAICampChecksIsAssigned
	enum EJunoWorldConditionAICampChecksIsAssigned
	{
		EJunoWorldConditionAICampChecksIsAssigned__None = 0,
		EJunoWorldConditionAICampChecksIsAssigned__Assigned = 1,
		EJunoWorldConditionAICampChecksIsAssigned__Unassigned = 2,
	};


	// Enum /Script/JunoGameNative.EJunoWorldConditionMustHaveLastUsedGatheringActor
	enum EJunoWorldConditionMustHaveLastUsedGatheringActor
	{
		EJunoWorldConditionMustHaveLastUsedGatheringActor__None = 0,
		EJunoWorldConditionMustHaveLastUsedGatheringActor__IsValid = 1,
		EJunoWorldConditionMustHaveLastUsedGatheringActor__IsNotValid = 2,
	};


	// Enum /Script/JunoGameNative.EJunoWorldConditionAssignmentState
	enum EJunoWorldConditionAssignmentState
	{
		EJunoWorldConditionAssignmentState__None = 0,
		EJunoWorldConditionAssignmentState__AssignedToUserActor = 1,
		EJunoWorldConditionAssignmentState__Assigned = 2,
		EJunoWorldConditionAssignmentState__Unassigned = 3,
	};


	// Enum /Script/JunoGameNative.EJunoWorldConditionPawnType
	enum EJunoWorldConditionPawnType
	{
		EJunoWorldConditionPawnType__None = 0,
		EJunoWorldConditionPawnType__Player = 1,
		EJunoWorldConditionPawnType__Villager = 2,
		EJunoWorldConditionPawnType__EnemyMinifig = 4,
		EJunoWorldConditionPawnType__Creature = 8,
	};


	// Enum /Script/JunoGameNative.EJunoWorldConditionHasFollower
	enum EJunoWorldConditionHasFollower
	{
		EJunoWorldConditionHasFollower__Unset = 0,
		EJunoWorldConditionHasFollower__Zero = 1,
		EJunoWorldConditionHasFollower__OneOrMore = 2,
	};


	// Enum /Script/JunoGameNative.EPhysicalStrainHealthMode
	enum EPhysicalStrainHealthMode
	{
		EPhysicalStrainHealthMode__Disabled = 0,
		EPhysicalStrainHealthMode__FullIntegrityPercentageMapping = 1,
		EPhysicalStrainHealthMode__ZeroIntegrity = 2,
		EPhysicalStrainHealthMode__FullIntegrityFatigueThresholdMapping = 3,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomeThresholdTestMode
	enum EJunoAwesomeThresholdTestMode
	{
		EJunoAwesomeThresholdTestMode__LessOrEqual = 0,
		EJunoAwesomeThresholdTestMode__Less = 1,
		EJunoAwesomeThresholdTestMode__GreaterOrEqual = 2,
		EJunoAwesomeThresholdTestMode__Greater = 3,
		EJunoAwesomeThresholdTestMode__Range = 4,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomePlacementConfigType
	enum EJunoAwesomePlacementConfigType
	{
		EJunoAwesomePlacementConfigType__ItemDefinition = 0,
		EJunoAwesomePlacementConfigType__CraftingRowName = 1,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomeLevelUpgradeQueryResult
	enum EJunoAwesomeLevelUpgradeQueryResult
	{
		EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingAwesomePoints = 0,
		EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingPlayerResources = 1,
		EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingUpgradeSteps = 2,
		EJunoAwesomeLevelUpgradeQueryResult__Pass = 3,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomeConfigDeterminationType
	enum EJunoAwesomeConfigDeterminationType
	{
		EJunoAwesomeConfigDeterminationType__Biome = 0,
		EJunoAwesomeConfigDeterminationType__StaticCampTag = 1,
	};


	// Enum /Script/JunoGameNative.EJunoAwesomeLevelIncrementType
	enum EJunoAwesomeLevelIncrementType
	{
		EJunoAwesomeLevelIncrementType__LevelDelta = 0,
		EJunoAwesomeLevelIncrementType__CurrentLevel = 1,
	};


	// Enum /Script/JunoGameNative.EJunoEquipmentChangedFilterState
	enum EJunoEquipmentChangedFilterState
	{
		EJunoEquipmentChangedFilterState__Equipped = 0,
		EJunoEquipmentChangedFilterState__UnEquipped = 1,
		EJunoEquipmentChangedFilterState__Any = 2,
	};


	// Enum /Script/JunoGameNative.EImpactOrDamage_ExecutionPin
	enum EImpactOrDamage_ExecutionPin
	{
		EImpactOrDamage_ExecutionPin__LocalImpact = 0,
		EImpactOrDamage_ExecutionPin__LocalDamage = 1,
		EImpactOrDamage_ExecutionPin__OtherDamage = 2,
	};


	// Enum /Script/JunoGameNative.EUpdateAnimationTimer_ExecutionPin
	enum EUpdateAnimationTimer_ExecutionPin
	{
		EUpdateAnimationTimer_ExecutionPin__Active = 0,
		EUpdateAnimationTimer_ExecutionPin__Expired = 1,
	};


	// Enum /Script/JunoGameNative.EJunoMinifigRotationMode
	enum EJunoMinifigRotationMode
	{
		EJunoMinifigRotationMode__NoRotation = 0,
		EJunoMinifigRotationMode__ContinuousRotateToTarget = 1,
		EJunoMinifigRotationMode__CurveRotateToMovingTarget = 2,
		EJunoMinifigRotationMode__CurveRotateToStaticTarget = 3,
	};


	// Enum /Script/JunoGameNative.EJunoBedAssignmentProcessingState
	enum EJunoBedAssignmentProcessingState
	{
		EJunoBedAssignmentProcessingState__Processing = 0,
		EJunoBedAssignmentProcessingState__Ready = 1,
		EJunoBedAssignmentProcessingState__Undefined = 2,
	};


	// Enum /Script/JunoGameNative.EJunoResourceScale
	enum EJunoResourceScale
	{
		EJunoResourceScale__Invalid = 0,
		EJunoResourceScale__Small = 1,
		EJunoResourceScale__Medium = 2,
		EJunoResourceScale__Large = 3,
		EJunoResourceScale__VerySmall = 4,
		EJunoResourceScale__VeryLarge = 5,
	};


	// Enum /Script/JunoGameNative.EWorldDataAvailable
	enum EWorldDataAvailable
	{
		EWorldDataAvailable__Undefined = 0,
		EWorldDataAvailable__WasLoadedFromPersistentData = 1,
		EWorldDataAvailable__WasInitializedFromWorldMetadata = 2,
	};


	// Enum /Script/JunoGameNative.EJunoItemChangeType
	enum EJunoItemChangeType
	{
		EJunoItemChangeType__Added = 0,
		EJunoItemChangeType__Removed = 1,
		EJunoItemChangeType__ItemChanged = 2,
		EJunoItemChangeType__SlotChanged = 3,
		EJunoItemChangeType__Swapped = 4,
	};


	// Enum /Script/JunoGameNative.EJunoInventoryAcquisitionResult
	enum EJunoInventoryAcquisitionResult
	{
		EJunoInventoryAcquisitionResult__Failure = 0,
		EJunoInventoryAcquisitionResult__SystemNotReady = 1,
		EJunoInventoryAcquisitionResult__InventoryCreated = 2,
		EJunoInventoryAcquisitionResult__InventoryRestored = 3,
	};


	// Enum /Script/JunoGameNative.EJunoBuildingSnapEntryState
	enum EJunoBuildingSnapEntryState
	{
		EJunoBuildingSnapEntryState__Incompatible = 0,
		EJunoBuildingSnapEntryState__Compatible = 1,
		EJunoBuildingSnapEntryState__InRangeRejected = 2,
		EJunoBuildingSnapEntryState__InRangeValid = 3,
		EJunoBuildingSnapEntryState__Connected = 4,
	};


	// Enum /Script/JunoGameNative.EOnPlacementAction
	enum EOnPlacementAction
	{
		EOnPlacementAction__IgnoreOnly = 0,
		EOnPlacementAction__IgnoreAndDestroy = 1,
	};


	// Enum /Script/JunoGameNative.EJunoGuidedBuildingState
	enum EJunoGuidedBuildingState
	{
		EJunoGuidedBuildingState__Default = 0,
		EJunoGuidedBuildingState__Hidden = 1,
		EJunoGuidedBuildingState__Unfilled = 2,
		EJunoGuidedBuildingState__Filled = 3,
	};


	// Enum /Script/JunoGameNative.EJunoLandscapeVisualModifierType
	enum EJunoLandscapeVisualModifierType
	{
		EJunoLandscapeVisualModifierType__None = 0,
		EJunoLandscapeVisualModifierType__DirtPatch = 1,
	};


	// Enum /Script/JunoGameNative.EJunoPlayspaceMigrationFlags
	enum EJunoPlayspaceMigrationFlags
	{
		EJunoPlayspaceMigrationFlags__None = 0,
		EJunoPlayspaceMigrationFlags__NoDistanceLimiter = 1,
		EJunoPlayspaceMigrationFlags__NoTimeLimiter = 2,
	};


	// Enum /Script/JunoGameNative.EJunoAutomaticConnectionMethod
	enum EJunoAutomaticConnectionMethod
	{
		EJunoAutomaticConnectionMethod__Full = 0,
		EJunoAutomaticConnectionMethod__Below = 1,
		EJunoAutomaticConnectionMethod__Custom = 2,
	};


	// Enum /Script/JunoGameNative.EJunoDeltaFileVersion
	enum EJunoDeltaFileVersion
	{
		EJunoDeltaFileVersion__LevelDeltaCompressionMovedIntoJunoDeltaFile = 0,
		EJunoDeltaFileVersion__UpdateActionsForDeletedActorsFixed = 1,
		EJunoDeltaFileVersion__VersionPlusOne = 2,
		EJunoDeltaFileVersion__LatestVersion = 1,
	};


	// Enum /Script/JunoGameNative.EJunoDeltaActionTypes
	enum EJunoDeltaActionTypes
	{
		EJunoDeltaActionTypes__None = 0,
		EJunoDeltaActionTypes__Add = 1,
		EJunoDeltaActionTypes__Update = 2,
		EJunoDeltaActionTypes__Delete = 4,
	};


	// Enum /Script/JunoGameNative.EJunoPersistentPlayspaceSaveHandlerCheckoutState
	enum EJunoPersistentPlayspaceSaveHandlerCheckoutState
	{
		EJunoPersistentPlayspaceSaveHandlerCheckoutState__None = 0,
		EJunoPersistentPlayspaceSaveHandlerCheckoutState__CheckingOut = 1,
		EJunoPersistentPlayspaceSaveHandlerCheckoutState__CheckedOut = 2,
		EJunoPersistentPlayspaceSaveHandlerCheckoutState__CheckingIn = 3,
		EJunoPersistentPlayspaceSaveHandlerCheckoutState__CheckedIn = 4,
	};


	// Enum /Script/JunoGameNative.EJunoUIDeathType
	enum EJunoUIDeathType
	{
		EJunoUIDeathType__Standard = 0,
		EJunoUIDeathType__Permadeath = 1,
	};


	// Enum /Script/JunoGameNative.EJunoQuickbarSelectionDirection
	enum EJunoQuickbarSelectionDirection
	{
		EJunoQuickbarSelectionDirection__Next = 0,
		EJunoQuickbarSelectionDirection__Prev = 1,
	};


	// Enum /Script/JunoGameNative.EJunoPawnEmotionalStateMappingTest
	enum EJunoPawnEmotionalStateMappingTest
	{
		EJunoPawnEmotionalStateMappingTest__LessOrEqual = 0,
		EJunoPawnEmotionalStateMappingTest__GreaterOrEqual = 1,
	};


	// Enum /Script/JunoGameNative.EJunoActionExecutionConfig
	enum EJunoActionExecutionConfig
	{
		EJunoActionExecutionConfig__ExecuteEveryTime = 0,
		EJunoActionExecutionConfig__ExecuteFirstTimeOnly = 1,
		EJunoActionExecutionConfig__ExecuteReloadOnly = 2,
	};


	// Enum /Script/JunoGameNative.EMeshAuditFailureReason
	enum EMeshAuditFailureReason
	{
		EMeshAuditFailureReason__MAFR_None = 0,
		EMeshAuditFailureReason__MAFR_NeverStream = 1,
		EMeshAuditFailureReason__MAFR_HighTriRatioInLODs = 2,
		EMeshAuditFailureReason__MAFR_SimplestLODTooComplex = 4,
		EMeshAuditFailureReason__MAFR_TriDensityTooHigh = 8,
		EMeshAuditFailureReason__MAFR_PhysicsTriDensityHigh = 100,
		EMeshAuditFailureReason__MAFR_PhysicsComplexAsSimple = 200,
		EMeshAuditFailureReason__MAFR_PhysicsMeshIsHighLOD = 400,
		EMeshAuditFailureReason__MAFR_PhysicsSimpleShapeTooComplex = 800,
		EMeshAuditFailureReason__MAFR_PhysicsTooDetailedForSmallObject = 1000,
		EMeshAuditFailureReason__MAFR_PhysicsCollideAll = 2000,
	};

}
