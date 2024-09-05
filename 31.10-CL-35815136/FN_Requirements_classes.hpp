#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Requirements
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Lager/Requirements/BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C
	// Inherited from UFortControllerRequirement -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C : public UFortControllerRequirement	
	{
	public:
		int32_t RequiredBudget; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle EventRowHandle; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Lager/Requirements/BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C");
			return ret;
		}

		bool IsRequirementMetInternal(FControllerRequirementTestContext& RequestContext); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
