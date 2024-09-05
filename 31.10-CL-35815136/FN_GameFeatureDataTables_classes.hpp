#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameFeatureDataTables
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameFeatureDataTables.GameFeatureAction_GameFeatureDataTables
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGameFeatureAction_GameFeatureDataTables : public UGameFeatureAction	
	{
	public:
		FGameplayTag GameFeatureDataTableID; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FSoftObjectPath DataTable; // 0x30(0x18)
		bool bIsParentDataTable; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatureDataTables.GameFeatureAction_GameFeatureDataTables");
			return ret;
		}
	};


	// Class GameFeatureDataTables.GameFeatureDataTablesSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UGameFeatureDataTablesSubsystem : public UEngineSubsystem	
	{
	public:
		TMap<FGameplayTag, FGameFeatureDataTableEntry> DataTableEntryMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatureDataTables.GameFeatureDataTablesSubsystem");
			return ret;
		}
	};

}
