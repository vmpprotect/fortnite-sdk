#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_StatsOptionsDisplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Career/WBP_StatsOptionsDisplay.WBP_StatsOptionsDisplay_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x300 - 0x2B0)
	class UWBP_StatsOptionsDisplay_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UButton* Button; // 0x2B8(0x8)
		UImage* Seperator; // 0x2C0(0x8)
		UWBP_StatsOptionsDisplayUnit_C* WBP_StatsOptionsDisplayUnit; // 0x2C8(0x8)
		UWBP_StatsOptionsDisplayUnit_C* WBP_StatsOptionsDisplayUnit; // 0x2D0(0x8)
		UWBP_StatsOptionsDisplayUnit_C* WBP_StatsOptionsDisplayUnit; // 0x2D8(0x8)
		UWBP_StatsOptionsDisplayUnit_C* WBP_StatsOptionsDisplayUnit; // 0x2E0(0x8)
		UWBP_UIKit_Button_Quiet_C* WBP_UIKit_Button_Quiet; // 0x2E8(0x8)
		FMulticastInlineDelegate OnRequestedOptions; // 0x2F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_StatsOptionsDisplay.WBP_StatsOptionsDisplay_C");
			return ret;
		}

		void SetAllDisplayTexts(FText GameMode, FText Ranked, FText SubMode, FText Season); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StatsOptionsDisplay_WBP_UIKit_Button_Quiet_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StatsOptionsDisplay_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StatsOptionsDisplay(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRequestedOptions__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
