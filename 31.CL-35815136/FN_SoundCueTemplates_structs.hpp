#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SoundCueTemplates
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SoundCueTemplates.SoundCueCrossfadeInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundCueCrossfadeInfo	
	{
	public:
		FDistanceDatum DistanceInfo; // 0x0(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		USoundWave* Sound; // 0x18(0x8)
	};


	// Struct SoundCueTemplates.SoundCueTemplateQualitySettings
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundCueTemplateQualitySettings	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		int32_t MaxConcatenatedVariations; // 0x10(0x4)
		int32_t MaxRandomizedVariations; // 0x14(0x4)
		int32_t MaxMixVariations; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};

}
