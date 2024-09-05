#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserArrowButton
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserArrowButton.ActivityBrowserArrowButton_C
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x1438 - 0x13E0)
	class UActivityBrowserArrowButton_C : public UCommonButtonLegacy	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x13E0(0x8)
		UWidgetAnimation RowInactive; // 0x13E8(0x8)
		UWidgetAnimation RowActive; // 0x13F0(0x8)
		UWidgetAnimation Hover; // 0x13F8(0x8)
		UImage Arrow; // 0x1400(0x8)
		UGridPanel GP_ButtonWrapper; // 0x1408(0x8)
		USpacer S_ButtonSize; // 0x1410(0x8)
		UWBP_UIKit_Backplate_C WBP_UIKit_Backplate; // 0x1418(0x8)
		UWBP_UIKit_Block_Outline_C WBP_UIKit_Block_Outline; // 0x1420(0x8)
		bool Flip; // 0x1428(0x1)
		bool InputActionOnSide; // 0x1429(0x1)
		bool IsActive; // 0x142A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x142B(0x5) UNKNOWN PROPERTY
		double ActiveRatio; // 0x1430(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserArrowButton.ActivityBrowserArrowButton_C");
			return ret;
		}

		void SetActiveRatio(double NewParam); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4B1A4100
		void HandleInputMethodChanged(ECommonInputType bNewInputType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4B1A9F00
		void GetActiveAnimation(UWidgetAnimation& ActiveAnimation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D4B1A6800
		void UpdateArrowColor(FLinearColor Color, FLinearColor HoverColor); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4B1A0200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D4B1A6000
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D4B1AA200
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D4B1AAD00
		void OnRowActiveChanged(bool IsActive); // Flags: BlueprintCallable|BlueprintEvent 0x15D4B1AAB00
		void OnRowReset(bool IsActive); // Flags: BlueprintCallable|BlueprintEvent 0x15D4B1A6B00
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D4B1A9100
		void ExecuteUbergraph_ActivityBrowserArrowButton(int32_t EntryPoint); // Flags: Final 0x15D4B1AA000
	};

}
