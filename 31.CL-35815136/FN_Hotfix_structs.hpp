#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Hotfix
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Hotfix.UpdateContextDefinition
	// Size: 0x68 (0x68 - 0x0)
	struct FUpdateContextDefinition	
	{
	public:
		FString Name; // 0x0(0x10)
		bool bEnabled; // 0x10(0x1)
		bool bCheckAvailabilityOnly; // 0x11(0x1)
		bool bPatchCheckEnabled; // 0x12(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
		TSet<FString> AdditionalTags; // 0x18(0x50)
	};

}
