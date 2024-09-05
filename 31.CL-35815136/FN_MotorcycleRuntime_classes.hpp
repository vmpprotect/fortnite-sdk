#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotorcycleRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MotorcycleRuntime.FortMotorcycleVehicleAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x78 (0x6E0 - 0x668)
	class UFortMotorcycleVehicleAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		AFortMotorcycleVehicle* MotorcycleVehicle; // 0x668(0x8)
		FRotator SwingArmRotation; // 0x670(0x18)
		bool bIsInInventoryMode; // 0x688(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x689(0x7) UNKNOWN PROPERTY
		UFortPlayerAnimInstance_MotorcycleDriver* DriverAnimInstance; // 0x690(0x8)
		bool bIsBikeParked; // 0x698(0x1)
		bool bIsBikeOn; // 0x699(0x1)
		bool bIsBikeStopping; // 0x69A(0x1)
		bool bIsReversing; // 0x69B(0x1)
		float TotalSpeed; // 0x69C(0x4)
		bool bIsSurfaceWater; // 0x6A0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x6A1(0x3) UNKNOWN PROPERTY
		float AdditiveAlpha; // 0x6A4(0x4)
		bool bIsRevving; // 0x6A8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x6A9(0x3) UNKNOWN PROPERTY
		float AccelAlpha; // 0x6AC(0x4)
		bool bIsThrottling; // 0x6B0(0x1)
		bool bIsHonking; // 0x6B1(0x1)
		bool bIsSoloJumpTrickOutro; // 0x6B2(0x1)
		bool bIsJumpTrickNone; // 0x6B3(0x1)
		float BrakeLeverAlpha; // 0x6B4(0x4)
		bool bShouldExitFromLocomotion; // 0x6B8(0x1)
		bool bStateRuleFromRevvingToThrottle; // 0x6B9(0x1)
		bool bShouldPlayThrottleAnim; // 0x6BA(0x1)
		bool bStateTransitionRuleToMovingLoop; // 0x6BB(0x1)
		bool bEarlyOutFromMovingStart; // 0x6BC(0x1)
		bool bShouldStop; // 0x6BD(0x1)
		bool bShouldReverse; // 0x6BE(0x1)
		bool bShouldReverseStop; // 0x6BF(0x1)
		bool bShouldStopThrottling; // 0x6C0(0x1)
		bool bIsFromJumpTrick; // 0x6C1(0x1)
		bool bIsSoloJumpTrick; // 0x6C2(0x1)
		bool bShouldJump; // 0x6C3(0x1)
		bool bIsMoving; // 0x6C4(0x1)
		EFortMotorcycleAirTrickType AirTrickType; // 0x6C5(0x1)
		bool bIsLandingInPlace; // 0x6C6(0x1)
		bool bStateRuleFallingToMoving; // 0x6C7(0x1)
		float JumpChargeFactor; // 0x6C8(0x4)
		float ForwardSpeed; // 0x6CC(0x4)
		bool bStoppie; // 0x6D0(0x1)
		bool bIsBraking; // 0x6D1(0x1)
		bool bShouldBrake; // 0x6D2(0x1)
		bool bEarlyOutBrakingOutro; // 0x6D3(0x1)
		bool bShouldJumpTrick; // 0x6D4(0x1)
		bool bStateTransitionRuleToReverseLoop; // 0x6D5(0x1)
		bool bIsReverseNoFeet; // 0x6D6(0x1)
		unsigned char UnknownData03_7[0x1]; // 0x6D7(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorcycleRuntime.FortMotorcycleVehicleAnimInstance");
			return ret;
		}

		void CollectConditionsFromDriver(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7511FF8C4(relative to base address)
	};


	// Class MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x418 (0x8D0 - 0x4B8)
	class UFortPlayerAnimInstance_MotorcycleRider : public UFortBaseLayerAnimInstance	
	{
	public:
		AFortMotorcycleVehicle* Motorcycle; // 0x4B8(0x8)
		UFortMotorcycleVehicleAnimInstance* MotorcycleAnimInstance; // 0x4C0(0x8)
		FFortAnimInput_Motorcycle MotorcycleInput; // 0x4C8(0x54)
		unsigned char UnknownData00_6[0x4]; // 0x51C(0x4) UNKNOWN PROPERTY
		AFortPlayerPawn* FortPlayerPawn; // 0x520(0x8)
		FVector WorldVelocity; // 0x528(0x18)
		FVector LocalVelocity; // 0x540(0x18)
		float RightHandIKAlpha; // 0x558(0x4)
		float LeftHandIKAlpha; // 0x55C(0x4)
		float Speed2D; // 0x560(0x4)
		EFortCardinalDirection LocomotionCardinalDirection; // 0x564(0x1)
		bool bIsJumping : 1; // 0x565:0(0x1)
		bool bIsReloading : 1; // 0x565:1(0x1)
		unsigned char UnknownData01_5[0x2]; // 0x566(0x2) UNKNOWN PROPERTY
		FRotator RiderCatchupRotation; // 0x568(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x580(0x8) UNKNOWN PROPERTY
		float RiderZDisplacement; // 0x588(0x4)
		float RiderDisplacementDampUpFactor; // 0x58C(0x4)
		float RiderDisplacementDampDownFactor; // 0x590(0x4)
		float RiderDisplacementLandingFallDistanceThreshold; // 0x594(0x4)
		float RiderMinDisplacement; // 0x598(0x4)
		float RiderMaxDisplacement; // 0x59C(0x4)
		float RiderDisplacementRampPerSecond; // 0x5A0(0x4)
		float RiderRotationInterpSpeed; // 0x5A4(0x4)
		FFortAnimInput_VelocityImpact VelocityImpact; // 0x5A8(0xF0)
		FVector ImpactDisplacement; // 0x698(0x18)
		float AbsSteerAngle; // 0x6B0(0x4)
		float LeanAngle; // 0x6B4(0x4)
		float FallDistanceValue; // 0x6B8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x6BC(0x4) UNKNOWN PROPERTY
		FVector FootTraceLocation; // 0x6C0(0x18)
		float FootTraceSideOffset; // 0x6D8(0x4)
		float MaxFootLocationDistance; // 0x6DC(0x4)
		bool bHasFootTrace; // 0x6E0(0x1)
		bool bInAir; // 0x6E1(0x1)
		bool bIsInRollAngleThreshold; // 0x6E2(0x1)
		bool bIsDriveStarting; // 0x6E3(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x6E4(0x4) UNKNOWN PROPERTY
		FVector LocalLeftOffset; // 0x6E8(0x18)
		FVector WorldPosLeft; // 0x700(0x18)
		FRotator LocalRotLeftOffset; // 0x718(0x18)
		FRotator WorldRotLeft; // 0x730(0x18)
		FVector LocalRightOffset; // 0x748(0x18)
		FVector WorldPosRight; // 0x760(0x18)
		FRotator LocalRotRightOffset; // 0x778(0x18)
		FRotator WorldRotRight; // 0x790(0x18)
		bool bIsSteeringRotating; // 0x7A8(0x1)
		bool bIsStopped; // 0x7A9(0x1)
		bool bIsIdle; // 0x7AA(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x7AB(0x1) UNKNOWN PROPERTY
		float IdleSpeedKmh; // 0x7AC(0x4)
		bool bIsSlowingDown; // 0x7B0(0x1)
		bool bIsDrivingFast; // 0x7B1(0x1)
		bool bIsTurningRightHard; // 0x7B2(0x1)
		bool bIsTurningLeftHard; // 0x7B3(0x1)
		bool bIsBraking; // 0x7B4(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x7B5(0x1) UNKNOWN PROPERTY
		bool bIsBoosting; // 0x7B6(0x1)
		bool bIsJumpTrick; // 0x7B7(0x1)
		float JumpPlayRate; // 0x7B8(0x4)
		bool bIsJumpFlipping; // 0x7BC(0x1)
		bool bShouldEnableAO; // 0x7BD(0x1)
		bool bIsBodyDragging; // 0x7BE(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x7BF(0x1) UNKNOWN PROPERTY
		float FallDistanceJumpingThreshold; // 0x7C0(0x4)
		float FallDistanceJumpTrickThreshold; // 0x7C4(0x4)
		float RollAngleThreshold; // 0x7C8(0x4)
		float StartSpeedThreshold; // 0x7CC(0x4)
		float SlowingSpeedThreshold; // 0x7D0(0x4)
		float FastSpeedThreshold; // 0x7D4(0x4)
		float BrakingDeltaThreshold; // 0x7D8(0x4)
		float SteerHardAngleThreshold; // 0x7DC(0x4)
		float GroundTraceUpOffset; // 0x7E0(0x4)
		float GroundTraceLength; // 0x7E4(0x4)
		FVector2D JumpPlayRateInRange; // 0x7E8(0x10)
		FVector2D JumpPlayRateOutRange; // 0x7F8(0x10)
		float JumpChargeFactor; // 0x808(0x4)
		bool bIsChargingJump; // 0x80C(0x1)
		bool bIsMotorcycleJumping; // 0x80D(0x1)
		bool bMotorcycleLaunchedJump; // 0x80E(0x1)
		bool bWheelie; // 0x80F(0x1)
		bool bStoppie; // 0x810(0x1)
		EFortMotorcycleAirTrickType AirTrickType; // 0x811(0x1)
		bool bIsJumpingAndNotRolling; // 0x812(0x1)
		bool bIsOnGroundAndNotRolling; // 0x813(0x1)
		bool bIsOnGroundAndBoosting; // 0x814(0x1)
		bool bIsPowerSliding; // 0x815(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x816(0x2) UNKNOWN PROPERTY
		float PowerSlideSteeringAngleThreshold; // 0x818(0x4)
		float PowerSlideSpeedThreshold; // 0x81C(0x4)
		unsigned char UnknownData09_6[0x8]; // 0x820(0x8) UNKNOWN PROPERTY
		FVector2D LandStartPosInRange; // 0x828(0x10)
		FVector2D LandStartPosOutRange; // 0x838(0x10)
		float LandStartPosition; // 0x848(0x4)
		bool bShouldPawnStandUp; // 0x84C(0x1)
		bool bIsSmoothingYaw; // 0x84D(0x1)
		unsigned char UnknownData10_6[0x2]; // 0x84E(0x2) UNKNOWN PROPERTY
		float AimPitch; // 0x850(0x4)
		float AimYaw; // 0x854(0x4)
		float AimYawLastFrame; // 0x858(0x4)
		float AimYawSmoothed; // 0x85C(0x4)
		float BodyAimYaw; // 0x860(0x4)
		float NegativeBodyAimYaw; // 0x864(0x4)
		float ForwardSpeed; // 0x868(0x4)
		float PreviousForwardSpeed; // 0x86C(0x4)
		float TotalSpeed; // 0x870(0x4)
		bool bIsReversing; // 0x874(0x1)
		bool bIsMoving; // 0x875(0x1)
		bool bIsInAir; // 0x876(0x1)
		bool bIsUsingConsumable; // 0x877(0x1)
		FCachedAnimRelevancyData IntroCachedTime; // 0x878(0x14)
		float StoppieLandTime; // 0x88C(0x4)
		bool bShouldPlayHitReact; // 0x890(0x1)
		bool bIsPlayingMontage; // 0x891(0x1)
		unsigned char UnknownData11_6[0x2]; // 0x892(0x2) UNKNOWN PROPERTY
		float VehiclePitch; // 0x894(0x4)
		float VehicleRoll; // 0x898(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x89C(0x4) UNKNOWN PROPERTY
		FRotator MeleeTwistRot; // 0x8A0(0x18)
		bool bStateTransitionRuleToMovingLoop; // 0x8B8(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x8B9(0x3) UNKNOWN PROPERTY
		float UpperBodyAdditiveAlpha; // 0x8BC(0x4)
		float UpperBodyAdditiveStrength; // 0x8C0(0x4)
		float MovingNoisePlayRate; // 0x8C4(0x4)
		bool bIsFemale; // 0x8C8(0x1)
		unsigned char UnknownData14_7[0x7]; // 0x8C9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider");
			return ret;
		}

		void HandleStartWheelie(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FFB50(relative to base address)
		void HandleStartStoppie(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FFB38(relative to base address)
		void HandleStartChargingJump(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FFB20(relative to base address)
		void HandleStartAirTrick(EFortMotorcycleAirTrickType TrickType); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FFAA4(relative to base address)
		void HandleReleaseWheelie(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FFA8C(relative to base address)
		void HandleReleaseStoppie(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FFA74(relative to base address)
		void HandleJump(float InJumpChargeFactor); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FF9F0(relative to base address)
		void HandleFinishAirTrick(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FF9D8(relative to base address)
		void HandleChargingJump(float InJumpChargeFactor); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FF958(relative to base address)
		void HandleCancelChargingJump(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FF940(relative to base address)
		void CollapsedAimYawSmoothed(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7511FF844(relative to base address)
		void CalculateNoiseAlpha(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7511FF788(relative to base address)
		void AnimNotify_JumpEntered(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FF768(relative to base address)
	};


	// Class MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleDriver
	// Inherited from UFortPlayerAnimInstance_MotorcycleRider -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xC0 (0x990 - 0x8D0)
	class UFortPlayerAnimInstance_MotorcycleDriver : public UFortPlayerAnimInstance_MotorcycleRider	
	{
	public:
		bool bHasMoved; // 0x8D0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x8D1(0x3) UNKNOWN PROPERTY
		float SteeringRotation; // 0x8D4(0x4)
		bool bIsInInventoryMode; // 0x8D8(0x1)
		bool bShouldJump; // 0x8D9(0x1)
		bool bShouldAllowHeadAO; // 0x8DA(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x8DB(0x1) UNKNOWN PROPERTY
		float FeetDragPlayRate; // 0x8DC(0x4)
		bool bShouldJumpCharge; // 0x8E0(0x1)
		bool bIsLandingInPlace; // 0x8E1(0x1)
		bool bStateRuleFallingToMoving; // 0x8E2(0x1)
		bool bShouldApplyChargingNoise; // 0x8E3(0x1)
		float JumpTimer; // 0x8E4(0x4)
		bool bShouldAllowJump; // 0x8E8(0x1)
		bool bIsSurfaceWater; // 0x8E9(0x1)
		bool bSlopeAlphaShouldIncrease; // 0x8EA(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x8EB(0x1) UNKNOWN PROPERTY
		float SlopeAlpha; // 0x8EC(0x4)
		bool bHasPassenger; // 0x8F0(0x1)
		bool bIsOneHandedDualWield; // 0x8F1(0x1)
		bool bShouldApplyBodyTwistForMelee; // 0x8F2(0x1)
		bool bIsMelee; // 0x8F3(0x1)
		bool bIsRangedOrConsumable; // 0x8F4(0x1)
		bool bShouldApplyFeetNoise; // 0x8F5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x8F6(0x2) UNKNOWN PROPERTY
		float CachedFallingStartTime; // 0x8F8(0x4)
		bool bWasFalling; // 0x8FC(0x1)
		bool bIsRevving; // 0x8FD(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x8FE(0x2) UNKNOWN PROPERTY
		float StoppieLeanAlpha; // 0x900(0x4)
		bool bShouldPlayMovingJump; // 0x904(0x1)
		bool bWasJumpTrickLeftOrRight; // 0x905(0x1)
		bool bIsFromJumpTrick; // 0x906(0x1)
		bool bShouldAllowMovingJumpLand; // 0x907(0x1)
		bool bStateTransitionRuleToReverseLoop; // 0x908(0x1)
		bool bIsReverseNoFeet; // 0x909(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x90A(0x2) UNKNOWN PROPERTY
		float WalkSPlayRate; // 0x90C(0x4)
		float LeanSpeed; // 0x910(0x4)
		float LeanAlpha; // 0x914(0x4)
		bool bIsCombatTransition; // 0x918(0x1)
		bool bShouldBrake; // 0x919(0x1)
		bool bShouldExitFromLocomotion; // 0x91A(0x1)
		bool bEarlyOutBrakingOutro; // 0x91B(0x1)
		bool bIsRightInput; // 0x91C(0x1)
		bool bShouldPlayReverseOutro; // 0x91D(0x1)
		bool bShouldApplyHipSuspension; // 0x91E(0x1)
		bool bIsDefaultJumpTrick; // 0x91F(0x1)
		bool bIsLeftJumpTrick; // 0x920(0x1)
		bool bIsRightJumpTrick; // 0x921(0x1)
		bool bIsNoneJumpTrick; // 0x922(0x1)
		bool bIsSoloJumpTrick; // 0x923(0x1)
		bool bShouldExitFromDefaultJumpTrick; // 0x924(0x1)
		bool bEarlyOutFromMoveStart; // 0x925(0x1)
		bool bShouldStop; // 0x926(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x927(0x1) UNKNOWN PROPERTY
		float CachedTrickIntroTime; // 0x928(0x4)
		bool bShouldPlayJumpTrickIntroLeft; // 0x92C(0x1)
		bool bShouldPlayJumpTrickIntroRight; // 0x92D(0x1)
		bool bStateRuleNeutralToJumpTrickLeft; // 0x92E(0x1)
		bool bStateRuleNeutralToJumpTrickRight; // 0x92F(0x1)
		bool bShouldJumpTrick; // 0x930(0x1)
		bool bHasJumpChargeStarted; // 0x931(0x1)
		bool bIsJumpTrickLanding; // 0x932(0x1)
		bool bWasSoloJumping; // 0x933(0x1)
		bool bWasStoppieLanding; // 0x934(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x935(0x3) UNKNOWN PROPERTY
		float UpperBodyBlendAlpha; // 0x938(0x4)
		float StoredJumpTrickIntroPosition; // 0x93C(0x4)
		float JumpTrickIntroPosition; // 0x940(0x4)
		float JumpChargeLegIKAlpha; // 0x944(0x4)
		FSoftObjectPath ScytheMontage; // 0x948(0x18)
		FName JumpTrickIntroPositionCurveName; // 0x960(0x4)
		FCachedAnimRelevancyData FallStartCachedTime; // 0x964(0x14)
		FCachedAnimRelevancyData TrickCachedTime; // 0x978(0x14)
		unsigned char UnknownData08_7[0x4]; // 0x98C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleDriver");
			return ret;
		}
	};


	// Class MotorcycleRuntime.FortPlayerAnimInstance_MotorcyclePassenger
	// Inherited from UFortPlayerAnimInstance_MotorcycleRider -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x50 (0x920 - 0x8D0)
	class UFortPlayerAnimInstance_MotorcyclePassenger : public UFortPlayerAnimInstance_MotorcycleRider	
	{
	public:
		UFortPlayerAnimInstance_MotorcycleDriver* DriverAnimInstance; // 0x8D0(0x8)
		bool bHasDriver; // 0x8D8(0x1)
		bool bIsDriverJumping; // 0x8D9(0x1)
		bool bIsDriverInventoryMode; // 0x8DA(0x1)
		bool bIsSeatedAction; // 0x8DB(0x1)
		bool bIsThrowingConsumable; // 0x8DC(0x1)
		bool bEarlyOutStoppieOutro; // 0x8DD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x8DE(0x2) UNKNOWN PROPERTY
		float RunForwardAlpha; // 0x8E0(0x4)
		bool bAimFWD; // 0x8E4(0x1)
		bool bAimBWD; // 0x8E5(0x1)
		bool bAimLFT; // 0x8E6(0x1)
		bool bAimRGT; // 0x8E7(0x1)
		float AimFWDDeltaAngleDegrees; // 0x8E8(0x4)
		float AimBWDDeltaAngleDegrees; // 0x8EC(0x4)
		float AimLFTDeltaAngleDegrees; // 0x8F0(0x4)
		float AimRGTDeltaAngleDegrees; // 0x8F4(0x4)
		bool bShouldJump; // 0x8F8(0x1)
		bool bShouldApplySlopeCorrection; // 0x8F9(0x1)
		bool bShouldExitFromLocomotion; // 0x8FA(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x8FB(0x1) UNKNOWN PROPERTY
		FCachedAnimRelevancyData JumpIntroCachedTime; // 0x8FC(0x14)
		float CachedJumpIntroTime; // 0x910(0x4)
		unsigned char UnknownData02_7[0xC]; // 0x914(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcyclePassenger");
			return ret;
		}
	};


	// Class MotorcycleRuntime.FortCameraMode_Motorcycle
	// Inherited from UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x8 (0x1E50 - 0x1E48)
	class UFortCameraMode_Motorcycle : public UFortCameraMode_AthenaVehicle	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x1E48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorcycleRuntime.FortCameraMode_Motorcycle");
			return ret;
		}
	};


	// Class MotorcycleRuntime.FortMotorcycleVehicle
	// Inherited from AFortAthenaSKMotorVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x458 (0x25E0 - 0x2188)
	class AFortMotorcycleVehicle : public AFortAthenaSKMotorVehicle	
	{
	public:
		FMulticastInlineDelegate OnStartChargingJumpDelegate; // 0x2188(0x10)
		FMulticastInlineDelegate OnCancelChargingJumpDelegate; // 0x2198(0x10)
		FMulticastInlineDelegate OnJumpDelegate; // 0x21A8(0x10)
		FMulticastInlineDelegate OnChargingJumpDelegate; // 0x21B8(0x10)
		FMulticastInlineDelegate OnStartAirTrickDelegate; // 0x21C8(0x10)
		FMulticastInlineDelegate OnFinishAirTrickDelegate; // 0x21D8(0x10)
		FMulticastInlineDelegate OnStartWheelieDelegate; // 0x21E8(0x10)
		FMulticastInlineDelegate OnReleaseWheelieDelegate; // 0x21F8(0x10)
		FMulticastInlineDelegate OnLandWheelieDelegate; // 0x2208(0x10)
		FMulticastInlineDelegate OnFailWheelieDelegate; // 0x2218(0x10)
		FMulticastInlineDelegate OnStartStoppieDelegate; // 0x2228(0x10)
		FMulticastInlineDelegate OnReleaseStoppieDelegate; // 0x2238(0x10)
		FMulticastInlineDelegate OnLandStoppieDelegate; // 0x2248(0x10)
		FMulticastInlineDelegate OnInventoryModeChangedDelegate; // 0x2258(0x10)
		FMulticastInlineDelegate OnSuperSlidingChangedDelegate; // 0x2268(0x10)
		UClass* InventoryCameraModeClass; // 0x2278(0x8)
		UClass* InventoryCameraModeClassADS; // 0x2280(0x8)
		UClass* PassengerCameraModeClass; // 0x2288(0x8)
		UClass* PassengerCameraModeClassADS; // 0x2290(0x8)
		UFortMotorcycleVehicleConfigs* FortMotorcycleVehicleConfigs; // 0x2298(0x8)
		FName RearAxleSocket; // 0x22A0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x22A4(0x4) UNKNOWN PROPERTY
		TArray<FActionDefForUI> ActionDefForUI; // 0x22A8(0x10)
		float SwingArmRotation; // 0x22B8(0x4)
		unsigned char UnknownData01_6[0x7C]; // 0x22BC(0x7C) UNKNOWN PROPERTY
		TArray<int32_t> BoostShapeIndices; // 0x2338(0x10)
		bool bIsBoostAttacking; // 0x2348(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x2349(0xF) UNKNOWN PROPERTY
		EFortMotorcycleAirTrickType CachedTrickType; // 0x2358(0x1)
		bool bHadPassengerAtTrickStart; // 0x2359(0x1)
		unsigned char UnknownData03_6[0x36]; // 0x235A(0x36) UNKNOWN PROPERTY
		TArray<FName> PassengerADSSockets; // 0x2390(0x10)
		TArray<FVector> PassengerADSRelativeOffsets; // 0x23A0(0x10)
		UNiagaraComponent* CachedNiagaraComponentRoadAndExhaust; // 0x23B0(0x8)
		FString RoadAndExhaustNiagaraComponentName; // 0x23B8(0x10)
		FName RoadAndExhaustVehicleSpeedName; // 0x23C8(0x4)
		FName RoadAndExhaustSlideDirectionName; // 0x23CC(0x4)
		float RoadAndExhaustMinSpeedForDust; // 0x23D0(0x4)
		FName RoadAndExhaustDustRearName; // 0x23D4(0x4)
		FName RoadAndExhaustDustColorLerpName; // 0x23D8(0x4)
		float RoadAndExhaustDustColorLerp; // 0x23DC(0x4)
		FName RoadAndExhaustDustAlphaMultiplierName; // 0x23E0(0x4)
		float RoadAndExhaustDustAlphaMultiplier; // 0x23E4(0x4)
		FName RoadAndExhaustPeelOutColorIndexName; // 0x23E8(0x4)
		FName RoadAndExhaustPeelOutRearName; // 0x23EC(0x4)
		FName RoadAndExhaustIsPeelOutOnRoadName; // 0x23F0(0x4)
		FName RoadAndExhaustIsPeelOutOnRoadRewindName; // 0x23F4(0x4)
		FName RoadAndExhaustIsInAirName; // 0x23F8(0x4)
		FGameplayTag RoadAndExhaustCameraDirtGameplayCueTag; // 0x23FC(0x4)
		FGameplayTag RoadAndExhaustCameraWaterGameplayCueTag; // 0x2400(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2404(0x4) UNKNOWN PROPERTY
		TArray<TEnumAsByte> RoadAndExhaustSurfaceTypeArrayForFX; // 0x2408(0x10)
		ULegacyCameraShake* DriverCameraShakeInstance; // 0x2418(0x8)
		ULegacyCameraShake* AcceleratingCameraShakeInstance; // 0x2420(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x2428(0x8) UNKNOWN PROPERTY
		FName RoadAndExhaustHeadlightsName; // 0x2430(0x4)
		FName RoadAndExhaustBrakelightsName; // 0x2434(0x4)
		FScalableFloat DoorBashMinSpeed; // 0x2438(0x28)
		FScalableFloat DoorBashMaxSpeed; // 0x2460(0x28)
		FScalableFloat DoorBashForwardDistanceMin; // 0x2488(0x28)
		FScalableFloat DoorBashForwardDistanceMax; // 0x24B0(0x28)
		FGameplayTag DoorBashGameplayCueTag; // 0x24D8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x24DC(0x4) UNKNOWN PROPERTY
		TArray<TEnumAsByte> DoorBashCollisionTypesForDoor; // 0x24E0(0x10)
		TArray<TEnumAsByte> DoorBashCollisionTypesForPawn; // 0x24F0(0x10)
		FScalableFloat DoorBashSphereRadiusForPawnLaunch; // 0x2500(0x28)
		FScalableFloat DoorBashScalarForPawnLaunch; // 0x2528(0x28)
		FGameplayTag DoorBashPawnLaunchGameplayCueTag; // 0x2550(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x2554(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery InventoryModeTagQuery; // 0x2558(0x48)
		FGameplayTagContainer InputContextBlockedTags; // 0x25A0(0x20)
		unsigned char UnknownData08_6[0x18]; // 0x25C0(0x18) UNKNOWN PROPERTY
		FGameplayTag MobileHUDTag; // 0x25D8(0x4)
		unsigned char UnknownData09_7[0x4]; // 0x25DC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorcycleRuntime.FortMotorcycleVehicle");
			return ret;
		}

		void ServerEjectAllPlayers(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF7505D895C(relative to base address)
		void OnRep_IsBoostAttacking(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7511FFCC8(relative to base address)
		void OnPlayerWeaponChanged(AFortWeapon* InNewWeapon, AFortWeapon* InPrevWeapon); // Flags: Final|Native|Public, Memory Exec: 0x7FF7511FFBD4(relative to base address)
		void MotorcycleWheelie__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MotorcycleSuperSlidingChanged__DelegateSignature(bool bIsSuperSliding); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MotorcycleStoppie__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MotorcycleStartAirTrick__DelegateSignature(EFortMotorcycleAirTrickType TrickType); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MotorcycleJump__DelegateSignature(float JumpChargeFactor); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MotorcycleInventoryMode__DelegateSignature(bool IsInInventoryMode); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MotorcycleChargingJump__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MotorcycleAirTrick__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSuperSliding(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7511FFBB0(relative to base address)
		bool IsPowerSliding(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7511FFB8C(relative to base address)
		bool IsInInventoryMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7511FFB68(relative to base address)
		TEnumAsByte GetSurfaceTypeVehicleOn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7511FF928(relative to base address)
		float GetLeanAngleDegrees(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7511FF900(relative to base address)
		FVector GetAverageSpringNormal(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7511FF8D8(relative to base address)
		void ChangeBoostAttackState(bool bNewIsBoostAttacking); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7511FF79C(relative to base address)
		void BP_OnStartWheelie(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStartStoppie(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStartChargingJump(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStartAirTrick(EFortMotorcycleAirTrickType TrickType); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleaseWheelie(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleaseStoppie(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnLandWheelie(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnLandStoppie(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnJump(float JumpChargeFactor); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFinishAirTrick(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFailWheelie(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnChargingJump(float JumpChargeFactor); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCancelChargingJump(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MotorcycleRuntime.FortMotorcycleVehicleConfigs
	// Inherited from UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x2D0 (0xC50 - 0x980)
	class UFortMotorcycleVehicleConfigs : public UFortPhysicsVehicleConfigs	
	{
	public:
		TArray<FMotorcycleWheel> Wheels; // 0x980(0x10)
		float SpringInterpDamp; // 0x990(0x4)
		float WheelieSpringInterpDamp; // 0x994(0x4)
		float WallPushStiff; // 0x998(0x4)
		float WallPushDamp; // 0x99C(0x4)
		FVector WallPushXTraceOffset; // 0x9A0(0x18)
		float WallPushForwardTraceLengthScale; // 0x9B8(0x4)
		float WallPushBackTraceLengthScale; // 0x9BC(0x4)
		float WallPushRightTraceLength; // 0x9C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x9C4(0x4) UNKNOWN PROPERTY
		FVector WallPushRightTraceOffset; // 0x9C8(0x18)
		FVector WallPushRearRightTraceOffset; // 0x9E0(0x18)
		float WallPushAngle; // 0x9F8(0x4)
		bool bUseWallPushTracesForWalls; // 0x9FC(0x1)
		bool bUseWallPushRearSideTracesForWalls; // 0x9FD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x9FE(0x2) UNKNOWN PROPERTY
		float MaxJumpChargeTime; // 0xA00(0x4)
		float MinChargeJumpForce; // 0xA04(0x4)
		float MaxChargeJumpForce; // 0xA08(0x4)
		float MinJumpForwardAngle; // 0xA0C(0x4)
		float MaxJumpForwardAngle; // 0xA10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xA14(0x4) UNKNOWN PROPERTY
		FVector JumpForceMinCOMOffset; // 0xA18(0x18)
		FVector JumpForceMaxCOMOffset; // 0xA30(0x18)
		float JumpChargeGraceTimeSeconds; // 0xA48(0x4)
		float JumpGraceTimeSeconds; // 0xA4C(0x4)
		float LeanAngleScale; // 0xA50(0x4)
		float LeanStiff; // 0xA54(0x4)
		float LeanDamp; // 0xA58(0x4)
		float LeanStrength; // 0xA5C(0x4)
		float SlideCatchupForceTime; // 0xA60(0x4)
		float SlideCatchupSpeed; // 0xA64(0x4)
		float SlideCatchupPushForce; // 0xA68(0x4)
		float AutoAirPitchAngle; // 0xA6C(0x4)
		float MinSteeringAngleForModifiedFriction; // 0xA70(0x4)
		float MinSpeedForModifiedFriction; // 0xA74(0x4)
		float MinSteeringAngleToConsiderTractionLost; // 0xA78(0x4)
		float FrictionRatioToConsiderTractionLost; // 0xA7C(0x4)
		float WheeliePitchStiffMin; // 0xA80(0x4)
		float WheeliePitchStiffMax; // 0xA84(0x4)
		float WheeliePitchDampMin; // 0xA88(0x4)
		float WheeliePitchDampMax; // 0xA8C(0x4)
		float WheeliePitchAngleMin; // 0xA90(0x4)
		float WheeliePitchAngleMax; // 0xA94(0x4)
		float StoppiePitchAngle; // 0xA98(0x4)
		float StoppiePitchStiff; // 0xA9C(0x4)
		float StoppiePitchDamp; // 0xAA0(0x4)
		float WheelieRampSeconds; // 0xAA4(0x4)
		float WheelieFailPitchAngle; // 0xAA8(0x4)
		float WheelieRecoveryRate; // 0xAAC(0x4)
		float WheelieFailRecoveryRate; // 0xAB0(0x4)
		float WheelieMinStartSpeed; // 0xAB4(0x4)
		float StoppieMinStopSpeed; // 0xAB8(0x4)
		float WheelieSteerFactor; // 0xABC(0x4)
		float StoppieSteerFactor; // 0xAC0(0x4)
		float WheelieSteerAlphaThreshold; // 0xAC4(0x4)
		float WheelieStoppieMaxLeanAllowedToInitiate; // 0xAC8(0x4)
		float WheelieGroundBufferTime; // 0xACC(0x4)
		float StoppieGroundBufferTime; // 0xAD0(0x4)
		float WheelieSpringLengthExponent; // 0xAD4(0x4)
		float WheelieWheelOffsetLerpMultiplier; // 0xAD8(0x4)
		float WheelieBrakeFactor; // 0xADC(0x4)
		float StoppieTurnInPlaceSpeed; // 0xAE0(0x4)
		float StoppieTurnInPlaceSpeedIce; // 0xAE4(0x4)
		float StoppieTurnInPlaceSpeedMud; // 0xAE8(0x4)
		float MinSpeedKmhForMaxStoppie; // 0xAEC(0x4)
		float StoppieTurnAngleExponent; // 0xAF0(0x4)
		float StoppieMaxTurnAngle; // 0xAF4(0x4)
		float WheelieTireTractionMultiplier_Min; // 0xAF8(0x4)
		float WheelieCameraMinStraightFactor; // 0xAFC(0x4)
		float MaxLeanAccel; // 0xB00(0x4)
		float CruiseControlForwardAlpha; // 0xB04(0x4)
		float InventoryModeSpeedKmh; // 0xB08(0x4)
		float CruiseControlDisengageSpeedKmh; // 0xB0C(0x4)
		bool bPowerSlideIsSuperSlide; // 0xB10(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xB11(0x3) UNKNOWN PROPERTY
		float PowerSlideFrontFrictionMultiplier; // 0xB14(0x4)
		float PowerSlideRearFrictionMultiplier; // 0xB18(0x4)
		float PowerSlideRoadFrontFrictionMultiplier; // 0xB1C(0x4)
		float PowerSlideRoadRearFrictionMultiplier; // 0xB20(0x4)
		float PowerSlideDirtFrontFrictionMultiplier; // 0xB24(0x4)
		float PowerSlideDirtRearFrictionMultiplier; // 0xB28(0x4)
		float PowerSlideGrassFrontFrictionMultiplier; // 0xB2C(0x4)
		float PowerSlideGrassRearFrictionMultiplier; // 0xB30(0x4)
		float PowerSlideSnowFrontFrictionMultiplier; // 0xB34(0x4)
		float PowerSlideSnowRearFrictionMultiplier; // 0xB38(0x4)
		float PowerSlideIceFrontFrictionMultiplier; // 0xB3C(0x4)
		float PowerSlideIceRearFrictionMultiplier; // 0xB40(0x4)
		float PowerSlideMudFrontFrictionMultiplier; // 0xB44(0x4)
		float PowerSlideMudRearFrictionMultiplier; // 0xB48(0x4)
		float PowerSlideFactor; // 0xB4C(0x4)
		float PowerSlideDampFactor; // 0xB50(0x4)
		float FrictionDampFactor; // 0xB54(0x4)
		float PowerSlideLeanAngleScale; // 0xB58(0x4)
		float SuperSlideLeanAngle; // 0xB5C(0x4)
		float SuperSlideMinStartYawSpeedDegrees; // 0xB60(0x4)
		float SuperSlideMinStartSpeedKmh; // 0xB64(0x4)
		float SuperSlideMaxEndSpeedKmh; // 0xB68(0x4)
		float PowerslideInputWindow; // 0xB6C(0x4)
		float ShootingMinSpeedSteeringAngle; // 0xB70(0x4)
		float ShootingMaxSpeedSteeringAngle; // 0xB74(0x4)
		float InventoryModeCameraYawConstraint; // 0xB78(0x4)
		float BoostTopSpeedMultiplier; // 0xB7C(0x4)
		float BoostPushForceMultiplier; // 0xB80(0x4)
		float BoostMinPushForce; // 0xB84(0x4)
		float BoostSteeringMultiplier; // 0xB88(0x4)
		bool bPlayHolsterAnimsOnClient; // 0xB8C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xB8D(0x3) UNKNOWN PROPERTY
		float FrontWheelSteeringFactor; // 0xB90(0x4)
		float FrontWheelRotationAcceleration; // 0xB94(0x4)
		float PassengerInventoryCooldown; // 0xB98(0x4)
		float DriverInventoryCooldown; // 0xB9C(0x4)
		TSet<FName> BoostAttackShapes; // 0xBA0(0x50)
		float CameraAssistStrengthMax; // 0xBF0(0x4)
		float CameraAssistStrengthMin; // 0xBF4(0x4)
		float CameraAssistStrengthRecovery; // 0xBF8(0x4)
		float CameraAssistInterpSpeed; // 0xBFC(0x4)
		float AirTrickIncrementInterval; // 0xC00(0x4)
		float AirTrickFeedStartTime; // 0xC04(0x4)
		float AirTrickPitchMultiplier; // 0xC08(0x4)
		float AirTrickYawMultiplier; // 0xC0C(0x4)
		bool bAllowAirTrickNeutral; // 0xC10(0x1)
		bool bAllowAirTrickRight; // 0xC11(0x1)
		bool bAllowAirTrickLeft; // 0xC12(0x1)
		unsigned char UnknownData05_6[0x1]; // 0xC13(0x1) UNKNOWN PROPERTY
		float PoppedTireTractionScalar_Front; // 0xC14(0x4)
		float PoppedTireTractionScalar_Rear; // 0xC18(0x4)
		float PoppedTireTractionScalar_Both; // 0xC1C(0x4)
		FScalableFloat TopSpeedKmh; // 0xC20(0x28)
		unsigned char UnknownData06_7[0x8]; // 0xC48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorcycleRuntime.FortMotorcycleVehicleConfigs");
			return ret;
		}
	};

}
