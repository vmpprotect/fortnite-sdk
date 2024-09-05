#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoControlUnitRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoControlUnitRuntime.JunoEvent_HUDControlUnitMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_HUDControlUnitMessage	
	{
	public:
		AJunoPhysicsToyActor ControlUnitActor; // 0x0(0x8)
	};


	// Struct JunoControlUnitRuntime.JunoControlUnitSessionData
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoControlUnitSessionData	
	{
	public:
		TWeakObjectPtr ControlUnitActor; // 0x0(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x8(0x28) UNKNOWN PROPERTY
	};

}
