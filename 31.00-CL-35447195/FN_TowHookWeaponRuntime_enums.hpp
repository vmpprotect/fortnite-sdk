#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TowHookWeaponRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
