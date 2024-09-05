#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataRegistry
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DataRegistry.DataRegistrySettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UDataRegistrySettings : public UDeveloperSettings	
	{
	public:
		TArray<FDirectoryPath> DirectoriesToScan; // 0x30(0x10)
		bool bInitializeAllLoadedRegistries; // 0x40(0x1)
		bool bIgnoreMissingCookedAssetRegistryData; // 0x41(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x42(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.DataRegistrySettings");
			return ret;
		}
	};


	// Class DataRegistry.DataRegistry
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UDataRegistry : public UObject	
	{
	public:
		FName RegistryType; // 0x28(0x4)
		FDataRegistryIdFormat IdFormat; // 0x2C(0x4)
		UScriptStruct* ItemStruct; // 0x30(0x8)
		TArray<UDataRegistrySource*> DataSources; // 0x38(0x10)
		TArray<UDataRegistrySource*> RuntimeSources; // 0x48(0x10)
		float TimerUpdateFrequency; // 0x58(0x4)
		FDataRegistryCachePolicy DefaultCachePolicy; // 0x5C(0x14)
		unsigned char UnknownData00_7[0x48]; // 0x70(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.DataRegistry");
			return ret;
		}
	};


	// Class DataRegistry.DataRegistrySource
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDataRegistrySource : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UDataRegistrySource* ParentSource; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.DataRegistrySource");
			return ret;
		}
	};


	// Class DataRegistry.MetaDataRegistrySource
	// Inherited from UDataRegistrySource -> UObject
	// Size: 0xD0 (0x108 - 0x38)
	class UMetaDataRegistrySource : public UDataRegistrySource	
	{
	public:
		EMetaDataRegistrySourceAssetUsage AssetUsage; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FAssetManagerSearchRules SearchRules; // 0x40(0x50)
		TMap<FName, UDataRegistrySource*> RuntimeChildren; // 0x90(0x50)
		unsigned char UnknownData01_7[0x28]; // 0xE0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.MetaDataRegistrySource");
			return ret;
		}
	};


	// Class DataRegistry.DataRegistrySource_CurveTable
	// Inherited from UDataRegistrySource -> UObject
	// Size: 0x60 (0x98 - 0x38)
	class UDataRegistrySource_CurveTable : public UDataRegistrySource	
	{
	public:
		TWeakObjectPtr<UCurveTable*> SourceTable; // 0x38(0x20)
		FDataRegistrySource_DataTableRules TableRules; // 0x58(0x8)
		UCurveTable* CachedTable; // 0x60(0x8)
		UCurveTable* PreloadTable; // 0x68(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x70(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.DataRegistrySource_CurveTable");
			return ret;
		}
	};


	// Class DataRegistry.MetaDataRegistrySource_CurveTable
	// Inherited from UMetaDataRegistrySource -> UDataRegistrySource -> UObject
	// Size: 0x10 (0x118 - 0x108)
	class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource	
	{
	public:
		UClass* CreatedSource; // 0x108(0x8)
		FDataRegistrySource_DataTableRules TableRules; // 0x110(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.MetaDataRegistrySource_CurveTable");
			return ret;
		}
	};


	// Class DataRegistry.DataRegistrySource_DataTable
	// Inherited from UDataRegistrySource -> UObject
	// Size: 0x60 (0x98 - 0x38)
	class UDataRegistrySource_DataTable : public UDataRegistrySource	
	{
	public:
		TWeakObjectPtr<UDataTable*> SourceTable; // 0x38(0x20)
		FDataRegistrySource_DataTableRules TableRules; // 0x58(0x8)
		UDataTable* CachedTable; // 0x60(0x8)
		UDataTable* PreloadTable; // 0x68(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x70(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.DataRegistrySource_DataTable");
			return ret;
		}
	};


	// Class DataRegistry.MetaDataRegistrySource_DataTable
	// Inherited from UMetaDataRegistrySource -> UDataRegistrySource -> UObject
	// Size: 0x10 (0x118 - 0x108)
	class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource	
	{
	public:
		UClass* CreatedSource; // 0x108(0x8)
		FDataRegistrySource_DataTableRules TableRules; // 0x110(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.MetaDataRegistrySource_DataTable");
			return ret;
		}
	};


	// Class DataRegistry.DataRegistrySubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xB0 (0xE0 - 0x30)
	class UDataRegistrySubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0xB0]; // 0x30(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataRegistry.DataRegistrySubsystem");
			return ret;
		}

		bool NotEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3064DC(relative to base address)
		bool NotEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C6617C8(relative to base address)
		bool IsValidDataRegistryType(FDataRegistryType DataRegistryType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C64BE14(relative to base address)
		bool IsValidDataRegistryId(FDataRegistryId DataRegistryId); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C64BCFC(relative to base address)
		bool GetCachedItemFromLookupBP(FDataRegistryId ItemId, FDataRegistryLookup& ResolvedLookup, FTableRowBase& OutItem); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCC0D08(relative to base address)
		bool GetCachedItemBP(FDataRegistryId ItemId, FTableRowBase& OutItem); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCC0A74(relative to base address)
		void FindCachedItemBP(FDataRegistryId ItemId, EDataRegistrySubsystemGetItemResult& OutResult, FTableRowBase& OutItem); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCC079C(relative to base address)
		void EvaluateDataRegistryCurve(FDataRegistryId ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CCC045C(relative to base address)
		bool EqualEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C63CAC4(relative to base address)
		bool EqualEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C63C8D8(relative to base address)
		FString Conv_DataRegistryTypeToString(FDataRegistryType DataRegistryType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C305804(relative to base address)
		FString Conv_DataRegistryIdToString(FDataRegistryId DataRegistryId); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74CCC0328(relative to base address)
		bool AcquireItemBP(FDataRegistryId ItemId, FDelegateProperty AcquireCallback); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74CCC013C(relative to base address)
	};

}