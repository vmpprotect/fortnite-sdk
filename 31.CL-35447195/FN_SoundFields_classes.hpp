#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SoundFields
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SoundFields.AmbisonicsEncodingSettings
	// Inherited from USoundfieldEncodingSettingsBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase	
	{
	public:
		int32_t AmbisonicsOrder; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundFields.AmbisonicsEncodingSettings");
			return ret;
		}
	};

}
