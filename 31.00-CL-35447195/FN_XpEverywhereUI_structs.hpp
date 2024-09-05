#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: XpEverywhereUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct XpEverywhereUI.XpEverywhereNotificationWidgetClass
	// Size: 0x20 (0x20 - 0x0)
	struct FXpEverywhereNotificationWidgetClass	
	{
	public:
		UClass NotificationWidgetClass; // 0x0(0x8)
		int32_t InitialPoolSize; // 0x8(0x4)
		bool bCanIncreasePoolSizeAtRunTime; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TArray WidgetPool; // 0x10(0x10)
	};

}
