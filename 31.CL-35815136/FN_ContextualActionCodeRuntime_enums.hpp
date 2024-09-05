#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ContextualActionCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/ContextualActionCodeRuntime.EHijackingStatus
	enum EHijackingStatus
	{
		EHijackingStatus__WaitingForTarget = 0,
		EHijackingStatus__AttachedToVehicle = 1,
	};


	// Enum /Script/ContextualActionCodeRuntime.ERappellingState
	enum ERappellingState
	{
		ERappellingState__Targeting = 0,
		ERappellingState__ConnectedAndWaiting = 1,
		ERappellingState__Rappelling = 2,
		ERappellingState__RappellingSwing = 3,
	};


	// Enum /Script/ContextualActionCodeRuntime.ESwingingState
	enum ESwingingState
	{
		ESwingingState__Unattached = 0,
		ESwingingState__Attached = 1,
	};

}
