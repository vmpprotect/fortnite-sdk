#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaSchedule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EpicMediaSchedule.EpicMediaScheduleScheduleEntryHourly
	// Size: 0x28 (0x28 - 0x0)
	struct FEpicMediaScheduleScheduleEntryHourly	
	{
	public:
		int32_t Minutes; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString VUID; // 0x8(0x10)
		int32_t DurationSeconds; // 0x18(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		ULevelSequence Sequence; // 0x20(0x8)
	};


	// Struct EpicMediaSchedule.EpicMediaScheduleScheduleEntryDaily
	// Size: 0x28 (0x28 - 0x0)
	struct FEpicMediaScheduleScheduleEntryDaily	
	{
	public:
		int32_t Hours; // 0x0(0x4)
		int32_t Minutes; // 0x4(0x4)
		FString VUID; // 0x8(0x10)
		int32_t DurationSeconds; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		ULevelSequence Sequence; // 0x20(0x8)
	};


	// Struct EpicMediaSchedule.EpicMediaScheduleScheduleEntryAbsolute
	// Size: 0x30 (0x30 - 0x0)
	struct FEpicMediaScheduleScheduleEntryAbsolute	
	{
	public:
		FString IsoStartTime; // 0x0(0x10)
		FString VUID; // 0x10(0x10)
		int32_t DurationSeconds; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		ULevelSequence Sequence; // 0x28(0x8)
	};


	// Struct EpicMediaSchedule.EpicMediaScheduleScheduleInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FEpicMediaScheduleScheduleInfo	
	{
	public:
		FDateTime StartTime; // 0x0(0x8)
		FTimespan RelativeStartTime; // 0x8(0x8)
		FString VUID; // 0x10(0x10)
		ULevelSequence Sequence; // 0x20(0x8)
	};

}
