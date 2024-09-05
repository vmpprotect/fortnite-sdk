#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Entity
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Entity.EEntityNotificationState
	enum EEntityNotificationState
	{
		EEntityNotificationState__Created = 0,
		EEntityNotificationState__Initializing = 1,
		EEntityNotificationState__Initialized = 2,
		EEntityNotificationState__AddingToScene = 3,
		EEntityNotificationState__AddedToScene = 4,
		EEntityNotificationState__BeginningSimulation = 5,
		EEntityNotificationState__BeganSimulation = 6,
		EEntityNotificationState__EndingSimulation = 7,
		EEntityNotificationState__EndedSimulation = 8,
		EEntityNotificationState__RemovingFromScene = 9,
		EEntityNotificationState__RemovedFromScene = A,
		EEntityNotificationState__Uninitializing = B,
		EEntityNotificationState__Uninitialized = C,
		EEntityNotificationState__TearingDown = D,
		EEntityNotificationState__TearedDown = E,
		EEntityNotificationState__ClientDenied = F,
		EEntityNotificationState__Disposing = 10,
		EEntityNotificationState__Disposed = 11,
		EEntityNotificationState__ReInstantiated = 12,
		EEntityNotificationState__RemovingChild = 13,
	};


	// Enum /Script/Entity.EEntityEndPlayReason
	enum EEntityEndPlayReason
	{
		EEntityEndPlayReason__RemoveFromWorld = 0,
		EEntityEndPlayReason__RemoveFromEntity = 1,
		EEntityEndPlayReason__Destroy = 2,
	};

}
