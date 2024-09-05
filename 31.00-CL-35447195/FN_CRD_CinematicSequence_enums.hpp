#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_CinematicSequence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
