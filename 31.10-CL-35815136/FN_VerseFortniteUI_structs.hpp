#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseFortniteUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VerseFortniteUI.VerseFortniteUIPresenterElement
	// Size: 0x20 (0x20 - 0x0)
	struct FVerseFortniteUIPresenterElement	
	{
	public:
		UVerseFortniteUINamedSlot* SlotWidget; // 0x0(0x8)
		UWidget* UMGWidget; // 0x8(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct VerseFortniteUI.VerseFortniteUIFrameworkSliderValue
	// Size: 0xC (0xC - 0x0)
	struct FVerseFortniteUIFrameworkSliderValue	
	{
	public:
		float Value; // 0x0(0x4)
		int32_t ClientId; // 0x4(0x4)
		int32_t ServerId; // 0x8(0x4)
	};

}
