#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BeanstalkRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct BeanstalkRuntime.BeanAudioKey
	// Size: 0x8 (0x8 - 0x0)
	struct FBeanAudioKey	
	{
	public:
		EBeanAudioEventTypes AudioEventType; // 0x0(0x4)
		EBeanAudioCategories AudioCategory; // 0x4(0x4)
	};


	// Struct BeanstalkRuntime.BeanAudioSet
	// Size: 0x20 (0x20 - 0x0)
	struct FBeanAudioSet	
	{
	public:
		TArray<USoundBase*> SoundClips2D; // 0x0(0x10)
		TArray<USoundBase*> SoundClips3D; // 0x10(0x10)
	};


	// Struct BeanstalkRuntime.BeanCharIdleBreakDef
	// Size: 0x28 (0x28 - 0x0)
	struct FBeanCharIdleBreakDef	
	{
	public:
		TWeakObjectPtr<UAnimMontage*> IdleAnim; // 0x0(0x20)
		float Weighting; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanAudioPlayerContext
	// Size: 0x10 (0x10 - 0x0)
	struct FBeanAudioPlayerContext	
	{
	public:
		EBeanAudioCategories category; // 0x0(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x4(0x8) UNKNOWN PROPERTY
		EBeanAudioEventTypes LastPlayedAudioType; // 0xC(0x4)
	};


	// Struct BeanstalkRuntime.BeanJiggleStateWeightOverride
	// Size: 0x8 (0x8 - 0x0)
	struct FBeanJiggleStateWeightOverride	
	{
	public:
		EBeanCharStateID StateId; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Weighting; // 0x4(0x4)
	};


	// Struct BeanstalkRuntime.BeanCharCollisionResponseData
	// Size: 0x18 (0x18 - 0x0)
	struct FBeanCharCollisionResponseData	
	{
	public:
		float ImpactThreshold; // 0x0(0x4)
		bool bActivateKnockback; // 0x4(0x1)
		bool bActivateRagdoll; // 0x5(0x1)
		EBeanImpactAnimType ImpactAnimType; // 0x6(0x1)
		bool bPlayImpactVFX; // 0x7(0x1)
		UForceFeedbackEffect* ForceFeedbackEffect; // 0x8(0x8)
		bool bPlayFeedbackOnLand; // 0x10(0x1)
		bool bPlayFeedbackOnLaunch; // 0x11(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharInteractionsConfig
	// Size: 0xF0 (0xF0 - 0x0)
	struct FBeanCharInteractionsConfig	
	{
	public:
		FGameplayTagContainer PersistentTags; // 0x0(0x20)
		FGameplayTagContainer DisallowedPlayerActions; // 0x20(0x20)
		FGameplayTagContainer BlockedGameplayAbilityTags; // 0x40(0x20)
		FGameplayTagContainer AllowedItems; // 0x60(0x20)
		FGameplayTagContainer BlockedInteractableTags; // 0x80(0x20)
		FGameplayTagContainer InteractablesRequiringReticle; // 0xA0(0x20)
		FText BlockedInteractableContextText; // 0xC0(0x10)
		FLinearColor BlockedInteractableContextTextColour; // 0xD0(0x10)
		bool bBlockedInteractableContextTextOnly; // 0xE0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		FInteractSelectionData_BeanPawn InteractSelectionData; // 0xE4(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.InteractSelectionData_BeanPawn
	// Inherited from FInteractSelectionData_Base
	// Size: 0x8 (0x8 - 0x0)
	struct FInteractSelectionData_BeanPawn : public FInteractSelectionData_Base	
	{
	public:
		float InteractRadius; // 0x0(0x4)
		float InteractHalfAngle; // 0x4(0x4)
	};


	// Struct BeanstalkRuntime.BeanCharMovementConfig
	// Size: 0x278 (0x278 - 0x0)
	struct FBeanCharMovementConfig	
	{
	public:
		float Mass; // 0x0(0x4)
		float GravityScale; // 0x4(0x4)
		FRuntimeFloatCurve NormalMaxAccelerationCurve; // 0x8(0x88)
		FRuntimeFloatCurve NormalMaxDecelerationCurve; // 0x90(0x88)
		float LeanAnimTurnThreshold; // 0x118(0x4)
		float LeanAnimTurnMaxAngleRadians; // 0x11C(0x4)
		float LeanAnimBlendSpeed; // 0x120(0x4)
		float TurnSpeedGrounded; // 0x124(0x4)
		FRuntimeFloatCurve TurnYawMultiplierGrounded; // 0x128(0x88)
		float TurnSpeedAerial; // 0x1B0(0x4)
		float TurnSpeedFlying; // 0x1B4(0x4)
		bool bIsTurn180Enabled; // 0x1B8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1B9(0x3) UNKNOWN PROPERTY
		float Turn180MinSpeedPercentage; // 0x1BC(0x4)
		float Turn180DotProductTolerance; // 0x1C0(0x4)
		float Turn180Duration; // 0x1C4(0x4)
		FRuntimeFloatCurve Turn180YawMultiplier; // 0x1C8(0x88)
		float Turn180CancelDotProductTolerance; // 0x250(0x4)
		bool UseMeshPositionLerp; // 0x254(0x1)
		bool UseCameraPositionLerp; // 0x255(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x256(0x2) UNKNOWN PROPERTY
		float PositionLerpSpeed; // 0x258(0x4)
		float PositionLerpAccelerationFactor; // 0x25C(0x4)
		float MaxCorrectionDistanceToTriggerMeshLerp; // 0x260(0x4)
		float MaxCorrectionDistanceToTriggerCameraLerp; // 0x264(0x4)
		float MaxFallDuration; // 0x268(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		double FallToRagdollZVelocityThreshold; // 0x270(0x8)
	};


	// Struct BeanstalkRuntime.BeanCharJumpConfig
	// Size: 0x48 (0x48 - 0x0)
	struct FBeanCharJumpConfig	
	{
	public:
		float JumpZVelocity; // 0x0(0x4)
		float LandingVelocityConserve; // 0x4(0x4)
		double TransitionToFallingZThreshold; // 0x8(0x8)
		float JumpCoyoteTime; // 0x10(0x4)
		float JumpReverseCoyoteTime; // 0x14(0x4)
		FVector ParticleEmitterScale; // 0x18(0x18)
		double ParticleSpawnZOffset; // 0x30(0x8)
		double AnticipateLandingInitialTraceLength; // 0x38(0x8)
		double AnticipateLandingZVelocityMultiplier; // 0x40(0x8)
	};


	// Struct BeanstalkRuntime.BeanCharDiveConfig
	// Size: 0x58 (0x58 - 0x0)
	struct FBeanCharDiveConfig	
	{
	public:
		float GroundDiveVelocity; // 0x0(0x4)
		float GroundDiveAngle; // 0x4(0x4)
		float AirDiveVelocity; // 0x8(0x4)
		float AirDiveAngle; // 0xC(0x4)
		double HorizontalVelocityConservePercentageNormalized; // 0x10(0x8)
		float TurnSpeedDiving; // 0x18(0x4)
		float GroundTimeBeforeGetup; // 0x1C(0x4)
		float LandingVelocityReductionPercentageNormalized; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		UCurveVector* DiveRotationCurve; // 0x28(0x8)
		FVector ParticleEmitterScale; // 0x30(0x18)
		double ParticleSpawnZOffset; // 0x48(0x8)
		bool bLaunchZOverrideResetsDive; // 0x50(0x1)
		bool bLaunchXYOverrideResetsDive; // 0x51(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharImpactConfig
	// Size: 0x190 (0x190 - 0x0)
	struct FBeanCharImpactConfig	
	{
	public:
		TArray<FBeanCharCollisionResponseData> CollisionResponseData; // 0x0(0x10)
		double DiveHeadOnCollisionReactionMultiplier; // 0x10(0x8)
		double GroundLandingCollisionReactionMultiplier; // 0x18(0x8)
		double LedgeUpwardDotTolerance; // 0x20(0x8)
		FVector LedgeKnockbackMultiplier; // 0x28(0x18)
		double InAirKnockbackDampening; // 0x40(0x8)
		double MinKnockbackForce; // 0x48(0x8)
		double MaxKnockbackForce; // 0x50(0x8)
		float ImpactVFXCooldown; // 0x58(0x4)
		float ImpactOffsetAmount; // 0x5C(0x4)
		float ImpactThresholdLarge; // 0x60(0x4)
		float ImpactThresholdMedium; // 0x64(0x4)
		float ImpactThresholdSmall; // 0x68(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		double MinimumImpactGameplayCueStrength; // 0x70(0x8)
		double ImpactGameplayCueCooldown; // 0x78(0x8)
		TSet<EBeanCharStateID> IgnoreImpactStates; // 0x80(0x50)
		FName RootUnpinnedBone; // 0xD0(0x4)
		float BasePinStrength; // 0xD4(0x4)
		FRuntimeFloatCurve PinningResetCurve; // 0xD8(0x88)
		TArray<TEnumAsByte> PinningCollisionChannels; // 0x160(0x10)
		FPhysicalAnimationData PinningPhysicalAnimationData; // 0x170(0x20)
	};


	// Struct BeanstalkRuntime.BeanCharStaggerConfig
	// Size: 0xC (0xC - 0x0)
	struct FBeanCharStaggerConfig	
	{
	public:
		float LandStaggerZVelocityThreshold; // 0x0(0x4)
		float LandStaggerStunDurationSeconds; // 0x4(0x4)
		float VelocityMultiplierOnStagger; // 0x8(0x4)
	};


	// Struct BeanstalkRuntime.BeanCharGrabConfig
	// Size: 0xD0 (0xD0 - 0x0)
	struct FBeanCharGrabConfig	
	{
	public:
		float GrabbedJumpForceMultiplier; // 0x0(0x4)
		float GrabRadius; // 0x4(0x4)
		float GrabTargetCheckHeight; // 0x8(0x4)
		float UngrabDistanceAny; // 0xC(0x4)
		float UngrabDistanceVertical; // 0x10(0x4)
		float GrabbingRunSpeedMultiplier; // 0x14(0x4)
		float HoldingRunSpeedMultiplier; // 0x18(0x4)
		float HoldingMaxTurnSpeed; // 0x1C(0x4)
		float BeingGrabbedRunSpeedMultiplier; // 0x20(0x4)
		float BeingGrabbedMaxTurnSpeed; // 0x24(0x4)
		float HoldPositionForwardOffset; // 0x28(0x4)
		float RotateToFaceTargetSpeed; // 0x2C(0x4)
		float DragPositionTolerance; // 0x30(0x4)
		float DragSpeed; // 0x34(0x4)
		float GrabberVelocityFactor; // 0x38(0x4)
		float MaxForceOnGrabber; // 0x3C(0x4)
		float GrabbeeVelocityFactor; // 0x40(0x4)
		float MaxForceOnGrabbee; // 0x44(0x4)
		float GrabBreakTime; // 0x48(0x4)
		float GrabbeeCooldownAfterGrabBreak; // 0x4C(0x4)
		float GrabbeeJumpBreakTimeReduction; // 0x50(0x4)
		float GrabBreakApartForce; // 0x54(0x4)
		float GrabStumbleDuration; // 0x58(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FVector PlayerGrabOffsetIK; // 0x60(0x18)
		FVector LeftHandRotationAdjustment; // 0x78(0x18)
		FVector RightHandRotationAdjustment; // 0x90(0x18)
		float ServerNetLocationToleranceGrabber; // 0xA8(0x4)
		float ServerNetLocationToleranceGrabbee; // 0xAC(0x4)
		FVector ParticleEmitterScale; // 0xB0(0x18)
		float HoldingRunSpeedAnimationMultiplier; // 0xC8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharRagdollConfig
	// Size: 0x198 (0x198 - 0x0)
	struct FBeanCharRagdollConfig	
	{
	public:
		double ImpactForceMultiplier; // 0x0(0x8)
		bool bUseLaunchForceMultiplier; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve LaunchForceMultiplier; // 0x10(0x88)
		double GroundedRagdollControlForce; // 0x98(0x8)
		double InAirRagdollControlForce; // 0xA0(0x8)
		float RagdollControlVelocityThreshold; // 0xA8(0x4)
		float ExitLinearVelocity; // 0xAC(0x4)
		float ExitAngularVelocity; // 0xB0(0x4)
		float GetupVerticalityDotProductTolerance; // 0xB4(0x4)
		float GetupVerticalityDotProductDeadZoneMin; // 0xB8(0x4)
		float GetupVerticalityDotProductDeadZoneMax; // 0xBC(0x4)
		float MinimumActiveSeconds; // 0xC0(0x4)
		float MaxActiveSeconds; // 0xC4(0x4)
		double AngularVelocityMagnitude; // 0xC8(0x8)
		float HighImpactMaxAnimThreshold; // 0xD0(0x4)
		FName SkeletalMeshAnchorBone; // 0xD4(0x4)
		float PhysicsBlendWeight; // 0xD8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FRotator MeshCapsuleRotationalOffset; // 0xE0(0x18)
		FVector MeshCapsulePositionalOffset; // 0xF8(0x18)
		double DebugTriggerRagdollForce; // 0x110(0x8)
		bool bEnableRollExit; // 0x118(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		double SpeedForRollGetup; // 0x120(0x8)
		float GroundedCheckHalfHeightScale; // 0x128(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		double GroundedCheckRadius; // 0x130(0x8)
		float MinimumTimeOnGround; // 0x138(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
		TArray<TEnumAsByte> MeshCollisionChannels; // 0x140(0x10)
		TArray<FString> MeshBonesWithCCD; // 0x150(0x10)
		int32_t MaxRemoteRagdollCharacters; // 0x160(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		double MaxRemoteRagdollDistance; // 0x168(0x8)
		double RemoteRagdollMinimumDeactiveTime; // 0x170(0x8)
		bool bCullRemoteRagdollsBehindCamera; // 0x178(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x179(0x7) UNKNOWN PROPERTY
		double ReplicationHardsnapDistanceOverride; // 0x180(0x8)
		double MaxSecondsStuck; // 0x188(0x8)
		double SameLocationDistanceTolerance; // 0x190(0x8)
	};


	// Struct BeanstalkRuntime.BeanCharGetupConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FBeanCharGetupConfig	
	{
	public:
		float AnimationRate; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UCurveFloat* MotionTimeCurve; // 0x8(0x8)
		float RunSpeedMultiplier; // 0x10(0x4)
		float TurnSpeedOverride; // 0x14(0x4)
		float RestoreMovementAfterDurationNormalized; // 0x18(0x4)
		float EarlyExitStateDurationNormalized; // 0x1C(0x4)
		float GetupAnimationThresholdPitch; // 0x20(0x4)
		float SkipAnimationRotationDuration; // 0x24(0x4)
	};


	// Struct BeanstalkRuntime.BeanCharGetupRollConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FBeanCharGetupRollConfig	
	{
	public:
		float duration; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UCurveFloat* MotionTimeCurve; // 0x8(0x8)
	};


	// Struct BeanstalkRuntime.BeanCharRollConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FBeanCharRollConfig	
	{
	public:
		double ScaleSpeed; // 0x0(0x8)
		float MinimumDuration; // 0x8(0x4)
		float MaximumDurationBeforeForcedExit; // 0xC(0x4)
		double ExitSpeed; // 0x10(0x8)
		double GetupDirectionTolerance; // 0x18(0x8)
		double ForwardRollBlendSpeed; // 0x20(0x8)
	};


	// Struct BeanstalkRuntime.BeanCharMantleConfig
	// Size: 0xC0 (0xC0 - 0x0)
	struct FBeanCharMantleConfig	
	{
	public:
		TArray<TEnumAsByte> AcceptedCollisionChannels; // 0x0(0x10)
		TEnumAsByte<EComponentMobility> HighestAcceptedComponentMobility; // 0x10(0x1)
		bool bAllowMantleOnAllSceneGraphEntities; // 0x11(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		double WallCheckDownOffset; // 0x18(0x8)
		double WallCheckDownOffsetDiving; // 0x20(0x8)
		double WallCheckRadius; // 0x28(0x8)
		double WallCheckHeight; // 0x30(0x8)
		double WallCheckLength; // 0x38(0x8)
		double WallCheckMaxAngle; // 0x40(0x8)
		double WallCheckMinFacingAlignment; // 0x48(0x8)
		double WallTopCheckMinimumLength; // 0x50(0x8)
		double WallTopCheckRadius; // 0x58(0x8)
		double WallTopMinUpwardAlignment; // 0x60(0x8)
		double LedgeCheckLength; // 0x68(0x8)
		double LedgeCheckRadius; // 0x70(0x8)
		double HangingSpotOffset; // 0x78(0x8)
		double HangingSpotMinimumHeight; // 0x80(0x8)
		double HangingSpotMaxInclineDot; // 0x88(0x8)
		double HangingDownwardOffset; // 0x90(0x8)
		float AnimationRate; // 0x98(0x4)
		float RestoreMovementAfterDurationNormalized; // 0x9C(0x4)
		float RestoreMovementVelocityMultiplier; // 0xA0(0x4)
		float CancelBuffer; // 0xA4(0x4)
		float CancelInputDuration; // 0xA8(0x4)
		float CooldownTime; // 0xAC(0x4)
		float TimeToValidate; // 0xB0(0x4)
		FName HangingSpotMotionWarp; // 0xB4(0x4)
		float ClamberEnabledCacheTime; // 0xB8(0x4)
		float VelocityProjectionSeconds; // 0xBC(0x4)
	};


	// Struct BeanstalkRuntime.BeanCharJostleConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FBeanCharJostleConfig	
	{
	public:
		float JostleTriggerRadius; // 0x0(0x4)
		float JostleOuterRadius; // 0x4(0x4)
		float JostleInnerRadius; // 0x8(0x4)
		float JostleMandatoryRadius; // 0xC(0x4)
		double JostleForceMultiplier; // 0x10(0x8)
		float JostlerMinSpeedToApplyForce; // 0x18(0x4)
		float JostleeMaxSpeedToTrigger; // 0x1C(0x4)
		float JostleeMaxSpeedToApplyForce; // 0x20(0x4)
		float JostleRefreshInterval; // 0x24(0x4)
		float PositionToleranceDuringJostle; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharCameraConfig
	// Size: 0x18 (0x18 - 0x0)
	struct FBeanCharCameraConfig	
	{
	public:
		UClass* CameraMode; // 0x0(0x8)
		UClass* OverrideVehicleCameraMode; // 0x8(0x8)
		float EnableDragAfterTeleportTimeout; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharCosmeticConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FBeanCharCosmeticConfig	
	{
	public:
		TArray<UAthenaDanceItemDefinition*> DefaultEmotes; // 0x0(0x10)
	};


	// Struct BeanstalkRuntime.BeanCharSwimmingConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FBeanCharSwimmingConfig	
	{
	public:
		float HeadingAdjustmentStrength; // 0x0(0x4)
		float MinImmersionDepth; // 0x4(0x4)
		float MaxImmersionDepth; // 0x8(0x4)
		float TargetImmersionDepth; // 0xC(0x4)
		float JumpMinVelocityZ; // 0x10(0x4)
		float JumpMaxVelocityZ; // 0x14(0x4)
		float JumpForceZ; // 0x18(0x4)
		float JumpForceDuration; // 0x1C(0x4)
	};


	// Struct BeanstalkRuntime.BeanCharZiplineConfig
	// Size: 0x4 (0x4 - 0x0)
	struct FBeanCharZiplineConfig	
	{
	public:
		float ZiplineTurnSpeed; // 0x0(0x4)
	};


	// Struct BeanstalkRuntime.BeanCharJiggleConfig
	// Size: 0x70 (0x70 - 0x0)
	struct FBeanCharJiggleConfig	
	{
	public:
		TArray<float> BoneWeights; // 0x0(0x10)
		double BeingGrabbedWeightMultiplier; // 0x10(0x8)
		TArray<FBeanJiggleStateWeightOverride> StateWeightOverrides; // 0x18(0x10)
		float StateWeightBlendDuration; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		double PlatformVelocityMultiplier; // 0x30(0x8)
		double AccelerationNoiseCutoff; // 0x38(0x8)
		double Mass; // 0x40(0x8)
		double SpringConst; // 0x48(0x8)
		double SpringPivotOffset; // 0x50(0x8)
		double SpringDamping; // 0x58(0x8)
		double SpringInterpSpeed; // 0x60(0x8)
		double SpringMaxExtentMultiplier; // 0x68(0x8)
	};


	// Struct BeanstalkRuntime.BeanCharHUDConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FBeanCharHUDConfig	
	{
	public:
		FGameplayTagContainer HiddenHUDElements; // 0x0(0x20)
	};


	// Struct BeanstalkRuntime.BeanCharTouchControlsConfig
	// Size: 0xC (0xC - 0x0)
	struct FBeanCharTouchControlsConfig	
	{
	public:
		int32_t NumLandingPredictionTraceSubdivisions; // 0x0(0x4)
		float JumpDiveButtonAdditionalCoyoteTime; // 0x4(0x4)
		float JumpDiveButtonAdditionalReverseCoyoteTime; // 0x8(0x4)
	};


	// Struct BeanstalkRuntime.BeanCharGrabPrediction
	// Size: 0x38 (0x38 - 0x0)
	struct FBeanCharGrabPrediction	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharMantleCheckDebug
	// Size: 0xC0 (0xC0 - 0x0)
	struct FBeanCharMantleCheckDebug	
	{
	public:
		unsigned char UnknownData00_2[0xC0]; // 0x0(0xC0) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharMantleTargetDebug
	// Size: 0x380 (0x380 - 0x0)
	struct FBeanCharMantleTargetDebug	
	{
	public:
		unsigned char UnknownData00_2[0x380]; // 0x0(0x380) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharMantleTargetData
	// Size: 0x38 (0x38 - 0x0)
	struct FBeanCharMantleTargetData	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanCharRagdollImpactData
	// Size: 0x40 (0x40 - 0x0)
	struct FBeanCharRagdollImpactData	
	{
	public:
		double Strength; // 0x0(0x8)
		FVector Location; // 0x8(0x18)
		FVector Normal; // 0x20(0x18)
		bool bFromLaunch; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanRagdollDebugComponentSnapshot
	// Size: 0x30 (0x30 - 0x0)
	struct FBeanRagdollDebugComponentSnapshot	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector Velocity; // 0x18(0x18)
	};


	// Struct BeanstalkRuntime.BeanRagdollDebugComponentHistory
	// Size: 0x20 (0x20 - 0x0)
	struct FBeanRagdollDebugComponentHistory	
	{
	public:
		TArray<FBeanRagdollDebugComponentSnapshot> CapsuleHistory; // 0x0(0x10)
		TArray<FBeanRagdollDebugComponentSnapshot> MeshHistory; // 0x10(0x10)
	};


	// Struct BeanstalkRuntime.BeanCharStateMachineContext
	// Size: 0x30 (0x30 - 0x0)
	struct FBeanCharStateMachineContext	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UBeanCharStateBase* CurrentState; // 0x8(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
		UBeanCharStateBase* NewState; // 0x20(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanStateHistoryItem
	// Size: 0x4 (0x4 - 0x0)
	struct FBeanStateHistoryItem	
	{
	public:
		unsigned char UnknownData00_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanStateGameplayTagsDefinition
	// Size: 0x68 (0x68 - 0x0)
	struct FBeanStateGameplayTagsDefinition	
	{
	public:
		EBeanCharStateID StateId; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer GrantedTags; // 0x8(0x20)
		FGameplayTagContainer BlockedTags; // 0x28(0x20)
		FGameplayTagContainer BlockedAbilityTags; // 0x48(0x20)
	};


	// Struct BeanstalkRuntime.BeanPredictedLaunch
	// Size: 0x58 (0x58 - 0x0)
	struct FBeanPredictedLaunch	
	{
	public:
		TWeakObjectPtr<ABeanCharacter*> Character; // 0x0(0x8)
		FVector LaunchVector; // 0x8(0x18)
		FVector CharacterLocationBeforeLaunch; // 0x20(0x18)
		FVector CharacterVelocityBeforeLaunch; // 0x38(0x18)
		TWeakObjectPtr<UObject*> OptionalSourceSubobject; // 0x50(0x8)
	};


	// Struct BeanstalkRuntime.BeanRootMotionSource_MoveToWithTimeMappingForce
	// Inherited from FRootMotionSource
	// Size: 0x40 (0x100 - 0xC0)
	struct FBeanRootMotionSource_MoveToWithTimeMappingForce : public FRootMotionSource	
	{
	public:
		FVector StartLocation; // 0xC0(0x18)
		FVector TargetLocation; // 0xD8(0x18)
		UCurveFloat* TimeMappingCurve; // 0xF0(0x8)
		float PreviousPreCurvedTargetRotationTimeFraction; // 0xF8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanRootMotionSource_RotationDeltaForce
	// Inherited from FRootMotionSource
	// Size: 0x30 (0xF0 - 0xC0)
	struct FBeanRootMotionSource_RotationDeltaForce : public FRootMotionSource	
	{
	public:
		FQuat DeltaRotation; // 0xC0(0x20)
		UCurveFloat* TimeMappingCurve; // 0xE0(0x8)
		float PreviousPreCurvedTargetRotationTimeFraction; // 0xE8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanRootMotionSource_RotationCurveForce
	// Inherited from FRootMotionSource
	// Size: 0x20 (0xE0 - 0xC0)
	struct FBeanRootMotionSource_RotationCurveForce : public FRootMotionSource	
	{
	public:
		bool bUseNormalizedTime; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		UCurveVector* RotationCurve; // 0xC8(0x8)
		float SimulatedTargetTimeFraction; // 0xD0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xD4(0xC) UNKNOWN PROPERTY
	};


	// Struct BeanstalkRuntime.BeanStateHistoryRecord
	// Size: 0x3 (0x3 - 0x0)
	struct FBeanStateHistoryRecord	
	{
	public:
		EBeanCharStateID StateId; // 0x0(0x1)
		EBeanCharStateLayerID LayerId; // 0x1(0x1)
		bool bIsReplaying; // 0x2(0x1)
	};

}
