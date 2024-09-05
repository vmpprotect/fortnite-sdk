#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoMusicRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/JunoMusicRuntime.EJunoActiveMusicElementState
	enum EJunoActiveMusicElementState
	{
		Inactive = 0,
		Scheduled = 1,
		Active = 2,
		CoolingDown = 3,
	};


	// Enum /Script/JunoMusicRuntime.EJunoMusicCueSelectionBehavior
	enum EJunoMusicCueSelectionBehavior
	{
		EJunoMusicCueSelectionBehavior__Sequential = 0,
		EJunoMusicCueSelectionBehavior__Shuffle = 1,
		EJunoMusicCueSelectionBehavior__Random = 2,
		EJunoMusicCueSelectionBehavior__Count = 3,
	};


	// Enum /Script/JunoMusicRuntime.EMusicScheduleMode
	enum EMusicScheduleMode
	{
		RelativeToDayPhaseChange = 0,
		RandomTimeDuringDayPhase = 1,
		PlayAtSpecificTimesOfDay = 2,
		OnlyBlueprintPlaybackConditions = 3,
		Count = 4,
	};

}
