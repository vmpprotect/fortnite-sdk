#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MediaAssets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		TEnumAsByte<TextureAddress> AddressX; // 0x130(0x1)
		TEnumAsByte<TextureAddress> AddressY; // 0x131(0x1)
		bool AutoClear; // 0x132(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x133(0x1) UNKNOWN PROPERTY
		FLinearColor ClearColor; // 0x134(0x10)
		bool EnableGenMips; // 0x144(0x1)
		char NumMips; // 0x145(0x1)
		bool NewStyleOutput; // 0x146(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x147(0x1) UNKNOWN PROPERTY
		float CurrentAspectRatio; // 0x148(0x4)
		TEnumAsByte<MediaTextureOrientation> CurrentOrientation; // 0x14C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
		UMediaPlayer* MediaPlayer; // 0x150(0x8)
		unsigned char UnknownData03_7[0xC0]; // 0x158(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaTexture");
			return ret;
		}

		void UpdateResource(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747A5CDF4(relative to base address)
		void SetMediaPlayer(UMediaPlayer* NewMediaPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335C80(relative to base address)
		int32_t GetWidth(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3343C0(relative to base address)
		int32_t GetTextureNumMips(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333B38(relative to base address)
		UMediaPlayer GetMediaPlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C33322C(relative to base address)
		int32_t GetHeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3330F0(relative to base address)
		float GetAspectRatio(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C332CCC(relative to base address)
	};


	// Class MediaAssets.MediaSource
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UMediaSource : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaSource");
			return ret;
		}

		bool Validate(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493F5558(relative to base address)
		void SetMediaOptionString(FName& Key, FString Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C335A68(relative to base address)
		void SetMediaOptionInt64(FName& Key, int64_t Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C335930(relative to base address)
		void SetMediaOptionFloat(FName& Key, float Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C335820(relative to base address)
		void SetMediaOptionBool(FName& Key, bool Value); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C3356E8(relative to base address)
		FString GetUrl(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333F04(relative to base address)
	};


	// Class MediaAssets.BaseMediaSource
	// Inherited from UMediaSource -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UBaseMediaSource : public UMediaSource	
	{
	public:
		FName PlayerName; // 0x80(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x17]; // 0x99(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.FileMediaSource");
			return ret;
		}

		void SetFilePath(FString Path); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3355C8(relative to base address)
	};


	// Class MediaAssets.MediaComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UMediaComponent : public UActorComponent	
	{
	public:
		UMediaTexture* MediaTexture; // 0xA0(0x8)
		UMediaPlayer* MediaPlayer; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaComponent");
			return ret;
		}

		UMediaTexture GetMediaTexture(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74920FD38(relative to base address)
		UMediaPlayer GetMediaPlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333214(relative to base address)
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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_6[0x2]; // 0xDA(0x2) UNKNOWN PROPERTY
		bool Shuffle : 1; // 0xDC:0(0x1)
		bool Loop : 1; // 0xDC:1(0x1)
		unsigned char UnknownData02_5[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		UMediaPlaylist* Playlist; // 0xE0(0x8)
		int32_t PlaylistIndex; // 0xE8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		FTimespan TimeDelay; // 0xF0(0x8)
		float HorizontalFieldOfView; // 0xF8(0x4)
		float VerticalFieldOfView; // 0xFC(0x4)
		FRotator ViewRotation; // 0x100(0x18)
		unsigned char UnknownData04_6[0x28]; // 0x118(0x28) UNKNOWN PROPERTY
		FGuid PlayerGuid; // 0x140(0x10)
		unsigned char UnknownData05_7[0x18]; // 0x150(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaPlayer");
			return ret;
		}

		bool SupportsSeeking(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3366FC(relative to base address)
		bool SupportsScrubbing(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C336684(relative to base address)
		bool SupportsRate(float Rate, bool Unthinned); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3365B8(relative to base address)
		bool SupportsPlaybackTimeRange(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C33658C(relative to base address)
		bool SetViewRotation(FRotator& Rotation, bool Absolute); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C336470(relative to base address)
		bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C336370(relative to base address)
		bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C336278(relative to base address)
		bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C336180(relative to base address)
		void SetTimeDelay(FTimespan TimeDelay); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C336070(relative to base address)
		bool SetRate(float Rate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335ED0(relative to base address)
		bool SetPlaybackTimeRange(FFloatInterval InTimeRange); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335DA8(relative to base address)
		bool SetNativeVolume(float Volume); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335D00(relative to base address)
		void SetMediaOptions(UMediaSource* Options); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335BC4(relative to base address)
		bool SetLooping(bool Looping); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335658(relative to base address)
		void SetDesiredPlayerName(FName PlayerName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3352F8(relative to base address)
		void SetBlockOnTime(FTimespan& Time); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C33526C(relative to base address)
		bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3351AC(relative to base address)
		bool Seek(FTimespan& Time); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C335114(relative to base address)
		bool Rewind(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3350F0(relative to base address)
		bool Reopen(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334FE4(relative to base address)
		bool Previous(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334E5C(relative to base address)
		void PlayAndSeek(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334E48(relative to base address)
		bool Play(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334E24(relative to base address)
		bool Pause(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334E00(relative to base address)
		bool OpenUrl(FString URL); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334D64(relative to base address)
		bool OpenSourceWithOptions(UMediaSource* MediaSource, FMediaPlayerOptions& Options); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C334C28(relative to base address)
		void OpenSourceLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C33488C(relative to base address)
		bool OpenSource(UMediaSource* MediaSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3347FC(relative to base address)
		bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334738(relative to base address)
		bool OpenPlaylist(UMediaPlaylist* InPlaylist); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3346A8(relative to base address)
		bool OpenFile(FString FilePath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C33460C(relative to base address)
		bool Next(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3345D4(relative to base address)
		bool IsReady(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3345B0(relative to base address)
		bool IsPreparing(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C334584(relative to base address)
		bool IsPlaying(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749814DD0(relative to base address)
		bool IsPaused(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C334560(relative to base address)
		bool IsLooping(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C33453C(relative to base address)
		bool IsConnecting(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C334518(relative to base address)
		bool IsClosed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3344EC(relative to base address)
		bool IsBuffering(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3344C8(relative to base address)
		bool HasError(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3343D8(relative to base address)
		FRotator GetViewRotation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C334388(relative to base address)
		FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C33429C(relative to base address)
		FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3341CC(relative to base address)
		float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C334104(relative to base address)
		FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C334038(relative to base address)
		float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333F70(relative to base address)
		float GetVerticalFieldOfView(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333F48(relative to base address)
		FString GetUrl(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333EE0(relative to base address)
		FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333DA8(relative to base address)
		int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333CE0(relative to base address)
		FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333C04(relative to base address)
		UMediaTimeStampInfo GetTimeStamp(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333B98(relative to base address)
		FTimespan GetTimeDelay(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333B7C(relative to base address)
		FTimespan GetTime(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333B50(relative to base address)
		void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3339B4(relative to base address)
		int32_t GetSelectedTrack(EMediaPlayerTrack TrackType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3338B4(relative to base address)
		float GetRate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333888(relative to base address)
		int32_t GetPlaylistIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3336C0(relative to base address)
		UMediaPlaylist GetPlaylist(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333688(relative to base address)
		FName GetPlayerName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C33365C(relative to base address)
		FFloatInterval GetPlaybackTimeRange(EMediaTimeRangeBPType InRangeToGet); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C333580(relative to base address)
		int32_t GetNumTracks(EMediaPlayerTrack TrackType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3334AC(relative to base address)
		int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333394(relative to base address)
		FText GetMediaName(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3331D4(relative to base address)
		TMap GetMediaMetadataItems(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333130(relative to base address)
		float GetHorizontalFieldOfView(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333108(relative to base address)
		FTimespan GetDuration(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333098(relative to base address)
		UMediaTimeStampInfo GetDisplayTimeStamp(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C33302C(relative to base address)
		FTimespan GetDisplayTime(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C332FDC(relative to base address)
		FName GetDesiredPlayerName(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C332FC0(relative to base address)
		FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C332ED4(relative to base address)
		int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C332DEC(relative to base address)
		int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C332D04(relative to base address)
		void Close(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3327E8(relative to base address)
		bool CanPlayUrl(FString URL); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3326B8(relative to base address)
		bool CanPlaySource(UMediaSource* MediaSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C33255C(relative to base address)
		bool CanPause(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3324E4(relative to base address)
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
		TArray<UMediaSource*> Items; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaPlaylist");
			return ret;
		}

		bool Replace(int32_t Index, UMediaSource* Replacement); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335008(relative to base address)
		bool RemoveAt(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334F24(relative to base address)
		bool Remove(UMediaSource* MediaSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334E80(relative to base address)
		int32_t Num(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3345F8(relative to base address)
		void Insert(UMediaSource* MediaSource, int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C334404(relative to base address)
		UMediaSource GetRandom(int32_t& OutIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C3337B0(relative to base address)
		UMediaSource GetPrevious(int32_t& InOutIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C3336D8(relative to base address)
		UMediaSource GetNext(int32_t& InOutIndex); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C333250(relative to base address)
		UMediaSource Get(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C332C40(relative to base address)
		bool AddUrl(FString URL); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3322E8(relative to base address)
		bool AddFile(FString FilePath); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3321C0(relative to base address)
		bool Add(UMediaSource* MediaSource); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C332100(relative to base address)
	};


	// Class MediaAssets.MediaSoundComponent
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xE0 (0x960 - 0x880)
	class UMediaSoundComponent : public USynthComponent	
	{
	public:
		EMediaSoundChannels Channels; // 0x880(0x4)
		bool DynamicRateAdjustment; // 0x884(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x885(0x3) UNKNOWN PROPERTY
		float RateAdjustmentFactor; // 0x888(0x4)
		FFloatRange RateAdjustmentRange; // 0x88C(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x89C(0x4) UNKNOWN PROPERTY
		UMediaPlayer* MediaPlayer; // 0x8A0(0x8)
		unsigned char UnknownData02_7[0xB8]; // 0x8A8(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaAssets.MediaSoundComponent");
			return ret;
		}

		void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335F60(relative to base address)
		void SetMediaPlayer(UMediaPlayer* NewMediaPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747990300(relative to base address)
		void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C3354DC(relative to base address)
		void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C33542C(relative to base address)
		void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C335378(relative to base address)
		TArray GetSpectralData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C333948(relative to base address)
		TArray GetNormalizedSpectralData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C333328(relative to base address)
		UMediaPlayer GetMediaPlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7488082F0(relative to base address)
		float GetEnvelopeValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3330C4(relative to base address)
		bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C3323F4(relative to base address)
	};


	// Class MediaAssets.PlatformMediaSource
	// Inherited from UMediaSource -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UPlatformMediaSource : public UMediaSource	
	{
	public:
		UMediaSource* MediaSource; // 0x80(0x8)

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
		unsigned char UnknownData00_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		int32_t FrameDelay; // 0x8C(0x4)
		double TimeDelay; // 0x90(0x8)
		bool bAutoDetectInput; // 0x98(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

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

		void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C332AD4(relative to base address)
		void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C332968(relative to base address)
		void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C3327FC(relative to base address)
	};

}
