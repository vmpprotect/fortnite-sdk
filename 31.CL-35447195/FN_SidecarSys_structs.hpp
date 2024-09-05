#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SidecarSys
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SidecarSys.SidecarFileInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FSidecarFileInfo	
	{
	public:
		TMap Meta; // 0x0(0x50)
		bool bIsCheckedOut; // 0x50(0x1)
		bool bOperationPending; // 0x51(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		FString CheckoutGuid; // 0x58(0x10)
	};

}
