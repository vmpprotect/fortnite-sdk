#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameSubCatalog
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GameSubCatalog.OfferNumericPriceAdjustment
	// Size: 0x18 (0x18 - 0x0)
	struct FOfferNumericPriceAdjustment	
	{
	public:
		FString Currency; // 0x0(0x10)
		int32_t DecimalPower; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct GameSubCatalog.OfferNumericPriceAdjustments
	// Size: 0x10 (0x10 - 0x0)
	struct FOfferNumericPriceAdjustments	
	{
	public:
		TArray OfferPriceAdjustments; // 0x0(0x10)
	};


	// Struct GameSubCatalog.CatalogItemSalePrice
	// Size: 0x18 (0x18 - 0x0)
	struct FCatalogItemSalePrice	
	{
	public:
		int32_t SalePrice; // 0x0(0x4)
		TEnumAsByte SaleType; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FDateTime StartTime; // 0x8(0x8)
		FDateTime EndTime; // 0x10(0x8)
	};


	// Struct GameSubCatalog.CatalogItemPrice
	// Size: 0x48 (0x48 - 0x0)
	struct FCatalogItemPrice	
	{
	public:
		TEnumAsByte CurrencyType; // 0x0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString CurrencySubType; // 0x8(0x10)
		int32_t RegularPrice; // 0x18(0x4)
		int32_t FinalPrice; // 0x1C(0x4)
		FText PriceTextOverride; // 0x20(0x10)
		TEnumAsByte SaleType; // 0x30(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FDateTime SaleExpiration; // 0x38(0x8)
		EAppStore AppStoreId; // 0x40(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct GameSubCatalog.AppStoreCheckoutConfig
	// Size: 0x2 (0x2 - 0x0)
	struct FAppStoreCheckoutConfig	
	{
	public:
		EAppStore AppStore; // 0x0(0x1)
		ECheckoutType CheckoutType; // 0x1(0x1)
	};


	// Struct GameSubCatalog.StoreOfferInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FStoreOfferInfo	
	{
	public:
		FString Storefront; // 0x0(0x10)
		FString StoreId; // 0x10(0x10)
		FString GroupId; // 0x20(0x10)
	};


	// Struct GameSubCatalog.CatalogPurchaseAdditionalData
	// Inherited from FStoreOfferInfo
	// Size: 0xA8 (0xD8 - 0x30)
	struct FCatalogPurchaseAdditionalData : public FStoreOfferInfo	
	{
	public:
		FString IslandId; // 0x30(0x10)
		FString IslandTitle; // 0x40(0x10)
		FString ProductTag; // 0x50(0x10)
		FString StoreContext; // 0x60(0x10)
		FString SourceContext; // 0x70(0x10)
		TMap CheckoutProperties; // 0x80(0x50)
		unsigned char UnknownData01_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
	};


	// Struct GameSubCatalog.AdditionalCheckoutProperty
	// Size: 0x20 (0x20 - 0x0)
	struct FAdditionalCheckoutProperty	
	{
	public:
		FString Key; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct GameSubCatalog.CatalogCheckoutOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FCatalogCheckoutOptions	
	{
	public:
		TArray AdditionalCheckoutProperties; // 0x0(0x10)
		bool bSkipCheckingEntitlementCount; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct GameSubCatalog.CatalogRedeemRealMoneyPurchasesInfo
	// Size: 0x140 (0x140 - 0x0)
	struct FCatalogRedeemRealMoneyPurchasesInfo	
	{
	public:
		EAppStore AppStore; // 0x0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray AuthTokens; // 0x8(0x10)
		TArray ReceiptIds; // 0x18(0x10)
		ERedeemRealMoneyPurchaseRefreshType RefreshType; // 0x28(0x1)
		EVerifierModeOverride VerifierModeOverride; // 0x29(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		TArray CatalogItems; // 0x30(0x10)
		FString PurchaseCorrelationId; // 0x40(0x10)
		FCatalogPurchaseAdditionalData AdditionalData; // 0x50(0xD8)
		unsigned char UnknownData05_7[0x18]; // 0x128(0x18) UNKNOWN PROPERTY
	};


	// Struct GameSubCatalog.CatalogReceiptInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FCatalogReceiptInfo	
	{
	public:
		EAppStore AppStore; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString AppStoreId; // 0x8(0x10)
		FString ReceiptId; // 0x18(0x10)
		FString ReceiptInfo; // 0x28(0x10)
		FString PurchaseCorrelationId; // 0x38(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct GameSubCatalog.CatalogPurchaseInfo
	// Size: 0x118 (0x118 - 0x0)
	struct FCatalogPurchaseInfo	
	{
	public:
		FString OfferId; // 0x0(0x10)
		int32_t PurchaseQuantity; // 0x10(0x4)
		TEnumAsByte Currency; // 0x14(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FString CurrencySubType; // 0x18(0x10)
		int32_t ExpectedTotalPrice; // 0x28(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString GameContext; // 0x30(0x10)
		FCatalogPurchaseAdditionalData AdditionalData; // 0x40(0xD8)
	};


	// Struct GameSubCatalog.CatalogPurchaseInfoGift
	// Size: 0x148 (0x148 - 0x0)
	struct FCatalogPurchaseInfoGift	
	{
	public:
		FString OfferId; // 0x0(0x10)
		TEnumAsByte Currency; // 0x10(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FString CurrencySubType; // 0x18(0x10)
		int32_t ExpectedTotalPrice; // 0x28(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString GameContext; // 0x30(0x10)
		TArray ReceiverAccountIds; // 0x40(0x10)
		FString GiftWrapTemplateId; // 0x50(0x10)
		FString PersonalMessage; // 0x60(0x10)
		FCatalogPurchaseAdditionalData AdditionalData; // 0x70(0xD8)
	};


	// Struct GameSubCatalog.CatalogKeyValue
	// Size: 0x20 (0x20 - 0x0)
	struct FCatalogKeyValue	
	{
	public:
		FString Key; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct GameSubCatalog.CatalogMetaAssetInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FCatalogMetaAssetInfo	
	{
	public:
		FString StructName; // 0x0(0x10)
		FJsonObjectWrapper Payload; // 0x10(0x20)
	};


	// Struct GameSubCatalog.ItemQuantity
	// Size: 0x38 (0x38 - 0x0)
	struct FItemQuantity	
	{
	public:
		FString TemplateId; // 0x0(0x10)
		int32_t Quantity; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FJsonObjectWrapper Attributes; // 0x18(0x20)
	};


	// Struct GameSubCatalog.CatalogDynamicBundleItem
	// Size: 0x68 (0x68 - 0x0)
	struct FCatalogDynamicBundleItem	
	{
	public:
		FItemQuantity Item; // 0x0(0x38)
		bool bCanOwnMultiple; // 0x38(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t RegularPrice; // 0x3C(0x4)
		int32_t DiscountedPrice; // 0x40(0x4)
		int32_t AlreadyOwnedPriceReduction; // 0x44(0x4)
		FText Title; // 0x48(0x10)
		FText Description; // 0x58(0x10)
	};


	// Struct GameSubCatalog.CatalogDynamicBundle
	// Size: 0x38 (0x38 - 0x0)
	struct FCatalogDynamicBundle	
	{
	public:
		int32_t DiscountedBasePrice; // 0x0(0x4)
		int32_t RegularBasePrice; // 0x4(0x4)
		int32_t FloorPrice; // 0x8(0x4)
		TEnumAsByte CurrencyType; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FString CurrencySubType; // 0x10(0x10)
		TEnumAsByte DisplayType; // 0x20(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray BundleItems; // 0x28(0x10)
	};


	// Struct GameSubCatalog.CatalogOfferRequirement
	// Size: 0x18 (0x18 - 0x0)
	struct FCatalogOfferRequirement	
	{
	public:
		ECatalogRequirementType RequirementType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t MinQuantity; // 0x4(0x4)
		FString RequiredId; // 0x8(0x10)
	};


	// Struct GameSubCatalog.CatalogGiftInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FCatalogGiftInfo	
	{
	public:
		bool bIsEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString ForcedGiftBoxTemplateId; // 0x8(0x10)
		TArray PurchaseRequirements; // 0x18(0x10)
	};


	// Struct GameSubCatalog.CatalogOffer
	// Size: 0x248 (0x248 - 0x0)
	struct FCatalogOffer	
	{
	public:
		FString OfferId; // 0x0(0x10)
		FString DevName; // 0x10(0x10)
		TArray MetaInfo; // 0x20(0x10)
		ECatalogOfferType OfferType; // 0x30(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray Prices; // 0x38(0x10)
		FCatalogDynamicBundle DynamicBundleInfo; // 0x48(0x38)
		int32_t DailyLimit; // 0x80(0x4)
		int32_t WeeklyLimit; // 0x84(0x4)
		int32_t MonthlyLimit; // 0x88(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		TArray Categories; // 0x90(0x10)
		FString CatalogGroup; // 0xA0(0x10)
		int32_t CatalogGroupPriority; // 0xB0(0x4)
		int32_t SortPriority; // 0xB4(0x4)
		FText Title; // 0xB8(0x10)
		FText ShortDescription; // 0xC8(0x10)
		FText Description; // 0xD8(0x10)
		FString AppStoreId; // 0xE8(0xC0)
		FCatalogMetaAssetInfo MetaAssetInfo; // 0x1A8(0x30)
		FString DisplayAssetPath; // 0x1D8(0x10)
		TArray ItemGrants; // 0x1E8(0x10)
		TArray Requirements; // 0x1F8(0x10)
		FCatalogGiftInfo GiftInfo; // 0x208(0x28)
		bool Refundable; // 0x230(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x231(0x7) UNKNOWN PROPERTY
		TArray DenyItemTemplateIds; // 0x238(0x10)
	};


	// Struct GameSubCatalog.Storefront
	// Size: 0x20 (0x20 - 0x0)
	struct FStorefront	
	{
	public:
		FString Name; // 0x0(0x10)
		TArray CatalogEntries; // 0x10(0x10)
	};


	// Struct GameSubCatalog.CatalogDownload
	// Size: 0x20 (0x20 - 0x0)
	struct FCatalogDownload	
	{
	public:
		int32_t RefreshIntervalHrs; // 0x0(0x4)
		int32_t DailyPurchaseHrs; // 0x4(0x4)
		FDateTime Expiration; // 0x8(0x8)
		TArray Storefronts; // 0x10(0x10)
	};


	// Struct GameSubCatalog.CatalogPurchaseNotification
	// Size: 0x20 (0x20 - 0x0)
	struct FCatalogPurchaseNotification	
	{
	public:
		FMcpLootResult LootResult; // 0x0(0x20)
	};


	// Struct GameSubCatalog.CatalogRefundNotification
	// Size: 0x1 (0x1 - 0x0)
	struct FCatalogRefundNotification	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct GameSubCatalog.McpEntitlementRefreshTimerInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FMcpEntitlementRefreshTimerInfo	
	{
	public:
		FDateTime NextEntitlementRefresh; // 0x0(0x8)
		FDateTime MustRefreshAuthBy; // 0x8(0x8)
		FDateTime LastAuthRefresh; // 0x10(0x8)
	};


	// Struct GameSubCatalog.McpProcessedConsumables
	// Size: 0x18 (0x18 - 0x0)
	struct FMcpProcessedConsumables	
	{
	public:
		EAppStore AppStore; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray Ids; // 0x8(0x10)
	};


	// Struct GameSubCatalog.McpInAppPurchases
	// Size: 0xD0 (0xD0 - 0x0)
	struct FMcpInAppPurchases	
	{
	public:
		TArray Fulfillments; // 0x0(0x10)
		TMap FulfillmentCounts; // 0x10(0x50)
		TMap RefreshTimers; // 0x60(0x50)
		TArray ProcessedConsumables; // 0xB0(0x10)
		TArray CheckpointToSendClientLogs; // 0xC0(0x10)
	};


	// Struct GameSubCatalog.KeychainDownload
	// Size: 0x10 (0x10 - 0x0)
	struct FKeychainDownload	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};

}
