#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassActors
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MassActors.ESpawnRequestStatus
	enum ESpawnRequestStatus
	{
		ESpawnRequestStatus__None = 0,
		ESpawnRequestStatus__Pending = 1,
		ESpawnRequestStatus__Processing = 2,
		ESpawnRequestStatus__Succeeded = 3,
		ESpawnRequestStatus__Failed = 4,
		ESpawnRequestStatus__RetryPending = 5,
	};


	// Enum /Script/MassActors.EAgentComponentState
	enum EAgentComponentState
	{
		EAgentComponentState__None = 0,
		EAgentComponentState__EntityPendingCreation = 1,
		EAgentComponentState__EntityCreated = 2,
		EAgentComponentState__PuppetPendingInitialization = 3,
		EAgentComponentState__PuppetInitialized = 4,
		EAgentComponentState__PuppetPaused = 5,
		EAgentComponentState__PuppetPendingReplication = 6,
		EAgentComponentState__PuppetReplicatedOrphan = 7,
	};

}
