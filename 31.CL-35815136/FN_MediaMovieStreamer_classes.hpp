#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MediaMovieStreamer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MediaMovieStreamer.MediaMovieAssets
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMediaMovieAssets : public UObject	
	{
	public:
		UMediaPlayer* MediaPlayer; // 0x28(0x8)
		UMediaSoundComponent* MediaSoundComponent; // 0x30(0x8)
		UMediaSource* MediaSource; // 0x38(0x8)
		UMediaTexture* MediaTexture; // 0x40(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MediaMovieStreamer.MediaMovieAssets");
			return ret;
		}

		void OnMediaEnd(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74DF7A11C(relative to base address)
	};

}
