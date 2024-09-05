#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaLocalizedOverlays
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicMediaLocalizedOverlays.EpicMediaDownloadLocalizedOverlays
	// Inherited from ULocalizedOverlays -> UOverlays -> UObject
	// Size: 0x10 (0x90 - 0x80)
	class UEpicMediaDownloadLocalizedOverlays : public ULocalizedOverlays	
	{
	public:
		UMediaPlayer* MediaPlayer; // 0x80(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaLocalizedOverlays.EpicMediaDownloadLocalizedOverlays");
			return ret;
		}
	};

}
