#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotorboatUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball
	// Inherited from UFortAthenaVehicleDashboardWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x588 - 0x588)
	class UFortAthenaVehicleDashboardWidget_Meatball : public UFortAthenaVehicleDashboardWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball");
			return ret;
		}

		AFortMeatballVehicle GetMeatballVehicle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BCB978
	};

}
