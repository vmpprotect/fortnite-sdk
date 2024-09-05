#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EventModeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EventModeRuntime.EventModeFocusActor
	// Size: 0x48 (0x48 - 0x0)
	struct FEventModeFocusActor	
	{
	public:
		TWeakObjectPtr<AActor*> Target; // 0x0(0x20)
		float Distance; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector Offset; // 0x28(0x18)
		float FOV; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct EventModeRuntime.EventModeWidgetCachedData
	// Size: 0xC (0xC - 0x0)
	struct FEventModeWidgetCachedData	
	{
	public:
		EUIExtensionSlot Slot; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UUserWidget*> Widget; // 0x4(0x8)
	};

}
