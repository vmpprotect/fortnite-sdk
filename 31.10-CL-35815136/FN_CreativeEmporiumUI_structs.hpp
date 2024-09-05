#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeEmporiumUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CreativeEmporiumUI.FortEmporiumPriceFilterEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FFortEmporiumPriceFilterEntry	
	{
	public:
		FName ID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText Text; // 0x8(0x10)
		EFortEmporiumItemPriceFilter Filter; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct CreativeEmporiumUI.FortEmporiumFilterEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FFortEmporiumFilterEntry	
	{
	public:
		FName ID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText TextRoot; // 0x8(0x10)
		EFortEmporiumItemFilterMode Mode; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct CreativeEmporiumUI.FortEmporiumSortEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FFortEmporiumSortEntry	
	{
	public:
		FText Text; // 0x0(0x10)
		EFortEmporiumItemSortMode Mode; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct CreativeEmporiumUI.FortEmporiumItemData
	// Size: 0xE8 (0xE8 - 0x0)
	struct FFortEmporiumItemData	
	{
	public:
		FString ID; // 0x0(0x10)
		FString Title; // 0x10(0x10)
		FString NameSpace; // 0x20(0x10)
		FString EntityType; // 0x30(0x10)
		FString ThumbnailURL; // 0x40(0x10)
		float Price; // 0x50(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FString BaseCurrency; // 0x58(0x10)
		FString SketchfabUID; // 0x68(0x10)
		TArray<FName> TagList; // 0x78(0x10)
		EFortEmporiumItemLicense LicenseType; // 0x88(0x1)
		bool bRequiresEntitlement; // 0x89(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x8A(0x6) UNKNOWN PROPERTY
		FString VersePath; // 0x90(0x10)
		TArray<FString> AssetIds; // 0xA0(0x10)
		int32_t FileSize; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FString Description; // 0xB8(0x10)
		FString Seller; // 0xC8(0x10)
		int32_t MaterialCount; // 0xD8(0x4)
		int32_t PolygonCount; // 0xDC(0x4)
		int32_t vertexcount; // 0xE0(0x4)
		int32_t ChildAssetCount; // 0xE4(0x4)
	};


	// Struct CreativeEmporiumUI.FortEmporiumKeyEdgeMappings
	// Size: 0x10 (0x10 - 0x0)
	struct FFortEmporiumKeyEdgeMappings	
	{
	public:
		TArray<FKey> Keys; // 0x0(0x10)
	};


	// Struct CreativeEmporiumUI.FortEmporiumItemLicenseData
	// Size: 0x40 (0x40 - 0x0)
	struct FFortEmporiumItemLicenseData	
	{
	public:
		FName ID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Keyword; // 0x8(0x10)
		FText Name; // 0x18(0x10)
		EFortEmporiumItemLicense License; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FString URL; // 0x30(0x10)
	};


	// Struct CreativeEmporiumUI.FortEmporiumFilterCategory
	// Size: 0x20 (0x20 - 0x0)
	struct FFortEmporiumFilterCategory	
	{
	public:
		FName ID; // 0x0(0x4)
		FName ParentID; // 0x4(0x4)
		bool bIsTab; // 0x8(0x1)
		bool bShowCategoryModal; // 0x9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		TArray<FName> SubcategoryIDList; // 0x10(0x10)
	};

}
