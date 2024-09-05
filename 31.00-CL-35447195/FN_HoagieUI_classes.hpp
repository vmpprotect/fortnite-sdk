#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HoagieUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HoagieUI.FortHoagieVehicleReticle
	// Inherited from UFortAthenaVehicleDashboardWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x590 - 0x588)
	class UFortHoagieVehicleReticle : public UFortAthenaVehicleDashboardWidget	
	{
	public:
		AFortHoagieVehicle OwningHoagieVehicle; // 0x588(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoagieUI.FortHoagieVehicleReticle");
			return ret;
		}

		void OnSetupComplete(bool bVehicleUsesFuelSystem); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCAA98
	};

}
