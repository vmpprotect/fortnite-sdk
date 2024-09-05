#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MediaAssets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MediaAssets.MediaMetadataItemBPT
	// Size: 0x40 (0x40 - 0x0)
	struct FMediaMetadataItemBPT	
	{
	public:
		FString LanguageCode; // 0x0(0x10)
		FString MimeType; // 0x10(0x10)
		FString StringData; // 0x20(0x10)
		TArray BinaryData; // 0x30(0x10)
	};


	// Struct MediaAssets.MediaMetadataItemsBPT
	// Size: 0x10 (0x10 - 0x0)
	struct FMediaMetadataItemsBPT	
	{
	public:
		TArray Items; // 0x0(0x10)
	};


	// Struct MediaAssets.MediaSoundComponentSpectralData
	// Size: 0x8 (0x8 - 0x0)
	struct FMediaSoundComponentSpectralData	
	{
	public:
		float FrequencyHz; // 0x0(0x4)
		float Magnitude; // 0x4(0x4)
	};


	// Struct MediaAssets.MediaSourceCacheSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FMediaSourceCacheSettings	
	{
	public:
		bool bOverride; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float TimeToLookAhead; // 0x4(0x4)
	};


	// Struct MediaAssets.MediaCaptureDevice
	// Size: 0x20 (0x20 - 0x0)
	struct FMediaCaptureDevice	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		FString URL; // 0x10(0x10)
	};

}
