#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehicleModsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VehicleModsRuntime.FortVehicleModWeaponMachineGun
	// Inherited from AFortWeaponRangedForVehicleMod -> AFortWeaponRangedForVehicle -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1E90 - 0x1E90)
	class AFortVehicleModWeaponMachineGun : public AFortWeaponRangedForVehicleMod	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleModsRuntime.FortVehicleModWeaponMachineGun");
			return ret;
		}
	};


	// Class VehicleModsRuntime.FortVehicleModWeaponMortar
	// Inherited from AFortWeaponRangedForVehicleMod -> AFortWeaponRangedForVehicle -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1E90 - 0x1E90)
	class AFortVehicleModWeaponMortar : public AFortWeaponRangedForVehicleMod	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleModsRuntime.FortVehicleModWeaponMortar");
			return ret;
		}
	};

}
