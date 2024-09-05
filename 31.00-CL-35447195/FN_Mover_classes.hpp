#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Mover
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		float TryMoveToFallAlongSurface(FMovingComponentSet& MovingComps, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult, FMovementRecord& MoveRecord); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414665358
		bool IsValidLandingSpot(FMovingComponentSet& MovingComps, FVector& Location, FHitResult& Hit, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414665278
		FProposedMove ComputeControlledFreeMove(FFreeMoveParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414665198
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
		UClass BackendClass; // 0xF0(0x8)
		TMap MovementModes; // 0xF8(0x50)
		FName StartingMovementMode; // 0x148(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		TArray Transitions; // 0x150(0x10)
		TArray PersistentSyncStateDataTypes; // 0x160(0x10)
		UObject InputProducer; // 0x170(0x8)
		UMovementMixer MovementMixer; // 0x178(0x8)
		unsigned char UnknownData06_6[0x28]; // 0x180(0x28) UNKNOWN PROPERTY
		USceneComponent UpdatedComponent; // 0x1A8(0x8)
		UPrimitiveComponent UpdatedCompAsPrimitive; // 0x1B0(0x8)
		USceneComponent PrimaryVisualComponent; // 0x1B8(0x8)
		unsigned char UnknownData07_6[0x128]; // 0x1C0(0x128) UNKNOWN PROPERTY
		TArray SharedSettings; // 0x2E8(0x10)
		bool bHasGravityOverride; // 0x2F8(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		FVector GravityAccelOverride; // 0x300(0x18)
		FPlanarConstraint PlanarConstraint; // 0x318(0x38)
		bool bSupportsKinematicBasedMovement; // 0x350(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		UMovementModeStateMachine ModeFSM; // 0x358(0x8)
		UMoverBlackboard SimBlackboard; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverComponent");
			return ret;
		}

		bool TryGetFloorCheckHitResult(FHitResult& OutHitResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414666F58
		void SetPlanarConstraint(FPlanarConstraint& InConstraint); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414666E78
		void SetGravityOverride(bool bOverrideGravity, FVector GravityAcceleration); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414666D98
		bool RemoveMovementMode(FName ModeName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414666CB8
		void QueueNextMode(FName DesiredModeName, bool bShouldReenter); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414666BD8
		void PhysicsVolumeChanged(APhysicsVolume NewVolume); // Flags: Native|Protected 0x7FF414666AF8
		void OnBeginOverlap(UPrimitiveComponent OverlappedComp, AActor Other, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Native|Public|HasOutParms 0x7FF414666A18
		void K2_QueueLayeredMove(int32_t& MoveAsRawData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414666938
		void K2_QueueInstantMovementEffect(int32_t& EffectAsRawData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414666858
		void K2_FindActiveLayeredMove(bool& DidSucceed, int32_t& TargetAsRawBytes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414666778
		bool HasValidCachedState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414666698
		bool HasValidCachedInputCmd(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146665B8
		void HandleImpact(FMoverOnImpactParams& ImpactParams); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146664D8
		FVector GetVelocity(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146663F8
		FVector GetUpDirection(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|Const 0x7FF414666318
		FRotator GetTargetOrientation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414666238
		FMoverSyncState GetSyncState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414666158
		UMoverBlackboard GetSimBlackboard(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414666078
		FPlanarConstraint GetPlanarConstraint(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414665F98
		FName GetMovementModeName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414665EB8
		UBaseMovementMode GetMovementMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414665DD8
		FVector GetMovementIntent(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414665CF8
		FName GetMovementBaseBoneName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414665C18
		UPrimitiveComponent GetMovementBase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414665B38
		FMoverInputCmdContext GetLastInputCmd(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414665A58
		FVector GetGravityAcceleration(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|Const 0x7FF414665978
		TArray GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414665898
		UObject FindSharedSettings_Mutable_BP(UClass SharedSetting); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146657B8
		UObject FindSharedSettings_BP(UClass SharedSetting); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146656D8
		UBaseMovementMode FindMovementMode(UClass MovementMode); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146655F8
		bool AddMovementModeFromObject(FName ModeName, UBaseMovementMode MovementMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414665518
		UBaseMovementMode AddMovementModeFromClass(FName ModeName, UClass MovementMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414665438
	};


	// Class Mover.CharacterMoverComponent
	// Inherited from UMoverComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x370 - 0x368)
	class UCharacterMoverComponent : public UMoverComponent	
	{
	public:
		bool bHandleJump; // 0x368(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x369(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.CharacterMoverComponent");
			return ret;
		}

		void OnMoverPreSimulationTick(FMoverTimeStep& TimeStep, FMoverInputCmdContext& InputCmd); // Flags: Native|Protected|HasOutParms 0x7FF414667658
		bool Jump(); // Flags: Native|Public|BlueprintCallable 0x7FF414667578
		bool IsSwimming(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414667498
		bool IsSlopeSliding(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146673B8
		bool IsOnGround(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146672D8
		bool IsFalling(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146671F8
		bool IsAirborne(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414667118
		bool CanActorJump(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414667038
	};


	// Class Mover.CommonLegacyMovementSettings
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UCommonLegacyMovementSettings : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FName GroundMovementModeName; // 0x30(0x4)
		FName AirMovementModeName; // 0x34(0x4)
		FName SwimmingMovementModeName; // 0x38(0x4)
		float MaxWalkSlopeCosine; // 0x3C(0x4)
		float FloorSweepDistance; // 0x40(0x4)
		float MaxStepHeight; // 0x44(0x4)
		float MaxSpeed; // 0x48(0x4)
		float GroundFriction; // 0x4C(0x4)
		bool bUseSeparateBrakingFriction : 1; // 0x50:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float BrakingFriction; // 0x54(0x4)
		float BrakingFrictionFactor; // 0x58(0x4)
		float Deceleration; // 0x5C(0x4)
		float Acceleration; // 0x60(0x4)
		float TurningRate; // 0x64(0x4)
		float TurningBoost; // 0x68(0x4)
		bool bIgnoreBaseRotation; // 0x6C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
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

		void SetPlaneConstraintOrigin(FPlanarConstraint& Constraint, FVector PlaneOrigin); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414667B98
		void SetPlanarConstraintNormal(FPlanarConstraint& Constraint, FVector PlaneNormal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414667AB8
		void SetPlanarConstraintEnabled(FPlanarConstraint& Constraint, bool bEnabled); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146679D8
		FVector ConstrainNormalToPlane(FPlanarConstraint& Constraint, FVector Normal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4146678F8
		FVector ConstrainLocationToPlane(FPlanarConstraint& Constraint, FVector Location); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414667818
		FVector ConstrainDirectionToPlane(FPlanarConstraint& Constraint, FVector Direction, bool bMaintainMagnitude); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414667738
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

		bool IsHitSurfaceWalkable(FHitResult& Hit, float MaxWalkSlopeCosine); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414667C78
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

		float TryWalkToSlideAlongSurface(FMovingComponentSet& MovingComps, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord, float MaxWalkSlopeCosine, float MaxStepHeight); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414667FF8
		FVector ComputeDeflectedMoveOntoRamp(FVector& OrigMoveDelta, FHitResult& RampHitResult, float MaxWalkSlopeCosine, bool bHitFromLineTrace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414667F18
		FProposedMove ComputeControlledGroundMove(FGroundMoveParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414667E38
		bool CanStepUpOnHitSurface(FHitResult& Hit); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414667D58
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

		FRotator GetTurn(FRotator TargetOrientation, FMoverTickStartData& FullStartState, FMoverDefaultSyncState& MoverState, FMoverTimeStep& TimeStep, FProposedMove& ProposedMove, UMoverBlackboard SimBlackboard); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF4146680D8
	};


	// Class Mover.LinearTurnGenerator
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULinearTurnGenerator : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		float HeadingRate; // 0x30(0x4)
		float PitchRate; // 0x34(0x4)
		float RollRate; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		float HalfLifeSeconds; // 0x30(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		UMoverComponent TargetMoverComp; // 0x38(0x8)

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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

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

		void SetMoveIntent(FCharacterDefaultInputs& Inputs, FVector& WorldDirectionIntent); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414668618
		FVector GetVelocityFromSyncState(FMoverDefaultSyncState& SyncState); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414668538
		FRotator GetOrientationFromSyncState(FMoverDefaultSyncState& SyncState); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414668458
		FVector GetMoveDirectionIntentFromSyncState(FMoverDefaultSyncState& SyncState); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414668378
		FVector GetMoveDirectionIntentFromInputs(FCharacterDefaultInputs& Inputs); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414668298
		FVector GetLocationFromSyncState(FMoverDefaultSyncState& SyncState); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4146681B8
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
		unsigned char UnknownData02_6[0x1]; // 0xAB(0x1) UNKNOWN PROPERTY
		float HistoryTrackingSeconds; // 0xAC(0x4)
		int32_t HistorySamplesPerSecond; // 0xB0(0x4)
		unsigned char UnknownData03_7[0x64]; // 0xB4(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverDebugComponent");
			return ret;
		}

		void SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414668A78
		void OnMovementSimTick(FMoverTimeStep& TimeStep); // Flags: Final|Native|Private|HasOutParms 0x7FF414668998
		void OnMovementSimRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep); // Flags: Final|Native|Private|HasOutParms 0x7FF4146688B8
		void OnHistoryTrackingRollback(FMoverTimeStep& NewTimeStep, FMoverTimeStep& InvalidatedTimeStep); // Flags: Final|Native|Protected|HasOutParms 0x7FF4146687D8
		TArray GetPastTrajectory(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF4146686F8
	};


	// Class Mover.MoverDeveloperSettings
	// Inherited from UDeveloperSettingsBackedByCVars -> UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UMoverDeveloperSettings : public UDeveloperSettingsBackedByCVars	
	{
	public:
		int32_t MaxTimesToRefundSubstep; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x130]; // 0xA0(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.MoverNetworkPhysicsLiaisonComponent");
			return ret;
		}

		void OnComponentPhysicsStateChanged(UPrimitiveComponent ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Protected 0x7FF414668B58
	};


	// Class Mover.MoverNetworkPredictionLiaisonComponent
	// Inherited from UNetworkPredictionComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class UMoverNetworkPredictionLiaisonComponent : public UNetworkPredictionComponent	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x290(0x20) UNKNOWN PROPERTY

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

		void ProduceInput(int32_t SimTimeMs, FMoverInputCmdContext& InputCmdResult); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414668C38
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

		void K2_GetDataFromCollection(bool& DidSucceed, FMoverDataCollection& Collection, int32_t& TargetAsRawBytes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414668ED8
		void K2_AddDataToCollection(FMoverDataCollection& Collection, int32_t& SourceAsRawBytes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414668DF8
		void ClearDataFromCollection(FMoverDataCollection& Collection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414668D18
	};


	// Class Mover.BaseMovementModeTransition
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UBaseMovementModeTransition : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.BaseMovementModeTransition");
			return ret;
		}

		void K2_OnTrigger(FSimulationTickParams& Params); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414669098
		FTransitionEvalResult K2_OnEvaluate(FSimulationTickParams& Params); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414668FB8
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

		void UpdateWaterSplineData(FUpdateWaterSplineDataParams& UpdateWaterSplineDataParams, FWaterCheckResult& OutWaterResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414669258
		FProposedMove ComputeControlledWaterMove(FWaterMoveParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414669178
	};


	// Class Mover.BaseMovementMode
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UBaseMovementMode : public UObject	
	{
	public:
		TArray SharedSettingsClasses; // 0x28(0x10)
		TArray Transitions; // 0x38(0x10)
		FGameplayTagContainer GameplayTags; // 0x48(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.BaseMovementMode");
			return ret;
		}

		void K2_OnUnregistered(); // Flags: Event|Protected|BlueprintEvent 0x7FF414669A38
		FMoverTickEndData K2_OnSimulationTick(FSimulationTickParams& Params); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414669958
		void K2_OnRegistered(FName ModeName); // Flags: Event|Protected|BlueprintEvent 0x7FF414669878
		FProposedMove K2_OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414669798
		void K2_OnDeactivate(); // Flags: Event|Protected|BlueprintEvent 0x7FF4146696B8
		void K2_OnActivate(); // Flags: Event|Protected|BlueprintEvent 0x7FF4146695D8
		UMoverComponent GetMoverComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146694F8
		UMoverBlackboard GetBlackboard_Mutable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414669418
		UMoverBlackboard GetBlackboard(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414669338
	};


	// Class Mover.FallingMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0x38 (0xA8 - 0x70)
	class UFallingMode : public UBaseMovementMode	
	{
	public:
		FMulticastInlineDelegate OnLanded; // 0x70(0x10)
		bool bCancelVerticalSpeedOnLanding; // 0x80(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		float AirControlPercentage; // 0x84(0x4)
		float FallingDeceleration; // 0x88(0x4)
		float OverTerminalSpeedFallingDeceleration; // 0x8C(0x4)
		float TerminalMovementPlaneSpeed; // 0x90(0x4)
		bool bShouldClampTerminalVerticalSpeed; // 0x94(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		float VerticalFallingDeceleration; // 0x98(0x4)
		float TerminalVerticalSpeed; // 0x9C(0x4)
		unsigned char UnknownData05_7[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.FallingMode");
			return ret;
		}

		void ProcessLanded(FFloorCheckResult& FloorResult, FVector& Velocity, FRelativeBaseInfo& BaseInfo, FMoverTickEndData& TickEndData); // Flags: Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414669CD8
		void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414669BF8
		void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414669B18
	};


	// Class Mover.FlyingMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UFlyingMode : public UBaseMovementMode	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.FlyingMode");
			return ret;
		}

		void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414669E98
		void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414669DB8
	};


	// Class Mover.SwimmingMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0xB0 (0x120 - 0x70)
	class USwimmingMode : public UBaseMovementMode	
	{
	public:
		FSwimmingControlSettings SurfaceSwimmingWaterControlSettings; // 0x70(0xA8)
		unsigned char UnknownData01_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.SwimmingMode");
			return ret;
		}

		void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF41466A058
		void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414669F78
	};


	// Class Mover.WalkingMode
	// Inherited from UBaseMovementMode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UWalkingMode : public UBaseMovementMode	
	{
	public:
		UObject TurnGenerator; // 0x70(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.WalkingMode");
			return ret;
		}

		void SetTurnGeneratorClass(UClass TurnGeneratorClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41466A3D8
		void OnSimulationTick(FSimulationTickParams& Params, FMoverTickEndData& OutputState); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF41466A2F8
		void OnGenerateMove(FMoverTickStartData& StartState, FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41466A218
		UObject GetTurnGenerator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF41466A138
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

		bool TransformWorldRotatorToBased(UPrimitiveComponent MovementBase, FName BoneName, FRotator WorldSpaceRotator, FRotator& OutLocalRotator); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B0F8
		bool TransformWorldLocationToBased(UPrimitiveComponent MovementBase, FName BoneName, FVector WorldSpaceLocation, FVector& OutLocalLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B018
		bool TransformWorldDirectionToBased(UPrimitiveComponent MovementBase, FName BoneName, FVector WorldSpaceDirection, FVector& OutLocalDirection); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466AF38
		void TransformRotatorToWorld(FQuat BaseQuat, FRotator LocalRotator, FRotator& OutWorldSpaceRotator); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466AE58
		void TransformRotatorToLocal(FQuat BaseQuat, FRotator WorldSpaceRotator, FRotator& OutLocalRotator); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466AD78
		void TransformLocationToWorld(FVector BasePos, FQuat BaseQuat, FVector LocalLocation, FVector& OutLocationWorldSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466AC98
		void TransformLocationToLocal(FVector BasePos, FQuat BaseQuat, FVector WorldSpaceLocation, FVector& OutLocalLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466ABB8
		void TransformDirectionToWorld(FQuat BaseQuat, FVector LocalDirection, FVector& OutDirectionWorldSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466AAD8
		void TransformDirectionToLocal(FQuat BaseQuat, FVector WorldSpaceDirection, FVector& OutLocalDirection); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466A9F8
		bool TransformBasedRotatorToWorld(UPrimitiveComponent MovementBase, FName BoneName, FRotator LocalRotator, FRotator& OutWorldSpaceRotator); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466A918
		bool TransformBasedLocationToWorld(UPrimitiveComponent MovementBase, FName BoneName, FVector LocalLocation, FVector& OutLocationWorldSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466A838
		bool TransformBasedDirectionToWorld(UPrimitiveComponent MovementBase, FName BoneName, FVector LocalDirection, FVector& OutDirectionWorldSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466A758
		bool IsBaseSimulatingPhysics(UPrimitiveComponent MovementBase); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41466A678
		bool IsADynamicBase(UPrimitiveComponent MovementBase); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41466A598
		bool GetMovementBaseTransform(UPrimitiveComponent MovementBase, FName BoneName, FVector& OutLocation, FQuat& OutQuat); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466A4B8
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

		bool TrySafeMoveUpdatedComponent(FMovingComponentSet& MovingComps, FVector& Delta, FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport, FMovementRecord& MoveRecord); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466BB78
		float TryMoveToSlideAlongSurface(FMovingComponentSet& MovingComps, FVector& Delta, float PctOfDeltaToMove, FQuat Rotation, FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466BA98
		bool IsExceedingMaxSpeed(FVector& Velocity, float InMaxSpeed); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B9B8
		FVector ConstrainToPlane(FVector& Vector, FPlane& MovementPlane, bool bMaintainMagnitude); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B8D8
		FVector ComputeVelocityFromPositions(FVector& FromPos, FVector& ToPos, float DeltaSeconds); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B7F8
		FVector ComputeVelocityFromGravity(FVector& GravityAccel, float DeltaSeconds); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B718
		FVector ComputeVelocity(FComputeVelocityParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B638
		FVector ComputeSlideDelta(FMovingComponentSet& MovingComps, FVector& Delta, float PctOfDeltaToMove, FVector& Normal, FHitResult& Hit); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B558
		FVector ComputeDirectionIntent(FVector& MoveInput, EMoveInputType MoveInputType); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B478
		FVector ComputeCombinedVelocity(FComputeCombinedVelocityParams& InParams); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B398
		FRotator ComputeAngularVelocity(FRotator& From, FRotator& To, float DeltaSeconds, float TurningRateLimit); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B2B8
		bool CanEscapeGravity(FVector& PriorVelocity, FVector& NewVelocity, FVector& GravityAccel, float DeltaSeconds); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41466B1D8
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

		void OnMoverMontageEnded(FName IgnoredNotifyName); // Flags: Final|Native|Protected 0x7FF41466BD38
		UPlayMoverMontageCallbackProxy CreateProxyObjectForPlayMoverMontage(UMoverComponent InMoverComponent, UAnimMontage MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41466BC58
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
		TMap Modes; // 0x28(0x50)
		UImmediateMovementModeTransition QueuedModeTransition; // 0x78(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x80(0x28) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		float TwistTorqueLimit; // 0xB0(0x4)
		float SwingTorqueLimit; // 0xB4(0x4)
		float TargetHeight; // 0xB8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData02_3[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		float TargetHeight; // 0x128(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0x80(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData03_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x20]; // 0x30(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Mover.PhysicsMoverManager");
			return ret;
		}
	};

}
