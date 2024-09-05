#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityBrowserDiscoverGridRowMax
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserDiscoverGridRowMax.ActivityBrowserDiscoverGridRowMax_C
	// Inherited from UFortDiscoverBrowserGridRow -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD9 (0x4C1 - 0x3E8)
	class UActivityBrowserDiscoverGridRowMax_C : public UFortDiscoverBrowserGridRow	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3E8(0x8)
		UFortDiscoverProviderViewModel* FortDiscoverProviderViewModel; // 0x3F0(0x8)
		UWidgetAnimation* OnLoadingMore; // 0x3F8(0x8)
		UWidgetAnimation* OnPeek; // 0x400(0x8)
		UWidgetAnimation* OnRowMoveDownIntoView; // 0x408(0x8)
		UWidgetAnimation* OnRowMoveUpOutOfViewAnim; // 0x410(0x8)
		UWidgetAnimation* OnRowActiveInactiveAnim; // 0x418(0x8)
		UCommonTextBlock* debugArrayLength; // 0x420(0x8)
		UCommonTextBlock* debugRowsText; // 0x428(0x8)
		UCommonTextBlock* debugRowsText; // 0x430(0x8)
		UCommonTextBlock* debugRowsText; // 0x438(0x8)
		UGridPanel* GridRoot; // 0x440(0x8)
		UCommonBorder* InactiveDarken; // 0x448(0x8)
		UImage* InactiveOverlayDim; // 0x450(0x8)
		UImage* magentaBacker; // 0x458(0x8)
		UWBP_LoadingMorePages_C* WBP_LoadingMorePages; // 0x460(0x8)
		UWBP_Row_PanelList_C* WBP_Row_PanelList; // 0x468(0x8)
		FName FontHoverAnimateParam; // 0x470(0x4)
		FName FontPressedAnimateParam; // 0x474(0x4)
		bool IsWaitingForInactiveAnim; // 0x478(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x479(0x7) UNKNOWN PROPERTY
		double LoadingMoreDisplayDelay; // 0x480(0x8)
		bool IsLoadingMoreVisible; // 0x488(0x1)
		bool IsLoadingMoreQueryActive; // 0x489(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x48A(0x6) UNKNOWN PROPERTY
		FTimerHandle LoadingMoreDelayTimer; // 0x490(0x8)
		FMulticastInlineDelegate OnRowBroadcastClickToDiscover; // 0x498(0x10)
		double EntriesSpacing; // 0x4A8(0x8)
		FMulticastInlineDelegate OnUpperBoundaryHit; // 0x4B0(0x10)
		bool bAllowNonFullRows; // 0x4C0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserDiscoverGridRowMax.ActivityBrowserDiscoverGridRowMax_C");
			return ret;
		}

		void SetFortDiscoverProviderViewModel(UFortDiscoverProviderViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortDiscoverProviderViewModel GetPanelViewModel(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetItemIndexInRowAndColumn(int32_t RowIndex, int32_t ColumnIndex, int32_t& ItemIndex); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetNumRowsForItems(bool AllowNonFullRows, int32_t& NumRows); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ValidateMaxVisibleRows(int32_t& ValidatedMaxVisibleRows); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetNumDisplayedSubRows(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateItemSelectorInPanelList(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectItem(int32_t IndexToSelect); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget CustomNavigation(EUINavigation Navigation); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DEBUGSETARRAYLENGTHTEXT(TArray<UFortDiscoverTileItemVM*>& Items); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DEBUGSETROWSTEXT(int32_t MaxRows); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapToEndOfAnimation(UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_4EF546A644BD3334563488A6C3819225(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryStatusChanged(bool bIsActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileFocusGained(int32_t ItemFocused); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFocusOffset(int32_t FocusOffset, bool bSelectFromBelow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemHovered(UObject* Item, bool bIsHovered); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateAnalyticsStates(bool bStopImpressions); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMaxRowsSet(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowIsSelectedChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOverrideItemSelectorSet(UFortDiscoverItemSelectorBase* ItemSelector); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPanelViewModel(UFortDiscoverProviderViewModel* ViewModel); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserDiscoverGridRowMax(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpperBoundaryHit__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowBroadcastClickToDiscover__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
