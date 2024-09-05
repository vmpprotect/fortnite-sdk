#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ControlRigSpline
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ControlRigSpline.ControlRigSplineImpl
	// Size: 0x68 (0x68 - 0x0)
	struct FControlRigSplineImpl	
	{
	public:
		unsigned char UnknownData00_2[0x68]; // 0x0(0x68) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.ControlRigSpline
	// Size: 0x18 (0x18 - 0x0)
	struct FControlRigSpline	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_ControlRigSplineBase
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x0 (0x8 - 0x8)
	struct FRigUnit_ControlRigSplineBase : public FRigUnit	
	{
	public:
	};


	// Struct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
	// Inherited from FRigUnit_ControlRigSplineBase -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase	
	{
	public:
		TArray<FVector> Points; // 0x8(0x10)
		ESplineType SplineMode; // 0x18(0x1)
		bool bClosed; // 0x19(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		int32_t SamplesPerSegment; // 0x1C(0x4)
		float Compression; // 0x20(0x4)
		float Stretch; // 0x24(0x4)
		FControlRigSpline Spline; // 0x28(0x18)
	};


	// Struct ControlRigSpline.RigUnit_ControlRigSplineFromTransforms
	// Inherited from FRigUnit_ControlRigSplineBase -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_ControlRigSplineFromTransforms : public FRigUnit_ControlRigSplineBase	
	{
	public:
		TArray<FTransform> Transforms; // 0x8(0x10)
		ESplineType SplineMode; // 0x18(0x1)
		bool bClosed; // 0x19(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		int32_t SamplesPerSegment; // 0x1C(0x4)
		float Compression; // 0x20(0x4)
		float Stretch; // 0x24(0x4)
		FControlRigSpline Spline; // 0x28(0x18)
	};


	// Struct ControlRigSpline.RigUnit_SetSplinePoints
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetSplinePoints : public FRigUnitMutable	
	{
	public:
		TArray<FVector> Points; // 0x1C0(0x10)
		FControlRigSpline Spline; // 0x1D0(0x18)
		unsigned char UnknownData00_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_SetSplineTransforms
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_SetSplineTransforms : public FRigUnitMutable	
	{
	public:
		TArray<FTransform> Transforms; // 0x1C0(0x10)
		FControlRigSpline Spline; // 0x1D0(0x18)
		unsigned char UnknownData00_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_PositionFromControlRigSpline
	// Inherited from FRigUnit_ControlRigSplineBase -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase	
	{
	public:
		FControlRigSpline Spline; // 0x8(0x18)
		float U; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector Position; // 0x28(0x18)
	};


	// Struct ControlRigSpline.RigUnit_TransformFromControlRigSpline
	// Inherited from FRigUnit_ControlRigSplineBase -> FRigUnit -> FRigVMStruct
	// Size: 0x98 (0xA0 - 0x8)
	struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase	
	{
	public:
		FControlRigSpline Spline; // 0x8(0x18)
		FVector UpVector; // 0x20(0x18)
		float Roll; // 0x38(0x4)
		float U; // 0x3C(0x4)
		FTransform Transform; // 0x40(0x60)
	};


	// Struct ControlRigSpline.RigUnit_TransformFromControlRigSpline2
	// Inherited from FRigUnit_ControlRigSplineBase -> FRigUnit -> FRigVMStruct
	// Size: 0xB8 (0xC0 - 0x8)
	struct FRigUnit_TransformFromControlRigSpline2 : public FRigUnit_ControlRigSplineBase	
	{
	public:
		FControlRigSpline Spline; // 0x8(0x18)
		float U; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector PrimaryAxis; // 0x28(0x18)
		FVector SecondaryAxis; // 0x40(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x60(0x60)
	};


	// Struct ControlRigSpline.RigUnit_TangentFromControlRigSpline
	// Inherited from FRigUnit_ControlRigSplineBase -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase	
	{
	public:
		FControlRigSpline Spline; // 0x8(0x18)
		float U; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector Tangent; // 0x28(0x18)
	};


	// Struct ControlRigSpline.RigUnit_DrawControlRigSpline
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable	
	{
	public:
		FControlRigSpline Spline; // 0x1C0(0x18)
		FLinearColor Color; // 0x1D8(0x10)
		float Thickness; // 0x1E8(0x4)
		int32_t Detail; // 0x1EC(0x4)
	};


	// Struct ControlRigSpline.RigUnit_GetLengthControlRigSpline
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_GetLengthControlRigSpline : public FRigUnit	
	{
	public:
		FControlRigSpline Spline; // 0x8(0x18)
		float Length; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_GetLengthAtParamControlRigSpline
	// Inherited from FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_GetLengthAtParamControlRigSpline : public FRigUnit	
	{
	public:
		FControlRigSpline Spline; // 0x8(0x18)
		float U; // 0x20(0x4)
		float Length; // 0x24(0x4)
	};


	// Struct ControlRigSpline.RigUnit_FitChainToSplineCurve
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x1D0 (0x390 - 0x1C0)
	struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		FControlRigSpline Spline; // 0x1D0(0x18)
		EControlRigCurveAlignment Alignment; // 0x1E8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E9(0x3) UNKNOWN PROPERTY
		float Minimum; // 0x1EC(0x4)
		float Maximum; // 0x1F0(0x4)
		int32_t SamplingPrecision; // 0x1F4(0x4)
		FVector PrimaryAxis; // 0x1F8(0x18)
		FVector SecondaryAxis; // 0x210(0x18)
		FVector PoleVectorPosition; // 0x228(0x18)
		TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x240(0x10)
		ERigVMAnimEasingType RotationEaseType; // 0x250(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x251(0x3) UNKNOWN PROPERTY
		float Weight; // 0x254(0x4)
		bool bPropagateToChildren; // 0x258(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x259(0x7) UNKNOWN PROPERTY
		FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x260(0x90)
		FRigUnit_FitChainToCurve_WorkData WorkData; // 0x2F0(0x98)
		unsigned char UnknownData03_7[0x8]; // 0x388(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x1D0 (0x390 - 0x1C0)
	struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		FControlRigSpline Spline; // 0x1D0(0x18)
		EControlRigCurveAlignment Alignment; // 0x1E8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E9(0x3) UNKNOWN PROPERTY
		float Minimum; // 0x1EC(0x4)
		float Maximum; // 0x1F0(0x4)
		int32_t SamplingPrecision; // 0x1F4(0x4)
		FVector PrimaryAxis; // 0x1F8(0x18)
		FVector SecondaryAxis; // 0x210(0x18)
		FVector PoleVectorPosition; // 0x228(0x18)
		TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x240(0x10)
		ERigVMAnimEasingType RotationEaseType; // 0x250(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x251(0x3) UNKNOWN PROPERTY
		float Weight; // 0x254(0x4)
		bool bPropagateToChildren; // 0x258(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x259(0x7) UNKNOWN PROPERTY
		FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x260(0x90)
		FRigUnit_FitChainToCurve_WorkData WorkData; // 0x2F0(0x98)
		unsigned char UnknownData03_7[0x8]; // 0x388(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_SplineConstraint_WorkData
	// Size: 0x38 (0x38 - 0x0)
	struct FRigUnit_SplineConstraint_WorkData	
	{
	public:
		float ChainLength; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FTransform> ItemTransforms; // 0x8(0x10)
		TArray<float> ItemSegments; // 0x18(0x10)
		TArray<FCachedRigElement> CachedItems; // 0x28(0x10)
	};


	// Struct ControlRigSpline.RigUnit_SplineConstraint
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xB0 (0x270 - 0x1C0)
	struct FRigUnit_SplineConstraint : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		FControlRigSpline Spline; // 0x1D0(0x18)
		EControlRigCurveAlignment Alignment; // 0x1E8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1E9(0x3) UNKNOWN PROPERTY
		float Minimum; // 0x1EC(0x4)
		float Maximum; // 0x1F0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1F4(0x4) UNKNOWN PROPERTY
		FVector PrimaryAxis; // 0x1F8(0x18)
		FVector SecondaryAxis; // 0x210(0x18)
		bool bPropagateToChildren; // 0x228(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x229(0x7) UNKNOWN PROPERTY
		FRigUnit_SplineConstraint_WorkData WorkData; // 0x230(0x38)
		unsigned char UnknownData03_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_FitSplineCurveToChain
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKeyCollection Items; // 0x1C0(0x10)
		FControlRigSpline Spline; // 0x1D0(0x18)
		unsigned char UnknownData00_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x30 (0x1F0 - 0x1C0)
	struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		TArray<FRigElementKey> Items; // 0x1C0(0x10)
		FControlRigSpline Spline; // 0x1D0(0x18)
		unsigned char UnknownData00_7[0x8]; // 0x1E8(0x8) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
	// Inherited from FRigUnit_ControlRigSplineBase -> FRigUnit -> FRigVMStruct
	// Size: 0x38 (0x40 - 0x8)
	struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase	
	{
	public:
		FControlRigSpline Spline; // 0x8(0x18)
		FVector Position; // 0x20(0x18)
		float U; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct ControlRigSpline.RigUnit_ParameterAtPercentage
	// Inherited from FRigUnit_ControlRigSplineBase -> FRigUnit -> FRigVMStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase	
	{
	public:
		FControlRigSpline Spline; // 0x8(0x18)
		float Percentage; // 0x20(0x4)
		float U; // 0x24(0x4)
	};

}
