#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TowHookWeaponRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/TowHookWeaponRuntime.ETetherState
	enum ETetherState
	{
		ETetherState__None = 0,
		ETetherState__Created = 1,
		ETetherState__Active = 2,
		ETetherState__Dormant = 3,
		ETetherState__RequestToEnd = 4,
	};


	// Enum /Script/TowHookWeaponRuntime.ETetherEndReason
	enum ETetherEndReason
	{
		ETetherEndReason__None = 0,
		ETetherEndReason__PawnStuck = 1,
		ETetherEndReason__Cancelled = 2,
		ETetherEndReason__ReachedReelInTarget = 3,
	};

}
