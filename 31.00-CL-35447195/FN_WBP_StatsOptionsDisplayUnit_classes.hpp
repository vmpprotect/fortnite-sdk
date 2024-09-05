#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_StatsOptionsDisplayUnit
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Career/WBP_StatsOptionsDisplayUnit.WBP_StatsOptionsDisplayUnit_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2E0 - 0x2B8)
	class UWBP_StatsOptionsDisplayUnit_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCommonTextBlock CommonTextBlock; // 0x2C0(0x8)
		UWBP_UIKit_Backplate_C WBP_UIKit_Backplate; // 0x2C8(0x8)
		FText In_Text; // 0x2D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_StatsOptionsDisplayUnit.WBP_StatsOptionsDisplayUnit_C");
			return ret;
		}

		void SetDisplayText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62E47200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62E47300
		void ExecuteUbergraph_WBP_StatsOptionsDisplayUnit(int32_t EntryPoint); // Flags: Final 0x15D62E47400
	};

}
