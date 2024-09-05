#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AIPatrolPath
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AIPatrolPath.PatrolPathSegmentDetails
	// Size: 0x108 (0x108 - 0x0)
	struct FPatrolPathSegmentDetails	
	{
	public:
		unsigned char UnknownData00_7[0xA8]; // 0x0(0xA8) UNKNOWN PROPERTY
		UNavigationPath* Path; // 0xA8(0x8)
		UAIPatrolPathComponent* Start; // 0xB0(0x8)
		UAIPatrolPathComponent* End; // 0xB8(0x8)
		unsigned char UnknownData01_7[0x48]; // 0xC0(0x48) UNKNOWN PROPERTY
	};

}
