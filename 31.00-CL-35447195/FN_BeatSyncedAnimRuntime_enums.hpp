#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BeatSyncedAnimRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/BeatSyncedAnimRuntime.ESyncAnimBeatTo
	enum ESyncAnimBeatTo
	{
		ESyncAnimBeatTo__None = 0,
		ESyncAnimBeatTo__Now = 1,
		ESyncAnimBeatTo__PrevBeat = 2,
		ESyncAnimBeatTo__Num = 3,
	};


	// Enum /Script/BeatSyncedAnimRuntime.EBeatSyncAnimNodeLogging
	enum EBeatSyncAnimNodeLogging
	{
		EBeatSyncAnimNodeLogging__Enabled = 0,
		EBeatSyncAnimNodeLogging__Disabled = 1,
		EBeatSyncAnimNodeLogging__Default = 2,
	};


	// Enum /Script/BeatSyncedAnimRuntime.EGotBeatAndTimeFrom
	enum EGotBeatAndTimeFrom
	{
		EGotBeatAndTimeFrom__Invalid = 0,
		EGotBeatAndTimeFrom__None = 1,
		EGotBeatAndTimeFrom__PreviewBPM = 2,
		EGotBeatAndTimeFrom__MusicClock = 3,
	};


	// Enum /Script/BeatSyncedAnimRuntime.EUserEmoteBeatSyncingPermission
	enum EUserEmoteBeatSyncingPermission
	{
		EUserEmoteBeatSyncingPermission__Invalid = 0,
		EUserEmoteBeatSyncingPermission__Allowed = 1,
		EUserEmoteBeatSyncingPermission__Blocked = 2,
	};

}
