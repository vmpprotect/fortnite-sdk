#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MusterConsumablesUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x330 - 0x320)
	class UEnergyDrinkStaminaBarOverlayWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x320(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget");
			return ret;
		}

		void OnPlayerStateSet(AFortPlayerStateAthena InPlayerState); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0BD98
		void OnPlayerDeadStateChanged(AFortPlayerStateAthena PlayerState, bool bIsDead); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0BCB8
	};

}
