#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotdOverride
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MotdOverride.MotdWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x408 - 0x3F0)
	class UMotdWidgetBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotdOverride.MotdWidgetBase");
			return ret;
		}
	};

}
