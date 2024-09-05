#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseInterface
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VerseInterface.SolarisDebugMessage
	// Size: 0x18 (0x18 - 0x0)
	struct FSolarisDebugMessage	
	{
	public:
		ESolarisDebugMessageClientId ClientId; // 0x0(0x4)
		ESolarisDebugMessageCommand Command; // 0x4(0x4)
		TArray<char> MessageBodyUTF8; // 0x8(0x10)
	};

}
