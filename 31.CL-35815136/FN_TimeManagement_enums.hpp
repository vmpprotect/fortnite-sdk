#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TimeManagement
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
