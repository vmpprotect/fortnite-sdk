#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameSubCatalog
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/GameSubCatalog.ECheckoutType
	enum ECheckoutType
	{
		ECheckoutType__None = 0,
		ECheckoutType__ReceiptRequested = 1,
		ECheckoutType__Receiptless = 2,
	};


	// Enum /Script/GameSubCatalog.ERedeemRealMoneyPurchaseRefreshType
	enum ERedeemRealMoneyPurchaseRefreshType
	{
		ERedeemRealMoneyPurchaseRefreshType__Default = 0,
		ERedeemRealMoneyPurchaseRefreshType__ForceCurrent = 1,
		ERedeemRealMoneyPurchaseRefreshType__ForceAll = 2,
		ERedeemRealMoneyPurchaseRefreshType__UpdateOfflineAuth = 3,
	};


	// Enum /Script/GameSubCatalog.EAutoRenewState
	enum EAutoRenewState
	{
		EAutoRenewState__None = 0,
		EAutoRenewState__AutoRenewEnabled = 1,
		EAutoRenewState__AutoRenewDisabled = 2,
		EAutoRenewState__NotAutoRenewable = 3,
	};


	// Enum /Script/GameSubCatalog.EVerifierModeOverride
	enum EVerifierModeOverride
	{
		EVerifierModeOverride__DefaultToConfig = 1,
		EVerifierModeOverride__OccurrenceOnlyRemoveReceipts = 2,
		EVerifierModeOverride__MigrateIfNeeded = 3,
	};


	// Enum /Script/GameSubCatalog.ECatalogOfferType
	enum ECatalogOfferType
	{
		ECatalogOfferType__StaticPrice = 0,
		ECatalogOfferType__DynamicBundle = 1,
	};


	// Enum /Script/GameSubCatalog.ECatalogRequirementType
	enum ECatalogRequirementType
	{
		ECatalogRequirementType__RequireFulfillment = 0,
		ECatalogRequirementType__DenyOnFulfillment = 1,
		ECatalogRequirementType__RequireItemOwnership = 2,
		ECatalogRequirementType__DenyOnItemOwnership = 3,
	};


	// Enum /Script/GameSubCatalog.EAppStore
	enum EAppStore
	{
		EAppStore__DebugStore = 0,
		EAppStore__EpicPurchasingService = 1,
		EAppStore__IOSAppStore = 2,
		EAppStore__WeGameStore = 3,
		EAppStore__GooglePlayAppStore = 4,
		EAppStore__KindleStore = 5,
		EAppStore__PlayStation4Store = 6,
		EAppStore__XboxLiveStore = 7,
		EAppStore__NintendoEShop = 8,
		EAppStore__SamsungGalaxyAppStore = 9,
		EAppStore__MicrosoftStore = A,
		EAppStore__PlayStation5Store = B,
	};


	// Enum /Script/GameSubCatalog.ECheckpointToSendClientLogs
	enum ECheckpointToSendClientLogs
	{
		ECheckpointToSendClientLogs__None = 0,
		ECheckpointToSendClientLogs__Login = 1,
		ECheckpointToSendClientLogs__RMTPurchase = 2,
	};


	// Enum /Script/GameSubCatalog.EStoreCurrencyType
	enum EStoreCurrencyType
	{
		EStoreCurrencyType__RealMoney = 0,
		EStoreCurrencyType__MtxCurrency = 1,
		EStoreCurrencyType__GameItem = 2,
		EStoreCurrencyType__Other = 3,
	};


	// Enum /Script/GameSubCatalog.ECatalogSaleType
	enum ECatalogSaleType
	{
		ECatalogSaleType__NotOnSale = 0,
		ECatalogSaleType__UndecoratedNewPrice = 1,
		ECatalogSaleType__AmountOff = 2,
		ECatalogSaleType__PercentOff = 3,
		ECatalogSaleType__PercentOn = 4,
		ECatalogSaleType__Strikethrough = 5,
	};

}
