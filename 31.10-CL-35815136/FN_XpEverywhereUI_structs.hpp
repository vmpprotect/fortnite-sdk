#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: XpEverywhereUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct XpEverywhereUI.XpEverywhereNotificationWidgetClass
	// Size: 0x20 (0x20 - 0x0)
	struct FXpEverywhereNotificationWidgetClass	
	{
	public:
		UClass* NotificationWidgetClass; // 0x0(0x8)
		int32_t InitialPoolSize; // 0x8(0x4)
		bool bCanIncreasePoolSizeAtRunTime; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TArray<UFortNotificationEntry*> WidgetPool; // 0x10(0x10)
	};

}
