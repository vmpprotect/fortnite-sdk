#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataAssetDirectory
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DataAssetDirectory.DataAssetDirectoryPatchableAsset
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataAssetDirectoryPatchableAsset : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectoryPatchableAsset");
			return ret;
		}
	};


	// Class DataAssetDirectory.DataAssetDirectorySimpleObject
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDataAssetDirectorySimpleObject : public UObject	
	{
	public:
		int32_t IntProperty; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectorySimpleObject");
			return ret;
		}
	};


	// Class DataAssetDirectory.DataAssetDirectoryTestPODAsset
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UDataAssetDirectoryTestPODAsset : public UObject	
	{
	public:
		FString AssetName; // 0x28(0x10)
		EDataAssetDirectoryTestEnum EnumProperty; // 0x38(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t IntProperty; // 0x3C(0x4)
		float FloatProperty; // 0x40(0x4)
		bool BoolProperty; // 0x44(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		FString StringProperty; // 0x48(0x10)
		FName NameProperty; // 0x58(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FText TextProperty; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectoryTestPODAsset");
			return ret;
		}
	};


	// Class DataAssetDirectory.DataAssetDirectoryTestStructAsset
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UDataAssetDirectoryTestStructAsset : public UObject	
	{
	public:
		FDataAssetDirectoryTestPODStruct TestStruct; // 0x28(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectoryTestStructAsset");
			return ret;
		}
	};


	// Class DataAssetDirectory.DataAssetDirectoryTestArrayAsset
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDataAssetDirectoryTestArrayAsset : public UObject	
	{
	public:
		TArray IntArray; // 0x28(0x10)
		TArray SimpleStructArray; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectoryTestArrayAsset");
			return ret;
		}
	};


	// Class DataAssetDirectory.DataAssetDirectoryTestObjectAsset
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDataAssetDirectoryTestObjectAsset : public UObject	
	{
	public:
		UDataAssetDirectorySimpleObject SimpleObject; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectoryTestObjectAsset");
			return ret;
		}
	};


	// Class DataAssetDirectory.DataAssetDirectoryTestMapAsset
	// Inherited from UObject
	// Size: 0x140 (0x168 - 0x28)
	class UDataAssetDirectoryTestMapAsset : public UObject	
	{
	public:
		TMap StringIntMap; // 0x28(0x50)
		TMap ShrinkStringIntMap; // 0x78(0x50)
		TMap GrowStringIntMap; // 0xC8(0x50)
		TMap IntStructMap; // 0x118(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectoryTestMapAsset");
			return ret;
		}
	};


	// Class DataAssetDirectory.DataAssetDirectoryManager
	// Inherited from UObject
	// Size: 0x1A8 (0x1D0 - 0x28)
	class UDataAssetDirectoryManager : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x178]; // 0x28(0x178) UNKNOWN PROPERTY
		TArray PatchedAssets; // 0x1A0(0x10)
		FDateTime LastUpdateCheck; // 0x1B0(0x8)
		uint32_t UpdateCheckLimitSeconds; // 0x1B8(0x4)
		bool bEnabled; // 0x1BC(0x1)
		bool bFailOnError; // 0x1BD(0x1)
		bool bAnalyticsEnabled; // 0x1BE(0x1)
		unsigned char UnknownData03_7[0x11]; // 0x1BF(0x11) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectoryManager");
			return ret;
		}
	};


	// Class DataAssetDirectory.DataAssetDirectoryPatcher
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataAssetDirectoryPatcher : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataAssetDirectory.DataAssetDirectoryPatcher");
			return ret;
		}
	};

}
