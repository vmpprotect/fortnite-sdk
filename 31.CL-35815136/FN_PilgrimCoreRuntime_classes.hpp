#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PilgrimCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PilgrimCoreRuntime.NetworkedMusicClockManager
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x260 (0x300 - 0xA0)
	class UNetworkedMusicClockManager : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x88]; // 0xA0(0x88) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStartSongSyncCountdown; // 0x128(0x10)
		FMulticastInlineDelegate OnBeatEvent; // 0x138(0x10)
		FMulticastInlineDelegate OnBarEvent; // 0x148(0x10)
		UMusicClockComponent* OwnedMusicClockComponent; // 0x158(0x8)
		TWeakObjectPtr<UAudioComponent*> WeakMetasoundPlayer; // 0x160(0x8)
		TWeakObjectPtr<UAudioComponent*> WeakMetasoundMixer; // 0x168(0x8)
		float ServerStartTime; // 0x170(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		FSongTimestampData CurrentSongServerTimestamp; // 0x178(0x48)
		FScalableFloat TimeToStartSyncedClock; // 0x1C0(0x28)
		FTimerHandle ClientLatencyCatchupTimerHandle; // 0x1E8(0x8)
		FTimerHandle ServerTimestampRecordingTimerHandle; // 0x1F0(0x8)
		FScalableFloat ServerTimestampRecordingFrequency; // 0x1F8(0x28)
		FScalableFloat MinDeltaForSeek; // 0x220(0x28)
		FScalableFloat EndCorrectionDelta; // 0x248(0x28)
		FScalableFloat SpeedAdjustmentFactor; // 0x270(0x28)
		float CurrentSpeed; // 0x298(0x4)
		FName MetasoundSpeedParamName; // 0x29C(0x4)
		FName MetasoundSeekParamName; // 0x2A0(0x4)
		FName MetasoundTriggerName; // 0x2A4(0x4)
		FName MetasoundOuputPinName; // 0x2A8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY
		UMetasoundGeneratorHandle* MetasoundPlayerGeneratorHandle; // 0x2B0(0x8)
		UMetasoundParameterPack* MetasoundPlayerSeekParamPack; // 0x2B8(0x8)
		EPilgrimSongPlayMethod PlayMethod; // 0x2C0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x2C1(0x3) UNKNOWN PROPERTY
		FGameplayEventListenerHandle SongLoadedGameplayEventHandle; // 0x2C4(0x1C)
		bool bServerHasReceivedPlaySongRequest; // 0x2E0(0x1)
		unsigned char UnknownData04_7[0x1F]; // 0x2E1(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.NetworkedMusicClockManager");
			return ret;
		}

		void SetClientAudioComponentsToUse(UAudioComponent* InMetasoundPlayer, UAudioComponent* InMetasoundMixer); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A19CAC(relative to base address)
		void PlayServerAuthoritativeSong(UPilgrimSongMetadata* SongToPlay); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnRep_ServerStartTime(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A18B3C(relative to base address)
		void OnRep_CurrentSongServerTimestamp(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A18B28(relative to base address)
		void OnBeat(int32_t BeatNumber, int32_t BeatInBar); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A18A68(relative to base address)
		void OnBar(int32_t BarNumber); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A189D0(relative to base address)
		UMusicClockComponent GetOwnedMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7499B6EF8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgramGuitarTiltOverdriveTrigger
	// Inherited from UInputTrigger -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UPilgramGuitarTiltOverdriveTrigger : public UInputTrigger	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgramGuitarTiltOverdriveTrigger");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBars
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UPilgrimAbilityTask_WaitForBars : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnBarHit; // 0x78(0x10)
		int32_t BarCount; // 0x88(0x4)
		int32_t TargetBar; // 0x8C(0x4)
		int32_t EndAfterHits; // 0x90(0x4)
		int32_t CurrentIteration; // 0x94(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBars");
			return ret;
		}

		UPilgrimAbilityTask_WaitForBars WaitForBars(UGameplayAbility* OwningAbility, int32_t BarsToWaitFor, int32_t LoopFor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A19E00(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBeats
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UPilgrimAbilityTask_WaitForBeats : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnBeatHit; // 0x78(0x10)
		int32_t BeatCount; // 0x88(0x4)
		int32_t TargetBeat; // 0x8C(0x4)
		int32_t EndAfterHits; // 0x90(0x4)
		int32_t CurrentIteration; // 0x94(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForBeats");
			return ret;
		}

		UPilgrimAbilityTask_WaitForBeats WaitForBeats(UGameplayAbility* OwningAbility, int32_t BeatsToWaitFor, int32_t LoopFor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A19F44(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UPilgrimAbilityTask_WaitForSection : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnSectionStarted; // 0x78(0x10)
		FString TargetSectionName; // 0x88(0x10)
		bool bWaitForNextSection; // 0x98(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection");
			return ret;
		}

		UPilgrimAbilityTask_WaitForSection WaitForSection(UGameplayAbility* OwningAbility, bool bShouldWaitForNextSection, FString SectionName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A1A088(relative to base address)
		void OnSectionEvent(FString SectionName, float SectionStartMs, float SectionLengthMs); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A18B50(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimActorPool
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UPilgrimActorPool : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		FPilgrimActorPoolParams ActorPoolParams; // 0x40(0x10)
		TSet<AActor*> AvailableActors; // 0x50(0x50)
		TSet<AActor*> InUseActors; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimActorPool");
			return ret;
		}

		bool TryReturnItem(AActor* ActorToPutBack); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A19D70(relative to base address)
		void ReturnAllWidgets(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A19C98(relative to base address)
		void InitPool(FPilgrimActorPoolParams PilgrimActorPoolParams); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A188B0(relative to base address)
		int32_t GetNumInUseItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A18890(relative to base address)
		int32_t GetNumAvailableItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A18874(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimAnalytics
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class UPilgrimAnalytics : public UPlayspaceComponent	
	{
	public:
		FMusicClockCatchUpData CurrentCatchUpSession; // 0xA0(0x18)
		unsigned char UnknownData00_7[0x90]; // 0xB8(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAnalytics");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0xE8 (0x118 - 0x30)
	class UPilgrimAsyncAction_RequestLeaderboard : public UCancellableAsyncAction	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData00_7[0xC8]; // 0x50(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard");
			return ret;
		}

		UPilgrimAsyncAction_RequestLeaderboard PilgrimRequestLeaderboard(UObject* WorldContextObject, FName SongShortName, FString SpotlightGroup, EPilgrimLeaderboardType LeaderboardType, AFortPlayerController* RequestingPlayer, bool bFriendsOnly, bool bCenteredOnRequestingPlayer, int32_t Page, bool bIsSpotlightCompetition, bool bUseCache); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A18C6C(relative to base address)
		void LeaderboardRequestSuccessDelegate__DelegateSignature(FPilgrimLeaderboardPage ResultPage, FPilgrimLeaderboardRequestParams RequestParams); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LeaderboardRequestFailureDelegate__DelegateSignature(FString Error, FPilgrimLeaderboardRequestParams RequestParams); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x278 (0x2A8 - 0x30)
	class UPilgrimAsyncAction_RequestPersonalBest : public UCancellableAsyncAction	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData00_7[0x258]; // 0x50(0x258) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest");
			return ret;
		}

		UPilgrimAsyncAction_RequestPersonalBest PilgrimRequestPersonalBest(UObject* WorldContextObject, AFortPlayerController* RequestingPlayer, FUniqueNetIdRepl& PlayerAccountId, FName SongShortName, EPilgrimTrackType InstrumentType, int32_t BandSize, int32_t SetlistIndex, bool bUseCache); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A18F70(relative to base address)
		void PersonalBestRequestSuccessDelegate__DelegateSignature(FPilgrimPersonalBestResult PersonalBestResult, FPilgrimPersonalBestParams RequestParams); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PersonalBestRequestFailureDelegate__DelegateSignature(FString Error, FPilgrimPersonalBestParams RequestParams); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0xD0 (0x100 - 0x30)
	class UPilgrimAsyncAction_RequestPlayerFeed : public UCancellableAsyncAction	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData00_7[0xB0]; // 0x50(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed");
			return ret;
		}

		void RequestFeedSuccessDelegate__DelegateSignature(FPilgrimPlayerFeedResult FeedResult, FPilgrimPlayerFeedParams RequestParams); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestFeedFailureDelegate__DelegateSignature(FText Error, FPilgrimPlayerFeedParams RequestParams); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UPilgrimAsyncAction_RequestPlayerFeed PilgrimRequestPlayerFeed(UObject* WorldContextObject, AFortPlayerController* RequestingPlayer, FGameplayTagQuery& SongQuery, FSongShortNameMatcher& SongShortNameMatcher, TArray<EPilgrimLeaderboardType>& Leaderboards, TArray<FUniqueNetIdRepl>& FriendIds, EPilgrimPlayerFeedSortType SortType, bool bAllScores, bool bRequirePlayerScore); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A19594(relative to base address)
	};


	// Class PilgrimCoreRuntime.AutoCalibrationSaveData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAutoCalibrationSaveData : public UObject	
	{
	public:
		float AutoCalibratedLatencyMs; // 0x28(0x4)
		bool bHasAutoCalibrated; // 0x2C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.AutoCalibrationSaveData");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimAutoCalibrator
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UPilgrimAutoCalibrator : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<APlayerState*> OwningPlayerState; // 0x40(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x48(0x18) UNKNOWN PROPERTY
		UAutoCalibrationSaveData* CalibrationSaveData; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAutoCalibrator");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimBeatMarker
	// Inherited from AActor -> UObject
	// Size: 0x68 (0x2F8 - 0x290)
	class APilgrimBeatMarker : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<APilgrimNowBar*> ParentNowBarPtr; // 0x298(0x20)
		TWeakObjectPtr<UPilgrimGame*> ParentGamePtr; // 0x2B8(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x2C0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimBeatMarker");
			return ret;
		}

		void SetupNumLanes(int32_t NumLanes); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlacedOnTrack(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF747E38E94(relative to base address)
		void OnBeatMarkerPassedNowBar(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748BA0AC4(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimTrackItemMgr
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UPilgrimTrackItemMgr : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xA0(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<APilgrimTrack*> Track; // 0xA4(0x8)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UPilgrimActorPool* ItemPool; // 0xB0(0x8)
		TWeakObjectPtr<UPilgrimGame*> PilgrimGame; // 0xB8(0x8)
		unsigned char UnknownData02_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrackItemMgr");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimBeatMarkerTrackItemMgr
	// Inherited from UPilgrimTrackItemMgr -> UActorComponent -> UObject
	// Size: 0x18 (0xF0 - 0xD8)
	class UPilgrimBeatMarkerTrackItemMgr : public UPilgrimTrackItemMgr	
	{
	public:
		TArray<APilgrimBeatMarker*> ActiveBeatMarkers; // 0xD8(0x10)
		unsigned char UnknownData00_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimBeatMarkerTrackItemMgr");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimBeatValidatedAbility
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x88 (0xBC8 - 0xB40)
	class UPilgrimBeatValidatedAbility : public UFortGameplayAbility	
	{
	public:
		FScalableFloat MaxTimeDelta; // 0xB40(0x28)
		FScalableFloat MinClosenessToBeatMsForBonus; // 0xB68(0x28)
		FScalableFloat MinServerClosenessToBeatMsForBonus; // 0xB90(0x28)
		UClass* AbilityToRunForOnBeat; // 0xBB8(0x8)
		UClass* AbilityToRunForOffBeat; // 0xBC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimBeatValidatedAbility");
			return ret;
		}

		void OnBeatAbilityActivated(bool bOnBeat); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimCheatManager");
			return ret;
		}

		void PilgrimResetFTUE(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimClientSettingRecordPartition
	// Inherited from UFortClientSettingRecordPartition -> UObject
	// Size: 0xD8 (0x118 - 0x40)
	class UPilgrimClientSettingRecordPartition : public UFortClientSettingRecordPartition	
	{
	public:
		float TrackSpeedMultiplier; // 0x40(0x4)
		float TrackBackgroundOpacity; // 0x44(0x4)
		bool UseAlternative5LaneTouchLayout; // 0x48(0x1)
		bool bUseGuitarLeftyFlip; // 0x49(0x1)
		bool bUseProColorsForAllParts; // 0x4A(0x1)
		bool bNonProTrackInputButtonVisibility; // 0x4B(0x1)
		bool bProTrackInputButtonVisibility; // 0x4C(0x1)
		bool bEnableAutoCalibration; // 0x4D(0x1)
		bool bEnableVibrationForHittingNotes; // 0x4E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x4F(0x1) UNKNOWN PROPERTY
		int32_t KeyboardAndMouseGeneralPresetIndex; // 0x50(0x4)
		int32_t KeyboardAndMouseExpertPresetIndex; // 0x54(0x4)
		int32_t ControllerGeneralPresetIndex; // 0x58(0x4)
		int32_t ControllerExpertPresetIndex; // 0x5C(0x4)
		UPilgrimPresetConfiguration* PilgrimPresetConfiguration; // 0x60(0x8)
		FString SelectedGeneralControllerPreset; // 0x68(0x10)
		TMap<char, int32_t> SelectedControllerPresetIndices; // 0x78(0x50)
		TMap<char, int32_t> SelectedKeyboardAndMousePresetIndices; // 0xC8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition");
			return ret;
		}

		void SetUseProColorsForAllParts(bool bNewUseProColorsForAllParts); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1BC48(relative to base address)
		void SetUseAlternative5LaneTouchLayout(bool NewUseAlternative5LaneTouchLayout); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1BBBC(relative to base address)
		void SetTrackSpeedMultiplier(float NewMultiplier); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1BB24(relative to base address)
		void SetTrackBackgroundOpacity(float NewOpacity); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1BA8C(relative to base address)
		void SetSelectedGeneralControllerPreset(FString NewSelectedGeneralControllerPreset); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF751A1B970(relative to base address)
		void SetProTrackInputButtonVisibility(bool bNewProTrackInputButtonVisibility); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B8E4(relative to base address)
		void SetNonProTrackInputButtonVisibility(bool bNewNonProTrackInputButtonVisibility); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B858(relative to base address)
		void SetKeyboardAndMouseGeneralPresetIndex(int32_t NewIndex); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B7D8(relative to base address)
		void SetKeyboardAndMouseExpertPresetIndex(int32_t NewIndex); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B758(relative to base address)
		void SetIsGuitarLeftyFlip(bool bNewUseGuitarLeftyFlip); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B6CC(relative to base address)
		void SetEnableVibrationForHittingNotes(bool bNewEnableVibrationForHittingNotes); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B5C0(relative to base address)
		void SetEnableAutoCalibration(bool bNewEnableAutoCalibration); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B534(relative to base address)
		void SetControllerGeneralPresetIndex(int32_t NewIndex); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B4B4(relative to base address)
		void SetControllerExpertPresetIndex(int32_t NewIndex); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1B434(relative to base address)
		bool GetUseProColorsForAllParts(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1AE70(relative to base address)
		bool GetUseAlternative5LaneTouchLayout(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0740C8(relative to base address)
		float GetTrackSpeedMultiplier(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF7496973C8(relative to base address)
		float GetTrackBackgroundOpacity(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7499B6EAC(relative to base address)
		FString GetSelectedGeneralControllerPreset(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF751A1AD94(relative to base address)
		bool GetProTrackInputButtonVisibility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC54FB8(relative to base address)
		bool GetNonProTrackInputButtonVisibility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1ACC0(relative to base address)
		int32_t GetKeyboardAndMouseGeneralPresetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748BA0724(relative to base address)
		int32_t GetKeyboardAndMouseExpertPresetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D18CC(relative to base address)
		bool GetIsGuitarLeftyFlip(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1ACAC(relative to base address)
		bool GetEnableVibrationForHittingNotes(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF751A1AC98(relative to base address)
		bool GetEnableAutoCalibration(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1AC84(relative to base address)
		int32_t GetControllerGeneralPresetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D04(relative to base address)
		int32_t GetControllerExpertPresetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1AC70(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimCoreBandStateComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UPilgrimCoreBandStateComponent : public UPlayspaceComponent	
	{
	public:
		TArray<FName> OwnedSongs; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent");
			return ret;
		}

		void OnRep_OwnedSongs(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		UPilgrimSongMetadata GetSongAtIndex(int32_t Index); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1ADDC(relative to base address)
		UPilgrimSongMetadata GetNextSong(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C4E7F9C(relative to base address)
		UPilgrimSongMetadata GetCurrentSong(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEF81D4(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimCorePlayerStateComponent
	// Inherited from USparksPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPilgrimCorePlayerStateComponent : public USparksPlayerStateComponent	
	{
	public:
		FMulticastInlineDelegate OnPeripheralInputModeChanged; // 0xA8(0x10)
		EPilgrimSongDifficulty SongDifficulty; // 0xB8(0x1)
		EPilgrimTrackType InstrumentChoice; // 0xB9(0x1)
		bool bIsReady; // 0xBA(0x1)
		bool bPregameChoicesLocked; // 0xBB(0x1)
		unsigned char UnknownData00_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent");
			return ret;
		}

		void SetSongDifficulty(EPilgrimSongDifficulty Difficulty); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1BA0C(relative to base address)
		void SetInstrumentChoice(EPilgrimTrackType Instrument); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1B64C(relative to base address)
		void ServerSetIsReady(bool bInIsReady); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1B3B4(relative to base address)
		void OnRep_SongDifficulty(EPilgrimSongDifficulty PrevDifficulty); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1B1E4(relative to base address)
		void OnRep_IsReady(bool bPrevIsReady); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1B118(relative to base address)
		void OnRep_InstrumentChoice(EPilgrimTrackType PrevInstrument); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1B058(relative to base address)
		void OnPeripheralModeChanged__DelegateSignature(EPilgrimPeripheralInputMode PlasticInstrumentInputMode); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EPilgrimTrackType GetTrackTypeForGameplay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519850D8(relative to base address)
		EPilgrimSongDifficulty GetSongDifficulty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1248(relative to base address)
		UPilgrimCorePlayerStateComponent GetPilgrimCorePlayerStateComponent(APlayerState* PlayerState); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A1ACD4(relative to base address)
		bool GetIsReady(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E9D4C48(relative to base address)
		EPilgrimTrackType GetInstrumentChoice(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519850D8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimCore_BPFL
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimCore_BPFL : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimCore_BPFL");
			return ret;
		}

		EPilgrimTrackType SparksInstrumentToPilgrimTrackType(ESparksInstrumentType SparksType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1BDB0(relative to base address)
		bool ShouldUseTouchUIForLocalPlayer(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1BCD4(relative to base address)
		ESparksInstrumentType PilgrimTrackTypeToSparksInstrument(EPilgrimTrackType PilgrimType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1B334(relative to base address)
		FString PilgrimTrackTypeToMidiTrackName(EPilgrimTrackType PilgrimType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1B2A4(relative to base address)
		EPilgrimTrackType MidiTrackNameToPilgrimTrackType(FString MidiTrackName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1AFC8(relative to base address)
		bool IsGuitarPeripheralAllowed(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1AF48(relative to base address)
		bool InstrumentTypesAreEqual(ESparksInstrumentType SparksType, EPilgrimTrackType PilgrimType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1AE84(relative to base address)
		float GetPlatformTimeSeconds(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1AD6C(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimCustomSetlist
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UPilgrimCustomSetlist : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLockedStateChanged; // 0xC0(0x10)
		TArray<FPilgrimCustomSetlistEntry> SetlistEntries; // 0xD0(0x10)
		int32_t MaxSongsPerPlayer; // 0xE0(0x4)
		bool bIsSetlistLocked; // 0xE4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xE5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimCustomSetlist");
			return ret;
		}

		void SetlistLockedStateChangedDelegate__DelegateSignature(UPilgrimCustomSetlist* Setlist, bool bIsLocked); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerSetMaxSongsPerPlayer(int32_t NewMax); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1F148(relative to base address)
		void ServerSetIsSetlistLocked(bool bInIsLocked); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1F0C8(relative to base address)
		void ServerRemoveSongForPlayer(FName SongShortName, APlayerState* Player, bool bRemoveAll); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1EFD0(relative to base address)
		void ServerRemoveSongAtIndex(int32_t Index, FName SongShortName, APlayerState* Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1EED8(relative to base address)
		void ServerRemoveAllSongsForPlayer(APlayerState* Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1EE58(relative to base address)
		void ServerRemoveAllSongs(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1EE44(relative to base address)
		void ServerAddSongForPlayer(FName SongShortName, APlayerState* Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1ED80(relative to base address)
		void OnRep_SetlistEntries(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1E7F8(relative to base address)
		void OnRep_MaxSongsPerPlayer(int32_t PrevMax); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1E750(relative to base address)
		bool HasPlayerAddedSong(FName SongShortName, APlayerState* Player); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E4C8(relative to base address)
		bool HasAnyoneAddedSong(FName SongShortName, APlayerState* OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E3B0(relative to base address)
		TArray GetSongsAddedByPlayer(APlayerState* Player); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E2E4(relative to base address)
		void GetSetlistEntryAtIndex(int32_t Index, FName& OutSongShortName, APlayerState* OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E184(relative to base address)
		int32_t GetMaxSongsPerPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEEC0(relative to base address)
		bool GetIsSetlistLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E088(relative to base address)
		void FindEntriesForSongAndPlayer(FName SongShortName, APlayerState* Player, TArray<int32_t>& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751A1DA58(relative to base address)
		void FindEntriesForSong(FName SongShortName, TArray<int32_t>& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751A1D974(relative to base address)
		void FindEntriesForPlayer(APlayerState* Player, TArray<int32_t>& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751A1D890(relative to base address)
		bool CanAddSongForPlayer(FName SongShortName, APlayerState* Player, EPilgrimCantAddSongReason& OutReason, APlayerState* OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1D490(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimDanceSynchronizerComponent
	// Inherited from USparksDanceSynchronizerComponent -> UMontageBeatSyncComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x158 - 0x120)
	class UPilgrimDanceSynchronizerComponent : public USparksDanceSynchronizerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x120(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimDanceSynchronizerComponent");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UPilgrimDelayUntilTimeBeforeMidiTick : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnFinished; // 0x30(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
		UPilgrimGame* PilgrimGame; // 0x50(0x8)
		UObject* Passthrough; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick");
			return ret;
		}

		void TimerTick(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1F5B4(relative to base address)
		UPilgrimDelayUntilTimeBeforeMidiTick PilgrimDelayUntilTimeBeforeMidiTick(UObject* PassthroughObject, UPilgrimGame* PilgrimGameContext, int32_t MidiTick, float SecondsBeforeTick, ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A1E840(relative to base address)
		void OnPilgrimDelayUntilTimeBeforeMidiTickDelegate__DelegateSignature(UObject* PassthroughObject); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimGame
	// Inherited from UActorComponent -> UObject
	// Size: 0x610 (0x6B0 - 0xA0)
	class UPilgrimGame : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGameScoreUpdated; // 0xB0(0x10)
		FMulticastInlineDelegate OnOverdriveActiveUpdated; // 0xC0(0x10)
		FMulticastInlineDelegate OnSongEnded; // 0xD0(0x10)
		unsigned char UnknownData01_6[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAutoplayUpdated; // 0xF0(0x10)
		FMulticastInlineDelegate OnDisableMissUpdated; // 0x100(0x10)
		int32_t CurrentSeekMs; // 0x110(0x4)
		float JumpMarkerStart; // 0x114(0x4)
		float JumpMarkerEnd; // 0x118(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x11C(0x4) UNKNOWN PROPERTY
		UPilgrimScoringModel* ScoringModel; // 0x120(0x8)
		UPilgrimGameConfig* PilgrimGameConfig; // 0x128(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x130(0x10) UNKNOWN PROPERTY
		UPilgrimPlayerControllerComponent* OwnerControllerComponent; // 0x140(0x8)
		UAudioComponent* MetasoundPlayer; // 0x148(0x8)
		UAudioComponent* MetasoundMixer; // 0x150(0x8)
		UMusicClockComponent* MusicClock; // 0x158(0x8)
		UMetasoundGeneratorHandle* MetasoundPlayerGeneratorHandle; // 0x160(0x8)
		UMetasoundParameterPack* MetasoundPlayerSeekParamPack; // 0x168(0x8)
		UPilgrimMediaStreamer* PilgrimMediaStreamer; // 0x170(0x8)
		APilgrimTrack* MainTrack; // 0x178(0x8)
		USoundBase* MissSound; // 0x180(0x8)
		UPilgrimGameEvaluator* PilgrimGameEvaluator; // 0x188(0x8)
		UPilgrimAutoCalibrator* PilgrimAutoCalibrator; // 0x190(0x8)
		TMap<EPilgrimTrackLane, FPilgrimGameInProgressSustain> InProgressSustains; // 0x198(0x50)
		unsigned char UnknownData04_6[0x3F8]; // 0x1E8(0x3F8) UNKNOWN PROPERTY
		UPilgrimSongData* SongData; // 0x5E0(0x8)
		unsigned char UnknownData05_7[0xC8]; // 0x5E8(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGame");
			return ret;
		}

		void StopSong(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1F5A0(relative to base address)
		void SetLocalPlayer(APlayerController* OwnerPC); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1F350(relative to base address)
		void SetJumpMarkers(int32_t FromMillisecnods, int32_t ToMilliseconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1F290(relative to base address)
		void SetDifficultyAndTrackType(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1F1C8(relative to base address)
		void SeekToTime(int32_t Milliseconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1ED00(relative to base address)
		void ProcessSwing(EPilgrimTrackLane Lane, bool bIsPress); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A1EC3C(relative to base address)
		void PlaySongStreamed(UAudioComponent* InMetasoundPlayer, UAudioComponent* InMetasoundMixer, UMusicClockComponent* InMusicClock, UPilgrimMediaStreamer* InStreamer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1EAFC(relative to base address)
		void PlaySong(UAudioComponent* InMetasoundPlayer, UAudioComponent* InMetasoundMixer, UMusicClockComponent* InMusicClock, UPilgrimSongMetadata* InSong); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1E9BC(relative to base address)
		void PilgrimOverdriveActiveUpdated__DelegateSignature(FPilgrimGameProgress& Score); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PilgrimGameSongEnded__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PilgrimGameScoreUpdated__DelegateSignature(FPilgrimGameProgress& Score); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PilgrimGameDoneProcessingInput__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PilgrimGameDisableMissUpdated__DelegateSignature(bool Enabled); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PilgrimGameAutoplayUpdated__DelegateSignature(bool Enabled); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMusicResumed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1E73C(relative to base address)
		void OnMusicReachedEndOfPlayback(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1E724(relative to base address)
		void OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1E6A8(relative to base address)
		void OnEndedByServer(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1E694(relative to base address)
		void OnControlMappingsRebuilt(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A1E680(relative to base address)
		bool IsTrackUsingProColors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E64C(relative to base address)
		bool IsInputSpecificGemShapesEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E62C(relative to base address)
		bool IsGuitarPeripheralTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E60C(relative to base address)
		bool IsGameEnded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D1B47A0(relative to base address)
		bool IsDisableMissEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E5E8(relative to base address)
		bool IsAutoplayEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E5C4(relative to base address)
		float GetTotalSecondsSinceGameEnd(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E388(relative to base address)
		float GetSongLengthMs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E2C4(relative to base address)
		EPilgrimTrackType GetSelectedTrackType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E16C(relative to base address)
		EPilgrimSongDifficulty GetSelectedDifficulty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EBBA420(relative to base address)
		int32_t GetNumLanes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74ED4CB8C(relative to base address)
		UMusicClockComponent GetMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7499B6EF8(relative to base address)
		APilgrimTrack GetMainTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C4C57D8(relative to base address)
		APlayerController GetLocalPlayerController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E148(relative to base address)
		FKey GetKeyBoundToLane(EPilgrimTrackLane Lane); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E0A0(relative to base address)
		FName GetInputNameForLane(EPilgrimTrackLane Lane); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1E000(relative to base address)
		float GetHitOffsetAverage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1DFE8(relative to base address)
		bool GetGemBreakForTrackDifficulty(EPilgrimTrackType Track, EPilgrimSongDifficulty Difficulty, FPilgrimGemBreak& FoundBreak, float& BarsLeftInBreak, FPilgrimGemBreak& NextBreak, float& BarsTillNextBreak); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1DD58(relative to base address)
		FPilgrimGameConfigSettings GetGameConfigSettings(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A1DD3C(relative to base address)
		float GetCurrentSongTick(ECalibratedMusicTimebase InTimebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1DCA4(relative to base address)
		float GetCurrentSongMs(ECalibratedMusicTimebase InTimebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1DC14(relative to base address)
		float GetCurrentODValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1DBE8(relative to base address)
		FPilgrimSongMeasurePosition GetCurrentMeasureBeatTick(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A1DB70(relative to base address)
		void EndGame(bool bFadeOut, float FadeOutDurationSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1D7CC(relative to base address)
		void CheatSetPerformanceData(FPilgrimCheatPerformanceArgument& PerformanceArgument); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A1D734(relative to base address)
		void CheatSetJumpMarkers(FString FromTime, FString ToTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1D634(relative to base address)
		void CheatEndSong(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1D604(relative to base address)
		void ApplySettingsFromConfig(UPilgrimGameConfig* GameConfig); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1D2A0(relative to base address)
		void AddTrack(APilgrimTrack* Track); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A1D0D8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimGameConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x3E8 (0x418 - 0x30)
	class UPilgrimGameConfig : public UPrimaryDataAsset	
	{
	public:
		FPilgrimSongSettings SongSettings; // 0x30(0x10)
		FPilgrimGameConfigSettings ConfigSettings; // 0x40(0x348)
		USoundBase* MissSound; // 0x388(0x8)
		float MaxHp; // 0x390(0x4)
		float DamagePerHit; // 0x394(0x4)
		TMap<EFortRarity, float> WeaponRarityToNoteDamage; // 0x398(0x50)
		TArray<FPilgrimStreakInfo> StreakDefinitions; // 0x3E8(0x10)
		TArray<UAnimBoneCompressionSettings*> SideloadLipsyncAnim_BoneCompressionSettings; // 0x3F8(0x10)
		TArray<UAnimCurveCompressionSettings*> SideloadLipsyncAnim_CurveCompressionSettings; // 0x408(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGameConfig");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimInstrumentConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xB8 (0xE8 - 0x30)
	class UPilgrimInstrumentConfig : public UPrimaryDataAsset	
	{
	public:
		TArray<FPilgrimScoreMultiplierInfo> ScoreMultiplierDefinitions; // 0x30(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
		TMap<EPilgrimSongDifficulty, FStarPercentageThresholds> IndividualStarPercentageThresholds; // 0x48(0x50)
		TMap<EPilgrimSongDifficulty, float> BaseGemScoreValue; // 0x98(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimInstrumentConfig");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimGameDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UPilgrimGameDeveloperSettings : public UDeveloperSettings	
	{
	public:
		FPilgrimSongSettings SongOverrides; // 0x30(0x10)
		bool bEnforceSongEntitlements; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGameDeveloperSettings");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimGameUserSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPilgrimGameUserSettings : public UObject	
	{
	public:
		EPilgrimSongDifficulty SongDifficulty; // 0x28(0x1)
		EPilgrimTrackType SelectedInstrument; // 0x29(0x1)
		bool bHasSeenFTUEMainStage; // 0x2A(0x1)
		bool bHasSeenFTUEBattleStage; // 0x2B(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGameUserSettings");
			return ret;
		}

		void SetSongDifficulty(EPilgrimSongDifficulty NewDifficulty); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A20DF0(relative to base address)
		void SetSelectedInstrument(EPilgrimTrackType NewInstrument); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A20D6C(relative to base address)
		void SetHasSeenFTUEMainStage(bool NewHasSeenFTUEMainStage); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF751A20CE8(relative to base address)
		void SetHasSeenFTUEBattleStage(bool NewHasSeenFTUEBattleStage); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF751A20C64(relative to base address)
		EPilgrimSongDifficulty GetSongDifficulty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1E6C(relative to base address)
		EPilgrimTrackType GetSelectedInstrument(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A20BA8(relative to base address)
		bool GetHasSeenFTUEMainStage(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A20A68(relative to base address)
		bool GetHasSeenFTUEBattleStage(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A20A54(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimGem
	// Inherited from AActor -> UObject
	// Size: 0x88 (0x318 - 0x290)
	class APilgrimGem : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGemSmashFinished; // 0x298(0x10)
		FMulticastInlineDelegate OnGemEnteredSlopWindow; // 0x2A8(0x10)
		FMulticastInlineDelegate OnGemExitedSlopWindow; // 0x2B8(0x10)
		TWeakObjectPtr<APilgrimGemSmasher*> ParentSmasherPtr; // 0x2C8(0x8)
		TWeakObjectPtr<UPilgrimGame*> ParentGamePtr; // 0x2D0(0x8)
		APilgrimTrackSustain* RelatedSustain; // 0x2D8(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x2E0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGem");
			return ret;
		}

		void UpdateGemInput(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A20E74(relative to base address)
		void OnPilgrimGemEvent__DelegateSignature(APilgrimGem* Gem); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGemSmashed(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748BA0AC4(relative to base address)
		void OnGemPassed(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF747E38E94(relative to base address)
		void OnGemOverdriveChanged(bool bIsOverdrive); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGemInputUpdated(FKey BoundKey); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGemInit(FTrackItemInfo& Gem); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalibrationDebugSet(bool bDebugEnabled, FTrackItemInfo& Gem, TArray<UPrimitiveComponent*>& OutDebugPrimitives); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsOverdriveGem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E773C(relative to base address)
		EPilgrimTrackLane GetLane(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A20A7C(relative to base address)
		void FinishGemSmash(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A202EC(relative to base address)
		bool AllowHitByInput(bool bIsPressInput, EPilgrimTrackLane Lane); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A20208(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimGemAnalyzer
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x138 (0x1D8 - 0xA0)
	class UPilgrimGemAnalyzer : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGameplayEventStarted; // 0xA8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		TMap<FPilgrimDifficultyTrackTypePair, FPilgrimGemDensityDataArray> SongSectionGemDensityDataMap; // 0xC0(0x50)
		TMap<FPilgrimDifficultyTrackTypePair, FPilgrimGemDensityDataArray> GameplaySectionGemDensityDataMap; // 0x110(0x50)
		unsigned char UnknownData02_6[0x50]; // 0x160(0x50) UNKNOWN PROPERTY
		FScalableFloat MinimumEmptyBarsForBreak; // 0x1B0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGemAnalyzer");
			return ret;
		}

		UPilgrimSongData GetSongData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A20BBC(relative to base address)
		UPilgrimSongData GetPilgrimSongData(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A20B14(relative to base address)
		UPilgrimGemAnalyzer GetPilgrimGemAnalyzer(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A20A94(relative to base address)
		FPilgrimGemDensityData GetGemDensityDataForSongSection(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, int32_t SectionIndexToFind); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A20938(relative to base address)
		FPilgrimGemDensityData GetGemDensityDataForGameplaySection(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, int32_t SectionIndexToFind); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A2081C(relative to base address)
		void GetGemDensityDataForAllSongSections(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, TArray<FPilgrimGemDensityData>& OutGemDensityData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A20704(relative to base address)
		void GetGemDensityDataForAllGameplaySections(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, TArray<FPilgrimGemDensityData>& OutGemDensityData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A205EC(relative to base address)
		void GetGemBreaks(EPilgrimTrackType TrackType, EPilgrimSongDifficulty Difficulty, TArray<FPilgrimGemBreak>& OutGemBreaks); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A204D4(relative to base address)
		bool GetGemBreakForTrackDifficultyMs(EPilgrimTrackType Track, EPilgrimSongDifficulty Difficulty, float SongMs, FPilgrimGemBreak& FoundBreak, FPilgrimGemBreak& NextBreak); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A20318(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimGemBreakListener
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UPilgrimGemBreakListener : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		AActor* ForActor; // 0x38(0x8)
		EPilgrimSongDifficulty Difficulty; // 0x40(0x1)
		EPilgrimTrackType TrackType; // 0x41(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x42(0x2) UNKNOWN PROPERTY
		FPilgrimGemBreak InBreak; // 0x44(0x24)
		bool bIsLocalPlayer; // 0x68(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		FPilgrimGemBreak LastPendingGemBreak; // 0x6C(0x24)
		float LastProcessedSongMs; // 0x90(0x4)
		TWeakObjectPtr<UPilgrimSongData*> SongDataWeak; // 0x94(0x8)
		bool bInitialized; // 0x9C(0x1)
		unsigned char UnknownData03_7[0x23]; // 0x9D(0x23) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGemBreakListener");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimGemSmasher
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class APilgrimGemSmasher : public AActor	
	{
	public:
		USplineComponent* GemSplinePath; // 0x290(0x8)
		float SplineStartInputKey; // 0x298(0x4)
		float SplineOriginInputKey; // 0x29C(0x4)
		float SplineEndInputKey; // 0x2A0(0x4)
		TWeakObjectPtr<UPilgrimGame*> PilgrimGame; // 0x2A4(0x8)
		unsigned char UnknownData00_7[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGemSmasher");
			return ret;
		}

		void OverdriveFailedDuringSustainHold(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPilgrimGameSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputUpdated(FKey BoundKey); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputReleased(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748BA0AC4(relative to base address)
		void OnInputPressed(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF747E38E94(relative to base address)
		void EndSustainHoldEffect(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeginSustainHoldEffect(bool bIsOverdrive); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimGemTrackItemMgr
	// Inherited from UPilgrimTrackItemMgr -> UActorComponent -> UObject
	// Size: 0xB8 (0x190 - 0xD8)
	class UPilgrimGemTrackItemMgr : public UPilgrimTrackItemMgr	
	{
	public:
		TMap<FPilgrimTrackItemKey, APilgrimGem*> ActiveGemsMap; // 0xD8(0x50)
		TArray<APilgrimGem*> ActiveGems; // 0x128(0x10)
		TSet<APilgrimGem*> GemsInSlopWindow; // 0x138(0x50)
		UPilgrimSustainTrackItemMgr* SustainTrackItemMgr; // 0x188(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGemTrackItemMgr");
			return ret;
		}

		void OnGemSmashFinished(APilgrimGem* Gem); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A20BE0(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimInputConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xC0 (0xF0 - 0x30)
	class UPilgrimInputConfig : public UPrimaryDataAsset	
	{
	public:
		TMap<UInputAction*, EPilgrimTrackLane> InputActionToPilgrimLanePress; // 0x30(0x50)
		TMap<UInputAction*, EPilgrimTrackLane> InputActionToPilgrimLaneRelease; // 0x80(0x50)
		UInputAction* OverdriveInputAction; // 0xD0(0x8)
		UInputAction* Overdrive5LaneInputAction; // 0xD8(0x8)
		UInputAction* GuitarStrumInputAction; // 0xE0(0x8)
		UInputAction* Modulate; // 0xE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimInputConfig");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimLeaderboardLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimLeaderboardLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimLeaderboardLibrary");
			return ret;
		}

		EPilgrimLeaderboardType SoloLeaderboardTypeFromInstrument(EPilgrimTrackType Instrument); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A26290(relative to base address)
		FString LeaderboardTypeToString(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A25B68(relative to base address)
		EPilgrimLeaderboardType LeaderboardTypeFromString(FString LeaderboardString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A25AD8(relative to base address)
		bool IsSoloLeaderboard(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A25A54(relative to base address)
		bool IsBandLeaderboard(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A259D0(relative to base address)
		EPilgrimTrackType InstrumentFromSoloLeaderboardType(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A25934(relative to base address)
		EPilgrimTrackType GetInstrumentFromGameplayTag(FGameplayTag& InstrumentGametag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A255E0(relative to base address)
		FGameplayTag GetGameplayTagFromInstrument(EPilgrimTrackType Instrument); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A25510(relative to base address)
		int32_t BandSizeFromLeaderboardType(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A24EF0(relative to base address)
		EPilgrimLeaderboardType BandLeaderboardTypeFromSize(int32_t Size); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A24E74(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimLeaderboardManager
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x4A8 (0x548 - 0xA0)
	class UPilgrimLeaderboardManager : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY
		TMap<uint32_t, UPilgrimRequestFriendScoreWrapper*> RequestCacheWrapperMap; // 0x100(0x50)
		unsigned char UnknownData01_7[0x3F8]; // 0x150(0x3F8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimLeaderboardManager");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UPilgrimLeaderboardPlayerComponent : public UControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnFriendsSurpassed; // 0xA0(0x10)
		FMulticastInlineDelegate OnBandFriendLeaderboardOptionChanged; // 0xB0(0x10)
		bool bEnableBandFriendLeaderboardOption : 1; // 0xC0:0(0x1)
		unsigned char UnknownData00_5[0xE7]; // 0xC1(0xE7) UNKNOWN PROPERTY
		float FriendPopupTimeSeconds; // 0x1A8(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x1AC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent");
			return ret;
		}

		void SetFriendFeedCache(FPilgrimPlayerFeedResult& FeedResult); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A261EC(relative to base address)
		void SetCurrentSetlistInfo(FName SongShortName, EPilgrimTrackType Instrument); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A26124(relative to base address)
		void ServerRequestSpotlightCompetitions(FPilgrimSpotlightCompetitionParams Params, int32_t RequestID); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF751A25F30(relative to base address)
		void ServerCachePlayerFriendsHistory(FPilgrimPlayerHistoryParams HistoryParams, TArray<FUniqueNetIdRepl> FriendAccountIds, int32_t RequestID); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF751A25C28(relative to base address)
		void OnRep_ChangedBandFriendLeaderboardOption(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A25BF0(relative to base address)
		void OnFriendsSurpassed__DelegateSignature(FPilgrimPlayerFeedResultEntry HighestFriendEntry, int32_t TotalFriendsSurpassed); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBandFriendLeaderboardOptionChanged__DelegateSignature(bool bOptionEnabled); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsBandFriendLeaderboardEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A259B4(relative to base address)
		void GetSpotlightCompetitions(FPilgrimGetSpotlightParams& SpotlightParams, TArray<FPilgrimSpotlightCompetition>& OutCompetitions); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2582C(relative to base address)
		void GetPostMatchFriendRankAndDelta(int32_t FinalScore, int32_t& OutRank, int32_t& OutDelta); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A25668(relative to base address)
		void ClientRequestSpotlightCompetitionsComplete(FPilgrimSpotlightCompetitionParams Params, TArray<FPilgrimSpotlightCompetition> SpotlightCompetitions, int32_t RequestID); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF751A25250(relative to base address)
		void ClientCachePlayerFriendsHistoryComplete(FPilgrimPlayerHistoryParams HistoryParams, TArray<FPilgrimPlayerHistoryResult> Results, int32_t RequestID); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF751A24F70(relative to base address)
		void CheckPlayerScoreForFriendSurpasser(int32_t CurrentScore); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EBF7478(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimMediaStreamer
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UPilgrimMediaStreamer : public UActorComponent	
	{
	public:
		UStemConfiguration* BusStemConfiguration; // 0xA0(0x8)
		UPilgrimSongMetadata* Song; // 0xA8(0x8)
		UPilgrimSongMetadata* PendingSong; // 0xB0(0x8)
		UFortBaseStreamingVideo* FortBaseStreaming; // 0xB8(0x8)
		UStemmedMediaStreamAsset* StemmedMediaStreamAsset; // 0xC0(0x8)
		UMidiFile* MidiFile; // 0xC8(0x8)
		FMulticastInlineDelegate OnStreamerPrepared; // 0xD0(0x10)
		EPilgrimStreamerStatus StreamingStatus; // 0xE0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		USkeleton* LipSyncSkeleton; // 0xE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimMediaStreamer");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A277F0(relative to base address)
		void PrepareSong(UPilgrimSongMetadata* InSong); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2767C(relative to base address)
		void PlaySong(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A27668(relative to base address)
		void OnVideoSuccess(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A27654(relative to base address)
		void OnVideoOpenTimeout(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A275A4(relative to base address)
		void OnVideoOpenFailed(FString FailedUrl); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A27508(relative to base address)
		void OnVideoOpened(FString OpenedUrl); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A275B8(relative to base address)
		void OnVideoError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A27488(relative to base address)
		void OnVideoClosed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A27474(relative to base address)
		void OnStreamerPreparedEvent__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSongDataDownloaded(UCatalogData* CatalogData, bool bSuccess); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A273AC(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimNowBar
	// Inherited from AActor -> UObject
	// Size: 0x60 (0x2F0 - 0x290)
	class APilgrimNowBar : public AActor	
	{
	public:
		USplineComponent* BeatMarkerSplinePath; // 0x290(0x8)
		TMap<EPilgrimTrackLane, APilgrimGemSmasher*> LaneToSmasherMap; // 0x298(0x50)
		TWeakObjectPtr<UPilgrimGame*> PilgrimGame; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimNowBar");
			return ret;
		}

		void SetGemSmasher(EPilgrimTrackLane Lane, APilgrimGemSmasher* Smasher); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A276FC(relative to base address)
		void OnPilgrimGameSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimObjectiveProcessorBase
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimObjectiveProcessorBase : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimObjectiveProcessorBase");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimObjectiveProcessor_AccumulateStars
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimObjectiveProcessor_AccumulateStars : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_AccumulateStars");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimObjectiveProcessor_Note
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimObjectiveProcessor_Note : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_Note");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimObjectiveProcessor_OverdriveComplete
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimObjectiveProcessor_OverdriveComplete : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_OverdriveComplete");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimObjectiveProcessor_ScoreEvent
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimObjectiveProcessor_ScoreEvent : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_ScoreEvent");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimObjectiveProcessor_SetlistComplete
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimObjectiveProcessor_SetlistComplete : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SetlistComplete");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimObjectiveProcessor_SongCompleted
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimObjectiveProcessor_SongCompleted : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SongCompleted");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimObjectiveProcessor_SongStarted
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimObjectiveProcessor_SongStarted : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimObjectiveProcessor_SongStarted");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimPartitionInitializer
	// Inherited from UFortClientSettingRecordPartitionInitializer -> UObject
	// Size: 0x40 (0xB0 - 0x70)
	class UPilgrimPartitionInitializer : public UFortClientSettingRecordPartitionInitializer	
	{
	public:
		TWeakObjectPtr<UClass*> PilgrimPresetSelectorClass; // 0x70(0x20)
		TWeakObjectPtr<UPilgrimPresetConfiguration*> PilgrimPresetConfiguration; // 0x90(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPartitionInitializer");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UPilgrimPerformanceTrackerComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TMap<EPilgrimTrackLane, FPilgrimPerformanceTrackerData> SongPerformanceData; // 0xA8(0x50)
		UPilgrimSongMetadata* SongMetaData; // 0xF8(0x8)
		APilgrimTrack* MainTrack; // 0x100(0x8)
		UPilgrimGame* PilgrimGame; // 0x108(0x8)
		FGameplayEventListenerHandle OverdriveActiveEventHandle; // 0x110(0x1C)
		int32_t MaxStreak; // 0x12C(0x4)
		int32_t CurrentStreak; // 0x130(0x4)
		float TimeInOverdriveMs; // 0x134(0x4)
		bool InOverdrive; // 0x138(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x139(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent");
			return ret;
		}

		void HandleOverdriveActiveChangedEvent(FPilgrimEvent_Scoring_OverdriveActiveChanged& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751A29630(relative to base address)
		void HandleOnSongEnded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A2961C(relative to base address)
		float GetTotalDeviation(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A29194(relative to base address)
		float GetSampleDeviation(TArray<float>& Samples, bool IsPopulation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28F8C(relative to base address)
		float GetSampleAverage(TArray<float>& Samples); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28EB0(relative to base address)
		FPilgrimEvent_Scoring_PerformanceDataResult GetResultData(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28D8C(relative to base address)
		TArray GetLaneOffsets(EPilgrimTrackLane Lane, ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28C14(relative to base address)
		float GetAverage(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28B08(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimPerformanceTrackerSaveData
	// Inherited from USaveGame -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UPilgrimPerformanceTrackerSaveData : public USaveGame	
	{
	public:
		TMap<EPilgrimTrackLane, FPilgrimPerformanceTrackerData> SongPerformanceData; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerSaveData");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimPlayerControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x2B0 (0x350 - 0xA0)
	class UPilgrimPlayerControllerComponent : public UControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnServerTimedInputReceived; // 0xA0(0x10)
		FMulticastInlineDelegate OnServerSyncHeartbeatMessageReceived; // 0xB0(0x10)
		FMulticastInlineDelegate OnActivateInputPreset; // 0xC0(0x10)
		FMulticastInlineDelegate OnDesiredInputPresetChanged; // 0xD0(0x10)
		FMulticastInlineDelegate OnInputSettingsChanged; // 0xE0(0x10)
		FMulticastInlineDelegate OnMusicBattleClientUpdateReceived; // 0xF0(0x10)
		FMulticastInlineDelegate OnStateMachineMessageReceived; // 0x100(0x10)
		UDataTable* DefaultUnbindsDataTable; // 0x110(0x8)
		UInputAction* CycleInputsInputAction; // 0x118(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		UInputAction* CycleLanesInputAction; // 0x128(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x130(0x8) UNKNOWN PROPERTY
		UInputAction* EmotePickerInputAction; // 0x138(0x8)
		TMap<char, UFortInputMappingContext*> FallbackKeyboardLaneInputMappingConfigs; // 0x140(0x50)
		TMap<char, UFortInputMappingContext*> FallbackControllerLaneInputMappingConfigs; // 0x190(0x50)
		UFortInputMappingContext* KeyboardAsPeripheralGuitarBeatmatchIMC; // 0x1E0(0x8)
		UFortInputMappingContext* GamepadAsPeripheralGuitarBeatmatchIMC; // 0x1E8(0x8)
		UFortInputMappingContext* PeripheralGuitarBeatmatchIMC; // 0x1F0(0x8)
		UFortInputMappingContext* PeripheralGuitarBeatmatchIMC_NonPro4Lanes; // 0x1F8(0x8)
		TMap<char, FPilgrimLaneInputMappingConfig> LaneInputMappingConfigs; // 0x200(0x50)
		FPilgrimTouchBrushesMappingConfig TouchBrushesConfig; // 0x250(0x10)
		char SelectedNumInputLanes; // 0x260(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x261(0x7) UNKNOWN PROPERTY
		UFortInputMappingContext* SelectedPCBeatmatchIMC; // 0x268(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x270(0x8) UNKNOWN PROPERTY
		UFortInputMappingContext* SelectedConsoleBeatmatchIMC; // 0x278(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x280(0x8) UNKNOWN PROPERTY
		UFortInputMappingContext* SelectedPeripheralBeatmatchIMC; // 0x288(0x8)
		unsigned char UnknownData05_6[0x50]; // 0x290(0x50) UNKNOWN PROPERTY
		UPilgrimGameUserSettings* PilgrimGameUserSettings; // 0x2E0(0x8)
		TWeakObjectPtr<UPilgrimPresetConfiguration*> PilgrimPresetConfiguration; // 0x2E8(0x8)
		unsigned char UnknownData06_6[0x50]; // 0x2F0(0x50) UNKNOWN PROPERTY
		TWeakObjectPtr<UPilgrimGame*> ClientPilgrimGame; // 0x340(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x348(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent");
			return ret;
		}

		void Solo_SendRequestToReplayPreviousSong(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A29D74(relative to base address)
		void Solo_SendRequestToPlayNextSong(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A29D60(relative to base address)
		void Solo_SendRequestToLeaveStage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A29D4C(relative to base address)
		void SetNumInputLanes(char NumLanes); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A29CCC(relative to base address)
		void SetDesiredInputMappingContext(UFortInputMappingContext* NewContext, EHardwareDevicePrimaryType DeviceType, bool bShouldUpdateSettings); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A29BD0(relative to base address)
		void ServerSendTimedInput(FPilgrimTimedInput TimedInput); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF751A29A68(relative to base address)
		void ServerSendSyncHeartbeatMessage(); // Flags: Net|Native|Event|Protected|NetServer, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void ServerHandleUpdateMusicBattle(EMusicBattleClientUpdate MusicBattleUpdate); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF751A299CC(relative to base address)
		void ServerHandleStateMachineRequest(EPilgrimStateMachineMessage StateMachineMessage); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF750F6A1FC(relative to base address)
		void Server_RequestClientCloseEmotePicker(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A29BBC(relative to base address)
		void SendUpdateToMusicBattle(EMusicBattleClientUpdate MusicBattleUpdate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2994C(relative to base address)
		void SendRequestToStopAndSkipPostGame(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A29938(relative to base address)
		void SendRequestToRestartSong(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A29924(relative to base address)
		void OnServerTimedInputReceived__DelegateSignature(UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimTimedInput& TimedInput); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnServerSyncHeartbeatMessageReceived__DelegateSignature(UPilgrimPlayerControllerComponent* PlayerControllerComponent); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerSentStateMachineMessage__DelegateSignature(UPilgrimPlayerControllerComponent* PlayerControllerComponent, EPilgrimStateMachineMessage StateMachineMessage); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPilgrimGameStart(UPilgrimGame* PilgrimGame); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF751A298A0(relative to base address)
		void OnPilgrimGameEnd(UPilgrimGame* PilgrimGame); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74FF645D4(relative to base address)
		void OnMusicBattleClientUpdateReceived__DelegateSignature(UPilgrimPlayerControllerComponent* PlayerControllerComponent, EMusicBattleClientUpdate MusicBattleUpdate); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputSettingsChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEmotePicker(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2988C(relative to base address)
		void OnAutoRunEnabledChange(bool bAutoRunEnabled); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A2980C(relative to base address)
		void Multiplayer_SendRequestToLeaveStage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A297F8(relative to base address)
		void LoadInputConfigurationFromPartition(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A297E4(relative to base address)
		bool IsUsingGamepad(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A297C0(relative to base address)
		bool IsLocallyControlled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2979C(relative to base address)
		bool IsGamepadVibrationOnGemSmashEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A29748(relative to base address)
		void InputPresetEvent__DelegateSignature(AFortPlayerController* FortPlayerController, UFortInputMappingContext* InputMappingContext); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasConnectedPeripheral(EPilgrimPeripheralInputMode Peripheral); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A296C0(relative to base address)
		void HandleOnInputDeviceChanged(FPlatformUserId UserId, FInputDeviceId DeviceID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A2944C(relative to base address)
		bool GetTouchBrushForInputAction(FSlateBrush& OutBrush, UInputAction* InputAction); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A29224(relative to base address)
		UFortInputMappingContext GetSelectedPreset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A29170(relative to base address)
		UFortInputMappingContext GetSelectedPCBeamatchInputMappingContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A29158(relative to base address)
		UFortInputMappingContext GetSelectedConsoleBeamatchInputMappingContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A29140(relative to base address)
		UPilgrimGameUserSettings GetPilgrimGameUserSettings(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A28D68(relative to base address)
		UPilgrimClientSettingRecordPartition GetPilgrimClientSettingRecordPartition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28D44(relative to base address)
		int32_t GetNumRelevantInputPresets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28D20(relative to base address)
		UFortInputMappingContext GetLastSelectedPreset(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28CFC(relative to base address)
		bool GetIsCurrentDeviceValidForTrackType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A28BF0(relative to base address)
		bool GetIsCurrentDevicePeripheral(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A28BD4(relative to base address)
		float GetHoldSecondsToSwitchNumLanes(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74EBF5A94(relative to base address)
		int32_t GetCurrentPresetIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28BB0(relative to base address)
		EPilgrimPeripheralInputMode GetCurrentDevicePeripheralType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28B98(relative to base address)
		UFortInputMappingContext FindFirstPresetMatchingCurrentKeybinds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A28AE4(relative to base address)
		void DeactivateInputPreset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A28AD0(relative to base address)
		void CycleSelectedPreset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A28ABC(relative to base address)
		void CycleSelectedNumInputLanes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A28AA8(relative to base address)
		void ClientUseOverdriveItem(float OverdriveAmount, bool bDeployImmediately); // Flags: Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable, Memory Exec: 0x7FF751A289DC(relative to base address)
		void ClientDrainOD(); // Flags: Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable, Memory Exec: 0x7FF74D8BB7F8(relative to base address)
		void Client_CloseEmotePicker(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF749483DBC(relative to base address)
		void CheckConnectedPeripherals(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A289C8(relative to base address)
		bool AreSelectedInputMappingContextsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A289A4(relative to base address)
		void ActivateSelectedInputMappingContexts(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A28990(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimPlayspace
	// Inherited from ASparksMusicPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x40 (0x790 - 0x750)
	class APilgrimPlayspace : public ASparksMusicPlayspace	
	{
	public:
		TArray<APilgrimMusicBattleInstance*> PilgrimMusicBattleInstances; // 0x750(0x10)
		UNetworkedMusicClockManager* MusicClockManager; // 0x760(0x8)
		UPilgrimPlayspaceComponent_SongPreloader* SongPreloader; // 0x768(0x8)
		UPilgrimMediaStreamer* MediaStreamer; // 0x770(0x8)
		UPilgrimGemAnalyzer* GemAnalyzer; // 0x778(0x8)
		UPilgrimPlayspaceComponent_LipSyncAssetManager* PilgrimLipSyncManager; // 0x780(0x8)
		UPilgrimGameConfig* PilgrimGameConfig; // 0x788(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPlayspace");
			return ret;
		}

		UPilgrimGame TryGetPilgrimGameForTeam(int32_t TeamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2C368(relative to base address)
		UPilgrimGame TryGetPilgrimGameForPlayer(AController* Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2C270(relative to base address)
		APilgrimMusicBattleInstance TryGetMusicBattleInstanceForTeam(int32_t Team); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2C1E4(relative to base address)
		bool HasAnotherSongToPlay(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2BFA0(relative to base address)
		TArray GetStandinPlayerStates(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2BF34(relative to base address)
		TArray GetStandinPlayerPawns(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2BEF4(relative to base address)
		UPilgrimGame GetPilgrimGameForTeam(int32_t TeamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2BC94(relative to base address)
		UNetworkedMusicClockManager GetNetworkedMusicClockManager(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A2BC14(relative to base address)
		UMusicClockComponent GetMusicClock(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A2BB94(relative to base address)
		APilgrimMusicBattleInstance GetMusicBattleInstanceForTeam(int32_t Team); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2BB08(relative to base address)
		APilgrimMusicBattleInstance GetMusicBattleInstanceForPlayer(AController* Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2BA78(relative to base address)
		UPilgrimGameConfig GetConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2B53C(relative to base address)
		TArray GetAllMusicBattleInstances(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2B520(relative to base address)
		void ClearMusicBattleInstances(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2B334(relative to base address)
		void BroadcastCameraDirectorIntermissionEvent(FGameplayTagContainer TagsToSend); // Flags: Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751A2B1E0(relative to base address)
		void BroadcastCameraDirectorDynamicEvent(FGameplayTagContainer TagsToSend, AActor* Target, float ShotTimeLength, bool bWaitForTransition); // Flags: Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751A2AE3C(relative to base address)
		void AddMusicBattleInstance(APilgrimMusicBattleInstance* MusicBattleInstance); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2ADBC(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimPlayspaceComponent_LipSyncAssetManager
	// Inherited from UPlayspaceComponent_LipSyncAssetManager -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xD0 - 0xC8)
	class UPilgrimPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager	
	{
	public:
		UAnimSequence* CachedLipsyncAnimSequence; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_LipSyncAssetManager");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimPremadeSetlist
	// Inherited from UDataAsset -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UPilgrimPremadeSetlist : public UDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FText SetlistTitle; // 0x38(0x10)
		FText Description; // 0x48(0x10)
		TArray<FName> SongShortNameList; // 0x58(0x10)
		FGameplayTag SetlistTag; // 0x68(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer AdditionalTags; // 0x70(0x20)
		TWeakObjectPtr<UTexture2D*> SetlistArt; // 0x90(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPremadeSetlist");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimPresetConfiguration
	// Inherited from UDataAsset -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UPilgrimPresetConfiguration : public UDataAsset	
	{
	public:
		UFortInputMappingContext* GlobalInputMappingContext; // 0x30(0x8)
		UFortInputMappingContext* CheatInputMappingContext; // 0x38(0x8)
		UFortInputMappingContext* GreenRoomInputMappingContext; // 0x40(0x8)
		UFortInputMappingContext* GreenRoomAltInputMappingContext; // 0x48(0x8)
		TMap<char, FPilgrimLaneInputMappingConfig> LaneInputMappingConfigs; // 0x50(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPresetConfiguration");
			return ret;
		}

		FPilgrimLaneInputMappingConfig GetLaneInputConfigForLanes(int32_t NumLanes); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2B9C8(relative to base address)
		TArray GetDeviceInputMappingContexts(int32_t NumLanes, EHardwareDevicePrimaryType DeviceType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2B554(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimPresetSelectorBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimPresetSelectorBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPresetSelectorBase");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimQuestDefinitionComponent_TextFormat
	// Inherited from UFortQuestDefinitionComponent_TextFormat -> UFortQuestDefinitionComponent -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UPilgrimQuestDefinitionComponent_TextFormat : public UFortQuestDefinitionComponent_TextFormat	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimQuestDefinitionComponent_TextFormat");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimQuestLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimQuestLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimQuestLibrary");
			return ret;
		}

		bool QuestPassesFilter(TScriptInterface<Class> QuestInterface, FPilgrimQuestFilter& QuestFilter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A2C048(relative to base address)
		FPilgrimQuestDisplayInfo GetQuestDisplayInfo(UObject* WorldContextObject, TScriptInterface<Class> Quest); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A2BD20(relative to base address)
		void GetFilteredQuests(TArray<TScriptInterface>& OutQuests, APlayerState* Player, FPilgrimQuestFilter& Filter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A2B660(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimRandomSetlist
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UPilgrimRandomSetlist : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		int32_t NumSongsToPopulate; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery SongFilterQuery; // 0xB0(0x48)
		TArray<UPilgrimSongMetadata*> SongList; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimRandomSetlist");
			return ret;
		}

		void PopulateRandomSongs(UObject* WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2BFC8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimRenderTargetComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UPilgrimRenderTargetComponent : public UControllerComponent	
	{
	public:
		UTextureRenderTarget2D* RenderTarget; // 0xA0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent");
			return ret;
		}

		FVector4f GetUVScaleOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2BF78(relative to base address)
		UTextureRenderTarget2D GetRenderTarget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2BEB0(relative to base address)
		FVector4f GetLeftTopRightBottom(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2BA5C(relative to base address)
		FMatrix CropTargetAndGetProjectionMatrix(FVector4f& InLeftTopRightBottom, float FOV); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751A2B348(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimRequestFriendScoreWrapper
	// Inherited from UObject
	// Size: 0xF0 (0x118 - 0x28)
	class UPilgrimRequestFriendScoreWrapper : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xF0]; // 0x28(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimRequestFriendScoreWrapper");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimScoreDebugPrinter
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UPilgrimScoreDebugPrinter : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimScoreDebugPrinter");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimScoringModel
	// Inherited from UObject
	// Size: 0x578 (0x5A0 - 0x28)
	class UPilgrimScoringModel : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FPilgrimGameProgress GameProgress; // 0x30(0x80)
		unsigned char UnknownData01_6[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY
		FPilgrimGameConfigSettings GameConfigSettings; // 0xD0(0x348)
		unsigned char UnknownData02_6[0x18]; // 0x418(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<APlayerState*> OwningPlayerState; // 0x430(0x8)
		unsigned char UnknownData03_7[0x168]; // 0x438(0x168) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimScoringModel");
			return ret;
		}

		int32_t GetScoreRequiredForStar(int32_t Stars); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2DE18(relative to base address)
		float GetNormalizedBaseGemHitValue(UPilgrimSongData* SongData, FPilgrimGameConfigSettings& InGameConfigSettings, EPilgrimSongDifficulty InDifficulty, EPilgrimTrackType InTrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A2D770(relative to base address)
		float ComputeSustainScorePerBeat(EPilgrimScoringMode ScoringMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D428(relative to base address)
		float ComputeStreakMultiplier(EPilgrimScoringMode ScoringMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D398(relative to base address)
		float ComputeOverdriveMultiplier(EPilgrimScoringMode ScoringMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D308(relative to base address)
		float ComputeMaxScore(UPilgrimSongData* SongData, FPilgrimGameConfigSettings& InGameConfigSettings, EPilgrimSongDifficulty InDifficulty, EPilgrimTrackType InTrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A2D064(relative to base address)
		float ComputeGemBaseScoreValue(EPilgrimScoringMode ScoringMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2CFD4(relative to base address)
		float ComputeAccuracyMultiplier(EPilgrimScoringMode ScoringMode, FPilgrimGemHitAccuracy& Accuracy); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2CEE4(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimScoringModifier
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UPilgrimScoringModifier : public UPrimaryDataAsset	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimScoringModifier");
			return ret;
		}

		float Apply(float InputValue); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimSetlistInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimSetlistInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimSetlistInterface");
			return ret;
		}

		void RemoveUnavailableSongs(UObject* WorldContextObject, FPlayspaceUser& ExcludedUser); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751A2E768(relative to base address)
		TArray GetSongList(UObject* WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751A2E028(relative to base address)
		UPilgrimSongMetadata GetSongAtIndex(UObject* WorldContextObject, int32_t Index); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7510725C8(relative to base address)
		FTimespan GetSetlistDuration(UObject* WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7510723FC(relative to base address)
		int32_t GetNumSongs(UObject* WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7510722C8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UPilgrimSettings : public UDeveloperSettings	
	{
	public:
		int32_t NumGemPoolItems; // 0x30(0x4)
		int32_t NumBeatMarkerPoolItems; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimSettings");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimSongCatalog
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UPilgrimSongCatalog : public UGameStateComponent	
	{
	public:
		TMap<FName, UPilgrimSongMetadata*> SongsByShortName; // 0xA0(0x50)
		TMap<FString, UPilgrimSongMetadata*> SongsByShortMcpTemplateId; // 0xF0(0x50)
		unsigned char UnknownData00_7[0x10]; // 0x140(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimSongCatalog");
			return ret;
		}

		bool PlayerHasSongEntitlement(AFortPlayerController* Player, UPilgrimSongMetadata* Song); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A2E5C4(relative to base address)
		void OnCMSCatalogRetrieved(bool bSuccess); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A2E544(relative to base address)
		bool IsSongShared(AFortPlayerController* Player, FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2E444(relative to base address)
		TArray GetSortedSongList(EPilgrimSongSortMethod SortMethod, EPilgrimSongSortDirection SortDirection, FGameplayTagQuery& TagQuery); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2E0D0(relative to base address)
		UPilgrimSongMetadata GetSongByShortName(FName ShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2DF9C(relative to base address)
		UPilgrimSongMetadata GetSongByMcpTemplateId(FString McpTemplateId); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2DEF0(relative to base address)
		TArray GetRandomSongList(int32_t NumSongs, FGameplayTagQuery& TagQuery); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2DAC8(relative to base address)
		UPilgrimSongCatalog GetPilgrimSongCatalog(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A2DA14(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimSongData
	// Inherited from UParsedMidiEventData -> UObject
	// Size: 0xB8 (0x188 - 0xD0)
	class UPilgrimSongData : public UParsedMidiEventData	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0xD0(0x50) UNKNOWN PROPERTY
		TMap<EPilgrimSongDifficulty, FRBTrackInfo> TracksPerDifficulty; // 0x120(0x50)
		TArray<FTrackItemInfo> BeatMarkers; // 0x170(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x180(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimSongData");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimSongMetadata
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x180 (0x1B0 - 0x30)
	class UPilgrimSongMetadata : public UPrimaryDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x30(0x20) UNKNOWN PROPERTY
		FName ShortName; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FText Title; // 0x58(0x10)
		FText Artist; // 0x68(0x10)
		FGameplayTagContainer AdditionalTags; // 0x78(0x20)
		TArray<ESparksGenre> Genre; // 0x98(0x10)
		int32_t Year; // 0xA8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TMap<EPilgrimTrackType, int32_t> IntensityPerInstrument; // 0xB0(0x50)
		EMusicKey Key; // 0x100(0x1)
		EMusicKeyMode Mode; // 0x101(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x102(0x6) UNKNOWN PROPERTY
		FString StreamingVUID; // 0x108(0x10)
		FString PreviewVUID; // 0x118(0x10)
		FTimespan duration; // 0x128(0x8)
		ESparksInstrumentType DrumStartingIntrument; // 0x130(0x1)
		ESparksInstrumentType BassStartingIntrument; // 0x131(0x1)
		ESparksInstrumentType GuitarStartingIntrument; // 0x132(0x1)
		ESparksInstrumentType VocalsStartingIntrument; // 0x133(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		UCatalogData* SparksCatalogData; // 0x138(0x8)
		TWeakObjectPtr<UStemmedMusicAsset*> StemmedMusicAsset; // 0x140(0x20)
		TWeakObjectPtr<UAnimSequence*> LipSyncAnimAsset; // 0x160(0x20)
		TWeakObjectPtr<UStemmedMusicAsset*> StemmedMusicAssetRuntime; // 0x180(0x20)
		FString SanitizedSearchString; // 0x1A0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimSongMetadata");
			return ret;
		}

		void SetSanitizedSearchString(FString SearchString); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2E88C(relative to base address)
		int32_t GetYear(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2E424(relative to base address)
		FText GetTitle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2E3E8(relative to base address)
		FString GetStreamingVUID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2E3B4(relative to base address)
		TWeakObjectPtr GetStemmedMusicAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2E37C(relative to base address)
		ESparksInstrumentType GetStartingInstrumentType(EPilgrimTrackType TrackType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2E2F0(relative to base address)
		UCatalogData GetSparksCatalogData(UObject* WorldContext); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2E268(relative to base address)
		FName GetShortName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2DEC4(relative to base address)
		FString GetSanitizedSearchString(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2DDFC(relative to base address)
		int32_t GetRawIntensity(EPilgrimTrackType Instrument); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2DD70(relative to base address)
		FString GetPreviewVUID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2DA94(relative to base address)
		EMusicKeyMode GetMusicMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACE294(relative to base address)
		EMusicKey GetMusicKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6917E8(relative to base address)
		int32_t GetMappedIntensity(EPilgrimTrackType Instrument, int32_t Min, int32_t Max); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D678(relative to base address)
		TWeakObjectPtr GetLipSyncAnimAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D644(relative to base address)
		TMap GetIntensityPerInstrument(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D5B4(relative to base address)
		FTimespan GetDuration(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D58C(relative to base address)
		FText GetArtist(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D550(relative to base address)
		FString GetAlbumArtUrl(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D4E8(relative to base address)
		FGameplayTagContainer GetAdditionalTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2D4B8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UPilgrimPlayspaceComponent_SongPreloader : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FName SongToLoad; // 0xB8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		UPilgrimSongMetadata* SongMetaData; // 0xC0(0x8)
		TMap<FUniqueNetIdRepl, bool> PlayersFinishedLoading; // 0xC8(0x50)
		bool bServerFinishedLoading; // 0x118(0x1)
		bool bBroadcastedLoadingFinished; // 0x119(0x1)
		unsigned char UnknownData02_6[0x16]; // 0x11A(0x16) UNKNOWN PROPERTY
		FTimerHandle LoadTimeoutTimerHandle; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader");
			return ret;
		}

		void OnStreamerPrepared(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A2FC10(relative to base address)
		void NetMulticast_LoadSong(FName Song); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF751A2FA8C(relative to base address)
		void NetMulticast_HandleAllLoadingFinished(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74F0F9DB4(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimControllerComponent_SongPreloader : public UControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimControllerComponent_SongPreloader");
			return ret;
		}

		void ServerKickPlayerForNetworkIssues(FText Reason); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751A2FCA8(relative to base address)
		void ServerFinishedLoadingSong(FName Song); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751A2FC24(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimSustainTrackItemMgr
	// Inherited from UPilgrimTrackItemMgr -> UActorComponent -> UObject
	// Size: 0x60 (0x138 - 0xD8)
	class UPilgrimSustainTrackItemMgr : public UPilgrimTrackItemMgr	
	{
	public:
		TArray<APilgrimTrackSustain*> ActiveSustains; // 0xD8(0x10)
		TMap<FPilgrimTrackItemKey, APilgrimTrackSustain*> ActiveSustainsMap; // 0xE8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimSustainTrackItemMgr");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimTogglePlasticInstrumentAbility
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB40 - 0xB40)
	class UPilgrimTogglePlasticInstrumentAbility : public UFortGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTogglePlasticInstrumentAbility");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimTouchButtonBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x318 - 0x2D8)
	class UPilgrimTouchButtonBase : public UCommonUserWidget	
	{
	public:
		UInputAction* PressAction; // 0x2D8(0x8)
		EWidgetTouchKbmControllerTransitionType WidgetTransitionType; // 0x2E0(0x1)
		bool DeactivateInputActionIfDragOutsideHitbox; // 0x2E1(0x1)
		bool DeactivateInputActionIfCollapsed; // 0x2E2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x2E3(0x1) UNKNOWN PROPERTY
		FLinearColor PressedColor; // 0x2E4(0x10)
		FLinearColor ReleasedColor; // 0x2F4(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x304(0x4) UNKNOWN PROPERTY
		UImage* Image_Icon; // 0x308(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x310(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTouchButtonBase");
			return ret;
		}

		bool IsHolding(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751363050(relative to base address)
		void HandleInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A2F638(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimTrack
	// Inherited from AActor -> UObject
	// Size: 0x120 (0x3B0 - 0x290)
	class APilgrimTrack : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UChildActorComponent* NowBarChildActor; // 0x298(0x8)
		USceneComponent* TopOfTrack; // 0x2A0(0x8)
		UClass* PilgrimGemClass; // 0x2A8(0x8)
		UClass* BeatMarkerClass; // 0x2B0(0x8)
		UClass* SustainClass; // 0x2B8(0x8)
		USceneComponent* SceneRoot; // 0x2C0(0x8)
		UPilgrimTrackCaptureComponent* TrackCaptureComponent2D; // 0x2C8(0x8)
		UMaterialInterface* PilgrimTrackAlphaMaterial; // 0x2D0(0x8)
		UMaterialParameterCollection* PilgrimTrackMaterialParameterCollection; // 0x2D8(0x8)
		UMaterialParameterCollectionInstance* PilgrimTrackMaterialParameterCollectionInstance; // 0x2E0(0x8)
		TWeakObjectPtr<UPilgrimGame*> ParentGame; // 0x2E8(0x20)
		USplineComponent* BeatMarkerSpline; // 0x308(0x8)
		TWeakObjectPtr<APilgrimNowBar*> CachedNowBar; // 0x310(0x8)
		UPilgrimGemTrackItemMgr* GemMgr; // 0x318(0x8)
		UPilgrimSustainTrackItemMgr* SustainMgr; // 0x320(0x8)
		UPilgrimBeatMarkerTrackItemMgr* BeatMarkerMgr; // 0x328(0x8)
		TMap<EPilgrimTrackLane, TWeakObjectPtr> SmasherMap; // 0x330(0x50)
		unsigned char UnknownData01_7[0x30]; // 0x380(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrack");
			return ret;
		}

		void UpdateBeatmarkerVisibility(bool bNewIsVisible); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2FDC8(relative to base address)
		void OnGemSmashed(EPilgrimTrackLane Lane, FPilgrimGemHitAccuracy& Accuracy, bool bIsOverdrive); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGameEnded(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF748BA0AC4(relative to base address)
		void HideAllItems(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2F6B8(relative to base address)
		void AddActorItemToScene(AActor* Item); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74EFEACF8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimTrackCaptureComponent
	// Inherited from USceneCaptureComponent2D -> USceneCaptureComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB10 - 0xB00)
	class UPilgrimTrackCaptureComponent : public USceneCaptureComponent2D	
	{
	public:
		AActor* ViewOwner; // 0xB00(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xB08(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent");
			return ret;
		}

		void SetViewOwnerActor(AActor* InViewOwner); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2FD3C(relative to base address)
		void IncludeActor(AActor* TrackActor, bool bIncludeFromChildActors); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2F714(relative to base address)
		AActor GetViewOwnerActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2F620(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimTrackItemInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimTrackItemInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrackItemInterface");
			return ret;
		}

		void OnGameEnded(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimTrackSustain
	// Inherited from AActor -> UObject
	// Size: 0x88 (0x318 - 0x290)
	class APilgrimTrackSustain : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		float InputKeyStartOfSustain; // 0x298(0x4)
		float InputKeyEndOfSustain; // 0x29C(0x4)
		bool bIsCurrentlyPressed; // 0x2A0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2A1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UPilgrimGame*> ParentGamePtr; // 0x2A4(0x8)
		TWeakObjectPtr<APilgrimGemSmasher*> ParentSmasherPtr; // 0x2AC(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY
		TArray<USplineMeshComponent*> CreatedSplineMeshes; // 0x2B8(0x10)
		int32_t NumTrackSegments; // 0x2C8(0x4)
		float SplineIndexStart; // 0x2CC(0x4)
		float SplineIndexEnd; // 0x2D0(0x4)
		float SustainUVStart; // 0x2D4(0x4)
		float SustainUVEnd; // 0x2D8(0x4)
		float FullSustainUnclampedLength; // 0x2DC(0x4)
		unsigned char UnknownData03_7[0x38]; // 0x2E0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrackSustain");
			return ret;
		}

		void UpdateSplineInputKeys(float NewKeyStart, float NewKeyEnd); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2FE58(relative to base address)
		void PlaceSustainAlongSpline(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSustainKeyRelease(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C388930(relative to base address)
		void OnSustainKeyDownSuccess(float CurrentModulation); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74EEDF828(relative to base address)
		void OnSustainInit(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748BA0AC4(relative to base address)
		void OnSustainFail(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF747E38E94(relative to base address)
		void OnModulationChanged(float CurrentModulation); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsOverdriveChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAttachToSmasher(APilgrimGemSmasher* Smasher); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2FB10(relative to base address)
		void LayoutSplineMeshes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A2FA78(relative to base address)
		bool IsInActiveOverdriveSection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E773C(relative to base address)
		FTrackItemInfo GetTrackItemInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2F5EC(relative to base address)
		USplineComponent GetSplinePathIfRelevant(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A2F5C0(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimTrackTypeUtils
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimTrackTypeUtils : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrackTypeUtils");
			return ret;
		}

		bool IsGuitarPeripheralTrack(EPilgrimTrackType TrackType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A2F9F8(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimVerbProcessor_DeployOverdrive
	// Inherited from UPilgrimObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UPilgrimVerbProcessor_DeployOverdrive : public UPilgrimObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimVerbProcessor_DeployOverdrive");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimWaitForEventRouterAction
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UPilgrimWaitForEventRouterAction : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnEventRouterAvailable; // 0x30(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction");
			return ret;
		}

		UPilgrimWaitForEventRouterAction PilgrimWaitForEventRouter(AActor* ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751A50A6C(relative to base address)
		void PilgrimEventRouterAvailableDelegate__DelegateSignature(UGameplayEventRouterComponent* EventRouter); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E44BF90(relative to base address)
	};


	// Class PilgrimCoreRuntime.ServerPilgrimGame
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UServerPilgrimGame : public UObject	
	{
	public:
		UPilgrimGameEvaluator* GameEvaluator; // 0x28(0x8)
		UPilgrimScoringModel* ScoringModel; // 0x30(0x8)
		UPilgrimSongData* SongData; // 0x38(0x8)
		UPilgrimSongMetadata* SongBeingPlayed; // 0x40(0x8)
		TWeakObjectPtr<APlayerState*> OwningPlayerState; // 0x48(0x8)
		UPilgrimGameConfig* PilgrimGameConfig; // 0x50(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.ServerPilgrimGame");
			return ret;
		}

		float GetScoringDensity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D04(relative to base address)
	};


	// Class PilgrimCoreRuntime.FortClientPilot_QuickSmokeSparks
	// Inherited from UFortClientPilot_GameplayBase -> UFortClientPilot_Base -> UClientPilotComponent -> UObject
	// Size: 0x10 (0x320 - 0x310)
	class UFortClientPilot_QuickSmokeSparks : public UFortClientPilot_GameplayBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x310(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.FortClientPilot_QuickSmokeSparks");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimEventRouterLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimEventRouterLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimEventRouterLibrary");
			return ret;
		}

		UGameplayEventRouterComponent GetGameplayEventRouter(AActor* ContextActor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A509EC(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimGameScoreInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPilgrimGameScoreInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGameScoreInterface");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimMusicBattleInstance
	// Inherited from AActor -> UObject
	// Size: 0x578 (0x808 - 0x290)
	class APilgrimMusicBattleInstance : public AActor	
	{
	public:
		FMulticastInlineDelegate OnMusicBattleFinished; // 0x290(0x10)
		char Team; // 0x2A0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2A1(0x7) UNKNOWN PROPERTY
		FPilgrimMusicBattleData MusicBattleData; // 0x2A8(0x48)
		FName SongToPlayShortName; // 0x2F0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		UPilgrimSongMetadata* SongToPlay; // 0x2F8(0x8)
		EPilgrimSongDifficulty SongDifficultyToPlay; // 0x300(0x1)
		bool bClientHasReceivedSongToPlay; // 0x301(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x302(0x6) UNKNOWN PROPERTY
		FPilgrimSinglePlayerBattleData SinglePlayerBattleData; // 0x308(0x10)
		int32_t LocalPlayerIndex; // 0x318(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x31C(0x4) UNKNOWN PROPERTY
		TArray<AFortPlayerStateAthena*> MusicBattlePlayers; // 0x320(0x10)
		FMusicBattleSinglePlayerOptions SinglePlayerBattleOptions; // 0x330(0x8)
		UPilgrimGameConfig* PilgrimGameConfig; // 0x338(0x8)
		EMusicBattleType MusicBattleType; // 0x340(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x341(0x7) UNKNOWN PROPERTY
		UAudioComponent* LocalMetasoundPlayer; // 0x348(0x8)
		UAudioComponent* LocalMetasoundMixer; // 0x350(0x8)
		TArray<FString> DisableScoreCeilingForSongs; // 0x358(0x10)
		int32_t SrvFIThrMs; // 0x368(0x4)
		unsigned char UnknownData05_6[0x84]; // 0x36C(0x84) UNKNOWN PROPERTY
		UHarmonixAudioAnalyzerResultsProvider* FFTAnalyzerResultsProvider; // 0x3F0(0x8)
		TMap<UPilgrimPlayerControllerComponent*, int32_t> CurrentPlayerToIndexMap; // 0x3F8(0x50)
		UPilgrimSongData* SongData; // 0x448(0x8)
		unsigned char UnknownData06_6[0x50]; // 0x450(0x50) UNKNOWN PROPERTY
		TMap<AFortPlayerStateAthena*, UServerPilgrimGame*> ServerPilgrimGameMap; // 0x4A0(0x50)
		unsigned char UnknownData07_6[0x1A8]; // 0x4F0(0x1A8) UNKNOWN PROPERTY
		TArray<UPilgrimGemBreakListener*> GemBreakListeners; // 0x698(0x10)
		unsigned char UnknownData08_6[0xF8]; // 0x6A8(0xF8) UNKNOWN PROPERTY
		TSet<UPilgrimPlayerControllerComponent*> PlayersWhoOwnCurrentSong; // 0x7A0(0x50)
		unsigned char UnknownData09_6[0x1]; // 0x7F0(0x1) UNKNOWN PROPERTY
		bool bServerWaitForAllMbisAndPlayersToBeReady; // 0x7F1(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x7F2(0x6) UNKNOWN PROPERTY
		FTimerHandle ServerWaitForAllPlayersTimerHandle; // 0x7F8(0x8)
		bool bAllowServerToApplyMultipliers; // 0x800(0x1)
		bool bAllowReturnToBackStageForSinglePlayerInstances; // 0x801(0x1)
		unsigned char UnknownData11_7[0x6]; // 0x802(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance");
			return ret;
		}

		void UpdateVisibilityOfUI(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateScore(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLocalPlayerScore(FPilgrimGameProgress& LocalPlayerGameProgress); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A75BA0(relative to base address)
		void SubtractFromBandScore(float Score); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A75B18(relative to base address)
		bool ShouldUseTouchUIForLocalPlayer(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A75AA4(relative to base address)
		void SetupSinglePlayerBattle(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A75A90(relative to base address)
		void SetMusicBattleType(EMusicBattleType NewMusicBattleType); // Flags: Final|Native|Public, Memory Exec: 0x7FF751A75A14(relative to base address)
		void ServerUserFinishedDisconnecting(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ServerShouldAllowInputForPlayer(AFortPlayerStateAthena* PlayerState, FPilgrimTimedInput& TimedInput); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF751A7592C(relative to base address)
		void ServerRemoveScoringMultiplierForPlayer(AFortPlayerStateAthena* PlayerState, FPilgrimServerMultiplierEffect& ServerMultiplierEffect); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A7587C(relative to base address)
		void ServerOnTimedInputReceived(UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimTimedInput& TimedInput); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751A757C4(relative to base address)
		void ServerOnTeamQuickplayScoreChanged(UPilgrimPlayerControllerComponent* PlayerControllerComponent, FPilgrimGameProgress& NextScoreForCurrentPlayer, float LastInputTimeMs); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751A75644(relative to base address)
		void ServerOnSongMidiFinishedLoading(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ServerOnClientUpdateReceived(UPilgrimPlayerControllerComponent* PlayerControllerComponent, EMusicBattleClientUpdate ClientUpdate); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74E6FF63C(relative to base address)
		void ServerFinishDisconnect(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF751A755F8(relative to base address)
		void ServerApplyScoringMultiplierForPlayer(AFortPlayerStateAthena* PlayerState, FPilgrimServerMultiplierEffect& ServerScoringChange, float OptionalDurationSeconds); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A7548C(relative to base address)
		void ServerAllPlayersHaveFinishedSong(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerAdjustScoreForPlayer(AFortPlayerStateAthena* PlayerState, FPilgrimServerScoringChangeRecord& ServerScoringChange); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A753DC(relative to base address)
		void PlayerDisconnected(UPilgrimPlayerControllerComponent* ControllerComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A7535C(relative to base address)
		void OnTrackHiddenChanged(bool bHideTrack); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartedPlayingSong(UPilgrimSongMetadata* Song); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSongLoaded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A75348(relative to base address)
		void OnRep_SongToPlay(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751A75334(relative to base address)
		void OnRep_MusicBattleData(FPilgrimMusicBattleData& PreviousMusicBattleData); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751A75298(relative to base address)
		void OnPlayerReachedZeroHp(int32_t PlayerId); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMusicBattleFinished__DelegateSignature(EMusicBattleEndReason EndReason); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClientReceivedSongToPlay(UPilgrimSongMetadata* Song); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NetMulticast_DoMultiplayerDamageEffect(int32_t DamagingPlayerId, int32_t DamagedPlayerId); // Flags: Net|Native|Event|NetMulticast|Protected|BlueprintCallable, Memory Exec: 0x7FF74F92FE58(relative to base address)
		void NetMulticast_DoBeamClash(); // Flags: Net|Native|Event|NetMulticast|Protected|BlueprintCallable, Memory Exec: 0x7FF749066BE0(relative to base address)
		void NetMulticast_CheatSetPerformanceData(FString PerformanceArgument); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF751A75204(relative to base address)
		void NetMulticast_CheatSeekToTime(int32_t Milliseconds); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF751A75180(relative to base address)
		void NetMulticast_CheatEndSong(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF74917265C(relative to base address)
		bool IsTwoPlayerBattleWithBeams(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A75154(relative to base address)
		bool IsSinglePlayerBattleAgainstPrimitiveAI(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A75134(relative to base address)
		bool IsRestartAllowed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A750F8(relative to base address)
		bool IsPlayerInBattleParticipants(AFortPlayerStateAthena* PlayerState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A7506C(relative to base address)
		bool IsLocalPlayerRoaming(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A75048(relative to base address)
		bool IsLocalPlayerInBattleParticipants(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A75024(relative to base address)
		bool IsHardStopped(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A75000(relative to base address)
		bool IsHardStopAllowed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74FDC(relative to base address)
		TSet GetUnplayedTrackTypesInCurrentSong(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74F68(relative to base address)
		EPilgrimTrackType GetTrackTypeForPlayer(AFortPlayerStateAthena* Player); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C5A9914(relative to base address)
		char GetTeam(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A74F50(relative to base address)
		float GetStreakMultiplier(FPilgrimGameProgress& LocalPlayerGameProgress); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74EA8(relative to base address)
		ESparksInstrumentType GetStartingInstrumentForTrackInCurrentSong(EPilgrimTrackType TrackType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74E1C(relative to base address)
		EPilgrimSongPlayMethod GetSongPlayMethod(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74DF8(relative to base address)
		FGuid GetSongPlayId(); // Flags: Native|Event|Protected|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF751A74DC4(relative to base address)
		EPilgrimSongDifficulty GetSongDifficultyForPlayer(AFortPlayerStateAthena* Player); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751A74D30(relative to base address)
		float GetServerMultiplierForPlayer(APlayerState* PlayerState); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A74CA0(relative to base address)
		float GetScoreDensityForPlayer(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751A74C10(relative to base address)
		AFortPlayerStateAthena GetPlayerFromIndex(int32_t PlayerIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74B84(relative to base address)
		int32_t GetPlayerCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5A3370(relative to base address)
		TSet GetPlayedTrackTypesInCurrentSong(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74B10(relative to base address)
		FPilgrimPlacementAnalyticsData GetPlacementAnalyticsData(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF751A74ADC(relative to base address)
		UPilgrimSongMetadata GetNextSongToPlay(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF751A74AB4(relative to base address)
		UMusicClockComponent GetMusicClock(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74A90(relative to base address)
		FPilgrimMusicBattleData GetMusicBattleData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74A74(relative to base address)
		UPilgrimGame GetLocalPilgrimGame(); // Flags: RequiredAPI|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UGameplayEventRouterComponent GetEventRouter(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A74A50(relative to base address)
		void GetDifficultyAndTrackType(EPilgrimSongDifficulty& OutSongDifficulty, EPilgrimTrackType& OutSongTrackType); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74978(relative to base address)
		AFortPlayerStateAthena GetCurrentLocalPlayer(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A74954(relative to base address)
		UPilgrimGameConfig GetConfig(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493E4454(relative to base address)
		void FireLocalPlayerBeam(EMusicBattleProjectileType ProjectileType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoMultiplayerDamage(int32_t DamagingPlayerId, int32_t DamagedPlayerId, FPilgrimGameProgress& GameUpdateThatDidDamage); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoEndGameCheat(bool bIsWin); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A748A0(relative to base address)
		bool Debug_IsTrackHidden(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		void ConnectFFTAnalysis(UAudioComponent* AudioComponentWithAnalyzer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A74820(relative to base address)
		void ClientFireSongEndedAnalyticsForCurrentSong(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751A7480C(relative to base address)
		void Client_DoMultiplayerDamageEffect(int32_t DamagingPlayerId, int32_t DamagedPlayerId); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Client_DoMultiplayerBeamClash(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BroadcastMBIEventStarted(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A7479C(relative to base address)
		void BroadcastMBIEventFinished(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A74718(relative to base address)
		void AddToBandScore(float Score); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A74690(relative to base address)
		void AddMusicBattlePlayers(TArray<AFortPlayerStateAthena*>& NewPlayers); // Flags: Final|RequiredAPI|Native|Public|HasOutParms, Memory Exec: 0x7FF751A745A4(relative to base address)
	};


	// Class PilgrimCoreRuntime.PilgrimGameEvaluator
	// Inherited from UObject
	// Size: 0x2C8 (0x2F0 - 0x28)
	class UPilgrimGameEvaluator : public UObject	
	{
	public:
		UPilgrimSongData* CurrentSongData; // 0x28(0x8)
		UPilgrimSongMetadata* SongMetaData; // 0x30(0x8)
		UPilgrimScoreDebugPrinter* DebugScoreListener; // 0x38(0x8)
		TWeakObjectPtr<APlayerState*> OwningPlayerState; // 0x40(0x8)
		UPilgrimGameConfig* PilgrimGameConfig; // 0x48(0x8)
		UPilgrimScoringModel* ScoringModel; // 0x50(0x8)
		unsigned char UnknownData00_7[0x298]; // 0x58(0x298) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGameEvaluator");
			return ret;
		}
	};

}
