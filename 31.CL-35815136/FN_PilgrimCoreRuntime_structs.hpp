#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PilgrimCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PilgrimCoreRuntime.TrackItemInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FTrackItemInfo	
	{
	public:
		int32_t StartTick; // 0x0(0x4)
		int32_t EndTick; // 0x4(0x4)
		int32_t NumScorables; // 0x8(0x4)
		float Ms; // 0xC(0x4)
		int32_t DurationMs; // 0x10(0x4)
		int32_t DurationTicks; // 0x14(0x4)
		EPilgrimTrackType Track; // 0x18(0x1)
		EPilgrimTrackLane Lane; // 0x19(0x1)
		EBeatMarkerType BeatType; // 0x1A(0x1)
		EPilgrimGemType GemType; // 0x1B(0x1)
		int32_t TrackItemIndex; // 0x1C(0x4)
		bool IsOverdriveGem; // 0x20(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		int32_t OverdriveSectionNum; // 0x24(0x4)
		bool IsEndOfOverdriveSection; // 0x28(0x1)
		bool bAllowHitOnPress; // 0x29(0x1)
		bool bAllowHitOnRelease; // 0x2A(0x1)
		bool bIsSustain; // 0x2B(0x1)
		bool bIsAutoHopo; // 0x2C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimGameProgress
	// Size: 0x80 (0x80 - 0x0)
	struct FPilgrimGameProgress	
	{
	public:
		int32_t NumHits; // 0x0(0x4)
		int32_t NumMisses; // 0x4(0x4)
		int32_t NumPasses; // 0x8(0x4)
		bool bHasFullCombo; // 0xC(0x1)
		bool bHasPerfectCombo; // 0xD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		int32_t CurrentTick; // 0x10(0x4)
		int32_t NoteStreak; // 0x14(0x4)
		float CurrentScore; // 0x18(0x4)
		float RawCurrentScore; // 0x1C(0x4)
		float CurrentModifierBonus; // 0x20(0x4)
		int32_t CurrentStar; // 0x24(0x4)
		float NextStarProgress; // 0x28(0x4)
		int32_t StreakScoreMultiplier; // 0x2C(0x4)
		int32_t NotesPastLastMultiplier; // 0x30(0x4)
		int32_t NotesToNextMultiplier; // 0x34(0x4)
		float CurrentHealth; // 0x38(0x4)
		bool IsOverdriveActive; // 0x3C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float CurrentOverdrive; // 0x40(0x4)
		int32_t CurrentOverdriveSectionNum; // 0x44(0x4)
		float CurrentModulation; // 0x48(0x4)
		float BandScoreContribution; // 0x4C(0x4)
		float BandModifierBonusContribution; // 0x50(0x4)
		EOverdriveScoringState OverdriveScoringState; // 0x54(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		float MaxScore; // 0x58(0x4)
		float RawMaxScore; // 0x5C(0x4)
		int32_t MaxStreakLength; // 0x60(0x4)
		float AverageStreakMultiplierPerHitOrPass; // 0x64(0x4)
		bool bIsAtMaxStreak; // 0x68(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		float CurrentSustainScore; // 0x6C(0x4)
		float CurrentChordScore; // 0x70(0x4)
		float OverdriveTime; // 0x74(0x4)
		int32_t NumPerfects; // 0x78(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimMusicBattleData
	// Size: 0x48 (0x48 - 0x0)
	struct FPilgrimMusicBattleData	
	{
	public:
		TArray<FPilgrimMusicBattlePlayerState> MusicBattleStates; // 0x0(0x10)
		int32_t LastPlayableIndexProcessed; // 0x10(0x4)
		int32_t LastPlayableIndexReceived; // 0x14(0x4)
		FPilgrimBandState BandState; // 0x18(0x2C)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimBandState
	// Size: 0x2C (0x2C - 0x0)
	struct FPilgrimBandState	
	{
	public:
		float BandHealth; // 0x0(0x4)
		float BandScore; // 0x4(0x4)
		float BandModifierBonus; // 0x8(0x4)
		float CurrentScoreFromOverdrive; // 0xC(0x4)
		float TotalScoreFromOverdrive; // 0x10(0x4)
		int32_t BandStar; // 0x14(0x4)
		float NextBandStarProgress; // 0x18(0x4)
		float BandVarietyBonus; // 0x1C(0x4)
		float BaseBandScore; // 0x20(0x4)
		int32_t BandMultiplier; // 0x24(0x4)
		bool bAllPlayersHaveMaxStreak; // 0x28(0x1)
		bool bAllPlayersHaveOverdriveReady; // 0x29(0x1)
		bool bAllPlayersHaveOverdriveActive; // 0x2A(0x1)
		bool bAnyPlayersHaveOverdriveActive; // 0x2B(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimMusicBattlePlayerState
	// Size: 0xF8 (0xF8 - 0x0)
	struct FPilgrimMusicBattlePlayerState	
	{
	public:
		AFortPlayerStateAthena* PlayerState; // 0x0(0x8)
		char Team; // 0x8(0x1)
		EPilgrimTrackType TrackType; // 0x9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer InstrumentTags; // 0x10(0x20)
		TArray<FPilgrimGameProgress> ScoreUpdateHistory; // 0x30(0x10)
		int32_t LastPlayableIndexProcessed; // 0x40(0x4)
		int32_t LastPlayableIndexReceived; // 0x44(0x4)
		FPilgrimGameProgress PilgrimGameProgress; // 0x48(0x80)
		FPilgrimServerScoringChanges ServerScoringChanges; // 0xC8(0x30)
	};


	// Struct PilgrimCoreRuntime.PilgrimServerScoringChanges
	// Size: 0x30 (0x30 - 0x0)
	struct FPilgrimServerScoringChanges	
	{
	public:
		float ServerAdjustedScore; // 0x0(0x4)
		float ServerAdjustedOverdrive; // 0x4(0x4)
		float CurrentMultiplier; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FPilgrimServerScoringChangeRecord> ScoreChangeRecords; // 0x10(0x10)
		TArray<FPilgrimServerMultiplierEffect> Multipliers; // 0x20(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimServerMultiplierEffect
	// Size: 0xC (0xC - 0x0)
	struct FPilgrimServerMultiplierEffect	
	{
	public:
		TWeakObjectPtr<AActor*> SourceActor; // 0x0(0x8)
		float ScoreMultiplier; // 0x8(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimServerScoringChangeRecord
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimServerScoringChangeRecord	
	{
	public:
		TWeakObjectPtr<AActor*> SourceActor; // 0x0(0x8)
		float ScoreAdjustment; // 0x8(0x4)
		float OverdriveAdjustment; // 0xC(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimPlacementAnalyticsData
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimPlacementAnalyticsData	
	{
	public:
		int32_t Placement; // 0x0(0x4)
		bool bIsEliminated; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t MatchmakingRating; // 0x8(0x4)
		int32_t RoundNumber; // 0xC(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimTimedInput
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimTimedInput	
	{
	public:
		EPilgrimTimedInputType InputType; // 0x0(0x1)
		bool bIsPress; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ExperiencedTick; // 0x4(0x4)
		EPilgrimTrackLane TrackLane; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float InputStrength; // 0xC(0x4)
	};


	// Struct PilgrimCoreRuntime.MusicBattleSinglePlayerOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FMusicBattleSinglePlayerOptions	
	{
	public:
		bool bOpponentFiresBack; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float OpponentGemSuccessRate; // 0x4(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimSinglePlayerBattleData
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimSinglePlayerBattleData	
	{
	public:
		TArray<FPilgrimSinglePlayerBattleHealth> PlayerHealths; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimSinglePlayerBattleHealth
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimSinglePlayerBattleHealth	
	{
	public:
		float MaxHp; // 0x0(0x4)
		float CurrentHp; // 0x4(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimLeaderboardRequestParams
	// Size: 0x70 (0x70 - 0x0)
	struct FPilgrimLeaderboardRequestParams	
	{
	public:
		FName SongShortName; // 0x0(0x4)
		EPilgrimLeaderboardType LeaderboardType; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FUniqueNetIdRepl RequestingPlayerAccountId; // 0x8(0x30)
		bool bFriendsOnly; // 0x38(0x1)
		bool bCenteredOnRequestingPlayer; // 0x39(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x3A(0x2) UNKNOWN PROPERTY
		int32_t Page; // 0x3C(0x4)
		int32_t ControllerId; // 0x40(0x4)
		bool bIsSpotlightCompetition; // 0x44(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		FString SpotlightGroup; // 0x48(0x10)
		bool bUseCache; // 0x58(0x1)
		unsigned char UnknownData03_7[0x17]; // 0x59(0x17) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimLeaderboardPage
	// Size: 0x38 (0x38 - 0x0)
	struct FPilgrimLeaderboardPage	
	{
	public:
		FName SongShortName; // 0x0(0x4)
		EPilgrimLeaderboardType LeaderboardType; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t Page; // 0x8(0x4)
		int32_t TotalPages; // 0xC(0x4)
		TArray<FPilgrimLeaderboardEntry> Entries; // 0x10(0x10)
		bool bIsSpotlightCompetition; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FString SpotlightGroup; // 0x28(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimLeaderboardEntryRpl
	// Size: 0x38 (0x38 - 0x0)
	struct FPilgrimLeaderboardEntryRpl	
	{
	public:
		int32_t Rank; // 0x0(0x4)
		float Percentile; // 0x4(0x4)
		FPilgrimLeaderboardScoreData ScoreData; // 0x8(0x20)
		FDateTime DateTime; // 0x28(0x8)
		int32_t FriendRank; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimLeaderboardScoreData
	// Size: 0x20 (0x20 - 0x0)
	struct FPilgrimLeaderboardScoreData	
	{
	public:
		int32_t Score; // 0x0(0x4)
		int32_t StarsEarned; // 0x4(0x4)
		float Accuracy; // 0x8(0x4)
		bool bFullCombo; // 0xC(0x1)
		EPilgrimSongDifficulty Difficulty; // 0xD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		TArray<EPilgrimTrackType> InstrumentsPlayed; // 0x10(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimLeaderboardEntry
	// Inherited from FPilgrimLeaderboardEntryRpl
	// Size: 0x58 (0x90 - 0x38)
	struct FPilgrimLeaderboardEntry : public FPilgrimLeaderboardEntryRpl	
	{
	public:
		bool bHasLocalPlayer; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TMap<FString, FString> PlayerAccountIdToDisplayNameMap; // 0x40(0x50)
	};


	// Struct PilgrimCoreRuntime.PilgrimPersonalBestParams
	// Size: 0x68 (0x68 - 0x0)
	struct FPilgrimPersonalBestParams	
	{
	public:
		FUniqueNetIdRepl PlayerAccountId; // 0x0(0x30)
		FName SongShortName; // 0x30(0x4)
		EPilgrimTrackType InstrumentType; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		int32_t ControllerId; // 0x38(0x4)
		int32_t BandSize; // 0x3C(0x4)
		int32_t SetlistIndex; // 0x40(0x4)
		bool bUseCache; // 0x44(0x1)
		bool bIsSpotlightCompetition; // 0x45(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
		FString SpotlightGroup; // 0x48(0x10)
		unsigned char UnknownData02_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPersonalBestResult
	// Size: 0x1B0 (0x1B0 - 0x0)
	struct FPilgrimPersonalBestResult	
	{
	public:
		FPilgrimLeaderboardEntry BestSolo; // 0x0(0x90)
		FPilgrimLeaderboardEntry BestBand; // 0x90(0x90)
		FPilgrimLeaderboardEntry BestSpotlight; // 0x120(0x90)
	};


	// Struct PilgrimCoreRuntime.SongShortNameMatcher
	// Size: 0x18 (0x18 - 0x0)
	struct FSongShortNameMatcher	
	{
	public:
		TArray<FName> SongShortNames; // 0x0(0x10)
		ESongShortNameMatchType MatchType; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerFeedParams
	// Size: 0x98 (0x98 - 0x0)
	struct FPilgrimPlayerFeedParams	
	{
	public:
		EPilgrimPlayerFeedSortType SortType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t ControllerId; // 0x4(0x4)
		FGameplayTagQuery SongQuery; // 0x8(0x48)
		FSongShortNameMatcher SongShortNameMatcher; // 0x50(0x18)
		TArray<EPilgrimLeaderboardType> Leaderboards; // 0x68(0x10)
		TArray<FUniqueNetIdRepl> FriendIds; // 0x78(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerFeedResult
	// Size: 0x20 (0x20 - 0x0)
	struct FPilgrimPlayerFeedResult	
	{
	public:
		TArray<FPilgrimPlayerFeedResultEntry> Entries; // 0x0(0x10)
		TArray<FPilgrimPlayerFeedSongSummary> SongSummary; // 0x10(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerFeedSongSummary
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimPlayerFeedSongSummary	
	{
	public:
		FName SongShortName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<int32_t> EntryIndexes; // 0x8(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerFeedResultEntry
	// Size: 0x38 (0x38 - 0x0)
	struct FPilgrimPlayerFeedResultEntry	
	{
	public:
		FString FriendName; // 0x0(0x10)
		FName SongShortName; // 0x10(0x4)
		EPilgrimLeaderboardType LeaderboardType; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		TArray<EPilgrimTrackType> InstrumentsPlayed; // 0x18(0x10)
		int32_t PlayerHighscore; // 0x28(0x4)
		int32_t FriendHighscore; // 0x2C(0x4)
		FDateTime FriendAchievedScoreDate; // 0x30(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimCustomSetlistEntry
	// Size: 0xC (0xC - 0x0)
	struct FPilgrimCustomSetlistEntry	
	{
	public:
		FName SongShortName; // 0x0(0x4)
		TWeakObjectPtr<APlayerState*> AddedByPlayer; // 0x4(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimCheatPerformanceArgument
	// Size: 0xC (0xC - 0x0)
	struct FPilgrimCheatPerformanceArgument	
	{
	public:
		unsigned char UnknownData00_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimSongMeasurePosition
	// Size: 0xC (0xC - 0x0)
	struct FPilgrimSongMeasurePosition	
	{
	public:
		int32_t Measure; // 0x0(0x4)
		int32_t Beat; // 0x4(0x4)
		int32_t Tick; // 0x8(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimGameConfigSettings
	// Size: 0x348 (0x348 - 0x0)
	struct FPilgrimGameConfigSettings	
	{
	public:
		float SlopMs; // 0x0(0x4)
		float GemBreakEndInputUnlockMs; // 0x4(0x4)
		float EndOfTrackBuffer; // 0x8(0x4)
		float MsToNowBar; // 0xC(0x4)
		float BackgroundTrackDb; // 0x10(0x4)
		float BackgroundTrackGain; // 0x14(0x4)
		float FireMidiEventTicksEarly; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TMap<EPilgrimSongDifficulty, float> BaseGemScoreValue; // 0x20(0x50)
		int32_t SustainScorePerBeat; // 0x70(0x4)
		bool bNormalizeScores; // 0x74(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FScalableFloat NormalizedScaleTowardsHighestInDifficulty; // 0x78(0x28)
		FScalableFloat NormalizedScaleTowardsHighestInExpert; // 0xA0(0x28)
		float OutroPreAlertSeconds; // 0xC8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray<FPilgrimScoreMultiplierInfo> ScoreMultiplierDefinitions; // 0xD0(0x10)
		TMap<EPilgrimSongDifficulty, FPlayerHealthModifiers> PlayerHealthModifiers; // 0xE0(0x50)
		TArray<float> PilgrimHealthCrowdResponseTiers; // 0x130(0x10)
		TMap<EPilgrimSongDifficulty, FStarPercentageThresholds> IndividualStarPercentageThresholds; // 0x140(0x50)
		TArray<float> BandStarPercentageThresholds; // 0x190(0x10)
		bool IsBandMultiplierBasedOnUniqueInstruments; // 0x1A0(0x1)
		bool IsBandVarietyBonusScoredDuringPlay; // 0x1A1(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x1A2(0x6) UNKNOWN PROPERTY
		TArray<float> BandOverdriveScoreMultipliers; // 0x1A8(0x10)
		TArray<float> BandVarietyScoreMultipliers; // 0x1B8(0x10)
		TArray<FPilgrimAccuracyTier> AccuracyTiers; // 0x1C8(0x10)
		int32_t MaximumDisplayedAccuracyTierIndex; // 0x1D8(0x4)
		float TeamQuickplayInitialHealth; // 0x1DC(0x4)
		float TeamQuickplayOverdriveDecayRate; // 0x1E0(0x4)
		float TeamQuickplayInitialOverdrive; // 0x1E4(0x4)
		float TeamQuickplayOverdrive; // 0x1E8(0x4)
		float TeamQuickplayOverdriveScoreMultiplier; // 0x1EC(0x4)
		float TeamQuickplayOverdriveHealthGainMultiplier; // 0x1F0(0x4)
		float TeamQuickplayRequiredOverdriveToActivate; // 0x1F4(0x4)
		float TeamQuickplayOverdriveAddedOnSuccesfulSection; // 0x1F8(0x4)
		bool bOverdriveClearsGems; // 0x1FC(0x1)
		bool bOverdriveClearAutoHoldSustain; // 0x1FD(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x1FE(0x2) UNKNOWN PROPERTY
		float GemBreakPendingBars; // 0x200(0x4)
		bool bEnableInputSpecificGemsAndSmashers; // 0x204(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x205(0x3) UNKNOWN PROPERTY
		UPilgrimInputConfig* InputConfig; // 0x208(0x8)
		bool bEnableOverdriveDeploys; // 0x210(0x1)
		bool bEnableOverdrivePhrases; // 0x211(0x1)
		bool bEnableCaptureSystem; // 0x212(0x1)
		bool bEnableBandPerformanceScoring; // 0x213(0x1)
		float ArenaInitialShields; // 0x214(0x4)
		float ArenaInitialHealth; // 0x218(0x4)
		bool ArenaInitialAmmo; // 0x21C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x21D(0x3) UNKNOWN PROPERTY
		TMap<EPilgrimSongDifficulty, float> DifficultyCaptureFactors; // 0x220(0x50)
		TMap<EPilgrimTrackType, UPilgrimInstrumentConfig*> PerInstrumentConfigs; // 0x270(0x50)
		TArray<int32_t> StreakToastThresholds; // 0x2C0(0x10)
		TMap<ESparksInstrumentType, USoundCue*> InstrumentTypeMissCues; // 0x2D0(0x50)
		USoundCue* DefaultInstrumentTypeMissCue; // 0x320(0x8)
		bool CreateStandinBandmembers; // 0x328(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x329(0x7) UNKNOWN PROPERTY
		TArray<EPilgrimSongDifficulty> SupportedDifficulties; // 0x330(0x10)
		float SongIntroEmbargoMs; // 0x340(0x4)
		unsigned char UnknownData08_7[0x4]; // 0x344(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimAccuracyTier
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimAccuracyTier	
	{
	public:
		float ThresholdMs; // 0x0(0x4)
		float ScoreMultiplier; // 0x4(0x4)
		FText Name; // 0x8(0x10)
	};


	// Struct PilgrimCoreRuntime.StarPercentageThresholds
	// Size: 0x10 (0x10 - 0x0)
	struct FStarPercentageThresholds	
	{
	public:
		TArray<float> Thresholds; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PlayerHealthModifiers
	// Size: 0xC (0xC - 0x0)
	struct FPlayerHealthModifiers	
	{
	public:
		float GemHit; // 0x0(0x4)
		float GemMiss; // 0x4(0x4)
		float GemPass; // 0x8(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimScoreMultiplierInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimScoreMultiplierInfo	
	{
	public:
		int32_t NotesCount; // 0x0(0x4)
		int32_t ScoreMultiplier; // 0x4(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimGemBreak
	// Size: 0x24 (0x24 - 0x0)
	struct FPilgrimGemBreak	
	{
	public:
		int32_t ID; // 0x0(0x4)
		bool bIsValidGemBreak; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float StartBreakAtBar; // 0x8(0x4)
		float StartBreakAtMs; // 0xC(0x4)
		float BreakBarDuration; // 0x10(0x4)
		float BreakMsDuration; // 0x14(0x4)
		float EndBreakAtBar; // 0x18(0x4)
		float EndBreakAtMs; // 0x1C(0x4)
		bool bIsStartingBreak; // 0x20(0x1)
		bool bIsEndingBreak; // 0x21(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimGameInProgressSustain
	// Size: 0x48 (0x48 - 0x0)
	struct FPilgrimGameInProgressSustain	
	{
	public:
		unsigned char UnknownData00_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerHistoryResult
	// Size: 0x130 (0x130 - 0x0)
	struct FPilgrimPlayerHistoryResult	
	{
	public:
		FUniqueNetIdRepl PlayerAccountId; // 0x0(0x30)
		TArray<FPilgrimPlayerHistoryEvent> Events; // 0x30(0x10)
		unsigned char UnknownData00_7[0xF0]; // 0x40(0xF0) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerHistoryEvent
	// Size: 0x80 (0x80 - 0x0)
	struct FPilgrimPlayerHistoryEvent	
	{
	public:
		FString GameId; // 0x0(0x10)
		FString EventId; // 0x10(0x10)
		FString EventWindowId; // 0x20(0x10)
		FString TeamID; // 0x30(0x10)
		TArray<FString> TeamAccountIds; // 0x40(0x10)
		int32_t PointsEarned; // 0x50(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		int64_t Rank; // 0x58(0x8)
		double Score; // 0x60(0x8)
		double Percentile; // 0x68(0x8)
		TArray<FPilgrimPlayerSessionHistory> SessionHistory; // 0x70(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerSessionHistory
	// Size: 0x38 (0x38 - 0x0)
	struct FPilgrimPlayerSessionHistory	
	{
	public:
		FString SessionId; // 0x0(0x10)
		FDateTime EndTime; // 0x10(0x8)
		FPilgrimLeaderboardScoreData TrackedStats; // 0x18(0x20)
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerHistoryParams
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPilgrimPlayerHistoryParams	
	{
	public:
		FUniqueNetIdRepl PlayerAccountId; // 0x0(0x30)
		FGameplayTagQuery SongQuery; // 0x30(0x48)
		FSongShortNameMatcher SongShortNameMatcher; // 0x78(0x18)
		EPilgrimTrackType InstrumentType; // 0x90(0x1)
		EPilgrimPlayerHistoryScoreParam ScoreParam; // 0x91(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x92(0x2) UNKNOWN PROPERTY
		int32_t ControllerId; // 0x94(0x4)
		TWeakObjectPtr<AFortPlayerController*> RequestingPlayer; // 0x98(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimSpotlightCompetition
	// Size: 0x70 (0x70 - 0x0)
	struct FPilgrimSpotlightCompetition	
	{
	public:
		FString SpotlightName; // 0x0(0x10)
		FString SpotlightGroup; // 0x10(0x10)
		FDateTime BeginTime; // 0x20(0x8)
		FDateTime EndTime; // 0x28(0x8)
		TArray<FString> SongUIDs; // 0x30(0x10)
		TArray<FName> SongShortNames; // 0x40(0x10)
		FGameplayTagContainer Constraints; // 0x50(0x20)
	};


	// Struct PilgrimCoreRuntime.PilgrimSpotlightCompetitionParams
	// Size: 0x68 (0x68 - 0x0)
	struct FPilgrimSpotlightCompetitionParams	
	{
	public:
		FGameplayTagQuery SongQuery; // 0x0(0x48)
		FSongShortNameMatcher SongShortNameMatcher; // 0x48(0x18)
		EPilgrimTrackType InstrumentType; // 0x60(0x1)
		bool bUseCache; // 0x61(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x62(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimGetSpotlightParams
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimGetSpotlightParams	
	{
	public:
		FName SongShortName; // 0x0(0x4)
		EPilgrimTrackType InstrumentType; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FDateTime StartsBefore; // 0x8(0x8)
		FDateTime EndsAfter; // 0x10(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimTouchBrushesMappingConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimTouchBrushesMappingConfig	
	{
	public:
		TArray<FPilgrimInputActionBrushConfig> Mappings; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimInputActionBrushConfig
	// Size: 0xC0 (0xC0 - 0x0)
	struct FPilgrimInputActionBrushConfig	
	{
	public:
		UInputAction* BoundInputAction; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush KeyBrush; // 0x10(0xB0)
	};


	// Struct PilgrimCoreRuntime.PilgrimLaneInputMappingConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FPilgrimLaneInputMappingConfig	
	{
	public:
		UFortInputMappingContext* DefaultPCBeatmatchInputMappingContext; // 0x0(0x8)
		UFortInputMappingContext* DefaultConsoleBeatmatchInputMappingContext; // 0x8(0x8)
		TArray<UFortInputMappingContext*> PCBeatmatchInputMappingContexts; // 0x10(0x10)
		TArray<UFortInputMappingContext*> ConsoleBeatmatchInputMappingContexts; // 0x20(0x10)
	};


	// Struct PilgrimCoreRuntime.SongTimestampData
	// Size: 0x48 (0x48 - 0x0)
	struct FSongTimestampData	
	{
	public:
		float ServerWorldTime; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMidiSongPos ServerSongPosition; // 0x8(0x40)
	};


	// Struct PilgrimCoreRuntime.MinimalSongTimestampData
	// Size: 0xC (0xC - 0x0)
	struct FMinimalSongTimestampData	
	{
	public:
		float ServerWorldTime; // 0x0(0x4)
		float SecondsIncludingCountIn; // 0x4(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x8(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimActorPoolParams
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimActorPoolParams	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UClass* ActorClass; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.MusicClockCatchUpData
	// Size: 0x18 (0x18 - 0x0)
	struct FMusicClockCatchUpData	
	{
	public:
		FMusicClockCatchUpStarted StartData; // 0x0(0x10)
		float StartTime; // 0x10(0x4)
		float MaxDesyncMs; // 0x14(0x4)
	};


	// Struct PilgrimCoreRuntime.MusicClockCatchUpStarted
	// Size: 0x10 (0x10 - 0x0)
	struct FMusicClockCatchUpStarted	
	{
	public:
		float CatchupSpeed; // 0x0(0x4)
		float CurrentExperiencedTime; // 0x4(0x4)
		TWeakObjectPtr<AFortPlayerController*> WeakLocalPlayer; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.MusicClockCatchUpUpdated
	// Size: 0x4 (0x4 - 0x0)
	struct FMusicClockCatchUpUpdated	
	{
	public:
		float DeltaTimestamp; // 0x0(0x4)
	};


	// Struct PilgrimCoreRuntime.MusicClockCatchUpEnded
	// Size: 0x1 (0x1 - 0x0)
	struct FMusicClockCatchUpEnded	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimAnalyticsEvent_ResultsReturn
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimAnalyticsEvent_ResultsReturn	
	{
	public:
		AFortPlayerController* PlayerController; // 0x0(0x8)
		EPilgrimAnalyticsResultsReturn ResultsReturn; // 0x8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_AutoCalibration_OffsetChanged
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_AutoCalibration_OffsetChanged	
	{
	public:
		float Offset; // 0x0(0x4)
		float SampleAverage; // 0x4(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_AutoCalibration_Cheat_OffsetChangeRequested
	// Size: 0x4 (0x4 - 0x0)
	struct FPilgrimEvent_AutoCalibration_Cheat_OffsetChangeRequested	
	{
	public:
		float Offset; // 0x0(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_AutoCalibration_Cheat_SamplesChangeRequested
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_AutoCalibration_Cheat_SamplesChangeRequested	
	{
	public:
		TArray<float> Samples; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimGameBandProgressDelta
	// Size: 0x24 (0x24 - 0x0)
	struct FPilgrimGameBandProgressDelta	
	{
	public:
		unsigned char UnknownData00_2[0x24]; // 0x0(0x24) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_SetlistVoteWinnerChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_BandState_SetlistVoteWinnerChanged	
	{
	public:
		UPilgrimPremadeSetlist* NewVoteWinner; // 0x0(0x8)
		UPilgrimPremadeSetlist* PrevVoteWinner; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveActiveChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_BandState_OverdriveActiveChanged	
	{
	public:
		bool IsActive; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AFortPlayerPawn* ForPlayer; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveReadyChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_BandState_OverdriveReadyChanged	
	{
	public:
		bool IsReady; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AFortPlayerPawn* ForPlayer; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_AllOverdriveActiveChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_BandState_AllOverdriveActiveChanged	
	{
	public:
		bool bAllPlayersHaveActiveOverdrive; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_AllOverdriveReadyChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_BandState_AllOverdriveReadyChanged	
	{
	public:
		bool bAllPlayersHaveOverdriveReady; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_AllMaxStreakChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_BandState_AllMaxStreakChanged	
	{
	public:
		bool bAllPlayersHaveMaxStreak; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_ReadinessChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_BandState_ReadinessChanged	
	{
	public:
		bool bAreAllPlayersReady; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_CustomSetlistChanged
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_BandState_CustomSetlistChanged	
	{
	public:
		TWeakObjectPtr<UPilgrimCustomSetlist*> ChangedSetlist; // 0x0(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveActiveTrackTypesChanged
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPilgrimEvent_BandState_OverdriveActiveTrackTypesChanged	
	{
	public:
		FPilgrimTrackTypesStateMembership Membership; // 0x0(0xA0)
	};


	// Struct PilgrimCoreRuntime.PilgrimTrackTypesStateMembership
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPilgrimTrackTypesStateMembership	
	{
	public:
		TSet<EPilgrimTrackType> TrackTypesInState; // 0x0(0x50)
		TSet<EPilgrimTrackType> TrackTypesNotInState; // 0x50(0x50)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_OverdriveReadyTrackTypesChanged
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPilgrimEvent_BandState_OverdriveReadyTrackTypesChanged	
	{
	public:
		FPilgrimTrackTypesStateMembership Membership; // 0x0(0xA0)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_BandState_BandHealthChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_BandState_BandHealthChanged	
	{
	public:
		float LastBandHealth; // 0x0(0x4)
		float NewBandHealth; // 0x4(0x4)
		int32_t LastBandHealthTier; // 0x8(0x4)
		int32_t NewBandHealthTier; // 0xC(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimTimestampedTargetData
	// Inherited from FGameplayAbilityTargetData
	// Size: 0x10 (0x18 - 0x8)
	struct FPilgrimTimestampedTargetData : public FGameplayAbilityTargetData	
	{
	public:
		FMinimalSongTimestampData SongTimestamp; // 0x8(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimGuitarFretPressedState
	// Size: 0x3 (0x3 - 0x0)
	struct FPilgrimGuitarFretPressedState	
	{
	public:
		unsigned char UnknownData00_2[0x3]; // 0x0(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvaluatorGuitarState
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvaluatorGuitarState	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_PlayingSong
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_PilgrimGame_PlayingSong	
	{
	public:
		UPilgrimGame* PilgrimGame; // 0x0(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_SongStopped
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_PilgrimGame_SongStopped	
	{
	public:
		UPilgrimGame* PilgrimGame; // 0x0(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimGame_TrackFadeEnded
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_PilgrimGame_TrackFadeEnded	
	{
	public:
		UPilgrimGame* PilgrimGame; // 0x0(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimDifficultyTrackTypePair
	// Size: 0x2 (0x2 - 0x0)
	struct FPilgrimDifficultyTrackTypePair	
	{
	public:
		EPilgrimSongDifficulty Difficulty; // 0x0(0x1)
		EPilgrimTrackType TrackType; // 0x1(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimGemDensityDataArray
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimGemDensityDataArray	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimGemDensityData
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimGemDensityData	
	{
	public:
		int32_t SectionIndex; // 0x0(0x4)
		int32_t NumGems; // 0x4(0x4)
		FTimespan SustainDurationTotal; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimGemBreaks
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimGemBreaks	
	{
	public:
		TArray<FPilgrimGemBreak> Breaks; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_GemBreak_Base
	// Size: 0x48 (0x48 - 0x0)
	struct FPilgrimEvent_GemBreak_Base	
	{
	public:
		FPilgrimGemBreak Break; // 0x0(0x24)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		UPilgrimGemBreakListener* Listener; // 0x28(0x8)
		AActor* ForActor; // 0x30(0x8)
		bool bIsLocalPlayer; // 0x38(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float CurrentSongMS; // 0x3C(0x4)
		float CurrentSongBar; // 0x40(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_GemBreak_Started
	// Inherited from FPilgrimEvent_GemBreak_Base
	// Size: 0x0 (0x48 - 0x48)
	struct FPilgrimEvent_GemBreak_Started : public FPilgrimEvent_GemBreak_Base	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_GemBreak_Ended
	// Inherited from FPilgrimEvent_GemBreak_Base
	// Size: 0x0 (0x48 - 0x48)
	struct FPilgrimEvent_GemBreak_Ended : public FPilgrimEvent_GemBreak_Base	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_GemBreak_Pending
	// Inherited from FPilgrimEvent_GemBreak_Base
	// Size: 0x0 (0x48 - 0x48)
	struct FPilgrimEvent_GemBreak_Pending : public FPilgrimEvent_GemBreak_Base	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimGemHitAccuracy
	// Size: 0x28 (0x28 - 0x0)
	struct FPilgrimGemHitAccuracy	
	{
	public:
		float AccuracyMs; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FPilgrimAccuracyTier AccuracyTier; // 0x8(0x18)
		int32_t TierIndex; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimInputKeyBinding
	// Size: 0x20 (0x20 - 0x0)
	struct FPilgrimInputKeyBinding	
	{
	public:
		FKey KeyBinding; // 0x0(0x18)
		FName InputAction; // 0x18(0x4)
		bool bSendToServer; // 0x1C(0x1)
		bool bSendToClient; // 0x1D(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimInputPresetData
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FPilgrimInputPresetData : public FTableRowBase	
	{
	public:
		FText PresetDescription; // 0x8(0x10)
		TArray<FPilgrimInputKeyBinding> LaneBindings; // 0x18(0x10)
		bool bIsGameplayBinding; // 0x28(0x1)
		bool bIsMouseKeyboardBinding; // 0x29(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimDefaultUnbindingData
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPilgrimDefaultUnbindingData : public FTableRowBase	
	{
	public:
		bool bDoUnbindPressed; // 0x8(0x1)
		bool bDoUnbindReleased; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimGemInputSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimGemInputSettings	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_ToggleDebugCalibrationWidget
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_ToggleDebugCalibrationWidget	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_TrackLayoutPresetChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_TrackLayoutPresetChanged	
	{
	public:
		FString PresetName; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_KeybindPresetChanged
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimEvent_KeybindPresetChanged	
	{
	public:
		FString Name; // 0x0(0x10)
		UInputMappingContext* InputMappingContext; // 0x10(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_KeybindPresetActivated
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_KeybindPresetActivated	
	{
	public:
		UInputMappingContext* InputMappingContextGamepad; // 0x0(0x8)
		UInputMappingContext* InputMappingContextKeyboard; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_CameraPresetChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_CameraPresetChanged	
	{
	public:
		FString Name; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_InputReceived
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_InputReceived	
	{
	public:
		TWeakObjectPtr<AFortPlayerControllerGameplay*> UserController; // 0x0(0x8)
		FName InputAction; // 0x8(0x4)
		bool bPressEvent; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_InputOffsetCalculated
	// Size: 0x3C (0x3C - 0x0)
	struct FPilgrimEvent_InputOffsetCalculated	
	{
	public:
		EPilgrimTrackLane Lane; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Offset; // 0x4(0x4)
		int32_t TrackerGemIndex; // 0x8(0x4)
		FTrackItemInfo GemInfo; // 0xC(0x30)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerUsingPeripheralChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_PlayerUsingPeripheralChanged	
	{
	public:
		AFortPlayerState* ForPlayer; // 0x0(0x8)
		bool bIsUsingPeripheral; // 0x8(0x1)
		bool bIsInputDeviceValidForTrackType; // 0x9(0x1)
		EPilgrimPeripheralInputMode CurrentPeripheralDeviceType; // 0xA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerHistoryCacheEntry
	// Size: 0x1E8 (0x1E8 - 0x0)
	struct FPilgrimPlayerHistoryCacheEntry	
	{
	public:
		unsigned char UnknownData00_2[0x1E8]; // 0x0(0x1E8) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEventCacheDownload
	// Size: 0x290 (0x290 - 0x0)
	struct FPilgrimEventCacheDownload	
	{
	public:
		unsigned char UnknownData00_2[0x290]; // 0x0(0x290) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimSpotlightChallengeCache
	// Size: 0x108 (0x108 - 0x0)
	struct FPilgrimSpotlightChallengeCache	
	{
	public:
		unsigned char UnknownData00_2[0x108]; // 0x0(0x108) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimLeaderboardPageCache
	// Size: 0x48 (0x48 - 0x0)
	struct FPilgrimLeaderboardPageCache	
	{
	public:
		unsigned char UnknownData00_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimLeaderboardCache
	// Size: 0x60 (0x60 - 0x0)
	struct FPilgrimLeaderboardCache	
	{
	public:
		unsigned char UnknownData00_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPersonalBestResultRpl
	// Size: 0xA8 (0xA8 - 0x0)
	struct FPilgrimPersonalBestResultRpl	
	{
	public:
		FPilgrimLeaderboardEntryRpl BestSolo; // 0x0(0x38)
		FPilgrimLeaderboardEntryRpl BestBand; // 0x38(0x38)
		FPilgrimLeaderboardEntryRpl BestSpotlight; // 0x70(0x38)
	};


	// Struct PilgrimCoreRuntime.PilgrimPersonalBestHistoryRpl
	// Size: 0x158 (0x158 - 0x0)
	struct FPilgrimPersonalBestHistoryRpl	
	{
	public:
		bool bSoloReachedNewHighscore; // 0x0(0x1)
		bool bBandReachedNewHighscore; // 0x1(0x1)
		bool bSpotlightReachedNewHighscore; // 0x2(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FPilgrimPersonalBestResultRpl LoadedScore; // 0x8(0xA8)
		FPilgrimPersonalBestResultRpl NewScore; // 0xB0(0xA8)
	};


	// Struct PilgrimCoreRuntime.PilgrimPlayerHistoryCacheParams
	// Size: 0x60 (0x60 - 0x0)
	struct FPilgrimPlayerHistoryCacheParams	
	{
	public:
		FUniqueNetIdRepl PlayerAccountId; // 0x0(0x30)
		FString GameId; // 0x30(0x10)
		FString EventId; // 0x40(0x10)
		FString EventWindowId; // 0x50(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimLeaderboardIdParams
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimLeaderboardIdParams	
	{
	public:
		FName SongShortName; // 0x0(0x4)
		EPilgrimLeaderboardType LeaderboardType; // 0x4(0x1)
		bool bIsSpotlightCompetition; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FString SpotlightGroup; // 0x8(0x10)
	};


	// Struct PilgrimCoreRuntime.DifficultyInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FDifficultyInfo	
	{
	public:
		TArray<FTrackItemInfo> GemsInProgress; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_EventBase
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_MBI_EventBase	
	{
	public:
		TWeakObjectPtr<APilgrimMusicBattleInstance*> MusicBattleInstance; // 0x0(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_Started
	// Inherited from FPilgrimEvent_MBI_EventBase
	// Size: 0x0 (0x8 - 0x8)
	struct FPilgrimEvent_MBI_Started : public FPilgrimEvent_MBI_EventBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_Finished
	// Inherited from FPilgrimEvent_MBI_EventBase
	// Size: 0x0 (0x8 - 0x8)
	struct FPilgrimEvent_MBI_Finished : public FPilgrimEvent_MBI_EventBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_ServerDecidedSongToPlay
	// Inherited from FPilgrimEvent_MBI_EventBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPilgrimEvent_MBI_ServerDecidedSongToPlay : public FPilgrimEvent_MBI_EventBase	
	{
	public:
		UPilgrimSongMetadata* SongToPlay; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_ServerInitializedScoring
	// Inherited from FPilgrimEvent_MBI_EventBase
	// Size: 0x0 (0x8 - 0x8)
	struct FPilgrimEvent_MBI_ServerInitializedScoring : public FPilgrimEvent_MBI_EventBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_ClientGotSongToPlay
	// Inherited from FPilgrimEvent_MBI_EventBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPilgrimEvent_MBI_ClientGotSongToPlay : public FPilgrimEvent_MBI_EventBase	
	{
	public:
		UPilgrimSongMetadata* SongToPlay; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_ClientUpdateLipSyncData
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_MBI_ClientUpdateLipSyncData	
	{
	public:
		UAnimSequence* AnimSequence; // 0x0(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_CVarEnableTraversalChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_MBI_CVarEnableTraversalChanged	
	{
	public:
		bool EnabledTraversal; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_MBI_SongLoaded
	// Inherited from FPilgrimEvent_MBI_EventBase
	// Size: 0x10 (0x18 - 0x8)
	struct FPilgrimEvent_MBI_SongLoaded : public FPilgrimEvent_MBI_EventBase	
	{
	public:
		UPilgrimSongMetadata* LoadedSong; // 0x8(0x8)
		EPilgrimSongPlayMethod PlayMethod; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimGameInProgressOverdrive
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimGameInProgressOverdrive	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimRewindDetails
	// Size: 0xC (0xC - 0x0)
	struct FPilgrimRewindDetails	
	{
	public:
		unsigned char UnknownData00_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimGamePlayerProgressDelta
	// Size: 0x5C (0x5C - 0x0)
	struct FPilgrimGamePlayerProgressDelta	
	{
	public:
		unsigned char UnknownData00_2[0x5C]; // 0x0(0x5C) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimObjectiveFilterBase
	// Inherited from FObjectiveFilter
	// Size: 0x120 (0x1C0 - 0xA0)
	struct FPilgrimObjectiveFilterBase : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags SongID; // 0xA0(0x48)
		FObjectiveSubjectTags InstrumentId; // 0xE8(0x48)
		FObjectiveSubjectTags BandInstrumentIds; // 0x130(0x48)
		FSongShortNameMatcher SongShortName; // 0x178(0x18)
		FSongItemDefPrimaryAssetNameMatcher SongSIDMatcher; // 0x190(0x18)
		FInt32Range RequiredBandMembers; // 0x1A8(0x10)
		EPilgrimSongDifficulty RequiredDifficulty; // 0x1B8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1B9(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.SongItemDefPrimaryAssetNameMatcher
	// Size: 0x18 (0x18 - 0x0)
	struct FSongItemDefPrimaryAssetNameMatcher	
	{
	public:
		TArray<USparksSongItemDefinition*> SongItemDefs; // 0x0(0x10)
		ESongShortNameMatchType MatchType; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimObjectiveFilter_AccumulateStars
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x8 (0x1C8 - 0x1C0)
	struct FPilgrimObjectiveFilter_AccumulateStars : public FPilgrimObjectiveFilterBase	
	{
	public:
		EPilgrimAccumulateStarsMessageType VerbType; // 0x1C0(0x1)
		char StarType; // 0x1C1(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x1C2(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimObjectiveFilter_Note
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FPilgrimObjectiveFilter_Note : public FPilgrimObjectiveFilterBase	
	{
	public:
		bool DidHit; // 0x1C0(0x1)
		bool DidPass; // 0x1C1(0x1)
		bool DidMiss; // 0x1C2(0x1)
		bool IsChord; // 0x1C3(0x1)
		FInt32Range RequiredStreak; // 0x1C4(0x10)
		FInt32Range RequiredMultiplier; // 0x1D4(0x10)
		EPilgrimNoteEventMessageIncrementType IncrementType; // 0x1E4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E5(0x3) UNKNOWN PROPERTY
		int32_t IncrementValue; // 0x1E8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1EC(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimObjectiveFilter_OverdriveComplete
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FPilgrimObjectiveFilter_OverdriveComplete : public FPilgrimObjectiveFilterBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimObjectiveFilter_ScoreEvent
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x90 (0x250 - 0x1C0)
	struct FPilgrimObjectiveFilter_ScoreEvent : public FPilgrimObjectiveFilterBase	
	{
	public:
		FInt32Range RequiredScore; // 0x1C0(0x10)
		FInt32Range RequiredStars; // 0x1D0(0x10)
		FInt32Range RequiredCurrentScore; // 0x1E0(0x10)
		FInt32Range RequiredCurrentStars; // 0x1F0(0x10)
		FInt32Range RequiredCurrentSustainScore; // 0x200(0x10)
		FInt32Range RequiredDeltaSustainScore; // 0x210(0x10)
		FInt32Range RequiredCurrentChordScore; // 0x220(0x10)
		FInt32Range RequiredDeltaChordScore; // 0x230(0x10)
		bool RequireSustain; // 0x240(0x1)
		bool RequireChord; // 0x241(0x1)
		bool RequireOverdrive; // 0x242(0x1)
		EPilgrimScoreEventMessageType ScoreType; // 0x243(0x1)
		EPilgrimScoreEventMessageIncrementType IncrementType; // 0x244(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x245(0x3) UNKNOWN PROPERTY
		int32_t IncrementValue; // 0x248(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimObjectiveFilter_SetlistComplete
	// Inherited from FObjectiveFilter
	// Size: 0x60 (0x100 - 0xA0)
	struct FPilgrimObjectiveFilter_SetlistComplete : public FObjectiveFilter	
	{
	public:
		FFloatRange RequiredSoloScore; // 0xA0(0x10)
		FInt32Range RequiredSoloStars; // 0xB0(0x10)
		FFloatRange RequiredBandScore; // 0xC0(0x10)
		FInt32Range RequiredBandStars; // 0xD0(0x10)
		FInt32Range RequiredNumSongs; // 0xE0(0x10)
		FInt32Range RequiredBandMembers; // 0xF0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimObjectiveFilter_SongCompleted
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x80 (0x240 - 0x1C0)
	struct FPilgrimObjectiveFilter_SongCompleted : public FPilgrimObjectiveFilterBase	
	{
	public:
		FFloatRange RequiredSoloScore; // 0x1C0(0x10)
		FInt32Range RequiredSoloStars; // 0x1D0(0x10)
		bool bRequiredGoldSoloStars; // 0x1E0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E1(0x3) UNKNOWN PROPERTY
		FFloatRange RequiredBandScore; // 0x1E4(0x10)
		FInt32Range RequiredBandStars; // 0x1F4(0x10)
		bool bRequiredGoldBandStars; // 0x204(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x205(0x3) UNKNOWN PROPERTY
		FFloatRange RequiredNoteAccuracy; // 0x208(0x10)
		EComboType RequiredComboType; // 0x218(0x1)
		bool bUseRequiredComboType; // 0x219(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x21A(0x2) UNKNOWN PROPERTY
		FFloatRange RequiredOverdriveTime; // 0x21C(0x10)
		FFloatRange RequiredPercentPerfect; // 0x22C(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimObjectiveFilter_SongStarted
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FPilgrimObjectiveFilter_SongStarted : public FPilgrimObjectiveFilterBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimPerformanceTrackerTriggerData
	// Size: 0x1C (0x1C - 0x0)
	struct FPilgrimPerformanceTrackerTriggerData	
	{
	public:
		unsigned char UnknownData00_2[0x1C]; // 0x0(0x1C) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPerformanceTrackerSampleData
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimPerformanceTrackerSampleData	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimPerformanceTrackerData
	// Size: 0x120 (0x120 - 0x0)
	struct FPilgrimPerformanceTrackerData	
	{
	public:
		unsigned char UnknownData00_2[0x120]; // 0x0(0x120) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimDuelInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FPilgrimDuelInfo	
	{
	public:
		FGameplayTag EventMessage; // 0x0(0x4)
		TWeakObjectPtr<AFortPlayerPawn*> Pawn; // 0x4(0x8)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector OriginalLocation; // 0x10(0x18)
		FRotator OriginalRotation; // 0x28(0x18)
	};


	// Struct PilgrimCoreRuntime.PilgrimEventMessageData
	// Size: 0x88 (0x88 - 0x0)
	struct FPilgrimEventMessageData	
	{
	public:
		FGameplayTag EventMessage; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FPilgrimDuelInfo Challenger; // 0x8(0x40)
		FPilgrimDuelInfo Challenged; // 0x48(0x40)
	};


	// Struct PilgrimCoreRuntime.PilgrimPresetIndices
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimPresetIndices	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_DifficultyChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_PlayerState_DifficultyChanged	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		EPilgrimSongDifficulty NewSongDifficulty; // 0x8(0x1)
		EPilgrimSongDifficulty PrevSongDifficulty; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_InstrumentChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_PlayerState_InstrumentChanged	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		EPilgrimTrackType NewInstrumentChoice; // 0x8(0x1)
		EPilgrimTrackType PrevInstrumentChoice; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_SongVoteChanged
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimEvent_PlayerState_SongVoteChanged	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		UPilgrimSongMetadata* NewSongVote; // 0x8(0x8)
		UPilgrimSongMetadata* PrevSongVote; // 0x10(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_SetlistVoteChanged
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimEvent_PlayerState_SetlistVoteChanged	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		UPilgrimPremadeSetlist* NewSetlistVote; // 0x8(0x8)
		UPilgrimPremadeSetlist* PrevSetlistVote; // 0x10(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_ReadinessChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_PlayerState_ReadinessChanged	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		bool bIsReady; // 0x8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_HighscoreChanged
	// Size: 0x158 (0x158 - 0x0)
	struct FPilgrimEvent_PlayerState_HighscoreChanged	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		FPilgrimPersonalBestResultRpl NewHighscore; // 0x8(0xA8)
		FPilgrimPersonalBestResultRpl PrevHighscore; // 0xB0(0xA8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_NewHighscore
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_PlayerState_NewHighscore	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		int32_t Score; // 0x8(0x4)
		EPilgrimPersonalBestType BestType; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_ConnectedPeripheralsChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_PlayerState_ConnectedPeripheralsChanged	
	{
	public:
		AFortPlayerState* ForPlayer; // 0x0(0x8)
		EPilgrimPeripheralInputMode PeripheralType; // 0x8(0x1)
		EInputDeviceConnectionState ConnectionState; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PlayerState_HasConnectedPeripheralChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_PlayerState_HasConnectedPeripheralChanged	
	{
	public:
		AFortPlayerState* ForPlayer; // 0x0(0x8)
		EPilgrimPeripheralInputMode PeripheralType; // 0x8(0x1)
		bool HasConnectedPeripheral; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimQuestFilter
	// Size: 0xC8 (0xC8 - 0x0)
	struct FPilgrimQuestFilter	
	{
	public:
		FGameplayTagQuery QuestTagQuery; // 0x0(0x48)
		FGameplayTagQuery QuestObjectiveFilterQuery; // 0x48(0x48)
		FSongShortNameMatcher QuestObjectiveFilterMatcher; // 0x90(0x18)
		FSongItemDefPrimaryAssetNameMatcher QuestObjectiveSongSIDMatcher; // 0xA8(0x18)
		bool bShowCompletedQuests; // 0xC0(0x1)
		bool bShowUpdatedQuests; // 0xC1(0x1)
		bool bShowUnchangedQuests; // 0xC2(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xC3(0x5) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimQuestDisplayInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FPilgrimQuestDisplayInfo	
	{
	public:
		FText Name; // 0x0(0x10)
		FText Description; // 0x10(0x10)
		FText ShortDescription; // 0x20(0x10)
		FText CompletionText; // 0x30(0x10)
		FFortRewardInfo RewardInfo; // 0x40(0x30)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_StreakChanged
	// Size: 0xC (0xC - 0x0)
	struct FPilgrimEvent_Scoring_StreakChanged	
	{
	public:
		int32_t CurrentStreak; // 0x0(0x4)
		int32_t PreviousStreak; // 0x4(0x4)
		int32_t MaxStreak; // 0x8(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_StarChanged
	// Size: 0xC (0xC - 0x0)
	struct FPilgrimEvent_Scoring_StarChanged	
	{
	public:
		int32_t CurrentStar; // 0x0(0x4)
		int32_t PreviousStar; // 0x4(0x4)
		int32_t MaxStar; // 0x8(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_MaxStreakStateChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_Scoring_MaxStreakStateChanged	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		int32_t PlayerIndex; // 0x8(0x4)
		bool bIsAtMaxStreak; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveReady
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_Scoring_OverdriveReady	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveActiveChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_Scoring_OverdriveActiveChanged	
	{
	public:
		bool IsActive; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		APlayerState* DeployingPlayer; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_FinishedOverdriveSection
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_Scoring_FinishedOverdriveSection	
	{
	public:
		bool bIsSuccess; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_PerformanceDataResult
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPilgrimEvent_Scoring_PerformanceDataResult	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		double TotalOffset; // 0x8(0x8)
		int32_t TotalSamples; // 0x10(0x4)
		int32_t TotalGems; // 0x14(0x4)
		int32_t TotalHits; // 0x18(0x4)
		int32_t TotalMisses; // 0x1C(0x4)
		int32_t TotalPasses; // 0x20(0x4)
		int32_t TotalNotes; // 0x24(0x4)
		float MaxValue; // 0x28(0x4)
		float MinValue; // 0x2C(0x4)
		float StandardDeviation; // 0x30(0x4)
		float AverageOffset; // 0x34(0x4)
		int32_t MaxStreak; // 0x38(0x4)
		float TimeInOverdriveMs; // 0x3C(0x4)
		TMap<int32_t, int32_t> HistogramSamples; // 0x40(0x50)
		TArray<int32_t> AccuracyTierCounts; // 0x90(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_FullComboLost
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_Scoring_FullComboLost	
	{
	public:
		AFortPlayerState* ForPlayer; // 0x0(0x8)
		int32_t PlayerIndex; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_PerfectComboLost
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_Scoring_PerfectComboLost	
	{
	public:
		AFortPlayerState* ForPlayer; // 0x0(0x8)
		int32_t PlayerIndex; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_ScoreChanged
	// Size: 0x20 (0x20 - 0x0)
	struct FPilgrimEvent_Scoring_ScoreChanged	
	{
	public:
		AFortPlayerPawn* ForPlayer; // 0x0(0x8)
		int32_t PlayerIndex; // 0x8(0x4)
		float SoloDelta; // 0xC(0x4)
		float BandDelta; // 0x10(0x4)
		float SoloScore; // 0x14(0x4)
		float BandScore; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_AutoplayActiveChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_Scoring_AutoplayActiveChanged	
	{
	public:
		bool bIsAutoplayActive; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_GemScored
	// Size: 0x68 (0x68 - 0x0)
	struct FPilgrimEvent_Scoring_GemScored	
	{
	public:
		AFortPlayerState* ForPlayer; // 0x0(0x8)
		FPilgrimGemHitAccuracy Accuracy; // 0x8(0x28)
		FTrackItemInfo Gem; // 0x30(0x30)
		float BaseScore; // 0x60(0x4)
		float BonusScore; // 0x64(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_LocalPlayerMiss
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_LocalPlayerMiss	
	{
	public:
		AFortPlayerState* ForPlayer; // 0x0(0x8)
		EPilgrimTrackType CurrentTrackType; // 0x8(0x1)
		EPilgrimTrackLane Lanes; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_LocalPlayerStrummed
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_LocalPlayerStrummed	
	{
	public:
		TArray<EPilgrimTrackLane> LanesPressed; // 0x0(0x10)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_OnMistake
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_Scoring_OnMistake	
	{
	public:
		EScoringMistakeType MistakeType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AFortPlayerState* Player; // 0x8(0x8)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_Modulated
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_Scoring_Modulated	
	{
	public:
		AFortPlayerState* ForPlayer; // 0x0(0x8)
		float CurrentModulation; // 0x8(0x4)
		float LastModulation; // 0xC(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_OverdriveDrained
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_Scoring_OverdriveDrained	
	{
	public:
		AFortPlayerState* OwningPlayerState; // 0x0(0x8)
		float PreviousOverdrive; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_ServerScoreAdjustment
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimEvent_Scoring_ServerScoreAdjustment	
	{
	public:
		AFortPlayerState* OwningPlayerState; // 0x0(0x8)
		TWeakObjectPtr<AActor*> SourceActor; // 0x8(0x8)
		float ScoreAdjustment; // 0x10(0x4)
		float OverdriveAdjustment; // 0x14(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_ServerMultiplierSource
	// Size: 0xC (0xC - 0x0)
	struct FPilgrimEvent_ServerMultiplierSource	
	{
	public:
		TWeakObjectPtr<AActor*> SourceActor; // 0x0(0x8)
		float MultiplierEffect; // 0x8(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_Scoring_ServerMultiplierChanged
	// Size: 0x20 (0x20 - 0x0)
	struct FPilgrimEvent_Scoring_ServerMultiplierChanged	
	{
	public:
		APlayerState* OwningPlayerState; // 0x0(0x8)
		TArray<FPilgrimEvent_ServerMultiplierSource> MultiplierSources; // 0x8(0x10)
		float TotalMultiplierEffect; // 0x18(0x4)
		bool bHasEffects; // 0x1C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_ScoringModifierAdded
	// Size: 0x20 (0x20 - 0x0)
	struct FPilgrimEvent_ScoringModifierAdded	
	{
	public:
		UPilgrimScoringModifier* ScoringModifier; // 0x0(0x8)
		TArray<UPilgrimScoringModifier*> ScoringModifiers; // 0x8(0x10)
		EPilgrimScoringTarget Target; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_ScoringModifierRemoved
	// Size: 0x20 (0x20 - 0x0)
	struct FPilgrimEvent_ScoringModifierRemoved	
	{
	public:
		UPilgrimScoringModifier* ScoringModifier; // 0x0(0x8)
		TArray<UPilgrimScoringModifier*> RemainingScoringModifiers; // 0x8(0x10)
		EPilgrimScoringTarget Target; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_TrackBackgroundOpacityChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_PilgrimSettings_TrackBackgroundOpacityChanged	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_PilgrimSettings_UseAlternative5LaneTouchLayoutChanged	
	{
	public:
		bool bUseAlternative5LaneTouchLayout; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_UseGuitarLeftyFlipChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_PilgrimSettings_UseGuitarLeftyFlipChanged	
	{
	public:
		bool bUseGuitarLeftyFlip; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_UseProColorsForAllPartsChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_PilgrimSettings_UseProColorsForAllPartsChanged	
	{
	public:
		bool bUseProColorsForAllParts; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_NonProTrackInputButtonVisibilityChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_PilgrimSettings_NonProTrackInputButtonVisibilityChanged	
	{
	public:
		bool bNonProTrackInputButtonVisibility; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_EnableAutoCalibrationChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_PilgrimSettings_EnableAutoCalibrationChanged	
	{
	public:
		bool bEnableAutoCalibration; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_PilgrimSettings_ProTrackInputButtonVisibilityChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_PilgrimSettings_ProTrackInputButtonVisibilityChanged	
	{
	public:
		bool bProTrackInputButtonVisibility; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.RBTrackInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FRBTrackInfo	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimOverdriveSectionInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimOverdriveSectionInfo	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_SongLoading_Started
	// Size: 0x4 (0x4 - 0x0)
	struct FPilgrimEvent_SongLoading_Started	
	{
	public:
		FName Song; // 0x0(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimEvent_SongLoading_EveryoneFinished
	// Size: 0x4 (0x4 - 0x0)
	struct FPilgrimEvent_SongLoading_EveryoneFinished	
	{
	public:
		FName Song; // 0x0(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimSongPlaylistEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimSongPlaylistEntry	
	{
	public:
		UPilgrimSongMetadata* Song; // 0x0(0x8)
		EPilgrimSongDifficulty SongDifficulty; // 0x8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimSongSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimSongSettings	
	{
	public:
		UPilgrimSongMetadata* Song; // 0x0(0x8)
		FName SongShortName; // 0x8(0x4)
		EPilgrimSongDifficulty Difficulty; // 0xC(0x1)
		EPilgrimTrackType TrackType; // 0xD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimSongTime
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimSongTime	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimStreakInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimStreakInfo	
	{
	public:
		int32_t NotesCount; // 0x0(0x4)
		float DamageMultiplier; // 0x4(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimCoreToggleRenderTargetEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimCoreToggleRenderTargetEvent	
	{
	public:
		bool bToggleRenderTargetOn; // 0x0(0x1)
	};


	// Struct PilgrimCoreRuntime.PilgrimTrackItemKey
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimTrackItemKey	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.TrackSpawnParams
	// Size: 0x80 (0x80 - 0x0)
	struct FTrackSpawnParams	
	{
	public:
		unsigned char UnknownData00_2[0x80]; // 0x0(0x80) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessageBase
	// Inherited from FVerbMessage
	// Size: 0xB8 (0x130 - 0x78)
	struct FPilgrimVerbMessageBase : public FVerbMessage	
	{
	public:
		FName SongShortName; // 0x78(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FSubjectTagsPair SongID; // 0x80(0x38)
		FSubjectTagsPair InstrumentId; // 0xB8(0x38)
		FSubjectTagsPair BandInstrumentIds; // 0xF0(0x38)
		char NumBandMembers; // 0x128(0x1)
		EPilgrimSongDifficulty Difficulty; // 0x129(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x12A(0x2) UNKNOWN PROPERTY
		FName SongItemDefPrimaryAssetName; // 0x12C(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessage_AccumulateStars
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x138 - 0x130)
	struct FPilgrimVerbMessage_AccumulateStars : public FPilgrimVerbMessageBase	
	{
	public:
		char TotalStars; // 0x130(0x1)
		char DeltaStars; // 0x131(0x1)
		bool bIsBandStar; // 0x132(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x133(0x5) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessage_DeployOverdrive
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x130 - 0x130)
	struct FPilgrimVerbMessage_DeployOverdrive : public FPilgrimVerbMessageBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessage_Note
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x10 (0x140 - 0x130)
	struct FPilgrimVerbMessage_Note : public FPilgrimVerbMessageBase	
	{
	public:
		bool DidHit; // 0x130(0x1)
		bool DidPass; // 0x131(0x1)
		bool DidMiss; // 0x132(0x1)
		bool IsChord; // 0x133(0x1)
		int32_t NoteStreak; // 0x134(0x4)
		int32_t Multiplier; // 0x138(0x4)
		float TimeSinceLastNoteMS; // 0x13C(0x4)
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessage_OverdriveComplete
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x130 - 0x130)
	struct FPilgrimVerbMessage_OverdriveComplete : public FPilgrimVerbMessageBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessage_ScoreEvent
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x28 (0x158 - 0x130)
	struct FPilgrimVerbMessage_ScoreEvent : public FPilgrimVerbMessageBase	
	{
	public:
		int32_t CurrentScore; // 0x130(0x4)
		int32_t DeltaScore; // 0x134(0x4)
		int32_t CurrentStars; // 0x138(0x4)
		int32_t DeltaStars; // 0x13C(0x4)
		float CurrentChordScore; // 0x140(0x4)
		float DeltaChordScore; // 0x144(0x4)
		float CurrentSustainScore; // 0x148(0x4)
		float DeltaSustainScore; // 0x14C(0x4)
		bool bIsInOverdrive; // 0x150(0x1)
		bool bIsBandScore; // 0x151(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x152(0x6) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessage_SetlistComplete
	// Inherited from FVerbMessage
	// Size: 0x18 (0x90 - 0x78)
	struct FPilgrimVerbMessage_SetlistComplete : public FVerbMessage	
	{
	public:
		float SoloScore; // 0x78(0x4)
		float BandScore; // 0x7C(0x4)
		int32_t SoloStars; // 0x80(0x4)
		int32_t BandStars; // 0x84(0x4)
		int32_t NumSongs; // 0x88(0x4)
		char NumBandMembers; // 0x8C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x8D(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessage_SongCompleted
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x28 (0x158 - 0x130)
	struct FPilgrimVerbMessage_SongCompleted : public FPilgrimVerbMessageBase	
	{
	public:
		float SoloScore; // 0x130(0x4)
		float BandScore; // 0x134(0x4)
		int32_t SoloStars; // 0x138(0x4)
		int32_t BandStars; // 0x13C(0x4)
		int32_t NumPlayers; // 0x140(0x4)
		float NoteAccuracy; // 0x144(0x4)
		float OverdriveTime; // 0x148(0x4)
		EComboType ComboType; // 0x14C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
		float PercentPerfect; // 0x150(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbMessage_SongStarted
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x130 - 0x130)
	struct FPilgrimVerbMessage_SongStarted : public FPilgrimVerbMessageBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimVerbFilter_DeployOverdrive
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x1C0 - 0x1C0)
	struct FPilgrimVerbFilter_DeployOverdrive : public FPilgrimObjectiveFilterBase	
	{
	public:
	};


	// Struct PilgrimCoreRuntime.PilgrimEvaluatorState
	// Size: 0x208 (0x208 - 0x0)
	struct FPilgrimEvaluatorState	
	{
	public:
		unsigned char UnknownData00_2[0x208]; // 0x0(0x208) UNKNOWN PROPERTY
	};

}
