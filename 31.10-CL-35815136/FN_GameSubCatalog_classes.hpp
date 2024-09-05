#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameSubCatalog
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameSubCatalog.CatalogOffersPriceConfig
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UCatalogOffersPriceConfig : public UObject	
	{
	public:
		TMap<EAppStore, FOfferNumericPriceAdjustments> AppStoreOfferNumericPriceAdjustments; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameSubCatalog.CatalogOffersPriceConfig");
			return ret;
		}
	};


	// Class GameSubCatalog.McpCatalogItemsForRandomPlayer
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMcpCatalogItemsForRandomPlayer : public UObject	
	{
	public:
		uint32_t Percentage; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString Salt; // 0x30(0x10)
		TArray<FString> CatalogItems; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameSubCatalog.McpCatalogItemsForRandomPlayer");
			return ret;
		}
	};


	// Class GameSubCatalog.McpRmtParamOverrideSelector
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UMcpRmtParamOverrideSelector : public UObject	
	{
	public:
		uint32_t RangeStart; // 0x28(0x4)
		uint32_t RangeEnd; // 0x2C(0x4)
		FString Salt; // 0x30(0x10)
		EVerifierModeOverride VerifierModeOverride; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameSubCatalog.McpRmtParamOverrideSelector");
			return ret;
		}
	};

}
