#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PilgrimCoreRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/PilgrimCoreRuntime.EPilgrimTrackLane
	enum EPilgrimTrackLane
	{
		EPilgrimTrackLane__TrackLaneNone = 0,
		EPilgrimTrackLane__TrackLane0 = 1,
		EPilgrimTrackLane__TrackLane1 = 2,
		EPilgrimTrackLane__TrackLane2 = 4,
		EPilgrimTrackLane__TrackLane3 = 8,
		EPilgrimTrackLane__TrackLane4 = 10,
		EPilgrimTrackLane__TrackLane5 = 20,
		EPilgrimTrackLane__NumTrackLanes = 6,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimGemType
	enum EPilgrimGemType
	{
		EPilgrimGemType__Normal = 0,
		EPilgrimGemType__PullOff = 1,
		EPilgrimGemType__HOPO = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EBeatMarkerType
	enum EBeatMarkerType
	{
		EBeatMarkerType__None = 0,
		EBeatMarkerType__OnBeat = 1,
		EBeatMarkerType__OnDownbeat = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimTrackType
	enum EPilgrimTrackType
	{
		EPilgrimTrackType__TrackGuitar = 0,
		EPilgrimTrackType__TrackBass = 1,
		EPilgrimTrackType__TrackVocals = 2,
		EPilgrimTrackType__TrackDrum = 3,
		EPilgrimTrackType__TrackPlasticGuitar = 4,
		EPilgrimTrackType__TrackPlasticBass = 5,
		EPilgrimTrackType__TrackPlasticDrum = 6,
		EPilgrimTrackType__TrackEvents = 7,
		EPilgrimTrackType__TrackNone = 8,
		EPilgrimTrackType__NumTrackTypes = 8,
	};


	// Enum /Script/PilgrimCoreRuntime.EOverdriveScoringState
	enum EOverdriveScoringState
	{
		EOverdriveScoringState__None = 0,
		EOverdriveScoringState__ActiveSection = 1,
	};


	// Enum /Script/PilgrimCoreRuntime.EMusicBattleProjectileType
	enum EMusicBattleProjectileType
	{
		EMusicBattleProjectileType__None = 0,
		EMusicBattleProjectileType__BeamSuccess = 1,
		EMusicBattleProjectileType__BeamFailure = 2,
		EMusicBattleProjectileType__BeamClash = 3,
		EMusicBattleProjectileType__BothMiss = 4,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimSongDifficulty
	enum EPilgrimSongDifficulty
	{
		EPilgrimSongDifficulty__DifficultyEasy = 0,
		EPilgrimSongDifficulty__DifficultyMedium = 1,
		EPilgrimSongDifficulty__DifficultyHard = 2,
		EPilgrimSongDifficulty__DifficultyExpert = 3,
		EPilgrimSongDifficulty__None = 4,
		EPilgrimSongDifficulty__NumDifficulties = 5,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimSongPlayMethod
	enum EPilgrimSongPlayMethod
	{
		EPilgrimSongPlayMethod__Invalid = 0,
		EPilgrimSongPlayMethod__Streaming = 1,
		EPilgrimSongPlayMethod__LocalMetasounds = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EMusicBattleEndReason
	enum EMusicBattleEndReason
	{
		EMusicBattleEndReason__NoReason = 0,
		EMusicBattleEndReason__CompletedNormally = 1,
		EMusicBattleEndReason__HardStopAndSkipPostGame = 2,
		EMusicBattleEndReason__HardStopAndContinueFlow = 3,
		EMusicBattleEndReason__RestartingSong = 4,
	};


	// Enum /Script/PilgrimCoreRuntime.EMusicBattleClientUpdate
	enum EMusicBattleClientUpdate
	{
		EMusicBattleClientUpdate__PilgrimGameCreated = 0,
		EMusicBattleClientUpdate__SongFinished = 1,
		EMusicBattleClientUpdate__TearDownFinished = 2,
		EMusicBattleClientUpdate__StopAndSkipPostGame = 3,
		EMusicBattleClientUpdate__StopAndRestartSong = 4,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimTimedInputType
	enum EPilgrimTimedInputType
	{
		EPilgrimTimedInputType__None = 0,
		EPilgrimTimedInputType__Lane = 1,
		EPilgrimTimedInputType__DeployOverdrive = 2,
		EPilgrimTimedInputType__Strum = 3,
		EPilgrimTimedInputType__Modulate = 4,
		EPilgrimTimedInputType__DrainOverdrive = 5,
		EPilgrimTimedInputType__OverdriveItemActivated = 6,
		EPilgrimTimedInputType__OverdriveItemGrantedNotActivated = 7,
	};


	// Enum /Script/PilgrimCoreRuntime.EMusicBattleType
	enum EMusicBattleType
	{
		EMusicBattleType__None = 0,
		EMusicBattleType__SinglePlayerLocalVs = 1,
		EMusicBattleType__MultiplayerVs = 2,
		EMusicBattleType__SinglePlayerSparks = 3,
		EMusicBattleType__TeamQuickplay = 4,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimLeaderboardType
	enum EPilgrimLeaderboardType
	{
		EPilgrimLeaderboardType__SoloGuitar = 0,
		EPilgrimLeaderboardType__SoloBass = 1,
		EPilgrimLeaderboardType__SoloVocals = 2,
		EPilgrimLeaderboardType__SoloDrum = 3,
		EPilgrimLeaderboardType__BandDuo = 4,
		EPilgrimLeaderboardType__BandTrio = 5,
		EPilgrimLeaderboardType__BandQuad = 6,
		EPilgrimLeaderboardType__SoloPeripheralGuitar = 7,
		EPilgrimLeaderboardType__SoloPeripheralBass = 8,
		EPilgrimLeaderboardType__SoloPeripheralDrum = 9,
		EPilgrimLeaderboardType__Invalid = A,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimPlayerFeedSortType
	enum EPilgrimPlayerFeedSortType
	{
		EPilgrimPlayerFeedSortType__NewestScore = 0,
		EPilgrimPlayerFeedSortType__OldestScore = 1,
		EPilgrimPlayerFeedSortType__HighestScore = 2,
		EPilgrimPlayerFeedSortType__LowestScore = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.ESongShortNameMatchType
	enum ESongShortNameMatchType
	{
		ESongShortNameMatchType__AlwaysMatch = 0,
		ESongShortNameMatchType__MatchAny = 1,
		ESongShortNameMatchType__MatchAll = 2,
		ESongShortNameMatchType__MatchNone = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimPeripheralInputMode
	enum EPilgrimPeripheralInputMode
	{
		EPilgrimPeripheralInputMode__None = 0,
		EPilgrimPeripheralInputMode__Guitar = 1,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimCantAddSongReason
	enum EPilgrimCantAddSongReason
	{
		EPilgrimCantAddSongReason__None = 0,
		EPilgrimCantAddSongReason__SetlistLocked = 1,
		EPilgrimCantAddSongReason__SongAlreadyAdded = 2,
		EPilgrimCantAddSongReason__PlayerHasAddedMaxSongs = 3,
		EPilgrimCantAddSongReason__InvalidSongShortName = 4,
		EPilgrimCantAddSongReason__MissingSong = 5,
		EPilgrimCantAddSongReason__SongNotAvailable = 6,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimPlayerHistoryScoreParam
	enum EPilgrimPlayerHistoryScoreParam
	{
		EPilgrimPlayerHistoryScoreParam__AllScores = 0,
		EPilgrimPlayerHistoryScoreParam__HigherScores = 1,
		EPilgrimPlayerHistoryScoreParam__LowerScores = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimStreamerStatus
	enum EPilgrimStreamerStatus
	{
		EPilgrimStreamerStatus__Idle = 0,
		EPilgrimStreamerStatus__DownloadingMidi = 1,
		EPilgrimStreamerStatus__Preparing = 2,
		EPilgrimStreamerStatus__Opening = 3,
		EPilgrimStreamerStatus__Ready = 4,
		EPilgrimStreamerStatus__Streaming = 5,
		EPilgrimStreamerStatus__Errored = 6,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimStateMachineMessage
	enum EPilgrimStateMachineMessage
	{
		EPilgrimStateMachineMessage__None = 0,
		EPilgrimStateMachineMessage__Solo_PlayPreviousSong = 1,
		EPilgrimStateMachineMessage__Solo_PlayNextSong = 2,
		EPilgrimStateMachineMessage__Solo_LeaveStage = 3,
		EPilgrimStateMachineMessage__Multiplayer_LeaveStage = 4,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsSongEndReason
	enum EPilgrimAnalyticsSongEndReason
	{
		EPilgrimAnalyticsSongEndReason__SongFinished = 0,
		EPilgrimAnalyticsSongEndReason__SongRestarted = 1,
		EPilgrimAnalyticsSongEndReason__PlayerDisconnected = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsSongAccessScope
	enum EPilgrimAnalyticsSongAccessScope
	{
		EPilgrimAnalyticsSongAccessScope__None = 0,
		EPilgrimAnalyticsSongAccessScope__Player = 1,
		EPilgrimAnalyticsSongAccessScope__Party = 2,
		EPilgrimAnalyticsSongAccessScope__All = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimAnalyticsResultsReturn
	enum EPilgrimAnalyticsResultsReturn
	{
		EPilgrimAnalyticsResultsReturn__None = 0,
		EPilgrimAnalyticsResultsReturn__LeaveToLobby = 1,
		EPilgrimAnalyticsResultsReturn__LeaveStage = 2,
		EPilgrimAnalyticsResultsReturn__LeaveStage_Timer = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.EPresetLanesDifficulty
	enum EPresetLanesDifficulty
	{
		EPresetLanesDifficulty__General = 4,
		EPresetLanesDifficulty__Expert = 5,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimInputCategory
	enum EPilgrimInputCategory
	{
		EPilgrimInputCategory__Lane = 0,
		EPilgrimInputCategory__Overdrive = 1,
		EPilgrimInputCategory__Strum = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimGemInputState
	enum EPilgrimGemInputState
	{
		EPilgrimGemInputState__GemHit = 0,
		EPilgrimGemInputState__UserSwingAndMiss = 1,
		EPilgrimGemInputState__GemPassed = 2,
		EPilgrimGemInputState__NumGemInputStates = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimPersonalBestType
	enum EPilgrimPersonalBestType
	{
		EPilgrimPersonalBestType__SoloScore = 0,
		EPilgrimPersonalBestType__BandScore = 1,
		EPilgrimPersonalBestType__SpotlightScore = 2,
		EPilgrimPersonalBestType__Invalid = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimAccumulateStarsMessageType
	enum EPilgrimAccumulateStarsMessageType
	{
		EPilgrimAccumulateStarsMessageType__BandStars = 0,
		EPilgrimAccumulateStarsMessageType__SoloStars = 1,
		EPilgrimAccumulateStarsMessageType__Count = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimAccumulateStarTypes
	enum EPilgrimAccumulateStarTypes
	{
		EPilgrimAccumulateStarTypes__None = 0,
		EPilgrimAccumulateStarTypes__Regular = 1,
		EPilgrimAccumulateStarTypes__Golden = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimNoteEventMessageIncrementType
	enum EPilgrimNoteEventMessageIncrementType
	{
		EPilgrimNoteEventMessageIncrementType__ByTime = 0,
		EPilgrimNoteEventMessageIncrementType__ByValue = 1,
		EPilgrimNoteEventMessageIncrementType__Count = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimScoreEventMessageType
	enum EPilgrimScoreEventMessageType
	{
		EPilgrimScoreEventMessageType__BandScore = 0,
		EPilgrimScoreEventMessageType__SoloScore = 1,
		EPilgrimScoreEventMessageType__Count = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimScoreEventMessageIncrementType
	enum EPilgrimScoreEventMessageIncrementType
	{
		EPilgrimScoreEventMessageIncrementType__ByScore = 0,
		EPilgrimScoreEventMessageIncrementType__ByStars = 1,
		EPilgrimScoreEventMessageIncrementType__ByValue = 2,
		EPilgrimScoreEventMessageIncrementType__Count = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimIMCPriority
	enum EPilgrimIMCPriority
	{
		EPilgrimIMCPriority__Low = 0,
		EPilgrimIMCPriority__Medium = 1,
		EPilgrimIMCPriority__High = 2,
		EPilgrimIMCPriority__Highest = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.EScoringMistakeType
	enum EScoringMistakeType
	{
		EScoringMistakeType__Miss = 0,
		EScoringMistakeType__Pass = 1,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimScoringMode
	enum EPilgrimScoringMode
	{
		EPilgrimScoringMode__IncludeModifiers = 0,
		EPilgrimScoringMode__ExcludeModifiers = 1,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimScoringTarget
	enum EPilgrimScoringTarget
	{
		EPilgrimScoringTarget__None = 0,
		EPilgrimScoringTarget__BaseGem = 1,
		EPilgrimScoringTarget__StreakMultiplier = 2,
		EPilgrimScoringTarget__OverdriveMultiplier = 3,
		EPilgrimScoringTarget__SustainPerBeat = 4,
		EPilgrimScoringTarget__AccuracyMultiplier = 5,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimSongSortMethod
	enum EPilgrimSongSortMethod
	{
		EPilgrimSongSortMethod__Artist = 0,
		EPilgrimSongSortMethod__Title = 1,
		EPilgrimSongSortMethod__Year = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimSongSortDirection
	enum EPilgrimSongSortDirection
	{
		EPilgrimSongSortDirection__Ascending = 0,
		EPilgrimSongSortDirection__Descending = 1,
	};


	// Enum /Script/PilgrimCoreRuntime.EWidgetTouchKbmControllerTransitionType
	enum EWidgetTouchKbmControllerTransitionType
	{
		EWidgetTouchKbmControllerTransitionType__Opacity = 0,
		EWidgetTouchKbmControllerTransitionType__Collapse = 1,
		EWidgetTouchKbmControllerTransitionType__DoNothing = 2,
		EWidgetTouchKbmControllerTransitionType__Count = 3,
	};


	// Enum /Script/PilgrimCoreRuntime.EGemHitMethod
	enum EGemHitMethod
	{
		Press = 0,
		Release = 1,
	};


	// Enum /Script/PilgrimCoreRuntime.EComboType
	enum EComboType
	{
		EComboType__None = 0,
		EComboType__Full = 1,
		EComboType__Perfect = 2,
	};


	// Enum /Script/PilgrimCoreRuntime.EPilgrimEvaluatorRuleSet
	enum EPilgrimEvaluatorRuleSet
	{
		standard = 0,
		StrummedGuitar = 1,
	};


	// Enum /Script/PilgrimCoreRuntime.EGemReleaseHandlingBehavior
	enum EGemReleaseHandlingBehavior
	{
		DefaultProcessing = 0,
		ForceRelease = 1,
	};

}
