#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MediaUtils
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MediaUtils.MediaPlayerTrackOptions
	// Size: 0x1C (0x1C - 0x0)
	struct FMediaPlayerTrackOptions	
	{
	public:
		int32_t Audio; // 0x0(0x4)
		int32_t Caption; // 0x4(0x4)
		int32_t MetaData; // 0x8(0x4)
		int32_t Script; // 0xC(0x4)
		int32_t Subtitle; // 0x10(0x4)
		int32_t Text; // 0x14(0x4)
		int32_t Video; // 0x18(0x4)
	};


	// Struct MediaUtils.MediaPlayerOptions
	// Size: 0x80 (0x80 - 0x0)
	struct FMediaPlayerOptions	
	{
	public:
		FMediaPlayerTrackOptions Tracks; // 0x0(0x1C)
		EMediaPlayerOptionTrackSelectMode TrackSelection; // 0x1C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FTimespan SeekTime; // 0x20(0x8)
		EMediaPlayerOptionSeekTimeType SeekTimeType; // 0x28(0x1)
		EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x29(0x1)
		EMediaPlayerOptionBooleanOverride Loop; // 0x2A(0x1)
		unsigned char UnknownData03_7[0x55]; // 0x2B(0x55) UNKNOWN PROPERTY
	};

}
