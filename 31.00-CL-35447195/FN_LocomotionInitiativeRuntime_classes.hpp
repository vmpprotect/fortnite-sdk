#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LocomotionInitiativeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void ApplyTo(FFortLocomotionLayerMaskDataSet& DataAsset); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D006B8
	};


	// Class LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x4A0 (0x18B0 - 0x1410)
	class UFortPlayerMotionMatchingLocomotionAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		FVector FutureRootMotionVelocity; // 0x1410(0x18)
		FMotionMatchingLODConfig TestConfig; // 0x1428(0x38)
		FMotionMatchingLODConfig HighEndConfig; // 0x1460(0x38)
		FMotionMatchingLODConfig LowEndConfig; // 0x1498(0x38)
		FMotionMatchingLODConfig CurrentLODConfig; // 0x14D0(0x38)
		UAnimSequence SelectedIdleBreak; // 0x1508(0x8)
		UProxyAsset MotionMatchingLODProxyAsset; // 0x1510(0x8)
		int32_t MotionMatchingLOD; // 0x1518(0x4)
		FMotionMatchingBlendInfo MotionMatchingBlendInfo; // 0x151C(0x8)
		unsigned char UnknownData09_6[0x4]; // 0x1524(0x4) UNKNOWN PROPERTY
		UClass StopBranchOutWindowNotifyClass; // 0x1528(0x8)
		EFortMotionMatchingLocomotionState LocomotionState; // 0x1530(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x1531(0x3) UNKNOWN PROPERTY
		float StartToLoopSearchDelaySeconds; // 0x1534(0x4)
		float PivotToLoopSearchDelaySeconds; // 0x1538(0x4)
		float PivotSpeedThreshold; // 0x153C(0x4)
		float PivotDotProductThresholdRun; // 0x1540(0x4)
		float PivotAngleThresholdRun; // 0x1544(0x4)
		float DiagonalDetectionThreshold; // 0x1548(0x4)
		float PivotDotProductThresholdWalk; // 0x154C(0x4)
		float PivotAngleThresholdWalk; // 0x1550(0x4)
		float PivotDotProductThresholdSprint; // 0x1554(0x4)
		float PivotAngleThresholdSprint; // 0x1558(0x4)
		float LocomotionStateTime; // 0x155C(0x4)
		float VelocityDirection; // 0x1560(0x4)
		float MotionMatchingWeight; // 0x1564(0x4)
		EPoseSearchInterruptMode DatabaseSearchInterruptMode; // 0x1568(0x1)
		bool bUseOrientationWarping; // 0x1569(0x1)
		bool bUseFutureForOrientationWarping; // 0x156A(0x1)
		bool bIsLowEnd; // 0x156B(0x1)
		bool bUseLocomotionBlendspace; // 0x156C(0x1)
		bool bShouldPlayIdle; // 0x156D(0x1)
		bool bShouldPlayIdleBreak; // 0x156E(0x1)
		bool bShouldExitIdleBreak; // 0x156F(0x1)
		bool bShouldExitIdleBreakSlow; // 0x1570(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x1571(0x3) UNKNOWN PROPERTY
		float IdleTransitionTimer; // 0x1574(0x4)
		float IdleBreakTimer; // 0x1578(0x4)
		bool bBothHandsIKInHandSpace; // 0x157C(0x1)
		bool bIsCrouchedTransition; // 0x157D(0x1)
		bool bWasCrouching; // 0x157E(0x1)
		bool bShouldPlayStandToCrouchTransition; // 0x157F(0x1)
		bool bShouldPlayCrouchToStandTransition; // 0x1580(0x1)
		bool bShouldExitCrouchTransition; // 0x1581(0x1)
		bool bIsLocallyControlled; // 0x1582(0x1)
		unsigned char UnknownData12_6[0x1]; // 0x1583(0x1) UNKNOWN PROPERTY
		float CameraSpamYawThreshold; // 0x1584(0x4)
		float CameraSpamCoolDownSeconds; // 0x1588(0x4)
		float CameraSpamSearchThrottleTime; // 0x158C(0x4)
		float DefaultSearchThrottleTime; // 0x1590(0x4)
		float PlayRateMultiplier; // 0x1594(0x4)
		float SearchThrottleTime; // 0x1598(0x4)
		float AdditiveLeanAlpha; // 0x159C(0x4)
		bool bEnableAdditiveLeans : 1; // 0x15A0:0(0x1)
		bool bEnableAdditiveRunLeans : 1; // 0x15A0:1(0x1)
		bool bDisableArcs : 1; // 0x15A0:2(0x1)
		bool bDisableDiamonds : 1; // 0x15A0:3(0x1)
		bool bIdleToMotionMatchingNoInertialization : 1; // 0x15A0:4(0x1)
		bool bRelaxedStateChanged : 1; // 0x15A0:5(0x1)
		bool bIsMelee : 1; // 0x15A0:6(0x1)
		bool bUseRelaxedMotionMatchingData : 1; // 0x15A0:7(0x1)
		unsigned char UnknownData13_5[0x7]; // 0x15A1(0x7) UNKNOWN PROPERTY
		FPoseSearchQueryTrajectory Trajectory; // 0x15A8(0x10)
		FTrajectorySamplingData TrajectorySamplingData; // 0x15B8(0x20)
		unsigned char UnknownData14_6[0x8]; // 0x15D8(0x8) UNKNOWN PROPERTY
		FCharacterTrajectoryData CharacterTrajectoryData; // 0x15E0(0x1E0)
		float TrajectorySpeedMultiplier; // 0x17C0(0x4)
		float LowFrictionCustomMaxSpeed; // 0x17C4(0x4)
		float LowFrictionCustomBrakingDeceleration; // 0x17C8(0x4)
		float LowFrictionCustomFriction; // 0x17CC(0x4)
		FFortMotionMatchingAngleSpamTracker AccelerationSpamTracker; // 0x17D0(0x48)
		unsigned char UnknownData15_6[0x73]; // 0x1818(0x73) UNKNOWN PROPERTY
		bool bIsPlayingIdleBreak; // 0x188B(0x1)
		unsigned char UnknownData16_6[0xC]; // 0x188C(0xC) UNKNOWN PROPERTY
		int32_t LastUpdateFrame; // 0x1898(0x4)
		int32_t LastMotionMatchingUpdateFrame; // 0x189C(0x4)
		bool bIsPlayingInterruptibleStop; // 0x18A0(0x1)
		bool bIsPlayingIdleDatabase; // 0x18A1(0x1)
		bool bHasReachedIdle; // 0x18A2(0x1)
		unsigned char UnknownData17_7[0xD]; // 0x18A3(0xD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance");
			return ret;
		}

		void OnUpdateMotionMatchingState(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D00A38
		void OnUpdateMotionMatching(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D00958
		void OnUpdateIdleBreaks(FAnimUpdateContext& Context, FAnimNodeReference& Node); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D00878
		UBlendProfile GetMotionMatchingBlendProfile(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D00798
	};


	// Class LocomotionInitiativeRuntime.LocomotionInitiativeComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class ULocomotionInitiativeComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UClass MotionMatchingLocomotionAnimBlueprintClass; // 0xA8(0x8)
		UClass RigidBodyPBA_AnimBlueprintClass; // 0xB0(0x8)
		FScalableFloat IsLocomotionInitiativeEnabled; // 0xB8(0x28)
		UAnimSequence CrouchShuffleInPlaceAnim; // 0xE0(0x8)
		unsigned char UnknownData03_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x544(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LocomotionInitiativeRuntime.LocomotionInitiativeGameFeatureData");
			return ret;
		}
	};

}
