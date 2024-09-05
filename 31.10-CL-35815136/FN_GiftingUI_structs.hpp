#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GiftingUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GiftingUI.FortGiftingRecipientState
	// Size: 0x80 (0x80 - 0x0)
	struct FFortGiftingRecipientState	
	{
	public:
		FCatalogItemPrice Price; // 0x0(0x48)
		TArray<FItemQuantity> Items; // 0x48(0x10)
		unsigned char UnknownData00_7[0x28]; // 0x58(0x28) UNKNOWN PROPERTY
	};

}
