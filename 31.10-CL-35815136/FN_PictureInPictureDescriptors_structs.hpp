#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PictureInPictureDescriptors
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PictureInPictureDescriptors.PiPPartnerSource
	// Size: 0x1F0 (0x1F0 - 0x0)
	struct FPiPPartnerSource	
	{
	public:
		unsigned char UnknownData00_7[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
		PictureInPictureSourceType SourceType; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FString Name; // 0x50(0x10)
		FDateTime StartTime; // 0x60(0x8)
		FDateTime EndTime; // 0x68(0x8)
		FFortMediaEventsStreamAssets AssetConfig; // 0x70(0x68)
		FString EventIconUrl; // 0xD8(0x10)
		UEpicCMSImage* CMSImage; // 0xE8(0x8)
		UPictureInPictureSourceActionData* ActionData; // 0xF0(0x8)
		TSet<FString> PlatformDenylist; // 0xF8(0x50)
		TSet<FString> GameplayTagDenylist; // 0x148(0x50)
		TSet<FString> GameplayTagAllowlist; // 0x198(0x50)
		bool bManual; // 0x1E8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x1E9(0x7) UNKNOWN PROPERTY
	};


	// Struct PictureInPictureDescriptors.PIPVideoPlayerAssetConfig
	// Size: 0x88 (0x88 - 0x0)
	struct FPIPVideoPlayerAssetConfig	
	{
	public:
		UMediaTexture* VideoTexture; // 0x0(0x8)
		UMediaPlayer* VideoPlayer; // 0x8(0x8)
		UMaterialInterface* VideoMaterial; // 0x10(0x8)
		UMaterialInterface* ThumbnailMaterial; // 0x18(0x8)
		FVector2D LoadingScreenSize; // 0x20(0x10)
		FVector2D LoadingScreenPosition; // 0x30(0x10)
		UFortStreamMediaSource* MediaSource; // 0x40(0x8)
		UMediaSoundComponent* SoundComponent; // 0x48(0x8)
		USoundClass* SoundClass; // 0x50(0x8)
		USoundMix* ActiveSoundMix; // 0x58(0x8)
		USoundSubmixBase* DefaultSubmix; // 0x60(0x8)
		USoundSubmixBase* LicensedSubmix; // 0x68(0x8)
		UFortMediaSubtitlesPlayer* SubtitlePlayer; // 0x70(0x8)
		ULocalizedOverlays* SubtitleOverlays; // 0x78(0x8)
		USubtitleDisplayOptions* SubtitleDisplayOptions; // 0x80(0x8)
	};


	// Struct PictureInPictureDescriptors.PIPVideoPlayerConfig
	// Size: 0x48 (0x48 - 0x0)
	struct FPIPVideoPlayerConfig	
	{
	public:
		FString MimeType; // 0x0(0x10)
		FString BlurlVUID; // 0x10(0x10)
		bool bLoopEnabled; // 0x20(0x1)
		bool bAutoPlay; // 0x21(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		FString VideoURL; // 0x28(0x10)
		bool bShareBlocked; // 0x38(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FDateTime EventStartTime; // 0x40(0x8)
	};


	// Struct PictureInPictureDescriptors.PictureInPictureActionConfig
	// Size: 0xD0 (0xD0 - 0x0)
	struct FPictureInPictureActionConfig	
	{
	public:
		PictureInPictureAction ActionType; // 0x0(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
		FSlateBrush ActionBrush; // 0x10(0xB0)
		FText ActionText; // 0xC0(0x10)
	};


	// Struct PictureInPictureDescriptors.PictureInPictureAnalyticsPayload
	// Size: 0x98 (0x98 - 0x0)
	struct FPictureInPictureAnalyticsPayload	
	{
	public:
		TMap<PictureInPictureAction, int32_t> PartnerActionTally; // 0x0(0x50)
		unsigned char UnknownData00_7[0x48]; // 0x50(0x48) UNKNOWN PROPERTY
	};

}
