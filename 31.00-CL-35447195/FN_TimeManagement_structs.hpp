#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TimeManagement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct TimeManagement.TimedDataChannelSampleTime
	// Size: 0x18 (0x18 - 0x0)
	struct FTimedDataChannelSampleTime	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
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
