#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreatorProfile
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/CreatorProfile/ActivityBrowserCreatorPageView_NEW_VM.ActivityBrowserCreatorPageView_NEW_VM_C
	// Inherited from UFortActivityCreatorPageView -> UFortActivityCategoryPageView -> UFortActivityPlayerBrowserView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x55 (0x815 - 0x7C0)
	class UActivityBrowserCreatorPageView_NEW_VM_C : public UFortActivityCreatorPageView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x7C0(0x8)
		UImage* Image_HeaderSoftEdge; // 0x7C8(0x8)
		USafeZone* SafeZone_PageContent; // 0x7D0(0x8)
		UWBP_AthenaBottomBarWidget_C* WBP_AthenaBottomBarWidget; // 0x7D8(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x7E0(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_Discovery_NoResultsMessage; // 0x7E8(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_Discovery_NoResultsMessage; // 0x7F0(0x8)
		UWBP_UIKit_Throbber_C* WBP_UIKit_Throbber; // 0x7F8(0x8)
		UCommonActivatableWidgetSwitcher* WidgetSwitcher_Results; // 0x800(0x8)
		double VerticalTilePadding; // 0x808(0x8)
		float ListViewItem_Offset; // 0x810(0x4)
		bool IsContextMenuOpen; // 0x814(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/CreatorProfile/ActivityBrowserCreatorPageView_NEW_VM.ActivityBrowserCreatorPageView_NEW_VM_C");
			return ret;
		}

		void Handle Input Changed(ECommonInputType CurrentInputType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Visibility Action Bar Buttons(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCreatorActivitiesQueryFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNoContentFoundForCreator(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityBrowserCreatorPageView_NEW_VM_TileView_PlayerActivities_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityBrowserCreatorPageView_NEW_VM_TileView_PlayerActivities_K2Node_ComponentBoundEvent_0_OnListViewScrolledDynamic__DelegateSignature(float ItemOffset, float DistanceRemaining); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ContextMenuOpened(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ContextMenuClosed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTileViewUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserCreatorPageView_NEW_VM(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/CreatorProfile/ActivityBrowserCreatorPageViewV2.ActivityBrowserCreatorPageViewV2_C
	// Inherited from UFortActivityCreatorPageView -> UFortActivityCategoryPageView -> UFortActivityPlayerBrowserView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x800 - 0x7C0)
	class UActivityBrowserCreatorPageViewV2_C : public UFortActivityCreatorPageView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x7C0(0x8)
		UWidgetAnimation* ShowAndHideRowLoadingSpinner; // 0x7C8(0x8)
		UImage* RowLoadingSpinner; // 0x7D0(0x8)
		USafeZone* SafeZone_PageContent; // 0x7D8(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_Discovery_NoResultsMessage; // 0x7E0(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_Discovery_NoResultsMessage; // 0x7E8(0x8)
		UCommonActivatableWidgetSwitcher* WidgetSwitcher_Results; // 0x7F0(0x8)
		double VerticalTilePadding; // 0x7F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/CreatorProfile/ActivityBrowserCreatorPageViewV2.ActivityBrowserCreatorPageViewV2_C");
			return ret;
		}

		void BP_OnTileViewUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCreatorActivitiesQueryFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityPlayerBrowserCreateView_TileView_PlayerActivities_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(UObject* Item, UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNoContentFoundForCreator(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserCreatorPageViewV2(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/CreatorProfile/WBP_Creator_AvatarImage.WBP_Creator_AvatarImage_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x34 (0x30C - 0x2D8)
	class UWBP_Creator_AvatarImage_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UWidgetAnimation* Anim_OnLoadedImage; // 0x2E0(0x8)
		UImage* CreatorThumbnail; // 0x2E8(0x8)
		UImage* LiveFeedback; // 0x2F0(0x8)
		FVector2D CreatorAvatarSize; // 0x2F8(0x10)
		FName TextureParam; // 0x308(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/CreatorProfile/WBP_Creator_AvatarImage.WBP_Creator_AvatarImage_C");
			return ret;
		}

		void SetCreatorAvatarImageTexture(UTexture* CreatorAvatarTexture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsPlayingNow(bool IsPlayingNow); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCreatorAvatarImageSize(FVector2D CreatorAvatarSize); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Creator_AvatarImage(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/CreatorProfile/WBP_Button_Quiet_NotFocusable.WBP_Button_Quiet_NotFocusable_C
	// Inherited from UWBP_UIKit_Button_Quiet_C -> UWBP_UIKit_ButtonCTA_Base_C -> UFortCTAButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x1860 - 0x1860)
	class UWBP_Button_Quiet_NotFocusable_C : public UWBP_UIKit_Button_Quiet_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/CreatorProfile/WBP_Button_Quiet_NotFocusable.WBP_Button_Quiet_NotFocusable_C");
			return ret;
		}
	};

}
