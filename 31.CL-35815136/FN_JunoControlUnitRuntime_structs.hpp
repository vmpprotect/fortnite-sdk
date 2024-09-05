#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoControlUnitRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct JunoControlUnitRuntime.JunoEvent_HUDControlUnitMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoEvent_HUDControlUnitMessage	
	{
	public:
		AJunoPhysicsToyActor* ControlUnitActor; // 0x0(0x8)
	};


	// Struct JunoControlUnitRuntime.JunoControlUnitSessionData
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoControlUnitSessionData	
	{
	public:
		TWeakObjectPtr<AActor*> ControlUnitActor; // 0x0(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x8(0x28) UNKNOWN PROPERTY
	};

}
