#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserTileDetailsDisplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserTileDetailsDisplay.ActivityBrowserTileDetailsDisplay_C
	// Inherited from UFortActivityTileDetailsDisplay -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1C8 (0x17F8 - 0x1630)
	class UActivityBrowserTileDetailsDisplay_C : public UFortActivityTileDetailsDisplay	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1630(0x8)
		UWidgetAnimation Anim_OnDisabledClick; // 0x1638(0x8)
		UWidgetAnimation Anim_OnHoverUnhoverRehover; // 0x1640(0x8)
		UWidgetAnimation Anim_OnImageLoaded; // 0x1648(0x8)
		UWidgetAnimation Anim_HoverPulse; // 0x1650(0x8)
		UWidgetAnimation Anim_OnIntro; // 0x1658(0x8)
		UWidgetAnimation Anim_OnHoverSelect_GrowNonHeroRowTiles; // 0x1660(0x8)
		UWidgetAnimation Anim_OnHoverSelect; // 0x1668(0x8)
		UWBP_ActivityBrowserSocialProof_C ActivityBrowserSocialProof; // 0x1670(0x8)
		UCommonTextBlock BannerText; // 0x1678(0x8)
		UCommonTextBlock DisabledWarningMessage; // 0x1680(0x8)
		UImage EpicBannerBg; // 0x1688(0x8)
		UHorizontalBox HorizontalBox_ActivityInfo; // 0x1690(0x8)
		UHorizontalBox HorizontalBox_LocksAndHearts; // 0x1698(0x8)
		UHorizontalBox HorizontalBox_PlayerCount; // 0x16A0(0x8)
		UImage Image_MultiMode; // 0x16A8(0x8)
		UImage Logo_NotReady_Fort554488; // 0x16B0(0x8)
		UOverlay OriginalContentEpicBanner; // 0x16B8(0x8)
		UOverlay Overlay_Favorite; // 0x16C0(0x8)
		UOverlay Overlay_InteractButtons; // 0x16C8(0x8)
		UOverlay Overlay_PurchaseRequired; // 0x16D0(0x8)
		UOverlay Ovr_Primary; // 0x16D8(0x8)
		UOverlay OvrDisabledWarningMessage; // 0x16E0(0x8)
		USizeBox SizeBox_Primary; // 0x16E8(0x8)
		USpacer Spacer_Mobile; // 0x16F0(0x8)
		USqueegeeInjectionSlot_C SqueegeeSlot_Lock; // 0x16F8(0x8)
		UImage TileStroke; // 0x1700(0x8)
		UImage TileThumbnail; // 0x1708(0x8)
		UWBP_Discovery_Favorite_C WBP_Discovery_Favorite; // 0x1710(0x8)
		UWBP_Discovery_WarningIcon_C WBP_Discovery_WarningIcon; // 0x1718(0x8)
		UWBP_LockedStatus_C WBP_LockedStatus; // 0x1720(0x8)
		bool IsKeyArtValid; // 0x1728(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1729(0x7) UNKNOWN PROPERTY
		UTexture DefaultImage; // 0x1730(0x8)
		bool IsTileActive; // 0x1738(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x1739(0x7) UNKNOWN PROPERTY
		FTimerHandle DisabledClickTimer; // 0x1740(0x8)
		double DisabledClickDuration; // 0x1748(0x8)
		bool IsActivityValid; // 0x1750(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1751(0x7) UNKNOWN PROPERTY
		FVector2D TileSize; // 0x1758(0x10)
		FName TextureParam; // 0x1768(0x4)
		FName ThumbnailAlpha; // 0x176C(0x4)
		FName ThumbnailScale; // 0x1770(0x4)
		FName ThumbnailDisabledOverlay; // 0x1774(0x4)
		FName FrameColor; // 0x1778(0x4)
		FLinearColor BaseColor; // 0x177C(0x10)
		FLinearColor EpicColor; // 0x178C(0x10)
		FLinearColor StrokeColor; // 0x179C(0x10)
		FLinearColor DisabledColor; // 0x17AC(0x10)
		unsigned char UnknownData09_6[0x4]; // 0x17BC(0x4) UNKNOWN PROPERTY
		double BannerColorAnimator; // 0x17C0(0x8)
		double VerticalTilePaddingOffset; // 0x17C8(0x8)
		bool HideDetails; // 0x17D0(0x1)
		bool IsPurchaseRequired; // 0x17D1(0x1)
		bool bAllowThumbnailHoverRehoverAnim; // 0x17D2(0x1)
		unsigned char UnknownData10_6[0x5]; // 0x17D3(0x5) UNKNOWN PROPERTY
		double GridSingleColumnWidth; // 0x17D8(0x8)
		double GridSingleGutterWidth; // 0x17E0(0x8)
		double Ratio16x9ConvertWidthToHeight; // 0x17E8(0x8)
		bool IsPromotedHeroRow; // 0x17F0(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x17F1(0x3) UNKNOWN PROPERTY
		int32_t DefaultGameModeTextSize; // 0x17F4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserTileDetailsDisplay.ActivityBrowserTileDetailsDisplay_C");
			return ret;
		}

		void Set Game Mode Text Size(int32_t FontSize); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB53E4800
		void Set Game Mode Text Size Override(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E4700
		void ShouldPlayTileVideo(bool& bOutResult); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB53E4600
		void SetIsPromotedHero(bool IsPromotedHeroCarousel); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E4500
		void SetFirstTimeModalStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E4400
		void SetDisabledThumbnailOverlay(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E4300
		void Grow Tile on Select for Non Hero Rows(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E8400
		void SetHideDetails(bool Hide Details); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E8300
		void ColumnSizeToTileSize(int32_t NewColumnSize, FVector2D& NewTileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB53E8200
		void SetTileSize(FVector2D Size); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E8100
		void SetExtraVerticalPaddingOffset(double InVerticalTilePadding); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E8000
		void SetBannerColorAnimator(double NewParam); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E7F00
		void SetFavoriteVisibility(bool IsFavorited); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E7E00
		void ResetOnImageLoadedAnimation(bool IsLoaded); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E7D00
		void ResetOnHoverSelectAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E7C00
		void UpdateRequiresPurchase(bool IsPurchaseRequired); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E7B00
		void SetDisabledText(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB53E7A00
		void UpdateEpicActivityStyling(FString CreatorDisplayName); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB53E7900
		void SetDetailsButtonAvailable(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53E7800
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E7700
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB53E7600
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB53E7500
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB53E7400
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53E7300
		void OnIsFavoriteChanged(bool bIsFavorite); // Flags: Event|Protected|BlueprintEvent 0x15DB53E7200
		void OnPreviewImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x15DB53E7100
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E7000
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E6F00
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E6E00
		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x15DB53E6D00
		void OnPartySizeChanged(int32_t PartySize); // Flags: Event|Protected|BlueprintEvent 0x15DB53E6C00
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E6B00
		void DisableClickTimerExpired(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53E6A00
		void OnLocalPlayerPromotedToLeader(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E6900
		void OnLocalPlayerDemoted(); // Flags: Event|Protected|BlueprintEvent 0x15DB53E6800
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53E6700
		void OnRequiresPurchaseChanged(bool bRequiresPurchase); // Flags: Event|Protected|BlueprintEvent 0x15DB53E6600
		void TestActivityTileRequirePurchaseTrue(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53E6500
		void TestActivityTileRequirePurchaseFalse(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53E6400
		void OnUpdateColumnSize(int32_t NewColumnSize); // Flags: BlueprintEvent 0x15DB53EA500
		void OnLogoImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x15DB53EA400
		void UpdateCCU(int32_t CCUCount); // Flags: Event|Protected|BlueprintEvent 0x15DB53EA300
		void OnFriendsPlayingChanged(int32_t NumPlaying); // Flags: Event|Protected|BlueprintEvent 0x15DB53EA100
		void UpdateSqueegeeWidgets(UFortGameActivity GameActivity); // Flags: Event|Protected|BlueprintEvent 0x15DB53EA000
		void ExecuteUbergraph_ActivityBrowserTileDetailsDisplay(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB53E9F00
	};

}
