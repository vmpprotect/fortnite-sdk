#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MediaAssets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MediaAssets.MediaSourceRendererInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMediaSourceRendererInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaSourceRendererInterface");
			return ret;
		}
	};


	// Class MediaAssets.MediaTexture
	// Inherited from UTexture -> UStreamableRenderAsset -> UObject
	// Size: 0xE8 (0x218 - 0x130)
	class UMediaTexture : public UTexture	
	{
	public:
		TEnumAsByte AddressX; // 0x130(0x1)
		TEnumAsByte AddressY; // 0x131(0x1)
		bool AutoClear; // 0x132(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x133(0x1) UNKNOWN PROPERTY
		FLinearColor ClearColor; // 0x134(0x10)
		bool EnableGenMips; // 0x144(0x1)
		char NumMips; // 0x145(0x1)
		bool NewStyleOutput; // 0x146(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x147(0x1) UNKNOWN PROPERTY
		float CurrentAspectRatio; // 0x148(0x4)
		TEnumAsByte CurrentOrientation; // 0x14C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
		UMediaPlayer MediaPlayer; // 0x150(0x8)
		unsigned char UnknownData07_7[0xC0]; // 0x158(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaTexture");
			return ret;
		}

		void UpdateResource(); // Flags: Native|Public|BlueprintCallable 0x7FF4144D6E98
		void SetMediaPlayer(UMediaPlayer NewMediaPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D6DB8
		int32_t GetWidth(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D6CD8
		int32_t GetTextureNumMips(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D6BF8
		UMediaPlayer GetMediaPlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D6B18
		int32_t GetHeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D6A38
		float GetAspectRatio(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D6958
	};


	// Class MediaAssets.MediaSource
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UMediaSource : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaSource");
			return ret;
		}

		bool Validate(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D73D8
		void SetMediaOptionString(FName& Key, FString Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D72F8
		void SetMediaOptionInt64(FName& Key, int64_t Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D7218
		void SetMediaOptionFloat(FName& Key, float Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D7138
		void SetMediaOptionBool(FName& Key, bool Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D7058
		FString GetUrl(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D6F78
	};


	// Class MediaAssets.BaseMediaSource
	// Inherited from UMediaSource -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UBaseMediaSource : public UMediaSource	
	{
	public:
		FName PlayerName; // 0x80(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.BaseMediaSource");
			return ret;
		}
	};


	// Class MediaAssets.FileMediaSource
	// Inherited from UBaseMediaSource -> UMediaSource -> UObject
	// Size: 0x28 (0xB0 - 0x88)
	class UFileMediaSource : public UBaseMediaSource	
	{
	public:
		FString FilePath; // 0x88(0x10)
		bool PrecacheFile; // 0x98(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x99(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.FileMediaSource");
			return ret;
		}

		void SetFilePath(FString Path); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D74B8
	};


	// Class MediaAssets.MediaComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UMediaComponent : public UActorComponent	
	{
	public:
		UMediaTexture MediaTexture; // 0xA0(0x8)
		UMediaPlayer MediaPlayer; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaComponent");
			return ret;
		}

		UMediaTexture GetMediaTexture(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7678
		UMediaPlayer GetMediaPlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7598
	};


	// Class MediaAssets.MediaTimeStampInfo
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMediaTimeStampInfo : public UObject	
	{
	public:
		FTimespan Time; // 0x28(0x8)
		int64_t SequenceIndex; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaTimeStampInfo");
			return ret;
		}
	};


	// Class MediaAssets.MediaPlayer
	// Inherited from UObject
	// Size: 0x140 (0x168 - 0x28)
	class UMediaPlayer : public UObject	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnEndReached; // 0x30(0x10)
		FMulticastInlineDelegate OnMediaClosed; // 0x40(0x10)
		FMulticastInlineDelegate OnMediaOpened; // 0x50(0x10)
		FMulticastInlineDelegate OnMediaOpenFailed; // 0x60(0x10)
		FMulticastInlineDelegate OnPlaybackResumed; // 0x70(0x10)
		FMulticastInlineDelegate OnPlaybackSuspended; // 0x80(0x10)
		FMulticastInlineDelegate OnSeekCompleted; // 0x90(0x10)
		FMulticastInlineDelegate OnTracksChanged; // 0xA0(0x10)
		FMulticastInlineDelegate OnMetadataChanged; // 0xB0(0x10)
		FTimespan CacheAhead; // 0xC0(0x8)
		FTimespan CacheBehind; // 0xC8(0x8)
		FTimespan CacheBehindGame; // 0xD0(0x8)
		bool NativeAudioOut; // 0xD8(0x1)
		bool PlayOnOpen; // 0xD9(0x1)
		unsigned char UnknownData07_6[0x2]; // 0xDA(0x2) UNKNOWN PROPERTY
		bool Shuffle : 1; // 0xDC:0(0x1)
		bool Loop : 1; // 0xDC:1(0x1)
		unsigned char UnknownData08_5[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		UMediaPlaylist Playlist; // 0xE0(0x8)
		int32_t PlaylistIndex; // 0xE8(0x4)
		unsigned char UnknownData09_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		FTimespan TimeDelay; // 0xF0(0x8)
		float HorizontalFieldOfView; // 0xF8(0x4)
		float VerticalFieldOfView; // 0xFC(0x4)
		FRotator ViewRotation; // 0x100(0x18)
		unsigned char UnknownData10_6[0x28]; // 0x118(0x28) UNKNOWN PROPERTY
		FGuid PlayerGuid; // 0x140(0x10)
		unsigned char UnknownData11_7[0x18]; // 0x150(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaPlayer");
			return ret;
		}

		bool SupportsSeeking(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DBAB8
		bool SupportsScrubbing(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DB9D8
		bool SupportsRate(float Rate, bool Unthinned); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DB8F8
		bool SupportsPlaybackTimeRange(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DB818
		bool SetViewRotation(FRotator& Rotation, bool Absolute); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144DB738
		bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DB658
		bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DB578
		bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DB498
		void SetTimeDelay(FTimespan TimeDelay); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144DB3B8
		bool SetRate(float Rate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DB2D8
		bool SetPlaybackTimeRange(FFloatInterval InTimeRange); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DB1F8
		bool SetNativeVolume(float Volume); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DB118
		void SetMediaOptions(UMediaSource Options); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DB038
		bool SetLooping(bool Looping); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DAF58
		void SetDesiredPlayerName(FName PlayerName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DAE78
		void SetBlockOnTime(FTimespan& Time); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144DAD98
		bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DACB8
		bool Seek(FTimespan& Time); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144DABD8
		bool Rewind(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DAAF8
		bool Reopen(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DAA18
		bool Previous(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DA938
		void PlayAndSeek(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DA858
		bool Play(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DA778
		bool Pause(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DA698
		bool OpenUrl(FString URL); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DA5B8
		bool OpenSourceWithOptions(UMediaSource MediaSource, FMediaPlayerOptions& Options); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144DA4D8
		void OpenSourceLatent(UObject WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144DA3F8
		bool OpenSource(UMediaSource MediaSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DA318
		bool OpenPlaylistIndex(UMediaPlaylist InPlaylist, int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DA238
		bool OpenPlaylist(UMediaPlaylist InPlaylist); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144DA158
		bool OpenFile(FString FilePath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DA078
		bool Next(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D9F98
		bool IsReady(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9EB8
		bool IsPreparing(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9DD8
		bool IsPlaying(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9CF8
		bool IsPaused(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9C18
		bool IsLooping(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9B38
		bool IsConnecting(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9A58
		bool IsClosed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9978
		bool IsBuffering(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9898
		bool HasError(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D97B8
		FRotator GetViewRotation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144D96D8
		FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D95F8
		FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9518
		float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9438
		FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9358
		float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9278
		float GetVerticalFieldOfView(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D9198
		FString GetUrl(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D90B8
		FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8FD8
		int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8EF8
		FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8E18
		UMediaTimeStampInfo GetTimeStamp(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8D38
		FTimespan GetTimeDelay(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8C58
		FTimespan GetTime(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8B78
		void GetSupportedRates(TArray& OutRates, bool Unthinned); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8A98
		int32_t GetSelectedTrack(EMediaPlayerTrack TrackType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D89B8
		float GetRate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D88D8
		int32_t GetPlaylistIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D87F8
		UMediaPlaylist GetPlaylist(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8718
		FName GetPlayerName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8638
		FFloatInterval GetPlaybackTimeRange(EMediaTimeRangeBPType InRangeToGet); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D8558
		int32_t GetNumTracks(EMediaPlayerTrack TrackType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8478
		int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8398
		FText GetMediaName(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D82B8
		TMap GetMediaMetadataItems(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D81D8
		float GetHorizontalFieldOfView(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D80F8
		FTimespan GetDuration(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144D8018
		UMediaTimeStampInfo GetDisplayTimeStamp(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7F38
		FTimespan GetDisplayTime(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7E58
		FName GetDesiredPlayerName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7D78
		FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7C98
		int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7BB8
		int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7AD8
		void Close(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D79F8
		bool CanPlayUrl(FString URL); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D7918
		bool CanPlaySource(UMediaSource MediaSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D7838
		bool CanPause(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D7758
	};


	// Class MediaAssets.MediaPlayerProxyInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMediaPlayerProxyInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaPlayerProxyInterface");
			return ret;
		}
	};


	// Class MediaAssets.MediaPlaylist
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UMediaPlaylist : public UObject	
	{
	public:
		TArray Items; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaPlaylist");
			return ret;
		}

		bool Replace(int32_t Index, UMediaSource Replacement); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DC538
		bool RemoveAt(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DC458
		bool Remove(UMediaSource MediaSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DC378
		int32_t Num(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144DC298
		void Insert(UMediaSource MediaSource, int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DC1B8
		UMediaSource GetRandom(int32_t& OutIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144DC0D8
		UMediaSource GetPrevious(int32_t& InOutIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144DBFF8
		UMediaSource GetNext(int32_t& InOutIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144DBF18
		UMediaSource Get(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DBE38
		bool AddUrl(FString URL); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DBD58
		bool AddFile(FString FilePath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DBC78
		bool Add(UMediaSource MediaSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DBB98
	};


	// Class MediaAssets.MediaSoundComponent
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xE0 (0x960 - 0x880)
	class UMediaSoundComponent : public USynthComponent	
	{
	public:
		EMediaSoundChannels Channels; // 0x880(0x4)
		bool DynamicRateAdjustment; // 0x884(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x885(0x3) UNKNOWN PROPERTY
		float RateAdjustmentFactor; // 0x888(0x4)
		FFloatRange RateAdjustmentRange; // 0x88C(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x89C(0x4) UNKNOWN PROPERTY
		UMediaPlayer MediaPlayer; // 0x8A0(0x8)
		unsigned char UnknownData05_7[0xB8]; // 0x8A8(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaSoundComponent");
			return ret;
		}

		void SetSpectralAnalysisSettings(TArray InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DCDF8
		void SetMediaPlayer(UMediaPlayer NewMediaPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DCD18
		void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DCC38
		void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DCB58
		void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DCA78
		TArray GetSpectralData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DC998
		TArray GetNormalizedSpectralData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144DC8B8
		UMediaPlayer GetMediaPlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DC7D8
		float GetEnvelopeValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144DC6F8
		bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144DC618
	};


	// Class MediaAssets.PlatformMediaSource
	// Inherited from UMediaSource -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UPlatformMediaSource : public UMediaSource	
	{
	public:
		UMediaSource MediaSource; // 0x80(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.PlatformMediaSource");
			return ret;
		}
	};


	// Class MediaAssets.StreamMediaSource
	// Inherited from UBaseMediaSource -> UMediaSource -> UObject
	// Size: 0x10 (0x98 - 0x88)
	class UStreamMediaSource : public UBaseMediaSource	
	{
	public:
		FString StreamUrl; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.StreamMediaSource");
			return ret;
		}
	};


	// Class MediaAssets.TimeSynchronizableMediaSource
	// Inherited from UBaseMediaSource -> UMediaSource -> UObject
	// Size: 0x18 (0xA0 - 0x88)
	class UTimeSynchronizableMediaSource : public UBaseMediaSource	
	{
	public:
		bool bUseTimeSynchronization; // 0x88(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		int32_t FrameDelay; // 0x8C(0x4)
		double TimeDelay; // 0x90(0x8)
		bool bAutoDetectInput; // 0x98(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.TimeSynchronizableMediaSource");
			return ret;
		}
	};


	// Class MediaAssets.MediaBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaBlueprintFunctionLibrary");
			return ret;
		}

		void EnumerateWebcamCaptureDevices(TArray& OutDevices, int32_t Filter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144DD098
		void EnumerateVideoCaptureDevices(TArray& OutDevices, int32_t Filter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144DCFB8
		void EnumerateAudioCaptureDevices(TArray& OutDevices, int32_t Filter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144DCED8
	};

}
