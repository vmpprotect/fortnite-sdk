#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityBrowserDiscoverItemRow_Homebar
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserDiscoverItemRow_Homebar.ActivityBrowserDiscoverItemRow_Homebar_C
	// Inherited from UFortDiscoverItemBrowserRow -> UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x4C0 - 0x420)
	class UActivityBrowserDiscoverItemRow_Homebar_C : public UFortDiscoverItemBrowserRow	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x8)
		UWidgetAnimation* OnLoadingMore; // 0x428(0x8)
		unsigned char UnknownData00_7[0x90]; // 0x430(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserDiscoverItemRow_Homebar.ActivityBrowserDiscoverItemRow_Homebar_C");
			return ret;
		}

		void ResetOnPeekAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetOnRowActiveInactiveAnimation(bool IsRowActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateNewRow(bool IsActive, bool PlayAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapToEndOfAnimation(UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_05D2D3C94079FFB769F02F9935EAEEF7(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishedLoadingMoreDelay(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryStatusChanged(bool bIsActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityBrowserDiscoverItemRow_Homebar_ListView_Tiles_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowReceivedTileClick(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityBrowserDiscoverItemRow_Homebar_ListView_Tiles_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserDiscoverItemRow_Homebar(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowBroadcastClickToDiscover__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
