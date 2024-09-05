#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MilkshakeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MilkshakeRuntime.MilkshakeEarthquakePhysicsActorInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FMilkshakeEarthquakePhysicsActorInfo	
	{
	public:
		TWeakObjectPtr<AActor*> PhysicsActor; // 0x0(0x8)
		float ForceDirectionUpdateGameTime; // 0x8(0x4)
		bool bIsForceForward; // 0xC(0x1)
		EFortPhysicsSimSize PhysicsSimSize; // 0xD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};

}
