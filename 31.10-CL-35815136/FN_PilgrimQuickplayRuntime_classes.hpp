#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PilgrimQuickplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		UEnum* LayoutEnumType; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimGreenRoomLayoutSwitcher");
			return ret;
		}

		void SetLayout(int32_t NewLayout); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9F6C4(relative to base address)
		void OnRep_CurrentLayout(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A9E1A8(relative to base address)
		void OnLayoutChanged(int32_t NewLayout); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CycleLayout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9D40C(relative to base address)
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
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimPawnComponent");
			return ret;
		}

		void SetInteractionEffectsEnabled(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9F634(relative to base address)
		bool GetInteractionEffectsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFB9D68(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x108 (0x200 - 0xF8)
	class UPilgrimPlayspaceComponent_IntroDirector : public UFortPlayspaceComponent	
	{
	public:
		bool bEnableIntroDirector; // 0xF8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		TArray<UFortMontageItemDefinitionBase*> GuitarSpotlights; // 0x100(0x10)
		TArray<UFortMontageItemDefinitionBase*> DrumSpotlights; // 0x110(0x10)
		TArray<UFortMontageItemDefinitionBase*> BassSpotlights; // 0x120(0x10)
		TArray<UFortMontageItemDefinitionBase*> MicSpotlights; // 0x130(0x10)
		TArray<UFortMontageItemDefinitionBase*> KeytarSpotlights; // 0x140(0x10)
		unsigned char UnknownData01_6[0xA0]; // 0x150(0xA0) UNKNOWN PROPERTY
		int32_t SpotlightIndexLock; // 0x1F0(0x4)
		bool bAllowFloatingPawnFixForThisMode; // 0x1F4(0x1)
		unsigned char UnknownData02_7[0xB]; // 0x1F5(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimPlayspaceComponent_IntroDirector");
			return ret;
		}

		void StartPlayerIntro(APlayerState* PlayerState); // Flags: Final|Native|Private|BlueprintCallable|Const, Memory Exec: 0x7FF751A9FAC0(relative to base address)
		void RequestNextMontageForInstrument(ESparksInstrumentType InstrumentType, AFortPlayerPawn* PlayerPawn, int32_t PlayerIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A9E4DC(relative to base address)
		void OnSpotlightMontageLoaded(int32_t PlayerIndex, UAnimMontage* LoadedMontage); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751A9E414(relative to base address)
		bool IsForcePawnLocationAfterIntroEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9E02C(relative to base address)
		bool HasSpotlightMontageLoadFinished(int32_t PlayerIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A9DFA0(relative to base address)
		float GetForcePawnLocationAfterIntroDelaySeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D694(relative to base address)
		float GetFloatingPawnFixIntervalSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D664(relative to base address)
		bool EnqueueSpotlightMontages(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A9D4CC(relative to base address)
		bool EnableFloatingPawnFix(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D464(relative to base address)
		void DebugShowSpotlightTool_Impl(bool bShow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearSpotlightMontageHandles(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A9D330(relative to base address)
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
		UPilgrimPremadeSetlist* SetlistVoteWinner; // 0xC0(0x8)
		int32_t CurrentSetlistIndex; // 0xC8(0x4)
		bool bIsReplayingPreviousSong; // 0xCC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		TMap<int32_t, FPilgrimQuickplaySongResultData> SetlistResultMap; // 0xD0(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x120(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayBandStateComponent");
			return ret;
		}

		void SongReplayingChanged__DelegateSignature(bool bIsReplaying); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerResetSetlistIndex(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9F0B8(relative to base address)
		void ServerAdvanceSetlistIndex(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9F0A4(relative to base address)
		void OnRep_SetlistVoteWinner(UPilgrimPremadeSetlist* PrevSetlist); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A9E314(relative to base address)
		void OnRep_IsReplayingPreviousSong(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A9E260(relative to base address)
		void OnRep_CurrentSetlistIndex(int32_t PrevSetlistIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A9E1C0(relative to base address)
		bool IsReplayingPreviousSong(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9E094(relative to base address)
		TArray GetVotersForSetlist(UPilgrimPremadeSetlist* Setlist); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9DEFC(relative to base address)
		int32_t GetVoteCountForSetlist(UPilgrimPremadeSetlist* Setlist); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9DE60(relative to base address)
		UPilgrimPremadeSetlist GetSetlistVoteWinner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C75D448(relative to base address)
		TArray GetPlayersInBandByController(APlayerController* Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9DA8C(relative to base address)
		TArray GetPlayersInBand(char Team); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D9E8(relative to base address)
		int32_t GetCurrentSetlistLength(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D640(relative to base address)
		int32_t GetCurrentSetlistIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749336438(relative to base address)
		TScriptInterface GetCurrentSetlist(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D60C(relative to base address)
		UPilgrimQuickplayBandStateComponent GetBandState(AActor* ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A9D558(relative to base address)
		bool AreAllPlayersReady(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D28C(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayCameraDataSource
	// Inherited from USparksCameraPluginDataProvider -> UActorComponent -> UObject
	// Size: 0x18 (0x138 - 0x120)
	class UPilgrimQuickplayCameraDataSource : public USparksCameraPluginDataProvider	
	{
	public:
		bool bCutOnMeasuresInsteadOfBeats; // 0x120(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UPilgrimGame*> PilgrimGame; // 0x124(0x8)
		unsigned char UnknownData01_7[0xC]; // 0x12C(0xC) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		float SongResults_TransitionTimeInSeconds; // 0x34(0x4)
		bool SongResults_OverrideSongData; // 0x38(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FPilgrimQuickplaySongResultData SongResults_SongData; // 0x40(0x68)
		bool SongResults_OverrideSetlistResultData; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		TArray<FPilgrimQuickplaySetlistResultData> SongResults_SetlistResultsData; // 0xB0(0x10)
		bool Gameplay_ShowSongStats; // 0xC0(0x1)
		bool SongResults_SetlistChallengeOverrideConsole; // 0xC1(0x1)
		bool SongResults_SetlistChallengeDebug; // 0xC2(0x1)
		bool SongResults_SetlistChallengeFilenameAbsolute; // 0xC3(0x1)
		unsigned char UnknownData03_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FString SongResults_SetlistChallengeJSONDumpFilename; // 0xC8(0x10)
		bool SongResults_SetlistChallengeIncludeHistogramData; // 0xD8(0x1)
		unsigned char UnknownData04_7[0x7]; // 0xD9(0x7) UNKNOWN PROPERTY

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

		void GetEmoteActionBinding(FString EmoteTemplateID, FEmoteActionBinding& OutCreatedEmote); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510E4790(relative to base address)
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
		UPilgrimSongMetadata* SongVote; // 0xC0(0x8)
		UPilgrimPremadeSetlist* SetlistVote; // 0xC8(0x8)
		TMap<int32_t, FPilgrimPersonalBestHistoryRpl> SetlistHighscoreMap; // 0xD0(0x50)
		TMap<int32_t, UPilgrimQuickplaySetlistResultProxyInstance*> SetlistResultMap; // 0x120(0x50)
		float CloseupCameraTime; // 0x170(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		TArray<TScriptInterface> GrantedQuests; // 0x178(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStateComponent");
			return ret;
		}

		void SetSongVote(UPilgrimSongMetadata* PlayerChosenSong); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9FA40(relative to base address)
		void SetSongResultData(FPilgrimQuickplaySongResultData& NewSongResultData); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A9F99C(relative to base address)
		void SetSetlistVote(UPilgrimPremadeSetlist* PlayerChosenSetlist); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9F91C(relative to base address)
		void SetReachedNewHighscore(int32_t TotalScore, int32_t DeltaScore, EPilgrimPersonalBestType BestType); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9F824(relative to base address)
		void SetPerformanceData(FPilgrimQuickplayPlayerPerformanceData& NewPerformanceData); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A9F744(relative to base address)
		void SetHighscore(FPilgrimPersonalBestResultRpl& Highscore, int32_t SetlistIndex, bool bLoaded); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A9F3FC(relative to base address)
		void SetCloseupCameraTime(float TotalTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9F37C(relative to base address)
		void ServerSetHighscore(FPilgrimPersonalBestResultRpl Highscore, int32_t SetlistIndex, bool bLoaded); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF751A9F0CC(relative to base address)
		void Server_ResetDefaultQuests(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF7476407DC(relative to base address)
		void Server_GrantDefaultQuests(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74F0F9DB4(relative to base address)
		void SendToServerPerformanceData(FPilgrimQuickplayPlayerPerformanceData NewPerformanceData); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751A9EF3C(relative to base address)
		void SendToServerAllIntrosFinished(UPilgrimQuickplayState_Intro* IntroState); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751A20BE0(relative to base address)
		void SendToClientsSongResultData(int32_t SetlistIndex, FPilgrimQuickplaySongResultData NewPerformanceData); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF751A9EDC8(relative to base address)
		void SendToClientsResetSetlistResultData(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF74D8BBAE4(relative to base address)
		void SendToClientsPerformanceData(int32_t SetlistIndex, FPilgrimQuickplayPlayerPerformanceData NewPerformanceData); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF751A9EC24(relative to base address)
		void SendHighscoreToServer(FPilgrimPersonalBestResult& Highscore, int32_t SetlistIndex, bool bLoaded); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A9E9C0(relative to base address)
		void ResetSetlistResultData(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A9E9AC(relative to base address)
		void OnRep_SongVote(UPilgrimSongMetadata* PrevSongVote); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A9E394(relative to base address)
		void OnRep_SetlistVote(UPilgrimPremadeSetlist* PrevSetlistVote); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A9E294(relative to base address)
		void MulticastBroadcastNewHighscore(int32_t TotalScore, int32_t DeltaScore, EPilgrimPersonalBestType BestType); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF751A9E0AC(relative to base address)
		UPilgrimSongMetadata GetSongVote(APlayerState* PlayerState); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A9DDCC(relative to base address)
		FPilgrimQuickplaySongResultData GetSongResultData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9DDA0(relative to base address)
		void GetSetlistResultProxies(TArray<UPilgrimQuickplaySetlistResultProxyInstance*>& SetlistProxy); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9DD04(relative to base address)
		FPilgrimQuickplaySetlistResultData GetSetlistResultDataByIndex(int32_t SetlistIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9DC50(relative to base address)
		bool GetReachedNewHighscore(EPilgrimPersonalBestType BestType, int32_t SetlistIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9DB90(relative to base address)
		UPilgrimQuickplayPlayerStateComponent GetPilgrimQuickplayPlayerStateComponent(APlayerState* PlayerState); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A9D95C(relative to base address)
		FPilgrimQuickplayPlayerPerformanceData GetPerformanceData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D930(relative to base address)
		UGameplayStateMachine GetMainStateMachine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D90C(relative to base address)
		bool GetHighscoreResult(FPilgrimPersonalBestResultRpl& OutResult, int32_t SetlistIndex, bool bLoaded); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D6C4(relative to base address)
		UPilgrimSongMetadata GetCurrentSongVote(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C75D448(relative to base address)
		UPilgrimPremadeSetlist GetCurrentSetlistVote(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ED765BC(relative to base address)
		float GetCloseupCameraTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F5C7A3C(relative to base address)
		UPilgrimQuickplayBandStateComponent GetBandState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A9D5E8(relative to base address)
		void ClientMatchRecorded(int32_t SetlistIndex, bool bIsSoloMatch); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF751A9D344(relative to base address)
		void BroadcastEvent_SongResultDataChanged(int32_t SetlistIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A9D2B0(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace
	// Inherited from APilgrimPlayspace -> ASparksMusicPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x40 (0x7D0 - 0x790)
	class APilgrimQuickplayPlayspace : public APilgrimPlayspace	
	{
	public:
		UPilgrimStandinDirector* StandinDirector; // 0x790(0x8)
		UClass* PilgrimQuickplayStateMachineClass; // 0x798(0x8)
		UGameplayStateMachineManager* StateMachineManager; // 0x7A0(0x8)
		UGameplayStateMachine* MainStateMachine; // 0x7A8(0x8)
		UPilgrimQuickplayBandStateComponent* BandState; // 0x7B0(0x8)
		UClass* SparksCameraPluginDataProviderClass; // 0x7B8(0x8)
		USparksCameraPluginDataProvider* CameraDataSource; // 0x7C0(0x8)
		UPilgrimQuickplayPlayspaceComponent_AuraManager* AuraManager; // 0x7C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspace");
			return ret;
		}

		void SetPlayerStateTeamIndex(AFortPlayerStateAthena* PlayerState, int32_t TeamIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AA1500(relative to base address)
		void HandleDirectorStopEvent(FSparksCommonStopCameraDirectorEvent& Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDirectorStartEvent(FSparksCommonStartCameraDirectorEvent& Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDirectorResetEvent(FSparksCommonResetCameraDirectorEvent& Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UPilgrimQuickplayStateMachine GetPilgrimQuickplayStateMachine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0C78(relative to base address)
		bool GetIsSinglePlayerGame(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0BE0(relative to base address)
		EPilgrimQuickplayState GetActivePilgrimStateId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0A74(relative to base address)
		UPilgrimQuickplayStateBase GetActivePilgrimQuickplayState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0A34(relative to base address)
		void ForceActiveCameraDirector(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AA0A20(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_AuraManager
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x140 - 0xF8)
	class UPilgrimQuickplayPlayspaceComponent_AuraManager : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0xF8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_AuraManager");
			return ret;
		}

		void HandleOnMBIFinished(FPilgrimEvent_MBI_Finished& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751AA0E88(relative to base address)
		void HandleOnMaxStreakStateChangedEvent(FPilgrimEvent_Scoring_MaxStreakStateChanged& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751AA0F04(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x110 - 0xF8)
	class UPilgrimQuickplayPlayspaceComponent_PlayerManager : public UFortPlayspaceComponent	
	{
	public:
		TWeakObjectPtr<APlayerState*> LocalPlayerOverride; // 0xF8(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x100(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayspaceComponent_PlayerManager");
			return ret;
		}

		bool ShouldTreatPlayerAsLocalPlayer(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA15B4(relative to base address)
		void SetLocalPlayerOverride(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AA1400(relative to base address)
		APlayerState GetLocalPlayerOverride(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0C04(relative to base address)
		void BP_OnAppResumed(float ElapsedTimeSeconds); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		UFortAbilitySet* AbilitySetForState; // 0x78(0x8)
		TMap<TWeakObjectPtr, FFortAbilitySetHandle> GrantedAbilitySets; // 0x80(0x50)
		UFortInputMappingContext* InputMappingContext; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateBase");
			return ret;
		}

		bool MarkStateDone(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EFD0EC4(relative to base address)
		UPilgrimQuickplayStateMachine GetPilgrimStateMachine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0D24(relative to base address)
		EPilgrimQuickplayState GetPilgrimStateId(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5AD654(relative to base address)
		APilgrimQuickplayPlayspace GetPilgrimPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0C54(relative to base address)
		UGameplayEventRouterComponent GetEventRouter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0B98(relative to base address)
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

		FGameplayTag GetStateTag(EPilgrimQuickplayState& State); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751AA0DE4(relative to base address)
		EPilgrimQuickplayState GetPilgrimState(FGameplayTag& Tag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751AA0C9C(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine
	// Inherited from UGameplayStateMachine -> UGameplayState -> UObject
	// Size: 0x10 (0xD8 - 0xC8)
	class UPilgrimQuickplayStateMachine : public UGameplayStateMachine	
	{
	public:
		TArray<UFortQuestItemDefinition*> GrantedQuests; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayStateMachine");
			return ret;
		}

		void TeleportAllPlayers(FGameplayTagContainer& TeleportTagRequirements); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751AA16B4(relative to base address)
		void PrepareStageForPlayer(AFortPlayerPawn* Pawn, FVector& TeleportLocation, FRotator& TeleportRotation); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPlayerPawnsInPlayspace(TArray<AFortPlayerPawn*>& PlayerPawns); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751AA0D48(relative to base address)
		UGameplayEventRouterComponent GetEventRouter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0BBC(relative to base address)
		void GetDailyQuests(TArray<UFortQuestItemDefinition*>& OutDailyQuests); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0AFC(relative to base address)
		UPilgrimQuickplayStateBase GetActivePilgrimStateObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0AD8(relative to base address)
		EPilgrimQuickplayState GetActivePilgrimStateId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0AB4(relative to base address)
		void CleanUpStageForPlayer(AFortPlayerPawn* Pawn); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0xA0 (0x178 - 0xD8)
	class UPilgrimQuickplayState_Intro : public UPilgrimQuickplayStateBase	
	{
	public:
		FGameplayTagContainer TeleportTagRequirements; // 0xD8(0x20)
		float CameraWaitTime; // 0xF8(0x4)
		unsigned char UnknownData00_7[0x7C]; // 0xFC(0x7C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_Intro");
			return ret;
		}

		void UpdateCameraWaitTime(float NewWaitTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AA176C(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplayState_Loading
	// Inherited from UPilgrimQuickplayStateBase -> UGameplayState -> UObject
	// Size: 0x8 (0xE0 - 0xD8)
	class UPilgrimQuickplayState_Loading : public UPilgrimQuickplayStateBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0xC]; // 0xDC(0xC) UNKNOWN PROPERTY

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
		TArray<UClass*> EffectsToApplyOnTransition; // 0xD8(0x10)
		FGameplayTagContainer TeleportTagRequirements; // 0xE8(0x20)
		unsigned char UnknownData00_7[0x38]; // 0x108(0x38) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0xC]; // 0xDC(0xC) UNKNOWN PROPERTY

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
		UClass* PilgrimMusicBattleInstanceClass; // 0xF8(0x8)
		bool bHaveTriggeredMBIFinished; // 0x100(0x1)
		unsigned char UnknownData00_6[0x1F]; // 0x101(0x1F) UNKNOWN PROPERTY
		bool bCreateSpectatorMBI; // 0x120(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x121(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongGameplay");
			return ret;
		}

		void OnMusicBattleStoppedEarly(EMusicBattleEndReason EndReason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AA1018(relative to base address)
		void OnMusicBattleFinished(EMusicBattleEndReason EndReason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AA0F98(relative to base address)
		TArray GetPilgrimMusicBattleInstances(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AA0C28(relative to base address)
		void BuildSongResultData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AA0A0C(relative to base address)
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
		TSet<TWeakObjectPtr> PlayerList; // 0x160(0x50)
		TSet<TWeakObjectPtr> ReadyPlayers; // 0x1B0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayState_SongResults");
			return ret;
		}

		void ServerSetEndTime(float ServerWorldEndTimeSeconds); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerRecievedPlayPreviousSongFromClient(UPilgrimPlayerControllerComponent* ControllerComponent, EPilgrimStateMachineMessage StateMachineMessage); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AA11A0(relative to base address)
		void OnRep_ServerEndTime(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AA1150(relative to base address)
		void OnPlayerDisconnected(AFortPlayerStateAthena* PlayerState, bool bIsDisconnected); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AA1098(relative to base address)
		void HandleTimerFinished(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74C4A1D4C(relative to base address)
		void GoToNextState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AA0E74(relative to base address)
		void ClientUpdateStateEndTime(float ServerWorldEndTimeSeconds); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UPilgrimQuickplaySuspendHandleComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplaySuspendHandleComponent");
			return ret;
		}

		void ServerSyncHeartbeatMessageReceived(UPilgrimPlayerControllerComponent* PilgrimPC); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751ABEF88(relative to base address)
		void ServerOnTimedInputReceived(UPilgrimPlayerControllerComponent* PilgrimPC, FPilgrimTimedInput& TimedInput); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751ABEEA8(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimStandinDirector
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x228 - 0xF8)
	class UPilgrimStandinDirector : public UFortPlayspaceComponent	
	{
	public:
		TMap<ESparksInstrumentType, UFortWeaponItemDefinition*> InstrumentToWeaponMap; // 0xF8(0x50)
		UClass* AISpawnerData; // 0x148(0x8)
		TArray<FPrimaryAssetId> Emotes; // 0x150(0x10)
		TArray<TWeakObjectPtr> SpawnedStandinPawns; // 0x160(0x10)
		TArray<TWeakObjectPtr> SpawnedStandinStates; // 0x170(0x10)
		unsigned char UnknownData00_7[0xA8]; // 0x180(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimStandinDirector");
			return ret;
		}

		void TeleportSpawnedStandins(TArray<AFortPlayerStart*>& Destinations); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751ABF108(relative to base address)
		void SetupListeners(UGameplayEventRouterComponent* EventRouter); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751ABF008(relative to base address)
		TArray GetStandinStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ABEE68(relative to base address)
		TArray GetStandinPawns(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751ABEE2C(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.PilgrimStandinPawnComponent
	// Inherited from UPilgrimPawnComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UPilgrimStandinPawnComponent : public UPilgrimPawnComponent	
	{
	public:
		FGameplayTag SpawninEffect; // 0xB0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimStandinPawnComponent");
			return ret;
		}

		void StartInstrumentAnimation(APlayerState* PlayerState, ASparksMusicPlayspace* Playspace); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupListeners(UGameplayEventRouterComponent* EventRouter); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751ABF088(relative to base address)
	};


	// Class PilgrimQuickplayRuntime.BandReplicationGraphNode
	// Inherited from UFortReplicationGraphNode_Custom -> UReplicationGraphNode -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UBandReplicationGraphNode : public UFortReplicationGraphNode_Custom	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x300(0x8) UNKNOWN PROPERTY
		char Team; // 0x308(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x309(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayRuntime.PilgrimQuickplayPlayerStart");
			return ret;
		}
	};

}
