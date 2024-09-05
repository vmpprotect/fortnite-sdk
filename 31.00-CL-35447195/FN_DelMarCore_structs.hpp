#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DelMarCore.DelMarEnvironmentVFX
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarEnvironmentVFX	
	{
	public:
		UNiagaraSystem OnAppliedFX; // 0x0(0x8)
		UNiagaraSystem WhileAppliedFX; // 0x8(0x8)
		UNiagaraSystem OnRemovedFX; // 0x10(0x8)
	};


	// Struct DelMarCore.DelMarAIDifficultySpawnInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarAIDifficultySpawnInfo	
	{
	public:
		int32_t SkillLevel; // 0x0(0x4)
		float BotFillPercentage; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarAIMMRSpawnDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FDelMarAIMMRSpawnDataTableRow : public FTableRowBase	
	{
	public:
		int32_t MMRBracketLow; // 0x8(0x4)
		int32_t MMRBracketHigh; // 0xC(0x4)
		int32_t FallbackSkillLevel; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray BotSpawnInfo; // 0x18(0x10)
	};


	// Struct DelMarCore.DelMarAIVehicleCosmeticSlotDataTableInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FDelMarAIVehicleCosmeticSlotDataTableInfo	
	{
	public:
		TWeakObjectPtr SlotTemplate; // 0x0(0x20)
		TWeakObjectPtr VehicleSlotCosmeticDataTable; // 0x20(0x20)
	};


	// Struct DelMarCore.DelMarCosmeticLoadoutSlotData
	// Size: 0x40 (0x40 - 0x0)
	struct FDelMarCosmeticLoadoutSlotData	
	{
	public:
		TWeakObjectPtr SlotTemplate; // 0x0(0x20)
		TWeakObjectPtr EquippedItemDefinitionObject; // 0x20(0x20)
	};


	// Struct DelMarCore.DelMarAIVehicleCosmeticLoadoutSetDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FDelMarAIVehicleCosmeticLoadoutSetDataTableRow : public FTableRowBase	
	{
	public:
		TArray LoadoutSlots; // 0x8(0x10)
		float Weight; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarAIVehicleCosmeticSlotDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FDelMarAIVehicleCosmeticSlotDataTableRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr EquippedItemDefinitionObject; // 0x8(0x20)
		float Weight; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarAITrackDecision
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarAITrackDecision	
	{
	public:
		TWeakObjectPtr Track; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.AvoidanceInfo
	// Size: 0x88 (0x88 - 0x0)
	struct FAvoidanceInfo	
	{
	public:
		TMap DriveHazardInfoMap; // 0x0(0x50)
		TArray NonJumpableDriveHazardInfos; // 0x50(0x10)
		TArray JumpableDriveHazardInfos; // 0x60(0x10)
		UDriveHazardInfo PrimaryTraceHitDriveHazard; // 0x70(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarCosmeticSlotInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FDelMarCosmeticSlotInfo	
	{
	public:
		FGameplayTag SlotTag; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText SlotName; // 0x8(0x10)
		FText ShortDescription; // 0x18(0x10)
		bool bCanBeEmpty; // 0x28(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr UnassignedPreviewImage; // 0x30(0x20)
	};


	// Struct DelMarCore.DelMarEvent_DriverInteractionAdded
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_DriverInteractionAdded	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEventRouterExt
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarEventRouterExt	
	{
	public:
		bool bWorldIsTearingDown; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UGameplayEventRouterComponent EventRouter; // 0x8(0x8)
		UObject EventRouterContextObject; // 0x10(0x8)
	};


	// Struct DelMarCore.DelMarGameplayStateChangedEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarGameplayStateChangedEvent	
	{
	public:
		FGameplayTag PrevStateId; // 0x0(0x4)
		FGameplayTag NewStateId; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarEvent_ResetRace
	// Size: 0x1 (0x1 - 0x0)
	struct FDelMarEvent_ResetRace	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_ResetRun
	// Size: 0x1 (0x1 - 0x0)
	struct FDelMarEvent_ResetRun	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_RaceFinished
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_RaceFinished	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_FirstPlayerFinishedCountdown
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarEvent_FirstPlayerFinishedCountdown	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_RaceActive
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_RaceActive	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_RunActive
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarEvent_RunActive	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_OvertimeActive
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_OvertimeActive	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_CountdownActive
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarEvent_CountdownActive	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_PlayerFinishedRace
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarEvent_PlayerFinishedRace	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_RacerStateChanged
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarEvent_RacerStateChanged	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FGameplayTag PrevStateId; // 0x8(0x4)
		FGameplayTag NewStateId; // 0xC(0x4)
	};


	// Struct DelMarCore.DelMarEvent_PlayerBecomeSpectator
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_PlayerBecomeSpectator	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_RaceManagerInitialized
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_RaceManagerInitialized	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_VehicleAssignedToPawn
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_VehicleAssignedToPawn	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_ServerRaceStartCountdownTime
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_ServerRaceStartCountdownTime	
	{
	public:
		double ServerTime; // 0x0(0x8)
	};


	// Struct DelMarCore.DelMarEvent_ServerPostRaceEndTime
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_ServerPostRaceEndTime	
	{
	public:
		double ServerTime; // 0x0(0x8)
	};


	// Struct DelMarCore.DelMarEvent_VehicleDemolished
	// Size: 0xC (0xC - 0x0)
	struct FDelMarEvent_VehicleDemolished	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FGameplayTag CausedByTag; // 0x8(0x4)
	};


	// Struct DelMarCore.DelMarEvent_VehicleWrongwayStatus
	// Size: 0x1 (0x1 - 0x0)
	struct FDelMarEvent_VehicleWrongwayStatus	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_MissedCheckpointDemoCountdown
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_MissedCheckpointDemoCountdown	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_ReturnToTrackDemoCountdown
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_ReturnToTrackDemoCountdown	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_TrackedPlayerReadyStates
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarEvent_TrackedPlayerReadyStates	
	{
	public:
		TArray ReadyPlayers; // 0x0(0x10)
		TArray UnreadyPlayers; // 0x10(0x10)
	};


	// Struct DelMarCore.DelMarEvent_LoadedPlayerStates
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_LoadedPlayerStates	
	{
	public:
		int32_t NumLoadedPlayers; // 0x0(0x4)
		int32_t TotalPlayers; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarEvent_LoadingScreenData
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarEvent_LoadingScreenData	
	{
	public:
		UDelMarLevelDataAsset LevelData; // 0x0(0x8)
		FGameplayTag RaceMode; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_DialogRequest
	// Size: 0x4 (0x4 - 0x0)
	struct FDelMarEvent_DialogRequest	
	{
	public:
		FGameplayTag DialogTag; // 0x0(0x4)
	};


	// Struct DelMarCore.DelMarEvent_SetTutorialHint
	// Size: 0x48 (0x48 - 0x0)
	struct FDelMarEvent_SetTutorialHint	
	{
	public:
		FText KBMText; // 0x0(0x10)
		FText GamepadText; // 0x10(0x10)
		FText TouchText; // 0x20(0x10)
		float DisplayTime; // 0x30(0x4)
		int32_t Priority; // 0x34(0x4)
		TArray AssociatedInputActions; // 0x38(0x10)
	};


	// Struct DelMarCore.DelMarEvent_SetTutorialAnnouncement
	// Size: 0x40 (0x40 - 0x0)
	struct FDelMarEvent_SetTutorialAnnouncement	
	{
	public:
		FText KBMText; // 0x0(0x10)
		FText GamepadText; // 0x10(0x10)
		FText TouchText; // 0x20(0x10)
		TArray AssociatedInputActions; // 0x30(0x10)
	};


	// Struct DelMarCore.DelMarEvent_MidTutorialModal
	// Size: 0x1 (0x1 - 0x0)
	struct FDelMarEvent_MidTutorialModal	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_SetControlsText
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarEvent_SetControlsText	
	{
	public:
		FText KBMText; // 0x0(0x10)
		FText GamepadText; // 0x10(0x10)
	};


	// Struct DelMarCore.DelMarEvent_CheckpointPassed_ParallelPath
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarEvent_CheckpointPassed_ParallelPath	
	{
	public:
		ADelMarCheckpoint CurrentCheckPoint; // 0x0(0x8)
		int32_t CheckpointIndexForLap; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_CheckpointPassedOutOfOrder_ParallelPath
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath	
	{
	public:
		ADelMarCheckpoint CurrentCheckPoint; // 0x0(0x8)
	};


	// Struct DelMarCore.DelMarEvent_TeleportEnteredEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_TeleportEnteredEvent	
	{
	public:
		ADelMarCheckpoint CheckpointEntered; // 0x0(0x8)
	};


	// Struct DelMarCore.DelMarEvent_TeleportExitedEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_TeleportExitedEvent	
	{
	public:
		ADelMarCheckpoint CheckpointExited; // 0x0(0x8)
	};


	// Struct DelMarCore.DelMarEvent_SectionComplete_ParallelPath
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarEvent_SectionComplete_ParallelPath	
	{
	public:
		int32_t ActiveLap; // 0x0(0x4)
		int32_t SectionIndex; // 0x4(0x4)
		ADelMarCheckpoint CompletedCheckpoint; // 0x8(0x8)
		ADelMarCheckpoint CurrentCheckPoint; // 0x10(0x8)
		double CompletedSectionTime; // 0x18(0x8)
	};


	// Struct DelMarCore.DelMarEvent_LapComplete
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarEvent_LapComplete	
	{
	public:
		AFortPlayerState PlayerState; // 0x0(0x8)
		int32_t CompletedLap; // 0x8(0x4)
		int32_t CurrentLap; // 0xC(0x4)
		int32_t TotalLaps; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		double CompletedLapTime; // 0x18(0x8)
	};


	// Struct DelMarCore.DelMarEvent_LapRecorded
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarEvent_LapRecorded	
	{
	public:
		int32_t CompletedLap; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDelMarRunRecord CurrentRunRecord; // 0x8(0x20)
		float BestSingleLapTime; // 0x28(0x4)
		bool bIsNewLapRecord; // 0x2C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarRunRecord
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarRunRecord	
	{
	public:
		double RunDuration; // 0x0(0x8)
		double RunStartTimestamp; // 0x8(0x8)
		TArray LapRecords; // 0x10(0x10)
	};


	// Struct DelMarCore.DelMarLapRecord
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarLapRecord	
	{
	public:
		double LapDuration; // 0x0(0x8)
		TArray SectionTimes; // 0x8(0x10)
	};


	// Struct DelMarCore.DelMarEvent_SectionRecorded
	// Size: 0x50 (0x50 - 0x0)
	struct FDelMarEvent_SectionRecorded	
	{
	public:
		int32_t ActiveLap; // 0x0(0x4)
		int32_t SectionIndex; // 0x4(0x4)
		FDelMarRunRecord BestSectionsRunRecord; // 0x8(0x20)
		FDelMarRunRecord CurrentRunRecord; // 0x28(0x20)
		bool bIsNewSectionRecord; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_RunRecorded
	// Size: 0x50 (0x50 - 0x0)
	struct FDelMarEvent_RunRecorded	
	{
	public:
		AFortPlayerState PlayerState; // 0x0(0x8)
		FDelMarRunRecord CurrentRunRecord; // 0x8(0x20)
		FDelMarRunRecord BestRunRecord; // 0x28(0x20)
		bool bIsNewBestRun; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_NuxConnectedHintActionPerformed
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEvent_NuxConnectedHintActionPerformed	
	{
	public:
		FGameplayTag HintTypeTag; // 0x0(0x4)
		bool bDidPerformAction; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_RaceModeSet
	// Size: 0x4 (0x4 - 0x0)
	struct FDelMarEvent_RaceModeSet	
	{
	public:
		FGameplayTag RaceModeTag; // 0x0(0x4)
	};


	// Struct DelMarCore.DelMarEvent_GlobalLeaderboardNewPersonalBest
	// Size: 0x48 (0x48 - 0x0)
	struct FDelMarEvent_GlobalLeaderboardNewPersonalBest	
	{
	public:
		TWeakObjectPtr Player; // 0x0(0x8)
		FDelMarGlobalLeaderboardEntry PersonalBest; // 0x8(0x40)
	};


	// Struct DelMarCore.DelMarGlobalLeaderboardEntry
	// Size: 0x40 (0x40 - 0x0)
	struct FDelMarGlobalLeaderboardEntry	
	{
	public:
		FString PlayerAccountId; // 0x0(0x10)
		FString PlayerName; // 0x10(0x10)
		double RunDuration; // 0x20(0x8)
		int64_t Rank; // 0x28(0x8)
		double Percentile; // 0x30(0x8)
		bool bIsLocalPlayer; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_MatchmakingStateChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FDelMarEvent_MatchmakingStateChanged	
	{
	public:
		char NewPostMatchState; // 0x0(0x1)
	};


	// Struct DelMarCore.DelMarEvent_PostRaceReturnToLobbySelected
	// Size: 0x1 (0x1 - 0x0)
	struct FDelMarEvent_PostRaceReturnToLobbySelected	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_PostRaceNextRaceSelected
	// Size: 0x1 (0x1 - 0x0)
	struct FDelMarEvent_PostRaceNextRaceSelected	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarFloatModifier
	// Size: 0x14 (0x14 - 0x0)
	struct FDelMarFloatModifier	
	{
	public:
		FName category; // 0x0(0x4)
		int32_t Priority; // 0x4(0x4)
		float Value; // 0x8(0x4)
		TEnumAsByte Operation; // 0xC(0x1)
		TEnumAsByte StackingPolicy; // 0xD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		int32_t Handle; // 0x10(0x4)
	};


	// Struct DelMarCore.DelMarFloatAttribute
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarFloatAttribute	
	{
	public:
		float BaseValue; // 0x0(0x4)
		float FinalValue; // 0x4(0x4)
		bool bClampMin; // 0x8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float MinValue; // 0xC(0x4)
		bool bClampMax; // 0x10(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float MaxValue; // 0x14(0x4)
		TArray Modifiers; // 0x18(0x10)
		int32_t CurrentHandleIdx; // 0x28(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.GhostReplayFrame
	// Size: 0x50 (0x50 - 0x0)
	struct FGhostReplayFrame	
	{
	public:
		FVector Location; // 0x0(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0x20(0x20)
		double Time; // 0x40(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarLeaderboardSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarLeaderboardSettings	
	{
	public:
		FString EventId; // 0x0(0x10)
		FString WindowId; // 0x10(0x10)
	};


	// Struct DelMarCore.DelMarInputAction
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarInputAction	
	{
	public:
		UInputAction Action; // 0x0(0x8)
		FGameplayTag DisabledTag; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarInputMappingContextData
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarInputMappingContextData	
	{
	public:
		int32_t Priority; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFortInputMappingContext MappingContext; // 0x8(0x8)
	};


	// Struct DelMarCore.DelMarActivatedInput
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarActivatedInput	
	{
	public:
		UInputAction Action; // 0x0(0x8)
		FVector Value; // 0x8(0x18)
	};


	// Struct DelMarCore.DelMarActivatedInputFrame
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarActivatedInputFrame	
	{
	public:
		float duration; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Inputs; // 0x8(0x10)
	};


	// Struct DelMarCore.DelMarDisabledInputData
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarDisabledInputData	
	{
	public:
		float duration; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass EffectClass; // 0x8(0x8)
	};


	// Struct DelMarCore.DelMarObjectiveFilterBase
	// Inherited from FObjectiveFilter
	// Size: 0xF0 (0x190 - 0xA0)
	struct FDelMarObjectiveFilterBase : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags LevelDescriptionId; // 0xA0(0x48)
		FObjectiveSubjectTags GameModeId; // 0xE8(0x48)
		FObjectiveSubjectTags VehicleTags; // 0x130(0x48)
		EDelMarPlaylistTypeInfo RequiredPlaylistTypeInfo; // 0x178(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x179(0x7) UNKNOWN PROPERTY
		TArray RequiredCosmetics; // 0x180(0x10)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_BeatPlayers
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_BeatPlayers : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_BonusTurboActivated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_BonusTurboActivated : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_BoostPadBonusSpeedEnded
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_BoostPadBonusSpeedEnded : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_BoostPadHit
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_BoostPadHit : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_DistanceTraveled
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_DistanceTraveled : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_DraftActivated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_DraftActivated : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_DriftBoostActivated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x20 (0x1B0 - 0x190)
	struct FDelMarObjectiveFilter_DriftBoostActivated : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredDriftBoostPercent; // 0x190(0x20)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_DriftBoostDeactivated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x20 (0x1B0 - 0x190)
	struct FDelMarObjectiveFilter_DriftBoostDeactivated : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredTotalDistance; // 0x190(0x20)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_DriftComplete
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x20 (0x1B0 - 0x190)
	struct FDelMarObjectiveFilter_DriftComplete : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredDriftDuration; // 0x190(0x20)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_HighestSpeedUpdated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x20 (0x1B0 - 0x190)
	struct FDelMarObjectiveFilter_HighestSpeedUpdated : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredHighestSpeed; // 0x190(0x20)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_InitialTurboActivated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_InitialTurboActivated : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_Kickflipped
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x8 (0x198 - 0x190)
	struct FDelMarObjectiveFilter_Kickflipped : public FDelMarObjectiveFilterBase	
	{
	public:
		EDelMarKickflipDirection RequiredKickflipDirection; // 0x190(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x191(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarObjectiveFilter_LapComplete
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x40 (0x1D0 - 0x190)
	struct FDelMarObjectiveFilter_LapComplete : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredLapCompleteTime; // 0x190(0x20)
		FInt32Range RequiredLapCount; // 0x1B0(0x10)
		FInt32Range RequiredLapPlacement; // 0x1C0(0x10)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_PlacementUpdated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x18 (0x1A8 - 0x190)
	struct FDelMarObjectiveFilter_PlacementUpdated : public FDelMarObjectiveFilterBase	
	{
	public:
		FInt32Range RequiredCurrentPosition; // 0x190(0x10)
		EDelMarPositionChangeInfo RequiredPositionChangeInfo; // 0x1A0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x1A1(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarObjectiveFilter_PlayedDelMarExperience
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_PlayedDelMarExperience : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_RaceFinished
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x48 (0x1D8 - 0x190)
	struct FDelMarObjectiveFilter_RaceFinished : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredFinishTime; // 0x190(0x20)
		FInt32Range RequiredFinalPlacement; // 0x1B0(0x10)
		FInt32Range RequiredPlayerCompetitiveRank; // 0x1C0(0x10)
		EDelMarJellyHazardProcessorInfo RequiredJellyHazardInfo; // 0x1D0(0x4)
		EDelMarDemolishedProcessorInfo RequiredDemolishedInfo; // 0x1D4(0x4)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_RankAchieved
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x10 (0x1A0 - 0x190)
	struct FDelMarObjectiveFilter_RankAchieved : public FDelMarObjectiveFilterBase	
	{
	public:
		FInt32Range RequiredRank; // 0x190(0x10)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_RunComplete
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x38 (0x1C8 - 0x190)
	struct FDelMarObjectiveFilter_RunComplete : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredFinishTime; // 0x190(0x20)
		FInt32Range RequiredFinalPlacement; // 0x1B0(0x10)
		EDelMarJellyHazardProcessorInfo RequiredJellyHazardInfo; // 0x1C0(0x4)
		EDelMarDemolishedProcessorInfo RequiredDemolishedInfo; // 0x1C4(0x4)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_StartlineBoostActivated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x20 (0x1B0 - 0x190)
	struct FDelMarObjectiveFilter_StartlineBoostActivated : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredStartlineBoostPercent; // 0x190(0x20)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_StartlineBoostPercentEarned
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_StartlineBoostPercentEarned : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_UnderthrustDeactivated
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x20 (0x1B0 - 0x190)
	struct FDelMarObjectiveFilter_UnderthrustDeactivated : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredPercentUsed; // 0x190(0x20)
	};


	// Struct DelMarCore.DelMarObjectiveFilter_UnderthrustPercentUsed
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_UnderthrustPercentUsed : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_VehicleJumped
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x0 (0x190 - 0x190)
	struct FDelMarObjectiveFilter_VehicleJumped : public FDelMarObjectiveFilterBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarObjectiveFilter_VehicleLanded
	// Inherited from FDelMarObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x20 (0x1B0 - 0x190)
	struct FDelMarObjectiveFilter_VehicleLanded : public FDelMarObjectiveFilterBase	
	{
	public:
		FDoubleRange RequiredTimeInAir; // 0x190(0x20)
	};


	// Struct DelMarCore.DelMarAnalyticsPlayerRaceData
	// Size: 0x40 (0x40 - 0x0)
	struct FDelMarAnalyticsPlayerRaceData	
	{
	public:
		AFortPlayerController DriverPC; // 0x0(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x8(0x38) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarProxyMeshMaterialInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarProxyMeshMaterialInfo	
	{
	public:
		TArray MaterialArray; // 0x0(0x10)
	};


	// Struct DelMarCore.DelMarRaceCVar
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarRaceCVar	
	{
	public:
		FString VariableName; // 0x0(0x10)
		FString Value; // 0x10(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarMusicTrack
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarMusicTrack	
	{
	public:
		USoundWave StartLineIntro; // 0x0(0x8)
		USoundWave MainTrack; // 0x8(0x8)
		USoundWave MainTrack_LowSpec; // 0x10(0x8)
		float BPM; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarEvent_MusicPlaylistUpdated
	// Size: 0x1C (0x1C - 0x0)
	struct FDelMarEvent_MusicPlaylistUpdated	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr PreRaceMusic; // 0x8(0x8)
		TWeakObjectPtr PostRaceMusic; // 0x10(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x18(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarTutorialSection
	// Size: 0x98 (0x98 - 0x0)
	struct FDelMarTutorialSection	
	{
	public:
		float FinishTargetTime; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		ADelMarStartLineActor StartLine; // 0x8(0x8)
		ADelMarStartLineActor FinishLine; // 0x10(0x8)
		TArray DisabledActors; // 0x18(0x10)
		FGameplayTagContainer InputDisabledTags; // 0x28(0x20)
		FDelMarVehicleAbilityConfig VehicleAbilityConfig; // 0x48(0x11)
		unsigned char UnknownData04_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		float StartingTurboCharges; // 0x5C(0x4)
		FText Title; // 0x60(0x10)
		FDelMarEvent_SetControlsText ControlsText; // 0x70(0x20)
		FGameplayTag DialogTag; // 0x90(0x4)
		bool bSkipCountdown; // 0x94(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleAbilityConfig
	// Size: 0x11 (0x11 - 0x0)
	struct FDelMarVehicleAbilityConfig	
	{
	public:
		bool bAirControlEnabled; // 0x0(0x1)
		bool bAirFreestyleEnabled; // 0x1(0x1)
		bool bAirThrottleEnabled; // 0x2(0x1)
		bool bAutoAerialRotationEnabled; // 0x3(0x1)
		bool bAutoUprightEnabled; // 0x4(0x1)
		bool bDraftingEnabled; // 0x5(0x1)
		bool bDriftEnabled; // 0x6(0x1)
		bool bDriftBoostEnabled; // 0x7(0x1)
		bool bInfiniteUnderthrustEnabled; // 0x8(0x1)
		bool bJumpEnabled; // 0x9(0x1)
		bool bKickflipEnabled; // 0xA(0x1)
		bool bOversteerEnabled; // 0xB(0x1)
		bool bReattachmentEnabled; // 0xC(0x1)
		bool bStartlineBoostEnabled; // 0xD(0x1)
		bool bStrafeEnabled; // 0xE(0x1)
		bool bTurboEnabled; // 0xF(0x1)
		bool bUnderthrustEnabled; // 0x10(0x1)
	};


	// Struct DelMarCore.DelMarEvent_TutorialSectionChanged
	// Size: 0xA0 (0xA0 - 0x0)
	struct FDelMarEvent_TutorialSectionChanged	
	{
	public:
		FDelMarTutorialSection CurrentSection; // 0x0(0x98)
		int32_t CurrentSectionIndex; // 0x98(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarScaledCurve
	// Size: 0x90 (0x90 - 0x0)
	struct FDelMarScaledCurve	
	{
	public:
		float Scale; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve Curve; // 0x8(0x88)
	};


	// Struct DelMarCore.DelMarHintText
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarHintText	
	{
	public:
		FText KBMText; // 0x0(0x10)
		FText GamepadText; // 0x10(0x10)
		FText TouchText; // 0x20(0x10)
	};


	// Struct DelMarCore.DelMarVehicleSuspensionConfig
	// Size: 0x14 (0x14 - 0x0)
	struct FDelMarVehicleSuspensionConfig	
	{
	public:
		float MaxRaise; // 0x0(0x4)
		float MaxDrop; // 0x4(0x4)
		float Stiffness; // 0x8(0x4)
		float DampingCompression; // 0xC(0x4)
		float DampingRelaxation; // 0x10(0x4)
	};


	// Struct DelMarCore.DelMarVehicleAxleConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarVehicleAxleConfig	
	{
	public:
		float TranslateX; // 0x0(0x4)
		float TranslateY; // 0x4(0x4)
		float TranslateZ; // 0x8(0x4)
		float WheelRadius; // 0xC(0x4)
		float RestDistanceZ; // 0x10(0x4)
		FDelMarVehicleSuspensionConfig Suspension; // 0x14(0x14)
	};


	// Struct DelMarCore.DelMarCameraFloatProperty
	// Size: 0xB0 (0xB0 - 0x0)
	struct FDelMarCameraFloatProperty	
	{
	public:
		bool bEvaluateInputOnCurve; // 0x0(0x1)
		bool bAccumulateInput; // 0x1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FRuntimeFloatCurve Curve; // 0x8(0x88)
		float InterpLambda; // 0x90(0x4)
		float DecayLambda; // 0x94(0x4)
		FFloatRange ClampedRange; // 0x98(0x10)
		unsigned char UnknownData03_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarCameraFloatBlendedProperty
	// Size: 0x1D0 (0x1D0 - 0x0)
	struct FDelMarCameraFloatBlendedProperty	
	{
	public:
		bool bEvaluateInputOnCurve; // 0x0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve InputCurve; // 0x8(0x88)
		float ActiveValue; // 0x90(0x4)
		bool bRemapOutputValue; // 0x94(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		FRuntimeFloatCurve RemapCurve; // 0x98(0x88)
		float BlendInLambda; // 0x120(0x4)
		float BlendOutLambda; // 0x124(0x4)
		bool bUseBlendOutCurve; // 0x128(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x129(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve BlendOutLambdaCurve; // 0x130(0x88)
		float Tolerance; // 0x1B8(0x4)
		unsigned char UnknownData07_7[0x14]; // 0x1BC(0x14) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarDefaultCameraValues
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarDefaultCameraValues	
	{
	public:
		float FOV; // 0x0(0x4)
		float Distance; // 0x4(0x4)
		float Height; // 0x8(0x4)
		float AngleToOriginDegrees; // 0xC(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplay_FrameData
	// Size: 0xB0 (0xB0 - 0x0)
	struct FDelMarVehicleReplay_FrameData	
	{
	public:
		int32_t FrameCaptureIndex; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double SecondsSinceCountdownFinished; // 0x8(0x8)
		FDelMarVehicleReplay_InputState_RL Input; // 0x10(0x20)
		FDelMarVehicleReplay_InputState_DM Input_DM; // 0x30(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FDelMarVehicleReplay_RigidBodyState PreSimRBState; // 0x40(0x70)
	};


	// Struct DelMarCore.DelMarVehicleReplay_RigidBodyState
	// Size: 0x70 (0x70 - 0x0)
	struct FDelMarVehicleReplay_RigidBodyState	
	{
	public:
		FVector Location; // 0x0(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0x20(0x20)
		FVector LinearVelocity; // 0x40(0x18)
		FVector AngularVelocity; // 0x58(0x18)
	};


	// Struct DelMarCore.DelMarVehicleReplay_InputState_DM
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleReplay_InputState_DM	
	{
	public:
		float AerialPitch; // 0x0(0x4)
		bool bDrift; // 0x4(0x1)
		bool bGroundedFlip; // 0x5(0x1)
		bool bKickflip; // 0x6(0x1)
		bool bShunt; // 0x7(0x1)
	};


	// Struct DelMarCore.DelMarVehicleReplay_InputState_RL
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarVehicleReplay_InputState_RL	
	{
	public:
		float Throttle; // 0x0(0x4)
		float Steer; // 0x4(0x4)
		float pitch; // 0x8(0x4)
		float Yaw; // 0xC(0x4)
		float Roll; // 0x10(0x4)
		float DodgeForward; // 0x14(0x4)
		float DodgeRight; // 0x18(0x4)
		bool bHandbrake; // 0x1C(0x1)
		bool bJump; // 0x1D(0x1)
		bool bBoost; // 0x1E(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x1F(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleCachedContact
	// Size: 0x70 (0x70 - 0x0)
	struct FDelMarVehicleCachedContact	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector Normal; // 0x18(0x18)
		FVector Impulse; // 0x30(0x18)
		FVector DeltaVelocity; // 0x48(0x18)
		bool bVehicleContact; // 0x60(0x1)
		bool bDriveableContact; // 0x61(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x62(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr Component; // 0x64(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarWorldBonusSpeedStack
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarWorldBonusSpeedStack	
	{
	public:
		FGameplayTag Source; // 0x0(0x4)
		float BonusSpeed; // 0x4(0x4)
		float duration; // 0x8(0x4)
		bool bApplyForce; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		int32_t GroupId; // 0x10(0x4)
		TWeakObjectPtr ActorSource; // 0x14(0x8)
		unsigned char UnknownData03_7[0xC]; // 0x1C(0xC) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarWorldBonusSpeedGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarWorldBonusSpeedGroup	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleLandingData
	// Size: 0xC (0xC - 0x0)
	struct FDelMarVehicleLandingData	
	{
	public:
		unsigned char UnknownData01_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleSkydivingData
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleSkydivingData	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarStartlineBoostData
	// Size: 0x14 (0x14 - 0x0)
	struct FDelMarStartlineBoostData	
	{
	public:
		bool bFailed; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ReactionSeconds; // 0x4(0x4)
		float RunStartTime; // 0x8(0x4)
		float IntervalSeconds; // 0xC(0x4)
		float EarnedPotential; // 0x10(0x4)
	};


	// Struct DelMarCore.DelMarKickflipSimulationResult
	// Size: 0x130 (0x130 - 0x0)
	struct FDelMarKickflipSimulationResult	
	{
	public:
		FHitResult Hit; // 0x0(0xF8)
		unsigned char UnknownData02_6[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		FQuat VehicleLandingRotation; // 0x100(0x20)
		bool bValidLandingRotation; // 0x120(0x1)
		bool bDriveableSurfaceHit; // 0x121(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x122(0x2) UNKNOWN PROPERTY
		float SuctionVelocityUsed; // 0x124(0x4)
		float ElapsedTime; // 0x128(0x4)
		float DistanceTravelled; // 0x12C(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Ability
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleReplicatedState_Ability	
	{
	public:
		bool bActive; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float duration; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_BonusSpeedAbility
	// Inherited from FDelMarVehicleReplicatedState_Ability
	// Size: 0x4 (0xC - 0x8)
	struct FDelMarVehicleReplicatedState_BonusSpeedAbility : public FDelMarVehicleReplicatedState_Ability	
	{
	public:
		float AppliedBonusSpeed; // 0x8(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_AutoUpright
	// Inherited from FDelMarVehicleReplicatedState_Ability
	// Size: 0x18 (0x20 - 0x8)
	struct FDelMarVehicleReplicatedState_AutoUpright : public FDelMarVehicleReplicatedState_Ability	
	{
	public:
		FVector_NetQuantizeNormal TargetVehicleUp; // 0x8(0x18)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Drafting
	// Inherited from FDelMarVehicleReplicatedState_BonusSpeedAbility -> FDelMarVehicleReplicatedState_Ability
	// Size: 0xC (0x18 - 0xC)
	struct FDelMarVehicleReplicatedState_Drafting : public FDelMarVehicleReplicatedState_BonusSpeedAbility	
	{
	public:
		float AccumulatedLosingSpeedSeconds; // 0xC(0x4)
		float AccumulatedStartDraftingSeconds; // 0x10(0x4)
		float TotalEarnedBonusSpeed; // 0x14(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Drift
	// Inherited from FDelMarVehicleReplicatedState_Ability
	// Size: 0x28 (0x30 - 0x8)
	struct FDelMarVehicleReplicatedState_Drift : public FDelMarVehicleReplicatedState_Ability	
	{
	public:
		float CurrentRotationAngle; // 0x8(0x4)
		EDelMarVehicleDriftState DriftState; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float TargetDriftSide; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector_NetQuantize100 InitialImpulseTorque; // 0x18(0x18)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_DriftBoost
	// Inherited from FDelMarVehicleReplicatedState_BonusSpeedAbility -> FDelMarVehicleReplicatedState_Ability
	// Size: 0x14 (0x20 - 0xC)
	struct FDelMarVehicleReplicatedState_DriftBoost : public FDelMarVehicleReplicatedState_BonusSpeedAbility	
	{
	public:
		float AccumulatedDriftBoostSeconds; // 0xC(0x4)
		float AccumulatedWaitingPeriodSeconds; // 0x10(0x4)
		float TotalEarnedBonusSpeed; // 0x14(0x4)
		float QueuedBonusSpeed; // 0x18(0x4)
		float QueuedBoostExtraSeconds; // 0x1C(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Drive
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarVehicleReplicatedState_Drive	
	{
	public:
		float BaseTargetSpeed; // 0x0(0x4)
		bool bInvertedSteeringActive; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t bDisableDriveForces; // 0x8(0x4)
		int32_t bDisableWheelFriction; // 0xC(0x4)
		FVector_NetQuantizeNormal LastAverageWheelWorldContactNormal; // 0x10(0x18)
		float MinimumLandingSpeed; // 0x28(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Kickflip
	// Inherited from FDelMarVehicleReplicatedState_Ability
	// Size: 0x58 (0x60 - 0x8)
	struct FDelMarVehicleReplicatedState_Kickflip : public FDelMarVehicleReplicatedState_Ability	
	{
	public:
		FVector_NetQuantizeNormal RelativeUpDirection; // 0x8(0x18)
		FVector_NetQuantizeNormal KickDirection; // 0x20(0x18)
		bool bLeftSide; // 0x38(0x1)
		bool bTakeLongestRoll; // 0x39(0x1)
		bool bRotateTowardsVelocity; // 0x3A(0x1)
		bool bCanStartLongRoll; // 0x3B(0x1)
		int32_t StartingRollSign; // 0x3C(0x4)
		float KickflipKeybindPressTime; // 0x40(0x4)
		int32_t ActivationCharges; // 0x44(0x4)
		FVector_NetQuantizeNormal StartingPrimaryDirection; // 0x48(0x18)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Oversteer
	// Size: 0x4 (0x4 - 0x0)
	struct FDelMarVehicleReplicatedState_Oversteer	
	{
	public:
		float AccumulatedSteer; // 0x0(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Reattachment
	// Inherited from FDelMarVehicleReplicatedState_Ability
	// Size: 0x20 (0x28 - 0x8)
	struct FDelMarVehicleReplicatedState_Reattachment : public FDelMarVehicleReplicatedState_Ability	
	{
	public:
		FVector_NetQuantizeNormal AttachmentDirection; // 0x8(0x18)
		bool bCanActivate; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Rubberbanding
	// Size: 0x4 (0x4 - 0x0)
	struct FDelMarVehicleReplicatedState_Rubberbanding	
	{
	public:
		float AppliedBonusSpeed; // 0x0(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_StartlineBoost
	// Inherited from FDelMarVehicleReplicatedState_BonusSpeedAbility -> FDelMarVehicleReplicatedState_Ability
	// Size: 0x8 (0x14 - 0xC)
	struct FDelMarVehicleReplicatedState_StartlineBoost : public FDelMarVehicleReplicatedState_BonusSpeedAbility	
	{
	public:
		float PercentageMaxBonusSpeedEarned; // 0xC(0x4)
		bool bFailedAttempt; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Turbo
	// Inherited from FDelMarVehicleReplicatedState_BonusSpeedAbility -> FDelMarVehicleReplicatedState_Ability
	// Size: 0xC (0x18 - 0xC)
	struct FDelMarVehicleReplicatedState_Turbo : public FDelMarVehicleReplicatedState_BonusSpeedAbility	
	{
	public:
		int32_t LastBonusZoneInteractionIndex; // 0xC(0x4)
		bool bSuccessfulBonusZone; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float AdditionalActiveSeconds; // 0x14(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Underthrust
	// Inherited from FDelMarVehicleReplicatedState_Ability
	// Size: 0x4 (0xC - 0x8)
	struct FDelMarVehicleReplicatedState_Underthrust : public FDelMarVehicleReplicatedState_Ability	
	{
	public:
		float RemainingThrustSeconds; // 0x8(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_Strafe
	// Inherited from FDelMarVehicleReplicatedState_Ability
	// Size: 0x8 (0x10 - 0x8)
	struct FDelMarVehicleReplicatedState_Strafe : public FDelMarVehicleReplicatedState_Ability	
	{
	public:
		bool bLeftSide; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float StrafeKeybindPressTime; // 0xC(0x4)
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState_AirControl
	// Inherited from FDelMarVehicleReplicatedState_Ability
	// Size: 0x4 (0xC - 0x8)
	struct FDelMarVehicleReplicatedState_AirControl : public FDelMarVehicleReplicatedState_Ability	
	{
	public:
		float AerialDivingBonusSpeed; // 0x8(0x4)
	};


	// Struct DelMarCore.DelMarInputBufferData
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarInputBufferData	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleInContinuous
	// Inherited from FFortAthenaVehicleInputState
	// Size: 0x0 (0x40 - 0x40)
	struct FDelMarVehicleInContinuous : public FFortAthenaVehicleInputState	
	{
	public:
	};


	// Struct DelMarCore.DelMarVehicleReplicatedState
	// Size: 0x290 (0x290 - 0x0)
	struct FDelMarVehicleReplicatedState	
	{
	public:
		int32_t FrameNum; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDelMarVehicleInContinuous Input; // 0x8(0x40)
		unsigned char UnknownData04_6[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		FRigidBodyState RBState; // 0x50(0x80)
		FDelMarVehicleReplicatedState_AutoUpright AutoUpright; // 0xD0(0x20)
		FDelMarVehicleReplicatedState_Drafting Drafting; // 0xF0(0x18)
		FDelMarVehicleReplicatedState_Drift Drift; // 0x108(0x30)
		FDelMarVehicleReplicatedState_DriftBoost DriftBoost; // 0x138(0x20)
		FDelMarVehicleReplicatedState_Drive Drive; // 0x158(0x30)
		FDelMarVehicleReplicatedState_Ability Jump; // 0x188(0x8)
		FDelMarVehicleReplicatedState_Kickflip Kickflip; // 0x190(0x60)
		FDelMarVehicleReplicatedState_Oversteer Oversteer; // 0x1F0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x1F4(0x4) UNKNOWN PROPERTY
		FDelMarVehicleReplicatedState_Reattachment Reattachment; // 0x1F8(0x28)
		FDelMarVehicleReplicatedState_Rubberbanding Rubberbanding; // 0x220(0x4)
		FDelMarVehicleReplicatedState_StartlineBoost StartlineBoost; // 0x224(0x14)
		FDelMarVehicleReplicatedState_Strafe Strafe; // 0x238(0x10)
		FDelMarVehicleReplicatedState_Turbo Turbo; // 0x248(0x18)
		FDelMarVehicleReplicatedState_Underthrust Underthrust; // 0x260(0xC)
		FDelMarVehicleReplicatedState_AirControl AirControl; // 0x26C(0xC)
		FDelMarInputBufferData BufferData; // 0x278(0x18)
	};


	// Struct DelMarCore.DelMarVehicleInPersistent
	// Inherited from FFortVehicleInPersistent
	// Size: 0x8A0 (0xA40 - 0x1A0)
	struct FDelMarVehicleInPersistent : public FFortVehicleInPersistent	
	{
	public:
		unsigned char UnknownData01_1[0x8A0]; // 0x1A0(0x8A0) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleInternalPersistent
	// Inherited from FFortVehicleInternalPersistent
	// Size: 0xA60 (0xB40 - 0xE0)
	struct FDelMarVehicleInternalPersistent : public FFortVehicleInternalPersistent	
	{
	public:
		unsigned char UnknownData01_1[0xA60]; // 0xE0(0xA60) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleOutContinuous
	// Inherited from FFortVehicleOutContinuous
	// Size: 0x160 (0x1B0 - 0x50)
	struct FDelMarVehicleOutContinuous : public FFortVehicleOutContinuous	
	{
	public:
		unsigned char UnknownData01_1[0x160]; // 0x50(0x160) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleOutPersistent
	// Inherited from FFortVehicleOutPersistent
	// Size: 0xA28 (0xA50 - 0x28)
	struct FDelMarVehicleOutPersistent : public FFortVehicleOutPersistent	
	{
	public:
		unsigned char UnknownData01_1[0xA28]; // 0x28(0xA28) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleNetworkInput
	// Size: 0x48 (0x48 - 0x0)
	struct FDelMarVehicleNetworkInput	
	{
	public:
		int32_t FrameNum; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDelMarVehicleInContinuous Input; // 0x8(0x40)
	};


	// Struct DelMarCore.DelMarVehicleSpawnInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarVehicleSpawnInfo	
	{
	public:
		bool bFirstVehicleForPlayer; // 0x0(0x1)
		bool bPreviousVehicleDemolished; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		double ServerSpawnTime; // 0x8(0x8)
	};


	// Struct DelMarCore.DelMarVerbMessageBase
	// Inherited from FVerbMessage
	// Size: 0xC0 (0x138 - 0x78)
	struct FDelMarVerbMessageBase : public FVerbMessage	
	{
	public:
		FSubjectTagsPair LevelDescriptionId; // 0x78(0x38)
		FSubjectTagsPair GameModeId; // 0xB0(0x38)
		FSubjectTagsPair VehicleTags; // 0xE8(0x38)
		EDelMarPlaylistTypeInfo RankedPlaylistInfo; // 0x120(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x121(0x7) UNKNOWN PROPERTY
		TArray Cosmetics; // 0x128(0x10)
	};


	// Struct DelMarCore.DelMarVerbMessage_BeatPlayers
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_BeatPlayers : public FDelMarVerbMessageBase	
	{
	public:
		char AmountOfPlayersBeat; // 0x138(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x139(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_BonusTurboActivated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x138 - 0x138)
	struct FDelMarVerbMessage_BonusTurboActivated : public FDelMarVerbMessageBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarVerbMessage_BoostPadBonusSpeedEnded
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x138 - 0x138)
	struct FDelMarVerbMessage_BoostPadBonusSpeedEnded : public FDelMarVerbMessageBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarVerbMessage_BoostPadHit
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x138 - 0x138)
	struct FDelMarVerbMessage_BoostPadHit : public FDelMarVerbMessageBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarVerbMessage_DistanceTraveled
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_DistanceTraveled : public FDelMarVerbMessageBase	
	{
	public:
		float TotalDistance; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_DraftActivated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x138 - 0x138)
	struct FDelMarVerbMessage_DraftActivated : public FDelMarVerbMessageBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarVerbMessage_DriftBoostActivated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_DriftBoostActivated : public FDelMarVerbMessageBase	
	{
	public:
		float DriftBoostPercent; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_DriftBoostDeactivated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_DriftBoostDeactivated : public FDelMarVerbMessageBase	
	{
	public:
		float TotalDistance; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_DriftComplete
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_DriftComplete : public FDelMarVerbMessageBase	
	{
	public:
		float DriftDuration; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_HighestSpeedUpdated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_HighestSpeedUpdated : public FDelMarVerbMessageBase	
	{
	public:
		float HighestSpeed; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_InitialTurboActivated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x138 - 0x138)
	struct FDelMarVerbMessage_InitialTurboActivated : public FDelMarVerbMessageBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarVerbMessage_Kickflipped
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_Kickflipped : public FDelMarVerbMessageBase	
	{
	public:
		EDelMarKickflipDirection Direction; // 0x138(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x139(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_LapComplete
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x10 (0x148 - 0x138)
	struct FDelMarVerbMessage_LapComplete : public FDelMarVerbMessageBase	
	{
	public:
		double LapCompleteTime; // 0x138(0x8)
		char LapCount; // 0x140(0x1)
		char LapPlacement; // 0x141(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x142(0x6) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_PlacementUpdated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_PlacementUpdated : public FDelMarVerbMessageBase	
	{
	public:
		char CurrentPosition; // 0x138(0x1)
		EDelMarPositionChangeInfo PositionChangeInfo; // 0x139(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_PlayedDelMarExperience
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x138 - 0x138)
	struct FDelMarVerbMessage_PlayedDelMarExperience : public FDelMarVerbMessageBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarVerbMessage_RaceFinished
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x18 (0x150 - 0x138)
	struct FDelMarVerbMessage_RaceFinished : public FDelMarVerbMessageBase	
	{
	public:
		double FinishTime; // 0x138(0x8)
		char FinalPlacement; // 0x140(0x1)
		char PlayerRank; // 0x141(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x142(0x2) UNKNOWN PROPERTY
		EDelMarJellyHazardProcessorInfo JellyHazardInfo; // 0x144(0x4)
		EDelMarDemolishedProcessorInfo DemolishedInfo; // 0x148(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_RankAchieved
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_RankAchieved : public FDelMarVerbMessageBase	
	{
	public:
		int32_t RankAchieved; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_RunComplete
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x18 (0x150 - 0x138)
	struct FDelMarVerbMessage_RunComplete : public FDelMarVerbMessageBase	
	{
	public:
		double FinishTime; // 0x138(0x8)
		char FinalPlacement; // 0x140(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x141(0x3) UNKNOWN PROPERTY
		EDelMarJellyHazardProcessorInfo JellyHazardInfo; // 0x144(0x4)
		EDelMarDemolishedProcessorInfo DemolishedInfo; // 0x148(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_StartlineBoostActivated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_StartlineBoostActivated : public FDelMarVerbMessageBase	
	{
	public:
		float StartLineBoostPercent; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_StartlineBoostPercentEarned
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_StartlineBoostPercentEarned : public FDelMarVerbMessageBase	
	{
	public:
		float PercentEarned; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_UnderthrustDeactivated
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_UnderthrustDeactivated : public FDelMarVerbMessageBase	
	{
	public:
		float PercentUsed; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_UnderthrustPercentUsed
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_UnderthrustPercentUsed : public FDelMarVerbMessageBase	
	{
	public:
		float PercentUsed; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVerbMessage_VehicleJumped
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x0 (0x138 - 0x138)
	struct FDelMarVerbMessage_VehicleJumped : public FDelMarVerbMessageBase	
	{
	public:
	};


	// Struct DelMarCore.DelMarVerbMessage_VehicleLanded
	// Inherited from FDelMarVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x140 - 0x138)
	struct FDelMarVerbMessage_VehicleLanded : public FDelMarVerbMessageBase	
	{
	public:
		float TimeInAir; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.AudioMixModifier
	// Size: 0x98 (0x98 - 0x0)
	struct FAudioMixModifier	
	{
	public:
		FName ParamName; // 0x0(0x4)
		EMixModifierTarget Target; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float DefaultValue; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve Curve; // 0x10(0x88)
	};


	// Struct DelMarCore.AudioMixModifierGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FAudioMixModifierGroup	
	{
	public:
		FName GroupName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Modifiers; // 0x8(0x10)
	};


	// Struct DelMarCore.DelMarRankedInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarRankedInfo	
	{
	public:
		FString RankType; // 0x0(0x10)
		int32_t CurrentRank; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.CheckpointTrackDistance
	// Size: 0x18 (0x18 - 0x0)
	struct FCheckpointTrackDistance	
	{
	public:
		ADelMarTrack Track; // 0x0(0x8)
		float PrimaryDistance; // 0x8(0x4)
		float LocalDistance; // 0xC(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarTerrainData
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarTerrainData	
	{
	public:
		float MaxForwardSpeedPercentage; // 0x0(0x4)
		float AccelerationMultiplier; // 0x4(0x4)
		float DecelerationMultiplier; // 0x8(0x4)
		float SteerMultiplier; // 0xC(0x4)
		float SlipMultiplier; // 0x10(0x4)
		float TargetSpeedPenalty; // 0x14(0x4)
	};


	// Struct DelMarCore.DelMarVehicleCameraSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FDelMarVehicleCameraSettings	
	{
	public:
		float FOV; // 0x0(0x4)
		float Height; // 0x4(0x4)
		float pitch; // 0x8(0x4)
		float Distance; // 0xC(0x4)
		float Stiffness; // 0x10(0x4)
		float SwivelSpeed; // 0x14(0x4)
		float TransitionSpeed; // 0x18(0x4)
	};


	// Struct DelMarCore.DelMarEliminationMMRCountPair
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarEliminationMMRCountPair	
	{
	public:
		int32_t MaxMmr; // 0x0(0x4)
		int32_t PlayersToEliminate; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarTimeDelayedState
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarTimeDelayedState	
	{
	public:
		FGameplayTag Name; // 0x0(0x4)
		float duration; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarReplicatedLoadout
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarReplicatedLoadout	
	{
	public:
		TArray Items; // 0x0(0x10)
	};


	// Struct DelMarCore.DelMarLoadout
	// Size: 0x50 (0x50 - 0x0)
	struct FDelMarLoadout	
	{
	public:
		TMap Items; // 0x0(0x50)
	};


	// Struct DelMarCore.DelMarLeaderboardConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarLeaderboardConfig	
	{
	public:
		FString EventId; // 0x0(0x10)
		FString WindowId; // 0x10(0x10)
	};


	// Struct DelMarCore.PhysicalMaterialAttributes_X
	// Size: 0x10 (0x10 - 0x0)
	struct FPhysicalMaterialAttributes_X	
	{
	public:
		TArray Attributes; // 0x0(0x10)
	};


	// Struct DelMarCore.DelMarNetworkInputPacket
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarNetworkInputPacket	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarMapStatus
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarMapStatus	
	{
	public:
		UDelMarLevelDataAsset MapAsset; // 0x0(0x8)
		bool bHasBeenPlayed; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarMapSet
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarMapSet	
	{
	public:
		bool bShouldConsiderValid; // 0x0(0x1)
		bool bPlayLevelsRandomly; // 0x1(0x1)
		bool bShouldRepeat; // 0x2(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		TArray Levels; // 0x8(0x10)
	};


	// Struct DelMarCore.DelMarDeathRaceConfig
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarDeathRaceConfig	
	{
	public:
		TArray PlacementPointsMap; // 0x0(0x10)
		int32_t ScoreThresholdToEndMatch; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarGameplayModifierList
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarGameplayModifierList	
	{
	public:
		TArray Modifiers; // 0x0(0x10)
	};


	// Struct DelMarCore.DelMarPositionValue
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarPositionValue	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarFinalRacePositionEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarFinalRacePositionEntry	
	{
	public:
		TWeakObjectPtr PlayerState; // 0x0(0x8)
		double RunTime; // 0x8(0x8)
	};


	// Struct DelMarCore.DelMarVehicleRuntimeConfig
	// Size: 0x14 (0x14 - 0x0)
	struct FDelMarVehicleRuntimeConfig	
	{
	public:
		bool bCollisionDemosEnabled; // 0x0(0x1)
		bool bDemolishActionEnabled; // 0x1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float RequiredDemolishActionDuration; // 0x4(0x4)
		bool bIdleDisablesVehicleCollision; // 0x8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float SecondsToSetIdle; // 0xC(0x4)
		EDelMarVehicleCollisionOverrideSetting VehicleCollisionsGlobalOverride; // 0x10(0x1)
		bool bApplyOverlapFilter; // 0x11(0x1)
		unsigned char UnknownData05_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarRespawnConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarRespawnConfig	
	{
	public:
		EDelMarRaceSpawnMode SpawnMode; // 0x0(0x1)
		bool bUseTracesToDetermineRespawn; // 0x1(0x1)
		bool bRespawnInvulnerabilityEnabled; // 0x2(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float RespawnInvulnerabilitySeconds; // 0x4(0x4)
		bool bRespawnCollisionProtectionEnabled; // 0x8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float RespawnCollisionProtectionSeconds; // 0xC(0x4)
	};


	// Struct DelMarCore.DelMarRubberbandingConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarRubberbandingConfig	
	{
	public:
		bool bRubberbandingEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MinPackDistance; // 0x4(0x4)
		float MaxPackDistance; // 0x8(0x4)
		float PackDistanceOffset; // 0xC(0x4)
		float MinDistanceFromPack; // 0x10(0x4)
		float MaxDistanceFromPack; // 0x14(0x4)
		int32_t NumPlayersForPackDistance; // 0x18(0x4)
		float MaxPackDistanceGainedPerSecond; // 0x1C(0x4)
		float MaxPackDistanceLostPerSecond; // 0x20(0x4)
		float MaxBonusSpeedScalar; // 0x24(0x4)
	};


	// Struct DelMarCore.DelMarRubberbandingMMRConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarRubberbandingMMRConfig	
	{
	public:
		float MinMmr; // 0x0(0x4)
		float MaxMmr; // 0x4(0x4)
		FDelMarRubberbandingConfig RubberbandingConfig; // 0x8(0x28)
	};


	// Struct DelMarCore.DelMarMatchmakingConfig
	// Size: 0x14 (0x14 - 0x0)
	struct FDelMarMatchmakingConfig	
	{
	public:
		float MaxLoadWaitSeconds; // 0x0(0x4)
		float LoadWaitBufferSeconds; // 0x4(0x4)
		float MatchStartDelaySeconds; // 0x8(0x4)
		bool bMatchInProgressBackFillEnabled; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float MinSecondsRemainingForBackfill; // 0x10(0x4)
	};


	// Struct DelMarCore.DelMarBotRuntimeConfig
	// Size: 0x98 (0x98 - 0x0)
	struct FDelMarBotRuntimeConfig	
	{
	public:
		FDelMarScaledCurve BotTargetSpeedPenaltyCurve; // 0x0(0x90)
		int32_t NumPlayersAheadForNoBotPenalty; // 0x90(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarRandomRange
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarRandomRange	
	{
	public:
		float MinValue; // 0x0(0x4)
		float MaxValue; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarStartlineConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarStartlineConfig	
	{
	public:
		bool bEnableDynamicStartline; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float InitialCountdownDelayTime; // 0x4(0x4)
		float RequestCountdownDelayTime; // 0x8(0x4)
		float DefaultIntervalSeconds; // 0xC(0x4)
		TArray IntervalRanges; // 0x10(0x10)
		int32_t CountdownIntervalNum; // 0x20(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarStateOverride
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarStateOverride	
	{
	public:
		FGameplayTag StateTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr StateClass; // 0x8(0x20)
	};


	// Struct DelMarCore.DelMarStateMachineConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FDelMarStateMachineConfig	
	{
	public:
		TArray StateOverrides; // 0x0(0x10)
	};


	// Struct DelMarCore.DelMarDynamicCameraShakeEffect
	// Size: 0xA0 (0xA0 - 0x0)
	struct FDelMarDynamicCameraShakeEffect	
	{
	public:
		UClass CameraShakeClass; // 0x0(0x8)
		TWeakObjectPtr CameraShakeInstance; // 0x8(0x8)
		FRuntimeFloatCurve ShakeIntensityCurve; // 0x10(0x88)
		float CurrentShakeIntensity; // 0x98(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarThrottledValue
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarThrottledValue	
	{
	public:
		float RiseRate; // 0x0(0x4)
		float FallRate; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleLandingLevel
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleLandingLevel	
	{
	public:
		float MinForce; // 0x0(0x4)
		float SpeedChange; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarTurboBonusZone
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarTurboBonusZone	
	{
	public:
		float ZoneStartTime; // 0x0(0x4)
		float ZoneEndTime; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarWorldBonusSpeedSourceCap
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarWorldBonusSpeedSourceCap	
	{
	public:
		FGameplayTag Source; // 0x0(0x4)
		int32_t StackCap; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleRigidBodyConfig
	// Size: 0x38 (0x38 - 0x0)
	struct FDelMarVehicleRigidBodyConfig	
	{
	public:
		bool bApplyGlobalBodySettings; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float LinearDamping; // 0x4(0x4)
		float AngularDamping; // 0x8(0x4)
		float VehicleMass; // 0xC(0x4)
		bool bNotifyRigidBodyCollisions; // 0x10(0x1)
		bool bSmoothEdgeCollisionsEnabled; // 0x11(0x1)
		bool bUseCCD; // 0x12(0x1)
		unsigned char UnknownData04_6[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
		FVector CenterOfMassOffset; // 0x18(0x18)
		bool bSuspensionIgnoresBodyCollision; // 0x30(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleDriveSetup
	// Size: 0x370 (0x370 - 0x0)
	struct FDelMarVehicleDriveSetup	
	{
	public:
		float MaxBaseForwardSpeed; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve DriveAccel; // 0x8(0x90)
		FDelMarScaledCurve TargetSpeedMaxAccelCurve; // 0x98(0x90)
		float TargetSpeedAerialFriction; // 0x128(0x4)
		float MinSpeedForPersistentTargetSpeedModifier; // 0x12C(0x4)
		bool bAllowBrakingInAir; // 0x130(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x131(0x3) UNKNOWN PROPERTY
		float BrakeAccel; // 0x134(0x4)
		float StopSpeed; // 0x138(0x4)
		float IdleBrakeFactor; // 0x13C(0x4)
		float MaxSpeedToResetTargetSpeedDirection; // 0x140(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x144(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve SteerAngleCurve; // 0x148(0x88)
		TArray SteerAngleCurveOverrides; // 0x1D0(0x10)
		FDelMarScaledCurve LatFrictionCurve; // 0x1E0(0x90)
		FRuntimeFloatCurve WheelsGroundedFrictionCurve; // 0x270(0x88)
		float MaxForwardSpeedToIgnoreLandingSpeed; // 0x2F8(0x4)
		float MaxKickflipLandingSeconds; // 0x2FC(0x4)
		float SkydiveVerticalVelocitySensitivity; // 0x300(0x4)
		float SkydiveVerticalPitchSensitivity; // 0x304(0x4)
		float MinInAirTimeStableLanding; // 0x308(0x4)
		int32_t NumWheelsForActivelyLanding; // 0x30C(0x4)
		float MinAerialSpeedForPrimaryDirection; // 0x310(0x4)
		float MaxGroundNormalDiffForPrimaryDirection; // 0x314(0x4)
		float MinPrevVelocityDotProductForPrimaryDirection; // 0x318(0x4)
		float ForwardMaxSpeed; // 0x31C(0x4)
		float UpwardMaxLandingSpeed; // 0x320(0x4)
		float UpwardMaxSpeed; // 0x324(0x4)
		float MaxLandingAngularVelocity; // 0x328(0x4)
		float MaxLinearSpeed; // 0x32C(0x4)
		float MaxAngularSpeed; // 0x330(0x4)
		float MinCeilingDegrees; // 0x334(0x4)
		float MaxCeilingDegrees; // 0x338(0x4)
		float AerialCeilingDegrees; // 0x33C(0x4)
		float MaxInvertedControlSteering; // 0x340(0x4)
		float MinCeilingSecondsToInvertControls; // 0x344(0x4)
		float WheelPushForce; // 0x348(0x4)
		float MinSpeedForVelocityDirection; // 0x34C(0x4)
		float MinZSpeedForUpwardDirection; // 0x350(0x4)
		float VerticalOrientationSensitivity; // 0x354(0x4)
		float MaxInactiveLandedFlipTime; // 0x358(0x4)
		int32_t NumWheelsForWheelsOnGround; // 0x35C(0x4)
		float MaxLandingSpeedSpringVarianceDegrees; // 0x360(0x4)
		float MinDownDegreesForForwardDirection; // 0x364(0x4)
		float MaxNormalizedForwardSpeed; // 0x368(0x4)
		float MaxNormalizedBonusSpeed; // 0x36C(0x4)
	};


	// Struct DelMarCore.DelMarVehicleCollisionConfig
	// Size: 0x1F8 (0x1F8 - 0x0)
	struct FDelMarVehicleCollisionConfig	
	{
	public:
		float MinWallAngleDegrees; // 0x0(0x4)
		float MinTimeBetweenSpeedLossHits; // 0x4(0x4)
		float MinSpeedForTargetSpeedReduction; // 0x8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve SpeedReductionPercentageCurve; // 0x10(0x90)
		FDelMarScaledCurve AerialSpeedReductionPercentageCurve; // 0xA0(0x90)
		FDelMarScaledCurve WallTargetRedirectAngleDegreesCurve; // 0x130(0x90)
		float WallTargetRedirectPercent; // 0x1C0(0x4)
		float WallTargetRedirectDriftPercent; // 0x1C4(0x4)
		float WallDriftHeadOnThresholdDegrees; // 0x1C8(0x4)
		float WallHeadOnDriftRedirectAngleDegrees; // 0x1CC(0x4)
		float WallTargetRedirectHeadOnDriftPercent; // 0x1D0(0x4)
		float MinGroundedDemolitionSpeed; // 0x1D4(0x4)
		float MinAerialDemolitionSpeed; // 0x1D8(0x4)
		float MaxGroundedDemolitionAngleDegrees; // 0x1DC(0x4)
		float MaxAerialDemolitionAngleDegrees; // 0x1E0(0x4)
		float ParallelCollisionThresholdDegrees; // 0x1E4(0x4)
		float HeadOnCollisionThresholdDegrees; // 0x1E8(0x4)
		float BumperToBumperThresholdDegrees; // 0x1EC(0x4)
		float ContactNormalToVehicleRightThresholdDegrees; // 0x1F0(0x4)
		TEnumAsByte TrackTraceChannel; // 0x1F4(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x1F5(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleDriftConfig
	// Size: 0x718 (0x718 - 0x0)
	struct FDelMarVehicleDriftConfig	
	{
	public:
		float MinSpeed; // 0x0(0x4)
		float MinDirectedDriftTime; // 0x4(0x4)
		float MinInAirTime; // 0x8(0x4)
		float AerialDriftNoKeybindGracePeriod; // 0xC(0x4)
		float MaxForcedDriftTime; // 0x10(0x4)
		float MinKickDriftActiveSeconds; // 0x14(0x4)
		bool bForceSteerWhenKicking; // 0x18(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float MinForcedSteerWhenKicking; // 0x1C(0x4)
		float KickCooldownSeconds; // 0x20(0x4)
		bool bActivateDriftOnStrafeEnd; // 0x24(0x1)
		bool bActivateDriftOnLanding; // 0x25(0x1)
		bool bActivateDriftOnKickflipLanding; // 0x26(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x27(0x1) UNKNOWN PROPERTY
		float ActivateExitDriftTime; // 0x28(0x4)
		float MinSteerInput; // 0x2C(0x4)
		float MinFullThrottleInput; // 0x30(0x4)
		float MinFullDriftInput; // 0x34(0x4)
		float ForcedDriftSteer; // 0x38(0x4)
		float InitialTorqueImpulse; // 0x3C(0x4)
		float MaxAllowedGroundedSpringVarianceDegrees; // 0x40(0x4)
		float TorqueAccelInDriftDir; // 0x44(0x4)
		float TorqueAccelNoSteer; // 0x48(0x4)
		float TorqueAccelNotInDriftDir; // 0x4C(0x4)
		float TorqueAccelChangeDir; // 0x50(0x4)
		float TorqueAccelDampening; // 0x54(0x4)
		float TorqueAccelWithKick; // 0x58(0x4)
		float TorqueAccelWithKickV2; // 0x5C(0x4)
		float TorqueAccelForcedDrift; // 0x60(0x4)
		float TorqueAgainstExit; // 0x64(0x4)
		float MaxRotationSpeedWithThrottle; // 0x68(0x4)
		float MaxRotationSpeedNoThrottle; // 0x6C(0x4)
		float MaxRotationSpeedWithKick; // 0x70(0x4)
		float MaxRotationSpeedSwapDirections; // 0x74(0x4)
		float MinDriftDegrees; // 0x78(0x4)
		float MaxDriftDegrees; // 0x7C(0x4)
		float ExitDriftDegrees; // 0x80(0x4)
		float ApproachDistance; // 0x84(0x4)
		float PeakForwardSpeedDegrees; // 0x88(0x4)
		float KickRedirectRate; // 0x8C(0x4)
		float KickRedirectRateV2; // 0x90(0x4)
		float ForcedDriftRedirectRate; // 0x94(0x4)
		float MinSteerRedirectInput; // 0x98(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve NonKickRedirectRateCurve; // 0xA0(0x90)
		FDelMarScaledCurve VelocityRedirectAngleCurveControlled; // 0x130(0x90)
		FDelMarScaledCurve VelocityRedirectAgainstAngleCurveControlled; // 0x1C0(0x90)
		FDelMarScaledCurve VelocityRedirectAngleCurveNoSteer; // 0x250(0x90)
		FDelMarScaledCurve VelocityRedirectAngleCurveUncontrolled; // 0x2E0(0x90)
		FDelMarScaledCurve VelocityRedirectAngleCurveKickback; // 0x370(0x90)
		FDelMarScaledCurve VelocityRedirectAngleCurveKickbackV2; // 0x400(0x90)
		float PeakSpeedIncreaseDegrees; // 0x490(0x4)
		float MaxAccelSpeed; // 0x494(0x4)
		FDelMarScaledCurve AccelerationScalarCurve; // 0x498(0x90)
		FDelMarScaledCurve AdditionalSpeedLossNoThrottle; // 0x528(0x90)
		float MaxControlledDriftRatio; // 0x5B8(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x5BC(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve ControlledSpeedCapBySlipAngle; // 0x5C0(0x90)
		FDelMarScaledCurve ControlledSpeedCapDecelRate; // 0x650(0x90)
		float UncontrolledSpeedCap; // 0x6E0(0x4)
		float UncontrolledSpeedLoss; // 0x6E4(0x4)
		float ExitVelocityMaxDegrees; // 0x6E8(0x4)
		float ExitKickEndMaxDegrees; // 0x6EC(0x4)
		float ExitVelocityTorqueAccel; // 0x6F0(0x4)
		float ExitVelocityMaxRotationSpeed; // 0x6F4(0x4)
		float ExitForwardMaxDegrees; // 0x6F8(0x4)
		float ExitForwardTorqueSteer; // 0x6FC(0x4)
		float ExitForwardMaxRotation; // 0x700(0x4)
		float ExitForwardTargetRedirectRate; // 0x704(0x4)
		float ExitForwardRedirectRate; // 0x708(0x4)
		float MaxExitForwardLandingSpeed; // 0x70C(0x4)
		bool bEnforceThrottleForControlledDrift; // 0x710(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x711(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleDriftBoostConfig
	// Size: 0x1D8 (0x1D8 - 0x0)
	struct FDelMarVehicleDriftBoostConfig	
	{
	public:
		float MaxDriftBoostRatio; // 0x0(0x4)
		float MaxBonusSpeed; // 0x4(0x4)
		FDelMarScaledCurve BonusSpeedPercentageCurve; // 0x8(0x90)
		float WaitingPeriodSeconds; // 0x98(0x4)
		float MaxDriftBoostSeconds; // 0x9C(0x4)
		FDelMarScaledCurve PotentialDriftBoostPercentageCurve; // 0xA0(0x90)
		float MaxNumActiveBonusSpeedSeconds; // 0x130(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve DriftBoostDurationCurve; // 0x138(0x90)
		float BonusSpeedDecaySeconds; // 0x1C8(0x4)
		float PotentialRemovalRate; // 0x1CC(0x4)
		bool bEnforceThrottleForDriftBoost; // 0x1D0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1D1(0x3) UNKNOWN PROPERTY
		float QueuedBoostImpulseScalar; // 0x1D4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleDraftingConfig
	// Size: 0xC8 (0xC8 - 0x0)
	struct FDelMarVehicleDraftingConfig	
	{
	public:
		float TraceDistance; // 0x0(0x4)
		float MinEligibleDistance; // 0x4(0x4)
		float MaxHorizontalDegreesToDraftTarget; // 0x8(0x4)
		float MaxVerticalDegreesToDraftTarget; // 0xC(0x4)
		bool bEnableDynamicAngle; // 0x10(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FDelMarScaledCurve MaxBonusSpeedPercentageCurve; // 0x18(0x90)
		TEnumAsByte LineOfSightChannel; // 0xA8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float MinSpeedToStartDrafting; // 0xAC(0x4)
		float NumSecondsToActivateDrafting; // 0xB0(0x4)
		float NumForgivenessSeconds; // 0xB4(0x4)
		float NumGracePeriodSeconds; // 0xB8(0x4)
		float NumSecondsToMaxBonusSpeed; // 0xBC(0x4)
		float MaxBonusSpeed; // 0xC0(0x4)
		float NumSpeedRemovalSeconds; // 0xC4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleOversteerConfig
	// Size: 0x138 (0x138 - 0x0)
	struct FDelMarVehicleOversteerConfig	
	{
	public:
		float MinInput; // 0x0(0x4)
		float MaxAccumulatedSteer; // 0x4(0x4)
		FDelMarScaledCurve CappedAccumulatedSteerCurve; // 0x8(0x90)
		FDelMarScaledCurve AccumulatedSteerRateCurve; // 0x98(0x90)
		float AccumulatedSteerDecayRate; // 0x128(0x4)
		float DriftImpulseForce; // 0x12C(0x4)
		float MinSpeed; // 0x130(0x4)
		bool bDecayAccumulatedSteer; // 0x134(0x1)
		bool bClearAccumulatedSteerOnDrift; // 0x135(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x136(0x2) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_Terrain
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarVehicleConfig_Terrain	
	{
	public:
		float TargetSpeedPenaltyCooldownSeconds; // 0x0(0x4)
		int32_t NumWheelsTargetSpeedPenalty; // 0x4(0x4)
		float NoGripBrakeFactorWithThrottle; // 0x8(0x4)
		float MinForwardSpeedPercentage; // 0xC(0x4)
		bool bDemolishInWater; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float MaxWaterDepth; // 0x14(0x4)
		float WaterDestructionDelay; // 0x18(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray NonDriveableActorClasses; // 0x20(0x10)
	};


	// Struct DelMarCore.DelMarVehicleTurboConfig
	// Size: 0x70 (0x70 - 0x0)
	struct FDelMarVehicleTurboConfig	
	{
	public:
		float MaxActiveTimeSeconds; // 0x0(0x4)
		float CooldownSeconds; // 0x4(0x4)
		float InitialImpulseForce; // 0x8(0x4)
		float MinBaseTargetSpeed; // 0xC(0x4)
		FDelMarFloatModifier TargetSpeedModifier; // 0x10(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray BonusZones; // 0x28(0x10)
		float BonusZoneImpulseForce; // 0x38(0x4)
		float BonusZoneSpeedDecaySeconds; // 0x3C(0x4)
		float SuccessfulBonusZoneHitSeconds; // 0x40(0x4)
		float ApproachingBonusZoneSeconds; // 0x44(0x4)
		float MaxMissingZoneSeconds; // 0x48(0x4)
		float MaxNumCharges; // 0x4C(0x4)
		float ChargeRegenRateSeconds; // 0x50(0x4)
		float RaceStartCharges; // 0x54(0x4)
		float LapCompleteCharges; // 0x58(0x4)
		float TurboGainedForDriftBoostPotential; // 0x5C(0x4)
		float TurboGainedPerSecondAtMaxDriftPotential; // 0x60(0x4)
		float MaxTurboChargesFromDrift; // 0x64(0x4)
		bool bTerrainInvulnerabilityDuringTurbo; // 0x68(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_Rubberbanding
	// Size: 0x1B8 (0x1B8 - 0x0)
	struct FDelMarVehicleConfig_Rubberbanding	
	{
	public:
		float MinSpeed; // 0x0(0x4)
		float MaxBonusSpeedLostPerSecond; // 0x4(0x4)
		FDelMarScaledCurve MaxBonusSpeedGainedPerSecond; // 0x8(0x90)
		FDelMarScaledCurve MaxBonusSpeed; // 0x98(0x90)
		FDelMarScaledCurve MaxSpeed; // 0x128(0x90)
	};


	// Struct DelMarCore.DelMarVehicleConfig_StartlineBoost
	// Size: 0xA8 (0xA8 - 0x0)
	struct FDelMarVehicleConfig_StartlineBoost	
	{
	public:
		float MaxBonusSpeed; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve PercentageMaxBonusSpeedEarned; // 0x8(0x90)
		float BoostGainSeconds; // 0x98(0x4)
		float BoostDurationSeconds; // 0x9C(0x4)
		bool bEnforceForwardThrottle; // 0xA0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_Strafe
	// Size: 0x1C (0x1C - 0x0)
	struct FDelMarVehicleConfig_Strafe	
	{
	public:
		float InitialVelocityForce; // 0x0(0x4)
		bool bVelocityRelative; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float MinSteerInput; // 0x8(0x4)
		float KeybindPressLandedBufferSeconds; // 0xC(0x4)
		float MaxActiveSeconds; // 0x10(0x4)
		float RaceStartCooldownSeconds; // 0x14(0x4)
		float CooldownSeconds; // 0x18(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfig_Underthrust
	// Size: 0x168 (0x168 - 0x0)
	struct FDelMarVehicleConfig_Underthrust	
	{
	public:
		float UpwardAccel; // 0x0(0x4)
		float ForwardAccel; // 0x4(0x4)
		float MaxUpwardSpeed; // 0x8(0x4)
		float MaxForwardSpeed; // 0xC(0x4)
		float EndThrustForce; // 0x10(0x4)
		float StartingTankPercentage; // 0x14(0x4)
		float MaxThrustSeconds; // 0x18(0x4)
		float ForwardSpeedCap; // 0x1C(0x4)
		float MaxSpeedReduction; // 0x20(0x4)
		float SpeedCapSecondsBuffer; // 0x24(0x4)
		float MinJumpActiveSecondsBeforeActivating; // 0x28(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve FallingUpsideDownThrustDampeningPercentage; // 0x30(0x90)
		FDelMarScaledCurve PitchRatioScalarCurve; // 0xC0(0x90)
		bool bVehicleRelativeWithFreestyle; // 0x150(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x151(0x3) UNKNOWN PROPERTY
		float MinUpwardAccel; // 0x154(0x4)
		float LateralRelativeAccel; // 0x158(0x4)
		bool bReplenishTankOnLanding; // 0x15C(0x1)
		bool bReplenishTankOverTime; // 0x15D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x15E(0x2) UNKNOWN PROPERTY
		float TankReplenishDelaySeconds; // 0x160(0x4)
		float TankReplenishRatePerSecond; // 0x164(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfig_AirControl
	// Size: 0xD0 (0xD0 - 0x0)
	struct FDelMarVehicleConfig_AirControl	
	{
	public:
		float MaxPitchAdjustmentForwardSpeed; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve LateralTurnRateCurve; // 0x8(0x90)
		float UnderthrustTurnRate; // 0x98(0x4)
		bool bAllowRedirectDuringKickflip; // 0x9C(0x1)
		bool bAllowVerticalRedirectDuringVerticalKickflip; // 0x9D(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x9E(0x2) UNKNOWN PROPERTY
		float LateralKickflipScalar; // 0xA0(0x4)
		float VerticalTurnRate; // 0xA4(0x4)
		float VerticalTurnRateAboveHorizon; // 0xA8(0x4)
		float MinSteerInput; // 0xAC(0x4)
		float MinPitchVerticalDegreesFromWorldDown; // 0xB0(0x4)
		float MaxPitchVerticalDegreesFromWorldDown; // 0xB4(0x4)
		bool bAerialDivingBonusEnabled; // 0xB8(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		float MinPitchForAerialDivingBonus; // 0xBC(0x4)
		float MaxAerialDivingBonusSpeed; // 0xC0(0x4)
		float MinAerialDivingBonusSpeed; // 0xC4(0x4)
		float AerialDivingBonusSpeedChangeRate; // 0xC8(0x4)
		float AerialDivingBonusSpeedDecayRate; // 0xCC(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfig_AirFreestyle
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarVehicleConfig_AirFreestyle	
	{
	public:
		FVector TorqueAccel; // 0x0(0x18)
		FVector TorqueDamping; // 0x18(0x18)
	};


	// Struct DelMarCore.DelMarVehicleConfig_AirThrottle
	// Size: 0xA0 (0xA0 - 0x0)
	struct FDelMarVehicleConfig_AirThrottle	
	{
	public:
		FDelMarScaledCurve AccelerationScalarCurve; // 0x0(0x90)
		float AerialSpeedCap; // 0x90(0x4)
		float OverCapSpeedLossPerSecond; // 0x94(0x4)
		float AerialSlowdownImmunitySeconds; // 0x98(0x4)
		bool bApplyNoThrottleSlowdown; // 0x9C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9D(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_AutoAerialRotation
	// Size: 0xA8 (0xA8 - 0x0)
	struct FDelMarVehicleConfig_AutoAerialRotation	
	{
	public:
		FVector StabilizationDampingFactor; // 0x0(0x18)
		FVector StabilizationFactor; // 0x18(0x18)
		float MaxUpsideDownDegreesForForcedRoll; // 0x30(0x4)
		float IdleRotationThreshold; // 0x34(0x4)
		float UpsideDownRollTorque; // 0x38(0x4)
		float UpsideDownRollDamping; // 0x3C(0x4)
		float MinRollInput; // 0x40(0x4)
		float SteerRollOffsetDegrees; // 0x44(0x4)
		float MinPitchInput; // 0x48(0x4)
		float MaxUserPitchOffsetDegrees; // 0x4C(0x4)
		float LateralPitchOffsetDegrees; // 0x50(0x4)
		float UnderthrustPitchDegrees; // 0x54(0x4)
		float MinThrottleInput; // 0x58(0x4)
		float MaxUserThrottleOffsetDegrees; // 0x5C(0x4)
		float YawTorque; // 0x60(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVector MaxRotationSpeed; // 0x68(0x18)
		float MinApproachTargetScalar; // 0x80(0x4)
		float MinForwardSpeedForYawRotation; // 0x84(0x4)
		float MinSteerInputForForwardStateTurning; // 0x88(0x4)
		float ForwardStateTurnRate; // 0x8C(0x4)
		bool bLandingAssistanceEnabled; // 0x90(0x1)
		TEnumAsByte LandingCollisionChannel; // 0x91(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x92(0x2) UNKNOWN PROPERTY
		float LandingDetectionSeconds; // 0x94(0x4)
		float MinLandingDetectionDistance; // 0x98(0x4)
		float LandingSurfaceNormalMaxDegrees; // 0x9C(0x4)
		float LandingRotationAmplifier; // 0xA0(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_AutoUpright
	// Size: 0x24 (0x24 - 0x0)
	struct FDelMarVehicleConfig_AutoUpright	
	{
	public:
		float RotationTorque; // 0x0(0x4)
		float RotationDamping; // 0x4(0x4)
		float MinActiveSeconds; // 0x8(0x4)
		float MinActiveSecondsGrounded; // 0xC(0x4)
		float WheelsOnGroundChangedDelaySeconds; // 0x10(0x4)
		bool bClearAngularVelocity; // 0x14(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float MinDegreesFromVehicleUpThreshold; // 0x18(0x4)
		float MinThrottleForWheelRotation; // 0x1C(0x4)
		bool bAllowActiveStateOnGround; // 0x20(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_Jump
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarVehicleConfig_Jump	
	{
	public:
		float MinJumpTime; // 0x0(0x4)
		float MaxJumpTime; // 0x4(0x4)
		float JumpVelocity; // 0x8(0x4)
		float ForwardVelocity; // 0xC(0x4)
		float PitchTorque; // 0x10(0x4)
		float EndThrustForce; // 0x14(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfig_Kickflip
	// Size: 0x158 (0x158 - 0x0)
	struct FDelMarVehicleConfig_Kickflip	
	{
	public:
		float DirectionalSensitivity; // 0x0(0x4)
		float SecondaryDirectionalSensitivity; // 0x4(0x4)
		bool bAllowDiagonalKickDirection; // 0x8(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t NumWheelsForLanding; // 0xC(0x4)
		int32_t NumActivationCharges; // 0x10(0x4)
		bool bResetChargesOnLanding; // 0x14(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float MinActiveSecondsToReactivate; // 0x18(0x4)
		float MinActiveTime; // 0x1C(0x4)
		float MaxActiveLateralTime; // 0x20(0x4)
		float MaxActiveUpwardTime; // 0x24(0x4)
		float MaxActiveDownwardTime; // 0x28(0x4)
		float CooldownSeconds; // 0x2C(0x4)
		bool bAllowGroundedKickflips; // 0x30(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float GroundedKickflipForce; // 0x34(0x4)
		float LateralVelocity; // 0x38(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve LateralVelocityScalarCurve; // 0x40(0x90)
		float MinForwardSpeedForLateralScalar; // 0xD0(0x4)
		float MaxLateralVelocityCancelled; // 0xD4(0x4)
		float UpwardVerticalVelocity; // 0xD8(0x4)
		float DownwardVerticalVelocity; // 0xDC(0x4)
		float LateralVerticalForce; // 0xE0(0x4)
		float RotationDamping; // 0xE4(0x4)
		float RotationTorque; // 0xE8(0x4)
		float RotationTorqueIncomingCollision; // 0xEC(0x4)
		float MinSpeedToRotateYaw; // 0xF0(0x4)
		float MaxVerticalYawLandingDegrees; // 0xF4(0x4)
		float MaxLateralYawLandingDegrees; // 0xF8(0x4)
		float MaxVerticalNormalLandingDegrees; // 0xFC(0x4)
		float MaxLateralNormalLandingDegrees; // 0x100(0x4)
		float MinLongRollTimeCheck; // 0x104(0x4)
		float MinLongRollTimeCheckDownwardKick; // 0x108(0x4)
		float MaxLongRollDegrees; // 0x10C(0x4)
		float MinDegreesToCompleteRoll; // 0x110(0x4)
		float FastTorqueDistanceCheck; // 0x114(0x4)
		bool bUseStartingDirectionWhenLanding; // 0x118(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		int32_t PredictionTickInterval; // 0x11C(0x4)
		float MaxSimulationRedirectSeconds; // 0x120(0x4)
		float MaxSimulationDistanceLateral; // 0x124(0x4)
		float MaxSimulationDistanceUpward; // 0x128(0x4)
		float MaxSimulationDistanceDownward; // 0x12C(0x4)
		bool bApplySuctionToSurfaces; // 0x130(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x131(0x3) UNKNOWN PROPERTY
		float SuctionVelocity; // 0x134(0x4)
		float MaxSuctionPerSecond; // 0x138(0x4)
		float SuctionDistanceCheck; // 0x13C(0x4)
		float MaxAdditionalVelocitySuctionDistance; // 0x140(0x4)
		TEnumAsByte SuctionChannel; // 0x144(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x145(0x3) UNKNOWN PROPERTY
		float MaxForwardVelocityDegreeDifference; // 0x148(0x4)
		float MinSpeedForPrimaryForwardRotation; // 0x14C(0x4)
		float MaxGroundedDirectionDegrees; // 0x150(0x4)
		unsigned char UnknownData15_7[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_Gravity
	// Size: 0x20 (0x20 - 0x0)
	struct FDelMarVehicleConfig_Gravity	
	{
	public:
		float ForceScaleCeiling; // 0x0(0x4)
		float ForceScaleWall; // 0x4(0x4)
		float ForceScaleGround; // 0x8(0x4)
		float AerialGravityForceMultiplier; // 0xC(0x4)
		float CoyoteTimeDuration; // 0x10(0x4)
		int32_t MinWheelsForCounterGravityMeasures; // 0x14(0x4)
		float MaxCounterGravitySpringVarianceDegrees; // 0x18(0x4)
		bool bCounterGravityInKickflipSuctionDirection; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_Reattachment
	// Size: 0xA0 (0xA0 - 0x0)
	struct FDelMarVehicleConfig_Reattachment	
	{
	public:
		float SurfaceTraceDistance; // 0x0(0x4)
		float ReattachmentForceAmount; // 0x4(0x4)
		FDelMarScaledCurve ReattachmentForceScalarCurve; // 0x8(0x90)
		TEnumAsByte ReattachmentChannel; // 0x98(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarCore.DelMarVehicleConfig_WorldBonusSpeed
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarVehicleConfig_WorldBonusSpeed	
	{
	public:
		TArray BonusSpeedSourceCaps; // 0x0(0x10)
		float MaxBonusSpeedPerStack; // 0x10(0x4)
		float MaxStackDuration; // 0x14(0x4)
		TArray WorldBonusSpeedActors; // 0x18(0x10)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_AutoUpright
	// Size: 0x4 (0x4 - 0x0)
	struct FDelMarVehicleConfigOverride_AutoUpright	
	{
	public:
		float MaxWorldContactDegreeThreshold; // 0x0(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Collision
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleConfigOverride_Collision	
	{
	public:
		bool bCollisionDemosEnabled; // 0x0(0x1)
		bool bWallRicochetEnabled; // 0x1(0x1)
		bool bNonTrackVelocityRedirectEnabled; // 0x2(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float DemoSpeedScalar; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Drift
	// Size: 0xC (0xC - 0x0)
	struct FDelMarVehicleConfigOverride_Drift	
	{
	public:
		float SpeedCapScalar; // 0x0(0x4)
		float AccelerationRateScalar; // 0x4(0x4)
		float DecelerationRateScalar; // 0x8(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_DriftBoost
	// Size: 0xC (0xC - 0x0)
	struct FDelMarVehicleConfigOverride_DriftBoost	
	{
	public:
		float MaxBonusSpeedScalar; // 0x0(0x4)
		float DurationScalar; // 0x4(0x4)
		float PotentialRateScalar; // 0x8(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Drive
	// Size: 0x14 (0x14 - 0x0)
	struct FDelMarVehicleConfigOverride_Drive	
	{
	public:
		float MaxBaseForwardSpeedScalar; // 0x0(0x4)
		float AccelerationScalar; // 0x4(0x4)
		float DecelerationScalar; // 0x8(0x4)
		float BrakeScalar; // 0xC(0x4)
		float MaxAerialSpeedScalar; // 0x10(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Gravity
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleConfigOverride_Gravity	
	{
	public:
		float CounterGravityContactDegreeThreshold; // 0x0(0x4)
		float AerialGravityScalar; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Jump
	// Size: 0x4 (0x4 - 0x0)
	struct FDelMarVehicleConfigOverride_Jump	
	{
	public:
		float JumpImpulseScalar; // 0x0(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Kickflip
	// Size: 0xC (0xC - 0x0)
	struct FDelMarVehicleConfigOverride_Kickflip	
	{
	public:
		bool bResetChargesOnLanding; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t NumActivationCharges; // 0x4(0x4)
		float CooldownSeconds; // 0x8(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Oversteer
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleConfigOverride_Oversteer	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float AccumulatedSteerThresholdScalar; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Terrain
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarVehicleConfigOverride_Terrain	
	{
	public:
		bool bDemolishInWater; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float WaterDestructionDelay; // 0x4(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Turbo
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarVehicleConfigOverride_Turbo	
	{
	public:
		float StartingVehicleCharges; // 0x0(0x4)
		float ChargeRegenRateScalar; // 0x4(0x4)
		float DriftBoostTurboGenerationScalar; // 0x8(0x4)
		float TurboSpeedScalar; // 0xC(0x4)
		float MaxActiveTimeSeconds; // 0x10(0x4)
		float SuccessfulBonusZoneHitSeconds; // 0x14(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverride_Underthrust
	// Size: 0x1C (0x1C - 0x0)
	struct FDelMarVehicleConfigOverride_Underthrust	
	{
	public:
		float StartingTankPercentage; // 0x0(0x4)
		float ConsumptionRateMultiplier; // 0x4(0x4)
		bool bReplenishTankOnLanding; // 0x8(0x1)
		bool bReplenishTankOverTime; // 0x9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		float TankReplenishDelaySeconds; // 0xC(0x4)
		float TankReplenishRateMultiplier; // 0x10(0x4)
		float AccelScalar; // 0x14(0x4)
		float MaxUpwardSpeedScalar; // 0x18(0x4)
	};


	// Struct DelMarCore.DelMarVehicleConfigOverrides
	// Size: 0x98 (0x98 - 0x0)
	struct FDelMarVehicleConfigOverrides	
	{
	public:
		bool bValid; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FDelMarVehicleConfigOverride_AutoUpright AutoUpright; // 0x4(0x4)
		FDelMarVehicleConfigOverride_Collision Collision; // 0x8(0x8)
		FDelMarVehicleConfigOverride_Drift Drift; // 0x10(0xC)
		FDelMarVehicleConfigOverride_DriftBoost DriftBoost; // 0x1C(0xC)
		FDelMarVehicleConfigOverride_Drive Drive; // 0x28(0x14)
		FDelMarVehicleConfigOverride_Gravity Gravity; // 0x3C(0x8)
		FDelMarVehicleConfigOverride_Jump Jump; // 0x44(0x4)
		FDelMarVehicleConfigOverride_Kickflip Kickflip; // 0x48(0xC)
		FDelMarVehicleConfigOverride_Oversteer Oversteer; // 0x54(0x8)
		FDelMarVehicleConfigOverride_Terrain Terrain; // 0x5C(0x8)
		FDelMarVehicleConfigOverride_Turbo Turbo; // 0x64(0x18)
		FDelMarVehicleConfigOverride_Underthrust Underthrust; // 0x7C(0x1C)
	};


	// Struct DelMarCore.DelMarDynamicForceFeedbackEffect
	// Size: 0x128 (0x128 - 0x0)
	struct FDelMarDynamicForceFeedbackEffect	
	{
	public:
		FForceFeedbackChannelDetails Effect; // 0x0(0x90)
		FRuntimeFloatCurve IntensityAmplifierCurve; // 0x90(0x88)
		unsigned char UnknownData01_7[0x10]; // 0x118(0x10) UNKNOWN PROPERTY
	};

}
