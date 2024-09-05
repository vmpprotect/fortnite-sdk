#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimGraphRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/AnimGraphRuntime.EBoneModificationMode
	enum EBoneModificationMode
	{
		BMM_Ignore = 0,
		BMM_Replace = 1,
		BMM_Additive = 2,
	};


	// Enum /Script/AnimGraphRuntime.ERefPoseType
	enum ERefPoseType
	{
		EIT_LocalSpace = 0,
		EIT_Additive = 1,
	};


	// Enum /Script/AnimGraphRuntime.EEasingFuncType
	enum EEasingFuncType
	{
		EEasingFuncType__Linear = 0,
		EEasingFuncType__Sinusoidal = 1,
		EEasingFuncType__Cubic = 2,
		EEasingFuncType__QuadraticInOut = 3,
		EEasingFuncType__CubicInOut = 4,
		EEasingFuncType__HermiteCubic = 5,
		EEasingFuncType__QuarticInOut = 6,
		EEasingFuncType__QuinticInOut = 7,
		EEasingFuncType__CircularIn = 8,
		EEasingFuncType__CircularOut = 9,
		EEasingFuncType__CircularInOut = A,
		EEasingFuncType__ExpIn = B,
		EEasingFuncType__ExpOut = C,
		EEasingFuncType__ExpInOut = D,
		EEasingFuncType__CustomCurve = E,
	};


	// Enum /Script/AnimGraphRuntime.ERotationComponent
	enum ERotationComponent
	{
		ERotationComponent__EulerX = 0,
		ERotationComponent__EulerY = 1,
		ERotationComponent__EulerZ = 2,
		ERotationComponent__QuaternionAngle = 3,
		ERotationComponent__SwingAngle = 4,
		ERotationComponent__TwistAngle = 5,
	};


	// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
	enum EBlendListTransitionType
	{
		EBlendListTransitionType__StandardBlend = 0,
		EBlendListTransitionType__Inertialization = 1,
	};


	// Enum /Script/AnimGraphRuntime.EAnimFunctionCallSite
	enum EAnimFunctionCallSite
	{
		EAnimFunctionCallSite__OnInitialize = 0,
		EAnimFunctionCallSite__OnUpdate = 1,
		EAnimFunctionCallSite__OnBecomeRelevant = 2,
		EAnimFunctionCallSite__OnEvaluate = 3,
		EAnimFunctionCallSite__OnInitializePostRecursion = 4,
		EAnimFunctionCallSite__OnUpdatePostRecursion = 5,
		EAnimFunctionCallSite__OnBecomeRelevantPostRecursion = 6,
		EAnimFunctionCallSite__OnEvaluatePostRecursion = 7,
		EAnimFunctionCallSite__OnStartedBlendingOut = 8,
		EAnimFunctionCallSite__OnStartedBlendingIn = 9,
		EAnimFunctionCallSite__OnFinishedBlendingOut = A,
		EAnimFunctionCallSite__OnFinishedBlendingIn = B,
	};


	// Enum /Script/AnimGraphRuntime.ELayeredBoneBlendMode
	enum ELayeredBoneBlendMode
	{
		ELayeredBoneBlendMode__BranchFilter = 0,
		ELayeredBoneBlendMode__BlendMask = 1,
	};


	// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
	enum EModifyCurveApplyMode
	{
		EModifyCurveApplyMode__Add = 0,
		EModifyCurveApplyMode__Scale = 1,
		EModifyCurveApplyMode__Blend = 2,
		EModifyCurveApplyMode__WeightedMovingAverage = 3,
		EModifyCurveApplyMode__RemapCurve = 4,
	};


	// Enum /Script/AnimGraphRuntime.EPoseDriverType
	enum EPoseDriverType
	{
		EPoseDriverType__SwingAndTwist = 0,
		EPoseDriverType__SwingOnly = 1,
		EPoseDriverType__Translation = 2,
	};


	// Enum /Script/AnimGraphRuntime.EPoseDriverSource
	enum EPoseDriverSource
	{
		EPoseDriverSource__Rotation = 0,
		EPoseDriverSource__Translation = 1,
	};


	// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
	enum EPoseDriverOutput
	{
		EPoseDriverOutput__DrivePoses = 0,
		EPoseDriverOutput__DriveCurves = 1,
	};


	// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
	enum ESnapshotSourceMode
	{
		ESnapshotSourceMode__NamedSnapshot = 0,
		ESnapshotSourceMode__SnapshotPin = 1,
	};


	// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
	enum ESequenceEvalReinit
	{
		ESequenceEvalReinit__NoReset = 0,
		ESequenceEvalReinit__StartPosition = 1,
		ESequenceEvalReinit__ExplicitTime = 2,
	};


	// Enum /Script/AnimGraphRuntime.ESwapRootBone
	enum ESwapRootBone
	{
		ESwapRootBone__SwapRootBone_Component = 0,
		ESwapRootBone__SwapRootBone_Actor = 1,
		ESwapRootBone__SwapRootBone_None = 2,
	};


	// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
	enum AnimPhysAngularConstraintType
	{
		AnimPhysAngularConstraintType__Angular = 0,
		AnimPhysAngularConstraintType__Cone = 1,
	};


	// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
	enum AnimPhysLinearConstraintType
	{
		AnimPhysLinearConstraintType__Free = 0,
		AnimPhysLinearConstraintType__Limited = 1,
	};


	// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
	enum AnimPhysSimSpaceType
	{
		AnimPhysSimSpaceType__Component = 0,
		AnimPhysSimSpaceType__Actor = 1,
		AnimPhysSimSpaceType__World = 2,
		AnimPhysSimSpaceType__RootRelative = 3,
		AnimPhysSimSpaceType__BoneRelative = 4,
	};


	// Enum /Script/AnimGraphRuntime.ESphericalLimitType
	enum ESphericalLimitType
	{
		ESphericalLimitType__Inner = 0,
		ESphericalLimitType__Outer = 1,
	};


	// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
	enum EDrivenBoneModificationMode
	{
		EDrivenBoneModificationMode__AddToInput = 0,
		EDrivenBoneModificationMode__ReplaceComponent = 1,
		EDrivenBoneModificationMode__AddToRefPose = 2,
	};


	// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
	enum EDrivenDestinationMode
	{
		EDrivenDestinationMode__Bone = 0,
		EDrivenDestinationMode__MorphTarget = 1,
		EDrivenDestinationMode__MaterialParameter = 2,
	};


	// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
	enum EConstraintOffsetOption
	{
		EConstraintOffsetOption__None = 0,
		EConstraintOffsetOption__Offset_RefPose = 1,
	};


	// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
	enum CopyBoneDeltaMode
	{
		CopyBoneDeltaMode__Accumulate = 0,
		CopyBoneDeltaMode__Copy = 1,
	};


	// Enum /Script/AnimGraphRuntime.EInterpolationBlend
	enum EInterpolationBlend
	{
		EInterpolationBlend__Linear = 0,
		EInterpolationBlend__Cubic = 1,
		EInterpolationBlend__Sinusoidal = 2,
		EInterpolationBlend__EaseInOutExponent2 = 3,
		EInterpolationBlend__EaseInOutExponent3 = 4,
		EInterpolationBlend__EaseInOutExponent4 = 5,
		EInterpolationBlend__EaseInOutExponent5 = 6,
	};


	// Enum /Script/AnimGraphRuntime.ESimulationSpace
	enum ESimulationSpace
	{
		ESimulationSpace__ComponentSpace = 0,
		ESimulationSpace__WorldSpace = 1,
		ESimulationSpace__BaseBoneSpace = 2,
	};


	// Enum /Script/AnimGraphRuntime.ESimulationTiming
	enum ESimulationTiming
	{
		ESimulationTiming__Default = 0,
		ESimulationTiming__Synchronous = 1,
		ESimulationTiming__Deferred = 2,
	};


	// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
	enum EScaleChainInitialLength
	{
		EScaleChainInitialLength__FixedDefaultLengthValue = 0,
		EScaleChainInitialLength__Distance = 1,
		EScaleChainInitialLength__ChainLength = 2,
	};


	// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
	enum ESplineBoneAxis
	{
		ESplineBoneAxis__None = 0,
		ESplineBoneAxis__X = 1,
		ESplineBoneAxis__Y = 2,
		ESplineBoneAxis__Z = 3,
	};


	// Enum /Script/AnimGraphRuntime.EWarpingEvaluationMode
	enum EWarpingEvaluationMode
	{
		EWarpingEvaluationMode__Manual = 0,
		EWarpingEvaluationMode__Graph = 1,
	};


	// Enum /Script/AnimGraphRuntime.EWarpingVectorMode
	enum EWarpingVectorMode
	{
		EWarpingVectorMode__ComponentSpaceVector = 0,
		EWarpingVectorMode__ActorSpaceVector = 1,
		EWarpingVectorMode__WorldSpaceVector = 2,
		EWarpingVectorMode__IKFootRootLocalSpaceVector = 3,
	};


	// Enum /Script/AnimGraphRuntime.ERBFSolverType
	enum ERBFSolverType
	{
		ERBFSolverType__Additive = 0,
		ERBFSolverType__Interpolative = 1,
	};


	// Enum /Script/AnimGraphRuntime.ERBFFunctionType
	enum ERBFFunctionType
	{
		ERBFFunctionType__Gaussian = 0,
		ERBFFunctionType__Exponential = 1,
		ERBFFunctionType__Linear = 2,
		ERBFFunctionType__Cubic = 3,
		ERBFFunctionType__Quintic = 4,
		ERBFFunctionType__DefaultFunction = 5,
	};


	// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
	enum ERBFDistanceMethod
	{
		ERBFDistanceMethod__Euclidean = 0,
		ERBFDistanceMethod__Quaternion = 1,
		ERBFDistanceMethod__SwingAngle = 2,
		ERBFDistanceMethod__TwistAngle = 3,
		ERBFDistanceMethod__DefaultMethod = 4,
	};


	// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
	enum ERBFNormalizeMethod
	{
		ERBFNormalizeMethod__OnlyNormalizeAboveOne = 0,
		ERBFNormalizeMethod__AlwaysNormalize = 1,
		ERBFNormalizeMethod__NormalizeWithinMedian = 2,
		ERBFNormalizeMethod__NoNormalization = 3,
	};

}
