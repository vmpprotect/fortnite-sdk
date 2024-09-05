#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineSubsystemUtils
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct OnlineSubsystemUtils.BlueprintSessionResult
	// Size: 0x120 (0x120 - 0x0)
	struct FBlueprintSessionResult	
	{
	public:
		unsigned char UnknownData01_2[0x120]; // 0x0(0x120) UNKNOWN PROPERTY
	};


	// Struct OnlineSubsystemUtils.OnlineProxyStoreOffer
	// Size: 0xE8 (0xE8 - 0x0)
	struct FOnlineProxyStoreOffer	
	{
	public:
		FString OfferId; // 0x0(0x10)
		FText Title; // 0x10(0x10)
		FText Description; // 0x20(0x10)
		FText LongDescription; // 0x30(0x10)
		FText RegularPriceText; // 0x40(0x10)
		int32_t RegularPrice; // 0x50(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FText PriceText; // 0x58(0x10)
		int32_t NumericPrice; // 0x68(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FString CurrencyCode; // 0x70(0x10)
		FDateTime ReleaseDate; // 0x80(0x8)
		FDateTime ExpirationDate; // 0x88(0x8)
		EOnlineProxyStoreOfferDiscountType DiscountType; // 0x90(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		TMap DynamicFields; // 0x98(0x50)
	};


	// Struct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
	// Size: 0x30 (0x30 - 0x0)
	struct FInAppPurchaseRestoreInfo2	
	{
	public:
		FString ItemName; // 0x0(0x10)
		FString ItemId; // 0x10(0x10)
		FString ValidationInfo; // 0x20(0x10)
	};


	// Struct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
	// Size: 0x40 (0x40 - 0x0)
	struct FInAppPurchaseReceiptInfo2	
	{
	public:
		FString ItemName; // 0x0(0x10)
		FString ItemId; // 0x10(0x10)
		FString ValidationInfo; // 0x20(0x10)
		FString TransactionIdentifier; // 0x30(0x10)
	};


	// Struct OnlineSubsystemUtils.InAppPurchaseProductRequest2
	// Size: 0x18 (0x18 - 0x0)
	struct FInAppPurchaseProductRequest2	
	{
	public:
		FString ProductIdentifier; // 0x0(0x10)
		bool bIsConsumable; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct OnlineSubsystemUtils.PlayerReservation
	// Size: 0x58 (0x58 - 0x0)
	struct FPlayerReservation	
	{
	public:
		FUniqueNetIdRepl UniqueID; // 0x0(0x30)
		FString ValidationStr; // 0x30(0x10)
		FString Platform; // 0x40(0x10)
		bool bAllowCrossplay; // 0x50(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float ElapsedTime; // 0x54(0x4)
	};


	// Struct OnlineSubsystemUtils.InAppPurchaseProductInfo2
	// Size: 0xF8 (0xF8 - 0x0)
	struct FInAppPurchaseProductInfo2	
	{
	public:
		FString Identifier; // 0x0(0x10)
		FString TransactionIdentifier; // 0x10(0x10)
		FString DisplayName; // 0x20(0x10)
		FString DisplayDescription; // 0x30(0x10)
		FString DisplayPrice; // 0x40(0x10)
		float RawPrice; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FString CurrencyCode; // 0x58(0x10)
		FString CurrencySymbol; // 0x68(0x10)
		FString DecimalSeparator; // 0x78(0x10)
		FString GroupingSeparator; // 0x88(0x10)
		FString ReceiptData; // 0x98(0x10)
		TMap DynamicFields; // 0xA8(0x50)
	};


	// Struct OnlineSubsystemUtils.PIELoginSettingsInternal
	// Size: 0x40 (0x40 - 0x0)
	struct FPIELoginSettingsInternal	
	{
	public:
		FString ID; // 0x0(0x10)
		FString Token; // 0x10(0x10)
		FString Type; // 0x20(0x10)
		TArray TokenBytes; // 0x30(0x10)
	};


	// Struct OnlineSubsystemUtils.PartyReservation
	// Size: 0x58 (0x58 - 0x0)
	struct FPartyReservation	
	{
	public:
		int32_t TeamNum; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FUniqueNetIdRepl PartyLeader; // 0x8(0x30)
		TArray PartyMembers; // 0x38(0x10)
		TArray RemovedPartyMembers; // 0x48(0x10)
	};


	// Struct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
	// Size: 0x20 (0x20 - 0x0)
	struct FPartyBeaconCrossplayPlatformMapping	
	{
	public:
		FString PlatformName; // 0x0(0x10)
		FString PlatformType; // 0x10(0x10)
	};


	// Struct OnlineSubsystemUtils.SpectatorReservation
	// Size: 0x88 (0x88 - 0x0)
	struct FSpectatorReservation	
	{
	public:
		FUniqueNetIdRepl SpectatorId; // 0x0(0x30)
		FPlayerReservation Spectator; // 0x30(0x58)
	};

}
