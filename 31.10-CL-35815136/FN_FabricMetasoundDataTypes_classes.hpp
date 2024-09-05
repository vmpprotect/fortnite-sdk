#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricMetasoundDataTypes
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleBankAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricMetasoundDrumPlayerSampleBankAsset : public UDataAsset	
	{
	public:
		TArray<FFabricMetasoundDrumPlayerSampleData> Samples; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleBankAsset");
			return ret;
		}

		TArray GetSampleLabels(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75161E858(relative to base address)
	};


	// Class FabricMetasoundDataTypes.FabricMetasoundDrumPlayerDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricMetasoundDrumPlayerDataAsset : public UDataAsset	
	{
	public:
		TArray<TWeakObjectPtr> SampleBanks; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerDataAsset");
			return ret;
		}
	};


	// Class FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFabricMetasoundInstrumentPlayerDataAsset : public UDataAsset	
	{
	public:
		UFusionPatch* Patch; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAsset");
			return ret;
		}
	};


	// Class FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAssetList
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricMetasoundInstrumentPlayerDataAssetList : public UDataAsset	
	{
	public:
		TArray<TWeakObjectPtr> InstrumentPlayerData; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricMetasoundDataTypes.FabricMetasoundInstrumentPlayerDataAssetList");
			return ret;
		}
	};


	// Class FabricMetasoundDataTypes.FabricMetaSoundUserOption
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UFabricMetaSoundUserOption : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FFabricUserOption FabricUserOption; // 0x30(0x38)
		unsigned char UnknownData01_7[0x10]; // 0x68(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricMetasoundDataTypes.FabricMetaSoundUserOption");
			return ret;
		}
	};

}
