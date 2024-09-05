#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: USDClasses
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct USDClasses.UsdPrimPathList
	// Size: 0x10 (0x10 - 0x0)
	struct FUsdPrimPathList	
	{
	public:
		TArray<FString> PrimPaths; // 0x0(0x10)
	};


	// Struct USDClasses.UsdMetadataValue
	// Size: 0x20 (0x20 - 0x0)
	struct FUsdMetadataValue	
	{
	public:
		FString TypeName; // 0x0(0x10)
		FString StringifiedValue; // 0x10(0x10)
	};


	// Struct USDClasses.UsdPrimMetadata
	// Size: 0x50 (0x50 - 0x0)
	struct FUsdPrimMetadata	
	{
	public:
		TMap<FString, FUsdMetadataValue> MetaData; // 0x0(0x50)
	};


	// Struct USDClasses.UsdCombinedPrimMetadata
	// Size: 0x50 (0x50 - 0x0)
	struct FUsdCombinedPrimMetadata	
	{
	public:
		TMap<FString, FUsdPrimMetadata> PrimPathToMetadata; // 0x0(0x50)
	};


	// Struct USDClasses.UsdMetadataImportOptions
	// Size: 0x20 (0x20 - 0x0)
	struct FUsdMetadataImportOptions	
	{
	public:
		bool bCollectMetadata; // 0x0(0x1)
		bool bCollectFromEntireSubtrees; // 0x1(0x1)
		bool bCollectOnComponents; // 0x2(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		TArray<FString> BlockedPrefixFilters; // 0x8(0x10)
		bool bInvertFilters; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct USDClasses.UsdStageOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FUsdStageOptions	
	{
	public:
		float MetersPerUnit; // 0x0(0x4)
		EUsdUpAxis UpAxis; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct USDClasses.UsdUnrealAssetInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FUsdUnrealAssetInfo	
	{
	public:
		FString Name; // 0x0(0x10)
		FString Identifier; // 0x10(0x10)
		FString Version; // 0x20(0x10)
		FString UnrealContentPath; // 0x30(0x10)
		FString UnrealAssetType; // 0x40(0x10)
		FString UnrealExportTime; // 0x50(0x10)
		FString UnrealEngineVersion; // 0x60(0x10)
	};

}
