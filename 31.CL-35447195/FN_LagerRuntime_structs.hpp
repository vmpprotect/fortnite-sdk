#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LagerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerData
	// Size: 0x110 (0x110 - 0x0)
	struct FFortAthenaLivingWorldPrefabActorSpawnerData	
	{
	public:
		FGuid ActorSpawnerGuid; // 0x0(0x10)
		FFortAthenaLivingWorldActorSpawnDescription ActorDescription; // 0x10(0x100)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
	// Size: 0x100 (0x100 - 0x0)
	struct FFortAthenaLivingWorldActorSpawnDescription	
	{
	public:
		TWeakObjectPtr ActorClass; // 0x0(0x20)
		TWeakObjectPtr SpawnerData; // 0x20(0x20)
		FGameplayTagQuery SpawnerDataTagQuery; // 0x40(0x48)
		FScalableFloat ActorDensityValue; // 0x88(0x28)
		FScalableFloat DensityComputationRangeOverride; // 0xB0(0x28)
		TArray TagDensityRegistrations; // 0xD8(0x10)
		TArray PostDestructionTagDensityPersistenceDuration; // 0xE8(0x10)
		bool bPreloadOnClient; // 0xF8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldTagTimer
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAthenaLivingWorldTagTimer	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FScalableFloat duration; // 0x8(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
	// Size: 0x58 (0x58 - 0x0)
	struct FFortAthenaLivingWorldEventTagDensityRegistration	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FScalableFloat Range; // 0x8(0x28)
		FScalableFloat DensityValue; // 0x30(0x28)
	};


	// Struct LagerRuntime.PointProviderDebugInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FPointProviderDebugInfo	
	{
	public:
		TArray DebugColors; // 0x0(0x10)
	};


	// Struct LagerRuntime.PointProviderTagDebugColor
	// Size: 0x28 (0x28 - 0x0)
	struct FPointProviderTagDebugColor	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FColor Color; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
	// Size: 0x68 (0x68 - 0x0)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		ELivingWorldPointProviderSpawnLimiterBehavior Behavior; // 0x8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FScalableFloat MaxNumberOfSpawn; // 0x10(0x28)
		FScalableFloat MaxNumberOfEventInstance; // 0x38(0x28)
		bool bResetLimitWhenEnabling; // 0x60(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldConditionContainer
	// Size: 0x18 (0x18 - 0x0)
	struct FFortAthenaLivingWorldConditionContainer	
	{
	public:
		UObject Owner; // 0x0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldLiveCapture
	// Size: 0x98 (0x98 - 0x0)
	struct FFortAthenaLivingWorldLiveCapture	
	{
	public:
		unsigned char UnknownData01_2[0x98]; // 0x0(0x98) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldSpawnerDataSelector
	// Size: 0x8 (0x8 - 0x0)
	struct FFortAthenaLivingWorldSpawnerDataSelector	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldCondition_CheckPrefabTags
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x50 (0x60 - 0x10)
	struct FFortAthenaLivingWorldCondition_CheckPrefabTags : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		FGameplayTagQuery TagQuery; // 0x18(0x48)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresence
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x58 (0x68 - 0x10)
	struct FFortAthenaLivingWorldCondition_TrackedPlayerPresence : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		FScalableFloat MinDistanceToPlayer; // 0x18(0x28)
		FScalableFloat MaxDistanceToPlayer; // 0x40(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldDensityCondition
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x88 (0x98 - 0x10)
	struct FFortAthenaLivingWorldDensityCondition : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		FGameplayTag tag; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FScalableFloat Distance; // 0x20(0x28)
		FScalableFloat MaxDensity; // 0x48(0x28)
		FScalableFloat MinDensity; // 0x70(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldDespawnCondition
	// Size: 0x48 (0x48 - 0x0)
	struct FFortAthenaLivingWorldDespawnCondition	
	{
	public:
		FWorldConditionQueryDefinition DespawnWorldCondition; // 0x0(0x18)
		float TimeAsCandidateBeforeDespawn; // 0x18(0x4)
		float TimeAsCandidateBeforeDespawnDeviation; // 0x1C(0x4)
		bool bUseCustomDeathTag; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer DeathTagContainer; // 0x28(0x20)
	};


	// Struct LagerRuntime.FortAthenaLinearEncounterPlayerParticipationData
	// Size: 0x40 (0x40 - 0x0)
	struct FFortAthenaLinearEncounterPlayerParticipationData	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldActorUpdateHandler
	// Size: 0xB0 (0xB0 - 0x0)
	struct FFortAthenaLivingWorldActorUpdateHandler	
	{
	public:
		UFortAthenaLivingWorldManager LivingWorldManager; // 0x0(0x8)
		unsigned char UnknownData01_7[0xA8]; // 0x8(0xA8) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortLivingWorldEventTableVariation
	// Size: 0x58 (0x58 - 0x0)
	struct FFortLivingWorldEventTableVariation	
	{
	public:
		FSoftDataRegistryOrTable EventTableVariation; // 0x0(0x30)
		FScalableFloat VariationWeight; // 0x30(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldCategory
	// Inherited from FTableRowBase
	// Size: 0xF0 (0xF8 - 0x8)
	struct FFortAthenaLivingWorldCategory : public FTableRowBase	
	{
	public:
		FSoftDataRegistryOrTable EventTable; // 0x8(0x30)
		TArray EventTableVariations; // 0x38(0x10)
		int32_t MaxCount; // 0x48(0x4)
		int32_t MaxSpawnedCount; // 0x4C(0x4)
		int32_t EventInstanceMaxCount; // 0x50(0x4)
		int32_t EventInstanceMaxSpawnedCount; // 0x54(0x4)
		FWorldConditionQueryDefinition CanSpawnCondition; // 0x58(0x18)
		float Priority; // 0x70(0x4)
		bool bExcludeFromGlobalAIBudget; // 0x74(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FGameplayTagQuery RequirePlaylistTagQuery; // 0x78(0x48)
		TArray Encounters; // 0xC0(0x10)
		FScalableFloat IsEnabled; // 0xD0(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldTagDensityGridData
	// Size: 0x58 (0x58 - 0x0)
	struct FFortAthenaLivingWorldTagDensityGridData	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FScalableFloat GridCellSize; // 0x8(0x28)
		FScalableFloat SparseToDenseRatio; // 0x30(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldCategoryTableData
	// Size: 0x50 (0x50 - 0x0)
	struct FFortAthenaLivingWorldCategoryTableData	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CategoryTable; // 0x8(0x20)
		FScalableFloat IsEnabled; // 0x28(0x28)
	};


	// Struct LagerRuntime.FortAthenaActorDensityDebugInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FFortAthenaActorDensityDebugInfo	
	{
	public:
		FString ActorName; // 0x0(0x10)
		FVector ActorPosition; // 0x10(0x18)
		FIntVector MinCellIndex; // 0x28(0xC)
		FIntVector MaxCellIndex; // 0x34(0xC)
		float DensityValue; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldDensityGrid
	// Inherited from FFortSpatialGrid
	// Size: 0xD8 (0x198 - 0xC0)
	struct FFortAthenaLivingWorldDensityGrid : public FFortSpatialGrid	
	{
	public:
		unsigned char UnknownData01_1[0xD8]; // 0xC0(0xD8) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldEncounterStage
	// Size: 0xB0 (0xB0 - 0x0)
	struct FFortAthenaLivingWorldEncounterStage	
	{
	public:
		FSoftDataRegistryOrTable EventTable; // 0x0(0x30)
		FScalableFloat MaximumConcurrentNumberOfAI; // 0x30(0x28)
		bool bAllowRandomMaximumActorCount; // 0x58(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		FScalableFloat MaximumConcurrentNumberOfAI_LowValue; // 0x60(0x28)
		FScalableFloat MaxSpawnCountPerEventGeneration; // 0x88(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAthenaLivingWorldEventDespawnCondition	
	{
	public:
		bool bCanBeDespawned; // 0x0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MinDistanceToPlayer; // 0x4(0x4)
		float TimeAsCandidateBeforeDespawn; // 0x8(0x4)
		EAthenaGamePhaseStep CanStartDespawningPhaseStep; // 0xC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		int32_t CanStartDespawningSafeZonePhase; // 0x10(0x4)
		bool bCanDespawnWhenInCombatWithPlayer; // 0x14(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float MaxStimulusAgeToBeConsideredInCombat; // 0x18(0x4)
		bool bCanDespawnInTheStorm; // 0x1C(0x1)
		unsigned char UnknownData07_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
	// Size: 0xC (0xC - 0x0)
	struct FFortAthenaLivingWorldEventTagDensityCondition	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		float Distance; // 0x4(0x4)
		float MaxDensity; // 0x8(0x4)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldEventDataEntry
	// Size: 0x48 (0x48 - 0x0)
	struct FFortAthenaLivingWorldEventDataEntry	
	{
	public:
		TWeakObjectPtr EventData; // 0x0(0x20)
		FScalableFloat Weight; // 0x20(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldEvent
	// Inherited from FTableRowBase
	// Size: 0x1A8 (0x1B0 - 0x8)
	struct FFortAthenaLivingWorldEvent : public FTableRowBase	
	{
	public:
		TWeakObjectPtr EventData; // 0x8(0x20)
		TArray EventDatas; // 0x28(0x10)
		FScalableFloat IsEnabled; // 0x38(0x28)
		TArray MaxCount; // 0x60(0x10)
		TArray MaxSpawnedCount; // 0x70(0x10)
		TArray EventInstanceMaxCount; // 0x80(0x10)
		TArray EventInstanceMaxSpawnedCount; // 0x90(0x10)
		float Weight; // 0xA0(0x4)
		bool bCheckForActorDensity; // 0xA4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY
		float MaxActorDensityOverride; // 0xA8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TArray MinRespawnTime; // 0xB0(0x10)
		TArray MaxRespawnTime; // 0xC0(0x10)
		TArray InstantDeathMinRespawnTime; // 0xD0(0x10)
		TArray InstantDeathMaxRespawnTime; // 0xE0(0x10)
		bool bOnlyInSafeZone; // 0xF0(0x1)
		bool bOnlyInNextSafeZone; // 0xF1(0x1)
		bool bOnlyInNextSafeZoneIfStormShrinking; // 0xF2(0x1)
		unsigned char UnknownData07_6[0x5]; // 0xF3(0x5) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition CanSpawnCondition; // 0xF8(0x18)
		EAthenaGamePhaseStep ActivationGamePhaseStep; // 0x110(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x111(0x3) UNKNOWN PROPERTY
		int32_t ActivationSafezoneIndex; // 0x114(0x4)
		float ActivationMinDelay; // 0x118(0x4)
		float ActivationMaxDelay; // 0x11C(0x4)
		float DeactivationMinDelay; // 0x120(0x4)
		float DeactivationMaxDelay; // 0x124(0x4)
		TArray TagDensityConditions; // 0x128(0x10)
		bool bCanSpawnWithoutMatchingPlayerDistance; // 0x138(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x139(0x3) UNKNOWN PROPERTY
		float MinDistanceToPlayer; // 0x13C(0x4)
		float MaxDistanceToPlayer; // 0x140(0x4)
		float RandomActivationChance; // 0x144(0x4)
		FFortAthenaLivingWorldEventDespawnCondition DespawnCondition; // 0x148(0x20)
		TArray DespawnConditions; // 0x168(0x10)
		FGameplayTagContainer RequirePlaylistTags; // 0x178(0x20)
		FLivingWorldCalendarEventConditions CalendarEventConditions; // 0x198(0x18)
	};


	// Struct LagerRuntime.LivingWorldCalendarEventConditions
	// Size: 0x18 (0x18 - 0x0)
	struct FLivingWorldCalendarEventConditions	
	{
	public:
		TArray Conditions; // 0x0(0x10)
		bool IsActiveWithoutSeasonalManager; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.LivingWorldCalendarEventCondition
	// Size: 0x20 (0x20 - 0x0)
	struct FLivingWorldCalendarEventCondition	
	{
	public:
		FString CalendarEventName; // 0x0(0x10)
		ELivingWorldCalendarEventConditionBehavior Behavior; // 0x10(0x1)
		bool ShouldEventBeActive; // 0x11(0x1)
		ELivingWorldCalendarEventConditionRatioBehavior RatioBehavior; // 0x12(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x13(0x1) UNKNOWN PROPERTY
		float RatioValue; // 0x14(0x4)
		float RatioMaxValue; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.PointProviderFilterEntry
	// Size: 0x88 (0x88 - 0x0)
	struct FPointProviderFilterEntry	
	{
	public:
		FGameplayTagQuery ProviderFiltersTagQuery; // 0x0(0x48)
		FLivingWorldCalendarEventConditions CalendarEventConditions; // 0x48(0x18)
		FScalableFloat Weight; // 0x60(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
	// Inherited from FFortAthenaLivingWorldActorSpawnDescription
	// Size: 0x30 (0x130 - 0x100)
	struct FFortAthenaLivingWorldEventDataActorSpawnDescription : public FFortAthenaLivingWorldActorSpawnDescription	
	{
	public:
		bool bSpawnAroundDefaultPoint; // 0x100(0x1)
		bool bUpdateDefaultPosition; // 0x101(0x1)
		bool bSharePreviousActorEQSResult; // 0x102(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x103(0x5) UNKNOWN PROPERTY
		UEnvQuery SpawnAroundEnvironmentQuery; // 0x108(0x8)
		TEnumAsByte SpawnAroundEnvironmentQueryRunMode; // 0x110(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FSoftClassPath SpawnAroundNavigationSourceOverride; // 0x118(0x18)
	};


	// Struct LagerRuntime.FortLivingWorldConfigOverride
	// Size: 0x68 (0x68 - 0x0)
	struct FFortLivingWorldConfigOverride	
	{
	public:
		TWeakObjectPtr SourceWorld; // 0x0(0x20)
		FGameplayTagContainer PlaylistTag; // 0x20(0x20)
		TWeakObjectPtr LagerConfig; // 0x40(0x20)
		FFortReleaseVersion StartVersion; // 0x60(0x4)
		FFortReleaseVersion EndVersion; // 0x64(0x4)
	};


	// Struct LagerRuntime.ortAthenaLivingWorldNavigationInvokerSettingsOverride
	// Size: 0x70 (0x70 - 0x0)
	struct FortAthenaLivingWorldNavigationInvokerSettingsOverride	
	{
	public:
		FGameplayTagQuery OverrideTagQuery; // 0x0(0x48)
		FScalableFloat RegistrationDistanceToPlayer; // 0x48(0x28)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldPlayerTracker
	// Size: 0xC0 (0xC0 - 0x0)
	struct FFortAthenaLivingWorldPlayerTracker	
	{
	public:
		TSet TrackedBotControllers; // 0x0(0x50)
		TArray TrackedPawns; // 0x50(0x10)
		TArray TrackedPlayerControllers; // 0x60(0x10)
		TArray Listeners; // 0x70(0x10)
		unsigned char UnknownData01_7[0x40]; // 0x80(0x40) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldPointProviderUpdateHandler
	// Size: 0x98 (0x98 - 0x0)
	struct FFortAthenaLivingWorldPointProviderUpdateHandler	
	{
	public:
		UFortAthenaLivingWorldManager LivingWorldManager; // 0x0(0x8)
		unsigned char UnknownData01_7[0x90]; // 0x8(0x90) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldPreloader
	// Size: 0xE0 (0xE0 - 0x0)
	struct FFortAthenaLivingWorldPreloader	
	{
	public:
		UFortAthenaLivingWorldManager LivingWorldManager; // 0x0(0x8)
		TArray LoadedSpawnerDataClass; // 0x8(0x10)
		TArray LoadedActorClasses; // 0x18(0x10)
		unsigned char UnknownData01_7[0xB8]; // 0x28(0xB8) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldRuntimePointProviderHandler
	// Size: 0x60 (0x60 - 0x0)
	struct FFortAthenaLivingWorldRuntimePointProviderHandler	
	{
	public:
		UFortAthenaLivingWorldManager LivingWorldManager; // 0x0(0x8)
		TMap RuntimePointProviderMap; // 0x8(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAthenaLivingWorldTaggedSpawnActionClass	
	{
	public:
		FGameplayTag SpawnActionTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass SpawnActionClass; // 0x8(0x8)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldSoftTaggedSpawnActionClass
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAthenaLivingWorldSoftTaggedSpawnActionClass	
	{
	public:
		FGameplayTag SpawnActionTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr SpawnActionClass; // 0x8(0x20)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldCategoryTableDataList
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAthenaLivingWorldCategoryTableDataList	
	{
	public:
		TArray CategoryTableDatas; // 0x0(0x10)
	};


	// Struct LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
	// Size: 0x38 (0x38 - 0x0)
	struct FLivingWorldSpawnAroundPlayerConfiguration	
	{
	public:
		TWeakObjectPtr Encounter; // 0x0(0x20)
		TArray PointProviderClasses; // 0x20(0x10)
		bool bRegisterReservoir; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.LivingWorldSpawnAroundPlayerRuntimeData
	// Size: 0x18 (0x18 - 0x0)
	struct FLivingWorldSpawnAroundPlayerRuntimeData	
	{
	public:
		TArray PointAroundPlayerProviders; // 0x0(0x10)
		UFortAthenaLivingWorldEncounterInstance Encounter; // 0x10(0x8)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldSpawnerDataLimiter
	// Size: 0xB0 (0xB0 - 0x0)
	struct FFortAthenaLivingWorldSpawnerDataLimiter	
	{
	public:
		TArray SpawnedSingleUseSpawnerData; // 0x0(0x10)
		FGameplayTagQuery SingleUseSpawnerDataQuery; // 0x10(0x48)
		TArray SpawnedConcurrentSingleUseSpawnerData; // 0x58(0x10)
		FGameplayTagQuery ConcurrentSingleUseSpawnerDataQuery; // 0x68(0x48)
	};


	// Struct LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
	// Size: 0x38 (0x38 - 0x0)
	struct FFortAthenaLivingWorldPointProviderFilterRules	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldPointProviderSelector
	// Size: 0x8 (0x8 - 0x0)
	struct FFortAthenaLivingWorldPointProviderSelector	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct LagerRuntime.FortAthenaLivingWorldTagQueryToSeatMapping
	// Size: 0x50 (0x50 - 0x0)
	struct FFortAthenaLivingWorldTagQueryToSeatMapping	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		int32_t SeatIndex; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};

}
