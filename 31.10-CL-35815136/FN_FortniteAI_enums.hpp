#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteAI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/FortniteAI.EAlertLevel
	enum EAlertLevel
	{
		EAlertLevel__Unaware = 0,
		EAlertLevel__Suspicious = 1,
		EAlertLevel__LostTarget = 2,
		EAlertLevel__Threatened = 3,
		EAlertLevel__Count = 4,
	};


	// Enum /Script/FortniteAI.EConvertedType
	enum EConvertedType
	{
		EConvertedType__NPC = 0,
		EConvertedType__Creature = 1,
		EConvertedType__All = 2,
		EConvertedType__Unknown = 3,
	};


	// Enum /Script/FortniteAI.PingCommandType
	enum PingCommandType
	{
		PingCommandType__GoTo = 0,
		PingCommandType__BackToMe = 1,
		PingCommandType__BackToDefault = 2,
		PingCommandType__HoldPosition = 3,
		PingCommandType__Revive = 4,
		PingCommandType__Dismiss = 5,
		PingCommandType__Item = 6,
		PingCommandType__Attack = 7,
		PingCommandType__Invalid = 8,
	};


	// Enum /Script/FortniteAI.ENavigationObstacleOverride
	enum ENavigationObstacleOverride
	{
		ENavigationObstacleOverride__UseMeshSettings = 0,
		ENavigationObstacleOverride__ForceEnabled = 1,
		ENavigationObstacleOverride__ForceDisabled = 2,
		ENavigationObstacleOverride__ExportAsPrimitive = 3,
	};


	// Enum /Script/FortniteAI.EUnconvertReason
	enum EUnconvertReason
	{
		EUnconvertReason__StealByOtherPlayer = 0,
		EUnconvertReason__ConverterDeath = 1,
		EUnconvertReason__ConvertedDeath = 2,
		EUnconvertReason__TooManyConverted = 3,
		EUnconvertReason__TooFarFromConverter = 4,
		EUnconvertReason__GameplayTagBlockConvert = 5,
		EUnconvertReason__EndPlay = 6,
		EUnconvertReason__Dismiss = 7,
		EUnconvertReason__Unknown = 8,
	};


	// Enum /Script/FortniteAI.EFortAILODLevel
	enum EFortAILODLevel
	{
		EFortAILODLevel__Invalid = 0,
		EFortAILODLevel__MIN = 0,
		EFortAILODLevel__Dormant = 1,
		EFortAILODLevel__BelowLower = 2,
		EFortAILODLevel__Lower = 3,
		EFortAILODLevel__AboveLower = 4,
		EFortAILODLevel__BelowNormal = 5,
		EFortAILODLevel__Normal = 6,
		EFortAILODLevel__AboveNormal = 7,
	};


	// Enum /Script/FortniteAI.EAIVisibilityOptions
	enum EAIVisibilityOptions
	{
		EAIVisibilityOptions__None = 0,
		EAIVisibilityOptions__AlwaysHidden = 1,
		EAIVisibilityOptions__AlwaysVisible = 2,
		EAIVisibilityOptions__HiddenWhenIdle = 4,
		EAIVisibilityOptions__HiddenWhenCrouched = 8,
		EAIVisibilityOptions__HiddenWhenIdleAndCrouched = C,
		EAIVisibilityOptions__VisibleWhenOverlappingPerceivedActor = 10,
		EAIVisibilityOptions__CheckPriorVisibility = 20,
	};


	// Enum /Script/FortniteAI.ELootElementType
	enum ELootElementType
	{
		ELootElementType__Pickup = 0,
		ELootElementType__Chest = 1,
		ELootElementType__SupplyDrop = 2,
		ELootElementType__Invalid = FF,
	};


	// Enum /Script/FortniteAI.EBotNamingMode
	enum EBotNamingMode
	{
		EBotNamingMode__RealName = 0,
		EBotNamingMode__SkinName = 1,
		EBotNamingMode__Anonymous = 2,
		EBotNamingMode__Custom = 3,
		EBotNamingMode__CharacterDataDisplayName = 4,
		EBotNamingMode__CustomIncremental = 5,
	};


	// Enum /Script/FortniteAI.ECustomNavLinkProcessorResult
	enum ECustomNavLinkProcessorResult
	{
		ECustomNavLinkProcessorResult__Unhandled = 0,
		ECustomNavLinkProcessorResult__Success = 1,
		ECustomNavLinkProcessorResult__Failure = 2,
	};


	// Enum /Script/FortniteAI.EFortEncounterUtilityDesire
	enum EFortEncounterUtilityDesire
	{
		EFortEncounterUtilityDesire__Low = 0,
		EFortEncounterUtilityDesire__Medium = 1,
		EFortEncounterUtilityDesire__High = 2,
		EFortEncounterUtilityDesire__VeryHigh = 3,
		EFortEncounterUtilityDesire__Max_None = 4,
	};


	// Enum /Script/FortniteAI.EAIHotSpotSlotFilter
	enum EAIHotSpotSlotFilter
	{
		EAIHotSpotSlotFilter__All = 0,
		EAIHotSpotSlotFilter__AvailableOnly = 1,
		EAIHotSpotSlotFilter__UnavailableOnly = 2,
	};


	// Enum /Script/FortniteAI.EAIHotSpotAssignmentFilter
	enum EAIHotSpotAssignmentFilter
	{
		EAIHotSpotAssignmentFilter__All = 0,
		EAIHotSpotAssignmentFilter__WithSlots = 1,
		EAIHotSpotAssignmentFilter__WaitingList = 2,
	};


	// Enum /Script/FortniteAI.EAIHotSpotSlot
	enum EAIHotSpotSlot
	{
		EAIHotSpotSlot__Free = 0,
		EAIHotSpotSlot__Claimed = 1,
		EAIHotSpotSlot__Occupied = 2,
		EAIHotSpotSlot__Blocked = 3,
		EAIHotSpotSlot__Disabled = 4,
	};


	// Enum /Script/FortniteAI.EAthenaPathFollowingFocus
	enum EAthenaPathFollowingFocus
	{
		EAthenaPathFollowingFocus__TowardsNextPathPoint = 0,
		EAthenaPathFollowingFocus__AlignWithSmoothedVelocity = 1,
	};


	// Enum /Script/FortniteAI.EAthenaAITelemetryEventType
	enum EAthenaAITelemetryEventType
	{
		EAthenaAITelemetryEventType__Spawn = 0,
		EAthenaAITelemetryEventType__Despawn = 1,
	};


	// Enum /Script/FortniteAI.EAICustomTargetRequestType
	enum EAICustomTargetRequestType
	{
		EAICustomTargetRequestType__Movement = 1,
		EAICustomTargetRequestType__MeleeAttack = 2,
		EAICustomTargetRequestType__RangedAttack = 4,
	};


	// Enum /Script/FortniteAI.EDespawnAIType
	enum EDespawnAIType
	{
		EDespawnAIType__Relevancy = 0,
		EDespawnAIType__Distance = 1,
	};


	// Enum /Script/FortniteAI.EFortAIDirectorEventContribution
	enum EFortAIDirectorEventContribution
	{
		EFortAIDirectorEventContribution__Increment = 0,
		EFortAIDirectorEventContribution__Set = 1,
	};


	// Enum /Script/FortniteAI.EFortAIDirectorFactorContribution
	enum EFortAIDirectorFactorContribution
	{
		EFortAIDirectorFactorContribution__Direct = 0,
		EFortAIDirectorFactorContribution__Inverse = 1,
	};


	// Enum /Script/FortniteAI.EFortEncounterPacingState
	enum EFortEncounterPacingState
	{
		EFortEncounterPacingState__Ramp = 0,
		EFortEncounterPacingState__Peak = 1,
		EFortEncounterPacingState__Fade = 2,
		EFortEncounterPacingState__Rest = 3,
		EFortEncounterPacingState__Max_None = 4,
	};


	// Enum /Script/FortniteAI.EFortEncounterState
	enum EFortEncounterState
	{
		EFortEncounterState__Uninitialized = 0,
		EFortEncounterState__InitializingProperties = 1,
		EFortEncounterState__InitializingRiftManager = 2,
		EFortEncounterState__AwaitingActivation = 3,
		EFortEncounterState__Active = 4,
		EFortEncounterState__ReplacingRifts = 5,
		EFortEncounterState__Max_None = 6,
	};


	// Enum /Script/FortniteAI.EFortAIWaveProgressSection
	enum EFortAIWaveProgressSection
	{
		EFortAIWaveProgressSection__SectionOne = 0,
		EFortAIWaveProgressSection__SectionTwo = 1,
		EFortAIWaveProgressSection__Max_None = 2,
	};


	// Enum /Script/FortniteAI.EFortEncounterSequenceResult
	enum EFortEncounterSequenceResult
	{
		EFortEncounterSequenceResult__Success = 0,
		EFortEncounterSequenceResult__FailedEncounterInProgress = 1,
		EFortEncounterSequenceResult__Failed = 2,
	};


	// Enum /Script/FortniteAI.EAssignmentCreationResult
	enum EAssignmentCreationResult
	{
		EAssignmentCreationResult__AssignmentNotFoundOrCreated = 0,
		EAssignmentCreationResult__AssignmentCreated = 1,
		EAssignmentCreationResult__AssignmentFound = 2,
	};


	// Enum /Script/FortniteAI.ECorePerceptionTypes
	enum ECorePerceptionTypes
	{
		ECorePerceptionTypes__Sight = 0,
		ECorePerceptionTypes__Hearing = 1,
		ECorePerceptionTypes__Damage = 2,
		ECorePerceptionTypes__Touch = 3,
		ECorePerceptionTypes__Team = 4,
		ECorePerceptionTypes__Prediction = 5,
	};


	// Enum /Script/FortniteAI.ECorePerceptionTypesBitmask
	enum ECorePerceptionTypesBitmask
	{
		ECorePerceptionTypesBitmask__Sight = 1,
		ECorePerceptionTypesBitmask__Hearing = 2,
		ECorePerceptionTypesBitmask__Damage = 4,
		ECorePerceptionTypesBitmask__Touch = 8,
		ECorePerceptionTypesBitmask__Team = 10,
		ECorePerceptionTypesBitmask__Prediction = 20,
		ECorePerceptionTypesBitmask__All = FFFFFFFF,
	};


	// Enum /Script/FortniteAI.EAssignmentType
	enum EAssignmentType
	{
		EAssignmentType__Invalid = 0,
		EAssignmentType__Encounter = 1,
		EAssignmentType__World = 2,
		EAssignmentType__Enemy = 3,
		EAssignmentType__NumAssignmentTypes = 4,
	};


	// Enum /Script/FortniteAI.EBuildingWallArea
	enum EBuildingWallArea
	{
		EBuildingWallArea__Regular = 0,
		EBuildingWallArea__Flat = 1,
		EBuildingWallArea__Special = 2,
	};


	// Enum /Script/FortniteAI.EBuildingStairsRailing
	enum EBuildingStairsRailing
	{
		EBuildingStairsRailing__None = 0,
		EBuildingStairsRailing__Partial = 1,
		EBuildingStairsRailing__Full = 2,
	};


	// Enum /Script/FortniteAI.EBuildingFloorRailing
	enum EBuildingFloorRailing
	{
		EBuildingFloorRailing__None = 0,
		EBuildingFloorRailing__Balcony = 1,
	};


	// Enum /Script/FortniteAI.EFortHotSpotSlot
	enum EFortHotSpotSlot
	{
		EFortHotSpotSlot__Melee = 0,
		EFortHotSpotSlot__MeleeHuge = 1,
		EFortHotSpotSlot__Ranged = 2,
		EFortHotSpotSlot__None = 3,
	};


	// Enum /Script/FortniteAI.EFortHotSpotDirection
	enum EFortHotSpotDirection
	{
		EFortHotSpotDirection__PositiveX = 0,
		EFortHotSpotDirection__NegativeX = 1,
		EFortHotSpotDirection__PositiveY = 2,
		EFortHotSpotDirection__NegativeY = 3,
		EFortHotSpotDirection__PositiveZ = 4,
		EFortHotSpotDirection__NegativeZ = 5,
		EFortHotSpotDirection__Any = 6,
	};


	// Enum /Script/FortniteAI.EFortHotSpotPreview
	enum EFortHotSpotPreview
	{
		EFortHotSpotPreview__None = 0,
		EFortHotSpotPreview__Smashing = 1,
		EFortHotSpotPreview__Shooting = 2,
	};


	// Enum /Script/FortniteAI.EHotspotTypeConfigMode
	enum EHotspotTypeConfigMode
	{
		EHotspotTypeConfigMode__AlwaysAdd = 0,
		EHotspotTypeConfigMode__WhenNotDefined = 1,
		EHotspotTypeConfigMode__WhenNotValid = 2,
	};


	// Enum /Script/FortniteAI.EFortPartialPathUsage
	enum EFortPartialPathUsage
	{
		EFortPartialPathUsage__Always = 0,
		EFortPartialPathUsage__OnlyGoalsOnDestructible = 1,
		EFortPartialPathUsage__Never = 2,
	};


	// Enum /Script/FortniteAI.ETargetDistanceComparisonType
	enum ETargetDistanceComparisonType
	{
		ETargetDistanceComparisonType__TwoDimensions = 0,
		ETargetDistanceComparisonType__ThreeDimensions = 1,
		ETargetDistanceComparisonType__CollisionHalfHeightMultiplier = 2,
	};


	// Enum /Script/FortniteAI.EAIScalableFloatScalingType
	enum EAIScalableFloatScalingType
	{
		EAIScalableFloatScalingType__Disabled = 0,
		EAIScalableFloatScalingType__ReceivedDamageByTarget = 1,
	};


	// Enum /Script/FortniteAI.ETeleportReason
	enum ETeleportReason
	{
		ETeleportReason__AgentNotOnNavmesh = 0,
		ETeleportReason__AgentDestinationNotOnNavMesh = 1,
		ETeleportReason__AgentStuckInRepetitivePartialPaths = 2,
		ETeleportReason__AgentBlocked = 3,
		ETeleportReason__AgentNoPathFound = 4,
		ETeleportReason__Unknown = 5,
	};


	// Enum /Script/FortniteAI.EObstacleType
	enum EObstacleType
	{
		EObstacleType__IncomingSmashable = 0,
		EObstacleType__BlockingSmashable = 1,
		EObstacleType__BlockingDetectedTrap = 2,
		EObstacleType__Unknown = 3,
		EObstacleType__Count = 3,
	};


	// Enum /Script/FortniteAI.EHarvestResult
	enum EHarvestResult
	{
		EHarvestResult__None = 0,
		EHarvestResult__InProgress = 1,
		EHarvestResult__Success = 2,
		EHarvestResult__Fail = 3,
	};


	// Enum /Script/FortniteAI.EReachLocationValidationMode
	enum EReachLocationValidationMode
	{
		EReachLocationValidationMode__None = 0,
		EReachLocationValidationMode__Storm = 1,
		EReachLocationValidationMode__Leash = 2,
		EReachLocationValidationMode__SoftLeash = 3,
	};


	// Enum /Script/FortniteAI.EBlackboardUpdateType
	enum EBlackboardUpdateType
	{
		EBlackboardUpdateType__NoUpdate = 0,
		EBlackboardUpdateType__UpdateNow = 1,
		EBlackboardUpdateType__UpdateNextTick = 2,
	};


	// Enum /Script/FortniteAI.EBotControllerClamberStatus
	enum EBotControllerClamberStatus
	{
		EBotControllerClamberStatus__Invalid = 0,
		EBotControllerClamberStatus__MoveStarted = 1,
		EBotControllerClamberStatus__MoveDone = 2,
		EBotControllerClamberStatus__MoveFailed = 3,
	};


	// Enum /Script/FortniteAI.EDefensivePlayerStyleSource
	enum EDefensivePlayerStyleSource
	{
		EDefensivePlayerStyleSource__Unknown = 0,
		EDefensivePlayerStyleSource__Escape = 1,
	};


	// Enum /Script/FortniteAI.ETwoPointSolverRotationA
	enum ETwoPointSolverRotationA
	{
		ETwoPointSolverRotationA__PointAToQuerier = 0,
		ETwoPointSolverRotationA__QuerierToPointA = 1,
		ETwoPointSolverRotationA__PointAToQuerierWithRandomOffset = 2,
		ETwoPointSolverRotationA__QuerierToPointAWithRandomOffset = 3,
		ETwoPointSolverRotationA__Custom = 4,
	};


	// Enum /Script/FortniteAI.EFortIntensityCurveSequenceType
	enum EFortIntensityCurveSequenceType
	{
		EFortIntensityCurveSequenceType__Sequence = 0,
		EFortIntensityCurveSequenceType__Loop = 1,
		EFortIntensityCurveSequenceType__Random = 2,
		EFortIntensityCurveSequenceType__Max_None = 3,
	};


	// Enum /Script/FortniteAI.EFortNavLinkPattern
	enum EFortNavLinkPattern
	{
		EFortNavLinkPattern__Floor = 0,
		EFortNavLinkPattern__Stairs = 1,
		EFortNavLinkPattern__Roof = 2,
		EFortNavLinkPattern__Manual = 3,
	};


	// Enum /Script/FortniteAI.EFortNamedNavmesh
	enum EFortNamedNavmesh
	{
		EFortNamedNavmesh__Husk = 0,
		EFortNamedNavmesh__Smasher = 1,
	};


	// Enum /Script/FortniteAI.EPathObstacleAction
	enum EPathObstacleAction
	{
		EPathObstacleAction__Melee = 0,
		EPathObstacleAction__Ignore = 1,
		EPathObstacleAction__AbortMoveAsFailed = 2,
		EPathObstacleAction__FinishMoveAsSucceeded = 3,
	};


	// Enum /Script/FortniteAI.EPathUndermineEvent
	enum EPathUndermineEvent
	{
		EPathUndermineEvent__Predicted = 0,
		EPathUndermineEvent__Started = 1,
		EPathUndermineEvent__Finished = 2,
	};


	// Enum /Script/FortniteAI.EWardAffectType
	enum EWardAffectType
	{
		EWardAffectType__AffectsBothStartAndEndPoints = 0,
		EWardAffectType__AffectsOnlyStartPoints = 1,
		EWardAffectType__AffectsOnlyEndPoints = 2,
	};


	// Enum /Script/FortniteAI.ETagGoalScoringCategory
	enum ETagGoalScoringCategory
	{
		ETagGoalScoringCategory__Ignore = 0,
		ETagGoalScoringCategory__HighInterest = 1,
		ETagGoalScoringCategory__NumCategories = 2,
	};


	// Enum /Script/FortniteAI.EBoundingBoxSlotDirectionCalculation
	enum EBoundingBoxSlotDirectionCalculation
	{
		EBoundingBoxSlotDirectionCalculation__Auto = 0,
		EBoundingBoxSlotDirectionCalculation__FaceWall = 1,
		EBoundingBoxSlotDirectionCalculation__FaceAwayFromWall = 2,
		EBoundingBoxSlotDirectionCalculation__FaceCenter = 3,
	};


	// Enum /Script/FortniteAI.EFortAreaFlag
	enum EFortAreaFlag
	{
		EFortAreaFlag__Default = 0,
		EFortAreaFlag__Obstacle = 1,
		EFortAreaFlag__Smashable = 2,
		EFortAreaFlag__Unwalkable = 3,
		EFortAreaFlag__Interactable = 4,
	};


	// Enum /Script/FortniteAI.EInBoundsState
	enum EInBoundsState
	{
		EInBoundsState__NoBounds = 0,
		EInBoundsState__NotInBounds = 1,
		EInBoundsState__InBounds = 2,
	};


	// Enum /Script/FortniteAI.ENavPathRendererStatus
	enum ENavPathRendererStatus
	{
		ENavPathRendererStatus__INVALID = 0,
		ENavPathRendererStatus__CALCULATING = 1,
		ENavPathRendererStatus__SUCCESS = 2,
		ENavPathRendererStatus__FAILED = 3,
	};


	// Enum /Script/FortniteAI.EFortThreatDeactivationType
	enum EFortThreatDeactivationType
	{
		EFortThreatDeactivationType__Off = 0,
		EFortThreatDeactivationType__Dormant = 1,
	};


	// Enum /Script/FortniteAI.ETokenState
	enum ETokenState
	{
		ETokenState__Owned = 0,
		ETokenState__Awaiting = 1,
		ETokenState__Invalid = 2,
	};


	// Enum /Script/FortniteAI.EPositionSelectionMode
	enum EPositionSelectionMode
	{
		EPositionSelectionMode__Reserved = 0,
		EPositionSelectionMode__Unreserved = 1,
		EPositionSelectionMode__All = 2,
	};


	// Enum /Script/FortniteAI.EFortCreativePatrolPathGroup
	enum EFortCreativePatrolPathGroup
	{
		EFortCreativePatrolPathGroup__Group_None = 0,
		EFortCreativePatrolPathGroup__Group = 1,
		EFortCreativePatrolPathGroup__Group = 2,
		EFortCreativePatrolPathGroup__Group = 3,
		EFortCreativePatrolPathGroup__Group = 4,
		EFortCreativePatrolPathGroup__Group = 5,
		EFortCreativePatrolPathGroup__Group = 6,
		EFortCreativePatrolPathGroup__Group = 7,
		EFortCreativePatrolPathGroup__Group = 8,
		EFortCreativePatrolPathGroup__Group = 9,
		EFortCreativePatrolPathGroup__Group = A,
		EFortCreativePatrolPathGroup__Group = B,
		EFortCreativePatrolPathGroup__Group = C,
		EFortCreativePatrolPathGroup__Group = D,
		EFortCreativePatrolPathGroup__Group = E,
		EFortCreativePatrolPathGroup__Group = F,
		EFortCreativePatrolPathGroup__Group = 10,
		EFortCreativePatrolPathGroup__Group = 11,
		EFortCreativePatrolPathGroup__Group = 12,
		EFortCreativePatrolPathGroup__Group = 13,
		EFortCreativePatrolPathGroup__Group = 14,
		EFortCreativePatrolPathGroup__Group = 15,
		EFortCreativePatrolPathGroup__Group = 16,
		EFortCreativePatrolPathGroup__Group = 17,
		EFortCreativePatrolPathGroup__Group = 18,
		EFortCreativePatrolPathGroup__Group = 19,
		EFortCreativePatrolPathGroup__Group = 1A,
		EFortCreativePatrolPathGroup__Group = 1B,
		EFortCreativePatrolPathGroup__Group = 1C,
		EFortCreativePatrolPathGroup__Group = 1D,
		EFortCreativePatrolPathGroup__Group = 1E,
		EFortCreativePatrolPathGroup__Group = 1F,
		EFortCreativePatrolPathGroup__Group = 20,
		EFortCreativePatrolPathGroup__Group = 21,
		EFortCreativePatrolPathGroup__Group = 22,
		EFortCreativePatrolPathGroup__Group = 23,
		EFortCreativePatrolPathGroup__Group = 24,
		EFortCreativePatrolPathGroup__Group = 25,
		EFortCreativePatrolPathGroup__Group = 26,
		EFortCreativePatrolPathGroup__Group = 27,
		EFortCreativePatrolPathGroup__Group = 28,
		EFortCreativePatrolPathGroup__Group = 29,
		EFortCreativePatrolPathGroup__Group = 2A,
		EFortCreativePatrolPathGroup__Group = 2B,
		EFortCreativePatrolPathGroup__Group = 2C,
		EFortCreativePatrolPathGroup__Group = 2D,
		EFortCreativePatrolPathGroup__Group = 2E,
		EFortCreativePatrolPathGroup__Group = 2F,
		EFortCreativePatrolPathGroup__Group = 30,
		EFortCreativePatrolPathGroup__Group = 31,
		EFortCreativePatrolPathGroup__Group = 32,
		EFortCreativePatrolPathGroup__Group = 33,
		EFortCreativePatrolPathGroup__Group = 34,
		EFortCreativePatrolPathGroup__Group = 35,
		EFortCreativePatrolPathGroup__Group = 36,
		EFortCreativePatrolPathGroup__Group = 37,
		EFortCreativePatrolPathGroup__Group = 38,
		EFortCreativePatrolPathGroup__Group = 39,
		EFortCreativePatrolPathGroup__Group = 3A,
		EFortCreativePatrolPathGroup__Group = 3B,
		EFortCreativePatrolPathGroup__Group = 3C,
		EFortCreativePatrolPathGroup__Group = 3D,
		EFortCreativePatrolPathGroup__Group = 3E,
		EFortCreativePatrolPathGroup__Group = 3F,
		EFortCreativePatrolPathGroup__Group = 40,
		EFortCreativePatrolPathGroup__Group = 41,
		EFortCreativePatrolPathGroup__Group = 42,
		EFortCreativePatrolPathGroup__Group = 43,
		EFortCreativePatrolPathGroup__Group = 44,
		EFortCreativePatrolPathGroup__Group = 45,
		EFortCreativePatrolPathGroup__Group = 46,
		EFortCreativePatrolPathGroup__Group = 47,
		EFortCreativePatrolPathGroup__Group = 48,
		EFortCreativePatrolPathGroup__Group = 49,
		EFortCreativePatrolPathGroup__Group = 4A,
		EFortCreativePatrolPathGroup__Group = 4B,
		EFortCreativePatrolPathGroup__Group = 4C,
		EFortCreativePatrolPathGroup__Group = 4D,
		EFortCreativePatrolPathGroup__Group = 4E,
		EFortCreativePatrolPathGroup__Group = 4F,
		EFortCreativePatrolPathGroup__Group = 50,
		EFortCreativePatrolPathGroup__Group = 51,
		EFortCreativePatrolPathGroup__Group = 52,
		EFortCreativePatrolPathGroup__Group = 53,
		EFortCreativePatrolPathGroup__Group = 54,
		EFortCreativePatrolPathGroup__Group = 55,
		EFortCreativePatrolPathGroup__Group = 56,
		EFortCreativePatrolPathGroup__Group = 57,
		EFortCreativePatrolPathGroup__Group = 58,
		EFortCreativePatrolPathGroup__Group = 59,
		EFortCreativePatrolPathGroup__Group = 5A,
		EFortCreativePatrolPathGroup__Group = 5B,
		EFortCreativePatrolPathGroup__Group = 5C,
		EFortCreativePatrolPathGroup__Group = 5D,
		EFortCreativePatrolPathGroup__Group = 5E,
		EFortCreativePatrolPathGroup__Group = 5F,
		EFortCreativePatrolPathGroup__Group = 60,
		EFortCreativePatrolPathGroup__Group = 61,
		EFortCreativePatrolPathGroup__Group = 62,
		EFortCreativePatrolPathGroup__Group = 63,
		EFortCreativePatrolPathGroup__Group = 64,
	};


	// Enum /Script/FortniteAI.EAIBotBuildingTemplate
	enum EAIBotBuildingTemplate
	{
		EAIBotBuildingTemplate__SingleWall = 0,
		EAIBotBuildingTemplate__SingleRamp = 1,
		EAIBotBuildingTemplate__SingleRoof = 2,
		EAIBotBuildingTemplate__SingleBrace = 3,
		EAIBotBuildingTemplate__SingleWallWindow = 4,
	};


	// Enum /Script/FortniteAI.BotDataOverrideCosmeticMode
	enum BotDataOverrideCosmeticMode
	{
		BotDataOverrideCosmeticMode__SpecificLoadout = 0,
		BotDataOverrideCosmeticMode__CosmeticLibrary = 1,
	};


	// Enum /Script/FortniteAI.EAILootExcludeListReason
	enum EAILootExcludeListReason
	{
		EAILootExcludeListReason__Invalid = 0,
		EAILootExcludeListReason__ExecutionError = 1,
		EAILootExcludeListReason__CannotReachLootLocation = 2,
		EAILootExcludeListReason__OutsideSafeZoneRadius = 3,
		EAILootExcludeListReason__NoInventorySpace = 4,
		EAILootExcludeListReason__LootStateUnavailable = 5,
		EAILootExcludeListReason__PathNotFound = 6,
		EAILootExcludeListReason__GoalOffNavmesh = 7,
		EAILootExcludeListReason__AgentBlocked = 8,
		EAILootExcludeListReason__IsolatedIsland = 9,
		EAILootExcludeListReason__UnsupportedItem = A,
		EAILootExcludeListReason__Count = B,
	};


	// Enum /Script/FortniteAI.EExecutionStatus
	enum EExecutionStatus
	{
		EExecutionStatus__ExecutionError = 0,
		EExecutionStatus__ExecutionDenied = 1,
		EExecutionStatus__ExecutionSuccess = 2,
		EExecutionStatus__ExecutionPending = 3,
		EExecutionStatus__ExecutionAllowed = 4,
	};


	// Enum /Script/FortniteAI.EBotMovementState
	enum EBotMovementState
	{
		EBotMovementState__None = 0,
		EBotMovementState__InProgress = 1,
		EBotMovementState__Failed_NoPathFound = 2,
		EBotMovementState__Failed_Aborted = 3,
		EBotMovementState__Failed_AgentOffNavmesh = 4,
		EBotMovementState__Failed_GoalOffNavmesh = 5,
		EBotMovementState__Failed_Blocked = 6,
		EBotMovementState__Failed_OffPath = 7,
		EBotMovementState__Failed_Falling = 8,
		EBotMovementState__Success = 9,
		EBotMovementState__Success_Partial = A,
		EBotMovementState__Success_AlreadyAtGoal = B,
	};


	// Enum /Script/FortniteAI.EUnstuckSteeringReason
	enum EUnstuckSteeringReason
	{
		EUnstuckSteeringReason__Unknown = 0,
		EUnstuckSteeringReason__OffNavMesh = 1,
		EUnstuckSteeringReason__IsolatedIsland = 2,
		EUnstuckSteeringReason__AgentBlocked = 3,
		EUnstuckSteeringReason__NoPathFound = 4,
	};


	// Enum /Script/FortniteAI.EFortAthenaAIObjectTrackerQueryOrder
	enum EFortAthenaAIObjectTrackerQueryOrder
	{
		EFortAthenaAIObjectTrackerQueryOrder__None = 0,
		EFortAthenaAIObjectTrackerQueryOrder__Distance = 1,
	};


	// Enum /Script/FortniteAI.EFortAthenaSmartObjectPriority
	enum EFortAthenaSmartObjectPriority
	{
		EFortAthenaSmartObjectPriority__Lowest = 0,
		EFortAthenaSmartObjectPriority__Lower = 1,
		EFortAthenaSmartObjectPriority__Low = 2,
		EFortAthenaSmartObjectPriority__BelowNormal = 3,
		EFortAthenaSmartObjectPriority__Normal = 4,
		EFortAthenaSmartObjectPriority__AboveNormal = 5,
		EFortAthenaSmartObjectPriority__High = 6,
		EFortAthenaSmartObjectPriority__Higher = 7,
		EFortAthenaSmartObjectPriority__Highest = 8,
		EFortAthenaSmartObjectPriority__MIN = 0,
	};


	// Enum /Script/FortniteAI.EFortAthenaSmartObjectUrgency
	enum EFortAthenaSmartObjectUrgency
	{
		EFortAthenaSmartObjectUrgency__Low = 0,
		EFortAthenaSmartObjectUrgency__Normal = 1,
		EFortAthenaSmartObjectUrgency__High = 2,
	};


	// Enum /Script/FortniteAI.EFortAthenaAISpawnerDataComponentTriBool
	enum EFortAthenaAISpawnerDataComponentTriBool
	{
		EFortAthenaAISpawnerDataComponentTriBool__Yes = 0,
		EFortAthenaAISpawnerDataComponentTriBool__No = 1,
		EFortAthenaAISpawnerDataComponentTriBool__DoNotModify = 2,
	};


	// Enum /Script/FortniteAI.EBehaviorTreeBranches
	enum EBehaviorTreeBranches
	{
		EBehaviorTreeBranches__CanUseDiving = 0,
		EBehaviorTreeBranches__CanUseGliding = 1,
		EBehaviorTreeBranches__CanReactToProjectile = 2,
		EBehaviorTreeBranches__CanReactToTraps = 3,
		EBehaviorTreeBranches__CanAvoidDangerArea = 4,
		EBehaviorTreeBranches__CanBeConverted = 5,
		EBehaviorTreeBranches__CanPropagateAwareness = 6,
		EBehaviorTreeBranches__CanUseThreatenedBehaviors = 7,
		EBehaviorTreeBranches__CanUseLastKnownPositionBehavior = 8,
		EBehaviorTreeBranches__CanUseAlertedBehavior = 9,
		EBehaviorTreeBranches__CanUseSmartObjects = A,
		EBehaviorTreeBranches__CanReviveDBNOTeammates = B,
		EBehaviorTreeBranches__CanPlayEmote = C,
		EBehaviorTreeBranches__CanConverse = D,
		EBehaviorTreeBranches__CanPatrolOnPath = E,
		EBehaviorTreeBranches__CanPatrolAround = F,
		EBehaviorTreeBranches__CanTeleportWhenStuck = 10,
		EBehaviorTreeBranches__CanEmoteWhenStuck = 11,
		EBehaviorTreeBranches__CanUseZiplines = 12,
		EBehaviorTreeBranches__CanMoveAway = 13,
		EBehaviorTreeBranches__CanReturnToLeash = 14,
		EBehaviorTreeBranches__Count = 15,
	};


	// Enum /Script/FortniteAI.EBehaviorTreeBranchesBitmask
	enum EBehaviorTreeBranchesBitmask
	{
		EBehaviorTreeBranchesBitmask__CanUseDiving = 0,
		EBehaviorTreeBranchesBitmask__CanUseGliding = 1,
		EBehaviorTreeBranchesBitmask__CanReactToProjectile = 2,
		EBehaviorTreeBranchesBitmask__CanReactToTraps = 3,
		EBehaviorTreeBranchesBitmask__CanAvoidDangerArea = 4,
		EBehaviorTreeBranchesBitmask__CanBeConverted = 5,
		EBehaviorTreeBranchesBitmask__CanPropagateAwareness = 6,
		EBehaviorTreeBranchesBitmask__CanUseThreatenedBehaviors = 7,
		EBehaviorTreeBranchesBitmask__CanUseLastKnownPositionBehavior = 8,
		EBehaviorTreeBranchesBitmask__CanUseAlertedBehavior = 9,
		EBehaviorTreeBranchesBitmask__CanUseSmartObjects = A,
		EBehaviorTreeBranchesBitmask__CanReviveDBNOTeammates = B,
		EBehaviorTreeBranchesBitmask__CanPlayEmote = C,
		EBehaviorTreeBranchesBitmask__CanConverse = D,
		EBehaviorTreeBranchesBitmask__CanPatrolOnPath = E,
		EBehaviorTreeBranchesBitmask__CanPatrolAround = F,
		EBehaviorTreeBranchesBitmask__CanTeleportWhenStuck = 10,
		EBehaviorTreeBranchesBitmask__CanEmoteWhenStuck = 11,
		EBehaviorTreeBranchesBitmask__CanUseZiplines = 12,
		EBehaviorTreeBranchesBitmask__CanMoveAway = 13,
		EBehaviorTreeBranchesBitmask__CanReturnToLeash = 14,
		EBehaviorTreeBranchesBitmask__Count = 15,
	};


	// Enum /Script/FortniteAI.EPatrollingMode
	enum EPatrollingMode
	{
		EPatrollingMode__BackAndForth = 0,
		EPatrollingMode__Loop = 1,
		EPatrollingMode__StopAtEnd = 2,
	};


	// Enum /Script/FortniteAI.EDBNOPlayStyle
	enum EDBNOPlayStyle
	{
		EDBNOPlayStyle__Thirsty = 0,
		EDBNOPlayStyle__Default = 1,
		EDBNOPlayStyle__Passive = 2,
		EDBNOPlayStyle__ThristyButPassiveOnPlayers = 3,
		EDBNOPlayStyle__DefaultButPassiveOnPlayers = 4,
	};


	// Enum /Script/FortniteAI.EStimType
	enum EStimType
	{
		EStimType__Seeing = 0,
		EStimType__Seen = 1,
		EStimType__MightHaveSeen = 2,
		EStimType__Hurt = 3,
		EStimType__Heard = 4,
		EStimType__Obstacle = 5,
		EStimType__Enemy = 6,
		EStimType__Touched = 7,
		EStimType__Unknown = 8,
		EStimType__Count = 8,
	};


	// Enum /Script/FortniteAI.EPerceptionState
	enum EPerceptionState
	{
		EPerceptionState__Threat_Seeing = 0,
		EPerceptionState__Threat_LKP = 1,
		EPerceptionState__Threat_Alerted = 2,
		EPerceptionState__ObstacleIncoming = 3,
		EPerceptionState__ObstacleBlockedBy = 4,
		EPerceptionState__ObstacleDetectedTrap = 5,
		EPerceptionState__Unknown = 6,
		EPerceptionState__Count = 6,
		EPerceptionState__Threat_Count = 3,
	};


	// Enum /Script/FortniteAI.ETrackingOffsetModifierCurve
	enum ETrackingOffsetModifierCurve
	{
		ETrackingOffsetModifierCurve__Default = 0,
		ETrackingOffsetModifierCurve__CombatStart = 1,
		ETrackingOffsetModifierCurve__TargetLowHealth = 2,
	};


	// Enum /Script/FortniteAI.EPerceptionSoundType
	enum EPerceptionSoundType
	{
		EPerceptionSoundType__Default = 0,
		EPerceptionSoundType__Explosion = 1,
		EPerceptionSoundType__ProjectileFlyBy = 2,
		EPerceptionSoundType__ProjectileImpact = 3,
		EPerceptionSoundType__WeaponFiring = 4,
		EPerceptionSoundType__Building = 5,
		EPerceptionSoundType__MeleeImpact = 6,
		EPerceptionSoundType__PawnDeath = 7,
	};


	// Enum /Script/FortniteAI.ELookAtType
	enum ELookAtType
	{
		ELookAtType__ScanAround = 0,
		ELookAtType__Investigate = 1,
		ELookAtType__HeardSound = 2,
		ELookAtType__Ambush = 3,
	};


	// Enum /Script/FortniteAI.ELeashReturnLocationMode
	enum ELeashReturnLocationMode
	{
		ELeashReturnLocationMode__Closest = 0,
		ELeashReturnLocationMode__Random = 1,
		ELeashReturnLocationMode__ReturnToCenter = 2,
		ELeashReturnLocationMode__ReturnToCenterAvoidObstacle = 3,
	};


	// Enum /Script/FortniteAI.EOrientedConstructionBuildingType
	enum EOrientedConstructionBuildingType
	{
		EOrientedConstructionBuildingType__WallX = 0,
		EOrientedConstructionBuildingType__WallY = 1,
		EOrientedConstructionBuildingType__Floor = 2,
		EOrientedConstructionBuildingType__StairsUpX = 3,
		EOrientedConstructionBuildingType__StairsUpY = 4,
		EOrientedConstructionBuildingType__StairsDownX = 5,
		EOrientedConstructionBuildingType__StairsDownY = 6,
		EOrientedConstructionBuildingType__Roof = 7,
		EOrientedConstructionBuildingType__BraceLeftX = 8,
		EOrientedConstructionBuildingType__BraceRightX = 9,
		EOrientedConstructionBuildingType__BraceLeftY = A,
		EOrientedConstructionBuildingType__BraceRightY = B,
		EOrientedConstructionBuildingType__WallWindowX = C,
		EOrientedConstructionBuildingType__WallWindowY = D,
		EOrientedConstructionBuildingType__Count = E,
	};


	// Enum /Script/FortniteAI.EConstructionBuildingType
	enum EConstructionBuildingType
	{
		EConstructionBuildingType__Wall = 0,
		EConstructionBuildingType__Floor = 1,
		EConstructionBuildingType__Stairs = 2,
		EConstructionBuildingType__Roof = 3,
		EConstructionBuildingType__Brace = 4,
		EConstructionBuildingType__WallWindow = 5,
		EConstructionBuildingType__Count = 6,
	};


	// Enum /Script/FortniteAI.EAthenaAIServicePOIList
	enum EAthenaAIServicePOIList
	{
		MainBusDrop = 0,
		SecondaryBusDrop = 1,
		OnGround = 2,
	};


	// Enum /Script/FortniteAI.ECheatBotTargetingCategory
	enum ECheatBotTargetingCategory
	{
		ECheatBotTargetingCategory__Player = 0,
		ECheatBotTargetingCategory__NPC = 1,
		ECheatBotTargetingCategory__Other = 2,
		ECheatBotTargetingCategory__COUNT = 3,
	};


	// Enum /Script/FortniteAI.EAthenaAITrackedZoneType
	enum EAthenaAITrackedZoneType
	{
		EAthenaAITrackedZoneType__Occluder = 0,
		EAthenaAITrackedZoneType__Danger = 1,
	};


	// Enum /Script/FortniteAI.EBotPOIType
	enum EBotPOIType
	{
		EBotPOIType__Unknown = 0,
		EBotPOIType__ClusterLoot = 1,
		EBotPOIType__MidMatchObjective = 2,
	};


	// Enum /Script/FortniteAI.EBotPOIUsageBitmask
	enum EBotPOIUsageBitmask
	{
		EBotPOIUsageBitmask__None = 0,
		EBotPOIUsageBitmask__BotJumpOffBus = 1,
		EBotPOIUsageBitmask__BotNavigation = 2,
	};


	// Enum /Script/FortniteAI.ERatingsEnforcementType
	enum ERatingsEnforcementType
	{
		ERatingsEnforcementType__Default = 0,
		ERatingsEnforcementType__IgnoreMaximums = 1,
		ERatingsEnforcementType__IgnoreParty = 2,
		ERatingsEnforcementType__IgnorePartyMaximum = 3,
	};


	// Enum /Script/FortniteAI.EClampType
	enum EClampType
	{
		EClampType__Minimum = 0,
		EClampType__Maximum = 1,
	};

}
