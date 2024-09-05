#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LowMemoryFallbackRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LowMemoryFallbackRuntime.LowMemoryFallbackThreshold
	// Size: 0x28 (0x28 - 0x0)
	struct FLowMemoryFallbackThreshold	
	{
	public:
		FFloatRange EnterRangeMB; // 0x0(0x10)
		FFloatRange ExitRangeMB; // 0x10(0x10)
		UClass StrategyClass; // 0x20(0x8)
	};


	// Struct LowMemoryFallbackRuntime.LowMemoryFallbackThresholdState
	// Size: 0x10 (0x10 - 0x0)
	struct FLowMemoryFallbackThresholdState	
	{
	public:
		ULowMemoryFallbackStrategy Strategy; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};

}
