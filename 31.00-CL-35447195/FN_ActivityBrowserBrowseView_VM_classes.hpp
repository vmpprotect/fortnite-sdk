#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserBrowseView_VM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserBrowseView_VM.ActivityBrowserBrowseView_VM_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB2 (0x4AA - 0x3F8)
	class UActivityBrowserBrowseView_VM_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UFortDiscoverBrowseViewModel FortDiscoverBrowseViewModel; // 0x400(0x8)
		UWidgetAnimation Anim_DisplayLoading; // 0x408(0x8)
		UWidgetAnimation Intro; // 0x410(0x8)
		UWidgetAnimation ShiftToNextPanel; // 0x418(0x8)
		UImage Image_HeaderSoftEdge; // 0x420(0x8)
		UActivityCategoryTilePanelBase_VM_C TilePanel_All_VMversion; // 0x428(0x8)
		UActivityCategoryTilePanelBase_VM_C TilePanel_Featured_VMversion; // 0x430(0x8)
		UVerticalBox VerticalBox_Panels; // 0x438(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarHack_BackToTop; // 0x440(0x8)
		UWBP_UIKit_Throbber_C WBP_UIKit_Throbber; // 0x448(0x8)
		FMulticastInlineDelegate OnPlayIntro; // 0x450(0x10)
		FMulticastInlineDelegate OnRowUpdated; // 0x460(0x10)
		double CategoryIndexAnimator; // 0x470(0x8)
		int32_t DesiredPanelIndex; // 0x478(0x4)
		int32_t LastDesiredPanelIndex; // 0x47C(0x4)
		int32_t CurrentPanelIndex; // 0x480(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x484(0x4) UNKNOWN PROPERTY
		UActivityCategoryTilePanelBase_C LastSelectedPanel; // 0x488(0x8)
		TEnumAsByte CurrentPlayDirection; // 0x490(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x491(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnBackToTopClicked; // 0x498(0x10)
		ECommonInputType CurrentInputType; // 0x4A8(0x1)
		bool IsClickedOnBottomPanel; // 0x4A9(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserBrowseView_VM.ActivityBrowserBrowseView_VM_C");
			return ret;
		}

		void SetFortDiscoverBrowseViewModel(UFortDiscoverBrowseViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D62C65A00
		void SetCurrentPanelIndex(int32_t CurrentPanelIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C65B00
		void Set All Categories(TArray& In Category List); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C66200
		void Set Featured Categories(TArray& In Category List); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C66000
		void Set All Categories Panel Display Name(FText In Panel Name); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C66100
		void Set Featured Categories Panel Display Name(FText In Panel Name); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C65F00
		void Set ViewModel(UFortDiscoverBrowseViewModel In Discover Browse VM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C65D00
		void Set Panel Data(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C65E00
		void AnimatePanelOpacity(int32_t AnimateAwayFromIndex, int32_t AnimateToIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C63900
		UFortActivityCategoryTilePanel GetTopMostVisiblePanel(); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D62C62F00
		void UpdateMouseWheelForIndex(int32_t PanelIndex, bool bListenForInput); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C65700
		void SwitchToGamepad(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C65800
		void GetTilePanelFromIndex(int32_t PanelIndex, UActivityCategoryTilePanelBase_C& TilePanel); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D62C63000
		UWidget NavFeaturedToAll(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C62C00
		UWidget NavAllToFeatured(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C62D00
		FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62C62700
		void GetIndexOfPanel(UWidget Widget, int32_t& Index); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D62C63200
		void PostUpdatePanelSize(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62C62200
		void PreUpdatePanelSize(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62C66300
		void IsWidgetFullSizedAndOnScreen(UWidget Widget, bool& IsFullsized); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D62C62E00
		void AnimateToDesiredPanel(int32_t NewDesiredIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C63800
		void Animate to Previous Panel(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C63A00
		void Animate to Next Panel(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C63B00
		void GetLocalPanelPosition(int32_t Index, double& Position); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D62C63100
		void SetCategoryIndexAnimator(double NewValue); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C65C00
		void SnapToEndOfAnimation(UWidgetAnimation InAnimation, TEnumAsByte PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C65900
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C62400
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C63400
		void OnInputChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C62800
		void OnCategoryTilePanelSelected(UFortActivityCategoryTilePanel SelectedPanel); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C62900
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C63500
		void BndEvt__ActivityBrowserBrowseView_VM_WBP_BottomBarHack_BackToTop_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D62C63700
		void OnBottomPanelItemClicked(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C62A00
		void OnTopPanelItemClicked(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C62300
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D62C63600
		void ExecuteUbergraph_ActivityBrowserBrowseView_VM(int32_t EntryPoint); // Flags: Final 0x15D62C63300
		void OnBackToTopClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D62C62B00
		void OnRowUpdated__DelegateSignature(bool IsPromoted, bool IsFirstRow); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D62C62500
		void OnPlayIntro__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D62C62600
	};

}
