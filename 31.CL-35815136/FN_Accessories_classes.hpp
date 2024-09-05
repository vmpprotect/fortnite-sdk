#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Accessories
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /BRCosmetics/Accessories/FORT_Backpacks/Backpack_F_MED_Bistro_Astronaut/Scripts/VariantScript_Backpack_BistroAstronaut_Color.VariantScript_Backpack_BistroAstronaut_Color_C
	// Inherited from UFortLoadoutTagDrivenVariantScript -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVariantScript_Backpack_BistroAstronaut_Color_C : public UFortLoadoutTagDrivenVariantScript	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BRCosmetics/Accessories/FORT_Backpacks/Backpack_F_MED_Bistro_Astronaut/Scripts/VariantScript_Backpack_BistroAstronaut_Color.VariantScript_Backpack_BistroAstronaut_Color_C");
			return ret;
		}

		FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /BRCosmetics/Accessories/FORT_Backpacks/Backpack_F_MED_Bistro_Astronaut/Scripts/VariantScript_Backpack_BistroAstronaut_Style.VariantScript_Backpack_BistroAstronaut_Style_C
	// Inherited from UFortLoadoutTagDrivenVariantScript -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVariantScript_Backpack_BistroAstronaut_Style_C : public UFortLoadoutTagDrivenVariantScript	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BRCosmetics/Accessories/FORT_Backpacks/Backpack_F_MED_Bistro_Astronaut/Scripts/VariantScript_Backpack_BistroAstronaut_Style.VariantScript_Backpack_BistroAstronaut_Style_C");
			return ret;
		}

		FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
