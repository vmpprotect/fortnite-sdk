#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCMS
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCMS.CatalogData
	// Inherited from UObject
	// Size: 0x1B0 (0x1D8 - 0x28)
	class UCatalogData : public UObject	
	{
	public:
		bool bFromHotfix; // 0x28(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x29(0xF) UNKNOWN PROPERTY
		FSparksSongCatalogEntry DataEntry; // 0x38(0x190)
		FMulticastInlineDelegate OnSongConsolidated; // 0x1C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCMS.CatalogData");
			return ret;
		}

		bool IsFromHotfix(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C068B8
		bool IsEnabledForPilgrim(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C067D8
		bool IsEnabledForJam(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C066F8
		bool IsEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C06618
		FGameplayTag GetTagForAgeRating(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C06538
		FName GetShortName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C06458
		void ConsolidateData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C06378
		void ClearConsolidatedData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C06298
	};


	// Class SparksCMS.SparksSongCatalog
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x170 (0x1A0 - 0x30)
	class USparksSongCatalog : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x58]; // 0x30(0x58) UNKNOWN PROPERTY
		TMap CatalogByUid; // 0x88(0x50)
		TMap CatalogByShortName; // 0xD8(0x50)
		TMap CatalogByTemplateId; // 0x128(0x50)
		TArray CatalogObjectPool; // 0x178(0x10)
		UUpdateManager HFManager; // 0x188(0x8)
		FMulticastInlineDelegate OnSongCatalogRetrieved; // 0x190(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCMS.SparksSongCatalog");
			return ret;
		}

		void SetCMSSuffix(FString InCMSSuffix); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C07258
		void RequestSongCatalog(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C07178
		bool PlayerHasSongEntitlement(AFortPlayerController Player, FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C07098
		void OnCalendarActiveEventsChanged(TArray& ActiveEventFlags); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C06FB8
		bool IsSongSpotlighted(FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C06ED8
		bool IsSongFeatured(FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C06DF8
		bool IsSongDisabled(FName SongShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C06D18
		void GetSongList(ESongSortMethod SortMethod, ESongSortDirection SortDirection, FGameplayTagQuery& TagQuery, TArray& OutResults); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C06C38
		UCatalogData GetSongByUID(FString InUID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF414C06B58
		UCatalogData GetSongByTemplateID(FString InTemplateId); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF414C06A78
		UCatalogData GetSongByShortName(FString InShortName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF414C06998
	};

}
