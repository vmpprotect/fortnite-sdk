#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRDPlayerTrackerUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRDPlayerTrackerUI.CRDPlayerTrackerUIComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UCRDPlayerTrackerUIComponent : public UActorComponent	
	{
	public:
		UCRDPlayerTrackerWidget* SpawnedWidget; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPlayerTrackerUI.CRDPlayerTrackerUIComponent");
			return ret;
		}
	};


	// Class CRDPlayerTrackerUI.CRDPlayerTrackerWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x328 - 0x318)
	class UCRDPlayerTrackerWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x318(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRDPlayerTrackerUI.CRDPlayerTrackerWidget");
			return ret;
		}
	};

}
