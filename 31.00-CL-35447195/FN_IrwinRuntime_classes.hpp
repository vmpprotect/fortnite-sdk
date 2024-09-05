#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: IrwinRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class IrwinRuntime.FortAIFaunaAnimInstance
	// Inherited from UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x188 (0x770 - 0x5E8)
	class UFortAIFaunaAnimInstance : public UFortAIAnimInstance	
	{
	public:
		unsigned char UnknownData16_3[0x8]; // 0x5E8(0x8) UNKNOWN PROPERTY
		float AverageSpeed; // 0x5F0(0x4)
		float AverageSpeedTimeFrame; // 0x5F4(0x4)
		bool bHasValidAimTarget; // 0x5F8(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x5F9(0x3) UNKNOWN PROPERTY
		float AimTime; // 0x5FC(0x4)
		FVector AimTargetLocation; // 0x600(0x18)
		bool bIsSurfaceSwimming; // 0x618(0x1)
		bool bIsMovingOnGround; // 0x619(0x1)
		bool bIsInTornado; // 0x61A(0x1)
		unsigned char UnknownData18_6[0x1]; // 0x61B(0x1) UNKNOWN PROPERTY
		float LookAtAlpha; // 0x61C(0x4)
		float MaxDistanceToPlayerForLookAt; // 0x620(0x4)
		float LookAtTooFarFromPlayerTimeOut; // 0x624(0x4)
		bool bDisableLookAtDuringMontage; // 0x628(0x1)
		unsigned char UnknownData19_6[0x3]; // 0x629(0x3) UNKNOWN PROPERTY
		FName DisableHeadTrackingCurveName; // 0x62C(0x4)
		FRidingAnimationData RidingAnimationData; // 0x630(0x14)
		bool bIsSlopeSliding; // 0x644(0x1)
		unsigned char UnknownData20_6[0x3]; // 0x645(0x3) UNKNOWN PROPERTY
		float SlopeSlidingPitch; // 0x648(0x4)
		float SlopeSlidingRoll; // 0x64C(0x4)
		float RidingMovePlayRate; // 0x650(0x4)
		bool bJustGotPlayer; // 0x654(0x1)
		bool bIsBoosting; // 0x655(0x1)
		bool bIsTurningInPlace; // 0x656(0x1)
		unsigned char UnknownData21_6[0x1]; // 0x657(0x1) UNKNOWN PROPERTY
		float TurnInPlaceRotationSpeed; // 0x658(0x4)
		float TurnInPlaceAngleDelta; // 0x65C(0x4)
		bool bIsMovingBackwards; // 0x660(0x1)
		unsigned char UnknownData22_6[0x3]; // 0x661(0x3) UNKNOWN PROPERTY
		float RiderReferentialYaw; // 0x664(0x4)
		float BoostPlayRate; // 0x668(0x4)
		bool bIsTurnInPlaceAngleDeltaPositive; // 0x66C(0x1)
		bool bPlayLandAdditive; // 0x66D(0x1)
		unsigned char UnknownData23_6[0x2]; // 0x66E(0x2) UNKNOWN PROPERTY
		float BackwardVelocity; // 0x670(0x4)
		bool bShouldPlayStopBackwards; // 0x674(0x1)
		unsigned char UnknownData24_6[0x3]; // 0x675(0x3) UNKNOWN PROPERTY
		float SwimmingYaw; // 0x678(0x4)
		float BackwardsPlayRate; // 0x67C(0x4)
		float BodyRoll; // 0x680(0x4)
		float TurnAngleStored; // 0x684(0x4)
		bool bWasTurningRight; // 0x688(0x1)
		ERidingFootPhase FootPhase; // 0x689(0x1)
		bool bIsFootPhase_FeetInAir; // 0x68A(0x1)
		bool bIsFootPhase_FrontFeetPlanted; // 0x68B(0x1)
		bool bIsFootPhase_BackFeetPlanted; // 0x68C(0x1)
		bool bIsFootPhase_LeftBackFeetForward; // 0x68D(0x1)
		bool bIsFootPhase_RightBackFeetForward; // 0x68E(0x1)
		bool bIsFootPhase_LeftPlantedRightPass; // 0x68F(0x1)
		bool bIsFootPhase_RightPlantedLeftPass; // 0x690(0x1)
		unsigned char UnknownData25_6[0x7]; // 0x691(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer SlipstreamTags; // 0x698(0x20)
		bool bIsInSlipstream; // 0x6B8(0x1)
		unsigned char UnknownData26_6[0x7]; // 0x6B9(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer SkydivingTags; // 0x6C0(0x20)
		bool bMovementMode_Skydiving; // 0x6E0(0x1)
		unsigned char UnknownData27_6[0x7]; // 0x6E1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer SkytubingTags; // 0x6E8(0x20)
		bool bGameplay_Status_Skytubing; // 0x708(0x1)
		bool bIsAbducted; // 0x709(0x1)
		unsigned char UnknownData28_6[0x6]; // 0x70A(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer TractorBeamTags; // 0x710(0x20)
		bool bIsInTractorBeam; // 0x730(0x1)
		bool bIsFloating; // 0x731(0x1)
		unsigned char UnknownData29_6[0x2]; // 0x732(0x2) UNKNOWN PROPERTY
		float JustGotPlayerInitialDelaySec; // 0x734(0x4)
		unsigned char UnknownData30_6[0x1C]; // 0x738(0x1C) UNKNOWN PROPERTY
		float FallAsleepAnimDuration; // 0x754(0x4)
		float WakeUpAnimDuration; // 0x758(0x4)
		float FallAsleepToSleepingCrossfade; // 0x75C(0x4)
		float WakeUpToIdleCrossfade; // 0x760(0x4)
		bool StateTransition_FallAsleepToSleeping : 1; // 0x764:0(0x1)
		bool StateTransition_SleepingToWakeUp : 1; // 0x764:1(0x1)
		bool StateTransition_WakeUpToIdle : 1; // 0x764:2(0x1)
		bool StateTransition_IdleToFallAsleep : 1; // 0x764:3(0x1)
		unsigned char UnknownData31_7[0x3]; // 0x765(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance");
			return ret;
		}

		void UpdateTurnAngleStored(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAAAB8
		void UpdateSwimmingYaw(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA9D8
		void UpdateRidingMovePlayRate(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA8F8
		void UpdatePlayLandAdditive(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA818
		void UpdateFootPhaseStop(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA738
		void UpdateBoostPlayRate(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA658
		void UpdateBodyRoll(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA578
		void UpdateBackwardVelocity(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA498
		void UpdateBackwardsPlayRate(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA3B8
		void FinishFootPhaseStopUpdate(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BAA2D8
		void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAA1F8
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Burt
	// Inherited from UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xA8 (0x810 - 0x768)
	class UFortAIFaunaAnimInstance_Burt : public UFortAIFaunaAnimInstance	
	{
	public:
		float MovingPlayRate; // 0x768(0x4)
		float LocomotionPoseAdditiveAlpha; // 0x76C(0x4)
		bool bEnableHeadTiltUpAdditive; // 0x770(0x1)
		bool bTurnAngleIsNegative; // 0x771(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x772(0x2) UNKNOWN PROPERTY
		FName DisableLocomotionAdditiveCurveName; // 0x774(0x4)
		FName InterruptibleCurveName; // 0x778(0x4)
		bool bIsIdleShuffleTurn; // 0x77C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x77D(0x3) UNKNOWN PROPERTY
		float IdleShuffleBodyBend; // 0x780(0x4)
		float IdleShufflePlayRate; // 0x784(0x4)
		bool bIdleShuffleTurnDirection; // 0x788(0x1)
		bool bIsMoving; // 0x789(0x1)
		bool bCanTransitionIdleToApex; // 0x78A(0x1)
		bool bCanTransitionIdleToMoving; // 0x78B(0x1)
		bool bCanTransitionMovingToIdle; // 0x78C(0x1)
		bool bCanTransitionLandToIdle; // 0x78D(0x1)
		bool bCanTransitionLandToJumpStart; // 0x78E(0x1)
		bool bCanTransitionJumpStartToApex; // 0x78F(0x1)
		bool bCanTransitionApexToFall; // 0x790(0x1)
		bool bCanTransitionFallToLand; // 0x791(0x1)
		bool bCanTransitionIdleTurnToIdle; // 0x792(0x1)
		bool bCanTransitionLocomotionTurnToIdle; // 0x793(0x1)
		bool bCanTransitionLocomotionTurnToMoving; // 0x794(0x1)
		bool bCanTransitionIdleTurnToMoving; // 0x795(0x1)
		bool bCanTransitionFallToMoving; // 0x796(0x1)
		bool bCanTransitionFallToIdle; // 0x797(0x1)
		float MovingPlayRate_SpeedThreshold; // 0x798(0x4)
		float MovingPlayRate_SlowSpeedDivisor; // 0x79C(0x4)
		float MovingPlayRate_FastSpeedDivisor; // 0x7A0(0x4)
		float MovingPlayRate_MinClamp; // 0x7A4(0x4)
		float MovingPlayRate_MaxClamp; // 0x7A8(0x4)
		float MovingPlayRate_InterpSpeed; // 0x7AC(0x4)
		float LocomotionPoseAdditiveAlpha_InterpSpeed; // 0x7B0(0x4)
		float EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier; // 0x7B4(0x4)
		float EnableHeadTiltUpAdditive_ModOperand; // 0x7B8(0x4)
		float InterruptibleCurveValue_LargeThreshold; // 0x7BC(0x4)
		float InterruptibleCurveValue_TurnAngleThreshold; // 0x7C0(0x4)
		float Speed_MovingThreshold; // 0x7C4(0x4)
		float Speed_IdleThreshold; // 0x7C8(0x4)
		float TurnAngle_LargeThreshold; // 0x7CC(0x4)
		float Speed_RidingMovingThreshold; // 0x7D0(0x4)
		float Speed_RidingIdleThreshold; // 0x7D4(0x4)
		float IdleShuffleBodyBendMultiplier; // 0x7D8(0x4)
		float IdleShuffleTurnThreshold; // 0x7DC(0x4)
		float IdleShuffleTurnDirectionThreshold; // 0x7E0(0x4)
		float IdleShufflePlayRateInRangeA; // 0x7E4(0x4)
		float IdleShufflePlayRateInRangeB; // 0x7E8(0x4)
		float IdleShufflePlayRateOutRangeA; // 0x7EC(0x4)
		float IdleShufflePlayRateOutRangeB; // 0x7F0(0x4)
		float MinSpeedSlowRidingMovePlayRate; // 0x7F4(0x4)
		float SpeedSlowDivisorRidingMovePlayRate; // 0x7F8(0x4)
		FMapRangeClamped_Ranges RidingMovePlayRate_Ranges; // 0x7FC(0x10)
		unsigned char UnknownData05_7[0x4]; // 0x80C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt");
			return ret;
		}
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
	// Inherited from UFortAIFaunaAnimInstance_Burt -> UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x820 - 0x810)
	class UFortAIFaunaAnimInstance_Burt_Hitchhiker : public UFortAIFaunaAnimInstance_Burt	
	{
	public:
		bool IsFloating; // 0x810(0x1)
		bool IsInTractorBeam; // 0x811(0x1)
		bool IsHitchhiked; // 0x812(0x1)
		unsigned char UnknownData01_7[0xD]; // 0x813(0xD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker");
			return ret;
		}
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Crow
	// Inherited from UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x38 (0x7A0 - 0x768)
	class UFortAIFaunaAnimInstance_Crow : public UFortAIFaunaAnimInstance	
	{
	public:
		float WingFlapPlayRate; // 0x768(0x4)
		bool bIsDescending; // 0x76C(0x1)
		bool bIsGliding; // 0x76D(0x1)
		bool bIsFlying; // 0x76E(0x1)
		bool bIsFlyingSlow; // 0x76F(0x1)
		bool bIsLanding; // 0x770(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x771(0x3) UNKNOWN PROPERTY
		float WingFlapPlayRateInRangeA; // 0x774(0x4)
		float WingFlapPlayRateInRangeB; // 0x778(0x4)
		float WingFlapPlayRateOutRangeA; // 0x77C(0x4)
		float WingFlapPlayRateOutRangeB; // 0x780(0x4)
		float ZVelocityDescendingThreshold; // 0x784(0x4)
		float GlidingSpeedThreshold; // 0x788(0x4)
		float FlyingSpeedThreshold; // 0x78C(0x4)
		float FlyingSlowSpeedThreshold; // 0x790(0x4)
		float LandingSpeedThreshold; // 0x794(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x798(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Crow");
			return ret;
		}
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Grandma
	// Inherited from UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xC8 (0x830 - 0x768)
	class UFortAIFaunaAnimInstance_Grandma : public UFortAIFaunaAnimInstance	
	{
	public:
		AFortAIPawn AIPawn; // 0x768(0x8)
		float MeshScale; // 0x770(0x4)
		bool bShouldPlayFullBodyInPlace; // 0x774(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x775(0x3) UNKNOWN PROPERTY
		float BlinkAlpha; // 0x778(0x4)
		float WalkRunPlayRate; // 0x77C(0x4)
		float LocomotionPoseAdditiveAlpha; // 0x780(0x4)
		bool bEnableSniffAdditive; // 0x784(0x1)
		bool bEnableAlertAdditive; // 0x785(0x1)
		bool bIdleStartTurn; // 0x786(0x1)
		bool bLookAtAdditiveTurnAlpha; // 0x787(0x1)
		bool bIsIdleShuffleTurn; // 0x788(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x789(0x3) UNKNOWN PROPERTY
		float IdleShuffleBodyBend; // 0x78C(0x4)
		float IdleShufflePlayRate; // 0x790(0x4)
		bool bIdleShuffleTurnDirection; // 0x794(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x795(0x3) UNKNOWN PROPERTY
		float TurnInPlaceModulatedSpeed; // 0x798(0x4)
		float MaxSpeedFullBodyInPlace; // 0x79C(0x4)
		float MinCurveValueFullBodyInPlace; // 0x7A0(0x4)
		float LocomotionPoseAdditiveAlphaInterpRate; // 0x7A4(0x4)
		int32_t SniffAdditiveFrequenceySeconds; // 0x7A8(0x4)
		int32_t AlertAdditiveFrequenceySeconds; // 0x7AC(0x4)
		int32_t PawnIDScale; // 0x7B0(0x4)
		FName ShouldPlayFullBodyInPlaceCurveName; // 0x7B4(0x4)
		FName BlinkAlphaCurveName; // 0x7B8(0x4)
		float IdleStartTurnInterruptibleThreshold; // 0x7BC(0x4)
		float IdleShuffleBodyBendMultiplier; // 0x7C0(0x4)
		float IdleShuffleTurnThreshold; // 0x7C4(0x4)
		float IdleShuffleTurnDirectionThreshold; // 0x7C8(0x4)
		float LookAtAdditiveTurnAlphaThreshold; // 0x7CC(0x4)
		float IdleShufflePlayRateInRangeA; // 0x7D0(0x4)
		float IdleShufflePlayRateInRangeB; // 0x7D4(0x4)
		float IdleShufflePlayRateOutRangeA; // 0x7D8(0x4)
		float IdleShufflePlayRateOutRangeB; // 0x7DC(0x4)
		float TurnInPlaceModulatedSpeedFactor; // 0x7E0(0x4)
		bool bIsMovingOnGroundORIsSurfaceSwimming; // 0x7E4(0x1)
		bool bStateRule_DefaultJump_ToJumpApex; // 0x7E5(0x1)
		bool bStateRule_TurnIdle_Idle; // 0x7E6(0x1)
		bool bStateRule_TurnIdle_Moving; // 0x7E7(0x1)
		bool bStateRule_Moving_TurnIdle; // 0x7E8(0x1)
		bool bStateRule_TurnMoving_Moving; // 0x7E9(0x1)
		bool bStateRule_Moving_TurnMoving; // 0x7EA(0x1)
		bool bStateRule_Idle_Moving; // 0x7EB(0x1)
		bool bStateRule_Moving_Idle; // 0x7EC(0x1)
		bool bStateRule_JumpLand_Idle; // 0x7ED(0x1)
		bool bStateRule_JumpLand_Moving; // 0x7EE(0x1)
		bool bStateRule_JumpStart_JumpApex; // 0x7EF(0x1)
		bool bStateRule_Fall_Moving; // 0x7F0(0x1)
		bool bStateRule_Fall_Idle; // 0x7F1(0x1)
		bool bStateRule_SwimIdle_SwimLoco; // 0x7F2(0x1)
		bool bStateRule_SwimLoco_SwimIdle; // 0x7F3(0x1)
		bool bStateRule_SwimTurn_SwimIdle; // 0x7F4(0x1)
		bool bStateRule_SwimTurn_SwimLoco; // 0x7F5(0x1)
		bool bAnimRule_NegativeTurnAngle; // 0x7F6(0x1)
		unsigned char UnknownData08_6[0x1]; // 0x7F7(0x1) UNKNOWN PROPERTY
		float InterruptibleMaxCheck; // 0x7F8(0x4)
		float SpeedStopTransition; // 0x7FC(0x4)
		float SpeedIdleMoveTransition; // 0x800(0x4)
		float SpeedMovingTurnIdleTransition; // 0x804(0x4)
		float SpeedToMoveMin; // 0x808(0x4)
		float SpeedToMoveMinWhileRiding; // 0x80C(0x4)
		float SpeedToMoveMinWhileAcceleratingAndRiding; // 0x810(0x4)
		float StateTimeFromEndThreshold; // 0x814(0x4)
		float SpeedIdleStartTurnThreshold; // 0x818(0x4)
		float SpeedFallMovingThreshold; // 0x81C(0x4)
		unsigned char UnknownData09_7[0x8]; // 0x820(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma");
			return ret;
		}

		void UpdateStateVariables(bool bAccelerating); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB998
		void UpdateShouldPlayFullBodyInPlace(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB8B8
		void UpdateMovingRates(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB7D8
		void UpdateMeshScale(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB6F8
		void UpdateLocomotionPoseAlpha(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB618
		void UpdateIdleStartTurn(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB538
		void UpdateEnableSniffAdditive(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB458
		void UpdateEnableAlertAdditive(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB378
		void UpdateBlinkAlpha(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAB298
		bool DetermineShouldPlayFullBodyInPlace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BAB1B8
		bool DetermineIdleStartTurn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BAB0D8
		bool DetermineEnableSniffAdditive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BAAFF8
		bool DetermineEnableAlertAdditive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BAAF18
		float CalculateWalkRunPlayRate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BAAE38
		float CalculateMeshScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BAAD58
		float CalculateLocomotionPoseAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BAAC78
		float CalculateBlinkAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BAAB98
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker
	// Inherited from UFortAIFaunaAnimInstance_Grandma -> UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x830 - 0x828)
	class UFortAIFaunaAnimInstance_Grandma_Hitchhiker : public UFortAIFaunaAnimInstance_Grandma	
	{
	public:
		bool bIsHitchhiked; // 0x828(0x1)
		bool bIsGrandmaSprinting; // 0x829(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x82A(0x2) UNKNOWN PROPERTY
		float SprintCheckSpeed; // 0x82C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker");
			return ret;
		}
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Nug
	// Inherited from UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x98 (0x800 - 0x768)
	class UFortAIFaunaAnimInstance_Nug : public UFortAIFaunaAnimInstance	
	{
	public:
		bool bIsBeingHeld; // 0x768(0x1)
		bool bIsBeingThrown; // 0x769(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x76A(0x2) UNKNOWN PROPERTY
		float LowerBodyMaskAlpha; // 0x76C(0x4)
		bool bShouldExitJump; // 0x770(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x771(0x3) UNKNOWN PROPERTY
		float MovingPlayRate; // 0x774(0x4)
		bool bShouldLean; // 0x778(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x779(0x3) UNKNOWN PROPERTY
		float LeanDirection; // 0x77C(0x4)
		bool bTurnAngleIsNegative; // 0x780(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x781(0x3) UNKNOWN PROPERTY
		FName InterruptibleCurveName; // 0x784(0x4)
		bool bIsIdleShuffleTurn; // 0x788(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x789(0x3) UNKNOWN PROPERTY
		float IdleShuffleBodyBend; // 0x78C(0x4)
		float IdleShufflePlayRate; // 0x790(0x4)
		bool bIdleShuffleTurnDirection; // 0x794(0x1)
		bool bCanTransitionIdleToIdleTurn; // 0x795(0x1)
		bool bCanTransitionIdleToLocomotionTurn; // 0x796(0x1)
		bool bCanTransitionIdleToMoving; // 0x797(0x1)
		bool bCanTransitionIdleToJumpApex; // 0x798(0x1)
		bool bCanTransitionMovingToIdle; // 0x799(0x1)
		bool bCanTransitionJumpStartToJumpApex; // 0x79A(0x1)
		bool bCanTransitionJumpApexToJumpLoop; // 0x79B(0x1)
		bool bCanTransitionLocomotionTurnToIdle; // 0x79C(0x1)
		bool bCanTransitionLocomotionTurnToMoving; // 0x79D(0x1)
		bool bCanTransitionIdleTurnToMoving; // 0x79E(0x1)
		bool bCanTransitionIdleTurnToIdle; // 0x79F(0x1)
		bool bCanTransitionJumpLoopToJumpLand; // 0x7A0(0x1)
		bool bCanTransitionIsBeingHeldToChickenChuck; // 0x7A1(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x7A2(0x2) UNKNOWN PROPERTY
		float ShouldExitJump_SpeedThreshold; // 0x7A4(0x4)
		float MovingPlayRate_SpeedThreshold; // 0x7A8(0x4)
		float MovingPlayRate_SlowSpeedDivisor; // 0x7AC(0x4)
		float MovingPlayRate_FastSpeedDivisor; // 0x7B0(0x4)
		float MovingPlayRate_InterpSpeed; // 0x7B4(0x4)
		float MovingPlayRate_MinClamp; // 0x7B8(0x4)
		float MovingPlayRate_MaxClamp; // 0x7BC(0x4)
		float LeanDirection_SpeedThreshold; // 0x7C0(0x4)
		unsigned char UnknownData13_7[0x34]; // 0x7C4(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug");
			return ret;
		}
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker
	// Inherited from UFortAIFaunaAnimInstance_Nug -> UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x800 - 0x7F8)
	class UFortAIFaunaAnimInstance_Nug_Hitchhiker : public UFortAIFaunaAnimInstance_Nug	
	{
	public:
		bool bIsSwimming; // 0x7F8(0x1)
		bool bIsHitchhiked; // 0x7F9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x7FA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker");
			return ret;
		}
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Robert
	// Inherited from UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x1B8 (0x920 - 0x768)
	class UFortAIFaunaAnimInstance_Robert : public UFortAIFaunaAnimInstance	
	{
	public:
		unsigned char UnknownData08_3[0x8]; // 0x768(0x8) UNKNOWN PROPERTY
		AFortAIPawn AIPawn; // 0x770(0x8)
		bool bIdleStartTurn; // 0x778(0x1)
		bool bEnableHeadTiltDownAdditive; // 0x779(0x1)
		bool bIsFullBodyInPlace; // 0x77A(0x1)
		unsigned char UnknownData09_6[0x1]; // 0x77B(0x1) UNKNOWN PROPERTY
		float LocomotionPoseAdditiveAlpha; // 0x77C(0x4)
		bool bIsIdleShuffleTurn; // 0x780(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x781(0x3) UNKNOWN PROPERTY
		float IdleShuffleBodyBend; // 0x784(0x4)
		float IdleShufflePlayRate; // 0x788(0x4)
		bool bIdleShuffleTurnDirection; // 0x78C(0x1)
		bool bLookAtAdditiveTurnAlpha; // 0x78D(0x1)
		bool bTurnDirection; // 0x78E(0x1)
		unsigned char UnknownData11_6[0x1]; // 0x78F(0x1) UNKNOWN PROPERTY
		int32_t PawnIDScale; // 0x790(0x4)
		int32_t HeadTiltDownAdditiveFrequenceySeconds; // 0x794(0x4)
		float ForceFullBodyTransition; // 0x798(0x4)
		float LocomotionPoseAdditiveAlphaInterpRate; // 0x79C(0x4)
		float IdleStartTurnInterruptibleThreshold; // 0x7A0(0x4)
		float LookAtAlphaThreshold; // 0x7A4(0x4)
		float SpeedMovingThreshold; // 0x7A8(0x4)
		float TurnDirectionThreshold; // 0x7AC(0x4)
		float SprintStopThreshold; // 0x7B0(0x4)
		float WalkStopThreshold; // 0x7B4(0x4)
		float BackwardStopThreshold; // 0x7B8(0x4)
		float AdditiveInterruptibleThreshold; // 0x7BC(0x4)
		float InterruptibleThreshold; // 0x7C0(0x4)
		float TurningRightThreshold; // 0x7C4(0x4)
		float LeftFootStopThreshold; // 0x7C8(0x4)
		float HipInterpSpeed_Fast; // 0x7CC(0x4)
		float HipInterpSpeed_Slow; // 0x7D0(0x4)
		float AdditiveHipAlphaTargeting_Constant; // 0x7D4(0x4)
		float BackwardLocomotionThreshold; // 0x7D8(0x4)
		float LocomotionThreshold; // 0x7DC(0x4)
		float PawnSpeedThreshold; // 0x7E0(0x4)
		float LocomotionPlayRate_Fixed; // 0x7E4(0x4)
		float BoostJumpingThreshold; // 0x7E8(0x4)
		float BoostStartPosition_Jumping; // 0x7EC(0x4)
		float BoostStartPosition_NotJumping; // 0x7F0(0x4)
		float AdditiveBodyTurnSwimInRangeA; // 0x7F4(0x4)
		float AdditiveBodyTurnSwimInRangeB; // 0x7F8(0x4)
		float AdditiveBodyTurnSwimOutRangeA; // 0x7FC(0x4)
		float AdditiveBodyTurnSwimOutRangeB; // 0x800(0x4)
		float AdditiveBodyTurnNotSwimInRangeA; // 0x804(0x4)
		float AdditiveBodyTurnNotSwimInRangeB; // 0x808(0x4)
		float AdditiveBodyTurnNotSwimOutRangeA; // 0x80C(0x4)
		float AdditiveBodyTurnNotSwimOutRangeB; // 0x810(0x4)
		float BodyTurnInterpSpeed_Accel; // 0x814(0x4)
		float BodyTurnInterpSpeed_NotAccel; // 0x818(0x4)
		float IdleAdditiveBodyTurnTarget_NotAccel; // 0x81C(0x4)
		float AdditiveLeanAlphaTargeting_Targeting; // 0x820(0x4)
		float AdditiveLeanAlphaTargeting_NonTargeting; // 0x824(0x4)
		float AdditiveLeanAlphaInterpSpeed; // 0x828(0x4)
		float AdditiveHipStopAlphaTargeting_PlayerTargeting; // 0x82C(0x4)
		float HipInterpSpeed_PlayerTargeting; // 0x830(0x4)
		float AdditiveHipStopAlphaTargeting_NotPlayerTargeting; // 0x834(0x4)
		float HipInterpSpeed_NotPlayerTargeting; // 0x838(0x4)
		float LocomotionSecondaryInRangeA; // 0x83C(0x4)
		float LocomotionSecondaryInRangeB; // 0x840(0x4)
		float LocomotionSecondaryOutRangeA; // 0x844(0x4)
		float LocomotionSecondaryOutRangeB; // 0x848(0x4)
		float SwimCameraRotationSecondaryInRangeA; // 0x84C(0x4)
		float SwimCameraRotationSecondaryInRangeB; // 0x850(0x4)
		float SwimCameraRotationSecondaryOutRangeA; // 0x854(0x4)
		float SwimCameraRotationSecondaryOutRangeB; // 0x858(0x4)
		float SwimRaptorRotationSecondaryInRangeA; // 0x85C(0x4)
		float SwimRaptorRotationSecondaryInRangeB; // 0x860(0x4)
		float SwimRaptorRotationSecondaryOutRangeA; // 0x864(0x4)
		float SwimRaptorRotationSecondaryOutRangeB; // 0x868(0x4)
		float IdleShuffleBodyBendMultiplier; // 0x86C(0x4)
		float IdleShuffleTurnThreshold; // 0x870(0x4)
		float IdleShuffleTurnDirectionThreshold; // 0x874(0x4)
		float IdleShufflePlayRateInRangeA; // 0x878(0x4)
		float IdleShufflePlayRateInRangeB; // 0x87C(0x4)
		float IdleShufflePlayRateOutRangeA; // 0x880(0x4)
		float IdleShufflePlayRateOutRangeB; // 0x884(0x4)
		bool bStateRule_Idle_Moving; // 0x888(0x1)
		bool bStateRule_Moving_Idle; // 0x889(0x1)
		bool bStateRule_Swimming_Fall; // 0x88A(0x1)
		bool bStateRule_Land_Idle; // 0x88B(0x1)
		bool bStateRule_Fall_Idle; // 0x88C(0x1)
		bool bStateRule_Fall_Moving; // 0x88D(0x1)
		bool bStateRule_SwimIdle_SwimLoco; // 0x88E(0x1)
		bool bStateRule_IsTurnInPlace; // 0x88F(0x1)
		bool bStateRule_IsSprintStop; // 0x890(0x1)
		bool bStateRule_IsStopBackwards; // 0x891(0x1)
		bool bStateRule_IsLocomotion; // 0x892(0x1)
		bool bStateRule_IsFinishedTurnInPlace; // 0x893(0x1)
		bool bStateRule_IsInterruptible; // 0x894(0x1)
		bool bStateRule_IsIdleTurnRight; // 0x895(0x1)
		bool bStateRule_IsLeftFootStop; // 0x896(0x1)
		bool bStateRule_IsTurningRight; // 0x897(0x1)
		bool bStateRule_IsAdditiveInterruptible; // 0x898(0x1)
		bool bStateRule_IsBackwardLocomotion; // 0x899(0x1)
		bool bStateRule_IsJumpIdleLand; // 0x89A(0x1)
		bool bStateRule_IsIdleTurnToIdleTurn; // 0x89B(0x1)
		bool bStateRule_BoostJumpToBoostLand; // 0x89C(0x1)
		bool bStateRule_IsJumpToBoostJump; // 0x89D(0x1)
		bool bStateRule_IsJumpToJumpLand; // 0x89E(0x1)
		bool bStateRule_BoostFallLoopToBoostLand; // 0x89F(0x1)
		bool bStateRule_IsLocomotionToIdle; // 0x8A0(0x1)
		bool bStateRule_IsExitLocomotionToIdle; // 0x8A1(0x1)
		bool bStateRule_IsLocomotionHoldToSecondary; // 0x8A2(0x1)
		bool bStateRule_IsLocomotionSecondaryToHold; // 0x8A3(0x1)
		bool bStateRule_IsJumpAdditive; // 0x8A4(0x1)
		bool bStateRule_IsLandAdditiveToJump; // 0x8A5(0x1)
		bool bStateRule_IsAllowSlopeSlide; // 0x8A6(0x1)
		bool bStateRule_IsToJumpState; // 0x8A7(0x1)
		bool bIsRidden; // 0x8A8(0x1)
		bool bIsStop; // 0x8A9(0x1)
		bool bIsWalkStop; // 0x8AA(0x1)
		unsigned char UnknownData12_6[0x1]; // 0x8AB(0x1) UNKNOWN PROPERTY
		float AdditiveHipAlpha; // 0x8AC(0x4)
		float AdditiveBodyAlpha; // 0x8B0(0x4)
		float RiderAimYaw; // 0x8B4(0x4)
		float PlayerSlopePitch; // 0x8B8(0x4)
		bool bIsPlayerTargeting; // 0x8BC(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x8BD(0x3) UNKNOWN PROPERTY
		float AdditiveHipAlphaTargeting; // 0x8C0(0x4)
		float HipInterpSpeed; // 0x8C4(0x4)
		float IdleAdditiveBodyTurnTarget; // 0x8C8(0x4)
		float BodyTurnAlpha; // 0x8CC(0x4)
		float BodyTurnInterpSpeed; // 0x8D0(0x4)
		float LocomotionPlayRate; // 0x8D4(0x4)
		float AdditiveLeanAlpha; // 0x8D8(0x4)
		float AdditiveLeanAlphaTargeting; // 0x8DC(0x4)
		float BoostStartPosition; // 0x8E0(0x4)
		float AdditiveHipStopAlpha; // 0x8E4(0x4)
		float AdditiveHipStopAlphaTargeting; // 0x8E8(0x4)
		bool bIsAllowBoost; // 0x8EC(0x1)
		bool bIsSlopeWarpHack; // 0x8ED(0x1)
		unsigned char UnknownData14_6[0x2]; // 0x8EE(0x2) UNKNOWN PROPERTY
		float LocomotionHeadSecondary; // 0x8F0(0x4)
		float LocomotionTailSecondary; // 0x8F4(0x4)
		float SwimCameraRotationSecondary; // 0x8F8(0x4)
		float SwimRaptorRotationSecondary; // 0x8FC(0x4)
		float SwimTurnYaw; // 0x900(0x4)
		float SwimHeadYaw; // 0x904(0x4)
		bool bAnimRule_NegativeTurnAngle; // 0x908(0x1)
		bool bIsAccelerating2D; // 0x909(0x1)
		unsigned char UnknownData15_6[0x2]; // 0x90A(0x2) UNKNOWN PROPERTY
		float InterruptibleMaxCheck; // 0x90C(0x4)
		float SpeedStopTransition; // 0x910(0x4)
		float SpeedIdleMoveTransition; // 0x914(0x4)
		float SpeedToMoveMin; // 0x918(0x4)
		float StateTimeFromEndThreshold; // 0x91C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert");
			return ret;
		}

		void UpdateStateVariables(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAC178
		void UpdateLocomotionPoseAdditiveAlpha(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BAC098
		void UpdateIsFullBodyInPlace(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BABFB8
		void UpdateIdleStartTurn(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BABED8
		void UpdateEnableHeadTiltDownAdditive(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BABDF8
		bool DetermineIsFullBodyInPlace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BABD18
		bool DetermineIdleStartTurn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BABC38
		bool DetermineEnableHeadTiltDownAdditive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BABB58
		float CalculateLocomotionPoseAdditiveAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BABA78
	};


	// Class IrwinRuntime.FortAIFaunaAnimInstance_Smackie
	// Inherited from UFortAIFaunaAnimInstance -> UFortAIAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x38 (0x7A0 - 0x768)
	class UFortAIFaunaAnimInstance_Smackie : public UFortAIFaunaAnimInstance	
	{
	public:
		bool bIsIdleShuffleTurn; // 0x768(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x769(0x3) UNKNOWN PROPERTY
		float IdleShuffleBodyBend; // 0x76C(0x4)
		float IdleShufflePlayRate; // 0x770(0x4)
		bool bIdleShuffleTurnDirection; // 0x774(0x1)
		bool bCanTransitionIdleToHop; // 0x775(0x1)
		bool bCanTransitionHopToIdle; // 0x776(0x1)
		bool bCanTransitionFallToIdle; // 0x777(0x1)
		bool bCanTransitionFallToHop; // 0x778(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x779(0x3) UNKNOWN PROPERTY
		float SpeedThreshold; // 0x77C(0x4)
		float IdleShuffleBodyBendMultiplier; // 0x780(0x4)
		float IdleShuffleTurnThreshold; // 0x784(0x4)
		float IdleShuffleTurnDirectionThreshold; // 0x788(0x4)
		float IdleShufflePlayRateInRangeA; // 0x78C(0x4)
		float IdleShufflePlayRateInRangeB; // 0x790(0x4)
		float IdleShufflePlayRateOutRangeA; // 0x794(0x4)
		float IdleShufflePlayRateOutRangeB; // 0x798(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x79C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaAnimInstance_Smackie");
			return ret;
		}
	};


	// Class IrwinRuntime.FortAIFaunaLayerAnimInstance
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x4C0 - 0x4B8)
	class UFortAIFaunaLayerAnimInstance : public UFortBaseLayerAnimInstance	
	{
	public:
		UAnimInstance MainAnimBP; // 0x4B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/IrwinRuntime.FortAIFaunaLayerAnimInstance");
			return ret;
		}
	};

}
