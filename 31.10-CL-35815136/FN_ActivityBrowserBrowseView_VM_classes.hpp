#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityBrowserBrowseView_VM
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserBrowseView_VM.ActivityBrowserBrowseView_VM_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB2 (0x4A2 - 0x3F0)
	class UActivityBrowserBrowseView_VM_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UFortDiscoverBrowseViewModel* FortDiscoverBrowseViewModel; // 0x3F8(0x8)
		UWidgetAnimation* Anim_DisplayLoading; // 0x400(0x8)
		UWidgetAnimation* Intro; // 0x408(0x8)
		UWidgetAnimation* ShiftToNextPanel; // 0x410(0x8)
		UImage* Image_HeaderSoftEdge; // 0x418(0x8)
		UActivityCategoryTilePanelBase_VM_C* TilePanel_All_VMversion; // 0x420(0x8)
		UActivityCategoryTilePanelBase_VM_C* TilePanel_Featured_VMversion; // 0x428(0x8)
		UVerticalBox* VerticalBox_Panels; // 0x430(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarHack_BackToTop; // 0x438(0x8)
		UWBP_UIKit_Throbber_C* WBP_UIKit_Throbber; // 0x440(0x8)
		FMulticastInlineDelegate OnPlayIntro; // 0x448(0x10)
		FMulticastInlineDelegate OnRowUpdated; // 0x458(0x10)
		double CategoryIndexAnimator; // 0x468(0x8)
		int32_t DesiredPanelIndex; // 0x470(0x4)
		int32_t LastDesiredPanelIndex; // 0x474(0x4)
		int32_t CurrentPanelIndex; // 0x478(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x47C(0x4) UNKNOWN PROPERTY
		UActivityCategoryTilePanelBase_C* LastSelectedPanel; // 0x480(0x8)
		TEnumAsByte<EUMGSequencePlayMode> CurrentPlayDirection; // 0x488(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x489(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnBackToTopClicked; // 0x490(0x10)
		ECommonInputType CurrentInputType; // 0x4A0(0x1)
		bool IsClickedOnBottomPanel; // 0x4A1(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserBrowseView_VM.ActivityBrowserBrowseView_VM_C");
			return ret;
		}

		void SetFortDiscoverBrowseViewModel(UFortDiscoverBrowseViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCurrentPanelIndex(int32_t CurrentPanelIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set All Categories(TArray<UFortDiscoverTileItemVM*>& In Category List); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Featured Categories(TArray<UFortDiscoverTileItemVM*>& In Category List); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set All Categories Panel Display Name(FText In Panel Name); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Featured Categories Panel Display Name(FText In Panel Name); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set ViewModel(UFortDiscoverBrowseViewModel* In Discover Browse VM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Panel Data(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimatePanelOpacity(int32_t AnimateAwayFromIndex, int32_t AnimateToIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortActivityCategoryTilePanel GetTopMostVisiblePanel(); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateMouseWheelForIndex(int32_t PanelIndex, bool bListenForInput); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchToGamepad(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTilePanelFromIndex(int32_t PanelIndex, UActivityCategoryTilePanelBase_C* TilePanel); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavFeaturedToAll(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavAllToFeatured(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIndexOfPanel(UWidget* Widget, int32_t& Index); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PostUpdatePanelSize(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreUpdatePanelSize(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsWidgetFullSizedAndOnScreen(UWidget* Widget, bool& IsFullSized); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimateToDesiredPanel(int32_t NewDesiredIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Animate to Previous Panel(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Animate to Next Panel(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetLocalPanelPosition(int32_t Index, double& Position); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCategoryIndexAnimator(double NewValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapToEndOfAnimation(UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTilePanelSelected(UFortActivityCategoryTilePanel* SelectedPanel); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityBrowserBrowseView_VM_WBP_BottomBarHack_BackToTop_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBottomPanelItemClicked(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTopPanelItemClicked(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserBrowseView_VM(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBackToTopClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowUpdated__DelegateSignature(bool IsPromoted, bool IsFirstRow); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayIntro__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
