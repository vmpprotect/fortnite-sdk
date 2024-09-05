#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FullBodyIK
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FullBodyIK.FBIKBoneLimit
	// Size: 0x20 (0x20 - 0x0)
	struct FFBIKBoneLimit	
	{
	public:
		EFBIKBoneLimitType LimitType_X; // 0x0(0x1)
		EFBIKBoneLimitType LimitType_Y; // 0x1(0x1)
		EFBIKBoneLimitType LimitType_Z; // 0x2(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FVector Limit; // 0x8(0x18)
	};


	// Struct FullBodyIK.FBIKConstraintOption
	// Size: 0xA0 (0xA0 - 0x0)
	struct FFBIKConstraintOption	
	{
	public:
		FRigElementKey Item; // 0x0(0x8)
		bool bEnabled; // 0x8(0x1)
		bool bUseStiffness; // 0x9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		FVector LinearStiffness; // 0x10(0x18)
		FVector AngularStiffness; // 0x28(0x18)
		bool bUseAngularLimit; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FFBIKBoneLimit AngularLimit; // 0x48(0x20)
		bool bUsePoleVector; // 0x68(0x1)
		EPoleVectorOption PoleVectorOption; // 0x69(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x6A(0x6) UNKNOWN PROPERTY
		FVector PoleVector; // 0x70(0x18)
		FRotator OffsetRotation; // 0x88(0x18)
	};


	// Struct FullBodyIK.MotionProcessInput
	// Size: 0x2 (0x2 - 0x0)
	struct FMotionProcessInput	
	{
	public:
		bool bForceEffectorRotationTarget; // 0x0(0x1)
		bool bOnlyApplyWhenReachedToTarget; // 0x1(0x1)
	};


	// Struct FullBodyIK.FBIKDebugOption
	// Size: 0x80 (0x80 - 0x0)
	struct FFBIKDebugOption	
	{
	public:
		bool bDrawDebugHierarchy; // 0x0(0x1)
		bool bColorAngularMotionStrength; // 0x1(0x1)
		bool bColorLinearMotionStrength; // 0x2(0x1)
		bool bDrawDebugAxes; // 0x3(0x1)
		bool bDrawDebugEffector; // 0x4(0x1)
		bool bDrawDebugConstraints; // 0x5(0x1)
		unsigned char UnknownData00_6[0xA]; // 0x6(0xA) UNKNOWN PROPERTY
		FTransform DrawWorldOffset; // 0x10(0x60)
		float DrawSize; // 0x70(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x74(0xC) UNKNOWN PROPERTY
	};


	// Struct FullBodyIK.SolverInput
	// Size: 0x24 (0x24 - 0x0)
	struct FSolverInput	
	{
	public:
		float LinearMotionStrength; // 0x0(0x4)
		float MinLinearMotionStrength; // 0x4(0x4)
		float AngularMotionStrength; // 0x8(0x4)
		float MinAngularMotionStrength; // 0xC(0x4)
		float DefaultTargetClamp; // 0x10(0x4)
		float Precision; // 0x14(0x4)
		float Damping; // 0x18(0x4)
		int32_t MaxIterations; // 0x1C(0x4)
		bool bUseJacobianTranspose; // 0x20(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
	};


	// Struct FullBodyIK.FBIKEndEffector
	// Size: 0x60 (0x60 - 0x0)
	struct FFBIKEndEffector	
	{
	public:
		FRigElementKey Item; // 0x0(0x8)
		FVector Position; // 0x8(0x18)
		float PositionAlpha; // 0x20(0x4)
		int32_t PositionDepth; // 0x24(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0x30(0x20)
		float RotationAlpha; // 0x50(0x4)
		int32_t RotationDepth; // 0x54(0x4)
		float Pull; // 0x58(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct FullBodyIK.RigUnit_FullbodyIK_WorkData
	// Size: 0x198 (0x198 - 0x0)
	struct FRigUnit_FullbodyIK_WorkData	
	{
	public:
		unsigned char UnknownData00_2[0x198]; // 0x0(0x198) UNKNOWN PROPERTY
	};


	// Struct FullBodyIK.RigUnit_FullbodyIK
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x270 (0x430 - 0x1C0)
	struct FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FRigElementKey Root; // 0x1C0(0x8)
		TArray<FFBIKEndEffector> Effectors; // 0x1C8(0x10)
		TArray<FFBIKConstraintOption> Constraints; // 0x1D8(0x10)
		FSolverInput SolverProperty; // 0x1E8(0x24)
		FMotionProcessInput MotionProperty; // 0x20C(0x2)
		bool bPropagateToChildren; // 0x20E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x20F(0x1) UNKNOWN PROPERTY
		FFBIKDebugOption DebugOption; // 0x210(0x80)
		FRigUnit_FullbodyIK_WorkData WorkData; // 0x290(0x198)
		unsigned char UnknownData01_7[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
	};

}
