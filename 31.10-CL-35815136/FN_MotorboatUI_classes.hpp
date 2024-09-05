#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotorboatUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball
	// Inherited from UFortAthenaVehicleDashboardWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x580 - 0x580)
	class UFortAthenaVehicleDashboardWidget_Meatball : public UFortAthenaVehicleDashboardWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball");
			return ret;
		}

		AFortMeatballVehicle GetMeatballVehicle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75063AF90(relative to base address)
	};

}
