#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreatorProfile
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

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


	// Class /DiscoveryBrowser/CreatorProfile/ActivityBrowserCreatorPageViewV2.ActivityBrowserCreatorPageViewV2_C
	// Inherited from UFortActivityCreatorPageView -> UFortActivityCategoryPageView -> UFortActivityPlayerBrowserView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x810 - 0x7D0)
	class UActivityBrowserCreatorPageViewV2_C : public UFortActivityCreatorPageView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x7D0(0x8)
		UWidgetAnimation ShowAndHideRowLoadingSpinner; // 0x7D8(0x8)
		UImage RowLoadingSpinner; // 0x7E0(0x8)
		USafeZone SafeZone_PageContent; // 0x7E8(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_Discovery_NoResultsMessage; // 0x7F0(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_Discovery_NoResultsMessage; // 0x7F8(0x8)
		UCommonActivatableWidgetSwitcher WidgetSwitcher_Results; // 0x800(0x8)
		double VerticalTilePadding; // 0x808(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/CreatorProfile/ActivityBrowserCreatorPageViewV2.ActivityBrowserCreatorPageViewV2_C");
			return ret;
		}

		void BP_OnTileViewUpdated(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E9B00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53E9A00
		void OnCreatorActivitiesQueryFinished(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E9800
		void BndEvt__ActivityPlayerBrowserCreateView_TileView_PlayerActivities_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(UObject Item, UUserWidget Widget); // Flags: BlueprintEvent 0x15DB53E9D00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53E9600
		void OnNoContentFoundForCreator(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E9700
		void ExecuteUbergraph_ActivityBrowserCreatorPageViewV2(int32_t EntryPoint); // Flags: Final 0x15DB53E9900
	};


	// Class /DiscoveryBrowser/CreatorProfile/WBP_Creator_AvatarImage.WBP_Creator_AvatarImage_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x34 (0x314 - 0x2E0)
	class UWBP_Creator_AvatarImage_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
		UWidgetAnimation Anim_OnLoadedImage; // 0x2E8(0x8)
		UImage CreatorThumbnail; // 0x2F0(0x8)
		UImage LiveFeedback; // 0x2F8(0x8)
		FVector2D CreatorAvatarSize; // 0x300(0x10)
		FName TextureParam; // 0x310(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/CreatorProfile/WBP_Creator_AvatarImage.WBP_Creator_AvatarImage_C");
			return ret;
		}

		void SetCreatorAvatarImageTexture(UTexture CreatorAvatarTexture); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6089000
		void SetIsPlayingNow(bool IsPlayingNow); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB614B300
		void SetCreatorAvatarImageSize(FVector2D CreatorAvatarSize); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6089100
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6085600
		void ExecuteUbergraph_WBP_Creator_AvatarImage(int32_t EntryPoint); // Flags: Final 0x15DB6085700
	};


	// Class /DiscoveryBrowser/CreatorProfile/ActivityBrowserCreatorPageView_NEW_VM.ActivityBrowserCreatorPageView_NEW_VM_C
	// Inherited from UFortActivityCreatorPageView -> UFortActivityCategoryPageView -> UFortActivityPlayerBrowserView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x55 (0x825 - 0x7D0)
	class UActivityBrowserCreatorPageView_NEW_VM_C : public UFortActivityCreatorPageView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x7D0(0x8)
		UImage Image_HeaderSoftEdge; // 0x7D8(0x8)
		USafeZone SafeZone_PageContent; // 0x7E0(0x8)
		UWBP_AthenaBottomBarWidget_C WBP_AthenaBottomBarWidget; // 0x7E8(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x7F0(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_Discovery_NoResultsMessage; // 0x7F8(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_Discovery_NoResultsMessage; // 0x800(0x8)
		UWBP_UIKit_Throbber_C WBP_UIKit_Throbber; // 0x808(0x8)
		UCommonActivatableWidgetSwitcher WidgetSwitcher_Results; // 0x810(0x8)
		double VerticalTilePadding; // 0x818(0x8)
		float ListViewItem_Offset; // 0x820(0x4)
		bool IsContextMenuOpen; // 0x824(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/CreatorProfile/ActivityBrowserCreatorPageView_NEW_VM.ActivityBrowserCreatorPageView_NEW_VM_C");
			return ret;
		}

		void Handle Input Changed(ECommonInputType CurrentInputType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6149400
		void Set Visibility Action Bar Buttons(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6149000
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6083900
		void OnCreatorActivitiesQueryFinished(); // Flags: Event|Protected|BlueprintEvent 0x15DB6086500
		void OnNoContentFoundForCreator(); // Flags: Event|Protected|BlueprintEvent 0x15DB6084900
		void BndEvt__ActivityBrowserCreatorPageView_NEW_VM_TileView_PlayerActivities_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15DB6141F00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6085800
		void HandleInputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6082200
		void BndEvt__ActivityBrowserCreatorPageView_NEW_VM_TileView_PlayerActivities_K2Node_ComponentBoundEvent_0_OnListViewScrolledDynamic__DelegateSignature(float ItemOffset, float DistanceRemaining); // Flags: BlueprintEvent 0x15DB6148E00
		void ContextMenuOpened(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6141400
		void ContextMenuClosed(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6087100
		void BP_OnTileViewUpdated(); // Flags: Event|Protected|BlueprintEvent 0x15DB6087E00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608E300
		void ExecuteUbergraph_ActivityBrowserCreatorPageView_NEW_VM(int32_t EntryPoint); // Flags: Final 0x15DB6087B00
	};

}
