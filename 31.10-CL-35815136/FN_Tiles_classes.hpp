#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Tiles
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/Tiles/Categories/WBP_CategoryTile.WBP_CategoryTile_C
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x13B8 - 0x1390)
	class UWBP_CategoryTile_C : public UCommonButtonBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1390(0x8)
		UFortActivityViewModel* FortActivityViewModel; // 0x1398(0x8)
		UWBP_UIKit_Block_Outline_C* Block_Outline; // 0x13A0(0x8)
		UCommonTextBlock* Text_CategoryTitle; // 0x13A8(0x8)
		UClass* ActivityCategoryPageViewClass; // 0x13B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Categories/WBP_CategoryTile.WBP_CategoryTile_C");
			return ret;
		}

		void SetFortActivityViewModel(UFortActivityViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Display Name(FText In Display Name); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryContentPushed_E44531CF45620B12E753548D2E7E69C7(UCommonActivatableWidget* ActivatableWidget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_CategoryTile(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/PlayingNow/WBP_PlayingNow_Tile.WBP_PlayingNow_Tile_C
	// Inherited from UWBP_IslandTile_Minimal_C -> UFortActivityTileDetailsDisplay -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1780 - 0x1738)
	class UWBP_PlayingNow_Tile_C : public UWBP_IslandTile_Minimal_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1738(0x8)
		UWBP_PlayingNow_Info_C* Block_PlayingInfo; // 0x1740(0x8)
		UClass* PlayingNowInfoClass; // 0x1748(0x8)
		UWBP_PlayingNow_Background_C* Block_Background; // 0x1750(0x8)
		UClass* BackgroundClass; // 0x1758(0x8)
		FMulticastInlineDelegate TileSizeSet; // 0x1760(0x10)
		FVector2D TileSizePlayingNow; // 0x1770(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/PlayingNow/WBP_PlayingNow_Tile.WBP_PlayingNow_Tile_C");
			return ret;
		}

		void ConvertParamsToTileSize(int32_t NewSize, bool IsSquareTiles, FVector2D& NewTileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIslandDescription(FText IslandDescription); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSqueegeeWidgets(UFortActivityViewModel* ActivityVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIslandName(FText IslandName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveIndentation(FText InputText, FText& OutputText); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Add Background(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddPlayingNowInfo(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileSizeSetOverrideContainerSize(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_PlayingNow_Tile(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TileSizeSet__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Homebar.WBP_IslandTile_Homebar_C
	// Inherited from UWBP_IslandTile_Minimal_C -> UFortActivityTileDetailsDisplay -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1758 - 0x1738)
	class UWBP_IslandTile_Homebar_C : public UWBP_IslandTile_Minimal_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1738(0x8)
		UWBP_UIKit_Divider_Base_C* Divider; // 0x1740(0x8)
		UCommonVisualAttachment* SelectionIndicator; // 0x1748(0x8)
		UImage* indicatorImage; // 0x1750(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Homebar.WBP_IslandTile_Homebar_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleSelect(bool IsCurrentActivity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleSpacer(bool ShouldShowSpacer); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_IslandTile_Homebar(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Full.WBP_IslandTile_Full_C
	// Inherited from UWBP_IslandTile_Minimal_C -> UFortActivityTileDetailsDisplay -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1748 - 0x1738)
	class UWBP_IslandTile_Full_C : public UWBP_IslandTile_Minimal_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1738(0x8)
		UWBP_LockedStatus_C* WBP_LockedStatus; // 0x1740(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Full.WBP_IslandTile_Full_C");
			return ret;
		}

		void OnTileSelectionNotActive(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileSelectionActive(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIslandName(FText IslandName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_IslandTile_Full(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Minimal.WBP_IslandTile_Minimal_C
	// Inherited from UFortActivityTileDetailsDisplay -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x108 (0x1738 - 0x1630)
	class UWBP_IslandTile_Minimal_C : public UFortActivityTileDetailsDisplay	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1630(0x8)
		UFortCountdownTimerVM* FortCountdownTimerVM; // 0x1638(0x8)
		UFortActivityViewModel* FortActivityViewModel; // 0x1640(0x8)
		UWidgetAnimation* Anim_OnHoverUnhoverRehover; // 0x1648(0x8)
		UWidgetAnimation* Anim_OnLoadedImage; // 0x1650(0x8)
		UImage* ByEpicLogo; // 0x1658(0x8)
		UImage* CMS_CreatorLogo; // 0x1660(0x8)
		USpacer* ContextMenuSpacer; // 0x1668(0x8)
		UImage* ErrorIcon; // 0x1670(0x8)
		UGridPanel* GridRoot_SecondColForOutsideContent; // 0x1678(0x8)
		UHorizontalBox* HBox_FavoriteOrCatIcon; // 0x1680(0x8)
		UNamedSlot* LockSlot; // 0x1688(0x8)
		UOverlay* Overlay; // 0x1690(0x8)
		USqueegeeInjectionSlot_C* SqueegeeSlot_Lock; // 0x1698(0x8)
		USqueegeeInjectionSlot_C* SqueegeeSlot_Tag; // 0x16A0(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_CategoryIcon; // 0x16A8(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_Favorite; // 0x16B0(0x8)
		UCommonVisibilitySwitcher* Switcher_Logo; // 0x16B8(0x8)
		UCommonVisibilitySwitcher* Switcher_SqueegeeLockOrIcons; // 0x16C0(0x8)
		UCommonVisibilitySwitcher* Switcher_STWLockOrHighlight; // 0x16C8(0x8)
		UImage* TileThumbnail; // 0x16D0(0x8)
		UWBP_Discover_Tile_Base_C* WBP_Discover_Tile_Base; // 0x16D8(0x8)
		UWBP_UIKit_Badge_C* WBP_UIKit_Badge; // 0x16E0(0x8)
		UWBP_UIKit_Highlight_C* WBP_UIKit_Highlight; // 0x16E8(0x8)
		FName TextureParam; // 0x16F0(0x4)
		FName ThumbnailDisabledOverlay; // 0x16F4(0x4)
		bool IsFullTile; // 0x16F8(0x1)
		bool DisableCornerInfo; // 0x16F9(0x1)
		bool IsTileInCreatorPage; // 0x16FA(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x16FB(0x1) UNKNOWN PROPERTY
		FName RecommendModalName; // 0x16FC(0x4)
		bool IsRecommendedModal; // 0x1700(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1701(0x3) UNKNOWN PROPERTY
		FName ContextMenuFavoriteName; // 0x1704(0x4)
		bool IsOldDiscoverCode; // 0x1708(0x1)
		bool AllowTileClicks; // 0x1709(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x170A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFocusGained; // 0x1710(0x10)
		bool HandlesOwnStartVisibilityImpression; // 0x1720(0x1)
		bool IsUsingFocusForOutlineVisuals; // 0x1721(0x1)
		ECountdownTimerState CurrentTimerState; // 0x1722(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x1723(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate ViewAllTileClicked; // 0x1728(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Minimal.WBP_IslandTile_Minimal_C");
			return ret;
		}

		void __ab1a7c96-4102-98cd-f3d8-bd9a3b5b6b72_SourceToDest(bool& ShouldAddInfoModal); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __1807582c-4707-ff6d-1b83-469593d640cb_SourceToDest(bool& IsPerchasedAndNotLocked); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __cea301eb-44d0-b2af-7de1-40b68d5d0eca_SourceToDest(ESlateVisibility& IconVisibility); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __40f33fe1-4c6f-2fee-256a-61be461aca2f_SourceToDest(FVector2D& NewTileSize); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void __17bf98a4-4533-78f4-90a0-50ba916912d2_SourceToDest(UWidget* VisibleWidget); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortCountdownTimerVM(UFortCountdownTimerVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFortActivityViewModel(UFortActivityViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleSelect(bool IsCurrentActivity); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleSpacer(bool ShouldShowSpacer); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIslandDescription(FText IslandDescription); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Should Add Info Modal to Context Menu(EFortCreativeDiscoveryPanelType PanelType, FString ReasonSurfaced, bool& ShouldAddInfoModal); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPurchaseRequiredAndActivityLocked(bool PurchaseRequired, bool ActivityLocked, bool& IsPerchasedAndNotLocked); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsTimerActive(bool& IsActive); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TimerTextUpdate(FText TimerText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CountdownStateUpdate(ECountdownTimerState TimerState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsUsingFocusNavigationOnKBM(bool& IsUsingFocusNavigationForOutlineVisuals); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightType(EFortDiscoverLabelStyle Type); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Icon Mobile Multiplier(UImage* ImageObject); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLinkCategoryIconVisibility(EFortActivityLinkCategory LinkCategoryType, bool IsByEpic, ESlateVisibility& IconVisibility); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConvertParamsToTileSize(int32_t NewSize, bool IsSquareTiles, FVector2D& NewTileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply BP_OnHoldTriggered(ECommonInputType CurrentInputType); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCreatorLogoOverrideVisible(EActivityImageLoadingState CreatorLogoLoadingState, UTexture* CreatorLogoTexture, UWidget* VisibleWidget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Context Menu Why You Are Seeing This Modal(bool ShouldAddInfoModal); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsPreviewTile(bool IsPreviewTile); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Texture Margin To Resolution(UMaterialInstanceDynamic* MaterialInstance); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIconPaddingForLockOrFavorite(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetInvalidActivityReason(EFortInvalidActivityReason InvalidActivityReason); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsTileEnabled(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsCurrentActivity(bool IsCurrentActivity); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCornerRadius(FLinearColor CornerRadius); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDisabledThumbnailOverlay(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSqueegeeWidgets(UFortActivityViewModel* ActivityVM); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsContentGatedUpdated(bool IsContentGated); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnByEpicUpdated(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileSelectionNotActive(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileSelectionActive(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLockAndHighlightVisibility(bool IsPurchasedAndNotLocked); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Image Spinner State(EActivityImageLoadingState InImageState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetImageErrorState(EActivityImageLoadingState ImageLoadState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCCUCount(int32_t CCUCount); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsFavorite(bool IsFavorited); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIslandName(FText IslandName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Image State(EActivityImageLoadingState LoadingEnum); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Image Success State(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFriendsPlayingCount(int32_t FriendsPlayingCount); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRespondToTileViewVisibilityChange(bool bIsVisible); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OpenInfoModal(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModalDismissed(int32_t ButtonIndex); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddContextMenuItems(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void WrapperCleanupContextMenuOnRelease(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GoToLobby(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MoreFromCreator(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ViewDetails(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddInfoModalToContextMenu(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleFavorite(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Up Favorite Interaction(bool IsFavorited); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuVisibilityChanged(bool IsVisible); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnResetPrimaryText(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModalClosed(int32_t ButtonIndex); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_IslandTile_Minimal(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ViewAllTileClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFocusGained__DelegateSignature(UWBP_IslandTile_Minimal_C* FocusedItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/Creator/WBP_CreatorTile.WBP_CreatorTile_C
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x4C (0x13DC - 0x1390)
	class UWBP_CreatorTile_C : public UCommonButtonBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1390(0x8)
		UFortPlayerPageProfileVM* FortPlayerPageProfileVM; // 0x1398(0x8)
		UWidgetAnimation* Anim_OnLoadedImage; // 0x13A0(0x8)
		UWBP_Creator_AvatarImage_C* WBP_Creator_AvatarImage; // 0x13A8(0x8)
		UWBP_Discover_Tile_Base_C* WBP_Discover_Tile_Base; // 0x13B0(0x8)
		FMulticastInlineDelegate OnFocusGained; // 0x13B8(0x10)
		FName ContextMenuFollowName; // 0x13C8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x13CC(0x4) UNKNOWN PROPERTY
		UWBP_Creator_FollowIndicator_Button_C* PlusFollowButton; // 0x13D0(0x8)
		FName Action_to_Remove; // 0x13D8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Creator/WBP_CreatorTile.WBP_CreatorTile_C");
			return ret;
		}

		void SetFortPlayerPageProfileVM(UFortPlayerPageProfileVM* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetColumnSize(int32_t ColSize, FVector2D& TileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHandleInputMethodChanged(ECommonInputType NewInputType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsFollowing(bool IsFollowing); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetImageTexture(EActivityImageLoadingState LoadingState); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsPlayingNow(bool IsPlaying); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnResetPrimaryText(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddContextMenuItems(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ViewMoreByCreatorPage(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddFollowUnfollowToContextMenu(bool IsFollowing); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleFollowing(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_CreatorTile_PlusFollowButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_CreatorTile(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFocusGained__DelegateSignature(UWBP_CreatorTile_C* FocusedItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_VideoCycle.WBP_IslandTile_VideoCycle_C
	// Inherited from UFortActivityVideoCycle -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x31 (0x369 - 0x338)
	class UWBP_IslandTile_VideoCycle_C : public UFortActivityVideoCycle	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x8)
		UWidgetAnimation* FadeInBumper; // 0x340(0x8)
		UWidgetAnimation* AnimVideoOpacity; // 0x348(0x8)
		USqueegeeInjectionSlot_C* SqueegeeSlot_Bumper; // 0x350(0x8)
		bool bOutroPlaying; // 0x358(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x359(0x7) UNKNOWN PROPERTY
		FTimerHandle VideoBumperTimer; // 0x360(0x8)
		bool bIntroHasPlayed; // 0x368(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_VideoCycle.WBP_IslandTile_VideoCycle_C");
			return ret;
		}

		void SnapToEndOfAnimation(UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_B21AB4AE4EC0B51DF96A0486175BBE38(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_F38A6F764D4DA9D60B8D5AA9CEC8DF4B(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayVideoIntro(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayVideoOutro(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayVideoBumper(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeOutVideoBumper(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeInVideoBumper(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DelayedPlayVideo(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_IslandTile_VideoCycle(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_VideoV2.WBP_IslandTile_VideoV2_C
	// Inherited from UFortVideoWidgetBase -> UEpicMediaVideoWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x4F0 - 0x4D8)
	class UWBP_IslandTile_VideoV2_C : public UFortVideoWidgetBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4D8(0x8)
		UWidgetAnimation* VideoSwapActivityOutro; // 0x4E0(0x8)
		UImage* Image_VideoTexture; // 0x4E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_VideoV2.WBP_IslandTile_VideoV2_C");
			return ret;
		}

		void PlayOutro(bool PlayAnimation); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Reset(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_IslandTile_VideoV2(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small.WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small_C
	// Inherited from UFortActivityBrowserPlayWithFriendsTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x5C (0x151C - 0x14C0)
	class UWBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small_C : public UFortActivityBrowserPlayWithFriendsTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x14C0(0x8)
		UWidgetAnimation* Anim_OnHoverSelect; // 0x14C8(0x8)
		UImage* BG; // 0x14D0(0x8)
		USpacer* ContentSpacer; // 0x14D8(0x8)
		UVerticalBox* Grid_TopInfo; // 0x14E0(0x8)
		UCommonRichTextBlock* RichText_DisplayNamesOrSingleFriendName; // 0x14E8(0x8)
		USizeBox* SizeBox_Icons; // 0x14F0(0x8)
		USizeBox* SizeBox_MaxWidthForLongPresenceToForceEllipses; // 0x14F8(0x8)
		USqueegeeInjectionSlot_C* SqueegeeSlot_Tag; // 0x1500(0x8)
		UCommonTextBlock* Text_RichPresence; // 0x1508(0x8)
		UWBP_Discover_Tile_Base_C* WBP_Discover_Tile_Base; // 0x1510(0x8)
		FName AnimInvite; // 0x1518(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small.WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small_C");
			return ret;
		}

		void SetCCUCount(int32_t CCUCount); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Arabic Language(bool& IsArabic); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInviteVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSinglePlayerVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePartyMemberNames(FText& Names); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSingleFriendName(FText& SingleFriendName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRichPresence(FText& RichPresence); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLastInteraction(FText& LastInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_PartyInformationUpdated(bool bInIsTileSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateOtherPlayersSubText(FText& OtherPlayersSubText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileActiveChanged(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateColumnSize(int32_t NewColumnSize); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void View in Sidebar(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGameActivityChanged(UFortGameActivity* GameActivity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddContextMenuItems(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty_RoundedCorners.WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_C
	// Inherited from UFortActivityBrowserPlayWithFriendsTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x15D0 - 0x14C0)
	class UWBP_ActivityBrowserTile_JoinableParty_RoundedCorners_C : public UFortActivityBrowserPlayWithFriendsTile	
	{
	public:
		unsigned char UnknownData00_1[0x110]; // 0x14C0(0x110) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty_RoundedCorners.WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_C");
			return ret;
		}

		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCCUCount(int32_t CCUCount); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Arabic Language(bool& IsArabic); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Right Left Background(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set CTAButton Padding(ECommonInputType InputType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetThumbnail(UTexture* Texture, bool IsLoaded); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInviteVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Single Player Visuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPrivacyVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextureBeginLoading(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextureLoadingComplete(UTexture* ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRichPresence(FText& RichPresence); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePartyMemberNames(FText& Names); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSingleFriendName(FText& SingleFriendName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLastInteraction(FText& LastInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelectionChanged(bool bIsSelected); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_PartyInformationUpdated(bool bInIsTileSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateIslandThumbnail(UTexture* ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateOtherPlayersSubText(FText& OtherPlayersSubText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileActiveChanged(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCTAButtonInteraction(bool bIsInteractionEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_WBP_CTA_ButtonPrimary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGameActivityChanged(UFortGameActivity* GameActivity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void View in Sidebar(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddContextMenuItems(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ActivityBrowserTile_JoinableParty_RoundedCorners(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty.WBP_ActivityBrowserTile_JoinableParty_C
	// Inherited from UFortActivityBrowserPlayWithFriendsTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE1 (0x15A1 - 0x14C0)
	class UWBP_ActivityBrowserTile_JoinableParty_C : public UFortActivityBrowserPlayWithFriendsTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x14C0(0x8)
		UWidgetAnimation* Anim_OnTouchSelected; // 0x14C8(0x8)
		UWidgetAnimation* Anim_OnImageLoaded; // 0x14D0(0x8)
		UWidgetAnimation* Anim_OnRemove; // 0x14D8(0x8)
		UWidgetAnimation* Anim_OnHoverSelect; // 0x14E0(0x8)
		UImage* BG; // 0x14E8(0x8)
		UWBP_Tile_FocusOutline_C* FocusOutline; // 0x14F0(0x8)
		UCommonRichTextBlock* RichText_DisplayNamesOrSingleFriendName; // 0x14F8(0x8)
		USizeBox* SizeBox_Icons; // 0x1500(0x8)
		USpacer* Spacer; // 0x1508(0x8)
		USpacer* Spacer_TileSize; // 0x1510(0x8)
		UCommonTextBlock* Text_InviteToParty; // 0x1518(0x8)
		UCommonTextBlock* Text_JoinableParty; // 0x1520(0x8)
		UCommonTextBlock* Text_OtherPlayers; // 0x1528(0x8)
		UCommonTextBlock* Text_RichPresence; // 0x1530(0x8)
		UCommonTextBlock* Text_SingleUserName; // 0x1538(0x8)
		UCommonTextBlock* Text_TimeAgoPartied; // 0x1540(0x8)
		UWBP_UIKit_Button_Quiet_C* WBP_CTA_ButtonPrimary; // 0x1548(0x8)
		UWBP_JoinableParty_State_Private_C* WBP_JoinableParty_State_Private; // 0x1550(0x8)
		FLinearColor ColorSharedTextAndImages; // 0x1558(0x10)
		bool DebugDesignTime_IsActiveInvite; // 0x1568(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1569(0x3) UNKNOWN PROPERTY
		int32_t DebugDesignTime_PartyCount; // 0x156C(0x4)
		bool DebugDesignTime_IsPrivateParty; // 0x1570(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1571(0x7) UNKNOWN PROPERTY
		FVector2D TileSize; // 0x1578(0x10)
		FName FlareOpacity; // 0x1588(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x158C(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* BackgroundDynamicMaterialInstance; // 0x1590(0x8)
		FName ThumbnailOpacity; // 0x1598(0x4)
		FName ThumbnailTexture; // 0x159C(0x4)
		ECommonInputType Current_Input_Type; // 0x15A0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty.WBP_ActivityBrowserTile_JoinableParty_C");
			return ret;
		}

		void Is Arabic Language(bool& IsArabic); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Right Left Background(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set CTAButton Padding(ECommonInputType InputType); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetThumbnail(UTexture* Texture, bool IsLoaded); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTileSize(FVector2D Size); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInviteVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSinglePlayerVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPrivacyVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextureBeginLoading(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextureLoadingComplete(UTexture* ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRichPresence(FText& RichPresence); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePartyMemberNames(FText& Names); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_ActivityBrowserTile_JoinableParty_WBP_CTA_ButtonPrimary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSingleFriendName(FText& SingleFriendName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLastInteraction(FText& LastInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelectionChanged(bool bIsSelected); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_PartyInformationUpdated(bool bInIsTileSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateIslandThumbnail(UTexture* ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateOtherPlayersSubText(FText& OtherPlayersSubText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileActiveChanged(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ActivityBrowserTile_JoinableParty(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/WBP_Discover_Tile_Base.WBP_Discover_Tile_Base_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x160 (0x438 - 0x2D8)
	class UWBP_Discover_Tile_Base_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UWidgetAnimation* Anim_OnHoverSelect; // 0x2E0(0x8)
		UWBP_UIKit_Block_Outline_C* Block_Outline; // 0x2E8(0x8)
		UGridPanel* Grid_Main; // 0x2F0(0x8)
		UGridPanel* PrimaryRow; // 0x2F8(0x8)
		UGridPanel* SecondaryRow; // 0x300(0x8)
		USizeBox* SizeBox_main; // 0x308(0x8)
		UNamedSlot* Slot_Right; // 0x310(0x8)
		UNamedSlot* Slot_TileContents; // 0x318(0x8)
		UFortVisualAttachment* VisualAttachment_OutsideContent; // 0x320(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarHackButton_ContextMenu; // 0x328(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x330(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C* WBP_UIKit_ContextMenuAnchorButton; // 0x338(0x8)
		FVector2D TileSize; // 0x340(0x10)
		bool IsJoinablePartyTile; // 0x350(0x1)
		bool IsOutlineBlockCircular; // 0x351(0x1)
		bool DesignTimeIsSquareTiles; // 0x352(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x353(0x5) UNKNOWN PROPERTY
		FDataTableRowHandle No_Input_Action_Row; // 0x358(0x10)
		FDataTableRowHandle ContextMenuInputAction; // 0x368(0x10)
		bool IsTileActive; // 0x378(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x379(0x7) UNKNOWN PROPERTY
		UUIKitContextMenuActionContext* ContextMenuActionContext; // 0x380(0x8)
		FMulticastInlineDelegate OnContextMenuVisibilityChanged; // 0x388(0x10)
		FVector2D DynamicCalculatedTileSize; // 0x398(0x10)
		int32_t TileItemIndex; // 0x3A8(0x4)
		bool RowHasViewAll; // 0x3AC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x3AD(0x3) UNKNOWN PROPERTY
		UClass* ViewAllClass; // 0x3B0(0x8)
		UWBP_ViewAll_Tile_C* Block_ViewAll; // 0x3B8(0x8)
		bool UseIconBlock; // 0x3C0(0x1)
		bool UsePrimaryTextBlock; // 0x3C1(0x1)
		bool UseSecondaryTextBlock; // 0x3C2(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x3C3(0x5) UNKNOWN PROPERTY
		UWBP_UIKit_Block_Image_C* Block_Icon; // 0x3C8(0x8)
		UWBP_Discover_Tile_TextPrimary_C* Block_PrimaryText; // 0x3D0(0x8)
		UWBP_Discover_Tile_TextSecondary_C* Block_SecondaryText; // 0x3D8(0x8)
		UClass* TextClass; // 0x3E0(0x8)
		UClass* SecondaryTextClass; // 0x3E8(0x8)
		UTexture2D* Icon; // 0x3F0(0x8)
		UMaterialInstance* IconMaterial; // 0x3F8(0x8)
		FSlateColor SecondaryTextColor; // 0x400(0x14)
		TEnumAsByte<ETextJustify> PrimaryTextJustification; // 0x414(0x1)
		TEnumAsByte<ETextJustify> SecondaryTextJustification; // 0x415(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x416(0x2) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSetPrimaryTextFromVM; // 0x418(0x10)
		FMulticastInlineDelegate OnSetTileContainerSizeOverride; // 0x428(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/WBP_Discover_Tile_Base.WBP_Discover_Tile_Base_C");
			return ret;
		}

		void Set Tile Container Size Override(FVector2D TileSizeOverrideWithOutsideContent); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateNamedSlotVisibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Secondary Text as CCU(int32_t CCUCount); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPrimaryTextFocused(bool IsFocused); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemovePrimaryTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSecondaryTextColorAndOpacity(bool UseDefault, FSlateColor OverrideColor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSecondaryTextJustification(TEnumAsByte<ETextJustify> Justification); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSecondaryTextVisibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePrimaryTextJustification(TEnumAsByte<ETextJustify> Justification); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePrimaryTextScrolling(bool IsMarqueeScrollingEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePrimaryTextBlock(bool UsePrimaryText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSecondaryText(FText SecondaryText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPrimaryText(FText PrimaryText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetParentOfRightSlot(bool IsPrimaryRow); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateIconVisibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateIcon(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSecondaryTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddPrimaryTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveIconBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddIconBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsViewAllTile(int32_t DisplayedEntryWidgetsLength); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveViewAllBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddViewAllBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetAnimationState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Dynamic Tile Size(FVector2D& DynamicTileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOutlineSquareOrCircular(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRightClickMouse(FPointerEvent MouseEvent, FEventReply& WasHandled); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DesignTimeSetTestColumnSize(int32_t NewSize, bool IsSquareTiles); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CleanupContextMenuOnRelease(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateContextMenuButtonsVisibility(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileBaseSelectionNotActive(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileBaseSelectionActive(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Tile Size(FVector2D InSize); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ColumnSizeToTileSize(int32_t NewColumnSize, bool IsSquareTiles, FVector2D& NewTileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_IslandTile_Minimal_WBP_BottomBarHackButton_ContextMenu_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveInteractionByName(FName ActionToRemove); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveAllInteractions(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupContextMenu(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseContextMenu(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Discover_Tile_Base(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTileContainerSizeOverride__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPrimaryTextFromVM__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContextMenuVisibilityChanged__DelegateSignature(bool IsVisible); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_Discovery_ContextualButton.WBP_Discovery_ContextualButton_C
	// Inherited from UWBP_UIKit_Button_Generic_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1768 - 0x1758)
	class UWBP_Discovery_ContextualButton_C : public UWBP_UIKit_Button_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1758(0x8)
		UWBP_UIKit_Block_Outline_C* UIKit_Block_Outline; // 0x1760(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_Discovery_ContextualButton.WBP_Discovery_ContextualButton_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Discovery_ContextualButton(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/PlayingNow/WBP_PlayingNow_Background.WBP_PlayingNow_Background_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UWBP_PlayingNow_Background_C : public UCommonUserWidget	
	{
	public:
		UImage* LiveFeedback; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/PlayingNow/WBP_PlayingNow_Background.WBP_PlayingNow_Background_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Tiles/PlayingNow/WBP_PlayingNow_Info.WBP_PlayingNow_Info_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UWBP_PlayingNow_Info_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		USqueegeeInjectionSlot_C* SqueegeeSlot_Tag; // 0x2E0(0x8)
		UCommonTextBlock* Text_ActivityDescription; // 0x2E8(0x8)
		UCommonTextBlock* Text_ActivityName; // 0x2F0(0x8)
		UWBP_Discover_Tile_TextSecondary_C* TextSecondary_PlayingNow; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/PlayingNow/WBP_PlayingNow_Info.WBP_PlayingNow_Info_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_PlayingNow_Info(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/Creator/WBP_Creator_FollowIndicator_Button.WBP_Creator_FollowIndicator_Button_C
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1398 - 0x1390)
	class UWBP_Creator_FollowIndicator_Button_C : public UCommonButtonBase	
	{
	public:
		UWBP_UIKit_StatusIndicator_C* WBP_UIKit_StatusIndicator_Following; // 0x1390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Creator/WBP_Creator_FollowIndicator_Button.WBP_Creator_FollowIndicator_Button_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Tiles/JoinableParty/WBP_JoinableParty_State_Private.WBP_JoinableParty_State_Private_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UWBP_JoinableParty_State_Private_C : public UUserWidget	
	{
	public:
		UWBP_UIKit_StatusIndicator_C* WBP_UIKit_StatusIndicator; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/JoinableParty/WBP_JoinableParty_State_Private.WBP_JoinableParty_State_Private_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Tiles/WBP_Discover_Tile_TextPrimary.WBP_Discover_Tile_TextPrimary_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UWBP_Discover_Tile_TextPrimary_C : public UCommonUserWidget	
	{
	public:
		UWidgetAnimation* Focused; // 0x2D8(0x8)
		UCommonTextBlock* Text_PrimaryInfo; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/WBP_Discover_Tile_TextPrimary.WBP_Discover_Tile_TextPrimary_C");
			return ret;
		}

		void SetBlockFocused(bool IsFocused); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlockScrollingEnabled(bool IsMarqueeScrollingEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlockTextJustification(TEnumAsByte<ETextJustify> TextJustification); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlockText(FText BlockText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/WBP_Discover_Tile_TextSecondary.WBP_Discover_Tile_TextSecondary_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x24 (0x2FC - 0x2D8)
	class UWBP_Discover_Tile_TextSecondary_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UCommonTextBlock* Text_TileBlock; // 0x2E0(0x8)
		FSlateColor DefaultTextColorAndOpacity; // 0x2E8(0x14)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/WBP_Discover_Tile_TextSecondary.WBP_Discover_Tile_TextSecondary_C");
			return ret;
		}

		void SetBlockTextJustification(TEnumAsByte<ETextJustify> Justification); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlockTextColorAndOpacity(bool UseDefault, FSlateColor OverrideColor); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlockText(FText SecondaryText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Discover_Tile_TextSecondary(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Tiles/ViewAll/WBP_ViewAll_Tile.WBP_ViewAll_Tile_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x19 (0x2F1 - 0x2D8)
	class UWBP_ViewAll_Tile_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UImage* ViewAllIcon; // 0x2E0(0x8)
		UWBP_UIKit_Backplate_C* WBP_UIKit_Backplate; // 0x2E8(0x8)
		bool IsCircular; // 0x2F0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/ViewAll/WBP_ViewAll_Tile.WBP_ViewAll_Tile_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnViewAllHovered(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnViewAllUnhovered(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_ViewAll_Tile(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
