#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimGraphRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		FRigidBodyAnimNodeReference SetOverridePhysicsAsset(FRigidBodyAnimNodeReference& Node, UPhysicsAsset PhysicsAsset); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A71D8
		void ConvertToRigidBodyAnimNodePure(FAnimNodeReference& Node, FRigidBodyAnimNodeReference& RigidBodyAnimNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A70F8
		FRigidBodyAnimNodeReference ConvertToRigidBodyAnimNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A7018
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

		void SnapToPosition(FBlendSpaceReference& BlendSpace, FVector NewPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144A7638
		FVector GetPosition(FBlendSpaceReference& BlendSpace); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A7558
		FVector GetFilteredPosition(FBlendSpaceReference& BlendSpace); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144A7478
		void ConvertToBlendSpacePure(FAnimNodeReference& Node, FBlendSpaceReference& BlendSpace, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A7398
		FBlendSpaceReference ConvertToBlendSpace(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A72B8
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

		TArray GetSequencerAnimSlotNames(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF4144A77F8
		bool AllowsCinematicOverride(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF4144A7718
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

		void SetState(FAnimUpdateContext& UpdateContext, FAnimationStateMachineReference& Node, FName TargetState, float duration, TEnumAsByte BlendType, UBlendProfile BlendProfile, EAlphaBlendOption AlphaBlendOption, UCurveFloat CustomBlendCurve); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A80B8
		bool IsStateBlendingOut(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A7FD8
		bool IsStateBlendingIn(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A7EF8
		FName GetState(FAnimUpdateContext& UpdateContext, FAnimationStateMachineReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A7E18
		float GetRelevantAnimTimeRemainingFraction(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A7D38
		float GetRelevantAnimTimeRemaining(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A7C58
		void ConvertToAnimationStateResultPure(FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A7B78
		void ConvertToAnimationStateResult(FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A7A98
		void ConvertToAnimationStateMachinePure(FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A79B8
		void ConvertToAnimationStateMachine(FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A78D8
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

		bool IsActive(FAnimExecutionContext& Context); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A8898
		float GetDeltaTime(FAnimUpdateContext& Context); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A87B8
		float GetCurrentWeight(FAnimUpdateContext& Context); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A86D8
		FAnimNodeReference GetAnimNodeReference(UAnimInstance Instance, int32_t Index); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144A85F8
		UAnimInstance GetAnimInstance(FAnimExecutionContext& Context); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A8518
		FAnimUpdateContext ConvertToUpdateContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A8438
		FAnimPoseContext ConvertToPoseContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A8358
		FAnimInitializationContext ConvertToInitializationContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A8278
		FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144A8198
	};


	// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
	// Inherited from UAnimNotify -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UAnimNotify_PlayMontageNotify : public UAnimNotify	
	{
	public:
		FName NotifyName; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY

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

		void ResetNode(FBlendListBaseReference& BlendListBase); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144AF198
		FBlendListBaseReference ConvertToBlendListBase(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144AF0B8
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

		void SnapToPosition(FBlendSpacePlayerReference& BlendSpacePlayer, FVector NewPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144AFDD8
		bool ShouldResetPlayTimeWhenBlendSpaceChanges(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144AFCF8
		FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144AFC18
		FBlendSpacePlayerReference SetPlayRate(FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144AFB38
		FBlendSpacePlayerReference SetLoop(FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144AFA58
		FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(FAnimUpdateContext& UpdateContext, FBlendSpacePlayerReference& BlendSpacePlayer, UBlendSpace BlendSpace, float BlendTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144AF978
		FBlendSpacePlayerReference SetBlendSpace(FBlendSpacePlayerReference& BlendSpacePlayer, UBlendSpace BlendSpace); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144AF898
		float GetStartPosition(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144AF7B8
		FVector GetPosition(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144AF6D8
		float GetPlayRate(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144AF5F8
		bool GetLoop(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144AF518
		UBlendSpace GetBlendSpace(FBlendSpacePlayerReference& BlendSpacePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144AF438
		void ConvertToBlendSpacePlayerPure(FAnimNodeReference& Node, FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144AF358
		FBlendSpacePlayerReference ConvertToBlendSpacePlayer(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144AF278
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

		void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144B0778
		void K2_StartProfilingTimer(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B0698
		FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144B05B8
		float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144B04D8
		FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144B03F8
		float K2_EndProfilingTimer(bool bLog, FString LogPrefix); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B0318
		float K2_DistanceBetweenTwoSocketsAndMapRange(USkeletalMeshComponent Component, FName SocketOrBoneNameA, TEnumAsByte SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144B0238
		FVector K2_DirectionBetweenSockets(USkeletalMeshComponent Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144B0158
		float K2_CalculateVelocityFromSockets(float DeltaSeconds, USkeletalMeshComponent Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144B0078
		float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144AFF98
		float CalculateDirection(FVector& Velocity, FRotator& BaseRotation); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144AFEB8
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

		FLayeredBoneBlendReference SetBlendMask(FAnimUpdateContext& UpdateContext, FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, FName BlendMaskName); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B0AF8
		int32_t GetNumPoses(FLayeredBoneBlendReference& LayeredBoneBlend); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B0A18
		FLayeredBoneBlendReference ConvertToLayeredBoneBlend(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B0938
		void ConvertToLayeredBlendPerBonePure(FAnimNodeReference& Node, FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B0858
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

		bool HasLinkedAnimInstance(FLinkedAnimGraphReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B0E78
		UAnimInstance GetLinkedAnimInstance(FLinkedAnimGraphReference& Node); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B0D98
		void ConvertToLinkedAnimGraphPure(FAnimNodeReference& Node, FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B0CB8
		FLinkedAnimGraphReference ConvertToLinkedAnimGraph(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B0BD8
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

		FMirrorAnimNodeReference SetMirrorTransitionBlendTime(FMirrorAnimNodeReference& MirrorNode, float InBlendTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B1498
		FMirrorAnimNodeReference SetMirror(FMirrorAnimNodeReference& MirrorNode, bool bInMirror); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B13B8
		float GetMirrorTransitionBlendTime(FMirrorAnimNodeReference& MirrorNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B12D8
		UMirrorDataTable GetMirrorDataTable(FMirrorAnimNodeReference& MirrorNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B11F8
		bool GetMirror(FMirrorAnimNodeReference& MirrorNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B1118
		void ConvertToMirrorNodePure(FAnimNodeReference& Node, FMirrorAnimNodeReference& MirrorNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B1038
		FMirrorAnimNodeReference ConvertToMirrorNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B0F58
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

		FModifyCurveAnimNodeReference SetCurveMap(FModifyCurveAnimNodeReference& ModifyCurveNode, TMap& InCurveMap); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B1AB8
		FModifyCurveAnimNodeReference SetApplyMode(FModifyCurveAnimNodeReference& ModifyCurveNode, EModifyCurveApplyMode InMode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B19D8
		FModifyCurveAnimNodeReference SetAlpha(FModifyCurveAnimNodeReference& ModifyCurveNode, float InAlpha); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B18F8
		EModifyCurveApplyMode GetApplyMode(FModifyCurveAnimNodeReference& ModifyCurveNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B1818
		float GetAlpha(FModifyCurveAnimNodeReference& ModifyCurveNode); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B1738
		void ConvertToModifyCurveNodePure(FAnimNodeReference& Node, FModifyCurveAnimNodeReference& ModifyCurveNode, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B1658
		FModifyCurveAnimNodeReference ConvertToModifyCurveNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B1578
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
		unsigned char UnknownData01_7[0x30]; // 0x78(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimGraphRuntime.PlayMontageCallbackProxy");
			return ret;
		}

		void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms 0x7FF4144B1F18
		void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|RequiredAPI|Native|Protected|HasOutParms 0x7FF4144B1E38
		void OnMontageEnded(UAnimMontage Montage, bool bInterrupted); // Flags: Final|RequiredAPI|Native|Protected 0x7FF4144B1D58
		void OnMontageBlendingOut(UAnimMontage Montage, bool bInterrupted); // Flags: Final|RequiredAPI|Native|Protected 0x7FF4144B1C78
		UPlayMontageCallbackProxy CreateProxyObjectForPlayMontage(USkeletalMeshComponent InSkeletalMeshComponent, UAnimMontage MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B1B98
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

		FSequenceEvaluatorReference SetSequenceWithInertialBlending(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, UAnimSequenceBase Sequence, float BlendTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B26F8
		FSequenceEvaluatorReference SetSequence(FSequenceEvaluatorReference& SequenceEvaluator, UAnimSequenceBase Sequence); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B2618
		FSequenceEvaluatorReference SetExplicitTime(FSequenceEvaluatorReference& SequenceEvaluator, float Time); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B2538
		FSequenceEvaluatorReference SetExplicitFrame(FSequenceEvaluatorReference& SequenceEvaluator, int32_t Frame); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B2458
		UAnimSequenceBase GetSequence(FSequenceEvaluatorReference& SequenceEvaluator); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B2378
		float GetAccumulatedTime(FSequenceEvaluatorReference& SequenceEvaluator); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B2298
		void ConvertToSequenceEvaluatorPure(FAnimNodeReference& Node, FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B21B8
		FSequenceEvaluatorReference ConvertToSequenceEvaluator(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B20D8
		FSequenceEvaluatorReference AdvanceTime(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B1FF8
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

		FSequencePlayerReference SetStartPosition(FSequencePlayerReference& SequencePlayer, float StartPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B3338
		FSequencePlayerReference SetSequenceWithInertialBlending(FAnimUpdateContext& UpdateContext, FSequencePlayerReference& SequencePlayer, UAnimSequenceBase Sequence, float BlendTime); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B3258
		FSequencePlayerReference SetSequence(FSequencePlayerReference& SequencePlayer, UAnimSequenceBase Sequence); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B3178
		FSequencePlayerReference SetPlayRate(FSequencePlayerReference& SequencePlayer, float PlayRate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B3098
		FSequencePlayerReference SetAccumulatedTime(FSequencePlayerReference& SequencePlayer, float Time); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B2FB8
		float GetStartPosition(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B2ED8
		UAnimSequenceBase GetSequencePure(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B2DF8
		FSequencePlayerReference GetSequence(FSequencePlayerReference& SequencePlayer, UAnimSequenceBase& SequenceBase); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B2D18
		float GetPlayRate(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B2C38
		bool GetLoopAnimation(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B2B58
		float GetAccumulatedTime(FSequencePlayerReference& SequencePlayer); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B2A78
		void ConvertToSequencePlayerPure(FAnimNodeReference& Node, FSequencePlayerReference& SequencePlayer, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B2998
		FSequencePlayerReference ConvertToSequencePlayer(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B28B8
		float ComputePlayRateFromDuration(FSequencePlayerReference& SequencePlayer, float duration); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B27D8
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

		FSkeletalControlReference SetAlpha(FSkeletalControlReference& SkeletalControl, float Alpha); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B36B8
		float GetAlpha(FSkeletalControlReference& SkeletalControl); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B35D8
		void ConvertToSkeletalControlPure(FAnimNodeReference& Node, FSkeletalControlReference& SkeletalControl, bool& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144B34F8
		FSkeletalControlReference ConvertToSkeletalControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B3418
	};

}
