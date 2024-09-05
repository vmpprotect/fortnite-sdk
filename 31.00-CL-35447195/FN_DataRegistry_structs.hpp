#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataRegistry
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DataRegistry.DataRegistryLookup
	// Size: 0x18 (0x18 - 0x0)
	struct FDataRegistryLookup	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct DataRegistry.DataRegistryId
	// Size: 0x8 (0x8 - 0x0)
	struct FDataRegistryId	
	{
	public:
		FDataRegistryType RegistryType; // 0x0(0x4)
		FName ItemName; // 0x4(0x4)
	};


	// Struct DataRegistry.DataRegistryType
	// Size: 0x4 (0x4 - 0x0)
	struct FDataRegistryType	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct DataRegistry.DataRegistrySource_DataTableRules
	// Size: 0x8 (0x8 - 0x0)
	struct FDataRegistrySource_DataTableRules	
	{
	public:
		bool bPrecacheTable; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float CachedTableKeepSeconds; // 0x4(0x4)
	};


	// Struct DataRegistry.DataRegistryIdFormat
	// Size: 0x4 (0x4 - 0x0)
	struct FDataRegistryIdFormat	
	{
	public:
		FGameplayTag BaseGameplayTag; // 0x0(0x4)
	};


	// Struct DataRegistry.DataRegistryCachePolicy
	// Size: 0x14 (0x14 - 0x0)
	struct FDataRegistryCachePolicy	
	{
	public:
		bool bCacheIsAlwaysVolatile; // 0x0(0x1)
		bool bUseCurveTableCacheVersion; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		int32_t MinNumberKept; // 0x4(0x4)
		int32_t MaxNumberKept; // 0x8(0x4)
		float ForceKeepSeconds; // 0xC(0x4)
		float ForceReleaseSeconds; // 0x10(0x4)
	};


	// Struct DataRegistry.DataRegistrySourceItemId
	// Size: 0x30 (0x30 - 0x0)
	struct FDataRegistrySourceItemId	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct DataRegistry.SoftDataRegistryOrTable
	// Size: 0x30 (0x30 - 0x0)
	struct FSoftDataRegistryOrTable	
	{
	public:
		bool bUseDataRegistry; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr Table; // 0x8(0x20)
		FDataRegistryType RegistryType; // 0x28(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct DataRegistry.DataRegistryOrTableRow
	// Size: 0x20 (0x20 - 0x0)
	struct FDataRegistryOrTableRow	
	{
	public:
		bool bUseDataRegistryId; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle DataTableRow; // 0x8(0x10)
		FDataRegistryId DataRegistryId; // 0x18(0x8)
	};

}
