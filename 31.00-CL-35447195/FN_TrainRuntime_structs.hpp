#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TrainRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct TrainRuntime.TrainCarRuntimeData
	// Size: 0xE0 (0xE0 - 0x0)
	struct FTrainCarRuntimeData	
	{
	public:
		ATrainCar Actor; // 0x0(0x8)
		float Length; // 0x8(0x4)
		float ConnectorLength; // 0xC(0x4)
		unsigned char UnknownData01_7[0xD0]; // 0x10(0xD0) UNKNOWN PROPERTY
	};


	// Struct TrainRuntime.TrainRailKeyframe
	// Size: 0x18 (0x18 - 0x0)
	struct FTrainRailKeyframe	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct TrainRuntime.TrainMovementData
	// Size: 0x10 (0x10 - 0x0)
	struct FTrainMovementData	
	{
	public:
		float Timestamp; // 0x0(0x4)
		float DistanceAlongRail; // 0x4(0x4)
		float TimeAlongRail; // 0x8(0x4)
		bool bReverseDirection; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};

}
