#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NevadaUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NevadaUI.FortNevadaVehicleReticle
	// Inherited from UFortAthenaVehicleDashboardWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x630 - 0x588)
	class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget	
	{
	public:
		UClass NevadaTargetIndicatorClass; // 0x588(0x8)
		UNevadaTargetIndicator TargetIndicator; // 0x590(0x8)
		AFortNevadaVehicle OwningNevadaVehicle; // 0x598(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x5A0(0x8) UNKNOWN PROPERTY
		FUserWidgetPool IndicatorPool; // 0x5A8(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaUI.FortNevadaVehicleReticle");
			return ret;
		}

		void OnVehicleStateChanged(ENevadaFlightStates VehicleState); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9A58
		void OnTractorBeamEnabledChanged(bool bEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9978
		void OnTractorBeamDetached(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9898
		void OnTractorBeamDeactivated(float Cooldown); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD97B8
		void OnTractorBeamChargeStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD96D8
		void OnTractorBeamAttached(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD95F8
		void OnTractorBeamActivated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9518
		void OnEnergyCanonFired(float Cooldown); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9438
		void OnEnergyCannonEnabledChanged(bool bEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9358
		void OnBatteryChanged(float BatteryLevel); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9278
	};


	// Class NevadaUI.NevadaTargetIndicator
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3C8 - 0x3C8)
	class UNevadaTargetIndicator : public UFortActorIndicatorWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaUI.NevadaTargetIndicator");
			return ret;
		}

		void OnTractorBeamAttached(bool bAttached); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9C18
		void OnTractorBeamActivated(bool bActivated); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD9B38
	};

}
