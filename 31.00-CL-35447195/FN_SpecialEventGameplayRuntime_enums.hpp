#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpecialEventGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventTODMModifyType
	enum ESpecialEventTODMModifyType
	{
		ESpecialEventTODMModifyType__Keep = 0,
		ESpecialEventTODMModifyType__Hide = 1,
		ESpecialEventTODMModifyType__Show = 2,
		ESpecialEventTODMModifyType__Spawn = 3,
		ESpecialEventTODMModifyType__Persistent = 4,
		ESpecialEventTODMModifyType__Destroy = 5,
		ESpecialEventTODMModifyType__DestroyAll = 6,
		ESpecialEventTODMModifyType__DestroyAllButGameState = 7,
	};


	// Enum /Script/SpecialEventGameplayRuntime.EDestroyActorsAndComponentsMutator_ComponentNameComparisonType
	enum EDestroyActorsAndComponentsMutator_ComponentNameComparisonType
	{
		EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameEquals = 0,
		EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameStartsWith = 1,
		EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameContains = 2,
		EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameEquals = 3,
		EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameStartsWith = 4,
		EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameContains = 5,
	};


	// Enum /Script/SpecialEventGameplayRuntime.EFakeKillRelevancyPlayerKillStep
	enum EFakeKillRelevancyPlayerKillStep
	{
		EFakeKillRelevancyPlayerKillStep__Initiated = 0,
		EFakeKillRelevancyPlayerKillStep__BlueprintNotified = 1,
		EFakeKillRelevancyPlayerKillStep__VisualsPerformed = 2,
	};


	// Enum /Script/SpecialEventGameplayRuntime.EMutatorMovementMode
	enum EMutatorMovementMode
	{
		EMutatorMovementMode__None = 0,
		EMutatorMovementMode__BuffetBubbles = 19,
		EMutatorMovementMode__BuffetBubblesIntro = 1A,
		EMutatorMovementMode__BuffetFlying = 1B,
		EMutatorMovementMode__BuffetFlyingRicochet = 1C,
		EMutatorMovementMode__Rewind = 1D,
	};


	// Enum /Script/SpecialEventGameplayRuntime.EFortCustomTickComponentCondition
	enum EFortCustomTickComponentCondition
	{
		EFortCustomTickComponentCondition__WasRecentlyRendered = 0,
		EFortCustomTickComponentCondition__CameraDistance = 1,
		EFortCustomTickComponentCondition__LocalPlayerDistance = 2,
		EFortCustomTickComponentCondition__Count = 3,
	};


	// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventGameUserSettingsResult
	enum ESpecialEventGameUserSettingsResult
	{
		ESpecialEventGameUserSettingsResult__Success = 0,
		ESpecialEventGameUserSettingsResult__Failure = 1,
	};


	// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventPhaseState
	enum ESpecialEventPhaseState
	{
		ESpecialEventPhaseState__Unregistered = 0,
		ESpecialEventPhaseState__Inactive = 1,
		ESpecialEventPhaseState__Active = 2,
		ESpecialEventPhaseState__Deactivated = 3,
	};


	// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventPhaseComponentNetModeType
	enum ESpecialEventPhaseComponentNetModeType
	{
		ESpecialEventPhaseComponentNetModeType__ClientControlled = 0,
		ESpecialEventPhaseComponentNetModeType__Client = 1,
		ESpecialEventPhaseComponentNetModeType__DedicatedServer = 2,
	};


	// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventMannequinLoadoutType
	enum ESpecialEventMannequinLoadoutType
	{
		ESpecialEventMannequinLoadoutType__None = 0,
		ESpecialEventMannequinLoadoutType__Default = 1,
		ESpecialEventMannequinLoadoutType__Override = 2,
		ESpecialEventMannequinLoadoutType__Pawn = 3,
	};


	// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventRewindComponentState
	enum ESpecialEventRewindComponentState
	{
		ESpecialEventRewindComponentState__Stop = 0,
		ESpecialEventRewindComponentState__Record = 1,
		ESpecialEventRewindComponentState__Rewind = 2,
	};

}
