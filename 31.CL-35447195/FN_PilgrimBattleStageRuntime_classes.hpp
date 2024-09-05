#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PilgrimBattleStageRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PilgrimBattleStageRuntime.BattleStageCameraDataSource
	// Inherited from UPilgrimQuickplayCameraDataSource -> USparksCameraPluginDataProvider -> UActorComponent -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UBattleStageCameraDataSource : public UPilgrimQuickplayCameraDataSource	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageCameraDataSource");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.BattleStageObjectiveProcessor_BreakStreak
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UBattleStageObjectiveProcessor_BreakStreak : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageObjectiveProcessor_BreakStreak");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.BattleStageObjectiveProcessor_RoundComplete
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UBattleStageObjectiveProcessor_RoundComplete : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageObjectiveProcessor_RoundComplete");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.BattleStageObjectiveProcessor_RoundStart
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UBattleStageObjectiveProcessor_RoundStart : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageObjectiveProcessor_RoundStart");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.BattleStageObjectiveProcessor_SurviveRound
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UBattleStageObjectiveProcessor_SurviveRound : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageObjectiveProcessor_SurviveRound");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.BattleStageScoreSimulatorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UBattleStageScoreSimulatorComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr ParentMbi; // 0xA0(0x8)
		UPilgrimSongData SongData; // 0xA8(0x8)
		TArray SimulatedPlayers; // 0xB0(0x10)
		float HitRateMin; // 0xC0(0x4)
		float HitRateMax; // 0xC4(0x4)
		unsigned char UnknownData01_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageScoreSimulatorComponent");
			return ret;
		}

		void OnSongLoaded(FPilgrimEvent_MBI_SongLoaded& Payload); // Flags: Final|Native|Public|HasOutParms 0x7FF414DFD6A0
	};


	// Class PilgrimBattleStageRuntime.BattleStageStandinDirectorComponent
	// Inherited from UPilgrimStandinDirector -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x278 - 0x228)
	class UBattleStageStandinDirectorComponent : public UPilgrimStandinDirector	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer GreenRoomTags; // 0x230(0x20)
		UDataTable BotNamesDataTable; // 0x250(0x8)
		TArray ValidBotNamesList; // 0x258(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
		bool bTeamsAssigned; // 0x270(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x271(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageStandinDirectorComponent");
			return ret;
		}

		void SpawnStandins(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFDA20
		void RPG_ClientBindToUpdates(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public 0x7FF414DFD940
		void OnBattleStageStandinSpawned(AActor Actor, int32_t RequestID, UClass SpawnerData); // Flags: Final|Native|Public 0x7FF414DFD860
		bool IsStandinSystemEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFD780
	};


	// Class PilgrimBattleStageRuntime.BattleStageStandinPawnComponent
	// Inherited from UPilgrimPawnComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UBattleStageStandinPawnComponent : public UPilgrimPawnComponent	
	{
	public:
		FGameplayTag SpawninEffect; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageStandinPawnComponent");
			return ret;
		}

		void StartInstrumentAnimation(APlayerState PlayerState, ASparksMusicPlayspace Playspace); // Flags: Event|Public|BlueprintEvent 0x7FF414DFDBE0
		void SetupListeners(UGameplayEventRouterComponent EventRouter); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DFDB00
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UPilgrimBattleStageDeveloperSettings : public UDeveloperSettings	
	{
	public:
		bool bUseRotationSongsInPIE; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageDeveloperSettings");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageGameManagerComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UPilgrimBattleStageGameManagerComponent : public UPlayspaceComponent	
	{
	public:
		TArray HowManyBandsAdvance; // 0xA0(0x10)
		int32_t NumberOfSongsToPopulateInSetlist; // 0xB0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TArray BattleStageBandStates; // 0xB8(0x10)
		bool bIsMatchPrivate; // 0xC8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		TArray EliminatedBandStates; // 0xD0(0x10)
		TArray DisconnectedTeamIds; // 0xE0(0x10)
		int32_t StartingPlayerCount; // 0xF0(0x4)
		unsigned char UnknownData05_7[0x1C]; // 0xF4(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageGameManagerComponent");
			return ret;
		}

		bool ServerInitializeSetlist(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DFF620
		void ServerForceUpdateBandStates(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DFF540
		void ServerFindEliminatedBands(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DFF460
		void ServerClearEliminatedBandStates(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DFF380
		void OnTeamDisconnected(char TeamID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFF2A0
		void OnSongStart(FPilgrimEvent_PilgrimGame_PlayingSong& SongPlayingEvent); // Flags: Final|Native|Private|HasOutParms 0x7FF414DFF1C0
		void OnRep_BattleStageBandStates(); // Flags: Final|Native|Private|Const 0x7FF414DFF0E0
		bool IsPrivateMatch(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFF000
		bool IsMatchOver(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFEF20
		bool IsLastRound(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFEE40
		void InitializeMusicBattleInstances(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFED60
		void InitializeMatch(); // Flags: Final|Native|Public 0x7FF414DFEC80
		void InitializeBandStates(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFEBA0
		TArray GetSortedBandStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFEAC0
		FText GetRandomBandName(); // Flags: Event|Public|BlueprintEvent 0x7FF414DFE9E0
		UTexture2D GetRandomBandIcon(); // Flags: Event|Public|BlueprintEvent 0x7FF414DFE900
		FPilgrimPlacementAnalyticsData GetPlacementAnalyticsDataForPlayer(APilgrimMusicBattleInstance PlayerMusicBattleInstance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DFE820
		int32_t GetNumBandsToAdvance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFE740
		int32_t GetGameplayRound(); // Flags: Final|Native|Private 0x7FF414DFE660
		TArray GetEliminatedBandStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFE580
		FGuid GetCurrentSongPlayId(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414DFE4A0
		int32_t GetCurrentRound(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFE3C0
		FBattleStageBandState GetBandStateByTeam(char Team); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFE2E0
		int32_t GetBandCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFE200
		void GetAllEliminatedPlayerStates(TArray& OutEliminatedPlayerStates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DFE120
		void FireSetlistEvent(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414DFE040
		void FireMatchStartEvent(bool MatchIsPrivate); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414DFDF60
		void FireEliminationEvent(TArray EliminatedBands); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414DFDE80
		void FireBreakStreakVerb(AFortPlayerController PlayerController); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFDDA0
		void FireBandStateUpdateEventToAll(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414DFDCC0
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageState_Intro
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x30 (0x108 - 0xD8)
	class UPilgrimBattleStageState_Intro : public UPilgrimQuickplayStateBase	
	{
	public:
		float WideShotTimeSeconds; // 0xD8(0x4)
		float PlayerShotTimeSeconds; // 0xDC(0x4)
		float RivalShotTimeSeconds; // 0xE0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer TeleportTagRequirements; // 0xE8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageState_Intro");
			return ret;
		}

		void TeleportPlayersToStartingPositions(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DFF7E0
		void StartPlayerIntro(APlayerState PlayerState); // Flags: Final|Native|Protected|BlueprintCallable|Const 0x7FF414DFF700
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageState_Loading
	// Inherited from UPilgrimQuickplayState_Loading -> UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UPilgrimBattleStageState_Loading : public UPilgrimQuickplayState_Loading	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageState_Loading");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageState_Pregame
	// Inherited from UPilgrimQuickplayState_Pregame -> UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x0 (0x140 - 0x140)
	class UPilgrimBattleStageState_Pregame : public UPilgrimQuickplayState_Pregame	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageState_Pregame");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageState_SetResults
	// Inherited from UPilgrimQuickplayState_SetResults -> UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x0 (0xD8 - 0xD8)
	class UPilgrimBattleStageState_SetResults : public UPilgrimQuickplayState_SetResults	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageState_SetResults");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageState_SongGameplay
	// Inherited from UPilgrimQuickplayState_SongGameplay -> UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x0 (0x128 - 0x128)
	class UPilgrimBattleStageState_SongGameplay : public UPilgrimQuickplayState_SongGameplay	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageState_SongGameplay");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageState_SongResults
	// Inherited from UPilgrimQuickplayState_SongResults -> UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x0 (0x200 - 0x200)
	class UPilgrimBattleStageState_SongResults : public UPilgrimQuickplayState_SongResults	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageState_SongResults");
			return ret;
		}
	};

}
