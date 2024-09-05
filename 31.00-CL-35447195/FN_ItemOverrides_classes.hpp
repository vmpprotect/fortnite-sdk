#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ItemOverrides
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /FigureCosmeticsFrontend/ItemOverrides/BP_FigureCosmeticsAccountItemDefinitionOverrideManager_Frontend.BP_FigureCosmeticsAccountItemDefinitionOverrideManager_Frontend_C
	// Inherited from UBP_FigureCosmeticsAccountItemDefinitionOverrideManager_C -> UJunoAccountItemDefinitionOverrideManager -> UObject
	// Size: 0x0 (0x230 - 0x230)
	class UBP_FigureCosmeticsAccountItemDefinitionOverrideManager_Frontend_C : public UBP_FigureCosmeticsAccountItemDefinitionOverrideManager_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCosmeticsFrontend/ItemOverrides/BP_FigureCosmeticsAccountItemDefinitionOverrideManager_Frontend.BP_FigureCosmeticsAccountItemDefinitionOverrideManager_Frontend_C");
			return ret;
		}
	};


	// Class /FigureCosmeticsFrontend/ItemOverrides/BP_FigureCosmetics_PlayerPawn_Frontend.BP_FigureCosmetics_PlayerPawn_Frontend_C
	// Inherited from APlayerPawn_Athena_C -> APlayerPawn_Athena_Generic_C -> APlayerPawn_Athena_Generic_Parent_C -> AFortPlayerPawnAthena -> AFortPlayerPawn -> AFortPawn -> AFGF_Character -> ACharacter -> APawn -> AActor -> UObject
	// Size: 0x0 (0x697C - 0x697C)
	class ABP_FigureCosmetics_PlayerPawn_Frontend_C : public APlayerPawn_Athena_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/FigureCosmeticsFrontend/ItemOverrides/BP_FigureCosmetics_PlayerPawn_Frontend.BP_FigureCosmetics_PlayerPawn_Frontend_C");
			return ret;
		}
	};

}
