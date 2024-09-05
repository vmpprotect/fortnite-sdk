#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SoundFields
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SoundFields.AmbisonicsEncodingSettings
	// Inherited from USoundfieldEncodingSettingsBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase	
	{
	public:
		int32_t AmbisonicsOrder; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundFields.AmbisonicsEncodingSettings");
			return ret;
		}
	};

}
