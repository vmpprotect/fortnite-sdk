#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ContextualAnimation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ContextualAnimation.ContextualAnimWarpTarget
	// Size: 0x40 (0x40 - 0x0)
	struct FContextualAnimWarpTarget	
	{
	public:
		FName Role; // 0x0(0x4)
		FName TargetName; // 0x4(0x4)
		FVector TargetLocation; // 0x8(0x18)
		FQuat TargetRotation; // 0x20(0x20)
	};


	// Struct ContextualAnimation.ContextualAnimRepData
	// Size: 0x1 (0x1 - 0x0)
	struct FContextualAnimRepData	
	{
	public:
		char RepCounter; // 0x0(0x1)
	};


	// Struct ContextualAnimation.ContextualAnimRepBindingsData
	// Inherited from FContextualAnimRepData
	// Size: 0x4F (0x50 - 0x1)
	struct FContextualAnimRepBindingsData : public FContextualAnimRepData	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FContextualAnimSceneBindings Bindings; // 0x8(0x28)
		TArray<FContextualAnimWarpPoint> WarpPoints; // 0x30(0x10)
		TArray<FContextualAnimWarpTarget> ExternalWarpTargets; // 0x40(0x10)
	};


	// Struct ContextualAnimation.ContextualAnimWarpPoint
	// Size: 0x70 (0x70 - 0x0)
	struct FContextualAnimWarpPoint	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
	};


	// Struct ContextualAnimation.ContextualAnimSceneBindings
	// Size: 0x28 (0x28 - 0x0)
	struct FContextualAnimSceneBindings	
	{
	public:
		char ID; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UContextualAnimSceneAsset* SceneAsset; // 0x8(0x8)
		int32_t SectionIdx; // 0x10(0x4)
		int32_t AnimSetIdx; // 0x14(0x4)
		TArray<FContextualAnimSceneBinding> Data; // 0x18(0x10)
	};


	// Struct ContextualAnimation.ContextualAnimSceneBinding
	// Size: 0xF0 (0xF0 - 0x0)
	struct FContextualAnimSceneBinding	
	{
	public:
		FContextualAnimSceneBindingContext Context; // 0x0(0xE0)
		int32_t AnimTrackIdx; // 0xE0(0x4)
		unsigned char UnknownData00_7[0xC]; // 0xE4(0xC) UNKNOWN PROPERTY
	};


	// Struct ContextualAnimation.ContextualAnimSceneBindingContext
	// Size: 0xE0 (0xE0 - 0x0)
	struct FContextualAnimSceneBindingContext	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x0(0x8)
		TWeakObjectPtr<UContextualAnimSceneActorComponent*> CachedSceneActorComp; // 0x8(0x8)
		TWeakObjectPtr<UAnimInstance*> CachedAnimInstance; // 0x10(0x8)
		TWeakObjectPtr<USkeletalMeshComponent*> CachedSkeletalMesh; // 0x18(0x8)
		TWeakObjectPtr<UCharacterMovementComponent*> CachedMovementComp; // 0x20(0x8)
		TWeakObjectPtr<UMotionWarpingComponent*> CachedMotionWarpingComp; // 0x28(0x8)
		unsigned char UnknownData00_7[0xB0]; // 0x30(0xB0) UNKNOWN PROPERTY
	};


	// Struct ContextualAnimation.ContextualAnimRepLateJoinData
	// Inherited from FContextualAnimRepData
	// Size: 0x37 (0x38 - 0x1)
	struct FContextualAnimRepLateJoinData : public FContextualAnimRepData	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AActor* Actor; // 0x8(0x8)
		FName Role; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray<FContextualAnimWarpPoint> WarpPoints; // 0x18(0x10)
		TArray<FContextualAnimWarpTarget> ExternalWarpTargets; // 0x28(0x10)
	};


	// Struct ContextualAnimation.ContextualAnimRepTransitionData
	// Inherited from FContextualAnimRepData
	// Size: 0x27 (0x28 - 0x1)
	struct FContextualAnimRepTransitionData : public FContextualAnimRepData	
	{
	public:
		char ID; // 0x1(0x1)
		char SectionIdx; // 0x2(0x1)
		char AnimSetIdx; // 0x3(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FContextualAnimWarpPoint> WarpPoints; // 0x8(0x10)
		TArray<FContextualAnimWarpTarget> ExternalWarpTargets; // 0x18(0x10)
	};


	// Struct ContextualAnimation.ContextualAnimIgnoreChannelsParam
	// Size: 0x18 (0x18 - 0x0)
	struct FContextualAnimIgnoreChannelsParam	
	{
	public:
		FName Role; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<TEnumAsByte> Channels; // 0x8(0x10)
	};


	// Struct ContextualAnimation.ContextualAnimAttachmentParams
	// Size: 0x70 (0x70 - 0x0)
	struct FContextualAnimAttachmentParams	
	{
	public:
		FName Role; // 0x0(0x4)
		FName SocketName; // 0x4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform RelativeTransform; // 0x10(0x60)
	};


	// Struct ContextualAnimation.ContextualAnimSet
	// Size: 0x68 (0x68 - 0x0)
	struct FContextualAnimSet	
	{
	public:
		TArray<FContextualAnimTrack> Tracks; // 0x0(0x10)
		TMap<FName, FTransform> WarpPoints; // 0x10(0x50)
		float RandomWeight; // 0x60(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct ContextualAnimation.ContextualAnimTrack
	// Size: 0xE0 (0xE0 - 0x0)
	struct FContextualAnimTrack	
	{
	public:
		UAnimSequenceBase* Animation; // 0x0(0x8)
		float AnimMaxStartTime; // 0x8(0x4)
		TEnumAsByte<EMovementMode> MovementMode; // 0xC(0x1)
		char CustomMovementMode; // 0xD(0x1)
		bool bOptional; // 0xE(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xF(0x1) UNKNOWN PROPERTY
		FContextualAnimAlignmentTrackContainer AlignmentData; // 0x10(0x28)
		FContextualAnimAlignmentTrackContainer IKTargetData; // 0x38(0x28)
		TArray<UContextualAnimSelectionCriterion*> SelectionCriteria; // 0x60(0x10)
		FTransform MeshToScene; // 0x70(0x60)
		FName Role; // 0xD0(0x4)
		int32_t SectionIdx; // 0xD4(0x4)
		int32_t AnimSetIdx; // 0xD8(0x4)
		int32_t AnimTrackIdx; // 0xDC(0x4)
	};


	// Struct ContextualAnimation.ContextualAnimAlignmentTrackContainer
	// Size: 0x28 (0x28 - 0x0)
	struct FContextualAnimAlignmentTrackContainer	
	{
	public:
		FAnimSequenceTrackContainer Tracks; // 0x0(0x20)
		float SampleInterval; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct ContextualAnimation.ContextualAnimSceneSection
	// Size: 0x80 (0x80 - 0x0)
	struct FContextualAnimSceneSection	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FContextualAnimSet> AnimSets; // 0x8(0x10)
		TMap<FName, FContextualAnimIKTargetDefContainer> RoleToIKTargetDefsMap; // 0x18(0x50)
		TArray<FContextualAnimWarpPointDefinition> WarpPointDefinitions; // 0x68(0x10)
		bool bSyncAnimations; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct ContextualAnimation.ContextualAnimWarpPointDefinition
	// Size: 0x1C (0x1C - 0x0)
	struct FContextualAnimWarpPointDefinition	
	{
	public:
		FName WarpTargetName; // 0x0(0x4)
		EContextualAnimWarpPointDefinitionMode Mode; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FName SocketName; // 0x8(0x4)
		FContextualAnimWarpPointCustomParams Params; // 0xC(0x10)
	};


	// Struct ContextualAnimation.ContextualAnimWarpPointCustomParams
	// Size: 0x10 (0x10 - 0x0)
	struct FContextualAnimWarpPointCustomParams	
	{
	public:
		FName Origin; // 0x0(0x4)
		bool bAlongClosestDistance; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FName OtherRole; // 0x8(0x4)
		float Weight; // 0xC(0x4)
	};


	// Struct ContextualAnimation.ContextualAnimIKTargetDefContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FContextualAnimIKTargetDefContainer	
	{
	public:
		TArray<FContextualAnimIKTargetDefinition> IKTargetDefs; // 0x0(0x10)
	};


	// Struct ContextualAnimation.ContextualAnimIKTargetDefinition
	// Size: 0x14 (0x14 - 0x0)
	struct FContextualAnimIKTargetDefinition	
	{
	public:
		FName GoalName; // 0x0(0x4)
		FName BoneName; // 0x4(0x4)
		EContextualAnimIKTargetProvider Provider; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FName TargetRoleName; // 0xC(0x4)
		FName TargetBoneName; // 0x10(0x4)
	};


	// Struct ContextualAnimation.ContextualAnimPoint
	// Size: 0x80 (0x80 - 0x0)
	struct FContextualAnimPoint	
	{
	public:
		FName Role; // 0x0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		float Speed; // 0x70(0x4)
		int32_t SectionIdx; // 0x74(0x4)
		int32_t AnimSetIdx; // 0x78(0x4)
		int32_t AnimTrackIdx; // 0x7C(0x4)
	};


	// Struct ContextualAnimation.ContextualAnimActorPreviewData
	// Size: 0x88 (0x88 - 0x0)
	struct FContextualAnimActorPreviewData	
	{
	public:
		FName Role; // 0x0(0x4)
		EContextualAnimActorPreviewType Type; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<USkeletalMesh*> PreviewSkeletalMesh; // 0x8(0x20)
		TWeakObjectPtr<UClass*> PreviewAnimInstance; // 0x28(0x20)
		TWeakObjectPtr<UStaticMesh*> PreviewStaticMesh; // 0x48(0x20)
		TWeakObjectPtr<UClass*> PreviewActorClass; // 0x68(0x20)
	};


	// Struct ContextualAnimation.ContextualAnimIKTarget
	// Size: 0x70 (0x70 - 0x0)
	struct FContextualAnimIKTarget	
	{
	public:
		FName GoalName; // 0x0(0x4)
		float Alpha; // 0x4(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
	};


	// Struct ContextualAnimation.ContextualAnimRoleDefinition
	// Size: 0x70 (0x70 - 0x0)
	struct FContextualAnimRoleDefinition	
	{
	public:
		FName Name; // 0x0(0x4)
		bool bIsCharacter; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float PreviewCapsuleHalfHeight; // 0x8(0x4)
		float PreviewCapsuleRadius; // 0xC(0x4)
		FTransform MeshToComponent; // 0x10(0x60)
	};


	// Struct ContextualAnimation.ContextualAnimStartSceneParams
	// Size: 0x68 (0x68 - 0x0)
	struct FContextualAnimStartSceneParams	
	{
	public:
		TMap<FName, FContextualAnimSceneBindingContext> RoleToActorMap; // 0x0(0x50)
		int32_t SectionIdx; // 0x50(0x4)
		int32_t AnimSetIdx; // 0x54(0x4)
		unsigned char UnknownData00_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
	};


	// Struct ContextualAnimation.ContextualAnimQueryResult
	// Size: 0xE0 (0xE0 - 0x0)
	struct FContextualAnimQueryResult	
	{
	public:
		TWeakObjectPtr<UAnimMontage*> Animation; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform EntryTransform; // 0x10(0x60)
		FTransform SyncTransform; // 0x70(0x60)
		float AnimStartTime; // 0xD0(0x4)
		int32_t AnimSetIdx; // 0xD4(0x4)
		unsigned char UnknownData01_7[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
	};


	// Struct ContextualAnimation.ContextualAnimQueryParams
	// Size: 0x80 (0x80 - 0x0)
	struct FContextualAnimQueryParams	
	{
	public:
		TWeakObjectPtr<AActor*> Querier; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform QueryTransform; // 0x10(0x60)
		bool bComplexQuery; // 0x70(0x1)
		bool bFindAnimStartTime; // 0x71(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x72(0xE) UNKNOWN PROPERTY
	};

}
