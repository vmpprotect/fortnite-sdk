#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PilgrimBattleStageRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PilgrimBattleStageRuntime.BattleStageCameraDataSource
	// Inherited from UPilgrimQuickplayCameraDataSource -> USparksCameraPluginDataProvider -> UActorComponent -> UObject
	// Size: 0x0 (0x138 - 0x138)
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
		TWeakObjectPtr<APilgrimMusicBattleInstance*> ParentMbi; // 0xA0(0x8)
		UPilgrimSongData* SongData; // 0xA8(0x8)
		TArray<FBattleStageSimulatedPlayer> SimulatedPlayers; // 0xB0(0x10)
		float HitRateMin; // 0xC0(0x4)
		float HitRateMax; // 0xC4(0x4)
		unsigned char UnknownData00_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageScoreSimulatorComponent");
			return ret;
		}

		void OnSongLoaded(FPilgrimEvent_MBI_SongLoaded& Payload); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF751ACD090(relative to base address)
	};


	// Class PilgrimBattleStageRuntime.BattleStageStandinDirectorComponent
	// Inherited from UPilgrimStandinDirector -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x278 - 0x228)
	class UBattleStageStandinDirectorComponent : public UPilgrimStandinDirector	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer GreenRoomTags; // 0x230(0x20)
		UDataTable* BotNamesDataTable; // 0x250(0x8)
		TArray<FText> ValidBotNamesList; // 0x258(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
		bool bTeamsAssigned; // 0x270(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x271(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageStandinDirectorComponent");
			return ret;
		}

		void SpawnStandins(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACD360(relative to base address)
		void RPG_ClientBindToUpdates(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF74D8BB7E0(relative to base address)
		void OnBattleStageStandinSpawned(AActor* Actor, int32_t RequestID, UClass* SpawnerData); // Flags: Final|Native|Public, Memory Exec: 0x7FF751ACCF60(relative to base address)
		bool IsStandinSystemEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0ABD98(relative to base address)
	};


	// Class PilgrimBattleStageRuntime.BattleStageStandinPawnComponent
	// Inherited from UPilgrimPawnComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UBattleStageStandinPawnComponent : public UPilgrimPawnComponent	
	{
	public:
		FGameplayTag SpawninEffect; // 0xB0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.BattleStageStandinPawnComponent");
			return ret;
		}

		void StartInstrumentAnimation(APlayerState* PlayerState, ASparksMusicPlayspace* Playspace); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupListeners(UGameplayEventRouterComponent* EventRouter); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751ACD2B4(relative to base address)
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UPilgrimBattleStageDeveloperSettings : public UDeveloperSettings	
	{
	public:
		bool bUseRotationSongsInPIE; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageDeveloperSettings");
			return ret;
		}
	};


	// Class PilgrimBattleStageRuntime.PilgrimBattleStageGameManagerComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UPilgrimBattleStageGameManagerComponent : public UPlayspaceComponent	
	{
	public:
		TArray<int32_t> HowManyBandsAdvance; // 0xA0(0x10)
		int32_t NumberOfSongsToPopulateInSetlist; // 0xB0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		TArray<FString> FallbackSongTemplateIds; // 0xB8(0x10)
		TArray<FBattleStageBandState> BattleStageBandStates; // 0xC8(0x10)
		bool bIsMatchPrivate; // 0xD8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY
		TArray<FBattleStageBandState> EliminatedBandStates; // 0xE0(0x10)
		TArray<char> DisconnectedTeamIds; // 0xF0(0x10)
		int32_t StartingPlayerCount; // 0x100(0x4)
		unsigned char UnknownData02_7[0x1C]; // 0x104(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageGameManagerComponent");
			return ret;
		}

		bool ServerInitializeSetlist(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACD290(relative to base address)
		void ServerForceUpdateBandStates(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACD254(relative to base address)
		void ServerFindEliminatedBands(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACD240(relative to base address)
		void ServerClearEliminatedBandStates(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACD22C(relative to base address)
		void OnTeamDisconnected(char TeamID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACD1AC(relative to base address)
		void OnSongStart(FPilgrimEvent_PilgrimGame_PlayingSong& SongPlayingEvent); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751ACD120(relative to base address)
		void OnRep_BattleStageBandStates(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF751ACD07C(relative to base address)
		bool IsPrivateMatch(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ACCF40(relative to base address)
		bool IsMatchOver(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ACCEF8(relative to base address)
		bool IsLastRound(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ACCED4(relative to base address)
		void InitializeMusicBattleInstances(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACCEC0(relative to base address)
		void InitializeMatch(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751ACCE70(relative to base address)
		void InitializeBandStates(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACCE5C(relative to base address)
		TArray GetSortedBandStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ACCE40(relative to base address)
		FText GetRandomBandName(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UTexture2D GetRandomBandIcon(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FPilgrimPlacementAnalyticsData GetPlacementAnalyticsDataForPlayer(APilgrimMusicBattleInstance* PlayerMusicBattleInstance); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751ACCDA8(relative to base address)
		int32_t GetNumBandsToAdvance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ACCD84(relative to base address)
		int32_t GetGameplayRound(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751ACCD60(relative to base address)
		TArray GetEliminatedBandStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ACCD44(relative to base address)
		FGuid GetCurrentSongPlayId(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751ACCD14(relative to base address)
		int32_t GetCurrentRound(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ACCCF0(relative to base address)
		FBattleStageBandState GetBandStateByTeam(char Team); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACCC28(relative to base address)
		int32_t GetBandCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E8277E0(relative to base address)
		void GetAllEliminatedPlayerStates(TArray<APlayerState*>& OutEliminatedPlayerStates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751ACCB8C(relative to base address)
		void FireSetlistEvent(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74E94BA1C(relative to base address)
		void FireMatchStartEvent(bool MatchIsPrivate); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74E2450F4(relative to base address)
		void FireEliminationEvent(TArray<char> EliminatedBands); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF751ACCAF8(relative to base address)
		void FireBreakStreakVerb(AFortPlayerController* PlayerController); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751ACCA78(relative to base address)
		void FireBandStateUpdateEventToAll(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF7476407DC(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer TeleportTagRequirements; // 0xE8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageRuntime.PilgrimBattleStageState_Intro");
			return ret;
		}

		void TeleportPlayersToStartingPositions(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751ACD374(relative to base address)
		void StartPlayerIntro(APlayerState* PlayerState); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF751A9FAC0(relative to base address)
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
