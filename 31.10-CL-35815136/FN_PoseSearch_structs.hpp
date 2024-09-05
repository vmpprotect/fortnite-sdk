#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PoseSearch
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PoseSearch.MotionMatchingAnimNodeReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FMotionMatchingAnimNodeReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct PoseSearch.PoseSearchCost
	// Size: 0x4 (0x4 - 0x0)
	struct FPoseSearchCost	
	{
	public:
		float TotalCost; // 0x0(0x4)
	};


	// Struct PoseSearch.PoseSearchDatabaseAnimationAssetBase
	// Size: 0x8 (0x8 - 0x0)
	struct FPoseSearchDatabaseAnimationAssetBase	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct PoseSearch.PoseSearchDatabaseSequence
	// Inherited from FPoseSearchDatabaseAnimationAssetBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase	
	{
	public:
		UAnimSequence* Sequence; // 0x8(0x8)
	};


	// Struct PoseSearch.PoseSearchDatabaseBlendSpace
	// Inherited from FPoseSearchDatabaseAnimationAssetBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPoseSearchDatabaseBlendSpace : public FPoseSearchDatabaseAnimationAssetBase	
	{
	public:
		UBlendSpace* BlendSpace; // 0x8(0x8)
	};


	// Struct PoseSearch.PoseSearchDatabaseAnimComposite
	// Inherited from FPoseSearchDatabaseAnimationAssetBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPoseSearchDatabaseAnimComposite : public FPoseSearchDatabaseAnimationAssetBase	
	{
	public:
		UAnimComposite* AnimComposite; // 0x8(0x8)
	};


	// Struct PoseSearch.PoseSearchDatabaseAnimMontage
	// Inherited from FPoseSearchDatabaseAnimationAssetBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPoseSearchDatabaseAnimMontage : public FPoseSearchDatabaseAnimationAssetBase	
	{
	public:
		UAnimMontage* AnimMontage; // 0x8(0x8)
	};


	// Struct PoseSearch.PoseSearchDatabaseMultiAnimAsset
	// Inherited from FPoseSearchDatabaseAnimationAssetBase
	// Size: 0x8 (0x10 - 0x8)
	struct FPoseSearchDatabaseMultiAnimAsset : public FPoseSearchDatabaseAnimationAssetBase	
	{
	public:
		UMultiAnimAsset* MultiAnimAsset; // 0x8(0x8)
	};


	// Struct PoseSearch.PoseSearchBone
	// Size: 0x10 (0x10 - 0x0)
	struct FPoseSearchBone	
	{
	public:
		FBoneReference Reference; // 0x0(0xC)
		int32_t Flags; // 0xC(0x4)
	};


	// Struct PoseSearch.PoseSearchTrajectorySample
	// Size: 0x8 (0x8 - 0x0)
	struct FPoseSearchTrajectorySample	
	{
	public:
		float Offset; // 0x0(0x4)
		int32_t Flags; // 0x4(0x4)
	};


	// Struct PoseSearch.PoseSearchHistoryCollectorAnimNodeReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FPoseSearchHistoryCollectorAnimNodeReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct PoseSearch.PoseSearchBlueprintResult
	// Size: 0x40 (0x40 - 0x0)
	struct FPoseSearchBlueprintResult	
	{
	public:
		UObject* SelectedAnimation; // 0x0(0x8)
		float SelectedTime; // 0x8(0x4)
		float WantedPlayRate; // 0xC(0x4)
		bool bLoop; // 0x10(0x1)
		bool bIsMirrored; // 0x11(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		FVector BlendParameters; // 0x18(0x18)
		TWeakObjectPtr<UPoseSearchDatabase*> SelectedDatabase; // 0x30(0x8)
		float SearchCost; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct PoseSearch.PoseSearchRoledSkeleton
	// Size: 0x38 (0x38 - 0x0)
	struct FPoseSearchRoledSkeleton	
	{
	public:
		USkeleton* Skeleton; // 0x0(0x8)
		UMirrorDataTable* MirrorDataTable; // 0x8(0x8)
		FName Role; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray<FBoneReference> BoneReferences; // 0x18(0x10)
		TArray<uint16_t> BoneIndicesWithParents; // 0x28(0x10)
	};


	// Struct PoseSearch.PoseSearchTrajectoryData
	// Size: 0x128 (0x128 - 0x0)
	struct FPoseSearchTrajectoryData	
	{
	public:
		float RotateTowardsMovementSpeed; // 0x0(0x4)
		float MaxControllerYawRate; // 0x4(0x4)
		float BendVelocityTowardsAcceleration; // 0x8(0x4)
		bool bUseSpeedRemappingCurve; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FRuntimeFloatCurve SpeedRemappingCurve; // 0x10(0x88)
		bool bUseAccelerationRemappingCurve; // 0x98(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve AccelerationRemappingCurve; // 0xA0(0x88)
	};


	// Struct PoseSearch.PoseSearchTrajectory_WorldCollisionResults
	// Size: 0x8 (0x8 - 0x0)
	struct FPoseSearchTrajectory_WorldCollisionResults	
	{
	public:
		float TimeToLand; // 0x0(0x4)
		float LandSpeed; // 0x4(0x4)
	};


	// Struct PoseSearch.PoseSearchQueryTrajectorySample
	// Size: 0x40 (0x40 - 0x0)
	struct FPoseSearchQueryTrajectorySample	
	{
	public:
		FQuat Facing; // 0x0(0x20)
		FVector Position; // 0x20(0x18)
		float AccumulatedSeconds; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct PoseSearch.PoseSearchQueryTrajectory
	// Size: 0x10 (0x10 - 0x0)
	struct FPoseSearchQueryTrajectory	
	{
	public:
		TArray<FPoseSearchQueryTrajectorySample> Samples; // 0x0(0x10)
	};


	// Struct PoseSearch.AnimNode_MotionMatching
	// Inherited from FAnimNode_BlendStack_Standalone -> FAnimNode_AssetPlayerBase -> FAnimNode_AssetPlayerRelevancyBase -> FAnimNode_Base
	// Size: 0xF0 (0x1B0 - 0xC0)
	struct FAnimNode_MotionMatching : public FAnimNode_BlendStack_Standalone	
	{
	public:
		UPoseSearchDatabase* Database; // 0xC0(0x8)
		float BlendTime; // 0xC8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		UBlendProfile* BlendProfile; // 0xD0(0x8)
		EAlphaBlendOption BlendOption; // 0xD8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
		FFloatInterval PoseJumpThresholdTime; // 0xDC(0x8)
		float PoseReselectHistory; // 0xE4(0x4)
		float SearchThrottleTime; // 0xE8(0x4)
		FFloatInterval PlayRate; // 0xEC(0x8)
		float PlayRateMultiplier; // 0xF4(0x4)
		bool bUseInertialBlend; // 0xF8(0x1)
		bool bResetOnBecomingRelevant; // 0xF9(0x1)
		bool bShouldSearch; // 0xFA(0x1)
		bool bShouldUseCachedChannelData; // 0xFB(0x1)
		unsigned char UnknownData02_6[0x9C]; // 0xFC(0x9C) UNKNOWN PROPERTY
		TArray<UPoseSearchDatabase*> DatabasesToSearch; // 0x198(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
	};


	// Struct PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
	// Inherited from FAnimNode_Base
	// Size: 0x2B8 (0x2C8 - 0x10)
	struct FAnimNode_PoseSearchHistoryCollector_Base : public FAnimNode_Base	
	{
	public:
		int32_t PoseCount; // 0x10(0x4)
		float SamplingInterval; // 0x14(0x4)
		TArray<FBoneReference> CollectedBones; // 0x18(0x10)
		bool bInitializeWithRefPose; // 0x28(0x1)
		bool bResetOnBecomingRelevant; // 0x29(0x1)
		bool bStoreScales; // 0x2A(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x2B(0x1) UNKNOWN PROPERTY
		float RootBoneRecoveryTime; // 0x2C(0x4)
		float RootBoneTranslationRecoveryRatio; // 0x30(0x4)
		float RootBoneRotationRecoveryRatio; // 0x34(0x4)
		unsigned char UnknownData01_6[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		bool bGenerateTrajectory; // 0x48(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FPoseSearchQueryTrajectory Trajectory; // 0x50(0x10)
		float TrajectorySpeedMultiplier; // 0x60(0x4)
		int32_t TrajectoryHistoryCount; // 0x64(0x4)
		int32_t TrajectoryPredictionCount; // 0x68(0x4)
		float PredictionSamplingInterval; // 0x6C(0x4)
		FPoseSearchTrajectoryData TrajectoryData; // 0x70(0x128)
		unsigned char UnknownData03_7[0x130]; // 0x198(0x130) UNKNOWN PROPERTY
	};


	// Struct PoseSearch.AnimNode_PoseSearchHistoryCollector
	// Inherited from FAnimNode_PoseSearchHistoryCollector_Base -> FAnimNode_Base
	// Size: 0x10 (0x2D8 - 0x2C8)
	struct FAnimNode_PoseSearchHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base	
	{
	public:
		FPoseLink Source; // 0x2C8(0x10)
	};


	// Struct PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
	// Inherited from FAnimNode_PoseSearchHistoryCollector_Base -> FAnimNode_Base
	// Size: 0x10 (0x2D8 - 0x2C8)
	struct FAnimNode_PoseSearchComponentSpaceHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base	
	{
	public:
		FComponentSpacePoseLink Source; // 0x2C8(0x10)
	};


	// Struct PoseSearch.PoseSearchFutureProperties
	// Size: 0x10 (0x10 - 0x0)
	struct FPoseSearchFutureProperties	
	{
	public:
		UObject* Animation; // 0x0(0x8)
		float AnimationTime; // 0x8(0x4)
		float IntervalTime; // 0xC(0x4)
	};


	// Struct PoseSearch.PoseSearchContinuingProperties
	// Size: 0x10 (0x10 - 0x0)
	struct FPoseSearchContinuingProperties	
	{
	public:
		UObject* PlayingAsset; // 0x0(0x8)
		float PlayingAssetAccumulatedTime; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};

}
