#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaUtilities
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EpicMediaUtilities.EpicMediaImageDataExt
	// Size: 0x30 (0x30 - 0x0)
	struct FEpicMediaImageDataExt	
	{
	public:
		FString URL; // 0x0(0x10)
		FString FullUrl; // 0x10(0x10)
		int32_t Width; // 0x20(0x4)
		int32_t Height; // 0x24(0x4)
		float AspectRatio; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct EpicMediaUtilities.EpicMediaAudioOnlyPeriodDataExt
	// Size: 0x28 (0x28 - 0x0)
	struct FEpicMediaAudioOnlyPeriodDataExt	
	{
	public:
		FLinearColor Color; // 0x0(0x10)
		bool bColorSet; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		double StartFrame; // 0x18(0x8)
		double EndFrame; // 0x20(0x8)
	};


	// Struct EpicMediaUtilities.EpicMediaVolumeChangeDataExt
	// Size: 0x28 (0x28 - 0x0)
	struct FEpicMediaVolumeChangeDataExt	
	{
	public:
		double Frame; // 0x0(0x8)
		double Level; // 0x8(0x8)
		double Lerp; // 0x10(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct EpicMediaUtilities.EpicMediaPlaylistExt
	// Size: 0xA0 (0xA0 - 0x0)
	struct FEpicMediaPlaylistExt	
	{
	public:
		FString Language; // 0x0(0x10)
		FString Type; // 0x10(0x10)
		FString URL; // 0x20(0x10)
		FString RelUrl; // 0x30(0x10)
		FString Data; // 0x40(0x10)
		double duration; // 0x50(0x8)
		double FPS; // 0x58(0x8)
		TArray<FEpicMediaImageDataExt> Images; // 0x60(0x10)
		TArray<FEpicMediaAudioOnlyPeriodDataExt> AudioOnlyPeriods; // 0x70(0x10)
		TArray<FEpicMediaVolumeChangeDataExt> VolumeChanges; // 0x80(0x10)
		double SkipBoundaryTime; // 0x90(0x8)
		double PreEndEventTime; // 0x98(0x8)
	};


	// Struct EpicMediaUtilities.EpicMediaRegionLockExt
	// Size: 0xA8 (0xA8 - 0x0)
	struct FEpicMediaRegionLockExt	
	{
	public:
		bool AllowOnError; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString Type; // 0x8(0x10)
		TArray<FString> AllowList; // 0x18(0x10)
		TArray<FString> DenyList; // 0x28(0x10)
		TMap<FString, FString> Limits; // 0x38(0x50)
		FString ContentId; // 0x88(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY
	};


	// Struct EpicMediaUtilities.EpicMediaAudioMetadataTrackIndicesExt
	// Size: 0x10 (0x10 - 0x0)
	struct FEpicMediaAudioMetadataTrackIndicesExt	
	{
	public:
		TArray<int32_t> Indices; // 0x0(0x10)
	};


	// Struct EpicMediaUtilities.EpicMediaAudioMetadataTrackExt
	// Size: 0x50 (0x50 - 0x0)
	struct FEpicMediaAudioMetadataTrackExt	
	{
	public:
		TMap<FString, FEpicMediaAudioMetadataTrackIndicesExt> TrackData; // 0x0(0x50)
	};


	// Struct EpicMediaUtilities.EpicMediaAudioMetadataDataExt
	// Size: 0xB0 (0xB0 - 0x0)
	struct FEpicMediaAudioMetadataDataExt	
	{
	public:
		FString ShortName; // 0x0(0x10)
		int32_t SongID; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString Title; // 0x18(0x10)
		FString Artist; // 0x28(0x10)
		FString Album; // 0x38(0x10)
		FString Genre; // 0x48(0x10)
		int32_t Year; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		TMap<FString, int32_t> Difficulty; // 0x60(0x50)
	};


	// Struct EpicMediaUtilities.EpicMediaAudioMetadataExt
	// Size: 0x130 (0x130 - 0x0)
	struct FEpicMediaAudioMetadataExt	
	{
	public:
		TMap<FString, FEpicMediaAudioMetadataTrackIndicesExt> Tracks; // 0x0(0x50)
		TArray<float> Pans; // 0x50(0x10)
		TArray<float> Volumes; // 0x60(0x10)
		TArray<char> Midi; // 0x70(0x10)
		FEpicMediaAudioMetadataDataExt MetadataData; // 0x80(0xB0)
	};


	// Struct EpicMediaUtilities.EpicMediaExtraMetadataExt
	// Size: 0x68 (0x68 - 0x0)
	struct FEpicMediaExtraMetadataExt	
	{
	public:
		FString AssetId; // 0x0(0x10)
		TArray<FString> BaseURLs; // 0x10(0x10)
		FString BaseURL; // 0x20(0x10)
		int64_t Version; // 0x30(0x8)
		int64_t ExpiresAt; // 0x38(0x8)
		bool bSupportsCaching; // 0x40(0x1)
		bool bSharelock; // 0x41(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
		FString UserContentProtection; // 0x48(0x10)
		FString Limits; // 0x58(0x10)
	};


	// Struct EpicMediaUtilities.EpicMediaMetadataExt
	// Size: 0x2F8 (0x2F8 - 0x0)
	struct FEpicMediaMetadataExt	
	{
	public:
		TArray<FEpicMediaPlaylistExt> Playlists; // 0x0(0x10)
		TArray<FEpicMediaPlaylistExt> StateStreamPlaylists; // 0x10(0x10)
		TArray<FEpicMediaPlaylistExt> SelectedPlaylists; // 0x20(0x10)
		FString Type; // 0x30(0x10)
		FString Envelope; // 0x40(0x10)
		FString Limits; // 0x50(0x10)
		FString Subtitles; // 0x60(0x10)
		FString UserContentProtection; // 0x70(0x10)
		bool Sharelock; // 0x80(0x1)
		bool AudioOnly; // 0x81(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x82(0x2) UNKNOWN PROPERTY
		float AspectRatio; // 0x84(0x4)
		bool PartySync; // 0x88(0x1)
		bool Live; // 0x89(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x8A(0x6) UNKNOWN PROPERTY
		FString DenyHTTPCode; // 0x90(0x10)
		FEpicMediaRegionLockExt RegionLockData; // 0xA0(0xA8)
		FEpicMediaAudioMetadataExt AudioMetadata; // 0x148(0x130)
		bool bQuicksilverEP; // 0x278(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x279(0x7) UNKNOWN PROPERTY
		FEpicMediaExtraMetadataExt ExtraMetadata; // 0x280(0x68)
		unsigned char UnknownData03_7[0x10]; // 0x2E8(0x10) UNKNOWN PROPERTY
	};

}
