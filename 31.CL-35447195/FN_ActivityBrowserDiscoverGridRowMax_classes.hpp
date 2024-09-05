#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserDiscoverGridRowMax
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserDiscoverGridRowMax.ActivityBrowserDiscoverGridRowMax_C
	// Inherited from UFortDiscoverBrowserGridRow -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD9 (0x4B9 - 0x3E0)
	class UActivityBrowserDiscoverGridRowMax_C : public UFortDiscoverBrowserGridRow	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3E0(0x8)
		UFortDiscoverProviderViewModel FortDiscoverProviderViewModel; // 0x3E8(0x8)
		UWidgetAnimation OnLoadingMore; // 0x3F0(0x8)
		UWidgetAnimation OnPeek; // 0x3F8(0x8)
		UWidgetAnimation OnRowMoveDownIntoView; // 0x400(0x8)
		UWidgetAnimation OnRowMoveUpOutOfViewAnim; // 0x408(0x8)
		UWidgetAnimation OnRowActiveInactiveAnim; // 0x410(0x8)
		UCommonTextBlock debugArrayLength; // 0x418(0x8)
		UCommonTextBlock debugRowsText; // 0x420(0x8)
		UCommonTextBlock debugRowsText; // 0x428(0x8)
		UCommonTextBlock debugRowsText; // 0x430(0x8)
		UGridPanel GridRoot; // 0x438(0x8)
		UCommonBorder InactiveDarken; // 0x440(0x8)
		UImage InactiveOverlayDim; // 0x448(0x8)
		UImage magentaBacker; // 0x450(0x8)
		UWBP_LoadingMorePages_C WBP_LoadingMorePages; // 0x458(0x8)
		UWBP_Row_PanelList_C WBP_Row_PanelList; // 0x460(0x8)
		FName FontHoverAnimateParam; // 0x468(0x4)
		FName FontPressedAnimateParam; // 0x46C(0x4)
		bool IsWaitingForInactiveAnim; // 0x470(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x471(0x7) UNKNOWN PROPERTY
		double LoadingMoreDisplayDelay; // 0x478(0x8)
		bool IsLoadingMoreVisible; // 0x480(0x1)
		bool IsLoadingMoreQueryActive; // 0x481(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x482(0x6) UNKNOWN PROPERTY
		FTimerHandle LoadingMoreDelayTimer; // 0x488(0x8)
		FMulticastInlineDelegate OnRowBroadcastClickToDiscover; // 0x490(0x10)
		double EntriesSpacing; // 0x4A0(0x8)
		FMulticastInlineDelegate OnUpperBoundaryHit; // 0x4A8(0x10)
		bool bAllowNonFullRows; // 0x4B8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserDiscoverGridRowMax.ActivityBrowserDiscoverGridRowMax_C");
			return ret;
		}

		void GetItemIndexInRowAndColumn(int32_t RowIndex, int32_t ColumnIndex, int32_t& ItemIndex); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6088E00
		void GetNumRowsForItems(bool AllowNonFullRows, int32_t& NumRows); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6083D00
		void ValidateMaxVisibleRows(int32_t& ValidatedMaxVisibleRows); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5DC7B300
		int32_t GetNumDisplayedSubRows(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6148F00
		void UpdateItemSelectorInPanelList(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6083F00
		void SelectItem(int32_t IndexToSelect); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6141300
		UWidget CustomNavigation(EUINavigation Navigation); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6082700
		void DEBUGSETARRAYLENGTHTEXT(TArray& Items); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6084500
		void DEBUGSETROWSTEXT(int32_t MaxRows); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6149100
		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6083200
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6088900
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6083300
		void SnapToEndOfAnimation(UWidgetAnimation InAnimation, TEnumAsByte PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608CB00
		void Finished_4EF546A644BD3334563488A6C3819225(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6082A00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6084400
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x15DB608CA00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608C900
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608D100
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent 0x15DB614A500
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6140C00
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent 0x15DB6149200
		void OnQueryStatusChanged(bool bIsActive); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6085C00
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x15DB608F900
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent 0x15DB6140600
		void OnTileFocusGained(int32_t ItemFocused); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6088700
		void SetFocusOffset(int32_t FocusOffset, bool bSelectFromBelow); // Flags: Event|Public|BlueprintEvent 0x15DB6149C00
		void OnItemHovered(UObject Item, bool bIsHovered); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6148B00
		void UpdateAnalyticsStates(bool bStopImpressions); // Flags: Event|Public|BlueprintEvent 0x15DB608A400
		void OnMaxRowsSet(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6148900
		void OnRowIsSelectedChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB608EE00
		void OnOverrideItemSelectorSet(UFortDiscoverItemSelectorBase ItemSelector); // Flags: Event|Protected|BlueprintEvent 0x15DB6089F00
		void ExecuteUbergraph_ActivityBrowserDiscoverGridRowMax(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB608D000
		void OnUpperBoundaryHit__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6140100
		void OnRowBroadcastClickToDiscover__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6140200
	};

}
