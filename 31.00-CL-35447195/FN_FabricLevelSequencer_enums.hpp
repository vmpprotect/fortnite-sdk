#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricLevelSequencer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/FabricLevelSequencer.EFabricSongSyncTimingType
	enum EFabricSongSyncTimingType
	{
		EFabricSongSyncTimingType__Immediate = 0,
		EFabricSongSyncTimingType__NextBeat = 1,
		EFabricSongSyncTimingType__NextBar = 2,
	};


	// Enum /Script/FabricLevelSequencer.EFabricSongSyncPlaybackType
	enum EFabricSongSyncPlaybackType
	{
		EFabricSongSyncPlaybackType__ControlsTempo = 0,
		EFabricSongSyncPlaybackType__FromCurrentTime = 1,
		EFabricSongSyncPlaybackType__FromStart = 2,
	};


	// Enum /Script/FabricLevelSequencer.EFabricSongSyncClockState
	enum EFabricSongSyncClockState
	{
		EFabricSongSyncClockState__Playing = 0,
		EFabricSongSyncClockState__WillRestartInitiator = 1,
		EFabricSongSyncClockState__WillRestartFollower = 2,
	};

}
