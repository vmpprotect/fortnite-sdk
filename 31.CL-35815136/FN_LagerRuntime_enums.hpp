#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LagerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/LagerRuntime.ELivingWorldPointProviderSpawnLimiterBehavior
	enum ELivingWorldPointProviderSpawnLimiterBehavior
	{
		ELivingWorldPointProviderSpawnLimiterBehavior__Lifetime = 0,
		ELivingWorldPointProviderSpawnLimiterBehavior__Concurrent = 1,
	};


	// Enum /Script/LagerRuntime.EFortAthenaLivingWorldEventToDebugStopBehavior
	enum EFortAthenaLivingWorldEventToDebugStopBehavior
	{
		EFortAthenaLivingWorldEventToDebugStopBehavior__Once = 0,
		EFortAthenaLivingWorldEventToDebugStopBehavior__UntilEventSuccess = 1,
	};


	// Enum /Script/LagerRuntime.EFortAthenaLivingWorldEventRuntimeDeactivationReason
	enum EFortAthenaLivingWorldEventRuntimeDeactivationReason
	{
		EFortAthenaLivingWorldEventRuntimeDeactivationReason__None = 0,
		EFortAthenaLivingWorldEventRuntimeDeactivationReason__NoValidEventData = 1,
		EFortAthenaLivingWorldEventRuntimeDeactivationReason__RandomDeactivation = 2,
		EFortAthenaLivingWorldEventRuntimeDeactivationReason__CalendarEvent = 3,
		EFortAthenaLivingWorldEventRuntimeDeactivationReason__MatchedPrefabAndNormalActor = 4,
		EFortAthenaLivingWorldEventRuntimeDeactivationReason__ActorDescDoesntMatchAnySpawnerData = 5,
	};


	// Enum /Script/LagerRuntime.EAIRuntimePatrolPathPointProviderAttributeSource
	enum EAIRuntimePatrolPathPointProviderAttributeSource
	{
		EAIRuntimePatrolPathPointProviderAttributeSource__RuntimeComponent = 0,
		EAIRuntimePatrolPathPointProviderAttributeSource__PatrolPath = 1,
		EAIRuntimePatrolPathPointProviderAttributeSource__SourceClass = 2,
	};


	// Enum /Script/LagerRuntime.ELivingWorldCalendarEventConditionBehavior
	enum ELivingWorldCalendarEventConditionBehavior
	{
		ELivingWorldCalendarEventConditionBehavior__IsActive = 0,
		ELivingWorldCalendarEventConditionBehavior__Ratio = 1,
	};


	// Enum /Script/LagerRuntime.ELivingWorldCalendarEventConditionRatioBehavior
	enum ELivingWorldCalendarEventConditionRatioBehavior
	{
		ELivingWorldCalendarEventConditionRatioBehavior__Less = 0,
		ELivingWorldCalendarEventConditionRatioBehavior__LessOrEqual = 1,
		ELivingWorldCalendarEventConditionRatioBehavior__Greater = 2,
		ELivingWorldCalendarEventConditionRatioBehavior__GreaterOrEqual = 3,
		ELivingWorldCalendarEventConditionRatioBehavior__InBetween = 4,
	};

}
