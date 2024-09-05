#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AssetRegistry
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AssetRegistry.TagAndValue
	// Size: 0x18 (0x18 - 0x0)
	struct FTagAndValue	
	{
	public:
		FName tag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Value; // 0x8(0x10)
	};


	// Struct AssetRegistry.AssetRegistryDependencyOptions
	// Size: 0x5 (0x5 - 0x0)
	struct FAssetRegistryDependencyOptions	
	{
	public:
		bool bIncludeSoftPackageReferences; // 0x0(0x1)
		bool bIncludeHardPackageReferences; // 0x1(0x1)
		bool bIncludeSearchableNames; // 0x2(0x1)
		bool bIncludeSoftManagementReferences; // 0x3(0x1)
		bool bIncludeHardManagementReferences; // 0x4(0x1)
	};

}
