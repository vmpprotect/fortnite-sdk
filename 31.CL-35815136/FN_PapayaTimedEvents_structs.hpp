#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PapayaTimedEvents
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PapayaTimedEvents.MediaTimeEventItem
	// Inherited from FFastArraySerializerItem
	// Size: 0x2C (0x38 - 0xC)
	struct FMediaTimeEventItem : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
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
		TArray<FMediaTimeEventItem> Items; // 0x108(0x10)
	};

}
