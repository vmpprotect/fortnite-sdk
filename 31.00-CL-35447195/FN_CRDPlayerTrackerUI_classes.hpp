#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRDPlayerTrackerUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRDPlayerTrackerUI.CRDPlayerTrackerUIComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UCRDPlayerTrackerUIComponent : public UActorComponent	
	{
	public:
		UCRDPlayerTrackerWidget SpawnedWidget; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPlayerTrackerUI.CRDPlayerTrackerUIComponent");
			return ret;
		}
	};


	// Class CRDPlayerTrackerUI.CRDPlayerTrackerWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x330 - 0x320)
	class UCRDPlayerTrackerWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x320(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPlayerTrackerUI.CRDPlayerTrackerWidget");
			return ret;
		}
	};

}
