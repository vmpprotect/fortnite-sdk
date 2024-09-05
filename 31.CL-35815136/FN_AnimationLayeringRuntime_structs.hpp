#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationLayeringRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AnimationLayeringRuntime.BoneMaskPerBoneData
	// Size: 0x8 (0x8 - 0x0)
	struct FBoneMaskPerBoneData	
	{
	public:
		int32_t SkeletonPoseBoneIndex; // 0x0(0x4)
		float BlendWeight; // 0x4(0x4)
	};


	// Struct AnimationLayeringRuntime.BoneMaskBodyPartDefinition
	// Size: 0x38 (0x38 - 0x0)
	struct FBoneMaskBodyPartDefinition	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FBranchFilter> BranchFilters; // 0x8(0x10)
		TArray<FBoneMaskPerBoneData> SkeletonPoseBoneWeights; // 0x18(0x10)
		TArray<int32_t> SkeletonPoseChildBoneIndices; // 0x28(0x10)
	};


	// Struct AnimationLayeringRuntime.BoneMaskEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FBoneMaskEntry	
	{
	public:
		float LocalSpaceWeight; // 0x0(0x4)
		float MeshSpaceWeight; // 0x4(0x4)
	};


	// Struct AnimationLayeringRuntime.BoneMask
	// Size: 0x50 (0x50 - 0x0)
	struct FBoneMask	
	{
	public:
		TMap<FName, FBoneMaskEntry> BoneMaskMap; // 0x0(0x50)
	};


	// Struct AnimationLayeringRuntime.BoneMaskDefinition
	// Size: 0x10 (0x10 - 0x0)
	struct FBoneMaskDefinition	
	{
	public:
		TArray<FBoneMaskBodyPartDefinition> BodyPartDefinitions; // 0x0(0x10)
	};


	// Struct AnimationLayeringRuntime.BoneMaskUpdateMultiParam
	// Size: 0xC (0xC - 0x0)
	struct FBoneMaskUpdateMultiParam	
	{
	public:
		FName Name; // 0x0(0x4)
		float LocalSpaceWeight; // 0x4(0x4)
		float MeshSpaceWeight; // 0x8(0x4)
	};


	// Struct AnimationLayeringRuntime.BoneMaskBodyPartNameContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FBoneMaskBodyPartNameContainer	
	{
	public:
		TArray<FName> Names; // 0x0(0x10)
	};


	// Struct AnimationLayeringRuntime.AnimNode_BoneMask
	// Inherited from FAnimNode_Base
	// Size: 0xE8 (0xF8 - 0x10)
	struct FAnimNode_BoneMask : public FAnimNode_Base	
	{
	public:
		FPoseLink BasePose; // 0x10(0x10)
		TArray<FPoseLink> BlendPoses; // 0x20(0x10)
		TArray<float> BlendWeights; // 0x30(0x10)
		FBoneMask BoneMask; // 0x40(0x50)
		UBoneMaskDefinitionDataAsset* BoneMaskDefinitionDataAsset; // 0x90(0x8)
		TArray<FBoneMaskBodyPartNameContainer> BodyParts; // 0x98(0x10)
		TEnumAsByte<ECurveBlendOption> CurveBlendOption; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t LODThreshold; // 0xAC(0x4)
		unsigned char UnknownData01_7[0x48]; // 0xB0(0x48) UNKNOWN PROPERTY
	};


	// Struct AnimationLayeringRuntime.AnimNode_CopyBoneAdvanced
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x60 (0x128 - 0xC8)
	struct FAnimNode_CopyBoneAdvanced : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference SourceBone; // 0xC8(0xC)
		FBoneReference TargetBone; // 0xD4(0xC)
		FVector TranslationWeight; // 0xE0(0x18)
		float RotationWeight; // 0xF8(0x4)
		float ScaleWeight; // 0xFC(0x4)
		TEnumAsByte<EBoneControlSpace> ControlSpace; // 0x100(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x101(0x3) UNKNOWN PROPERTY
		FBoneReference TranslationSpaceBone; // 0x104(0xC)
		bool bTranslationInCustomBoneSpace; // 0x110(0x1)
		bool bPropagateToChildren; // 0x111(0x1)
		unsigned char UnknownData01_7[0x16]; // 0x112(0x16) UNKNOWN PROPERTY
	};


	// Struct AnimationLayeringRuntime.AnimNode_CopyMotion
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x118 (0x1E0 - 0xC8)
	struct FAnimNode_CopyMotion : public FAnimNode_SkeletalControlBase	
	{
	public:
		FComponentSpacePoseLink BasePose; // 0xC8(0x10)
		FComponentSpacePoseLink BasePoseReference; // 0xD8(0x10)
		bool bUseBasePose; // 0xE8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xE9(0x3) UNKNOWN PROPERTY
		FName PoseHistoryTag; // 0xEC(0x4)
		float Delay; // 0xF0(0x4)
		FBoneReference SourceBone; // 0xF4(0xC)
		FBoneReference BoneToModify; // 0x100(0xC)
		FBoneReference CopySpace; // 0x10C(0xC)
		FBoneReference ApplySpace; // 0x118(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		FRotator TranslationOffset; // 0x128(0x18)
		FRotator RotationOffset; // 0x140(0x18)
		FVector RotationPivot; // 0x158(0x18)
		FName CurvePrefix; // 0x170(0x4)
		FName TargetCurveName; // 0x174(0x4)
		float TargetCurveScale; // 0x178(0x4)
		ECopyMotion_Component TargetCurveComponent; // 0x17C(0x1)
		TEnumAsByte<EAxis> TargetCurveRotationAxis; // 0x17D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x17E(0x2) UNKNOWN PROPERTY
		FName TranslationX_CurveName; // 0x180(0x4)
		FName TranslationY_CurveName; // 0x184(0x4)
		FName TranslationZ_CurveName; // 0x188(0x4)
		FName RotationRoll_CurveName; // 0x18C(0x4)
		FName RotationPitch_CurveName; // 0x190(0x4)
		FName RotationYaw_CurveName; // 0x194(0x4)
		FVector TranslationScale; // 0x198(0x18)
		UCurveVector* TranslationRemapCurve; // 0x1B0(0x8)
		float RotationScale; // 0x1B8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY
		UCurveFloat* RotationRemapCurve; // 0x1C0(0x8)
		unsigned char UnknownData04_7[0x18]; // 0x1C8(0x18) UNKNOWN PROPERTY
	};

}
