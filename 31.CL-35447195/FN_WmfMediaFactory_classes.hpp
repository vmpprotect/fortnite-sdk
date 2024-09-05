#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WmfMediaFactory
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WmfMediaFactory.WmfMediaSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UWmfMediaSettings : public UObject	
	{
	public:
		bool AllowNonStandardCodecs; // 0x28(0x1)
		bool LowLatency; // 0x29(0x1)
		bool NativeAudioOut; // 0x2A(0x1)
		bool HardwareAcceleratedVideoDecoding; // 0x2B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WmfMediaFactory.WmfMediaSettings");
			return ret;
		}
	};

}
