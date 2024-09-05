#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LagerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
	// Inherited from AActor -> UObject
	// Size: 0xB8 (0x348 - 0x290)
	class AFortAthenaLivingWorldPointProvidersEnabler : public AActor	
	{
	public:
		TArray EnabledLinkedPointProviders; // 0x290(0x10)
		TArray AvailableLinkedPointProviders; // 0x2A0(0x10)
		FGameplayTagContainer EnablerTags; // 0x2B0(0x20)
		TArray LinkedPointProviders; // 0x2D0(0x10)
		FScalableFloat PointProvidersToEnable; // 0x2E0(0x28)
		FScalableFloat EvaluateAutomatically; // 0x308(0x28)
		unsigned char UnknownData01_6[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCompletedEvaluationDelegate; // 0x338(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler");
			return ret;
		}

		void RemoveClosestPointProvidersToPoint(FVector& Point, float MaximumDistance, int32_t PointsToDisable); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41401F020
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF41401EF40
		void OnCompletedEvaluation__DelegateSignature(TArray& EnabledPointProviders); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF41401EE60
		bool HasCompletedEvaluation(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41401ED80
		FGameplayTagContainer GetEnablerTags(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41401ECA0
		TArray GetEnabledLinkedPointProviders(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41401EBC0
		void EvaluateAndEnablePointProviders(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41401EAE0
		bool DoesStartEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41401EA00
	};


	// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
	// Inherited from AFortAthenaLivingWorldPointProvidersEnabler -> AActor -> UObject
	// Size: 0x0 (0x348 - 0x348)
	class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride : public AFortAthenaLivingWorldPointProvidersEnabler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldRuntimePointProviderComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFortAthenaLivingWorldRuntimePointProviderComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldRuntimePointProviderComponent");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldRuntimePatrolPathPointProviderComponent
	// Inherited from UFortAthenaLivingWorldRuntimePointProviderComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UFortAthenaLivingWorldRuntimePatrolPathPointProviderComponent : public UFortAthenaLivingWorldRuntimePointProviderComponent	
	{
	public:
		UClass SourcePointProviderClass; // 0xA0(0x8)
		EAIRuntimePatrolPathPointProviderAttributeSource TagSource; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0xB0(0x20)
		EAIRuntimePatrolPathPointProviderAttributeSource SpawnLimitSource; // 0xD0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0xD8(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldRuntimePatrolPathPointProviderComponent");
			return ret;
		}
	};


	// Class LagerRuntime.FortGameFeatureAction_AddTaggedSpawnActions
	// Inherited from UFortGameInstanceGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UFortGameFeatureAction_AddTaggedSpawnActions : public UFortGameInstanceGameFeatureAction	
	{
	public:
		TArray SoftTaggedSpawnActions; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortGameFeatureAction_AddTaggedSpawnActions");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UFortAthenaLinearEncounterAnalyticComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent");
			return ret;
		}

		void OnStageCompleted(TArray& SpawnedRewards); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BAC878
		void OnEncounterStart(UFortAthenaLivingWorldEncounterInstance InAttackerEncounter, UFortAthenaLivingWorldEncounterInstance InDefenderEncounter); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BAC798
		void OnEncounterEnd(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BAC6B8
		void OnDefenderSpawned(AActor SpawnedDefender, UFortAthenaLivingWorldEventData EventData); // Flags: Final|Native|Private 0x7FF414BAC5D8
		void OnDefenderDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414BAC4F8
		void OnDefenderDidDamage(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414BAC418
		void OnDefenderDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414BAC338
		void OnAttackerSpawned(AActor SpawnedAttacker, UFortAthenaLivingWorldEventData EventData); // Flags: Final|Native|Private 0x7FF414BAC258
	};


	// Class LagerRuntime.FortAthenaLivingWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UFortAthenaLivingWorldConditionSchema : public UWorldConditionSchema	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldConditionSchema");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema
	// Inherited from UFortAthenaLivingWorldConditionSchema -> UWorldConditionSchema -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UFortAthenaLivingWorldEventDataConditionSchema : public UFortAthenaLivingWorldConditionSchema	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldConfigData
	// Inherited from UDataAsset -> UObject
	// Size: 0x2F8 (0x328 - 0x30)
	class UFortAthenaLivingWorldConfigData : public UDataAsset	
	{
	public:
		TArray CategoryTableDatas; // 0x30(0x10)
		FScalableFloat MaxActorCount; // 0x40(0x28)
		FScalableFloat MaxEventSpawnPerTick; // 0x68(0x28)
		FScalableFloat MaxActorDespawnPerTick; // 0x90(0x28)
		FScalableFloat MinimumEventGenerationInterval; // 0xB8(0x28)
		FScalableFloat MaxActorDensity; // 0xE0(0x28)
		FScalableFloat MaxActorUpdatesPerTick; // 0x108(0x28)
		FScalableFloat MaxPointProviderUpdatesPerTick; // 0x130(0x28)
		FScalableFloat ActorDensityGridCellSize; // 0x158(0x28)
		FScalableFloat ActorDensitySparseToDenseRatio; // 0x180(0x28)
		FScalableFloat PointClusterSize; // 0x1A8(0x28)
		FScalableFloat MinNumberOfPlayerForAggressiveSpawning; // 0x1D0(0x28)
		TArray TagDensityGridData; // 0x1F8(0x10)
		FGameplayTagQuery SingleUseSpawnerDataQuery; // 0x208(0x48)
		FGameplayTagQuery ConcurrentSingleUseSpawnerDataQuery; // 0x250(0x48)
		UClass EQSActorHelperClass; // 0x298(0x8)
		FScalableFloat DelayEventGeneration; // 0x2A0(0x28)
		FScalableFloat RestrictDensityReservationForReservoirs; // 0x2C8(0x28)
		FScalableFloat TrackDeadPlayers; // 0x2F0(0x28)
		TArray DensityGridVerticalCutHeights; // 0x318(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldConfigData");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
	// Inherited from UFortMiniMapIndicator -> UFortIndicator -> UObject
	// Size: 0x60 (0x1A0 - 0x140)
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator : public UFortMiniMapIndicator	
	{
	public:
		TArray ActorDebugInfos; // 0x140(0x10)
		TArray DensityGridValues; // 0x150(0x10)
		FVector GridOrigin; // 0x160(0x18)
		FIntVector MaxGridSize; // 0x178(0xC)
		float CellSize; // 0x184(0x4)
		float MaxDensity; // 0x188(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x18C(0x4) UNKNOWN PROPERTY
		FString DisplayName; // 0x190(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema
	// Inherited from UFortAthenaLivingWorldConditionSchema -> UWorldConditionSchema -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UFortAthenaLivingWorldDespawnConditionSchema : public UFortAthenaLivingWorldConditionSchema	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldEncounter
	// Inherited from UDataAsset -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UFortAthenaLivingWorldEncounter : public UDataAsset	
	{
	public:
		FScalableFloat IntervalBetweenEventGeneration; // 0x30(0x28)
		TArray Stages; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldEncounter");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldEncounterInstance
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UFortAthenaLivingWorldEncounterInstance : public UObject	
	{
	public:
		FMulticastInlineDelegate OnActorSpawned; // 0x28(0x10)
		FMulticastInlineDelegate OnFirstActorSpawned; // 0x38(0x10)
		FMulticastInlineDelegate OnActorDestroyed; // 0x48(0x10)
		FMulticastInlineDelegate OnLastActorDestroyed; // 0x58(0x10)
		FMulticastInlineDelegate OnActorDied; // 0x68(0x10)
		FMulticastInlineDelegate OnLastActorDied; // 0x78(0x10)
		FMulticastInlineDelegate OnEventSpawned; // 0x88(0x10)
		unsigned char UnknownData05_6[0x50]; // 0x98(0x50) UNKNOWN PROPERTY
		FFortAthenaLivingWorldConditionContainer ConditionContainer; // 0xE8(0x18)
		TArray AllowedPointProviders; // 0x100(0x10)
		TArray RegisteredPointProviders; // 0x110(0x10)
		TArray RuntimeCreatedEventDatas; // 0x120(0x10)
		unsigned char UnknownData06_6[0x20]; // 0x130(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr EncounterDefinition; // 0x150(0x20)
		AActor ActorDensityReservoir; // 0x170(0x8)
		TArray SpawnedActors; // 0x178(0x10)
		unsigned char UnknownData07_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		int32_t CurrentStageIndex; // 0x190(0x4)
		int32_t CurrentStageMaxActorCount; // 0x194(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x198(0x4) UNKNOWN PROPERTY
		bool bIsPaused; // 0x19C(0x1)
		unsigned char UnknownData09_7[0x3]; // 0x19D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance");
			return ret;
		}

		void StartEncounterStage(int32_t StageIndex); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414023608
		void ResumeEncounter(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414023528
		void Reset(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414023448
		void RequestEventGeneration(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414023368
		void RemoveAllowedPointProvider(TScriptInterface& PointProvider); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414023288
		void PauseEncounter(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140231A8
		bool OwnsActor(AActor Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140230C8
		void OnLastActorDied__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF414022FE8
		void OnEventSpawned__DelegateSignature(TArray SpawnedActors); // Flags: MulticastDelegate|Public|Delegate 0x7FF414022F08
		void OnEncounterActorDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414022E28
		void OnActorSpawned__DelegateSignature(AActor SpawnedActor, UFortAthenaLivingWorldEventData EventData); // Flags: MulticastDelegate|Public|Delegate 0x7FF414022D48
		void OnActorDied__DelegateSignature(AActor DiedActor); // Flags: MulticastDelegate|Public|Delegate 0x7FF414022C68
		void OnActorDestroyed__DelegateSignature(AActor DestroyedActor, UFortAthenaLivingWorldEventData EventData); // Flags: MulticastDelegate|Public|Delegate 0x7FF414022B88
		bool HasReachedMaxSpawnedCount(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414022AA8
		bool HasPendingSpawnRequest(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140229C8
		int32_t GetTotalActorCount(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140228E8
		int32_t GetAliveSpawnedActorCount(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414022808
		void AdvanceEncounterStage(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414022728
		void AddAllowedPointProvider(TScriptInterface& PointProvider); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414022648
	};


	// Class LagerRuntime.FortAthenaLivingWorldEventData
	// Inherited from UDataAsset -> UObject
	// Size: 0x128 (0x158 - 0x30)
	class UFortAthenaLivingWorldEventData : public UDataAsset	
	{
	public:
		int32_t TimeOfDayFilters; // 0x30(0x4)
		float WaterLevelIndexMin; // 0x34(0x4)
		float WaterLevelIndexMax; // 0x38(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition CanSpawnCondition; // 0x40(0x18)
		TArray DespawnConditions; // 0x58(0x10)
		bool bRequirePointProviders; // 0x68(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery ProviderFiltersTagQuery; // 0x70(0x48)
		TArray ProviderFiltersEntries; // 0xB8(0x10)
		FInstancedStruct PointProviderSelector; // 0xC8(0x10)
		FInstancedStruct SpawnerDataSelector; // 0xD8(0x10)
		TArray SpawnActions; // 0xE8(0x10)
		FScalableFloat MinActorCountToSpawn; // 0xF8(0x28)
		FScalableFloat MaxActorCountToSpawn; // 0x120(0x28)
		TArray ActorDescriptions; // 0x148(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldEventData");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldManager
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC00 (0xCA0 - 0xA0)
	class UFortAthenaLivingWorldManager : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr DefaultLagerConfig; // 0xA8(0x20)
		TArray LagerConfigOverrides; // 0xC8(0x10)
		FScalableFloat LagerEnabled; // 0xD8(0x28)
		TMap TaggedSpawnActionClassMap; // 0x100(0x50)
		TArray PointProviders; // 0x150(0x10)
		int32_t RegisteredPointProvidersCount; // 0x160(0x4)
		unsigned char UnknownData05_6[0xC]; // 0x164(0xC) UNKNOWN PROPERTY
		FSlateBrush SpecialActorMinimapIconBrush; // 0x170(0xB0)
		FVector2D SpecialActorMinimapIconScale; // 0x220(0x10)
		FSlateBrush SpecialActorCompassIconBrush; // 0x230(0xB0)
		FVector2D SpecialActorCompassIconScale; // 0x2E0(0x10)
		FFortAthenaLivingWorldSpawnerDataLimiter SpawnerDataLimiter; // 0x2F0(0xB0)
		UWorld CachedWorld; // 0x3A0(0x8)
		UFortAthenaLivingWorldConfigData CachedConfig; // 0x3A8(0x8)
		TArray RunningEncounterInstances; // 0x3B0(0x10)
		UFortSeasonalEventManager CachedSeasonalEventManager; // 0x3C0(0x8)
		TArray ActorClassToPreloadOnClient; // 0x3C8(0x10)
		FFortAthenaLivingWorldActorUpdateHandler ActorUpdateHandler; // 0x3D8(0xB0)
		FFortAthenaLivingWorldPointProviderUpdateHandler PointProviderUpdateHandler; // 0x488(0x98)
		FFortAthenaLivingWorldRuntimePointProviderHandler RuntimePointProviderHandler; // 0x520(0x60)
		FFortAthenaLivingWorldPlayerTracker PlayerTracker; // 0x580(0xC0)
		FFortAthenaLivingWorldPreloader Preloader; // 0x640(0xE0)
		FFortAthenaLivingWorldConditionContainer GlobalConditionContainer; // 0x720(0x18)
		unsigned char UnknownData06_6[0x4B0]; // 0x738(0x4B0) UNKNOWN PROPERTY
		TMap SpawnActionCache; // 0xBE8(0x50)
		AFortAthenaLivingWorldEQSHelper EQSHelper; // 0xC38(0x8)
		UFortAthenaLivingWorldDebugDensityMiniMapIndicator DebugDensityMinimapIndicator; // 0xC40(0x8)
		unsigned char UnknownData07_7[0x58]; // 0xC48(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldManager");
			return ret;
		}

		void UnregisterDensityReservoir(AActor ActorDensityReservoir); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BAF358
		bool TrySpawnEventWithPreDespawnForRegistry(FDataRegistryId EventId, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, FGameplayTag DespawnDensityTag, float MaxAllowedDensityValue, int32_t& RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BAF278
		bool TrySpawnEventWithPreDespawn(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, FGameplayTag DespawnDensityTag, float MaxAllowedDensityValue, int32_t& RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BAF198
		bool TrySpawnEventForRegistry(FDataRegistryId EventId, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, int32_t& RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BAF0B8
		bool TrySpawnEvent(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, int32_t& RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BAEFD8
		UFortAthenaLivingWorldEncounterInstance StartEncounter(TWeakObjectPtr EncounterType, TArray& EncounterPointProviders, AActor ActorDensityReservoir); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BAEEF8
		void ResetEncounter(UFortAthenaLivingWorldEncounterInstance EncounterInstance); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BAEE18
		void RequestEventGeneration(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAED38
		bool RegisterTagDensityReservoir(AActor ActorDensityReservoir, TArray& TagsDensity); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BAEC58
		bool RegisterDensityReservoir(AActor ActorDensityReservoir, float Density, float Range); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BAEB78
		int32_t QueryEventBudgetForRegistry(FDataRegistryId EventId, AActor SpawnLocation); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BAEA98
		int32_t QueryEventBudget(FDataTableRowHandle EventEntry, AActor SpawnLocation); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BAE9B8
		float QueryActorDensityBudget(AActor ReferenceActor, float Range); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BAE8D8
		void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414BAE7F8
		void OnUnmanagedDensityReservoirActorDestroy(AActor DestroyedActor); // Flags: Final|Native|Private 0x7FF414BAE718
		void OnSpawnedActorDestroy(AActor DestroyedActor); // Flags: Final|Native|Private 0x7FF414BAE638
		void OnRep_DebugDensityMinimapIndicator(UFortAthenaLivingWorldDebugDensityMiniMapIndicator OldMapIndicator); // Flags: Final|Native|Private 0x7FF414BAE558
		void OnRep_ActorClassToPreloadOnClient(); // Flags: Final|Native|Private 0x7FF414BAE478
		void OnPatrolPathDestroyed(AActor Actor); // Flags: Final|Native|Public 0x7FF414BAE398
		void OnPatrolPathAdded(AFortAthenaPatrolPath PatrolPath); // Flags: Final|Native|Private 0x7FF414BAE2B8
		void OnDebugSpawnEventSpawned(TArray& SpawnedActors, bool bSuccess); // Flags: Final|Native|Private|HasOutParms 0x7FF414BAE1D8
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414BAE0F8
		void OnActorSpawned(AActor Actor, int32_t RequestID); // Flags: Final|Native|Private 0x7FF414BAE018
		void LWMTAM(FString Name); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BADF38
		void LWMF(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BADE58
		void LivingWorldManagerUnregisterPointProvider(AActor PointProvider); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BADD78
		void LivingWorldManagerToggleVerboseLogging(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BADC98
		void LivingWorldManagerToggleGenerateEvents(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BADBB8
		void LivingWorldManagerToggleDensityDisplay(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BADAD8
		void LivingWorldManagerToggleActorMinimap(FString Name); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAD9F8
		void LivingWorldManagerSwitchDensityDisplay(int32_t DensityMapIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAD918
		void LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BAD838
		void LivingWorldManagerRegisterPointProvider(AActor PointProvider); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BAD758
		void LivingWorldManagerProviderDebugActor(int32_t ProviderIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAD678
		void LivingWorldManagerGenerateEvents(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAD598
		void LivingWorldManagerFlush(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Exec|Native|Public|BlueprintCallable 0x7FF414BAD4B8
		void LivingWorldManagerEnablePointProvider(AActor PointProvider); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BAD3D8
		void LivingWorldManagerDumpSpawnCount(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAD2F8
		void LivingWorldManagerDumpPrefabLevelBounds(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAD218
		void LivingWorldManagerDumpEventInstances(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAD138
		void LivingWorldManagerDisablePointProvider(AActor PointProvider); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BAD058
		void LivingWorldManagerDebugEvent(FString EventName, int32_t DebugIndex, FString RuntimeSpawnDataName, FString EncounterName); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BACF78
		bool IsEncounterCategoryActive(TWeakObjectPtr EncounterType); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BACE98
		bool HasPendingSpawnRequestForEncounter(UFortAthenaLivingWorldEncounterInstance EncounterInstance); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BACDB8
		UFortAthenaLivingWorldEncounterInstance GetOwningEncounter(AActor Actor); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BACCD8
		UFortAthenaLivingWorldManager GetLivingWorldManager(UObject WorldContextObject); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BACBF8
		void EndEncounter(UFortAthenaLivingWorldEncounterInstance EncounterInstance); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BACB18
		void CancelSpawnRequest(int32_t RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BACA38
		bool BuildDataRegistryResolverScope_Implementation(TArray& InOutResolverScopes, int32_t& InOutPriority); // Flags: Native|Public|HasOutParms|Const 0x7FF414BAC958
	};


	// Class LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x100 (0x1A0 - 0xA0)
	class UFortAthenaLivingWorldNavigationInvokerComponent : public UActorComponent	
	{
	public:
		FScalableFloat GenerationRadius; // 0xA0(0x28)
		FNavAgentSelector SupportedAgents; // 0xC8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FScalableFloat DistanceToPlayer; // 0xD0(0x28)
		FScalableFloat DistanceToPlayerHysteresis; // 0xF8(0x28)
		FScalableFloat RegistrationDistanceToPlayer; // 0x120(0x28)
		FScalableFloat RegistrationDistanceToPlayerHysteresis; // 0x148(0x28)
		TArray SettingsOverride; // 0x170(0x10)
		TWeakObjectPtr LivingWorldManager; // 0x180(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x188(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent");
			return ret;
		}

		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BAF438
	};


	// Class LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming
	// Inherited from ULevelStreamingLevelInstance -> ULevelStreamingDynamic -> ULevelStreaming -> UObject
	// Size: 0x0 (0x1D0 - 0x1D0)
	class UFortAthenaLivingWorldPrefabLevelStreaming : public ULevelStreamingLevelInstance	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldPrefab
	// Inherited from AFortLevelInstancePrefab -> ABuildingLevelInstance -> ABuildingActor -> AActor -> UObject
	// Size: 0x170 (0x950 - 0x7E0)
	class AFortAthenaLivingWorldPrefab : public AFortLevelInstancePrefab	
	{
	public:
		TArray ActorSpawnerDatas; // 0x7E0(0x10)
		FBox LocalLevelBounds; // 0x7F0(0x38)
		FBox LocalGrassRemovalBox; // 0x828(0x38)
		FMulticastInlineDelegate OnAllActorSpawnedDelegate; // 0x860(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x870(0x18) UNKNOWN PROPERTY
		TArray BuildingsToKill; // 0x888(0x10)
		TArray SpawnedActors; // 0x898(0x10)
		FDelegateProperty FinishedDestroyingBuildingCallback; // 0x8A8(0xC)
		bool bHasFinishedSpawn; // 0x8B4(0x1)
		bool bHasRemovedFoliage; // 0x8B5(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x8B6(0x2) UNKNOWN PROPERTY
		FScalableFloat bIsEnabled; // 0x8B8(0x28)
		FScalableFloat Weight; // 0x8E0(0x28)
		bool bShouldLevelBeVisible; // 0x908(0x1)
		bool bShouldSpawnerBeAllowedToSpawn; // 0x909(0x1)
		bool bShouldAlwaysSnapAboveLandscape; // 0x90A(0x1)
		unsigned char UnknownData06_6[0x5]; // 0x90B(0x5) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition CanSpawnCondition; // 0x910(0x18)
		unsigned char UnknownData07_6[0x8]; // 0x928(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer PrefabTags; // 0x930(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPrefab");
			return ret;
		}

		void RemoveFoliageInsideLevelBound(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41401FC60
		void OnRep_ShouldLevelBeVisible(); // Flags: Final|Native|Protected 0x7FF41401FB80
		void OnBuildingInLevelBoundsDestroyed__DelegateSignature(); // Flags: Public|Delegate 0x7FF41401F720
		void OnAllActorSpawnedDelegate__DelegateSignature(TArray& SpawnedActors); // Flags: Public|Delegate|HasOutParms 0x7FF41401F560
		void OnAllActorSpawned__DelegateSignature(TArray& SpawnedActors); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF41401FAA0
		void MakeLevelVisible(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41401F9C0
		AFortAthenaLivingWorldPrefab GetOwningLivingWorldPrefab(UObject WorldContextObject); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41401F8E0
		FBox GetLevelBounds(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41401F800
		void DestroyBuildingsInLevelBounds(FDelegateProperty& FinishedDelegate); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF41401F640
		void CallWhenAllActorHaveSpawned(FDelegateProperty& DelegateToCall); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF41401F480
		void AllowSpawnerToSpawn(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41401F3A0
	};


	// Class LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
	// Inherited from AActor -> UObject
	// Size: 0x130 (0x3C0 - 0x290)
	class AFortAthenaLivingWorldPrefabActorSpawner : public AActor	
	{
	public:
		FFortAthenaLivingWorldActorSpawnDescription ActorDescription; // 0x290(0x100)
		FMulticastInlineDelegate OnActorSpawnedDelegate; // 0x390(0x10)
		AFortAthenaPatrolPath PatrolPath; // 0x3A0(0x8)
		FGuid Guid; // 0x3A8(0x10)
		TWeakObjectPtr SpawnedActor; // 0x3B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner");
			return ret;
		}

		void OnSnapCompleted(UFortSnapOnSurfaceComponent Component, FTransform& OldTransform, FTransform& NewTransfom); // Flags: Final|Native|Protected|HasOutParms|HasDefaults 0x7FF414020480
		void OnActorSpawnedDelegate__DelegateSignature(AActor SpawnedActor); // Flags: Public|Delegate 0x7FF4140201E0
		void OnActorSpawned__DelegateSignature(AActor SpawnedActor); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140203A0
		AActor GetSpawnedActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140202C0
		void CallWhenActorSpawned(FDelegateProperty& DelegateToCall); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414020100
	};


	// Class LagerRuntime.FortAthenaLivingWorldSpawnAction
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaLivingWorldSpawnAction : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldSpawnAction");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
	// Inherited from UFortAthenaLivingWorldSpawnAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaLivingWorldSpawnActionBlueprint : public UFortAthenaLivingWorldSpawnAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint");
			return ret;
		}

		void K2_OnSpawnedActorFailed(TScriptInterface& SourcePointProvider); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414BAF7B8
		void K2_OnSpawnedActor(AActor SpawnedActor, TScriptInterface& SourcePointProvider); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414BAF6D8
		void K2_OnAllActorSpawned(TArray& SpawnedActor, TScriptInterface& SourcePointProvider); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414BAF5F8
		void K2_ModifySpawnComponentList(UFortAthenaAISpawnerDataComponentList ComponentList, UObject ComponentOuter); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414BAF518
	};


	// Class LagerRuntime.FortAthenaLivingWorldWardComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortAthenaLivingWorldWardComponent : public UActorComponent	
	{
	public:
		float DefaultRadius; // 0xA0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xA4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldWardComponent");
			return ret;
		}

		void SetWardRadius(float Radius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAFA58
		void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414BAF978
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414BAF898
	};


	// Class LagerRuntime.FortCheatManager_LivingWorldManager_EnhancedInputBindingInfo
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortCheatManager_LivingWorldManager_EnhancedInputBindingInfo : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortCheatManager_LivingWorldManager_EnhancedInputBindingInfo");
			return ret;
		}
	};


	// Class LagerRuntime.FortCheatManager_LivingWorldManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x68 (0x90 - 0x28)
	class UFortCheatManager_LivingWorldManager : public UChildCheatManager	
	{
	public:
		int32_t CheatTeleportToCount; // 0x28(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString CheatTeleportLastEventDataName; // 0x30(0x10)
		int32_t CheatSpawnEventCount; // 0x40(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FString CheatSpawnEventName; // 0x48(0x10)
		int32_t CheatTriggerEventCount; // 0x58(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FString CheatTriggerEventName; // 0x60(0x10)
		TArray InputBindings; // 0x70(0x10)
		UEnhancedInputComponent InputComponent; // 0x80(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortCheatManager_LivingWorldManager");
			return ret;
		}

		void LWMTE(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB0AF8
		void LWMTC(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB0A18
		void LWMSE(FString EventDataName, FString SpawnerDataNames); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB0938
		void LWMSC(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB0858
		void LWMS(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB0778
		void LWMEC(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB0698
		void LivingWorldManagerTriggerEvent(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB05B8
		void LivingWorldManagerToggleCapture(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB04D8
		void LivingWorldManagerTeleportToSpawnPosition(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB03F8
		void LivingWorldManagerTeleportTo(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB0318
		void LivingWorldManagerStartCapture(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BB0238
		void LivingWorldManagerSpawnTrackedAtLocation(FString EventDataName, FString TrackedActorName, FVector Location, FRotator Rotation); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 0x7FF414BB0158
		void LivingWorldManagerSpawnEventAtLocation(FString EventDataName, FVector Location, FRotator Rotation, FString SpawnerDataNames); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 0x7FF414BB0078
		void LivingWorldManagerSpawnEvent(FString EventDataName, FString SpawnerDataNames); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAFF98
		void LivingWorldManagerSpawnAtLocation(FString EventDataName, FVector Location, FRotator Rotation); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 0x7FF414BAFEB8
		void LivingWorldManagerSpawn(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAFDD8
		void LivingWorldManagerGDTNextDensityGrid(); // Flags: Final|Exec|Native|Public 0x7FF414BAFCF8
		void LivingWorldManagerEndCapture(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BAFC18
		void LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance); // Flags: Final|Exec|Native|Public 0x7FF414BAFB38
	};


	// Class LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UFortGameFeatureAction_AddCategoryTableToConfig : public UGameFeatureAction	
	{
	public:
		TMap ConfigToCategoryTableDatas; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig");
			return ret;
		}
	};


	// Class LagerRuntime.FortGameFeatureAction_AddLagerConfig
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortGameFeatureAction_AddLagerConfig : public UGameFeatureAction	
	{
	public:
		TArray LagerConfigOverrides; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortGameFeatureAction_AddLagerConfig");
			return ret;
		}
	};


	// Class LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
	// Inherited from UFortGameFeatureAction_MapMarkerTagsProvider -> UGameFeatureAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath : public UFortGameFeatureAction_MapMarkerTagsProvider	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath");
			return ret;
		}
	};


	// Class LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UFortPawnComponent_LivingWorldSpawnAroundPlayer : public UFortPawnComponent	
	{
	public:
		TArray RuntimeData; // 0xA8(0x10)
		TArray PerPlayerConfigurations; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer");
			return ret;
		}
	};


	// Class LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x0 (0x1F8 - 0x1F8)
	class UFortQueryTest_IsCloseToLivingWorldWard : public UEnvQueryTest	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldEQSHelper
	// Inherited from AActor -> UObject
	// Size: 0x70 (0x300 - 0x290)
	class AFortAthenaLivingWorldEQSHelper : public AActor	
	{
	public:
		unsigned char UnknownData01_3[0x40]; // 0x290(0x40) UNKNOWN PROPERTY
		FNavAgentProperties NavAgentProperties; // 0x2D0(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldEQSHelper");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider
	// Inherited from UObject
	// Size: 0x138 (0x160 - 0x28)
	class UFortAthenaLivingWorldLightStaticPointProvider : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x38(0x68)
		FGameplayTagContainer FiltersTags; // 0xA0(0x20)
		FTransform SpawnPoint; // 0xC0(0x60)
		bool bRandomizePointRotation; // 0x120(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActorSpawned; // 0x128(0x10)
		FPointProviderDebugInfo DebugInfo; // 0x138(0x10)
		AFortGameStateAthena CachedGameState; // 0x148(0x8)
		UFortAthenaLivingWorldManager CachedLivingWorldManager; // 0x150(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider");
			return ret;
		}

		void OnActorSpawned__DelegateSignature(AActor SpawnedActor); // Flags: MulticastDelegate|Public|Delegate 0x7FF414023968
		void EnablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF414023888
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF4140237A8
	};


	// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaLivingWorldPointProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface");
			return ret;
		}

		float GetPointProviderMaxRadius(); // Flags: Native|Public|BlueprintCallable 0x7FF414BB0F58
		FVector GetPointProviderLocation(); // Flags: Native|Public|HasDefaults|BlueprintCallable 0x7FF414BB0E78
		void GetFiltersTags(FGameplayTagContainer& FilterTags); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BB0D98
		void EnablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF414BB0CB8
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF414BB0BD8
	};


	// Class LagerRuntime.FortAthenaLivingWorldStaticPointProvider
	// Inherited from AActor -> UObject
	// Size: 0xF8 (0x388 - 0x290)
	class AFortAthenaLivingWorldStaticPointProvider : public AActor	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x298(0x68)
		FGameplayTagContainer FiltersTags; // 0x300(0x20)
		TArray SpawnPoints; // 0x320(0x10)
		bool bStartEnabled; // 0x330(0x1)
		bool bRandomizeStartPoint; // 0x331(0x1)
		bool bRandomizePointRotation; // 0x332(0x1)
		unsigned char UnknownData04_6[0x5]; // 0x333(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActorSpawned; // 0x338(0x10)
		FPointProviderDebugInfo DebugInfo; // 0x348(0x10)
		AFortGameStateAthena CachedGameState; // 0x358(0x8)
		UFortAthenaLivingWorldManager CachedLivingWorldManager; // 0x360(0x8)
		unsigned char UnknownData05_7[0x20]; // 0x368(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider");
			return ret;
		}

		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF414020800
		void OnActorSpawned__DelegateSignature(AActor SpawnedActor); // Flags: MulticastDelegate|Public|Delegate 0x7FF414020720
		void EnablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF414020640
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF414020560
	};


	// Class LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
	// Inherited from AFortAthenaLivingWorldStaticPointProvider -> AActor -> UObject
	// Size: 0xC8 (0x450 - 0x388)
	class AFortAthenaLivingWorldVehiclePointProvider : public AFortAthenaLivingWorldStaticPointProvider	
	{
	public:
		TEnumAsByte InitialOverlapBehavior; // 0x388(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x389(0x7) UNKNOWN PROPERTY
		FScalableFloat ForceModsAllowed; // 0x390(0x28)
		FGameplayTagContainer ForceMods; // 0x3B8(0x20)
		FScalableFloat ForceCosmeticsAllowed; // 0x3D8(0x28)
		FSpawnerInfoForcedCosmetics ForceCosmetics; // 0x400(0x48)
		unsigned char UnknownData03_7[0x8]; // 0x448(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldVehiclePointProvider");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x310 (0x5D8 - 0x2C8)
	class AFortAthenaLivingWorldVolume : public AVolume	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY
		bool bStartEnabled; // 0x2D0(0x1)
		bool bWaitForNavigation; // 0x2D1(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x2D2(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer FiltersTags; // 0x2D8(0x20)
		UEnvQuery EnvironmentQuery; // 0x2F8(0x8)
		TArray QueryConfig; // 0x300(0x10)
		bool bRemoveUsedPoint; // 0x310(0x1)
		bool bRemoveUsedPointPermenantly; // 0x311(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x312(0x6) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x318(0x68)
		FScalableFloat EQSRefreshInterval; // 0x380(0x28)
		FScalableFloat WaterLevelIndexMin; // 0x3A8(0x28)
		FScalableFloat WaterLevelIndexMax; // 0x3D0(0x28)
		AFortGameStateAthena CachedGameState; // 0x3F8(0x8)
		FMulticastInlineDelegate OnActorSpawnedResult; // 0x400(0x10)
		FMulticastInlineDelegate OnPointProviderRegistered; // 0x410(0x10)
		UFortAthenaLivingWorldManager CachedLivingWorldManager; // 0x420(0x8)
		unsigned char UnknownData07_7[0x1B0]; // 0x428(0x1B0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldVolume");
			return ret;
		}

		void SetSpawnRotation(FRotator& Rotation); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414021888
		void SetFiltersTags(FGameplayTagContainer& TagContainer); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140217A8
		void SetEQSQueryConfigParam(FName ParameterName, float Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140216C8
		void SetEQSQuery(UEnvQuery Query); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140215E8
		void RunEQS(); // Flags: Final|Native|Private 0x7FF414021508
		void ResetSpawnRotation(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414021428
		void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414021348
		void OnPointProviderRegistered__DelegateSignature(AFortAthenaLivingWorldVolume PointProviderVolume); // Flags: MulticastDelegate|Public|Delegate 0x7FF414021268
		void OnNavigationFinishedGeneration(ANavigationData NavData); // Flags: Final|Native|Private 0x7FF414021188
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF4140210A8
		void OnActorSpawnedResult__DelegateSignature(AActor SpawnedActor, bool bResult); // Flags: MulticastDelegate|Public|Delegate 0x7FF414020FC8
		bool IsPointProviderEnabled(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414020EE8
		void EnablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF414020E08
		bool DoesStartEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414020D28
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF414020C48
	};


	// Class LagerRuntime.FortAthenaPatrolPathPointProvider
	// Inherited from AActor -> UObject
	// Size: 0x100 (0x390 - 0x290)
	class AFortAthenaPatrolPathPointProvider : public AActor	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer FiltersTags; // 0x298(0x20)
		AFortAthenaPatrolPath AssociatedPatrolPath; // 0x2B8(0x8)
		bool bStartEnabled : 1; // 0x2C0:0(0x1)
		bool bSpawnOnPatrolPath : 1; // 0x2C0:1(0x1)
		bool bAlignOrientationToPath : 1; // 0x2C0:2(0x1)
		bool bSyncStatusWithPatrolPath : 1; // 0x2C0:3(0x1)
		unsigned char UnknownData04_5[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2C8(0x68)
		FMulticastInlineDelegate OnActorSpawnedResult; // 0x330(0x10)
		TWeakObjectPtr RuntimePatrolPathWeakPtr; // 0x340(0x8)
		AFortGameStateAthena CachedGameState; // 0x348(0x8)
		UFortAthenaLivingWorldManager CachedLivingWorldManager; // 0x350(0x8)
		unsigned char UnknownData05_7[0x38]; // 0x358(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaPatrolPathPointProvider");
			return ret;
		}

		void OnPatrolPathStatusChanged(bool bEnableState); // Flags: Final|Native|Public 0x7FF414021F48
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414021E68
		void OnActorSpawnedResult__DelegateSignature(AActor SpawnedActor, bool bResult); // Flags: MulticastDelegate|Public|Delegate 0x7FF414021D88
		void EnablePointProviderInLWM(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414021CA8
		void EnablePointProvider(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414021BC8
		void DisablePointProvider(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414021AE8
	};


	// Class LagerRuntime.FortAthenaPointAroundPlayerProvider
	// Inherited from AActor -> UObject
	// Size: 0xE0 (0x370 - 0x290)
	class AFortAthenaPointAroundPlayerProvider : public AActor	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer FiltersTags; // 0x298(0x20)
		UEnvQuery QueryTemplate; // 0x2B8(0x8)
		TEnumAsByte RunMode; // 0x2C0(0x1)
		bool bStartEnabled : 1; // 0x2C1:0(0x1)
		bool bGenerateAroundPlayerBots : 1; // 0x2C1:1(0x1)
		unsigned char UnknownData04_5[0x2]; // 0x2C2(0x2) UNKNOWN PROPERTY
		FGameplayTag IgnorePlayerWithTag; // 0x2C4(0x4)
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2C8(0x68)
		FMulticastInlineDelegate OnActorSpawnedResult; // 0x330(0x10)
		AFortGameStateAthena CachedGameState; // 0x340(0x8)
		unsigned char UnknownData05_7[0x28]; // 0x348(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaPointAroundPlayerProvider");
			return ret;
		}

		void SetForcedPawnToUse(APawn InForcedPawnToUse); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414022488
		void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF4140223A8
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF4140222C8
		void OnActorSpawnedResult__DelegateSignature(AActor SpawnedActor, bool bResult); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140221E8
		void EnablePointProvider(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF414022108
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable 0x7FF414022028
	};


	// Class LagerRuntime.FortAthenaWaterBodyPointProvider
	// Inherited from UObject
	// Size: 0x2A8 (0x2D0 - 0x28)
	class UFortAthenaWaterBodyPointProvider : public UObject	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		AFortGameStateAthena CachedGameState; // 0x30(0x8)
		UFortAthenaLivingWorldManager CachedLivingWorldManager; // 0x38(0x8)
		FGameplayTagContainer PointProviderFiltersTags; // 0x40(0x20)
		UEnvQuery EnvironmentQuery; // 0x60(0x8)
		TArray QueryConfig; // 0x68(0x10)
		FScalableFloat MaxLocationsCountByWaterArea; // 0x78(0x28)
		FScalableFloat MaxLocationsCountBySplineLength; // 0xA0(0x28)
		bool bRemoveUsedLocations; // 0xC8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		FScalableFloat ActivationDistance; // 0xD0(0x28)
		FScalableFloat ValidationSweepRadius; // 0xF8(0x28)
		FScalableFloat ValidationSweepUp; // 0x120(0x28)
		FScalableFloat ValidationSweepDown; // 0x148(0x28)
		FCollisionProfileName ValidationGroundTraceCollisionProfile; // 0x170(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x178(0x68)
		TWeakObjectPtr AssociatedWaterBody; // 0x1E0(0x8)
		unsigned char UnknownData07_7[0xE8]; // 0x1E8(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaWaterBodyPointProvider");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaRuntimeWaterBodyPointProviderComponent
	// Inherited from UFortAthenaLivingWorldRuntimePointProviderComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortAthenaRuntimeWaterBodyPointProviderComponent : public UFortAthenaLivingWorldRuntimePointProviderComponent	
	{
	public:
		UClass PointProviderClass; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaRuntimeWaterBodyPointProviderComponent");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
	// Inherited from UFortAthenaLivingWorldSpawnAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortAthenaLivingWorldSpawnAction_AddAIToGroup : public UFortAthenaLivingWorldSpawnAction	
	{
	public:
		FGameplayTagContainer GroupTags; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup");
			return ret;
		}
	};


	// Class LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
	// Inherited from UFortAthenaLivingWorldSpawnAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : public UFortAthenaLivingWorldSpawnAction	
	{
	public:
		TArray SeatMappings; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle");
			return ret;
		}
	};

}
