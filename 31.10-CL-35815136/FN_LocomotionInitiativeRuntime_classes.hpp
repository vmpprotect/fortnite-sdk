#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LocomotionInitiativeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortLocomotionLayerMaskDataAsset : public UDataAsset	
	{
	public:
		float MaskingHeadTorsoAlpha; // 0x30(0x4)
		float MaskingLeftArmAlpha; // 0x34(0x4)
		float MaskingRightArmAlpha; // 0x38(0x4)
		float MaskingWeaponAlpha; // 0x3C(0x4)
		float MutingHeadTorsoAlpha; // 0x40(0x4)
		float MutingLeftArmAlpha; // 0x44(0x4)
		float MutingRightArmAlpha; // 0x48(0x4)
		float MutingWeaponAlpha; // 0x4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset");
			return ret;
		}

		void ApplyTo(FFortLocomotionLayerMaskDataSet& DataAsset); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513DACC4(relative to base address)
	};


	// Class LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x4B0 (0x18D0 - 0x1420)
	class UFortPlayerMotionMatchingLocomotionAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		FVector FutureRootMotionVelocity; // 0x1420(0x18)
		FMotionMatchingLODConfig TestConfig; // 0x1438(0x38)
		FMotionMatchingLODConfig HighEndConfig; // 0x1470(0x38)
		FMotionMatchingLODConfig LowEndConfig; // 0x14A8(0x38)
		FMotionMatchingLODConfig CurrentLODConfig; // 0x14E0(0x38)
		UAnimSequence* SelectedIdleBreak; // 0x1518(0x8)
		UProxyAsset* MotionMatchingLODProxyAsset; // 0x1520(0x8)
		int32_t MotionMatchingLOD; // 0x1528(0x4)
		FMotionMatchingBlendInfo MotionMatchingBlendInfo; // 0x152C(0x8)
		unsigned char UnknownData00_6[0x4]; // 0x1534(0x4) UNKNOWN PROPERTY
		UClass* StopBranchOutWindowNotifyClass; // 0x1538(0x8)
		EFortMotionMatchingLocomotionState LocomotionState; // 0x1540(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1541(0x3) UNKNOWN PROPERTY
		float StartToLoopSearchDelaySeconds; // 0x1544(0x4)
		float PivotToLoopSearchDelaySeconds; // 0x1548(0x4)
		float PivotSpeedThreshold; // 0x154C(0x4)
		float PivotDotProductThresholdRun; // 0x1550(0x4)
		float PivotAngleThresholdRun; // 0x1554(0x4)
		float DiagonalDetectionThreshold; // 0x1558(0x4)
		float PivotDotProductThresholdWalk; // 0x155C(0x4)
		float PivotAngleThresholdWalk; // 0x1560(0x4)
		float PivotDotProductThresholdSprint; // 0x1564(0x4)
		float PivotAngleThresholdSprint; // 0x1568(0x4)
		float LocomotionStateTime; // 0x156C(0x4)
		float VelocityDirection; // 0x1570(0x4)
		float MotionMatchingWeight; // 0x1574(0x4)
		EPoseSearchInterruptMode DatabaseSearchInterruptMode; // 0x1578(0x1)
		bool bUseOrientationWarping; // 0x1579(0x1)
		bool bUseFutureForOrientationWarping; // 0x157A(0x1)
		bool bIsLowEnd; // 0x157B(0x1)
		bool bUseLocomotionBlendspace; // 0x157C(0x1)
		bool bShouldPlayIdle; // 0x157D(0x1)
		bool bShouldPlayIdleBreak; // 0x157E(0x1)
		bool bShouldExitIdleBreak; // 0x157F(0x1)
		bool bShouldExitIdleBreakSlow; // 0x1580(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1581(0x3) UNKNOWN PROPERTY
		float IdleTransitionTimer; // 0x1584(0x4)
		float IdleBreakTimer; // 0x1588(0x4)
		bool bBothHandsIKInHandSpace; // 0x158C(0x1)
		bool bIsCrouchedTransition; // 0x158D(0x1)
		bool bWasCrouching; // 0x158E(0x1)
		bool bShouldPlayStandToCrouchTransition; // 0x158F(0x1)
		bool bShouldPlayCrouchToStandTransition; // 0x1590(0x1)
		bool bShouldExitCrouchTransition; // 0x1591(0x1)
		bool bIsLocallyControlled; // 0x1592(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x1593(0x1) UNKNOWN PROPERTY
		float CameraSpamYawThreshold; // 0x1594(0x4)
		float CameraSpamCoolDownSeconds; // 0x1598(0x4)
		float CameraSpamSearchThrottleTime; // 0x159C(0x4)
		float DefaultSearchThrottleTime; // 0x15A0(0x4)
		float PlayRateMultiplier; // 0x15A4(0x4)
		float SearchThrottleTime; // 0x15A8(0x4)
		float AdditiveLeanAlpha; // 0x15AC(0x4)
		bool bEnableAdditiveLeans : 1; // 0x15B0:0(0x1)
		bool bEnableAdditiveRunLeans : 1; // 0x15B0:1(0x1)
		bool bDisableArcs : 1; // 0x15B0:2(0x1)
		bool bDisableDiamonds : 1; // 0x15B0:3(0x1)
		bool bIdleToMotionMatchingNoInertialization : 1; // 0x15B0:4(0x1)
		bool bRelaxedStateChanged : 1; // 0x15B0:5(0x1)
		bool bIsMelee : 1; // 0x15B0:6(0x1)
		bool bUseRelaxedMotionMatchingData : 1; // 0x15B0:7(0x1)
		bool bPlayRunToJogTransition : 1; // 0x15B1:0(0x1)
		unsigned char UnknownData04_5[0x2]; // 0x15B2(0x2) UNKNOWN PROPERTY
		FFloatInterval RunToJogTransitionAngleInterval; // 0x15B4(0x8)
		float RunToJogTransitionTimeStamp; // 0x15BC(0x4)
		float PreviousLocalVelocityYawAngle; // 0x15C0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x15C4(0x4) UNKNOWN PROPERTY
		FPoseSearchQueryTrajectory Trajectory; // 0x15C8(0x10)
		FTrajectorySamplingData TrajectorySamplingData; // 0x15D8(0x20)
		unsigned char UnknownData06_6[0x8]; // 0x15F8(0x8) UNKNOWN PROPERTY
		FCharacterTrajectoryData CharacterTrajectoryData; // 0x1600(0x1E0)
		float TrajectorySpeedMultiplier; // 0x17E0(0x4)
		float LowFrictionCustomMaxSpeed; // 0x17E4(0x4)
		float LowFrictionCustomBrakingDeceleration; // 0x17E8(0x4)
		float LowFrictionCustomFriction; // 0x17EC(0x4)
		FFortMotionMatchingAngleSpamTracker AccelerationSpamTracker; // 0x17F0(0x48)
		unsigned char UnknownData07_6[0x70]; // 0x1838(0x70) UNKNOWN PROPERTY
		TEnumAsByte<EFortMovementStyle> FortMovementStyle; // 0x18A8(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x18A9(0x2) UNKNOWN PROPERTY
		bool bIsPlayingIdleBreak; // 0x18AB(0x1)
		unsigned char UnknownData09_6[0xC]; // 0x18AC(0xC) UNKNOWN PROPERTY
		int32_t LastUpdateFrame; // 0x18B8(0x4)
		int32_t LastMotionMatchingUpdateFrame; // 0x18BC(0x4)
		bool bIsPlayingInterruptibleStop; // 0x18C0(0x1)
		bool bIsPlayingIdleDatabase; // 0x18C1(0x1)
		bool bHasReachedIdle; // 0x18C2(0x1)
		unsigned char UnknownData10_7[0xD]; // 0x18C3(0xD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance");
			return ret;
		}

		void OnUpdateMotionMatchingState(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7474C2488(relative to base address)
		void OnUpdateMotionMatching(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748202BD4(relative to base address)
		void OnUpdateIdleBreaks(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748A52D8C(relative to base address)
		UBlendProfile GetMotionMatchingBlendProfile(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748705948(relative to base address)
	};


	// Class LocomotionInitiativeRuntime.LocomotionInitiativeComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class ULocomotionInitiativeComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UClass* MotionMatchingLocomotionAnimBlueprintClass; // 0xA8(0x8)
		UClass* RigidBodyPBA_AnimBlueprintClass; // 0xB0(0x8)
		FScalableFloat IsLocomotionInitiativeEnabled; // 0xB8(0x28)
		UAnimSequence* CrouchShuffleInPlaceAnim; // 0xE0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LocomotionInitiativeRuntime.LocomotionInitiativeComponent");
			return ret;
		}
	};


	// Class LocomotionInitiativeRuntime.LocomotionInitiativeGameFeatureData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x8 (0x548 - 0x540)
	class ULocomotionInitiativeGameFeatureData : public UFortGameFeatureData	
	{
	public:
		FPerPlatformBool EnableRequestedFullBodyPBAByDefault; // 0x540(0x1)
		FPerPlatformBool EnableSkydivingFullBodyPBAByDefault; // 0x541(0x1)
		FPerPlatformBool EnableDBNOCarriedFullBodyPBAByDefault; // 0x542(0x1)
		FPerPlatformBool SkydivingEnablePhysicsBasedAnimationByDefault; // 0x543(0x1)
		unsigned char UnknownData00_7[0x4]; // 0x544(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LocomotionInitiativeRuntime.LocomotionInitiativeGameFeatureData");
			return ret;
		}
	};

}
