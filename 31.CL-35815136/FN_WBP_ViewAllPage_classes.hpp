#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_ViewAllPage
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_ViewAllPage.WBP_ViewAllPage_C
	// Inherited from UFortPolymorphicTileView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x478 - 0x3F8)
	class UWBP_ViewAllPage_C : public UFortPolymorphicTileView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UFortDiscoverProviderViewModel* FortDiscoverProviderViewModel; // 0x400(0x8)
		UCloseButton_C* Button_CloseTouch; // 0x408(0x8)
		UImage* Image_HeaderSoftEdge; // 0x410(0x8)
		USafeZone* SafeZone_PageContent; // 0x418(0x8)
		UCommonTextBlock* Text_CategoryTitle; // 0x420(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarHack_Back; // 0x428(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarHack_BackToTop; // 0x430(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x438(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_Discovery_NoResultsMessage; // 0x440(0x8)
		UWBP_LoadingMorePages_C* WBP_LoadingMorePages; // 0x448(0x8)
		UCommonActivatableWidgetSwitcher* WidgetSwitcher_Results; // 0x450(0x8)
		double VerticalTilePadding; // 0x458(0x8)
		FName SurfaceName; // 0x460(0x4)
		FName PanelName; // 0x464(0x4)
		int32_t LastSelectedIndex; // 0x468(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x46C(0x4) UNKNOWN PROPERTY
		UFortDiscoverItemSelectorBase* OverrideItemSelector; // 0x470(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_ViewAllPage.WBP_ViewAllPage_C");
			return ret;
		}

		void SetFortDiscoverProviderViewModel(UFortDiscoverProviderViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UClass GetDesiredEntryClassForItem(UObject* Item); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Tile View Layout(UWBP_Discover_Tile_Base_C* TileBaseWidget); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Base Tile Properties(int32_t ItemIndex, UWBP_Discover_Tile_Base_C* TileBaseWidget); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Querying More Pages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Update Providers(TArray<UFortDiscoverTileItemVM*>& Tiles); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fill Out Tile View Data(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Setup with Panel Name(FText Display Name); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTileViewUpdated(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemInitialized(UObject* Item, UUserWidget* Widget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityCategoryPageView_VM_Button_CloseTouch_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityCategoryPageView_VM_WBP_BottomBarHack_Back_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityCategoryPageView_VM_WBP_BottomBarHack_BackToTop_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityCreatorPageView_VM_TileView_K2Node_ComponentBoundEvent_4_OnListViewScrolledDynamic__DelegateSignature(float ItemOffset, float DistanceRemaining); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Row_PolyTileList_TileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(UObject* Item, UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityCreatorPageView_VM_TileView_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ViewAllPage(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
