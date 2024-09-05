#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_StatsOptionsDisplayUnit
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Career/WBP_StatsOptionsDisplayUnit.WBP_StatsOptionsDisplayUnit_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class UWBP_StatsOptionsDisplayUnit_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCommonTextBlock* CommonTextBlock; // 0x2B8(0x8)
		UWBP_UIKit_Backplate_C* WBP_UIKit_Backplate; // 0x2C0(0x8)
		FText In_Text; // 0x2C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_StatsOptionsDisplayUnit.WBP_StatsOptionsDisplayUnit_C");
			return ret;
		}

		void SetDisplayText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StatsOptionsDisplayUnit(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
