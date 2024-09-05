#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UITesting
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/UITesting/StreamedVideo/InScreenWidget.InScreenWidget_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UInScreenWidget_C : public UUserWidget	
	{
	public:
		UImage InScreenMedia; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/UITesting/StreamedVideo/InScreenWidget.InScreenWidget_C");
			return ret;
		}
	};

}
