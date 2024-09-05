#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PapayaTimedEvents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct PapayaTimedEvents.MediaTimeEventItem
	// Inherited from FFastArraySerializerItem
	// Size: 0x2C (0x38 - 0xC)
	struct FMediaTimeEventItem : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString EventName; // 0x10(0x10)
		int64_t Time; // 0x20(0x8)
		FString Parameter; // 0x28(0x10)
	};


	// Struct PapayaTimedEvents.MediaTimeEventArray
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FMediaTimeEventArray : public FFastArraySerializer	
	{
	public:
		TArray Items; // 0x108(0x10)
	};

}
