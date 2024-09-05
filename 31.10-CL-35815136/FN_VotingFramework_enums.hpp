#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VotingFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/VotingFramework.EVoteState
	enum EVoteState
	{
		EVoteState__None = 0,
		EVoteState__Setup = 1,
		EVoteState__Active = 2,
		EVoteState__Completed = 3,
	};


	// Enum /Script/VotingFramework.EVoteSessionState
	enum EVoteSessionState
	{
		EVoteSessionState__None = 0,
		EVoteSessionState__Setup = 1,
		EVoteSessionState__Voting = 2,
		EVoteSessionState__Complete = 3,
		EVoteSessionState__Shutdown = 4,
	};


	// Enum /Script/VotingFramework.EVoteSessionNetworkType
	enum EVoteSessionNetworkType
	{
		EVoteSessionNetworkType__NotDetermined = 0,
		EVoteSessionNetworkType__DedicatedServer = 1,
		EVoteSessionNetworkType__MeshNetwork = 2,
	};

}
