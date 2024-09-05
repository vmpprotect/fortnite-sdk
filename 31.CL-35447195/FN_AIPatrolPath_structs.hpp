#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AIPatrolPath
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AIPatrolPath.PatrolPathSegmentDetails
	// Size: 0x108 (0x108 - 0x0)
	struct FPatrolPathSegmentDetails	
	{
	public:
		unsigned char UnknownData02_7[0xA8]; // 0x0(0xA8) UNKNOWN PROPERTY
		UNavigationPath Path; // 0xA8(0x8)
		UAIPatrolPathComponent Start; // 0xB0(0x8)
		UAIPatrolPathComponent End; // 0xB8(0x8)
		unsigned char UnknownData03_7[0x48]; // 0xC0(0x48) UNKNOWN PROPERTY
	};

}
