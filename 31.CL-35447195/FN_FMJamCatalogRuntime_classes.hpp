#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMJamCatalogRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMJamCatalogRuntime.FMJamCatalogDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFMJamCatalogDeveloperSettings : public UDeveloperSettings	
	{
	public:
		bool bOverrideJamSongLoadout; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray JamSongLoadout; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCatalogRuntime.FMJamCatalogDeveloperSettings");
			return ret;
		}
	};


	// Class FMJamCatalogRuntime.FMJamLoop
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0xF8 (0x128 - 0x30)
	class UFMJamLoop : public UPrimaryDataAsset	
	{
	public:
		TWeakObjectPtr MidiFileMajor; // 0x30(0x20)
		TWeakObjectPtr MidiFileMinor; // 0x50(0x20)
		TWeakObjectPtr FusionPatchMajor; // 0x70(0x20)
		TWeakObjectPtr FusionPatchMinor; // 0x90(0x20)
		bool bOverrideDefaultTransposition; // 0xB0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		TMap Transposes; // 0xB8(0x50)
		TWeakObjectPtr Song; // 0x108(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCatalogRuntime.FMJamLoop");
			return ret;
		}

		bool HasPitch(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C4F8
		UFMJamSong GetSong(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C418
		void GetSemitoneTranspose(EMusicKey ToKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C338
		void GetMinorMidi(TWeakObjectPtr& OutMetasoundMidi, TWeakObjectPtr& OutMetasoundFusion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C258
		void GetMidi(EMusicKeyMode Mode, TWeakObjectPtr& OutMetasoundMidi, TWeakObjectPtr& OutMetasoundFusion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C178
		void GetMajorMidi(TWeakObjectPtr& OutMetasoundMidi, TWeakObjectPtr& OutMetasoundFusion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C098
		EFMJamLoopType GetLoopType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1BFB8
		EMusicKey GetKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1BED8
	};


	// Class FMJamCatalogRuntime.FMJamSong
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x98 (0xC8 - 0x30)
	class UFMJamSong : public UPrimaryDataAsset	
	{
	public:
		FName SongShortName; // 0x30(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x34(0xC) UNKNOWN PROPERTY
		FText Title; // 0x40(0x10)
		FText Artist; // 0x50(0x10)
		FGameplayTagContainer AdditionalTags; // 0x60(0x20)
		EMusicKey Key; // 0x80(0x1)
		EMusicKeyMode Mode; // 0x81(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x82(0x2) UNKNOWN PROPERTY
		int32_t Tempo; // 0x84(0x4)
		UFMJamLoop Lead; // 0x88(0x8)
		UFMJamLoop Misc; // 0x90(0x8)
		UFMJamLoop Bass; // 0x98(0x8)
		UFMJamLoop Beat; // 0xA0(0x8)
		TWeakObjectPtr LipSyncAnimAsset; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCatalogRuntime.FMJamSong");
			return ret;
		}

		FString GetTitle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1CDB8
		int32_t GetTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1CCD8
		FName GetSongShortName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1CBF8
		EMusicKeyMode GetMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1CB18
		EFMJamLoopType GetLoopTypeForLoop(UFMJamLoop Loop); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1CA38
		UFMJamLoop GetLoop(EFMJamLoopType LoopType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C958
		TWeakObjectPtr GetLipSyncAnimAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C878
		EMusicKey GetKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C798
		FString GetArtist(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C6B8
		FGameplayTagContainer GetAdditionalTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1C5D8
	};


	// Class FMJamCatalogRuntime.FMJamSongCatalog
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UFMJamSongCatalog : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData02_3[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY
		TMap SongsByShortName; // 0xF8(0x50)
		USparksSongCatalog CachedCMSCatalog; // 0x148(0x8)
		int32_t NumCMSRetries; // 0x150(0x4)
		bool bHaveSongCatalog; // 0x154(0x1)
		unsigned char UnknownData03_7[0xB]; // 0x155(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCatalogRuntime.FMJamSongCatalog");
			return ret;
		}

		UFMJamSongCatalog TryGetFMJamSongCatalog(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C1D4B8
		void OnSongCatalogRetrieved(bool bSuccess); // Flags: Final|Native|Private 0x7FF414C1D3D8
		bool HaveCMSSongCatalog(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1D2F8
		UCatalogData GetSongCatalogEntryByShortName(FName ShortName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1D218
		UFMJamSong GetSongByShortName(FName ShortName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1D138
		FText GetLoopTypeText(EFMJamLoopType& LoopType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C1D058
		EFMJamLoopType GetLoopTypeByTag(FGameplayTag& LoopTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C1CF78
		UFMJamSongCatalog GetFMJamSongCatalog(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C1CE98
	};

}
