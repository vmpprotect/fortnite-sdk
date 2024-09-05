#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotdOverride
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MotdOverride.MotdWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x410 - 0x3F8)
	class UMotdWidgetBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotdOverride.MotdWidgetBase");
			return ret;
		}
	};

}
