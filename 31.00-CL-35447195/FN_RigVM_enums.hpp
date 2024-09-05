#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RigVM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/RigVM.ERigVMPinDirection
	enum ERigVMPinDirection
	{
		ERigVMPinDirection__Input = 0,
		ERigVMPinDirection__Output = 1,
		ERigVMPinDirection__IO = 2,
		ERigVMPinDirection__Visible = 3,
		ERigVMPinDirection__Hidden = 4,
		ERigVMPinDirection__Invalid = 5,
	};


	// Enum /Script/RigVM.ERigVMFunctionArgumentDirection
	enum ERigVMFunctionArgumentDirection
	{
		ERigVMFunctionArgumentDirection__Input = 0,
		ERigVMFunctionArgumentDirection__Output = 1,
		ERigVMFunctionArgumentDirection__Invalid = 2,
	};


	// Enum /Script/RigVM.ERigVMTransformSpace
	enum ERigVMTransformSpace
	{
		ERigVMTransformSpace__LocalSpace = 0,
		ERigVMTransformSpace__GlobalSpace = 1,
		ERigVMTransformSpace__Max = 2,
	};


	// Enum /Script/RigVM.ERigVMClampSpatialMode
	enum ERigVMClampSpatialMode
	{
		ERigVMClampSpatialMode__Plane = 0,
		ERigVMClampSpatialMode__Cylinder = 1,
		ERigVMClampSpatialMode__Sphere = 2,
		ERigVMClampSpatialMode__Capsule = 3,
	};


	// Enum /Script/RigVM.ERigVMParameterType
	enum ERigVMParameterType
	{
		ERigVMParameterType__Input = 0,
		ERigVMParameterType__Output = 1,
		ERigVMParameterType__Invalid = 2,
	};


	// Enum /Script/RigVM.ERigVMOpCode
	enum ERigVMOpCode
	{
		ERigVMOpCode__Execute_0_Operands = 0,
		ERigVMOpCode__Execute_1_Operands = 1,
		ERigVMOpCode__Execute_2_Operands = 2,
		ERigVMOpCode__Execute_3_Operands = 3,
		ERigVMOpCode__Execute_4_Operands = 4,
		ERigVMOpCode__Execute_5_Operands = 5,
		ERigVMOpCode__Execute_6_Operands = 6,
		ERigVMOpCode__Execute_7_Operands = 7,
		ERigVMOpCode__Execute_8_Operands = 8,
		ERigVMOpCode__Execute_9_Operands = 9,
		ERigVMOpCode__Execute_10_Operands = A,
		ERigVMOpCode__Execute_11_Operands = B,
		ERigVMOpCode__Execute_12_Operands = C,
		ERigVMOpCode__Execute_13_Operands = D,
		ERigVMOpCode__Execute_14_Operands = E,
		ERigVMOpCode__Execute_15_Operands = F,
		ERigVMOpCode__Execute_16_Operands = 10,
		ERigVMOpCode__Execute_17_Operands = 11,
		ERigVMOpCode__Execute_18_Operands = 12,
		ERigVMOpCode__Execute_19_Operands = 13,
		ERigVMOpCode__Execute_20_Operands = 14,
		ERigVMOpCode__Execute_21_Operands = 15,
		ERigVMOpCode__Execute_22_Operands = 16,
		ERigVMOpCode__Execute_23_Operands = 17,
		ERigVMOpCode__Execute_24_Operands = 18,
		ERigVMOpCode__Execute_25_Operands = 19,
		ERigVMOpCode__Execute_26_Operands = 1A,
		ERigVMOpCode__Execute_27_Operands = 1B,
		ERigVMOpCode__Execute_28_Operands = 1C,
		ERigVMOpCode__Execute_29_Operands = 1D,
		ERigVMOpCode__Execute_30_Operands = 1E,
		ERigVMOpCode__Execute_31_Operands = 1F,
		ERigVMOpCode__Execute_32_Operands = 20,
		ERigVMOpCode__Execute_33_Operands = 21,
		ERigVMOpCode__Execute_34_Operands = 22,
		ERigVMOpCode__Execute_35_Operands = 23,
		ERigVMOpCode__Execute_36_Operands = 24,
		ERigVMOpCode__Execute_37_Operands = 25,
		ERigVMOpCode__Execute_38_Operands = 26,
		ERigVMOpCode__Execute_39_Operands = 27,
		ERigVMOpCode__Execute_40_Operands = 28,
		ERigVMOpCode__Execute_41_Operands = 29,
		ERigVMOpCode__Execute_42_Operands = 2A,
		ERigVMOpCode__Execute_43_Operands = 2B,
		ERigVMOpCode__Execute_44_Operands = 2C,
		ERigVMOpCode__Execute_45_Operands = 2D,
		ERigVMOpCode__Execute_46_Operands = 2E,
		ERigVMOpCode__Execute_47_Operands = 2F,
		ERigVMOpCode__Execute_48_Operands = 30,
		ERigVMOpCode__Execute_49_Operands = 31,
		ERigVMOpCode__Execute_50_Operands = 32,
		ERigVMOpCode__Execute_51_Operands = 33,
		ERigVMOpCode__Execute_52_Operands = 34,
		ERigVMOpCode__Execute_53_Operands = 35,
		ERigVMOpCode__Execute_54_Operands = 36,
		ERigVMOpCode__Execute_55_Operands = 37,
		ERigVMOpCode__Execute_56_Operands = 38,
		ERigVMOpCode__Execute_57_Operands = 39,
		ERigVMOpCode__Execute_58_Operands = 3A,
		ERigVMOpCode__Execute_59_Operands = 3B,
		ERigVMOpCode__Execute_60_Operands = 3C,
		ERigVMOpCode__Execute_61_Operands = 3D,
		ERigVMOpCode__Execute_62_Operands = 3E,
		ERigVMOpCode__Execute_63_Operands = 3F,
		ERigVMOpCode__Execute_64_Operands = 40,
		ERigVMOpCode__Zero = 41,
		ERigVMOpCode__BoolFalse = 42,
		ERigVMOpCode__BoolTrue = 43,
		ERigVMOpCode__Copy = 44,
		ERigVMOpCode__Increment = 45,
		ERigVMOpCode__Decrement = 46,
		ERigVMOpCode__Equals = 47,
		ERigVMOpCode__NotEquals = 48,
		ERigVMOpCode__JumpAbsolute = 49,
		ERigVMOpCode__JumpForward = 4A,
		ERigVMOpCode__JumpBackward = 4B,
		ERigVMOpCode__JumpAbsoluteIf = 4C,
		ERigVMOpCode__JumpForwardIf = 4D,
		ERigVMOpCode__JumpBackwardIf = 4E,
		ERigVMOpCode__ChangeType = 4F,
		ERigVMOpCode__Exit = 50,
		ERigVMOpCode__BeginBlock = 51,
		ERigVMOpCode__EndBlock = 52,
		ERigVMOpCode__ArrayReset = 53,
		ERigVMOpCode__ArrayGetNum = 54,
		ERigVMOpCode__ArraySetNum = 55,
		ERigVMOpCode__ArrayGetAtIndex = 56,
		ERigVMOpCode__ArraySetAtIndex = 57,
		ERigVMOpCode__ArrayAdd = 58,
		ERigVMOpCode__ArrayInsert = 59,
		ERigVMOpCode__ArrayRemove = 5A,
		ERigVMOpCode__ArrayFind = 5B,
		ERigVMOpCode__ArrayAppend = 5C,
		ERigVMOpCode__ArrayClone = 5D,
		ERigVMOpCode__ArrayIterator = 5E,
		ERigVMOpCode__ArrayUnion = 5F,
		ERigVMOpCode__ArrayDifference = 60,
		ERigVMOpCode__ArrayIntersection = 61,
		ERigVMOpCode__ArrayReverse = 62,
		ERigVMOpCode__InvokeEntry = 63,
		ERigVMOpCode__JumpToBranch = 64,
		ERigVMOpCode__Execute = 65,
		ERigVMOpCode__RunInstructions = 66,
		ERigVMOpCode__SetupTraits = 67,
		ERigVMOpCode__Invalid = 68,
		ERigVMOpCode__FirstArrayOpCode = 53,
		ERigVMOpCode__LastArrayOpCode = 62,
	};


	// Enum /Script/RigVM.ERigVMCopyType
	enum ERigVMCopyType
	{
		ERigVMCopyType__Default = 0,
		ERigVMCopyType__FloatToDouble = 1,
		ERigVMCopyType__DoubleToFloat = 2,
	};


	// Enum /Script/RigVM.ERigVMBreakpointAction
	enum ERigVMBreakpointAction
	{
		ERigVMBreakpointAction__None = 0,
		ERigVMBreakpointAction__Resume = 1,
		ERigVMBreakpointAction__StepOver = 2,
		ERigVMBreakpointAction__StepInto = 3,
		ERigVMBreakpointAction__StepOut = 4,
		ERigVMBreakpointAction__Max = 5,
	};


	// Enum /Script/RigVM.ERigVMDrawSettings
	enum ERigVMDrawSettings
	{
		ERigVMDrawSettings__Points = 0,
		ERigVMDrawSettings__Lines = 1,
		ERigVMDrawSettings__LineStrip = 2,
		ERigVMDrawSettings__DynamicMesh = 3,
	};


	// Enum /Script/RigVM.ERigVMMemoryType
	enum ERigVMMemoryType
	{
		ERigVMMemoryType__Work = 0,
		ERigVMMemoryType__Literal = 1,
		ERigVMMemoryType__External = 2,
		ERigVMMemoryType__Debug = 3,
		ERigVMMemoryType__Invalid = 4,
	};


	// Enum /Script/RigVM.ERigVMRegisterType
	enum ERigVMRegisterType
	{
		ERigVMRegisterType__Plain = 0,
		ERigVMRegisterType__String = 1,
		ERigVMRegisterType__Name = 2,
		ERigVMRegisterType__Struct = 3,
		ERigVMRegisterType__Invalid = 4,
	};


	// Enum /Script/RigVM.ERigVMUserWorkflowType
	enum ERigVMUserWorkflowType
	{
		ERigVMUserWorkflowType__Invalid = 0,
		ERigVMUserWorkflowType__NodeContext = 1,
		ERigVMUserWorkflowType__PinContext = 2,
		ERigVMUserWorkflowType__OnPinDefaultChanged = 4,
		ERigVMUserWorkflowType__All = 7,
	};


	// Enum /Script/RigVM.ERigUnitDebugPointMode
	enum ERigUnitDebugPointMode
	{
		ERigUnitDebugPointMode__Point = 0,
		ERigUnitDebugPointMode__Vector = 1,
		ERigUnitDebugPointMode__Max = 2,
	};


	// Enum /Script/RigVM.ERigUnitDebugTransformMode
	enum ERigUnitDebugTransformMode
	{
		ERigUnitDebugTransformMode__Point = 0,
		ERigUnitDebugTransformMode__Axes = 1,
		ERigUnitDebugTransformMode__Box = 2,
		ERigUnitDebugTransformMode__Max = 3,
	};


	// Enum /Script/RigVM.ERigUnitVisualDebugPointMode
	enum ERigUnitVisualDebugPointMode
	{
		ERigUnitVisualDebugPointMode__Point = 0,
		ERigUnitVisualDebugPointMode__Vector = 1,
		ERigUnitVisualDebugPointMode__Max = 2,
	};


	// Enum /Script/RigVM.ERBFKernelType
	enum ERBFKernelType
	{
		ERBFKernelType__Gaussian = 0,
		ERBFKernelType__Exponential = 1,
		ERBFKernelType__Linear = 2,
		ERBFKernelType__Cubic = 3,
		ERBFKernelType__Quintic = 4,
	};


	// Enum /Script/RigVM.ERBFQuatDistanceType
	enum ERBFQuatDistanceType
	{
		ERBFQuatDistanceType__Euclidean = 0,
		ERBFQuatDistanceType__ArcLength = 1,
		ERBFQuatDistanceType__SwingAngle = 2,
		ERBFQuatDistanceType__TwistAngle = 3,
	};


	// Enum /Script/RigVM.ERBFVectorDistanceType
	enum ERBFVectorDistanceType
	{
		ERBFVectorDistanceType__Euclidean = 0,
		ERBFVectorDistanceType__Manhattan = 1,
		ERBFVectorDistanceType__ArcLength = 2,
	};


	// Enum /Script/RigVM.ERigVMAnimEasingType
	enum ERigVMAnimEasingType
	{
		ERigVMAnimEasingType__Linear = 0,
		ERigVMAnimEasingType__QuadraticEaseIn = 1,
		ERigVMAnimEasingType__QuadraticEaseOut = 2,
		ERigVMAnimEasingType__QuadraticEaseInOut = 3,
		ERigVMAnimEasingType__CubicEaseIn = 4,
		ERigVMAnimEasingType__CubicEaseOut = 5,
		ERigVMAnimEasingType__CubicEaseInOut = 6,
		ERigVMAnimEasingType__QuarticEaseIn = 7,
		ERigVMAnimEasingType__QuarticEaseOut = 8,
		ERigVMAnimEasingType__QuarticEaseInOut = 9,
		ERigVMAnimEasingType__QuinticEaseIn = A,
		ERigVMAnimEasingType__QuinticEaseOut = B,
		ERigVMAnimEasingType__QuinticEaseInOut = C,
		ERigVMAnimEasingType__SineEaseIn = D,
		ERigVMAnimEasingType__SineEaseOut = E,
		ERigVMAnimEasingType__SineEaseInOut = F,
		ERigVMAnimEasingType__CircularEaseIn = 10,
		ERigVMAnimEasingType__CircularEaseOut = 11,
		ERigVMAnimEasingType__CircularEaseInOut = 12,
		ERigVMAnimEasingType__ExponentialEaseIn = 13,
		ERigVMAnimEasingType__ExponentialEaseOut = 14,
		ERigVMAnimEasingType__ExponentialEaseInOut = 15,
		ERigVMAnimEasingType__ElasticEaseIn = 16,
		ERigVMAnimEasingType__ElasticEaseOut = 17,
		ERigVMAnimEasingType__ElasticEaseInOut = 18,
		ERigVMAnimEasingType__BackEaseIn = 19,
		ERigVMAnimEasingType__BackEaseOut = 1A,
		ERigVMAnimEasingType__BackEaseInOut = 1B,
		ERigVMAnimEasingType__BounceEaseIn = 1C,
		ERigVMAnimEasingType__BounceEaseOut = 1D,
		ERigVMAnimEasingType__BounceEaseInOut = 1E,
	};


	// Enum /Script/RigVM.ERigVMSimPointIntegrateType
	enum ERigVMSimPointIntegrateType
	{
		ERigVMSimPointIntegrateType__Verlet = 0,
		ERigVMSimPointIntegrateType__SemiExplicitEuler = 1,
	};

}
