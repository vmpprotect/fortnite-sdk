#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaBasePlayer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EpicMediaBasePlayer.EpicMediaPriorityInfo
	// Size: 0x3 (0x3 - 0x0)
	struct FEpicMediaPriorityInfo	
	{
	public:
		bool bCanBeInterrupted; // 0x0(0x1)
		bool bCanInterruptOtherAndHold; // 0x1(0x1)
		EEpicMediaPriorityType Type; // 0x2(0x1)
	};


	// Struct EpicMediaBasePlayer.EpicMediaPriorityPendingInfo
	// Size: 0xB0 (0xB0 - 0x0)
	struct FEpicMediaPriorityPendingInfo	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		UMediaTexture* MediaTexture; // 0x10(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
		FMediaPlayerOptions MediaOptions; // 0x28(0x80)
		FEpicMediaPriorityInfo PriorityInfo; // 0xA8(0x3)
		unsigned char UnknownData02_7[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY
	};

}
