#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SlidingRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/SlidingRuntime.EFortMovementMode_SlidingState
	enum EFortMovementMode_SlidingState
	{
		Created = 0,
		AwaitsActivationOnLanding = 1,
		LandedProceedToActivation = 2,
		LandedFailedAbort = 3,
		ActiveStartBoost = 4,
		ActiveNoBoost = 5,
		ActiveSlideFalling = 6,
		FallingPostPendingLaunch = 7,
		RequestToEnd = 8,
	};

}
