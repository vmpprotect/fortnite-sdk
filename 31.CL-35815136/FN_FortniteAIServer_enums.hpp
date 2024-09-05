#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteAIServer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/FortniteAIServer.ETargetContext
	enum ETargetContext
	{
		ETargetContext__Default = 0,
		ETargetContext__Unreachable = 1,
		ETargetContext__OutsideOfLeash = 2,
	};


	// Enum /Script/FortniteAIServer.EFortAthenaBTServiceTokenQueryAction
	enum EFortAthenaBTServiceTokenQueryAction
	{
		EFortAthenaBTServiceTokenQueryAction__None = 0,
		EFortAthenaBTServiceTokenQueryAction__RequestToken = 1,
		EFortAthenaBTServiceTokenQueryAction__ReleaseToken = 2,
	};


	// Enum /Script/FortniteAIServer.SwitchSeatType
	enum SwitchSeatType
	{
		ToDriver = 0,
		ToPassenger = 1,
		ToGunner = 2,
		ToSpotter = 3,
	};


	// Enum /Script/FortniteAIServer.EFortAthenaStateTreeTaskFeatureExecutionMode
	enum EFortAthenaStateTreeTaskFeatureExecutionMode
	{
		EFortAthenaStateTreeTaskFeatureExecutionMode__DoNotExecute = 0,
		EFortAthenaStateTreeTaskFeatureExecutionMode__ExecuteOnEnter = 1,
		EFortAthenaStateTreeTaskFeatureExecutionMode__ExecuteOnExit = 2,
	};


	// Enum /Script/FortniteAIServer.SeatStatusType
	enum SeatStatusType
	{
		Driver = 0,
		Passenger = 1,
		Gunner = 2,
		Spotter = 3,
	};


	// Enum /Script/FortniteAIServer.EFortQueryGeneratorFloodfillBehavior
	enum EFortQueryGeneratorFloodfillBehavior
	{
		EFortQueryGeneratorFloodfillBehavior__PolyCenter = 0,
		EFortQueryGeneratorFloodfillBehavior__RandomPositionOnPoly = 1,
		EFortQueryGeneratorFloodfillBehavior__DistributedByPolyArea = 2,
	};


	// Enum /Script/FortniteAIServer.EQueryGeneratorRectSpacingMethod
	enum EQueryGeneratorRectSpacingMethod
	{
		EQueryGeneratorRectSpacingMethod__BySpaceBetween = 0,
		EQueryGeneratorRectSpacingMethod__ByNumberOfPoints = 1,
	};


	// Enum /Script/FortniteAIServer.EForstStateTreeFireWeaponBehavior
	enum EForstStateTreeFireWeaponBehavior
	{
		EForstStateTreeFireWeaponBehavior__HoldFire = 0,
		EForstStateTreeFireWeaponBehavior__HoldFireForPattern = 1,
		EForstStateTreeFireWeaponBehavior__FireSingleAndSucceed = 2,
		EForstStateTreeFireWeaponBehavior__FireSingleAndRun = 3,
	};


	// Enum /Script/FortniteAIServer.EFortWorldConditionPlayerHasConvertedNPCCondition
	enum EFortWorldConditionPlayerHasConvertedNPCCondition
	{
		EFortWorldConditionPlayerHasConvertedNPCCondition__HasReachedConvertedNPCLimit = 0,
		EFortWorldConditionPlayerHasConvertedNPCCondition__HasAnotherConvertedNPC = 1,
	};


	// Enum /Script/FortniteAIServer.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
	enum EFortPointsFromNavGraphGoalPathDistanceFilterOperator
	{
		EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AllGoalsInRange = 0,
		EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AnyGoalInRange = 1,
	};


	// Enum /Script/FortniteAIServer.EFortTestGoalActorDot
	enum EFortTestGoalActorDot
	{
		EFortTestGoalActorDot__Dot3D = 0,
		EFortTestGoalActorDot__Dot2D = 1,
	};


	// Enum /Script/FortniteAIServer.EDistanceMode
	enum EDistanceMode
	{
		EDistanceMode__DistItemToContext = 0,
		EDistanceMode__DistItemGoalActorToContext = 1,
		EDistanceMode__DistItemToItemGoalActor = 2,
	};


	// Enum /Script/FortniteAIServer.ECountAIAssignedToType
	enum ECountAIAssignedToType
	{
		ECountAIAssignedToType__Goal = 0,
		ECountAIAssignedToType__Actor = 1,
		ECountAIAssignedToType__Assignment = 2,
	};


	// Enum /Script/FortniteAIServer.EFortAthenaAICanMoveState
	enum EFortAthenaAICanMoveState
	{
		EFortAthenaAICanMoveState__None = 0,
		EFortAthenaAICanMoveState__Failed_AgentOffNavmesh = 1,
		EFortAthenaAICanMoveState__Failed_GoalOffNavmesh = 2,
		EFortAthenaAICanMoveState__Failed_Falling = 3,
		EFortAthenaAICanMoveState__Success = 4,
		EFortAthenaAICanMoveState__Success_Partial = 5,
	};


	// Enum /Script/FortniteAIServer.EEvasiveManeuverType
	enum EEvasiveManeuverType
	{
		EEvasiveManeuverType__Crouch = 0,
		EEvasiveManeuverType__Dodge = 1,
		EEvasiveManeuverType__Jump = 2,
		EEvasiveManeuverType__JetpackStrafe = 3,
		EEvasiveManeuverType__None = 4,
	};


	// Enum /Script/FortniteAIServer.EFreeFallingMode
	enum EFreeFallingMode
	{
		EFreeFallingMode__Idle = 0,
		EFreeFallingMode__Random = 1,
		EFreeFallingMode__TowardNearestAlly = 2,
		EFreeFallingMode__PatrolPath = 3,
	};


	// Enum /Script/FortniteAIServer.EFocusingBehavior
	enum EFocusingBehavior
	{
		EFocusingBehavior__FocusCurrentTarget = 0,
		EFocusingBehavior__IgnoreThreatAfterTimer = 1,
		EFocusingBehavior__IgnoreThreatAlways = 2,
		EFocusingBehavior__IgnoreThreatToFlee = 3,
		EFocusingBehavior__LookAtInvestigate = 4,
		EFocusingBehavior__LookAtAmbush = 5,
		EFocusingBehavior__LookAtHeardSound = 6,
		EFocusingBehavior__LookAtScanAround = 7,
		EFocusingBehavior__LookAtScanAroundOnly = 8,
		EFocusingBehavior__Invalid = 9,
	};


	// Enum /Script/FortniteAIServer.ECannotMeleeAttackReason
	enum ECannotMeleeAttackReason
	{
		ECannotMeleeAttackReason__None = 0,
		ECannotMeleeAttackReason__CooldownActive = 1,
		ECannotMeleeAttackReason__Other = 2,
		ECannotMeleeAttackReason__AttackDestinationNotValid = 3,
		ECannotMeleeAttackReason__TargetOutsideLeash = 4,
	};


	// Enum /Script/FortniteAIServer.EPathTestQueryType
	enum EPathTestQueryType
	{
		EPathTestQueryType__NavmeshRaycast2D = 0,
		EPathTestQueryType__HierarchicalQuery = 1,
		EPathTestQueryType__RegularPathFinding = 2,
	};


	// Enum /Script/FortniteAIServer.ECooldownType
	enum ECooldownType
	{
		OnActionTriggered = 0,
		OnActionFinished = 1,
		OnActionSucceeded = 2,
	};


	// Enum /Script/FortniteAIServer.EBTServiceSetAIFocusPriority
	enum EBTServiceSetAIFocusPriority
	{
		EBTServiceSetAIFocusPriority__Default = 0,
		EBTServiceSetAIFocusPriority__Move = 1,
		EBTServiceSetAIFocusPriority__Gameplay = 2,
	};


	// Enum /Script/FortniteAIServer.EBTSetBlackboardBoolExitActions
	enum EBTSetBlackboardBoolExitActions
	{
		EBTSetBlackboardBoolExitActions__Invert = 0,
		EBTSetBlackboardBoolExitActions__Revert = 1,
		EBTSetBlackboardBoolExitActions__Keep = 2,
	};


	// Enum /Script/FortniteAIServer.EGlideBehavior
	enum EGlideBehavior
	{
		EGlideBehavior__GlideFocusOnDestination = 0,
		EGlideBehavior__GlideSurveyArea = 1,
	};


	// Enum /Script/FortniteAIServer.EGlideMovementType
	enum EGlideMovementType
	{
		EGlideMovementType__GlideMovementLinear = 0,
		EGlideMovementType__GlideMovementSpiral = 1,
		EGlideMovementType__GlideMovementSerpentine = 2,
	};


	// Enum /Script/FortniteAIServer.EActionState
	enum EActionState
	{
		EActionState__TryingToEquip = 0,
		EActionState__EquippingItem = 1,
		EActionState__UsingItem = 2,
		EActionState__WaitingItemTermination = 3,
		EActionState__WaitBeforeEquippingNextItem = 4,
		EActionState__ActionEndedWithNoError = 5,
		EActionState__ActionEndedWithError = 6,
	};


	// Enum /Script/FortniteAIServer.EEncampmentRole
	enum EEncampmentRole
	{
		EEncampmentRole__Guard = 0,
		EEncampmentRole__Build = 1,
		EEncampmentRole__Count = 2,
	};


	// Enum /Script/FortniteAIServer.EHasMatchingGameplayTagContainerTestType
	enum EHasMatchingGameplayTagContainerTestType
	{
		EHasMatchingGameplayTagContainerTestType__Any = 0,
		EHasMatchingGameplayTagContainerTestType__All = 1,
	};


	// Enum /Script/FortniteAIServer.EFortAthenaArithmeticOperation
	enum EFortAthenaArithmeticOperation
	{
		EFortAthenaArithmeticOperation__Add = 0,
		EFortAthenaArithmeticOperation__Subtract = 1,
		EFortAthenaArithmeticOperation__Multiply = 2,
		EFortAthenaArithmeticOperation__Divide = 3,
	};


	// Enum /Script/FortniteAIServer.EFortAthenaPlayContextualAnimExecutionMethod
	enum EFortAthenaPlayContextualAnimExecutionMethod
	{
		EFortAthenaPlayContextualAnimExecutionMethod__StartInteraction = 0,
		EFortAthenaPlayContextualAnimExecutionMethod__JoinInteraction = 1,
		EFortAthenaPlayContextualAnimExecutionMethod__TransitionAllActors = 2,
		EFortAthenaPlayContextualAnimExecutionMethod__TransitionSingleActor = 3,
	};


	// Enum /Script/FortniteAIServer.ESTFortAthenaPlayMontageExecMode
	enum ESTFortAthenaPlayMontageExecMode
	{
		ESTFortAthenaPlayMontageExecMode__NewMontage = 0,
		ESTFortAthenaPlayMontageExecMode__SetNextSection = 1,
		ESTFortAthenaPlayMontageExecMode__JumpToSection = 2,
	};


	// Enum /Script/FortniteAIServer.ESTFortAthenaPlayMontageLoopMode
	enum ESTFortAthenaPlayMontageLoopMode
	{
		ESTFortAthenaPlayMontageLoopMode__Task = 0,
		ESTFortAthenaPlayMontageLoopMode__Montage = 1,
	};

}
