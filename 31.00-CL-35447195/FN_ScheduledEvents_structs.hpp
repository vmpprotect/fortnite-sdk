#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ScheduledEvents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ScheduledEvents.EventRecord
	// Size: 0x20 (0x20 - 0x0)
	struct FEventRecord	
	{
	public:
		FString EventType; // 0x0(0x10)
		FDateTime ActiveUntil; // 0x10(0x8)
		FDateTime ActiveSince; // 0x18(0x8)
	};


	// Struct ScheduledEvents.EventChannelState
	// Size: 0x38 (0x38 - 0x0)
	struct FEventChannelState	
	{
	public:
		FDateTime ValidFrom; // 0x0(0x8)
		TArray ActiveEvents; // 0x8(0x10)
		FJsonObjectWrapper State; // 0x18(0x20)
	};


	// Struct ScheduledEvents.EventsTimeline
	// Size: 0x18 (0x18 - 0x0)
	struct FEventsTimeline	
	{
	public:
		FDateTime CacheExpire; // 0x0(0x8)
		TArray States; // 0x8(0x10)
	};


	// Struct ScheduledEvents.CalendarDownload
	// Size: 0x60 (0x60 - 0x0)
	struct FCalendarDownload	
	{
	public:
		FDateTime CurrentTime; // 0x0(0x8)
		double CacheIntervalMins; // 0x8(0x8)
		TMap Channels; // 0x10(0x50)
	};

}
