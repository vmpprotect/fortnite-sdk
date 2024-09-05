#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MoonFlaxWarBusRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MoonFlaxWarBusRuntime.MoonFlaxWarBusTurretState
	// Size: 0x40 (0x40 - 0x0)
	struct FMoonFlaxWarBusTurretState	
	{
	public:
		FName TurretSocketName; // 0x0(0x4)
		int32_t TurretSeatIndex; // 0x4(0x4)
		TWeakObjectPtr TurretAudioComponent; // 0x8(0x8)
		FTimerHandle TurretUpdateTimerHandle; // 0x10(0x8)
		FRotator LastTurretRotation; // 0x18(0x18)
		FVector2D LastTurretDeltaRotation; // 0x30(0x10)
	};

}
