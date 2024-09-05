#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioPlatformConfiguration
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
	// Size: 0x10 (0x10 - 0x0)
	struct FPlatformRuntimeAudioCompressionOverrides	
	{
	public:
		bool bOverrideCompressionTimes; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float DurationThreshold; // 0x4(0x4)
		int32_t MaxNumRandomBranches; // 0x8(0x4)
		int32_t SoundCueQualityIndex; // 0xC(0x4)
	};

}
