#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksSongPlayerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksSongPlayerRuntime.SparksCustomSetlist
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class USparksCustomSetlist : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSetlistChanged; // 0xA8(0x10)
		TArray<FSparksCustomSetlistEntry> SetlistEntries; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksCustomSetlist");
			return ret;
		}

		void SetlistChangedDelegate__DelegateSignature(USparksCustomSetlist* Setlist); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerRemoveSongForPlayer(FName& SongShortName, APlayerState* Player, bool bRemoveAll); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510734E0(relative to base address)
		void ServerRemoveSongAtIndex(int32_t Index, FName& SongShortName, APlayerState* Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75107338C(relative to base address)
		void ServerRemoveAllSongsForPlayer(APlayerState* Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75107330C(relative to base address)
		void ServerRemoveAllSongs(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510732F8(relative to base address)
		void ServerAddSongForPlayer(FName& SongShortName, APlayerState* Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510731EC(relative to base address)
		void OnRep_SetlistEntries(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751072BAC(relative to base address)
		bool HasPlayerAddedSong(FName& SongShortName, APlayerState* Player); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75107292C(relative to base address)
		bool HasAnyoneAddedSong(FName& SongShortName, APlayerState* OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510727FC(relative to base address)
		TArray GetSongsAddedByPlayer(APlayerState* Player); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751072758(relative to base address)
		void GetSetlistEntryAtIndex(int32_t Index, FName& OutSongShortName, APlayerState* OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751072488(relative to base address)
		void GetRelevantParticipants(TArray<AFortPlayerController*>& OutPlayers); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF75107235C(relative to base address)
		void FindEntriesForSongAndPlayer(FName& SongShortName, APlayerState* Player, TArray<int32_t>& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751072130(relative to base address)
		void FindEntriesForSong(FName& SongShortName, TArray<int32_t>& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751072034(relative to base address)
		void FindEntriesForPlayer(APlayerState* Player, TArray<int32_t>& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF751071F50(relative to base address)
		bool CanAddSongForPlayer(FName& SongShortName, APlayerState* Player, FGameplayTag& OutReason, APlayerState* OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751071DC4(relative to base address)
	};


	// Class SparksSongPlayerRuntime.SparksMediaStreamer
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class USparksMediaStreamer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		ESparksStreamerStatus StreamingStatus; // 0x58(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		UCatalogData* Song; // 0x60(0x8)
		FFortMusicPlayerParams PlayParams; // 0x68(0x48)
		UFortBaseStreamingVideo* FortBaseStreaming; // 0xB0(0x8)
		UStemmedMediaStreamAsset* StemmedMediaStreamAsset; // 0xB8(0x8)
		UMidiFile* MidiFile; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksMediaStreamer");
			return ret;
		}

		void OnVideoSuccess(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751072E90(relative to base address)
		void OnVideoOpenTimeout(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751072DE0(relative to base address)
		void OnVideoOpenFailed(FString FailedUrl); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751072D44(relative to base address)
		void OnVideoOpened(FString OpenedUrl); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751072DF4(relative to base address)
		void OnVideoError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751072CC4(relative to base address)
		void OnSongDataDownloaded(UCatalogData* CatalogData, bool bSuccess); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751072BFC(relative to base address)
		void OnEndReached(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751072B84(relative to base address)
	};


	// Class SparksSongPlayerRuntime.SparksSetlistInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksSetlistInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksSetlistInterface");
			return ret;
		}

		void RemoveUnavailableSongs(UObject* WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E207D2C(relative to base address)
		TArray GetSongList(UObject* WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751072690(relative to base address)
		UCatalogData GetSongAtIndex(UObject* WorldContextObject, int32_t Index); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7510725C8(relative to base address)
		FTimespan GetSetlistDuration(UObject* WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7510723FC(relative to base address)
		int32_t GetNumSongs(UObject* WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7510722C8(relative to base address)
	};


	// Class SparksSongPlayerRuntime.SparksSongPlayerData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class USparksSongPlayerData : public UPrimaryDataAsset	
	{
	public:
		UStemConfiguration* BusStemConfiguration; // 0x30(0x8)
		UMetaSoundSource* StemPlayerMetaSound; // 0x38(0x8)
		UMetaSoundSource* StemMixerMetaSound_Gameplay; // 0x40(0x8)
		UMetaSoundSource* StemMixerMetaSound_Normal; // 0x48(0x8)
		UMetaSoundSource* PreviewMetaSound; // 0x50(0x8)
		USoundControlBus* LicensedAudioControlBus; // 0x58(0x8)
		float DefaultFadeOutDuration; // 0x60(0x4)
		float DebounceDuration; // 0x64(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksSongPlayerData");
			return ret;
		}
	};


	// Class SparksSongPlayerRuntime.SparksSongPlayerSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0xF8 (0x128 - 0x30)
	class USparksSongPlayerSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		USparksSongPlayerData* SongPlayerDataCached; // 0x58(0x8)
		UCatalogData* CurrentSong; // 0x60(0x8)
		FFortMusicPlayerParams CurrentPlayParams; // 0x68(0x48)
		UCatalogData* PendingSong; // 0xB0(0x8)
		FFortMusicPlayerParams PendingPlayParams; // 0xB8(0x48)
		USparksMediaStreamer* MediaStreamer; // 0x100(0x8)
		UAudioComponent* AudioComponentPlayer; // 0x108(0x8)
		UAudioComponent* AudioComponentMixer; // 0x110(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
		FTimerHandle PendingSongDebounceTimer; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksSongPlayerSubsystem");
			return ret;
		}

		void StopSong(float FadeOutTimeSeconds, bool bClearPendingSong); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751073828(relative to base address)
		void PlaySongByShortName(FName ShortName, FFortMusicPlayerParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510730D4(relative to base address)
		void PlaySongByItemDef(USparksSongItemDefinition* ItemDef, FFortMusicPlayerParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751072FBC(relative to base address)
		void PlaySongByCatalogData(UCatalogData* CatalogData, FFortMusicPlayerParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751072EA4(relative to base address)
		void OnLoadingScreenComplete(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751072B98(relative to base address)
	};


	// Class SparksSongPlayerRuntime.SparksSongPreviewerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class USparksSongPreviewerComponent : public UActorComponent	
	{
	public:
		UCatalogData* CurrentPreviewedSong; // 0xA0(0x8)
		EFortMusicPlaybackType CurrentPreviewedSongPlaybackType; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float FadeOutTime; // 0xAC(0x4)
		bool bStopPreviewOnEndPlay; // 0xB0(0x1)
		bool bPlayFullTrackForOwnedSongs; // 0xB1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		FGameplayTag MusicEventTag; // 0xB4(0x4)
		FGameplayTagContainer MusicEventBehaviorTags; // 0xB8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksSongPreviewerComponent");
			return ret;
		}

		void StopCurrentPreview(bool bWithFadeout); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510737AC(relative to base address)
		void StartPreviewByShortName(FName ShortName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510736F8(relative to base address)
		void StartPreviewByCatalogData(UCatalogData* CatalogData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751073678(relative to base address)
		bool IsPlayingPreviewForSong(FName Song); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751072AAC(relative to base address)
		bool IsPlayingCurrentPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751072A88(relative to base address)
		UCatalogData GetCurrentPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751072280(relative to base address)
	};

}
