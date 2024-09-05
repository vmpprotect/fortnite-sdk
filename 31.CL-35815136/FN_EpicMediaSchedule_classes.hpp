#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaSchedule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicMediaSchedule.EpicMediaSchedule
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UEpicMediaSchedule : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaSchedule.EpicMediaSchedule");
			return ret;
		}
	};

}
