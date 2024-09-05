#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PilgrimCoreRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PilgrimCoreRuntime.NetworkedMusicClockManager
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x260 (0x300 - 0xA0)
	class UNetworkedMusicClockManager : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData05_3[0x88]; // 0xA0(0x88) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStartSongSyncCountdown; // 0x128(0x10)
		FMulticastInlineDelegate OnBeatEvent; // 0x138(0x10)
		FMulticastInlineDelegate OnBarEvent; // 0x148(0x10)
		UMusicClockComponent OwnedMusicClockComponent; // 0x158(0x8)
		TWeakObjectPtr WeakMetasoundPlayer; // 0x160(0x8)
		TWeakObjectPtr WeakMetasoundMixer; // 0x168(0x8)
		float ServerStartTime; // 0x170(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData07_6[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY
		UMetasoundGeneratorHandle MetasoundPlayerGeneratorHandle; // 0x2B0(0x8)
		UMetasoundParameterPack MetasoundPlayerSeekParamPack; // 0x2B8(0x8)
		EPilgrimSongPlayMethod PlayMethod; // 0x2C0(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x2C1(0x3) UNKNOWN PROPERTY
		FGameplayEventListenerHandle SongLoadedGameplayEventHandle; // 0x2C4(0x1C)
		bool bServerHasReceivedPlaySongRequest; // 0x2E0(0x1)
		unsigned char UnknownData09_7[0x1F]; // 0x2E1(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.NetworkedMusicClockManager");
			return ret;
		}

		void SetClientAudioComponentsToUse(UAudioComponent InMetasoundPlayer, UAudioComponent InMetasoundMixer); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414DEA8C0
		void PlayServerAuthoritativeSong(UPilgrimSongMetadata SongToPlay); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DEA7E0
		void OnRep_ServerStartTime(); // Flags: Final|Native|Private 0x7FF414DEA700
		void OnRep_CurrentSongServerTimestamp(); // Flags: Final|Native|Private 0x7FF414DEA620
		void OnBeat(int32_t BeatNumber, int32_t BeatInBar); // Flags: Final|Native|Protected 0x7FF414DEA540
		void OnBar(int32_t BarNumber); // Flags: Final|Native|Protected 0x7FF414DEA460
		UMusicClockComponent GetOwnedMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEA380
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

		UPilgrimAbilityTask_WaitForBars WaitForBars(UGameplayAbility OwningAbility, int32_t BarsToWaitFor, int32_t LoopFor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DEA9A0
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

		UPilgrimAbilityTask_WaitForBeats WaitForBeats(UGameplayAbility OwningAbility, int32_t BeatsToWaitFor, int32_t LoopFor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DEAA80
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
		unsigned char UnknownData01_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAbilityTask_WaitForSection");
			return ret;
		}

		UPilgrimAbilityTask_WaitForSection WaitForSection(UGameplayAbility OwningAbility, bool bShouldWaitForNextSection, FString SectionName); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DEAC40
		void OnSectionEvent(FString SectionName, float SectionStartMs, float SectionLengthMs); // Flags: Final|Native|Private 0x7FF414DEAB60
	};


	// Class PilgrimCoreRuntime.PilgrimActorPool
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UPilgrimActorPool : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		FPilgrimActorPoolParams ActorPoolParams; // 0x40(0x10)
		TSet AvailableActors; // 0x50(0x50)
		TSet InUseActors; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimActorPool");
			return ret;
		}

		bool TryReturnItem(AActor ActorToPutBack); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DEB0A0
		void ReturnAllWidgets(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DEAFC0
		void InitPool(FPilgrimActorPoolParams PilgrimActorPoolParams); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DEAEE0
		int32_t GetNumInUseItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEAE00
		int32_t GetNumAvailableItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEAD20
	};


	// Class PilgrimCoreRuntime.PilgrimAnalytics
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class UPilgrimAnalytics : public UPlayspaceComponent	
	{
	public:
		FMusicClockCatchUpData CurrentCatchUpSession; // 0xA0(0x18)
		unsigned char UnknownData01_7[0x90]; // 0xB8(0x90) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0xC8]; // 0x50(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestLeaderboard");
			return ret;
		}

		UPilgrimAsyncAction_RequestLeaderboard PilgrimRequestLeaderboard(UObject WorldContextObject, FName SongShortName, FString SpotlightGroup, EPilgrimLeaderboardType LeaderboardType, AFortPlayerController RequestingPlayer, bool bFriendsOnly, bool bCenteredOnRequestingPlayer, int32_t Page, bool bIsSpotlightCompetition, bool bUseCache); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140E4870
		void LeaderboardRequestSuccessDelegate__DelegateSignature(FPilgrimLeaderboardPage ResultPage, FPilgrimLeaderboardRequestParams RequestParams); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E4490
		void LeaderboardRequestFailureDelegate__DelegateSignature(FString Error, FPilgrimLeaderboardRequestParams RequestParams); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E4288
	};


	// Class PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x278 (0x2A8 - 0x30)
	class UPilgrimAsyncAction_RequestPersonalBest : public UCancellableAsyncAction	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0x258]; // 0x50(0x258) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPersonalBest");
			return ret;
		}

		UPilgrimAsyncAction_RequestPersonalBest PilgrimRequestPersonalBest(UObject WorldContextObject, AFortPlayerController RequestingPlayer, FUniqueNetIdRepl& PlayerAccountId, FName SongShortName, EPilgrimTrackType InstrumentType, int32_t BandSize, int32_t SetlistIndex, bool bUseCache); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4140E4C90
		void PersonalBestRequestSuccessDelegate__DelegateSignature(FPilgrimPersonalBestResult PersonalBestResult, FPilgrimPersonalBestParams RequestParams); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E4AF0
		void PersonalBestRequestFailureDelegate__DelegateSignature(FString Error, FPilgrimPersonalBestParams RequestParams); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E4950
	};


	// Class PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0xD0 (0x100 - 0x30)
	class UPilgrimAsyncAction_RequestPlayerFeed : public UCancellableAsyncAction	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFailure; // 0x40(0x10)
		unsigned char UnknownData01_7[0xB0]; // 0x50(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimAsyncAction_RequestPlayerFeed");
			return ret;
		}

		void RequestFeedSuccessDelegate__DelegateSignature(FPilgrimPlayerFeedResult FeedResult, FPilgrimPlayerFeedParams RequestParams); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E5180
		void RequestFeedFailureDelegate__DelegateSignature(FText Error, FPilgrimPlayerFeedParams RequestParams); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E4FE0
		UPilgrimAsyncAction_RequestPlayerFeed PilgrimRequestPlayerFeed(UObject WorldContextObject, AFortPlayerController RequestingPlayer, FGameplayTagQuery& SongQuery, FSongShortNameMatcher& SongShortNameMatcher, TArray& Leaderboards, TArray& FriendIds, EPilgrimPlayerFeedSortType SortType, bool bAllScores, bool bRequirePlayerScore); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4140E4D70
	};


	// Class PilgrimCoreRuntime.AutoCalibrationSaveData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAutoCalibrationSaveData : public UObject	
	{
	public:
		float AutoCalibratedLatencyMs; // 0x28(0x4)
		bool bHasAutoCalibrated; // 0x2C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr OwningPlayerState; // 0x40(0x8)
		unsigned char UnknownData03_6[0x18]; // 0x48(0x18) UNKNOWN PROPERTY
		UAutoCalibrationSaveData CalibrationSaveData; // 0x60(0x8)

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
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr ParentNowBarPtr; // 0x298(0x20)
		TWeakObjectPtr ParentGamePtr; // 0x2B8(0x8)
		unsigned char UnknownData03_7[0x38]; // 0x2C0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimBeatMarker");
			return ret;
		}

		void SetupNumLanes(int32_t NumLanes); // Flags: Event|Public|BlueprintEvent 0x7FF414DEB340
		void OnPlacedOnTrack(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DEB260
		void OnBeatMarkerPassedNowBar(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DEB180
	};


	// Class PilgrimCoreRuntime.PilgrimTrackItemMgr
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UPilgrimTrackItemMgr : public UActorComponent	
	{
	public:
		unsigned char UnknownData03_3[0x4]; // 0xA0(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Track; // 0xA4(0x8)
		unsigned char UnknownData04_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UPilgrimActorPool ItemPool; // 0xB0(0x8)
		TWeakObjectPtr PilgrimGame; // 0xB8(0x8)
		unsigned char UnknownData05_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY

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
		TArray ActiveBeatMarkers; // 0xD8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY

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
		UClass AbilityToRunForOnBeat; // 0xBB8(0x8)
		UClass AbilityToRunForOffBeat; // 0xBC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimBeatValidatedAbility");
			return ret;
		}

		void OnBeatAbilityActivated(bool bOnBeat); // Flags: Event|Protected|BlueprintEvent 0x7FF414DEB420
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

		void PilgrimResetFTUE(); // Flags: Final|Exec|Native|Protected 0x7FF414DEB500
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
		unsigned char UnknownData01_6[0x1]; // 0x4F(0x1) UNKNOWN PROPERTY
		int32_t KeyboardAndMouseGeneralPresetIndex; // 0x50(0x4)
		int32_t KeyboardAndMouseExpertPresetIndex; // 0x54(0x4)
		int32_t ControllerGeneralPresetIndex; // 0x58(0x4)
		int32_t ControllerExpertPresetIndex; // 0x5C(0x4)
		UPilgrimPresetConfiguration PilgrimPresetConfiguration; // 0x60(0x8)
		FString SelectedGeneralControllerPreset; // 0x68(0x10)
		TMap SelectedControllerPresetIndices; // 0x78(0x50)
		TMap SelectedKeyboardAndMousePresetIndices; // 0xC8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimClientSettingRecordPartition");
			return ret;
		}

		void SetUseProColorsForAllParts(bool bNewUseProColorsForAllParts); // Flags: Final|Native|Public 0x7FF414DECD80
		void SetUseAlternative5LaneTouchLayout(bool NewUseAlternative5LaneTouchLayout); // Flags: Final|Native|Public 0x7FF414DECCA0
		void SetTrackSpeedMultiplier(float NewMultiplier); // Flags: Final|Native|Public 0x7FF414DECBC0
		void SetTrackBackgroundOpacity(float NewOpacity); // Flags: Final|Native|Public 0x7FF414DECAE0
		void SetSelectedGeneralControllerPreset(FString NewSelectedGeneralControllerPreset); // Flags: Final|RequiredAPI|Native|Public 0x7FF414DECA00
		void SetProTrackInputButtonVisibility(bool bNewProTrackInputButtonVisibility); // Flags: Final|Native|Public 0x7FF414DEC920
		void SetNonProTrackInputButtonVisibility(bool bNewNonProTrackInputButtonVisibility); // Flags: Final|Native|Public 0x7FF414DEC840
		void SetKeyboardAndMouseGeneralPresetIndex(int32_t NewIndex); // Flags: Final|Native|Public 0x7FF414DEC760
		void SetKeyboardAndMouseExpertPresetIndex(int32_t NewIndex); // Flags: Final|Native|Public 0x7FF414DEC680
		void SetIsGuitarLeftyFlip(bool bNewUseGuitarLeftyFlip); // Flags: Final|Native|Public 0x7FF414DEC5A0
		void SetEnableVibrationForHittingNotes(bool bNewEnableVibrationForHittingNotes); // Flags: Final|Native|Public 0x7FF414DEC4C0
		void SetEnableAutoCalibration(bool bNewEnableAutoCalibration); // Flags: Final|Native|Public 0x7FF414DEC3E0
		void SetControllerGeneralPresetIndex(int32_t NewIndex); // Flags: Final|Native|Public 0x7FF414DEC300
		void SetControllerExpertPresetIndex(int32_t NewIndex); // Flags: Final|Native|Public 0x7FF414DEC220
		bool GetUseProColorsForAllParts(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEC140
		bool GetUseAlternative5LaneTouchLayout(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEC060
		float GetTrackSpeedMultiplier(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF414DEBF80
		float GetTrackBackgroundOpacity(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEBEA0
		FString GetSelectedGeneralControllerPreset(); // Flags: Final|Native|Public|Const 0x7FF414DEBDC0
		bool GetProTrackInputButtonVisibility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEBCE0
		bool GetNonProTrackInputButtonVisibility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEBC00
		int32_t GetKeyboardAndMouseGeneralPresetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEBB20
		int32_t GetKeyboardAndMouseExpertPresetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEBA40
		bool GetIsGuitarLeftyFlip(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEB960
		bool GetEnableVibrationForHittingNotes(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF414DEB880
		bool GetEnableAutoCalibration(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEB7A0
		int32_t GetControllerGeneralPresetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEB6C0
		int32_t GetControllerExpertPresetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEB5E0
	};


	// Class PilgrimCoreRuntime.PilgrimCoreBandStateComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UPilgrimCoreBandStateComponent : public UPlayspaceComponent	
	{
	public:
		TArray OwnedSongs; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimCoreBandStateComponent");
			return ret;
		}

		void OnRep_OwnedSongs(); // Flags: Final|Native|Protected 0x7FF4140F1DF0
		UPilgrimSongMetadata GetSongAtIndex(int32_t Index); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F1D10
		UPilgrimSongMetadata GetNextSong(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F1C30
		UPilgrimSongMetadata GetCurrentSong(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F1B50
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
		unsigned char UnknownData01_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimCorePlayerStateComponent");
			return ret;
		}

		void SetSongDifficulty(EPilgrimSongDifficulty Difficulty); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E6068
		void SetInstrumentChoice(EPilgrimTrackType Instrument); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E5F88
		void ServerSetIsReady(bool bInIsReady); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E5EA8
		void OnRep_SongDifficulty(EPilgrimSongDifficulty PrevDifficulty); // Flags: Final|Native|Protected 0x7FF4140E5DC8
		void OnRep_IsReady(bool bPrevIsReady); // Flags: Final|Native|Protected 0x7FF4140E5CE8
		void OnRep_InstrumentChoice(EPilgrimTrackType PrevInstrument); // Flags: Final|Native|Protected 0x7FF4140E5C08
		void OnPeripheralModeChanged__DelegateSignature(EPilgrimPeripheralInputMode PlasticInstrumentInputMode); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E5AC0
		EPilgrimTrackType GetTrackTypeForGameplay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E59E0
		EPilgrimSongDifficulty GetSongDifficulty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E5900
		UPilgrimCorePlayerStateComponent GetPilgrimCorePlayerStateComponent(APlayerState PlayerState); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140E5820
		bool GetIsReady(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E5740
		EPilgrimTrackType GetInstrumentChoice(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E5660
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

		EPilgrimTrackType SparksInstrumentToPilgrimTrackType(ESparksInstrumentType SparksType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DED480
		bool ShouldUseTouchUIForLocalPlayer(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DED3A0
		ESparksInstrumentType PilgrimTrackTypeToSparksInstrument(EPilgrimTrackType PilgrimType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DED2C0
		FString PilgrimTrackTypeToMidiTrackName(EPilgrimTrackType PilgrimType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DED1E0
		EPilgrimTrackType MidiTrackNameToPilgrimTrackType(FString MidiTrackName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DED100
		bool IsGuitarPeripheralAllowed(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DED020
		bool InstrumentTypesAreEqual(ESparksInstrumentType SparksType, EPilgrimTrackType PilgrimType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DECF40
		float GetPlatformTimeSeconds(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DECE60
	};


	// Class PilgrimCoreRuntime.PilgrimCustomSetlist
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UPilgrimCustomSetlist : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLockedStateChanged; // 0xC0(0x10)
		TArray SetlistEntries; // 0xD0(0x10)
		int32_t MaxSongsPerPlayer; // 0xE0(0x4)
		bool bIsSetlistLocked; // 0xE4(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xE5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimCustomSetlist");
			return ret;
		}

		void SetlistLockedStateChangedDelegate__DelegateSignature(UPilgrimCustomSetlist Setlist, bool bIsLocked); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E7250
		void ServerSetMaxSongsPerPlayer(int32_t NewMax); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E7170
		void ServerSetIsSetlistLocked(bool bInIsLocked); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E7090
		void ServerRemoveSongForPlayer(FName SongShortName, APlayerState Player, bool bRemoveAll); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E6FB0
		void ServerRemoveSongAtIndex(int32_t Index, FName SongShortName, APlayerState Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E6ED0
		void ServerRemoveAllSongsForPlayer(APlayerState Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E6DF0
		void ServerRemoveAllSongs(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E6D10
		void ServerAddSongForPlayer(FName SongShortName, APlayerState Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4140E6C30
		void OnRep_SetlistEntries(); // Flags: Final|Native|Protected 0x7FF4140E6B50
		void OnRep_MaxSongsPerPlayer(int32_t PrevMax); // Flags: Final|Native|Protected 0x7FF4140E6A70
		bool HasPlayerAddedSong(FName SongShortName, APlayerState Player); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E6990
		bool HasAnyoneAddedSong(FName SongShortName, APlayerState& OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140E68B0
		TArray GetSongsAddedByPlayer(APlayerState Player); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E67D0
		void GetSetlistEntryAtIndex(int32_t Index, FName& OutSongShortName, APlayerState& OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140E66F0
		int32_t GetMaxSongsPerPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E6610
		bool GetIsSetlistLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E6530
		void FindEntriesForSongAndPlayer(FName SongShortName, APlayerState Player, TArray& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4140E6450
		void FindEntriesForSong(FName SongShortName, TArray& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4140E6370
		void FindEntriesForPlayer(APlayerState Player, TArray& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4140E6290
		bool CanAddSongForPlayer(FName SongShortName, APlayerState Player, EPilgrimCantAddSongReason& OutReason, APlayerState& OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140E6148
	};


	// Class PilgrimCoreRuntime.PilgrimDanceSynchronizerComponent
	// Inherited from USparksDanceSynchronizerComponent -> UMontageBeatSyncComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x158 - 0x120)
	class UPilgrimDanceSynchronizerComponent : public USparksDanceSynchronizerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x120(0x38) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
		UPilgrimGame PilgrimGame; // 0x50(0x8)
		UObject Passthrough; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimDelayUntilTimeBeforeMidiTick");
			return ret;
		}

		void TimerTick(); // Flags: Final|Native|Public 0x7FF4140E75B0
		UPilgrimDelayUntilTimeBeforeMidiTick PilgrimDelayUntilTimeBeforeMidiTick(UObject PassthroughObject, UPilgrimGame PilgrimGameContext, int32_t MidiTick, float SecondsBeforeTick, ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140E74D0
		void OnPilgrimDelayUntilTimeBeforeMidiTickDelegate__DelegateSignature(UObject PassthroughObject); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E73F0
	};


	// Class PilgrimCoreRuntime.PilgrimGame
	// Inherited from UActorComponent -> UObject
	// Size: 0x620 (0x6C0 - 0xA0)
	class UPilgrimGame : public UActorComponent	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGameScoreUpdated; // 0xB0(0x10)
		FMulticastInlineDelegate OnOverdriveActiveUpdated; // 0xC0(0x10)
		FMulticastInlineDelegate OnSongEnded; // 0xD0(0x10)
		unsigned char UnknownData06_6[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAutoplayUpdated; // 0xF0(0x10)
		FMulticastInlineDelegate OnDisableMissUpdated; // 0x100(0x10)
		int32_t CurrentSeekMs; // 0x110(0x4)
		float JumpMarkerStart; // 0x114(0x4)
		float JumpMarkerEnd; // 0x118(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x11C(0x4) UNKNOWN PROPERTY
		UPilgrimScoringModel ScoringModel; // 0x120(0x8)
		UPilgrimGameConfig PilgrimGameConfig; // 0x128(0x8)
		unsigned char UnknownData08_6[0x10]; // 0x130(0x10) UNKNOWN PROPERTY
		UPilgrimPlayerControllerComponent OwnerControllerComponent; // 0x140(0x8)
		UAudioComponent MetasoundPlayer; // 0x148(0x8)
		UAudioComponent MetasoundMixer; // 0x150(0x8)
		UMusicClockComponent MusicClock; // 0x158(0x8)
		UMetasoundGeneratorHandle MetasoundPlayerGeneratorHandle; // 0x160(0x8)
		UMetasoundParameterPack MetasoundPlayerSeekParamPack; // 0x168(0x8)
		UPilgrimMediaStreamer PilgrimMediaStreamer; // 0x170(0x8)
		APilgrimTrack MainTrack; // 0x178(0x8)
		USoundBase MissSound; // 0x180(0x8)
		UPilgrimGameEvaluator PilgrimGameEvaluator; // 0x188(0x8)
		unsigned char UnknownData09_7[0x530]; // 0x190(0x530) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGame");
			return ret;
		}

		void StopSong(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EA5B0
		void SetLocalPlayer(APlayerController OwnerPC); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EA4D0
		void SetJumpMarkers(int32_t FromMillisecnods, int32_t ToMilliseconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EA3F0
		void SetDifficultyAndTrackType(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EA310
		void SeekToTime(int32_t Milliseconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EA230
		void ProcessSwing(EPilgrimTrackLane Lane, bool bIsPress); // Flags: Final|Native|Public 0x7FF4140EA150
		void PlaySongStreamed(UAudioComponent InMetasoundPlayer, UAudioComponent InMetasoundMixer, UMusicClockComponent InMusicClock, UPilgrimMediaStreamer InStreamer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EA070
		void PlaySong(UAudioComponent InMetasoundPlayer, UAudioComponent InMetasoundMixer, UMusicClockComponent InMusicClock, UPilgrimSongMetadata InSong); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E9F90
		void PilgrimOverdriveActiveUpdated__DelegateSignature(FPilgrimGameProgress& Score); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140E9EB0
		void PilgrimGameSongEnded__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E9DD0
		void PilgrimGameScoreUpdated__DelegateSignature(FPilgrimGameProgress& Score); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140E9CF0
		void PilgrimGameDoneProcessingInput__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E9C10
		void PilgrimGameDisableMissUpdated__DelegateSignature(bool Enabled); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E9B30
		void PilgrimGameAutoplayUpdated__DelegateSignature(bool Enabled); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E9A50
		void OnMusicResumed(); // Flags: Final|Native|Protected 0x7FF4140E9970
		void OnMusicReachedEndOfPlayback(); // Flags: Final|Native|Protected 0x7FF4140E9890
		void OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Final|Native|Protected 0x7FF4140E97B0
		void OnEndedByServer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E96D0
		void OnControlMappingsRebuilt(); // Flags: Final|Native|Protected 0x7FF4140E95F0
		bool IsTrackUsingProColors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E9510
		bool IsInputSpecificGemShapesEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E9430
		bool IsGuitarPeripheralTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E9350
		bool IsGameEnded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E9270
		bool IsDisableMissEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E9190
		bool IsAutoplayEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E90B0
		float GetTotalSecondsSinceGameEnd(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E8FD0
		float GetSongLengthMs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E8EF0
		EPilgrimTrackType GetSelectedTrackType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E8E10
		EPilgrimSongDifficulty GetSelectedDifficulty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E8D30
		int32_t GetNumLanes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140E8C50
		UMusicClockComponent GetMusicClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E8B70
		APilgrimTrack GetMainTrack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E8A90
		APlayerController GetLocalPlayerController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E89B0
		FKey GetKeyBoundToLane(EPilgrimTrackLane Lane); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E88D0
		FName GetInputNameForLane(EPilgrimTrackLane Lane); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E87F0
		float GetHitOffsetAverage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E8710
		bool GetGemBreakForTrackDifficulty(EPilgrimTrackType Track, EPilgrimSongDifficulty Difficulty, FPilgrimGemBreak& FoundBreak, float& BarsLeftInBreak, FPilgrimGemBreak& NextBreak, float& BarsTillNextBreak); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140E8570
		FPilgrimGameConfigSettings GetGameConfigSettings(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140E80D0
		float GetCurrentSongTick(ECalibratedMusicTimebase InTimebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E7FF0
		float GetCurrentSongMs(ECalibratedMusicTimebase InTimebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E7F10
		float GetCurrentODValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E7E30
		FPilgrimSongMeasurePosition GetCurrentMeasureBeatTick(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E7C90
		void EndGame(bool bFadeOut, float FadeOutDurationSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E7BB0
		void CheatSetPerformanceData(FPilgrimCheatPerformanceArgument& PerformanceArgument); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140E7A10
		void CheatSetJumpMarkers(FString FromTime, FString ToTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E7930
		void CheatEndSong(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E7850
		void ApplySettingsFromConfig(UPilgrimGameConfig GameConfig); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E7770
		void AddTrack(APilgrimTrack Track); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E7690
	};


	// Class PilgrimCoreRuntime.PilgrimGameConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x3E8 (0x418 - 0x30)
	class UPilgrimGameConfig : public UPrimaryDataAsset	
	{
	public:
		FPilgrimSongSettings SongSettings; // 0x30(0x10)
		FPilgrimGameConfigSettings ConfigSettings; // 0x40(0x348)
		USoundBase MissSound; // 0x388(0x8)
		float MaxHp; // 0x390(0x4)
		float DamagePerHit; // 0x394(0x4)
		TMap WeaponRarityToNoteDamage; // 0x398(0x50)
		TArray StreakDefinitions; // 0x3E8(0x10)
		TArray SideloadLipsyncAnim_BoneCompressionSettings; // 0x3F8(0x10)
		TArray SideloadLipsyncAnim_CurveCompressionSettings; // 0x408(0x10)

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
		TArray ScoreMultiplierDefinitions; // 0x30(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
		TMap IndividualStarPercentageThresholds; // 0x48(0x50)
		TMap BaseGemScoreValue; // 0x98(0x50)

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
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGameUserSettings");
			return ret;
		}

		void SetSongDifficulty(EPilgrimSongDifficulty NewDifficulty); // Flags: Final|Native|Public 0x7FF414DEDB80
		void SetSelectedInstrument(EPilgrimTrackType NewInstrument); // Flags: Final|Native|Public 0x7FF414DEDAA0
		void SetHasSeenFTUEMainStage(bool NewHasSeenFTUEMainStage); // Flags: Final|RequiredAPI|Native|Public 0x7FF414DED9C0
		void SetHasSeenFTUEBattleStage(bool NewHasSeenFTUEBattleStage); // Flags: Final|RequiredAPI|Native|Public 0x7FF414DED8E0
		EPilgrimSongDifficulty GetSongDifficulty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DED800
		EPilgrimTrackType GetSelectedInstrument(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DED720
		bool GetHasSeenFTUEMainStage(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DED640
		bool GetHasSeenFTUEBattleStage(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DED560
	};


	// Class PilgrimCoreRuntime.PilgrimGem
	// Inherited from AActor -> UObject
	// Size: 0x88 (0x318 - 0x290)
	class APilgrimGem : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGemSmashFinished; // 0x298(0x10)
		FMulticastInlineDelegate OnGemEnteredSlopWindow; // 0x2A8(0x10)
		FMulticastInlineDelegate OnGemExitedSlopWindow; // 0x2B8(0x10)
		TWeakObjectPtr ParentSmasherPtr; // 0x2C8(0x8)
		TWeakObjectPtr ParentGamePtr; // 0x2D0(0x8)
		APilgrimTrackSustain RelatedSustain; // 0x2D8(0x8)
		unsigned char UnknownData03_7[0x38]; // 0x2E0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGem");
			return ret;
		}

		void UpdateGemInput(); // Flags: Final|Native|Public 0x7FF4140DEE88
		void OnPilgrimGemEvent__DelegateSignature(APilgrimGem Gem); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140DEDA8
		void OnGemSmashed(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140DECC8
		void OnGemPassed(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140DEBE8
		void OnGemOverdriveChanged(bool bIsOverdrive); // Flags: Event|Public|BlueprintEvent 0x7FF4140DEB08
		void OnGemInputUpdated(FKey BoundKey); // Flags: Event|Public|BlueprintEvent 0x7FF4140DEA28
		void OnGemInit(FTrackItemInfo& Gem); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4140DE948
		void OnCalibrationDebugSet(bool bDebugEnabled, FTrackItemInfo& Gem, TArray& OutDebugPrimitives); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4140DE670
		bool IsOverdriveGem(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140DE590
		EPilgrimTrackLane GetLane(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140DE4B0
		void FinishGemSmash(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DE3D0
		bool AllowHitByInput(bool bIsPressInput, EPilgrimTrackLane Lane); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DE288
	};


	// Class PilgrimCoreRuntime.PilgrimGemAnalyzer
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x138 (0x1D8 - 0xA0)
	class UPilgrimGemAnalyzer : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGameplayEventStarted; // 0xA8(0x10)
		unsigned char UnknownData04_6[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		TMap SongSectionGemDensityDataMap; // 0xC0(0x50)
		TMap GameplaySectionGemDensityDataMap; // 0x110(0x50)
		unsigned char UnknownData05_6[0x50]; // 0x160(0x50) UNKNOWN PROPERTY
		FScalableFloat MinimumEmptyBarsForBreak; // 0x1B0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGemAnalyzer");
			return ret;
		}

		UPilgrimSongData GetSongData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEE360
		UPilgrimSongData GetPilgrimSongData(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEE280
		UPilgrimGemAnalyzer GetPilgrimGemAnalyzer(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEE1A0
		FPilgrimGemDensityData GetGemDensityDataForSongSection(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, int32_t SectionIndexToFind); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DEE0C0
		FPilgrimGemDensityData GetGemDensityDataForGameplaySection(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, int32_t SectionIndexToFind); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DEDFE0
		void GetGemDensityDataForAllSongSections(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, TArray& OutGemDensityData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DEDF00
		void GetGemDensityDataForAllGameplaySections(EPilgrimSongDifficulty Difficulty, EPilgrimTrackType TrackType, TArray& OutGemDensityData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DEDE20
		void GetGemBreaks(EPilgrimTrackType TrackType, EPilgrimSongDifficulty Difficulty, TArray& OutGemBreaks); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DEDD40
		bool GetGemBreakForTrackDifficultyMs(EPilgrimTrackType Track, EPilgrimSongDifficulty Difficulty, float SongMs, FPilgrimGemBreak& FoundBreak, FPilgrimGemBreak& NextBreak); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DEDC60
	};


	// Class PilgrimCoreRuntime.PilgrimGemBreakListener
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UPilgrimGemBreakListener : public UObject	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		AActor ForActor; // 0x38(0x8)
		EPilgrimSongDifficulty Difficulty; // 0x40(0x1)
		EPilgrimTrackType TrackType; // 0x41(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x42(0x2) UNKNOWN PROPERTY
		FPilgrimGemBreak InBreak; // 0x44(0x24)
		bool bIsLocalPlayer; // 0x68(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		FPilgrimGemBreak LastPendingGemBreak; // 0x6C(0x24)
		float LastProcessedSongMs; // 0x90(0x4)
		TWeakObjectPtr SongDataWeak; // 0x94(0x8)
		bool bInitalized; // 0x9C(0x1)
		unsigned char UnknownData07_7[0x23]; // 0x9D(0x23) UNKNOWN PROPERTY

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
		USplineComponent GemSplinePath; // 0x290(0x8)
		float SplineStartInputKey; // 0x298(0x4)
		float SplineOriginInputKey; // 0x29C(0x4)
		float SplineEndInputKey; // 0x2A0(0x4)
		TWeakObjectPtr PilgrimGame; // 0x2A4(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGemSmasher");
			return ret;
		}

		void OverdriveFailedDuringSustainHold(); // Flags: Event|Public|BlueprintEvent 0x7FF414DEE980
		void OnPilgrimGameSet(); // Flags: Event|Public|BlueprintEvent 0x7FF414DEE8A0
		void OnInputUpdated(FKey BoundKey); // Flags: Event|Public|BlueprintEvent 0x7FF414DEE7C0
		void OnInputReleased(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DEE6E0
		void OnInputPressed(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DEE600
		void EndSustainHoldEffect(); // Flags: Event|Public|BlueprintEvent 0x7FF414DEE520
		void BeginSustainHoldEffect(bool bIsOverdrive); // Flags: Event|Public|BlueprintEvent 0x7FF414DEE440
	};


	// Class PilgrimCoreRuntime.PilgrimGemTrackItemMgr
	// Inherited from UPilgrimTrackItemMgr -> UActorComponent -> UObject
	// Size: 0xB8 (0x190 - 0xD8)
	class UPilgrimGemTrackItemMgr : public UPilgrimTrackItemMgr	
	{
	public:
		TMap ActiveGemsMap; // 0xD8(0x50)
		TArray ActiveGems; // 0x128(0x10)
		TSet GemsInSlopWindow; // 0x138(0x50)
		UPilgrimSustainTrackItemMgr SustainTrackItemMgr; // 0x188(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGemTrackItemMgr");
			return ret;
		}

		void OnGemSmashFinished(APilgrimGem Gem); // Flags: Final|Native|Private 0x7FF414DEEA60
	};


	// Class PilgrimCoreRuntime.PilgrimInputConfig
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xC0 (0xF0 - 0x30)
	class UPilgrimInputConfig : public UPrimaryDataAsset	
	{
	public:
		TMap InputActionToPilgrimLanePress; // 0x30(0x50)
		TMap InputActionToPilgrimLaneRelease; // 0x80(0x50)
		UInputAction OverdriveInputAction; // 0xD0(0x8)
		UInputAction Overdrive5LaneInputAction; // 0xD8(0x8)
		UInputAction GuitarStrumInputAction; // 0xE0(0x8)
		UInputAction Modulate; // 0xE8(0x8)

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

		EPilgrimLeaderboardType SoloLeaderboardTypeFromInstrument(EPilgrimTrackType Instrument); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEF320
		FString LeaderboardTypeToString(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEF240
		EPilgrimLeaderboardType LeaderboardTypeFromString(FString LeaderboardString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEF160
		bool IsSoloLeaderboard(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEF080
		bool IsBandLeaderboard(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEEFA0
		EPilgrimTrackType InstrumentFromSoloLeaderboardType(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEEEC0
		EPilgrimTrackType GetInstrumentFromGameplayTag(FGameplayTag& InstrumentGametag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DEEDE0
		FGameplayTag GetGameplayTagFromInstrument(EPilgrimTrackType Instrument); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEED00
		int32_t BandSizeFromLeaderboardType(EPilgrimLeaderboardType LeaderboardType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEEC20
		EPilgrimLeaderboardType BandLeaderboardTypeFromSize(int32_t Size); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DEEB40
	};


	// Class PilgrimCoreRuntime.PilgrimLeaderboardManager
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x4A8 (0x548 - 0xA0)
	class UPilgrimLeaderboardManager : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData02_3[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY
		TMap RequestCacheWrapperMap; // 0x100(0x50)
		unsigned char UnknownData03_7[0x3F8]; // 0x150(0x3F8) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_5[0xE7]; // 0xC1(0xE7) UNKNOWN PROPERTY
		float FriendPopupTimeSeconds; // 0x1A8(0x4)
		unsigned char UnknownData03_7[0x14]; // 0x1AC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimLeaderboardPlayerComponent");
			return ret;
		}

		void SetFriendFeedCache(FPilgrimPlayerFeedResult& FeedResult); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4140EB778
		void SetCurrentSetlistInfo(FName SongShortName, EPilgrimTrackType Instrument); // Flags: Native|Public|BlueprintCallable 0x7FF4140EB698
		void ServerRequestSpotlightCompetitions(FPilgrimSpotlightCompetitionParams Params, int32_t RequestID); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF4140EB5B8
		void ServerCachePlayerFriendsHistory(FPilgrimPlayerHistoryParams HistoryParams, TArray FriendAccountIds, int32_t RequestID); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF4140EB4D8
		void OnRep_ChangedBandFriendLeaderboardOption(); // Flags: Final|Native|Protected 0x7FF4140EB3F8
		void OnFriendsSurpassed__DelegateSignature(FPilgrimPlayerFeedResultEntry HighestFriendEntry, int32_t TotalFriendsSurpassed); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140EB318
		void OnBandFriendLeaderboardOptionChanged__DelegateSignature(bool bOptionEnabled); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140EB238
		bool IsBandFriendLeaderboardEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140EB158
		void GetSpotlightCompetitions(FPilgrimGetSpotlightParams& SpotlightParams, TArray& OutCompetitions); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140EAFB8
		void GetPostMatchFriendRankAndDelta(int32_t FinalScore, int32_t& OutRank, int32_t& OutDelta); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4140EAED8
		void ClientRequestSpotlightCompetitionsComplete(FPilgrimSpotlightCompetitionParams Params, TArray SpotlightCompetitions, int32_t RequestID); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF4140EAC78
		void ClientCachePlayerFriendsHistoryComplete(FPilgrimPlayerHistoryParams HistoryParams, TArray Results, int32_t RequestID); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF4140EA830
		void CheckPlayerScoreForFriendSurpasser(int32_t CurrentScore); // Flags: Native|Public|BlueprintCallable 0x7FF4140EA750
	};


	// Class PilgrimCoreRuntime.PilgrimMediaStreamer
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UPilgrimMediaStreamer : public UActorComponent	
	{
	public:
		UStemConfiguration BusStemConfiguration; // 0xA0(0x8)
		UPilgrimSongMetadata Song; // 0xA8(0x8)
		UPilgrimSongMetadata PendingSong; // 0xB0(0x8)
		UFortBaseStreamingVideo FortBaseStreaming; // 0xB8(0x8)
		UStemmedMediaStreamAsset StemmedMediaStreamAsset; // 0xC0(0x8)
		UMidiFile MidiFile; // 0xC8(0x8)
		FMulticastInlineDelegate OnStreamerPrepared; // 0xD0(0x10)
		EPilgrimStreamerStatus StreamingStatus; // 0xE0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		USkeleton LipSyncSkeleton; // 0xE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimMediaStreamer");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EC118
		void PrepareSong(UPilgrimSongMetadata InSong); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EC038
		void PlaySong(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EBF58
		void OnVideoSuccess(); // Flags: Final|Native|Private 0x7FF4140EBE78
		void OnVideoOpenTimeout(); // Flags: Final|Native|Private 0x7FF4140EBD98
		void OnVideoOpenFailed(FString FailedUrl); // Flags: Final|Native|Private 0x7FF4140EBCB8
		void OnVideoOpened(FString OpenedUrl); // Flags: Final|Native|Private 0x7FF4140EBBD8
		void OnVideoError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Private 0x7FF4140EBAF8
		void OnVideoClosed(); // Flags: Final|Native|Private 0x7FF4140EBA18
		void OnStreamerPreparedEvent__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140EB938
		void OnSongDataDownloaded(UCatalogData CatalogData, bool bSuccess); // Flags: Final|Native|Private 0x7FF4140EB858
	};


	// Class PilgrimCoreRuntime.PilgrimMidiEventRouter
	// Inherited from UObject
	// Size: 0x3E0 (0x408 - 0x28)
	class UPilgrimMidiEventRouter : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x3E0]; // 0x28(0x3E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimMidiEventRouter");
			return ret;
		}
	};


	// Class PilgrimCoreRuntime.PilgrimNowBar
	// Inherited from AActor -> UObject
	// Size: 0x60 (0x2F0 - 0x290)
	class APilgrimNowBar : public AActor	
	{
	public:
		USplineComponent BeatMarkerSplinePath; // 0x290(0x8)
		TMap LaneToSmasherMap; // 0x298(0x50)
		TWeakObjectPtr PilgrimGame; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimNowBar");
			return ret;
		}

		void SetGemSmasher(EPilgrimTrackLane Lane, APilgrimGemSmasher Smasher); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DEF4E0
		void OnPilgrimGameSet(); // Flags: Event|Public|BlueprintEvent 0x7FF414DEF400
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
		TWeakObjectPtr PilgrimPresetSelectorClass; // 0x70(0x20)
		TWeakObjectPtr PilgrimPresetConfiguration; // 0x90(0x20)

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
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TMap SongPerformanceData; // 0xA8(0x50)
		UPilgrimSongMetadata SongMetaData; // 0xF8(0x8)
		APilgrimTrack MainTrack; // 0x100(0x8)
		UPilgrimGame PilgrimGame; // 0x108(0x8)
		FGameplayEventListenerHandle OverdriveActiveEventHandle; // 0x110(0x1C)
		int32_t MaxStreak; // 0x12C(0x4)
		int32_t CurrentStreak; // 0x130(0x4)
		float TimeInOverdriveMs; // 0x134(0x4)
		bool InOverdrive; // 0x138(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x139(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPerformanceTrackerComponent");
			return ret;
		}

		void HandleOverdriveActiveChangedEvent(FPilgrimEvent_Scoring_OverdriveActiveChanged& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DEFBE0
		void HandleOnSongEnded(); // Flags: Final|Native|Protected 0x7FF414DEFB00
		float GetTotalDeviation(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEFA20
		float GetSampleDeviation(TArray& Samples, bool IsPopulation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DEF940
		float GetSampleAverage(TArray& Samples); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DEF860
		FPilgrimEvent_Scoring_PerformanceDataResult GetResultData(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEF780
		TArray GetLaneOffsets(EPilgrimTrackLane Lane, ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEF6A0
		float GetAverage(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DEF5C0
	};


	// Class PilgrimCoreRuntime.PilgrimPerformanceTrackerSaveData
	// Inherited from USaveGame -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UPilgrimPerformanceTrackerSaveData : public USaveGame	
	{
	public:
		TMap SongPerformanceData; // 0x28(0x50)

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
		UDataTable DefaultUnbindsDataTable; // 0x110(0x8)
		UInputAction CycleInputsInputAction; // 0x118(0x8)
		unsigned char UnknownData08_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		UInputAction CycleLanesInputAction; // 0x128(0x8)
		unsigned char UnknownData09_6[0x8]; // 0x130(0x8) UNKNOWN PROPERTY
		UInputAction EmotePickerInputAction; // 0x138(0x8)
		TMap FallbackKeyboardLaneInputMappingConfigs; // 0x140(0x50)
		TMap FallbackControllerLaneInputMappingConfigs; // 0x190(0x50)
		UFortInputMappingContext KeyboardAsPeripheralGuitarBeatmatchIMC; // 0x1E0(0x8)
		UFortInputMappingContext GamepadAsPeripheralGuitarBeatmatchIMC; // 0x1E8(0x8)
		UFortInputMappingContext PeripheralGuitarBeatmatchIMC; // 0x1F0(0x8)
		UFortInputMappingContext PeripheralGuitarBeatmatchIMC_NonPro4Lanes; // 0x1F8(0x8)
		TMap LaneInputMappingConfigs; // 0x200(0x50)
		FPilgrimTouchBrushesMappingConfig TouchBrushesConfig; // 0x250(0x10)
		char SelectedNumInputLanes; // 0x260(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x261(0x7) UNKNOWN PROPERTY
		UFortInputMappingContext SelectedPCBeatmatchIMC; // 0x268(0x8)
		unsigned char UnknownData11_6[0x8]; // 0x270(0x8) UNKNOWN PROPERTY
		UFortInputMappingContext SelectedConsoleBeatmatchIMC; // 0x278(0x8)
		unsigned char UnknownData12_6[0x8]; // 0x280(0x8) UNKNOWN PROPERTY
		UFortInputMappingContext SelectedPeripheralBeatmatchIMC; // 0x288(0x8)
		unsigned char UnknownData13_6[0x50]; // 0x290(0x50) UNKNOWN PROPERTY
		UPilgrimGameUserSettings PilgrimGameUserSettings; // 0x2E0(0x8)
		TWeakObjectPtr PilgrimPresetConfiguration; // 0x2E8(0x8)
		unsigned char UnknownData14_6[0x50]; // 0x2F0(0x50) UNKNOWN PROPERTY
		TWeakObjectPtr ClientPilgrimGame; // 0x340(0x8)
		unsigned char UnknownData15_7[0x8]; // 0x348(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPlayerControllerComponent");
			return ret;
		}

		void Solo_SendRequestToReplayPreviousSong(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EF048
		void Solo_SendRequestToPlayNextSong(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EEF68
		void Solo_SendRequestToLeaveStage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EEE88
		void SetNumInputLanes(char NumLanes); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EEDA8
		void SetDesiredInputMappingContext(UFortInputMappingContext NewContext, EHardwareDevicePrimaryType DeviceType, bool bShouldUpdateSettings); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EECC8
		void ServerSendTimedInput(FPilgrimTimedInput TimedInput); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4140EEBE8
		void ServerSendSyncHeartbeatMessage(); // Flags: Net|Native|Event|Protected|NetServer 0x7FF4140EEB08
		void ServerHandleUpdateMusicBattle(EMusicBattleClientUpdate MusicBattleUpdate); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4140EEA28
		void ServerHandleStateMachineRequest(EPilgrimStateMachineMessage StateMachineMessage); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF4140EE948
		void Server_RequestClientCloseEmotePicker(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EE868
		void SendUpdateToMusicBattle(EMusicBattleClientUpdate MusicBattleUpdate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EE788
		void SendRequestToStopAndSkipPostGame(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EE6A8
		void SendRequestToRestartSong(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EE5C8
		void OnServerTimedInputReceived__DelegateSignature(UPilgrimPlayerControllerComponent PlayerControllerComponent, FPilgrimTimedInput& TimedInput); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140EE4E8
		void OnServerSyncHeartbeatMessageReceived__DelegateSignature(UPilgrimPlayerControllerComponent PlayerControllerComponent); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140EE408
		void OnPlayerSentStateMachineMessage__DelegateSignature(UPilgrimPlayerControllerComponent PlayerControllerComponent, EPilgrimStateMachineMessage StateMachineMessage); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140EE2C0
		void OnPilgrimGameStart(UPilgrimGame PilgrimGame); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140EE1E0
		void OnPilgrimGameEnd(UPilgrimGame PilgrimGame); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4140EE100
		void OnMusicBattleClientUpdateReceived__DelegateSignature(UPilgrimPlayerControllerComponent PlayerControllerComponent, EMusicBattleClientUpdate MusicBattleUpdate); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140EE020
		void OnInputSettingsChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140EDF40
		void OnEmotePicker(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EDE60
		void OnAutoRunEnabledChange(bool bAutoRunEnabled); // Flags: Final|Native|Private 0x7FF4140EDD80
		void Multiplayer_SendRequestToLeaveStage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EDCA0
		void LoadInputConfigurationFromPartition(); // Flags: Final|Native|Public 0x7FF4140EDBC0
		bool IsUsingGamepad(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140EDAE0
		bool IsLocallyControlled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140EDA00
		bool IsGamepadVibrationOnGemSmashEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ED920
		void InputPresetEvent__DelegateSignature(AFortPlayerController FortPlayerController, UFortInputMappingContext InputMappingContext); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140ED840
		bool HasConnectedPeripheral(EPilgrimPeripheralInputMode Peripheral); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ED760
		void HandleOnInputDeviceChanged(FPlatformUserId UserId, FInputDeviceId DeviceID); // Flags: Final|Native|Private 0x7FF4140ED680
		bool GetTouchBrushForInputAction(FSlateBrush& OutBrush, UInputAction InputAction); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140ED5A0
		UFortInputMappingContext GetSelectedPreset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ED4C0
		UFortInputMappingContext GetSelectedPCBeamatchInputMappingContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ED3E0
		UFortInputMappingContext GetSelectedConsoleBeamatchInputMappingContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ED300
		UPilgrimGameUserSettings GetPilgrimGameUserSettings(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140ED220
		UPilgrimClientSettingRecordPartition GetPilgrimClientSettingRecordPartition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ED140
		int32_t GetNumRelevantInputPresets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ED060
		UFortInputMappingContext GetLastSelectedPreset(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140ECF80
		bool GetIsCurrentDeviceValidForTrackType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140ECEA0
		bool GetIsCurrentDevicePeripheral(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140ECDC0
		float GetHoldSecondsToSwitchNumLanes(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF4140ECCE0
		int32_t GetCurrentPresetIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ECC00
		EPilgrimPeripheralInputMode GetCurrentDevicePeripheralType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ECB20
		UFortInputMappingContext FindFirstPresetMatchingCurrentKeybinds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140ECA40
		void DeactivateInputPreset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EC960
		void CycleSelectedPreset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EC880
		void CycleSelectedNumInputLanes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EC7A0
		void ClientUseOverdriveItem(float OverdriveAmount, bool bDeployImmediately); // Flags: Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable 0x7FF4140EC6C0
		void ClientDrainOD(); // Flags: Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable 0x7FF4140EC5E0
		void Client_CloseEmotePicker(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF4140EC500
		void CheckConnectedPeripherals(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EC420
		bool AreSelectedInputMappingContextsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140EC340
		void ActivateSelectedInputMappingContexts(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140EC260
	};


	// Class PilgrimCoreRuntime.PilgrimPlayspace
	// Inherited from ASparksMusicPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x40 (0x790 - 0x750)
	class APilgrimPlayspace : public ASparksMusicPlayspace	
	{
	public:
		TArray PilgrimMusicBattleInstances; // 0x750(0x10)
		UNetworkedMusicClockManager MusicClockManager; // 0x760(0x8)
		UPilgrimPlayspaceComponent_SongPreloader SongPreloader; // 0x768(0x8)
		UPilgrimMediaStreamer MediaStreamer; // 0x770(0x8)
		UPilgrimGemAnalyzer GemAnalyzer; // 0x778(0x8)
		UPilgrimPlayspaceComponent_LipSyncAssetManager PilgrimLipSyncManager; // 0x780(0x8)
		UPilgrimGameConfig PilgrimGameConfig; // 0x788(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPlayspace");
			return ret;
		}

		UPilgrimGame TryGetPilgrimGameForTeam(int32_t TeamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0AC0
		UPilgrimGame TryGetPilgrimGameForPlayer(AController Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF09E0
		APilgrimMusicBattleInstance TryGetMusicBattleInstanceForTeam(int32_t Team); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0900
		bool HasAnotherSongToPlay(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0820
		TArray GetStandinPlayerStates(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0740
		TArray GetStandinPlayerPawns(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0660
		UPilgrimGame GetPilgrimGameForTeam(int32_t TeamIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0580
		UNetworkedMusicClockManager GetNetworkedMusicClockManager(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DF04A0
		UMusicClockComponent GetMusicClock(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DF03C0
		APilgrimMusicBattleInstance GetMusicBattleInstanceForTeam(int32_t Team); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF02E0
		APilgrimMusicBattleInstance GetMusicBattleInstanceForPlayer(AController Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0200
		UPilgrimGameConfig GetConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0120
		TArray GetAllMusicBattleInstances(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0040
		void ClearMusicBattleInstances(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DEFF60
		void BroadcastCameraDirectorIntermissionEvent(FGameplayTagContainer TagsToSend); // Flags: Native|Public|BlueprintCallable|Const 0x7FF414DEFE80
		void BroadcastCameraDirectorDynamicEvent(FGameplayTagContainer TagsToSend, AActor Target, float ShotTimeLength, bool bWaitForTransition); // Flags: Native|Public|BlueprintCallable|Const 0x7FF414DEFDA0
		void AddMusicBattleInstance(APilgrimMusicBattleInstance MusicBattleInstance); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DEFCC0
	};


	// Class PilgrimCoreRuntime.PilgrimPlayspaceComponent_LipSyncAssetManager
	// Inherited from UPlayspaceComponent_LipSyncAssetManager -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xD0 - 0xC8)
	class UPilgrimPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager	
	{
	public:
		UAnimSequence CachedLipsyncAnimSequence; // 0xC8(0x8)

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
		unsigned char UnknownData02_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FText SetlistTitle; // 0x38(0x10)
		FText Description; // 0x48(0x10)
		TArray SongShortNameList; // 0x58(0x10)
		FGameplayTag SetlistTag; // 0x68(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer AdditionalTags; // 0x70(0x20)
		TWeakObjectPtr SetlistArt; // 0x90(0x20)

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
		UFortInputMappingContext GlobalInputMappingContext; // 0x30(0x8)
		UFortInputMappingContext CheatInputMappingContext; // 0x38(0x8)
		UFortInputMappingContext GreenRoomInputMappingContext; // 0x40(0x8)
		UFortInputMappingContext GreenRoomAltInputMappingContext; // 0x48(0x8)
		TMap LaneInputMappingConfigs; // 0x50(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPresetConfiguration");
			return ret;
		}

		FPilgrimLaneInputMappingConfig GetLaneInputConfigForLanes(int32_t NumLanes); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0C80
		TArray GetDeviceInputMappingContexts(int32_t NumLanes, EHardwareDevicePrimaryType DeviceType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF0BA0
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

		bool QuestPassesFilter(TScriptInterface QuestInterface, FPilgrimQuestFilter& QuestFilter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414DF0F20
		FPilgrimQuestDisplayInfo GetQuestDisplayInfo(UObject WorldContextObject, TScriptInterface Quest); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414DF0E40
		void GetFilteredQuests(TArray& OutQuests, APlayerState Player, FPilgrimQuestFilter& Filter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414DF0D60
	};


	// Class PilgrimCoreRuntime.PilgrimRandomSetlist
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UPilgrimRandomSetlist : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		int32_t NumSongsToPopulate; // 0xA8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery SongFilterQuery; // 0xB0(0x48)
		TArray SongList; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimRandomSetlist");
			return ret;
		}

		void PopulateRandomSongs(UObject WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414DF1000
	};


	// Class PilgrimCoreRuntime.PilgrimRenderTargetComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UPilgrimRenderTargetComponent : public UControllerComponent	
	{
	public:
		UTextureRenderTarget2D RenderTarget; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimRenderTargetComponent");
			return ret;
		}

		FVector4f GetUVScaleOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414DF1380
		UTextureRenderTarget2D GetRenderTarget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF12A0
		FVector4f GetLeftTopRightBottom(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414DF11C0
		FMatrix CropTargetAndGetProjectionMatrix(FVector4f& InLeftTopRightBottom, float FOV); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414DF10E0
	};


	// Class PilgrimCoreRuntime.PilgrimRequestFriendScoreWrapper
	// Inherited from UObject
	// Size: 0xF0 (0x118 - 0x28)
	class UPilgrimRequestFriendScoreWrapper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xF0]; // 0x28(0xF0) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData04_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FPilgrimGameProgress GameProgress; // 0x30(0x80)
		unsigned char UnknownData05_6[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY
		FPilgrimGameConfigSettings GameConfigSettings; // 0xD0(0x348)
		unsigned char UnknownData06_6[0x18]; // 0x418(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr OwningPlayerState; // 0x430(0x8)
		unsigned char UnknownData07_7[0x168]; // 0x438(0x168) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimScoringModel");
			return ret;
		}

		int32_t GetScoreRequiredForStar(int32_t Stars); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF1A80
		float GetNormalizedBaseGemHitValue(UPilgrimSongData SongData, FPilgrimGameConfigSettings& InGameConfigSettings, EPilgrimSongDifficulty InDifficulty, EPilgrimTrackType InTrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DF19A0
		float ComputeSustainScorePerBeat(EPilgrimScoringMode ScoringMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF18C0
		float ComputeStreakMultiplier(EPilgrimScoringMode ScoringMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF17E0
		float ComputeOverdriveMultiplier(EPilgrimScoringMode ScoringMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF1700
		float ComputeMaxScore(UPilgrimSongData SongData, FPilgrimGameConfigSettings& InGameConfigSettings, EPilgrimSongDifficulty InDifficulty, EPilgrimTrackType InTrackType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414DF1620
		float ComputeGemBaseScoreValue(EPilgrimScoringMode ScoringMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF1540
		float ComputeAccuracyMultiplier(EPilgrimScoringMode ScoringMode, FPilgrimGemHitAccuracy& Accuracy); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DF1460
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

		float Apply(float InputValue); // Flags: Event|Public|BlueprintEvent 0x7FF414DF1B60
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

		void RemoveUnavailableSongs(UObject WorldContextObject, FPlayspaceUser& ExcludedUser); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414DF1FC0
		TArray GetSongList(UObject WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DF1EE0
		UPilgrimSongMetadata GetSongAtIndex(UObject WorldContextObject, int32_t Index); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DF1E00
		FTimespan GetSetlistDuration(UObject WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DF1D20
		int32_t GetNumSongs(UObject WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DF1C40
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
		TMap SongsByShortName; // 0xA0(0x50)
		TMap SongsByShortMcpTemplateId; // 0xF0(0x50)
		unsigned char UnknownData01_7[0x10]; // 0x140(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimSongCatalog");
			return ret;
		}

		bool PlayerHasSongEntitlement(AFortPlayerController Player, UPilgrimSongMetadata Song); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DF26C0
		void OnCMSCatalogRetrieved(bool bSuccess); // Flags: Final|Native|Private 0x7FF414DF25E0
		bool IsSongShared(AFortPlayerController Player, FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2500
		TArray GetSortedSongList(EPilgrimSongSortMethod SortMethod, EPilgrimSongSortDirection SortDirection, FGameplayTagQuery& TagQuery); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2420
		UPilgrimSongMetadata GetSongByShortName(FName ShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2340
		UPilgrimSongMetadata GetSongByMcpTemplateId(FString McpTemplateId); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2260
		TArray GetRandomSongList(int32_t NumSongs, FGameplayTagQuery& TagQuery); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2180
		UPilgrimSongCatalog GetPilgrimSongCatalog(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DF20A0
	};


	// Class PilgrimCoreRuntime.PilgrimSongData
	// Inherited from UParsedMidiEventData -> UObject
	// Size: 0xB8 (0x188 - 0xD0)
	class UPilgrimSongData : public UParsedMidiEventData	
	{
	public:
		unsigned char UnknownData02_3[0x50]; // 0xD0(0x50) UNKNOWN PROPERTY
		TMap TracksPerDifficulty; // 0x120(0x50)
		TArray BeatMarkers; // 0x170(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x180(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData05_3[0x20]; // 0x30(0x20) UNKNOWN PROPERTY
		FName ShortName; // 0x50(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FText Title; // 0x58(0x10)
		FText Artist; // 0x68(0x10)
		FGameplayTagContainer AdditionalTags; // 0x78(0x20)
		TArray Genre; // 0x98(0x10)
		int32_t Year; // 0xA8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TMap IntensityPerInstrument; // 0xB0(0x50)
		EMusicKey Key; // 0x100(0x1)
		EMusicKeyMode Mode; // 0x101(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x102(0x6) UNKNOWN PROPERTY
		FString StreamingVUID; // 0x108(0x10)
		FString PreviewVUID; // 0x118(0x10)
		FTimespan duration; // 0x128(0x8)
		ESparksInstrumentType DrumStartingIntrument; // 0x130(0x1)
		ESparksInstrumentType BassStartingIntrument; // 0x131(0x1)
		ESparksInstrumentType GuitarStartingIntrument; // 0x132(0x1)
		ESparksInstrumentType VocalsStartingIntrument; // 0x133(0x1)
		unsigned char UnknownData09_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		UCatalogData SparksCatalogData; // 0x138(0x8)
		TWeakObjectPtr StemmedMusicAsset; // 0x140(0x20)
		TWeakObjectPtr LipSyncAnimAsset; // 0x160(0x20)
		TWeakObjectPtr StemmedMusicAssetRuntime; // 0x180(0x20)
		FString SanitizedSearchString; // 0x1A0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimSongMetadata");
			return ret;
		}

		void SetSanitizedSearchString(FString SearchString); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF3840
		int32_t GetYear(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF3760
		FText GetTitle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF3680
		FString GetStreamingVUID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF35A0
		TWeakObjectPtr GetStemmedMusicAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF34C0
		ESparksInstrumentType GetStartingInstrumentType(EPilgrimTrackType TrackType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF33E0
		UCatalogData GetSparksCatalogData(UObject WorldContext); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF3300
		FName GetShortName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF3220
		FString GetSanitizedSearchString(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF3140
		int32_t GetRawIntensity(EPilgrimTrackType Instrument); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF3060
		FString GetPreviewVUID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2F80
		EMusicKeyMode GetMusicMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2EA0
		EMusicKey GetMusicKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2DC0
		int32_t GetMappedIntensity(EPilgrimTrackType Instrument, int32_t Min, int32_t Max); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2CE0
		TWeakObjectPtr GetLipSyncAnimAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2C00
		TMap GetIntensityPerInstrument(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2B20
		FTimespan GetDuration(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2A40
		FText GetArtist(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2960
		FString GetAlbumArtUrl(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF2880
		FGameplayTagContainer GetAdditionalTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF27A0
	};


	// Class PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UPilgrimPlayspaceComponent_SongPreloader : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FName SongToLoad; // 0xB8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		UPilgrimSongMetadata SongMetaData; // 0xC0(0x8)
		TMap PlayersFinishedLoading; // 0xC8(0x50)
		bool bServerFinishedLoading; // 0x118(0x1)
		bool bBroadcastedLoadingFinished; // 0x119(0x1)
		unsigned char UnknownData05_6[0x16]; // 0x11A(0x16) UNKNOWN PROPERTY
		FTimerHandle LoadTimeoutTimerHandle; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimPlayspaceComponent_SongPreloader");
			return ret;
		}

		void OnStreamerPrepared(); // Flags: Final|Native|Private 0x7FF414DF3AE0
		void NetMulticast_LoadSong(FName Song); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414DF3A00
		void NetMulticast_HandleAllLoadingFinished(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414DF3920
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

		void ServerKickPlayerForNetworkIssues(FText Reason); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414DF3CA0
		void ServerFinishedLoadingSong(FName Song); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414DF3BC0
	};


	// Class PilgrimCoreRuntime.PilgrimSustainTrackItemMgr
	// Inherited from UPilgrimTrackItemMgr -> UActorComponent -> UObject
	// Size: 0x60 (0x138 - 0xD8)
	class UPilgrimSustainTrackItemMgr : public UPilgrimTrackItemMgr	
	{
	public:
		TArray ActiveSustains; // 0xD8(0x10)
		TMap ActiveSustainsMap; // 0xE8(0x50)

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
	// Size: 0x40 (0x320 - 0x2E0)
	class UPilgrimTouchButtonBase : public UCommonUserWidget	
	{
	public:
		UInputAction PressAction; // 0x2E0(0x8)
		EWidgetTouchKbmControllerTransitionType WidgetTransitionType; // 0x2E8(0x1)
		bool DeactivateInputActionIfDragOutsideHitbox; // 0x2E9(0x1)
		bool DeactivateInputActionIfCollapsed; // 0x2EA(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x2EB(0x1) UNKNOWN PROPERTY
		FLinearColor PressedColor; // 0x2EC(0x10)
		FLinearColor ReleasedColor; // 0x2FC(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x30C(0x4) UNKNOWN PROPERTY
		UImage Image_Icon; // 0x310(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x318(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTouchButtonBase");
			return ret;
		}

		bool IsHolding(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DF3E60
		void HandleInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DF3D80
	};


	// Class PilgrimCoreRuntime.PilgrimTrack
	// Inherited from AActor -> UObject
	// Size: 0x120 (0x3B0 - 0x290)
	class APilgrimTrack : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UChildActorComponent NowBarChildActor; // 0x298(0x8)
		USceneComponent TopOfTrack; // 0x2A0(0x8)
		UClass PilgrimGemClass; // 0x2A8(0x8)
		UClass BeatMarkerClass; // 0x2B0(0x8)
		UClass SustainClass; // 0x2B8(0x8)
		USceneComponent SceneRoot; // 0x2C0(0x8)
		UPilgrimTrackCaptureComponent TrackCaptureComponent2D; // 0x2C8(0x8)
		UMaterialInterface PilgrimTrackAlphaMaterial; // 0x2D0(0x8)
		UMaterialParameterCollection PilgrimTrackMaterialParameterCollection; // 0x2D8(0x8)
		UMaterialParameterCollectionInstance PilgrimTrackMaterialParameterCollectionInstance; // 0x2E0(0x8)
		TWeakObjectPtr ParentGame; // 0x2E8(0x20)
		USplineComponent BeatMarkerSpline; // 0x308(0x8)
		TWeakObjectPtr CachedNowBar; // 0x310(0x8)
		UPilgrimGemTrackItemMgr GemMgr; // 0x318(0x8)
		UPilgrimSustainTrackItemMgr SustainMgr; // 0x320(0x8)
		UPilgrimBeatMarkerTrackItemMgr BeatMarkerMgr; // 0x328(0x8)
		TMap SmasherMap; // 0x330(0x50)
		unsigned char UnknownData03_7[0x30]; // 0x380(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrack");
			return ret;
		}

		void UpdateBeatmarkerVisibility(bool bNewIsVisible); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF42C0
		void OnGemSmashed(EPilgrimTrackLane Lane, FPilgrimGemHitAccuracy& Accuracy, bool bIsOverdrive); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414DF41E0
		void OnGameEnded(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DF4100
		void HideAllItems(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF4020
		void AddActorItemToScene(AActor Item); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DF3F40
	};


	// Class PilgrimCoreRuntime.PilgrimTrackCaptureComponent
	// Inherited from USceneCaptureComponent2D -> USceneCaptureComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB10 - 0xB00)
	class UPilgrimTrackCaptureComponent : public USceneCaptureComponent2D	
	{
	public:
		AActor ViewOwner; // 0xB00(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB08(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrackCaptureComponent");
			return ret;
		}

		void SetViewOwnerActor(AActor InViewOwner); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF4560
		void IncludeActor(AActor TrackActor, bool bIncludeFromChildActors); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF4480
		AActor GetViewOwnerActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF43A0
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

		void OnGameEnded(); // Flags: Event|Public|BlueprintEvent 0x7FF414DF4640
	};


	// Class PilgrimCoreRuntime.PilgrimTrackSustain
	// Inherited from AActor -> UObject
	// Size: 0x88 (0x318 - 0x290)
	class APilgrimTrackSustain : public AActor	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		float InputKeyStartOfSustain; // 0x298(0x4)
		float InputKeyEndOfSustain; // 0x29C(0x4)
		bool bIsCurrentlyPressed; // 0x2A0(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x2A1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr ParentGamePtr; // 0x2A4(0x8)
		TWeakObjectPtr ParentSmasherPtr; // 0x2AC(0x8)
		unsigned char UnknownData06_6[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY
		TArray CreatedSplineMeshes; // 0x2B8(0x10)
		int32_t NumTrackSegments; // 0x2C8(0x4)
		float SplineIndexStart; // 0x2CC(0x4)
		float SplineIndexEnd; // 0x2D0(0x4)
		float SustainUVStart; // 0x2D4(0x4)
		float SustainUVEnd; // 0x2D8(0x4)
		float FullSustainUnclampedLength; // 0x2DC(0x4)
		unsigned char UnknownData07_7[0x38]; // 0x2E0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimTrackSustain");
			return ret;
		}

		void UpdateSplineInputKeys(float NewKeyStart, float NewKeyEnd); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF51A0
		void PlaceSustainAlongSpline(); // Flags: Event|Public|BlueprintEvent 0x7FF414DF50C0
		void OnSustainKeyRelease(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DF4FE0
		void OnSustainKeyDownSuccess(float CurrentModulation); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DF4F00
		void OnSustainInit(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DF4E20
		void OnSustainFail(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DF4D40
		void OnModulationChanged(float CurrentModulation); // Flags: Event|Public|BlueprintEvent 0x7FF414DF4C60
		void OnIsOverdriveChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414DF4B80
		void OnAttachToSmasher(APilgrimGemSmasher Smasher); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF4AA0
		void LayoutSplineMeshes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DF49C0
		bool IsInActiveOverdriveSection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF48E0
		FTrackItemInfo GetTrackItemInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF4800
		USplineComponent GetSplinePathIfRelevant(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF4720
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

		bool IsGuitarPeripheralTrack(EPilgrimTrackType TrackType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DF5280
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
		unsigned char UnknownData01_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimWaitForEventRouterAction");
			return ret;
		}

		UPilgrimWaitForEventRouterAction PilgrimWaitForEventRouter(AActor ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140EF528
		void PilgrimEventRouterAvailableDelegate__DelegateSignature(UGameplayEventRouterComponent EventRouter); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140EF448
		void HandleContextActorEndPlay(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Private 0x7FF4140EF368
	};


	// Class PilgrimCoreRuntime.ServerPilgrimGame
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UServerPilgrimGame : public UObject	
	{
	public:
		UPilgrimGameEvaluator GameEvaluator; // 0x28(0x8)
		UPilgrimScoringModel ScoringModel; // 0x30(0x8)
		UPilgrimSongData SongData; // 0x38(0x8)
		UPilgrimSongMetadata SongBeingPlayed; // 0x40(0x8)
		TWeakObjectPtr OwningPlayerState; // 0x48(0x8)
		UPilgrimGameConfig PilgrimGameConfig; // 0x50(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x58(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.ServerPilgrimGame");
			return ret;
		}

		float GetScoringDensity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DF5360
	};


	// Class PilgrimCoreRuntime.FortClientPilot_QuickSmokeSparks
	// Inherited from UFortClientPilot_GameplayBase -> UFortClientPilot_Base -> UClientPilotComponent -> UObject
	// Size: 0x10 (0x320 - 0x310)
	class UFortClientPilot_QuickSmokeSparks : public UFortClientPilot_GameplayBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x310(0x10) UNKNOWN PROPERTY

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

		UGameplayEventRouterComponent GetGameplayEventRouter(AActor ContextActor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DF5440
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
		unsigned char UnknownData12_6[0x7]; // 0x2A1(0x7) UNKNOWN PROPERTY
		FPilgrimMusicBattleData MusicBattleData; // 0x2A8(0x48)
		FName SongToPlayShortName; // 0x2F0(0x4)
		unsigned char UnknownData13_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		UPilgrimSongMetadata SongToPlay; // 0x2F8(0x8)
		EPilgrimSongDifficulty SongDifficultyToPlay; // 0x300(0x1)
		bool bClientHasReceivedSongToPlay; // 0x301(0x1)
		unsigned char UnknownData14_6[0x6]; // 0x302(0x6) UNKNOWN PROPERTY
		FPilgrimSinglePlayerBattleData SinglePlayerBattleData; // 0x308(0x10)
		int32_t LocalPlayerIndex; // 0x318(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x31C(0x4) UNKNOWN PROPERTY
		TArray MusicBattlePlayers; // 0x320(0x10)
		FMusicBattleSinglePlayerOptions SinglePlayerBattleOptions; // 0x330(0x8)
		UPilgrimGameConfig PilgrimGameConfig; // 0x338(0x8)
		EMusicBattleType MusicBattleType; // 0x340(0x1)
		unsigned char UnknownData16_6[0x7]; // 0x341(0x7) UNKNOWN PROPERTY
		UAudioComponent LocalMetasoundPlayer; // 0x348(0x8)
		UAudioComponent LocalMetasoundMixer; // 0x350(0x8)
		TArray DisableScoreCeilingForSongs; // 0x358(0x10)
		int32_t SrvFIThrMs; // 0x368(0x4)
		unsigned char UnknownData17_6[0x84]; // 0x36C(0x84) UNKNOWN PROPERTY
		UHarmonixAudioAnalyzerResultsProvider FFTAnalyzerResultsProvider; // 0x3F0(0x8)
		TMap CurrentPlayerToIndexMap; // 0x3F8(0x50)
		UPilgrimSongData SongData; // 0x448(0x8)
		unsigned char UnknownData18_6[0x50]; // 0x450(0x50) UNKNOWN PROPERTY
		TMap ServerPilgrimGameMap; // 0x4A0(0x50)
		unsigned char UnknownData19_6[0x1A8]; // 0x4F0(0x1A8) UNKNOWN PROPERTY
		TArray GemBreakListeners; // 0x698(0x10)
		unsigned char UnknownData20_6[0xF8]; // 0x6A8(0xF8) UNKNOWN PROPERTY
		TSet PlayersWhoOwnCurrentSong; // 0x7A0(0x50)
		unsigned char UnknownData21_6[0x1]; // 0x7F0(0x1) UNKNOWN PROPERTY
		bool bServerWaitForAllMbisAndPlayersToBeReady; // 0x7F1(0x1)
		unsigned char UnknownData22_6[0x6]; // 0x7F2(0x6) UNKNOWN PROPERTY
		FTimerHandle ServerWaitForAllPlayersTimerHandle; // 0x7F8(0x8)
		bool bAllowServerToApplyMultipliers; // 0x800(0x1)
		bool bAllowReturnToBackStageForSinglePlayerInstances; // 0x801(0x1)
		unsigned char UnknownData23_7[0x6]; // 0x802(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimMusicBattleInstance");
			return ret;
		}

		void UpdateVisibilityOfUI(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140E3948
		void UpdateScore(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140E3868
		void UpdateLocalPlayerScore(FPilgrimGameProgress& LocalPlayerGameProgress); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF4140E3788
		void SubtractFromBandScore(float Score); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E36A8
		bool ShouldUseTouchUIForLocalPlayer(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140E35C8
		void SetupSinglePlayerBattle(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140E34E8
		void SetMusicBattleType(EMusicBattleType NewMusicBattleType); // Flags: Final|Native|Public 0x7FF4140E33A0
		void ServerUserFinishedDisconnecting(); // Flags: Event|Public|BlueprintEvent 0x7FF4140E32C0
		bool ServerShouldAllowInputForPlayer(AFortPlayerStateAthena PlayerState, FPilgrimTimedInput& TimedInput); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF4140E31E0
		void ServerRemoveScoringMultiplierForPlayer(AFortPlayerStateAthena PlayerState, FPilgrimServerMultiplierEffect& ServerMultiplierEffect); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140E3100
		void ServerOnTimedInputReceived(UPilgrimPlayerControllerComponent PlayerControllerComponent, FPilgrimTimedInput& TimedInput); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140E2EF8
		void ServerOnTeamQuickplayScoreChanged(UPilgrimPlayerControllerComponent PlayerControllerComponent, FPilgrimGameProgress& NextScoreForCurrentPlayer, float LastInputTimeMs); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140E2E18
		void ServerOnSongMidiFinishedLoading(); // Flags: Final|Native|Private 0x7FF4140E2D38
		void ServerOnClientUpdateReceived(UPilgrimPlayerControllerComponent PlayerControllerComponent, EMusicBattleClientUpdate ClientUpdate); // Flags: Final|Native|Protected 0x7FF4140E2BF0
		void ServerFinishDisconnect(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF4140E2B10
		void ServerApplyScoringMultiplierForPlayer(AFortPlayerStateAthena PlayerState, FPilgrimServerMultiplierEffect& ServerScoringChange, float OptionalDurationSeconds); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140E2A30
		void ServerAllPlayersHaveFinishedSong(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140E2950
		void ServerAdjustScoreForPlayer(AFortPlayerStateAthena PlayerState, FPilgrimServerScoringChangeRecord& ServerScoringChange); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140E2870
		void PlayerDisconnected(UPilgrimPlayerControllerComponent ControllerComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140E2790
		void OnTrackHiddenChanged(bool bHideTrack); // Flags: Event|Protected|BlueprintEvent 0x7FF4140E26B0
		void OnStartedPlayingSong(UPilgrimSongMetadata Song); // Flags: Event|Protected|BlueprintEvent 0x7FF4140E25D0
		void OnSongLoaded(); // Flags: Final|Native|Protected 0x7FF4140E24F0
		void OnRep_SongToPlay(); // Flags: Final|Native|Private 0x7FF4140E2410
		void OnRep_MusicBattleData(FPilgrimMusicBattleData& PreviousMusicBattleData); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140E2330
		void OnPlayerReachedZeroHp(int32_t PlayerId); // Flags: Event|Protected|BlueprintEvent 0x7FF4140E2250
		void OnMusicBattleFinished__DelegateSignature(EMusicBattleEndReason EndReason); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140E2108
		void OnClientReceivedSongToPlay(UPilgrimSongMetadata Song); // Flags: Event|Protected|BlueprintEvent 0x7FF4140E2028
		void NetMulticast_DoMultiplayerDamageEffect(int32_t DamagingPlayerId, int32_t DamagedPlayerId); // Flags: Net|Native|Event|NetMulticast|Protected|BlueprintCallable 0x7FF4140E1F48
		void NetMulticast_DoBeamClash(); // Flags: Net|Native|Event|NetMulticast|Protected|BlueprintCallable 0x7FF4140E1E68
		void NetMulticast_CheatSetPerformanceData(FString PerformanceArgument); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 0x7FF4140E1D88
		void NetMulticast_CheatSeekToTime(int32_t Milliseconds); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 0x7FF4140E1CA8
		void NetMulticast_CheatEndSong(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 0x7FF4140E1BC8
		bool IsTwoPlayerBattleWithBeams(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140E1AE8
		bool IsSinglePlayerBattleAgainstPrimitiveAI(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140E1A08
		bool IsRestartAllowed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E1928
		bool IsPlayerInBattleParticipants(AFortPlayerStateAthena PlayerState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E1848
		bool IsLocalPlayerRoaming(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E1768
		bool IsLocalPlayerInBattleParticipants(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E1688
		bool IsHardStopped(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E15A8
		bool IsHardStopAllowed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E14C8
		TSet GetUnplayedTrackTypesInCurrentSong(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E13E8
		EPilgrimTrackType GetTrackTypeForPlayer(AFortPlayerStateAthena Player); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF4140E1308
		char GetTeam(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4140E1228
		float GetStreakMultiplier(FPilgrimGameProgress& LocalPlayerGameProgress); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140E1148
		ESparksInstrumentType GetStartingInstrumentForTrackInCurrentSong(EPilgrimTrackType TrackType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E1068
		EPilgrimSongPlayMethod GetSongPlayMethod(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E0F20
		FGuid GetSongPlayId(); // Flags: Native|Event|Protected|HasDefaults|BlueprintEvent|Const 0x7FF4140E0E40
		EPilgrimSongDifficulty GetSongDifficultyForPlayer(AFortPlayerStateAthena Player); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4140E0D60
		float GetServerMultiplierForPlayer(APlayerState PlayerState); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140E0C80
		float GetScoreDensityForPlayer(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4140E0BA0
		AFortPlayerStateAthena GetPlayerFromIndex(int32_t PlayerIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E0AC0
		int32_t GetPlayerCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E09E0
		TSet GetPlayedTrackTypesInCurrentSong(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E0900
		FPilgrimPlacementAnalyticsData GetPlacementAnalyticsData(); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF4140E0760
		UPilgrimSongMetadata GetNextSongToPlay(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF4140E0680
		UMusicClockComponent GetMusicClock(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E05A0
		FPilgrimMusicBattleData GetMusicBattleData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140E0040
		UPilgrimGame GetLocalPilgrimGame(); // Flags: RequiredAPI|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4140DFF60
		UGameplayEventRouterComponent GetEventRouter(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DFE80
		void GetDifficultyAndTrackType(EPilgrimSongDifficulty& OutSongDifficulty, EPilgrimTrackType& OutSongTrackType); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140DFD38
		AFortPlayerStateAthena GetCurrentLocalPlayer(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DFC58
		UPilgrimGameConfig GetConfig(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140DFB78
		void FireLocalPlayerBeam(EMusicBattleProjectileType ProjectileType); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DFA30
		void DoMultiplayerDamage(int32_t DamagingPlayerId, int32_t DamagedPlayerId, FPilgrimGameProgress& GameUpdateThatDidDamage); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140DF828
		void DoEndGameCheat(bool bIsWin); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DF748
		bool Debug_IsTrackHidden(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DF668
		void ConnectFFTAnalysis(UAudioComponent AudioComponentWithAnalyzer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DF588
		void ClientFireSongEndedAnalyticsForCurrentSong(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140DF4A8
		void Client_DoMultiplayerDamageEffect(int32_t DamagingPlayerId, int32_t DamagedPlayerId); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DF3C8
		void Client_DoMultiplayerBeamClash(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DF2E8
		void BroadcastMBIEventStarted(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DF208
		void BroadcastMBIEventFinished(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DF128
		void AddToBandScore(float Score); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DF048
		void AddMusicBattlePlayers(TArray& NewPlayers); // Flags: Final|RequiredAPI|Native|Public|HasOutParms 0x7FF4140DEF68
	};


	// Class PilgrimCoreRuntime.PilgrimGameEvaluator
	// Inherited from UObject
	// Size: 0x2C8 (0x2F0 - 0x28)
	class UPilgrimGameEvaluator : public UObject	
	{
	public:
		UPilgrimSongData CurrentSongData; // 0x28(0x8)
		UPilgrimSongMetadata SongMetaData; // 0x30(0x8)
		UPilgrimScoreDebugPrinter DebugScoreListener; // 0x38(0x8)
		TWeakObjectPtr OwningPlayerState; // 0x40(0x8)
		UPilgrimGameConfig PilgrimGameConfig; // 0x48(0x8)
		UPilgrimScoringModel ScoringModel; // 0x50(0x8)
		unsigned char UnknownData01_7[0x298]; // 0x58(0x298) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimCoreRuntime.PilgrimGameEvaluator");
			return ret;
		}
	};

}
