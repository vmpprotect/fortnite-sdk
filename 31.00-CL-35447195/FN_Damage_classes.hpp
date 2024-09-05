#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Damage
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /RockVehicle/Damage/GE_Rock_Explode_VehicleDamage.GE_Rock_Explode_VehicleDamage_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Rock_Explode_VehicleDamage_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Damage/GE_Rock_Explode_VehicleDamage.GE_Rock_Explode_VehicleDamage_C");
			return ret;
		}
	};


	// Class /RockVehicle/Damage/GE_Rock_Explode_PlayerDamage.GE_Rock_Explode_PlayerDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Rock_Explode_PlayerDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Damage/GE_Rock_Explode_PlayerDamage.GE_Rock_Explode_PlayerDamage_C");
			return ret;
		}
	};


	// Class /RockVehicle/Damage/GE_Rock_Explode_BuildingDamage.GE_Rock_Explode_BuildingDamage_C
	// Inherited from UGET_DirectDamage_LootOnDestroy_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Rock_Explode_BuildingDamage_C : public UGET_DirectDamage_LootOnDestroy_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Damage/GE_Rock_Explode_BuildingDamage.GE_Rock_Explode_BuildingDamage_C");
			return ret;
		}
	};

}
