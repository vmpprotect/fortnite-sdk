#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ContextualAnimation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FAlphaBlend BlendIn; // 0x38(0x30)
		FAlphaBlend BlendOut; // 0x68(0x30)
		bool bEnable; // 0x98(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

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

		USkeletalMeshComponent GetMesh(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74DF1DCB0(relative to base address)
	};


	// Class ContextualAnimation.ContextualAnimSceneActorComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x1C8 (0x690 - 0x4C8)
	class UContextualAnimSceneActorComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJoinedSceneDelegate; // 0x4D0(0x10)
		FMulticastInlineDelegate OnLeftSceneDelegate; // 0x4E0(0x10)
		FMulticastInlineDelegate OnPlayMontageNotifyBeginDelegate; // 0x4F0(0x10)
		UContextualAnimSceneAsset* SceneAsset; // 0x500(0x8)
		bool bEnableDebug; // 0x508(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x509(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UAnimInstance*> OwnerAnimInstance; // 0x50C(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x514(0x4) UNKNOWN PROPERTY
		FContextualAnimRepBindingsData RepBindings; // 0x518(0x50)
		FContextualAnimRepLateJoinData RepLateJoinData; // 0x568(0x38)
		FContextualAnimRepTransitionData RepTransitionData; // 0x5A0(0x28)
		FContextualAnimRepTransitionData RepTransitionSingleActorData; // 0x5C8(0x28)
		FContextualAnimSceneBindings Bindings; // 0x5F0(0x28)
		TArray<FContextualAnimIKTarget> IKTargets; // 0x618(0x10)
		TArray<FName> WarpTargetNamesCache; // 0x628(0x10)
		unsigned char UnknownData03_7[0x58]; // 0x638(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSceneActorComponent");
			return ret;
		}

		bool TransitionSingleActor(int32_t SectionIdx, int32_t AnimSetIdx); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF1E89C(relative to base address)
		bool TransitionContextualAnimSceneToSpecificSet(FName SectionName, int32_t AnimSetIdx); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF1E7DC(relative to base address)
		bool TransitionContextualAnimScene(FName SectionName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF1E730(relative to base address)
		bool StartContextualAnimScene(FContextualAnimSceneBindings& InBindings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF1E678(relative to base address)
		void ServerStartContextualAnimScene(FContextualAnimSceneBindings InBindings); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74DF1E51C(relative to base address)
		void ServerEarlyOutContextualAnimScene(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74DF1E4D0(relative to base address)
		void OnTickPose(USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion); // Flags: Native|Protected, Memory Exec: 0x7FF74DF1E190(relative to base address)
		void OnRep_TransitionData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DF1E17C(relative to base address)
		void OnRep_RepTransitionSingleActor(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DF1E168(relative to base address)
		void OnRep_LateJoinData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DF1E154(relative to base address)
		void OnRep_Bindings(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DF1E140(relative to base address)
		void OnPlayMontageNotifyBegin(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74DF1E060(relative to base address)
		void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DF1DF98(relative to base address)
		void OnLeftScene(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnJoinedScene(FContextualAnimSceneBindings& InBindings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF1DF10(relative to base address)
		bool LateJoinContextualAnimScene(AActor* Actor, FName Role); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF1DE30(relative to base address)
		bool IsInActiveScene(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1DDD8(relative to base address)
		TArray GetIKTargets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1DC38(relative to base address)
		FContextualAnimIKTarget GetIKTargetByGoalName(FName GoalName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1DB54(relative to base address)
		FContextualAnimSceneBindings GetBindings(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1DB38(relative to base address)
		void EarlyOutContextualAnimScene(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF1D630(relative to base address)
	};


	// Class ContextualAnimation.ContextualAnimRolesAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UContextualAnimRolesAsset : public UDataAsset	
	{
	public:
		TArray<FContextualAnimRoleDefinition> Roles; // 0x30(0x10)

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
		UContextualAnimRolesAsset* RolesAsset; // 0x30(0x8)
		FName PrimaryRole; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<FContextualAnimSceneSection> Sections; // 0x40(0x10)
		float Radius; // 0x50(0x4)
		EContextualAnimCollisionBehavior CollisionBehavior; // 0x54(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		TArray<FContextualAnimIgnoreChannelsParam> CollisionChannelsToIgnoreParams; // 0x58(0x10)
		TArray<FContextualAnimAttachmentParams> AttachmentParams; // 0x68(0x10)
		bool bIgnoreClientMovementErrorChecksAndCorrection; // 0x78(0x1)
		bool bPrecomputeAlignmentTracks; // 0x79(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x7A(0x2) UNKNOWN PROPERTY
		int32_t SampleRate; // 0x7C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ContextualAnimation.ContextualAnimSceneAsset");
			return ret;
		}

		bool Query(FName Role, FContextualAnimQueryResult& OutResult, FContextualAnimQueryParams& QueryParams, FTransform& ToWorldTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1E290(relative to base address)
		TArray GetRoles(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74DF1DCD8(relative to base address)
		void GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier, EContextualAnimCriterionToConsider CriterionToConsider, TArray<FContextualAnimPoint>& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1D828(relative to base address)
		void GetAlignmentPointsForSecondaryRole(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, TArray<FContextualAnimPoint>& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1D644(relative to base address)
		void BP_GetStartAndEndTimeForWarpSection(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName WarpSectionName, float& OutStartTime, float& OutEndTime); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1B070(relative to base address)
		FTransform BP_GetIKTargetTransformForRoleAtTime(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName TrackName, float Time); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1AEB4(relative to base address)
		FTransform BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, float Time); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1AD20(relative to base address)
		int32_t BP_FindAnimSetIndexByAnimation(int32_t SectionIdx, UAnimSequenceBase* Animation); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1AAD8(relative to base address)
		UAnimSequenceBase BP_FindAnimationForRole(int32_t SectionIdx, int32_t AnimSetIdx, FName Role); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1AC0C(relative to base address)
	};


	// Class ContextualAnimation.ContextualAnimSelectionCriterion
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UContextualAnimSelectionCriterion : public UObject	
	{
	public:
		EContextualAnimCriterionType Type; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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

		UContextualAnimSceneAsset GetSceneAsset(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF1DD90(relative to base address)
		bool BP_DoesQuerierPassCondition(FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
	// Inherited from UContextualAnimSelectionCriterion -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UContextualAnimSelectionCriterion_TriggerArea : public UContextualAnimSelectionCriterion	
	{
	public:
		TArray<FVector> PolygonPoints; // 0x30(0x10)
		float Height; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float MinDistance; // 0x34(0x4)
		float MaxDistance; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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

		void BP_SceneBindings_GetSectionAndAnimSetIndices(FContextualAnimSceneBindings& Bindings, int32_t& SectionIdx, int32_t& AnimSetIdx); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1D46C(relative to base address)
		UContextualAnimSceneAsset BP_SceneBindings_GetSceneAsset(FContextualAnimSceneBindings& Bindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1D3C0(relative to base address)
		TArray BP_SceneBindings_GetBindings(FContextualAnimSceneBindings& Bindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1D310(relative to base address)
		FContextualAnimSceneBinding BP_SceneBindings_GetBindingByRole(FContextualAnimSceneBindings& Bindings, FName Role); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1D148(relative to base address)
		FContextualAnimSceneBinding BP_SceneBindings_GetBindingByActor(FContextualAnimSceneBindings& Bindings, AActor* Actor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1CF84(relative to base address)
		FTransform BP_SceneBindings_GetAlignmentTransformFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding, FContextualAnimWarpPoint& WarpPoint); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1CD88(relative to base address)
		FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint(FContextualAnimSceneBindings& Bindings, FName Role, FContextualAnimWarpPoint& WarpPoint, float Time); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1CA80(relative to base address)
		FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(FContextualAnimSceneBindings& Bindings, FName Role, FName RelativeToRole, float Time); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1C748(relative to base address)
		void BP_SceneBindings_CalculateWarpPoints(FContextualAnimSceneBindings& Bindings, TArray<FContextualAnimWarpPoint>& OutWarpPoints); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF1C638(relative to base address)
		void BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(FContextualAnimSceneBindings& Bindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF1C59C(relative to base address)
		FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActorWithExternalTransform(AActor* Actor, FTransform ExternalTransform); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1BE94(relative to base address)
		FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActor(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1BDB8(relative to base address)
		bool BP_SceneBindingContext_HasMatchingGameplayTag(FContextualAnimSceneBindingContext& BindingContext, FGameplayTag& TagToCheck); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1BC34(relative to base address)
		bool BP_SceneBindingContext_HasAnyMatchingGameplayTags(FContextualAnimSceneBindingContext& BindingContext, FGameplayTagContainer& TagContainer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1BAC4(relative to base address)
		bool BP_SceneBindingContext_HasAllMatchingGameplayTags(FContextualAnimSceneBindingContext& BindingContext, FGameplayTagContainer& TagContainer); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1B954(relative to base address)
		FVector BP_SceneBindingContext_GetVelocity(FContextualAnimSceneBindingContext& BindingContext); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1B81C(relative to base address)
		FTransform BP_SceneBindingContext_GetTransform(FContextualAnimSceneBindingContext& BindingContext); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1B70C(relative to base address)
		FGameplayTagContainer BP_SceneBindingContext_GetGameplayTags(FContextualAnimSceneBindingContext& BindingContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1B620(relative to base address)
		AActor BP_SceneBindingContext_GetActor(FContextualAnimSceneBindingContext& BindingContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1B53C(relative to base address)
		USkeletalMeshComponent BP_SceneBinding_GetSkeletalMesh(FContextualAnimSceneBinding& Binding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1C45C(relative to base address)
		FName BP_SceneBinding_GetRoleFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1C2EC(relative to base address)
		UAnimSequenceBase BP_SceneBinding_GetAnimationFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1C184(relative to base address)
		AActor BP_SceneBinding_GetActor(FContextualAnimSceneBinding& Binding); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DF1C09C(relative to base address)
		float BP_Montage_GetSectionTimeLeftFromPos(UAnimMontage* Montage, float Position); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DF1B470(relative to base address)
		void BP_Montage_GetSectionStartAndEndTime(UAnimMontage* Montage, int32_t SectionIndex, float& OutStartTime, float& OutEndTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF1B320(relative to base address)
		float BP_Montage_GetSectionLength(UAnimMontage* Montage, int32_t SectionIndex); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74DF1B254(relative to base address)
		void BP_DrawDebugPose(UObject* WorldContextObject, UAnimSequenceBase* Animation, float Time, FTransform LocalToWorldTransform, FLinearColor Color, float Lifetime, float Thickness); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DF1A628(relative to base address)
		bool BP_CreateContextualAnimSceneBindingsForTwoActors(UContextualAnimSceneAsset* SceneAsset, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Secondary, FContextualAnimSceneBindings& OutBindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF1A3E4(relative to base address)
		bool BP_CreateContextualAnimSceneBindings(UContextualAnimSceneAsset* SceneAsset, TMap<FName, FContextualAnimSceneBindingContext>& Params, FContextualAnimSceneBindings& OutBindings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DF1A258(relative to base address)
	};

}
