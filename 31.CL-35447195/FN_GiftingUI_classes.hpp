#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GiftingUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GiftingUI.AthenaGiftConfirmedPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x428 - 0x3F8)
	class UAthenaGiftConfirmedPanel : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		URichTextBlock Text_RecipientInfo; // 0x410(0x8)
		UCommonButtonBase Button_Back; // 0x418(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x420(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.AthenaGiftConfirmedPanel");
			return ret;
		}
	};


	// Class GiftingUI.AthenaGiftingConfirmationScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x150 (0x548 - 0x3F8)
	class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		UFortStoreFrontOfferInfo PresentedGiftableOfferInfo; // 0x428(0x8)
		UFortStoreFrontOfferInfo PresentedOptionalTokenOfferInfo; // 0x430(0x8)
		unsigned char UnknownData04_6[0xB4]; // 0x438(0xB4) UNKNOWN PROPERTY
		float MinGiftSubmissionDelay; // 0x4EC(0x4)
		float MaxGiftSubmissionDelay; // 0x4F0(0x4)
		unsigned char UnknownData05_6[0x14]; // 0x4F4(0x14) UNKNOWN PROPERTY
		UCommonButtonBase Button_WrapOptions; // 0x508(0x8)
		UCommonButtonBase Button_Back; // 0x510(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x518(0x8)
		UCommonButtonBase Button_MtxWallet; // 0x520(0x8)
		UAthenaGiftingPurchasePanel Panel_GiftingPurchase; // 0x528(0x8)
		UAthenaGiftingWrapOptionsPanel Panel_WrapOptions; // 0x530(0x8)
		UAthenaGiftConfirmedPanel Panel_GiftConfirmed; // 0x538(0x8)
		UAthenaGiftingErrorsPanel Panel_GiftingErrors; // 0x540(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.AthenaGiftingConfirmationScreen");
			return ret;
		}

		void OnPresentationModeChanged(EGiftingPresentationMode NewMode); // Flags: Event|Protected|BlueprintEvent 0x7FF414E00A40
		void HandleTokenOfferPurchaseComplete(bool bSuccess, TArray& PurchasedItems); // Flags: Final|Native|Private|HasOutParms 0x7FF414E00960
		void HandleGiftSent(bool bSuccess, TArray& IneligibleAccounts, TArray& ErrorCodes); // Flags: Final|Native|Private|HasOutParms 0x7FF414E00880
		void Dismiss(bool bGiftConfirmed); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414E007A0
	};


	// Class GiftingUI.AthenaGiftingErrorsPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x458 - 0x3F8)
	class UAthenaGiftingErrorsPanel : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		URichTextBlock Text_RecipientInfo; // 0x428(0x8)
		URichTextBlock Text_Title; // 0x430(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x438(0x8)
		UCommonButtonBase Button_Back; // 0x440(0x8)
		UCommonButtonBase Button_Continue; // 0x448(0x8)
		UTileView TileView_Items; // 0x450(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.AthenaGiftingErrorsPanel");
			return ret;
		}

		void UpdateGiftEligibility(bool bStillGiftable); // Flags: Event|Protected|BlueprintEvent 0x7FF414E00B20
	};


	// Class GiftingUI.AthenaGiftingPriceWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UAthenaGiftingPriceWidget : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock Text_RealMoneyPrice; // 0x2E0(0x8)
		UCommonTextBlock Text_FinalPrice; // 0x2E8(0x8)
		UCommonTextBlock Text_RegularPrice; // 0x2F0(0x8)
		UWidget Overlay_SalePrice; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.AthenaGiftingPriceWidget");
			return ret;
		}

		void SetPresentationMode(EGiftingPricePresentationMode Mode); // Flags: Event|Protected|BlueprintEvent 0x7FF414E00C00
	};


	// Class GiftingUI.AthenaGiftingPurchaseButton
	// Inherited from UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1440 - 0x1428)
	class UAthenaGiftingPurchaseButton : public UFortHoldableButton	
	{
	public:
		UAthenaGiftingPriceWidget Widget_Price; // 0x1428(0x8)
		UCommonTextBlock Text_Title; // 0x1430(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x1438(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.AthenaGiftingPurchaseButton");
			return ret;
		}
	};


	// Class GiftingUI.AthenaGiftingPurchasePanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x440 - 0x3F8)
	class UAthenaGiftingPurchasePanel : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		UAthenaGiftingPurchaseButton Button_PurchaseGift; // 0x410(0x8)
		UFortSocialAvatarIcon Avatar_MemberIcon; // 0x418(0x8)
		UCommonTextBlock Text_SocialNameInfo; // 0x420(0x8)
		UCommonTextBlock Text_ItemsCount; // 0x428(0x8)
		UCommonTextBlock Text_OfferName; // 0x430(0x8)
		UTileView TileView_Items; // 0x438(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.AthenaGiftingPurchasePanel");
			return ret;
		}

		void PlayIntroAnimation(); // Flags: Event|Public|BlueprintEvent 0x7FF414E00CE0
	};


	// Class GiftingUI.AthenaGiftingScreen
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x8F8 - 0x720)
	class UAthenaGiftingScreen : public UFortItemPreviewScreen	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x720(0x8) UNKNOWN PROPERTY
		UFortGiftingUserSearchWidget SearchWidget_SocialSearchWidget; // 0x728(0x8)
		UFortGiftingSocialUserListView ListView_Recipients; // 0x730(0x8)
		UTileView TileView_Items; // 0x738(0x8)
		UCommonButtonBase Button_Back; // 0x740(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x748(0x8)
		UCommonButtonBase Button_GiftingPolicy; // 0x750(0x8)
		UCommonButtonBase Button_CameraControl; // 0x758(0x8)
		UCommonTextBlock Text_OfferName; // 0x760(0x8)
		UCommonTextBlock Text_VBucksOffCount; // 0x768(0x8)
		UCommonTextBlock Text_ShownItemIndex; // 0x770(0x8)
		UCommonRichTextBlock Text_NoContent; // 0x778(0x8)
		UCommonRichTextBlock RichText_OfferItemOwnedCount; // 0x780(0x8)
		UOverlay Container_VBucksOffViolator; // 0x788(0x8)
		UCommonRichTextBlock RichText_GiftCount; // 0x790(0x8)
		UAthenaGiftingPriceWidget Widget_Price; // 0x798(0x8)
		UAthenaLockerItemInfo Widget_ItemInfo; // 0x7A0(0x8)
		UDynamicEntryBox EntryBox_FilterTabs; // 0x7A8(0x8)
		UCommonActionWidget ActionWidget_FilterTabsPrevious; // 0x7B0(0x8)
		UCommonActionWidget ActionWidget_FilterTabsNext; // 0x7B8(0x8)
		UAthenaGiftingConfirmationScreen ActivatableWidget_GiftingConfirmation; // 0x7C0(0x8)
		float ItemCyclingInterval; // 0x7C8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x7CC(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle FilterTabsPreviousAction; // 0x7D0(0x10)
		FDataTableRowHandle FilterTabsNextAction; // 0x7E0(0x10)
		FText RegularGiftingPolicy; // 0x7F0(0x10)
		FText BattlePassGiftingPolicy; // 0x800(0x10)
		unsigned char UnknownData06_6[0x60]; // 0x810(0x60) UNKNOWN PROPERTY
		TMap FilterMap; // 0x870(0x50)
		UCommonButtonGroupBase FilterGroup; // 0x8C0(0x8)
		TArray GiftableItems; // 0x8C8(0x10)
		UFortItemDefinition PresentedItemDefinition; // 0x8D8(0x8)
		UFortStoreFrontOfferInfo GiftableOfferInfo; // 0x8E0(0x8)
		UFortStoreFrontOfferInfo OptionalTokenOfferInfo; // 0x8E8(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x8F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.AthenaGiftingScreen");
			return ret;
		}

		void OnShowSearchWarningText(bool bShow); // Flags: Event|Protected|BlueprintEvent 0x7FF414E014C0
		void OnShownItemChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E013E0
		void OnSetupFilterTabButton(UCommonButtonBase Button, EFilterType FilterType); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01300
		void OnPresentationModeChanged(EGiftingScreenPresentationMode Mode); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01220
		void OnPartyListUpdated(bool bEmpty); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01140
		void OnHandlePreviewItem(bool bUseWidePreview); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01060
		void OnFriendSelectionChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E00F80
		void OnFilterChanged(EFilterType FilterType); // Flags: Event|Protected|BlueprintEvent 0x7FF414E00EA0
		void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E00DC0
	};


	// Class GiftingUI.AthenaGiftingWrapOptionsPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x460 - 0x3F8)
	class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0x3F8(0x28) UNKNOWN PROPERTY
		TArray GiftBoxes; // 0x420(0x10)
		TArray GiftBoxItemDefs; // 0x430(0x10)
		unsigned char UnknownData03_6[0x10]; // 0x440(0x10) UNKNOWN PROPERTY
		UCommonButtonLegacy Button_ConfirmWrap; // 0x450(0x8)
		UTileView TileView_WrapOptions; // 0x458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.AthenaGiftingWrapOptionsPanel");
			return ret;
		}
	};


	// Class GiftingUI.FortGiftingSocialUserListEntry
	// Inherited from USocialListEntryBase -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x14E0 - 0x13F8)
	class UFortGiftingSocialUserListEntry : public USocialListEntryBase	
	{
	public:
		unsigned char UnknownData02_3[0xB8]; // 0x13F8(0xB8) UNKNOWN PROPERTY
		UFortSocialAvatarIcon Avatar_MemberIcon; // 0x14B0(0x8)
		USocialNameTextBlock Text_SocialName; // 0x14B8(0x8)
		UCommonRichTextBlock RichText_EligibilityStatus; // 0x14C0(0x8)
		UCommonRichTextBlock RichText_OwnedItems; // 0x14C8(0x8)
		UAthenaGiftingPriceWidget Widget_Price; // 0x14D0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x14D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.FortGiftingSocialUserListEntry");
			return ret;
		}

		void SetPresentationMode(ERecipientPresentationMode Mode); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01920
		void OnUserItemSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01840
		void OnRecipientStatusUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01760
		void BP_OnTouchSelectionConfirmed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01680
		void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent 0x7FF414E015A0
	};


	// Class GiftingUI.FortGiftingSocialUserListView
	// Inherited from USocialUserListViewBase -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0xF8 (0x490 - 0x398)
	class UFortGiftingSocialUserListView : public USocialUserListViewBase	
	{
	public:
		float RefreshRecipientStatusDelay; // 0x398(0x4)
		unsigned char UnknownData01_7[0xF4]; // 0x39C(0xF4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.FortGiftingSocialUserListView");
			return ret;
		}
	};


	// Class GiftingUI.FortGiftingUserSearchWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x328 - 0x2E0)
	class UFortGiftingUserSearchWidget : public UCommonUserWidget	
	{
	public:
		UEditableText EditableText_SearchFriends; // 0x2E0(0x8)
		UCommonButtonBase Button_ClearQuery; // 0x2E8(0x8)
		UCommonButtonBase Button_SubmitQuery; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x2F8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.FortGiftingUserSearchWidget");
			return ret;
		}

		void OnSearchCommit(bool bSearchStringShort); // Flags: Event|Protected|BlueprintEvent 0x7FF414E01CA0
		void HandleSearchFriendsTextEntered(FText& Text, TEnumAsByte CommitMethod); // Flags: Final|Native|Private|HasOutParms 0x7FF414E01BC0
		void HandleSearchFriendsTextChanged(FText& Text); // Flags: Final|Native|Private|HasOutParms 0x7FF414E01AE0
		void FocusEditableText(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E01A00
	};


	// Class GiftingUI.FortGiftingWrapOptionListEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortGiftingWrapOptionListEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UFortGiftBoxItemDefinition GiftBoxDefinition; // 0x13E8(0x8)
		UCommonLazyImage Image_Gift; // 0x13F0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x13F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.FortGiftingWrapOptionListEntry");
			return ret;
		}
	};


	// Class GiftingUI.FortGiftingData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x560 - 0x540)
	class UFortGiftingData : public UFortGameFeatureData	
	{
	public:
		TWeakObjectPtr GiftingScreenClass; // 0x540(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GiftingUI.FortGiftingData");
			return ret;
		}
	};

}
