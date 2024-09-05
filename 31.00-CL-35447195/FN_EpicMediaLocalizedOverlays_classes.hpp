#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaLocalizedOverlays
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EpicMediaLocalizedOverlays.EpicMediaDownloadLocalizedOverlays
	// Inherited from ULocalizedOverlays -> UOverlays -> UObject
	// Size: 0x10 (0x90 - 0x80)
	class UEpicMediaDownloadLocalizedOverlays : public ULocalizedOverlays	
	{
	public:
		UMediaPlayer MediaPlayer; // 0x80(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaLocalizedOverlays.EpicMediaDownloadLocalizedOverlays");
			return ret;
		}
	};

}
