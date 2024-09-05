#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserDiscoverItemRow_Homebar
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserDiscoverItemRow_Homebar.ActivityBrowserDiscoverItemRow_Homebar_C
	// Inherited from UFortDiscoverItemBrowserRow -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x4B8 - 0x418)
	class UActivityBrowserDiscoverItemRow_Homebar_C : public UFortDiscoverItemBrowserRow	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x8)
		UWidgetAnimation OnLoadingMore; // 0x420(0x8)
		UWidgetAnimation OnPeek; // 0x428(0x8)
		UWidgetAnimation OnRowMoveDownIntoView; // 0x430(0x8)
		UWidgetAnimation OnRowMoveUpOutOfViewAnim; // 0x438(0x8)
		UWidgetAnimation OnRowActiveInactiveAnim; // 0x440(0x8)
		UCommonBorder InactiveDarken; // 0x448(0x8)
		UImage InactiveOverlayDim; // 0x450(0x8)
		UVerticalBox VBContent; // 0x458(0x8)
		UWBP_LoadingMorePages_C WBP_LoadingMorePages; // 0x460(0x8)
		TArray ArrowButtons; // 0x468(0x10)
		FName FontHoverAnimateParam; // 0x478(0x4)
		FName FontPressedAnimateParam; // 0x47C(0x4)
		bool IsWaitingForInactiveAnim; // 0x480(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x481(0x7) UNKNOWN PROPERTY
		double LoadingMoreDisplayDelay; // 0x488(0x8)
		bool IsLoadingMoreVisible; // 0x490(0x1)
		bool IsLoadingMoreQueryActive; // 0x491(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x492(0x6) UNKNOWN PROPERTY
		FTimerHandle LoadingMoreDelayTimer; // 0x498(0x8)
		FMulticastInlineDelegate OnRowBroadcastClickToDiscover; // 0x4A0(0x10)
		double EntriesSpacing; // 0x4B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserDiscoverItemRow_Homebar.ActivityBrowserDiscoverItemRow_Homebar_C");
			return ret;
		}

		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6501C00
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6501B00
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6501900
		void SnapToEndOfAnimation(UWidgetAnimation InAnimation, TEnumAsByte PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6501A00
		void Finished_05D2D3C94079FFB769F02F9935EAEEF7(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EED00
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent 0x15DB6502100
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x15DB6501F00
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent 0x15DB6501E00
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent 0x15DB53EEA00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53EF000
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53EEF00
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x15DB6502000
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EEB00
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EEC00
		void OnQueryStatusChanged(bool bIsActive); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EE900
		void BndEvt__ActivityBrowserDiscoverItemRow_Homebar_ListView_Tiles_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15DB53EF200
		void OnRowReceivedTileClick(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6501D00
		void BndEvt__ActivityBrowserDiscoverItemRow_Homebar_ListView_Tiles_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15DB53EF100
		void ExecuteUbergraph_ActivityBrowserDiscoverItemRow_Homebar(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB53EEE00
		void OnRowBroadcastClickToDiscover__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB53EE800
	};

}
