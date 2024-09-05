#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityCategoryTilePanelBase_VM
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityCategoryTilePanelBase_VM.ActivityCategoryTilePanelBase_VM_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x328 - 0x2D8)
	class UActivityCategoryTilePanelBase_VM_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UWidgetAnimation* OnMoveUpOutOfView; // 0x2E0(0x8)
		UWidgetAnimation* ActiveInactivate; // 0x2E8(0x8)
		UCommonTextBlock* Text_Title; // 0x2F0(0x8)
		UFortActivityTileView* TileView_Categories; // 0x2F8(0x8)
		UVerticalBox* VerticalBox_Content; // 0x300(0x8)
		double EntryHeight; // 0x308(0x8)
		double EntryWidth; // 0x310(0x8)
		FMulticastInlineDelegate OnPanelItemClicked; // 0x318(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityCategoryTilePanelBase_VM.ActivityCategoryTilePanelBase_VM_C");
			return ret;
		}

		void Set Categories(TArray<UFortDiscoverTileItemVM*>& In Categories); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Panel Display Name(FText In Panel Name); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveUpOutOfView(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoveDownIntoView(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableMouseWheelInput(bool bListenForInput); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetActive(bool IsActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemClicked(UObject* Item); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityCategoryTilePanelBase_VM(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPanelItemClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
