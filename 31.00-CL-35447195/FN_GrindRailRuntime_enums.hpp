#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GrindRailRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/GrindRailRuntime.EGrindRailBoosterMode
	enum EGrindRailBoosterMode
	{
		EGrindRailBoosterMode__SpeedUp = 0,
		EGrindRailBoosterMode__SlowDown = 1,
		EGrindRailBoosterMode__NoEffect = 2,
	};


	// Enum /Script/GrindRailRuntime.EFortMovementMode_GrindingState
	enum EFortMovementMode_GrindingState
	{
		Created = 0,
		Active = 1,
		AnchorJump = 2,
		RequestToEnd = 3,
	};

}
