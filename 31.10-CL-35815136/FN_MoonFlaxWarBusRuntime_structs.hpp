#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MoonFlaxWarBusRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MoonFlaxWarBusRuntime.MoonFlaxWarBusTurretState
	// Size: 0x40 (0x40 - 0x0)
	struct FMoonFlaxWarBusTurretState	
	{
	public:
		FName TurretSocketName; // 0x0(0x4)
		int32_t TurretSeatIndex; // 0x4(0x4)
		TWeakObjectPtr<UAudioComponent*> TurretAudioComponent; // 0x8(0x8)
		FTimerHandle TurretUpdateTimerHandle; // 0x10(0x8)
		FRotator LastTurretRotation; // 0x18(0x18)
		FVector2D LastTurretDeltaRotation; // 0x30(0x10)
	};

}
