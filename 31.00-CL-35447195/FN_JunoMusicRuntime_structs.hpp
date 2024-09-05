#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoMusicRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoMusicRuntime.ElementControllerArray
	// Size: 0x10 (0x10 - 0x0)
	struct FElementControllerArray	
	{
	public:
		TArray ElementControllerArray; // 0x0(0x10)
	};


	// Struct JunoMusicRuntime.JunoMusicDataAggregatorSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoMusicDataAggregatorSettings	
	{
	public:
		TArray JunoMusicDataCollectors; // 0x0(0x10)
	};


	// Struct JunoMusicRuntime.JunoActiveMusicElement
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoActiveMusicElement	
	{
	public:
		unsigned char UnknownData01_7[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
		UJunoActiveMusicCue MusicCue; // 0x18(0x8)
	};


	// Struct JunoMusicRuntime.JunoMusicElementData
	// Inherited from FTableRowBase
	// Size: 0x130 (0x138 - 0x8)
	struct FJunoMusicElementData : public FTableRowBase	
	{
	public:
		bool bEnabled; // 0x8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FGameplayTag ElementName; // 0xC(0x4)
		FGameplayTagQuery ElementConditions; // 0x10(0x48)
		FGameplayTagQuery StatePushConditions; // 0x58(0x48)
		TArray MusicCues; // 0xA0(0x10)
		EJunoMusicCueSelectionBehavior CueSelectionBehavior; // 0xB0(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		FVector2D FadeInOutValues; // 0xB8(0x10)
		float PlaybackPriority; // 0xC8(0x4)
		float PlaybackProbabilityPercent; // 0xCC(0x4)
		bool bStopOnInvalidConditions; // 0xD0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery ElementStopConditions; // 0xD8(0x48)
		FVector2D ElementCooldownInSeconds; // 0x120(0x10)
		bool bReceiveAggregatedData; // 0x130(0x1)
		unsigned char UnknownData07_7[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoMusicRuntime.JunoWorldMusicSystem
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoWorldMusicSystem	
	{
	public:
		UActiveJunoMusicPlayer ActiveJunoMusicPlayer; // 0x0(0x8)
		UJunoMusicDataAggregator JunoMusicDataAggregator; // 0x8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoMusicRuntime.ActiveJunoMusicManagerData
	// Size: 0x10 (0x10 - 0x0)
	struct FActiveJunoMusicManagerData	
	{
	public:
		FVector2D MainCooldownTimeInSeconds; // 0x0(0x10)
	};


	// Struct JunoMusicRuntime.JunoMusicPlaylistElement
	// Size: 0xB8 (0xB8 - 0x0)
	struct FJunoMusicPlaylistElement	
	{
	public:
		FSoftObjectPath Music; // 0x0(0x18)
		FVector2D FadeInOutValues; // 0x18(0x10)
		TEnumAsByte MusicScheduleMode; // 0x28(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FVector2D RangeInSeconds; // 0x30(0x10)
		EFortDayPhase DayPhase; // 0x40(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FVector2D RangeInGameHours; // 0x48(0x10)
		bool bUpdateAtTickRate; // 0x58(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		FVector2D UpdatePeriodRange; // 0x60(0x10)
		TArray CustomPlaybackConditions; // 0x70(0x10)
		bool bFlipPlaybackConditions; // 0x80(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		float PlaybackProbabilityPercent; // 0x84(0x4)
		float PlaybackPriority; // 0x88(0x4)
		bool bInterruptible; // 0x8C(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x8D(0x3) UNKNOWN PROPERTY
		FVector2D PlaybackCooldownInSeconds; // 0x90(0x10)
		bool bResetCooldownOnFalseConditions; // 0xA0(0x1)
		unsigned char UnknownData11_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TArray CooldownGroupNames; // 0xA8(0x10)
	};


	// Struct JunoMusicRuntime.JunoMusicPlaylist
	// Size: 0x78 (0x78 - 0x0)
	struct FJunoMusicPlaylist	
	{
	public:
		FName PlaylistName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray MusicPlaylist; // 0x8(0x10)
		TMap CooldownGroups; // 0x18(0x50)
		FJunoMusicDataAggregatorSettings DataAggregatorSettings; // 0x68(0x10)
	};


	// Struct JunoMusicRuntime.JunoMusicPlayspaceProbeData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoMusicPlayspaceProbeData	
	{
	public:
		TArray JunoMusicPlayspaceProbes; // 0x0(0x10)
	};

}
