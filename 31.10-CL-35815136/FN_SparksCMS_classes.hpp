#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCMS
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksCMS.CatalogData
	// Inherited from UObject
	// Size: 0x1B0 (0x1D8 - 0x28)
	class UCatalogData : public UObject	
	{
	public:
		bool bFromHotfix; // 0x28(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x29(0xF) UNKNOWN PROPERTY
		FSparksSongCatalogEntry DataEntry; // 0x38(0x190)
		FMulticastInlineDelegate OnSongConsolidated; // 0x1C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCMS.CatalogData");
			return ret;
		}

		bool IsFromHotfix(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C5D1E6C(relative to base address)
		bool IsEnabledForPilgrim(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5B148(relative to base address)
		bool IsEnabledForJam(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5B124(relative to base address)
		bool IsEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5B100(relative to base address)
		FGameplayTag GetTagForAgeRating(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5B0D8(relative to base address)
		FName GetShortName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5ACF0(relative to base address)
		void ConsolidateData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F5ACDC(relative to base address)
		void ClearConsolidatedData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F5ACC8(relative to base address)
	};


	// Class SparksCMS.SparksSongCatalog
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x170 (0x1A0 - 0x30)
	class USparksSongCatalog : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0x30(0x58) UNKNOWN PROPERTY
		TMap<FString, UCatalogData*> CatalogByUid; // 0x88(0x50)
		TMap<FString, UCatalogData*> CatalogByShortName; // 0xD8(0x50)
		TMap<FString, UCatalogData*> CatalogByTemplateId; // 0x128(0x50)
		TArray<UCatalogData*> CatalogObjectPool; // 0x178(0x10)
		UUpdateManager* HFManager; // 0x188(0x8)
		FMulticastInlineDelegate OnSongCatalogRetrieved; // 0x190(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCMS.SparksSongCatalog");
			return ret;
		}

		void SetCMSSuffix(FString InCMSSuffix); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F5B55C(relative to base address)
		void RequestSongCatalog(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F5B548(relative to base address)
		bool PlayerHasSongEntitlement(AFortPlayerController* Player, FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5B3D4(relative to base address)
		void OnCalendarActiveEventsChanged(TArray<FString>& ActiveEventFlags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750F5B310(relative to base address)
		bool IsSongSpotlighted(FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5B284(relative to base address)
		bool IsSongFeatured(FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5B1F8(relative to base address)
		bool IsSongDisabled(FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5B16C(relative to base address)
		void GetSongList(ESongSortMethod SortMethod, ESongSortDirection SortDirection, FGameplayTagQuery& TagQuery, TArray<UCatalogData*>& OutResults); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F5AEFC(relative to base address)
		UCatalogData GetSongByUID(FString InUID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF750F5AE5C(relative to base address)
		UCatalogData GetSongByTemplateID(FString InTemplateId); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF750F5ADBC(relative to base address)
		UCatalogData GetSongByShortName(FString InShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF750F5AD1C(relative to base address)
	};

}
