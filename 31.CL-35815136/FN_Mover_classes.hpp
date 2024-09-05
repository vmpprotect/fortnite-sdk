#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Mover
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Mover.AirMovementUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAirMovementUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.AirMovementUtils");
			return ret;
		}

		float TryMoveToFallAlongSurface(FMovingComponentSet& MovingComps, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult, FMovementRecord& MoveRecord); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0AC3A0(relative to base address)
		bool IsValidLandingSpot(FMovingComponentSet& MovingComps, FVector& Location, FHitResult& Hit, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0AB964(relative to base address)
		FProposedMove ComputeControlledFreeMove(FFreeMoveParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0AA97C(relative to base address)
	};


	// Class Mover.MoverComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x2C8 (0x368 - 0xA0)
	class UMoverComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnPreSimulationTick; // 0xA0(0x10)
		FMulticastInlineDelegate OnPostMovement; // 0xB0(0x10)
		FMulticastInlineDelegate OnPostSimulationTick; // 0xC0(0x10)
		FMulticastInlineDelegate OnPostSimulationRollback; // 0xD0(0x10)
		FMulticastInlineDelegate OnMovementModeChanged; // 0xE0(0x10)
		UClass* BackendClass; // 0xF0(0x8)
		TMap<FName, UBaseMovementMode*> MovementModes; // 0xF8(0x50)
		FName StartingMovementMode; // 0x148(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		TArray<UBaseMovementModeTransition*> Transitions; // 0x150(0x10)
		TArray<FMoverDataPersistence> PersistentSyncStateDataTypes; // 0x160(0x10)
		UObject* InputProducer; // 0x170(0x8)
		UMovementMixer* MovementMixer; // 0x178(0x8)
		unsigned char UnknownData01_6[0x28]; // 0x180(0x28) UNKNOWN PROPERTY
		USceneComponent* UpdatedComponent; // 0x1A8(0x8)
		UPrimitiveComponent* UpdatedCompAsPrimitive; // 0x1B0(0x8)
		USceneComponent* PrimaryVisualComponent; // 0x1B8(0x8)
		unsigned char UnknownData02_6[0x128]; // 0x1C0(0x128) UNKNOWN PROPERTY
		TArray<UObject*> SharedSettings; // 0x2E8(0x10)
		bool bHasGravityOverride; // 0x2F8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		FVector GravityAccelOverride; // 0x300(0x18)
		FPlanarConstraint PlanarConstraint; // 0x318(0x38)
		bool bSupportsKinematicBasedMovement; // 0x350(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		UMovementModeStateMachine* ModeFSM; // 0x358(0x8)
		UMoverBlackboard* SimBlackboard; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverComponent");
			return ret;
		}

		bool TryGetFloorCheckHitResult(FHitResult& OutHitResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0F185C(relative to base address)
		void SetPlanarConstraint(FPlanarConstraint& InConstraint); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EF7F8(relative to base address)
		void SetGravityOverride(bool bOverrideGravity, FVector GravityAcceleration); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0EF68C(relative to base address)
		bool RemoveMovementMode(FName ModeName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E0EF600(relative to base address)
		void QueueNextMode(FName DesiredModeName, bool bShouldReenter); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E0EF538(relative to base address)
		void PhysicsVolumeChanged(APhysicsVolume* NewVolume); // Flags: Native|Protected, Memory Exec: 0x7FF74DC86EF4(relative to base address)
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74E0EED54(relative to base address)
		void K2_QueueLayeredMove(int32_t& MoveAsRawData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EEBCC(relative to base address)
		void K2_QueueInstantMovementEffect(int32_t& EffectAsRawData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EEA44(relative to base address)
		void K2_FindActiveLayeredMove(bool& DidSucceed, int32_t& TargetAsRawBytes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EE55C(relative to base address)
		bool HasValidCachedState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EE04C(relative to base address)
		bool HasValidCachedInputCmd(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EE034(relative to base address)
		void HandleImpact(FMoverOnImpactParams& ImpactParams); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EDF9C(relative to base address)
		FVector GetVelocity(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDF64(relative to base address)
		FVector GetUpDirection(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74E0EDF2C(relative to base address)
		FRotator GetTargetOrientation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDEF4(relative to base address)
		FMoverSyncState GetSyncState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDEC8(relative to base address)
		UMoverBlackboard GetSimBlackboard(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDEB0(relative to base address)
		FPlanarConstraint GetPlanarConstraint(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74E0EDE70(relative to base address)
		FName GetMovementModeName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDE48(relative to base address)
		UBaseMovementMode GetMovementMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDE24(relative to base address)
		FVector GetMovementIntent(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDDEC(relative to base address)
		FName GetMovementBaseBoneName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDC10(relative to base address)
		UPrimitiveComponent GetMovementBase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDBC8(relative to base address)
		FMoverInputCmdContext GetLastInputCmd(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDB9C(relative to base address)
		FVector GetGravityAcceleration(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF74E0EDB64(relative to base address)
		TArray GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74E0EDA88(relative to base address)
		UObject FindSharedSettings_Mutable_BP(UClass* SharedSetting); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0ED95C(relative to base address)
		UObject FindSharedSettings_BP(UClass* SharedSetting); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0ED95C(relative to base address)
		UBaseMovementMode FindMovementMode(UClass* MovementMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0ED8B8(relative to base address)
		bool AddMovementModeFromObject(FName ModeName, UBaseMovementMode* MovementMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E0EC5E0(relative to base address)
		UBaseMovementMode AddMovementModeFromClass(FName ModeName, UClass* MovementMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E0EC1BC(relative to base address)
	};


	// Class Mover.CharacterMoverComponent
	// Inherited from UMoverComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x370 - 0x368)
	class UCharacterMoverComponent : public UMoverComponent	
	{
	public:
		bool bHandleJump; // 0x368(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x369(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.CharacterMoverComponent");
			return ret;
		}

		void OnMoverPreSimulationTick(FMoverTimeStep& TimeStep, FMoverInputCmdContext& InputCmd); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF74E0ABDC0(relative to base address)
		bool Jump(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E0ABD98(relative to base address)
		bool IsSwimming(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD9F0(relative to base address)
		bool IsSlopeSliding(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD9C8(relative to base address)
		bool IsOnGround(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0AB93C(relative to base address)
		bool IsFalling(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0AB7A4(relative to base address)
		bool IsAirborne(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0AB77C(relative to base address)
		bool CanActorJump(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0AA880(relative to base address)
	};


	// Class Mover.CommonLegacyMovementSettings
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UCommonLegacyMovementSettings : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FName GroundMovementModeName; // 0x30(0x4)
		FName AirMovementModeName; // 0x34(0x4)
		FName SwimmingMovementModeName; // 0x38(0x4)
		float MaxWalkSlopeCosine; // 0x3C(0x4)
		float FloorSweepDistance; // 0x40(0x4)
		float MaxStepHeight; // 0x44(0x4)
		float MaxSpeed; // 0x48(0x4)
		float GroundFriction; // 0x4C(0x4)
		bool bUseSeparateBrakingFriction : 1; // 0x50:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float BrakingFriction; // 0x54(0x4)
		float BrakingFrictionFactor; // 0x58(0x4)
		float Deceleration; // 0x5C(0x4)
		float Acceleration; // 0x60(0x4)
		float TurningRate; // 0x64(0x4)
		float TurningBoost; // 0x68(0x4)
		bool bIgnoreBaseRotation; // 0x6C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float JumpUpwardsSpeed; // 0x70(0x4)
		float SwimmingStartImmersionDepth; // 0x74(0x4)
		float SwimmingIdealImmersionDepth; // 0x78(0x4)
		float SwimmingStopImmersionDepth; // 0x7C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.CommonLegacyMovementSettings");
			return ret;
		}
	};


	// Class Mover.PlanarConstraintUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlanarConstraintUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PlanarConstraintUtils");
			return ret;
		}

		void SetPlaneConstraintOrigin(FPlanarConstraint& Constraint, FVector PlaneOrigin); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0AC20C(relative to base address)
		void SetPlanarConstraintNormal(FPlanarConstraint& Constraint, FVector PlaneNormal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0AC068(relative to base address)
		void SetPlanarConstraintEnabled(FPlanarConstraint& Constraint, bool bEnabled); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0ABEDC(relative to base address)
		FVector ConstrainNormalToPlane(FPlanarConstraint& Constraint, FVector Normal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0AB204(relative to base address)
		FVector ConstrainLocationToPlane(FPlanarConstraint& Constraint, FVector Location); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0AB03C(relative to base address)
		FVector ConstrainDirectionToPlane(FPlanarConstraint& Constraint, FVector Direction, bool bMaintainMagnitude); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0AADB4(relative to base address)
	};


	// Class Mover.FloorQueryUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFloorQueryUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.FloorQueryUtils");
			return ret;
		}

		bool IsHitSurfaceWalkable(FHitResult& Hit, float MaxWalkSlopeCosine); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0AB7CC(relative to base address)
	};


	// Class Mover.GroundMovementUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGroundMovementUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.GroundMovementUtils");
			return ret;
		}

		float TryWalkToSlideAlongSurface(FMovingComponentSet& MovingComps, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord, float MaxWalkSlopeCosine, float MaxStepHeight); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0ACB60(relative to base address)
		FVector ComputeDeflectedMoveOntoRamp(FVector& OrigMoveDelta, FHitResult& RampHitResult, float MaxWalkSlopeCosine, bool bHitFromLineTrace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0AAB1C(relative to base address)
		FProposedMove ComputeControlledGroundMove(FGroundMoveParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0AAA4C(relative to base address)
		bool CanStepUpOnHitSurface(FHitResult& Hit); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0AA8A8(relative to base address)
	};


	// Class Mover.TurnGeneratorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTurnGeneratorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.TurnGeneratorInterface");
			return ret;
		}

		FRotator GetTurn(FRotator TargetOrientation, FMoverTickStartData& FullStartState, FMoverDefaultSyncState& MoverState, FMoverTimeStep& TimeStep, FProposedMove& ProposedMove, UMoverBlackboard* SimBlackboard); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF74E0AB3CC(relative to base address)
	};


	// Class Mover.LinearTurnGenerator
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULinearTurnGenerator : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		float HeadingRate; // 0x30(0x4)
		float PitchRate; // 0x34(0x4)
		float RollRate; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.LinearTurnGenerator");
			return ret;
		}
	};


	// Class Mover.ExactDampedTurnGenerator
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UExactDampedTurnGenerator : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		float HalfLifeSeconds; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.ExactDampedTurnGenerator");
			return ret;
		}
	};


	// Class Mover.BlueprintableTurnGenerator
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UBlueprintableTurnGenerator : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.BlueprintableTurnGenerator");
			return ret;
		}
	};


	// Class Mover.MotionWarpingMoverAdapter
	// Inherited from UMotionWarpingBaseAdapter -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UMotionWarpingMoverAdapter : public UMotionWarpingBaseAdapter	
	{
	public:
		UMoverComponent* TargetMoverComp; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MotionWarpingMoverAdapter");
			return ret;
		}
	};


	// Class Mover.MovementMixer
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMovementMixer : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MovementMixer");
			return ret;
		}
	};


	// Class Mover.MoverBackendLiaisonInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMoverBackendLiaisonInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverBackendLiaisonInterface");
			return ret;
		}
	};


	// Class Mover.MoverBlackboard
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UMoverBlackboard : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverBlackboard");
			return ret;
		}
	};


	// Class Mover.MoverDataModelBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMoverDataModelBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverDataModelBlueprintLibrary");
			return ret;
		}

		void SetMoveIntent(FCharacterDefaultInputs& Inputs, FVector& WorldDirectionIntent); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0B5338(relative to base address)
		FVector GetVelocityFromSyncState(FMoverDefaultSyncState& SyncState); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0B4D58(relative to base address)
		FRotator GetOrientationFromSyncState(FMoverDefaultSyncState& SyncState); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0B4C6C(relative to base address)
		FVector GetMoveDirectionIntentFromSyncState(FMoverDefaultSyncState& SyncState); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0B4BBC(relative to base address)
		FVector GetMoveDirectionIntentFromInputs(FCharacterDefaultInputs& Inputs); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0B4AD4(relative to base address)
		FVector GetLocationFromSyncState(FMoverDefaultSyncState& SyncState); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0B4A24(relative to base address)
	};


	// Class Mover.MoverDebugComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UMoverDebugComponent : public UActorComponent	
	{
	public:
		float LookaheadSeconds; // 0xA0(0x4)
		int32_t LookaheadSamplesPerSecond; // 0xA4(0x4)
		bool bShowTrajectory; // 0xA8(0x1)
		bool bShowTrail; // 0xA9(0x1)
		bool bShowCorrections; // 0xAA(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xAB(0x1) UNKNOWN PROPERTY
		float HistoryTrackingSeconds; // 0xAC(0x4)
		int32_t HistorySamplesPerSecond; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x64]; // 0xB4(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverDebugComponent");
			return ret;
		}

		void SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E0B5274(relative to base address)
		void OnMovementSimTick(FMoverTimeStep& TimeStep); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74E0B50EC(relative to base address)
		void OnMovementSimRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74E0B4FDC(relative to base address)
		void OnHistoryTrackingRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74E0B4ECC(relative to base address)
		TArray GetPastTrajectory(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74E0B4D1C(relative to base address)
	};


	// Class Mover.MoverDeveloperSettings
	// Inherited from UDeveloperSettingsBackedByCVars -> UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UMoverDeveloperSettings : public UDeveloperSettingsBackedByCVars	
	{
	public:
		int32_t MaxTimesToRefundSubstep; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverDeveloperSettings");
			return ret;
		}
	};


	// Class Mover.MoverNetworkPhysicsLiaisonComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x130 (0x1D0 - 0xA0)
	class UMoverNetworkPhysicsLiaisonComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x130]; // 0xA0(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverNetworkPhysicsLiaisonComponent");
			return ret;
		}

		void OnComponentPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74E0B4E08(relative to base address)
	};


	// Class Mover.MoverNetworkPredictionLiaisonComponent
	// Inherited from UNetworkPredictionComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class UMoverNetworkPredictionLiaisonComponent : public UNetworkPredictionComponent	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x290(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverNetworkPredictionLiaisonComponent");
			return ret;
		}
	};


	// Class Mover.MoverInputProducerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMoverInputProducerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverInputProducerInterface");
			return ret;
		}

		void ProduceInput(int32_t SimTimeMs, FMoverInputCmdContext& InputCmdResult); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74E0B5188(relative to base address)
	};


	// Class Mover.MoverDataCollectionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMoverDataCollectionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverDataCollectionLibrary");
			return ret;
		}

		void K2_GetDataFromCollection(bool& DidSucceed, FMoverDataCollection& Collection, int32_t& TargetAsRawBytes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EE7A0(relative to base address)
		void K2_AddDataToCollection(FMoverDataCollection& Collection, int32_t& SourceAsRawBytes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EE2EC(relative to base address)
		void ClearDataFromCollection(FMoverDataCollection& Collection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0B48AC(relative to base address)
	};


	// Class Mover.BaseMovementModeTransition
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UBaseMovementModeTransition : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.BaseMovementModeTransition");
			return ret;
		}

		void K2_OnTrigger(FSimulationTickParams& Params); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FTransitionEvalResult K2_OnEvaluate(FSimulationTickParams& Params); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class Mover.PhysicsJumpCheck
	// Inherited from UBaseMovementModeTransition -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UPhysicsJumpCheck : public UBaseMovementModeTransition	
	{
	public:
		float JumpUpwardsSpeed; // 0x30(0x4)
		FName TransitionToMode; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PhysicsJumpCheck");
			return ret;
		}
	};


	// Class Mover.PhysicsCharacterMovementModeInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPhysicsCharacterMovementModeInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PhysicsCharacterMovementModeInterface");
			return ret;
		}
	};


	// Class Mover.WaterMovementUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWaterMovementUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.WaterMovementUtils");
			return ret;
		}

		void UpdateWaterSplineData(FUpdateWaterSplineDataParams& UpdateWaterSplineDataParams, FWaterCheckResult& OutWaterResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0B54DC(relative to base address)
		FProposedMove ComputeControlledWaterMove(FWaterMoveParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0B4954(relative to base address)
	};


	// Class Mover.BaseMovementMode
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UBaseMovementMode : public UObject	
	{
	public:
		TArray<UClass*> SharedSettingsClasses; // 0x28(0x10)
		TArray<UBaseMovementModeTransition*> Transitions; // 0x38(0x10)
		FGameplayTagContainer GameplayTags; // 0x48(0x20)
		unsigned char UnknownData00_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.BaseMovementMode");
			return ret;
		}

		void K2_OnUnregistered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FMoverTickEndData K2_OnSimulationTick(FSimulationTickParams& Params); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnRegistered(FName ModeName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FProposedMove K2_OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnDeactivate(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnActivate(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UMoverComponent GetMoverComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7486CEC98(relative to base address)
		UMoverBlackboard GetBlackboard_Mutable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDA68(relative to base address)
		UMoverBlackboard GetBlackboard(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EDA68(relative to base address)
	};


	// Class Mover.FallingMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0x38 (0xA8 - 0x70)
	class UFallingMode : public UBaseMovementMode	
	{
	public:
		FMulticastInlineDelegate OnLanded; // 0x70(0x10)
		bool bCancelVerticalSpeedOnLanding; // 0x80(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		float AirControlPercentage; // 0x84(0x4)
		float FallingDeceleration; // 0x88(0x4)
		float OverTerminalSpeedFallingDeceleration; // 0x8C(0x4)
		float TerminalMovementPlaneSpeed; // 0x90(0x4)
		bool bShouldClampTerminalVerticalSpeed; // 0x94(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		float VerticalFallingDeceleration; // 0x98(0x4)
		float TerminalVerticalSpeed; // 0x9C(0x4)
		unsigned char UnknownData02_7[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.FallingMode");
			return ret;
		}

		void ProcessLanded(FFloorCheckResult& FloorResult, FVector& Velocity, FRelativeBaseInfo& BaseInfo, FMoverTickEndData& TickEndData); // Flags: Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EF2BC(relative to base address)
		void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EF198(relative to base address)
		void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EEFA4(relative to base address)
	};


	// Class Mover.FlyingMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFlyingMode : public UBaseMovementMode	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.FlyingMode");
			return ret;
		}

		void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EF198(relative to base address)
		void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EEFA4(relative to base address)
	};


	// Class Mover.SwimmingMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0xB0 (0x120 - 0x70)
	class USwimmingMode : public UBaseMovementMode	
	{
	public:
		FSwimmingControlSettings SurfaceSwimmingWaterControlSettings; // 0x70(0xA8)
		unsigned char UnknownData00_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.SwimmingMode");
			return ret;
		}

		void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EF198(relative to base address)
		void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EEFA4(relative to base address)
	};


	// Class Mover.WalkingMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UWalkingMode : public UBaseMovementMode	
	{
	public:
		UObject* TurnGenerator; // 0x70(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.WalkingMode");
			return ret;
		}

		void SetTurnGeneratorClass(UClass* TurnGeneratorClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E0EF8D8(relative to base address)
		void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E0EF198(relative to base address)
		void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0EEFA4(relative to base address)
		UObject GetTurnGenerator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C316624(relative to base address)
	};


	// Class Mover.BasedMovementUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBasedMovementUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.BasedMovementUtils");
			return ret;
		}

		bool TransformWorldRotatorToBased(UPrimitiveComponent* MovementBase, FName BoneName, FRotator WorldSpaceRotator, FRotator& OutLocalRotator); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F1648(relative to base address)
		bool TransformWorldLocationToBased(UPrimitiveComponent* MovementBase, FName BoneName, FVector WorldSpaceLocation, FVector& OutLocalLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F13F0(relative to base address)
		void TransformWorldDirectionToBased(UPrimitiveComponent* MovementBase, FName BoneName, FVector WorldSpaceDirection); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F1198(relative to base address)
		void TransformRotatorToWorld(FQuat BaseQuat, FRotator LocalRotator, FRotator& OutWorldSpaceRotator); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F0F28(relative to base address)
		void TransformRotatorToLocal(FQuat BaseQuat, FRotator WorldSpaceRotator, FRotator& OutLocalRotator); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F0CB8(relative to base address)
		void TransformLocationToWorld(FVector BasePos, FQuat BaseQuat, FVector LocalLocation, FVector& OutLocationWorldSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F0948(relative to base address)
		void TransformLocationToLocal(FVector BasePos, FQuat BaseQuat, FVector WorldSpaceLocation, FVector& OutLocalLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F05D8(relative to base address)
		void TransformDirectionToWorld(FQuat BaseQuat, FVector LocalDirection, FVector& OutDirectionWorldSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F0330(relative to base address)
		void TransformDirectionToLocal(FQuat BaseQuat, FVector WorldSpaceDirection, FVector& OutLocalDirection); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F0088(relative to base address)
		bool TransformBasedRotatorToWorld(UPrimitiveComponent* MovementBase, FName BoneName, FRotator LocalRotator, FRotator& OutWorldSpaceRotator); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0EFE74(relative to base address)
		bool TransformBasedLocationToWorld(UPrimitiveComponent* MovementBase, FName BoneName, FVector LocalLocation, FVector& OutLocationWorldSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0EFC1C(relative to base address)
		bool TransformBasedDirectionToWorld(UPrimitiveComponent* MovementBase, FName BoneName, FVector LocalDirection, FVector& OutDirectionWorldSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0EF9C4(relative to base address)
		bool IsBaseSimulatingPhysics(UPrimitiveComponent* MovementBase); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E0EE0E4(relative to base address)
		bool IsADynamicBase(UPrimitiveComponent* MovementBase); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E0EE064(relative to base address)
		bool GetMovementBaseTransform(UPrimitiveComponent* MovementBase, FName BoneName, FVector& OutLocation, FQuat& OutQuat); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0EDC58(relative to base address)
	};


	// Class Mover.MovementUtils
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovementUtils : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MovementUtils");
			return ret;
		}

		bool TrySafeMoveUpdatedComponent(FMovingComponentSet& MovingComps, FVector& Delta, FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport, FMovementRecord& MoveRecord); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F1F4C(relative to base address)
		float TryMoveToSlideAlongSurface(FMovingComponentSet& MovingComps, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0F1940(relative to base address)
		bool IsExceedingMaxSpeed(FVector& Velocity, float InMaxSpeed); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0EE164(relative to base address)
		FVector ConstrainToPlane(FVector& Vector, FPlane& MovementPlane, bool bMaintainMagnitude); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0ED548(relative to base address)
		FVector ComputeVelocityFromPositions(FVector& FromPos, FVector& ToPos, float DeltaSeconds); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0ED34C(relative to base address)
		FVector ComputeVelocityFromGravity(FVector& GravityAccel, float DeltaSeconds); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0ED1D4(relative to base address)
		FVector ComputeVelocity(FComputeVelocityParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0ED0F0(relative to base address)
		FVector ComputeSlideDelta(FMovingComponentSet& MovingComps, FVector& Delta, float PctOfDeltaToMove, FVector& Normal, FHitResult& Hit); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0ECD14(relative to base address)
		FVector ComputeDirectionIntent(FVector& MoveInput, EMoveInputType MoveInputType); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0ECBAC(relative to base address)
		FVector ComputeCombinedVelocity(FComputeCombinedVelocityParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0ECB00(relative to base address)
		FRotator ComputeAngularVelocity(FRotator& From, FRotator& To, float DeltaSeconds, float TurningRateLimit); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0EC904(relative to base address)
		bool CanEscapeGravity(FVector& PriorVelocity, FVector& NewVelocity, FVector& GravityAccel, float DeltaSeconds); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74E0EC6A0(relative to base address)
	};


	// Class Mover.PlayMoverMontageCallbackProxy
	// Inherited from UPlayMontageCallbackProxy -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPlayMoverMontageCallbackProxy : public UPlayMontageCallbackProxy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PlayMoverMontageCallbackProxy");
			return ret;
		}

		void OnMoverMontageEnded(FName IgnoredNotifyName); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74E0EF11C(relative to base address)
		UPlayMoverMontageCallbackProxy CreateProxyObjectForPlayMoverMontage(UMoverComponent* InMoverComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E0ED73C(relative to base address)
	};


	// Class Mover.MovementSettingsInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMovementSettingsInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MovementSettingsInterface");
			return ret;
		}
	};


	// Class Mover.NullMovementMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UNullMovementMode : public UBaseMovementMode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.NullMovementMode");
			return ret;
		}
	};


	// Class Mover.MovementModeStateMachine
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UMovementModeStateMachine : public UObject	
	{
	public:
		TMap<FName, UBaseMovementMode*> Modes; // 0x28(0x50)
		UImmediateMovementModeTransition* QueuedModeTransition; // 0x78(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x80(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MovementModeStateMachine");
			return ret;
		}
	};


	// Class Mover.ImmediateMovementModeTransition
	// Inherited from UBaseMovementModeTransition -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UImmediateMovementModeTransition : public UBaseMovementModeTransition	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.ImmediateMovementModeTransition");
			return ret;
		}
	};


	// Class Mover.PhysicsDrivenFallingMode
	// Inherited from UFallingMode -> UBaseMovementMode -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPhysicsDrivenFallingMode : public UFallingMode	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		float TwistTorqueLimit; // 0xB0(0x4)
		float SwingTorqueLimit; // 0xB4(0x4)
		float TargetHeight; // 0xB8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PhysicsDrivenFallingMode");
			return ret;
		}
	};


	// Class Mover.PhysicsDrivenFlyingMode
	// Inherited from UFlyingMode -> UBaseMovementMode -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UPhysicsDrivenFlyingMode : public UFlyingMode	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		float TwistTorqueLimit; // 0x80(0x4)
		float SwingTorqueLimit; // 0x84(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PhysicsDrivenFlyingMode");
			return ret;
		}
	};


	// Class Mover.PhysicsDrivenSwimmingMode
	// Inherited from USwimmingMode -> UBaseMovementMode -> UObject
	// Size: 0x10 (0x130 - 0x120)
	class UPhysicsDrivenSwimmingMode : public USwimmingMode	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		float TargetHeight; // 0x128(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PhysicsDrivenSwimmingMode");
			return ret;
		}
	};


	// Class Mover.PhysicsDrivenWalkingMode
	// Inherited from UWalkingMode -> UBaseMovementMode -> UObject
	// Size: 0x30 (0xB0 - 0x80)
	class UPhysicsDrivenWalkingMode : public UWalkingMode	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x80(0x8) UNKNOWN PROPERTY
		float RadialForceLimit; // 0x88(0x4)
		float FrictionForceLimit; // 0x8C(0x4)
		float TwistTorqueLimit; // 0x90(0x4)
		float SwingTorqueLimit; // 0x94(0x4)
		float TargetHeight; // 0x98(0x4)
		float GroundDamping; // 0x9C(0x4)
		float FractionalVelocityToTarget; // 0xA0(0x4)
		float FractionalDownwardVelocityToTarget; // 0xA4(0x4)
		float MaxUnsupportedTimeBeforeFalling; // 0xA8(0x4)
		bool bHandleVerticalLandingSeparately; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PhysicsDrivenWalkingMode");
			return ret;
		}
	};


	// Class Mover.PhysicsMoverManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UPhysicsMoverManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x30(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PhysicsMoverManager");
			return ret;
		}
	};

}
