#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StateTreeModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/StateTreeModule.EStateTreeBreakpointType
	enum EStateTreeBreakpointType
	{
		EStateTreeBreakpointType__Unset = 0,
		EStateTreeBreakpointType__OnEnter = 1,
		EStateTreeBreakpointType__OnExit = 2,
		EStateTreeBreakpointType__OnTransition = 3,
	};


	// Enum /Script/StateTreeModule.EStateTreeUpdatePhase
	enum EStateTreeUpdatePhase
	{
		EStateTreeUpdatePhase__Unset = 0,
		EStateTreeUpdatePhase__StartTree = 1,
		EStateTreeUpdatePhase__StopTree = 2,
		EStateTreeUpdatePhase__StartGlobalTasks = 3,
		EStateTreeUpdatePhase__StopGlobalTasks = 4,
		EStateTreeUpdatePhase__TickStateTree = 5,
		EStateTreeUpdatePhase__ApplyTransitions = 6,
		EStateTreeUpdatePhase__TriggerTransitions = 7,
		EStateTreeUpdatePhase__TickingGlobalTasks = 8,
		EStateTreeUpdatePhase__TickingTasks = 9,
		EStateTreeUpdatePhase__TransitionConditions = A,
		EStateTreeUpdatePhase__StateSelection = B,
		EStateTreeUpdatePhase__TrySelectBehavior = C,
		EStateTreeUpdatePhase__EnterConditions = D,
		EStateTreeUpdatePhase__EnterStates = E,
		EStateTreeUpdatePhase__ExitStates = F,
		EStateTreeUpdatePhase__StateCompleted = 10,
	};


	// Enum /Script/StateTreeModule.EStateTreeRunStatus
	enum EStateTreeRunStatus
	{
		EStateTreeRunStatus__Running = 0,
		EStateTreeRunStatus__Failed = 1,
		EStateTreeRunStatus__Succeeded = 2,
		EStateTreeRunStatus__Stopped = 3,
		EStateTreeRunStatus__Unset = 4,
	};


	// Enum /Script/StateTreeModule.EStateTreeStateChangeType
	enum EStateTreeStateChangeType
	{
		EStateTreeStateChangeType__None = 0,
		EStateTreeStateChangeType__Changed = 1,
		EStateTreeStateChangeType__Sustained = 2,
	};


	// Enum /Script/StateTreeModule.EStateTreeConditionEvaluationMode
	enum EStateTreeConditionEvaluationMode
	{
		EStateTreeConditionEvaluationMode__Evaluated = 0,
		EStateTreeConditionEvaluationMode__ForcedTrue = 1,
		EStateTreeConditionEvaluationMode__ForcedFalse = 2,
	};


	// Enum /Script/StateTreeModule.EStateTreeTransitionSourceType
	enum EStateTreeTransitionSourceType
	{
		EStateTreeTransitionSourceType__Unset = 0,
		EStateTreeTransitionSourceType__Asset = 1,
		EStateTreeTransitionSourceType__ExternalRequest = 2,
		EStateTreeTransitionSourceType__Internal = 3,
	};


	// Enum /Script/StateTreeModule.EStateTreeRecordTransitions
	enum EStateTreeRecordTransitions
	{
		EStateTreeRecordTransitions__No = 0,
		EStateTreeRecordTransitions__Yes = 1,
	};


	// Enum /Script/StateTreeModule.EStateTreeLinkerStatus
	enum EStateTreeLinkerStatus
	{
		EStateTreeLinkerStatus__Succeeded = 0,
		EStateTreeLinkerStatus__Failed = 1,
	};


	// Enum /Script/StateTreeModule.EStateTreeNodeFormatting
	enum EStateTreeNodeFormatting
	{
		RichText = 0,
		Text = 1,
	};


	// Enum /Script/StateTreeModule.EStateTreePropertyRefType
	enum EStateTreePropertyRefType
	{
		EStateTreePropertyRefType__None = 0,
		EStateTreePropertyRefType__Bool = 1,
		EStateTreePropertyRefType__Byte = 2,
		EStateTreePropertyRefType__Int32 = 3,
		EStateTreePropertyRefType__Int64 = 4,
		EStateTreePropertyRefType__Float = 5,
		EStateTreePropertyRefType__Double = 6,
		EStateTreePropertyRefType__Name = 7,
		EStateTreePropertyRefType__String = 8,
		EStateTreePropertyRefType__Text = 9,
		EStateTreePropertyRefType__Enum = A,
		EStateTreePropertyRefType__Struct = B,
		EStateTreePropertyRefType__Object = C,
		EStateTreePropertyRefType__SoftObject = D,
		EStateTreePropertyRefType__Class = E,
		EStateTreePropertyRefType__SoftClass = F,
	};


	// Enum /Script/StateTreeModule.EStateTreeTraceStatus
	enum EStateTreeTraceStatus
	{
		EStateTreeTraceStatus__TracesStarted = 0,
		EStateTreeTraceStatus__StoppingTrace = 1,
		EStateTreeTraceStatus__TracesStopped = 2,
	};


	// Enum /Script/StateTreeModule.EStateTreeTraceEventType
	enum EStateTreeTraceEventType
	{
		EStateTreeTraceEventType__Unset = 0,
		EStateTreeTraceEventType__OnEntering = 1,
		EStateTreeTraceEventType__OnEntered = 2,
		EStateTreeTraceEventType__OnExiting = 3,
		EStateTreeTraceEventType__OnExited = 4,
		EStateTreeTraceEventType__Push = 5,
		EStateTreeTraceEventType__Pop = 6,
		EStateTreeTraceEventType__OnStateSelected = 7,
		EStateTreeTraceEventType__OnStateCompleted = 8,
		EStateTreeTraceEventType__OnTicking = 9,
		EStateTreeTraceEventType__OnTaskCompleted = A,
		EStateTreeTraceEventType__OnTicked = B,
		EStateTreeTraceEventType__Passed = C,
		EStateTreeTraceEventType__Failed = D,
		EStateTreeTraceEventType__ForcedSuccess = E,
		EStateTreeTraceEventType__ForcedFailure = F,
		EStateTreeTraceEventType__InternalForcedFailure = 10,
		EStateTreeTraceEventType__OnEvaluating = 11,
		EStateTreeTraceEventType__OnTransition = 12,
		EStateTreeTraceEventType__OnTreeStarted = 13,
		EStateTreeTraceEventType__OnTreeStopped = 14,
	};


	// Enum /Script/StateTreeModule.EStateTreeBlueprintPropertyCategory
	enum EStateTreeBlueprintPropertyCategory
	{
		EStateTreeBlueprintPropertyCategory__NotSet = 0,
		EStateTreeBlueprintPropertyCategory__Input = 1,
		EStateTreeBlueprintPropertyCategory__Parameter = 2,
		EStateTreeBlueprintPropertyCategory__Output = 3,
		EStateTreeBlueprintPropertyCategory__ContextObject = 4,
	};


	// Enum /Script/StateTreeModule.EStateTreeLoopEvents
	enum EStateTreeLoopEvents
	{
		EStateTreeLoopEvents__Next = 0,
		EStateTreeLoopEvents__Break = 1,
		EStateTreeLoopEvents__Consume = 2,
	};


	// Enum /Script/StateTreeModule.EStateTreeBindableStructSource
	enum EStateTreeBindableStructSource
	{
		EStateTreeBindableStructSource__Context = 0,
		EStateTreeBindableStructSource__Parameter = 1,
		EStateTreeBindableStructSource__Evaluator = 2,
		EStateTreeBindableStructSource__GlobalTask = 3,
		EStateTreeBindableStructSource__StateParameter = 4,
		EStateTreeBindableStructSource__Task = 5,
		EStateTreeBindableStructSource__Condition = 6,
		EStateTreeBindableStructSource__Consideration = 7,
		EStateTreeBindableStructSource__TransitionEvent = 8,
		EStateTreeBindableStructSource__StateEvent = 9,
		EStateTreeBindableStructSource__PropertyFunction = A,
	};


	// Enum /Script/StateTreeModule.EStateTreePropertyAccessType
	enum EStateTreePropertyAccessType
	{
		EStateTreePropertyAccessType__Offset = 0,
		EStateTreePropertyAccessType__Object = 1,
		EStateTreePropertyAccessType__WeakObject = 2,
		EStateTreePropertyAccessType__SoftObject = 3,
		EStateTreePropertyAccessType__ObjectInstance = 4,
		EStateTreePropertyAccessType__StructInstance = 5,
		EStateTreePropertyAccessType__IndexArray = 6,
	};


	// Enum /Script/StateTreeModule.EStateTreePropertyCopyType
	enum EStateTreePropertyCopyType
	{
		EStateTreePropertyCopyType__None = 0,
		EStateTreePropertyCopyType__CopyPlain = 1,
		EStateTreePropertyCopyType__CopyComplex = 2,
		EStateTreePropertyCopyType__CopyBool = 3,
		EStateTreePropertyCopyType__CopyStruct = 4,
		EStateTreePropertyCopyType__CopyObject = 5,
		EStateTreePropertyCopyType__CopyName = 6,
		EStateTreePropertyCopyType__CopyFixedArray = 7,
		EStateTreePropertyCopyType__StructReference = 8,
		EStateTreePropertyCopyType__PromoteBoolToByte = 9,
		EStateTreePropertyCopyType__PromoteBoolToInt32 = A,
		EStateTreePropertyCopyType__PromoteBoolToUInt32 = B,
		EStateTreePropertyCopyType__PromoteBoolToInt64 = C,
		EStateTreePropertyCopyType__PromoteBoolToFloat = D,
		EStateTreePropertyCopyType__PromoteBoolToDouble = E,
		EStateTreePropertyCopyType__PromoteByteToInt32 = F,
		EStateTreePropertyCopyType__PromoteByteToUInt32 = 10,
		EStateTreePropertyCopyType__PromoteByteToInt64 = 11,
		EStateTreePropertyCopyType__PromoteByteToFloat = 12,
		EStateTreePropertyCopyType__PromoteByteToDouble = 13,
		EStateTreePropertyCopyType__PromoteInt32ToInt64 = 14,
		EStateTreePropertyCopyType__PromoteInt32ToFloat = 15,
		EStateTreePropertyCopyType__PromoteInt32ToDouble = 16,
		EStateTreePropertyCopyType__PromoteUInt32ToInt64 = 17,
		EStateTreePropertyCopyType__PromoteUInt32ToFloat = 18,
		EStateTreePropertyCopyType__PromoteUInt32ToDouble = 19,
		EStateTreePropertyCopyType__PromoteFloatToInt32 = 1A,
		EStateTreePropertyCopyType__PromoteFloatToInt64 = 1B,
		EStateTreePropertyCopyType__PromoteFloatToDouble = 1C,
		EStateTreePropertyCopyType__DemoteDoubleToInt32 = 1D,
		EStateTreePropertyCopyType__DemoteDoubleToInt64 = 1E,
		EStateTreePropertyCopyType__DemoteDoubleToFloat = 1F,
	};


	// Enum /Script/StateTreeModule.EStateTreeTransitionType
	enum EStateTreeTransitionType
	{
		EStateTreeTransitionType__None = 0,
		EStateTreeTransitionType__Succeeded = 1,
		EStateTreeTransitionType__Failed = 2,
		EStateTreeTransitionType__GotoState = 3,
		EStateTreeTransitionType__NextState = 4,
		EStateTreeTransitionType__NextSelectableState = 5,
		EStateTreeTransitionType__NotSet = 6,
	};


	// Enum /Script/StateTreeModule.EStateTreeExpressionOperand
	enum EStateTreeExpressionOperand
	{
		EStateTreeExpressionOperand__Copy = 0,
		EStateTreeExpressionOperand__And = 1,
		EStateTreeExpressionOperand__Or = 2,
	};


	// Enum /Script/StateTreeModule.EStateTreeStateType
	enum EStateTreeStateType
	{
		EStateTreeStateType__State = 0,
		EStateTreeStateType__Group = 1,
		EStateTreeStateType__Linked = 2,
		EStateTreeStateType__LinkedAsset = 3,
		EStateTreeStateType__Subtree = 4,
	};


	// Enum /Script/StateTreeModule.EStateTreeStateSelectionBehavior
	enum EStateTreeStateSelectionBehavior
	{
		EStateTreeStateSelectionBehavior__None = 0,
		EStateTreeStateSelectionBehavior__TryEnterState = 1,
		EStateTreeStateSelectionBehavior__TrySelectChildrenInOrder = 2,
		EStateTreeStateSelectionBehavior__TrySelectChildrenAtUniformRandom = 3,
		EStateTreeStateSelectionBehavior__TrySelectChildrenWithHighestUtility = 4,
		EStateTreeStateSelectionBehavior__TrySelectChildrenBasedOnRelativeUtility = 5,
		EStateTreeStateSelectionBehavior__TryFollowTransitions = 6,
	};


	// Enum /Script/StateTreeModule.EStateTreeTransitionTrigger
	enum EStateTreeTransitionTrigger
	{
		EStateTreeTransitionTrigger__None = 0,
		EStateTreeTransitionTrigger__OnStateCompleted = 3,
		EStateTreeTransitionTrigger__OnStateSucceeded = 1,
		EStateTreeTransitionTrigger__OnStateFailed = 2,
		EStateTreeTransitionTrigger__OnTick = 4,
		EStateTreeTransitionTrigger__OnEvent = 8,
	};


	// Enum /Script/StateTreeModule.EStateTreeTransitionPriority
	enum EStateTreeTransitionPriority
	{
		EStateTreeTransitionPriority__None = 0,
		EStateTreeTransitionPriority__Low = 1,
		EStateTreeTransitionPriority__Normal = 2,
		EStateTreeTransitionPriority__Medium = 3,
		EStateTreeTransitionPriority__High = 4,
		EStateTreeTransitionPriority__Critical = 5,
	};


	// Enum /Script/StateTreeModule.EStateTreeDataSourceType
	enum EStateTreeDataSourceType
	{
		EStateTreeDataSourceType__None = 0,
		EStateTreeDataSourceType__GlobalInstanceData = 1,
		EStateTreeDataSourceType__GlobalInstanceDataObject = 2,
		EStateTreeDataSourceType__ActiveInstanceData = 3,
		EStateTreeDataSourceType__ActiveInstanceDataObject = 4,
		EStateTreeDataSourceType__SharedInstanceData = 5,
		EStateTreeDataSourceType__SharedInstanceDataObject = 6,
		EStateTreeDataSourceType__ContextData = 7,
		EStateTreeDataSourceType__ExternalData = 8,
		EStateTreeDataSourceType__GlobalParameterData = 9,
		EStateTreeDataSourceType__SubtreeParameterData = A,
		EStateTreeDataSourceType__StateParameterData = B,
		EStateTreeDataSourceType__TransitionEvent = C,
		EStateTreeDataSourceType__StateEvent = D,
	};


	// Enum /Script/StateTreeModule.EStateTreeSelectionFallback
	enum EStateTreeSelectionFallback
	{
		EStateTreeSelectionFallback__None = 0,
		EStateTreeSelectionFallback__NextSelectableSibling = 1,
	};


	// Enum /Script/StateTreeModule.EStateTreeExternalDataRequirement
	enum EStateTreeExternalDataRequirement
	{
		EStateTreeExternalDataRequirement__Required = 0,
		EStateTreeExternalDataRequirement__Optional = 1,
	};


	// Enum /Script/StateTreeModule.EStateTreePropertyUsage
	enum EStateTreePropertyUsage
	{
		EStateTreePropertyUsage__Invalid = 0,
		EStateTreePropertyUsage__Context = 1,
		EStateTreePropertyUsage__Input = 2,
		EStateTreePropertyUsage__Parameter = 3,
		EStateTreePropertyUsage__Output = 4,
	};

}
