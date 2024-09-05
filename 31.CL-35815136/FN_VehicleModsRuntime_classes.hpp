#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VehicleModsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VehicleModsRuntime.FortVehicleModWeaponMachineGun
	// Inherited from AFortWeaponRangedForVehicleMod -> AFortWeaponRangedForVehicle -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1EB0 - 0x1EB0)
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
	// Size: 0x0 (0x1EB0 - 0x1EB0)
	class AFortVehicleModWeaponMortar : public AFortWeaponRangedForVehicleMod	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleModsRuntime.FortVehicleModWeaponMortar");
			return ret;
		}
	};

}
