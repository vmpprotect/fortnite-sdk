#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MilkshakeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MilkshakeRuntime.MilkshakeEarthquakePhysicsActorInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FMilkshakeEarthquakePhysicsActorInfo	
	{
	public:
		TWeakObjectPtr PhysicsActor; // 0x0(0x8)
		float ForceDirectionUpdateGameTime; // 0x8(0x4)
		bool bIsForceForward; // 0xC(0x1)
		EFortPhysicsSimSize PhysicsSimSize; // 0xD(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};

}
