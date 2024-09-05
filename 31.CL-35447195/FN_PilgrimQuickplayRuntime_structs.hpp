#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PilgrimQuickplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct PilgrimQuickplayRuntime.PilgrimQuickplaySongResultData
	// Size: 0x68 (0x68 - 0x0)
	struct FPilgrimQuickplaySongResultData	
	{
	public:
		FText SongName; // 0x0(0x10)
		FGameplayTagContainer SongTags; // 0x10(0x20)
		FName SongShortName; // 0x30(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray BandData; // 0x38(0x10)
		TArray PlayerData; // 0x48(0x10)
		char Team; // 0x58(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		int32_t LocalPlayerBandDataIndex; // 0x5C(0x4)
		int32_t LocalPlayerDataIndex; // 0x60(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimQuickplayRuntime.PilgrimQuickplaySongResultPlayerData
	// Size: 0x88 (0x88 - 0x0)
	struct FPilgrimQuickplaySongResultPlayerData	
	{
	public:
		FString PlayerName; // 0x0(0x10)
		FUniqueNetIdRepl PlayerAccountId; // 0x10(0x30)
		TWeakObjectPtr PlayerState; // 0x40(0x8)
		EPilgrimTrackType InstrumentType; // 0x48(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer InstrumentTags; // 0x50(0x20)
		int32_t PlayerStars; // 0x70(0x4)
		int32_t PlayerScore; // 0x74(0x4)
		EPilgrimSongDifficulty PlayerDifficulty; // 0x78(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		int32_t SongTrackDifficulty; // 0x7C(0x4)
		bool Team : 1; // 0x80:0(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimQuickplayRuntime.PilgrimQuickplaySongResultBandData
	// Size: 0x1C (0x1C - 0x0)
	struct FPilgrimQuickplaySongResultBandData	
	{
	public:
		char Team; // 0x0(0x1)
		char NumTeamMembers; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		int32_t BandScore; // 0x4(0x4)
		int32_t BandModifierBonus; // 0x8(0x4)
		int32_t BandInstrumentVarietyBonus; // 0xC(0x4)
		int32_t BandStars; // 0x10(0x4)
		int32_t BaseBandScore; // 0x14(0x4)
		int32_t BandOverdriveBonus; // 0x18(0x4)
	};


	// Struct PilgrimQuickplayRuntime.PilgrimEvent_Intro_PlayerChanged
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimEvent_Intro_PlayerChanged	
	{
	public:
		APlayerState PlayerState; // 0x0(0x8)
	};


	// Struct PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_SongResultPlayerData
	// Size: 0x78 (0x78 - 0x0)
	struct FPilgrimEvent_QuickplayScoring_SongResultPlayerData	
	{
	public:
		AFortPlayerPawn ForPlayer; // 0x0(0x8)
		int32_t SetlistIndex; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FPilgrimQuickplaySongResultData SongResultData; // 0x10(0x68)
	};


	// Struct PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_PerformanceDataReceived
	// Size: 0x58 (0x58 - 0x0)
	struct FPilgrimEvent_QuickplayScoring_PerformanceDataReceived	
	{
	public:
		AFortPlayerPawn ForPlayer; // 0x0(0x8)
		int32_t SetlistIndex; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FPilgrimQuickplayPlayerPerformanceData PerformanceData; // 0x10(0x48)
	};


	// Struct PilgrimQuickplayRuntime.PilgrimQuickplayPlayerPerformanceData
	// Size: 0x48 (0x48 - 0x0)
	struct FPilgrimQuickplayPlayerPerformanceData	
	{
	public:
		float Accuracy; // 0x0(0x4)
		float AverageOffset; // 0x4(0x4)
		float StandardDeviation; // 0x8(0x4)
		bool FullCombo; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		int32_t NotesHit; // 0x10(0x4)
		int32_t NotesPassed; // 0x14(0x4)
		int32_t NotesMissed; // 0x18(0x4)
		int32_t TotalNotes; // 0x1C(0x4)
		int32_t LongestStreak; // 0x20(0x4)
		float TimeInOverdriveMs; // 0x24(0x4)
		TArray HistogramSamples; // 0x28(0x10)
		TArray AccuracyTierCounts; // 0x38(0x10)
	};


	// Struct PilgrimQuickplayRuntime.PilgrimHistogramSample
	// Size: 0x8 (0x8 - 0x0)
	struct FPilgrimHistogramSample	
	{
	public:
		int32_t OffsetMs; // 0x0(0x4)
		int32_t NumSamples; // 0x4(0x4)
	};


	// Struct PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_NewHighScoreReceived
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_QuickplayScoring_NewHighScoreReceived	
	{
	public:
		AFortPlayerPawn ForPlayer; // 0x0(0x8)
		int32_t SetlistIndex; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct PilgrimQuickplayRuntime.PilgrimEvent_QuickplayScoring_MatchRecorded
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_QuickplayScoring_MatchRecorded	
	{
	public:
		AFortPlayerPawn ForPlayer; // 0x0(0x8)
		int32_t SetlistIndex; // 0x8(0x4)
		bool bIsSoloMatch; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct PilgrimQuickplayRuntime.PilgrimQuickplaySetlistResultData
	// Size: 0xB8 (0xB8 - 0x0)
	struct FPilgrimQuickplaySetlistResultData	
	{
	public:
		int32_t SetlistIndex; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FPilgrimQuickplaySongResultData SongResultData; // 0x8(0x68)
		FPilgrimQuickplayPlayerPerformanceData PerformanceData; // 0x70(0x48)
	};

}
