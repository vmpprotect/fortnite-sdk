#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricMetasoundDataTypes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleBankAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricMetasoundDrumPlayerSampleBankAsset : public UDataAsset	
	{
	public:
		TArray Samples; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricMetasoundDataTypes.FabricMetasoundDrumPlayerSampleBankAsset");
			return ret;
		}

		TArray GetSampleLabels(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D6A318
	};


	// Class FabricMetasoundDataTypes.FabricMetasoundDrumPlayerDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFabricMetasoundDrumPlayerDataAsset : public UDataAsset	
	{
	public:
		TArray SampleBanks; // 0x30(0x10)

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
		UFusionPatch Patch; // 0x30(0x8)

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
		TArray InstrumentPlayerData; // 0x30(0x10)

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
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FFabricUserOption FabricUserOption; // 0x30(0x38)
		unsigned char UnknownData03_7[0x10]; // 0x68(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricMetasoundDataTypes.FabricMetaSoundUserOption");
			return ret;
		}
	};

}
