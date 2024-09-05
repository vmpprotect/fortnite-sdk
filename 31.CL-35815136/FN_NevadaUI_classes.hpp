#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NevadaUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NevadaUI.FortNevadaVehicleReticle
	// Inherited from UFortAthenaVehicleDashboardWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x628 - 0x580)
	class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget	
	{
	public:
		UClass* NevadaTargetIndicatorClass; // 0x580(0x8)
		UNevadaTargetIndicator* TargetIndicator; // 0x588(0x8)
		AFortNevadaVehicle* OwningNevadaVehicle; // 0x590(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x598(0x8) UNKNOWN PROPERTY
		FUserWidgetPool IndicatorPool; // 0x5A0(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaUI.FortNevadaVehicleReticle");
			return ret;
		}

		void OnVehicleStateChanged(ENevadaFlightStates VehicleState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamEnabledChanged(bool bEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamDetached(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamDeactivated(float Cooldown); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamChargeStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamAttached(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnergyCanonFired(float Cooldown); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnergyCannonEnabledChanged(bool bEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBatteryChanged(float BatteryLevel); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class NevadaUI.NevadaTargetIndicator
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3C0 - 0x3C0)
	class UNevadaTargetIndicator : public UFortActorIndicatorWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaUI.NevadaTargetIndicator");
			return ret;
		}

		void OnTractorBeamAttached(bool bAttached); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamActivated(bool bActivated); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
