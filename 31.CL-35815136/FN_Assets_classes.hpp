#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Assets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /MyLoadout/Assets/FortMPLocker_MyLoadout_Full.FortMPLocker_MyLoadout_Full_C
	// Inherited from UAthenaCustomizationScreenBase -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1B1 (0x731 - 0x580)
	class UFortMPLocker_MyLoadout_Full_C : public UAthenaCustomizationScreenBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x8)
		UFortTypedModularLoadoutsVM* FortTypedModularLoadoutsVM; // 0x588(0x8)
		UFortLockerCategoryItemVM* PrimaryCategoryItemVM; // 0x590(0x8)
		UFortLockerVM* FortLockerVM; // 0x598(0x8)
		UFortItemSelectionVM* FortItemSelectionVM; // 0x5A0(0x8)
		UWidgetAnimation* TogglePresetsFullscreenMobile; // 0x5A8(0x8)
		UWidgetAnimation* PresetsPeek; // 0x5B0(0x8)
		UWidgetAnimation* Intro; // 0x5B8(0x8)
		UWidgetAnimation* CameraSlideIn; // 0x5C0(0x8)
		UWidgetAnimation* CameraSlideOut; // 0x5C8(0x8)
		UWidgetAnimation* TogglePresetsFullscreen; // 0x5D0(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_Back; // 0x5D8(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_BackToTop; // 0x5E0(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_Chat; // 0x5E8(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_Equip; // 0x5F0(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_Options; // 0x5F8(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_RandomToggle; // 0x600(0x8)
		UWBP_UIKit_Button_Quiet_C* Button_SeeLegoKits; // 0x608(0x8)
		USpacer* Camera_Spacer_Left; // 0x610(0x8)
		USpacer* Camera_Spacer_Right; // 0x618(0x8)
		UGridPanel* CategoryTabs_NavWrapper; // 0x620(0x8)
		UFortItemPreviewWidget_C* FortItemPreviewWidget; // 0x628(0x8)
		UGridPanel* Grid_Main; // 0x630(0x8)
		UWBP_LoadoutScrollingList_C* MyLoadouts_Categories; // 0x638(0x8)
		UOverlay* Overlay_BackToTopVisibility; // 0x640(0x8)
		UOverlay* Overlay_EquipVisibility; // 0x648(0x8)
		UOverlay* Overlay_OptionVisibility; // 0x650(0x8)
		UOverlay* Overlay_RandomToggle; // 0x658(0x8)
		UFortSwipePanel* PresetsSwipePanel; // 0x660(0x8)
		UWBP_MPLocker_Presets_C* PresetsWidget; // 0x668(0x8)
		USafeZone* SafeZone; // 0x670(0x8)
		USizeBox* SizeBox; // 0x678(0x8)
		USizeBox* SizeBox_Mobile; // 0x680(0x8)
		USizeBox* SizeBox_PreviewWindow; // 0x688(0x8)
		UWBP_MPLocker_SideNavigation_C* UIKit_Collapsable_SideNav; // 0x690(0x8)
		UWBP_ActionBarContainer_C* WBP_ActionBarContainer; // 0x698(0x8)
		USizeBox* Widget_CameraFrame; // 0x6A0(0x8)
		double PresetsMenuSize; // 0x6A8(0x8)
		TEnumAsByte<ELockerScreenList> ActiveScreen; // 0x6B0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x6B1(0x7) UNKNOWN PROPERTY
		double CameraPosition; // 0x6B8(0x8)
		bool CameraIsLeft; // 0x6C0(0x1)
		bool Is_Presets_Active; // 0x6C1(0x1)
		bool IsTabsExpanded; // 0x6C2(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x6C3(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate AnimStarted; // 0x6C8(0x10)
		bool Is_Save_Mode; // 0x6D8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x6D9(0x7) UNKNOWN PROPERTY
		double CameraWidth; // 0x6E0(0x8)
		USoundBase* LockerCategoryWhooshSound; // 0x6E8(0x8)
		UWBP_UIKit_ItemCard_Category_C* Hovered_Category; // 0x6F0(0x8)
		bool IsCategoryContextMenuOpened; // 0x6F8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x6F9(0x7) UNKNOWN PROPERTY
		double LastWidthOverride; // 0x700(0x8)
		UWBP_UIKit_PresetCard_C* Hovered_Preset_Button; // 0x708(0x8)
		bool IsDualBladeOpen; // 0x710(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x711(0x7) UNKNOWN PROPERTY
		UAsyncAction_StartListeningToEvent* DualBladeEventWatch; // 0x718(0x8)
		bool SoftActivation; // 0x720(0x1)
		bool Is_Modal_Active; // 0x721(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x722(0x6) UNKNOWN PROPERTY
		UFortTypedModularLoadoutVM* LastSelectedLoadout; // 0x728(0x8)
		bool isScrollEnabled; // 0x730(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MyLoadout/Assets/FortMPLocker_MyLoadout_Full.FortMPLocker_MyLoadout_Full_C");
			return ret;
		}

		void SetPrimaryCategoryItemVM(UFortLockerCategoryItemVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSideNavigationSelection(UFortLockerCategoryGroupVM* VM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTextChatRef(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSideNavigationBindingState(bool bShouldAddBindings); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectCorrespondentSideNavButton(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Flow Rider Sub View(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateOptionsButtonOverlayVisibility(bool ShowButtonContainer); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSelectedCategoryViewModel(UMVVMViewModelBase* Tab VM, FName TabNameID); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetItemSelectionVMConfig(UFortLockerCategoryConfig* VMConfig); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSideNavAllEnabled(bool Enabled); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateCategories(TArray<UFortLockerCategoryGroupCollectionVM*>& CategoryGroupCollections); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRandomButton(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Is in Legacy Stw Locker(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StW Reset Category Focus(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Menu Focused(bool& HasFocus); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShufflePresetsActive(bool ShuffleEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Collectable Preview Widget Position(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Buttons Visibility(UFortTypedModularLoadoutVM* Typed Modular Loadout); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetItemsAreEquippable(bool& bItemsAreEquippable); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FUIInputConfig BP_GetDesiredInputConfig(); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Handle Collectable Tabs Clicked(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Locker Item Widgets Visibility(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Bind Preview Actions(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMobileLayout(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AdjustPresetsCamera(double FloatProgress); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Loadout Loaded(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PushModal(UCommonActivatableWidget* ActivatableWidget); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Try Show Juno Outfits FTUE Modal(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectFirstSlot(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Handle Category Selected(FName InputPin); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCategoryPreviewScale(UFortLockerCategoryItemVM* CategoryToPreview); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Navigation_UpFromPresets(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Navigation_GoToTabs(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Navigation_GoToTiles(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchScreen_Presets(bool IsPresetsActive, bool NoAnimations, bool IsSaveMode); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPresetsMenuSize(double IsFullscreen); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCameraPosition(double CameraPosition); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Handle3DCameraTransition(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryContentPushed_14F8955141F1015C4A195F941600CC98(UCommonActivatableWidget* ActivatableWidget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_C46B95244A3B45F37E40F4894A5BE23C(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryContentPushed_A9B8B2914993E7011927D9A51AB31F58(UCommonActivatableWidget* ActivatableWidget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModalWidgetQueued_73CADBAC4CA0DD454705D8BB8CCEE8F9(UCommonActivatableWidget* ActivatableWidget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_341782334717469687088E8C22B38A7A(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryContentPushed_C3D1C59846398BD3300ACE9ABA8A06C3(UCommonActivatableWidget* ActivatableWidget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventReceived_6698B39547EFC71C7AE5A28BAEE7C77D(UAsyncAction_StartListeningToEvent* ProxyObject); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PressedTab(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseTabs(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimStartedInputRestorer(double AnimLength); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PresetHovered(UWBP_UIKit_PresetCard_C* Preset Button); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Unbinds(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_Button_Equip_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_Button_Options_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_PresetsWidget_K2Node_ComponentBoundEvent_9_PresetSaved__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_PresetsWidget_K2Node_ComponentBoundEvent_11_DisableOptionsHint__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_PresetsWidget_K2Node_ComponentBoundEvent_12_EnableOptionsHint__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_FortItemPreviewWidget_K2Node_ComponentBoundEvent_15_OnPreviewItemShown__DelegateSignature(UFortAccountItemDefinition* ItemDefinition); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCollectableTabsPressed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_Button_SeeCollectables_K2Node_ComponentBoundEvent_20_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemSelectionChanged(UObject* Item, bool bIsSelected); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryOptionContextMenuOpened(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryOptionContextMenuClosed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnChangeBackToTopButtonVisibility(ESlateVisibility New Visibility); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_Button_BackToTop_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVariantSelectorDeactivated(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWidgetActivatedEvent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoriesTabUnhover(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_Button_RandomToggle_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCategoryGroupChanged(UFortLockerCategoryGroupVM* Selected Category Group); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InputChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_Button_Back_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSideNavigationSelectionChanged(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSideNavigationTabClicked(FName TabID, bool IsTabContainerExpanded, UMVVMViewModelBase* TabViewModel); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSideNavigationInnerTabClicked(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_Button_Chat_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_22_OnOptionContextMenuOpened__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_25_OnOptionContextMenuClosed__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_26_OnCategoryEditStyles__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_27_OnCategoryButtonClicked__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_29_OnCategoryCardHovered__DelegateSignature(UUserWidget* CategoryItemEntryObject); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_1_OnPresetSave__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_33_OnPresetLoad__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_0_isHoveredOverTile__DelegateSignature(bool isTileHovered); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_MyLoadouts_Categories_K2Node_ComponentBoundEvent_2_isModalActive__DelegateSignature(bool isModalActive); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearAllBangs(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMPLocker_MyLoadout_Full_UIKit_Collapsable_SideNav_K2Node_ComponentBoundEvent_3_OnSideNavigationSelectionChanged__DelegateSignature(FName TabID, FName InnerTabID, UMVVMViewModelBase* TabViewModel); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_FortMPLocker_MyLoadout_Full(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AnimStarted__DelegateSignature(double AnimLength); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /MyLoadout/Assets/WBP_MPLocker_SideNavigation.WBP_MPLocker_SideNavigation_C
	// Inherited from UWBP_UIKit_SideNavigation_C -> UWBP_UIKit_SideNavigation_Base_C -> UWBP_UIKit_TabGroup_Base_C -> UUIKitTabGroup -> UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x9E9 - 0x9D9)
	class UWBP_MPLocker_SideNavigation_C : public UWBP_UIKit_SideNavigation_C	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x9D9(0x7) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x9E0(0x8)
		bool IsInFocusPath; // 0x9E8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MyLoadout/Assets/WBP_MPLocker_SideNavigation.WBP_MPLocker_SideNavigation_C");
			return ret;
		}

		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovedFromFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MPLocker_SideNavigation(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /MyLoadout/Assets/WBP_LoadoutScrollingList.WBP_LoadoutScrollingList_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x528 - 0x3F0)
	class UWBP_LoadoutScrollingList_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UFortTypedModularLoadoutsVM* FortTypedModularLoadoutsVM; // 0x3F8(0x8)
		UFortItemSelectionVM* FortItemSelectionVM; // 0x400(0x8)
		UFortLockerVM* FortLockerVM; // 0x408(0x8)
		UFortItemListView* FullCategorySlotListView; // 0x410(0x8)
		UWBP_UIKit_Tag_C* LinkedLoadout_Tag; // 0x418(0x8)
		UCommonRichTextBlock* Shuffle_Text; // 0x420(0x8)
		UOverlay* ShuffleWarningBox; // 0x428(0x8)
		USizeBox* SizeBox_ShuffleText; // 0x430(0x8)
		UCommonTextBlock* Text_SubHeader; // 0x438(0x8)
		UWBP_UIKit_Backplate_C* WBP_UIKit_Backplate; // 0x440(0x8)
		UWBP_UIKit_ItemDescription_MPL_C* WPB_ItemDescription; // 0x448(0x8)
		int32_t CurrentEntryIndex; // 0x450(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x454(0x4) UNKNOWN PROPERTY
		TArray<UObject*> ListCategoryGroupItems; // 0x458(0x10)
		FText Category_Name; // 0x468(0x10)
		FMulticastInlineDelegate OnOptionContextMenuOpened; // 0x478(0x10)
		FMulticastInlineDelegate OnOptionContextMenuClosed; // 0x488(0x10)
		FMulticastInlineDelegate OnCategoryEditStyles; // 0x498(0x10)
		FMulticastInlineDelegate OnCategoryButtonClicked; // 0x4A8(0x10)
		FMulticastInlineDelegate OnCategoryCardHovered; // 0x4B8(0x10)
		UWidget* FocusTarget; // 0x4C8(0x8)
		bool ShouldSetFocus; // 0x4D0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x4D1(0x3) UNKNOWN PROPERTY
		int32_t Current_Desired_Column; // 0x4D4(0x4)
		bool CurrentIsDirectionUp; // 0x4D8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x4D9(0x7) UNKNOWN PROPERTY
		UWBP_CategorySlotListEntry_C* SelectedEntryWidget; // 0x4E0(0x8)
		FMulticastInlineDelegate OnPresetSave; // 0x4E8(0x10)
		FMulticastInlineDelegate OnPresetLoad; // 0x4F8(0x10)
		FMulticastInlineDelegate isHoveredOverTile; // 0x508(0x10)
		FMulticastInlineDelegate isModalActive; // 0x518(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MyLoadout/Assets/WBP_LoadoutScrollingList.WBP_LoadoutScrollingList_C");
			return ret;
		}

		void CheckIfEntryIsDisplayed(bool IsDirectionUp, UWBP_CategorySlotListEntry_C* DesiredWidget, bool& EntryDisplayed, bool& shouldIgnoreNav); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetEntryToNav(UWBP_CategorySlotListEntry_C* DesiredWidget); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NavToNextCategory(int32_t DesiredColumn, bool IsDirectionUp); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget GetFocusTarget(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScrollToCategory(bool NavigateToItem); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetShuffleMessageText(FText CategoryName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Shuffle Message Text(FText category); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Preset Random ShuffleActive(bool isShuffle); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Selected Category Index(UFortLockerCategoryGroupVM* SelectedCategoryGroup); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Selected Category(UObject* ViewListObject); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateCategories(TArray<UFortLockerCategoryGroupCollectionVM*>& Category Group Collections); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_LoadoutScrollingList_Test_FullCategorySlotList_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerContextMenuOpened(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerContextMenuClosed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_LoadoutScrollingList_Test_FullCategorySlotList_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerCategoryEdit(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerCategoryButtonClicked(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceScrollToCategory(bool IsDirectionUp); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateEntryFocusInfo(int32_t DesiredColumn, bool IsDirectionUp, UWBP_CategorySlotListEntry_C* EntryTarget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerClearAllBangs(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerOnCategoryCardHovered(UUserWidget* HoveredWidget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerCharacterSaved(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScrollToLastCategory(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScrollToNextCategory(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerPresetLoad(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerIsHoveredOverTile(bool isTileHovered); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerIsModalActive(bool isModalActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_LoadoutScrollingList(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void isModalActive__DelegateSignature(bool isModalActive); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void isHoveredOverTile__DelegateSignature(bool isTileHovered); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPresetLoad__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPresetSave__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryCardHovered__DelegateSignature(UUserWidget* CategoryItemEntryObject); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryButtonClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryEditStyles__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOptionContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOptionContextMenuOpened__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /MyLoadout/Assets/WBP_CategorySlotListEntry.WBP_CategorySlotListEntry_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x220 (0x4F8 - 0x2D8)
	class UWBP_CategorySlotListEntry_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UFortTypedModularLoadoutsVM* FortTypedModularLoadoutsVM; // 0x2E0(0x8)
		UFortItemSelectionVM* FortItemSelectionVM; // 0x2E8(0x8)
		UFortLockerCategoryGroupVM* FortLockerCategoryGroupVM; // 0x2F0(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C* Button_Options; // 0x2F8(0x8)
		UVerticalBox* CategoryVBox; // 0x300(0x8)
		UImage* Divider; // 0x308(0x8)
		UWBP_UIKit_Tag_C* PresetName_Tag; // 0x310(0x8)
		UFortLazyImage* PrimaryVehicleIndicator; // 0x318(0x8)
		UWBP_MPLocker_Heading_C* WBP_MPLocker_Heading; // 0x320(0x8)
		UWBP_MyLoadout_CategorySet_C* WBP_MyLoadout_CategorySet; // 0x328(0x8)
		float UnselectedOpacity; // 0x330(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnOptionContextMenuOpened; // 0x338(0x10)
		FMulticastInlineDelegate OnOptionContextMenuClosed; // 0x348(0x10)
		FMulticastInlineDelegate OnCategoryEditStyles; // 0x358(0x10)
		FMulticastInlineDelegate OnCategoryButtonClicked; // 0x368(0x10)
		UFortLockerCategoryGroupVM* As_Fort_Locker_Category_Group_VM; // 0x378(0x8)
		FMulticastInlineDelegate OnNavToNextCategory; // 0x380(0x10)
		int32_t CurrentDesiredFocusColumn; // 0x390(0x4)
		bool CurrentIsDirectionUp; // 0x394(0x1)
		bool isCategoryItemsPopulated; // 0x395(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x396(0x2) UNKNOWN PROPERTY
		UUIKitContextMenuActionContext* MenuActionContext; // 0x398(0x8)
		FDataTableRowHandle ClearAllBangsInput; // 0x3A0(0x10)
		FDataTableRowHandle RandomizeLoadoutInput; // 0x3B0(0x10)
		FDataTableRowHandle ClearLoadoutInput; // 0x3C0(0x10)
		FText Clear_All_Bangs_Action_Info_Display_Name; // 0x3D0(0x10)
		FText Randomize_Loadout_In_Action_Info_Display_Name; // 0x3E0(0x10)
		FText Clear_Loadout_In_Action_Info_Display_Name; // 0x3F0(0x10)
		FMulticastInlineDelegate OnClearAllBangs; // 0x400(0x10)
		FMulticastInlineDelegate OnRandomizeAllSlots; // 0x410(0x10)
		FMulticastInlineDelegate OnCategoryCardHovered; // 0x420(0x10)
		FText Set_Primary_Vehice_In_Action_Info_DisplayName; // 0x430(0x10)
		FDataTableRowHandle SetPrimaryVehicleInput; // 0x440(0x10)
		FDataTableRowHandle SavePresetsInput; // 0x450(0x10)
		FText CategoryNameText; // 0x460(0x10)
		FMulticastInlineDelegate OnPresetSave; // 0x470(0x10)
		FMulticastInlineDelegate OnIsModalActive; // 0x480(0x10)
		FText SavePresetText; // 0x490(0x10)
		bool CategorySelected; // 0x4A0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x4A1(0x7) UNKNOWN PROPERTY
		FText Load_Preset_In_Action_Info_Display_Name; // 0x4A8(0x10)
		FDataTableRowHandle Load_Presets_Input; // 0x4B8(0x10)
		FMulticastInlineDelegate OnPresetLoad; // 0x4C8(0x10)
		FMulticastInlineDelegate isHoveredOverTile; // 0x4D8(0x10)
		FDataTableRowHandle Triggering_Input_Action; // 0x4E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MyLoadout/Assets/WBP_CategorySlotListEntry.WBP_CategorySlotListEntry_C");
			return ret;
		}

		void SetFortLockerCategoryGroupVM(UFortLockerCategoryGroupVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsPrimaryArchetype(bool IsActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseContextMenu(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetContextMenuActionContext(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetFocus(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetNewCategoryNavigation(int32_t DesiredColumn, bool IsDirectionUp, UUserWidget* Widget); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCategorySelection(bool SelectionBool, bool& NewSelection); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsSelectedCategory(UFortLockerCategoryGroupVM* SelectedCategoryVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Get Desired Focus Widget(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateNavChanged(int32_t DesiredColumn, bool IsDirectionUp); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryFocusCategoryTile(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_WBP_MyLoadout_CategorySet_K2Node_ComponentBoundEvent_8_OnCategoryClicked__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_WBP_MyLoadout_CategorySet_K2Node_ComponentBoundEvent_9_OnCategoryItemSetup__DelegateSignature(UUserWidget* CategoryItemEntryObject); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_WBP_MyLoadout_CategorySet_K2Node_ComponentBoundEvent_10_OnCategoryContextMenuOpened__DelegateSignature(UWidget* ContextMenuParent); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_WBP_MyLoadout_CategorySet_K2Node_ComponentBoundEvent_11_OnCategoryContextMenuClosed__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_WBP_MyLoadout_CategorySet_K2Node_ComponentBoundEvent_12_OnCategoryEditStyles__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_WBP_MyLoadout_CategorySet_K2Node_ComponentBoundEvent_13_OnCardHovered__DelegateSignature(bool IsHovered); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_WBP_MyLoadout_CategorySet_K2Node_ComponentBoundEvent_14_OnNavToNextCategory__DelegateSignature(int32_t DesiredColumn, bool IsDirectionUp); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_WBP_MyLoadout_CategorySet_K2Node_ComponentBoundEvent_15_ItemsPopulated__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_Button_Options_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_Button_Options_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearAllBangs(FName NameId); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RandomizeLoadout(FName NameId); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearLoadout(FName NameId); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearLoadoutVM(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerCategoryCardHovered(UCommonButtonBase* Button); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPrimaryVehicle(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Save Preset(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LoadPreset(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_Button_Options_K2Node_ComponentBoundEvent_3_OnContextMenuClosed__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CategorySlotListEntry_Button_Options_K2Node_ComponentBoundEvent_4_OnContextMenuOpened__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_CategorySlotListEntry(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void isHoveredOverTile__DelegateSignature(bool isTileHovered); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPresetLoad__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsModalActive__DelegateSignature(bool isModalActive); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPresetSave__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryCardHovered__DelegateSignature(UUserWidget* HoveredWidget); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRandomizeAllSlots__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClearAllBangs__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavToNextCategory__DelegateSignature(int32_t DesiredColumn, bool IsDirectionUp); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryButtonClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryEditStyles__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOptionContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOptionContextMenuOpened__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /MyLoadout/Assets/WBP_MyLoadout_CategorySet.WBP_MyLoadout_CategorySet_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD8 (0x388 - 0x2B0)
	class UWBP_MyLoadout_CategorySet_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UFortLockerCategoryGroupVM* FortLockerCategoryGroupVM; // 0x2B8(0x8)
		UFortDynamicEntryBox* CategoryBottom; // 0x2C0(0x8)
		UFortDynamicEntryBox* CategoryTopRow; // 0x2C8(0x8)
		USpacer* Spacer; // 0x2D0(0x8)
		TEnumAsByte<ELockerTileSize> Tile_Size; // 0x2D8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY
		UWidget* FirstTile; // 0x2E0(0x8)
		FMulticastInlineDelegate OnCategoryClicked; // 0x2E8(0x10)
		TArray<UFortLockerCategoryItemVM*> VisibleItems; // 0x2F8(0x10)
		FMulticastInlineDelegate OnCategoryItemSetup; // 0x308(0x10)
		UCommonButtonGroupBase* ButtonGroup; // 0x318(0x8)
		FMulticastInlineDelegate OnCategoryContextMenuOpened; // 0x320(0x10)
		FMulticastInlineDelegate OnCategoryContextMenuClosed; // 0x330(0x10)
		FMulticastInlineDelegate OnCategoryEditStyles; // 0x340(0x10)
		FMulticastInlineDelegate OnCardHovered; // 0x350(0x10)
		FMulticastInlineDelegate OnNavToNextCategory; // 0x360(0x10)
		FMulticastInlineDelegate ItemsPopulated; // 0x370(0x10)
		UWidget* CurrentDesiredFocusTarget; // 0x380(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MyLoadout/Assets/WBP_MyLoadout_CategorySet.WBP_MyLoadout_CategorySet_C");
			return ret;
		}

		void SetFortLockerCategoryGroupVM(UFortLockerCategoryGroupVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget GetDesiredFocusTarget(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDesiredNavInfo(UDynamicEntryBoxBase* CurrentRow, int32_t& DesiredColumn); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Get Widget to Nav(UDynamicEntryBoxBase* CurrentRow, UDynamicEntryBoxBase* TargetRow, bool& TargetEmpty); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavBottomRow(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavTopRow(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCategoryCardHovered(bool IsCategoryCardHovered); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCategoryEditStyles(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextMenuClosed(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Handle Context Menu Opened(UWidget* ContextMenuParent); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRowDistance(bool EnableSpacer); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetItems(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCategoryClicked(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupCategoryItem(UFortLockerCategoryItemVM* category, bool IsSecondRow); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupCategoryRows(TArray<UFortLockerCategoryItemVM*>& CategoryItem); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MyLoadout_CategorySet(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemsPopulated__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavToNextCategory__DelegateSignature(int32_t DesiredColumn, bool IsDirectionUp); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCardHovered__DelegateSignature(bool IsHovered); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryEditStyles__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryContextMenuClosed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryContextMenuOpened__DelegateSignature(UWidget* ContextMenuParent); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryItemSetup__DelegateSignature(UUserWidget* CategoryItemEntryObject); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /MyLoadout/Assets/WBP_MPLocker_Button_SubCategory.WBP_MPLocker_Button_SubCategory_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1788 - 0x1740)
	class UWBP_MPLocker_Button_SubCategory_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortLockerCategoryGroupCollectionVM* FortLockerCategoryGroupCollectionVM; // 0x1748(0x8)
		UFortLockerCategoryGroupVM* FortLockerCategoryGroupVM; // 0x1750(0x8)
		UWidgetAnimation* ShowText; // 0x1758(0x8)
		UFortLockerCategoryGroupVM* LockerVM; // 0x1760(0x8)
		FText CurrentCatName; // 0x1768(0x10)
		FText CurrentSubCatName; // 0x1778(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MyLoadout/Assets/WBP_MPLocker_Button_SubCategory.WBP_MPLocker_Button_SubCategory_C");
			return ret;
		}

		void SetFortLockerCategoryGroupCollectionVM(UFortLockerCategoryGroupCollectionVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortLockerCategoryGroupVM(UFortLockerCategoryGroupVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsShuffleArchetype(bool IsActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsPrimaryArchetype(bool IsActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSubCategoryIcon(UTexture2D* Texture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSubCategoryNotification(bool Bang); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCategoryNotification(bool Bang); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCategoryIcon(UTexture2D* Texture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSubCategoryText(FText TestInputText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCategoryText(FText TestInputText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshBang(bool AnyNewItems); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChangeEnabledStyle(bool Enabled); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MPLocker_Button_SubCategory(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /MyLoadout/Assets/WBP_MPLocker_Button_Category.WBP_MPLocker_Button_Category_C
	// Inherited from UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x17A8 - 0x1740)
	class UWBP_MPLocker_Button_Category_C : public UWBP_UIKit_ButtonGeneric_Base_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UFortLockerCategoryGroupCollectionVM* FortLockerCategoryGroupCollectionVM; // 0x1748(0x8)
		UFortLockerCategoryGroupVM* FortLockerCategoryGroupVM; // 0x1750(0x8)
		UWidgetAnimation* OnCollapse; // 0x1758(0x8)
		UWidgetAnimation* ShowText; // 0x1760(0x8)
		UFortLockerCategoryGroupVM* LockerVM; // 0x1768(0x8)
		FText CurrentCatName; // 0x1770(0x10)
		FText CurrentSubCatName; // 0x1780(0x10)
		bool IsCollapsing; // 0x1790(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1791(0x7) UNKNOWN PROPERTY
		double OnCollapseAnimValue; // 0x1798(0x8)
		double MaxTextWidth; // 0x17A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/MyLoadout/Assets/WBP_MPLocker_Button_Category.WBP_MPLocker_Button_Category_C");
			return ret;
		}

		void SetFortLockerCategoryGroupCollectionVM(UFortLockerCategoryGroupCollectionVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortLockerCategoryGroupVM(UFortLockerCategoryGroupVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnCollapseAnimFinished(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOnCollapseAnimValue(double Value); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsShuffleArchetype(bool IsActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsPrimaryArchetype(bool IsActive); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSubCategoryIcon(UTexture2D* Texture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSubCategoryNotification(bool Bang); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCategoryNotification(bool Bang); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCategoryIcon(UTexture2D* Texture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSubCategoryText(FText TestInputText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCategoryText(FText TestInputText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshBang(bool AnyNewItems); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChangeEnabledStyle(bool Enabled); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsCollapsed(bool IsCollapsed, bool SkipAnimation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_MPLocker_Button_Category(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
