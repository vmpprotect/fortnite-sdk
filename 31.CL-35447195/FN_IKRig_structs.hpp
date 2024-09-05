#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: IKRig
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct IKRig.CurveRemapPair
	// Size: 0x8 (0x8 - 0x0)
	struct FCurveRemapPair	
	{
	public:
		FName SourceCurve; // 0x0(0x4)
		FName TargetCurve; // 0x4(0x4)
	};


	// Struct IKRig.RetargetProfile
	// Size: 0x100 (0x100 - 0x0)
	struct FRetargetProfile	
	{
	public:
		bool bApplyTargetRetargetPose; // 0x0(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName TargetRetargetPoseName; // 0x4(0x4)
		bool bApplySourceRetargetPose; // 0x8(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FName SourceRetargetPoseName; // 0xC(0x4)
		bool bApplyChainSettings; // 0x10(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TMap ChainSettings; // 0x18(0x50)
		bool bApplyRootSettings; // 0x68(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FTargetRootSettings RootSettings; // 0x70(0x68)
		bool bApplyGlobalSettings; // 0xD8(0x1)
		unsigned char UnknownData10_6[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
		FRetargetGlobalSettings GlobalSettings; // 0xDC(0x20)
		unsigned char UnknownData11_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
	};


	// Struct IKRig.RetargetGlobalSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FRetargetGlobalSettings	
	{
	public:
		bool bEnableRoot; // 0x0(0x1)
		bool bEnableFK; // 0x1(0x1)
		bool bEnableIK; // 0x2(0x1)
		bool bEnablePost; // 0x3(0x1)
		bool bWarping; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		EWarpingDirectionSource DirectionSource; // 0x8(0x4)
		EBasicAxis ForwardDirection; // 0xC(0x4)
		FName DirectionChain; // 0x10(0x4)
		float WarpForwards; // 0x14(0x4)
		float SidewaysOffset; // 0x18(0x4)
		float WarpSplay; // 0x1C(0x4)
	};


	// Struct IKRig.TargetRootSettings
	// Size: 0x68 (0x68 - 0x0)
	struct FTargetRootSettings	
	{
	public:
		float RotationAlpha; // 0x0(0x4)
		float TranslationAlpha; // 0x4(0x4)
		float BlendToSource; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector BlendToSourceWeights; // 0x10(0x18)
		float ScaleHorizontal; // 0x28(0x4)
		float ScaleVertical; // 0x2C(0x4)
		FVector TranslationOffset; // 0x30(0x18)
		FRotator RotationOffset; // 0x48(0x18)
		float AffectIKHorizontal; // 0x60(0x4)
		float AffectIKVertical; // 0x64(0x4)
	};


	// Struct IKRig.TargetChainSettings
	// Size: 0xB0 (0xB0 - 0x0)
	struct FTargetChainSettings	
	{
	public:
		FTargetChainFKSettings FK; // 0x0(0x1C)
		unsigned char UnknownData02_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FTargetChainIKSettings IK; // 0x20(0x78)
		FTargetChainSpeedPlantSettings SpeedPlanting; // 0x98(0x14)
		unsigned char UnknownData03_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
	};


	// Struct IKRig.TargetChainSpeedPlantSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FTargetChainSpeedPlantSettings	
	{
	public:
		bool EnableSpeedPlanting; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName SpeedCurveName; // 0x4(0x4)
		float SpeedThreshold; // 0x8(0x4)
		float UnplantStiffness; // 0xC(0x4)
		float UnplantCriticalDamping; // 0x10(0x4)
	};


	// Struct IKRig.TargetChainIKSettings
	// Size: 0x78 (0x78 - 0x0)
	struct FTargetChainIKSettings	
	{
	public:
		bool EnableIK; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float BlendToSource; // 0x4(0x4)
		FVector BlendToSourceWeights; // 0x8(0x18)
		FVector StaticOffset; // 0x20(0x18)
		FVector StaticLocalOffset; // 0x38(0x18)
		FRotator StaticRotationOffset; // 0x50(0x18)
		float ScaleVertical; // 0x68(0x4)
		float Extension; // 0x6C(0x4)
		bool bAffectedByIKWarping; // 0x70(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct IKRig.TargetChainFKSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FTargetChainFKSettings	
	{
	public:
		bool EnableFK; // 0x0(0x1)
		ERetargetRotationMode RotationMode; // 0x1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float RotationAlpha; // 0x4(0x4)
		ERetargetTranslationMode TranslationMode; // 0x8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float TranslationAlpha; // 0xC(0x4)
		float PoleVectorMatching; // 0x10(0x4)
		bool PoleVectorMaintainOffset; // 0x14(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float PoleVectorOffset; // 0x18(0x4)
	};


	// Struct IKRig.PinBoneData
	// Size: 0x70 (0x70 - 0x0)
	struct FPinBoneData	
	{
	public:
		FName BoneToPin; // 0x0(0x4)
		FName BoneToPinTo; // 0x4(0x4)
		unsigned char UnknownData01_7[0x68]; // 0x8(0x68) UNKNOWN PROPERTY
	};


	// Struct IKRig.AnimNode_IKRig
	// Inherited from FAnimNode_CustomProperty -> FAnimNode_Base
	// Size: 0x188 (0x1E0 - 0x58)
	struct FAnimNode_IKRig : public FAnimNode_CustomProperty	
	{
	public:
		FPoseLink Source; // 0x58(0x10)
		UIKRigDefinition RigDefinitionAsset; // 0x68(0x8)
		TArray Goals; // 0x70(0x10)
		bool bStartFromRefPose; // 0x80(0x1)
		EAnimAlphaInputType AlphaInputType; // 0x81(0x1)
		bool bAlphaBoolEnabled; // 0x82(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x83(0x1) UNKNOWN PROPERTY
		float Alpha; // 0x84(0x4)
		FInputScaleBias AlphaScaleBias; // 0x88(0x8)
		FInputAlphaBoolBlend AlphaBoolBlend; // 0x90(0x48)
		FName AlphaCurveName; // 0xD8(0x4)
		FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xDC(0x30)
		unsigned char UnknownData05_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		UIKRigProcessor IKRigProcessor; // 0x110(0x8)
		unsigned char UnknownData06_6[0xC0]; // 0x118(0xC0) UNKNOWN PROPERTY
		float ActualAlpha; // 0x1D8(0x4)
		unsigned char UnknownData07_7[0x4]; // 0x1DC(0x4) UNKNOWN PROPERTY
	};


	// Struct IKRig.IKRigGoal
	// Size: 0x90 (0x90 - 0x0)
	struct FIKRigGoal	
	{
	public:
		FName Name; // 0x0(0x4)
		EIKRigGoalTransformSource TransformSource; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FBoneReference SourceBone; // 0x8(0xC)
		unsigned char UnknownData04_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector Position; // 0x18(0x18)
		FRotator Rotation; // 0x30(0x18)
		float PositionAlpha; // 0x48(0x4)
		float RotationAlpha; // 0x4C(0x4)
		EIKRigGoalSpace PositionSpace; // 0x50(0x1)
		EIKRigGoalSpace RotationSpace; // 0x51(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		FVector FinalBlendedPosition; // 0x58(0x18)
		FQuat FinalBlendedRotation; // 0x70(0x20)
	};


	// Struct IKRig.AnimNode_RetargetPoseFromMesh
	// Inherited from FAnimNode_Base
	// Size: 0x1C8 (0x1D8 - 0x10)
	struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base	
	{
	public:
		TWeakObjectPtr SourceMeshComponent; // 0x10(0x8)
		bool bUseAttachedParent; // 0x18(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		UIKRetargeter IKRetargeterAsset; // 0x20(0x8)
		FRetargetProfile CustomRetargetProfile; // 0x28(0x100)
		bool bSuppressWarnings; // 0x128(0x1)
		bool bCopyCurves; // 0x129(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x12A(0x2) UNKNOWN PROPERTY
		int32_t LODThreshold; // 0x12C(0x4)
		int32_t LODThresholdForIK; // 0x130(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		UIKRetargetProcessor Processor; // 0x138(0x8)
		unsigned char UnknownData07_7[0x98]; // 0x140(0x98) UNKNOWN PROPERTY
	};


	// Struct IKRig.RetargetChainMap
	// Size: 0x8 (0x8 - 0x0)
	struct FRetargetChainMap	
	{
	public:
		FName SourceChain; // 0x0(0x4)
		FName TargetChain; // 0x4(0x4)
	};


	// Struct IKRig.IKRetargetPose
	// Size: 0x70 (0x70 - 0x0)
	struct FIKRetargetPose	
	{
	public:
		FVector RootTranslationOffset; // 0x0(0x18)
		TMap BoneRotationOffsets; // 0x18(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
	};


	// Struct IKRig.IKRigGoalContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FIKRigGoalContainer	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct IKRig.BoneChain
	// Size: 0x20 (0x20 - 0x0)
	struct FBoneChain	
	{
	public:
		FName ChainName; // 0x0(0x4)
		FBoneReference StartBone; // 0x4(0xC)
		FBoneReference EndBone; // 0x10(0xC)
		FName IKGoalName; // 0x1C(0x4)
	};


	// Struct IKRig.RetargetDefinition
	// Size: 0x18 (0x18 - 0x0)
	struct FRetargetDefinition	
	{
	public:
		FName RootBone; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray BoneChains; // 0x8(0x10)
	};


	// Struct IKRig.GoalBone
	// Size: 0xC (0xC - 0x0)
	struct FGoalBone	
	{
	public:
		unsigned char UnknownData01_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct IKRig.IKRigInputSkeleton
	// Size: 0x38 (0x38 - 0x0)
	struct FIKRigInputSkeleton	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct IKRig.IKRigSkeleton
	// Size: 0x70 (0x70 - 0x0)
	struct FIKRigSkeleton	
	{
	public:
		TArray BoneNames; // 0x0(0x10)
		TArray ParentIndices; // 0x10(0x10)
		TArray ExcludedBones; // 0x20(0x10)
		TArray CurrentPoseGlobal; // 0x30(0x10)
		TArray CurrentPoseLocal; // 0x40(0x10)
		TArray RefPoseGlobal; // 0x50(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY
	};


	// Struct IKRig.LimbSolverSettings
	// Size: 0x24 (0x24 - 0x0)
	struct FLimbSolverSettings	
	{
	public:
		float ReachPrecision; // 0x0(0x4)
		TEnumAsByte HingeRotationAxis; // 0x4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t MaxIterations; // 0x8(0x4)
		bool bEnableLimit; // 0xC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float MinRotationAngle; // 0x10(0x4)
		bool bAveragePull; // 0x14(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float PullDistribution; // 0x18(0x4)
		float ReachStepAlpha; // 0x1C(0x4)
		bool bEnableTwistCorrection; // 0x20(0x1)
		TEnumAsByte EndBoneForwardAxis; // 0x21(0x1)
		unsigned char UnknownData07_7[0x2]; // 0x22(0x2) UNKNOWN PROPERTY
	};


	// Struct IKRig.LimbLink
	// Size: 0x68 (0x68 - 0x0)
	struct FLimbLink	
	{
	public:
		unsigned char UnknownData01_2[0x68]; // 0x0(0x68) UNKNOWN PROPERTY
	};


	// Struct IKRig.LimbSolver
	// Size: 0x18 (0x18 - 0x0)
	struct FLimbSolver	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};

}
