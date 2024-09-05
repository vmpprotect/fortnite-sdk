#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksSongPlayerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksSongPlayerRuntime.SparksCustomSetlist
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class USparksCustomSetlist : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSetlistChanged; // 0xA8(0x10)
		TArray SetlistEntries; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksCustomSetlist");
			return ret;
		}

		void SetlistChangedDelegate__DelegateSignature(USparksCustomSetlist Setlist); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140376B8
		void ServerRemoveSongForPlayer(FName& SongShortName, APlayerState Player, bool bRemoveAll); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140375D8
		void ServerRemoveSongAtIndex(int32_t Index, FName& SongShortName, APlayerState Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140374F8
		void ServerRemoveAllSongsForPlayer(APlayerState Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414037418
		void ServerRemoveAllSongs(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414037338
		void ServerAddSongForPlayer(FName& SongShortName, APlayerState Player); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414037258
		void OnRep_SetlistEntries(); // Flags: Final|Native|Protected 0x7FF414037178
		bool HasPlayerAddedSong(FName& SongShortName, APlayerState Player); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414037098
		bool HasAnyoneAddedSong(FName& SongShortName, APlayerState& OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414036FB8
		TArray GetSongsAddedByPlayer(APlayerState Player); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414036ED8
		void GetSetlistEntryAtIndex(int32_t Index, FName& OutSongShortName, APlayerState& OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414036DF8
		void GetRelevantParticipants(TArray& OutPlayers); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414036D18
		void FindEntriesForSongAndPlayer(FName& SongShortName, APlayerState Player, TArray& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414036C38
		void FindEntriesForSong(FName& SongShortName, TArray& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414036B58
		void FindEntriesForPlayer(APlayerState Player, TArray& OutMatchingEntryIndicies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414036A78
		bool CanAddSongForPlayer(FName& SongShortName, APlayerState Player, FGameplayTag& OutReason, APlayerState& OutAddedByPlayer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414036998
	};


	// Class SparksSongPlayerRuntime.SparksMediaStreamer
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class USparksMediaStreamer : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		ESparksStreamerStatus StreamingStatus; // 0x58(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		UCatalogData Song; // 0x60(0x8)
		FFortMusicPlayerParams PlayParams; // 0x68(0x48)
		UFortBaseStreamingVideo FortBaseStreaming; // 0xB0(0x8)
		UStemmedMediaStreamAsset StemmedMediaStreamAsset; // 0xB8(0x8)
		UMidiFile MidiFile; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksMediaStreamer");
			return ret;
		}

		void OnVideoSuccess(); // Flags: Final|Native|Protected 0x7FF414C13D58
		void OnVideoOpenTimeout(); // Flags: Final|Native|Protected 0x7FF414C13C78
		void OnVideoOpenFailed(FString FailedUrl); // Flags: Final|Native|Protected 0x7FF414C13B98
		void OnVideoOpened(FString OpenedUrl); // Flags: Final|Native|Protected 0x7FF414C13AB8
		void OnVideoError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Protected 0x7FF414C139D8
		void OnSongDataDownloaded(UCatalogData CatalogData, bool bSuccess); // Flags: Final|Native|Protected 0x7FF414C138F8
		void OnEndReached(); // Flags: Final|Native|Protected 0x7FF414C13818
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

		void RemoveUnavailableSongs(UObject WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C141B8
		TArray GetSongList(UObject WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C140D8
		UCatalogData GetSongAtIndex(UObject WorldContextObject, int32_t Index); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C13FF8
		FTimespan GetSetlistDuration(UObject WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C13F18
		int32_t GetNumSongs(UObject WorldContextObject); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C13E38
	};


	// Class SparksSongPlayerRuntime.SparksSongPlayerData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class USparksSongPlayerData : public UPrimaryDataAsset	
	{
	public:
		UStemConfiguration BusStemConfiguration; // 0x30(0x8)
		UMetaSoundSource StemPlayerMetaSound; // 0x38(0x8)
		UMetaSoundSource StemMixerMetaSound_Gameplay; // 0x40(0x8)
		UMetaSoundSource StemMixerMetaSound_Normal; // 0x48(0x8)
		UMetaSoundSource PreviewMetaSound; // 0x50(0x8)
		USoundControlBus LicensedAudioControlBus; // 0x58(0x8)
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
		unsigned char UnknownData02_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		USparksSongPlayerData SongPlayerDataCached; // 0x58(0x8)
		UCatalogData CurrentSong; // 0x60(0x8)
		FFortMusicPlayerParams CurrentPlayParams; // 0x68(0x48)
		UCatalogData PendingSong; // 0xB0(0x8)
		FFortMusicPlayerParams PendingPlayParams; // 0xB8(0x48)
		USparksMediaStreamer MediaStreamer; // 0x100(0x8)
		UAudioComponent AudioComponentPlayer; // 0x108(0x8)
		UAudioComponent AudioComponentMixer; // 0x110(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
		FTimerHandle PendingSongDebounceTimer; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksSongPlayerSubsystem");
			return ret;
		}

		void StopSong(float FadeOutTimeSeconds, bool bClearPendingSong); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C14618
		void PlaySongByShortName(FName ShortName, FFortMusicPlayerParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C14538
		void PlaySongByItemDef(USparksSongItemDefinition ItemDef, FFortMusicPlayerParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C14458
		void PlaySongByCatalogData(UCatalogData CatalogData, FFortMusicPlayerParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C14378
		void OnLoadingScreenComplete(); // Flags: Final|Native|Private 0x7FF414C14298
	};


	// Class SparksSongPlayerRuntime.SparksSongPreviewerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class USparksSongPreviewerComponent : public UActorComponent	
	{
	public:
		UCatalogData CurrentPreviewedSong; // 0xA0(0x8)
		EFortMusicPlaybackType CurrentPreviewedSongPlaybackType; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float FadeOutTime; // 0xAC(0x4)
		bool bStopPreviewOnEndPlay; // 0xB0(0x1)
		bool bPlayFullTrackForOwnedSongs; // 0xB1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		FGameplayTag MusicEventTag; // 0xB4(0x4)
		FGameplayTagContainer MusicEventBehaviorTags; // 0xB8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSongPlayerRuntime.SparksSongPreviewerComponent");
			return ret;
		}

		void StopCurrentPreview(bool bWithFadeout); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C14B58
		void StartPreviewByShortName(FName ShortName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C14A78
		void StartPreviewByCatalogData(UCatalogData CatalogData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C14998
		bool IsPlayingPreviewForSong(FName Song); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C148B8
		bool IsPlayingCurrentPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C147D8
		UCatalogData GetCurrentPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C146F8
	};

}
