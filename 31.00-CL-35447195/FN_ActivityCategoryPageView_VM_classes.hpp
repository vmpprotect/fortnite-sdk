#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityCategoryPageView_VM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityCategoryPageView_VM.ActivityCategoryPageView_VM_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x7D (0x475 - 0x3F8)
	class UActivityCategoryPageView_VM_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UFortDiscoverSurfaceViewModel FortDiscoverSurfaceViewModel; // 0x400(0x8)
		UCloseButton_C Button_CloseTouch; // 0x408(0x8)
		UImage Image_HeaderSoftEdge; // 0x410(0x8)
		USafeZone SafeZone_PageContent; // 0x418(0x8)
		UCommonTextBlock Text_CategoryTitle; // 0x420(0x8)
		UFortActivityTileView TileView_PlayerActivities; // 0x428(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarHack_Back; // 0x430(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarHack_BackToTop; // 0x438(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x440(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_Discovery_NoResultsMessage; // 0x448(0x8)
		UWBP_LoadingMorePages_C WBP_LoadingMorePages; // 0x450(0x8)
		UCommonActivatableWidgetSwitcher WidgetSwitcher_Results; // 0x458(0x8)
		double VerticalTilePadding; // 0x460(0x8)
		FName SurfaceName; // 0x468(0x4)
		FName PanelName; // 0x46C(0x4)
		int32_t LastSelectedIndex; // 0x470(0x4)
		bool IsDiscoverInLobby; // 0x474(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityCategoryPageView_VM.ActivityCategoryPageView_VM_C");
			return ret;
		}

		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C61800
		void OnUpdateProviders(TArray& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C61700
		void FillOutTileViewData(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C61C00
		void SetupWithPanelName(FName InSurfaceName, FName InPanelName, FText PanelDisplayName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C61500
		void BP_OnTileViewUpdated(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C62000
		void OnItemInitialized(UObject Item, UUserWidget Widget); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C61900
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D62C62100
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5F92E800
		void BndEvt__ActivityCategoryPageView_VM_TileView_PlayerActivities_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15D5F92EC00
		void BndEvt__ActivityCategoryPageView_VM_Button_CloseTouch_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy Button); // Flags: BlueprintEvent 0x15D5F92ED00
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C61A00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C61E00
		void HandleInputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C61B00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C61F00
		void BndEvt__ActivityCategoryPageView_VM_WBP_BottomBarHack_Back_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D5F92EA00
		void BndEvt__ActivityCategoryPageView_VM_WBP_BottomBarHack_BackToTop_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D5F92E900
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C61600
		void BndEvt__ActivityCategoryPageView_VM_TileView_PlayerActivities_K2Node_ComponentBoundEvent_4_OnListViewScrolledDynamic__DelegateSignature(float ItemOffset, float DistanceRemaining); // Flags: BlueprintEvent 0x15D5F92EB00
		void ExecuteUbergraph_ActivityCategoryPageView_VM(int32_t EntryPoint); // Flags: Final 0x15D62C61D00
	};

}
