#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NitroUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NitroUI.NitroPlayerInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x340 - 0x320)
	class UNitroPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x320(0x10) UNKNOWN PROPERTY
		FGameplayTag NitroStateTag; // 0x330(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x334(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroUI.NitroPlayerInfoWidget");
			return ret;
		}

		void UpdateNitroStatus(bool bIsNitroActive); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0C038
		void OnPlayerStateSet(bool bIsDead); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0BF58
		void OnPlayerDeadStateChanged(AFortPlayerStateAthena PlayerState, bool bIsDead); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0BE78
	};


	// Class NitroUI.NitroVehicleFuelGaugeWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x358 - 0x2B8)
	class UNitroVehicleFuelGaugeWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x88]; // 0x2B8(0x88) UNKNOWN PROPERTY
		FGameplayTag NitroActiveTag; // 0x340(0x4)
		FGameplayTag NitroEffectTag; // 0x344(0x4)
		UFortVehicleFuelGauge TargetFuelGauge; // 0x348(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x350(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroUI.NitroVehicleFuelGaugeWidget");
			return ret;
		}

		void OnTankFull(); // Flags: Final|Native|Private 0x7FF414D0C578
		void OnRefuelingCosmeticsStarted(bool bIsTankFull); // Flags: Final|Native|Protected 0x7FF414D0C498
		void OnRefuelingCosmeticsFinished(); // Flags: Final|Native|Protected 0x7FF414D0C3B8
		void FuelValueChangedHandler(float NewFuelValue, bool bIsFuelLow); // Flags: Final|Native|Private 0x7FF414D0C2D8
		void BP_OnNitroStateChanged(bool bNitroActive); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0C1F8
		void BP_OnFuelValueChanged(float NewFuelValue, bool bIsFuelLow); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0C118
	};

}
