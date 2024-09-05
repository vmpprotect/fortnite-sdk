#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DryBoxRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/DryBoxRuntime.ENyxGlassState
	enum ENyxGlassState
	{
		ENyxGlassState__Off = 0,
		ENyxGlassState__Swinging = 1,
		ENyxGlassState__AimingFromGround = 2,
		ENyxGlassState__Hovering = 3,
		ENyxGlassState__Attacking = 4,
		ENyxGlassState__Slashing = 5,
	};


	// Enum /Script/DryBoxRuntime.ENyxGlassSlashSubstate
	enum ENyxGlassSlashSubstate
	{
		ENyxGlassSlashSubstate__MovingToTarget = 0,
		ENyxGlassSlashSubstate__StoppedAtTarget = 1,
		ENyxGlassSlashSubstate__LeapingBack = 2,
	};

}
