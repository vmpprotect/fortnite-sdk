#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SlidingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
