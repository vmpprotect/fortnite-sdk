#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TimeManagement
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct TimeManagement.TimedDataChannelSampleTime
	// Size: 0x18 (0x18 - 0x0)
	struct FTimedDataChannelSampleTime	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct TimeManagement.TimedDataInputEvaluationData
	// Size: 0x8 (0x8 - 0x0)
	struct FTimedDataInputEvaluationData	
	{
	public:
		float DistanceToNewestSampleSeconds; // 0x0(0x4)
		float DistanceToOldestSampleSeconds; // 0x4(0x4)
	};

}
