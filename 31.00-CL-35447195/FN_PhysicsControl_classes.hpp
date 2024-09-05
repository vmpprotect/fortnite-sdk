#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PhysicsControl
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PhysicsControl.PhysicsControlAsset
	// Inherited from UObject
	// Size: 0x1E8 (0x210 - 0x28)
	class UPhysicsControlAsset : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FPhysicsControlCharacterSetupData CharacterSetupData; // 0x30(0xC0)
		FPhysicsControlAndBodyModifierCreationDatas AdditionalControlsAndModifiers; // 0xF0(0xA0)
		FPhysicsControlSetUpdates AdditionalSets; // 0x190(0x20)
		TArray InitialControlAndModifierUpdates; // 0x1B0(0x10)
		TMap Profiles; // 0x1C0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsControl.PhysicsControlAsset");
			return ret;
		}
	};


	// Class PhysicsControl.PhysicsControlBPLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPhysicsControlBPLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsControl.PhysicsControlBPLibrary");
			return ret;
		}

		FRigidBodyWithControlReference SetOverridePhysicsAsset(FRigidBodyWithControlReference& Node, UPhysicsAsset PhysicsAsset); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414BDD958
		TArray GetControlNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD878
		TArray GetBodyModifierNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD798
		void ConvertToRigidBodyWithControlPure(); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD6B8
		FRigidBodyWithControlReference ConvertToRigidBodyWithControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414BDD5D8
		void BlendParameters(FPhysicsControlControlAndModifierParameters& InParametersA, FPhysicsControlControlAndModifierParameters& InParametersB, float InInterpolationWeight, FPhysicsControlControlAndModifierParameters& OutParameters); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD4F8
		void BlendModifierParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedModifierParameters& InStartModifierParameters, FPhysicsControlNamedModifierParameters& InEndModifierParameters, TArray& ModifierNames, FPhysicsControlControlAndModifierParameters& OutParameters); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD418
		void BlendControlParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedControlParameters& InStartControlParameters, FPhysicsControlNamedControlParameters& InEndControlParameters, TArray& ControlNames, FPhysicsControlControlAndModifierParameters& OutParameters); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD338
		void AddMultipleModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray& Names, FPhysicsControlModifierSparseData& ModifierData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD258
		void AddMultipleControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray& Names, FPhysicsControlSparseData& ControlData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD178
		void AddModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlModifierSparseData& ModifierData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDD098
		void AddControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlSparseData& ControlData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BDCFB8
	};


	// Class PhysicsControl.PhysicsControlComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x260 (0x480 - 0x220)
	class UPhysicsControlComponent : public USceneComponent	
	{
	public:
		TWeakObjectPtr PhysicsControlAsset; // 0x220(0x20)
		float TeleportDistanceThreshold; // 0x240(0x4)
		float TeleportRotationThreshold; // 0x244(0x4)
		bool bShowDebugVisualization; // 0x248(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x249(0x3) UNKNOWN PROPERTY
		float VisualizationSizeScale; // 0x24C(0x4)
		bool bShowDebugControlList; // 0x250(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x251(0x7) UNKNOWN PROPERTY
		FString DebugControlDetailFilter; // 0x258(0x10)
		bool bShowDebugBodyModifierList; // 0x268(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x269(0x7) UNKNOWN PROPERTY
		FString DebugBodyModifierDetailFilter; // 0x270(0x10)
		float VelocityPredictionTime; // 0x280(0x4)
		int32_t MaxNumControlsOrModifiersPerName; // 0x284(0x4)
		bool bWarnAboutInvalidNames; // 0x288(0x1)
		unsigned char UnknownData07_7[0x1F7]; // 0x289(0x1F7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsControl.PhysicsControlComponent");
			return ret;
		}

		void UpdateTargetCaches(float DeltaTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE4338
		void UpdateControls(float DeltaTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE4258
		bool SetControlUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE4178
		void SetControlTargetsInSet(FName Set, FPhysicsControlTarget ControlTarget, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE4098
		void SetControlTargets(TArray& Names, FPhysicsControlTarget ControlTarget, bool bEnableControl); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE3FB8
		void SetControlTargetPositionsInSet(FName SetName, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE3ED8
		bool SetControlTargetPositionsFromArray(TArray& Names, TArray& Positions, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE3DF8
		void SetControlTargetPositionsAndOrientationsInSet(FName SetName, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE3D18
		bool SetControlTargetPositionsAndOrientationsFromArray(TArray& Names, TArray& Positions, TArray& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE3C38
		void SetControlTargetPositionsAndOrientations(TArray& Names, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BE3B58
		void SetControlTargetPositions(TArray& Names, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BE3A78
		bool SetControlTargetPositionAndOrientation(FName Name, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE3998
		bool SetControlTargetPosition(FName Name, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE38B8
		bool SetControlTargetPoses(FName Name, FVector ParentPosition, FRotator ParentOrientation, FVector ChildPosition, FRotator ChildOrientation, float VelocityDeltaTime, bool bEnableControl); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE37D8
		void SetControlTargetOrientationsInSet(FName SetName, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE36F8
		bool SetControlTargetOrientationsFromArray(TArray& Names, TArray& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE3618
		void SetControlTargetOrientations(TArray& Names, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BE3538
		bool SetControlTargetOrientation(FName Name, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE3458
		bool SetControlTarget(FName Name, FPhysicsControlTarget ControlTarget, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE3378
		void SetControlsUseSkeletalAnimation(TArray& Names, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE3298
		void SetControlSparseMultipliersInSet(FName Set, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE31B8
		void SetControlSparseMultipliers(TArray& Names, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE30D8
		bool SetControlSparseMultiplier(FName Name, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2FF8
		void SetControlSparseDatasInSet(FName Set, FPhysicsControlSparseData ControlData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2F18
		void SetControlSparseDatas(TArray& Names, FPhysicsControlSparseData ControlData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE2E38
		bool SetControlSparseData(FName Name, FPhysicsControlSparseData ControlData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2D58
		void SetControlsInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2C78
		void SetControlsInSetEnabled(FName Set, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2B98
		void SetControlsInSetDisableCollision(FName Set, bool bDisableCollision); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2AB8
		void SetControlsEnabled(TArray& Names, bool bEnable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE29D8
		void SetControlsDisableCollision(TArray& Names, bool bDisableCollision); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE28F8
		bool SetControlPoint(FName Name, FVector Position); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE2818
		void SetControlParentsInSet(FName Set, UPrimitiveComponent ParentComponent, FName ParentBoneName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2738
		void SetControlParents(TArray& Names, UPrimitiveComponent ParentComponent, FName ParentBoneName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE2658
		bool SetControlParent(FName Name, UPrimitiveComponent ParentComponent, FName ParentBoneName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2578
		void SetControlMultipliersInSet(FName Set, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2498
		void SetControlMultipliers(TArray& Names, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE23B8
		bool SetControlMultiplier(FName Name, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE22D8
		bool SetControlLinearData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxForce, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE21F8
		bool SetControlEnabled(FName Name, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2118
		bool SetControlDisableCollision(FName Name, bool bDisableCollision); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE2038
		void SetControlDatasInSet(FName Set, FPhysicsControlData ControlData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1F58
		void SetControlDatas(TArray& Names, FPhysicsControlData ControlData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE1E78
		bool SetControlData(FName Name, FPhysicsControlData ControlData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1D98
		bool SetControlAngularData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxTorque, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1CB8
		void SetCachedBoneVelocitiesToZero(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1BD8
		bool SetCachedBoneData(USkeletalMeshComponent SkeletalMeshComponent, FName BoneName, FTransform& TM); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BE1AF8
		bool SetBodyModifierUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1A18
		bool SetBodyModifierUpdateKinematicFromSimulation(FName Name, bool bUpdateKinematicFromSimulation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1938
		void SetBodyModifiersUseSkeletalAnimation(TArray& Names, bool bUseSkeletalAnimation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE1858
		void SetBodyModifiersUpdateKinematicFromSimulation(TArray& Names, bool bUpdateKinematicFromSimulation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE1778
		void SetBodyModifiersPhysicsBlendWeight(TArray& Names, float PhysicsBlendWeight); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE1698
		void SetBodyModifierSparseDatasInSet(FName Set, FPhysicsControlModifierSparseData ModifierData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE15B8
		void SetBodyModifierSparseDatas(TArray& Names, FPhysicsControlModifierSparseData ModifierData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE14D8
		bool SetBodyModifierSparseData(FName Name, FPhysicsControlModifierSparseData ModifierData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE13F8
		void SetBodyModifiersMovementType(TArray& Names, EPhysicsMovementType MovementType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE1318
		void SetBodyModifiersInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1238
		void SetBodyModifiersInSetUpdateKinematicFromSimulation(FName Set, bool bUpdateKinematicFromSimulation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1158
		void SetBodyModifiersInSetPhysicsBlendWeight(FName Set, float PhysicsBlendWeight); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE1078
		void SetBodyModifiersInSetMovementType(FName Set, EPhysicsMovementType MovementType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0F98
		void SetBodyModifiersInSetGravityMultiplier(FName Set, float GravityMultiplier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0EB8
		void SetBodyModifiersInSetCollisionType(FName Set, TEnumAsByte CollisionType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0DD8
		void SetBodyModifiersGravityMultiplier(TArray& Names, float GravityMultiplier); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE0CF8
		void SetBodyModifiersCollisionType(TArray& Names, TEnumAsByte CollisionType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE0C18
		bool SetBodyModifierPhysicsBlendWeight(FName Name, float PhysicsBlendWeight); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0B38
		bool SetBodyModifierMovementType(FName Name, EPhysicsMovementType MovementType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0A58
		bool SetBodyModifierKinematicTarget(FName Name, FVector KinematicTargetPosition, FRotator KinematicTargetOrienation, bool bMakeKinematic); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BE0978
		bool SetBodyModifierGravityMultiplier(FName Name, float GravityMultiplier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0898
		void SetBodyModifierDatasInSet(FName Set, FPhysicsControlModifierData ModifierData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE07B8
		void SetBodyModifierDatas(TArray& Names, FPhysicsControlModifierData ModifierData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE06D8
		bool SetBodyModifierData(FName Name, FPhysicsControlModifierData ModifierData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE05F8
		bool SetBodyModifierCollisionType(FName Name, TEnumAsByte CollisionType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0518
		bool ResetControlPoint(FName Name); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0438
		bool ResetBodyModifierToCachedBoneTransform(FName Name, EResetToCachedTargetBehavior Behavior); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0358
		void ResetBodyModifiersToCachedBoneTransforms(TArray& Names, EResetToCachedTargetBehavior Behavior); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE0278
		void ResetBodyModifiersInSetToCachedBoneTransforms(FName SetName, EResetToCachedTargetBehavior Behavior); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE0198
		bool InvokeControlProfile(FName ProfileName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE00B8
		TArray GetSetsContainingControl(FName Control); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDFFD8
		TArray GetSetsContainingBodyModifier(FName Control); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDFEF8
		TMap GetLimbBonesFromSkeletalMesh(USkeletalMeshComponent SkeletalMeshComponent, TArray& LimbSetupData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BDFE18
		bool GetControlTarget(FName Name, FPhysicsControlTarget& ControlTarget); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BDFD38
		TArray GetControlNamesInSet(FName Set); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDFC58
		bool GetControlMultiplier(FName Name, FPhysicsControlMultiplier& ControlMultiplier); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BDFB78
		bool GetControlExists(FName Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDFA98
		bool GetControlEnabled(FName Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDF9B8
		bool GetControlData(FName Name, FPhysicsControlData& ControlData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BDF8D8
		TArray GetCachedBoneTransforms(USkeletalMeshComponent SkeletalMeshComponent, TArray& BoneNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDF7F8
		FTransform GetCachedBoneTransform(USkeletalMeshComponent SkeletalMeshComponent, FName BoneName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BDF718
		TArray GetCachedBonePositions(USkeletalMeshComponent SkeletalMeshComponent, TArray& BoneNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDF638
		FVector GetCachedBonePosition(USkeletalMeshComponent SkeletalMeshComponent, FName BoneName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BDF558
		TArray GetCachedBoneOrientations(USkeletalMeshComponent SkeletalMeshComponent, TArray& BoneNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDF478
		FRotator GetCachedBoneOrientation(USkeletalMeshComponent SkeletalMeshComponent, FName BoneName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414BDF398
		TArray GetBodyModifierNamesInSet(FName Set); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDF2B8
		bool GetBodyModifierExists(FName Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDF1D8
		TArray GetAllControlNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDF0F8
		TArray GetAllBodyModifierNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BDF018
		void DestroyControlsInSet(FName Set); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDEF38
		void DestroyControls(TArray& Names); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDEE58
		bool DestroyControl(FName Name); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDED78
		void DestroyBodyModifiersInSet(FName Set); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDEC98
		void DestroyBodyModifiers(TArray& Names); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDEBB8
		bool DestroyBodyModifier(FName Name); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDEAD8
		void DestroyAllControlsAndBodyModifiers(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDE9F8
		bool CreateNamedControl(FName Name, UPrimitiveComponent ParentComponent, FName ParentBoneName, UPrimitiveComponent ChildComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FName Set); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDE918
		bool CreateNamedBodyModifier(FName Name, UPrimitiveComponent Component, FName BoneName, FName Set, FPhysicsControlModifierData BodyModifierData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDE838
		TArray CreateControlsFromSkeletalMeshBelow(USkeletalMeshComponent SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FName Set); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDE758
		TArray CreateControlsFromSkeletalMeshAndConstraintProfileBelow(USkeletalMeshComponent SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName ConstraintProfile, FName Set, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDE678
		TArray CreateControlsFromSkeletalMeshAndConstraintProfile(USkeletalMeshComponent SkeletalMeshComponent, TArray& BoneNames, FName ConstraintProfile, FName Set, bool bEnabled); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDE598
		TArray CreateControlsFromSkeletalMesh(USkeletalMeshComponent SkeletalMeshComponent, TArray& BoneNames, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDE4B8
		TMap CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, TMap& LimbBones, FName ConstraintProfile, bool bEnabled); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDE3D8
		TMap CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, TMap& LimbBones, EPhysicsControlType ControlType, FPhysicsControlData ControlData, UPrimitiveComponent WorldComponent, FName WorldBoneName, FString NamePrefix); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDE2F8
		bool CreateControlsAndBodyModifiersFromPhysicsControlAsset(USkeletalMeshComponent SkeletalMeshComponent, UPrimitiveComponent WorldComponent, FName WorldBoneName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDE218
		bool CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap& LimbBodyModifiers, USkeletalMeshComponent SkeletalMeshComponent, TArray& LimbSetupData, FPhysicsControlData WorldSpaceControlData, FPhysicsControlData ParentSpaceControlData, FPhysicsControlModifierData BodyModifierData, UPrimitiveComponent WorldComponent, FName WorldBoneName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDE138
		FName CreateControl(UPrimitiveComponent ParentComponent, FName ParentBoneName, UPrimitiveComponent ChildComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FName Set, FString NamePrefix); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDE058
		TArray CreateBodyModifiersFromSkeletalMeshBelow(USkeletalMeshComponent SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName Set, FPhysicsControlModifierData BodyModifierData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDDF78
		TMap CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, TMap& LimbBones, FPhysicsControlModifierData BodyModifierData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDDE98
		FName CreateBodyModifier(UPrimitiveComponent Component, FName BoneName, FName Set, FPhysicsControlModifierData BodyModifierData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BDDDB8
		void AddControlToSet(FPhysicsControlNames& NewSet, FName Control, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDDCD8
		void AddControlsToSet(FPhysicsControlNames& NewSet, TArray& Controls, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDDBF8
		void AddBodyModifierToSet(FPhysicsControlNames& NewSet, FName BodyModifier, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDDB18
		void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, TArray& BodyModifiers, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BDDA38
	};


	// Class PhysicsControl.PhysicsControlInitializerComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x180 (0x3A0 - 0x220)
	class UPhysicsControlInitializerComponent : public USceneComponent	
	{
	public:
		FInitialCharacterControls InitialCharacterControls; // 0x220(0xD0)
		TMap InitialControls; // 0x2F0(0x50)
		TMap InitialBodyModifiers; // 0x340(0x50)
		bool bCreateControlsAtBeginPlay; // 0x390(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x391(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsControl.PhysicsControlInitializerComponent");
			return ret;
		}

		void CreateControls(UPhysicsControlComponent PhysicsControlComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BE4418
	};


	// Class PhysicsControl.PhysicsControlActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class APhysicsControlActor : public AActor	
	{
	public:
		UPhysicsControlComponent ControlComponent; // 0x290(0x8)
		UPhysicsControlInitializerComponent ControlInitializerComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsControl.PhysicsControlActor");
			return ret;
		}
	};

}
