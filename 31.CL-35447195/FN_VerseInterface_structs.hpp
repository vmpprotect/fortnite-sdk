#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseInterface
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VerseInterface.SolarisDebugMessage
	// Size: 0x18 (0x18 - 0x0)
	struct FSolarisDebugMessage	
	{
	public:
		ESolarisDebugMessageClientId ClientId; // 0x0(0x4)
		ESolarisDebugMessageCommand Command; // 0x4(0x4)
		TArray MessageBodyUTF8; // 0x8(0x10)
	};

}
