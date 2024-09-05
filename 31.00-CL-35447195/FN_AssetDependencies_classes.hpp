#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AssetDependencies
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AssetDependencies.AssetDependencySettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x120 (0x150 - 0x30)
	class UAssetDependencySettings : public UDeveloperSettings	
	{
	public:
		TArray ExcludedPaths; // 0x30(0x10)
		unsigned char UnknownData02_6[0x50]; // 0x40(0x50) UNKNOWN PROPERTY
		TArray ExcludedPackages; // 0x90(0x10)
		unsigned char UnknownData03_6[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY
		TArray ClassIgnoreList; // 0xF0(0x10)
		TSet ClassIgnoreListSet; // 0x100(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssetDependencies.AssetDependencySettings");
			return ret;
		}
	};

}
