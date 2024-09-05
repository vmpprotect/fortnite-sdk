#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AvfMediaFactory
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AvfMediaFactory.AvfMediaSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAvfMediaSettings : public UObject	
	{
	public:
		bool NativeAudioOut; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AvfMediaFactory.AvfMediaSettings");
			return ret;
		}
	};

}
