#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OptionsModal
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Career/OptionsModal/WBP_StatsOptionsModalButtons.WBP_StatsOptionsModalButtons_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x92 (0x34A - 0x2B8)
	class UWBP_StatsOptionsModalButtons_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UWidgetAnimation Unhover; // 0x2C0(0x8)
		UWidgetAnimation Unselected; // 0x2C8(0x8)
		UWidgetAnimation Hover; // 0x2D0(0x8)
		UWidgetAnimation Selected; // 0x2D8(0x8)
		UImage Image_SelectionIndicator; // 0x2E0(0x8)
		UWBP_UIKit_ButtonWithToggle_C WBP_UIKit_ButtonWithToggle; // 0x2E8(0x8)
		FMulticastInlineDelegate OnClicked; // 0x2F0(0x10)
		FText Button_Text; // 0x300(0x10)
		FText ButtonTextForDisplayRow; // 0x310(0x10)
		FString ID; // 0x320(0x10)
		int32_t Index; // 0x330(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate RequestNavigationToIndex; // 0x338(0x10)
		bool HoveredStyle; // 0x348(0x1)
		bool SelectedStyle; // 0x349(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/OptionsModal/WBP_StatsOptionsModalButtons.WBP_StatsOptionsModalButtons_C");
			return ret;
		}

		void GetDesiredFocusTarget(UWidget& Return Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D637B9F00
		void SetRadioSelectionHoverBorder(bool Hovered, bool Animate); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B9600
		void SetRadioSelectionVisualIndicator(bool Selected, bool Animate); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B9500
		UWidget NavigateToNext(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D637B9D00
		UWidget NavigateToPrevious(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D637B9C00
		bool IsSelected(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D637B9E00
		void SetFocusToButton(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B9800
		void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B9700
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D637B9A00
		void BndEvt__WBP_StatsOptionsModalButtons_WBP_UIKit_ButtonWithToggle_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(UCommonButtonBase Button, bool Selected); // Flags: BlueprintEvent 0x15D637BA300
		void BndEvt__WBP_StatsOptionsModalButtons_WBP_UIKit_ButtonWithToggle_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D637BA100
		void ExecuteUbergraph_WBP_StatsOptionsModalButtons(int32_t EntryPoint); // Flags: Final 0x15D637BA000
		void RequestNavigationToIndex__DelegateSignature(int32_t Index); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D637B9900
		void OnClicked__DelegateSignature(FString ID, int32_t Index); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D637B9B00
	};


	// Class /Career/OptionsModal/WBP_StatsOptionsModalSection.WBP_StatsOptionsModalSection_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x7C (0x334 - 0x2B8)
	class UWBP_StatsOptionsModalSection_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCommonTextBlock CommonTextBlock_SectionTitle; // 0x2C0(0x8)
		UVerticalBox VerticalBox_ButtonsContainer; // 0x2C8(0x8)
		TArray ButtonsData; // 0x2D0(0x10)
		FMulticastInlineDelegate OnButtonClicked; // 0x2E0(0x10)
		TArray ButtonsReference; // 0x2F0(0x10)
		FText Label; // 0x300(0x10)
		FString DefaultSelectedId; // 0x310(0x10)
		FMulticastInlineDelegate RequestNavigationFromTo; // 0x320(0x10)
		int32_t Index; // 0x330(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/OptionsModal/WBP_StatsOptionsModalSection.WBP_StatsOptionsModalSection_C");
			return ret;
		}

		void GetDesiredFocusTarget(UWidget& Return Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D637B8C00
		void SetFocusToLastButton(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637BC500
		void SetFocusToFirstButton(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637BC600
		void HandleNavigationRequestedToButtonIndex(int32_t ToButtonIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B8800
		UWBP_StatsOptionsModalButtons_C GetSelectedButtonReference(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D637B8B00
		void GetSelectedTextForDisplayRow(FText& Button Text); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D637B8900
		FString GetSelectedId(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D637B8A00
		void ResetDefaultSelected(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637BC700
		void CreateButtons(TArray& inButtonsData); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D637B8E00
		void HandleOnButtonClicked(FString ID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637B8700
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D637B8500
		void ExecuteUbergraph_WBP_StatsOptionsModalSection(int32_t EntryPoint); // Flags: Final 0x15D637B8D00
		void RequestNavigationFromTo__DelegateSignature(int32_t FromSectionIndex, int32_t ToSectionIndex); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D637BC800
		void OnButtonClicked__DelegateSignature(FString ID, int32_t Index); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D637B8600
	};


	// Class /Career/OptionsModal/WBP_StatsOptionsModal.WBP_StatsOptionsModal_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x488 - 0x3F8)
	class UWBP_StatsOptionsModal_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UWidgetAnimation Intro; // 0x400(0x8)
		UWBP_UIKit_Button_Regular_C ApplyButton2; // 0x408(0x8)
		UButton Button_BackgroundArea; // 0x410(0x8)
		UScrollBox ScrollBox; // 0x418(0x8)
		UWBP_StatsOptionsModalSection_C Section_Mode; // 0x420(0x8)
		UWBP_StatsOptionsModalSection_C Section_Ranked; // 0x428(0x8)
		UWBP_StatsOptionsModalSection_C Section_Season; // 0x430(0x8)
		UWBP_StatsOptionsModalSection_C Section_SubMode; // 0x438(0x8)
		UWBP_UIKit_Dialog_Base_C WBP_UIKit_Dialog_Base; // 0x440(0x8)
		FMulticastInlineDelegate ApplyOptions; // 0x448(0x10)
		TArray SeasonNames; // 0x458(0x10)
		TArray Sections; // 0x468(0x10)
		FString CurrentSeasonId; // 0x478(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/OptionsModal/WBP_StatsOptionsModal.WBP_StatsOptionsModal_C");
			return ret;
		}

		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D637BC100
		void HandleNavigationFromSectionToSection(int32_t FromSectionIndex, int32_t ToSectionIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637BBB00
		void InitializeSections(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D637BBA00
		void GetAllDisplayTextsForSelected(FText& GameMode, FText& Ranked, FText& SubMode, FText& SeasonName); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D637BBD00
		void GetAllSelected(FString& GameMode, FString& Ranked, FString& SubMode, FString& SeasonName); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D637BBC00
		void PopulateSeasons(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D637BB900
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D637BBF00
		void BndEvt__WBP_StatsOptionsModal_Button_BackgroundArea_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Flags: BlueprintEvent 0x15D637BC300
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D637BC000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D637BB800
		void BndEvt__WBP_StatsOptionsModal_WBP_UIKit_Button_Regular_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D637BC200
		void ExecuteUbergraph_WBP_StatsOptionsModal(int32_t EntryPoint); // Flags: Final 0x15D637BBE00
		void ApplyOptions__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D637BC400
	};

}
