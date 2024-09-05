#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PhysicsControl
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PhysicsControl.PhysicsControlAsset
	// Inherited from UObject
	// Size: 0x1E8 (0x210 - 0x28)
	class UPhysicsControlAsset : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FPhysicsControlCharacterSetupData CharacterSetupData; // 0x30(0xC0)
		FPhysicsControlAndBodyModifierCreationDatas AdditionalControlsAndModifiers; // 0xF0(0xA0)
		FPhysicsControlSetUpdates AdditionalSets; // 0x190(0x20)
		TArray<FPhysicsControlControlAndModifierUpdates> InitialControlAndModifierUpdates; // 0x1B0(0x10)
		TMap<FName, FPhysicsControlControlAndModifierUpdates> Profiles; // 0x1C0(0x50)

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

		FRigidBodyWithControlReference SetOverridePhysicsAsset(FRigidBodyWithControlReference& Node, UPhysicsAsset* PhysicsAsset); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070EFCC(relative to base address)
		TArray GetControlNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750705958(relative to base address)
		TArray GetBodyModifierNamesInSet(FRigidBodyWithControlReference& RigidBodyWithControl, FName SetName); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750704D3C(relative to base address)
		void ConvertToRigidBodyWithControlPure(FAnimNodeReference& Node, FRigidBodyWithControlReference& RigidBodyWithControl, bool& Result); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7507012C8(relative to base address)
		FRigidBodyWithControlReference ConvertToRigidBodyWithControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070119C(relative to base address)
		void BlendParameters(FPhysicsControlControlAndModifierParameters& InParametersA, FPhysicsControlControlAndModifierParameters& InParametersB, float InInterpolationWeight, FPhysicsControlControlAndModifierParameters& OutParameters); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750700F78(relative to base address)
		void BlendModifierParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedModifierParameters& InStartModifierParameters, FPhysicsControlNamedModifierParameters& InEndModifierParameters, TArray<FName>& ModifierNames, FPhysicsControlControlAndModifierParameters& OutParameters); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750700CF8(relative to base address)
		void BlendControlParametersThroughSet(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlNamedControlParameters& InStartControlParameters, FPhysicsControlNamedControlParameters& InEndControlParameters, TArray<FName>& ControlNames, FPhysicsControlControlAndModifierParameters& OutParameters); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750700A64(relative to base address)
		void AddMultipleModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlModifierSparseData& ModifierData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750700848(relative to base address)
		void AddMultipleControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, TArray<FName>& Names, FPhysicsControlSparseData& ControlData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75070062C(relative to base address)
		void AddModifierParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlModifierSparseData& ModifierData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750700420(relative to base address)
		void AddControlParameters(FPhysicsControlControlAndModifierParameters& InParameters, FPhysicsControlControlAndModifierParameters& OutParameters, FName Name, FPhysicsControlSparseData& ControlData); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7506FFDAC(relative to base address)
	};


	// Class PhysicsControl.PhysicsControlComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x260 (0x480 - 0x220)
	class UPhysicsControlComponent : public USceneComponent	
	{
	public:
		TWeakObjectPtr<UPhysicsControlAsset*> PhysicsControlAsset; // 0x220(0x20)
		float TeleportDistanceThreshold; // 0x240(0x4)
		float TeleportRotationThreshold; // 0x244(0x4)
		bool bShowDebugVisualization; // 0x248(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x249(0x3) UNKNOWN PROPERTY
		float VisualizationSizeScale; // 0x24C(0x4)
		bool bShowDebugControlList; // 0x250(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x251(0x7) UNKNOWN PROPERTY
		FString DebugControlDetailFilter; // 0x258(0x10)
		bool bShowDebugBodyModifierList; // 0x268(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x269(0x7) UNKNOWN PROPERTY
		FString DebugBodyModifierDetailFilter; // 0x270(0x10)
		float VelocityPredictionTime; // 0x280(0x4)
		int32_t MaxNumControlsOrModifiersPerName; // 0x284(0x4)
		bool bWarnAboutInvalidNames; // 0x288(0x1)
		unsigned char UnknownData03_7[0x1F7]; // 0x289(0x1F7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsControl.PhysicsControlComponent");
			return ret;
		}

		void UpdateTargetCaches(float DeltaTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070F1C0(relative to base address)
		void UpdateControls(float DeltaTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070F144(relative to base address)
		bool SetControlUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070E640(relative to base address)
		void SetControlTargetsInSet(FName Set, FPhysicsControlTarget ControlTarget, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070E3E0(relative to base address)
		void SetControlTargets(TArray<FName>& Names, FPhysicsControlTarget ControlTarget, bool bEnableControl); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070E10C(relative to base address)
		void SetControlTargetPositionsInSet(FName SetName, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070DD68(relative to base address)
		void SetControlTargetPositionsFromArray(TArray<FName>& Names); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070D9C4(relative to base address)
		void SetControlTargetPositionsAndOrientationsInSet(FName SetName, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070D550(relative to base address)
		void SetControlTargetPositionsAndOrientationsFromArray(); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070D154(relative to base address)
		void SetControlTargetPositionsAndOrientations(TArray<FName>& Names, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070CC6C(relative to base address)
		void SetControlTargetPositions(TArray<FName>& Names, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070C858(relative to base address)
		bool SetControlTargetPositionAndOrientation(FName Name, FVector Position, FRotator orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070C3D4(relative to base address)
		bool SetControlTargetPosition(FName Name, FVector Position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070C028(relative to base address)
		bool SetControlTargetPoses(FName Name, FVector ParentPosition, FRotator ParentOrientation, FVector ChildPosition, FRotator ChildOrientation, float VelocityDeltaTime, bool bEnableControl); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070BAC4(relative to base address)
		void SetControlTargetOrientationsInSet(FName SetName, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070B720(relative to base address)
		bool SetControlTargetOrientationsFromArray(TArray<FName>& Names, TArray<FRotator>& Orientations, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070B37C(relative to base address)
		void SetControlTargetOrientations(TArray<FName>& Names, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070AF68(relative to base address)
		bool SetControlTargetOrientation(FName Name, FRotator orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070ABBC(relative to base address)
		bool SetControlTarget(FName Name, FPhysicsControlTarget ControlTarget, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070A958(relative to base address)
		void SetControlsUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070ED54(relative to base address)
		void SetControlSparseMultipliersInSet(FName Set, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070A6F0(relative to base address)
		void SetControlSparseMultipliers(TArray<FName>& Names, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070A414(relative to base address)
		bool SetControlSparseMultiplier(FName Name, FPhysicsControlSparseMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070A1A8(relative to base address)
		void SetControlSparseDatasInSet(FName Set, FPhysicsControlSparseData ControlData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070A020(relative to base address)
		void SetControlSparseDatas(TArray<FName>& Names, FPhysicsControlSparseData ControlData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750709E30(relative to base address)
		bool SetControlSparseData(FName Name, FPhysicsControlSparseData ControlData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750709CA4(relative to base address)
		void SetControlsInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070EC4C(relative to base address)
		void SetControlsInSetEnabled(FName Set, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070EB80(relative to base address)
		void SetControlsInSetDisableCollision(FName Set, bool bDisableCollision); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070EAB4(relative to base address)
		void SetControlsEnabled(TArray<FName>& Names, bool bEnable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070E900(relative to base address)
		void SetControlsDisableCollision(TArray<FName>& Names, bool bDisableCollision); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070E74C(relative to base address)
		bool SetControlPoint(FName Name, FVector Position); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750709B3C(relative to base address)
		void SetControlParentsInSet(FName Set, UPrimitiveComponent* ParentComponent, FName ParentBoneName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750709A34(relative to base address)
		void SetControlParents(TArray<FName>& Names, UPrimitiveComponent* ParentComponent, FName ParentBoneName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507097C8(relative to base address)
		bool SetControlParent(FName Name, UPrimitiveComponent* ParentComponent, FName ParentBoneName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507096D0(relative to base address)
		void SetControlMultipliersInSet(FName Set, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750709474(relative to base address)
		void SetControlMultipliers(TArray<FName>& Names, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507091A0(relative to base address)
		bool SetControlMultiplier(FName Name, FPhysicsControlMultiplier ControlMultiplier, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750708F40(relative to base address)
		bool SetControlLinearData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxForce, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750708D74(relative to base address)
		bool SetControlEnabled(FName Name, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750708CB0(relative to base address)
		bool SetControlDisableCollision(FName Name, bool bDisableCollision); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750708BEC(relative to base address)
		void SetControlDatasInSet(FName Set, FPhysicsControlData ControlData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750708A64(relative to base address)
		void SetControlDatas(TArray<FName>& Names, FPhysicsControlData ControlData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750708874(relative to base address)
		bool SetControlData(FName Name, FPhysicsControlData ControlData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507086E8(relative to base address)
		bool SetControlAngularData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxTorque, bool bEnableControl); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070851C(relative to base address)
		void SetCachedBoneVelocitiesToZero(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750708508(relative to base address)
		bool SetCachedBoneData(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, FTransform& TM); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75070839C(relative to base address)
		bool SetBodyModifierUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507073C8(relative to base address)
		bool SetBodyModifierUpdateKinematicFromSimulation(FName Name, bool bUpdateKinematicFromSimulation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750707304(relative to base address)
		void SetBodyModifiersUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507081E8(relative to base address)
		void SetBodyModifiersUpdateKinematicFromSimulation(TArray<FName>& Names, bool bUpdateKinematicFromSimulation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750708034(relative to base address)
		void SetBodyModifiersPhysicsBlendWeight(TArray<FName>& Names, float PhysicsBlendWeight); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750707E84(relative to base address)
		void SetBodyModifierSparseDatasInSet(FName Set, FPhysicsControlModifierSparseData ModifierData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507071A0(relative to base address)
		void SetBodyModifierSparseDatas(TArray<FName>& Names, FPhysicsControlModifierSparseData ModifierData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750706FD4(relative to base address)
		bool SetBodyModifierSparseData(FName Name, FPhysicsControlModifierSparseData ModifierData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750706E6C(relative to base address)
		void SetBodyModifiersMovementType(TArray<FName>& Names, EPhysicsMovementType MovementType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750707CD4(relative to base address)
		void SetBodyModifiersInSetUseSkeletalAnimation(FName Set, bool bUseSkeletalAnimation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750707C08(relative to base address)
		void SetBodyModifiersInSetUpdateKinematicFromSimulation(FName Set, bool bUpdateKinematicFromSimulation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750707B3C(relative to base address)
		void SetBodyModifiersInSetPhysicsBlendWeight(FName Set, float PhysicsBlendWeight); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750707A64(relative to base address)
		void SetBodyModifiersInSetMovementType(FName Set, EPhysicsMovementType MovementType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750707994(relative to base address)
		void SetBodyModifiersInSetGravityMultiplier(FName Set, float GravityMultiplier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507078BC(relative to base address)
		void SetBodyModifiersInSetCollisionType(FName Set, TEnumAsByte<ECollisionEnabled> CollisionType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507077EC(relative to base address)
		void SetBodyModifiersGravityMultiplier(TArray<FName>& Names, float GravityMultiplier); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070763C(relative to base address)
		void SetBodyModifiersCollisionType(TArray<FName>& Names, TEnumAsByte<ECollisionEnabled> CollisionType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070748C(relative to base address)
		bool SetBodyModifierPhysicsBlendWeight(FName Name, float PhysicsBlendWeight); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750706DAC(relative to base address)
		bool SetBodyModifierMovementType(FName Name, EPhysicsMovementType MovementType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750706CEC(relative to base address)
		bool SetBodyModifierKinematicTarget(FName Name, FVector KinematicTargetPosition, FRotator KinematicTargetOrienation, bool bMakeKinematic); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507069F4(relative to base address)
		bool SetBodyModifierGravityMultiplier(FName Name, float GravityMultiplier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750706934(relative to base address)
		void SetBodyModifierDatasInSet(FName Set, FPhysicsControlModifierData ModifierData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507067C4(relative to base address)
		void SetBodyModifierDatas(TArray<FName>& Names, FPhysicsControlModifierData ModifierData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507065EC(relative to base address)
		bool SetBodyModifierData(FName Name, FPhysicsControlModifierData ModifierData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750706478(relative to base address)
		bool SetBodyModifierCollisionType(FName Name, TEnumAsByte<ECollisionEnabled> CollisionType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507063B4(relative to base address)
		bool ResetControlPoint(FName Name); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507062C4(relative to base address)
		bool ResetBodyModifierToCachedBoneTransform(FName Name, EResetToCachedTargetBehavior Behavior); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750705F84(relative to base address)
		void ResetBodyModifiersToCachedBoneTransforms(TArray<FName>& Names, EResetToCachedTargetBehavior Behavior); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750706114(relative to base address)
		void ResetBodyModifiersInSetToCachedBoneTransforms(FName SetName, EResetToCachedTargetBehavior Behavior); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750706044(relative to base address)
		bool InvokeControlProfile(FName ProfileName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750705EF8(relative to base address)
		TArray GetSetsContainingControl(FName Control); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750705E54(relative to base address)
		TArray GetSetsContainingBodyModifier(FName Control); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750705DB0(relative to base address)
		TMap GetLimbBonesFromSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750705C64(relative to base address)
		bool GetControlTarget(FName Name, FPhysicsControlTarget& ControlTarget); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750705B74(relative to base address)
		TArray GetControlNamesInSet(FName Set); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750705AE0(relative to base address)
		bool GetControlMultiplier(FName Name, FPhysicsControlMultiplier& ControlMultiplier); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750705868(relative to base address)
		bool GetControlExists(FName Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507057DC(relative to base address)
		bool GetControlEnabled(FName Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507056F4(relative to base address)
		bool GetControlData(FName Name, FPhysicsControlData& ControlData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750705608(relative to base address)
		TArray GetCachedBoneTransforms(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507054B8(relative to base address)
		FTransform GetCachedBoneTransform(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750705398(relative to base address)
		TArray GetCachedBonePositions(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750705248(relative to base address)
		FVector GetCachedBonePosition(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750705174(relative to base address)
		TArray GetCachedBoneOrientations(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070502C(relative to base address)
		FRotator GetCachedBoneOrientation(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750704F58(relative to base address)
		TArray GetBodyModifierNamesInSet(FName Set); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750704EC4(relative to base address)
		bool GetBodyModifierExists(FName Name); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750704CB0(relative to base address)
		TArray GetAllControlNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750704C5C(relative to base address)
		TArray GetAllBodyModifierNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750704C08(relative to base address)
		void DestroyControlsInSet(FName Set); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750704B88(relative to base address)
		void DestroyControls(TArray<FName>& Names); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750704AAC(relative to base address)
		bool DestroyControl(FName Name); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750704A1C(relative to base address)
		void DestroyBodyModifiersInSet(FName Set); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75070499C(relative to base address)
		void DestroyBodyModifiers(TArray<FName>& Names); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507048C0(relative to base address)
		bool DestroyBodyModifier(FName Name); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750704830(relative to base address)
		void DestroyAllControlsAndBodyModifiers(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507047D0(relative to base address)
		bool CreateNamedControl(FName Name, UPrimitiveComponent* ParentComponent, FName ParentBoneName, UPrimitiveComponent* ChildComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FName Set); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750704350(relative to base address)
		bool CreateNamedBodyModifier(FName Name, UPrimitiveComponent* Component, FName BoneName, FName Set, FPhysicsControlModifierData BodyModifierData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750704140(relative to base address)
		TArray CreateControlsFromSkeletalMeshBelow(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FName Set); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750703D70(relative to base address)
		TArray CreateControlsFromSkeletalMeshAndConstraintProfileBelow(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName ConstraintProfile, FName Set, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750703B20(relative to base address)
		TArray CreateControlsFromSkeletalMeshAndConstraintProfile(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, FName ConstraintProfile, FName Set, bool bEnabled); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750703784(relative to base address)
		TArray CreateControlsFromSkeletalMesh(USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507033A4(relative to base address)
		TMap CreateControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FName ConstraintProfile, bool bEnabled); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75070309C(relative to base address)
		TMap CreateControlsFromLimbBones(FPhysicsControlNames& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsControlType ControlType, FPhysicsControlData ControlData, UPrimitiveComponent* WorldComponent, FName WorldBoneName, FString NamePrefix); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750702AD4(relative to base address)
		bool CreateControlsAndBodyModifiersFromPhysicsControlAsset(USkeletalMeshComponent* SkeletalMeshComponent, UPrimitiveComponent* WorldComponent, FName WorldBoneName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507029D8(relative to base address)
		bool CreateControlsAndBodyModifiersFromLimbBones(FPhysicsControlNames& AllWorldSpaceControls, TMap<FName, FPhysicsControlNames>& LimbWorldSpaceControls, FPhysicsControlNames& AllParentSpaceControls, TMap<FName, FPhysicsControlNames>& LimbParentSpaceControls, FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlNames>& LimbBodyModifiers, USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData, FPhysicsControlData WorldSpaceControlData, FPhysicsControlData ParentSpaceControlData, FPhysicsControlModifierData BodyModifierData, UPrimitiveComponent* WorldComponent, FName WorldBoneName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507020C4(relative to base address)
		FName CreateControl(UPrimitiveComponent* ParentComponent, FName ParentBoneName, UPrimitiveComponent* ChildComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FName Set, FString NamePrefix); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750701B90(relative to base address)
		TArray CreateBodyModifiersFromSkeletalMeshBelow(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName Set, FPhysicsControlModifierData BodyModifierData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507018C4(relative to base address)
		TMap CreateBodyModifiersFromLimbBones(FPhysicsControlNames& AllBodyModifiers, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FPhysicsControlModifierData BodyModifierData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750701668(relative to base address)
		FName CreateBodyModifier(UPrimitiveComponent* Component, FName BoneName, FName Set, FPhysicsControlModifierData BodyModifierData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750701488(relative to base address)
		void AddControlToSet(FPhysicsControlNames& NewSet, FName Control, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506FFFD8(relative to base address)
		void AddControlsToSet(FPhysicsControlNames& NewSet, TArray<FName>& Controls, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750700208(relative to base address)
		void AddBodyModifierToSet(FPhysicsControlNames& NewSet, FName BodyModifier, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506FF964(relative to base address)
		void AddBodyModifiersToSet(FPhysicsControlNames& NewSet, TArray<FName>& BodyModifiers, FName Set); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506FFB94(relative to base address)
	};


	// Class PhysicsControl.PhysicsControlInitializerComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x180 (0x3A0 - 0x220)
	class UPhysicsControlInitializerComponent : public USceneComponent	
	{
	public:
		FInitialCharacterControls InitialCharacterControls; // 0x220(0xD0)
		TMap<FName, FInitialPhysicsControl> InitialControls; // 0x2F0(0x50)
		TMap<FName, FInitialBodyModifier> InitialBodyModifiers; // 0x340(0x50)
		bool bCreateControlsAtBeginPlay; // 0x390(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x391(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsControl.PhysicsControlInitializerComponent");
			return ret;
		}

		void CreateControls(UPhysicsControlComponent* PhysicsControlComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75073C8F0(relative to base address)
	};


	// Class PhysicsControl.PhysicsControlActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class APhysicsControlActor : public AActor	
	{
	public:
		UPhysicsControlComponent* ControlComponent; // 0x290(0x8)
		UPhysicsControlInitializerComponent* ControlInitializerComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhysicsControl.PhysicsControlActor");
			return ret;
		}
	};

}
