#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EncountersRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EncountersRuntime.EncounterGameplayCueActor
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AEncounterGameplayCueActor : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterGameplayCueActor");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterMobAnchor
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class AEncounterMobAnchor : public AActor	
	{
	public:
		FGameplayTagContainer FilterTags; // 0x290(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterMobAnchor");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterMobManagerComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x178 (0x218 - 0xA0)
	class UEncounterMobManagerComponent : public UGameFrameworkComponent	
	{
	public:
		TArray SpawnedMobs; // 0xA0(0x10)
		TArray MobEncounterSpawnData; // 0xB0(0x10)
		FEncounterMobSpawnInfo DefaultMobSpawnInfo; // 0xC0(0xA0)
		FScalableFloat LWMDensityWeight; // 0x160(0x28)
		FScalableFloat LWMDensityRange; // 0x188(0x28)
		FMulticastInlineDelegate OnEncounterStarted; // 0x1B0(0x10)
		FMulticastInlineDelegate OnEncounterPaused; // 0x1C0(0x10)
		FMulticastInlineDelegate OnEncounterResumed; // 0x1D0(0x10)
		FMulticastInlineDelegate OnEncounterActorSpawned; // 0x1E0(0x10)
		FMulticastInlineDelegate OnEncounterActorDead; // 0x1F0(0x10)
		FMulticastInlineDelegate OnEncounterEnded; // 0x200(0x10)
		TWeakObjectPtr EncounterPrefab; // 0x210(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterMobManagerComponent");
			return ret;
		}

		bool StartMobEncounter(FGameplayTag& MobIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414028618
		void ResumeMobEncounter(FGameplayTag& MobIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414028538
		void PauseMobEncounter(FGameplayTag& MobIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414028458
		void OnMobPawnEndPlay(AActor Mob, TEnumAsByte EndPlayReason); // Flags: Final|Native|Private 0x7FF414028378
		void OnMobActorSpawn(AActor SpawnedActor, UFortAthenaLivingWorldEventData EventData); // Flags: Final|Native|Private 0x7FF414028298
		void OnMobActorDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF4140281B8
		void OnEncounterStarted__DelegateSignature(FGameplayTag MobIdentifier); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140280D8
		void OnEncounterResumed__DelegateSignature(FGameplayTag MobIdentifier); // Flags: MulticastDelegate|Public|Delegate 0x7FF414027FF8
		void OnEncounterPaused__DelegateSignature(FGameplayTag MobIdentifier); // Flags: MulticastDelegate|Public|Delegate 0x7FF414027F18
		void OnEncounterEnded__DelegateSignature(FGameplayTag MobIdentifier); // Flags: MulticastDelegate|Public|Delegate 0x7FF414027E38
		void OnEncounterActorSpawned__DelegateSignature(FGameplayTag MobIdentifier, AActor SpawnedActor); // Flags: MulticastDelegate|Public|Delegate 0x7FF414027D58
		void OnEncounterActorDead__DelegateSignature(FGameplayTag MobIdentifier, AActor DamagedActor, AActor DamageCauser); // Flags: MulticastDelegate|Public|Delegate 0x7FF414027C78
		void EndMobEncounter(FGameplayTag& MobIdentifier); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414027B98
		void EndAndCleanupAllMobEncounters(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414027AB8
	};


	// Class EncountersRuntime.EncounterWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UEncounterWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterWorldConditionSchema");
			return ret;
		}
	};


	// Class EncountersRuntime.LWMEncounterInstance
	// Inherited from UObject
	// Size: 0xE0 (0x108 - 0x28)
	class ULWMEncounterInstance : public UObject	
	{
	public:
		TWeakObjectPtr LWMInstance; // 0x28(0x8)
		TArray SpawnedMobPawns; // 0x30(0x10)
		unsigned char UnknownData02_6[0x58]; // 0x40(0x58) UNKNOWN PROPERTY
		TWeakObjectPtr EncounterAnchorPoint; // 0x98(0x8)
		TWeakObjectPtr UserActor; // 0xA0(0x8)
		TArray ActivePointProviderInterfaces; // 0xA8(0x10)
		unsigned char UnknownData03_7[0x50]; // 0xB8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.LWMEncounterInstance");
			return ret;
		}

		void OnMobPawnEndPlay(AActor Mob, TEnumAsByte EndPlayReason); // Flags: Final|Native|Public 0x7FF414BC55B8
		void OnMobActorSpawn(AActor SpawnedActor, UFortAthenaLivingWorldEventData EventData); // Flags: Final|Native|Public 0x7FF414BC54D8
		void OnMobActorDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF414BC53F8
	};


	// Class EncountersRuntime.SpawnActorTaskHelper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class USpawnActorTaskHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.SpawnActorTaskHelper");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterActorSpawnerData
	// Inherited from UFortAthenaActorSpawnerData -> UFortAthenaSpawnerDataBase -> UObject
	// Size: 0x50 (0xA0 - 0x50)
	class UEncounterActorSpawnerData : public UFortAthenaActorSpawnerData	
	{
	public:
		FEncounterPrefabEntry EncounterEntry; // 0x50(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterActorSpawnerData");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEncounterBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterBlueprintLibrary");
			return ret;
		}

		UEncounterMobManagerComponent GetRelevantMobManagerComponentForActor(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BC5698
	};


	// Class EncountersRuntime.EncounterFactionData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UEncounterFactionData : public UPrimaryDataAsset	
	{
	public:
		FGameplayTagContainer FactionCapabilities; // 0x30(0x20)
		FWorldConditionQueryDefinition WorldConditionDefinition; // 0x50(0x18)
		UDataTable LWMEncounterTable; // 0x68(0x8)
		TArray Enemies; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterFactionData");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterGameplayVolume
	// Inherited from AGameplayVolume -> AActor -> UObject
	// Size: 0x108 (0x438 - 0x330)
	class AEncounterGameplayVolume : public AGameplayVolume	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x330(0x18) UNKNOWN PROPERTY
		UEncounterStateTreeComponent EncounterStateTreeComponent; // 0x348(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x350(0x8) UNKNOWN PROPERTY
		TArray TrackedEncounterPointProviders; // 0x358(0x10)
		TArray TrackedEncounterAnchors; // 0x368(0x10)
		TArray TrackedBuildingActors; // 0x378(0x10)
		TArray OverlappingPlayers; // 0x388(0x10)
		TWeakObjectPtr OverlapComponent; // 0x398(0x8)
		TMap AllVisitedPlayersMap; // 0x3A0(0x50)
		unsigned char UnknownData05_7[0x48]; // 0x3F0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterGameplayVolume");
			return ret;
		}

		void OnCleanup(); // Flags: Event|Public|BlueprintEvent 0x7FF414BC5858
		bool IsDoneCleaningUp(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414BC5778
	};


	// Class EncountersRuntime.EncounterItemDefinition
	// Inherited from UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x228 (0x2D0 - 0xA8)
	class UEncounterItemDefinition : public UFortItemDefinition	
	{
	public:
		bool bAutoHandleSuccessFailure; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr Level; // 0xB0(0x20)
		TWeakObjectPtr StateTreeOverride; // 0xD0(0x20)
		FGameplayCueTag ProximityGameplayCueTag; // 0xF0(0x4)
		FGameplayCueTag ActorCleanupGameplayCueTag; // 0xF4(0x4)
		bool bUseOverlapTestForActorCollection; // 0xF8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		TArray SuccessRewards; // 0x100(0x10)
		FEncounterRewardBehavior SuccessRewardBehavior; // 0x110(0x80)
		FGameplayCueTag ActorSuccessGameplayCueTag; // 0x190(0x4)
		FGameplayCueTag PlayerSuccessGameplayCueTag; // 0x194(0x4)
		TArray FailureRewards; // 0x198(0x10)
		FEncounterRewardBehavior FailureRewardBehavior; // 0x1A8(0x80)
		FGameplayCueTag ActorFailureGameplayCueTag; // 0x228(0x4)
		FGameplayCueTag PlayerFailureGameplayCueTag; // 0x22C(0x4)
		FScalableFloat LWMDensityWeight; // 0x230(0x28)
		FScalableFloat LWMDensityRange; // 0x258(0x28)
		bool bUseGlobalLWMBudget; // 0x280(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x281(0x7) UNKNOWN PROPERTY
		TArray Vars; // 0x288(0x10)
		TArray VariableSelections; // 0x298(0x10)
		FWorldConditionQueryDefinition CanSpawnWorldConditionDefinition; // 0x2A8(0x18)
		TArray ActorSpawnerDatas; // 0x2C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterItemDefinition");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterManagerComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x228 (0x2C8 - 0xA0)
	class UEncounterManagerComponent : public UGameFrameworkComponent	
	{
	public:
		TWeakObjectPtr EncounterVolume; // 0xA0(0x8)
		UEncounterItemDefinition EncounterDefinition; // 0xA8(0x8)
		TWeakObjectPtr CenterActorOverride; // 0xB0(0x8)
		FDataTableRowHandle PostEncounterLWMEvent; // 0xB8(0x10)
		FDataTableRowHandle PostEncounterLWMCategory; // 0xC8(0x10)
		TSet ExplicitContributors; // 0xD8(0x50)
		TArray ActorIdentifiers; // 0x128(0x10)
		bool bHasHandledSuccessFailure; // 0x138(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x139(0x7) UNKNOWN PROPERTY
		TArray EncounterInfos; // 0x140(0x10)
		TArray GameplayEffectInfos; // 0x150(0x10)
		TWeakObjectPtr EncounterPrefab; // 0x160(0x8)
		UEncounterFactionData SelectedFaction; // 0x168(0x8)
		UDataTable LWMEncounterTable; // 0x170(0x8)
		unsigned char UnknownData04_6[0x100]; // 0x178(0x100) UNKNOWN PROPERTY
		TWeakObjectPtr LastThreat; // 0x278(0x8)
		TWeakObjectPtr ReservoirActor; // 0x280(0x8)
		TArray TrackedActorInfos; // 0x288(0x10)
		unsigned char UnknownData05_7[0x30]; // 0x298(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterManagerComponent");
			return ret;
		}

		void SetPersistentValue(FGameplayTag& Identifier, int32_t Value, EPersistentValueScope PersistenceScope); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BC6818
		void RemoveExplicitContributor(AFortPlayerController Contributor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC6738
		void OnStateTreeStatusChanged(EStateTreeRunStatus Status); // Flags: Final|Native|Private 0x7FF414BC6658
		void HandleEncounterSuccess(int32_t RewardIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC6578
		void HandleEncounterFailure(int32_t RewardIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC6498
		FGameplayTagQuery GetVariable_TagQuery(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC63B8
		UFortAthenaLivingWorldEncounter GetVariable_LWMEncounter(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC62D8
		UFortWorldItemDefinition GetVariable_ItemDefinition(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC61F8
		int32_t GetVariable_Int(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC6118
		FGameplayTagContainer GetVariable_GameplayTagContainer(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC6038
		FGameplayTag GetVariable_GameplayTag(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC5F58
		float GetVariable_Float(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC5E78
		UEncounterFactionData GetVariable_Faction(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC5D98
		bool GetVariable_Bool(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC5CB8
		TArray GetVariable_ActorDescription(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC5BD8
		TWeakObjectPtr GetVariable_ActorClass(FGameplayTag& VarName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC5AF8
		int32_t GetPersistentValue(FGameplayTag& Identifier); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BC5A18
		void AddExplicitContributor(AFortPlayerController Contributor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BC5938
	};


	// Class EncountersRuntime.EncounterPatrolPathPointProvider
	// Inherited from AFortAthenaPatrolPathPointProvider -> AActor -> UObject
	// Size: 0x8 (0x398 - 0x390)
	class AEncounterPatrolPathPointProvider : public AFortAthenaPatrolPathPointProvider	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x390(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterPatrolPathPointProvider");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterPointProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEncounterPointProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterPointProviderInterface");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterStateTreeComponent
	// Inherited from UStateTreeComponent -> UBrainComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x178 - 0x170)
	class UEncounterStateTreeComponent : public UStateTreeComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x170(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterStateTreeComponent");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterStaticPointProvider
	// Inherited from AFortAthenaLivingWorldStaticPointProvider -> AActor -> UObject
	// Size: 0x8 (0x390 - 0x388)
	class AEncounterStaticPointProvider : public AFortAthenaLivingWorldStaticPointProvider	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x388(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterStaticPointProvider");
			return ret;
		}
	};


	// Class EncountersRuntime.EncounterVolumePointProvider
	// Inherited from AFortAthenaLivingWorldVolume -> AVolume -> ABrush -> AActor -> UObject
	// Size: 0x8 (0x5E0 - 0x5D8)
	class AEncounterVolumePointProvider : public AFortAthenaLivingWorldVolume	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x5D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.EncounterVolumePointProvider");
			return ret;
		}
	};


	// Class EncountersRuntime.FortCheatManager_Encounters
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCheatManager_Encounters : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.FortCheatManager_Encounters");
			return ret;
		}

		void EncountersDump(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BC68F8
	};


	// Class EncountersRuntime.LivingWorldEncounterPrefab
	// Inherited from AFortAthenaLivingWorldPrefab -> AFortLevelInstancePrefab -> ABuildingLevelInstance -> ABuildingActor -> AActor -> UObject
	// Size: 0x88 (0x9D8 - 0x950)
	class ALivingWorldEncounterPrefab : public AFortAthenaLivingWorldPrefab	
	{
	public:
		unsigned char UnknownData02_3[0x58]; // 0x950(0x58) UNKNOWN PROPERTY
		TArray EncounterEntries; // 0x9A8(0x10)
		UEncounterItemDefinition EncounterDefinition; // 0x9B8(0x8)
		TWeakObjectPtr ReservoirActorOverride; // 0x9C0(0x8)
		TWeakObjectPtr EncounterManager; // 0x9C8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x9D0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.LivingWorldEncounterPrefab");
			return ret;
		}

		void OnRep_EncounterDefinition(); // Flags: Final|Native|Private 0x7FF414BC69D8
	};


	// Class EncountersRuntime.FortVerbProcessor_EncounterCompleted
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFortVerbProcessor_EncounterCompleted : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EncountersRuntime.FortVerbProcessor_EncounterCompleted");
			return ret;
		}
	};

}
