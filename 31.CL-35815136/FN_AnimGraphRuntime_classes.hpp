#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimGraphRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AnimGraphRuntime.AnimNodeRigidBodyLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimNodeRigidBodyLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.AnimNodeRigidBodyLibrary");
			return ret;
		}

		FRigidBodyAnimNodeReference SetOverridePhysicsAsset(FRigidBodyAnimNodeReference& Node, UPhysicsAsset* PhysicsAsset); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C14493C(relative to base address)
		void ConvertToRigidBodyAnimNodePure(FAnimNodeReference& Node, FRigidBodyAnimNodeReference& RigidBodyAnimNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C143A44(relative to base address)
		FRigidBodyAnimNodeReference ConvertToRigidBodyAnimNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C143918(relative to base address)
	};


	// Class AnimGraphRuntime.BlendSpaceLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlendSpaceLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.BlendSpaceLibrary");
			return ret;
		}

		void SnapToPosition(FBlendSpaceReference& BlendSpace, FVector NewPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C145088(relative to base address)
		FVector GetPosition(FBlendSpaceReference& BlendSpace); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C14418C(relative to base address)
		FVector GetFilteredPosition(FBlendSpaceReference& BlendSpace); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C1440A4(relative to base address)
		void ConvertToBlendSpacePure(FAnimNodeReference& Node, FBlendSpaceReference& BlendSpace, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C1433D4(relative to base address)
		FBlendSpaceReference ConvertToBlendSpace(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1432A8(relative to base address)
	};


	// Class AnimGraphRuntime.SequencerAnimationOverride
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USequencerAnimationOverride : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.SequencerAnimationOverride");
			return ret;
		}

		TArray GetSequencerAnimSlotNames(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C1443CC(relative to base address)
		bool AllowsCinematicOverride(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7484CBA18(relative to base address)
	};


	// Class AnimGraphRuntime.AnimationStateMachineLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.AnimationStateMachineLibrary");
			return ret;
		}

		void SetState(FAnimUpdateContext& UpdateContext, FAnimationStateMachineReference& Node, FName TargetState, float duration, TEnumAsByte<ETransitionLogicType> BlendType, UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, UCurveFloat* CustomBlendCurve); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C144AB4(relative to base address)
		bool IsStateBlendingOut(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C1447BC(relative to base address)
		bool IsStateBlendingIn(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C14463C(relative to base address)
		FName GetState(FAnimUpdateContext& UpdateContext, FAnimationStateMachineReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C14440C(relative to base address)
		float GetRelevantAnimTimeRemainingFraction(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C144274(relative to base address)
		float GetRelevantAnimTimeRemaining(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7486135E0(relative to base address)
		void ConvertToAnimationStateResultPure(FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C14313C(relative to base address)
		void ConvertToAnimationStateResult(FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74861347C(relative to base address)
		void ConvertToAnimationStateMachinePure(FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C142F88(relative to base address)
		void ConvertToAnimationStateMachine(FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C142E18(relative to base address)
	};


	// Class AnimGraphRuntime.AnimExecutionContextLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.AnimExecutionContextLibrary");
			return ret;
		}

		bool IsActive(FAnimExecutionContext& Context); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C14458C(relative to base address)
		float GetDeltaTime(FAnimUpdateContext& Context); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C143FA8(relative to base address)
		float GetCurrentWeight(FAnimUpdateContext& Context); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C143EAC(relative to base address)
		FAnimNodeReference GetAnimNodeReference(UAnimInstance* Instance, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C143DE0(relative to base address)
		UAnimInstance GetAnimInstance(FAnimExecutionContext& Context); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C143D28(relative to base address)
		FAnimUpdateContext ConvertToUpdateContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C143BFC(relative to base address)
		FAnimPoseContext ConvertToPoseContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1437EC(relative to base address)
		FAnimInitializationContext ConvertToInitializationContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1436C0(relative to base address)
		FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C143594(relative to base address)
	};


	// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
	// Inherited from UAnimNotify -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UAnimNotify_PlayMontageNotify : public UAnimNotify	
	{
	public:
		FName NotifyName; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify");
			return ret;
		}
	};


	// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState	
	{
	public:
		FName NotifyName; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
			return ret;
		}
	};


	// Class AnimGraphRuntime.AnimSequencerInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x8 (0x3C0 - 0x3B8)
	class UAnimSequencerInstance : public UAnimInstance	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.AnimSequencerInstance");
			return ret;
		}
	};


	// Class AnimGraphRuntime.BlendListBaseLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlendListBaseLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.BlendListBaseLibrary");
			return ret;
		}

		void ResetNode(FBlendListBaseReference& BlendListBase); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74891ACD0(relative to base address)
		FBlendListBaseReference ConvertToBlendListBase(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74861334C(relative to base address)
	};


	// Class AnimGraphRuntime.BlendSpacePlayerLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.BlendSpacePlayerLibrary");
			return ret;
		}

		void SnapToPosition(FBlendSpacePlayerReference& BlendSpacePlayer, FVector NewPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C168BCC(relative to base address)
		bool ShouldResetPlayTimeWhenBlendSpaceChanges(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C168B0C(relative to base address)
		FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C168994(relative to base address)
		FBlendSpacePlayerReference SetPlayRate(FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16881C(relative to base address)
		FBlendSpacePlayerReference SetLoop(FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1683B4(relative to base address)
		FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(FAnimUpdateContext& UpdateContext, FBlendSpacePlayerReference& BlendSpacePlayer, UBlendSpace* BlendSpace, float BlendTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C167F64(relative to base address)
		FBlendSpacePlayerReference SetBlendSpace(FBlendSpacePlayerReference& BlendSpacePlayer, UBlendSpace* BlendSpace); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C167DEC(relative to base address)
		float GetStartPosition(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C165884(relative to base address)
		FVector GetPosition(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16579C(relative to base address)
		float GetPlayRate(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16570C(relative to base address)
		bool GetLoop(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16537C(relative to base address)
		UBlendSpace GetBlendSpace(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C1651FC(relative to base address)
		void ConvertToBlendSpacePlayerPure(FAnimNodeReference& Node, FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C164348(relative to base address)
		FBlendSpacePlayerReference ConvertToBlendSpacePlayer(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16421C(relative to base address)
	};


	// Class AnimGraphRuntime.KismetAnimationLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UKismetAnimationLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.KismetAnimationLibrary");
			return ret;
		}

		void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C166F48(relative to base address)
		void K2_StartProfilingTimer(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C166F34(relative to base address)
		FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C166C7C(relative to base address)
		float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74727E7F0(relative to base address)
		FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C166770(relative to base address)
		float K2_EndProfilingTimer(bool bLog, FString LogPrefix); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C166688(relative to base address)
		float K2_DistanceBetweenTwoSocketsAndMapRange(USkeletalMeshComponent* Component, FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C166290(relative to base address)
		FVector K2_DirectionBetweenSockets(USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748683ABC(relative to base address)
		float K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C1659D4(relative to base address)
		float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF748B6DCDC(relative to base address)
		float CalculateDirection(FVector& Velocity, FRotator& BaseRotation); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C1640F4(relative to base address)
	};


	// Class AnimGraphRuntime.LayeredBoneBlendLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.LayeredBoneBlendLibrary");
			return ret;
		}

		FLayeredBoneBlendReference SetBlendMask(FAnimUpdateContext& UpdateContext, FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, FName BlendMaskName); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C167B10(relative to base address)
		int32_t GetNumPoses(FLayeredBoneBlendReference& LayeredBoneBlend); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16564C(relative to base address)
		FLayeredBoneBlendReference ConvertToLayeredBoneBlend(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1646C8(relative to base address)
		void ConvertToLayeredBlendPerBonePure(FAnimNodeReference& Node, FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C164508(relative to base address)
	};


	// Class AnimGraphRuntime.LinkedAnimGraphLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.LinkedAnimGraphLibrary");
			return ret;
		}

		bool HasLinkedAnimInstance(FLinkedAnimGraphReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C165914(relative to base address)
		UAnimInstance GetLinkedAnimInstance(FLinkedAnimGraphReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C1652BC(relative to base address)
		void ConvertToLinkedAnimGraphPure(FAnimNodeReference& Node, FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C164920(relative to base address)
		FLinkedAnimGraphReference ConvertToLinkedAnimGraph(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1647F4(relative to base address)
	};


	// Class AnimGraphRuntime.MirrorAnimLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMirrorAnimLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.MirrorAnimLibrary");
			return ret;
		}

		FMirrorAnimNodeReference SetMirrorTransitionBlendTime(FMirrorAnimNodeReference& MirrorNode, float InBlendTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1686A4(relative to base address)
		FMirrorAnimNodeReference SetMirror(FMirrorAnimNodeReference& MirrorNode, bool bInMirror); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16852C(relative to base address)
		float GetMirrorTransitionBlendTime(FMirrorAnimNodeReference& MirrorNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C1655BC(relative to base address)
		UMirrorDataTable GetMirrorDataTable(FMirrorAnimNodeReference& MirrorNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C1654FC(relative to base address)
		bool GetMirror(FMirrorAnimNodeReference& MirrorNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16543C(relative to base address)
		void ConvertToMirrorNodePure(FAnimNodeReference& Node, FMirrorAnimNodeReference& MirrorNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C164C0C(relative to base address)
		FMirrorAnimNodeReference ConvertToMirrorNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C164AE0(relative to base address)
	};


	// Class AnimGraphRuntime.ModifyCurveAnimLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModifyCurveAnimLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.ModifyCurveAnimLibrary");
			return ret;
		}

		FModifyCurveAnimNodeReference SetCurveMap(FModifyCurveAnimNodeReference& ModifyCurveNode, TMap<FName, float>& InCurveMap); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C168244(relative to base address)
		FModifyCurveAnimNodeReference SetApplyMode(FModifyCurveAnimNodeReference& ModifyCurveNode, EModifyCurveApplyMode InMode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C167998(relative to base address)
		FModifyCurveAnimNodeReference SetAlpha(FModifyCurveAnimNodeReference& ModifyCurveNode, float InAlpha); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C167820(relative to base address)
		EModifyCurveApplyMode GetApplyMode(FModifyCurveAnimNodeReference& ModifyCurveNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C165148(relative to base address)
		float GetAlpha(FModifyCurveAnimNodeReference& ModifyCurveNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1650B8(relative to base address)
		void ConvertToModifyCurveNodePure(FAnimNodeReference& Node, FModifyCurveAnimNodeReference& ModifyCurveNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C164EF8(relative to base address)
		FModifyCurveAnimNodeReference ConvertToModifyCurveNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C164DCC(relative to base address)
	};


	// Class AnimGraphRuntime.PlayMontageCallbackProxy
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UPlayMontageCallbackProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
		FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
		FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
		FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
		FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)
		unsigned char UnknownData00_7[0x30]; // 0x78(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.PlayMontageCallbackProxy");
			return ret;
		}

		void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms, Memory Exec: 0x7FF74C167740(relative to base address)
		void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms, Memory Exec: 0x7FF74C167660(relative to base address)
		void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74C167598(relative to base address)
		void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74C1674D0(relative to base address)
		UPlayMontageCallbackProxy CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF747A562A8(relative to base address)
	};


	// Class AnimGraphRuntime.SequenceEvaluatorLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.SequenceEvaluatorLibrary");
			return ret;
		}

		FSequenceEvaluatorReference SetSequenceWithInertialBlending(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, UAnimSequenceBase* Sequence, float BlendTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16E448(relative to base address)
		FSequenceEvaluatorReference SetSequence(FSequenceEvaluatorReference& SequenceEvaluator, UAnimSequenceBase* Sequence); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16E158(relative to base address)
		FSequenceEvaluatorReference SetExplicitTime(FSequenceEvaluatorReference& SequenceEvaluator, float Time); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16DE68(relative to base address)
		FSequenceEvaluatorReference SetExplicitFrame(FSequenceEvaluatorReference& SequenceEvaluator, int32_t Frame); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16DCF0(relative to base address)
		UAnimSequenceBase GetSequence(FSequenceEvaluatorReference& SequenceEvaluator); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D6E8(relative to base address)
		float GetAccumulatedTime(FSequenceEvaluatorReference& SequenceEvaluator); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D3E8(relative to base address)
		void ConvertToSequenceEvaluatorPure(FAnimNodeReference& Node, FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16CC50(relative to base address)
		FSequenceEvaluatorReference ConvertToSequenceEvaluator(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16CB24(relative to base address)
		FSequenceEvaluatorReference AdvanceTime(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16C78C(relative to base address)
	};


	// Class AnimGraphRuntime.SequencePlayerLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USequencePlayerLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.SequencePlayerLibrary");
			return ret;
		}

		FSequencePlayerReference SetStartPosition(FSequencePlayerReference& SequencePlayer, float StartPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16EA08(relative to base address)
		FSequencePlayerReference SetSequenceWithInertialBlending(FAnimUpdateContext& UpdateContext, FSequencePlayerReference& SequencePlayer, UAnimSequenceBase* Sequence, float BlendTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16E728(relative to base address)
		FSequencePlayerReference SetSequence(FSequencePlayerReference& SequencePlayer, UAnimSequenceBase* Sequence); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16E2D0(relative to base address)
		FSequencePlayerReference SetPlayRate(FSequencePlayerReference& SequencePlayer, float PlayRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16DFE0(relative to base address)
		FSequencePlayerReference SetAccumulatedTime(FSequencePlayerReference& SequencePlayer, float Time); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16DA00(relative to base address)
		float GetStartPosition(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D970(relative to base address)
		UAnimSequenceBase GetSequencePure(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D8B0(relative to base address)
		FSequencePlayerReference GetSequence(FSequencePlayerReference& SequencePlayer, UAnimSequenceBase* SequenceBase); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16D7A8(relative to base address)
		float GetPlayRate(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D658(relative to base address)
		bool GetLoopAnimation(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D598(relative to base address)
		float GetAccumulatedTime(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D478(relative to base address)
		void ConvertToSequencePlayerPure(FAnimNodeReference& Node, FSequencePlayerReference& SequencePlayer, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16CF3C(relative to base address)
		FSequencePlayerReference ConvertToSequencePlayer(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16CE10(relative to base address)
		float ComputePlayRateFromDuration(FSequencePlayerReference& SequencePlayer, float duration); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16C9B4(relative to base address)
	};


	// Class AnimGraphRuntime.SequencerAnimationSupport
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USequencerAnimationSupport : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.SequencerAnimationSupport");
			return ret;
		}
	};


	// Class AnimGraphRuntime.SkeletalControlLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USkeletalControlLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.SkeletalControlLibrary");
			return ret;
		}

		FSkeletalControlReference SetAlpha(FSkeletalControlReference& SkeletalControl, float Alpha); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16DB78(relative to base address)
		float GetAlpha(FSkeletalControlReference& SkeletalControl); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D508(relative to base address)
		void ConvertToSkeletalControlPure(FAnimNodeReference& Node, FSkeletalControlReference& SkeletalControl, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C16D228(relative to base address)
		FSkeletalControlReference ConvertToSkeletalControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C16D0FC(relative to base address)
	};

}
