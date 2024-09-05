#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DryBoxRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
