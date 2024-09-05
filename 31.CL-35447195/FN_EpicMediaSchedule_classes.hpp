#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaSchedule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EpicMediaSchedule.EpicMediaSchedule
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UEpicMediaSchedule : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaSchedule.EpicMediaSchedule");
			return ret;
		}
	};

}
