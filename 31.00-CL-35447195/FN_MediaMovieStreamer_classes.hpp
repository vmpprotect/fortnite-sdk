#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MediaMovieStreamer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MediaMovieStreamer.MediaMovieAssets
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMediaMovieAssets : public UObject	
	{
	public:
		UMediaPlayer MediaPlayer; // 0x28(0x8)
		UMediaSoundComponent MediaSoundComponent; // 0x30(0x8)
		UMediaSource MediaSource; // 0x38(0x8)
		UMediaTexture MediaTexture; // 0x40(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaMovieStreamer.MediaMovieAssets");
			return ret;
		}

		void OnMediaEnd(); // Flags: Final|Native|Private 0x7FF4146609D8
	};

}
