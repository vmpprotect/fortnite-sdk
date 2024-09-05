#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NitroUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NitroUI.NitroPlayerInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x338 - 0x318)
	class UNitroPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x318(0x10) UNKNOWN PROPERTY
		FGameplayTag NitroStateTag; // 0x328(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x32C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroUI.NitroPlayerInfoWidget");
			return ret;
		}

		void UpdateNitroStatus(bool bIsNitroActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerStateSet(bool bIsDead); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerDeadStateChanged(AFortPlayerStateAthena* PlayerState, bool bIsDead); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class NitroUI.NitroVehicleFuelGaugeWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x350 - 0x2B0)
	class UNitroVehicleFuelGaugeWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x88]; // 0x2B0(0x88) UNKNOWN PROPERTY
		FGameplayTag NitroActiveTag; // 0x338(0x4)
		FGameplayTag NitroEffectTag; // 0x33C(0x4)
		UFortVehicleFuelGauge* TargetFuelGauge; // 0x340(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x348(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroUI.NitroVehicleFuelGaugeWidget");
			return ret;
		}

		void OnTankFull(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751484870(relative to base address)
		void OnRefuelingCosmeticsStarted(bool bIsTankFull); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514847F0(relative to base address)
		void OnRefuelingCosmeticsFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514847DC(relative to base address)
		void FuelValueChangedHandler(float NewFuelValue, bool bIsFuelLow); // Flags: Final|Native|Private, Memory Exec: 0x7FF751484714(relative to base address)
		void BP_OnNitroStateChanged(bool bNitroActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFuelValueChanged(float NewFuelValue, bool bIsFuelLow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
