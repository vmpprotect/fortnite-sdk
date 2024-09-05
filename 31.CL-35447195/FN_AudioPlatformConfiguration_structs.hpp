#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioPlatformConfiguration
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
	// Size: 0x10 (0x10 - 0x0)
	struct FPlatformRuntimeAudioCompressionOverrides	
	{
	public:
		bool bOverrideCompressionTimes; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float DurationThreshold; // 0x4(0x4)
		int32_t MaxNumRandomBranches; // 0x8(0x4)
		int32_t SoundCueQualityIndex; // 0xC(0x4)
	};

}
