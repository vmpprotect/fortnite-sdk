#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoMusicRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoMusicRuntime.ActiveJunoMusicPlayer
	// Inherited from UObject
	// Size: 0x188 (0x1B0 - 0x28)
	class UActiveJunoMusicPlayer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0x28(0x60) UNKNOWN PROPERTY
		FTimerHandle CooldownTimer; // 0x88(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x90(0x10) UNKNOWN PROPERTY
		TArray<USoundBase*> LoadedMusicAssets; // 0xA0(0x10)
		unsigned char UnknownData02_6[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> JunoMusicElementsToCreate; // 0xC0(0x10)
		unsigned char UnknownData03_6[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY
		UJunoActiveMusicElementController_Base* PlayingActiveMusicElementController; // 0xE0(0x8)
		UJunoMusicPlaybackConditionsPool* PlaybackConditionsPool; // 0xE8(0x8)
		TMap<UJunoMusicPlaylistDataAsset*, FElementControllerArray> AllActiveMusicElementControllers; // 0xF0(0x50)
		TArray<UJunoMusicPlaylistDataAsset*> JunoMusicPlaylistCollection; // 0x140(0x10)
		unsigned char UnknownData04_6[0x10]; // 0x150(0x10) UNKNOWN PROPERTY
		TMap<FName, UJunoActiveMusicCooldownGroup*> JunoMusicCooldownGroups; // 0x160(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.ActiveJunoMusicPlayer");
			return ret;
		}

		void OnDayNightPhaseChangeSignature(EFortDayPhase CurrentDayPhaseIn, EFortDayPhase PreviousDayPhaseIn, bool bAtCreationIn); // Flags: Final|Native|Public, Memory Exec: 0x7FF751C36D4C(relative to base address)
		void OnActiveMusicPlayerCooldownFinished(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751C36D34(relative to base address)
		void OnActiveMusicElementControllerFinishedPlaying(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751C36D20(relative to base address)
	};


	// Class JunoMusicRuntime.GameFeatureAction_BindJunoMusicManagerToPostWorldInit
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameFeatureAction_BindJunoMusicManagerToPostWorldInit : public UGameFeatureAction	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.GameFeatureAction_BindJunoMusicManagerToPostWorldInit");
			return ret;
		}
	};


	// Class JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicDataAggregatorSettings
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_RegisterJunoMusicDataAggregatorSettings : public UGameFeatureAction	
	{
	public:
		TArray<FSoftObjectPath> JunoMusicDataAggregatorSettings; // 0x28(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicDataAggregatorSettings");
			return ret;
		}
	};


	// Class JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicElementTable
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGameFeatureAction_RegisterJunoMusicElementTable : public UGameFeatureAction	
	{
	public:
		TMap<FSoftObjectPath, FGameplayTagQuery> JunoMusicElementDataTables; // 0x28(0x50)
		unsigned char UnknownData00_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicElementTable");
			return ret;
		}
	};


	// Class JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicPlayspaceProbes
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_RegisterJunoMusicPlayspaceProbes : public UGameFeatureAction	
	{
	public:
		TArray<FSoftObjectPath> JunoMusicProbesDataAssets; // 0x28(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.GameFeatureAction_RegisterJunoMusicPlayspaceProbes");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoActiveMusicCue
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UJunoActiveMusicCue : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		UAudioComponent* AudioComponent; // 0x58(0x8)
		USoundBase* LoadedMusic; // 0x60(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x68(0x10) UNKNOWN PROPERTY
		UMetasoundGeneratorHandle* MetasoundGeneratorHandle; // 0x78(0x8)
		unsigned char UnknownData02_7[0x40]; // 0x80(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicCue");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoActiveMusicCooldownGroup
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UJunoActiveMusicCooldownGroup : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FTimerHandle CooldownTimer; // 0x38(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicCooldownGroup");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoActiveMusicElement_Base
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UJunoActiveMusicElement_Base : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		FJunoMusicPlaylistElement JunoMusicPlaylistElement; // 0x38(0xB8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicElement_Base");
			return ret;
		}

		void OnFinishedPlaying(); // Flags: Native|Public, Memory Exec: 0x7FF747E989FC(relative to base address)
	};


	// Class JunoMusicRuntime.JunoActiveMusicElement_AudioComponent
	// Inherited from UJunoActiveMusicElement_Base -> UObject
	// Size: 0x38 (0x128 - 0xF0)
	class UJunoActiveMusicElement_AudioComponent : public UJunoActiveMusicElement_Base	
	{
	public:
		UAudioComponent* AudioComponent; // 0xF0(0x8)
		USoundBase* Music; // 0xF8(0x8)
		unsigned char UnknownData00_6[0x18]; // 0x100(0x18) UNKNOWN PROPERTY
		UMetasoundGeneratorHandle* MetasoundGeneratorHandle; // 0x118(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x120(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicElement_AudioComponent");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoActiveMusicElementController_Base
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class UJunoActiveMusicElementController_Base : public UObject	
	{
	public:
		FTimerHandle CooldownTimer; // 0x28(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		FTimerHandle SchedulingTimer; // 0x40(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		FDelegateProperty OnJunoActiveMusicElementControllerFinishedPlaying; // 0x58(0xC)
		unsigned char UnknownData02_6[0x1C]; // 0x64(0x1C) UNKNOWN PROPERTY
		TEnumAsByte<EJunoActiveMusicElementState> JunoActiveMusicElementState; // 0x80(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		UJunoActiveMusicElement_Base* JunoActiveMusicElement; // 0x88(0x8)
		TArray<UClass*> JunoMusicPlaybackConditions; // 0x90(0x10)
		unsigned char UnknownData04_6[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY
		TArray<FName> CooldownGroups; // 0xC0(0x10)
		unsigned char UnknownData05_7[0x40]; // 0xD0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicElementController_Base");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoActiveMusicElementController_DayPhaseOffset
	// Inherited from UJunoActiveMusicElementController_Base -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class UJunoActiveMusicElementController_DayPhaseOffset : public UJunoActiveMusicElementController_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicElementController_DayPhaseOffset");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoActiveMusicElementController_RandomTimeInDayPhase
	// Inherited from UJunoActiveMusicElementController_Base -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class UJunoActiveMusicElementController_RandomTimeInDayPhase : public UJunoActiveMusicElementController_Base	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicElementController_RandomTimeInDayPhase");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoActiveMusicElementController_RandomTimeInDay
	// Inherited from UJunoActiveMusicElementController_Base -> UObject
	// Size: 0x10 (0x120 - 0x110)
	class UJunoActiveMusicElementController_RandomTimeInDay : public UJunoActiveMusicElementController_Base	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x110(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicElementController_RandomTimeInDay");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoActiveMusicElementController_CustomBPCondition
	// Inherited from UJunoActiveMusicElementController_Base -> UObject
	// Size: 0x30 (0x140 - 0x110)
	class UJunoActiveMusicElementController_CustomBPCondition : public UJunoActiveMusicElementController_Base	
	{
	public:
		FTimerHandle UpdateTimerHandle; // 0x110(0x8)
		unsigned char UnknownData00_6[0x20]; // 0x118(0x20) UNKNOWN PROPERTY
		FRandomStream RandomStream; // 0x138(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoActiveMusicElementController_CustomBPCondition");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicControllerSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UJunoMusicControllerSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		UJunoMusicElementController* MusicCueController; // 0x58(0x8)
		UJunoMusicDataAggregator* JunoMusicDataAggregator; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicControllerSubsystem");
			return ret;
		}

		void RemoveMusicStates(FGameplayTagContainer& InStates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C37098(relative to base address)
		void RemoveMusicState(FGameplayTag& InState); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C3700C(relative to base address)
		void PushMusicStates(FGameplayTagContainer& InStates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C36ED4(relative to base address)
		void PushMusicState(FGameplayTag& InState); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C36E48(relative to base address)
		FString GetCollectedString(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C366D0(relative to base address)
		int32_t GetCollectedInt(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C36420(relative to base address)
		float GetCollectedFloat(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C36158(relative to base address)
		bool GetCollectedBool(FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C35EC0(relative to base address)
	};


	// Class JunoMusicRuntime.JunoMusicDataCollector
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoMusicDataCollector : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicDataCollector");
			return ret;
		}

		void BP_OnUpdate(float DeltaSeconds, UMetasoundParameterPack* AggregatedData); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnregistered(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnRegistered(UMetasoundParameterPack* AggregatedData); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoMusicRuntime.JunoMusicDataAggregatorConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoMusicDataAggregatorConfig : public UPrimaryDataAsset	
	{
	public:
		FJunoMusicDataAggregatorSettings DataAggregatorSettings; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicDataAggregatorConfig");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicDataAggregator
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UJunoMusicDataAggregator : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		TArray<UJunoMusicDataCollector*> DataCollectors; // 0x48(0x10)
		UMetasoundParameterPack* AggregatedData; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicDataAggregator");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicDataCollector_Combat
	// Inherited from UJunoMusicDataCollector -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UJunoMusicDataCollector_Combat : public UJunoMusicDataCollector	
	{
	public:
		TArray<UFortGameplayDataTrackerComponent*> RegisteredDataTrackerComponents; // 0x28(0x10)
		FGameplayTag NumAggressiveEnemiesTag; // 0x38(0x4)
		FGameplayTag NumAggressiveCreaturesTag; // 0x3C(0x4)
		FGameplayTag NumAggressiveMinifigsTag; // 0x40(0x4)
		FGameplayTag NumAggressiveStormSickMinifigsTag; // 0x44(0x4)
		FGameplayTag NumAggressiveStormSickCreaturesTag; // 0x48(0x4)
		FName IsInCombatParameterName; // 0x4C(0x4)
		FName CombatThreatLevelParameterName; // 0x50(0x4)
		FName MinifigWeightParameterName; // 0x54(0x4)
		FName CreatureWeightParameterName; // 0x58(0x4)
		FName StormSickWeightParameterName; // 0x5C(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x60(0x4) UNKNOWN PROPERTY
		bool bDebug; // 0x64(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x65(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicDataCollector_Combat");
			return ret;
		}

		void SetThreatLevelMultiplier(float InThreatLevelMultiplier); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751C37404(relative to base address)
	};


	// Class JunoMusicRuntime.JunoMusicElementController
	// Inherited from UObject
	// Size: 0x168 (0x190 - 0x28)
	class UJunoMusicElementController : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		TMap<UDataTable*, FGameplayTagQuery> ElementTables; // 0x38(0x50)
		TArray<FJunoActiveMusicElement> ActiveMusicElements; // 0x88(0x10)
		unsigned char UnknownData01_7[0xF8]; // 0x98(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicElementController");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicManager
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x168 (0x198 - 0x30)
	class UJunoMusicManager : public UGameInstanceSubsystem	
	{
	public:
		TArray<UJunoMusicPlaylistDataAsset*> JunoMusicPlaylistCollections; // 0x30(0x10)
		TMap<UWorld*, FJunoWorldMusicSystem> WorldMusicSystems; // 0x40(0x50)
		unsigned char UnknownData00_7[0x108]; // 0x90(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicManager");
			return ret;
		}

		void StopWorldMusicSystem(UWorld* World); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C37504(relative to base address)
		void StartWorldMusicSystem(UWorld* World); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C37484(relative to base address)
		void SetSuspendWorldActiveMusicPlayback(UWorld* World, bool bSuspendPlayback, bool bStopCurrentlyPlayingMusic); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C372F8(relative to base address)
		void SetSuspendActiveMusicPlayback(bool bSuspendPlayback, bool bStopCurrentlyPlayingMusic); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C37234(relative to base address)
		void SetActiveJunoMusicManagerData(FActiveJunoMusicManagerData& ActiveJunoMusicManagerDataIn); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C371A0(relative to base address)
		void RemoveJunoMusicPlaylist(UJunoMusicPlaylistDataAsset* JunoMusicPlaylist); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C36F8C(relative to base address)
		FString GetCollectedString(UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C367E0(relative to base address)
		int32_t GetCollectedInt(UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C36508(relative to base address)
		float GetCollectedFloat(UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C3624C(relative to base address)
		bool GetCollectedBool(UObject* WorldContextObject, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C35F8C(relative to base address)
		void AddJunoMusicPlaylist(UJunoMusicPlaylistDataAsset* JunoMusicPlaylist); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751C35DBC(relative to base address)
	};


	// Class JunoMusicRuntime.JunoMusicPlaybackConditionsPool
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoMusicPlaybackConditionsPool : public UObject	
	{
	public:
		TArray<UJunoMusicPlaybackCondition*> CachedPlaybackConditions; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicPlaybackConditionsPool");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicPlaybackCondition
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoMusicPlaybackCondition : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicPlaybackCondition");
			return ret;
		}

		bool BP_ShouldPlay(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C5A798C(relative to base address)
		void BP_OnUnregistered(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnRegistered(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoMusicRuntime.JunoMusicPlaylistDataAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UJunoMusicPlaylistDataAsset : public UPrimaryDataAsset	
	{
	public:
		FJunoMusicPlaylist JunoMusicPlaylist; // 0x30(0x78)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicPlaylistDataAsset");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicPlayspaceProbe
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoMusicPlayspaceProbe : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicPlayspaceProbe");
			return ret;
		}

		void BP_OnUpdate(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnregistered(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnRegistered(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoMusicRuntime.JunoMusicPlayspaceProbeSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UJunoMusicPlayspaceProbeSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		TArray<UJunoMusicPlayspaceProbe*> DataProbes; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicPlayspaceProbeSubsystem");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicPlayspaceProbeDataAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoMusicPlayspaceProbeDataAsset : public UPrimaryDataAsset	
	{
	public:
		FJunoMusicPlayspaceProbeData JunoMusicProbes; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicPlayspaceProbeDataAsset");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicPlayspaceProbe_Combat
	// Inherited from UJunoMusicPlayspaceProbe -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoMusicPlayspaceProbe_Combat : public UJunoMusicPlayspaceProbe	
	{
	public:
		FName IsInCombatParameterName; // 0x28(0x4)
		FGameplayTag CombatMusicStateTag; // 0x2C(0x4)
		unsigned char UnknownData00_7[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Combat");
			return ret;
		}
	};


	// Class JunoMusicRuntime.JunoMusicPlayspaceProbe_Environment
	// Inherited from UJunoMusicPlayspaceProbe -> UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UJunoMusicPlayspaceProbe_Environment : public UJunoMusicPlayspaceProbe	
	{
	public:
		unsigned char UnknownData00_1[0xB8]; // 0x28(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.JunoMusicPlayspaceProbe_Environment");
			return ret;
		}

		void HandleEnvironmentChanged(AActor* Actor, FJunoBiomeInfoQueryResult& PreviousEnvironmentResult, FJunoBiomeInfoQueryResult& NewEnvironmentResult, AJunoWorldTile* PreviousWorldTile, AJunoWorldTile* NewWorldTile); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751C369D8(relative to base address)
		void CacheFortPlayerPawn(AFortPawn* NewPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF751C35E3C(relative to base address)
	};


	// Class JunoMusicRuntime.GameFeatureAction_AddJunoMusicPlaylist
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGameFeatureAction_AddJunoMusicPlaylist : public UGameFeatureAction	
	{
	public:
		FSoftObjectPath JunoMusicPlaylist; // 0x28(0x18)
		unsigned char UnknownData00_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.GameFeatureAction_AddJunoMusicPlaylist");
			return ret;
		}
	};


	// Class JunoMusicRuntime.GameFeatureAction_SetActiveJunoMusicManagerData
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameFeatureAction_SetActiveJunoMusicManagerData : public UGameFeatureAction	
	{
	public:
		FActiveJunoMusicManagerData ActiveJunoMusicManagerData; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoMusicRuntime.GameFeatureAction_SetActiveJunoMusicManagerData");
			return ret;
		}
	};

}
