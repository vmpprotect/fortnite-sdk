#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CompeteUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/CompeteUI.EFortCompeteDateTimeStyle
	enum EFortCompeteDateTimeStyle
	{
		EFortCompeteDateTimeStyle__Default = 0,
		EFortCompeteDateTimeStyle__Short = 1,
		EFortCompeteDateTimeStyle__Medium = 2,
		EFortCompeteDateTimeStyle__Long = 3,
		EFortCompeteDateTimeStyle__Full = 4,
	};


	// Enum /Script/CompeteUI.EFortCompeteExperienceType
	enum EFortCompeteExperienceType
	{
		EFortCompeteExperienceType__Unknown = 0,
		EFortCompeteExperienceType__BattleRoyale = 1,
		EFortCompeteExperienceType__ZeroBuild = 2,
		EFortCompeteExperienceType__RocketRacing = 3,
		EFortCompeteExperienceType__Festival = 4,
	};


	// Enum /Script/CompeteUI.EFortCompeteMatchType
	enum EFortCompeteMatchType
	{
		EFortCompeteMatchType__Unknown = 0,
		EFortCompeteMatchType__Solo = 1,
		EFortCompeteMatchType__Duos = 2,
		EFortCompeteMatchType__Squads = 3,
	};


	// Enum /Script/CompeteUI.EFortCompeteTournamentWindowState
	enum EFortCompeteTournamentWindowState
	{
		EFortCompeteTournamentWindowState__Unknown = 0,
		EFortCompeteTournamentWindowState__FutureTBD = 1,
		EFortCompeteTournamentWindowState__FutureScheduled = 2,
		EFortCompeteTournamentWindowState__FutureNext = 3,
		EFortCompeteTournamentWindowState__Live = 4,
		EFortCompeteTournamentWindowState__LiveParticipating = 5,
		EFortCompeteTournamentWindowState__LiveNotParticipating = 6,
		EFortCompeteTournamentWindowState__Completed = 7,
		EFortCompeteTournamentWindowState__CompletedParticipated = 8,
		EFortCompeteTournamentWindowState__CompletedNotPartipated = 9,
		EFortCompeteTournamentWindowState__Cancelled = A,
	};


	// Enum /Script/CompeteUI.EFortCompeteTournamentWindowEligibility
	enum EFortCompeteTournamentWindowEligibility
	{
		EFortCompeteTournamentWindowEligibility__Unknown = 0,
		EFortCompeteTournamentWindowEligibility__Public = 1,
		EFortCompeteTournamentWindowEligibility__Private = 2,
		EFortCompeteTournamentWindowEligibility__Locked = 3,
	};


	// Enum /Script/CompeteUI.EFortCompetePinState
	enum EFortCompetePinState
	{
		EFortCompetePinState__None = 0,
		EFortCompetePinState__Locked = 1,
		EFortCompetePinState__Unlocked = 2,
	};

}
