#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioMetadata
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioMetadata.AudioMetadataModulationSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FAudioMetadataModulationSettings	
	{
	public:
		USoundControlBus* ControlBusLicensedAudioMuteAll; // 0x0(0x8)
		USoundControlBus* ControlBusLicensedAudioMuteOthers; // 0x8(0x8)
	};


	// Struct AudioMetadata.AudioMetadataSubmixSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FAudioMetadataSubmixSettings	
	{
	public:
		USoundSubmix* LicensedAudioSubmix; // 0x0(0x8)
		USoundSubmix* PostPartySubmix; // 0x8(0x8)
	};

}
