#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TimeManagement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/TimeManagement.EFrameNumberDisplayFormats
	enum EFrameNumberDisplayFormats
	{
		EFrameNumberDisplayFormats__NonDropFrameTimecode = 0,
		EFrameNumberDisplayFormats__DropFrameTimecode = 1,
		EFrameNumberDisplayFormats__Seconds = 2,
		EFrameNumberDisplayFormats__Frames = 3,
		EFrameNumberDisplayFormats__MAX_Count = 4,
	};


	// Enum /Script/TimeManagement.ETimedDataInputEvaluationType
	enum ETimedDataInputEvaluationType
	{
		ETimedDataInputEvaluationType__None = 0,
		ETimedDataInputEvaluationType__Timecode = 1,
		ETimedDataInputEvaluationType__PlatformTime = 2,
	};


	// Enum /Script/TimeManagement.ETimedDataInputState
	enum ETimedDataInputState
	{
		ETimedDataInputState__Connected = 0,
		ETimedDataInputState__Unresponsive = 1,
		ETimedDataInputState__Disconnected = 2,
	};

}
