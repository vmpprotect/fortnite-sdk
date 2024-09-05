#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoGameNative
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoGameNative.SoundBreakEvent
	// Size: 0x40 (0x40 - 0x0)
	struct FSoundBreakEvent	
	{
	public:
		FGuid UniqueID; // 0x0(0x10)
		FVector Location; // 0x10(0x18)
		int32_t BreakEventNum; // 0x28(0x4)
		float AccumulatedMass; // 0x2C(0x4)
		UPhysicalMaterial PhysMaterial; // 0x30(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.SoundCollisionEvent
	// Size: 0x58 (0x58 - 0x0)
	struct FSoundCollisionEvent	
	{
	public:
		FGuid UniqueID; // 0x0(0x10)
		FVector Location; // 0x10(0x18)
		int32_t CollisionEventNum; // 0x28(0x4)
		float AccumulatedMass; // 0x2C(0x4)
		FVector DeltaVelocity; // 0x30(0x18)
		UPhysicalMaterial PhysMaterial; // 0x48(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_EnterBuildModePreview
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_EnterBuildModePreview	
	{
	public:
		AFortPlayerController SourceController; // 0x0(0x8)
		AJunoBuilderTool BuilderTool; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoEvent_ExitBuildModePreview
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_ExitBuildModePreview	
	{
	public:
		AFortPlayerController SourceController; // 0x0(0x8)
		AJunoBuilderTool BuilderTool; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoBuildingBehaviorStateContext
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoBuildingBehaviorStateContext	
	{
	public:
		TWeakObjectPtr OverlappedPreviewComponent; // 0x0(0x8)
		FJunoBuildingMultiOverlapResult OverlapResult; // 0x8(0x10)
		TArray SupportedComponents; // 0x18(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		bool bBlockedByAssembly; // 0x38(0x1)
		bool bGuidedBuildMisplacement; // 0x39(0x1)
		bool bBlockedByActorCount; // 0x3A(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x3B(0x5) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingSupportedComponent
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoBuildingSupportedComponent	
	{
	public:
		TWeakObjectPtr Component; // 0x0(0x8)
		FJunoBuildingFloatingResult Result; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoBuildingFloatingResult
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoBuildingFloatingResult	
	{
	public:
		TArray SupportingComponents; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoTemperatureChangedEvent
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoTemperatureChangedEvent	
	{
	public:
		AActor Actor; // 0x0(0x8)
		FGameplayTag OldTemperature; // 0x8(0x4)
		FGameplayTag NewTemperature; // 0xC(0x4)
	};


	// Struct JunoGameNative.JunoTemperatureRangesChangedEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoTemperatureRangesChangedEvent	
	{
	public:
		AActor Actor; // 0x0(0x8)
		TArray NewTemperatureRanges; // 0x8(0x10)
	};


	// Struct JunoGameNative.TemperatureRange
	// Size: 0x14 (0x14 - 0x0)
	struct FTemperatureRange	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		FFloatRange Range; // 0x4(0x10)
	};


	// Struct JunoGameNative.JunoEvent_TemperatureChanged
	// Size: 0xC (0xC - 0x0)
	struct FJunoEvent_TemperatureChanged	
	{
	public:
		FJunoWeatherLocation Location; // 0x0(0x2)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FGameplayTag NewTemperature; // 0x4(0x4)
		float NewFloatTemperature; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoWeatherLocation
	// Size: 0x2 (0x2 - 0x0)
	struct FJunoWeatherLocation	
	{
	public:
		EJunoBiome Biome; // 0x0(0x1)
		EJunoBiomeHabitat Habitat; // 0x1(0x1)
	};


	// Struct JunoGameNative.JunoEvent_WeatherPhaseChanged
	// Size: 0x78 (0x78 - 0x0)
	struct FJunoEvent_WeatherPhaseChanged	
	{
	public:
		FJunoWeatherLocation Location; // 0x0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FJunoWeatherPhase NewWeatherPhase; // 0x8(0x38)
		FJunoWeatherPhase NextWeatherPhase; // 0x40(0x38)
	};


	// Struct JunoGameNative.JunoWeatherPhase
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoWeatherPhase	
	{
	public:
		FGameplayTag WeatherTypeName; // 0x0(0x4)
		float TransitionIn; // 0x4(0x4)
		float TransitionOut; // 0x8(0x4)
		float WindDirectionDegree; // 0xC(0x4)
		float duration; // 0x10(0x4)
		float WeatherIntensity; // 0x14(0x4)
		float WindSpeed; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		double GameTimeWeatherEnds; // 0x20(0x8)
		FGameplayTag MorningTemperature; // 0x28(0x4)
		FGameplayTag DayTemperature; // 0x2C(0x4)
		FGameplayTag EveningTemperature; // 0x30(0x4)
		FGameplayTag NightTemperature; // 0x34(0x4)
	};


	// Struct JunoGameNative.JunoCampAwesomeStatsData
	// Size: 0x14 (0x14 - 0x0)
	struct FJunoCampAwesomeStatsData	
	{
	public:
		int32_t CurrentAwesomePoints; // 0x0(0x4)
		int32_t AwesomeLevelFloor; // 0x4(0x4)
		int32_t AwesomeLevel; // 0x8(0x4)
		int32_t MaxAwesomeLevel; // 0xC(0x4)
		bool bIsFromPersistence; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAwesomeLevelChangeData
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoAwesomeLevelChangeData	
	{
	public:
		int32_t NewAwesomeLevel; // 0x0(0x4)
		int32_t OldAwesomeLevel; // 0x4(0x4)
		int32_t CurrentAwesomePoints; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		AJunoCampActor OwningCamp; // 0x10(0x8)
	};


	// Struct JunoGameNative.JunoAwesomePointModificationData
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoAwesomePointModificationData	
	{
	public:
		int32_t AwesomePointAmount; // 0x0(0x4)
		int32_t AwesomePointsPostModification; // 0x4(0x4)
		AActor SourceActor; // 0x8(0x8)
		AActor TargetActor; // 0x10(0x8)
		EJunoAwesomePointModificationContext ModificationContext; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		AJunoCampActor OwningCamp; // 0x20(0x8)
	};


	// Struct JunoGameNative.JunoCampRemovalStatusData
	// Size: 0xC (0xC - 0x0)
	struct FJunoCampRemovalStatusData	
	{
	public:
		bool bIsSoftRemoved; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float RemainingRealSecondsBeforeHardRemoval; // 0x4(0x4)
		bool bIsInitialized; // 0x8(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoMoodStateData
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoMoodStateData	
	{
	public:
		FGameplayTag MoodTag; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoMoodReactionPayload
	// Size: 0xC (0xC - 0x0)
	struct FJunoMoodReactionPayload	
	{
	public:
		FGameplayTag MoodReactionTag; // 0x0(0x4)
		FGameplayTag SoundLibraryTag; // 0x4(0x4)
		FGameplayCueTag GameplayCueTag; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoRecruitmentObjectAssignedData
	// Size: 0x78 (0x78 - 0x0)
	struct FJunoRecruitmentObjectAssignedData	
	{
	public:
		FGuid CampGuid; // 0x0(0x10)
		FGameplayTag UniqueAIIdentifier; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FUniqueNetIdRepl PlayerNetId; // 0x18(0x30)
		FText DisplayText; // 0x48(0x10)
		TWeakObjectPtr NPCPortrait; // 0x58(0x20)
	};


	// Struct JunoGameNative.JunoWeatherLocationChangedEvent
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWeatherLocationChangedEvent	
	{
	public:
		AActor Actor; // 0x0(0x8)
		FJunoWeatherLocation OldLocation; // 0x8(0x2)
		FJunoWeatherLocation NewLocation; // 0xA(0x2)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.GuidedBuildingMessageBase
	// Size: 0x8 (0x8 - 0x0)
	struct FGuidedBuildingMessageBase	
	{
	public:
		TWeakObjectPtr GuidedBuildingActor; // 0x0(0x8)
	};


	// Struct JunoGameNative.GuidedBuildingUpdate
	// Inherited from FGuidedBuildingMessageBase
	// Size: 0x38 (0x40 - 0x8)
	struct FGuidedBuildingUpdate : public FGuidedBuildingMessageBase	
	{
	public:
		FJunoStageKey StageKey; // 0x8(0x8)
		FJunoStageKey CurrentStageKey; // 0x10(0x8)
		int32_t TotalNumberOfStagesInSection; // 0x18(0x4)
		int32_t TotalNumberOfSections; // 0x1C(0x4)
		int32_t CurrentStageInSet; // 0x20(0x4)
		int32_t TotalNumberOfStagesInSet; // 0x24(0x4)
		int32_t CurrentNumberOfSnapsInStage; // 0x28(0x4)
		int32_t TotalNumberOfSnapsInStage; // 0x2C(0x4)
		int32_t CurrentNumberOfSnapsInSection; // 0x30(0x4)
		int32_t TotalNumberOfSnapsInSection; // 0x34(0x4)
		int32_t CurrentNumberOfSnapsInSet; // 0x38(0x4)
		int32_t TotalNumberOfSnapsInSet; // 0x3C(0x4)
	};


	// Struct JunoGameNative.JunoStageKey
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoStageKey	
	{
	public:
		int32_t SectionIndex; // 0x0(0x4)
		int32_t StageIndex; // 0x4(0x4)
	};


	// Struct JunoGameNative.AssembledMeshSchemaData_AnimDataAssets
	// Inherited from FAssembledMeshSchemaData
	// Size: 0x50 (0x50 - 0x0)
	struct FAssembledMeshSchemaData_AnimDataAssets : public FAssembledMeshSchemaData	
	{
	public:
		TMap DataAssetMap; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoBiomeInfoQueryResult
	// Size: 0x48 (0x48 - 0x0)
	struct FJunoBiomeInfoQueryResult	
	{
	public:
		EJunoBiome PrimaryBiome; // 0x0(0x1)
		EJunoBiome SecondaryBiome; // 0x1(0x1)
		EJunoBiomeHabitat PrimaryHabitat; // 0x2(0x1)
		EJunoBiomeHabitat SecondaryHabitat; // 0x3(0x1)
		EJunoCaveType CaveType; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float BiomeMix; // 0x8(0x4)
		float HabitatMix; // 0xC(0x4)
		bool bIsWater; // 0x10(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float WaterDepth; // 0x14(0x4)
		float WaterSurfaceHeight; // 0x18(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		AWaterBody WaterBody; // 0x20(0x8)
		FGameplayTagContainer Tags; // 0x28(0x20)
	};


	// Struct JunoGameNative.JunoPlayerActiveEffectsSaveData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoPlayerActiveEffectsSaveData	
	{
	public:
		TArray ActiveBuffs; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoActiveBuffData
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoActiveBuffData	
	{
	public:
		UClass GEClass; // 0x0(0x8)
		TMap SetByCallerTagMagnitudes; // 0x8(0x50)
	};


	// Struct JunoGameNative.JunoPlayerSaveData
	// Size: 0xF8 (0xF8 - 0x0)
	struct FJunoPlayerSaveData	
	{
	public:
		FVector SpawnPosition; // 0x0(0x18)
		FVector OriginalSpawnPosition; // 0x18(0x18)
		FRotator Rotation; // 0x30(0x18)
		FJunoInventoryHandle InventoryHandle; // 0x48(0x24)
		unsigned char UnknownData04_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		TArray CompletedFirstTimeConversationNPCIdentifiers; // 0x70(0x10)
		int32_t WorldVisitCount; // 0x80(0x4)
		FJunoPlayerStats PlayerStats; // 0x84(0x10)
		unsigned char UnknownData05_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FJunoPlayerCheckpoint CheckpointInfo; // 0x98(0x38)
		int32_t CampCreatedCount; // 0xD0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FVector LastCaveTeleporterLocation; // 0xD8(0x18)
		bool bPlayerDead; // 0xF0(0x1)
		unsigned char UnknownData07_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoPlayerCheckpoint
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoPlayerCheckpoint	
	{
	public:
		FGuid CheckpointGUID; // 0x0(0x10)
		TWeakObjectPtr CheckpointActor; // 0x10(0x8)
		FVector CheckpointLocation; // 0x18(0x18)
		bool bHasCheckpointActor; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoPlayerStats
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoPlayerStats	
	{
	public:
		float Health; // 0x0(0x4)
		float Hunger; // 0x4(0x4)
		int32_t Lives; // 0x8(0x4)
		int32_t ServerTimePlayedInWorldSeconds; // 0xC(0x4)
	};


	// Struct JunoGameNative.JunoInventoryHandle
	// Size: 0x24 (0x24 - 0x0)
	struct FJunoInventoryHandle	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		TWeakObjectPtr Inventory; // 0x10(0x8)
		unsigned char UnknownData01_7[0xC]; // 0x18(0xC) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoLocalPlayerProximityDistanceSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoLocalPlayerProximityDistanceSettings	
	{
	public:
		float DistanceToCheck; // 0x0(0x4)
		float DistanceCheckInterval; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoMarker
	// Size: 0xC0 (0xC0 - 0x0)
	struct FJunoMarker	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		bool bPersistent; // 0x10(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FVector Location; // 0x18(0x18)
		UTexture Icon; // 0x30(0x8)
		FColor Color; // 0x38(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FText MarkerText; // 0x40(0x10)
		bool bOverrideColor; // 0x50(0x1)
		bool bEnableMarkerCustomization; // 0x51(0x1)
		bool bAllowMarkerSelection; // 0x52(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x53(0x1) UNKNOWN PROPERTY
		float TimeLeft; // 0x54(0x4)
		FUniqueNetIdRepl AttachedPlayerNetId; // 0x58(0x30)
		FGuid VolumeId; // 0x88(0x10)
		FName SettingsName; // 0x98(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic MaterialInstanceDynamic; // 0xA0(0x8)
		FName IconParamName; // 0xA8(0x4)
		FName ColorParamName; // 0xAC(0x4)
		FDataTableRowHandle CustomizationOptionsHandle; // 0xB0(0x10)
	};


	// Struct JunoGameNative.JunoActorLocationInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoActorLocationInfo	
	{
	public:
		FGuid ActorGuid; // 0x0(0x10)
		FGuid TileGUID; // 0x10(0x10)
		FVector Location; // 0x20(0x18)
		EJunoActorLocationInfoResolvedState State; // 0x38(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x40(0x20)
		int32_t Index; // 0x60(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_GameEventMessage
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoEvent_GameEventMessage	
	{
	public:
		FText GameEventText; // 0x0(0x10)
		FUniqueNetIdRepl TargetPlayerId; // 0x10(0x30)
	};


	// Struct JunoGameNative.JunoEvent_PlacementData
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_PlacementData	
	{
	public:
		bool bQuickBuild; // 0x0(0x1)
	};


	// Struct JunoGameNative.JunoEvent_PlacementStarted
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_PlacementStarted	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_BuildingExited
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_BuildingExited	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_BuildingPrebuild
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_BuildingPrebuild	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_QuickbuildRecipeChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_QuickbuildRecipeChanged	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_QuickBuildSelectionData
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_QuickBuildSelectionData	
	{
	public:
		UJunoQuickBuildSelectionData QuickBuildSelectionData; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_QuickBuildSelectionResult
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoEvent_QuickBuildSelectionResult	
	{
	public:
		FName SelectedRecipe; // 0x0(0x4)
	};


	// Struct JunoGameNative.BuildingRecipeListItemSelected
	// Size: 0x8 (0x8 - 0x0)
	struct FBuildingRecipeListItemSelected	
	{
	public:
		FName RecipeName; // 0x0(0x4)
		bool bCanCraft; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_MCPItemPlacedInNewWorld
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_MCPItemPlacedInNewWorld	
	{
	public:
		int32_t RemainingWorlds; // 0x0(0x4)
		int32_t TotalAllowedWorlds; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoEvent_CustomIndicatorChangedState
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_CustomIndicatorChangedState	
	{
	public:
		TWeakObjectPtr IndicatedActor; // 0x0(0x8)
		FGameplayTag CustomIndicatorTag; // 0x8(0x4)
		EJunoCustomIndicatorState IndicatorState; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_InputMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_InputMessage	
	{
	public:
		AFortPlayerController SourceController; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_OpenHudMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_OpenHudMessage	
	{
	public:
		AFortPlayerController SourceController; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_CloseHudMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_CloseHudMessage	
	{
	public:
		AFortPlayerController SourceController; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_PrimaryContentPushedMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_PrimaryContentPushedMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_PrimaryContentPoppedMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_PrimaryContentPoppedMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_OpenBuildingMenuMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_OpenBuildingMenuMessage	
	{
	public:
		AFortPlayerController SourceController; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_OpenMapMenuMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_OpenMapMenuMessage	
	{
	public:
		AFortPlayerController SourceController; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_OpenInventoryMenuMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_OpenInventoryMenuMessage	
	{
	public:
		AFortPlayerController SourceController; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_OpenShopMenuMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_OpenShopMenuMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CloseShopMenuMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_CloseShopMenuMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_OpenEngagementMenuMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_OpenEngagementMenuMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_OpenInGameFrontendMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_OpenInGameFrontendMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_HideFTUEQuestTrackingMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_HideFTUEQuestTrackingMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_OpenBedAssignmentMenuMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_OpenBedAssignmentMenuMessage	
	{
	public:
		AActor BedActor; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_OpenEscapeMenuMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_OpenEscapeMenuMessage	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_InventoryItemExecuted
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoEvent_InventoryItemExecuted	
	{
	public:
		UFortItem ItemExecuted; // 0x0(0x8)
		FUniqueNetIdRepl UniquePlayerId; // 0x8(0x30)
	};


	// Struct JunoGameNative.JunoEvent_InventoryItemSelected
	// Size: 0x1C (0x1C - 0x0)
	struct FJunoEvent_InventoryItemSelected	
	{
	public:
		FGuid ItemSelected; // 0x0(0x10)
		unsigned char UnknownData01_7[0xC]; // 0x10(0xC) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_InventoryMenuOpen
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_InventoryMenuOpen	
	{
	public:
		AActor InventoryObject; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_InventoryMenuClose
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_InventoryMenuClose	
	{
	public:
		AActor InventoryObject; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_EmptyHands
	// Size: 0xC (0xC - 0x0)
	struct FJunoEvent_EmptyHands	
	{
	public:
		unsigned char UnknownData01_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_FreeBuildItemSpawned
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_FreeBuildItemSpawned	
	{
	public:
		UFortItemDefinition SpawnedItemDefinition; // 0x0(0x8)
	};


	// Struct JunoGameNative.PushMontageData
	// Size: 0xD8 (0xD8 - 0x0)
	struct FPushMontageData	
	{
	public:
		FGameplayTagRequirements MontageDataRequirement; // 0x0(0x88)
		TMap SizeToMontageMap; // 0x88(0x50)
	};


	// Struct JunoGameNative.JunoAccountItemDefinitionOverride
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoAccountItemDefinitionOverride	
	{
	public:
		UFortAccountItemDefinition OverridenAccountItemDefinition; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoActorAttributeOverrideData
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FJunoActorAttributeOverrideData : public FTableRowBase	
	{
	public:
		FName PrimaryLootTier; // 0x8(0x4)
		FName SecondaryLootTier; // 0xC(0x4)
		FGameplayTag DamageSurfaceTypeTag; // 0x10(0x4)
		float Health; // 0x14(0x4)
		float ImpulseMagnitudeDamageThreshold; // 0x18(0x4)
		FName PhysicsDamageSurfaceRatioRowName; // 0x1C(0x4)
	};


	// Struct JunoGameNative.JunoActorWorldLocationPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoActorWorldLocationPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoActorLocationSaveData ActorWorldLocationSaveData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoActorLocationSaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoActorLocationSaveData	
	{
	public:
		TMap ActorWorldLocations; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoActorLocationsData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoActorLocationsData	
	{
	public:
		TArray LocationInfos; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoAIPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x1E0 (0x1E0 - 0x0)
	struct FJunoAIPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FSavedAIDataManager SavedAIData; // 0x0(0x1E0)
	};


	// Struct JunoGameNative.SavedAIDataManager
	// Size: 0x1E0 (0x1E0 - 0x0)
	struct FSavedAIDataManager	
	{
	public:
		TMap SavedAIDataPerUniqueAIIdentifier; // 0x0(0x50)
		TMap SavedCreatureDataPerUniqueAIIdentifier; // 0x50(0x50)
		FSavedGlobalAIData SavedGlobalAIData; // 0xA0(0x140)
	};


	// Struct JunoGameNative.SavedGlobalAIData
	// Size: 0x140 (0x140 - 0x0)
	struct FSavedGlobalAIData	
	{
	public:
		FSavedGlobalAIData_FTUE FTUE; // 0x0(0x28)
		FSavedGlobalAIData_GenericFTUEs GenericFTUEs; // 0x28(0x50)
		FSavedGlobalAIData_Rewards Rewards; // 0x78(0x60)
		FSavedGlobalAIData_WorldSettings WorldSettings; // 0xD8(0x5)
		unsigned char UnknownData01_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		FSavedGlobalAIData_RecruitmentObjectData RecruitmentObjectData; // 0xE0(0x50)
		FSavedGlobalAIData_DynamicUniqueAIManager DynamicUniqueAIManager; // 0x130(0x10)
	};


	// Struct JunoGameNative.SavedAIData_BaseType
	// Size: 0x1 (0x1 - 0x0)
	struct FSavedAIData_BaseType	
	{
	public:
	};


	// Struct JunoGameNative.SavedGlobalAIData_DynamicUniqueAIManager
	// Inherited from FSavedAIData_BaseType
	// Size: 0x10 (0x10 - 0x0)
	struct FSavedGlobalAIData_DynamicUniqueAIManager : public FSavedAIData_BaseType	
	{
	public:
		TArray AllAIs; // 0x0(0x10)
	};


	// Struct JunoGameNative.SavedGlobalAIData_DynamicUniqueAI
	// Inherited from FSavedAIData_BaseType
	// Size: 0x8 (0x8 - 0x0)
	struct FSavedGlobalAIData_DynamicUniqueAI : public FSavedAIData_BaseType	
	{
	public:
		FGameplayTag AssignedUniqueAIIdentifier; // 0x0(0x4)
		FGameplayTag DescriptorTag; // 0x4(0x4)
	};


	// Struct JunoGameNative.SavedGlobalAIData_RecruitmentObjectData
	// Inherited from FSavedAIData_BaseType
	// Size: 0x50 (0x50 - 0x0)
	struct FSavedGlobalAIData_RecruitmentObjectData : public FSavedAIData_BaseType	
	{
	public:
		TMap RecruitmentObjectToAssignedData; // 0x0(0x50)
	};


	// Struct JunoGameNative.SavedGlobalAIData_WorldSettings
	// Inherited from FSavedAIData_BaseType
	// Size: 0x5 (0x5 - 0x0)
	struct FSavedGlobalAIData_WorldSettings : public FSavedAIData_BaseType	
	{
	public:
		bool bEnableFriendlyCreatures; // 0x0(0x1)
		bool bEnableHostileCreatures; // 0x1(0x1)
		bool bEnableFriendlyNPCs; // 0x2(0x1)
		bool bRecruitedCreaturePermaDeath; // 0x3(0x1)
		bool bEnableEliteHostileCreatures; // 0x4(0x1)
	};


	// Struct JunoGameNative.SavedGlobalAIData_Rewards
	// Inherited from FSavedAIData_BaseType
	// Size: 0x60 (0x60 - 0x0)
	struct FSavedGlobalAIData_Rewards : public FSavedAIData_BaseType	
	{
	public:
		TMap CountOfRewardedLootTierGroups; // 0x0(0x50)
		TArray DataPerPlayer; // 0x50(0x10)
	};


	// Struct JunoGameNative.SavedGlobalAIData_RewardsPerPlayer
	// Size: 0x80 (0x80 - 0x0)
	struct FSavedGlobalAIData_RewardsPerPlayer	
	{
	public:
		FUniqueNetIdRepl PlayerNetId; // 0x0(0x30)
		TMap CountOfRewardedLootTierGroups; // 0x30(0x50)
	};


	// Struct JunoGameNative.SavedGlobalAIData_GenericFTUEs
	// Inherited from FSavedAIData_BaseType
	// Size: 0x50 (0x50 - 0x0)
	struct FSavedGlobalAIData_GenericFTUEs : public FSavedAIData_BaseType	
	{
	public:
		TMap FTUEPerTag; // 0x0(0x50)
	};


	// Struct JunoGameNative.SavedGlobalAIData_FTUE
	// Inherited from FSavedAIData_BaseType
	// Size: 0x28 (0x28 - 0x0)
	struct FSavedGlobalAIData_FTUE : public FSavedAIData_BaseType	
	{
	public:
		FGameplayTag PickedFTUENPC; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector FTUEStartLocation; // 0x8(0x18)
		bool bFTUEWasEverCompleted; // 0x20(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.SavedCreatureData
	// Size: 0x40 (0x40 - 0x0)
	struct FSavedCreatureData	
	{
	public:
		FSavedCreatureData_Camp Camp; // 0x0(0x18)
		FSavedGenericAIData_Friendship Friendship; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FSavedCreatureData_SoftRemoval SoftRemoval; // 0x20(0x10)
		FSavedCreatureData_Customizations Customizations; // 0x30(0x10)
	};


	// Struct JunoGameNative.SavedCreatureData_Customizations
	// Inherited from FSavedAIData_BaseType
	// Size: 0x10 (0x10 - 0x0)
	struct FSavedCreatureData_Customizations : public FSavedAIData_BaseType	
	{
	public:
		FText CustomName; // 0x0(0x10)
	};


	// Struct JunoGameNative.SavedCreatureData_SoftRemoval
	// Inherited from FSavedAIData_BaseType
	// Size: 0x10 (0x10 - 0x0)
	struct FSavedCreatureData_SoftRemoval : public FSavedAIData_BaseType	
	{
	public:
		int64_t SoftRemovedElapsedJunoGameTime; // 0x0(0x8)
		int64_t NoInteractionsElapsedJunoGameTime; // 0x8(0x8)
	};


	// Struct JunoGameNative.SavedGenericAIData_Friendship
	// Inherited from FSavedAIData_BaseType
	// Size: 0x4 (0x4 - 0x0)
	struct FSavedGenericAIData_Friendship : public FSavedAIData_BaseType	
	{
	public:
		float Value; // 0x0(0x4)
	};


	// Struct JunoGameNative.SavedCreatureData_Camp
	// Inherited from FSavedAIData_BaseType
	// Size: 0x18 (0x18 - 0x0)
	struct FSavedCreatureData_Camp : public FSavedAIData_BaseType	
	{
	public:
		FGuid UniqueGuid; // 0x0(0x10)
		int64_t AssignedJunoGameTime; // 0x10(0x8)
	};


	// Struct JunoGameNative.SavedAIData
	// Size: 0x1B8 (0x1B8 - 0x0)
	struct FSavedAIData	
	{
	public:
		FSavedAIData_Tokens Tokens; // 0x0(0x20)
		FSavedAIData_Camp Camp; // 0x20(0x88)
		FSavedAIData_SoftRemoval SoftRemoval; // 0xA8(0x30)
		FSavedAIData_Resources Resources; // 0xD8(0x98)
		FSavedAIData_Merchant Merchant; // 0x170(0x20)
		FSavedAIData_WorldSpawn WorldSpawn; // 0x190(0x28)
	};


	// Struct JunoGameNative.SavedAIData_WorldSpawn
	// Inherited from FSavedAIData_BaseType
	// Size: 0x28 (0x28 - 0x0)
	struct FSavedAIData_WorldSpawn : public FSavedAIData_BaseType	
	{
	public:
		FGuid PointProviderGuid; // 0x0(0x10)
		int64_t AssignationEndGameTime; // 0x10(0x8)
		FString EventDataPath; // 0x18(0x10)
	};


	// Struct JunoGameNative.SavedAIData_Merchant
	// Inherited from FSavedAIData_BaseType
	// Size: 0x20 (0x20 - 0x0)
	struct FSavedAIData_Merchant : public FSavedAIData_BaseType	
	{
	public:
		FPrimaryAssetId WantItemId; // 0x0(0x8)
		TArray StockEntries; // 0x8(0x10)
		float StockRefreshTimeRemaining; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.SavedAIData_Merchant_StockEntry
	// Size: 0xC (0xC - 0x0)
	struct FSavedAIData_Merchant_StockEntry	
	{
	public:
		int32_t StockQuantity; // 0x0(0x4)
		FPrimaryAssetId StockSaleItemId; // 0x4(0x8)
	};


	// Struct JunoGameNative.SavedAIData_Resources
	// Inherited from FSavedAIData_BaseType
	// Size: 0x98 (0x98 - 0x0)
	struct FSavedAIData_Resources : public FSavedAIData_BaseType	
	{
	public:
		TMap GeneratingLootTierGroups; // 0x0(0x50)
		TArray GeneratedItems; // 0x50(0x10)
		int32_t GeneratedLootCallsSinceLastRefresh; // 0x60(0x4)
		FPrimaryAssetId LastUsedGatheringActorItemId; // 0x64(0x8)
		FName LastGeneratedLootTier; // 0x6C(0x4)
		FJunoInventoryHandle SavedFullInventoryHandle; // 0x70(0x24)
		unsigned char UnknownData01_7[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.SavedAIData_Resources_GeneratedItem
	// Size: 0xC (0xC - 0x0)
	struct FSavedAIData_Resources_GeneratedItem	
	{
	public:
		FPrimaryAssetId PrimaryAssetId; // 0x0(0x8)
		int32_t Count; // 0x8(0x4)
	};


	// Struct JunoGameNative.SavedAIData_SoftRemoval
	// Inherited from FSavedAIData_BaseType
	// Size: 0x30 (0x30 - 0x0)
	struct FSavedAIData_SoftRemoval : public FSavedAIData_BaseType	
	{
	public:
		FGameplayTagContainer SoftRemovedReasons; // 0x0(0x20)
		int64_t SoftRemovedElapsedJunoGameTime; // 0x20(0x8)
		int64_t NoInteractionsElapsedJunoGameTime; // 0x28(0x8)
	};


	// Struct JunoGameNative.SavedAIData_Camp
	// Inherited from FSavedAIData_BaseType
	// Size: 0x88 (0x88 - 0x0)
	struct FSavedAIData_Camp : public FSavedAIData_BaseType	
	{
	public:
		FGuid UniqueGuid; // 0x0(0x10)
		int64_t AssignedJunoGameTime; // 0x10(0x8)
		bool bWasRecruitedRemotely; // 0x18(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer SpawnReasons; // 0x20(0x20)
		FGameplayTag Role; // 0x40(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FUniqueNetIdRepl AttachedPlayerNetId; // 0x48(0x30)
		int64_t LastSpawnTime; // 0x78(0x8)
		EJunoBiome AttachedBiome; // 0x80(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.SavedAIData_Tokens
	// Inherited from FSavedAIData_BaseType
	// Size: 0x20 (0x20 - 0x0)
	struct FSavedAIData_Tokens : public FSavedAIData_BaseType	
	{
	public:
		FGameplayTagContainer SavedTokens; // 0x0(0x20)
	};


	// Struct JunoGameNative.JunoWeaponEssenceData
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FJunoWeaponEssenceData : public FTableRowBase	
	{
	public:
		TWeakObjectPtr WeaponDefinition; // 0x8(0x20)
		int32_t EssenceSlotCount; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAnimalIconsRow
	// Inherited from FTableRowBase
	// Size: 0x78 (0x80 - 0x8)
	struct FJunoAnimalIconsRow : public FTableRowBase	
	{
	public:
		FGameplayTag AnimalGameplayTag; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText AnimalDescription; // 0x10(0x10)
		TWeakObjectPtr SmallIcon; // 0x20(0x20)
		TWeakObjectPtr LargeIcon; // 0x40(0x20)
		TWeakObjectPtr FullScreenIcon; // 0x60(0x20)
	};


	// Struct JunoGameNative.JunoAnimalRandomNameRow
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FJunoAnimalRandomNameRow : public FTableRowBase	
	{
	public:
		TArray AnimalNames; // 0x8(0x10)
		FGameplayTagContainer AllowedAIDescriptorTags; // 0x18(0x20)
	};


	// Struct JunoGameNative.JunoAwesomeInteractionConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FJunoAwesomeInteractionConfigTableRow : public FTableRowBase	
	{
	public:
		int32_t AwesomePointAdjustment; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAwesomePlacementCategoryConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FJunoAwesomePlacementCategoryConfigTableRow : public FTableRowBase	
	{
	public:
		FGameplayTag BuildingCategory; // 0x8(0x4)
		int32_t AwesomePointsToContribute; // 0xC(0x4)
	};


	// Struct JunoGameNative.JunoAwesomeUpgradeResourceCost
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoAwesomeUpgradeResourceCost	
	{
	public:
		TWeakObjectPtr ResourceCostItemDefinition; // 0x0(0x20)
		int32_t ItemAmount; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAwesomeUpgradeBuiltObjectsRequirement
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoAwesomeUpgradeBuiltObjectsRequirement	
	{
	public:
		EJunoAwesomeUpgradeBuiltObjectsRequirementType RequirementType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName CraftingRowName; // 0x4(0x4)
		FGameplayTagQuery ItemDefinitionTagQuery; // 0x8(0x48)
		int32_t ItemAmount; // 0x50(0x4)
		int32_t LastCalculatedItemAmount; // 0x54(0x4)
	};


	// Struct JunoGameNative.JunoAwesomeUpgradeStep
	// Size: 0xC8 (0xC8 - 0x0)
	struct FJunoAwesomeUpgradeStep	
	{
	public:
		EJunoAwesomeUpgradeStepType StepType; // 0x0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FJunoAwesomeUpgradeBuiltObjectsRequirement RequiredBuiltObjects; // 0x8(0x58)
		FGameplayTag RequiredPersistentTag; // 0x60(0x4)
		FName RequiredWorldReaction; // 0x64(0x4)
		FString RequiredQuestID; // 0x68(0x10)
		EJunoAwesomeUpgradeRecruitmentRequirementType RequiredRecruitmentType; // 0x78(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		int32_t RequiredRecruitmentCount; // 0x7C(0x4)
		FText UpgradeStepName; // 0x80(0x10)
		FText UpgradeStepDescription; // 0x90(0x10)
		TWeakObjectPtr UpgradeStepIcon; // 0xA0(0x20)
		FGameplayTag UpgradeStepIdentifier; // 0xC0(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAwesomeUpgradeStage
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoAwesomeUpgradeStage	
	{
	public:
		TArray UpgradeSteps; // 0x0(0x10)
		FText UpgradeStageName; // 0x10(0x10)
		FText UpgradeStageDescription; // 0x20(0x10)
		TWeakObjectPtr UpgradeStageIcon; // 0x30(0x20)
	};


	// Struct JunoGameNative.JunoAwesomeUpgradeStageTracker
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoAwesomeUpgradeStageTracker	
	{
	public:
		TArray UpgradeStages; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoAwesomeUpgradeRequirements
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoAwesomeUpgradeRequirements	
	{
	public:
		TArray ResourceCostList; // 0x0(0x10)
		FJunoAwesomeUpgradeStageTracker UpgradeStageTracker; // 0x10(0x10)
	};


	// Struct JunoGameNative.JunoAwesomePoiConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FJunoAwesomePoiConfigTableRow : public FTableRowBase	
	{
	public:
		FGameplayTag ConfigKey; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray AwesomePointGoals; // 0x10(0x10)
		TArray UpgradeRequirements; // 0x20(0x10)
	};


	// Struct JunoGameNative.JunoBarterSaleItemData
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoBarterSaleItemData	
	{
	public:
		TWeakObjectPtr SaleItemDefinition; // 0x0(0x20)
		int32_t SaleItemBulkQuantity; // 0x20(0x4)
		int32_t WantItemQuantity; // 0x24(0x4)
	};


	// Struct JunoGameNative.JunoBarterPricingData
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FJunoBarterPricingData : public FTableRowBase	
	{
	public:
		TWeakObjectPtr WantItemDefinition; // 0x8(0x20)
		TArray SaleItemDatas; // 0x28(0x10)
	};


	// Struct JunoGameNative.JunoWaterLocationResult
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoWaterLocationResult	
	{
	public:
		FVector Location; // 0x0(0x18)
		EJunoBiomeHabitat WaterType; // 0x18(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FVector Direction; // 0x20(0x18)
		float Distance; // 0x38(0x4)
		int32_t DirectionMaskIndex; // 0x3C(0x4)
		bool bFoundWater; // 0x40(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		AWaterBody WaterBody; // 0x48(0x8)
	};


	// Struct JunoGameNative.JunoDebugWorldInfoResult
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoDebugWorldInfoResult	
	{
	public:
		FText AdventureSeed; // 0x0(0x10)
		FText TileSet; // 0x10(0x10)
		FText TileName; // 0x20(0x10)
		FText BiomeName; // 0x30(0x10)
	};


	// Struct JunoGameNative.JunoWorldAnalyticsInfoResult
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoWorldAnalyticsInfoResult	
	{
	public:
		FString TileName; // 0x0(0x10)
		FVector NormalizedTileLocation; // 0x10(0x18)
	};


	// Struct JunoGameNative.JunoBoneMaskInstanceEntry
	// Size: 0xC (0xC - 0x0)
	struct FJunoBoneMaskInstanceEntry	
	{
	public:
		FName BodyPartName; // 0x0(0x4)
		float LocalSpaceWeight; // 0x4(0x4)
		float MeshSpaceWeight; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoRelevantActorTrackingData
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoRelevantActorTrackingData	
	{
	public:
		int32_t NetRelevantActorCount; // 0x0(0x4)
		int32_t UniqueActorCount; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoBuildingMetricsClientPermissions
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoBuildingMetricsClientPermissions	
	{
	public:
		FInt32Vector Location; // 0x0(0xC)
		int32_t NetRelevantActorCount; // 0xC(0x4)
		int32_t UniqueActorCount; // 0x10(0x4)
		int8_t BuildBudgetUsagePercent; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoTrackedActorKey
	// Size: 0xC (0xC - 0x0)
	struct FJunoTrackedActorKey	
	{
	public:
		FIntVector LocationKey; // 0x0(0xC)
	};


	// Struct JunoGameNative.JunoTrackedActor
	// Size: 0x1C (0x1C - 0x0)
	struct FJunoTrackedActor	
	{
	public:
		TWeakObjectPtr Actor; // 0x0(0x8)
		FJunoTrackedActorKey ActorKey; // 0x8(0xC)
		float InitialNetRelevanceDistance; // 0x14(0x4)
		int32_t NumberOfRelevantActors; // 0x18(0x4)
	};


	// Struct JunoGameNative.JunoBuildingMetricQuery
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoBuildingMetricQuery	
	{
	public:
		FVector Location; // 0x0(0x18)
	};


	// Struct JunoGameNative.JunoTrackedActorRefreshmentOptions
	// Size: 0xC (0xC - 0x0)
	struct FJunoTrackedActorRefreshmentOptions	
	{
	public:
		EJunoTrackedActorRefreshReason Reason; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr ActorRequiringRefresh; // 0x4(0x8)
	};


	// Struct JunoGameNative.JunoBuildingActorSparseClassData
	// Inherited from FBuildingPropActorClassData -> FBuildingTimeOfDayLightsActorClassData -> FBuildingSMActorClassData -> FBuildingActorClassData -> FUserOptionDefinitionContainer
	// Size: 0x250 (0x4A0 - 0x250)
	struct FJunoBuildingActorSparseClassData : public FBuildingPropActorClassData	
	{
	public:
		FVector BuildingGridSizeOverride; // 0x250(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
		FTransform BuildingPivotOffset; // 0x270(0x60)
		FVector BuildingGridSnapOffset; // 0x2D0(0x18)
		FJunoBuildingBehaviorGridLimits BuildingGridOffsetLimits; // 0x2E8(0x10)
		FJunoBuilderToolInteractionActorClassSet BuildingOverlappableClasses; // 0x2F8(0xA0)
		FJunoBuilderToolInteractionActorClassSet BuildingSupportableClasses; // 0x398(0xA0)
		TArray BuildingSnapEntries; // 0x438(0x10)
		TMap BuildingPreviewComponentTemplates; // 0x448(0x50)
		unsigned char UnknownData03_7[0x8]; // 0x498(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingSnapEntry
	// Size: 0x100 (0x100 - 0x0)
	struct FJunoBuildingSnapEntry	
	{
	public:
		FName Label; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x8(0x20)
		unsigned char UnknownData03_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FTransform ToActor; // 0x30(0x60)
		FVector PreviewOffset; // 0x90(0x18)
		FGameplayTagContainer ConnectableTags; // 0xA8(0x20)
		FBox TargetingArea; // 0xC8(0x38)
	};


	// Struct JunoGameNative.JunoBuilderToolInteractionActorClassSet
	// Size: 0xA0 (0xA0 - 0x0)
	struct FJunoBuilderToolInteractionActorClassSet	
	{
	public:
		TSet Classes; // 0x0(0x50)
		TSet ExcludedSubclasses; // 0x50(0x50)
	};


	// Struct JunoGameNative.JunoBuildingBehaviorGridLimits
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoBuildingBehaviorGridLimits	
	{
	public:
		FIntPoint Min; // 0x0(0x8)
		FIntPoint Max; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoBuildingConnectivityComponentEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoBuildingConnectivityComponentEntry	
	{
	public:
		TWeakObjectPtr Component; // 0x0(0x8)
		TSet Ids; // 0x8(0x50)
	};


	// Struct JunoGameNative.JunoBuildingConnectionPoint
	// Size: 0xE0 (0xE0 - 0x0)
	struct FJunoBuildingConnectionPoint	
	{
	public:
		FTransform FieldToObject; // 0x0(0x60)
		FTransform PointToObject; // 0x60(0x60)
		FVector2D FieldSize; // 0xC0(0x10)
		TWeakObjectPtr Component; // 0xD0(0x8)
		int32_t ObjectId; // 0xD8(0x4)
		EConnectionPointType PointType; // 0xDC(0x1)
		bool bAvailable; // 0xDD(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xDE(0x2) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingConnectionPoints
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoBuildingConnectionPoints	
	{
	public:
		TArray Value; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoBuildingConnectionPointsResult
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoBuildingConnectionPointsResult	
	{
	public:
		TMap PointsMap; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoBuildingConnection
	// Size: 0x1D0 (0x1D0 - 0x0)
	struct FJunoBuildingConnection	
	{
	public:
		FJunoBuildingConnectionPoint Candidate; // 0x0(0xE0)
		FJunoBuildingConnectionPoint Target; // 0xE0(0xE0)
		TArray Locations; // 0x1C0(0x10)
	};


	// Struct JunoGameNative.JunoBuildingGameplayActorSparseClassData
	// Inherited from FBuildingGameplayActorClassData -> FBuildingActorClassData -> FUserOptionDefinitionContainer
	// Size: 0x250 (0x350 - 0x100)
	struct FJunoBuildingGameplayActorSparseClassData : public FBuildingGameplayActorClassData	
	{
	public:
		FVector BuildingGridSizeOverride; // 0x100(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
		FTransform BuildingPivotOffset; // 0x120(0x60)
		FVector BuildingGridSnapOffset; // 0x180(0x18)
		FJunoBuildingBehaviorGridLimits BuildingGridOffsetLimits; // 0x198(0x10)
		FJunoBuilderToolInteractionActorClassSet BuildingOverlappableClasses; // 0x1A8(0xA0)
		FJunoBuilderToolInteractionActorClassSet BuildingSupportableClasses; // 0x248(0xA0)
		TArray BuildingSnapEntries; // 0x2E8(0x10)
		TMap BuildingPreviewComponentTemplates; // 0x2F8(0x50)
		unsigned char UnknownData03_7[0x8]; // 0x348(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampCenterCreated
	// Size: 0x14 (0x14 - 0x0)
	struct FJunoEvent_CampCenterCreated	
	{
	public:
		unsigned char UnknownData01_2[0x14]; // 0x0(0x14) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampCenterDestroyed
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_CampCenterDestroyed	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampCenterActivated
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_CampCenterActivated	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampCenterDeactivated
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_CampCenterDeactivated	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampActorActivated
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_CampActorActivated	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampActorDeactivated
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_CampActorDeactivated	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampAwesomeLevelChanged
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoEvent_CampAwesomeLevelChanged	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampAwesomePointsModified
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoEvent_CampAwesomePointsModified	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_NonResourceRequirementsMetChanged
	// Size: 0xC (0xC - 0x0)
	struct FJunoEvent_NonResourceRequirementsMetChanged	
	{
	public:
		bool bMet; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr CampActor; // 0x4(0x8)
	};


	// Struct JunoGameNative.JunoEvent_CampAISpawned
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_CampAISpawned	
	{
	public:
		AActor SpawnedAI; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_CampAIDespawned
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_CampAIDespawned	
	{
	public:
		AActor SpawnedAI; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.AwesomeLevelSaveData
	// Size: 0x4 (0x4 - 0x0)
	struct FAwesomeLevelSaveData	
	{
	public:
		int32_t AwesomeLevel; // 0x0(0x4)
	};


	// Struct JunoGameNative.AICampManagementSaveData
	// Size: 0x20 (0x20 - 0x0)
	struct FAICampManagementSaveData	
	{
	public:
		int64_t LastPassiveResourceGatheringSimulatedJunoRealTime; // 0x0(0x8)
		int64_t CampCreationTime; // 0x8(0x8)
		int64_t FirstRecruitedNPCTime; // 0x10(0x8)
		int64_t LastVisitorsUpdateTime; // 0x18(0x8)
	};


	// Struct JunoGameNative.NamedPOISaveData
	// Size: 0xE0 (0xE0 - 0x0)
	struct FNamedPOISaveData	
	{
	public:
		FText POIName; // 0x0(0x10)
		FJunoMarker Marker; // 0x10(0xC0)
		FGuid MarkerID; // 0xD0(0x10)
	};


	// Struct JunoGameNative.JunoCampPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoCampPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoAllCampsSaveData SavedAllCamps; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoAllCampsSaveData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoAllCampsSaveData	
	{
	public:
		TArray Camps; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoCampSaveData
	// Size: 0xD8 (0xD8 - 0x0)
	struct FJunoCampSaveData	
	{
	public:
		FGuid CampCenterID; // 0x0(0x10)
		FPrimaryAssetId CampCenterAssetID; // 0x10(0x8)
		FGuid CampActorID; // 0x18(0x10)
		FBox CampBounds; // 0x28(0x38)
		int64_t SoftRemovedElapsedJunoGameTime; // 0x60(0x8)
		int64_t LastRewardsRollInJunoGameTime; // 0x68(0x8)
		FJunoCampRewardResults LastRewardResults; // 0x70(0x20)
		FName LastRewardsRollLootTierGroupToSave; // 0x90(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		TArray LastRewardsRollLootTierGroupsToSave; // 0x98(0x10)
		int32_t LastAwesomenessLevel; // 0xA8(0x4)
		EJunoBiome CampBiome; // 0xAC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		FGameplayTagContainer PersistentTags; // 0xB0(0x20)
		FGameplayTag CampTag; // 0xD0(0x4)
		bool bIsCampPermanent; // 0xD4(0x1)
		unsigned char UnknownData05_7[0x3]; // 0xD5(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoCampRewardResults
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoCampRewardResults	
	{
	public:
		TArray Items; // 0x0(0x10)
		TArray Recipes; // 0x10(0x10)
	};


	// Struct JunoGameNative.JunoCampRewardRecipeResult
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoCampRewardRecipeResult	
	{
	public:
		TWeakObjectPtr KnowledgeItemDefinition; // 0x0(0x20)
		EJunoKnowledgeState NewState; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoCampRandomNameRow
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FJunoCampRandomNameRow : public FTableRowBase	
	{
	public:
		TArray RandomVillageNames; // 0x8(0x10)
		bool bAllBiomes; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TArray AllowedBiomes; // 0x20(0x10)
	};


	// Struct JunoGameNative.ActiveCampNPCEntry
	// Size: 0x88 (0x88 - 0x0)
	struct FActiveCampNPCEntry	
	{
	public:
		FGameplayTag UniqueAIIdentifier; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x8(0x10)
		FGameplayTag RoleTag; // 0x18(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr NPCIconSmall; // 0x20(0x20)
		TWeakObjectPtr NPCIconLarge; // 0x40(0x20)
		TWeakObjectPtr NPCIconWide; // 0x60(0x20)
		bool bHasAssignedRecruitmentObject; // 0x80(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.ActiveCampCreatureEntry
	// Size: 0x98 (0x98 - 0x0)
	struct FActiveCampCreatureEntry	
	{
	public:
		FGameplayTag UniqueAIIdentifier; // 0x0(0x4)
		FGameplayTag DescriptorTag; // 0x4(0x4)
		bool bHasAssignedRecruitmentObject; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FText DisplayName; // 0x10(0x10)
		float FriendshipValue; // 0x20(0x4)
		FGameplayTag FriendshipStateTag; // 0x24(0x4)
		TWeakObjectPtr CreatureIconSmall; // 0x28(0x20)
		TWeakObjectPtr CreatureIconLarge; // 0x48(0x20)
		TWeakObjectPtr CreatureIconFullScreen; // 0x68(0x20)
		FText AnimalTypeDescription; // 0x88(0x10)
	};


	// Struct JunoGameNative.ChaosAudioEventSizeSounds
	// Size: 0x20 (0x20 - 0x0)
	struct FChaosAudioEventSizeSounds	
	{
	public:
		USoundBase Single; // 0x0(0x8)
		USoundBase Small; // 0x8(0x8)
		USoundBase Medium; // 0x10(0x8)
		USoundBase Large; // 0x18(0x8)
	};


	// Struct JunoGameNative.JunoCodexEntry
	// Inherited from FTableRowBase
	// Size: 0x138 (0x140 - 0x8)
	struct FJunoCodexEntry : public FTableRowBase	
	{
	public:
		unsigned char UnknownData04_3[0x4]; // 0x8(0x4) UNKNOWN PROPERTY
		FGameplayTag ItemTag; // 0xC(0x4)
		TWeakObjectPtr Item; // 0x10(0x20)
		FText NameOverride; // 0x30(0x10)
		FText DescriptionOverride; // 0x40(0x10)
		FText FlavorOverride; // 0x50(0x10)
		TWeakObjectPtr AIBotSpawnerData; // 0x60(0x20)
		TWeakObjectPtr SmallPreviewImage; // 0x80(0x20)
		TWeakObjectPtr LargePreviewImage; // 0xA0(0x20)
		FGameplayTag CategoryTag; // 0xC0(0x4)
		FGameplayTag SubCategoryTag; // 0xC4(0x4)
		FGameplayTag ItemTypeTag; // 0xC8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FText HintText; // 0xD0(0x10)
		FText CraftingHeaderText; // 0xE0(0x10)
		FGameplayTagContainer FoundInBiomeTagContainer; // 0xF0(0x20)
		FText FoundInBiomeOverrideText; // 0x110(0x10)
		bool bOverrideRarity; // 0x120(0x1)
		EFortRarity RarityOverride; // 0x121(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x122(0x6) UNKNOWN PROPERTY
		TArray LootPackageIDs; // 0x128(0x10)
		bool bShowInCodex; // 0x138(0x1)
		bool bShowInFreeBuild; // 0x139(0x1)
		unsigned char UnknownData07_7[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoConnectivityDebugVertexData
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoConnectivityDebugVertexData	
	{
	public:
		FVector Position; // 0x0(0x18)
		int32_t DrawColorIndex; // 0x18(0x4)
		bool bIsIndependentlySupported; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		TArray AdjacentVerticesIndices; // 0x20(0x10)
		FGraphVertexHandle Handle; // 0x30(0x28)
	};


	// Struct JunoGameNative.JunoConnectivityDebugData
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoConnectivityDebugData	
	{
	public:
		TArray VertexDataToDraw; // 0x0(0x10)
		bool bDebugDrawEnabled; // 0x10(0x1)
		unsigned char UnknownData01_7[0x27]; // 0x11(0x27) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoConnectivityDebugDataConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FJunoConnectivityDebugDataConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct JunoGameNative.JunoTableRow_AFKEvent
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FJunoTableRow_AFKEvent : public FTableRowBase	
	{
	public:
		int32_t EventWeight; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray EventFilters; // 0x10(0x10)
	};


	// Struct JunoGameNative.JunoIndicatorVisibilityQueryEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoIndicatorVisibilityQueryEntry	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		AFortPawn Pawn; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoProfanityCheckMetadata
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoProfanityCheckMetadata	
	{
	public:
	};


	// Struct JunoGameNative.JunoMapMarkerProfanityCheckMetadata
	// Inherited from FJunoProfanityCheckMetadata
	// Size: 0xD0 (0xD0 - 0x0)
	struct FJunoMapMarkerProfanityCheckMetadata : public FJunoProfanityCheckMetadata	
	{
	public:
		unsigned char UnknownData01_1[0xD0]; // 0x0(0xD0) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoCraftingStationUIDataRow
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FJunoCraftingStationUIDataRow : public FTableRowBase	
	{
	public:
		FGameplayTag SourceTag; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CraftingObjectRef; // 0x10(0x20)
	};


	// Struct JunoGameNative.NewCraftingObjectMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FNewCraftingObjectMessage	
	{
	public:
		AActor CraftingObject; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_CraftingObjectPlaced
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_CraftingObjectPlaced	
	{
	public:
		AActor CraftingObject; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_RecipesRecalculated
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_RecipesRecalculated	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoDestructionMaterialReplacementDataTable
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FJunoDestructionMaterialReplacementDataTable : public FTableRowBase	
	{
	public:
		FString SearchString; // 0x8(0x10)
		FString BaseMaterialSearchString; // 0x18(0x10)
		UMaterialInterface MaterialReplacement; // 0x28(0x8)
		FString Annotations; // 0x30(0x10)
	};


	// Struct JunoGameNative.JunoDestructionFixISMMaterialsDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x20 (0x1B8 - 0x198)
	struct FJunoDestructionFixISMMaterialsDataflowNode : public FDataflowNode	
	{
	public:
		UGeometryCollection GCAsset; // 0x198(0x8)
		TArray InstancedMeshes; // 0x1A0(0x10)
		UDataTable ISMMaterialDataTable; // 0x1B0(0x8)
	};


	// Struct JunoGameNative.JunoLivingWorldPointProviderEventLimiter
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoLivingWorldPointProviderEventLimiter	
	{
	public:
		bool bCanLimitBasedOnEvent; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr EventData; // 0x4(0x8)
		unsigned char UnknownData03_7[0x14]; // 0xC(0x14) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEventReaction_TransitionWeatherNowTo
	// Inherited from FEventReactionBase
	// Size: 0x78 (0x80 - 0x8)
	struct FJunoEventReaction_TransitionWeatherNowTo : public FEventReactionBase	
	{
	public:
		FJunoWeatherPhase NewWeatherPhase; // 0x8(0x38)
		FJunoWeatherPhase NewNextWeatherPhase; // 0x40(0x38)
		bool bApplyToSpecificLocation; // 0x78(0x1)
		FJunoWeatherLocation WeatherLocation; // 0x79(0x2)
		unsigned char UnknownData01_7[0x5]; // 0x7B(0x5) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoExampleMacroGenerated_InGameClass_PersistentInfo
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoExampleMacroGenerated_InGameClass_PersistentInfo	
	{
	public:
		int32_t PersistentData_InStorage; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoExample_InGameClass_PersistentInfo
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoExample_InGameClass_PersistentInfo	
	{
	public:
		int32_t PersistentData_InStorage; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoFogOfWarPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoFogOfWarPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoFogOfWarSaveData FogOfWarSaveData; // 0x0(0x60)
	};


	// Struct JunoGameNative.JunoFogOfWarSaveData
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoFogOfWarSaveData	
	{
	public:
		TArray TileDatas; // 0x0(0x10)
		TMap TileDataMap; // 0x10(0x50)
	};


	// Struct JunoGameNative.JunoFogOfWar
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoFogOfWar	
	{
	public:
		int32_t ClearedPixelCount; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray ExplorationMask; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoFreeBuildPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x2 (0x2 - 0x0)
	struct FJunoFreeBuildPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoFreeBuildSaveData FreeBuildSaveData; // 0x0(0x2)
	};


	// Struct JunoGameNative.JunoFreeBuildSaveData
	// Size: 0x2 (0x2 - 0x0)
	struct FJunoFreeBuildSaveData	
	{
	public:
		bool bIsFreeBuildSaved; // 0x0(0x1)
		bool bWasFreeBuildEverSaved; // 0x1(0x1)
	};


	// Struct JunoGameNative.JunoFreeBuildToggleEvent
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoFreeBuildToggleEvent	
	{
	public:
		bool bIsFreeBuildEnabled; // 0x0(0x1)
		bool bIsItemSpawnerEnabled; // 0x1(0x1)
		bool bIsPlayerAllowedToFly; // 0x2(0x1)
		bool bIsFreeBuildCostFilteringEnabled; // 0x3(0x1)
	};


	// Struct JunoGameNative.JunoFreeBuildEverUsedEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoFreeBuildEverUsedEvent	
	{
	public:
		bool bWasFreeBuildEverEnabled; // 0x0(0x1)
	};


	// Struct JunoGameNative.JunoFreeBuildSpawnable
	// Inherited from FTableRowBase
	// Size: 0x0 (0x8 - 0x8)
	struct FJunoFreeBuildSpawnable : public FTableRowBase	
	{
	public:
	};


	// Struct JunoGameNative.JunoFreeBuildSpawnableItem
	// Inherited from FJunoFreeBuildSpawnable -> FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FJunoFreeBuildSpawnableItem : public FJunoFreeBuildSpawnable	
	{
	public:
		TWeakObjectPtr Item; // 0x8(0x20)
	};


	// Struct JunoGameNative.JunoGameEventsFastArrayEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x44 (0x50 - 0xC)
	struct FJunoGameEventsFastArrayEntry : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FJunoEvent_GameEventMessage GameEventMessage; // 0x10(0x40)
	};


	// Struct JunoGameNative.JunoGameEventsFastArray
	// Inherited from FFastArraySerializer
	// Size: 0x40 (0x148 - 0x108)
	struct FJunoGameEventsFastArray : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x108(0x30) UNKNOWN PROPERTY
		TArray Items; // 0x138(0x10)
	};


	// Struct JunoGameNative.JunoGeometryCollectionAssemblerGCInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoGeometryCollectionAssemblerGCInfo	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoGeometryCollectionAssemblerTargetData
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoGeometryCollectionAssemblerTargetData	
	{
	public:
		float TargetRatio; // 0x0(0x4)
		float ForcedStartRatio; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoGuidedBuildingBaseData
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoGuidedBuildingBaseData	
	{
	public:
		TArray ComponentReferences; // 0x0(0x10)
		FName Recipe; // 0x10(0x4)
		bool bIsFoundation : 1; // 0x14:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoGuidedBuildingDisplayActorDataEntry
	// Inherited from FJunoGuidedBuildingBaseData
	// Size: 0x0 (0x18 - 0x18)
	struct FJunoGuidedBuildingDisplayActorDataEntry : public FJunoGuidedBuildingBaseData	
	{
	public:
	};


	// Struct JunoGameNative.GuidedBuildingNewFocus
	// Size: 0x8 (0x8 - 0x0)
	struct FGuidedBuildingNewFocus	
	{
	public:
		TWeakObjectPtr GuidedBuildingActor; // 0x0(0x8)
	};


	// Struct JunoGameNative.GuidedBuildingRegistrationEvent
	// Size: 0x14 (0x14 - 0x0)
	struct FGuidedBuildingRegistrationEvent	
	{
	public:
		TWeakObjectPtr GuidedBuild; // 0x0(0x8)
		TWeakObjectPtr PlayerState; // 0x8(0x8)
		bool bIsRegistering; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoIndexedSerializedEdgeData
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoIndexedSerializedEdgeData	
	{
	public:
		uint32_t Node1; // 0x0(0x4)
		uint32_t Node2; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoIndexedSerializedIslandData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoIndexedSerializedIslandData	
	{
	public:
		TArray Vertices; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoIndexedSavedConnectivityData
	// Size: 0x88 (0x88 - 0x0)
	struct FJunoIndexedSavedConnectivityData	
	{
	public:
		FGraphProperties Properties; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray Vertices; // 0x8(0x10)
		TArray Edges; // 0x18(0x10)
		TMap Islands; // 0x28(0x50)
		TArray ConnectivityVertexData; // 0x78(0x10)
	};


	// Struct JunoGameNative.JunoInputMapping
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoInputMapping	
	{
	public:
		UInputMappingContext Context; // 0x0(0x8)
		int32_t Priority; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoInputAlternateDisplayText
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoInputAlternateDisplayText	
	{
	public:
		UInputAction InputAction; // 0x0(0x8)
		FName ActionName; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText DisplayText; // 0x10(0x10)
	};


	// Struct JunoGameNative.JunoInputMappingChangedMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoInputMappingChangedMessage	
	{
	public:
		UJunoInputMappingComponentData JunoInputMappingComponentData; // 0x0(0x8)
		bool bContextPushed; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoInventoriesSaveData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoInventoriesSaveData	
	{
	public:
		TArray Inventories; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoInventoryPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoInventoryPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		TArray Inventories; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoItemTransferRequest
	// Size: 0xB8 (0xB8 - 0x0)
	struct FJunoItemTransferRequest	
	{
	public:
		FJunoItemSlot SourceItemSlot; // 0x0(0x50)
		FJunoItemSlot DestinationItemSlot; // 0x50(0x50)
		UJunoInventoryComponent SourceInventoryComponent; // 0xA0(0x8)
		UJunoInventoryComponent DestinationInventoryComponent; // 0xA8(0x8)
		int32_t Count; // 0xB0(0x4)
		bool bTopOffExistingStacks; // 0xB4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoItemSlot
	// Inherited from FFastArraySerializerItem
	// Size: 0x44 (0x50 - 0xC)
	struct FJunoItemSlot : public FFastArraySerializerItem	
	{
	public:
		FGameplayTag GroupTag; // 0xC(0x4)
		FGameplayTagContainer SlotTags; // 0x10(0x20)
		int32_t RowIndex; // 0x30(0x4)
		int32_t ColumnIndex; // 0x34(0x4)
		FGuid ItemGuid; // 0x38(0x10)
		UFortItem Item; // 0x48(0x8)
	};


	// Struct JunoGameNative.JunoTakeItemRequest
	// Size: 0x78 (0x78 - 0x0)
	struct FJunoTakeItemRequest	
	{
	public:
		FJunoItemSlot SourceItemSlot; // 0x0(0x50)
		UJunoInventoryComponent SourceInventoryComponent; // 0x50(0x8)
		UJunoInventoryComponent DestinationInventoryComponent; // 0x58(0x8)
		int32_t Count; // 0x60(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		TArray PreferredDestinationGroupOrder; // 0x68(0x10)
	};


	// Struct JunoGameNative.JunoSortInventoryRequest
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoSortInventoryRequest	
	{
	public:
		AActor TargetInventoryActor; // 0x0(0x8)
		FGameplayTag GroupTag; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray ItemTypeSortOrder; // 0x10(0x10)
	};


	// Struct JunoGameNative.JunoInventoryUIPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoInventoryUIPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoInventoryUISaveData SavedInventoryUI; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoInventoryUISaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoInventoryUISaveData	
	{
	public:
		TMap InventoryUIData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoSavedInventoryUIData
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoSavedInventoryUIData	
	{
	public:
		FGuid InventoryHandleNewGuid; // 0x0(0x10)
		TArray AllSlotData; // 0x10(0x10)
		TArray SelectedItemGroupSlot; // 0x20(0x10)
	};


	// Struct JunoGameNative.JunoSelectedSlotData
	// Size: 0xC (0xC - 0x0)
	struct FJunoSelectedSlotData	
	{
	public:
		FGameplayTag GroupTag; // 0x0(0x4)
		int32_t RowIndex; // 0x4(0x4)
		int32_t ColumnIndex; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoKnowledgeBundleTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FJunoKnowledgeBundleTableRow : public FTableRowBase	
	{
	public:
		FName CraftingRecipeIdentifier; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoKnowledgePersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x138 (0x138 - 0x0)
	struct FJunoKnowledgePersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoKnowledgeSaveData KnowledgeSaveData; // 0x0(0x138)
	};


	// Struct JunoGameNative.JunoKnowledgeSaveData
	// Size: 0x138 (0x138 - 0x0)
	struct FJunoKnowledgeSaveData	
	{
	public:
		FJunoKnowledgeSaveRecord WorldKnowledgeRecord; // 0x0(0x138)
	};


	// Struct JunoGameNative.JunoKnowledgeSaveRecord
	// Size: 0x138 (0x138 - 0x0)
	struct FJunoKnowledgeSaveRecord	
	{
	public:
		FGameplayTagContainer CraftingObjectTags; // 0x0(0x20)
		FGameplayTagContainer ClaimedBundleIdentifiers; // 0x20(0x20)
		TMap ItemStates; // 0x40(0x50)
		TMap RecipeStates; // 0x90(0x50)
		TMap CreatureStates; // 0xE0(0x50)
		bool bMCPRecipesBlocked; // 0x130(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoKnowledgeCreatureStateEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoKnowledgeCreatureStateEntry	
	{
	public:
		FDateTime DateFound; // 0x0(0x8)
		TSet ViewedPlayerIds; // 0x8(0x50)
	};


	// Struct JunoGameNative.JunoKnowledgeRecipeStateEntry
	// Size: 0xA8 (0xA8 - 0x0)
	struct FJunoKnowledgeRecipeStateEntry	
	{
	public:
		EJunoKnowledgeState KnowledgeState; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TSet ViewedPlayerIds; // 0x8(0x50)
		TSet EverAcquiredPlayerIds; // 0x58(0x50)
	};


	// Struct JunoGameNative.JunoKnowledgeItemStateEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoKnowledgeItemStateEntry	
	{
	public:
		FDateTime DateFound; // 0x0(0x8)
		TSet ViewedPlayerIds; // 0x8(0x50)
	};


	// Struct JunoGameNative.JunoKnowledgeWeightedBundleTableRow
	// Inherited from FJunoKnowledgeBundleTableRow -> FTableRowBase
	// Size: 0x8 (0x18 - 0x10)
	struct FJunoKnowledgeWeightedBundleTableRow : public FJunoKnowledgeBundleTableRow	
	{
	public:
		float Weight; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoExploredTile
	// Inherited from FFastArraySerializerItem
	// Size: 0x84 (0x90 - 0xC)
	struct FJunoExploredTile : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData03_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FJunoTileInfo TileInfo; // 0x10(0x60)
		int32_t ClearedPixelCount; // 0x70(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TArray PackedTileMask; // 0x78(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoTileInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoTileInfo	
	{
	public:
		FName CellName; // 0x0(0x4)
		FIntPoint Coordinates; // 0x4(0x8)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector2D WorldLocation; // 0x10(0x10)
		TWeakObjectPtr MiniMapTexture; // 0x20(0x20)
		FGameplayTagContainer GameplayTags; // 0x40(0x20)
	};


	// Struct JunoGameNative.MapExplorationData
	// Inherited from FFastArraySerializer
	// Size: 0x68 (0x170 - 0x108)
	struct FMapExplorationData : public FFastArraySerializer	
	{
	public:
		TArray ExploredTiles; // 0x108(0x10)
		int32_t KnownClearedPixelCount; // 0x118(0x4)
		unsigned char UnknownData01_7[0x54]; // 0x11C(0x54) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoMarkerSettingsRow
	// Inherited from FTableRowBase
	// Size: 0xE8 (0xF0 - 0x8)
	struct FJunoMarkerSettingsRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr Icon; // 0x8(0x20)
		FText LongDisplayName; // 0x28(0x10)
		FText ShortDisplayName; // 0x38(0x10)
		float Size; // 0x48(0x4)
		float TextPadding; // 0x4C(0x4)
		int32_t duration; // 0x50(0x4)
		bool bAnchorOnEdges; // 0x54(0x1)
		bool bShowUnderground; // 0x55(0x1)
		bool bShowOnlyForOwner; // 0x56(0x1)
		bool bIsContainer; // 0x57(0x1)
		bool bHasLimitedDuration; // 0x58(0x1)
		bool bDrawText; // 0x59(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
		FSlateFontInfo Font; // 0x60(0x58)
		TWeakObjectPtr CompassIcon; // 0xB8(0x20)
		float CompassMaximumDistance; // 0xD8(0x4)
		float CompassDistanceToFadeInFromMaxDistance; // 0xDC(0x4)
		float CompassTextScale; // 0xE0(0x4)
		FName IsCenterParam; // 0xE4(0x4)
		FName ScaleParam; // 0xE8(0x4)
		FName CenterScaleParam; // 0xEC(0x4)
	};


	// Struct JunoGameNative.JunoMarkerCustomizationOptionsRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FJunoMarkerCustomizationOptionsRow : public FTableRowBase	
	{
	public:
		TArray Icons; // 0x8(0x10)
		TArray Colors; // 0x18(0x10)
	};


	// Struct JunoGameNative.JunoMarkersPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoMarkersPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoMarkersSaveData MarkersSaveData; // 0x0(0x20)
	};


	// Struct JunoGameNative.JunoMarkersSaveData
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoMarkersSaveData	
	{
	public:
		TArray MarkersData; // 0x0(0x10)
		TArray MarkersIds; // 0x10(0x10)
	};


	// Struct JunoGameNative.JunoMassCommonStateFragment
	// Inherited from FMassFragment
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoMassCommonStateFragment : public FMassFragment	
	{
	public:
		float Health; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoMerchantPricingLevel
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoMerchantPricingLevel	
	{
	public:
		UDataTable BarterPricingData; // 0x0(0x8)
		FName TierGroup; // 0x8(0x4)
		int32_t NumberOfPackagesForSale; // 0xC(0x4)
	};


	// Struct JunoGameNative.JunoMerchantWantedItemData
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoMerchantWantedItemData	
	{
	public:
		TWeakObjectPtr WantItemDefinition; // 0x0(0x20)
		float WantItemWeight; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoMerchantSalesData
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FJunoMerchantSalesData : public FTableRowBase	
	{
	public:
		FGameplayTag MerchantTag; // 0x8(0x4)
		int32_t InitialPricingLevel; // 0xC(0x4)
		TArray PricingLevels; // 0x10(0x10)
		TArray WantedItemDatas; // 0x20(0x10)
		int32_t RefreshTimeInHours; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoSynchronizedWeatherState
	// Size: 0x78 (0x78 - 0x0)
	struct FJunoSynchronizedWeatherState	
	{
	public:
		FJunoWeatherLocation Location; // 0x0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FJunoWeatherPhase CurrentWeatherPhase; // 0x8(0x38)
		FJunoWeatherPhase NextWeatherPhase; // 0x40(0x38)
	};


	// Struct JunoGameNative.JunoModeratorModeToggleEvent
	// Size: 0x2 (0x2 - 0x0)
	struct FJunoModeratorModeToggleEvent	
	{
	public:
		bool bIsModeratorModeEnabled; // 0x0(0x1)
		bool bIsPlayerAllowedToFly; // 0x1(0x1)
	};


	// Struct JunoGameNative.JunoMoodReactionConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FJunoMoodReactionConfigTableRow : public FTableRowBase	
	{
	public:
		FGameplayTag SoundLibraryTag; // 0x8(0x4)
		FGameplayCueTag GameplayCueTag; // 0xC(0x4)
	};


	// Struct JunoGameNative.CraftingProcess
	// Size: 0x70 (0x70 - 0x0)
	struct FCraftingProcess	
	{
	public:
		FName RecipeName; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FCraftingMultiKey CraftingKey; // 0x8(0x8)
		FJunoItemSlot ProcessingSlot; // 0x10(0x50)
		FDateTime ServerStartTime; // 0x60(0x8)
		float ProgressTimeSinceCraftingStarted; // 0x68(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoNPCDetailsRow
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FJunoNPCDetailsRow : public FTableRowBase	
	{
	public:
		FGameplayTag UniqueAIIdentifier; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText NPCDescription; // 0x10(0x10)
	};


	// Struct JunoGameNative.JunoPassiveCraftingContributorAnalytics
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoPassiveCraftingContributorAnalytics	
	{
	public:
		FString AccountId; // 0x0(0x10)
		FString SessionId; // 0x10(0x10)
		double SessionTime; // 0x20(0x8)
	};


	// Struct JunoGameNative.JunoPassiveCraftingItemAndCount
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoPassiveCraftingItemAndCount	
	{
	public:
		int32_t Count; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UItemDefinitionBase Item; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoEvent_ToggleFreeCrafting
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_ToggleFreeCrafting	
	{
	public:
		bool bIsFreeCrafting; // 0x0(0x1)
	};


	// Struct JunoGameNative.PassiveResourcesGathererRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FPassiveResourcesGathererRow : public FTableRowBase	
	{
	public:
		FGameplayTag RequiredRole; // 0x8(0x4)
		float MinutesToGenerate; // 0xC(0x4)
		int32_t MaxLootCalls; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.PassiveResourcesGatheringRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FPassiveResourcesGatheringRow : public FTableRowBase	
	{
	public:
		FName LootTierGroup; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition SelectionPreconditions; // 0x10(0x18)
	};


	// Struct JunoGameNative.PassiveResourcesGatheringSimulationConfigurationRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPassiveResourcesGatheringSimulationConfigurationRow : public FTableRowBase	
	{
	public:
		float Weight; // 0x8(0x4)
		float OverridenMultiplierForSimulatedGeneration; // 0xC(0x4)
	};


	// Struct JunoGameNative.PassiveResourcesGatheringRowRuntime
	// Size: 0x58 (0x58 - 0x0)
	struct FPassiveResourcesGatheringRowRuntime	
	{
	public:
		unsigned char UnknownData01_7[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
		FWorldConditionQueryState SelectionPreconditionsQueryState; // 0x28(0x30)
	};


	// Struct JunoGameNative.JunoPersistenceAssetSourceControlInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoPersistenceAssetSourceControlInfo	
	{
	public:
		FString CurrentRevisionCheckInIdentifier; // 0x0(0x10)
		FString CurrentRevisionAction; // 0x10(0x10)
		FString CurrentRevisionUser; // 0x20(0x10)
	};


	// Struct JunoGameNative.JunoPersistenceAssetInfo
	// Size: 0x80 (0x80 - 0x0)
	struct FJunoPersistenceAssetInfo	
	{
	public:
		FString PackageName; // 0x0(0x10)
		FTopLevelAssetPath AssetClassPath; // 0x10(0x8)
		FString FilePath; // 0x18(0x10)
		bool bIsInCook; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FJsonObjectWrapper CustomDump; // 0x30(0x20)
		FJunoPersistenceAssetSourceControlInfo SourceControlInfo; // 0x50(0x30)
	};


	// Struct JunoGameNative.JunoPersistenceAssetBackwardCompatibilityIssue
	// Size: 0x80 (0x80 - 0x0)
	struct FJunoPersistenceAssetBackwardCompatibilityIssue	
	{
	public:
		FString PackageName; // 0x0(0x10)
		FTopLevelAssetPath AssetClassPath; // 0x10(0x8)
		EJunoPersistenceAssetBackwardCompatibilityIssueType IssueType; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FJsonObjectWrapper IssueData; // 0x20(0x20)
		FString AssetSourceControlInfoVersion; // 0x40(0x10)
		FJunoPersistenceAssetSourceControlInfo AssetSourceControlInfo; // 0x50(0x30)
	};


	// Struct JunoGameNative.JunoPersistenceAssetsBackwardCompatibilityReport
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoPersistenceAssetsBackwardCompatibilityReport	
	{
	public:
		FString CurrentVersion; // 0x0(0x10)
		FString PreviousVersion; // 0x10(0x10)
		FDateTime ReportDate; // 0x20(0x8)
		FJunoPersistenceAssetsReportSettings Settings; // 0x28(0x28)
		TArray Issues; // 0x50(0x10)
	};


	// Struct JunoGameNative.JunoPersistenceAssetsReportSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoPersistenceAssetsReportSettings	
	{
	public:
		FString PreviousVersionPersistenceAssetsReportPath; // 0x0(0x10)
		FString CurrentVersionPersistenceAssetsReportPath; // 0x10(0x10)
		FJunoRetrievePersistenceAssetInfosSettings RetrievePersistenceAssetInfosSettings; // 0x20(0x8)
	};


	// Struct JunoGameNative.JunoRetrievePersistenceAssetInfosSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoRetrievePersistenceAssetInfosSettings	
	{
	public:
		bool bInCookOnly; // 0x0(0x1)
		bool bGenerateSourceControlInfo; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		EJunoGeneratePersistenceAssetCustomDumpMode GenerateAssetCustomDumpMode; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoPersistenceAssetsReport
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPersistenceAssetsReport	
	{
	public:
		FString BuildVersion; // 0x0(0x10)
		FDateTime ReportDate; // 0x10(0x8)
		FJunoPersistenceAssetsReportSettings Settings; // 0x18(0x28)
		TArray PersistenceAssetInfos; // 0x40(0x10)
	};


	// Struct JunoGameNative.JunoPersistenceFeatureClassPair
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoPersistenceFeatureClassPair	
	{
	public:
		UClass PersistenceFeatureDataClass; // 0x0(0x8)
		UClass PersistenceFeatureSourceImplementationDataClass; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoPersistentProperty
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoPersistentProperty	
	{
	public:
		FName Name; // 0x0(0x4)
		FName NativeType; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoPersitentTypeSchema
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoPersitentTypeSchema	
	{
	public:
		FName Name; // 0x0(0x4)
		FName ParentType; // 0x4(0x4)
		TArray PersistentProperties; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoPersistenceSchema
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoPersistenceSchema	
	{
	public:
		TArray TypeSchemas; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoPersistenceSchemaReport
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPersistenceSchemaReport	
	{
	public:
		FString BuildVersion; // 0x0(0x10)
		FDateTime ReportDate; // 0x10(0x8)
		FJunoPersistenceAssetsReportSettings Settings; // 0x18(0x28)
		FJunoPersistenceSchema Schema; // 0x40(0x10)
	};


	// Struct JunoGameNative.JunoPickupManagementSettingsRow
	// Inherited from FTableRowBase
	// Size: 0xB8 (0xC0 - 0x8)
	struct FJunoPickupManagementSettingsRow : public FTableRowBase	
	{
	public:
		int32_t PickupsAllowedMax; // 0x8(0x4)
		int32_t PickupsDesiredSlack; // 0xC(0x4)
		float PickupDespawnDelaySeconds; // 0x10(0x4)
		bool bDebugPickupManagement; // 0x14(0x1)
		bool bEnablePickupManagement; // 0x15(0x1)
		EFortRarity NotJunkPickupThreshold; // 0x16(0x1)
		EFortRarity ImportantPickupThreshold; // 0x17(0x1)
		bool bFlagPlayerDropsAsImportant; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TMap GameplayTagToDespawnTime; // 0x20(0x50)
		TMap RarityToDespawnTime; // 0x70(0x50)
	};


	// Struct JunoGameNative.JunoMCPBuildingPlaced
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoMCPBuildingPlaced	
	{
	public:
		FString WorldId; // 0x0(0x10)
		uint64_t Timestamp; // 0x10(0x8)
	};


	// Struct JunoGameNative.JunoPlayerAccountSaveData
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoPlayerAccountSaveData	
	{
	public:
		TArray GuestWorldsWithMCPBuildings; // 0x0(0x10)
		bool bHasSeenBuildingScreenItemShopCallout; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingSlotData
	// Inherited from FFastArraySerializerItem
	// Size: 0x34 (0x40 - 0xC)
	struct FJunoBuildingSlotData : public FFastArraySerializerItem	
	{
	public:
		FName AssociatedRecipe; // 0xC(0x4)
		int32_t ResultingQuantity; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UItemDefinitionBase ResultingItemDefintion; // 0x18(0x8)
		bool bCanCraft; // 0x20(0x1)
		bool bIsPinned; // 0x21(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		UInputAction InputAction; // 0x28(0x8)
		unsigned char UnknownData05_7[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_BuildingSlotUpdate
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_BuildingSlotUpdate	
	{
	public:
		UJunoPlayerBuildingComponent BuildingComp; // 0x0(0x8)
		EJunoBuildModeType BuildModeType; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t UpdatedSlot; // 0xC(0x4)
	};


	// Struct JunoGameNative.JunoEvent_SelectedSlotIndexUpdate
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoEvent_SelectedSlotIndexUpdate	
	{
	public:
		UJunoPlayerBuildingComponent BuildingComp; // 0x0(0x8)
		EJunoBuildModeType BuildModeType; // 0x8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t NewSelectedSlot; // 0xC(0x4)
		bool bIsInBuildMode; // 0x10(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName CurrentRecipe; // 0x14(0x4)
	};


	// Struct JunoGameNative.JunoEvent_BuildingModeChanged
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoEvent_BuildingModeChanged	
	{
	public:
		UJunoPlayerBuildingComponent BuildingComp; // 0x0(0x8)
		EJunoBuildModeType BuildModeType; // 0x8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t SelectedSlot; // 0xC(0x4)
		FName CurrentRecipe; // 0x10(0x4)
		bool bIsInBuildMode; // 0x14(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_EnableBuildModeWithRecipe
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoEvent_EnableBuildModeWithRecipe	
	{
	public:
		EJunoBuildModeType BuildModeType; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName RecipeName; // 0x4(0x4)
		bool bFromRecents; // 0x8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x10(0x20)
	};


	// Struct JunoGameNative.JunoLastLoadedRecipeData
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoLastLoadedRecipeData	
	{
	public:
		EJunoBuildModeType BuildModeType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName RecipeName; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoSlotIndex
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoSlotIndex	
	{
	public:
		EJunoBuildModeType BuildModeType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Index; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoSelectedSlot
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoSelectedSlot	
	{
	public:
		FJunoSlotIndex Slot; // 0x0(0x8)
		FName ForcedRecipe; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x10(0x20)
	};


	// Struct JunoGameNative.JunoBuildingSessionEntry
	// Size: 0x78 (0x78 - 0x0)
	struct FJunoBuildingSessionEntry	
	{
	public:
		TWeakObjectPtr SpawnedActor; // 0x0(0x8)
		FVector SpawnLocation; // 0x8(0x18)
		FDateTime SpawnTime; // 0x20(0x8)
		UClass ActorClass; // 0x28(0x8)
		TWeakObjectPtr ItemDef; // 0x30(0x8)
		FName Recipe; // 0x38(0x4)
		TWeakObjectPtr CampAtLocation; // 0x3C(0x8)
		FGuid GuidedBuildID; // 0x44(0x10)
		FGuid CampID; // 0x54(0x10)
		FGuid ActorId; // 0x64(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingSessionInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoBuildingSessionInfo	
	{
	public:
		TArray Entries; // 0x0(0x10)
		FGuid SessionId; // 0x10(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoMCPItemPlacementStatus
	// Size: 0xC (0xC - 0x0)
	struct FJunoMCPItemPlacementStatus	
	{
	public:
		int32_t NumOfMCPItemWorlds; // 0x0(0x4)
		bool bHasPlacedMCPItemInThisWorld; // 0x4(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x5(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoMCPItemPlacementStatusAlertData
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoMCPItemPlacementStatusAlertData	
	{
	public:
		UFortUINotification Notification; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoPlayspaceAccountantFeatureData_InGameClass_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPlayspaceAccountantFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoPlayspaceAccountantSaveData PlayspaceAccountantSaveData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoPlayspaceAccountantSaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPlayspaceAccountantSaveData	
	{
	public:
		TMap PersistentValueTable; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoPlayspaceIndexSaveData PlayspaceIndexSaveData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoPlayspaceIndexSaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPlayspaceIndexSaveData	
	{
	public:
		TMap PlayspaceNodes; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoPlayspaceIndexNode
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoPlayspaceIndexNode	
	{
	public:
		FGuid ID; // 0x0(0x10)
		FGuid ParentID; // 0x10(0x10)
		TArray ChildrenIds; // 0x20(0x10)
		UClass PlayspaceClassType; // 0x30(0x8)
	};


	// Struct JunoGameNative.PickupPendingSpawnInfo
	// Size: 0x1F8 (0x1F8 - 0x0)
	struct FPickupPendingSpawnInfo	
	{
	public:
		TWeakObjectPtr PickupClass; // 0x0(0x20)
		FPickupPersistenceInfo PickupInfo; // 0x20(0x1D8)
	};


	// Struct JunoGameNative.PickupPersistenceInfo
	// Size: 0x1D8 (0x1D8 - 0x0)
	struct FPickupPersistenceInfo	
	{
	public:
		FFortItemEntry PrimaryItem; // 0x0(0x1A8)
		TArray MultiItemList; // 0x1A8(0x10)
		FVector Location; // 0x1B8(0x18)
		double LifeSpanEndTimestamp; // 0x1D0(0x8)
	};


	// Struct JunoGameNative.JunoPlayspacePickupFeatureData_InGameClass_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPlayspacePickupFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoPlayspacePickupSaveData PlayspacePickupSaveData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoPlayspacePickupSaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPlayspacePickupSaveData	
	{
	public:
		TMap PersistentPickupTypeMap; // 0x0(0x50)
	};


	// Struct JunoGameNative.PickupTypePersistenceInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FPickupTypePersistenceInfo	
	{
	public:
		TArray PersistentPickupList; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoRollbackBadCheckpointRange
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoRollbackBadCheckpointRange	
	{
	public:
		int32_t StartCL; // 0x0(0x4)
		int32_t EndCL; // 0x4(0x4)
		FString StartTimestamp; // 0x8(0x10)
		FString EndTimestamp; // 0x18(0x10)
	};


	// Struct JunoGameNative.JunoSyncWeatherCache
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoSyncWeatherCache	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoHUDVehicleAmmoInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoHUDVehicleAmmoInfo	
	{
	public:
		int32_t AmmoCount; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFortItemDefinition AmmoItemDefinition; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoHUDVehicleEnterEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoHUDVehicleEnterEvent	
	{
	public:
		FJunoHUDVehicleAmmoInfo AmmoInfo; // 0x0(0x10)
		float CurrentCooldownPercent; // 0x10(0x4)
		float CurrentCooldownDuration; // 0x14(0x4)
	};


	// Struct JunoGameNative.JunoHUDVehicleExitEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoHUDVehicleExitEvent	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoHUDVehicleFireEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoHUDVehicleFireEvent	
	{
	public:
		FJunoHUDVehicleAmmoInfo AmmoInfo; // 0x0(0x10)
		float CooldownDuration; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoHUDVehicleCooldownUpdateEvent
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoHUDVehicleCooldownUpdateEvent	
	{
	public:
		float Percent; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoHUDGliderCanDeployEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoHUDGliderCanDeployEvent	
	{
	public:
		bool bCanDeploy; // 0x0(0x1)
	};


	// Struct JunoGameNative.JunoHUDMenuVillageInteractEvent
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoHUDMenuVillageInteractEvent	
	{
	public:
		AJunoCampActor CampActor; // 0x0(0x8)
		UJunoCampMembershipActorComponent CampActorMembershipActorComponent; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoHUDTrackRecipeEvent
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoHUDTrackRecipeEvent	
	{
	public:
		FName RecipeName; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoUserGeneratedTextPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoUserGeneratedTextPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoUserGeneratedTextSaveData UserGeneratedTextSaveData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoUserGeneratedTextSaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoUserGeneratedTextSaveData	
	{
	public:
		TMap TextEntries; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoUserGeneratedTextEntry
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoUserGeneratedTextEntry	
	{
	public:
		FText Text; // 0x0(0x10)
		FUniqueNetIdRepl LastUpdatePlayerId; // 0x10(0x30)
	};


	// Struct JunoGameNative.JunoVerbMessage_AwesomeLevelIncreased
	// Inherited from FVerbMessage
	// Size: 0x48 (0xC0 - 0x78)
	struct FJunoVerbMessage_AwesomeLevelIncreased : public FVerbMessage	
	{
	public:
		FSubjectTagsPair SourceActor; // 0x78(0x38)
		int32_t NewAwesomeLevel; // 0xB0(0x4)
		int32_t PrevAwesomeLevel; // 0xB4(0x4)
		int32_t RemainingAwesomePoints; // 0xB8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoVerbMessage_BattleBusBoarded
	// Inherited from FVerbMessage
	// Size: 0x70 (0xE8 - 0x78)
	struct FJunoVerbMessage_BattleBusBoarded : public FVerbMessage	
	{
	public:
		FSubjectTagsPair OriginBusStop; // 0x78(0x38)
		FSubjectTagsPair TargetBusStop; // 0xB0(0x38)
	};


	// Struct JunoGameNative.FortVerbMessage_CreaturePet
	// Inherited from FVerbMessage
	// Size: 0x38 (0xB0 - 0x78)
	struct FFortVerbMessage_CreaturePet : public FVerbMessage	
	{
	public:
		FSubjectTagsPair Creature; // 0x78(0x38)
	};


	// Struct JunoGameNative.FortVerbMessage_CreatureFed
	// Inherited from FVerbMessage
	// Size: 0x70 (0xE8 - 0x78)
	struct FFortVerbMessage_CreatureFed : public FVerbMessage	
	{
	public:
		FSubjectTagsPair Creature; // 0x78(0x38)
		FSubjectTagsPair FedItem; // 0xB0(0x38)
	};


	// Struct JunoGameNative.JunoVerbMessage_EquipmentChanged
	// Inherited from FVerbMessage
	// Size: 0x78 (0xF0 - 0x78)
	struct FJunoVerbMessage_EquipmentChanged : public FVerbMessage	
	{
	public:
		FSubjectTagsPair Item; // 0x78(0x38)
		FSubjectTagsPair EquipSlot; // 0xB0(0x38)
		bool bEquipped; // 0xE8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoVerbMessage_GuidedBuildCompleted
	// Inherited from FVerbMessage
	// Size: 0x48 (0xC0 - 0x78)
	struct FJunoVerbMessage_GuidedBuildCompleted : public FVerbMessage	
	{
	public:
		FSubjectTagsPair GuidedBuilding; // 0x78(0x38)
		TArray BuildContributors; // 0xB0(0x10)
	};


	// Struct JunoGameNative.JunoVerbMessage_GuidedBuildStageCompleted
	// Inherited from FVerbMessage
	// Size: 0x40 (0xB8 - 0x78)
	struct FJunoVerbMessage_GuidedBuildStageCompleted : public FVerbMessage	
	{
	public:
		FSubjectTagsPair GuidedBuilding; // 0x78(0x38)
		FJunoStageKey StageKey; // 0xB0(0x8)
	};


	// Struct JunoGameNative.JunoVerbMessage_RecipeStateChanged
	// Inherited from FVerbMessage
	// Size: 0x50 (0xC8 - 0x78)
	struct FJunoVerbMessage_RecipeStateChanged : public FVerbMessage	
	{
	public:
		FSubjectTagsPair Instigator; // 0x78(0x38)
		TArray Players; // 0xB0(0x10)
		FName RecipeName; // 0xC0(0x4)
		EJunoKnowledgeState NewState; // 0xC4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xC5(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoVerbMessage_RecruitCreature
	// Inherited from FVerbMessage
	// Size: 0x70 (0xE8 - 0x78)
	struct FJunoVerbMessage_RecruitCreature : public FVerbMessage	
	{
	public:
		FSubjectTagsPair UniqueAIIdentifier; // 0x78(0x38)
		FSubjectTagsPair DescriptorTag; // 0xB0(0x38)
	};


	// Struct JunoGameNative.JunoVerbMessage_RecruitNPC
	// Inherited from FVerbMessage
	// Size: 0x70 (0xE8 - 0x78)
	struct FJunoVerbMessage_RecruitNPC : public FVerbMessage	
	{
	public:
		FSubjectTagsPair UniqueAIIdentifier; // 0x78(0x38)
		FSubjectTagsPair AIRole; // 0xB0(0x38)
	};


	// Struct JunoGameNative.JunoVerbMessage_TemperatureUpdated
	// Inherited from FVerbMessage
	// Size: 0x70 (0xE8 - 0x78)
	struct FJunoVerbMessage_TemperatureUpdated : public FVerbMessage	
	{
	public:
		FSubjectTagsPair PreviousTemperature; // 0x78(0x38)
		FSubjectTagsPair NewTemperature; // 0xB0(0x38)
	};


	// Struct JunoGameNative.JunoVerbFilter_RecruitCreature
	// Inherited from FObjectiveFilter
	// Size: 0x90 (0x130 - 0xA0)
	struct FJunoVerbFilter_RecruitCreature : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags UniqueAIIdentifier; // 0xA0(0x48)
		FObjectiveSubjectTags DescriptorTag; // 0xE8(0x48)
	};


	// Struct JunoGameNative.JunoWeatherPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWeatherPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoWeatherSaveData WeatherSaveData; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoWeatherSaveData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWeatherSaveData	
	{
	public:
		TArray SavedWeathers; // 0x0(0x10)
	};


	// Struct JunoGameNative.SavedWeather
	// Size: 0x90 (0x90 - 0x0)
	struct FSavedWeather	
	{
	public:
		FJunoWeatherLocation Location; // 0x0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		int64_t EndUnixTime; // 0x8(0x8)
		FJunoWeatherPhase CurrentPhase; // 0x10(0x38)
		FJunoWeatherPhase NextPhase; // 0x48(0x38)
		TArray NextPhaseQueue; // 0x80(0x10)
	};


	// Struct JunoGameNative.JunoWeatherPhaseForecast
	// Size: 0x64 (0x64 - 0x0)
	struct FJunoWeatherPhaseForecast	
	{
	public:
		FGameplayTag WeatherTypeName; // 0x0(0x4)
		FFloatRange WeatherTypeWeight; // 0x4(0x10)
		FFloatRange duration; // 0x14(0x10)
		float TransitionIn; // 0x24(0x4)
		float TransitionOut; // 0x28(0x4)
		FFloatRange WindSpeedRange; // 0x2C(0x10)
		bool UseRandomWindDirection; // 0x3C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float WindDirectionDegree; // 0x40(0x4)
		FGameplayTag MorningTemperature; // 0x44(0x4)
		FGameplayTag DayTemperature; // 0x48(0x4)
		FGameplayTag EveningTemperature; // 0x4C(0x4)
		FGameplayTag NightTemperature; // 0x50(0x4)
		FFloatRange WeatherIntensityRange; // 0x54(0x10)
	};


	// Struct JunoGameNative.JunoWeatherLocalizedForecasts
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoWeatherLocalizedForecasts	
	{
	public:
		FJunoWeatherLocation Location; // 0x0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TArray WeatherTypes; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoWeatherSeasonRow
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FJunoWeatherSeasonRow : public FTableRowBase	
	{
	public:
		FGameplayTag Season; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray LocalizedForecasts; // 0x10(0x10)
	};


	// Struct JunoGameNative.JunoWorldConditionAICampChecks
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x108 (0x118 - 0x10)
	struct FJunoWorldConditionAICampChecks : public FWorldConditionCommonBase	
	{
	public:
		FWorldConditionContextDataRef EventDataRef; // 0x10(0x8)
		FWorldConditionContextDataRef AIRef; // 0x18(0x8)
		EJunoWorldConditionAICampChecksIsAssigned MustBeAssignedToACamp; // 0x20(0x1)
		EJunoWorldConditionAICampChecksIsAssigned MustBeAssignedToPlayer; // 0x21(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
		FWorldConditionContextDataRef PlayerControllerRef; // 0x24(0x8)
		unsigned char UnknownData05_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery RoleMustMatchQuery; // 0x30(0x48)
		FGameplayTagQuery SoftRemovedReasonsMustMatchQuery; // 0x78(0x48)
		EJunoWorldConditionMustHaveLastUsedGatheringActor MustHaveLastUsedGatheringActor; // 0xC0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery CampTagQuery; // 0xC8(0x48)
		bool bRequireEmptyCampTag; // 0x110(0x1)
		unsigned char UnknownData07_7[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldConditionBed
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x18 (0x28 - 0x10)
	struct FJunoWorldConditionBed : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef BedActorRef; // 0x10(0x8)
		FWorldConditionContextDataRef UserActorRef; // 0x18(0x8)
		EJunoWorldConditionAssignmentState AssignmentState; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldConditionCheckLTMState
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0xE8 (0xF8 - 0x10)
	struct FJunoWorldConditionCheckLTMState : public FWorldConditionCommonBase	
	{
	public:
		FGameplayTagQuery CurrentLTMStateQuery; // 0x10(0x48)
		FGameplayTagQuery PlayingCinematicsQuery; // 0x58(0x48)
		bool bRequiresAnyPlayingCinematic; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery PlayedCinematicsQuery; // 0xA8(0x48)
		bool bRequiresAnyPlayedCinematic; // 0xF0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldConditionCheckPersistentValue
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FJunoWorldConditionCheckPersistentValue : public FWorldConditionCommonBase	
	{
	public:
		FName PersistentValueName; // 0x10(0x4)
		int32_t CheckValue; // 0x14(0x4)
		TEnumAsByte CheckOperator; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldConditionCozyChecks
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x0 (0x10 - 0x10)
	struct FJunoWorldConditionCozyChecks : public FWorldConditionCommonBase	
	{
	public:
	};


	// Struct JunoGameNative.JunoWorldConditionHardcoreChecks
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x0 (0x10 - 0x10)
	struct FJunoWorldConditionHardcoreChecks : public FWorldConditionCommonBase	
	{
	public:
	};


	// Struct JunoGameNative.JunoWorldConditionIsInCave
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FJunoWorldConditionIsInCave : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
	};


	// Struct JunoGameNative.JunoWorldConditionIsSpatiallyInCamp
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FJunoWorldConditionIsSpatiallyInCamp : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
	};


	// Struct JunoGameNative.JunoWorldConditionLocalCampChecks
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x80 (0x90 - 0x10)
	struct FJunoWorldConditionLocalCampChecks : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		FGameplayTagQuery CampTagQuery; // 0x18(0x48)
		bool bRequireEmptyCampTag; // 0x60(0x1)
		bool bMustHaveFreeRecruitmentObject; // 0x61(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x62(0x2) UNKNOWN PROPERTY
		float MinimumRemainingSoftRemovalTimeInJunoHours; // 0x64(0x4)
		int32_t RequiresAssignedRecruitmentObjectForAnyPawnType; // 0x68(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer RequiredCompletedAwesomeUpgradeSteps; // 0x70(0x20)
	};


	// Struct JunoGameNative.JunoWorldConditionPawnType
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FJunoWorldConditionPawnType : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef PawnRef; // 0x10(0x8)
		char AnyPawnType; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldConditionPlayerCampChecks
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FJunoWorldConditionPlayerCampChecks : public FWorldConditionCommonBase	
	{
	public:
		FWorldConditionContextDataRef PlayerControllerRef; // 0x10(0x8)
		EJunoWorldConditionHasFollower PlayerHasFollowersCheck; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldConditionPlayerKnowledgeChecks
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x18 (0x28 - 0x10)
	struct FJunoWorldConditionPlayerKnowledgeChecks : public FWorldConditionCommonBase	
	{
	public:
		FWorldConditionContextDataRef PlayerControllerRef; // 0x10(0x8)
		TArray RecipeUnlockTypes; // 0x18(0x10)
	};


	// Struct JunoGameNative.JunoWorldConditionQuantityInAIResourcesInventory
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FJunoWorldConditionQuantityInAIResourcesInventory : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef AIRef; // 0x10(0x8)
		int32_t RequiredResourcesCount; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldConditionSandboxChecks
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x0 (0x10 - 0x10)
	struct FJunoWorldConditionSandboxChecks : public FWorldConditionCommonBase	
	{
	public:
	};


	// Struct JunoGameNative.JunoWorldInGameTimePersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoWorldInGameTimePersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoWorldInGameTimeSaveData JunoWorldInGameTimeSaveData; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoWorldInGameTimeSaveData
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoWorldInGameTimeSaveData	
	{
	public:
		double TotalInGameTime; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoWorldPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoWorldPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoWorldSaveData WorldSaveData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoWorldSaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoWorldSaveData	
	{
	public:
		uint32_t WorldPersistenceVersion; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDateTime CreationTime; // 0x8(0x8)
		FJunoWorldRandomSeed RandomSeed; // 0x10(0x14)
		unsigned char UnknownData03_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector InitialPlayerStartLocation; // 0x28(0x18)
		FString LatestSessionId; // 0x40(0x10)
	};


	// Struct JunoGameNative.JunoWorldRandomSeed
	// Size: 0x14 (0x14 - 0x0)
	struct FJunoWorldRandomSeed	
	{
	public:
		int32_t RootSeed; // 0x0(0x4)
		FGuid Version; // 0x4(0x10)
	};


	// Struct JunoGameNative.JunoGlobalPOIInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoGlobalPOIInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		FName EventName; // 0x4(0x4)
		FVector WorldLocation; // 0x8(0x18)
		float Accuracy; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldSettingRepState
	// Size: 0xC (0xC - 0x0)
	struct FJunoWorldSettingRepState	
	{
	public:
		FGameplayTag SettingName; // 0x0(0x4)
		bool bIsSettingOn; // 0x4(0x1)
		bool bIsSettingTainted; // 0x5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FGameplayTag EnumValueTag; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoWorldSettingBoolToggleEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoWorldSettingBoolToggleEvent	
	{
	public:
		FGameplayTag SettingName; // 0x0(0x4)
		bool bIsSettingOn; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldSettingEnumChangedEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoWorldSettingEnumChangedEvent	
	{
	public:
		FGameplayTag SettingName; // 0x0(0x4)
		FGameplayTag SettingValue; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoWorldSettingTaintedEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoWorldSettingTaintedEvent	
	{
	public:
		FGameplayTag SettingName; // 0x0(0x4)
		bool bIsSettingTainted; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldSettingsPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWorldSettingsPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoWorldSettingsSaveData WorldSettingsSaveData; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoWorldSettingsSaveData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWorldSettingsSaveData	
	{
	public:
		TArray TaintedSettings; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoItemDiscoveredMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoItemDiscoveredMessage	
	{
	public:
		UItemDefinitionBase NewItemDefinition; // 0x0(0x8)
		AFortPlayerState InstigatorPlayerState; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoItemViewStateChanged
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoItemViewStateChanged	
	{
	public:
		AFortPlayerState PlayerState; // 0x0(0x8)
		UItemDefinitionBase ItemDefinition; // 0x8(0x8)
		bool bIsViewed; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoCreatureDiscoveredMessage
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoCreatureDiscoveredMessage	
	{
	public:
		FGameplayTag CreatureTag; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoCreatureViewStateChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoCreatureViewStateChanged	
	{
	public:
		AFortPlayerState PlayerState; // 0x0(0x8)
		FGameplayTag CreatureTag; // 0x8(0x4)
		bool bIsViewed; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoRecipeViewStateChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoRecipeViewStateChanged	
	{
	public:
		AFortPlayerState PlayerState; // 0x0(0x8)
		FName RecipeName; // 0x8(0x4)
		bool bIsViewed; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoRecipeMessageData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoRecipeMessageData	
	{
	public:
		FName RowName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AFortPlayerState DiscoveredByPlayerState; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoRecipeRevealedMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoRecipeRevealedMessage	
	{
	public:
		TArray FoundRecipes; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoRecipeVisibleMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoRecipeVisibleMessage	
	{
	public:
		TArray VisibleRecipes; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoEvent_RequestMapMarkerCustomization
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_RequestMapMarkerCustomization	
	{
	public:
		UJunoMapMarkerCustomizationInitData InitData; // 0x0(0x8)
	};


	// Struct JunoGameNative.PhysicsObjectImpactData_JunoStrainCalculation
	// Inherited from FFortPhysicsObjectImpactDataBase
	// Size: 0x0 (0x58 - 0x58)
	struct FPhysicsObjectImpactData_JunoStrainCalculation : public FFortPhysicsObjectImpactDataBase	
	{
	public:
	};


	// Struct JunoGameNative.JunoEvent_OpenPlayerManagement
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_OpenPlayerManagement	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoLTMEvent_CinematicStarted
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoLTMEvent_CinematicStarted	
	{
	public:
		FGameplayTag CinematicID; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoLTMEvent_CinematicEnded
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoLTMEvent_CinematicEnded	
	{
	public:
		FGameplayTag CinematicID; // 0x0(0x4)
	};


	// Struct JunoGameNative.CampRemovalEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FCampRemovalEntry	
	{
	public:
		TWeakObjectPtr CampActor; // 0x0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.ReplicatedCampData
	// Size: 0x58 (0x58 - 0x0)
	struct FReplicatedCampData	
	{
	public:
		FGuid CampActorID; // 0x0(0x10)
		FPrimaryAssetId CampCenterAssetID; // 0x10(0x8)
		FBox CampBounds; // 0x18(0x38)
		FGameplayTag CampTag; // 0x50(0x4)
		bool bIsSoftRemoved; // 0x54(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.ReplicatedCampAreaReservationData
	// Size: 0x60 (0x60 - 0x0)
	struct FReplicatedCampAreaReservationData	
	{
	public:
		FBox ReservationBounds; // 0x0(0x38)
		FGameplayTagContainer ReservedCampTags; // 0x38(0x20)
		int64_t ReservationAreaID; // 0x58(0x8)
	};


	// Struct JunoGameNative.POIEncounterDataForCamps
	// Size: 0x40 (0x40 - 0x0)
	struct FPOIEncounterDataForCamps	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FBox Bounds; // 0x8(0x38)
	};


	// Struct JunoGameNative.JunoCampManagementPerk
	// Inherited from FTableRowBase
	// Size: 0x50 (0x58 - 0x8)
	struct FJunoCampManagementPerk : public FTableRowBase	
	{
	public:
		FText Title; // 0x8(0x10)
		FText Description; // 0x18(0x10)
		FGameplayTagContainer GameplayTags; // 0x28(0x20)
		TArray GEsToApply; // 0x48(0x10)
	};


	// Struct JunoGameNative.JunoCampManagementPlayerPerk
	// Inherited from FJunoCampManagementPerk -> FTableRowBase
	// Size: 0x18 (0x70 - 0x58)
	struct FJunoCampManagementPlayerPerk : public FJunoCampManagementPerk	
	{
	public:
		FWorldConditionQueryDefinition SelectionPreconditions; // 0x58(0x18)
	};


	// Struct JunoGameNative.JunoCampManagementNPCPerk
	// Inherited from FJunoCampManagementPerk -> FTableRowBase
	// Size: 0x0 (0x58 - 0x58)
	struct FJunoCampManagementNPCPerk : public FJunoCampManagementPerk	
	{
	public:
	};


	// Struct JunoGameNative.JunoCampManagementNPCPerkPerBiome
	// Inherited from FJunoCampManagementPerk -> FTableRowBase
	// Size: 0x0 (0x58 - 0x58)
	struct FJunoCampManagementNPCPerkPerBiome : public FJunoCampManagementPerk	
	{
	public:
	};


	// Struct JunoGameNative.JunoCampManagementPerksBaseConfiguration
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FJunoCampManagementPerksBaseConfiguration : public FTableRowBase	
	{
	public:
		int32_t AwesomenessLevel; // 0x8(0x4)
		FGameplayTag OptionalCampTag; // 0xC(0x4)
		UDataTable PerksTable; // 0x10(0x8)
	};


	// Struct JunoGameNative.JunoCampManagementPlayerPerksBaseConfiguration
	// Inherited from FJunoCampManagementPerksBaseConfiguration -> FTableRowBase
	// Size: 0x0 (0x18 - 0x18)
	struct FJunoCampManagementPlayerPerksBaseConfiguration : public FJunoCampManagementPerksBaseConfiguration	
	{
	public:
	};


	// Struct JunoGameNative.JunoCampManagementNPCPerksBaseConfiguration
	// Inherited from FJunoCampManagementPerksBaseConfiguration -> FTableRowBase
	// Size: 0x0 (0x18 - 0x18)
	struct FJunoCampManagementNPCPerksBaseConfiguration : public FJunoCampManagementPerksBaseConfiguration	
	{
	public:
	};


	// Struct JunoGameNative.PlayerPerksPerAwesomenessLevelDigested
	// Size: 0x50 (0x50 - 0x0)
	struct FPlayerPerksPerAwesomenessLevelDigested	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.PlayerPerksDigested
	// Size: 0x50 (0x50 - 0x0)
	struct FPlayerPerksDigested	
	{
	public:
		TMap PerksPerCampTag; // 0x0(0x50)
	};


	// Struct JunoGameNative.NPCPerksPerAwesomenessLevelDigested
	// Size: 0x50 (0x50 - 0x0)
	struct FNPCPerksPerAwesomenessLevelDigested	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.NPCPerksDigested
	// Size: 0x50 (0x50 - 0x0)
	struct FNPCPerksDigested	
	{
	public:
		TMap PerksPerCampTag; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoEventRequestProfanityCheck
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoEventRequestProfanityCheck	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEventProfanityCheckResult
	// Size: 0x48 (0x48 - 0x0)
	struct FJunoEventProfanityCheckResult	
	{
	public:
		unsigned char UnknownData01_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.TestPropertyToMap
	// Size: 0x4 (0x4 - 0x0)
	struct FTestPropertyToMap	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.TestMappingProperty
	// Size: 0x8 (0x8 - 0x0)
	struct FTestMappingProperty	
	{
	public:
		FTestPropertyToMap TestProperty1; // 0x0(0x4)
		FTestPropertyToMap TestProperty2; // 0x4(0x4)
	};


	// Struct JunoGameNative.TestMappingPropertyContainer
	// Size: 0xC (0xC - 0x0)
	struct FTestMappingPropertyContainer	
	{
	public:
		FTestMappingProperty TestContainer; // 0x0(0x8)
		int32_t ID; // 0x8(0x4)
	};


	// Struct JunoGameNative.TestMappingArray
	// Size: 0x20 (0x20 - 0x0)
	struct FTestMappingArray	
	{
	public:
		TArray TestArray; // 0x0(0x10)
		TArray TestContainerArray; // 0x10(0x10)
	};


	// Struct JunoGameNative.TestMappingMap
	// Size: 0xA0 (0xA0 - 0x0)
	struct FTestMappingMap	
	{
	public:
		TMap TestMap; // 0x0(0x50)
		TMap TestContainerMap; // 0x50(0x50)
	};


	// Struct JunoGameNative.TestMappingSet
	// Size: 0xA0 (0xA0 - 0x0)
	struct FTestMappingSet	
	{
	public:
		TSet TestSet; // 0x0(0x50)
		TSet TestContainerSet; // 0x50(0x50)
	};


	// Struct JunoGameNative.JunoStudGunSelected
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoStudGunSelected	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoStudGunAttachModeEntered
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoStudGunAttachModeEntered	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoStudGunAttachModeExited
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoStudGunAttachModeExited	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoStudGunUnselected
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoStudGunUnselected	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAwesomeThresholdMapping
	// Size: 0x90 (0x90 - 0x0)
	struct FJunoAwesomeThresholdMapping	
	{
	public:
		TArray ThresholdActionConfigs; // 0x0(0x10)
		FScalableFloat AwesomeLevelThreshold; // 0x10(0x28)
		FScalableFloat AwesomeLevelRangeMinThreshold; // 0x38(0x28)
		FScalableFloat AwesomeLevelRangeMaxThreshold; // 0x60(0x28)
		EJunoAwesomeThresholdTestMode ThresholdTestMode; // 0x88(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAwesomePlacementConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FJunoAwesomePlacementConfigTableRow : public FTableRowBase	
	{
	public:
		EJunoAwesomePlacementConfigType PlacementConfigType; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr ItemDefinition; // 0x10(0x20)
		FName CraftingRowName; // 0x30(0x4)
		int32_t AwesomePointsToContribute; // 0x34(0x4)
	};


	// Struct JunoGameNative.JunoRecipeUnlockType
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoRecipeUnlockType	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoRecipeUnlockType_BuildInstructions
	// Inherited from FJunoRecipeUnlockType
	// Size: 0x10 (0x18 - 0x8)
	struct FJunoRecipeUnlockType_BuildInstructions : public FJunoRecipeUnlockType	
	{
	public:
		TArray BuildInstructions; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoRecipeUnlockType_CraftingRowNames
	// Inherited from FJunoRecipeUnlockType
	// Size: 0x10 (0x18 - 0x8)
	struct FJunoRecipeUnlockType_CraftingRowNames : public FJunoRecipeUnlockType	
	{
	public:
		TArray CraftingRowNames; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoRecipeUnlockType_KnowledgeBundle
	// Inherited from FJunoRecipeUnlockType
	// Size: 0x8 (0x10 - 0x8)
	struct FJunoRecipeUnlockType_KnowledgeBundle : public FJunoRecipeUnlockType	
	{
	public:
		UJunoKnowledgeBundle KnowledgeBundle; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoEventReaction_RecipeKnowledgeState
	// Inherited from FFortEventReaction_Reward -> FEventReaction_Reward -> FEventReactionBase
	// Size: 0x18 (0x20 - 0x8)
	struct FJunoEventReaction_RecipeKnowledgeState : public FFortEventReaction_Reward	
	{
	public:
		TArray RecipeUnlockTypes; // 0x8(0x10)
		EJunoKnowledgeState NewState; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoCampBuiltObjectEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoCampBuiltObjectEntry	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.PlayerAwesomeUpgradeResourceData
	// Size: 0x18 (0x18 - 0x0)
	struct FPlayerAwesomeUpgradeResourceData	
	{
	public:
		TArray ResourceInstances; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.AwesomePerkReward
	// Size: 0x40 (0x40 - 0x0)
	struct FAwesomePerkReward	
	{
	public:
		FText Title; // 0x0(0x10)
		FText Description; // 0x10(0x10)
		FGameplayTagContainer GameplayTags; // 0x20(0x20)
	};


	// Struct JunoGameNative.AwesomeLevelRewardEntry
	// Size: 0x38 (0x38 - 0x0)
	struct FAwesomeLevelRewardEntry	
	{
	public:
		int32_t MaxVillagerCapacity; // 0x0(0x4)
		int32_t MaxNPCOnlyCapacity; // 0x4(0x4)
		int32_t MaxCreatureOnlyCapacity; // 0x8(0x4)
		int32_t MaxSharedAICapacity; // 0xC(0x4)
		int32_t FixedNPCCapacity; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray PlayerPerkRewards; // 0x18(0x10)
		TArray NPCPerkRewards; // 0x28(0x10)
	};


	// Struct JunoGameNative.JunoVerbFilter_AwesomeLevelIncreased
	// Inherited from FObjectiveFilter
	// Size: 0x90 (0x130 - 0xA0)
	struct FJunoVerbFilter_AwesomeLevelIncreased : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags_Progressible SourceActor; // 0xA0(0x50)
		bool bUseNewLevelRequirement; // 0xF0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		FInt32Range RequiredNewLevel; // 0xF4(0x10)
		bool bUsePrevLevelRequirement; // 0x104(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x105(0x3) UNKNOWN PROPERTY
		FInt32Range RequiredPrevLevel; // 0x108(0x10)
		bool bUseRemainingPointsLevelRequirement; // 0x118(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		FInt32Range RequiredRemainingPoints; // 0x11C(0x10)
		EJunoAwesomeLevelIncrementType IncrementBy; // 0x12C(0x1)
		unsigned char UnknownData07_7[0x3]; // 0x12D(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoVerbFilter_BattleBusBoarded
	// Inherited from FObjectiveFilter
	// Size: 0x90 (0x130 - 0xA0)
	struct FJunoVerbFilter_BattleBusBoarded : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags OriginBusStop; // 0xA0(0x48)
		FObjectiveSubjectTags TargetBusStop; // 0xE8(0x48)
	};


	// Struct JunoGameNative.JunoVerbFilter_CreaturePet
	// Inherited from FObjectiveFilter
	// Size: 0x50 (0xF0 - 0xA0)
	struct FJunoVerbFilter_CreaturePet : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags_Progressible Creature; // 0xA0(0x50)
	};


	// Struct JunoGameNative.JunoVerbFilter_CreatureFed
	// Inherited from FObjectiveFilter
	// Size: 0x98 (0x138 - 0xA0)
	struct FJunoVerbFilter_CreatureFed : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags_Progressible Creature; // 0xA0(0x50)
		FObjectiveSubjectTags FedItem; // 0xF0(0x48)
	};


	// Struct JunoGameNative.JunoVerbFilter_EquipmentChanged
	// Inherited from FObjectiveFilter
	// Size: 0x98 (0x138 - 0xA0)
	struct FJunoVerbFilter_EquipmentChanged : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags Item; // 0xA0(0x48)
		FObjectiveSubjectTags EquipSlot; // 0xE8(0x48)
		EJunoEquipmentChangedFilterState EquipFilter; // 0x130(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoVerbFilter_GuidedBuildCompleted
	// Inherited from FObjectiveFilter
	// Size: 0x98 (0x138 - 0xA0)
	struct FJunoVerbFilter_GuidedBuildCompleted : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags GuidedBuilding; // 0xA0(0x48)
		FObjectiveSubjectTags_Progressible BuildContributors; // 0xE8(0x50)
	};


	// Struct JunoGameNative.JunoVerbFilter_GuidedBuildStageCompleted
	// Inherited from FObjectiveFilter
	// Size: 0x50 (0xF0 - 0xA0)
	struct FJunoVerbFilter_GuidedBuildStageCompleted : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags GuidedBuilding; // 0xA0(0x48)
		FJunoStageKey StageKey; // 0xE8(0x8)
	};


	// Struct JunoGameNative.JunoVerbFilter_RecipeStateChanged
	// Inherited from FObjectiveFilter
	// Size: 0xA0 (0x140 - 0xA0)
	struct FJunoVerbFilter_RecipeStateChanged : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags Instigator; // 0xA0(0x48)
		FObjectiveSubjectTags_Progressible Players; // 0xE8(0x50)
		FName RecipeName; // 0x138(0x4)
		EJunoKnowledgeState NewState; // 0x13C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x13D(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoVerbFilter_RecruitNPC
	// Inherited from FObjectiveFilter
	// Size: 0x90 (0x130 - 0xA0)
	struct FJunoVerbFilter_RecruitNPC : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags UniqueAIIdentifier; // 0xA0(0x48)
		FObjectiveSubjectTags AIRole; // 0xE8(0x48)
	};


	// Struct JunoGameNative.JunoVerbFilter_TemperatureUpdated
	// Inherited from FObjectiveFilter
	// Size: 0x90 (0x130 - 0xA0)
	struct FJunoVerbFilter_TemperatureUpdated : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags PreviousTemperature; // 0xA0(0x48)
		FObjectiveSubjectTags NewTemperature; // 0xE8(0x48)
	};


	// Struct JunoGameNative.JunoMinifigLayeringParameters
	// Size: 0x14 (0x14 - 0x0)
	struct FJunoMinifigLayeringParameters	
	{
	public:
		float Prop1; // 0x0(0x4)
		float Prop2; // 0x4(0x4)
		float AddLocomotion; // 0x8(0x4)
		float AddSecondary; // 0xC(0x4)
		float MeshSpace; // 0x10(0x4)
	};


	// Struct JunoGameNative.JunoMinifigLayeringMask
	// Size: 0xA0 (0xA0 - 0x0)
	struct FJunoMinifigLayeringMask	
	{
	public:
		FJunoMinifigLayeringParameters Head; // 0x0(0x14)
		FJunoMinifigLayeringParameters Torso; // 0x14(0x14)
		FJunoMinifigLayeringParameters ArmL; // 0x28(0x14)
		FJunoMinifigLayeringParameters ArmR; // 0x3C(0x14)
		FJunoMinifigLayeringParameters HandL; // 0x50(0x14)
		FJunoMinifigLayeringParameters HandR; // 0x64(0x14)
		FJunoMinifigLayeringParameters pelvis; // 0x78(0x14)
		FJunoMinifigLayeringParameters Legs; // 0x8C(0x14)
	};


	// Struct JunoGameNative.OrbitCamLocalUpdateVariables
	// Size: 0x28 (0x28 - 0x0)
	struct FOrbitCamLocalUpdateVariables	
	{
	public:
		AActor ViewTargetActor; // 0x0(0x8)
		float DeltaTime; // 0x8(0x4)
		bool bIsTargetBuilding; // 0xC(0x1)
		bool bIsTargetFalling; // 0xD(0x1)
		bool bIsTargetSkydiving; // 0xE(0x1)
		bool bIsTargetDriving; // 0xF(0x1)
		bool bIsTargetParachuting; // 0x10(0x1)
		bool bIsTargetCreativeFlying; // 0x11(0x1)
		bool bIsTargetInConversation; // 0x12(0x1)
		bool bIsTargetAttackingMelee; // 0x13(0x1)
		bool bIsTargetStrafing; // 0x14(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		double CameraPitch; // 0x18(0x8)
		double NormalizedCameraPitch; // 0x20(0x8)
	};


	// Struct JunoGameNative.JunoBedAssignmentCharacterInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoBedAssignmentCharacterInfo	
	{
	public:
		FGameplayTag AICharacterGameplayTag; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText AICharacterDisplayName; // 0x8(0x10)
		TWeakObjectPtr AICharacterIcon; // 0x18(0x20)
		bool bHasBed; // 0x38(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoReplicatedCharacterData
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoReplicatedCharacterData	
	{
	public:
		int32_t ForceRepNumber; // 0x0(0x4)
		EJunoBedAssignmentProcessingState ProcessingState; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray AssignedCharacterInfo; // 0x8(0x10)
		TArray PlayerNetIds; // 0x18(0x10)
	};


	// Struct JunoGameNative.JunoActionChannelInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoActionChannelInfo	
	{
	public:
		FGameplayTag Action; // 0x0(0x4)
		FGameplayTag Channel; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoBuildingResourceData
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FJunoBuildingResourceData : public FTableRowBase	
	{
	public:
		FDataTableRowHandle ResourceItemHandle; // 0x8(0x10)
		EJunoResourceScale ResourceScale; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingHitData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoBuildingHitData	
	{
	public:
		ABuildingActor BuildingActor; // 0x0(0x8)
		FTimerHandle HealthRegenHandle; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoResourceData
	// Inherited from FTableRowBase
	// Size: 0x70 (0x78 - 0x8)
	struct FJunoResourceData : public FTableRowBase	
	{
	public:
		TWeakObjectPtr ItemDefinition; // 0x8(0x20)
		TMap Amount; // 0x28(0x50)
	};


	// Struct JunoGameNative.JunoPlayerSpawnLocationInfo
	// Size: 0x90 (0x90 - 0x0)
	struct FJunoPlayerSpawnLocationInfo	
	{
	public:
		unsigned char UnknownData01_2[0x90]; // 0x0(0x90) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_RootPlayspaceReady
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_RootPlayspaceReady	
	{
	public:
		AJunoRootPlayspace Playspace; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_WorldLoadedOrCreated
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoEvent_WorldLoadedOrCreated	
	{
	public:
		FJunoWorldMetadata WorldMetadata; // 0x0(0x60)
	};


	// Struct JunoGameNative.JunoReplicatedPlayerMetadata
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoReplicatedPlayerMetadata	
	{
	public:
		FString AccountId; // 0x0(0x10)
		FDateTime LastPlayed; // 0x10(0x8)
		uint32_t TotalSecondsPlayed; // 0x18(0x4)
		int32_t Lives; // 0x1C(0x4)
	};


	// Struct JunoGameNative.JunoReplicatedWorldMetadata
	// Size: 0xC8 (0xC8 - 0x0)
	struct FJunoReplicatedWorldMetadata	
	{
	public:
		FJunoWorldMetadata MetaData; // 0x0(0x60)
		FString OwnerId; // 0x60(0x10)
		FString OwnerName; // 0x70(0x10)
		TArray Keyholders; // 0x80(0x10)
		TArray Occupants; // 0x90(0x10)
		double WorldOwnerGuestReservationExpiration; // 0xA0(0x8)
		FDateTime CreatedAt; // 0xA8(0x8)
		FDateTime LastPlayed; // 0xB0(0x8)
		TArray Players; // 0xB8(0x10)
	};


	// Struct JunoGameNative.PCGJunoPossibleWorld
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FPCGJunoPossibleWorld : public FTableRowBase	
	{
	public:
		TWeakObjectPtr PersistentLevel; // 0x8(0x20)
		TArray OverlayLevels; // 0x28(0x10)
		bool bCanBeRandomlySelected; // 0x38(0x1)
		bool bIsDeprecated; // 0x39(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoRidingAnimationData
	// Size: 0x14 (0x14 - 0x0)
	struct FJunoRidingAnimationData	
	{
	public:
		bool bEnableRidingDataOnAnimInstance; // 0x0(0x1)
		bool bIsRidden; // 0x1(0x1)
		bool bIsTurningInPlace; // 0x2(0x1)
		bool bIsSprinting; // 0x3(0x1)
		bool bIsBeingPetted; // 0x4(0x1)
		bool bIsMovingBackwards; // 0x5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		float TurnInPlaceRotationSpeed; // 0x8(0x4)
		float TurnInPlaceAngleDelta; // 0xC(0x4)
		float RiderReferentialYaw; // 0x10(0x4)
	};


	// Struct JunoGameNative.JunoInventoryGroupConfig
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoInventoryGroupConfig	
	{
	public:
		FGameplayTag GroupType; // 0x0(0x4)
		uint32_t NumItemRows; // 0x4(0x4)
		uint32_t NumItemColumns; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TMap SlotTagMap; // 0x10(0x50)
	};


	// Struct JunoGameNative.JunoInventoryConfig
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoInventoryConfig	
	{
	public:
		TArray InventoryGroupConfigs; // 0x0(0x10)
		FGameplayTag GameplayTag; // 0x10(0x4)
		bool bIsPersistent; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoItemChangedMessage
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoItemChangedMessage	
	{
	public:
		UJunoInventoryComponent OwningInventoryComponent; // 0x0(0x8)
		FJunoItemSlot ChangedSlot; // 0x8(0x50)
		EJunoItemChangeType ItemChangeType; // 0x58(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoItemSlotGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoItemSlotGroup	
	{
	public:
		FGameplayTag GroupType; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray SlotList; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoReplicatedItemSlotList
	// Inherited from FFastArraySerializer
	// Size: 0x20 (0x128 - 0x108)
	struct FJunoReplicatedItemSlotList : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x108(0x10) UNKNOWN PROPERTY
		TArray ItemSlots; // 0x118(0x10)
	};


	// Struct JunoGameNative.JunoItemSlotPrediction
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoItemSlotPrediction	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.ServerSpawnedActorPair
	// Size: 0xC (0xC - 0x0)
	struct FServerSpawnedActorPair	
	{
	public:
		TWeakObjectPtr Actor; // 0x0(0x8)
		FName StableName; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoBuilderToolSupportActorComponentPair
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoBuilderToolSupportActorComponentPair	
	{
	public:
		AActor Actor; // 0x0(0x8)
		UPrimitiveComponent Component; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoBuilderToolSupportCandidate
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoBuilderToolSupportCandidate	
	{
	public:
		TWeakObjectPtr Actor; // 0x0(0x8)
		TWeakObjectPtr Component; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoBuilderToolSelectedActor
	// Size: 0x70 (0x70 - 0x0)
	struct FJunoBuilderToolSelectedActor	
	{
	public:
		UClass Class; // 0x0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform ToSelection; // 0x10(0x60)
	};


	// Struct JunoGameNative.JunoBuilderToolInteractionRow
	// Inherited from FTableRowBase
	// Size: 0xA0 (0xA8 - 0x8)
	struct FJunoBuilderToolInteractionRow : public FTableRowBase	
	{
	public:
		FJunoBuilderToolInteractionActorClassSet SupportedClasses; // 0x8(0xA0)
	};


	// Struct JunoGameNative.JunoBuilderToolSelectionSpawnParams
	// Size: 0x100 (0x100 - 0x0)
	struct FJunoBuilderToolSelectionSpawnParams	
	{
	public:
		TArray SelectedActors; // 0x0(0x10)
		FTransform SelectionTransform; // 0x10(0x60)
		TWeakObjectPtr AttachmentActor; // 0x70(0x8)
		TArray SupportCandidates; // 0x78(0x10)
		APawn Instigator; // 0x88(0x8)
		FName RecipeName; // 0x90(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		TArray StableNames; // 0x98(0x10)
		FGameplayTagContainer GameplayTags; // 0xA8(0x20)
		FBox WorldSpaceBoundingBox; // 0xC8(0x38)
	};


	// Struct JunoGameNative.JunoBuilderToolTimedActors
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoBuilderToolTimedActors	
	{
	public:
		TArray Actors; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingSnapEntryContext
	// Size: 0x80 (0x80 - 0x0)
	struct FJunoBuildingSnapEntryContext	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		EJunoBuildingSnapEntryState State; // 0x8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FTransform ToWorld; // 0x10(0x60)
		unsigned char UnknownData05_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingSnapContext
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoBuildingSnapContext	
	{
	public:
		unsigned char UnknownData01_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		TArray TargetEntries; // 0x20(0x10)
		FQuat RotationOffset; // 0x30(0x20)
	};


	// Struct JunoGameNative.JunoBuildingConnectivityContext
	// Size: 0x2A0 (0x2A0 - 0x0)
	struct FJunoBuildingConnectivityContext	
	{
	public:
		FJunoBuildingConnectionPointsResult PreviewConnectionPoints; // 0x0(0x50)
		FVector TargetTraceToActorLocation; // 0x50(0x18)
		unsigned char UnknownData01_6[0x18]; // 0x68(0x18) UNKNOWN PROPERTY
		FJunoBuildingConnectionPointsResult TargetConnectionPoints; // 0x80(0x50)
		FJunoBuildingConnection Connection; // 0xD0(0x1D0)
	};


	// Struct JunoGameNative.JunoBuildingFloatingParams
	// Size: 0x160 (0x160 - 0x0)
	struct FJunoBuildingFloatingParams	
	{
	public:
		unsigned char UnknownData01_2[0x160]; // 0x0(0x160) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.OnPlacementAction
	// Size: 0xC (0xC - 0x0)
	struct FOnPlacementAction	
	{
	public:
		TWeakObjectPtr Actor; // 0x0(0x8)
		EOnPlacementAction Action; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingPlacementResult
	// Size: 0x2A0 (0x2A0 - 0x0)
	struct FJunoBuildingPlacementResult	
	{
	public:
		FTransform CameraViewPoint; // 0x0(0x60)
		unsigned char UnknownData03_6[0x8]; // 0x60(0x8) UNKNOWN PROPERTY
		FHitResult TargetTraceResult; // 0x68(0xF8)
		EJunoBuildingPlacementType PlacementType; // 0x160(0x1)
		unsigned char UnknownData04_6[0xF]; // 0x161(0xF) UNKNOWN PROPERTY
		FTransform UnsnappedTargetTransform; // 0x170(0x60)
		FTransform TargetTransform; // 0x1D0(0x60)
		FTransform CoordinateBasis; // 0x230(0x60)
		TWeakObjectPtr AttachmentActor; // 0x290(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x298(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingBehaviorInteractionRow
	// Inherited from FJunoBuilderToolInteractionRow -> FTableRowBase
	// Size: 0x140 (0x1E8 - 0xA8)
	struct FJunoBuildingBehaviorInteractionRow : public FJunoBuilderToolInteractionRow	
	{
	public:
		FJunoBuilderToolInteractionActorClassSet OverlappableClasses; // 0xA8(0xA0)
		FJunoBuilderToolInteractionActorClassSet PlacementSupportingClasses; // 0x148(0xA0)
	};


	// Struct JunoGameNative.JunoBuildingBehaviorOverrides
	// Size: 0x260 (0x260 - 0x0)
	struct FJunoBuildingBehaviorOverrides	
	{
	public:
		FJunoBuildingBehaviorInteractionRow ConfigData; // 0x0(0x1E8)
		FVector GridSize; // 0x1E8(0x18)
		FRotator RotationOffset; // 0x200(0x18)
		FVector PivotOffset; // 0x218(0x18)
		FVector GridSnapOffset; // 0x230(0x18)
		FJunoBuildingBehaviorGridLimits GridOffsetLimits; // 0x248(0x10)
		float MinDistance; // 0x258(0x4)
		bool bMinDistanceIncludesBounds; // 0x25C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x25D(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingSnapEntryBase
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoBuildingSnapEntryBase	
	{
	public:
		FGameplayTagContainer RequiredTags; // 0x0(0x20)
		float Radius; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoGuidedBuildingComponentData
	// Size: 0x90 (0x90 - 0x0)
	struct FJunoGuidedBuildingComponentData	
	{
	public:
		UStaticMesh StaticMesh; // 0x0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		TArray ComponentTags; // 0x70(0x10)
		TWeakObjectPtr Component; // 0x80(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingEditorActorEntry
	// Size: 0x90 (0x90 - 0x0)
	struct FJunoBuildingEditorActorEntry	
	{
	public:
		FName ActorName; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor Actor; // 0x8(0x8)
		UClass ActorClass; // 0x10(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x20(0x60)
		TArray CompData; // 0x80(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingStageData
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoGuidedBuildingStageData	
	{
	public:
		FText StageDisplayName; // 0x0(0x10)
		TArray ActorIndexes; // 0x10(0x10)
		TArray AutoCompleteIndexes; // 0x20(0x10)
		int32_t NumCompleted; // 0x30(0x4)
		bool bStageEverCompleted; // 0x34(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		FGameplayTagContainer StageTags; // 0x38(0x20)
	};


	// Struct JunoGameNative.JunoGuidedBuildingStageEditorData
	// Inherited from FJunoGuidedBuildingStageData
	// Size: 0x28 (0x80 - 0x58)
	struct FJunoGuidedBuildingStageEditorData : public FJunoGuidedBuildingStageData	
	{
	public:
		FGameplayTag StageTag; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		TArray ActorNames; // 0x60(0x10)
		TArray AutoCompleteActorNames; // 0x70(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingSectionData
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoGuidedBuildingSectionData	
	{
	public:
		FText SectionDisplayName; // 0x0(0x10)
		int32_t NumCompleted; // 0x10(0x4)
		int32_t TotalNumberOfSnapsInSection; // 0x14(0x4)
		bool bSectionEverCompleted; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		TArray Stages; // 0x20(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingSectionEditorData
	// Inherited from FJunoGuidedBuildingSectionData
	// Size: 0x18 (0x48 - 0x30)
	struct FJunoGuidedBuildingSectionEditorData : public FJunoGuidedBuildingSectionData	
	{
	public:
		double ZSortValue; // 0x30(0x8)
		TArray EditorStages; // 0x38(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingDestructionEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoGuidedBuildingDestructionEntry	
	{
	public:
		FGameplayTag StageTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray ActorIndexesToDestroy; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingDestructionEditorEntry
	// Inherited from FJunoGuidedBuildingDestructionEntry
	// Size: 0x10 (0x28 - 0x18)
	struct FJunoGuidedBuildingDestructionEditorEntry : public FJunoGuidedBuildingDestructionEntry	
	{
	public:
		TArray ActorNamesToDestroy; // 0x18(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingSetData
	// Size: 0x90 (0x90 - 0x0)
	struct FJunoGuidedBuildingSetData	
	{
	public:
		FText SetDisplayName; // 0x0(0x10)
		int32_t TotalNumberOfSnapsInSet; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FJunoGuidedBuildingStageData FoundationStage; // 0x18(0x58)
		TArray DestructionEntries; // 0x70(0x10)
		TArray Sections; // 0x80(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingSetEditorData
	// Inherited from FJunoGuidedBuildingSetData
	// Size: 0x20 (0xB0 - 0x90)
	struct FJunoGuidedBuildingSetEditorData : public FJunoGuidedBuildingSetData	
	{
	public:
		TArray DestructionEditorEntries; // 0x90(0x10)
		TArray EditorSections; // 0xA0(0x10)
	};


	// Struct JunoGameNative.GuidedBuildingCachedEditorData
	// Size: 0x140 (0x140 - 0x0)
	struct FGuidedBuildingCachedEditorData	
	{
	public:
		TWeakObjectPtr World; // 0x0(0x8)
		AJunoGuidedBuildingSettings SettingsActor; // 0x8(0x8)
		TArray ActorEntries; // 0x10(0x10)
		FString BaseName; // 0x20(0x10)
		UClass ParentClass; // 0x30(0x8)
		FString GuidedBuildingBlueprintName; // 0x38(0x10)
		FString GuidedBuildingBlueprintPath; // 0x48(0x10)
		UStaticMesh CustomCollisionMesh; // 0x58(0x8)
		FString GuidedBuildingPreviewMeshName; // 0x60(0x10)
		FString GuidedBuildingPreviewMeshPath; // 0x70(0x10)
		UClass NewBPClass; // 0x80(0x8)
		UClass ParentDisplayClass; // 0x88(0x8)
		FString GuidedBuildingDisplayActorBlueprintName; // 0x90(0x10)
		FString GuidedBuildingDisplayActorBlueprintPath; // 0xA0(0x10)
		UClass NewBPDisplayActorClass; // 0xB0(0x8)
		FString GuidedBuildingPluginName; // 0xB8(0x10)
		FString GuidedBuildingDisplayActorPluginName; // 0xC8(0x10)
		FName PlaylistName; // 0xD8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray PluginsToActivate; // 0xE0(0x10)
		TArray AllStageKeys; // 0xF0(0x10)
		FBox InteractionBoxSize; // 0x100(0x38)
		FName GuidedBuildingRecipe; // 0x138(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoSortTagData
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoSortTagData	
	{
	public:
		FGameplayTag SortTag; // 0x0(0x4)
		int32_t MaxStageSize; // 0x4(0x4)
	};


	// Struct JunoGameNative.JunoGuidedBuildingData
	// Inherited from FJunoGuidedBuildingBaseData
	// Size: 0x78 (0x90 - 0x18)
	struct FJunoGuidedBuildingData : public FJunoGuidedBuildingBaseData	
	{
	public:
		FName ActorName; // 0x18(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr ActorClass; // 0x20(0x20)
		UClass HardActorClassPtr; // 0x40(0x8)
		TArray Components; // 0x48(0x10)
		FJunoStageKey StageKey; // 0x58(0x8)
		int32_t BuildingStateIndex; // 0x60(0x4)
		bool bIsInstantAutoComplete : 1; // 0x64:0(0x1)
		bool bIsAutoComplete : 1; // 0x64:1(0x1)
		bool bForceIndependentlySupported : 1; // 0x64:2(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		UClass SpawnedClass; // 0x68(0x8)
		FGameplayTagContainer EntryTags; // 0x70(0x20)
	};


	// Struct JunoGameNative.JunoGuidedBuildingStateEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x14 (0x20 - 0xC)
	struct FJunoGuidedBuildingStateEntry : public FFastArraySerializerItem	
	{
	public:
		EJunoGuidedBuildingState CurrentState; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr FilledActor; // 0x10(0x8)
		int32_t BuildingDataIndex; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoGuidedBuildingStateArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FJunoGuidedBuildingStateArray : public FFastArraySerializer	
	{
	public:
		TArray Entries; // 0x108(0x10)
		AJunoGuidedBuildingActor Parent; // 0x118(0x8)
	};


	// Struct JunoGameNative.JunoGuidedBuildingUpdateData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoGuidedBuildingUpdateData	
	{
	public:
		TArray UpdatedSnaps; // 0x0(0x10)
		TArray UpdatedStages; // 0x10(0x10)
		TArray CompletedStages; // 0x20(0x10)
		TArray CompletedSections; // 0x30(0x10)
		bool bSetComplete; // 0x40(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr FinishingPlayer; // 0x44(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoGuidedBuildRemainingPartsInfo
	// Size: 0xC (0xC - 0x0)
	struct FJunoGuidedBuildRemainingPartsInfo	
	{
	public:
		FName Recipe; // 0x0(0x4)
		int32_t Remaining; // 0x4(0x4)
		int32_t Total; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoEvent_LastGuidedBuildingActorChanged
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_LastGuidedBuildingActorChanged	
	{
	public:
		TWeakObjectPtr NewActor; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoGuidedBuildingSetCompleteState
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoGuidedBuildingSetCompleteState	
	{
	public:
		bool bSetComplete; // 0x0(0x1)
		bool bSetEverComplete; // 0x1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr FinishingPlayer; // 0x4(0x8)
		bool bSetUnfinished; // 0xC(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.AutoCompleteData
	// Size: 0x10 (0x10 - 0x0)
	struct FAutoCompleteData	
	{
	public:
		int32_t BuildingDataIndex; // 0x0(0x4)
		TWeakObjectPtr SpawnedActor; // 0x4(0x8)
		bool bAutoComplete; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.AutoCompleteBatch
	// Size: 0x20 (0x20 - 0x0)
	struct FAutoCompleteBatch	
	{
	public:
		TArray AutoCompleteData; // 0x0(0x10)
		TWeakObjectPtr Instigator; // 0x10(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoGuidedBuildingRegisteredPlayer
	// Inherited from FFastArraySerializerItem
	// Size: 0x8 (0x14 - 0xC)
	struct FJunoGuidedBuildingRegisteredPlayer : public FFastArraySerializerItem	
	{
	public:
		TWeakObjectPtr PlayerState; // 0xC(0x8)
	};


	// Struct JunoGameNative.JunoGuidedBuildingRegisteredPlayerArray
	// Inherited from FFastArraySerializer
	// Size: 0x40 (0x148 - 0x108)
	struct FJunoGuidedBuildingRegisteredPlayerArray : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x108(0x30) UNKNOWN PROPERTY
		TArray Entries; // 0x138(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingBrushState
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoGuidedBuildingBrushState	
	{
	public:
		bool bIsGuidedBuildSelected; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray Comps; // 0x8(0x10)
	};


	// Struct JunoGameNative.JunoGuidedBuildingActorSparseClassData
	// Inherited from FBuildingPropActorClassData -> FBuildingTimeOfDayLightsActorClassData -> FBuildingSMActorClassData -> FBuildingActorClassData -> FUserOptionDefinitionContainer
	// Size: 0x230 (0x480 - 0x250)
	struct FJunoGuidedBuildingActorSparseClassData : public FBuildingPropActorClassData	
	{
	public:
		FVector BuildingGridSizeOverride; // 0x250(0x18)
		unsigned char UnknownData03_6[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
		FTransform BuildingPivotOffset; // 0x270(0x60)
		FVector BuildingGridSnapOffset; // 0x2D0(0x18)
		FJunoBuildingBehaviorGridLimits BuildingGridOffsetLimits; // 0x2E8(0x10)
		float BuildingMinDistanceOverride; // 0x2F8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2FC(0x4) UNKNOWN PROPERTY
		FJunoBuilderToolInteractionActorClassSet BuildingOverlappableClasses; // 0x300(0xA0)
		TArray BuildingSnapEntries; // 0x3A0(0x10)
		TMap BuildingPreviewComponentTemplates; // 0x3B0(0x50)
		TWeakObjectPtr GuidedBuildingMaterial; // 0x400(0x20)
		UClass InteractionComponentClass; // 0x420(0x8)
		float LifespanAfterCompletion; // 0x428(0x4)
		float LifespanAfterUnfinished; // 0x42C(0x4)
		float TimeDelayBeforeShowingNewStageGhostBrushes; // 0x430(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x434(0x4) UNKNOWN PROPERTY
		FScalableFloat FoundationVerticalOffset; // 0x438(0x28)
		FGameplayTagContainer DestroyOnPlacementTags; // 0x460(0x20)
	};


	// Struct JunoGameNative.JunoCommonPartsSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoCommonPartsSettings	
	{
	public:
		UStaticMesh Mesh; // 0x0(0x8)
		UMaterialInterface Material; // 0x8(0x8)
		float Height; // 0x10(0x4)
		float Radius; // 0x14(0x4)
		float InnerRadius; // 0x18(0x4)
		bool bShowLogo; // 0x1C(0x1)
		char PlaneQuadrant; // 0x1D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.ProjectPlayResourceData
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FProjectPlayResourceData : public FTableRowBase	
	{
	public:
		TWeakObjectPtr ItemDefinition; // 0x8(0x20)
		FCurveTableRowHandle ResourceAmount; // 0x28(0x10)
	};


	// Struct JunoGameNative.JunoBuildingTagData
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FJunoBuildingTagData : public FTableRowBase	
	{
	public:
		TWeakObjectPtr BlueprintClass; // 0x8(0x20)
		FGameplayTag tag; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoChestTransactionTelemetry
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoChestTransactionTelemetry	
	{
	public:
		TArray AddedItems; // 0x0(0x10)
		TArray RemovedItems; // 0x10(0x10)
		TArray ChangedItems; // 0x20(0x10)
	};


	// Struct JunoGameNative.JunoBuildingPreviewerRequestData
	// Size: 0x120 (0x120 - 0x0)
	struct FJunoBuildingPreviewerRequestData	
	{
	public:
		TMap AttachParents; // 0x0(0x50)
		unsigned char UnknownData01_7[0xD0]; // 0x50(0xD0) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingPreviewerWorkingData
	// Size: 0x300 (0x300 - 0x0)
	struct FJunoBuildingPreviewerWorkingData	
	{
	public:
		TArray DefaultComponents; // 0x0(0x10)
		FJunoBuildingPreviewerRequestData RequestData; // 0x10(0x120)
		FJunoBuildingSelectionPreview Result; // 0x130(0x1D0)
	};


	// Struct JunoGameNative.JunoBuildingSelectionPreview
	// Size: 0x1D0 (0x1D0 - 0x0)
	struct FJunoBuildingSelectionPreview	
	{
	public:
		TArray PreviewComponents; // 0x0(0x10)
		TArray CollisionComponents; // 0x10(0x10)
		TArray MeshComponents; // 0x20(0x10)
		TArray SnapEntryPreviews; // 0x30(0x10)
		TArray ComponentToClassMap; // 0x40(0x10)
		FBox LocalCollisionBounds; // 0x50(0x38)
		FBox FoundationCollisionBounds; // 0x88(0x38)
		FBox NonFoundationCollisionBounds; // 0xC0(0x38)
		UBoxComponent NoTargetPlacementCollisionGBA; // 0xF8(0x8)
		UBoxComponent FoundationPlacementCollisionGBA; // 0x100(0x8)
		unsigned char UnknownData01_7[0xC8]; // 0x108(0xC8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoComponentActorMapEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoComponentActorMapEntry	
	{
	public:
		TWeakObjectPtr Component; // 0x0(0x8)
		UClass SelectedActorClass; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoBuildingSnapEntryPreview
	// Size: 0xC0 (0xC0 - 0x0)
	struct FJunoBuildingSnapEntryPreview	
	{
	public:
		EJunoBuildingSnapEntryState State; // 0x0(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
		FTransform ToWorld; // 0x10(0x60)
		FBox TargetingArea; // 0x70(0x38)
		double FadePercentage; // 0xA8(0x8)
		bool bOnPrimaryActor; // 0xB0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0xB1(0xF) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingPreviewerWorkingDataAsync
	// Size: 0x320 (0x320 - 0x0)
	struct FJunoBuildingPreviewerWorkingDataAsync	
	{
	public:
		FJunoBuildingPreviewerWorkingData WorkingData; // 0x0(0x300)
		unsigned char UnknownData01_7[0x20]; // 0x300(0x20) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoCollisionChannelResponsePair
	// Size: 0x2 (0x2 - 0x0)
	struct FJunoCollisionChannelResponsePair	
	{
	public:
		TEnumAsByte Channel; // 0x0(0x1)
		TEnumAsByte Response; // 0x1(0x1)
	};


	// Struct JunoGameNative.JunoBuildingPreviewParams
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoBuildingPreviewParams	
	{
	public:
		TArray CollisionResponses; // 0x0(0x10)
		bool bShowFoundationPieces; // 0x10(0x1)
		bool bSetCustomDepthStencil; // 0x11(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildingPlacementPreview
	// Size: 0xC0 (0xC0 - 0x0)
	struct FJunoBuildingPlacementPreview	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		TArray MeshComponents; // 0x10(0x10)
		FTransform ToWorld; // 0x20(0x60)
		FBox Bounds; // 0x80(0x38)
		unsigned char UnknownData01_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoBuildInstructionsDisplayData
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoBuildInstructionsDisplayData	
	{
	public:
		EFortItemType ItemType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText ItemTypeNameOverride; // 0x8(0x10)
		FText DisplayName; // 0x18(0x10)
		FText QuantityDisplayName; // 0x28(0x10)
		FText ShortDescription; // 0x38(0x10)
		FText Description; // 0x48(0x10)
	};


	// Struct JunoGameNative.JunoBuildInstructionsPickupData
	// Size: 0x100 (0x100 - 0x0)
	struct FJunoBuildInstructionsPickupData	
	{
	public:
		TWeakObjectPtr PickupStaticMesh; // 0x0(0x20)
		TWeakObjectPtr PickupSkeletalMesh; // 0x20(0x20)
		TWeakObjectPtr PickupEffectOverride; // 0x40(0x20)
		TWeakObjectPtr PickupSound; // 0x60(0x20)
		TWeakObjectPtr PickupByNearbyPawnSound; // 0x80(0x20)
		TWeakObjectPtr DropSound; // 0xA0(0x20)
		TWeakObjectPtr DroppedLoopSound; // 0xC0(0x20)
		TWeakObjectPtr LandedSound; // 0xE0(0x20)
	};


	// Struct JunoGameNative.JunoBuildInstructionsItemData
	// Size: 0x48 (0x48 - 0x0)
	struct FJunoBuildInstructionsItemData	
	{
	public:
		bool bGiveResourcesOnDestroy; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName SelfCraftingFormulaName; // 0x4(0x4)
		TWeakObjectPtr ActorClassToBuild; // 0x8(0x20)
		FText SizeDescription; // 0x28(0x10)
		FText SetDescription; // 0x38(0x10)
	};


	// Struct JunoGameNative.JunoBuildInstructionsInitializationParams
	// Size: 0x1C0 (0x1C0 - 0x0)
	struct FJunoBuildInstructionsInitializationParams	
	{
	public:
		FJunoBuildInstructionsDisplayData Display; // 0x0(0x58)
		FGameplayTagContainer GameplayTags; // 0x58(0x20)
		FJunoBuildInstructionsPickupData Pickup; // 0x78(0x100)
		FJunoBuildInstructionsItemData BuildInstructions; // 0x178(0x48)
	};


	// Struct JunoGameNative.ActorUpgradeInfo
	// Size: 0xD0 (0xD0 - 0x0)
	struct FActorUpgradeInfo	
	{
	public:
		FString FlowName; // 0x0(0x10)
		TWeakObjectPtr ActorToUpgrade; // 0x10(0x8)
		TWeakObjectPtr CraftingObject; // 0x18(0x8)
		TWeakObjectPtr Playspace; // 0x20(0x8)
		FName RecipeName; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UJunoBuildInstructionsItemDefinition OldItemDef; // 0x30(0x8)
		UJunoBuildInstructionsItemDefinition ItemDef; // 0x38(0x8)
		FTransform ActorTransform; // 0x40(0x60)
		TArray ConsumedIngredients; // 0xA0(0x10)
		unsigned char UnknownData03_7[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAnimGcMappingEntry
	// Size: 0xC (0xC - 0x0)
	struct FJunoAnimGcMappingEntry	
	{
	public:
		FName SkeletalMeshBoneName; // 0x0(0x4)
		int32_t GeometryCollectionRootProxyMeshIndices; // 0x4(0x8)
	};


	// Struct JunoGameNative.SerializableGraphLegacy
	// Size: 0xB8 (0xB8 - 0x0)
	struct FSerializableGraphLegacy	
	{
	public:
		FGraphProperties Properties; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray Vertices; // 0x8(0x10)
		TMap Edges; // 0x18(0x50)
		TMap Islands; // 0x68(0x50)
	};


	// Struct JunoGameNative.SerializableConnectivityGraph
	// Inherited from FSerializableGraphLegacy
	// Size: 0x50 (0x108 - 0xB8)
	struct FSerializableConnectivityGraph : public FSerializableGraphLegacy	
	{
	public:
		TMap ConnectivityVertexData; // 0xB8(0x50)
	};


	// Struct JunoGameNative.JunoEvent_KnowledgeComponentReadyOnClient
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_KnowledgeComponentReadyOnClient	
	{
	public:
		UJunoKnowledgeComponent KnowledgeComponent; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoEvent_LocalRecipeKnowledgeStateChanged
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoEvent_LocalRecipeKnowledgeStateChanged	
	{
	public:
		FName RecipeRowName; // 0x0(0x4)
	};


	// Struct JunoGameNative.JunoKnowledgeRecipeStateFastEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x8 (0x14 - 0xC)
	struct FJunoKnowledgeRecipeStateFastEntry : public FFastArraySerializerItem	
	{
	public:
		int16_t RecipeID; // 0xC(0x2)
		EJunoKnowledgeState CurrentState; // 0xE(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xF(0x5) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoKnowledgeRecipeStateFastArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FJunoKnowledgeRecipeStateFastArray : public FFastArraySerializer	
	{
	public:
		TArray Entries; // 0x108(0x10)
		TWeakObjectPtr ParentComp; // 0x118(0x8)
	};


	// Struct JunoGameNative.JunoKnowledgeReplicatedRecipeDiscoverer
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoKnowledgeReplicatedRecipeDiscoverer	
	{
	public:
		int16_t RecipeID; // 0x0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		AFortPlayerState DiscoveredByPlayerState; // 0x8(0x8)
	};


	// Struct JunoGameNative.JunoKnowledgeItemServerState
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoKnowledgeItemServerState	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UItemDefinitionBase ItemDefinition; // 0x8(0x8)
		AFortPlayerState InstigatorPlayerState; // 0x10(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoKnowledgeRecipeServerState
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoKnowledgeRecipeServerState	
	{
	public:
		unsigned char UnknownData02_7[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
		UItemDefinitionBase ResultItem; // 0x40(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoKnowledgeCreatureServerState
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoKnowledgeCreatureServerState	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FGameplayTag CreatureDescriptorTag; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		AFortPlayerState InstigatorPlayerState; // 0x10(0x8)
	};


	// Struct JunoGameNative.UniqueMarkerSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FUniqueMarkerSettings	
	{
	public:
		FDataTableRowHandle OriginalSettings; // 0x0(0x10)
		FDataTableRowHandle ReplacementSettings; // 0x10(0x10)
	};


	// Struct JunoGameNative.MoodReactionDataExposedRequestConfig
	// Size: 0x8 (0x8 - 0x0)
	struct FMoodReactionDataExposedRequestConfig	
	{
	public:
		FGameplayTag MoodReactionTag; // 0x0(0x4)
		bool bLookAtInstigator; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.MoodReactionRequestConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FMoodReactionRequestConfig	
	{
	public:
		FGameplayTag MoodReactionTag; // 0x0(0x4)
		TWeakObjectPtr Instigator; // 0x4(0x8)
		bool bLookAtInstigator; // 0xC(0x1)
		bool bForceInstantReaction; // 0xD(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.RequestedMoodReaction
	// Size: 0x18 (0x18 - 0x0)
	struct FRequestedMoodReaction	
	{
	public:
		FMoodReactionRequestConfig MoodReactionConfig; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoUpdateAction
	// Size: 0xA0 (0xA0 - 0x0)
	struct FJunoUpdateAction	
	{
	public:
		FActorInstanceRecord ActorInstanceRecord; // 0x0(0xA0)
	};


	// Struct JunoGameNative.JunoActorRedirectors
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoActorRedirectors	
	{
	public:
		TMap ActorNameRedirectors; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoDeltasStorage_Index_Dss
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoDeltasStorage_Index_Dss	
	{
	public:
		int32_t WorldCompatibilityVersion; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TMap PackageDeltaFiles; // 0x8(0x50)
	};


	// Struct JunoGameNative.JunoDeltasStorage_Index_PFW
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoDeltasStorage_Index_PFW	
	{
	public:
		int32_t WorldCompatibilityVersion; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TMap DeltasMetadata; // 0x8(0x50)
	};


	// Struct JunoGameNative.JunoPFWDeltaContentBase64
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoPFWDeltaContentBase64	
	{
	public:
		FString Content; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoPersistentPlayspaceLevelRegistryEntry
	// Size: 0x24 (0x24 - 0x0)
	struct FJunoPersistentPlayspaceLevelRegistryEntry	
	{
	public:
		TWeakObjectPtr PersistentPlayspaceWeakPtr; // 0x0(0x8)
		unsigned char UnknownData01_7[0x1C]; // 0x8(0x1C) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoPersistentPlayspaceSaveHandlerContainerItem
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoPersistentPlayspaceSaveHandlerContainerItem	
	{
	public:
		UJunoPersistentPlayspaceSaveHandler JunoPersistentPlayspaceSaveHandler; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoPlayspacePersistenceFeature
	// Size: 0xC0 (0xC0 - 0x0)
	struct FJunoPlayspacePersistenceFeature	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass Class; // 0x8(0x8)
		EJunoPersistenceFeatureCheckoutState CurrentCheckoutState; // 0x10(0x4)
		EJunoPersistenceFeatureCheckoutState TargetCheckoutState; // 0x14(0x4)
		uint32_t CheckoutStateChangeRequestKey; // 0x18(0x4)
		unsigned char UnknownData04_6[0x44]; // 0x1C(0x44) UNKNOWN PROPERTY
		UObject ImplementationCustomStateObject; // 0x60(0x8)
		TScriptInterface Data; // 0x68(0x10)
		UClass SourceImplementationDataClass; // 0x78(0x8)
		TScriptInterface DifferentImplementationData; // 0x80(0x10)
		unsigned char UnknownData05_7[0x30]; // 0x90(0x30) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoClusterUnionPersistenceFeatureData_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoClusterUnionPersistenceFeatureData_PersistentInfo	
	{
	public:
		FJunoClusterUnionSaveData SaveData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoClusterUnionSaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoClusterUnionSaveData	
	{
	public:
		TMap PerClusterUnionData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoSingleClusterUnionSaveData
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoSingleClusterUnionSaveData	
	{
	public:
		FTransform WorldTransform; // 0x0(0x60)
	};


	// Struct JunoGameNative.JunoConnectivityGraphPFW_PersistentInfo
	// Size: 0xC8 (0xC8 - 0x0)
	struct FJunoConnectivityGraphPFW_PersistentInfo	
	{
	public:
		FSerializableConnectivityGraph_v2 SavedConnectivityData; // 0x0(0xC8)
	};


	// Struct JunoGameNative.JunoPhysicsToyPersistenceFeatureData_PersistentInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPhysicsToyPersistenceFeatureData_PersistentInfo	
	{
	public:
		FJunoPhysicsToySaveData Container; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoPhysicsToySaveData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPhysicsToySaveData	
	{
	public:
		TMap PerToyData; // 0x0(0x50)
	};


	// Struct JunoGameNative.JunoSinglePhysicsToySaveData
	// Size: 0x80 (0x80 - 0x0)
	struct FJunoSinglePhysicsToySaveData	
	{
	public:
		FPersistenceFrameworkLevelSaveSpawnablePtr AttachedActor; // 0x0(0x20)
		FTransform RelativeOffset; // 0x20(0x60)
	};


	// Struct JunoGameNative.JunoEvent_OnDeathUI
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoEvent_OnDeathUI	
	{
	public:
		EJunoUIDeathType DeathType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x8(0x20)
	};


	// Struct JunoGameNative.JunoEvent_OnInventoryFull
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_OnInventoryFull	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_TransitionUIState
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_TransitionUIState	
	{
	public:
		bool bEnabled; // 0x0(0x1)
	};


	// Struct JunoGameNative.JunoEvent_CheckPointRemoved
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_CheckPointRemoved	
	{
	public:
		FGuid CheckpointGUID; // 0x0(0x10)
	};


	// Struct JunoGameNative.JunoEnhancedInputActionToGameplayEvent
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEnhancedInputActionToGameplayEvent	
	{
	public:
		UInputAction InputAction; // 0x0(0x8)
		FGameplayTag GameplayEventTag; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEmotionalStateData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEmotionalStateData	
	{
	public:
		EJunoPawnEmotionalState EmotionalState; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float EmotionPercent; // 0x4(0x4)
		float EmotionSetRate; // 0x8(0x4)
		int8_t ForceRepCounter; // 0xC(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoEvent_PawnEmotion
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEvent_PawnEmotion	
	{
	public:
		AFortPlayerPawnAthena Pawn; // 0x0(0x8)
		EJunoPawnEmotionalState CurrentEmotionalState; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float EmotionPercent; // 0xC(0x4)
	};


	// Struct JunoGameNative.JunoPawnEmotionalStateMappingFromAwesomeLevel
	// Size: 0xC (0xC - 0x0)
	struct FJunoPawnEmotionalStateMappingFromAwesomeLevel	
	{
	public:
		EJunoPawnEmotionalState EmotionalState; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t NumericalTestValue; // 0x4(0x4)
		EJunoPawnEmotionalStateMappingTest NumericalTestMode; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoWorldStreamingSources
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoWorldStreamingSources	
	{
	public:
		unsigned char UnknownData01_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoAIFriendshipStateThresholds
	// Size: 0xC (0xC - 0x0)
	struct FJunoAIFriendshipStateThresholds	
	{
	public:
		FGameplayTag State; // 0x0(0x4)
		float MinThreshold; // 0x4(0x4)
		float MaxThreshold; // 0x8(0x4)
	};


	// Struct JunoGameNative.JunoActionTargetPayload
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoActionTargetPayload	
	{
	public:
		AActor Target; // 0x0(0x8)
	};


	// Struct JunoGameNative.JunoBuildLimitPool
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FJunoBuildLimitPool : public FTableRowBase	
	{
	public:
		TArray Classes; // 0x8(0x10)
		int32_t MaxInstanceCount; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UClass BuildLimitGetterClass; // 0x20(0x8)
	};


	// Struct JunoGameNative.JunoProcessAwesomenessInteractionStateTreeTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoProcessAwesomenessInteractionStateTreeTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		AActor TargetActor; // 0x8(0x8)
		FGameplayTag InteractionTypeTag; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoProcessAwesomenessInteractionStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FJunoProcessAwesomenessInteractionStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		EGameplayInteractionTaskTrigger InteractionTrigger; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.MeshAuditInfo
	// Size: 0x80 (0x80 - 0x0)
	struct FMeshAuditInfo	
	{
	public:
		FSoftObjectPath AssetPath; // 0x0(0x18)
		EMeshAuditFailureReason FailureReason; // 0x18(0x4)
		int32_t NumConvexShapes; // 0x1C(0x4)
		int32_t NumConvexShapePointsTotal; // 0x20(0x4)
		int32_t CollisionLOD; // 0x24(0x4)
		int32_t NumTrianglesInPhysicsMesh; // 0x28(0x4)
		int32_t NumNonStreamingLODs; // 0x2C(0x4)
		int32_t NumInlineLODs; // 0x30(0x4)
		int32_t NumLODs; // 0x34(0x4)
		TEnumAsByte CollisionTraceFlag; // 0x38(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TArray TriCounts; // 0x40(0x10)
		int64_t RenderResourceSystemSize; // 0x50(0x8)
		int64_t BodySetupResourceSize; // 0x58(0x8)
		float WorstTriRatio; // 0x60(0x4)
		float MeshBoundingBoxAreaMeters; // 0x64(0x4)
		FString RouteToAsset; // 0x68(0x10)
		bool bCustomizedCollision; // 0x78(0x1)
		bool bMeshCollideAll; // 0x79(0x1)
		bool bNeverStream; // 0x7A(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x7B(0x5) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.SkeletalMeshAuditInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FSkeletalMeshAuditInfo	
	{
	public:
		FSoftObjectPath AssetPath; // 0x0(0x18)
		EMeshAuditFailureReason FailureReason; // 0x18(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		int64_t RenderResourceSystemSize; // 0x20(0x8)
		int32_t NumNonOptionalLODs; // 0x28(0x4)
		int32_t NumInlineLODs; // 0x2C(0x4)
		int32_t NumLODs; // 0x30(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray TriCounts; // 0x38(0x10)
		int32_t NumBoneInfluencesPerVertex; // 0x48(0x4)
		int32_t NumBonesInSkeleton; // 0x4C(0x4)
		float WorstTriRatio; // 0x50(0x4)
		float MeshBoundingBoxAreaMeters; // 0x54(0x4)
		bool bNeverStream; // 0x58(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.GeometryCollectionAuditData
	// Size: 0xB8 (0xB8 - 0x0)
	struct FGeometryCollectionAuditData	
	{
	public:
		FSoftObjectPath AssetPath; // 0x0(0x18)
		uint64_t RestCollection_ManagedArraysSize; // 0x18(0x8)
		uint32_t ComponentInstanceCount; // 0x20(0x4)
		uint32_t DynamicCollectionCount; // 0x24(0x4)
		uint64_t DynamicCollectionsTotalSize; // 0x28(0x8)
		int32_t NumRigidsAllInstances; // 0x30(0x4)
		int32_t NumSimulatedParticlesAllInstances; // 0x34(0x4)
		int32_t ReservedUnusedParticles; // 0x38(0x4)
		int32_t MaxClusterLevelRequested; // 0x3C(0x4)
		int32_t MaxSimulatedClusterLevelRequested; // 0x40(0x4)
		int32_t MaxCalculatedClusterLevel; // 0x44(0x4)
		int32_t MaxActualClusterLevel; // 0x48(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		uint64_t RenderDataSize; // 0x50(0x8)
		int32_t NumExemplars; // 0x58(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		uint64_t NaniteDataSize; // 0x60(0x8)
		TArray RootProxyMeshes; // 0x68(0x10)
		uint64_t NumAutoInstancedMeshes; // 0x78(0x8)
		TArray AutoInstancedMeshes; // 0x80(0x10)
		uint64_t SizeSpecificDataSize; // 0x90(0x8)
		FString DynamicCollectionGroupsAndSizes; // 0x98(0x10)
		FString RestCollectionGroupsAndSizes; // 0xA8(0x10)
	};


	// Struct JunoGameNative.JunoWorldConditionWeather
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x50 (0x60 - 0x10)
	struct FJunoWorldConditionWeather : public FWorldConditionCommonBase	
	{
	public:
		FGameplayTagQuery AllowedWeather; // 0x10(0x48)
		EJunoBiome Biome; // 0x58(0x1)
		EJunoBiomeHabitat Habitat; // 0x59(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoGameNative.JunoWorldConditionActorWeather
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x50 (0x60 - 0x10)
	struct FJunoWorldConditionActorWeather : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		FGameplayTagQuery AllowedWeather; // 0x18(0x48)
	};

}
