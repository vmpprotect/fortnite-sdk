#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamCatalogRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMJamCatalogRuntime.FMJamCatalogDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFMJamCatalogDeveloperSettings : public UDeveloperSettings	
	{
	public:
		bool bOverrideJamSongLoadout; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray<FName> JamSongLoadout; // 0x38(0x10)

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
		TWeakObjectPtr<UMidiFile*> MidiFileMajor; // 0x30(0x20)
		TWeakObjectPtr<UMidiFile*> MidiFileMinor; // 0x50(0x20)
		TWeakObjectPtr<UFusionPatch*> FusionPatchMajor; // 0x70(0x20)
		TWeakObjectPtr<UFusionPatch*> FusionPatchMinor; // 0x90(0x20)
		bool bOverrideDefaultTransposition; // 0xB0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		TMap<EMusicKey, int32_t> Transposes; // 0xB8(0x50)
		TWeakObjectPtr<UFMJamSong*> Song; // 0x108(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCatalogRuntime.FMJamLoop");
			return ret;
		}

		bool HasPitch(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4988(relative to base address)
		UFMJamSong GetSong(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4788(relative to base address)
		int32_t GetSemitoneTranspose(EMusicKey ToKey); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C46FC(relative to base address)
		void GetMinorMidi(TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4590(relative to base address)
		void GetMidi(EMusicKeyMode Mode, TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C442C(relative to base address)
		void GetMajorMidi(TWeakObjectPtr<UMidiFile*>& OutMetasoundMidi, TWeakObjectPtr<UFusionPatch*>& OutMetasoundFusion); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4308(relative to base address)
		EFMJamLoopType GetLoopType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4100(relative to base address)
		EMusicKey GetKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4000(relative to base address)
	};


	// Class FMJamCatalogRuntime.FMJamSong
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x98 (0xC8 - 0x30)
	class UFMJamSong : public UPrimaryDataAsset	
	{
	public:
		FName SongShortName; // 0x30(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x34(0xC) UNKNOWN PROPERTY
		FText Title; // 0x40(0x10)
		FText Artist; // 0x50(0x10)
		FGameplayTagContainer AdditionalTags; // 0x60(0x20)
		EMusicKey Key; // 0x80(0x1)
		EMusicKeyMode Mode; // 0x81(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x82(0x2) UNKNOWN PROPERTY
		int32_t Tempo; // 0x84(0x4)
		UFMJamLoop* Lead; // 0x88(0x8)
		UFMJamLoop* Misc; // 0x90(0x8)
		UFMJamLoop* Bass; // 0x98(0x8)
		UFMJamLoop* Beat; // 0xA0(0x8)
		TWeakObjectPtr<UAnimSequence*> LipSyncAnimAsset; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCatalogRuntime.FMJamSong");
			return ret;
		}

		FString GetTitle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4948(relative to base address)
		int32_t GetTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4900(relative to base address)
		FName GetSongShortName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3345F8(relative to base address)
		EMusicKeyMode GetMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C46B4(relative to base address)
		EFMJamLoopType GetLoopTypeForLoop(UFMJamLoop* Loop); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C41D4(relative to base address)
		UFMJamLoop GetLoop(EFMJamLoopType LoopType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4070(relative to base address)
		TWeakObjectPtr GetLipSyncAnimAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4048(relative to base address)
		EMusicKey GetKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4024(relative to base address)
		FString GetArtist(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C3F10(relative to base address)
		FGameplayTagContainer GetAdditionalTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C3EC4(relative to base address)
	};


	// Class FMJamCatalogRuntime.FMJamSongCatalog
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UFMJamSongCatalog : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY
		TMap<FName, UFMJamSong*> SongsByShortName; // 0xF8(0x50)
		USparksSongCatalog* CachedCMSCatalog; // 0x148(0x8)
		int32_t NumCMSRetries; // 0x150(0x4)
		bool bHaveSongCatalog; // 0x154(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x155(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamCatalogRuntime.FMJamSongCatalog");
			return ret;
		}

		UFMJamSongCatalog TryGetFMJamSongCatalog(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510C49D0(relative to base address)
		void OnSongCatalogRetrieved(bool bSuccess); // Flags: Final|Native|Private, Memory Exec: 0x7FF74968A7B4(relative to base address)
		bool HaveCMSSongCatalog(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C49B8(relative to base address)
		UCatalogData GetSongCatalogEntryByShortName(FName ShortName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C4838(relative to base address)
		UFMJamSong GetSongByShortName(FName ShortName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510C47AC(relative to base address)
		FText GetLoopTypeText(EFMJamLoopType& LoopType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510C4264(relative to base address)
		EFMJamLoopType GetLoopTypeByTag(FGameplayTag& LoopTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510C414C(relative to base address)
		UFMJamSongCatalog GetFMJamSongCatalog(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510C3F80(relative to base address)
	};

}
