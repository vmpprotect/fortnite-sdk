#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AIModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/AIModule.EPathFollowingResult
	enum EPathFollowingResult
	{
		EPathFollowingResult__Success = 0,
		EPathFollowingResult__Blocked = 1,
		EPathFollowingResult__OffPath = 2,
		EPathFollowingResult__Aborted = 3,
		EPathFollowingResult__Skipped_DEPRECATED = 4,
		EPathFollowingResult__Invalid = 5,
	};


	// Enum /Script/AIModule.EEnvQueryStatus
	enum EEnvQueryStatus
	{
		EEnvQueryStatus__Processing = 0,
		EEnvQueryStatus__Success = 1,
		EEnvQueryStatus__Failed = 2,
		EEnvQueryStatus__Aborted = 3,
		EEnvQueryStatus__OwnerLost = 4,
		EEnvQueryStatus__MissingParam = 5,
	};


	// Enum /Script/AIModule.EAIOptionFlag
	enum EAIOptionFlag
	{
		EAIOptionFlag__Default = 0,
		EAIOptionFlag__Enable = 1,
		EAIOptionFlag__Disable = 2,
	};


	// Enum /Script/AIModule.FAIDistanceType
	enum FAIDistanceType
	{
		FAIDistanceType__Distance3D = 0,
		FAIDistanceType__Distance2D = 1,
		FAIDistanceType__DistanceZ = 2,
	};


	// Enum /Script/AIModule.EPawnActionAbortState
	enum EPawnActionAbortState
	{
		EPawnActionAbortState__NeverStarted = 0,
		EPawnActionAbortState__NotBeingAborted = 1,
		EPawnActionAbortState__MarkPendingAbort = 2,
		EPawnActionAbortState__LatentAbortInProgress = 3,
		EPawnActionAbortState__AbortDone = 4,
	};


	// Enum /Script/AIModule.EPawnActionResult
	enum EPawnActionResult
	{
		EPawnActionResult__NotStarted = 0,
		EPawnActionResult__InProgress = 1,
		EPawnActionResult__Success = 2,
		EPawnActionResult__Failed = 3,
		EPawnActionResult__Aborted = 4,
	};


	// Enum /Script/AIModule.EPawnActionEventType
	enum EPawnActionEventType
	{
		EPawnActionEventType__Invalid = 0,
		EPawnActionEventType__FailedToStart = 1,
		EPawnActionEventType__InstantAbort = 2,
		EPawnActionEventType__FinishedAborting = 3,
		EPawnActionEventType__FinishedExecution = 4,
		EPawnActionEventType__Push = 5,
	};


	// Enum /Script/AIModule.EAIRequestPriority
	enum EAIRequestPriority
	{
		EAIRequestPriority__SoftScript = 0,
		EAIRequestPriority__Logic = 1,
		EAIRequestPriority__HardScript = 2,
		EAIRequestPriority__Reaction = 3,
		EAIRequestPriority__Ultimate = 4,
	};


	// Enum /Script/AIModule.EAILockSource
	enum EAILockSource
	{
		EAILockSource__Animation = 0,
		EAILockSource__Logic = 1,
		EAILockSource__Script = 2,
		EAILockSource__Gameplay = 3,
	};


	// Enum /Script/AIModule.EGenericAICheck
	enum EGenericAICheck
	{
		EGenericAICheck__Less = 0,
		EGenericAICheck__LessOrEqual = 1,
		EGenericAICheck__Equal = 2,
		EGenericAICheck__NotEqual = 3,
		EGenericAICheck__GreaterOrEqual = 4,
		EGenericAICheck__Greater = 5,
		EGenericAICheck__IsTrue = 6,
	};


	// Enum /Script/AIModule.EBasicKeyOperation
	enum EBasicKeyOperation
	{
		EBasicKeyOperation__Set = 0,
		EBasicKeyOperation__NotSet = 1,
	};


	// Enum /Script/AIModule.EArithmeticKeyOperation
	enum EArithmeticKeyOperation
	{
		EArithmeticKeyOperation__Equal = 0,
		EArithmeticKeyOperation__NotEqual = 1,
		EArithmeticKeyOperation__Less = 2,
		EArithmeticKeyOperation__LessOrEqual = 3,
		EArithmeticKeyOperation__Greater = 4,
		EArithmeticKeyOperation__GreaterOrEqual = 5,
	};


	// Enum /Script/AIModule.ETextKeyOperation
	enum ETextKeyOperation
	{
		ETextKeyOperation__Equal = 0,
		ETextKeyOperation__NotEqual = 1,
		ETextKeyOperation__Contain = 2,
		ETextKeyOperation__NotContain = 3,
	};


	// Enum /Script/AIModule.EEnvTestPurpose
	enum EEnvTestPurpose
	{
		EEnvTestPurpose__Filter = 0,
		EEnvTestPurpose__Score = 1,
		EEnvTestPurpose__FilterAndScore = 2,
	};


	// Enum /Script/AIModule.EEnvTestFilterType
	enum EEnvTestFilterType
	{
		EEnvTestFilterType__Minimum = 0,
		EEnvTestFilterType__Maximum = 1,
		EEnvTestFilterType__Range = 2,
		EEnvTestFilterType__Match = 3,
	};


	// Enum /Script/AIModule.EEnvTestScoreEquation
	enum EEnvTestScoreEquation
	{
		EEnvTestScoreEquation__Linear = 0,
		EEnvTestScoreEquation__Square = 1,
		EEnvTestScoreEquation__InverseLinear = 2,
		EEnvTestScoreEquation__SquareRoot = 3,
		EEnvTestScoreEquation__Constant = 4,
	};


	// Enum /Script/AIModule.EEnvTestWeight
	enum EEnvTestWeight
	{
		EEnvTestWeight__None = 0,
		EEnvTestWeight__Square = 1,
		EEnvTestWeight__Inverse = 2,
		EEnvTestWeight__Unused = 3,
		EEnvTestWeight__Constant = 4,
		EEnvTestWeight__Skip = 5,
	};


	// Enum /Script/AIModule.EEnvTestCost
	enum EEnvTestCost
	{
		EEnvTestCost__Low = 0,
		EEnvTestCost__Medium = 1,
		EEnvTestCost__High = 2,
	};


	// Enum /Script/AIModule.EEnvTestFilterOperator
	enum EEnvTestFilterOperator
	{
		EEnvTestFilterOperator__AllPass = 0,
		EEnvTestFilterOperator__AnyPass = 1,
	};


	// Enum /Script/AIModule.EEnvTestScoreOperator
	enum EEnvTestScoreOperator
	{
		EEnvTestScoreOperator__AverageScore = 0,
		EEnvTestScoreOperator__MinScore = 1,
		EEnvTestScoreOperator__MaxScore = 2,
		EEnvTestScoreOperator__Multiply = 3,
	};


	// Enum /Script/AIModule.EEnvQueryRunMode
	enum EEnvQueryRunMode
	{
		EEnvQueryRunMode__SingleResult = 0,
		EEnvQueryRunMode__RandomBest5Pct = 1,
		EEnvQueryRunMode__RandomBest25Pct = 2,
		EEnvQueryRunMode__AllMatching = 3,
	};


	// Enum /Script/AIModule.EEnvQueryParam
	enum EEnvQueryParam
	{
		EEnvQueryParam__Float = 0,
		EEnvQueryParam__Int = 1,
		EEnvQueryParam__Bool = 2,
	};


	// Enum /Script/AIModule.EAIParamType
	enum EAIParamType
	{
		EAIParamType__Float = 0,
		EAIParamType__Int = 1,
		EAIParamType__Bool = 2,
	};


	// Enum /Script/AIModule.EEnvQueryTrace
	enum EEnvQueryTrace
	{
		EEnvQueryTrace__None = 0,
		EEnvQueryTrace__Navigation = 1,
		EEnvQueryTrace__GeometryByChannel = 2,
		EEnvQueryTrace__GeometryByProfile = 3,
		EEnvQueryTrace__NavigationOverLedges = 4,
	};


	// Enum /Script/AIModule.EEnvTraceShape
	enum EEnvTraceShape
	{
		EEnvTraceShape__Line = 0,
		EEnvTraceShape__Box = 1,
		EEnvTraceShape__Sphere = 2,
		EEnvTraceShape__Capsule = 3,
	};


	// Enum /Script/AIModule.EEnvOverlapShape
	enum EEnvOverlapShape
	{
		EEnvOverlapShape__Box = 0,
		EEnvOverlapShape__Sphere = 1,
		EEnvOverlapShape__Capsule = 2,
	};


	// Enum /Script/AIModule.EEnvDirection
	enum EEnvDirection
	{
		EEnvDirection__TwoPoints = 0,
		EEnvDirection__Rotation = 1,
	};


	// Enum /Script/AIModule.EEnvQueryTestClamping
	enum EEnvQueryTestClamping
	{
		EEnvQueryTestClamping__None = 0,
		EEnvQueryTestClamping__SpecifiedValue = 1,
		EEnvQueryTestClamping__FilterThreshold = 2,
	};


	// Enum /Script/AIModule.ETeamAttitude
	enum ETeamAttitude
	{
		ETeamAttitude__Friendly = 0,
		ETeamAttitude__Neutral = 1,
		ETeamAttitude__Hostile = 2,
	};


	// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
	enum EPawnSubActionTriggeringPolicy
	{
		EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
		EPawnSubActionTriggeringPolicy__ReuseInstances = 1,
	};


	// Enum /Script/AIModule.EPawnActionFailHandling
	enum EPawnActionFailHandling
	{
		EPawnActionFailHandling__RequireSuccess = 0,
		EPawnActionFailHandling__IgnoreFailure = 1,
	};


	// Enum /Script/AIModule.EPawnActionMoveMode
	enum EPawnActionMoveMode
	{
		EPawnActionMoveMode__UsePathfinding = 0,
		EPawnActionMoveMode__StraightLine = 1,
	};


	// Enum /Script/AIModule.EBTNodeResult
	enum EBTNodeResult
	{
		EBTNodeResult__Succeeded = 0,
		EBTNodeResult__Failed = 1,
		EBTNodeResult__Aborted = 2,
		EBTNodeResult__InProgress = 3,
	};


	// Enum /Script/AIModule.EBTFlowAbortMode
	enum EBTFlowAbortMode
	{
		EBTFlowAbortMode__None = 0,
		EBTFlowAbortMode__LowerPriority = 1,
		EBTFlowAbortMode__Self = 2,
		EBTFlowAbortMode__Both = 3,
	};


	// Enum /Script/AIModule.EBTChildIndex
	enum EBTChildIndex
	{
		EBTChildIndex__FirstNode = 0,
		EBTChildIndex__TaskNode = 1,
	};


	// Enum /Script/AIModule.EBTDecoratorLogic
	enum EBTDecoratorLogic
	{
		EBTDecoratorLogic__Invalid = 0,
		EBTDecoratorLogic__Test = 1,
		EBTDecoratorLogic__And = 2,
		EBTDecoratorLogic__Or = 3,
		EBTDecoratorLogic__Not = 4,
	};


	// Enum /Script/AIModule.EBTParallelMode
	enum EBTParallelMode
	{
		EBTParallelMode__AbortBackground = 0,
		EBTParallelMode__WaitForBackground = 1,
	};


	// Enum /Script/AIModule.EBTBlackboardRestart
	enum EBTBlackboardRestart
	{
		EBTBlackboardRestart__ValueChange = 0,
		EBTBlackboardRestart__ResultChange = 1,
	};


	// Enum /Script/AIModule.EBlackBoardEntryComparison
	enum EBlackBoardEntryComparison
	{
		EBlackBoardEntryComparison__Equal = 0,
		EBlackBoardEntryComparison__NotEqual = 1,
	};


	// Enum /Script/AIModule.EPathExistanceQueryType
	enum EPathExistanceQueryType
	{
		EPathExistanceQueryType__NavmeshRaycast2D = 0,
		EPathExistanceQueryType__HierarchicalQuery = 1,
		EPathExistanceQueryType__RegularPathFinding = 2,
	};


	// Enum /Script/AIModule.EEQSNormalizationType
	enum EEQSNormalizationType
	{
		EEQSNormalizationType__Absolute = 0,
		EEQSNormalizationType__RelativeToScores = 1,
	};


	// Enum /Script/AIModule.EEnvQueryHightlightMode
	enum EEnvQueryHightlightMode
	{
		EEnvQueryHightlightMode__All = 0,
		EEnvQueryHightlightMode__Best5Pct = 1,
		EEnvQueryHightlightMode__Best25Pct = 2,
	};


	// Enum /Script/AIModule.EPointOnCircleSpacingMethod
	enum EPointOnCircleSpacingMethod
	{
		EPointOnCircleSpacingMethod__BySpaceBetween = 0,
		EPointOnCircleSpacingMethod__ByNumberOfPoints = 1,
	};


	// Enum /Script/AIModule.EEnvTestDistance
	enum EEnvTestDistance
	{
		EEnvTestDistance__Distance3D = 0,
		EEnvTestDistance__Distance2D = 1,
		EEnvTestDistance__DistanceZ = 2,
		EEnvTestDistance__DistanceAbsoluteZ = 3,
	};


	// Enum /Script/AIModule.EEnvTestDot
	enum EEnvTestDot
	{
		EEnvTestDot__Dot3D = 0,
		EEnvTestDot__Dot2D = 1,
	};


	// Enum /Script/AIModule.EEnvTestPathfinding
	enum EEnvTestPathfinding
	{
		EEnvTestPathfinding__PathExist = 0,
		EEnvTestPathfinding__PathCost = 1,
		EEnvTestPathfinding__PathLength = 2,
	};


	// Enum /Script/AIModule.EPathFollowingStatus
	enum EPathFollowingStatus
	{
		EPathFollowingStatus__Idle = 0,
		EPathFollowingStatus__Waiting = 1,
		EPathFollowingStatus__Paused = 2,
		EPathFollowingStatus__Moving = 3,
	};


	// Enum /Script/AIModule.EPathFollowingAction
	enum EPathFollowingAction
	{
		EPathFollowingAction__Error = 0,
		EPathFollowingAction__NoMove = 1,
		EPathFollowingAction__DirectMove = 2,
		EPathFollowingAction__PartialPath = 3,
		EPathFollowingAction__PathToGoal = 4,
	};


	// Enum /Script/AIModule.EPathFollowingRequestResult
	enum EPathFollowingRequestResult
	{
		EPathFollowingRequestResult__Failed = 0,
		EPathFollowingRequestResult__AlreadyAtGoal = 1,
		EPathFollowingRequestResult__RequestSuccessful = 2,
	};


	// Enum /Script/AIModule.EAISenseNotifyType
	enum EAISenseNotifyType
	{
		EAISenseNotifyType__OnEveryPerception = 0,
		EAISenseNotifyType__OnPerceptionChange = 1,
	};


	// Enum /Script/AIModule.EAITaskPriority
	enum EAITaskPriority
	{
		EAITaskPriority__Lowest = 0,
		EAITaskPriority__Low = 40,
		EAITaskPriority__AutonomousAI = 7F,
		EAITaskPriority__High = C0,
		EAITaskPriority__Ultimate = FE,
	};

}
