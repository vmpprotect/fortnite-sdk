#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Mover
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Mover.MoverAuxStateContext
	// Size: 0x1 (0x1 - 0x0)
	struct FMoverAuxStateContext	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Mover.MoverSyncState
	// Size: 0x70 (0x70 - 0x0)
	struct FMoverSyncState	
	{
	public:
		FName MovementMode; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FLayeredMoveGroup LayeredMoves; // 0x8(0x50)
		FMoverDataCollection SyncStateCollection; // 0x58(0x18)
	};


	// Struct Mover.MoverDataCollection
	// Size: 0x18 (0x18 - 0x0)
	struct FMoverDataCollection	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct Mover.LayeredMoveGroup
	// Size: 0x50 (0x50 - 0x0)
	struct FLayeredMoveGroup	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		bool bApplyResidualVelocity; // 0x8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FVector ResidualVelocity; // 0x10(0x18)
		float ResidualClamping; // 0x28(0x4)
		unsigned char UnknownData05_7[0x24]; // 0x2C(0x24) UNKNOWN PROPERTY
	};


	// Struct Mover.MoverTimeStep
	// Size: 0x10 (0x10 - 0x0)
	struct FMoverTimeStep	
	{
	public:
		int32_t ServerFrame; // 0x0(0x4)
		float BaseSimTimeMs; // 0x4(0x4)
		float StepMs; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.MoverInputCmdContext
	// Size: 0x18 (0x18 - 0x0)
	struct FMoverInputCmdContext	
	{
	public:
		FMoverDataCollection InputCollection; // 0x0(0x18)
	};


	// Struct Mover.FreeMoveParams
	// Size: 0x80 (0x80 - 0x0)
	struct FFreeMoveParams	
	{
	public:
		EMoveInputType MoveInputType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector MoveInput; // 0x8(0x18)
		FRotator OrientationIntent; // 0x20(0x18)
		FVector PriorVelocity; // 0x38(0x18)
		FRotator PriorOrientation; // 0x50(0x18)
		float MaxSpeed; // 0x68(0x4)
		float Acceleration; // 0x6C(0x4)
		float Deceleration; // 0x70(0x4)
		float TurningBoost; // 0x74(0x4)
		float TurningRate; // 0x78(0x4)
		float DeltaSeconds; // 0x7C(0x4)
	};


	// Struct Mover.LayeredMoveBase
	// Size: 0x48 (0x48 - 0x0)
	struct FLayeredMoveBase	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		EMoveMixMode MixMode; // 0x8(0x1)
		char Priority; // 0x9(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		float DurationMs; // 0xC(0x4)
		float StartSimTimeMs; // 0x10(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FLayeredMoveFinishVelocitySettings FinishVelocitySettings; // 0x18(0x30)
	};


	// Struct Mover.LayeredMoveFinishVelocitySettings
	// Size: 0x30 (0x30 - 0x0)
	struct FLayeredMoveFinishVelocitySettings	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		ELayeredMoveFinishVelocityMode FinishVelocityMode; // 0x8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FVector SetVelocity; // 0x10(0x18)
		float ClampVelocity; // 0x28(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.LayeredMove_AnimRootMotion
	// Inherited from FLayeredMoveBase
	// Size: 0x10 (0x58 - 0x48)
	struct FLayeredMove_AnimRootMotion : public FLayeredMoveBase	
	{
	public:
		UAnimMontage Montage; // 0x48(0x8)
		float StartingMontagePosition; // 0x50(0x4)
		float PlayRate; // 0x54(0x4)
	};


	// Struct Mover.InstantMovementEffect
	// Size: 0x8 (0x8 - 0x0)
	struct FInstantMovementEffect	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Mover.TeleportEffect
	// Inherited from FInstantMovementEffect
	// Size: 0x18 (0x20 - 0x8)
	struct FTeleportEffect : public FInstantMovementEffect	
	{
	public:
		FVector TargetLocation; // 0x8(0x18)
	};


	// Struct Mover.JumpImpulseEffect
	// Inherited from FInstantMovementEffect
	// Size: 0x8 (0x10 - 0x8)
	struct FJumpImpulseEffect : public FInstantMovementEffect	
	{
	public:
		float UpwardsSpeed; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.ApplyVelocityEffect
	// Inherited from FInstantMovementEffect
	// Size: 0x20 (0x28 - 0x8)
	struct FApplyVelocityEffect : public FInstantMovementEffect	
	{
	public:
		FVector VelocityToApply; // 0x8(0x18)
		bool bAdditiveVelocity; // 0x20(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FName ForceMovementMode; // 0x24(0x4)
	};


	// Struct Mover.LayeredMove_LinearVelocity
	// Inherited from FLayeredMoveBase
	// Size: 0x28 (0x70 - 0x48)
	struct FLayeredMove_LinearVelocity : public FLayeredMoveBase	
	{
	public:
		FVector Velocity; // 0x48(0x18)
		UCurveFloat MagnitudeOverTime; // 0x60(0x8)
		char SettingsFlags; // 0x68(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct Mover.LayeredMove_JumpImpulseOverDuration
	// Inherited from FLayeredMoveBase
	// Size: 0x8 (0x50 - 0x48)
	struct FLayeredMove_JumpImpulseOverDuration : public FLayeredMoveBase	
	{
	public:
		float UpwardsSpeed; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.LayeredMove_JumpTo
	// Inherited from FLayeredMoveBase
	// Size: 0x38 (0x80 - 0x48)
	struct FLayeredMove_JumpTo : public FLayeredMoveBase	
	{
	public:
		float JumpDistance; // 0x48(0x4)
		float JumpHeight; // 0x4C(0x4)
		bool bUseActorRotation; // 0x50(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FRotator JumpRotation; // 0x58(0x18)
		UCurveVector PathOffsetCurve; // 0x70(0x8)
		UCurveFloat TimeMappingCurve; // 0x78(0x8)
	};


	// Struct Mover.LayeredMove_MoveTo
	// Inherited from FLayeredMoveBase
	// Size: 0x48 (0x90 - 0x48)
	struct FLayeredMove_MoveTo : public FLayeredMoveBase	
	{
	public:
		FVector StartLocation; // 0x48(0x18)
		FVector TargetLocation; // 0x60(0x18)
		bool bRestrictSpeedToExpected; // 0x78(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		UCurveVector PathOffsetCurve; // 0x80(0x8)
		UCurveFloat TimeMappingCurve; // 0x88(0x8)
	};


	// Struct Mover.LayeredMove_MoveToDynamic
	// Inherited from FLayeredMove_MoveTo -> FLayeredMoveBase
	// Size: 0x8 (0x98 - 0x90)
	struct FLayeredMove_MoveToDynamic : public FLayeredMove_MoveTo	
	{
	public:
		AActor LocationActor; // 0x90(0x8)
	};


	// Struct Mover.LayeredMove_RadialImpulse
	// Inherited from FLayeredMoveBase
	// Size: 0x60 (0xA8 - 0x48)
	struct FLayeredMove_RadialImpulse : public FLayeredMoveBase	
	{
	public:
		FVector Location; // 0x48(0x18)
		AActor LocationActor; // 0x60(0x8)
		float Radius; // 0x68(0x4)
		float Magnitude; // 0x6C(0x4)
		bool bIsPush; // 0x70(0x1)
		bool bNoVerticalVelocity; // 0x71(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
		UCurveFloat DistanceFalloff; // 0x78(0x8)
		UCurveFloat MagnitudeOverTime; // 0x80(0x8)
		bool bUseFixedWorldDirection; // 0x88(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		FRotator FixedWorldDirection; // 0x90(0x18)
	};


	// Struct Mover.PlanarConstraint
	// Size: 0x38 (0x38 - 0x0)
	struct FPlanarConstraint	
	{
	public:
		bool bConstrainToPlane; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector PlaneConstraintNormal; // 0x8(0x18)
		FVector PlaneConstraintOrigin; // 0x20(0x18)
	};


	// Struct Mover.FloorCheckResult
	// Size: 0x108 (0x108 - 0x0)
	struct FFloorCheckResult	
	{
	public:
		bool bBlockingHit : 1; // 0x0:0(0x1)
		bool bWalkableFloor : 1; // 0x0:1(0x1)
		bool bLineTrace : 1; // 0x0:2(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float LineDist; // 0x4(0x4)
		float FloorDist; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FHitResult HitResult; // 0x10(0xF8)
	};


	// Struct Mover.GroundMoveParams
	// Size: 0xA0 (0xA0 - 0x0)
	struct FGroundMoveParams	
	{
	public:
		EMoveInputType MoveInputType; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector MoveInput; // 0x8(0x18)
		FRotator OrientationIntent; // 0x20(0x18)
		FVector PriorVelocity; // 0x38(0x18)
		FRotator PriorOrientation; // 0x50(0x18)
		float MaxSpeed; // 0x68(0x4)
		float Acceleration; // 0x6C(0x4)
		float Deceleration; // 0x70(0x4)
		float Friction; // 0x74(0x4)
		float TurningRate; // 0x78(0x4)
		float TurningBoost; // 0x7C(0x4)
		FVector GroundNormal; // 0x80(0x18)
		float DeltaSeconds; // 0x98(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.LayeredMove_Launch
	// Inherited from FLayeredMoveBase
	// Size: 0x20 (0x68 - 0x48)
	struct FLayeredMove_Launch : public FLayeredMoveBase	
	{
	public:
		FVector LaunchVelocity; // 0x48(0x18)
		FName ForceMovementMode; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.MovementSubstep
	// Size: 0x28 (0x28 - 0x0)
	struct FMovementSubstep	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct Mover.MovementRecord
	// Size: 0x48 (0x48 - 0x0)
	struct FMovementRecord	
	{
	public:
		unsigned char UnknownData01_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct Mover.ProposedMove
	// Size: 0x58 (0x58 - 0x0)
	struct FProposedMove	
	{
	public:
		EMoveMixMode MixMode; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName PreferredMode; // 0x4(0x4)
		bool bHasDirIntent : 1; // 0x8:0(0x1)
		unsigned char UnknownData03_5[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FVector DirectionIntent; // 0x10(0x18)
		FVector LinearVelocity; // 0x28(0x18)
		FRotator AngularVelocity; // 0x40(0x18)
	};


	// Struct Mover.MovingComponentSet
	// Size: 0x18 (0x18 - 0x0)
	struct FMovingComponentSet	
	{
	public:
		TWeakObjectPtr UpdatedComponent; // 0x0(0x8)
		TWeakObjectPtr UpdatedPrimitive; // 0x8(0x8)
		TWeakObjectPtr MoverComponent; // 0x10(0x8)
	};


	// Struct Mover.MoverDataStructBase
	// Size: 0x8 (0x8 - 0x0)
	struct FMoverDataStructBase	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct Mover.CharacterDefaultInputs
	// Inherited from FMoverDataStructBase
	// Size: 0x68 (0x70 - 0x8)
	struct FCharacterDefaultInputs : public FMoverDataStructBase	
	{
	public:
		EMoveInputType MoveInputType; // 0x8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FVector MoveInput; // 0x10(0x18)
		FVector OrientationIntent; // 0x28(0x18)
		FRotator ControlRotation; // 0x40(0x18)
		FName SuggestedMovementMode; // 0x58(0x4)
		bool bUsingMovementBase; // 0x5C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		UPrimitiveComponent MovementBase; // 0x60(0x8)
		FName MovementBaseBoneName; // 0x68(0x4)
		bool bIsJumpJustPressed; // 0x6C(0x1)
		bool bIsJumpPressed; // 0x6D(0x1)
		unsigned char UnknownData05_7[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
	};


	// Struct Mover.MoverDefaultSyncState
	// Inherited from FMoverDataStructBase
	// Size: 0xA8 (0xB0 - 0x8)
	struct FMoverDefaultSyncState : public FMoverDataStructBase	
	{
	public:
		FVector Location; // 0x8(0x18)
		FRotator orientation; // 0x20(0x18)
		FVector Velocity; // 0x38(0x18)
		FVector MoveDirectionIntent; // 0x50(0x18)
		UPrimitiveComponent MovementBase; // 0x68(0x8)
		FName MovementBaseBoneName; // 0x70(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FVector MovementBasePos; // 0x78(0x18)
		FQuat MovementBaseQuat; // 0x90(0x20)
	};


	// Struct Mover.NetworkPhysicsMoverInputs
	// Inherited from FNetworkPhysicsData
	// Size: 0x18 (0x30 - 0x18)
	struct FNetworkPhysicsMoverInputs : public FNetworkPhysicsData	
	{
	public:
		FMoverInputCmdContext InputCmdContext; // 0x18(0x18)
	};


	// Struct Mover.NetworkPhysicsMoverState
	// Inherited from FNetworkPhysicsData
	// Size: 0x70 (0x88 - 0x18)
	struct FNetworkPhysicsMoverState : public FNetworkPhysicsData	
	{
	public:
		FMoverSyncState SyncStateContext; // 0x18(0x70)
	};


	// Struct Mover.MovementModeTickEndState
	// Size: 0x8 (0x8 - 0x0)
	struct FMovementModeTickEndState	
	{
	public:
		float RemainingMs; // 0x0(0x4)
		FName NextModeName; // 0x4(0x4)
	};


	// Struct Mover.MoverTickStartData
	// Size: 0x90 (0x90 - 0x0)
	struct FMoverTickStartData	
	{
	public:
		FMoverInputCmdContext InputCmd; // 0x0(0x18)
		FMoverSyncState SyncState; // 0x18(0x70)
		FMoverAuxStateContext AuxState; // 0x88(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
	};


	// Struct Mover.MoverTickEndData
	// Size: 0xC8 (0xC8 - 0x0)
	struct FMoverTickEndData	
	{
	public:
		FMoverSyncState SyncState; // 0x0(0x70)
		FMoverAuxStateContext AuxState; // 0x70(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		FMovementModeTickEndState MovementEndState; // 0x74(0x8)
		unsigned char UnknownData03_7[0x4C]; // 0x7C(0x4C) UNKNOWN PROPERTY
	};


	// Struct Mover.SimulationTickParams
	// Size: 0x110 (0x110 - 0x0)
	struct FSimulationTickParams	
	{
	public:
		FMovingComponentSet MovingComps; // 0x0(0x18)
		FMoverTickStartData StartState; // 0x18(0x90)
		FMoverTimeStep TimeStep; // 0xA8(0x10)
		FProposedMove ProposedMove; // 0xB8(0x58)
	};


	// Struct Mover.MoverOnImpactParams
	// Size: 0x118 (0x118 - 0x0)
	struct FMoverOnImpactParams	
	{
	public:
		FName MovementModeName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FHitResult HitResult; // 0x8(0xF8)
		FVector AttemptedMoveDelta; // 0x100(0x18)
	};


	// Struct Mover.MoverDataPersistence
	// Size: 0x10 (0x10 - 0x0)
	struct FMoverDataPersistence	
	{
	public:
		UScriptStruct RequiredType; // 0x0(0x8)
		bool bCopyFromPriorFrame; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct Mover.LayeredMove_MultiJump
	// Inherited from FLayeredMoveBase
	// Size: 0x10 (0x58 - 0x48)
	struct FLayeredMove_MultiJump : public FLayeredMoveBase	
	{
	public:
		int32_t MaximumInAirJumps; // 0x48(0x4)
		float UpwardsSpeed; // 0x4C(0x4)
		int32_t JumpsInAirRemaining; // 0x50(0x4)
		float TimeOfLastJumpMS; // 0x54(0x4)
	};


	// Struct Mover.MovementSettingsInputs
	// Inherited from FMoverDataStructBase
	// Size: 0x8 (0x10 - 0x8)
	struct FMovementSettingsInputs : public FMoverDataStructBase	
	{
	public:
		float MaxSpeed; // 0x8(0x4)
		float Acceleration; // 0xC(0x4)
	};


	// Struct Mover.WaterMoveParams
	// Size: 0xA8 (0xA8 - 0x0)
	struct FWaterMoveParams	
	{
	public:
		EMoveInputType MoveInputType; // 0x0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector MoveInput; // 0x8(0x18)
		FRotator OrientationIntent; // 0x20(0x18)
		FVector PriorVelocity; // 0x38(0x18)
		FRotator PriorOrientation; // 0x50(0x18)
		float MaxSpeed; // 0x68(0x4)
		float Acceleration; // 0x6C(0x4)
		float Deceleration; // 0x70(0x4)
		float Friction; // 0x74(0x4)
		float TurningRate; // 0x78(0x4)
		float TurningBoost; // 0x7C(0x4)
		float DeltaSeconds; // 0x80(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FVector MoveAcceleration; // 0x88(0x18)
		float MoveSpeed; // 0xA0(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.WaterFlowSplineData
	// Size: 0xE8 (0xE8 - 0x0)
	struct FWaterFlowSplineData	
	{
	public:
		unsigned char UnknownData01_2[0xE8]; // 0x0(0xE8) UNKNOWN PROPERTY
	};


	// Struct Mover.WaterCheckResult
	// Size: 0x1E8 (0x1E8 - 0x0)
	struct FWaterCheckResult	
	{
	public:
		bool bSwimmableVolume : 1; // 0x0:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FHitResult HitResult; // 0x8(0xF8)
		FWaterFlowSplineData WaterSplineData; // 0x100(0xE8)
	};


	// Struct Mover.UpdateWaterSplineDataParams
	// Size: 0x48 (0x48 - 0x0)
	struct FUpdateWaterSplineDataParams	
	{
	public:
		float TargetImmersionDepth; // 0x0(0x4)
		float WaterVelocityDepthForMax; // 0x4(0x4)
		float WaterVelocityMinMultiplier; // 0x8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector PlayerVelocity; // 0x10(0x18)
		FVector PlayerLocation; // 0x28(0x18)
		float CapsuleHalfHeight; // 0x40(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.SwimmingControlSettings
	// Size: 0xA8 (0xA8 - 0x0)
	struct FSwimmingControlSettings	
	{
	public:
		float CancelCrouchImmersionDepth; // 0x0(0x4)
		float DBNOSwimImmersionDepth; // 0x4(0x4)
		float MaxAcceleration; // 0x8(0x4)
		float MaxAccelerationSprinting; // 0xC(0x4)
		float BrakingDeceleration; // 0x10(0x4)
		float MaxNormalSpeed; // 0x14(0x4)
		float MaxSprintSpeed; // 0x18(0x4)
		float MinSprintJumpSpeed; // 0x1C(0x4)
		float SprintJumpAirAccelAngleLimit; // 0x20(0x4)
		float SprintRetriggerDelay; // 0x24(0x4)
		float SprintDelayAfterFiring; // 0x28(0x4)
		float MaxTargetingSpeed; // 0x2C(0x4)
		float BackwardsSpeedMultiplier; // 0x30(0x4)
		float BackwardsSpeedCosAngle; // 0x34(0x4)
		float AngledSpeedMultiplier; // 0x38(0x4)
		float AngledSpeedCosAngle; // 0x3C(0x4)
		float Friction; // 0x40(0x4)
		float FrictionSprinting; // 0x44(0x4)
		float FrictionDirectionChangeDot; // 0x48(0x4)
		float FrictionDirectionChangeMultiplier; // 0x4C(0x4)
		float MaxSpeedUp; // 0x50(0x4)
		float MaxSpeedDown; // 0x54(0x4)
		float MaxHorizontalEntrySpeed; // 0x58(0x4)
		float WaterForceMultiplier; // 0x5C(0x4)
		float WaterForceSecondMultiplier; // 0x60(0x4)
		float MaxWaterForce; // 0x64(0x4)
		float WaterVelocityDepthForMax; // 0x68(0x4)
		float WaterVelocityMinMultiplier; // 0x6C(0x4)
		float WaterSimMaxTimeStep; // 0x70(0x4)
		float WaterSimSubStepTime; // 0x74(0x4)
		float BobbingMaxForce; // 0x78(0x4)
		float BobbingIdealDepthTolerance; // 0x7C(0x4)
		float BobbingFrictionDown; // 0x80(0x4)
		float BobbingExpDragDown; // 0x84(0x4)
		float BobbingFrictionDownSubmerged; // 0x88(0x4)
		float BobbingExpDragDownSubmerged; // 0x8C(0x4)
		float BobbingFrictionUp; // 0x90(0x4)
		float BobbingExpDragUp; // 0x94(0x4)
		float BobbingFrictionMultiplier; // 0x98(0x4)
		float BobbingExpDragMultiplier; // 0x9C(0x4)
		float BoostDragMultiplier; // 0xA0(0x4)
		float JumpMultiplier; // 0xA4(0x4)
	};


	// Struct Mover.RelativeBaseInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FRelativeBaseInfo	
	{
	public:
		TWeakObjectPtr MovementBase; // 0x0(0x8)
		FName BoneName; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x10(0x18)
		unsigned char UnknownData04_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0x30(0x20)
		FVector ContactLocalPosition; // 0x50(0x18)
		unsigned char UnknownData05_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
	};


	// Struct Mover.MoverDynamicBasedMovementTickFunction
	// Inherited from FTickFunction
	// Size: 0x10 (0x38 - 0x28)
	struct FMoverDynamicBasedMovementTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
	};


	// Struct Mover.TrajectorySampleInfo
	// Size: 0xB0 (0xB0 - 0x0)
	struct FTrajectorySampleInfo	
	{
	public:
		unsigned char UnknownData01_2[0xB0]; // 0x0(0xB0) UNKNOWN PROPERTY
	};


	// Struct Mover.ComputeVelocityParams
	// Size: 0x50 (0x50 - 0x0)
	struct FComputeVelocityParams	
	{
	public:
		float DeltaSeconds; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector InitialVelocity; // 0x8(0x18)
		FVector MoveDirectionIntent; // 0x20(0x18)
		float MaxSpeed; // 0x38(0x4)
		float TurningBoost; // 0x3C(0x4)
		float Friction; // 0x40(0x4)
		float Deceleration; // 0x44(0x4)
		float Acceleration; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.ComputeCombinedVelocityParams
	// Size: 0x70 (0x70 - 0x0)
	struct FComputeCombinedVelocityParams	
	{
	public:
		float DeltaSeconds; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector InitialVelocity; // 0x8(0x18)
		FVector MoveDirectionIntent; // 0x20(0x18)
		float MaxSpeed; // 0x38(0x4)
		float TurningBoost; // 0x3C(0x4)
		float Friction; // 0x40(0x4)
		float Deceleration; // 0x44(0x4)
		float Acceleration; // 0x48(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FVector ExternalAcceleration; // 0x50(0x18)
		float OverallMaxSpeed; // 0x68(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct Mover.TransitionEvalResult
	// Size: 0x4 (0x4 - 0x0)
	struct FTransitionEvalResult	
	{
	public:
		FName NextMode; // 0x0(0x4)
	};

}
