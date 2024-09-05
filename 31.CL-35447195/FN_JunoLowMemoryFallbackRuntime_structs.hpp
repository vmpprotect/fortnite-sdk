#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoLowMemoryFallbackRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackTriggeredStrategy
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoLowMemoryFallbackTriggeredStrategy	
	{
	public:
		UClass StrategyClass; // 0x0(0x8)
		TArray TriggeringPlayers; // 0x8(0x10)
	};


	// Struct JunoLowMemoryFallbackRuntime.JunoLowMemoryMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoLowMemoryMessage	
	{
	public:
		EJunoLowMemoryState MemoryState; // 0x0(0x1)
	};

}
