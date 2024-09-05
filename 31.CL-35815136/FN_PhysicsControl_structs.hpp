#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PhysicsControl
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PhysicsControl.RigidBodyWithControlReference
	// Inherited from FAnimNodeReference
	// Size: 0x0 (0x10 - 0x10)
	struct FRigidBodyWithControlReference : public FAnimNodeReference	
	{
	public:
	};


	// Struct PhysicsControl.PhysicsControlSetUpdate
	// Size: 0x18 (0x18 - 0x0)
	struct FPhysicsControlSetUpdate	
	{
	public:
		FName SetName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FName> Names; // 0x8(0x10)
	};


	// Struct PhysicsControl.PhysicsControlSetUpdates
	// Size: 0x20 (0x20 - 0x0)
	struct FPhysicsControlSetUpdates	
	{
	public:
		TArray<FPhysicsControlSetUpdate> ControlSetUpdates; // 0x0(0x10)
		TArray<FPhysicsControlSetUpdate> ModifierSetUpdates; // 0x10(0x10)
	};


	// Struct PhysicsControl.PhysicsControlModifierSparseData
	// Size: 0x10 (0x10 - 0x0)
	struct FPhysicsControlModifierSparseData	
	{
	public:
		EPhysicsMovementType MovementType; // 0x0(0x1)
		TEnumAsByte<ECollisionEnabled> CollisionType; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float GravityMultiplier; // 0x4(0x4)
		float PhysicsBlendWeight; // 0x8(0x4)
		bool bUseSkeletalAnimation : 1; // 0xC:0(0x1)
		bool bUpdateKinematicFromSimulation : 1; // 0xC:1(0x1)
		bool bEnableMovementType : 1; // 0xC:2(0x1)
		bool bEnableCollisionType : 1; // 0xC:3(0x1)
		bool bEnableGravityMultiplier : 1; // 0xC:4(0x1)
		bool bEnablePhysicsBlendWeight : 1; // 0xC:5(0x1)
		bool bEnablebUseSkeletalAnimation : 1; // 0xC:6(0x1)
		bool bEnablebUpdateKinematicFromSimulation : 1; // 0xC:7(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.PhysicsControlModifierData
	// Size: 0x10 (0x10 - 0x0)
	struct FPhysicsControlModifierData	
	{
	public:
		EPhysicsMovementType MovementType; // 0x0(0x1)
		TEnumAsByte<ECollisionEnabled> CollisionType; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float GravityMultiplier; // 0x4(0x4)
		float PhysicsBlendWeight; // 0x8(0x4)
		bool bUseSkeletalAnimation : 1; // 0xC:0(0x1)
		bool bUpdateKinematicFromSimulation : 1; // 0xC:1(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.PhysicsBodyModifier
	// Size: 0x14 (0x14 - 0x0)
	struct FPhysicsBodyModifier	
	{
	public:
		FName BoneName; // 0x0(0x4)
		FPhysicsControlModifierData ModifierData; // 0x4(0x10)
	};


	// Struct PhysicsControl.PhysicsBodyModifierCreationData
	// Size: 0x28 (0x28 - 0x0)
	struct FPhysicsBodyModifierCreationData	
	{
	public:
		FPhysicsBodyModifier Modifier; // 0x0(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray<FName> Sets; // 0x18(0x10)
	};


	// Struct PhysicsControl.PhysicsControlSparseData
	// Size: 0x50 (0x50 - 0x0)
	struct FPhysicsControlSparseData	
	{
	public:
		float LinearStrength; // 0x0(0x4)
		float LinearDampingRatio; // 0x4(0x4)
		float LinearExtraDamping; // 0x8(0x4)
		float MaxForce; // 0xC(0x4)
		float AngularStrength; // 0x10(0x4)
		float AngularDampingRatio; // 0x14(0x4)
		float AngularExtraDamping; // 0x18(0x4)
		float MaxTorque; // 0x1C(0x4)
		float LinearTargetVelocityMultiplier; // 0x20(0x4)
		float AngularTargetVelocityMultiplier; // 0x24(0x4)
		float SkeletalAnimationVelocityMultiplier; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FVector CustomControlPoint; // 0x30(0x18)
		bool bEnabled : 1; // 0x48:0(0x1)
		bool bUseCustomControlPoint : 1; // 0x48:1(0x1)
		bool bUseSkeletalAnimation : 1; // 0x48:2(0x1)
		bool bDisableCollision : 1; // 0x48:3(0x1)
		bool bOnlyControlChildObject : 1; // 0x48:4(0x1)
		bool bEnableLinearStrength : 1; // 0x48:5(0x1)
		bool bEnableLinearDampingRatio : 1; // 0x48:6(0x1)
		bool bEnableLinearExtraDamping : 1; // 0x48:7(0x1)
		bool bEnableMaxForce : 1; // 0x49:0(0x1)
		bool bEnableAngularStrength : 1; // 0x49:1(0x1)
		bool bEnableAngularDampingRatio : 1; // 0x49:2(0x1)
		bool bEnableAngularExtraDamping : 1; // 0x49:3(0x1)
		bool bEnableMaxTorque : 1; // 0x49:4(0x1)
		bool bEnableLinearTargetVelocityMultiplier : 1; // 0x49:5(0x1)
		bool bEnableAngularTargetVelocityMultiplier : 1; // 0x49:6(0x1)
		bool bEnableSkeletalAnimationVelocityMultiplier : 1; // 0x49:7(0x1)
		bool bEnableCustomControlPoint : 1; // 0x4A:0(0x1)
		bool bEnablebEnabled : 1; // 0x4A:1(0x1)
		bool bEnablebUseCustomControlPoint : 1; // 0x4A:2(0x1)
		bool bEnablebUseSkeletalAnimation : 1; // 0x4A:3(0x1)
		bool bEnablebDisableCollision : 1; // 0x4A:4(0x1)
		bool bEnablebOnlyControlChildObject : 1; // 0x4A:5(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x4B(0x5) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.PhysicsControlData
	// Size: 0x50 (0x50 - 0x0)
	struct FPhysicsControlData	
	{
	public:
		float LinearStrength; // 0x0(0x4)
		float LinearDampingRatio; // 0x4(0x4)
		float LinearExtraDamping; // 0x8(0x4)
		float MaxForce; // 0xC(0x4)
		float AngularStrength; // 0x10(0x4)
		float AngularDampingRatio; // 0x14(0x4)
		float AngularExtraDamping; // 0x18(0x4)
		float MaxTorque; // 0x1C(0x4)
		float LinearTargetVelocityMultiplier; // 0x20(0x4)
		float AngularTargetVelocityMultiplier; // 0x24(0x4)
		float SkeletalAnimationVelocityMultiplier; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FVector CustomControlPoint; // 0x30(0x18)
		bool bEnabled : 1; // 0x48:0(0x1)
		bool bUseCustomControlPoint : 1; // 0x48:1(0x1)
		bool bUseSkeletalAnimation : 1; // 0x48:2(0x1)
		bool bDisableCollision : 1; // 0x48:3(0x1)
		bool bOnlyControlChildObject : 1; // 0x48:4(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.PhysicsControlSparseMultiplier
	// Size: 0x78 (0x78 - 0x0)
	struct FPhysicsControlSparseMultiplier	
	{
	public:
		FVector LinearStrengthMultiplier; // 0x0(0x18)
		FVector LinearDampingRatioMultiplier; // 0x18(0x18)
		FVector LinearExtraDampingMultiplier; // 0x30(0x18)
		FVector MaxForceMultiplier; // 0x48(0x18)
		float AngularStrengthMultiplier; // 0x60(0x4)
		float AngularDampingRatioMultiplier; // 0x64(0x4)
		float AngularExtraDampingMultiplier; // 0x68(0x4)
		float MaxTorqueMultiplier; // 0x6C(0x4)
		bool bEnableLinearStrengthMultiplier : 1; // 0x70:0(0x1)
		bool bEnableLinearDampingRatioMultiplier : 1; // 0x70:1(0x1)
		bool bEnableLinearExtraDampingMultiplier : 1; // 0x70:2(0x1)
		bool bEnableMaxForceMultiplier : 1; // 0x70:3(0x1)
		bool bEnableAngularStrengthMultiplier : 1; // 0x70:4(0x1)
		bool bEnableAngularDampingRatioMultiplier : 1; // 0x70:5(0x1)
		bool bEnableAngularExtraDampingMultiplier : 1; // 0x70:6(0x1)
		bool bEnableMaxTorqueMultiplier : 1; // 0x70:7(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.PhysicsControlMultiplier
	// Size: 0x70 (0x70 - 0x0)
	struct FPhysicsControlMultiplier	
	{
	public:
		FVector LinearStrengthMultiplier; // 0x0(0x18)
		FVector LinearDampingRatioMultiplier; // 0x18(0x18)
		FVector LinearExtraDampingMultiplier; // 0x30(0x18)
		FVector MaxForceMultiplier; // 0x48(0x18)
		float AngularStrengthMultiplier; // 0x60(0x4)
		float AngularDampingRatioMultiplier; // 0x64(0x4)
		float AngularExtraDampingMultiplier; // 0x68(0x4)
		float MaxTorqueMultiplier; // 0x6C(0x4)
	};


	// Struct PhysicsControl.PhysicsControlTarget
	// Size: 0x68 (0x68 - 0x0)
	struct FPhysicsControlTarget	
	{
	public:
		FVector TargetPosition; // 0x0(0x18)
		FVector TargetVelocity; // 0x18(0x18)
		FRotator TargetOrientation; // 0x30(0x18)
		FVector TargetAngularVelocity; // 0x48(0x18)
		bool bApplyControlPointToTarget; // 0x60(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.PhysicsControl
	// Size: 0xC8 (0xC8 - 0x0)
	struct FPhysicsControl	
	{
	public:
		FName ParentBoneName; // 0x0(0x4)
		FName ChildBoneName; // 0x4(0x4)
		FPhysicsControlData ControlData; // 0x8(0x50)
		FPhysicsControlMultiplier ControlMultiplier; // 0x58(0x70)
	};


	// Struct PhysicsControl.PhysicsControlCreationData
	// Size: 0xD8 (0xD8 - 0x0)
	struct FPhysicsControlCreationData	
	{
	public:
		FPhysicsControl Control; // 0x0(0xC8)
		TArray<FName> Sets; // 0xC8(0x10)
	};


	// Struct PhysicsControl.PhysicsControlNamedControlParameters
	// Size: 0x58 (0x58 - 0x0)
	struct FPhysicsControlNamedControlParameters	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FPhysicsControlSparseData Data; // 0x8(0x50)
	};


	// Struct PhysicsControl.PhysicsControlNamedControlMultiplierParameters
	// Size: 0x80 (0x80 - 0x0)
	struct FPhysicsControlNamedControlMultiplierParameters	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FPhysicsControlSparseMultiplier Data; // 0x8(0x78)
	};


	// Struct PhysicsControl.PhysicsControlNamedModifierParameters
	// Size: 0x14 (0x14 - 0x0)
	struct FPhysicsControlNamedModifierParameters	
	{
	public:
		FName Name; // 0x0(0x4)
		FPhysicsControlModifierSparseData Data; // 0x4(0x10)
	};


	// Struct PhysicsControl.PhysicsControlControlAndModifierParameters
	// Size: 0x30 (0x30 - 0x0)
	struct FPhysicsControlControlAndModifierParameters	
	{
	public:
		TArray<FPhysicsControlNamedControlParameters> ControlParameters; // 0x0(0x10)
		TArray<FPhysicsControlNamedControlMultiplierParameters> ControlMultiplierParameters; // 0x10(0x10)
		TArray<FPhysicsControlNamedModifierParameters> ModifierParameters; // 0x20(0x10)
	};


	// Struct PhysicsControl.PhysicsControlControlAndModifierUpdates
	// Size: 0x30 (0x30 - 0x0)
	struct FPhysicsControlControlAndModifierUpdates	
	{
	public:
		TArray<FPhysicsControlNamedControlParameters> ControlUpdates; // 0x0(0x10)
		TArray<FPhysicsControlNamedControlMultiplierParameters> ControlMultiplierUpdates; // 0x10(0x10)
		TArray<FPhysicsControlNamedModifierParameters> ModifierUpdates; // 0x20(0x10)
	};


	// Struct PhysicsControl.PhysicsControlAndBodyModifierCreationDatas
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPhysicsControlAndBodyModifierCreationDatas	
	{
	public:
		TMap<FName, FPhysicsControlCreationData> Controls; // 0x0(0x50)
		TMap<FName, FPhysicsBodyModifierCreationData> Modifiers; // 0x50(0x50)
	};


	// Struct PhysicsControl.PhysicsControlLimbSetupData
	// Size: 0xC (0xC - 0x0)
	struct FPhysicsControlLimbSetupData	
	{
	public:
		FName LimbName; // 0x0(0x4)
		FName StartBone; // 0x4(0x4)
		bool bIncludeParentBone : 1; // 0x8:0(0x1)
		bool bCreateWorldSpaceControls : 1; // 0x8:1(0x1)
		bool bCreateParentSpaceControls : 1; // 0x8:2(0x1)
		bool bCreateBodyModifiers : 1; // 0x8:3(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.PhysicsControlLimbBones
	// Size: 0x20 (0x20 - 0x0)
	struct FPhysicsControlLimbBones	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.PhysicsControlNames
	// Size: 0x10 (0x10 - 0x0)
	struct FPhysicsControlNames	
	{
	public:
		TArray<FName> Names; // 0x0(0x10)
	};


	// Struct PhysicsControl.PhysicsControlCharacterSetupData
	// Size: 0xC0 (0xC0 - 0x0)
	struct FPhysicsControlCharacterSetupData	
	{
	public:
		TArray<FPhysicsControlLimbSetupData> LimbSetupData; // 0x0(0x10)
		FPhysicsControlData DefaultWorldSpaceControlData; // 0x10(0x50)
		FPhysicsControlData DefaultParentSpaceControlData; // 0x60(0x50)
		FPhysicsControlModifierData DefaultBodyModifierData; // 0xB0(0x10)
	};


	// Struct PhysicsControl.RigidBodyControlTarget
	// Size: 0x30 (0x30 - 0x0)
	struct FRigidBodyControlTarget	
	{
	public:
		FVector TargetPosition; // 0x0(0x18)
		FRotator TargetOrientation; // 0x18(0x18)
	};


	// Struct PhysicsControl.RigidBodyControlTargets
	// Size: 0x50 (0x50 - 0x0)
	struct FRigidBodyControlTargets	
	{
	public:
		TMap<FName, FRigidBodyControlTarget> Targets; // 0x0(0x50)
	};


	// Struct PhysicsControl.RigidBodyKinematicTarget
	// Size: 0x38 (0x38 - 0x0)
	struct FRigidBodyKinematicTarget	
	{
	public:
		FVector TargetPosition; // 0x0(0x18)
		FRotator TargetOrientation; // 0x18(0x18)
		bool bUseSkeletalAnimation : 1; // 0x30:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.RigidBodyKinematicTargets
	// Size: 0x50 (0x50 - 0x0)
	struct FRigidBodyKinematicTargets	
	{
	public:
		TMap<FName, FRigidBodyKinematicTarget> Targets; // 0x0(0x50)
	};


	// Struct PhysicsControl.AnimNode_RigidBodyWithControl
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0xD78 (0xE40 - 0xC8)
	struct FAnimNode_RigidBodyWithControl : public FAnimNode_SkeletalControlBase	
	{
	public:
		UPhysicsAsset* OverridePhysicsAsset; // 0xC8(0x8)
		bool bDefaultToSkeletalMeshPhysicsAsset; // 0xD0(0x1)
		unsigned char UnknownData00_6[0x137]; // 0xD1(0x137) UNKNOWN PROPERTY
		FVector OverrideWorldGravity; // 0x208(0x18)
		FVector ExternalForce; // 0x220(0x18)
		FVector ComponentLinearAccScale; // 0x238(0x18)
		FVector ComponentLinearVelScale; // 0x250(0x18)
		FVector ComponentAppliedLinearAccClamp; // 0x268(0x18)
		FSimSpaceSettings SimSpaceSettings; // 0x280(0x60)
		float CachedBoundsScale; // 0x2E0(0x4)
		bool bUpdateCacheEveryFrame; // 0x2E4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY
		FBoneReference BaseBoneRef; // 0x2E8(0xC)
		TEnumAsByte<ECollisionChannel> OverlapChannel; // 0x2F4(0x1)
		ESimulationSpace SimulationSpace; // 0x2F5(0x1)
		bool bCalculateVelocitiesForWorldGeometry : 1; // 0x2F6:0(0x1)
		bool bForceDisableCollisionBetweenConstraintBodies : 1; // 0x2F6:1(0x1)
		bool bUseExternalClothCollision : 1; // 0x2F6:2(0x1)
		bool bMakeKinematicConstraints : 1; // 0x2F6:3(0x1)
		unsigned char UnknownData02_3[0x1]; // 0x2F7(0x1) UNKNOWN PROPERTY
		bool bEnableWorldGeometry : 1; // 0x2F8:0(0x1)
		bool bOverrideWorldGravity : 1; // 0x2F8:1(0x1)
		bool bTransferBoneVelocities : 1; // 0x2F8:2(0x1)
		bool bFreezeIncomingPoseOnStart : 1; // 0x2F8:3(0x1)
		MapConstraintsBehaviorType PhysicsAssetConditioningConstraintPosition; // 0x2F9(0x1)
		MapConstraintsBehaviorType PhysicsAssetConditioningConstraintOrientation; // 0x2FA(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x2FB(0x1) UNKNOWN PROPERTY
		float WorldSpaceMinimumScale; // 0x2FC(0x4)
		float EvaluationResetTime; // 0x300(0x4)
		bool bEnableControls; // 0x304(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x305(0x3) UNKNOWN PROPERTY
		UPhysicsControlAsset* PhysicsControlAsset; // 0x308(0x8)
		TMap<FName, FName> BoneToBodyNameMap; // 0x310(0x50)
		FPhysicsControlCharacterSetupData CharacterSetupData; // 0x360(0xC0)
		bool bEnableCharacterSetupData; // 0x420(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x421(0x7) UNKNOWN PROPERTY
		FPhysicsControlAndBodyModifierCreationDatas AdditionalControlsAndBodyModifiers; // 0x428(0xA0)
		FPhysicsControlSetUpdates AdditionalSets; // 0x4C8(0x20)
		FPhysicsControlControlAndModifierParameters InitialControlAndBodyModifierUpdates; // 0x4E8(0x30)
		FPhysicsControlControlAndModifierParameters ControlAndModifierParameters; // 0x518(0x30)
		FPhysicsControlControlAndModifierUpdates ControlAndModifierUpdates; // 0x548(0x30)
		FRigidBodyControlTargets ControlTargets; // 0x578(0x50)
		FRigidBodyKinematicTargets KinematicTargets; // 0x5C8(0x50)
		USkeletalMesh* PhysicsAssetAuthoredSkeletalMesh; // 0x618(0x8)
		FName ConstraintProfile; // 0x620(0x4)
		FName ControlProfile; // 0x624(0x4)
		unsigned char UnknownData06_6[0x1]; // 0x628(0x1) UNKNOWN PROPERTY
		ESimulationTiming SimulationTiming; // 0x629(0x1)
		unsigned char UnknownData07_7[0x816]; // 0x62A(0x816) UNKNOWN PROPERTY
	};


	// Struct PhysicsControl.InitialPhysicsControl
	// Size: 0x148 (0x148 - 0x0)
	struct FInitialPhysicsControl	
	{
	public:
		TWeakObjectPtr<AActor*> ParentActor; // 0x0(0x8)
		FName ParentMeshComponentName; // 0x8(0x4)
		FName ParentBoneName; // 0xC(0x4)
		TWeakObjectPtr<AActor*> ChildActor; // 0x10(0x8)
		FName ChildMeshComponentName; // 0x18(0x4)
		FName ChildBoneName; // 0x1C(0x4)
		FPhysicsControlData ControlData; // 0x20(0x50)
		FPhysicsControlMultiplier ControlMultiplier; // 0x70(0x70)
		FPhysicsControlTarget ControlTarget; // 0xE0(0x68)
	};


	// Struct PhysicsControl.InitialBodyModifier
	// Size: 0x50 (0x50 - 0x0)
	struct FInitialBodyModifier	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x0(0x8)
		FName MeshComponentName; // 0x8(0x4)
		FName BoneName; // 0xC(0x4)
		FPhysicsControlModifierData BodyModifierData; // 0x10(0x10)
		FVector KinematicTargetPosition; // 0x20(0x18)
		FRotator KinematicTargetOrientation; // 0x38(0x18)
	};


	// Struct PhysicsControl.InitialCharacterControls
	// Size: 0xD0 (0xD0 - 0x0)
	struct FInitialCharacterControls	
	{
	public:
		TWeakObjectPtr<AActor*> CharacterActor; // 0x0(0x8)
		FName SkeletalMeshComponentName; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FPhysicsControlLimbSetupData> LimbSetupData; // 0x10(0x10)
		FPhysicsControlData WorldSpaceControlData; // 0x20(0x50)
		FPhysicsControlData ParentSpaceControlData; // 0x70(0x50)
		FPhysicsControlModifierData BodyModifierData; // 0xC0(0x10)
	};

}
