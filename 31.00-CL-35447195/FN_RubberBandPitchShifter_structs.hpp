#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RubberBandPitchShifter
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct RubberBandPitchShifter.PlatformStretcherCounts
	// Size: 0x18 (0x18 - 0x0)
	struct FPlatformStretcherCounts	
	{
	public:
		uint32_t NumProStretchers; // 0x0(0x4)
		uint32_t NumEffStretchers; // 0x4(0x4)
		uint32_t NumEffWithSpectralStretchers; // 0x8(0x4)
		uint32_t NumMobileStretchers; // 0xC(0x4)
		uint32_t NumMobileWithSpectralStretchers; // 0x10(0x4)
		bool bForceMonoProcessing; // 0x14(0x1)
		bool bAllowPoolGrowth; // 0x15(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
	};

}
