#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PBIK
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct PBIK.PBIKBoneSetting
	// Size: 0x50 (0x50 - 0x0)
	struct FPBIKBoneSetting	
	{
	public:
		FName bone; // 0x0(0x4)
		float RotationStiffness; // 0x4(0x4)
		float PositionStiffness; // 0x8(0x4)
		EPBIKLimitType X; // 0xC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float MinX; // 0x10(0x4)
		float MaxX; // 0x14(0x4)
		EPBIKLimitType Y; // 0x18(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float MinY; // 0x1C(0x4)
		float MaxY; // 0x20(0x4)
		EPBIKLimitType Z; // 0x24(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		float MinZ; // 0x28(0x4)
		float MaxZ; // 0x2C(0x4)
		bool bUsePreferredAngles; // 0x30(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FVector PreferredAngles; // 0x38(0x18)
	};


	// Struct PBIK.RootPrePullSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FRootPrePullSettings	
	{
	public:
		float RotationAlpha; // 0x0(0x4)
		float RotationAlphaX; // 0x4(0x4)
		float RotationAlphaY; // 0x8(0x4)
		float RotationAlphaZ; // 0xC(0x4)
		float PositionAlpha; // 0x10(0x4)
		float PositionAlphaX; // 0x14(0x4)
		float PositionAlphaY; // 0x18(0x4)
		float PositionAlphaZ; // 0x1C(0x4)
	};


	// Struct PBIK.PBIKSolverSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FPBIKSolverSettings	
	{
	public:
		int32_t Iterations; // 0x0(0x4)
		int32_t SubIterations; // 0x4(0x4)
		float MassMultiplier; // 0x8(0x4)
		bool bAllowStretch; // 0xC(0x1)
		EPBIKRootBehavior RootBehavior; // 0xD(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		FRootPrePullSettings PrePullRootSettings; // 0x10(0x20)
		float GlobalPullChainAlpha; // 0x30(0x4)
		float MaxAngle; // 0x34(0x4)
		float OverRelaxation; // 0x38(0x4)
		bool bStartSolveFromInputPose; // 0x3C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
	};


	// Struct PBIK.PBIKSolver
	// Size: 0x58 (0x58 - 0x0)
	struct FPBIKSolver	
	{
	public:
		unsigned char UnknownData01_2[0x58]; // 0x0(0x58) UNKNOWN PROPERTY
	};


	// Struct PBIK.PBIKDebug
	// Size: 0x8 (0x8 - 0x0)
	struct FPBIKDebug	
	{
	public:
		float DrawScale; // 0x0(0x4)
		bool bDrawDebug; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct PBIK.PBIKEffector
	// Size: 0x90 (0x90 - 0x0)
	struct FPBIKEffector	
	{
	public:
		FName bone; // 0x0(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		float PositionAlpha; // 0x70(0x4)
		float RotationAlpha; // 0x74(0x4)
		float StrengthAlpha; // 0x78(0x4)
		int32_t ChainDepth; // 0x7C(0x4)
		float PullChainAlpha; // 0x80(0x4)
		float PinRotation; // 0x84(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct PBIK.PBIKWorkData
	// Size: 0x80 (0x80 - 0x0)
	struct FPBIKWorkData	
	{
	public:
		bool bNeedsInit; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		uint32_t HashInitializedWith; // 0x4(0x4)
		TArray BoneSettingToSolverBoneIndex; // 0x8(0x10)
		TArray SolverBoneToElementIndex; // 0x18(0x10)
		FPBIKSolver Solver; // 0x28(0x58)
	};


	// Struct PBIK.RigUnit_PBIK
	// Inherited from FRigUnit_HighlevelBaseMutable -> FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0x110 (0x2D0 - 0x1C0)
	struct FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable	
	{
	public:
		FName Root; // 0x1C0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		TArray Effectors; // 0x1C8(0x10)
		TArray EffectorSolverIndices; // 0x1D8(0x10)
		TArray BoneSettings; // 0x1E8(0x10)
		TArray ExcludedBones; // 0x1F8(0x10)
		FPBIKSolverSettings Settings; // 0x208(0x40)
		FPBIKDebug Debug; // 0x248(0x8)
		FPBIKWorkData WorkData; // 0x250(0x80)
	};

}
