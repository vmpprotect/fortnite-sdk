#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PointLight
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct PointLight.PointLightRhythmParameters
	// Size: 0x38 (0x38 - 0x0)
	struct FPointLightRhythmParameters	
	{
	public:
		FLinearColor LightColor; // 0x0(0x10)
		ULightComponent ActiveLight; // 0x10(0x8)
		UStaticMeshComponent StaticMeshComponent; // 0x18(0x8)
		int32_t ColorBands; // 0x20(0x4)
		float RhythmFrequencyValue; // 0x24(0x4)
		float WindAmplitudeSpotLight; // 0x28(0x4)
		float FlashFactor; // 0x2C(0x4)
		float SizeBasedIntensity; // 0x30(0x4)
		EPointLightDeviceLightType LightType; // 0x34(0x1)
		EPointLightDeviceModes RhythmMode; // 0x35(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
	};

}
