#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaBasePlayer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/EpicMediaBasePlayer.EBaseMediaTerminalErrorReason
	enum EBaseMediaTerminalErrorReason
	{
		EBaseMediaTerminalErrorReason__Unknown = 0,
		EBaseMediaTerminalErrorReason__None = 1,
		EBaseMediaTerminalErrorReason__ClosedError = 2,
		EBaseMediaTerminalErrorReason__OpenTimeout = 3,
		EBaseMediaTerminalErrorReason__OpenFailed = 4,
		EBaseMediaTerminalErrorReason__Source = 5,
		EBaseMediaTerminalErrorReason__UCP = 6,
	};


	// Enum /Script/EpicMediaBasePlayer.EEpicMediaPriorityType
	enum EEpicMediaPriorityType
	{
		EEpicMediaPriorityType__Primary = 0,
		EEpicMediaPriorityType__Secondary = 1,
		EEpicMediaPriorityType__Music = 2,
	};


	// Enum /Script/EpicMediaBasePlayer.EBaseMediaDelayAction
	enum EBaseMediaDelayAction
	{
		EBaseMediaDelayAction__Open = 0,
		EBaseMediaDelayAction__Stop = 1,
		EBaseMediaDelayAction__Start = 2,
	};


	// Enum /Script/EpicMediaBasePlayer.EBaseMediaPlayerState
	enum EBaseMediaPlayerState
	{
		EBaseMediaPlayerState__None = 0,
		EBaseMediaPlayerState__Released = 1,
		EBaseMediaPlayerState__Stopped = 2,
		EBaseMediaPlayerState__Started = 3,
		EBaseMediaPlayerState__Opened = 4,
		EBaseMediaPlayerState__Playing = 5,
		EBaseMediaPlayerState__Ended = 6,
		EBaseMediaPlayerState__Error = 7,
	};

}
