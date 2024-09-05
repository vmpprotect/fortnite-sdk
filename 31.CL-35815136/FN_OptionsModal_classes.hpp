#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OptionsModal
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Career/OptionsModal/WBP_StatsOptionsModalButtons.WBP_StatsOptionsModalButtons_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x92 (0x342 - 0x2B0)
	class UWBP_StatsOptionsModalButtons_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWidgetAnimation* Unhover; // 0x2B8(0x8)
		UWidgetAnimation* Unselected; // 0x2C0(0x8)
		UWidgetAnimation* Hover; // 0x2C8(0x8)
		UWidgetAnimation* Selected; // 0x2D0(0x8)
		UImage* Image_SelectionIndicator; // 0x2D8(0x8)
		UWBP_UIKit_ButtonWithToggle_C* WBP_UIKit_ButtonWithToggle; // 0x2E0(0x8)
		FMulticastInlineDelegate OnClicked; // 0x2E8(0x10)
		FText Button_Text; // 0x2F8(0x10)
		FText ButtonTextForDisplayRow; // 0x308(0x10)
		FString ID; // 0x318(0x10)
		int32_t Index; // 0x328(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate RequestNavigationToIndex; // 0x330(0x10)
		bool HoveredStyle; // 0x340(0x1)
		bool SelectedStyle; // 0x341(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/OptionsModal/WBP_StatsOptionsModalButtons.WBP_StatsOptionsModalButtons_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDesiredFocusTarget(UWidget* Return Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRadioSelectionHoverBorder(bool Hovered, bool Animate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRadioSelectionVisualIndicator(bool Selected, bool Animate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavigateToNext(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavigateToPrevious(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSelected(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFocusToButton(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StatsOptionsModalButtons_WBP_UIKit_ButtonWithToggle_K2Node_ComponentBoundEvent_0_CommonSelectedStateChangedBase__DelegateSignature(UCommonButtonBase* Button, bool Selected); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StatsOptionsModalButtons_WBP_UIKit_ButtonWithToggle_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StatsOptionsModalButtons(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestNavigationToIndex__DelegateSignature(int32_t Index); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClicked__DelegateSignature(FString ID, int32_t Index); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Career/OptionsModal/WBP_StatsOptionsModalSection.WBP_StatsOptionsModalSection_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x7C (0x32C - 0x2B0)
	class UWBP_StatsOptionsModalSection_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCommonTextBlock* CommonTextBlock_SectionTitle; // 0x2B8(0x8)
		UVerticalBox* VerticalBox_ButtonsContainer; // 0x2C0(0x8)
		TArray<FBPS_StatsOptionsModalButtonData> ButtonsData; // 0x2C8(0x10)
		FMulticastInlineDelegate OnButtonClicked; // 0x2D8(0x10)
		TArray<UWBP_StatsOptionsModalButtons_C*> ButtonsReference; // 0x2E8(0x10)
		FText Label; // 0x2F8(0x10)
		FString DefaultSelectedId; // 0x308(0x10)
		FMulticastInlineDelegate RequestNavigationFromTo; // 0x318(0x10)
		int32_t Index; // 0x328(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/OptionsModal/WBP_StatsOptionsModalSection.WBP_StatsOptionsModalSection_C");
			return ret;
		}

		void GetDesiredFocusTarget(UWidget* Return Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFocusToLastButton(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFocusToFirstButton(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleNavigationRequestedToButtonIndex(int32_t ToButtonIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWBP_StatsOptionsModalButtons_C GetSelectedButtonReference(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSelectedTextForDisplayRow(FText& Button Text); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FString GetSelectedId(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetDefaultSelected(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateButtons(TArray<FBPS_StatsOptionsModalButtonData>& inButtonsData); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnButtonClicked(FString ID, int32_t Index); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StatsOptionsModalSection(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestNavigationFromTo__DelegateSignature(int32_t FromSectionIndex, int32_t ToSectionIndex); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonClicked__DelegateSignature(FString ID, int32_t Index); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Career/OptionsModal/WBP_StatsOptionsModal.WBP_StatsOptionsModal_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x480 - 0x3F0)
	class UWBP_StatsOptionsModal_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UWidgetAnimation* Intro; // 0x3F8(0x8)
		UWBP_UIKit_Button_Regular_C* ApplyButton2; // 0x400(0x8)
		UButton* Button_BackgroundArea; // 0x408(0x8)
		UScrollBox* ScrollBox; // 0x410(0x8)
		UWBP_StatsOptionsModalSection_C* Section_Mode; // 0x418(0x8)
		UWBP_StatsOptionsModalSection_C* Section_Ranked; // 0x420(0x8)
		UWBP_StatsOptionsModalSection_C* Section_Season; // 0x428(0x8)
		UWBP_StatsOptionsModalSection_C* Section_SubMode; // 0x430(0x8)
		UWBP_UIKit_Dialog_Base_C* WBP_UIKit_Dialog_Base; // 0x438(0x8)
		FMulticastInlineDelegate ApplyOptions; // 0x440(0x10)
		TArray<FString> SeasonNames; // 0x450(0x10)
		TArray<UWBP_StatsOptionsModalSection_C*> Sections; // 0x460(0x10)
		FString CurrentSeasonId; // 0x470(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/OptionsModal/WBP_StatsOptionsModal.WBP_StatsOptionsModal_C");
			return ret;
		}

		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleNavigationFromSectionToSection(int32_t FromSectionIndex, int32_t ToSectionIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeSections(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetAllDisplayTextsForSelected(FText& GameMode, FText& Ranked, FText& SubMode, FText& SeasonName); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetAllSelected(FString& GameMode, FString& Ranked, FString& SubMode, FString& SeasonName); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateSeasons(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StatsOptionsModal_Button_BackgroundArea_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_StatsOptionsModal_WBP_UIKit_Button_Regular_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StatsOptionsModal(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyOptions__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
