#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameFeatureDataTables
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameFeatureDataTables.GameFeatureAction_GameFeatureDataTables
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGameFeatureAction_GameFeatureDataTables : public UGameFeatureAction	
	{
	public:
		FGameplayTag GameFeatureDataTableID; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FSoftObjectPath DataTable; // 0x30(0x18)
		bool bIsParentDataTable; // 0x48(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

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
		TMap DataTableEntryMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatureDataTables.GameFeatureDataTablesSubsystem");
			return ret;
		}
	};

}
