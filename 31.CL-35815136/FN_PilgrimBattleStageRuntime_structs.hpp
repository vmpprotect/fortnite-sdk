#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PilgrimBattleStageRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PilgrimBattleStageRuntime.BattleStageObjectiveFilter_BreakStreak
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x18 (0x1D8 - 0x1C0)
	struct FBattleStageObjectiveFilter_BreakStreak : public FPilgrimObjectiveFilterBase	
	{
	public:
		FInt32Range RequiredVictimPreBreakMultiplier; // 0x1C0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x1D0(0x8) UNKNOWN PROPERTY
	};


	// Struct PilgrimBattleStageRuntime.BattleStageObjectiveFilter_RoundComplete
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x10 (0x1D0 - 0x1C0)
	struct FBattleStageObjectiveFilter_RoundComplete : public FPilgrimObjectiveFilterBase	
	{
	public:
		FInt32Range RequiredRoundNum; // 0x1C0(0x10)
	};


	// Struct PilgrimBattleStageRuntime.BattleStageObjectiveFilter_RoundStart
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x10 (0x1D0 - 0x1C0)
	struct FBattleStageObjectiveFilter_RoundStart : public FPilgrimObjectiveFilterBase	
	{
	public:
		FInt32Range RequiredRoundNum; // 0x1C0(0x10)
	};


	// Struct PilgrimBattleStageRuntime.BattleStageObjectiveFilter_SurviveRound
	// Inherited from FPilgrimObjectiveFilterBase -> FObjectiveFilter
	// Size: 0x10 (0x1D0 - 0x1C0)
	struct FBattleStageObjectiveFilter_SurviveRound : public FPilgrimObjectiveFilterBase	
	{
	public:
		FInt32Range RequiredRoundNumSurvived; // 0x1C0(0x10)
	};


	// Struct PilgrimBattleStageRuntime.BattleStageSimulatedPlayer
	// Size: 0x20 (0x20 - 0x0)
	struct FBattleStageSimulatedPlayer	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UServerPilgrimGame* ServerPilgrimGame; // 0x8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct PilgrimBattleStageRuntime.BattleStageBotNameTableRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FBattleStageBotNameTableRow : public FTableRowBase	
	{
	public:
		FText Name; // 0x8(0x10)
	};


	// Struct PilgrimBattleStageRuntime.BattleStageVerbMessage_BreakStreak
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x138 - 0x130)
	struct FBattleStageVerbMessage_BreakStreak : public FPilgrimVerbMessageBase	
	{
	public:
		int32_t VictimPreBreakMultiplier; // 0x130(0x4)
		bool VictimWasAtMaxMultiplier; // 0x134(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x135(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimBattleStageRuntime.BattleStageVerbMessage_RoundComplete
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x138 - 0x130)
	struct FBattleStageVerbMessage_RoundComplete : public FPilgrimVerbMessageBase	
	{
	public:
		int32_t RoundNum; // 0x130(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimBattleStageRuntime.BattleStageVerbMessage_RoundStart
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x138 - 0x130)
	struct FBattleStageVerbMessage_RoundStart : public FPilgrimVerbMessageBase	
	{
	public:
		int32_t RoundNum; // 0x130(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimBattleStageRuntime.BattleStageVerbMessage_SurviveRound
	// Inherited from FPilgrimVerbMessageBase -> FVerbMessage
	// Size: 0x8 (0x138 - 0x130)
	struct FBattleStageVerbMessage_SurviveRound : public FPilgrimVerbMessageBase	
	{
	public:
		int32_t SurvivedRoundNum; // 0x130(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimBattleStageRuntime.PilgrimEvent_BattleStage_BandStatesUpdated
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_BattleStage_BandStatesUpdated	
	{
	public:
		TWeakObjectPtr<UPilgrimBattleStageGameManagerComponent*> GameManagerComponent; // 0x0(0x8)
	};


	// Struct PilgrimBattleStageRuntime.PilgrimEvent_BattleStage_EliminationsSet
	// Size: 0x18 (0x18 - 0x0)
	struct FPilgrimEvent_BattleStage_EliminationsSet	
	{
	public:
		TWeakObjectPtr<UPilgrimBattleStageGameManagerComponent*> GameManagerComponent; // 0x0(0x8)
		TArray<FPilgrimQuickplaySongResultBandData> SortedResults; // 0x8(0x10)
	};


	// Struct PilgrimBattleStageRuntime.PilgrimEvent_BattleStage_SetlistFinalized
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_BattleStage_SetlistFinalized	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct PilgrimBattleStageRuntime.PilgrimEvent_BattleStage_MatchStarted
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_BattleStage_MatchStarted	
	{
	public:
		bool bIsPrivate; // 0x0(0x1)
	};


	// Struct PilgrimBattleStageRuntime.BattleStageBandState
	// Size: 0x30 (0x30 - 0x0)
	struct FBattleStageBandState	
	{
	public:
		char TeamID; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortPlayerStateAthena*> FortPlayerState; // 0x4(0x8)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText BandName; // 0x10(0x10)
		UTexture2D* BandIcon; // 0x20(0x8)
		APilgrimMusicBattleInstance* MusicBattleInstance; // 0x28(0x8)
	};

}
