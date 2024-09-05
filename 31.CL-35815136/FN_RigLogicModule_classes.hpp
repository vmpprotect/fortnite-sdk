#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: RigLogicModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class RigLogicModule.DNAIndexMapping
	// Inherited from UAssetUserData -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDNAIndexMapping : public UAssetUserData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigLogicModule.DNAIndexMapping");
			return ret;
		}
	};


	// Class RigLogicModule.DNAAsset
	// Inherited from UAssetUserData -> UObject
	// Size: 0x100 (0x128 - 0x28)
	class UDNAAsset : public UAssetUserData	
	{
	public:
		FString DnaFileName; // 0x28(0x10)
		bool bKeepDNAAfterInitialization; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TMap<FString, FString> MetaData; // 0x40(0x50)
		unsigned char UnknownData01_7[0x98]; // 0x90(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigLogicModule.DNAAsset");
			return ret;
		}
	};


	// Class RigLogicModule.SkelMeshDNAUtils
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USkelMeshDNAUtils : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RigLogicModule.SkelMeshDNAUtils");
			return ret;
		}
	};

}
