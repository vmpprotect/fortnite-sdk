#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityBrowserDiscoverItemRow_NEW_VM
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserDiscoverItemRow_NEW_VM.ActivityBrowserDiscoverItemRow_NEW_VM_C
	// Inherited from UFortDiscoverItemBrowserRow -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x4B0 - 0x420)
	class UActivityBrowserDiscoverItemRow_NEW_VM_C : public UFortDiscoverItemBrowserRow	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x8)
		UWidgetAnimation* OnLoadingMore; // 0x428(0x8)
		UWidgetAnimation* OnPeek; // 0x430(0x8)
		UWidgetAnimation* OnRowMoveDownIntoView; // 0x438(0x8)
		UWidgetAnimation* OnRowMoveUpOutOfViewAnim; // 0x440(0x8)
		UWidgetAnimation* OnRowActiveInactiveAnim; // 0x448(0x8)
		UCommonBorder* InactiveDarken; // 0x450(0x8)
		UImage* InactiveOverlayDim; // 0x458(0x8)
		UVerticalBox* VBContent; // 0x460(0x8)
		UWBP_LoadingMorePages_C* WBP_LoadingMorePages; // 0x468(0x8)
		UWBP_Row_Header_C* WBP_Row_Header; // 0x470(0x8)
		TArray<UActivityBrowserArrowButton_C*> ArrowButtons; // 0x478(0x10)
		FName FontHoverAnimateParam; // 0x488(0x4)
		FName FontPressedAnimateParam; // 0x48C(0x4)
		bool IsWaitingForInactiveAnim; // 0x490(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x491(0x7) UNKNOWN PROPERTY
		double LoadingMoreDisplayDelay; // 0x498(0x8)
		bool IsLoadingMoreVisible; // 0x4A0(0x1)
		bool IsLoadingMoreQueryActive; // 0x4A1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4A2(0x6) UNKNOWN PROPERTY
		FTimerHandle LoadingMoreDelayTimer; // 0x4A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserDiscoverItemRow_NEW_VM.ActivityBrowserDiscoverItemRow_NEW_VM_C");
			return ret;
		}

		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapToEndOfAnimation(UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_23AB013B46BF1CC5C591239F71E2255D(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_FB0709D4467EE7211C9ABDB604DA8A87(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryStatusChanged(bool bIsActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTextChanged(FText& CategoryText, FText& CategorySubtitle); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserDiscoverItemRow_NEW_VM(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/ActivityBrowserDiscoverItemRow_NEW_VM.ActivityBrowserDiscoverItemRow_C
	// Inherited from UFortDiscoverItemBrowserRow -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x4A8 - 0x420)
	class UActivityBrowserDiscoverItemRow_C : public UFortDiscoverItemBrowserRow	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x8)
		UWidgetAnimation* OnLoadingMore; // 0x428(0x8)
		UWidgetAnimation* OnPeek; // 0x430(0x8)
		UWidgetAnimation* OnRowMoveDownIntoView; // 0x438(0x8)
		UWidgetAnimation* OnRowMoveUpOutOfViewAnim; // 0x440(0x8)
		UWidgetAnimation* OnRowActiveInactiveAnim; // 0x448(0x8)
		UCommonBorder* InactiveDarken; // 0x450(0x8)
		UImage* InactiveOverlayDim; // 0x458(0x8)
		UHorizontalBox* LoadingMoreTilesHB; // 0x460(0x8)
		UVerticalBox* VBContent; // 0x468(0x8)
		TArray<UActivityBrowserArrowButton_C*> ArrowButtons; // 0x470(0x10)
		FName FontHoverAnimateParam; // 0x480(0x4)
		FName FontPressedAnimateParam; // 0x484(0x4)
		bool IsWaitingForInactiveAnim; // 0x488(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x489(0x7) UNKNOWN PROPERTY
		double LoadingMoreDisplayDelay; // 0x490(0x8)
		bool IsLoadingMoreVisible; // 0x498(0x1)
		bool IsLoadingMoreQueryActive; // 0x499(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x49A(0x6) UNKNOWN PROPERTY
		FTimerHandle LoadingMoreDelayTimer; // 0x4A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserDiscoverItemRow_NEW_VM.ActivityBrowserDiscoverItemRow_C");
			return ret;
		}

		void Set Font Category Size(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapToEndOfAnimation(UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_854414D0424F841AD183C6B047DDF5C2(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_253F0024495A98586C919ABDB8DFE39D(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryStatusChanged(bool bIsActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserDiscoverItemRow(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
