#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserRow_NEW_VM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserRow_NEW_VM.ActivityBrowserRow_NEW_VM_C
	// Inherited from UFortActivityBrowserRowList -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x468 - 0x3E8)
	class UActivityBrowserRow_NEW_VM_C : public UFortActivityBrowserRowList	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3E8(0x8)
		UWidgetAnimation OnLoadingMore; // 0x3F0(0x8)
		UWidgetAnimation OnPeek; // 0x3F8(0x8)
		UWidgetAnimation OnRowActiveInactiveAnim; // 0x400(0x8)
		UCommonBorder InactiveDarken; // 0x408(0x8)
		UImage InactiveOverlayDim; // 0x410(0x8)
		UVerticalBox VBContent; // 0x418(0x8)
		UWBP_LoadingMorePages_C WBP_LoadingMorePages; // 0x420(0x8)
		UWBP_Row_Header_C WBP_Row_Header; // 0x428(0x8)
		TArray ArrowButtons; // 0x430(0x10)
		FName FontHoverAnimateParam; // 0x440(0x4)
		FName FontPressedAnimateParam; // 0x444(0x4)
		bool IsWaitingForInactiveAnim; // 0x448(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x449(0x7) UNKNOWN PROPERTY
		double LoadingMoreDisplayDelay; // 0x450(0x8)
		bool IsLoadingMoreVisible; // 0x458(0x1)
		bool IsLoadingMoreQueryActive; // 0x459(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x45A(0x6) UNKNOWN PROPERTY
		FTimerHandle LoadingMoreDelayTimer; // 0x460(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserRow_NEW_VM.ActivityBrowserRow_NEW_VM_C");
			return ret;
		}

		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EE200
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EE100
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EDF00
		void SnapToEndOfAnimation(UWidgetAnimation InAnimation, TEnumAsByte PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EE000
		void Finished_31D944D34F22F7FC82BF4F889F26EF09(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EA900
		void Finished_3E73331A4DD3EBC5CBA16D833A7500EF(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EA800
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent 0x15DB53EE700
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent 0x15DB53EE400
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent 0x15DB53EE300
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53EAC00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53EAB00
		void OnQueryStatusChanged(bool bIsActive); // Flags: Event|Public|BlueprintEvent 0x15DB53EE500
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EA600
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EA700
		void OnCategoryTextChanged(FText& CategoryText, FText& CategorySubtitle); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15DB53EE600
		void ExecuteUbergraph_ActivityBrowserRow_NEW_VM(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB53EAA00
	};

}
