#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_CinematicSequence
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/CRD_CinematicSequence.ECinematicSequenceVisibility
	enum ECinematicSequenceVisibility
	{
		ECinematicSequenceVisibility__InstigatorOnly = 0,
		ECinematicSequenceVisibility__InstigatingTeam = 1,
		ECinematicSequenceVisibility__Everyone = 2,
	};


	// Enum /Script/CRD_CinematicSequence.ECinematicSequenceEnabledOnPhase
	enum ECinematicSequenceEnabledOnPhase
	{
		ECinematicSequenceEnabledOnPhase__Always = 0,
		ECinematicSequenceEnabledOnPhase__PreGameOnly = 1,
		ECinematicSequenceEnabledOnPhase__GameplayOnly = 2,
		ECinematicSequenceEnabledOnPhase__CreateOnly = 3,
	};

}
