#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserDiscoverItemRow_NEW_VM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserDiscoverItemRow_NEW_VM.ActivityBrowserDiscoverItemRow_C
	// Inherited from UFortDiscoverItemBrowserRow -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x4A0 - 0x418)
	class UActivityBrowserDiscoverItemRow_C : public UFortDiscoverItemBrowserRow	
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
		UHorizontalBox LoadingMoreTilesHB; // 0x458(0x8)
		UVerticalBox VBContent; // 0x460(0x8)
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

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserDiscoverItemRow_NEW_VM.ActivityBrowserDiscoverItemRow_C");
			return ret;
		}

		void Set Font Category Size(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6088B00
		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6088F00
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608FF00
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6089500
		void SnapToEndOfAnimation(UWidgetAnimation InAnimation, TEnumAsByte PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7EA00
		void Finished_854414D0424F841AD183C6B047DDF5C2(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6149D00
		void Finished_253F0024495A98586C919ABDB8DFE39D(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6084E00
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent 0x15DB6086D00
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x15DB614C100
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent 0x15DB6148500
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent 0x15DB6086300
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63334800
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6088A00
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x15DB608FC00
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608E400
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608D200
		void OnQueryStatusChanged(bool bIsActive); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6140500
		void ExecuteUbergraph_ActivityBrowserDiscoverItemRow(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6087C00
	};


	// Class /DiscoveryBrowser/ActivityBrowserDiscoverItemRow_NEW_VM.ActivityBrowserDiscoverItemRow_NEW_VM_C
	// Inherited from UFortDiscoverItemBrowserRow -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x4A8 - 0x418)
	class UActivityBrowserDiscoverItemRow_NEW_VM_C : public UFortDiscoverItemBrowserRow	
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
		UWBP_Row_Header_C WBP_Row_Header; // 0x468(0x8)
		TArray ArrowButtons; // 0x470(0x10)
		FName FontHoverAnimateParam; // 0x480(0x4)
		FName FontPressedAnimateParam; // 0x484(0x4)
		bool IsWaitingForInactiveAnim; // 0x488(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x489(0x7) UNKNOWN PROPERTY
		double LoadingMoreDisplayDelay; // 0x490(0x8)
		bool IsLoadingMoreVisible; // 0x498(0x1)
		bool IsLoadingMoreQueryActive; // 0x499(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x49A(0x6) UNKNOWN PROPERTY
		FTimerHandle LoadingMoreDelayTimer; // 0x4A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserDiscoverItemRow_NEW_VM.ActivityBrowserDiscoverItemRow_NEW_VM_C");
			return ret;
		}

		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EBB00
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EBA00
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EB800
		void SnapToEndOfAnimation(UWidgetAnimation InAnimation, TEnumAsByte PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EB900
		void Finished_23AB013B46BF1CC5C591239F71E2255D(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EC600
		void Finished_FB0709D4467EE7211C9ABDB604DA8A87(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EC500
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent 0x15DB53EC200
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x15DB53EBD00
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent 0x15DB53EBF00
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent 0x15DB53EBC00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608E700
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6140E00
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x15DB53EBE00
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EC300
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EC400
		void OnQueryStatusChanged(bool bIsActive); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EC000
		void OnCategoryTextChanged(FText& CategoryText, FText& CategorySubtitle); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB53EC100
		void ExecuteUbergraph_ActivityBrowserDiscoverItemRow_NEW_VM(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6083000
	};

}
