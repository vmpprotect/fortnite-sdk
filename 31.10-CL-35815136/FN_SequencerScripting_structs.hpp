#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SequencerScripting
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SequencerScripting.SequencerScriptingRange
	// Size: 0x14 (0x14 - 0x0)
	struct FSequencerScriptingRange	
	{
	public:
		bool bHasStart : 1; // 0x0:0(0x1)
		bool bHasEnd : 1; // 0x0:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t InclusiveStart; // 0x4(0x4)
		int32_t ExclusiveEnd; // 0x8(0x4)
		FFrameRate InternalRate; // 0xC(0x8)
	};

}
