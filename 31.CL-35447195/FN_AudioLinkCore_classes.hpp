#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioLinkCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioLinkCore.AudioLinkSettingsAbstract
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAudioLinkSettingsAbstract : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioLinkCore.AudioLinkSettingsAbstract");
			return ret;
		}
	};

}
