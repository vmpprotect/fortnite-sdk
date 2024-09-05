#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SidecarSys
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SidecarSys.SidecarFileInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FSidecarFileInfo	
	{
	public:
		TMap<FString, FString> Meta; // 0x0(0x50)
		bool bIsCheckedOut; // 0x50(0x1)
		bool bOperationPending; // 0x51(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		FString CheckoutGuid; // 0x58(0x10)
	};

}
