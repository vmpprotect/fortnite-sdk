#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DeployableTurretGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/DeployableTurretGameplayRuntime.EDeployableTurretState
	enum EDeployableTurretState
	{
		EDeployableTurretState__Collapsed = 0,
		EDeployableTurretState__Transforming = 1,
		EDeployableTurretState__Scanning = 2,
		EDeployableTurretState__Tracking = 3,
		EDeployableTurretState__Attacking = 4,
		EDeployableTurretState__Deactivated = 5,
		EDeployableTurretState__WindUp = 6,
		EDeployableTurretState__WindDown = 7,
	};

}
