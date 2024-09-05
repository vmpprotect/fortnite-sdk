#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Requirements
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Lager/Requirements/BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C
	// Inherited from UFortControllerRequirement -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C : public UFortControllerRequirement	
	{
	public:
		int32_t RequiredBudget; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle EventRowHandle; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Lager/Requirements/BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C");
			return ret;
		}

		bool IsRequirementMetInternal(FControllerRequirementTestContext& RequestContext); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D591EA600
	};

}
