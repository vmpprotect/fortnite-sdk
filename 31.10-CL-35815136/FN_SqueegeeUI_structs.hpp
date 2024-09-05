#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SqueegeeUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SqueegeeUI.SqueegeeInjectionData
	// Size: 0x28 (0x28 - 0x0)
	struct FSqueegeeInjectionData	
	{
	public:
		ESqueegeeWidgetInjection WidgetType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> WidgetClass; // 0x8(0x20)
	};


	// Struct SqueegeeUI.SqueegeeTextData
	// Size: 0x18 (0x18 - 0x0)
	struct FSqueegeeTextData	
	{
	public:
		ESqueegeeText TextType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText DesiredText; // 0x8(0x10)
	};

}
