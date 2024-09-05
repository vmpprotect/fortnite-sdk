#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicStreamMediaSource
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/EpicStreamMediaSource.UCPTypes
	enum UCPTypes
	{
		UCPTypes__UCPAudio = 0,
		UCPTypes__UCPVideo = 1,
		UCPTypes__UCPBoth = 2,
		UCPTypes__UCPNone = 3,
	};


	// Enum /Script/EpicStreamMediaSource.EStreamMediaContainerType
	enum EStreamMediaContainerType
	{
		EStreamMediaContainerType__DASH = 0,
		EStreamMediaContainerType__HLS = 1,
		EStreamMediaContainerType__MP4 = 2,
		EStreamMediaContainerType__UNKNOWN = 3,
	};

}
