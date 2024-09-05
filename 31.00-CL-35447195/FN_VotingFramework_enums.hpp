#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VotingFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
