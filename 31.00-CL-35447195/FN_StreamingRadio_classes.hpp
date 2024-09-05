#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StreamingRadio
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class StreamingRadio.StreamingRadioManagerNative
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AStreamingRadioManagerNative : public AActor	
	{
	public:
		UFortStreamMediaSource StreamMediaSource; // 0x290(0x8)
		UMediaPlayer MediaPlayer; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StreamingRadio.StreamingRadioManagerNative");
			return ret;
		}
	};

}
