#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityBrowserRow_NEW_VM
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserRow_NEW_VM.ActivityBrowserRow_NEW_VM_C
	// Inherited from UFortActivityBrowserRowList -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x470 - 0x3F0)
	class UActivityBrowserRow_NEW_VM_C : public UFortActivityBrowserRowList	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UWidgetAnimation* OnLoadingMore; // 0x3F8(0x8)
		UWidgetAnimation* OnPeek; // 0x400(0x8)
		UWidgetAnimation* OnRowActiveInactiveAnim; // 0x408(0x8)
		UCommonBorder* InactiveDarken; // 0x410(0x8)
		UImage* InactiveOverlayDim; // 0x418(0x8)
		UVerticalBox* VBContent; // 0x420(0x8)
		UWBP_LoadingMorePages_C* WBP_LoadingMorePages; // 0x428(0x8)
		UWBP_Row_Header_C* WBP_Row_Header; // 0x430(0x8)
		TArray<UActivityBrowserArrowButton_C*> ArrowButtons; // 0x438(0x10)
		FName FontHoverAnimateParam; // 0x448(0x4)
		FName FontPressedAnimateParam; // 0x44C(0x4)
		bool IsWaitingForInactiveAnim; // 0x450(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x451(0x7) UNKNOWN PROPERTY
		double LoadingMoreDisplayDelay; // 0x458(0x8)
		bool IsLoadingMoreVisible; // 0x460(0x1)
		bool IsLoadingMoreQueryActive; // 0x461(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x462(0x6) UNKNOWN PROPERTY
		FTimerHandle LoadingMoreDelayTimer; // 0x468(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserRow_NEW_VM.ActivityBrowserRow_NEW_VM_C");
			return ret;
		}

		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapToEndOfAnimation(UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_31D944D34F22F7FC82BF4F889F26EF09(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_3E73331A4DD3EBC5CBA16D833A7500EF(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryStatusChanged(bool bIsActive); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTextChanged(FText& CategoryText, FText& CategorySubtitle); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserRow_NEW_VM(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
