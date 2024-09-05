#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LagerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
	// Inherited from AActor -> UObject
	// Size: 0xB8 (0x348 - 0x290)
	class AFortAthenaLivingWorldPointProvidersEnabler : public AActor	
	{
	public:
		TArray<TScriptInterface> EnabledLinkedPointProviders; // 0x290(0x10)
		TArray<TScriptInterface> AvailableLinkedPointProviders; // 0x2A0(0x10)
		FGameplayTagContainer EnablerTags; // 0x2B0(0x20)
		TArray<TScriptInterface> LinkedPointProviders; // 0x2D0(0x10)
		FScalableFloat PointProvidersToEnable; // 0x2E0(0x28)
		FScalableFloat EvaluateAutomatically; // 0x308(0x28)
		unsigned char UnknownData00_6[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCompletedEvaluationDelegate; // 0x338(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler");
			return ret;
		}

		void RemoveClosestPointProvidersToPoint(FVector& Point, float MaximumDistance, int32_t PointsToDisable); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7505A1C50(relative to base address)
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74E22BBE0(relative to base address)
		void OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface>& EnabledPointProviders); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasCompletedEvaluation(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493F619C(relative to base address)
		FGameplayTagContainer GetEnablerTags(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505A0620(relative to base address)
		TArray GetEnabledLinkedPointProviders(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505A0604(relative to base address)
		void EvaluateAndEnablePointProviders(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		bool DoesStartEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505A0570(relative to base address)
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
		UClass* SourcePointProviderClass; // 0xA0(0x8)
		EAIRuntimePatrolPathPointProviderAttributeSource TagSource; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0xB0(0x20)
		EAIRuntimePatrolPathPointProviderAttributeSource SpawnLimitSource; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
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
		TArray<FFortAthenaLivingWorldSoftTaggedSpawnActionClass> SoftTaggedSpawnActions; // 0x38(0x10)

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
		unsigned char UnknownData00_1[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent");
			return ret;
		}

		void OnStageCompleted(TArray<AFortPickup*>& SpawnedRewards); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C9111C0(relative to base address)
		void OnEncounterStart(UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter, UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void OnEncounterEnd(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnDefenderSpawned(AActor* SpawnedDefender, UFortAthenaLivingWorldEventData* EventData); // Flags: Final|Native|Private, Memory Exec: 0x7FF750587F2C(relative to base address)
		void OnDefenderDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF750587A18(relative to base address)
		void OnDefenderDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF7505875BC(relative to base address)
		void OnDefenderDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF750587170(relative to base address)
		void OnAttackerSpawned(AActor* SpawnedAttacker, UFortAthenaLivingWorldEventData* EventData); // Flags: Final|Native|Private, Memory Exec: 0x7FF750586E40(relative to base address)
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
		unsigned char UnknownData00_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

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
		TArray<FFortAthenaLivingWorldCategoryTableData> CategoryTableDatas; // 0x30(0x10)
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
		TArray<FFortAthenaLivingWorldTagDensityGridData> TagDensityGridData; // 0x1F8(0x10)
		FGameplayTagQuery SingleUseSpawnerDataQuery; // 0x208(0x48)
		FGameplayTagQuery ConcurrentSingleUseSpawnerDataQuery; // 0x250(0x48)
		UClass* EQSActorHelperClass; // 0x298(0x8)
		FScalableFloat DelayEventGeneration; // 0x2A0(0x28)
		FScalableFloat RestrictDensityReservationForReservoirs; // 0x2C8(0x28)
		FScalableFloat TrackDeadPlayers; // 0x2F0(0x28)
		TArray<FScalableFloat> DensityGridVerticalCutHeights; // 0x318(0x10)

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
		TArray<FFortAthenaActorDensityDebugInfo> ActorDebugInfos; // 0x140(0x10)
		TArray<float> DensityGridValues; // 0x150(0x10)
		FVector GridOrigin; // 0x160(0x18)
		FIntVector MaxGridSize; // 0x178(0xC)
		float CellSize; // 0x184(0x4)
		float MaxDensity; // 0x188(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x18C(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

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
		TArray<FFortAthenaLivingWorldEncounterStage> Stages; // 0x58(0x10)

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
		unsigned char UnknownData00_6[0x50]; // 0x98(0x50) UNKNOWN PROPERTY
		FFortAthenaLivingWorldConditionContainer ConditionContainer; // 0xE8(0x18)
		TArray<TScriptInterface> AllowedPointProviders; // 0x100(0x10)
		TArray<TScriptInterface> RegisteredPointProviders; // 0x110(0x10)
		TArray<UFortAthenaLivingWorldEventData*> RuntimeCreatedEventDatas; // 0x120(0x10)
		unsigned char UnknownData01_6[0x20]; // 0x130(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterDefinition; // 0x150(0x20)
		AActor* ActorDensityReservoir; // 0x170(0x8)
		TArray<AActor*> SpawnedActors; // 0x178(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		int32_t CurrentStageIndex; // 0x190(0x4)
		int32_t CurrentStageMaxActorCount; // 0x194(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x198(0x4) UNKNOWN PROPERTY
		bool bIsPaused; // 0x19C(0x1)
		unsigned char UnknownData04_7[0x3]; // 0x19D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance");
			return ret;
		}

		void StartEncounterStage(int32_t StageIndex); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505894D0(relative to base address)
		void ResumeEncounter(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750589290(relative to base address)
		void Reset(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void RequestEventGeneration(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75058905C(relative to base address)
		void RemoveAllowedPointProvider(TScriptInterface<Class>& PointProvider); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750588FAC(relative to base address)
		void PauseEncounter(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750588844(relative to base address)
		bool OwnsActor(AActor* Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E700530(relative to base address)
		void OnLastActorDied__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventSpawned__DelegateSignature(TArray<AActor*> SpawnedActors); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEncounterActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF7505880D0(relative to base address)
		void OnActorSpawned__DelegateSignature(AActor* SpawnedActor, UFortAthenaLivingWorldEventData* EventData); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActorDied__DelegateSignature(AActor* DiedActor); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActorDestroyed__DelegateSignature(AActor* DestroyedActor, UFortAthenaLivingWorldEventData* EventData); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasReachedMaxSpawnedCount(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		bool HasPendingSpawnRequest(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		int32_t GetTotalActorCount(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E12724C(relative to base address)
		int32_t GetAliveSpawnedActorCount(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750586798(relative to base address)
		void AdvanceEncounterStage(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750586460(relative to base address)
		void AddAllowedPointProvider(TScriptInterface<Class>& PointProvider); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750586390(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition CanSpawnCondition; // 0x40(0x18)
		TArray<FFortAthenaLivingWorldDespawnCondition> DespawnConditions; // 0x58(0x10)
		bool bRequirePointProviders; // 0x68(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery ProviderFiltersTagQuery; // 0x70(0x48)
		TArray<FPointProviderFilterEntry> ProviderFiltersEntries; // 0xB8(0x10)
		FInstancedStruct PointProviderSelector; // 0xC8(0x10)
		FInstancedStruct SpawnerDataSelector; // 0xD8(0x10)
		TArray<FFortAthenaLivingWorldTaggedSpawnActionClass> SpawnActions; // 0xE8(0x10)
		FScalableFloat MinActorCountToSpawn; // 0xF8(0x28)
		FScalableFloat MaxActorCountToSpawn; // 0x120(0x28)
		TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions; // 0x148(0x10)

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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortAthenaLivingWorldConfigData*> DefaultLagerConfig; // 0xA8(0x20)
		TArray<FFortLivingWorldConfigOverride> LagerConfigOverrides; // 0xC8(0x10)
		FScalableFloat LagerEnabled; // 0xD8(0x28)
		TMap<FGameplayTag, UClass*> TaggedSpawnActionClassMap; // 0x100(0x50)
		TArray<TScriptInterface> PointProviders; // 0x150(0x10)
		int32_t RegisteredPointProvidersCount; // 0x160(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x164(0xC) UNKNOWN PROPERTY
		FSlateBrush SpecialActorMinimapIconBrush; // 0x170(0xB0)
		FVector2D SpecialActorMinimapIconScale; // 0x220(0x10)
		FSlateBrush SpecialActorCompassIconBrush; // 0x230(0xB0)
		FVector2D SpecialActorCompassIconScale; // 0x2E0(0x10)
		FFortAthenaLivingWorldSpawnerDataLimiter SpawnerDataLimiter; // 0x2F0(0xB0)
		UWorld* CachedWorld; // 0x3A0(0x8)
		UFortAthenaLivingWorldConfigData* CachedConfig; // 0x3A8(0x8)
		TArray<UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances; // 0x3B0(0x10)
		UFortSeasonalEventManager* CachedSeasonalEventManager; // 0x3C0(0x8)
		TArray<TWeakObjectPtr> ActorClassToPreloadOnClient; // 0x3C8(0x10)
		FFortAthenaLivingWorldActorUpdateHandler ActorUpdateHandler; // 0x3D8(0xB0)
		FFortAthenaLivingWorldPointProviderUpdateHandler PointProviderUpdateHandler; // 0x488(0x98)
		FFortAthenaLivingWorldRuntimePointProviderHandler RuntimePointProviderHandler; // 0x520(0x60)
		FFortAthenaLivingWorldPlayerTracker PlayerTracker; // 0x580(0xC0)
		FFortAthenaLivingWorldPreloader Preloader; // 0x640(0xE0)
		FFortAthenaLivingWorldConditionContainer GlobalConditionContainer; // 0x720(0x18)
		unsigned char UnknownData02_6[0x4B0]; // 0x738(0x4B0) UNKNOWN PROPERTY
		TMap<UClass*, UFortAthenaLivingWorldSpawnAction*> SpawnActionCache; // 0xBE8(0x50)
		AFortAthenaLivingWorldEQSHelper* EQSHelper; // 0xC38(0x8)
		UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator; // 0xC40(0x8)
		unsigned char UnknownData03_7[0x58]; // 0xC48(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldManager");
			return ret;
		}

		void UnregisterDensityReservoir(AActor* ActorDensityReservoir); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75058A544(relative to base address)
		bool TrySpawnEventWithPreDespawnForRegistry(FDataRegistryId EventId, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, FGameplayTag DespawnDensityTag, float MaxAllowedDensityValue, int32_t& RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75058A084(relative to base address)
		bool TrySpawnEventWithPreDespawn(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, FGameplayTag DespawnDensityTag, float MaxAllowedDensityValue, int32_t& RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750589BC4(relative to base address)
		bool TrySpawnEventForRegistry(FDataRegistryId EventId, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, int32_t& RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750589890(relative to base address)
		bool TrySpawnEvent(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, int32_t& RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750589550(relative to base address)
		UFortAthenaLivingWorldEncounterInstance StartEncounter(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterType, TArray<TScriptInterface>& EncounterPointProviders, AActor* ActorDensityReservoir); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505892A8(relative to base address)
		void ResetEncounter(UFortAthenaLivingWorldEncounterInstance* EncounterInstance); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505890C0(relative to base address)
		void RequestEventGeneration(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750589090(relative to base address)
		bool RegisterTagDensityReservoir(AActor* ActorDensityReservoir, TArray<FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750588EB8(relative to base address)
		bool RegisterDensityReservoir(AActor* ActorDensityReservoir, float Density, float Range); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750588DBC(relative to base address)
		int32_t QueryEventBudgetForRegistry(FDataRegistryId EventId, AActor* SpawnLocation); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750588BCC(relative to base address)
		int32_t QueryEventBudget(FDataTableRowHandle EventEntry, AActor* SpawnLocation); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505889C8(relative to base address)
		float QueryActorDensityBudget(AActor* ReferenceActor, float Range); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75058885C(relative to base address)
		void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750588738(relative to base address)
		void OnUnmanagedDensityReservoirActorDestroy(AActor* DestroyedActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505886B8(relative to base address)
		void OnSpawnedActorDestroy(AActor* DestroyedActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF750588634(relative to base address)
		void OnRep_DebugDensityMinimapIndicator(UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnRep_ActorClassToPreloadOnClient(); // Flags: Final|Native|Private, Memory Exec: 0x7FF749C9DE58(relative to base address)
		void OnPatrolPathDestroyed(AActor* Actor); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505885B4(relative to base address)
		void OnPatrolPathAdded(AFortAthenaPatrolPath* PatrolPath); // Flags: Final|Native|Private, Memory Exec: 0x7FF750588534(relative to base address)
		void OnDebugSpawnEventSpawned(TArray<AActor*>& SpawnedActors, bool bSuccess); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75058700C(relative to base address)
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750586EF8(relative to base address)
		void OnActorSpawned(AActor* Actor, int32_t RequestID); // Flags: Final|Native|Private, Memory Exec: 0x7FF750586D7C(relative to base address)
		void LWMTAM(FString Name); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF750586B10(relative to base address)
		void LWMF(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerUnregisterPointProvider(AActor* PointProvider); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void LivingWorldManagerToggleVerboseLogging(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerToggleGenerateEvents(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerToggleDensityDisplay(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerToggleActorMinimap(FString Name); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74F49875C(relative to base address)
		void LivingWorldManagerSwitchDensityDisplay(int32_t DensityMapIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		void LivingWorldManagerRegisterPointProvider(AActor* PointProvider); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void LivingWorldManagerProviderDebugActor(int32_t ProviderIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void LivingWorldManagerGenerateEvents(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerFlush(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerEnablePointProvider(AActor* PointProvider); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void LivingWorldManagerDumpSpawnCount(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerDumpPrefabLevelBounds(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerDumpEventInstances(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerDisablePointProvider(AActor* PointProvider); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void LivingWorldManagerDebugEvent(FString EventName, int32_t DebugIndex, FString RuntimeSpawnDataName, FString EncounterName); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF750586BBC(relative to base address)
		bool IsEncounterCategoryActive(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterType); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750586A08(relative to base address)
		bool HasPendingSpawnRequestForEncounter(UFortAthenaLivingWorldEncounterInstance* EncounterInstance); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505868CC(relative to base address)
		UFortAthenaLivingWorldEncounterInstance GetOwningEncounter(AActor* Actor); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75058683C(relative to base address)
		UFortAthenaLivingWorldManager GetLivingWorldManager(UObject* WorldContextObject); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7505867BC(relative to base address)
		void EndEncounter(UFortAthenaLivingWorldEncounterInstance* EncounterInstance); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750586694(relative to base address)
		void CancelSpawnRequest(int32_t RequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750586604(relative to base address)
		bool BuildDataRegistryResolverScope_Implementation(TArray<FName>& InOutResolverScopes, int32_t& InOutPriority); // Flags: Native|Public|HasOutParms|Const, Memory Exec: 0x7FF75058647C(relative to base address)
	};


	// Class LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x100 (0x1A0 - 0xA0)
	class UFortAthenaLivingWorldNavigationInvokerComponent : public UActorComponent	
	{
	public:
		FScalableFloat GenerationRadius; // 0xA0(0x28)
		FNavAgentSelector SupportedAgents; // 0xC8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FScalableFloat DistanceToPlayer; // 0xD0(0x28)
		FScalableFloat DistanceToPlayerHysteresis; // 0xF8(0x28)
		FScalableFloat RegistrationDistanceToPlayer; // 0x120(0x28)
		FScalableFloat RegistrationDistanceToPlayerHysteresis; // 0x148(0x28)
		TArray<FortAthenaLivingWorldNavigationInvokerSettingsOverride> SettingsOverride; // 0x170(0x10)
		TWeakObjectPtr<UFortAthenaLivingWorldManager*> LivingWorldManager; // 0x180(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x188(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent");
			return ret;
		}

		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74E22BBE0(relative to base address)
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
		TArray<FFortAthenaLivingWorldPrefabActorSpawnerData> ActorSpawnerDatas; // 0x7E0(0x10)
		FBox LocalLevelBounds; // 0x7F0(0x38)
		FBox LocalGrassRemovalBox; // 0x828(0x38)
		FMulticastInlineDelegate OnAllActorSpawnedDelegate; // 0x860(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x870(0x18) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> BuildingsToKill; // 0x888(0x10)
		TArray<TWeakObjectPtr> SpawnedActors; // 0x898(0x10)
		FDelegateProperty FinishedDestroyingBuildingCallback; // 0x8A8(0xC)
		bool bHasFinishedSpawn; // 0x8B4(0x1)
		bool bHasRemovedFoliage; // 0x8B5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x8B6(0x2) UNKNOWN PROPERTY
		FScalableFloat bIsEnabled; // 0x8B8(0x28)
		FScalableFloat Weight; // 0x8E0(0x28)
		bool bShouldLevelBeVisible; // 0x908(0x1)
		bool bShouldSpawnerBeAllowedToSpawn; // 0x909(0x1)
		bool bShouldAlwaysSnapAboveLandscape; // 0x90A(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x90B(0x5) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition CanSpawnCondition; // 0x910(0x18)
		unsigned char UnknownData03_6[0x8]; // 0x928(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer PrefabTags; // 0x930(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPrefab");
			return ret;
		}

		void RemoveFoliageInsideLevelBound(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749088E18(relative to base address)
		void OnRep_ShouldLevelBeVisible(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF748F15AD0(relative to base address)
		void OnBuildingInLevelBoundsDestroyed__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAllActorSpawnedDelegate__DelegateSignature(TArray<AActor*>& SpawnedActors); // Flags: Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAllActorSpawned__DelegateSignature(TArray<AActor*>& SpawnedActors); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MakeLevelVisible(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A1258(relative to base address)
		AFortAthenaLivingWorldPrefab GetOwningLivingWorldPrefab(UObject* WorldContextObject); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7505A0740(relative to base address)
		FBox GetLevelBounds(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505A06F8(relative to base address)
		void DestroyBuildingsInLevelBounds(FDelegateProperty& FinishedDelegate); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505A047C(relative to base address)
		void CallWhenAllActorHaveSpawned(FDelegateProperty& DelegateToCall); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505A03D8(relative to base address)
		void AllowSpawnerToSpawn(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A02A4(relative to base address)
	};


	// Class LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
	// Inherited from AActor -> UObject
	// Size: 0x130 (0x3C0 - 0x290)
	class AFortAthenaLivingWorldPrefabActorSpawner : public AActor	
	{
	public:
		FFortAthenaLivingWorldActorSpawnDescription ActorDescription; // 0x290(0x100)
		FMulticastInlineDelegate OnActorSpawnedDelegate; // 0x390(0x10)
		AFortAthenaPatrolPath* PatrolPath; // 0x3A0(0x8)
		FGuid Guid; // 0x3A8(0x10)
		TWeakObjectPtr<AActor*> SpawnedActor; // 0x3B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner");
			return ret;
		}

		void OnSnapCompleted(UFortSnapOnSurfaceComponent* Component, FTransform& OldTransform, FTransform& NewTransfom); // Flags: Final|Native|Protected|HasOutParms|HasDefaults, Memory Exec: 0x7FF7505A186C(relative to base address)
		void OnActorSpawnedDelegate__DelegateSignature(AActor* SpawnedActor); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActorSpawned__DelegateSignature(AActor* SpawnedActor); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		AActor GetSpawnedActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505A0820(relative to base address)
		void CallWhenActorSpawned(FDelegateProperty& DelegateToCall); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505A02D8(relative to base address)
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

		void K2_OnSpawnedActorFailed(TScriptInterface<Class>& SourcePointProvider); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnSpawnedActor(AActor* SpawnedActor, TScriptInterface<Class>& SourcePointProvider); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnAllActorSpawned(TArray<AActor*>& SpawnedActor, TScriptInterface<Class>& SourcePointProvider); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ModifySpawnComponentList(UFortAthenaAISpawnerDataComponentList* ComponentList, UObject* ComponentOuter); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class LagerRuntime.FortAthenaLivingWorldWardComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortAthenaLivingWorldWardComponent : public UActorComponent	
	{
	public:
		float DefaultRadius; // 0xA0(0x4)
		unsigned char UnknownData00_7[0xC]; // 0xA4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldWardComponent");
			return ret;
		}

		void SetWardRadius(float Radius); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72508(relative to base address)
		void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7505A1BA4(relative to base address)
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7505A1680(relative to base address)
	};


	// Class LagerRuntime.FortCheatManager_LivingWorldManager_EnhancedInputBindingInfo
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortCheatManager_LivingWorldManager_EnhancedInputBindingInfo : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString CheatTeleportLastEventDataName; // 0x30(0x10)
		int32_t CheatSpawnEventCount; // 0x40(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FString CheatSpawnEventName; // 0x48(0x10)
		int32_t CheatTriggerEventCount; // 0x58(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FString CheatTriggerEventName; // 0x60(0x10)
		TArray<UFortCheatManager_LivingWorldManager_EnhancedInputBindingInfo*> InputBindings; // 0x70(0x10)
		UEnhancedInputComponent* InputComponent; // 0x80(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortCheatManager_LivingWorldManager");
			return ret;
		}

		void LWMTE(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF750586B10(relative to base address)
		void LWMTC(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LWMSE(FString EventDataName, FString SpawnerDataNames); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505A0848(relative to base address)
		void LWMSC(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LWMS(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF750586B10(relative to base address)
		void LWMEC(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerTriggerEvent(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74F49875C(relative to base address)
		void LivingWorldManagerToggleCapture(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerTeleportToSpawnPosition(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void LivingWorldManagerTeleportTo(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void LivingWorldManagerStartCapture(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerSpawnTrackedAtLocation(FString EventDataName, FString TrackedActorName, FVector Location, FRotator Rotation); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults, Memory Exec: 0x7FF7505A0FC8(relative to base address)
		void LivingWorldManagerSpawnEventAtLocation(FString EventDataName, FVector Location, FRotator Rotation, FString SpawnerDataNames); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults, Memory Exec: 0x7FF7505A0CB0(relative to base address)
		void LivingWorldManagerSpawnEvent(FString EventDataName, FString SpawnerDataNames); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7505A0BB8(relative to base address)
		void LivingWorldManagerSpawnAtLocation(FString EventDataName, FVector Location, FRotator Rotation); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults, Memory Exec: 0x7FF7505A0994(relative to base address)
		void LivingWorldManagerSpawn(FString EventDataName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74F49875C(relative to base address)
		void LivingWorldManagerGDTNextDensityGrid(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerEndCapture(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C42CE74(relative to base address)
	};


	// Class LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UFortGameFeatureAction_AddCategoryTableToConfig : public UGameFeatureAction	
	{
	public:
		TMap<TWeakObjectPtr, FFortAthenaLivingWorldCategoryTableDataList> ConfigToCategoryTableDatas; // 0x28(0x50)

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
		TArray<FFortLivingWorldConfigOverride> LagerConfigOverrides; // 0x28(0x10)

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
		TArray<FLivingWorldSpawnAroundPlayerRuntimeData> RuntimeData; // 0xA8(0x10)
		TArray<FLivingWorldSpawnAroundPlayerConfiguration> PerPlayerConfigurations; // 0xB8(0x10)

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
		unsigned char UnknownData00_3[0x40]; // 0x290(0x40) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x38(0x68)
		FGameplayTagContainer FiltersTags; // 0xA0(0x20)
		FTransform SpawnPoint; // 0xC0(0x60)
		bool bRandomizePointRotation; // 0x120(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActorSpawned; // 0x128(0x10)
		FPointProviderDebugInfo DebugInfo; // 0x138(0x10)
		AFortGameStateAthena* CachedGameState; // 0x148(0x8)
		UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x150(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldLightStaticPointProvider");
			return ret;
		}

		void OnActorSpawned__DelegateSignature(AActor* SpawnedActor); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A05D8(relative to base address)
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A0558(relative to base address)
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

		float GetPointProviderMaxRadius(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A07F8(relative to base address)
		FVector GetPointProviderLocation(); // Flags: Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7505A07C0(relative to base address)
		void GetFiltersTags(FGameplayTagContainer& FilterTags); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505A063C(relative to base address)
		void EnablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C68EFE4(relative to base address)
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EEF672C(relative to base address)
	};


	// Class LagerRuntime.FortAthenaLivingWorldStaticPointProvider
	// Inherited from AActor -> UObject
	// Size: 0xF8 (0x388 - 0x290)
	class AFortAthenaLivingWorldStaticPointProvider : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x298(0x68)
		FGameplayTagContainer FiltersTags; // 0x300(0x20)
		TArray<FTransform> SpawnPoints; // 0x320(0x10)
		bool bStartEnabled; // 0x330(0x1)
		bool bRandomizeStartPoint; // 0x331(0x1)
		bool bRandomizePointRotation; // 0x332(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x333(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActorSpawned; // 0x338(0x10)
		FPointProviderDebugInfo DebugInfo; // 0x348(0x10)
		AFortGameStateAthena* CachedGameState; // 0x358(0x8)
		UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x360(0x8)
		unsigned char UnknownData02_7[0x20]; // 0x368(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider");
			return ret;
		}

		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7505A1294(relative to base address)
		void OnActorSpawned__DelegateSignature(AActor* SpawnedActor); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A05A0(relative to base address)
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A0520(relative to base address)
	};


	// Class LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
	// Inherited from AFortAthenaLivingWorldStaticPointProvider -> AActor -> UObject
	// Size: 0xC8 (0x450 - 0x388)
	class AFortAthenaLivingWorldVehiclePointProvider : public AFortAthenaLivingWorldStaticPointProvider	
	{
	public:
		TEnumAsByte<EVehicleInitialOverlapBehavior> InitialOverlapBehavior; // 0x388(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x389(0x7) UNKNOWN PROPERTY
		FScalableFloat ForceModsAllowed; // 0x390(0x28)
		FGameplayTagContainer ForceMods; // 0x3B8(0x20)
		FScalableFloat ForceCosmeticsAllowed; // 0x3D8(0x28)
		FSpawnerInfoForcedCosmetics ForceCosmetics; // 0x400(0x48)
		unsigned char UnknownData01_7[0x8]; // 0x448(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY
		bool bStartEnabled; // 0x2D0(0x1)
		bool bWaitForNavigation; // 0x2D1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2D2(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer FiltersTags; // 0x2D8(0x20)
		UEnvQuery* EnvironmentQuery; // 0x2F8(0x8)
		TArray<FAIDynamicParam> QueryConfig; // 0x300(0x10)
		bool bRemoveUsedPoint; // 0x310(0x1)
		bool bRemoveUsedPointPermenantly; // 0x311(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x312(0x6) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x318(0x68)
		FScalableFloat EQSRefreshInterval; // 0x380(0x28)
		FScalableFloat WaterLevelIndexMin; // 0x3A8(0x28)
		FScalableFloat WaterLevelIndexMax; // 0x3D0(0x28)
		AFortGameStateAthena* CachedGameState; // 0x3F8(0x8)
		FMulticastInlineDelegate OnActorSpawnedResult; // 0x400(0x10)
		FMulticastInlineDelegate OnPointProviderRegistered; // 0x410(0x10)
		UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x420(0x8)
		unsigned char UnknownData03_7[0x1B0]; // 0x428(0x1B0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldVolume");
			return ret;
		}

		void SetSpawnRotation(FRotator& Rotation); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7505A22E8(relative to base address)
		void SetFiltersTags(FGameplayTagContainer& TagContainer); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505A2130(relative to base address)
		void SetEQSQueryConfigParam(FName ParameterName, float Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A206C(relative to base address)
		void SetEQSQuery(UEnvQuery* Query); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A1FEC(relative to base address)
		void RunEQS(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ResetSpawnRotation(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A1FC8(relative to base address)
		void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7505A1A40(relative to base address)
		void OnPointProviderRegistered__DelegateSignature(AFortAthenaLivingWorldVolume* PointProviderVolume); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationFinishedGeneration(ANavigationData* NavData); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505A176C(relative to base address)
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7505A1394(relative to base address)
		void OnActorSpawnedResult__DelegateSignature(AActor* SpawnedActor, bool bResult); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPointProviderEnabled(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EE1B988(relative to base address)
		void EnablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A05BC(relative to base address)
		bool DoesStartEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC162F4(relative to base address)
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A053C(relative to base address)
	};


	// Class LagerRuntime.FortAthenaPatrolPathPointProvider
	// Inherited from AActor -> UObject
	// Size: 0x100 (0x390 - 0x290)
	class AFortAthenaPatrolPathPointProvider : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer FiltersTags; // 0x298(0x20)
		AFortAthenaPatrolPath* AssociatedPatrolPath; // 0x2B8(0x8)
		bool bStartEnabled : 1; // 0x2C0:0(0x1)
		bool bSpawnOnPatrolPath : 1; // 0x2C0:1(0x1)
		bool bAlignOrientationToPath : 1; // 0x2C0:2(0x1)
		bool bSyncStatusWithPatrolPath : 1; // 0x2C0:3(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2C8(0x68)
		FMulticastInlineDelegate OnActorSpawnedResult; // 0x330(0x10)
		TWeakObjectPtr<AFortAthenaPatrolPath*> RuntimePatrolPathWeakPtr; // 0x340(0x8)
		AFortGameStateAthena* CachedGameState; // 0x348(0x8)
		UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x350(0x8)
		unsigned char UnknownData02_7[0x38]; // 0x358(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaPatrolPathPointProvider");
			return ret;
		}

		void OnPatrolPathStatusChanged(bool bEnableState); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505A17EC(relative to base address)
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7505A1488(relative to base address)
		void OnActorSpawnedResult__DelegateSignature(AActor* SpawnedActor, bool bResult); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnablePointProviderInLWM(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A05F0(relative to base address)
		void EnablePointProvider(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A05A0(relative to base address)
		void DisablePointProvider(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A0520(relative to base address)
	};


	// Class LagerRuntime.FortAthenaPointAroundPlayerProvider
	// Inherited from AActor -> UObject
	// Size: 0xE0 (0x370 - 0x290)
	class AFortAthenaPointAroundPlayerProvider : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer FiltersTags; // 0x298(0x20)
		UEnvQuery* QueryTemplate; // 0x2B8(0x8)
		TEnumAsByte<EEnvQueryRunMode> RunMode; // 0x2C0(0x1)
		bool bStartEnabled : 1; // 0x2C1:0(0x1)
		bool bGenerateAroundPlayerBots : 1; // 0x2C1:1(0x1)
		unsigned char UnknownData01_5[0x2]; // 0x2C2(0x2) UNKNOWN PROPERTY
		FGameplayTag IgnorePlayerWithTag; // 0x2C4(0x4)
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2C8(0x68)
		FMulticastInlineDelegate OnActorSpawnedResult; // 0x330(0x10)
		AFortGameStateAthena* CachedGameState; // 0x340(0x8)
		unsigned char UnknownData02_7[0x28]; // 0x348(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaPointAroundPlayerProvider");
			return ret;
		}

		void SetForcedPawnToUse(APawn* InForcedPawnToUse); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A21E8(relative to base address)
		void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7505A1AEC(relative to base address)
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7505A1584(relative to base address)
		void OnActorSpawnedResult__DelegateSignature(AActor* SpawnedActor, bool bResult); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnablePointProvider(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A05A0(relative to base address)
		void DisablePointProvider(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505A0520(relative to base address)
	};


	// Class LagerRuntime.FortAthenaWaterBodyPointProvider
	// Inherited from UObject
	// Size: 0x2A8 (0x2D0 - 0x28)
	class UFortAthenaWaterBodyPointProvider : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		AFortGameStateAthena* CachedGameState; // 0x30(0x8)
		UFortAthenaLivingWorldManager* CachedLivingWorldManager; // 0x38(0x8)
		FGameplayTagContainer PointProviderFiltersTags; // 0x40(0x20)
		UEnvQuery* EnvironmentQuery; // 0x60(0x8)
		TArray<FAIDynamicParam> QueryConfig; // 0x68(0x10)
		FScalableFloat MaxLocationsCountByWaterArea; // 0x78(0x28)
		FScalableFloat MaxLocationsCountBySplineLength; // 0xA0(0x28)
		bool bRemoveUsedLocations; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		FScalableFloat ActivationDistance; // 0xD0(0x28)
		FScalableFloat ValidationSweepRadius; // 0xF8(0x28)
		FScalableFloat ValidationSweepUp; // 0x120(0x28)
		FScalableFloat ValidationSweepDown; // 0x148(0x28)
		FCollisionProfileName ValidationGroundTraceCollisionProfile; // 0x170(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x178(0x68)
		TWeakObjectPtr<AFortWaterBodyActor*> AssociatedWaterBody; // 0x1E0(0x8)
		unsigned char UnknownData03_7[0xE8]; // 0x1E8(0xE8) UNKNOWN PROPERTY

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
		UClass* PointProviderClass; // 0xA0(0x8)

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
		TArray<FFortAthenaLivingWorldTagQueryToSeatMapping> SeatMappings; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle");
			return ret;
		}
	};

}
