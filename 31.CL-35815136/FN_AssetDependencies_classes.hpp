#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AssetDependencies
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AssetDependencies.AssetDependencySettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x120 (0x150 - 0x30)
	class UAssetDependencySettings : public UDeveloperSettings	
	{
	public:
		TArray<FName> ExcludedPaths; // 0x30(0x10)
		unsigned char UnknownData00_6[0x50]; // 0x40(0x50) UNKNOWN PROPERTY
		TArray<FName> ExcludedPackages; // 0x90(0x10)
		unsigned char UnknownData01_6[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY
		TArray<UClass*> ClassIgnoreList; // 0xF0(0x10)
		TSet<UClass*> ClassIgnoreListSet; // 0x100(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AssetDependencies.AssetDependencySettings");
			return ret;
		}
	};

}
