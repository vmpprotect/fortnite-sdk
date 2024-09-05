#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnnualRefundTokenUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AnnualRefundTokenUI.FortPurchaseHistoryEntryBase
	// Inherited from UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1470 - 0x1428)
	class UFortPurchaseHistoryEntryBase : public UFortHoldableButton	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1428(0x8) UNKNOWN PROPERTY
		UClass ItemCardClass; // 0x1430(0x8)
		float CardWidthOverride; // 0x1438(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x143C(0x4) UNKNOWN PROPERTY
		UCommonTextBlock Text_Name; // 0x1440(0x8)
		TArray LootEntryItemTypesToExclude; // 0x1448(0x10)
		TArray LootEntryItemTypesToCombine; // 0x1458(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortPurchaseHistoryEntryBase");
			return ret;
		}

		void UpdateItemList(TArray& ItemCards); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BE8CB8
	};


	// Class AnnualRefundTokenUI.FortPurchaseHistoryEntry
	// Inherited from UFortPurchaseHistoryEntryBase -> UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1470 - 0x1468)
	class UFortPurchaseHistoryEntry : public UFortPurchaseHistoryEntryBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x1468(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry");
			return ret;
		}

		void SetupItemCard(UFortCosmeticItemCard ItemCard, UFortItem Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414BE8F58
		void SetPurchaseText(FText& PurchaseDateText, FText& RefundDateText, bool bHasBeenRefunded, EFortPurchaseHistoryRefundType RefundType); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BE8E78
		void OnSetHistory(bool bHasBeenRefunded, bool bIsCancelPurchaseEligible, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable, bool IsPartOfABundle, bool IsNextRefundable, int32_t IndexInBundle, int32_t NumPurchasesInBundle); // Flags: Event|Protected|BlueprintEvent 0x7FF414BE8D98
	};


	// Class AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry
	// Inherited from UFortPurchaseHistoryEntryBase -> UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1470 - 0x1468)
	class UFortPurchaseHistoryBundleEntry : public UFortPurchaseHistoryEntryBase	
	{
	public:
		bool bIsExpanded; // 0x1468(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x1469(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry");
			return ret;
		}

		void SetExpandButtonText(int32_t NumPurchases); // Flags: Event|Public|BlueprintEvent 0x7FF414BE9038
	};


	// Class AnnualRefundTokenUI.FortPurchaseHistoryListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x120 (0x3A8 - 0x288)
	class UFortPurchaseHistoryListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData01_1[0x120]; // 0x288(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortPurchaseHistoryListView");
			return ret;
		}
	};


	// Class AnnualRefundTokenUI.FortPurchaseHistoryTreeView
	// Inherited from UFortPurchaseHistoryListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x3E0 - 0x3A8)
	class UFortPurchaseHistoryTreeView : public UFortPurchaseHistoryListView	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x3A8(0x10) UNKNOWN PROPERTY
		UClass HeaderEntryWidgetClass; // 0x3B8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x3C0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortPurchaseHistoryTreeView");
			return ret;
		}
	};


	// Class AnnualRefundTokenUI.FortAnnualRefundTicket
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortAnnualRefundTicket : public UUserWidget	
	{
	public:
		UCommonTextBlock Text_AvailableDate; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortAnnualRefundTicket");
			return ret;
		}

		void OnUpdatePendingState(bool bIsPending); // Flags: Event|Public|BlueprintEvent 0x7FF414BE92D8
		void OnUpdateAvailableState(bool bIsAvailable); // Flags: Event|Public|BlueprintEvent 0x7FF414BE91F8
		void OnPlayLockingAnimation(); // Flags: Event|Public|BlueprintEvent 0x7FF414BE9118
	};


	// Class AnnualRefundTokenUI.FortAnnualRefundTokenData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x560 - 0x540)
	class UFortAnnualRefundTokenData : public UFortGameFeatureData	
	{
	public:
		TWeakObjectPtr PurchaseHistoryScreenClass; // 0x540(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortAnnualRefundTokenData");
			return ret;
		}
	};


	// Class AnnualRefundTokenUI.FortPurchaseHistoryScreen
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x668 - 0x568)
	class UFortPurchaseHistoryScreen : public UFortActivatablePanel	
	{
	public:
		FDataTableRowHandle BackAction; // 0x568(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x578(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr RefundConfirmationClass; // 0x590(0x20)
		TWeakObjectPtr DirectPurchaseInfoModalClass; // 0x5B0(0x20)
		UCommonAnimatedSwitcher Switcher_MainContent; // 0x5D0(0x8)
		UFortPurchaseHistoryTreeView TreeView_Purchases; // 0x5D8(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x5E0(0x8)
		UCommonButtonBase Button_PostApproval; // 0x5E8(0x8)
		UScrollBox ScrollBox_ReturnTypeInfo; // 0x5F0(0x8)
		UCommonTextBlock Text_Desc; // 0x5F8(0x8)
		UCommonTextBlock Text_RefundCount; // 0x600(0x8)
		UCommonTextBlock Text_ResultHeader; // 0x608(0x8)
		UCommonTextBlock Text_ResultTitle; // 0x610(0x8)
		UCommonTextBlock Text_ResultDesc; // 0x618(0x8)
		UFortAnnualRefundTicket RefundTicket_Left; // 0x620(0x8)
		UFortAnnualRefundTicket RefundTicket_Center; // 0x628(0x8)
		UFortAnnualRefundTicket RefundTicket_Right; // 0x630(0x8)
		UWidget Widget_CancelPurchaseInfo; // 0x638(0x8)
		UWidget Widget_ReturnTicketInfo; // 0x640(0x8)
		UWidget Widget_TokenlessRefundInfo; // 0x648(0x8)
		UWidget Widget_NonRefundableInfo; // 0x650(0x8)
		UWidget Widget_BundledPurchaseInfo; // 0x658(0x8)
		UWidget Widget_BundledPurchaseTokenlessRefundInfo; // 0x660(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen");
			return ret;
		}

		void OnPopulateView(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BE9738
		void OnNoPurchasesAvailable(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BE9658
		void OnEndRefundSubmission(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BE9578
		void OnBeginRefundSubmission(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BE9498
		bool BP_IsShowingPurchases(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BE93B8
	};


	// Class AnnualRefundTokenUI.FortRefundConfirmation
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x5C0 - 0x568)
	class UFortRefundConfirmation : public UFortActivatablePanel	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x568(0x10) UNKNOWN PROPERTY
		UCommonTextBlock Text_RefundsRemaining; // 0x578(0x8)
		UCommonTextBlock Text_RefundCount; // 0x580(0x8)
		UCommonTextBlock Text_AreYouSure; // 0x588(0x8)
		UCommonButtonBase Button_Yes; // 0x590(0x8)
		UCommonButtonBase Button_No; // 0x598(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x5A0(0x8)
		UFortAnnualRefundTicket RefundTicket_Left; // 0x5A8(0x8)
		UFortAnnualRefundTicket RefundTicket_Center; // 0x5B0(0x8)
		UFortAnnualRefundTicket RefundTicket_Right; // 0x5B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnnualRefundTokenUI.FortRefundConfirmation");
			return ret;
		}

		void BP_UpdateRefundType(EFortPurchaseHistoryRefundType RefundType, bool bBundledRefund); // Flags: Event|Protected|BlueprintEvent 0x7FF414BE98F8
		void BP_UpdateItemsList(TArray& SelectedItemDefs, int32_t TotalMtxPaid); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BE9818
	};

}
