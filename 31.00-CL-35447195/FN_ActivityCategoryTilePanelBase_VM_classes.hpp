#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityCategoryTilePanelBase_VM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityCategoryTilePanelBase_VM.ActivityCategoryTilePanelBase_VM_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x330 - 0x2E0)
	class UActivityCategoryTilePanelBase_VM_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
		UWidgetAnimation OnMoveUpOutOfView; // 0x2E8(0x8)
		UWidgetAnimation ActiveInactivate; // 0x2F0(0x8)
		UCommonTextBlock Text_Title; // 0x2F8(0x8)
		UFortActivityTileView TileView_Categories; // 0x300(0x8)
		UVerticalBox VerticalBox_Content; // 0x308(0x8)
		double EntryHeight; // 0x310(0x8)
		double EntryWidth; // 0x318(0x8)
		FMulticastInlineDelegate OnPanelItemClicked; // 0x320(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityCategoryTilePanelBase_VM.ActivityCategoryTilePanelBase_VM_C");
			return ret;
		}

		void Set Categories(TArray& In Categories); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C63E00
		void Set Panel Display Name(FText In Panel Name); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C63D00
		void MoveUpOutOfView(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C60100
		void MoveDownIntoView(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C60200
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C64200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C63F00
		void EnableMouseWheelInput(bool bListenForInput); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C60400
		void SetActive(bool IsActive); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C63C00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C60500
		void OnItemClicked(UObject Item); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C64100
		void ExecuteUbergraph_ActivityCategoryTilePanelBase_VM(int32_t EntryPoint); // Flags: Final 0x15D62C60300
		void OnPanelItemClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D62C64000
	};

}
