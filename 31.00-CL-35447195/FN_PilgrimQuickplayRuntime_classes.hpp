#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PilgrimQuickplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PilgrimQuickplayRuntime.PilgrimConversationRequirement_NotUsingTouch
	// Inherited from UConversationRequirementNode -> UConversationSubNode -> UConversationNode -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UPilgrimConversationRequirement_NotUsingTouch : public UConversationRequirementNode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimConversationRequirement_NotUsingTouch");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UPilgrimGreenRoomLayoutSwitcher : public UPlayspaceComponent	
	{
	public:
		int32_t CurrentLayout; // 0xA0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		UEnum LayoutEnumType; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher");
			return ret;
		}

		void SetLayout(int32_t NewLayout); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF6BE0
		void OnRep_CurrentLayout(); // Flags: Final|Native|Private 0x7FF414DF6B00
		void OnLayoutChanged(int32_t NewLayout); // Flags: Event|Public|BlueprintEvent 0x7FF414DF6A20
		void CycleLayout(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF6940
	};


	// Class PilgrimQuickplayRuntime.PilgrimLeaderboardScoreReporter
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimLeaderboardScoreReporter : public UPlayspaceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimLeaderboardScoreReporter");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimPawnComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPilgrimPawnComponent : public UFortPawnComponent	
	{
	public:
		bool bInteractionEffectsEnabled; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimPawnComponent");
			return ret;
		}

		void SetInteractionEffectsEnabled(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF6DA0
		bool GetInteractionEffectsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF6CC0
	};


	// Class PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x108 (0x200 - 0xF8)
	class UPilgrimPlayspaceComponent_IntroDirector : public UFortPlayspaceComponent	
	{
	public:
		bool bEnableIntroDirector; // 0xF8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		TArray GuitarSpotlights; // 0x100(0x10)
		TArray DrumSpotlights; // 0x110(0x10)
		TArray BassSpotlights; // 0x120(0x10)
		TArray MicSpotlights; // 0x130(0x10)
		TArray KeytarSpotlights; // 0x140(0x10)
		unsigned char UnknownData04_6[0xA0]; // 0x150(0xA0) UNKNOWN PROPERTY
		int32_t SpotlightIndexLock; // 0x1F0(0x4)
		bool bAllowFloatingPawnFixForThisMode; // 0x1F4(0x1)
		unsigned char UnknownData05_7[0xB]; // 0x1F5(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector");
			return ret;
		}

		void StartPlayerIntro(APlayerState PlayerState); // Flags: Final|Native|Private|BlueprintCallable|Const 0x7FF414DF7740
		void RequestNextMontageForInstrument(ESparksInstrumentType InstrumentType, AFortPlayerPawn PlayerPawn, int32_t PlayerIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DF7660
		void OnSpotlightMontageLoaded(int32_t PlayerIndex, UAnimMontage LoadedMontage); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DF7580
		bool IsForcePawnLocationAfterIntroEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF74A0
		bool HasSpotlightMontageLoadFinished(int32_t PlayerIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DF73C0
		float GetForcePawnLocationAfterIntroDelaySeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF72E0
		float GetFloatingPawnFixIntervalSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF7200
		bool EnqueueSpotlightMontages(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DF7120
		bool EnableFloatingPawnFix(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF7040
		void DebugShowSpotlightTool_Impl(bool bShow); // Flags: Event|Protected|BlueprintEvent 0x7FF414DF6F60
		void ClearSpotlightMontageHandles(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DF6E80
	};


	// Class PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_ServerExpiration
	// Inherited from UPlayspaceComponent_ServerExpiration -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1B8 - 0x1B8)
	class UPilgrimPlayspaceComponent_ServerExpiration : public UPlayspaceComponent_ServerExpiration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_ServerExpiration");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimPlayspacePawnProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimPlayspacePawnProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimPlayspacePawnProviderInterface");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent
	// Inherited from UPilgrimCoreBandStateComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x128 - 0xB0)
	class UPilgrimQuickplayBandStateComponent : public UPilgrimCoreBandStateComponent	
	{
	public:
		FMulticastInlineDelegate OnSongReplayingChanged; // 0xB0(0x10)
		UPilgrimPremadeSetlist SetlistVoteWinner; // 0xC0(0x8)
		int32_t CurrentSetlistIndex; // 0xC8(0x4)
		bool bIsReplayingPreviousSong; // 0xCC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		TMap SetlistResultMap; // 0xD0(0x50)
		unsigned char UnknownData03_7[0x8]; // 0x120(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent");
			return ret;
		}

		void SongReplayingChanged__DelegateSignature(bool bIsReplaying); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F2CD0
		void ServerResetSetlistIndex(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140F2BF0
		void ServerAdvanceSetlistIndex(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140F2B10
		void OnRep_SetlistVoteWinner(UPilgrimPremadeSetlist PrevSetlist); // Flags: Final|Native|Private 0x7FF4140F2A30
		void OnRep_IsReplayingPreviousSong(); // Flags: Final|Native|Private 0x7FF4140F2950
		void OnRep_CurrentSetlistIndex(int32_t PrevSetlistIndex); // Flags: Final|Native|Private 0x7FF4140F2870
		bool IsReplayingPreviousSong(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F2790
		TArray GetVotersForSetlist(UPilgrimPremadeSetlist Setlist); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F26B0
		int32_t GetVoteCountForSetlist(UPilgrimPremadeSetlist Setlist); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F25D0
		UPilgrimPremadeSetlist GetSetlistVoteWinner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F24F0
		TArray GetPlayersInBandByController(APlayerController Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F2410
		TArray GetPlayersInBand(char Team); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F2330
		int32_t GetCurrentSetlistLength(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F2250
		int32_t GetCurrentSetlistIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F2170
		TScriptInterface GetCurrentSetlist(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F2090
		UPilgrimQuickplayBandStateComponent GetBandState(AActor ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4140F1FB0
		bool AreAllPlayersReady(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F1ED0
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayCameraDataSource
	// Inherited from USparksCameraPluginDataProvider -> UActorComponent -> UObject
	// Size: 0x10 (0x130 - 0x120)
	class UPilgrimQuickplayCameraDataSource : public USparksCameraPluginDataProvider	
	{
	public:
		bool bCutOnMeasuresInsteadOfBeats; // 0x120(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr PilgrimGame; // 0x124(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayCameraDataSource");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0xB0 (0xE0 - 0x30)
	class UPilgrimQuickplayDeveloperSettings : public UDeveloperSettings	
	{
	public:
		bool OverrideGamestateSettings; // 0x30(0x1)
		bool SongGameplay_SkipToGreenRoom; // 0x31(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		float SongResults_TransitionTimeInSeconds; // 0x34(0x4)
		bool SongResults_OverrideSongData; // 0x38(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FPilgrimQuickplaySongResultData SongResults_SongData; // 0x40(0x68)
		bool SongResults_OverrideSetlistResultData; // 0xA8(0x1)
		unsigned char UnknownData07_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		TArray SongResults_SetlistResultsData; // 0xB0(0x10)
		bool Gameplay_ShowSongStats; // 0xC0(0x1)
		bool SongResults_SetlistChallengeOverrideConsole; // 0xC1(0x1)
		bool SongResults_SetlistChallengeDebug; // 0xC2(0x1)
		bool SongResults_SetlistChallengeFilenameAbsolute; // 0xC3(0x1)
		unsigned char UnknownData08_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FString SongResults_SetlistChallengeJSONDumpFilename; // 0xC8(0x10)
		bool SongResults_SetlistChallengeIncludeHistogramData; // 0xD8(0x1)
		unsigned char UnknownData09_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayDeveloperSettings");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayEmoteBPFL
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimQuickplayEmoteBPFL : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayEmoteBPFL");
			return ret;
		}

		void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DF7820
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayerSpawningComponent
	// Inherited from UPlayspaceComponent_PlayerSpawning -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xD0 - 0xB0)
	class UPilgrimQuickplayPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning	
	{
	public:
		FGameplayTagContainer PregameSpawnTags; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerSpawningComponent");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent
	// Inherited from UPilgrimCorePlayerStateComponent -> USparksPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC8 (0x188 - 0xC0)
	class UPilgrimQuickplayPlayerStateComponent : public UPilgrimCorePlayerStateComponent	
	{
	public:
		UPilgrimSongMetadata SongVote; // 0xC0(0x8)
		UPilgrimPremadeSetlist SetlistVote; // 0xC8(0x8)
		TMap SetlistHighscoreMap; // 0xD0(0x50)
		TMap SetlistResultMap; // 0x120(0x50)
		float CloseupCameraTime; // 0x170(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		TArray GrantedQuests; // 0x178(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent");
			return ret;
		}

		void SetSongVote(UPilgrimSongMetadata PlayerChosenSong); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DF96C0
		void SetSongResultData(FPilgrimQuickplaySongResultData& NewSongResultData); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DF95E0
		void SetSetlistVote(UPilgrimPremadeSetlist PlayerChosenSetlist); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DF9500
		void SetReachedNewHighscore(int32_t TotalScore, int32_t DeltaScore, EPilgrimPersonalBestType BestType); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DF9420
		void SetPerformanceData(FPilgrimQuickplayPlayerPerformanceData& NewPerformanceData); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DF9340
		void SetHighscore(FPilgrimPersonalBestResultRpl& Highscore, int32_t SetlistIndex, bool bLoaded); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DF9260
		void SetCloseupCameraTime(float TotalTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF9180
		void ServerSetHighscore(FPilgrimPersonalBestResultRpl Highscore, int32_t SetlistIndex, bool bLoaded); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414DF90A0
		void Server_ResetDefaultQuests(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414DF8FC0
		void Server_GrantDefaultQuests(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414DF8EE0
		void SendToServerPerformanceData(FPilgrimQuickplayPlayerPerformanceData NewPerformanceData); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414DF8E00
		void SendToServerAllIntrosFinished(UPilgrimQuickplayState_Intro IntroState); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414DF8D20
		void SendToClientsSongResultData(int32_t SetlistIndex, FPilgrimQuickplaySongResultData NewPerformanceData); // Flags: Net|NetReliableNative|Event|NetMulticast|Public 0x7FF414DF8C40
		void SendToClientsResetSetlistResultData(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public 0x7FF414DF8B60
		void SendToClientsPerformanceData(int32_t SetlistIndex, FPilgrimQuickplayPlayerPerformanceData NewPerformanceData); // Flags: Net|NetReliableNative|Event|NetMulticast|Public 0x7FF414DF8A80
		void SendHighscoreToServer(FPilgrimPersonalBestResult& Highscore, int32_t SetlistIndex, bool bLoaded); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DF89A0
		void ResetSetlistResultData(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DF88C0
		void OnRep_SongVote(UPilgrimSongMetadata PrevSongVote); // Flags: Final|Native|Private 0x7FF414DF87E0
		void OnRep_SetlistVote(UPilgrimPremadeSetlist PrevSetlistVote); // Flags: Final|Native|Private 0x7FF414DF8700
		void MulticastBroadcastNewHighscore(int32_t TotalScore, int32_t DeltaScore, EPilgrimPersonalBestType BestType); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414DF8620
		UPilgrimSongMetadata GetSongVote(APlayerState PlayerState); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DF8540
		FPilgrimQuickplaySongResultData GetSongResultData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF8460
		void GetSetlistResultProxies(TArray& SetlistProxy); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DF8380
		FPilgrimQuickplaySetlistResultData GetSetlistResultDataByIndex(int32_t SetlistIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF82A0
		bool GetReachedNewHighscore(EPilgrimPersonalBestType BestType, int32_t SetlistIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF81C0
		UPilgrimQuickplayPlayerStateComponent GetPilgrimQuickplayPlayerStateComponent(APlayerState PlayerState); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DF80E0
		FPilgrimQuickplayPlayerPerformanceData GetPerformanceData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF8000
		UGameplayStateMachine GetMainStateMachine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF7F20
		bool GetHighscoreResult(FPilgrimPersonalBestResultRpl& OutResult, int32_t SetlistIndex, bool bLoaded); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DF7E40
		UPilgrimSongMetadata GetCurrentSongVote(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF7D60
		UPilgrimPremadeSetlist GetCurrentSetlistVote(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF7C80
		float GetCloseupCameraTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF7BA0
		UPilgrimQuickplayBandStateComponent GetBandState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF7AC0
		void ClientMatchRecorded(int32_t SetlistIndex, bool bIsSoloMatch); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414DF79E0
		void BroadcastEvent_SongResultDataChanged(int32_t SetlistIndex); // Flags: Final|Native|Private 0x7FF414DF7900
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace
	// Inherited from APilgrimPlayspace -> ASparksMusicPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x40 (0x7D0 - 0x790)
	class APilgrimQuickplayPlayspace : public APilgrimPlayspace	
	{
	public:
		UPilgrimStandinDirector StandinDirector; // 0x790(0x8)
		UClass PilgrimQuickplayStateMachineClass; // 0x798(0x8)
		UGameplayStateMachineManager StateMachineManager; // 0x7A0(0x8)
		UGameplayStateMachine MainStateMachine; // 0x7A8(0x8)
		UPilgrimQuickplayBandStateComponent BandState; // 0x7B0(0x8)
		UClass SparksCameraPluginDataProviderClass; // 0x7B8(0x8)
		USparksCameraPluginDataProvider CameraDataSource; // 0x7C0(0x8)
		UPilgrimQuickplayPlayspaceComponent_AuraManager AuraManager; // 0x7C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace");
			return ret;
		}

		void SetPlayerStateTeamIndex(AFortPlayerStateAthena PlayerState, int32_t TeamIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF9EA0
		void HandleDirectorStopEvent(FSparksCommonStopCameraDirectorEvent& Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414DF9DC0
		void HandleDirectorStartEvent(FSparksCommonStartCameraDirectorEvent& Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414DF9CE0
		void HandleDirectorResetEvent(FSparksCommonResetCameraDirectorEvent& Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414DF9C00
		UPilgrimQuickplayStateMachine GetPilgrimQuickplayStateMachine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF9B20
		bool GetIsSinglePlayerGame(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF9A40
		EPilgrimQuickplayState GetActivePilgrimStateId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF9960
		UPilgrimQuickplayStateBase GetActivePilgrimQuickplayState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF9880
		void ForceActiveCameraDirector(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF97A0
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_AuraManager
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x140 - 0xF8)
	class UPilgrimQuickplayPlayspaceComponent_AuraManager : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0xF8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_AuraManager");
			return ret;
		}

		void HandleOnMBIFinished(FPilgrimEvent_MBI_Finished& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DFA060
		void HandleOnMaxStreakStateChangedEvent(FPilgrimEvent_Scoring_MaxStreakStateChanged& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DF9F80
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x110 - 0xF8)
	class UPilgrimQuickplayPlayspaceComponent_PlayerManager : public UFortPlayspaceComponent	
	{
	public:
		TWeakObjectPtr LocalPlayerOverride; // 0xF8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x100(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager");
			return ret;
		}

		bool ShouldTreatPlayerAsLocalPlayer(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFA3E0
		void SetLocalPlayerOverride(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFA300
		APlayerState GetLocalPlayerOverride(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFA220
		void BP_OnAppResumed(float ElapsedTimeSeconds); // Flags: Event|Protected|BlueprintEvent 0x7FF414DFA140
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultProxyInstance
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UPilgrimQuickplaySetlistResultProxyInstance : public UObject	
	{
	public:
		FPilgrimQuickplaySetlistResultData ResultData; // 0x28(0xB8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultProxyInstance");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayStateBase
	// Inherited from UGameplayState -> UObject
	// Size: 0x60 (0xD8 - 0x78)
	class UPilgrimQuickplayStateBase : public UGameplayState	
	{
	public:
		UFortAbilitySet AbilitySetForState; // 0x78(0x8)
		TMap GrantedAbilitySets; // 0x80(0x50)
		UFortInputMappingContext InputMappingContext; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase");
			return ret;
		}

		bool MarkStateDone(); // Flags: Native|Public|BlueprintCallable 0x7FF414DFA840
		UPilgrimQuickplayStateMachine GetPilgrimStateMachine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFA760
		EPilgrimQuickplayState GetPilgrimStateId(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFA680
		APilgrimQuickplayPlayspace GetPilgrimPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFA5A0
		UGameplayEventRouterComponent GetEventRouter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFA4C0
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimQuickplayStateBPFL : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBPFL");
			return ret;
		}

		FGameplayTag GetStateTag(EPilgrimQuickplayState& State); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DFAA00
		EPilgrimQuickplayState GetPilgrimState(FGameplayTag& tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DFA920
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine
	// Inherited from UGameplayStateMachine -> UGameplayState -> UObject
	// Size: 0x10 (0xD8 - 0xC8)
	class UPilgrimQuickplayStateMachine : public UGameplayStateMachine	
	{
	public:
		TArray GrantedQuests; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine");
			return ret;
		}

		void TeleportAllPlayers(FGameplayTagContainer& TeleportTagRequirements); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DFB100
		void PrepareStageForPlayer(AFortPlayerPawn Pawn, FVector& TeleportLocation, FRotator& TeleportRotation); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x7FF414DFB020
		void GetPlayerPawnsInPlayspace(TArray& PlayerPawns); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DFAF40
		UGameplayEventRouterComponent GetEventRouter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFAE60
		void GetDailyQuests(TArray& OutDailyQuests); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DFAD80
		UPilgrimQuickplayStateBase GetActivePilgrimStateObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFACA0
		EPilgrimQuickplayState GetActivePilgrimStateId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFABC0
		void CleanUpStageForPlayer(AFortPlayerPawn Pawn); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DFAAE0
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0xA0 (0x178 - 0xD8)
	class UPilgrimQuickplayState_Intro : public UPilgrimQuickplayStateBase	
	{
	public:
		FGameplayTagContainer TeleportTagRequirements; // 0xD8(0x20)
		float CameraWaitTime; // 0xF8(0x4)
		unsigned char UnknownData01_7[0x7C]; // 0xFC(0x7C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro");
			return ret;
		}

		void UpdateCameraWaitTime(float NewWaitTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFB1E0
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_Loading
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x8 (0xE0 - 0xD8)
	class UPilgrimQuickplayState_Loading : public UPilgrimQuickplayStateBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Loading");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_Outro
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x10 (0xE8 - 0xD8)
	class UPilgrimQuickplayState_Outro : public UPilgrimQuickplayStateBase	
	{
	public:
		float StateTTL; // 0xD8(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xDC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Outro");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_Pregame
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x68 (0x140 - 0xD8)
	class UPilgrimQuickplayState_Pregame : public UPilgrimQuickplayStateBase	
	{
	public:
		TArray EffectsToApplyOnTransition; // 0xD8(0x10)
		FGameplayTagContainer TeleportTagRequirements; // 0xE8(0x20)
		unsigned char UnknownData01_7[0x38]; // 0x108(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Pregame");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_PreIntro
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x10 (0xE8 - 0xD8)
	class UPilgrimQuickplayState_PreIntro : public UPilgrimQuickplayStateBase	
	{
	public:
		float StateTTLSeconds; // 0xD8(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xDC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_PreIntro");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_SetResults
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x0 (0xD8 - 0xD8)
	class UPilgrimQuickplayState_SetResults : public UPilgrimQuickplayStateBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SetResults");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x50 (0x128 - 0xD8)
	class UPilgrimQuickplayState_SongGameplay : public UPilgrimQuickplayStateBase	
	{
	public:
		FGameplayTagContainer StageTeleportTagRequirements; // 0xD8(0x20)
		UClass PilgrimMusicBattleInstanceClass; // 0xF8(0x8)
		bool bHaveTriggeredMBIFinished; // 0x100(0x1)
		unsigned char UnknownData02_6[0x1F]; // 0x101(0x1F) UNKNOWN PROPERTY
		bool bCreateSpectatorMBI; // 0x120(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x121(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay");
			return ret;
		}

		void OnMusicBattleStoppedEarly(EMusicBattleEndReason EndReason); // Flags: Final|Native|Protected 0x7FF414DFB560
		void OnMusicBattleFinished(EMusicBattleEndReason EndReason); // Flags: Final|Native|Protected 0x7FF414DFB480
		TArray GetPilgrimMusicBattleInstances(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DFB3A0
		void BuildSongResultData(); // Flags: Final|Native|Protected 0x7FF414DFB2C0
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x128 (0x200 - 0xD8)
	class UPilgrimQuickplayState_SongResults : public UPilgrimQuickplayStateBase	
	{
	public:
		double ServerEndTime; // 0xD8(0x8)
		FScalableFloat WaitTimeWithMoreSongs; // 0xE0(0x28)
		FScalableFloat WaitTimeWithNoMoreSongs; // 0x108(0x28)
		FScalableFloat WaitTimeAllPlayersReady; // 0x130(0x28)
		FTimerHandle WaitTimerHandle; // 0x158(0x8)
		TSet PlayerList; // 0x160(0x50)
		TSet ReadyPlayers; // 0x1B0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults");
			return ret;
		}

		void ServerSetEndTime(float ServerWorldEndTimeSeconds); // Flags: Event|Protected|BlueprintEvent 0x7FF414DFBB80
		void ServerRecievedPlayPreviousSongFromClient(UPilgrimPlayerControllerComponent ControllerComponent, EPilgrimStateMachineMessage StateMachineMessage); // Flags: Final|Native|Protected 0x7FF414DFBAA0
		void OnRep_ServerEndTime(); // Flags: Final|Native|Protected 0x7FF414DFB9C0
		void OnPlayerDisconnected(AFortPlayerStateAthena PlayerState, bool bIsDisconnected); // Flags: Final|Native|Protected 0x7FF414DFB8E0
		void HandleTimerFinished(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414DFB800
		void GoToNextState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFB720
		void ClientUpdateStateEndTime(float ServerWorldEndTimeSeconds); // Flags: Event|Protected|BlueprintEvent 0x7FF414DFB640
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UPilgrimQuickplaySuspendHandleComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent");
			return ret;
		}

		void ServerSyncHeartbeatMessageReceived(UPilgrimPlayerControllerComponent PilgrimPC); // Flags: Final|Native|Protected 0x7FF414DFBD40
		void ServerOnTimedInputReceived(UPilgrimPlayerControllerComponent PilgrimPC, FPilgrimTimedInput& TimedInput); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DFBC60
	};


	// Class PilgrimQuickplayRuntime.PilgrimStandinDirector
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x228 - 0xF8)
	class UPilgrimStandinDirector : public UFortPlayspaceComponent	
	{
	public:
		TMap InstrumentToWeaponMap; // 0xF8(0x50)
		UClass AISpawnerData; // 0x148(0x8)
		TArray Emotes; // 0x150(0x10)
		TArray SpawnedStandinPawns; // 0x160(0x10)
		TArray SpawnedStandinStates; // 0x170(0x10)
		unsigned char UnknownData01_7[0xA8]; // 0x180(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimStandinDirector");
			return ret;
		}

		void TeleportSpawnedStandins(TArray& Destinations); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DFC0C0
		void SetupListeners(UGameplayEventRouterComponent EventRouter); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DFBFE0
		TArray GetStandinStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFBF00
		TArray GetStandinPawns(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFBE20
	};


	// Class PilgrimQuickplayRuntime.PilgrimStandinPawnComponent
	// Inherited from UPilgrimPawnComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UPilgrimStandinPawnComponent : public UPilgrimPawnComponent	
	{
	public:
		FGameplayTag SpawninEffect; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent");
			return ret;
		}

		void StartInstrumentAnimation(APlayerState PlayerState, ASparksMusicPlayspace Playspace); // Flags: Event|Protected|BlueprintEvent 0x7FF414DFC280
		void SetupListeners(UGameplayEventRouterComponent EventRouter); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DFC1A0
	};


	// Class PilgrimQuickplayRuntime.BandReplicationGraphNode
	// Inherited from UFortReplicationGraphNode_Custom -> UReplicationGraphNode -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UBandReplicationGraphNode : public UFortReplicationGraphNode_Custom	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.BandReplicationGraphNode");
			return ret;
		}
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStart
	// Inherited from AFortPlayerStart -> APlayerStart -> ANavigationObjectBase -> AActor -> UObject
	// Size: 0x10 (0x310 - 0x300)
	class APilgrimQuickplayPlayerStart : public AFortPlayerStart	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x300(0x8) UNKNOWN PROPERTY
		char Team; // 0x308(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x309(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStart");
			return ret;
		}
	};

}
