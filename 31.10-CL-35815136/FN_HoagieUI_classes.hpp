#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HoagieUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HoagieUI.FortHoagieVehicleReticle
	// Inherited from UFortAthenaVehicleDashboardWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x588 - 0x580)
	class UFortHoagieVehicleReticle : public UFortAthenaVehicleDashboardWidget	
	{
	public:
		AFortHoagieVehicle* OwningHoagieVehicle; // 0x580(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoagieUI.FortHoagieVehicleReticle");
			return ret;
		}

		void OnSetupComplete(bool bVehicleUsesFuelSystem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
