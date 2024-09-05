#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: IKRig
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class IKRig.RetargetOpBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class URetargetOpBase : public UObject	
	{
	public:
		bool bIsEnabled; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.RetargetOpBase");
			return ret;
		}
	};


	// Class IKRig.CurveRemapOp
	// Inherited from URetargetOpBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UCurveRemapOp : public URetargetOpBase	
	{
	public:
		TArray<FCurveRemapPair> CurvesToRemap; // 0x30(0x10)
		bool bCopyAllSourceCurves; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.CurveRemapOp");
			return ret;
		}
	};


	// Class IKRig.RetargetOpStack
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class URetargetOpStack : public UObject	
	{
	public:
		TArray<URetargetOpBase*> RetargetOps; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.RetargetOpStack");
			return ret;
		}
	};


	// Class IKRig.IKGoalCreatorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UIKGoalCreatorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKGoalCreatorInterface");
			return ret;
		}

		void AddIKGoals(TMap<FName, FIKRigGoal>& OutGoals); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74D87A508(relative to base address)
	};


	// Class IKRig.PinBoneOp
	// Inherited from URetargetOpBase -> UObject
	// Size: 0xE0 (0x110 - 0x30)
	class UPinBoneOp : public URetargetOpBase	
	{
	public:
		TArray<FPinBoneData> BonesToPin; // 0x30(0x10)
		ERetargetSourceOrTarget PinTo; // 0x40(0x1)
		EPinBoneType PinType; // 0x41(0x1)
		bool bMaintainOffset; // 0x42(0x1)
		unsigned char UnknownData00_6[0xD]; // 0x43(0xD) UNKNOWN PROPERTY
		FTransform GlobalOffset; // 0x50(0x60)
		FTransform LocalOffset; // 0xB0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.PinBoneOp");
			return ret;
		}
	};


	// Class IKRig.RootMotionGeneratorOp
	// Inherited from URetargetOpBase -> UObject
	// Size: 0x220 (0x250 - 0x30)
	class URootMotionGeneratorOp : public URetargetOpBase	
	{
	public:
		FName SourceRootBone; // 0x30(0x4)
		FName TargetRootBone; // 0x34(0x4)
		FName TargetPelvisBone; // 0x38(0x4)
		ERootMotionSource RootMotionSource; // 0x3C(0x1)
		ERootMotionHeightSource RootHeightSource; // 0x3D(0x1)
		bool bPropagateToNonRetargetedChildren; // 0x3E(0x1)
		bool bMaintainOffsetFromPelvis; // 0x3F(0x1)
		bool bRotateWithPelvis; // 0x40(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x41(0xF) UNKNOWN PROPERTY
		FTransform GlobalOffset; // 0x50(0x60)
		unsigned char UnknownData01_7[0x1A0]; // 0xB0(0x1A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.RootMotionGeneratorOp");
			return ret;
		}
	};


	// Class IKRig.IKRigComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UIKRigComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRigComponent");
			return ret;
		}

		void SetIKRigGoalTransform(FName GoalName, FTransform Transform, float PositionAlpha, float RotationAlpha); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D87C244(relative to base address)
		void SetIKRigGoalPositionAndRotation(FName GoalName, FVector Position, FQuat Rotation, float PositionAlpha, float RotationAlpha); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D87BE94(relative to base address)
		void SetIKRigGoal(FIKRigGoal& Goal); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D87BDF8(relative to base address)
		void ClearAllGoals(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87A5D8(relative to base address)
	};


	// Class IKRig.RetargetChainSettings
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class URetargetChainSettings : public UObject	
	{
	public:
		FName SourceChain; // 0x28(0x4)
		FName TargetChain; // 0x2C(0x4)
		FTargetChainSettings Settings; // 0x30(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.RetargetChainSettings");
			return ret;
		}
	};


	// Class IKRig.RetargetRootSettings
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class URetargetRootSettings : public UObject	
	{
	public:
		FTargetRootSettings Settings; // 0x28(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.RetargetRootSettings");
			return ret;
		}
	};


	// Class IKRig.IKRetargetGlobalSettings
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UIKRetargetGlobalSettings : public UObject	
	{
	public:
		FRetargetGlobalSettings Settings; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRetargetGlobalSettings");
			return ret;
		}
	};


	// Class IKRig.IKRetargeter
	// Inherited from UObject
	// Size: 0x1D8 (0x200 - 0x28)
	class UIKRetargeter : public UObject	
	{
	public:
		int32_t Version; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UIKRigDefinition*> SourceIKRigAsset; // 0x30(0x20)
		TWeakObjectPtr<UIKRigDefinition*> TargetIKRigAsset; // 0x50(0x20)
		TArray<FRetargetChainMap> ChainMapping; // 0x70(0x10)
		TArray<URetargetChainSettings*> ChainSettings; // 0x80(0x10)
		URetargetRootSettings* RootSettings; // 0x90(0x8)
		UIKRetargetGlobalSettings* GlobalSettings; // 0x98(0x8)
		URetargetOpStack* OpStack; // 0xA0(0x8)
		TMap<FName, FRetargetProfile> Profiles; // 0xA8(0x50)
		FName CurrentProfile; // 0xF8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		TMap<FName, FIKRetargetPose> SourceRetargetPoses; // 0x100(0x50)
		TMap<FName, FIKRetargetPose> TargetRetargetPoses; // 0x150(0x50)
		FName CurrentSourceRetargetPose; // 0x1A0(0x4)
		FName CurrentTargetRetargetPose; // 0x1A4(0x4)
		TMap<FName, FIKRetargetPose> RetargetPoses; // 0x1A8(0x50)
		FName CurrentRetargetPose; // 0x1F8(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRetargeter");
			return ret;
		}

		void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetRootSettings& RootSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D87C5B8(relative to base address)
		void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FRetargetGlobalSettings& GlobalSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D87BCCC(relative to base address)
		void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSpeedPlantSettings& SpeedPlantSettings, FName TargetChainName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D87BAD0(relative to base address)
		void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSettings& ChainSettings, FName TargetChainName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D87B8E8(relative to base address)
		void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainIKSettings& IKSettings, FName TargetChainName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D87B700(relative to base address)
		void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainFKSettings& FKSettings, FName TargetChainName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D87B4FC(relative to base address)
		bool HasTargetIKRig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D87B4D8(relative to base address)
		bool HasSourceIKRig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D87B4B4(relative to base address)
		FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D87B3A0(relative to base address)
		void GetRootSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName OptionalProfileName, FTargetRootSettings& OutSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D87B188(relative to base address)
		FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D87B0B4(relative to base address)
		void GetGlobalSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName OptionalProfileName, FRetargetGlobalSettings& OutSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D87AF3C(relative to base address)
		FTargetChainSettings GetChainUsingGoalFromRetargetAsset(UIKRetargeter* RetargetAsset, FName IKGoalName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D87AC2C(relative to base address)
		FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, FName TargetChainName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D87A9A4(relative to base address)
		FTargetChainSettings GetChainSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName TargetChainName, FName OptionalProfileName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D87A6BC(relative to base address)
	};


	// Class IKRig.IKRetargetProcessor
	// Inherited from UObject
	// Size: 0x348 (0x370 - 0x28)
	class UIKRetargetProcessor : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x150]; // 0x28(0x150) UNKNOWN PROPERTY
		UIKRigProcessor* IKRigProcessor; // 0x178(0x8)
		unsigned char UnknownData01_6[0x1E0]; // 0x180(0x1E0) UNKNOWN PROPERTY
		TArray<URetargetOpBase*> OpStack; // 0x360(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRetargetProcessor");
			return ret;
		}
	};


	// Class IKRig.IKRigEffectorGoal
	// Inherited from UObject
	// Size: 0xD8 (0x100 - 0x28)
	class UIKRigEffectorGoal : public UObject	
	{
	public:
		FName GoalName; // 0x28(0x4)
		FName BoneName; // 0x2C(0x4)
		float PositionAlpha; // 0x30(0x4)
		float RotationAlpha; // 0x34(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FTransform CurrentTransform; // 0x40(0x60)
		FTransform InitialTransform; // 0xA0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRigEffectorGoal");
			return ret;
		}
	};


	// Class IKRig.IKRigDefinition
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class UIKRigDefinition : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<USkeletalMesh*> PreviewSkeletalMesh; // 0x30(0x20)
		FIKRigSkeleton Skeleton; // 0x50(0x70)
		TArray<UIKRigEffectorGoal*> Goals; // 0xC0(0x10)
		TArray<UIKRigSolver*> Solvers; // 0xD0(0x10)
		FRetargetDefinition RetargetDefinition; // 0xE0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRigDefinition");
			return ret;
		}
	};


	// Class IKRig.IKRigProcessor
	// Inherited from UObject
	// Size: 0x120 (0x148 - 0x28)
	class UIKRigProcessor : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x28(0x38) UNKNOWN PROPERTY
		TArray<UIKRigSolver*> Solvers; // 0x60(0x10)
		unsigned char UnknownData01_7[0xD8]; // 0x70(0xD8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRigProcessor");
			return ret;
		}
	};


	// Class IKRig.IKRigSolver
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UIKRigSolver : public UObject	
	{
	public:
		bool bIsEnabled; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRigSolver");
			return ret;
		}
	};


	// Class IKRig.IKRig_BodyMoverEffector
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UIKRig_BodyMoverEffector : public UObject	
	{
	public:
		FName GoalName; // 0x28(0x4)
		FName BoneName; // 0x2C(0x4)
		float InfluenceMultiplier; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_BodyMoverEffector");
			return ret;
		}
	};


	// Class IKRig.IKRig_BodyMover
	// Inherited from UIKRigSolver -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UIKRig_BodyMover : public UIKRigSolver	
	{
	public:
		FName RootBone; // 0x30(0x4)
		float PositionAlpha; // 0x34(0x4)
		float PositionPositiveX; // 0x38(0x4)
		float PositionNegativeX; // 0x3C(0x4)
		float PositionPositiveY; // 0x40(0x4)
		float PositionNegativeY; // 0x44(0x4)
		float PositionPositiveZ; // 0x48(0x4)
		float PositionNegativeZ; // 0x4C(0x4)
		float RotationAlpha; // 0x50(0x4)
		float RotateXAlpha; // 0x54(0x4)
		float RotateYAlpha; // 0x58(0x4)
		float RotateZAlpha; // 0x5C(0x4)
		TArray<UIKRig_BodyMoverEffector*> Effectors; // 0x60(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_BodyMover");
			return ret;
		}
	};


	// Class IKRig.IKRig_LimbEffector
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UIKRig_LimbEffector : public UObject	
	{
	public:
		FName GoalName; // 0x28(0x4)
		FName BoneName; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_LimbEffector");
			return ret;
		}
	};


	// Class IKRig.IKRig_LimbSolver
	// Inherited from UIKRigSolver -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UIKRig_LimbSolver : public UIKRigSolver	
	{
	public:
		FName RootName; // 0x30(0x4)
		float ReachPrecision; // 0x34(0x4)
		TEnumAsByte<EAxis> HingeRotationAxis; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t MaxIterations; // 0x3C(0x4)
		bool bEnableLimit; // 0x40(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float MinRotationAngle; // 0x44(0x4)
		bool bAveragePull; // 0x48(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		float PullDistribution; // 0x4C(0x4)
		float ReachStepAlpha; // 0x50(0x4)
		bool bEnableTwistCorrection; // 0x54(0x1)
		TEnumAsByte<EAxis> EndBoneForwardAxis; // 0x55(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
		UIKRig_LimbEffector* Effector; // 0x58(0x8)
		unsigned char UnknownData04_7[0x28]; // 0x60(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_LimbSolver");
			return ret;
		}
	};


	// Class IKRig.IKRig_FBIKEffector
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UIKRig_FBIKEffector : public UObject	
	{
	public:
		FName GoalName; // 0x28(0x4)
		FName BoneName; // 0x2C(0x4)
		int32_t ChainDepth; // 0x30(0x4)
		float StrengthAlpha; // 0x34(0x4)
		float PullChainAlpha; // 0x38(0x4)
		float PinRotation; // 0x3C(0x4)
		int32_t IndexInSolver; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_FBIKEffector");
			return ret;
		}
	};


	// Class IKRig.IKRig_FBIKBoneSettings
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UIKRig_FBIKBoneSettings : public UObject	
	{
	public:
		FName bone; // 0x28(0x4)
		float RotationStiffness; // 0x2C(0x4)
		float PositionStiffness; // 0x30(0x4)
		EPBIKLimitType X; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		float MinX; // 0x38(0x4)
		float MaxX; // 0x3C(0x4)
		EPBIKLimitType Y; // 0x40(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float MinY; // 0x44(0x4)
		float MaxY; // 0x48(0x4)
		EPBIKLimitType Z; // 0x4C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		float MinZ; // 0x50(0x4)
		float MaxZ; // 0x54(0x4)
		bool bUsePreferredAngles; // 0x58(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		FVector PreferredAngles; // 0x60(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_FBIKBoneSettings");
			return ret;
		}
	};


	// Class IKRig.IKRigFBIKSolver
	// Inherited from UIKRigSolver -> UObject
	// Size: 0xC0 (0xF0 - 0x30)
	class UIKRigFBIKSolver : public UIKRigSolver	
	{
	public:
		FName RootBone; // 0x30(0x4)
		int32_t Iterations; // 0x34(0x4)
		int32_t SubIterations; // 0x38(0x4)
		float MassMultiplier; // 0x3C(0x4)
		bool bAllowStretch; // 0x40(0x1)
		EPBIKRootBehavior RootBehavior; // 0x41(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x42(0x2) UNKNOWN PROPERTY
		FRootPrePullSettings PrePullRootSettings; // 0x44(0x20)
		float PullChainAlpha; // 0x64(0x4)
		float MaxAngle; // 0x68(0x4)
		float OverRelaxation; // 0x6C(0x4)
		bool bStartSolveFromInputPose; // 0x70(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		TArray<UIKRig_FBIKEffector*> Effectors; // 0x78(0x10)
		TArray<UIKRig_FBIKBoneSettings*> BoneSettings; // 0x88(0x10)
		unsigned char UnknownData02_7[0x58]; // 0x98(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRigFBIKSolver");
			return ret;
		}

		TArray GetEffectors(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87AE8C(relative to base address)
		TArray GetBoneSettings(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D87A608(relative to base address)
	};


	// Class IKRig.IKRig_PoleSolverEffector
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UIKRig_PoleSolverEffector : public UObject	
	{
	public:
		FName GoalName; // 0x28(0x4)
		FName BoneName; // 0x2C(0x4)
		float Alpha; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_PoleSolverEffector");
			return ret;
		}
	};


	// Class IKRig.IKRig_PoleSolver
	// Inherited from UIKRigSolver -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UIKRig_PoleSolver : public UIKRigSolver	
	{
	public:
		FName RootName; // 0x30(0x4)
		FName EndName; // 0x34(0x4)
		UIKRig_PoleSolverEffector* Effector; // 0x38(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_PoleSolver");
			return ret;
		}
	};


	// Class IKRig.IKRig_SetTransformEffector
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UIKRig_SetTransformEffector : public UObject	
	{
	public:
		bool bEnablePosition; // 0x28(0x1)
		bool bEnableRotation; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		float Alpha; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_SetTransformEffector");
			return ret;
		}
	};


	// Class IKRig.IKRig_SetTransform
	// Inherited from UIKRigSolver -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UIKRig_SetTransform : public UIKRigSolver	
	{
	public:
		FName Goal; // 0x30(0x4)
		FName RootBone; // 0x34(0x4)
		UIKRig_SetTransformEffector* Effector; // 0x38(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IKRig.IKRig_SetTransform");
			return ret;
		}
	};

}
