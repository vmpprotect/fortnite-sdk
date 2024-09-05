#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimGraphRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
	// Inherited from FAnimNode_Base
	// Size: 0x50 (0x60 - 0x10)
	struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base	
	{
	public:
		float X; // 0x10(0x4)
		float Y; // 0x14(0x4)
		FName GroupName; // 0x18(0x4)
		TEnumAsByte GroupRole; // 0x1C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		UBlendSpace BlendSpace; // 0x20(0x8)
		TArray SamplePoseLinks; // 0x28(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x38(0x28) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_BlendSpaceGraph
	// Inherited from FAnimNode_BlendSpaceGraphBase -> FAnimNode_Base
	// Size: 0x0 (0x60 - 0x60)
	struct FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
	// Inherited from FAnimNode_Root -> FAnimNode_Base
	// Size: 0x0 (0x20 - 0x20)
	struct FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_SkeletalControlBase
	// Inherited from FAnimNode_Base
	// Size: 0xB8 (0xC8 - 0x10)
	struct FAnimNode_SkeletalControlBase : public FAnimNode_Base	
	{
	public:
		FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
		int32_t LODThreshold; // 0x20(0x4)
		float ActualAlpha; // 0x24(0x4)
		EAnimAlphaInputType AlphaInputType; // 0x28(0x1)
		bool bAlphaBoolEnabled; // 0x29(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		float Alpha; // 0x2C(0x4)
		FInputScaleBias AlphaScaleBias; // 0x30(0x8)
		FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
		FName AlphaCurveName; // 0x80(0x4)
		FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x84(0x30)
		unsigned char UnknownData03_7[0x14]; // 0xB4(0x14) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_ModifyBone
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x60 (0x128 - 0xC8)
	struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference BoneToModify; // 0xC8(0xC)
		unsigned char UnknownData02_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FVector Translation; // 0xD8(0x18)
		FRotator Rotation; // 0xF0(0x18)
		FVector Scale; // 0x108(0x18)
		TEnumAsByte TranslationMode; // 0x120(0x1)
		TEnumAsByte RotationMode; // 0x121(0x1)
		TEnumAsByte ScaleMode; // 0x122(0x1)
		TEnumAsByte TranslationSpace; // 0x123(0x1)
		TEnumAsByte RotationSpace; // 0x124(0x1)
		TEnumAsByte ScaleSpace; // 0x125(0x1)
		unsigned char UnknownData03_7[0x2]; // 0x126(0x2) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_RefPose
	// Inherited from FAnimNode_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimNode_RefPose : public FAnimNode_Base	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
	// Inherited from FAnimNode_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base	
	{
	public:
	};


	// Struct AnimGraphRuntime.RigidBodyAnimNodeReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FRigidBodyAnimNodeReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_RotationMultiplier
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x20 (0xE8 - 0xC8)
	struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference TargetBone; // 0xC8(0xC)
		FBoneReference SourceBone; // 0xD4(0xC)
		float Multiplier; // 0xE0(0x4)
		TEnumAsByte RotationAxisToRefer; // 0xE4(0x1)
		bool bIsAdditive; // 0xE5(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xE6(0x2) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.BlendSpaceReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FBlendSpaceReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.RotationRetargetingInfo
	// Size: 0x1A0 (0x1A0 - 0x0)
	struct FRotationRetargetingInfo	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData06_6[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
		FTransform Source; // 0x10(0x60)
		FTransform Target; // 0x70(0x60)
		ERotationComponent RotationComponent; // 0xD0(0x1)
		unsigned char UnknownData07_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		FVector TwistAxis; // 0xD8(0x18)
		bool bUseAbsoluteAngle; // 0xF0(0x1)
		unsigned char UnknownData08_6[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		float SourceMinimum; // 0xF4(0x4)
		float SourceMaximum; // 0xF8(0x4)
		float TargetMinimum; // 0xFC(0x4)
		float TargetMaximum; // 0x100(0x4)
		EEasingFuncType EasingType; // 0x104(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x105(0x3) UNKNOWN PROPERTY
		FRuntimeFloatCurve CustomCurve; // 0x108(0x88)
		bool bFlipEasing; // 0x190(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x191(0x3) UNKNOWN PROPERTY
		float EasingWeight; // 0x194(0x4)
		bool bClamp; // 0x198(0x1)
		unsigned char UnknownData11_7[0x7]; // 0x199(0x7) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.PositionHistory
	// Size: 0x30 (0x30 - 0x0)
	struct FPositionHistory	
	{
	public:
		TArray Positions; // 0x0(0x10)
		float Range; // 0x10(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x14(0x1C) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimationStateResultReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimationStateResultReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimationStateMachineReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FAnimationStateMachineReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
	// Inherited from FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x30 (0x68 - 0x38)
	struct FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase	
	{
	public:
		unsigned char UnknownData01_3[0x28]; // 0x38(0x28) UNKNOWN PROPERTY
		UBlendSpace PreviousBlendSpace; // 0x60(0x8)
	};


	// Struct AnimGraphRuntime.AnimNode_BlendSpacePlayer
	// Inherited from FAnimNode_BlendSpacePlayerBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x8 (0x70 - 0x68)
	struct FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase	
	{
	public:
		UBlendSpace BlendSpace; // 0x68(0x8)
	};


	// Struct AnimGraphRuntime.AnimNode_AimOffsetLookAt
	// Inherited from FAnimNode_BlendSpacePlayer -> FAnimNode_BlendSpacePlayerBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x150 (0x1C0 - 0x70)
	struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer	
	{
	public:
		unsigned char UnknownData03_3[0xC0]; // 0x70(0xC0) UNKNOWN PROPERTY
		FPoseLink BasePose; // 0x130(0x10)
		int32_t LODThreshold; // 0x140(0x4)
		FName SourceSocketName; // 0x144(0x4)
		FName PivotSocketName; // 0x148(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		FVector LookAtLocation; // 0x150(0x18)
		FVector SocketAxis; // 0x168(0x18)
		float Alpha; // 0x180(0x4)
		unsigned char UnknownData05_7[0x3C]; // 0x184(0x3C) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_ApplyAdditive
	// Inherited from FAnimNode_Base
	// Size: 0xB8 (0xC8 - 0x10)
	struct FAnimNode_ApplyAdditive : public FAnimNode_Base	
	{
	public:
		FPoseLink base; // 0x10(0x10)
		FPoseLink Additive; // 0x20(0x10)
		float Alpha; // 0x30(0x4)
		FInputScaleBias AlphaScaleBias; // 0x34(0x8)
		int32_t LODThreshold; // 0x3C(0x4)
		FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
		FName AlphaCurveName; // 0x88(0x4)
		FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8C(0x30)
		unsigned char UnknownData02_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		EAnimAlphaInputType AlphaInputType; // 0xC0(0x1)
		bool bAlphaBoolEnabled; // 0xC1(0x1)
		unsigned char UnknownData03_7[0x6]; // 0xC2(0x6) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.BlendBoneByChannelEntry
	// Size: 0x1C (0x1C - 0x0)
	struct FBlendBoneByChannelEntry	
	{
	public:
		FBoneReference SourceBone; // 0x0(0xC)
		FBoneReference TargetBone; // 0xC(0xC)
		bool bBlendTranslation; // 0x18(0x1)
		bool bBlendRotation; // 0x19(0x1)
		bool bBlendScale; // 0x1A(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_BlendBoneByChannel
	// Inherited from FAnimNode_Base
	// Size: 0x58 (0x68 - 0x10)
	struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base	
	{
	public:
		FPoseLink A; // 0x10(0x10)
		FPoseLink B; // 0x20(0x10)
		TArray BoneDefinitions; // 0x30(0x10)
		unsigned char UnknownData03_6[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
		float Alpha; // 0x50(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FInputScaleBias AlphaScaleBias; // 0x58(0x8)
		TEnumAsByte TransformsSpace; // 0x60(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_BlendListBase
	// Inherited from FAnimNode_Base
	// Size: 0x38 (0x48 - 0x10)
	struct FAnimNode_BlendListBase : public FAnimNode_Base	
	{
	public:
		TArray BlendPose; // 0x10(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x20(0x28) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_BlendListByBool
	// Inherited from FAnimNode_BlendListBase -> FAnimNode_Base
	// Size: 0x0 (0x48 - 0x48)
	struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_BlendListByEnum
	// Inherited from FAnimNode_BlendListBase -> FAnimNode_Base
	// Size: 0x0 (0x48 - 0x48)
	struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_BlendListByInt
	// Inherited from FAnimNode_BlendListBase -> FAnimNode_Base
	// Size: 0x0 (0x48 - 0x48)
	struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
	// Inherited from FAnimNode_BlendSpacePlayer -> FAnimNode_BlendSpacePlayerBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x8 (0x78 - 0x70)
	struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer	
	{
	public:
		float NormalizedTime; // 0x70(0x4)
		bool bTeleportToNormalizedTime; // 0x74(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
	// Inherited from FAnimNode_BlendSpacePlayerBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x28 (0x90 - 0x68)
	struct FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase	
	{
	public:
		FName GroupName; // 0x68(0x4)
		TEnumAsByte GroupRole; // 0x6C(0x1)
		EAnimSyncMethod Method; // 0x6D(0x1)
		bool bIgnoreForRelevancyTest; // 0x6E(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x6F(0x1) UNKNOWN PROPERTY
		float X; // 0x70(0x4)
		float Y; // 0x74(0x4)
		float PlayRate; // 0x78(0x4)
		bool bLoop; // 0x7C(0x1)
		bool bResetPlayTimeWhenBlendSpaceChanges; // 0x7D(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x7E(0x2) UNKNOWN PROPERTY
		float StartPosition; // 0x80(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		UBlendSpace BlendSpace; // 0x88(0x8)
	};


	// Struct AnimGraphRuntime.AnimNode_CallFunction
	// Inherited from FAnimNode_Base
	// Size: 0x28 (0x38 - 0x10)
	struct FAnimNode_CallFunction : public FAnimNode_Base	
	{
	public:
		FPoseLink Source; // 0x10(0x10)
		unsigned char UnknownData01_6[0x14]; // 0x20(0x14) UNKNOWN PROPERTY
		EAnimFunctionCallSite CallSite; // 0x34(0x4)
	};


	// Struct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
	// Inherited from FAnimNode_Base
	// Size: 0x140 (0x150 - 0x10)
	struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base	
	{
	public:
		TWeakObjectPtr SourceMeshComponent; // 0x10(0x8)
		bool bUseAttachedParent : 1; // 0x18:0(0x1)
		bool bCopyCurves : 1; // 0x18:1(0x1)
		bool bCopyCustomAttributes; // 0x19(0x1)
		bool bUseMeshPose : 1; // 0x1A:0(0x1)
		unsigned char UnknownData02_5[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
		FName RootBoneToCopy; // 0x1C(0x4)
		unsigned char UnknownData03_7[0x130]; // 0x20(0x130) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_CurveSource
	// Inherited from FAnimNode_Base
	// Size: 0x28 (0x38 - 0x10)
	struct FAnimNode_CurveSource : public FAnimNode_Base	
	{
	public:
		FPoseLink SourcePose; // 0x10(0x10)
		FName SourceBinding; // 0x20(0x4)
		float Alpha; // 0x24(0x4)
		TScriptInterface CurveSource; // 0x28(0x10)
	};


	// Struct AnimGraphRuntime.AnimNode_LayeredBoneBlend
	// Inherited from FAnimNode_Base
	// Size: 0xE0 (0xF0 - 0x10)
	struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base	
	{
	public:
		FPoseLink BasePose; // 0x10(0x10)
		TArray BlendPoses; // 0x20(0x10)
		ELayeredBoneBlendMode BlendMode; // 0x30(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TArray BlendMasks; // 0x38(0x10)
		TArray LayerSetup; // 0x48(0x10)
		TArray BlendWeights; // 0x58(0x10)
		bool bMeshSpaceRotationBlend; // 0x68(0x1)
		bool bMeshSpaceScaleBlend; // 0x69(0x1)
		TEnumAsByte CurveBlendOption; // 0x6A(0x1)
		bool bBlendRootMotionBasedOnRootBone; // 0x6B(0x1)
		unsigned char UnknownData05_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		int32_t LODThreshold; // 0x70(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		TArray PerBoneBlendWeights; // 0x78(0x10)
		FGuid SkeletonGuid; // 0x88(0x10)
		FGuid VirtualBoneGuid; // 0x98(0x10)
		unsigned char UnknownData07_7[0x48]; // 0xA8(0x48) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
	// Inherited from FAnimNode_Base
	// Size: 0x28 (0x38 - 0x10)
	struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base	
	{
	public:
		FPoseLink base; // 0x10(0x10)
		FPoseLink Additive; // 0x20(0x10)
		bool bMeshSpaceAdditive; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_MirrorBase
	// Inherited from FAnimNode_Base
	// Size: 0x38 (0x48 - 0x10)
	struct FAnimNode_MirrorBase : public FAnimNode_Base	
	{
	public:
		FPoseLink Source; // 0x10(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x20(0x28) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_Mirror
	// Inherited from FAnimNode_MirrorBase -> FAnimNode_Base
	// Size: 0x0 (0x48 - 0x48)
	struct FAnimNode_Mirror : public FAnimNode_MirrorBase	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_Mirror_Standalone
	// Inherited from FAnimNode_MirrorBase -> FAnimNode_Base
	// Size: 0x18 (0x60 - 0x48)
	struct FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase	
	{
	public:
		bool bMirror; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		UMirrorDataTable MirrorDataTable; // 0x50(0x8)
		float BlendTime; // 0x58(0x4)
		bool bResetChild; // 0x5C(0x1)
		bool bBoneMirroring; // 0x5D(0x1)
		bool bCurveMirroring; // 0x5E(0x1)
		bool bAttributeMirroring; // 0x5F(0x1)
	};


	// Struct AnimGraphRuntime.AnimNode_ModifyCurve
	// Inherited from FAnimNode_Base
	// Size: 0x110 (0x120 - 0x10)
	struct FAnimNode_ModifyCurve : public FAnimNode_Base	
	{
	public:
		FPoseLink SourcePose; // 0x10(0x10)
		TMap CurveMap; // 0x20(0x50)
		TArray CurveValues; // 0x70(0x10)
		TArray CurveNames; // 0x80(0x10)
		unsigned char UnknownData02_6[0x88]; // 0x90(0x88) UNKNOWN PROPERTY
		float Alpha; // 0x118(0x4)
		EModifyCurveApplyMode ApplyMode; // 0x11C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x11D(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_MultiWayBlend
	// Inherited from FAnimNode_Base
	// Size: 0x40 (0x50 - 0x10)
	struct FAnimNode_MultiWayBlend : public FAnimNode_Base	
	{
	public:
		TArray Poses; // 0x10(0x10)
		TArray DesiredAlphas; // 0x20(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		FInputScaleBias AlphaScaleBias; // 0x40(0x8)
		bool bAdditiveNode; // 0x48(0x1)
		bool bNormalizeAlpha; // 0x49(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_PoseHandler
	// Inherited from FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x68 (0xA0 - 0x38)
	struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase	
	{
	public:
		UPoseAsset PoseAsset; // 0x38(0x8)
		unsigned char UnknownData01_7[0x60]; // 0x40(0x60) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_PoseBlendNode
	// Inherited from FAnimNode_PoseHandler -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x38 (0xD8 - 0xA0)
	struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler	
	{
	public:
		FPoseLink SourcePose; // 0xA0(0x10)
		EAlphaBlendOption BlendOption; // 0xB0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		UCurveFloat CustomCurve; // 0xB8(0x8)
		unsigned char UnknownData03_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_PoseByName
	// Inherited from FAnimNode_PoseHandler -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x10 (0xB0 - 0xA0)
	struct FAnimNode_PoseByName : public FAnimNode_PoseHandler	
	{
	public:
		FName PoseName; // 0xA0(0x4)
		float PoseWeight; // 0xA4(0x4)
		unsigned char UnknownData01_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.PoseDriverTransform
	// Size: 0x30 (0x30 - 0x0)
	struct FPoseDriverTransform	
	{
	public:
		FVector TargetTranslation; // 0x0(0x18)
		FRotator TargetRotation; // 0x18(0x18)
	};


	// Struct AnimGraphRuntime.PoseDriverTarget
	// Size: 0xC0 (0xC0 - 0x0)
	struct FPoseDriverTarget	
	{
	public:
		TArray BoneTransforms; // 0x0(0x10)
		FRotator TargetRotation; // 0x10(0x18)
		float TargetScale; // 0x28(0x4)
		ERBFDistanceMethod DistanceMethod; // 0x2C(0x1)
		ERBFFunctionType FunctionType; // 0x2D(0x1)
		bool bApplyCustomCurve; // 0x2E(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x2F(0x1) UNKNOWN PROPERTY
		FRichCurve CustomCurve; // 0x30(0x80)
		FName DrivenName; // 0xB0(0x4)
		unsigned char UnknownData04_6[0x8]; // 0xB4(0x8) UNKNOWN PROPERTY
		bool bIsHidden; // 0xBC(0x1)
		unsigned char UnknownData05_7[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_PoseDriver
	// Inherited from FAnimNode_PoseHandler -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x100 (0x1A0 - 0xA0)
	struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler	
	{
	public:
		FPoseLink SourcePose; // 0xA0(0x10)
		TArray SourceBones; // 0xB0(0x10)
		FBoneReference EvalSpaceBone; // 0xC0(0xC)
		bool bEvalFromRefPose; // 0xCC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		TArray OnlyDriveBones; // 0xD0(0x10)
		TArray PoseTargets; // 0xE0(0x10)
		FRBFParams RBFParams; // 0xF0(0x38)
		EPoseDriverSource DriveSource; // 0x128(0x1)
		EPoseDriverOutput DriveOutput; // 0x129(0x1)
		unsigned char UnknownData04_6[0x42]; // 0x12A(0x42) UNKNOWN PROPERTY
		int32_t LODThreshold; // 0x16C(0x4)
		unsigned char UnknownData05_7[0x30]; // 0x170(0x30) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.RBFParams
	// Size: 0x38 (0x38 - 0x0)
	struct FRBFParams	
	{
	public:
		int32_t TargetDimensions; // 0x0(0x4)
		ERBFSolverType SolverType; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float Radius; // 0x8(0x4)
		bool bAutomaticRadius; // 0xC(0x1)
		ERBFFunctionType Function; // 0xD(0x1)
		ERBFDistanceMethod DistanceMethod; // 0xE(0x1)
		TEnumAsByte TwistAxis; // 0xF(0x1)
		float WeightThreshold; // 0x10(0x4)
		ERBFNormalizeMethod NormalizeMethod; // 0x14(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FVector MedianReference; // 0x18(0x18)
		float MedianMin; // 0x30(0x4)
		float MedianMax; // 0x34(0x4)
	};


	// Struct AnimGraphRuntime.AnimNode_PoseSnapshot
	// Inherited from FAnimNode_Base
	// Size: 0x70 (0x80 - 0x10)
	struct FAnimNode_PoseSnapshot : public FAnimNode_Base	
	{
	public:
		FName SnapshotName; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FPoseSnapshot Snapshot; // 0x18(0x30)
		ESnapshotSourceMode Mode; // 0x48(0x1)
		unsigned char UnknownData03_7[0x37]; // 0x49(0x37) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.RandomPlayerSequenceEntry
	// Size: 0x50 (0x50 - 0x0)
	struct FRandomPlayerSequenceEntry	
	{
	public:
		UAnimSequenceBase Sequence; // 0x0(0x8)
		float ChanceToPlay; // 0x8(0x4)
		int32_t MinLoopCount; // 0xC(0x4)
		int32_t MaxLoopCount; // 0x10(0x4)
		float MinPlayRate; // 0x14(0x4)
		float MaxPlayRate; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FAlphaBlend BlendIn; // 0x20(0x30)
	};


	// Struct AnimGraphRuntime.AnimNode_RandomPlayer
	// Inherited from FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x68 (0x78 - 0x10)
	struct FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase	
	{
	public:
		TArray Entries; // 0x10(0x10)
		unsigned char UnknownData02_6[0x50]; // 0x20(0x50) UNKNOWN PROPERTY
		float BlendWeight; // 0x70(0x4)
		bool bShuffleMode; // 0x74(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_RotateRootBone
	// Inherited from FAnimNode_Base
	// Size: 0xA0 (0xB0 - 0x10)
	struct FAnimNode_RotateRootBone : public FAnimNode_Base	
	{
	public:
		FPoseLink BasePose; // 0x10(0x10)
		float pitch; // 0x20(0x4)
		float Yaw; // 0x24(0x4)
		FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
		FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
		FRotator MeshToComponent; // 0x88(0x18)
		bool bRotateRootMotionAttribute; // 0xA0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0xA1(0xF) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
	// Inherited from FAnimNode_BlendSpacePlayer -> FAnimNode_BlendSpacePlayerBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0xA8 (0x118 - 0x70)
	struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer	
	{
	public:
		FPoseLink BasePose; // 0x70(0x10)
		int32_t LODThreshold; // 0x80(0x4)
		float Alpha; // 0x84(0x4)
		FInputScaleBias AlphaScaleBias; // 0x88(0x8)
		FInputAlphaBoolBlend AlphaBoolBlend; // 0x90(0x48)
		FName AlphaCurveName; // 0xD8(0x4)
		FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xDC(0x30)
		unsigned char UnknownData02_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		EAnimAlphaInputType AlphaInputType; // 0x110(0x1)
		bool bAlphaBoolEnabled; // 0x111(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x112(0x6) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
	// Inherited from FAnimNode_BlendSpaceGraphBase -> FAnimNode_Base
	// Size: 0xA8 (0x108 - 0x60)
	struct FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase	
	{
	public:
		FPoseLink BasePose; // 0x60(0x10)
		int32_t LODThreshold; // 0x70(0x4)
		float Alpha; // 0x74(0x4)
		FInputScaleBias AlphaScaleBias; // 0x78(0x8)
		FInputAlphaBoolBlend AlphaBoolBlend; // 0x80(0x48)
		FName AlphaCurveName; // 0xC8(0x4)
		FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xCC(0x30)
		unsigned char UnknownData02_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		EAnimAlphaInputType AlphaInputType; // 0x100(0x1)
		bool bAlphaBoolEnabled; // 0x101(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x102(0x6) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
	// Inherited from FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x8 (0x40 - 0x38)
	struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_SequenceEvaluator
	// Inherited from FAnimNode_SequenceEvaluatorBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x0 (0x40 - 0x40)
	struct FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
	// Inherited from FAnimNode_SequenceEvaluatorBase -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0x28 (0x68 - 0x40)
	struct FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase	
	{
	public:
		FName GroupName; // 0x40(0x4)
		TEnumAsByte GroupRole; // 0x44(0x1)
		EAnimSyncMethod Method; // 0x45(0x1)
		bool bIgnoreForRelevancyTest; // 0x46(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x47(0x1) UNKNOWN PROPERTY
		UAnimSequenceBase Sequence; // 0x48(0x8)
		float ExplicitTime; // 0x50(0x4)
		bool bUseExplicitFrame; // 0x54(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		int32_t ExplicitFrame; // 0x58(0x4)
		bool bShouldLoop; // 0x5C(0x1)
		bool bTeleportToExplicitTime; // 0x5D(0x1)
		TEnumAsByte ReinitializationBehavior; // 0x5E(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x5F(0x1) UNKNOWN PROPERTY
		float StartPosition; // 0x60(0x4)
		unsigned char UnknownData07_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_Slot
	// Inherited from FAnimNode_Base
	// Size: 0x38 (0x48 - 0x10)
	struct FAnimNode_Slot : public FAnimNode_Base	
	{
	public:
		FPoseLink Source; // 0x10(0x10)
		FName SlotName; // 0x20(0x4)
		bool bAlwaysUpdateSourcePose; // 0x24(0x1)
		unsigned char UnknownData01_7[0x23]; // 0x25(0x23) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_Sync
	// Inherited from FAnimNode_Base
	// Size: 0x18 (0x28 - 0x10)
	struct FAnimNode_Sync : public FAnimNode_Base	
	{
	public:
		FPoseLink Source; // 0x10(0x10)
		FName GroupName; // 0x20(0x4)
		TEnumAsByte GroupRole; // 0x24(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_TwoWayBlend
	// Inherited from FAnimNode_Base
	// Size: 0xB0 (0xC0 - 0x10)
	struct FAnimNode_TwoWayBlend : public FAnimNode_Base	
	{
	public:
		FPoseLink A; // 0x10(0x10)
		FPoseLink B; // 0x20(0x10)
		EAnimAlphaInputType AlphaInputType; // 0x30(0x1)
		bool bAlphaBoolEnabled : 1; // 0x31:0(0x1)
		unsigned char UnknownBit04 : 1; // 0x31:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit05 : 1; // 0x31:2(0x1) UNKNOWN PROPERTY
		bool bResetChildOnActivation : 1; // 0x31:3(0x1)
		bool bAlwaysUpdateChildren : 1; // 0x31:4(0x1)
		unsigned char UnknownData06_5[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		float Alpha; // 0x34(0x4)
		FInputScaleBias AlphaScaleBias; // 0x38(0x8)
		FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
		FName AlphaCurveName; // 0x88(0x4)
		FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8C(0x30)
		unsigned char UnknownData07_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimSequencerInstanceProxy
	// Inherited from FAnimInstanceProxy
	// Size: 0x458 (0xBF0 - 0x798)
	struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy	
	{
	public:
		unsigned char UnknownData01_1[0x458]; // 0x798(0x458) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.BlendListBaseReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FBlendListBaseReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.BlendSpacePlayerReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FBlendSpacePlayerReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.AnimPhysConstraintSetup
	// Size: 0x88 (0x88 - 0x0)
	struct FAnimPhysConstraintSetup	
	{
	public:
		AnimPhysLinearConstraintType LinearXLimitType; // 0x0(0x1)
		AnimPhysLinearConstraintType LinearYLimitType; // 0x1(0x1)
		AnimPhysLinearConstraintType LinearZLimitType; // 0x2(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FVector LinearAxesMin; // 0x8(0x18)
		FVector LinearAxesMax; // 0x20(0x18)
		AnimPhysAngularConstraintType AngularConstraintType; // 0x38(0x1)
		AnimPhysTwistAxis TwistAxis; // 0x39(0x1)
		AnimPhysTwistAxis AngularTargetAxis; // 0x3A(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x3B(0x1) UNKNOWN PROPERTY
		float ConeAngle; // 0x3C(0x4)
		FVector AngularLimitsMin; // 0x40(0x18)
		FVector AngularLimitsMax; // 0x58(0x18)
		FVector AngularTarget; // 0x70(0x18)
	};


	// Struct AnimGraphRuntime.AnimPhysPlanarLimit
	// Size: 0x70 (0x70 - 0x0)
	struct FAnimPhysPlanarLimit	
	{
	public:
		FBoneReference DrivingBone; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FTransform PlaneTransform; // 0x10(0x60)
	};


	// Struct AnimGraphRuntime.AnimPhysSphericalLimit
	// Size: 0x30 (0x30 - 0x0)
	struct FAnimPhysSphericalLimit	
	{
	public:
		FBoneReference DrivingBone; // 0x0(0xC)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector SphereLocalOffset; // 0x10(0x18)
		float LimitRadius; // 0x28(0x4)
		ESphericalLimitType LimitType; // 0x2C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimPhysBodyDefinition
	// Size: 0xD0 (0xD0 - 0x0)
	struct FAnimPhysBodyDefinition	
	{
	public:
		FBoneReference BoundBone; // 0x0(0xC)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector BoxExtents; // 0x10(0x18)
		FVector LocalJointOffset; // 0x28(0x18)
		FAnimPhysConstraintSetup ConstraintSetup; // 0x40(0x88)
		AnimPhysCollisionType CollisionType; // 0xC8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float SphereCollisionRadius; // 0xCC(0x4)
	};


	// Struct AnimGraphRuntime.AnimNode_AnimDynamics
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x448 (0x510 - 0xC8)
	struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase	
	{
	public:
		float LinearDampingOverride; // 0xC8(0x4)
		float AngularDampingOverride; // 0xCC(0x4)
		unsigned char UnknownData09_6[0xC0]; // 0xD0(0xC0) UNKNOWN PROPERTY
		FBoneReference RelativeSpaceBone; // 0x190(0xC)
		FBoneReference BoundBone; // 0x19C(0xC)
		FBoneReference ChainEnd; // 0x1A8(0xC)
		unsigned char UnknownData10_6[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY
		TArray PhysicsBodyDefinitions; // 0x1B8(0x10)
		float GravityScale; // 0x1C8(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FVector GravityOverride; // 0x1D0(0x18)
		float LinearSpringConstant; // 0x1E8(0x4)
		float AngularSpringConstant; // 0x1EC(0x4)
		float WindScale; // 0x1F0(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x1F4(0x4) UNKNOWN PROPERTY
		FVector ComponentLinearAccScale; // 0x1F8(0x18)
		FVector ComponentLinearVelScale; // 0x210(0x18)
		FVector ComponentAppliedLinearAccClamp; // 0x228(0x18)
		float AngularBiasOverride; // 0x240(0x4)
		int32_t NumSolverIterationsPreUpdate; // 0x244(0x4)
		int32_t NumSolverIterationsPostUpdate; // 0x248(0x4)
		unsigned char UnknownData13_6[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
		TArray SphericalLimits; // 0x250(0x10)
		FVector ExternalForce; // 0x260(0x18)
		TArray PlanarLimits; // 0x278(0x10)
		AnimPhysSimSpaceType SimulationSpace; // 0x288(0x1)
		unsigned char UnknownData14_6[0x2]; // 0x289(0x2) UNKNOWN PROPERTY
		bool bUseSphericalLimits : 1; // 0x28B:0(0x1)
		bool bUsePlanarLimit : 1; // 0x28B:1(0x1)
		bool bDoUpdate : 1; // 0x28B:2(0x1)
		bool bDoEval : 1; // 0x28B:3(0x1)
		bool bOverrideLinearDamping : 1; // 0x28B:4(0x1)
		bool bOverrideAngularBias : 1; // 0x28B:5(0x1)
		bool bOverrideAngularDamping : 1; // 0x28B:6(0x1)
		bool bEnableWind : 1; // 0x28B:7(0x1)
		unsigned char UnknownBit15 : 1; // 0x28C:0(0x1) UNKNOWN PROPERTY
		bool bUseGravityOverride : 1; // 0x28C:1(0x1)
		bool bGravityOverrideInSimSpace : 1; // 0x28C:2(0x1)
		bool bLinearSpring : 1; // 0x28C:3(0x1)
		bool bAngularSpring : 1; // 0x28C:4(0x1)
		bool bChain : 1; // 0x28C:5(0x1)
		unsigned char UnknownData16_5[0x3]; // 0x28D(0x3) UNKNOWN PROPERTY
		FRotationRetargetingInfo RetargetingSettings; // 0x290(0x1A0)
		unsigned char UnknownData17_7[0xE0]; // 0x430(0xE0) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AngularRangeLimit
	// Size: 0x40 (0x40 - 0x0)
	struct FAngularRangeLimit	
	{
	public:
		FVector LimitMin; // 0x0(0x18)
		FVector LimitMax; // 0x18(0x18)
		FBoneReference bone; // 0x30(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_ApplyLimits
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x20 (0xE8 - 0xC8)
	struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase	
	{
	public:
		TArray AngularRangeLimits; // 0xC8(0x10)
		TArray AngularOffsets; // 0xD8(0x10)
	};


	// Struct AnimGraphRuntime.AnimNode_BoneDrivenController
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x58 (0x120 - 0xC8)
	struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference SourceBone; // 0xC8(0xC)
		unsigned char UnknownData03_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		UCurveFloat DrivingCurve; // 0xD8(0x8)
		float Multiplier; // 0xE0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		double RangeMin; // 0xE8(0x8)
		double RangeMax; // 0xF0(0x8)
		double RemappedMin; // 0xF8(0x8)
		double RemappedMax; // 0x100(0x8)
		FName ParameterName; // 0x108(0x4)
		FBoneReference TargetBone; // 0x10C(0xC)
		EDrivenDestinationMode DestinationMode; // 0x118(0x1)
		EDrivenBoneModificationMode ModificationMode; // 0x119(0x1)
		TEnumAsByte SourceComponent; // 0x11A(0x1)
		bool bUseRange : 1; // 0x11B:0(0x1)
		bool bAffectTargetTranslationX : 1; // 0x11B:1(0x1)
		bool bAffectTargetTranslationY : 1; // 0x11B:2(0x1)
		bool bAffectTargetTranslationZ : 1; // 0x11B:3(0x1)
		bool bAffectTargetRotationX : 1; // 0x11B:4(0x1)
		bool bAffectTargetRotationY : 1; // 0x11B:5(0x1)
		bool bAffectTargetRotationZ : 1; // 0x11B:6(0x1)
		bool bAffectTargetScaleX : 1; // 0x11B:7(0x1)
		bool bAffectTargetScaleY : 1; // 0x11C:0(0x1)
		bool bAffectTargetScaleZ : 1; // 0x11C:1(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x11D(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_CCDIK
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0xE8 (0x1B0 - 0xC8)
	struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase	
	{
	public:
		FVector EffectorLocation; // 0xC8(0x18)
		TEnumAsByte EffectorLocationSpace; // 0xE0(0x1)
		unsigned char UnknownData03_6[0xF]; // 0xE1(0xF) UNKNOWN PROPERTY
		FBoneSocketTarget EffectorTarget; // 0xF0(0x80)
		FBoneReference TipBone; // 0x170(0xC)
		FBoneReference RootBone; // 0x17C(0xC)
		float Precision; // 0x188(0x4)
		int32_t MaxIterations; // 0x18C(0x4)
		bool bStartFromTail; // 0x190(0x1)
		bool bEnableRotationLimit; // 0x191(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x192(0x6) UNKNOWN PROPERTY
		TArray RotationLimitPerJoints; // 0x198(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.Constraint
	// Size: 0x18 (0x18 - 0x0)
	struct FConstraint	
	{
	public:
		FBoneReference TargetBone; // 0x0(0xC)
		EConstraintOffsetOption OffsetOption; // 0xC(0x1)
		ETransformConstraintType TransformType; // 0xD(0x1)
		FFilterOptionPerAxis PerAxis; // 0xE(0x3)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_Constraint
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x40 (0x108 - 0xC8)
	struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference BoneToModify; // 0xC8(0xC)
		unsigned char UnknownData02_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		TArray ConstraintSetup; // 0xD8(0x10)
		TArray ConstraintWeights; // 0xE8(0x10)
		unsigned char UnknownData03_7[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_CopyBone
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x20 (0xE8 - 0xC8)
	struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference SourceBone; // 0xC8(0xC)
		FBoneReference TargetBone; // 0xD4(0xC)
		bool bCopyTranslation; // 0xE0(0x1)
		bool bCopyRotation; // 0xE1(0x1)
		bool bCopyScale; // 0xE2(0x1)
		TEnumAsByte ControlSpace; // 0xE3(0x1)
		unsigned char UnknownData01_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_CopyBoneDelta
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x28 (0xF0 - 0xC8)
	struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference SourceBone; // 0xC8(0xC)
		FBoneReference TargetBone; // 0xD4(0xC)
		bool bCopyTranslation; // 0xE0(0x1)
		bool bCopyRotation; // 0xE1(0x1)
		bool bCopyScale; // 0xE2(0x1)
		CopyBoneDeltaMode CopyMode; // 0xE3(0x1)
		float TranslationMultiplier; // 0xE4(0x4)
		float RotationMultiplier; // 0xE8(0x4)
		float ScaleMultiplier; // 0xEC(0x4)
	};


	// Struct AnimGraphRuntime.AnimNode_Fabrik
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x118 (0x1E0 - 0xC8)
	struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FTransform EffectorTransform; // 0xD0(0x60)
		FBoneSocketTarget EffectorTarget; // 0x130(0x80)
		FBoneReference TipBone; // 0x1B0(0xC)
		FBoneReference RootBone; // 0x1BC(0xC)
		float Precision; // 0x1C8(0x4)
		int32_t MaxIterations; // 0x1CC(0x4)
		TEnumAsByte EffectorTransformSpace; // 0x1D0(0x1)
		TEnumAsByte EffectorRotationSource; // 0x1D1(0x1)
		unsigned char UnknownData03_7[0xE]; // 0x1D2(0xE) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_HandIKRetargeting
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x60 (0x128 - 0xC8)
	struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference RightHandFK; // 0xC8(0xC)
		FBoneReference LeftHandFK; // 0xD4(0xC)
		FBoneReference RightHandIK; // 0xE0(0xC)
		FBoneReference LeftHandIK; // 0xEC(0xC)
		TArray IKBonesToMove; // 0xF8(0x10)
		FVector PerAxisAlpha; // 0x108(0x18)
		float HandFKWeight; // 0x120(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.IKChainLink
	// Size: 0x70 (0x70 - 0x0)
	struct FIKChainLink	
	{
	public:
		unsigned char UnknownData01_2[0x70]; // 0x0(0x70) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.IKChain
	// Size: 0x50 (0x50 - 0x0)
	struct FIKChain	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimLegIKDefinition
	// Size: 0x28 (0x28 - 0x0)
	struct FAnimLegIKDefinition	
	{
	public:
		FBoneReference IKFootBone; // 0x0(0xC)
		FBoneReference FKFootBone; // 0xC(0xC)
		int32_t NumBonesInLimb; // 0x18(0x4)
		float MinRotationAngle; // 0x1C(0x4)
		TEnumAsByte FootBoneForwardAxis; // 0x20(0x1)
		TEnumAsByte HingeRotationAxis; // 0x21(0x1)
		bool bEnableRotationLimit; // 0x22(0x1)
		bool bEnableKneeTwistCorrection; // 0x23(0x1)
		FName TwistOffsetCurveName; // 0x24(0x4)
	};


	// Struct AnimGraphRuntime.AnimLegIKData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FAnimLegIKData	
	{
	public:
		unsigned char UnknownData01_2[0xF0]; // 0x0(0xF0) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_LegIK
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x38 (0x100 - 0xC8)
	struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase	
	{
	public:
		float ReachPrecision; // 0xC8(0x4)
		int32_t MaxIterations; // 0xCC(0x4)
		float SoftPercentLength; // 0xD0(0x4)
		float SoftAlpha; // 0xD4(0x4)
		TArray LegsDefinition; // 0xD8(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xE8(0x18) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_LookAt
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x178 (0x240 - 0xC8)
	struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference BoneToModify; // 0xC8(0xC)
		unsigned char UnknownData03_6[0xC]; // 0xD4(0xC) UNKNOWN PROPERTY
		FBoneSocketTarget LookAtTarget; // 0xE0(0x80)
		FVector LookAtLocation; // 0x160(0x18)
		FAxis LookAt_Axis; // 0x178(0x20)
		bool bUseLookUpAxis; // 0x198(0x1)
		TEnumAsByte InterpolationType; // 0x199(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x19A(0x6) UNKNOWN PROPERTY
		FAxis LookUp_Axis; // 0x1A0(0x20)
		float LookAtClamp; // 0x1C0(0x4)
		float InterpolationTime; // 0x1C4(0x4)
		float InterpolationTriggerThreashold; // 0x1C8(0x4)
		unsigned char UnknownData05_7[0x6C]; // 0x1CC(0x6C) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_ObserveBone
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x58 (0x120 - 0xC8)
	struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference BoneToObserve; // 0xC8(0xC)
		TEnumAsByte DisplaySpace; // 0xD4(0x1)
		bool bRelativeToRefPose; // 0xD5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xD6(0x2) UNKNOWN PROPERTY
		FVector Translation; // 0xD8(0x18)
		FRotator Rotation; // 0xF0(0x18)
		FVector Scale; // 0x108(0x18)
	};


	// Struct AnimGraphRuntime.AnimNode_ResetRoot
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x10 (0xD8 - 0xC8)
	struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.SimSpaceSettings
	// Size: 0x60 (0x60 - 0x0)
	struct FSimSpaceSettings	
	{
	public:
		float WorldAlpha; // 0x0(0x4)
		float VelocityScaleZ; // 0x4(0x4)
		float MaxLinearVelocity; // 0x8(0x4)
		float MaxAngularVelocity; // 0xC(0x4)
		float MaxLinearAcceleration; // 0x10(0x4)
		float MaxAngularAcceleration; // 0x14(0x4)
		FVector ExternalLinearDragV; // 0x18(0x18)
		FVector ExternalLinearVelocity; // 0x30(0x18)
		FVector ExternalAngularVelocity; // 0x48(0x18)
	};


	// Struct AnimGraphRuntime.AnimNode_RigidBody
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x8A8 (0x970 - 0xC8)
	struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase	
	{
	public:
		UPhysicsAsset OverridePhysicsAsset; // 0xC8(0x8)
		bool bDefaultToSkeletalMeshPhysicsAsset; // 0xD0(0x1)
		unsigned char UnknownData06_6[0x137]; // 0xD1(0x137) UNKNOWN PROPERTY
		bool bUseLocalLODThresholdOnly; // 0x208(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x209(0x7) UNKNOWN PROPERTY
		FVector OverrideWorldGravity; // 0x210(0x18)
		FVector ExternalForce; // 0x228(0x18)
		FVector ComponentLinearAccScale; // 0x240(0x18)
		FVector ComponentLinearVelScale; // 0x258(0x18)
		FVector ComponentAppliedLinearAccClamp; // 0x270(0x18)
		FSimSpaceSettings SimSpaceSettings; // 0x288(0x60)
		float CachedBoundsScale; // 0x2E8(0x4)
		FBoneReference BaseBoneRef; // 0x2EC(0xC)
		TEnumAsByte OverlapChannel; // 0x2F8(0x1)
		ESimulationSpace SimulationSpace; // 0x2F9(0x1)
		bool bForceDisableCollisionBetweenConstraintBodies; // 0x2FA(0x1)
		bool bUseExternalClothCollision; // 0x2FB(0x1)
		unsigned char UnknownData08_6[0x1]; // 0x2FC(0x1) UNKNOWN PROPERTY
		bool bEnableWorldGeometry : 1; // 0x2FD:0(0x1)
		bool bOverrideWorldGravity : 1; // 0x2FD:1(0x1)
		bool bTransferBoneVelocities : 1; // 0x2FD:2(0x1)
		bool bFreezeIncomingPoseOnStart : 1; // 0x2FD:3(0x1)
		bool bClampLinearTranslationLimitToRefPose : 1; // 0x2FD:4(0x1)
		unsigned char UnknownData09_5[0x2]; // 0x2FE(0x2) UNKNOWN PROPERTY
		float WorldSpaceMinimumScale; // 0x300(0x4)
		float EvaluationResetTime; // 0x304(0x4)
		unsigned char UnknownData10_6[0x1]; // 0x308(0x1) UNKNOWN PROPERTY
		ESimulationTiming SimulationTiming; // 0x309(0x1)
		unsigned char UnknownData11_7[0x666]; // 0x30A(0x666) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_ScaleChainLength
	// Inherited from FAnimNode_Base
	// Size: 0x70 (0x80 - 0x10)
	struct FAnimNode_ScaleChainLength : public FAnimNode_Base	
	{
	public:
		FPoseLink InputPose; // 0x10(0x10)
		float DefaultChainLength; // 0x20(0x4)
		FBoneReference ChainStartBone; // 0x24(0xC)
		FBoneReference ChainEndBone; // 0x30(0xC)
		unsigned char UnknownData03_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector TargetLocation; // 0x40(0x18)
		float Alpha; // 0x58(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FInputScaleBias AlphaScaleBias; // 0x60(0x8)
		EScaleChainInitialLength ChainInitialLength; // 0x68(0x1)
		unsigned char UnknownData05_7[0x17]; // 0x69(0x17) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.SplineIKCachedBoneData
	// Size: 0x10 (0x10 - 0x0)
	struct FSplineIKCachedBoneData	
	{
	public:
		FBoneReference bone; // 0x0(0xC)
		int32_t RefSkeletonIndex; // 0xC(0x4)
	};


	// Struct AnimGraphRuntime.AnimNode_SplineIK
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x190 (0x258 - 0xC8)
	struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference StartBone; // 0xC8(0xC)
		FBoneReference EndBone; // 0xD4(0xC)
		ESplineBoneAxis BoneAxis; // 0xE0(0x1)
		bool bAutoCalculateSpline; // 0xE1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xE2(0x2) UNKNOWN PROPERTY
		int32_t PointCount; // 0xE4(0x4)
		TArray ControlPoints; // 0xE8(0x10)
		float Roll; // 0xF8(0x4)
		float TwistStart; // 0xFC(0x4)
		float TwistEnd; // 0x100(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FAlphaBlend TwistBlend; // 0x108(0x30)
		float Stretch; // 0x138(0x4)
		float Offset; // 0x13C(0x4)
		unsigned char UnknownData05_7[0x118]; // 0x140(0x118) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_SpringBone
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0xA0 (0x168 - 0xC8)
	struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference SpringBone; // 0xC8(0xC)
		unsigned char UnknownData03_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		double MaxDisplacement; // 0xD8(0x8)
		double SpringStiffness; // 0xE0(0x8)
		double SpringDamping; // 0xE8(0x8)
		double ErrorResetThresh; // 0xF0(0x8)
		unsigned char UnknownData04_6[0x6C]; // 0xF8(0x6C) UNKNOWN PROPERTY
		bool bLimitDisplacement : 1; // 0x164:0(0x1)
		bool bTranslateX : 1; // 0x164:1(0x1)
		bool bTranslateY : 1; // 0x164:2(0x1)
		bool bTranslateZ : 1; // 0x164:3(0x1)
		bool bRotateX : 1; // 0x164:4(0x1)
		bool bRotateY : 1; // 0x164:5(0x1)
		bool bRotateZ : 1; // 0x164:6(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x165(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.RotationLimit
	// Size: 0x30 (0x30 - 0x0)
	struct FRotationLimit	
	{
	public:
		FVector LimitMin; // 0x0(0x18)
		FVector LimitMax; // 0x18(0x18)
	};


	// Struct AnimGraphRuntime.AnimNode_Trail
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x1D8 (0x2A0 - 0xC8)
	struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase	
	{
	public:
		unsigned char UnknownData05_3[0x68]; // 0xC8(0x68) UNKNOWN PROPERTY
		FBoneReference TrailBone; // 0x130(0xC)
		int32_t ChainLength; // 0x13C(0x4)
		TEnumAsByte ChainBoneAxis; // 0x140(0x1)
		bool bInvertChainBoneAxis : 1; // 0x141:0(0x1)
		bool bLimitStretch : 1; // 0x141:1(0x1)
		bool bLimitRotation : 1; // 0x141:2(0x1)
		bool bUsePlanarLimit : 1; // 0x141:3(0x1)
		bool bActorSpaceFakeVel : 1; // 0x141:4(0x1)
		bool bReorientParentToChild : 1; // 0x141:5(0x1)
		unsigned char UnknownData06_5[0x2]; // 0x142(0x2) UNKNOWN PROPERTY
		float MaxDeltaTime; // 0x144(0x4)
		float RelaxationSpeedScale; // 0x148(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve TrailRelaxationSpeed; // 0x150(0x88)
		FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1D8(0x30)
		TArray RotationLimits; // 0x208(0x10)
		TArray RotationOffsets; // 0x218(0x10)
		TArray PlanarLimits; // 0x228(0x10)
		float StretchLimit; // 0x238(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
		FVector FakeVelocity; // 0x240(0x18)
		FBoneReference BaseJoint; // 0x258(0xC)
		float LastBoneRotationAnimAlphaBlend; // 0x264(0x4)
		unsigned char UnknownData09_7[0x38]; // 0x268(0x38) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.ReferenceBoneFrame
	// Size: 0x30 (0x30 - 0x0)
	struct FReferenceBoneFrame	
	{
	public:
		FBoneReference bone; // 0x0(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FAxis Axis; // 0x10(0x20)
	};


	// Struct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x98 (0x160 - 0xC8)
	struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase	
	{
	public:
		FReferenceBoneFrame BaseFrame; // 0xC8(0x30)
		FReferenceBoneFrame TwistFrame; // 0xF8(0x30)
		FAxis TwistPlaneNormalAxis; // 0x128(0x20)
		float RangeMax; // 0x148(0x4)
		float RemappedMin; // 0x14C(0x4)
		float RemappedMax; // 0x150(0x4)
		FName CurveName; // 0x154(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.AnimNode_TwoBoneIK
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x198 (0x260 - 0xC8)
	struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference IKBone; // 0xC8(0xC)
		unsigned char UnknownData04_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		double StartStretchRatio; // 0xD8(0x8)
		double MaxStretchScale; // 0xE0(0x8)
		FVector EffectorLocation; // 0xE8(0x18)
		unsigned char UnknownData05_6[0x10]; // 0x100(0x10) UNKNOWN PROPERTY
		FBoneSocketTarget EffectorTarget; // 0x110(0x80)
		FVector JointTargetLocation; // 0x190(0x18)
		unsigned char UnknownData06_6[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
		FBoneSocketTarget JointTarget; // 0x1B0(0x80)
		FAxis TwistAxis; // 0x230(0x20)
		TEnumAsByte EffectorLocationSpace; // 0x250(0x1)
		TEnumAsByte JointTargetLocationSpace; // 0x251(0x1)
		bool bAllowStretching : 1; // 0x252:0(0x1)
		bool bTakeRotationFromEffectorSpace : 1; // 0x252:1(0x1)
		bool bMaintainEffectorRelRot : 1; // 0x252:2(0x1)
		bool bAllowTwist : 1; // 0x252:3(0x1)
		unsigned char UnknownData07_7[0xD]; // 0x253(0xD) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.IKFootPelvisPullDownSolver
	// Size: 0x80 (0x80 - 0x0)
	struct FIKFootPelvisPullDownSolver	
	{
	public:
		FVectorRK4SpringInterpolator PelvisAdjustmentInterp; // 0x0(0x8)
		unsigned char UnknownData02_6[0x58]; // 0x8(0x58) UNKNOWN PROPERTY
		double PelvisAdjustmentInterpAlpha; // 0x60(0x8)
		double PelvisAdjustmentMaxDistance; // 0x68(0x8)
		double PelvisAdjustmentErrorTolerance; // 0x70(0x8)
		int32_t PelvisAdjustmentMaxIter; // 0x78(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.WarpingVectorValue
	// Size: 0x20 (0x20 - 0x0)
	struct FWarpingVectorValue	
	{
	public:
		EWarpingVectorMode Mode; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector Value; // 0x8(0x18)
	};


	// Struct AnimGraphRuntime.LayeredBoneBlendReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FLayeredBoneBlendReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.LinkedAnimGraphReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FLinkedAnimGraphReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.MirrorAnimNodeReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FMirrorAnimNodeReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.ModifyCurveAnimNodeReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FModifyCurveAnimNodeReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.RBFEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FRBFEntry	
	{
	public:
		TArray Values; // 0x0(0x10)
	};


	// Struct AnimGraphRuntime.RBFTarget
	// Inherited from FRBFEntry
	// Size: 0x90 (0xA0 - 0x10)
	struct FRBFTarget : public FRBFEntry	
	{
	public:
		float ScaleFactor; // 0x10(0x4)
		bool bApplyCustomCurve; // 0x14(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FRichCurve CustomCurve; // 0x18(0x80)
		ERBFDistanceMethod DistanceMethod; // 0x98(0x1)
		ERBFFunctionType FunctionType; // 0x99(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x9A(0x6) UNKNOWN PROPERTY
	};


	// Struct AnimGraphRuntime.SequenceEvaluatorReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FSequenceEvaluatorReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.SequencePlayerReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FSequencePlayerReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct AnimGraphRuntime.SkeletalControlReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FSkeletalControlReference : public FAnimNodeReference	
	{
	public:
	};

}
