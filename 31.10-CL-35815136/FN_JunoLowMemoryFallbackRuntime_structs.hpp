#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoLowMemoryFallbackRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct JunoLowMemoryFallbackRuntime.JunoLowMemoryFallbackTriggeredStrategy
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoLowMemoryFallbackTriggeredStrategy	
	{
	public:
		UClass* StrategyClass; // 0x0(0x8)
		TArray<APlayerState*> TriggeringPlayers; // 0x8(0x10)
	};


	// Struct JunoLowMemoryFallbackRuntime.JunoLowMemoryMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoLowMemoryMessage	
	{
	public:
		EJunoLowMemoryState MemoryState; // 0x0(0x1)
	};

}
