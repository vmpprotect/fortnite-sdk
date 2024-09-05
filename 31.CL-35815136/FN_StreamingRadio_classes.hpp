#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StreamingRadio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class StreamingRadio.StreamingRadioManagerNative
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AStreamingRadioManagerNative : public AActor	
	{
	public:
		UFortStreamMediaSource* StreamMediaSource; // 0x290(0x8)
		UMediaPlayer* MediaPlayer; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StreamingRadio.StreamingRadioManagerNative");
			return ret;
		}
	};

}
