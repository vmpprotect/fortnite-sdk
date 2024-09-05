#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EncountersRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/EncountersRuntime.EEncounterMobSpawnType
	enum EEncounterMobSpawnType
	{
		EEncounterMobSpawnType__VolumeBased = 0,
		EEncounterMobSpawnType__StaticPointBased = 1,
	};


	// Enum /Script/EncountersRuntime.EAlertLevelComparisonOperator
	enum EAlertLevelComparisonOperator
	{
		EAlertLevelComparisonOperator__GreaterThan = 0,
		EAlertLevelComparisonOperator__LessThan = 1,
		EAlertLevelComparisonOperator__EqualTo = 2,
		EAlertLevelComparisonOperator__NotEqualTo = 3,
		EAlertLevelComparisonOperator__GreaterThanOrEqualTo = 4,
		EAlertLevelComparisonOperator__LessThanOrEqualTo = 5,
	};


	// Enum /Script/EncountersRuntime.EPersistentValueScope
	enum EPersistentValueScope
	{
		EPersistentValueScope__Encounter = 0,
		EPersistentValueScope__Sequence = 1,
		EPersistentValueScope__Always = 2,
	};


	// Enum /Script/EncountersRuntime.ESpawnActorPersistenceBehavior
	enum ESpawnActorPersistenceBehavior
	{
		ESpawnActorPersistenceBehavior__Destroy = 0,
		ESpawnActorPersistenceBehavior__Transient = 1,
		ESpawnActorPersistenceBehavior__Persistent = 2,
	};


	// Enum /Script/EncountersRuntime.EEncounterSuccessState
	enum EEncounterSuccessState
	{
		EEncounterSuccessState__Passed = 0,
		EEncounterSuccessState__Failed = 1,
		EEncounterSuccessState__Any = 2,
	};

}
