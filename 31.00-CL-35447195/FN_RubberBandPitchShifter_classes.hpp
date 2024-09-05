#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RubberBandPitchShifter
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class RubberBandPitchShifter.RubberBandPitchShifterConfig
	// Inherited from UStretcherAndPitchShifterConfig -> UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class URubberBandPitchShifterConfig : public UStretcherAndPitchShifterConfig	
	{
	public:
		bool bAllowPoolGrowthInEditor; // 0x28(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FPlatformStretcherCounts DefaultStretcherCounts; // 0x2C(0x18)
		FPlatformStretcherCounts SwitchStretcherCounts; // 0x44(0x18)
		FPlatformStretcherCounts PS4StretcherCounts; // 0x5C(0x18)
		FPlatformStretcherCounts PS5StretcherCounts; // 0x74(0x18)
		FPlatformStretcherCounts XboxOneStretcherCounts; // 0x8C(0x18)
		FPlatformStretcherCounts XSXStretcherCounts; // 0xA4(0x18)
		FPlatformStretcherCounts AndroidStretcherCounts; // 0xBC(0x18)
		FPlatformStretcherCounts IOSStretcherCounts; // 0xD4(0x18)
		unsigned char UnknownData03_7[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RubberBandPitchShifter.RubberBandPitchShifterConfig");
			return ret;
		}
	};

}
