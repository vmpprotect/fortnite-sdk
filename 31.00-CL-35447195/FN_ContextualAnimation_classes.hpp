#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ContextualAnimation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ContextualAnimation.AnimNotifyState_EarlyOutContextualAnimWindow
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UAnimNotifyState_EarlyOutContextualAnimWindow : public UAnimNotifyState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.AnimNotifyState_EarlyOutContextualAnimWindow");
			return ret;
		}
	};


	// Class ContextualAnimation.AnimNotifyState_IKWindow
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UAnimNotifyState_IKWindow : public UAnimNotifyState	
	{
	public:
		FName GoalName; // 0x30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FAlphaBlend BlendIn; // 0x38(0x30)
		FAlphaBlend BlendOut; // 0x68(0x30)
		bool bEnable; // 0x98(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.AnimNotifyState_IKWindow");
			return ret;
		}
	};


	// Class ContextualAnimation.ContextualAnimActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UContextualAnimActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimActorInterface");
			return ret;
		}

		USkeletalMeshComponent GetMesh(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4146585B8
	};


	// Class ContextualAnimation.ContextualAnimSceneActorComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x1C8 (0x690 - 0x4C8)
	class UContextualAnimSceneActorComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJoinedSceneDelegate; // 0x4D0(0x10)
		FMulticastInlineDelegate OnLeftSceneDelegate; // 0x4E0(0x10)
		FMulticastInlineDelegate OnPlayMontageNotifyBeginDelegate; // 0x4F0(0x10)
		UContextualAnimSceneAsset SceneAsset; // 0x500(0x8)
		bool bEnableDebug; // 0x508(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x509(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr OwnerAnimInstance; // 0x50C(0x8)
		unsigned char UnknownData06_6[0x4]; // 0x514(0x4) UNKNOWN PROPERTY
		FContextualAnimRepBindingsData RepBindings; // 0x518(0x50)
		FContextualAnimRepLateJoinData RepLateJoinData; // 0x568(0x38)
		FContextualAnimRepTransitionData RepTransitionData; // 0x5A0(0x28)
		FContextualAnimRepTransitionData RepTransitionSingleActorData; // 0x5C8(0x28)
		FContextualAnimSceneBindings Bindings; // 0x5F0(0x28)
		TArray IKTargets; // 0x618(0x10)
		TArray WarpTargetNamesCache; // 0x628(0x10)
		unsigned char UnknownData07_7[0x58]; // 0x638(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSceneActorComponent");
			return ret;
		}

		bool TransitionSingleActor(int32_t SectionIdx, int32_t AnimSetIdx); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414659818
		bool TransitionContextualAnimSceneToSpecificSet(FName SectionName, int32_t AnimSetIdx); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414659738
		bool TransitionContextualAnimScene(FName SectionName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414659658
		bool StartContextualAnimScene(FContextualAnimSceneBindings& InBindings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414659578
		void ServerStartContextualAnimScene(FContextualAnimSceneBindings InBindings); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414659498
		void ServerEarlyOutContextualAnimScene(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4146593B8
		void OnTickPose(USkinnedMeshComponent SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion); // Flags: Native|Protected 0x7FF4146592D8
		void OnRep_TransitionData(); // Flags: Final|Native|Protected 0x7FF4146591F8
		void OnRep_RepTransitionSingleActor(); // Flags: Final|Native|Protected 0x7FF414659118
		void OnRep_LateJoinData(); // Flags: Final|Native|Protected 0x7FF414659038
		void OnRep_Bindings(); // Flags: Final|Native|Protected 0x7FF414658F58
		void OnPlayMontageNotifyBegin(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414658E78
		void OnMontageBlendingOut(UAnimMontage Montage, bool bInterrupted); // Flags: Final|Native|Protected 0x7FF414658D98
		void OnLeftScene(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414658CB8
		void OnJoinedScene(FContextualAnimSceneBindings& InBindings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414658BD8
		bool LateJoinContextualAnimScene(AActor Actor, FName Role); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414658AF8
		bool IsInActiveScene(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414658A18
		TArray GetIKTargets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414658938
		FContextualAnimIKTarget GetIKTargetByGoalName(FName GoalName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414658858
		FContextualAnimSceneBindings GetBindings(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414658778
		void EarlyOutContextualAnimScene(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414658698
	};


	// Class ContextualAnimation.ContextualAnimRolesAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UContextualAnimRolesAsset : public UDataAsset	
	{
	public:
		TArray Roles; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimRolesAsset");
			return ret;
		}
	};


	// Class ContextualAnimation.ContextualAnimSceneAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UContextualAnimSceneAsset : public UDataAsset	
	{
	public:
		UContextualAnimRolesAsset RolesAsset; // 0x30(0x8)
		FName PrimaryRole; // 0x38(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray Sections; // 0x40(0x10)
		float Radius; // 0x50(0x4)
		EContextualAnimCollisionBehavior CollisionBehavior; // 0x54(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		TArray CollisionChannelsToIgnoreParams; // 0x58(0x10)
		TArray AttachmentParams; // 0x68(0x10)
		bool bIgnoreClientMovementErrorChecksAndCorrection; // 0x78(0x1)
		bool bPrecomputeAlignmentTracks; // 0x79(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x7A(0x2) UNKNOWN PROPERTY
		int32_t SampleRate; // 0x7C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSceneAsset");
			return ret;
		}

		bool Query(FName Role, FContextualAnimQueryResult& OutResult, FContextualAnimQueryParams& QueryParams, FTransform& ToWorldTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414659FF8
		TArray GetRoles(); // Flags: Final|Native|Public|Const 0x7FF414659F18
		void GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier, EContextualAnimCriterionToConsider CriterionToConsider, TArray& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414659E38
		void GetAlignmentPointsForSecondaryRole(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, TArray& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414659D58
		void BP_GetStartAndEndTimeForWarpSection(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName WarpSectionName, float& OutStartTime, float& OutEndTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414659C78
		FTransform BP_GetIKTargetTransformForRoleAtTime(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName TrackName, float Time); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414659B98
		FTransform BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, float Time); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414659AB8
		int32_t BP_FindAnimSetIndexByAnimation(int32_t SectionIdx, UAnimSequenceBase Animation); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146599D8
		UAnimSequenceBase BP_FindAnimationForRole(int32_t SectionIdx, int32_t AnimSetIdx, FName Role); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146598F8
	};


	// Class ContextualAnimation.ContextualAnimSelectionCriterion
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UContextualAnimSelectionCriterion : public UObject	
	{
	public:
		EContextualAnimCriterionType Type; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSelectionCriterion");
			return ret;
		}
	};


	// Class ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint
	// Inherited from UContextualAnimSelectionCriterion -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UContextualAnimSelectionCriterion_Blueprint : public UContextualAnimSelectionCriterion	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint");
			return ret;
		}

		UContextualAnimSceneAsset GetSceneAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41465A1B8
		bool BP_DoesQuerierPassCondition(FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF41465A0D8
	};


	// Class ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
	// Inherited from UContextualAnimSelectionCriterion -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UContextualAnimSelectionCriterion_TriggerArea : public UContextualAnimSelectionCriterion	
	{
	public:
		TArray PolygonPoints; // 0x30(0x10)
		float Height; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea");
			return ret;
		}
	};


	// Class ContextualAnimation.ContextualAnimSelectionCriterion_Cone
	// Inherited from UContextualAnimSelectionCriterion -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UContextualAnimSelectionCriterion_Cone : public UContextualAnimSelectionCriterion	
	{
	public:
		EContextualAnimCriterionConeMode Mode; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float Distance; // 0x34(0x4)
		float HalfAngle; // 0x38(0x4)
		float Offset; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSelectionCriterion_Cone");
			return ret;
		}
	};


	// Class ContextualAnimation.ContextualAnimSelectionCriterion_Distance
	// Inherited from UContextualAnimSelectionCriterion -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UContextualAnimSelectionCriterion_Distance : public UContextualAnimSelectionCriterion	
	{
	public:
		EContextualAnimCriterionDistanceMode Mode; // 0x30(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float MinDistance; // 0x34(0x4)
		float MaxDistance; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSelectionCriterion_Distance");
			return ret;
		}
	};


	// Class ContextualAnimation.ContextualAnimUtilities
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UContextualAnimUtilities : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimUtilities");
			return ret;
		}

		void BP_SceneBindings_GetSectionAndAnimSetIndices(FContextualAnimSceneBindings& Bindings, int32_t& SectionIdx, int32_t& AnimSetIdx); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465BB18
		UContextualAnimSceneAsset BP_SceneBindings_GetSceneAsset(FContextualAnimSceneBindings& Bindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465BA38
		TArray BP_SceneBindings_GetBindings(FContextualAnimSceneBindings& Bindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465B958
		FContextualAnimSceneBinding BP_SceneBindings_GetBindingByRole(FContextualAnimSceneBindings& Bindings, FName Role); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465B878
		FContextualAnimSceneBinding BP_SceneBindings_GetBindingByActor(FContextualAnimSceneBindings& Bindings, AActor Actor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465B798
		FTransform BP_SceneBindings_GetAlignmentTransformFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding, FContextualAnimWarpPoint& WarpPoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41465B6B8
		FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint(FContextualAnimSceneBindings& Bindings, FName Role, FContextualAnimWarpPoint& WarpPoint, float Time); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41465B5D8
		FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(FContextualAnimSceneBindings& Bindings, FName Role, FName RelativeToRole, float Time); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41465B4F8
		void BP_SceneBindings_CalculateWarpPoints(FContextualAnimSceneBindings& Bindings, TArray& OutWarpPoints); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465B418
		void BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(FContextualAnimSceneBindings& Bindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465B338
		FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActorWithExternalTransform(AActor Actor, FTransform ExternalTransform); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41465B258
		FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActor(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41465B178
		bool BP_SceneBindingContext_HasMatchingGameplayTag(FContextualAnimSceneBindingContext& BindingContext, FGameplayTag& TagToCheck); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465B098
		bool BP_SceneBindingContext_HasAnyMatchingGameplayTags(FContextualAnimSceneBindingContext& BindingContext, FGameplayTagContainer& TagContainer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465AFB8
		bool BP_SceneBindingContext_HasAllMatchingGameplayTags(FContextualAnimSceneBindingContext& BindingContext, FGameplayTagContainer& TagContainer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465AED8
		FVector BP_SceneBindingContext_GetVelocity(FContextualAnimSceneBindingContext& BindingContext); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41465ADF8
		FTransform BP_SceneBindingContext_GetTransform(FContextualAnimSceneBindingContext& BindingContext); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41465AD18
		FGameplayTagContainer BP_SceneBindingContext_GetGameplayTags(FContextualAnimSceneBindingContext& BindingContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465AC38
		AActor BP_SceneBindingContext_GetActor(FContextualAnimSceneBindingContext& BindingContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465AB58
		USkeletalMeshComponent BP_SceneBinding_GetSkeletalMesh(FContextualAnimSceneBinding& Binding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465AA78
		FName BP_SceneBinding_GetRoleFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465A998
		UAnimSequenceBase BP_SceneBinding_GetAnimationFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465A8B8
		AActor BP_SceneBinding_GetActor(FContextualAnimSceneBinding& Binding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41465A7D8
		float BP_Montage_GetSectionTimeLeftFromPos(UAnimMontage Montage, float Position); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41465A6F8
		void BP_Montage_GetSectionStartAndEndTime(UAnimMontage Montage, int32_t SectionIndex, float& OutStartTime, float& OutEndTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465A618
		float BP_Montage_GetSectionLength(UAnimMontage Montage, int32_t SectionIndex); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41465A538
		void BP_DrawDebugPose(UObject WorldContextObject, UAnimSequenceBase Animation, float Time, FTransform LocalToWorldTransform, FLinearColor Color, float Lifetime, float Thickness); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41465A458
		bool BP_CreateContextualAnimSceneBindingsForTwoActors(UContextualAnimSceneAsset SceneAsset, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Secondary, FContextualAnimSceneBindings& OutBindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465A378
		bool BP_CreateContextualAnimSceneBindings(UContextualAnimSceneAsset SceneAsset, TMap& Params, FContextualAnimSceneBindings& OutBindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41465A298
	};

}
