#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HarmonixMetasound
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct HarmonixMetasound.MidiEventInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FMidiEventInfo	
	{
	public:
		FMusicTimestamp Timestamp; // 0x0(0x8)
		int32_t TrackIndex; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct HarmonixMetasound.StepSequenceCell
	// Size: 0x2 (0x2 - 0x0)
	struct FStepSequenceCell	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		bool bContinuation; // 0x1(0x1)
	};


	// Struct HarmonixMetasound.StepSequenceRow
	// Size: 0x18 (0x18 - 0x0)
	struct FStepSequenceRow	
	{
	public:
		TArray Cells; // 0x0(0x10)
		bool bRowEnabled; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct HarmonixMetasound.StepSequenceNote
	// Size: 0x8 (0x8 - 0x0)
	struct FStepSequenceNote	
	{
	public:
		int32_t NoteNumber; // 0x0(0x4)
		int32_t Velocity; // 0x4(0x4)
	};


	// Struct HarmonixMetasound.StepSequencePage
	// Size: 0x10 (0x10 - 0x0)
	struct FStepSequencePage	
	{
	public:
		TArray Rows; // 0x0(0x10)
	};


	// Struct HarmonixMetasound.StepSequenceTable
	// Size: 0x28 (0x28 - 0x0)
	struct FStepSequenceTable	
	{
	public:
		TArray Pages; // 0x0(0x10)
		TArray Notes; // 0x10(0x10)
		int32_t StepSkipIndex; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct HarmonixMetasound.MusicLoopConfiguration
	// Size: 0x14 (0x14 - 0x0)
	struct FMusicLoopConfiguration	
	{
	public:
		bool Enabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FMusicTimestamp RegionStart; // 0x4(0x8)
		FMusicTimestamp RegionEnd; // 0xC(0x8)
	};


	// Struct HarmonixMetasound.MusicSeekTarget
	// Size: 0x10 (0x10 - 0x0)
	struct FMusicSeekTarget	
	{
	public:
		ESeekPointType Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FMusicTimestamp BarBeat; // 0x4(0x8)
		float Ms; // 0xC(0x4)
	};


	// Struct HarmonixMetasound.MusicSeekRequest
	// Size: 0x14 (0x14 - 0x0)
	struct FMusicSeekRequest	
	{
	public:
		bool EmmediateIfPastFromPoint; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FMusicTimestamp FromPoint; // 0x4(0x8)
		FMusicTimestamp ToPoint; // 0xC(0x8)
	};


	// Struct HarmonixMetasound.HarmonixPeakTamerSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FHarmonixPeakTamerSettings	
	{
	public:
		float PeakAttackTimeSeconds; // 0x0(0x4)
		float PeakReleaseTimeSeconds; // 0x4(0x4)
		bool bEnableValueSmoothing; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float ValueAttackTimeSeconds; // 0xC(0x4)
		float ValueReleaseTimeSeconds; // 0x10(0x4)
	};

}
