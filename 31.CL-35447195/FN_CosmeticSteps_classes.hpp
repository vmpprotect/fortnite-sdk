#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CosmeticSteps
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /BeanstalkCosmetics/CosmeticSteps/BP_FortCosmeticStep_ApplyBeanCD.BP_FortCosmeticStep_ApplyBeanCD_C
	// Inherited from UFortCosmeticStep_ApplyBeanCD -> UFortCosmeticStep -> UFortCosmeticFlowNode -> UObject
	// Size: 0x0 (0xC8 - 0xC8)
	class UBP_FortCosmeticStep_ApplyBeanCD_C : public UFortCosmeticStep_ApplyBeanCD	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/BeanstalkCosmetics/CosmeticSteps/BP_FortCosmeticStep_ApplyBeanCD.BP_FortCosmeticStep_ApplyBeanCD_C");
			return ret;
		}

		void BP_UpdateCosmeticMaterials(UBeanCosmeticItemDefinitionBase BeanCD, UMaterialInstanceDynamic MaterialBody, UMaterialInstanceDynamic MaterialCostume, UMaterialInstanceDynamic MaterialHead); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|Const 0x15D5ACE7A00
	};

}
