#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Tiles
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/Tiles/ViewAll/WBP_ViewAll_Tile.WBP_ViewAll_Tile_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x19 (0x2F9 - 0x2E0)
	class UWBP_ViewAll_Tile_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
		UImage ViewAllIcon; // 0x2E8(0x8)
		UWBP_UIKit_Backplate_C WBP_UIKit_Backplate; // 0x2F0(0x8)
		bool IsCircular; // 0x2F8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/ViewAll/WBP_ViewAll_Tile.WBP_ViewAll_Tile_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F3B0600
		void OnViewAllHovered(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F3B0800
		void OnViewAllUnhovered(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5F3B0700
		void ExecuteUbergraph_WBP_ViewAll_Tile(int32_t EntryPoint); // Flags: Final 0x15D5F3B0200
	};


	// Class /DiscoveryBrowser/Tiles/WBP_Discover_Tile_TextSecondary.WBP_Discover_Tile_TextSecondary_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x24 (0x304 - 0x2E0)
	class UWBP_Discover_Tile_TextSecondary_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
		UCommonTextBlock Text_TileBlock; // 0x2E8(0x8)
		FSlateColor DefaultTextColorAndOpacity; // 0x2F0(0x14)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/WBP_Discover_Tile_TextSecondary.WBP_Discover_Tile_TextSecondary_C");
			return ret;
		}

		void SetBlockTextJustification(TEnumAsByte Justification); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F3BA400
		void SetBlockTextColorAndOpacity(bool UseDefault, FSlateColor OverrideColor); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F3B6500
		void SetBlockText(FText SecondaryText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F3B4200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F3B0500
		void ExecuteUbergraph_WBP_Discover_Tile_TextSecondary(int32_t EntryPoint); // Flags: Final 0x15D5F3B0100
	};


	// Class /DiscoveryBrowser/Tiles/WBP_Discover_Tile_TextPrimary.WBP_Discover_Tile_TextPrimary_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UWBP_Discover_Tile_TextPrimary_C : public UCommonUserWidget	
	{
	public:
		UWidgetAnimation Focused; // 0x2E0(0x8)
		UCommonTextBlock Text_PrimaryInfo; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/WBP_Discover_Tile_TextPrimary.WBP_Discover_Tile_TextPrimary_C");
			return ret;
		}

		void SetBlockFocused(bool IsFocused); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F3BA300
		void SetBlockScrollingEnabled(bool IsMarqueeScrollingEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F3B9600
		void SetBlockTextJustification(TEnumAsByte TextJustification); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F3B9500
		void SetBlockText(FText BlockText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F3B8B00
	};


	// Class /DiscoveryBrowser/Tiles/JoinableParty/WBP_JoinableParty_State_Private.WBP_JoinableParty_State_Private_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UWBP_JoinableParty_State_Private_C : public UUserWidget	
	{
	public:
		UWBP_UIKit_StatusIndicator_C WBP_UIKit_StatusIndicator; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/JoinableParty/WBP_JoinableParty_State_Private.WBP_JoinableParty_State_Private_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Tiles/Creator/WBP_Creator_FollowIndicator_Button.WBP_Creator_FollowIndicator_Button_C
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1398 - 0x1390)
	class UWBP_Creator_FollowIndicator_Button_C : public UCommonButtonBase	
	{
	public:
		UWBP_UIKit_StatusIndicator_C WBP_UIKit_StatusIndicator_Following; // 0x1390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Creator/WBP_Creator_FollowIndicator_Button.WBP_Creator_FollowIndicator_Button_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_Discovery_ContextualButton.WBP_Discovery_ContextualButton_C
	// Inherited from UWBP_UIKit_Button_Generic_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1750 - 0x1740)
	class UWBP_Discovery_ContextualButton_C : public UWBP_UIKit_Button_Generic_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1740(0x8)
		UWBP_UIKit_Block_Outline_C UIKit_Block_Outline; // 0x1748(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_Discovery_ContextualButton.WBP_Discovery_ContextualButton_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D4B1AA500
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D4B1AAC00
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15D4B1AA600
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D84EB5F00
		void ExecuteUbergraph_WBP_Discovery_ContextualButton(int32_t EntryPoint); // Flags: Final 0x15D4B1AA300
	};


	// Class /DiscoveryBrowser/Tiles/WBP_Discover_Tile_Base.WBP_Discover_Tile_Base_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x150 (0x430 - 0x2E0)
	class UWBP_Discover_Tile_Base_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
		UWidgetAnimation Anim_OnHoverSelect; // 0x2E8(0x8)
		UWBP_UIKit_Block_Outline_C Block_Outline; // 0x2F0(0x8)
		UGridPanel Grid_Main; // 0x2F8(0x8)
		UGridPanel PrimaryRow; // 0x300(0x8)
		UGridPanel SecondaryRow; // 0x308(0x8)
		USizeBox SizeBox_main; // 0x310(0x8)
		UNamedSlot Slot_Right; // 0x318(0x8)
		UNamedSlot Slot_TileContents; // 0x320(0x8)
		UFortVisualAttachment VisualAttachment_OutsideContent; // 0x328(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarHackButton_ContextMenu; // 0x330(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x338(0x8)
		UWBP_UIKit_ContextMenuAnchorButton_C WBP_UIKit_ContextMenuAnchorButton; // 0x340(0x8)
		FVector2D TileSize; // 0x348(0x10)
		bool IsJoinablePartyTile; // 0x358(0x1)
		bool IsOutlineBlockCircular; // 0x359(0x1)
		bool DesignTimeIsSquareTiles; // 0x35A(0x1)
		unsigned char UnknownData05_6[0x5]; // 0x35B(0x5) UNKNOWN PROPERTY
		FDataTableRowHandle No_Input_Action_Row; // 0x360(0x10)
		FDataTableRowHandle ContextMenuInputAction; // 0x370(0x10)
		bool IsTileActive; // 0x380(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x381(0x7) UNKNOWN PROPERTY
		UUIKitContextMenuActionContext ContextMenuActionContext; // 0x388(0x8)
		FMulticastInlineDelegate OnContextMenuVisibilityChanged; // 0x390(0x10)
		FVector2D DynamicCalculatedTileSize; // 0x3A0(0x10)
		int32_t TileItemIndex; // 0x3B0(0x4)
		bool RowHasViewAll; // 0x3B4(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x3B5(0x3) UNKNOWN PROPERTY
		UClass ViewAllClass; // 0x3B8(0x8)
		UWBP_ViewAll_Tile_C Block_ViewAll; // 0x3C0(0x8)
		bool UseIconBlock; // 0x3C8(0x1)
		bool UsePrimaryTextBlock; // 0x3C9(0x1)
		bool UseSecondaryTextBlock; // 0x3CA(0x1)
		unsigned char UnknownData08_6[0x5]; // 0x3CB(0x5) UNKNOWN PROPERTY
		UWBP_UIKit_Block_Image_C Block_Icon; // 0x3D0(0x8)
		UWBP_Discover_Tile_TextPrimary_C Block_PrimaryText; // 0x3D8(0x8)
		UWBP_Discover_Tile_TextSecondary_C Block_SecondaryText; // 0x3E0(0x8)
		UClass TextClass; // 0x3E8(0x8)
		UClass SecondaryTextClass; // 0x3F0(0x8)
		UTexture2D Icon; // 0x3F8(0x8)
		UMaterialInstance IconMaterial; // 0x400(0x8)
		FSlateColor SecondaryTextColor; // 0x408(0x14)
		TEnumAsByte PrimaryTextJustification; // 0x41C(0x1)
		TEnumAsByte SecondaryTextJustification; // 0x41D(0x1)
		unsigned char UnknownData09_6[0x2]; // 0x41E(0x2) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSetPrimaryTextFromVM; // 0x420(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/WBP_Discover_Tile_Base.WBP_Discover_Tile_Base_C");
			return ret;
		}

		void UpdateNamedSlotVisibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333A600
		void Update Secondary Text as CCU(int32_t CCUCount); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6333E500
		void SetPrimaryTextFocused(bool IsFocused); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F29200
		void RemovePrimaryTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D60F2A300
		void UpdateSecondaryTextColorAndOpacity(bool UseDefault, FSlateColor OverrideColor); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333AB00
		void UpdateSecondaryTextJustification(TEnumAsByte Justification); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333AC00
		void UpdateSecondaryTextVisibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333AD00
		void UpdatePrimaryTextJustification(TEnumAsByte Justification); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333A900
		void UpdatePrimaryTextScrolling(bool IsMarqueeScrollingEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333AA00
		void UpdatePrimaryTextBlock(bool UsePrimaryText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333A700
		void SetSecondaryText(FText SecondaryText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8C021300
		void SetPrimaryText(FText PrimaryText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F28E00
		void SetParentOfRightSlot(bool IsPrimaryRow); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F29300
		void UpdateIconVisibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333A800
		void UpdateIcon(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D6333E700
		void AddSecondaryTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D60F28900
		void AddPrimaryTextBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D60F29100
		void RemoveIconBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D60F26500
		void AddIconBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D5BE13300
		void SetIsViewAllTile(int32_t DisplayedEntryWidgetsLength); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F28F00
		void RemoveViewAllBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D60F2A200
		void AddViewAllBlock(); // Flags: Private|BlueprintCallable|BlueprintEvent 0x15D60F2C600
		void ResetAnimationState(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F2A000
		void Get Dynamic Tile Size(FVector2D& DynamicTileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D60F27100
		void SetOutlineSquareOrCircular(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F29400
		void OnRightClickMouse(FPointerEvent MouseEvent, FEventReply& WasHandled); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D60F26E00
		void DesignTimeSetTestColumnSize(int32_t NewSize, bool IsSquareTiles); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F27400
		void CleanupContextMenuOnRelease(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D60F2C500
		void UpdateContextMenuButtonsVisibility(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D6333E600
		void OnTileBaseSelectionNotActive(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F26B00
		void OnTileBaseSelectionActive(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F26C00
		void Set Tile Size(FVector2D InSize); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F29A00
		void ColumnSizeToTileSize(int32_t NewColumnSize, bool IsSquareTiles, FVector2D& NewTileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D60F27B00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D60F27300
		void BndEvt__WBP_IslandTile_Minimal_WBP_BottomBarHackButton_ContextMenu_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D60F28800
		void RemoveInteractionByName(FName ActionToRemove); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F2A500
		void RemoveAllInteractions(); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F26900
		void SetupContextMenu(); // Flags: BlueprintCallable|BlueprintEvent 0x15D6333E400
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D60F27500
		void CloseContextMenu(); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F28700
		void HandleInputMethodChanged(ECommonInputType NewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F27000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D60F26A00
		void ExecuteUbergraph_WBP_Discover_Tile_Base(int32_t EntryPoint); // Flags: Final 0x15D60F27200
		void OnSetPrimaryTextFromVM__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D60F26D00
		void OnContextMenuVisibilityChanged__DelegateSignature(bool IsVisible); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15D60F26F00
	};


	// Class /DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty.WBP_ActivityBrowserTile_JoinableParty_C
	// Inherited from UFortActivityBrowserPlayWithFriendsTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE1 (0x15A1 - 0x14C0)
	class UWBP_ActivityBrowserTile_JoinableParty_C : public UFortActivityBrowserPlayWithFriendsTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x14C0(0x8)
		UWidgetAnimation Anim_OnTouchSelected; // 0x14C8(0x8)
		UWidgetAnimation Anim_OnImageLoaded; // 0x14D0(0x8)
		UWidgetAnimation Anim_OnRemove; // 0x14D8(0x8)
		UWidgetAnimation Anim_OnHoverSelect; // 0x14E0(0x8)
		UImage BG; // 0x14E8(0x8)
		UWBP_Tile_FocusOutline_C FocusOutline; // 0x14F0(0x8)
		UCommonRichTextBlock RichText_DisplayNamesOrSingleFriendName; // 0x14F8(0x8)
		USizeBox SizeBox_Icons; // 0x1500(0x8)
		USpacer Spacer; // 0x1508(0x8)
		USpacer Spacer_TileSize; // 0x1510(0x8)
		UCommonTextBlock Text_InviteToParty; // 0x1518(0x8)
		UCommonTextBlock Text_JoinableParty; // 0x1520(0x8)
		UCommonTextBlock Text_OtherPlayers; // 0x1528(0x8)
		UCommonTextBlock Text_RichPresence; // 0x1530(0x8)
		UCommonTextBlock Text_SingleUserName; // 0x1538(0x8)
		UCommonTextBlock Text_TimeAgoPartied; // 0x1540(0x8)
		UWBP_UIKit_Button_Quiet_C WBP_CTA_ButtonPrimary; // 0x1548(0x8)
		UWBP_JoinableParty_State_Private_C WBP_JoinableParty_State_Private; // 0x1550(0x8)
		FLinearColor ColorSharedTextAndImages; // 0x1558(0x10)
		bool DebugDesignTime_IsActiveInvite; // 0x1568(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1569(0x3) UNKNOWN PROPERTY
		int32_t DebugDesignTime_PartyCount; // 0x156C(0x4)
		bool DebugDesignTime_IsPrivateParty; // 0x1570(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1571(0x7) UNKNOWN PROPERTY
		FVector2D TileSize; // 0x1578(0x10)
		FName FlareOpacity; // 0x1588(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x158C(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic BackgroundDynamicMaterialInstance; // 0x1590(0x8)
		FName ThumbnailOpacity; // 0x1598(0x4)
		FName ThumbnailTexture; // 0x159C(0x4)
		ECommonInputType Current_Input_Type; // 0x15A0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty.WBP_ActivityBrowserTile_JoinableParty_C");
			return ret;
		}

		void Is Arabic Language(bool& IsArabic); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D6333A500
		void Set Right Left Background(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63336900
		void Set CTAButton Padding(ECommonInputType InputType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63336800
		void SetThumbnail(UTexture Texture, bool IsLoaded); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63336D00
		void SetTileSize(FVector2D Size); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63336E00
		void SetInviteVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63336A00
		void SetSinglePlayerVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63336C00
		void SetPrivacyVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D63336B00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D6333A300
		void OnTextureBeginLoading(); // Flags: Event|Protected|BlueprintEvent 0x15D63336400
		void OnTextureLoadingComplete(UTexture ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent 0x15D63336500
		void UpdateRichPresence(FText& RichPresence); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D63337300
		void UpdatePartyMemberNames(FText& Names); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D63337200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63336700
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D63335A00
		void BndEvt__WBP_ActivityBrowserTile_JoinableParty_WBP_CTA_ButtonPrimary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D63335900
		void UpdateSingleFriendName(FText& SingleFriendName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D63337400
		void UpdateLastInteraction(FText& LastInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D63337000
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15D6333A000
		void BP_OnSelectionChanged(bool bIsSelected); // Flags: BlueprintEvent 0x15D6333A100
		void BP_PartyInformationUpdated(bool bInIsTileSelected); // Flags: Event|Protected|BlueprintEvent 0x15D6333A200
		void UpdateIslandThumbnail(UTexture ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent 0x15D63336F00
		void UpdateOtherPlayersSubText(FText& OtherPlayersSubText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D63337100
		void OnTileActiveChanged(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x15D63336600
		void ExecuteUbergraph_WBP_ActivityBrowserTile_JoinableParty(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D6333A400
	};


	// Class /DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty_RoundedCorners.WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_C
	// Inherited from UFortActivityBrowserPlayWithFriendsTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x15D0 - 0x14C0)
	class UWBP_ActivityBrowserTile_JoinableParty_RoundedCorners_C : public UFortActivityBrowserPlayWithFriendsTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x14C0(0x8)
		UWidgetAnimation Anim_OnTouchSelected; // 0x14C8(0x8)
		UWidgetAnimation Anim_OnImageLoaded; // 0x14D0(0x8)
		UWidgetAnimation Anim_OnHoverSelect; // 0x14D8(0x8)
		UImage BG; // 0x14E0(0x8)
		UOverlay Grid_BottomInfo_Clips; // 0x14E8(0x8)
		UHorizontalBox HB_Names; // 0x14F0(0x8)
		UHorizontalBox HB_PresenceTexts; // 0x14F8(0x8)
		UHorizontalBox HorizontalBox; // 0x1500(0x8)
		UCommonRichTextBlock RichText_DisplayNamesOrSingleFriendName; // 0x1508(0x8)
		USizeBox SizeBox_Icons; // 0x1510(0x8)
		USizeBox SizeBox_MaxWidthForLongPresenceToForceEllipses; // 0x1518(0x8)
		USpacer Spacer; // 0x1520(0x8)
		USqueegeeInjectionSlot_C SqueegeeSlot_Tag; // 0x1528(0x8)
		UCommonTextBlock Text_InviteToParty; // 0x1530(0x8)
		UCommonTextBlock Text_JoinableParty; // 0x1538(0x8)
		UCommonTextBlock Text_OtherPlayers; // 0x1540(0x8)
		UCommonTextBlock Text_RichPresence; // 0x1548(0x8)
		UCommonTextBlock Text_SingleUserName; // 0x1550(0x8)
		UCommonTextBlock Text_TimeAgoPartied; // 0x1558(0x8)
		UWBP_UIKit_Button_Regular_C WBP_CTA_ButtonPrimary; // 0x1560(0x8)
		UWBP_Discover_Tile_Base_C WBP_Discover_Tile_Base; // 0x1568(0x8)
		UWBP_JoinableParty_State_Private_C WBP_JoinableParty_State_Private; // 0x1570(0x8)
		FLinearColor ColorSharedTextAndImages; // 0x1578(0x10)
		FVector2D TileSize; // 0x1588(0x10)
		FName FlareOpacity; // 0x1598(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x159C(0x4) UNKNOWN PROPERTY
		UMaterialInstanceDynamic BackgroundDynamicMaterialInstance; // 0x15A0(0x8)
		FName ThumbnailOpacity; // 0x15A8(0x4)
		FName ThumbnailTexture; // 0x15AC(0x4)
		ECommonInputType Current_Input_Type; // 0x15B0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x15B1(0x7) UNKNOWN PROPERTY
		TArray HorizontalBoxcontent; // 0x15B8(0x10)
		UMaterialInstance BackgroundInstance; // 0x15C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty_RoundedCorners.WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_C");
			return ret;
		}

		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D53013300
		void SetCCUCount(int32_t CCUCount); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01D000
		void Is Arabic Language(bool& IsArabic); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D53013500
		void Set Right Left Background(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01AE00
		void Set CTAButton Padding(ECommonInputType InputType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B019200
		void SetThumbnail(UTexture Texture, bool IsLoaded); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01CE00
		void SetInviteVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01CA00
		void Set Single Player Visuals(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01CB00
		void SetPrivacyVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01CF00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D53013900
		void OnTextureBeginLoading(); // Flags: Event|Protected|BlueprintEvent 0x15D53013200
		void OnTextureLoadingComplete(UTexture ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent 0x15D8B018A00
		void UpdateRichPresence(FText& RichPresence); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01FF00
		void UpdatePartyMemberNames(FText& Names); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01FA00
		void UpdateSingleFriendName(FText& SingleFriendName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01EB00
		void UpdateLastInteraction(FText& LastInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01C700
		void BP_OnSelectionChanged(bool bIsSelected); // Flags: BlueprintEvent 0x15D53013B00
		void BP_PartyInformationUpdated(bool bInIsTileSelected); // Flags: Event|Protected|BlueprintEvent 0x15D53013A00
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D53013C00
		void UpdateIslandThumbnail(UTexture ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent 0x15D8B01FB00
		void UpdateOtherPlayersSubText(FText& OtherPlayersSubText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01C900
		void OnTileActiveChanged(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x15D8B019000
		void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01FC00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D8B018F00
		void UpdateCTAButtonInteraction(bool bIsInteractionEnabled); // Flags: Event|Protected|BlueprintEvent 0x15D8B01C800
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D53013D00
		void BndEvt__WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_WBP_CTA_ButtonPrimary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D53013E00
		void OnGameActivityChanged(UFortGameActivity GameActivity); // Flags: Event|Protected|BlueprintEvent 0x15D53013400
		void View in Sidebar(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D8B01EA00
		void AddContextMenuItems(); // Flags: BlueprintCallable|BlueprintEvent 0x15D53013F00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D53013800
		void InputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent 0x15D53013600
		void ExecuteUbergraph_WBP_ActivityBrowserTile_JoinableParty_RoundedCorners(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D53013700
	};


	// Class /DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small.WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small_C
	// Inherited from UFortActivityBrowserPlayWithFriendsTile -> UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x5C (0x151C - 0x14C0)
	class UWBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small_C : public UFortActivityBrowserPlayWithFriendsTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x14C0(0x8)
		UWidgetAnimation Anim_OnHoverSelect; // 0x14C8(0x8)
		UImage BG; // 0x14D0(0x8)
		USpacer ContentSpacer; // 0x14D8(0x8)
		UVerticalBox Grid_TopInfo; // 0x14E0(0x8)
		UCommonRichTextBlock RichText_DisplayNamesOrSingleFriendName; // 0x14E8(0x8)
		USizeBox SizeBox_Icons; // 0x14F0(0x8)
		USizeBox SizeBox_MaxWidthForLongPresenceToForceEllipses; // 0x14F8(0x8)
		USqueegeeInjectionSlot_C SqueegeeSlot_Tag; // 0x1500(0x8)
		UCommonTextBlock Text_RichPresence; // 0x1508(0x8)
		UWBP_Discover_Tile_Base_C WBP_Discover_Tile_Base; // 0x1510(0x8)
		FName AnimInvite; // 0x1518(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/JoinableParty/WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small.WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small_C");
			return ret;
		}

		void SetCCUCount(int32_t CCUCount); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01DB00
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D8B01E000
		void Is Arabic Language(bool& IsArabic); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D8B01E300
		void SetInviteVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01DA00
		void SetSinglePlayerVisuals(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D8B01CD00
		void UpdatePartyMemberNames(FText& Names); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01D100
		void UpdateSingleFriendName(FText& SingleFriendName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B018900
		void UpdateRichPresence(FText& RichPresence); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B018700
		void UpdateLastInteraction(FText& LastInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01CC00
		void BP_PartyInformationUpdated(bool bInIsTileSelected); // Flags: Event|Protected|BlueprintEvent 0x15D8B01A700
		void UpdateOtherPlayersSubText(FText& OtherPlayersSubText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01D200
		void OnTileActiveChanged(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x15D8B01E100
		void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D8B01D300
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D8B01E500
		void OnUpdateColumnSize(int32_t NewColumnSize); // Flags: Event|Protected|BlueprintEvent 0x15D8B01D800
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D8B01E700
		void View in Sidebar(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15D8B019100
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D8B01DC00
		void OnGameActivityChanged(UFortGameActivity GameActivity); // Flags: Event|Protected|BlueprintEvent 0x15D8B01E200
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D8B01A800
		void AddContextMenuItems(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8B01A600
		void ExecuteUbergraph_WBP_ActivityBrowserTile_JoinableParty_RoundedCorners_Small(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D8B01E400
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_VideoV2.WBP_IslandTile_VideoV2_C
	// Inherited from UFortVideoWidgetBase -> UEpicMediaVideoWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x4F8 - 0x4E0)
	class UWBP_IslandTile_VideoV2_C : public UFortVideoWidgetBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4E0(0x8)
		UWidgetAnimation VideoSwapActivityOutro; // 0x4E8(0x8)
		UImage Image_VideoTexture; // 0x4F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_VideoV2.WBP_IslandTile_VideoV2_C");
			return ret;
		}

		void PlayOutro(bool PlayAnimation); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608EA00
		void Reset(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5DC7AE00
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53E8500
		void ExecuteUbergraph_WBP_IslandTile_VideoV2(int32_t EntryPoint); // Flags: Final 0x15DB53E8600
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_VideoCycle.WBP_IslandTile_VideoCycle_C
	// Inherited from UFortActivityVideoCycle -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x31 (0x371 - 0x340)
	class UWBP_IslandTile_VideoCycle_C : public UFortActivityVideoCycle	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x8)
		UWidgetAnimation FadeInBumper; // 0x348(0x8)
		UWidgetAnimation AnimVideoOpacity; // 0x350(0x8)
		USqueegeeInjectionSlot_C SqueegeeSlot_Bumper; // 0x358(0x8)
		bool bOutroPlaying; // 0x360(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x361(0x7) UNKNOWN PROPERTY
		FTimerHandle VideoBumperTimer; // 0x368(0x8)
		bool bIntroHasPlayed; // 0x370(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_VideoCycle.WBP_IslandTile_VideoCycle_C");
			return ret;
		}

		void SnapToEndOfAnimation(UWidgetAnimation InAnimation, TEnumAsByte PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608F500
		void Finished_B21AB4AE4EC0B51DF96A0486175BBE38(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6140300
		void Finished_F38A6F764D4DA9D60B8D5AA9CEC8DF4B(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6142100
		void PlayVideoIntro(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15DB608F700
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6086000
		void PlayVideoOutro(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15DB608F600
		void PlayVideoBumper(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15DB6142000
		void FadeOutVideoBumper(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6140400
		void FadeInVideoBumper(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608C700
		void DelayedPlayVideo(); // Flags: BlueprintCallable|BlueprintEvent 0x15D8CA4FB00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB614B200
		void ExecuteUbergraph_WBP_IslandTile_VideoCycle(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB608C800
	};


	// Class /DiscoveryBrowser/Tiles/Creator/WBP_CreatorTile.WBP_CreatorTile_C
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x4C (0x13DC - 0x1390)
	class UWBP_CreatorTile_C : public UCommonButtonBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1390(0x8)
		UFortPlayerPageProfileVM FortPlayerPageProfileVM; // 0x1398(0x8)
		UWidgetAnimation Anim_OnLoadedImage; // 0x13A0(0x8)
		UWBP_Creator_AvatarImage_C WBP_Creator_AvatarImage; // 0x13A8(0x8)
		UWBP_Discover_Tile_Base_C WBP_Discover_Tile_Base; // 0x13B0(0x8)
		FMulticastInlineDelegate OnFocusGained; // 0x13B8(0x10)
		FName ContextMenuFollowName; // 0x13C8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x13CC(0x4) UNKNOWN PROPERTY
		UWBP_Creator_FollowIndicator_Button_C PlusFollowButton; // 0x13D0(0x8)
		FName Action_to_Remove; // 0x13D8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Creator/WBP_CreatorTile.WBP_CreatorTile_C");
			return ret;
		}

		void SetFortPlayerPageProfileVM(UFortPlayerPageProfileVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB614B600
		void SetColumnSize(int32_t ColSize, FVector2D& TileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB614C000
		void OnHandleInputMethodChanged(ECommonInputType NewInputType); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608DF00
		void SetIsFollowing(bool IsFollowing); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB614B400
		void SetImageTexture(EActivityImageLoadingState LoadingState); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6148600
		void SetIsPlayingNow(bool IsPlaying); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB614B100
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15DB614A600
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15DB614AC00
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent 0x15DB614AA00
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB6141800
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6085500
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB6087300
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6087200
		void OnResetPrimaryText(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608D900
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB614A900
		void AddContextMenuItems(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB614AF00
		void ViewMoreByCreatorPage(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB614BD00
		void AddFollowUnfollowToContextMenu(bool IsFollowing); // Flags: BlueprintCallable|BlueprintEvent 0x15DB614AE00
		void ToggleFollowing(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB614B500
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB614A700
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB614A800
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB614AB00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6084F00
		void BndEvt__WBP_CreatorTile_PlusFollowButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB614AD00
		void ExecuteUbergraph_WBP_CreatorTile(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6082C00
		void OnFocusGained__DelegateSignature(UWBP_CreatorTile_C FocusedItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB608DC00
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Minimal.WBP_IslandTile_Minimal_C
	// Inherited from UFortActivityTileDetailsDisplay -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE3 (0x1713 - 0x1630)
	class UWBP_IslandTile_Minimal_C : public UFortActivityTileDetailsDisplay	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1630(0x8)
		UFortCountdownTimerVM FortCountdownTimerVM; // 0x1638(0x8)
		UFortActivityViewModel FortActivityViewModel; // 0x1640(0x8)
		UWidgetAnimation Anim_OnHoverUnhoverRehover; // 0x1648(0x8)
		UWidgetAnimation Anim_OnLoadedImage; // 0x1650(0x8)
		UImage ByEpicLogo; // 0x1658(0x8)
		UImage CMS_CreatorLogo; // 0x1660(0x8)
		USpacer ContextMenuSpacer; // 0x1668(0x8)
		UImage ErrorIcon; // 0x1670(0x8)
		UHorizontalBox HBox_FavoriteOrCatIcon; // 0x1678(0x8)
		UNamedSlot LockSlot; // 0x1680(0x8)
		USqueegeeInjectionSlot_C SqueegeeSlot_Lock; // 0x1688(0x8)
		USqueegeeInjectionSlot_C SqueegeeSlot_Tag; // 0x1690(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator_CategoryIcon; // 0x1698(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator_Favorite; // 0x16A0(0x8)
		UCommonVisibilitySwitcher Switcher_Logo; // 0x16A8(0x8)
		UCommonVisibilitySwitcher Switcher_SqueegeeLockOrIcons; // 0x16B0(0x8)
		UCommonVisibilitySwitcher Switcher_STWLockOrHighlight; // 0x16B8(0x8)
		UImage TileThumbnail; // 0x16C0(0x8)
		UWBP_Discover_Tile_Base_C WBP_Discover_Tile_Base; // 0x16C8(0x8)
		UWBP_UIKit_Badge_C WBP_UIKit_Badge; // 0x16D0(0x8)
		UWBP_UIKit_Highlight_C WBP_UIKit_Highlight; // 0x16D8(0x8)
		FName TextureParam; // 0x16E0(0x4)
		FName ThumbnailDisabledOverlay; // 0x16E4(0x4)
		bool IsFullTile; // 0x16E8(0x1)
		bool DisableCornerInfo; // 0x16E9(0x1)
		bool IsTileInCreatorPage; // 0x16EA(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x16EB(0x1) UNKNOWN PROPERTY
		FName RecommendModalName; // 0x16EC(0x4)
		bool IsRecommendedModal; // 0x16F0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x16F1(0x3) UNKNOWN PROPERTY
		FName ContextMenuFavoriteName; // 0x16F4(0x4)
		bool IsOldDiscoverCode; // 0x16F8(0x1)
		bool AllowTileClicks; // 0x16F9(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x16FA(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFocusGained; // 0x1700(0x10)
		bool HandlesOwnStartVisibilityImpression; // 0x1710(0x1)
		bool IsUsingFocusForOutlineVisuals; // 0x1711(0x1)
		ECountdownTimerState CurrentTimerState; // 0x1712(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Minimal.WBP_IslandTile_Minimal_C");
			return ret;
		}

		void __1807582c-4707-ff6d-1b83-469593d640cb_SourceToDest(bool& IsPerchasedAndNotLocked); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D8B015600
		void __cea301eb-44d0-b2af-7de1-40b68d5d0eca_SourceToDest(ESlateVisibility& IconVisibility); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6085B00
		void __40f33fe1-4c6f-2fee-256a-61be461aca2f_SourceToDest(FVector2D& NewTileSize); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB608A300
		void __17bf98a4-4533-78f4-90a0-50ba916912d2_SourceToDest(UWidget& VisibleWidget); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB608E000
		void SetFortCountdownTimerVM(UFortCountdownTimerVM ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB6141A00
		void SetFortActivityViewModel(UFortActivityViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB608E500
		void GetPurchaseRequiredAndActivityLocked(bool PurchaseRequired, bool ActivityLocked, bool& IsPerchasedAndNotLocked); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6084B00
		void IsTimerActive(bool& IsActive); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB608FD00
		void TimerTextUpdate(FText TimerText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6089200
		void CountdownStateUpdate(ECountdownTimerState TimerState); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6141000
		void IsUsingFocusNavigationOnKBM(bool& IsUsingFocusNavigationForOutlineVisuals); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB608DE00
		void SetHighlightType(EFortDiscoverLabelStyle Type); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6084800
		void Set Icon Mobile Multiplier(UImage ImageObject); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5DC7B000
		void SetLinkCategoryIconVisibility(EFortActivityLinkCategory LinkCategoryType, bool IsByEpic, ESlateVisibility& IconVisibility); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6089E00
		void ConvertParamsToTileSize(int32_t NewSize, bool IsSquareTiles, FVector2D& NewTileSize); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6141C00
		FEventReply BP_OnHoldTriggered(ECommonInputType CurrentInputType); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB608EF00
		void SetCreatorLogoOverrideVisible(EActivityImageLoadingState CreatorLogoLoadingState, UTexture CreatorLogoTexture, UWidget& VisibleWidget); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB6083C00
		void SetPanelType(EFortCreativeDiscoveryPanelType PanelTypeEnum); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB614A400
		void SetIsPreviewTile(bool IsPreviewTile); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608E900
		void Update Texture Margin To Resolution(UMaterialInstanceDynamic MaterialInstance); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6083600
		void SetHighlightText(FText Text); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6149E00
		void SetIconPaddingForLockOrFavorite(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6087400
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6087F00
		void OnSetInvalidActivityReason(EFortInvalidActivityReason InvalidActivityReason); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608E800
		void SetIsTileEnabled(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608E100
		void SetIsCurrentActivity(bool IsCurrentActivity); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6089800
		void SetCornerRadius(FLinearColor CornerRadius); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB614BE00
		void SetDisabledThumbnailOverlay(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6140A00
		void SetupSqueegeeWidgets(UFortActivityViewModel ActivityVM); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6140900
		void OnIsContentGatedUpdated(bool IsContentGated); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6089900
		void OnByEpicUpdated(bool IsByEpic); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6085D00
		void OnTileSelectionNotActive(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6084300
		void OnTileSelectionActive(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6083700
		void SetLockAndHighlightVisibility(bool IsPurchasedAndNotLocked); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6086C00
		void Set Image Spinner State(EActivityImageLoadingState InImageState); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6086800
		void SetImageErrorState(EActivityImageLoadingState ImageLoadState); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6083800
		void SetCCUCount(int32_t CCUCount); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6087000
		void SetIsFavorite(bool IsFavorited); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6083A00
		void SetIslandName(FText IslandName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6149700
		void Set Image State(EActivityImageLoadingState LoadingEnum); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608CE00
		void Set Image Success State(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6085400
		void SetFriendsPlayingCount(int32_t FriendsPlayingCount); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB608DD00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6083E00
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608A100
		void OnRespondToTileViewVisibilityChange(bool bIsVisible); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15DB6141100
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB6086F00
		void OpenInfoModal(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6086900
		void OnModalDismissed(int32_t ButtonIndex); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608D700
		void AddContextMenuItems(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6089700
		void WrapperCleanupContextMenuOnRelease(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6089D00
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB6088800
		void GoToLobby(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6088200
		void MoreFromCreator(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6085E00
		void ViewDetails(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6086A00
		void AddRecommendedModalToContextMenu(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB614A000
		void ToggleFavorite(FName InteractionNameID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB614C200
		void Set Up Favorite Interaction(bool IsFavorited); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6089C00
		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x15DB614A300
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB608D800
		void OnContextMenuVisibilityChanged(bool IsVisible); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6088600
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15DB6140D00
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB608FE00
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15DB6083500
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15DB6088100
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15DB6082F00
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent 0x15DB6082400
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB6089400
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent 0x15DB608D300
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608F400
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB6140F00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB6148D00
		void OnResetPrimaryText(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6149300
		void ExecuteUbergraph_WBP_IslandTile_Minimal(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6087500
		void OnFocusGained__DelegateSignature(UWBP_IslandTile_Minimal_C FocusedItem); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6082500
	};


	// Class /DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Full.WBP_IslandTile_Full_C
	// Inherited from UWBP_IslandTile_Minimal_C -> UFortActivityTileDetailsDisplay -> UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x15 (0x1728 - 0x1713)
	class UWBP_IslandTile_Full_C : public UWBP_IslandTile_Minimal_C	
	{
	public:
		unsigned char UnknownData01_3[0x5]; // 0x1713(0x5) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1718(0x8)
		UWBP_LockedStatus_C WBP_LockedStatus; // 0x1720(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Islands/WBP_IslandTile_Full.WBP_IslandTile_Full_C");
			return ret;
		}

		void OnTileSelectionNotActive(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6088400
		void OnTileSelectionActive(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608ED00
		void SetIslandName(FText IslandName); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608EB00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608A200
		void Destruct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608A000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6149800
		void ExecuteUbergraph_WBP_IslandTile_Full(int32_t EntryPoint); // Flags: Final 0x15DB614BF00
	};


	// Class /DiscoveryBrowser/Tiles/PlayingNow/WBP_PlayingNow_Tile.WBP_PlayingNow_Tile_C
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x13D0 - 0x1390)
	class UWBP_PlayingNow_Tile_C : public UCommonButtonBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1390(0x8)
		UFortActivityViewModel FortActivityViewModel; // 0x1398(0x8)
		USqueegeeInjectionSlot_C SqueegeeSlot_Tag; // 0x13A0(0x8)
		UCommonTextBlock Text_ActivityDescription; // 0x13A8(0x8)
		UCommonTextBlock Text_ActivityName; // 0x13B0(0x8)
		UWBP_Discover_Tile_TextSecondary_C TextSecondary_PlayingNow; // 0x13B8(0x8)
		UWBP_Discover_Tile_Base_C WBP_Discover_Tile_Base; // 0x13C0(0x8)
		UWBP_IslandTile_Minimal_C WBP_IslandTile_Minimal; // 0x13C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/PlayingNow/WBP_PlayingNow_Tile.WBP_PlayingNow_Tile_C");
			return ret;
		}

		void SetFortActivityViewModel(UFortActivityViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB608F200
		void UpdateDescription(FText Text); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6082300
		void RemoveIndentation(FText InputText, FText& OutputText); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6084000
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB608DB00
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB6089A00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6082E00
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB6089600
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x15DB6084600
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15DB608CD00
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15DB6088C00
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x15DB6086E00
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x15DB6087700
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB608CC00
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB608FB00
		void ExecuteUbergraph_WBP_PlayingNow_Tile(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB614A100
	};


	// Class /DiscoveryBrowser/Tiles/Categories/WBP_CategoryTile.WBP_CategoryTile_C
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x13B8 - 0x1390)
	class UWBP_CategoryTile_C : public UCommonButtonBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1390(0x8)
		UFortActivityViewModel FortActivityViewModel; // 0x1398(0x8)
		UWBP_UIKit_Block_Outline_C Block_Outline; // 0x13A0(0x8)
		UCommonTextBlock Text_CategoryTitle; // 0x13A8(0x8)
		UClass ActivityCategoryPageViewClass; // 0x13B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Tiles/Categories/WBP_CategoryTile.WBP_CategoryTile_C");
			return ret;
		}

		void SetFortActivityViewModel(UFortActivityViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15D62C60800
		void Update Display Name(FText In Display Name); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C60700
		void OnPrimaryContentPushed_E44531CF45620B12E753548D2E7E69C7(UCommonActivatableWidget ActivatableWidget); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C60900
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D62C60C00
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D62C60D00
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent 0x15D62C60F00
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent 0x15D62C61000
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x15D62C60E00
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15D62C60A00
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D62C61100
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x15D62C61200
		void ExecuteUbergraph_WBP_CategoryTile(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D62C60B00
	};

}
