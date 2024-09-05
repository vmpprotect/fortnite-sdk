#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HoagieRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HoagieRuntime.FortHoagieDriverAnimInstance
	// Inherited from UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x80 (0x900 - 0x880)
	class UFortHoagieDriverAnimInstance : public UFortVehicleOccupantAnimInstance	
	{
	public:
		FVector LeftHandIKPositionOffset; // 0x880(0x18)
		FVector RightHandIKPositionOffset; // 0x898(0x18)
		FRotator LeftHandIKRotationOffset; // 0x8B0(0x18)
		FRotator RightHandIKRotationOffset; // 0x8C8(0x18)
		EFortCardinalDirection BoostCardinalDirection; // 0x8E0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x8E1(0x3) UNKNOWN PROPERTY
		float NormalizedAcceleration; // 0x8E4(0x4)
		float VehicleRoll; // 0x8E8(0x4)
		float VehicleYaw; // 0x8EC(0x4)
		float ForwardSpeed; // 0x8F0(0x4)
		bool bIsMovingAnyDirection; // 0x8F4(0x1)
		bool bIsMovingFastAnyDirection; // 0x8F5(0x1)
		bool bShouldReverse; // 0x8F6(0x1)
		bool bShouldGoBackToIdle; // 0x8F7(0x1)
		bool bTransition_Default_ReverseStart; // 0x8F8(0x1)
		bool bTransition_BoostLoop_Reverse; // 0x8F9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x8FA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoagieRuntime.FortHoagieDriverAnimInstance");
			return ret;
		}
	};


	// Class HoagieRuntime.FortHoagieVehicleAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x1F8 (0x860 - 0x668)
	class UFortHoagieVehicleAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		unsigned char UnknownData00_3[0x130]; // 0x668(0x130) UNKNOWN PROPERTY
		FRotator EngineRotation; // 0x798(0x18)
		FRotator MainRotorRotation; // 0x7B0(0x18)
		FRotator TailRotorRotaton; // 0x7C8(0x18)
		FRotator BoosterFanRotation; // 0x7E0(0x18)
		EFortCardinalDirection BoostCardinalDirection; // 0x7F8(0x1)
		unsigned char UnknownData01_6[0x1B]; // 0x7F9(0x1B) UNKNOWN PROPERTY
		float EngineRotationInterpSpeed; // 0x814(0x4)
		float EngineRotationDuringBoostInterpSpeed; // 0x818(0x4)
		float EngineFlipSpeedThreshold; // 0x81C(0x4)
		float BoostDirectionDeadzone; // 0x820(0x4)
		float EngineFlipDeadzone; // 0x824(0x4)
		float DriverRoll; // 0x828(0x4)
		float DriverYaw; // 0x82C(0x4)
		float VerticalSpeed; // 0x830(0x4)
		float FwdSpeed; // 0x834(0x4)
		float LocalBoostDirection; // 0x838(0x4)
		float YawBlendSpaceInput; // 0x83C(0x4)
		float NormalizedAcceleration; // 0x840(0x4)
		unsigned char UnknownData02_6[0x1]; // 0x844(0x1) UNKNOWN PROPERTY
		bool bShouldHideBlades; // 0x845(0x1)
		bool bIsBoostOnCD; // 0x846(0x1)
		bool bIsBoostReady; // 0x847(0x1)
		bool bIsMovingForward; // 0x848(0x1)
		bool bIsReversing; // 0x849(0x1)
		bool bIsMovingAnyDirection; // 0x84A(0x1)
		bool bIsBoosting; // 0x84B(0x1)
		bool bShouldReverse; // 0x84C(0x1)
		bool bShouldGoBackToIdle; // 0x84D(0x1)
		bool bShouldApplyBoostAdditive; // 0x84E(0x1)
		bool bIsEngineShuttingOff; // 0x84F(0x1)
		bool bTransition_Default_ReverseStart; // 0x850(0x1)
		bool bTransition_BoostLoop_Reverse; // 0x851(0x1)
		unsigned char UnknownData03_7[0xE]; // 0x852(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoagieRuntime.FortHoagieVehicleAnimInstance");
			return ret;
		}
	};


	// Class HoagieRuntime.FortCameraMode_Hoagie
	// Inherited from UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x78 (0x1EC0 - 0x1E48)
	class UFortCameraMode_Hoagie : public UFortCameraMode_AthenaVehicle	
	{
	public:
		float CurrentRollMultiplier; // 0x1E48(0x4)
		float CurrentPitchMultiplier; // 0x1E4C(0x4)
		FVector LastOrigin; // 0x1E50(0x18)
		FVector CurrentInterpSpeed; // 0x1E68(0x18)
		FVector BoostInterpSpeed; // 0x1E80(0x18)
		float BaseRollMultiplier; // 0x1E98(0x4)
		float BasePitchMultiplier; // 0x1E9C(0x4)
		float BoostRollMultiplier; // 0x1EA0(0x4)
		float BoostPitchMultiplier; // 0x1EA4(0x4)
		float BoostRollDampFactor; // 0x1EA8(0x4)
		float BoostRollRecoveryDampFactor; // 0x1EAC(0x4)
		float BoostRecoveryInterpSpeed; // 0x1EB0(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x1EB4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoagieRuntime.FortCameraMode_Hoagie");
			return ret;
		}
	};


	// Class HoagieRuntime.FortHoagieAudioController
	// Inherited from AActor -> UObject
	// Size: 0x68 (0x2F8 - 0x290)
	class AFortHoagieAudioController : public AActor	
	{
	public:
		bool bHighQualityOverride; // 0x290(0x1)
		bool bLocalPlayerInHoagie; // 0x291(0x1)
		bool bCriticalDamageNative; // 0x292(0x1)
		bool bRotorHitNative; // 0x293(0x1)
		bool bIsRotorWashActiveNative; // 0x294(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x295(0x3) UNKNOWN PROPERTY
		float RotorWashRelativeZOffset; // 0x298(0x4)
		TWeakObjectPtr<AFortHoagieVehicle*> Vehicle; // 0x29C(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
		UFortLayeredAudioComponent* EngineAudio; // 0x2A8(0x8)
		UFortLayeredAudioComponent* RotorAudio; // 0x2B0(0x8)
		unsigned char UnknownData02_7[0x40]; // 0x2B8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoagieRuntime.FortHoagieAudioController");
			return ret;
		}

		void Update(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750631AD0(relative to base address)
		void CacheHoagieVehicle(AFortHoagieVehicle* InVehicle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75063130C(relative to base address)
		void CacheAudioComponents(UFortLayeredAudioComponent* InEngine, UFortLayeredAudioComponent* InRotor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750631210(relative to base address)
	};


	// Class HoagieRuntime.FortHoagieVehicle
	// Inherited from AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x650 (0x2760 - 0x2110)
	class AFortHoagieVehicle : public AFortAthenaSKVehicle	
	{
	public:
		FName PassengerCollision; // 0x2110(0x4)
		float CameraBoomDistance; // 0x2114(0x4)
		float CameraBoomHeight; // 0x2118(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x211C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnBoostStateChanged; // 0x2120(0x10)
		FMulticastInlineDelegate OnAltimeterTraceUpdated; // 0x2130(0x10)
		FMulticastInlineDelegate OnCrashingStateEntered; // 0x2140(0x10)
		bool bEngineAudioDisabled; // 0x2150(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2151(0x3) UNKNOWN PROPERTY
		float LiftRumbleTimer; // 0x2154(0x4)
		bool bLiftUp; // 0x2158(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2159(0x7) UNKNOWN PROPERTY
		uint64_t LiftForceFeedbackHandle; // 0x2160(0x8)
		uint64_t PassiveForceFeedbackHandle; // 0x2168(0x8)
		float Theta_Native; // 0x2170(0x4)
		float WashAltAlpha_Native; // 0x2174(0x4)
		float RotorWashTickTimer; // 0x2178(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x217C(0x4) UNKNOWN PROPERTY
		TArray<FVector> RotorTraceArray; // 0x2180(0x10)
		TArray<TEnumAsByte> RotorWashObjectsTypes; // 0x2190(0x10)
		UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs; // 0x21A0(0x8)
		UCurveFloat* RumbleIntensity; // 0x21A8(0x8)
		FFortHeliFlightModel FlightModel; // 0x21B0(0x1E8)
		bool bClearPitchInput; // 0x2398(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x2399(0x3) UNKNOWN PROPERTY
		float BoostTimeLeft; // 0x239C(0x4)
		float BoostBrakingTimeLeft; // 0x23A0(0x4)
		float BoostCooldown; // 0x23A4(0x4)
		float ShutdownTimer; // 0x23A8(0x4)
		float FoliageDestructionTimer; // 0x23AC(0x4)
		float CrashingScrapingTimer; // 0x23B0(0x4)
		float CrashingNotMovingTimer; // 0x23B4(0x4)
		bool bCanSleep; // 0x23B8(0x1)
		bool bHasAppliedCrashDamage; // 0x23B9(0x1)
		bool bOrientedForLanding; // 0x23BA(0x1)
		bool bForceNegativeLift; // 0x23BB(0x1)
		float AltimeterTraceTimer; // 0x23BC(0x4)
		float LastRotorImpulseTime; // 0x23C0(0x4)
		float CriticalExplodeTimer; // 0x23C4(0x4)
		bool bCriticalExplosionPlayed; // 0x23C8(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x23C9(0x3) UNKNOWN PROPERTY
		float TimeWhileCritical; // 0x23CC(0x4)
		float TimeWhileLanding; // 0x23D0(0x4)
		float LiftFromOverrideButton; // 0x23D4(0x4)
		FVector BoostDirection; // 0x23D8(0x18)
		FVector LastRotorSweepDirection; // 0x23F0(0x18)
		FHitResult AltimeterTraceResult; // 0x2408(0xF8)
		int32_t HoagieStateRep; // 0x2500(0x4)
		EHoagieState CurrentHoagieState; // 0x2504(0x4)
		float CurrentRotorSpeed; // 0x2508(0x4)
		float CurrentRotorAngle; // 0x250C(0x4)
		float RotorImpactTraceAngle; // 0x2510(0x4)
		FVehicleGamepadLiftInputs LiftInputs; // 0x2514(0x8)
		unsigned char UnknownData06_6[0x4]; // 0x251C(0x4) UNKNOWN PROPERTY
		TArray<FRotorHit> RotorHits; // 0x2520(0x10)
		TArray<FCachedSeatCollision> CachedSeatCollision; // 0x2530(0x10)
		FVector RotorHitLinearImpulse; // 0x2540(0x18)
		FVector RotorHitAngularImpulse; // 0x2558(0x18)
		UNiagaraComponent* HoagieIdleFX_Native; // 0x2570(0x8)
		UNiagaraComponent* DamageFX_Native; // 0x2578(0x8)
		UNiagaraComponent* RotorWashFX_Native; // 0x2580(0x8)
		UFortHoagieVehicleAnimInstance* HoagieAnimBP_Native; // 0x2588(0x8)
		FName AltimeterTraceSocketName; // 0x2590(0x4)
		FName RotorDamageTraceSocketName; // 0x2594(0x4)
		FName MainRotorCritSocketName; // 0x2598(0x4)
		FName TailRotorCritSocketName; // 0x259C(0x4)
		UAnimMontage* SeatTransition_ToDriver; // 0x25A0(0x8)
		UAnimMontage* SeatTransition_ToPassenger; // 0x25A8(0x8)
		FName RotorTraceProfile; // 0x25B0(0x4)
		FName FoliageOverlapsBoxTag; // 0x25B4(0x4)
		FReplicatedHeliControlState ControlState; // 0x25B8(0x30)
		float CurrentViewDistanceScale; // 0x25E8(0x4)
		float CurrentHLODDistanceOverrideScale; // 0x25EC(0x4)
		float CurrentHLODMaxDrawDistanceScale; // 0x25F0(0x4)
		unsigned char UnknownData07_6[0xC]; // 0x25F4(0xC) UNKNOWN PROPERTY
		FHoagieDeathEffectInfo CachedDeathEffectInfo; // 0x2600(0x160)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoagieRuntime.FortHoagieVehicle");
			return ret;
		}

		void UpdateHoagieAnimBP(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E5180B4(relative to base address)
		void UpdateDamageStateNative(float Damage); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750631B44(relative to base address)
		void ShowCooldownCue(AFortPlayerPawn* Pawn, float duration); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTailRotorRotation(float Degrees); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRotorWashActive(bool bActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMainRotorRotation(float Degrees); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ServerUpdateControlState(FReplicatedHeliControlState InControlState); // Flags: Final|Net|Native|Event|Private|NetServer, Memory Exec: 0x7FF75063199C(relative to base address)
		void OnTickRotors(float RotorAngleDegrees); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartupEnd(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartupBegin(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRotorsStop(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRotorDamagePlayer(FHitResult& Impact); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRotorDamageDealtOuter(FHitResult& Impact); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRotorDamageDealtInner(FHitResult& Impact); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRotorDamageDealt(FHitResult& Impact, bool bInner); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_HoagieState(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75063191C(relative to base address)
		void OnRep_ControlState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnRefueledFromEmpty(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750631908(relative to base address)
		void OnImpactWhileCritical(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnImpactOtherHoagie(FVector& HitLocation, FVector& NormalImpulse); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCritRotor(float Damage, FVector& ImpactLocation, AController* DamageInstigator, AActor* DamageCauser, bool bMainRotor); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostReady(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostFailed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MulticastRotorImpulse(FHitResult RotorHit); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable, Memory Exec: 0x7FF7506317E8(relative to base address)
		bool IsStartingUp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506317CC(relative to base address)
		bool IsShuttingDown(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506317AC(relative to base address)
		bool IsScrapingBottom(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750631788(relative to base address)
		void HoagieOnDisabledChanged(bool bDisabled); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750631708(relative to base address)
		float GetVerticalSpeedKmh(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506316E0(relative to base address)
		FVector GetThrustDirection(bool bWorldSpace); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75063163C(relative to base address)
		float GetStrafeAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506314BC(relative to base address)
		float GetSteerAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750631614(relative to base address)
		float GetShutdownTimeLeft(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506315FC(relative to base address)
		float GetRotorSpeedPercent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506315DC(relative to base address)
		float GetRotorSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506315C4(relative to base address)
		FVector GetRotorCenterPosition(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75063158C(relative to base address)
		float GetRotorAngleDegrees(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750631574(relative to base address)
		float GetMaxBoostCooldown(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750631554(relative to base address)
		float GetMaxAltitude(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750631534(relative to base address)
		float GetLiftAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75063150C(relative to base address)
		bool GetIsEngineOn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506314EC(relative to base address)
		float GetForwardAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506314BC(relative to base address)
		float GetDistanceToGround(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506314A4(relative to base address)
		float GetBoostTimeLeft(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75063148C(relative to base address)
		float GetBoostDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75063146C(relative to base address)
		FVector GetBoostDirection(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750631444(relative to base address)
		float GetBoostCooldown(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75063142C(relative to base address)
		float GetAltitude(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75063140C(relative to base address)
	};


	// Class HoagieRuntime.FortHoagieVehicleConfigs
	// Inherited from UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x238 (0xBB8 - 0x980)
	class UFortHoagieVehicleConfigs : public UFortPhysicsVehicleConfigs	
	{
	public:
		float StrafeForce; // 0x980(0x4)
		float StrafeForceMin; // 0x984(0x4)
		float MaxStrafeSpeedKmh; // 0x988(0x4)
		float StrafeTooFastBrakeForce; // 0x98C(0x4)
		float LandedBrakeForce; // 0x990(0x4)
		float LiftForce; // 0x994(0x4)
		float MaxLiftSpeedKmh; // 0x998(0x4)
		float LiftTooFastBrakeForce; // 0x99C(0x4)
		float LateralDragCoefficient; // 0x9A0(0x4)
		float LateralDragCoefficient2; // 0x9A4(0x4)
		float LiftDragCoefficient; // 0x9A8(0x4)
		float LiftDragCoefficient2; // 0x9AC(0x4)
		float MaxPitchForCameraYaw; // 0x9B0(0x4)
		float MaxCameraYawAngle; // 0x9B4(0x4)
		float CameraYawStiff; // 0x9B8(0x4)
		float CameraYawDamp; // 0x9BC(0x4)
		float CameraYawStrength; // 0x9C0(0x4)
		float UprightStiff; // 0x9C4(0x4)
		float UprightDamp; // 0x9C8(0x4)
		bool bUseVehiclePivotForCameraPitch; // 0x9CC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9CD(0x3) UNKNOWN PROPERTY
		float ThrustTorqueAnglePercent; // 0x9D0(0x4)
		float BoostThrustTorqueAnglePercent; // 0x9D4(0x4)
		float ThrustTorqueStiff; // 0x9D8(0x4)
		float ThrustTorqueDamp; // 0x9DC(0x4)
		float ThrustTorqueMaxAccel; // 0x9E0(0x4)
		float ThrustTorque; // 0x9E4(0x4)
		float YawTorque; // 0x9E8(0x4)
		float YawTorqueDampingSpeed; // 0x9EC(0x4)
		float BoostForce; // 0x9F0(0x4)
		float BoostMaxSpeedKmh; // 0x9F4(0x4)
		float BoostDuration; // 0x9F8(0x4)
		float BoostCooldown; // 0x9FC(0x4)
		float BoostTorqueStiff; // 0xA00(0x4)
		float BoostTorqueDamp; // 0xA04(0x4)
		float AfterBoostBrakingForce; // 0xA08(0x4)
		float AfterBoostBrakingDuration; // 0xA0C(0x4)
		float AfterBoostBrakingMinSpeed; // 0xA10(0x4)
		float PitchAngleRequiredForFullThrust; // 0xA14(0x4)
		float DistanceToGroundForLanding; // 0xA18(0x4)
		float StartupDelay; // 0xA1C(0x4)
		float LandingSequenceDelay; // 0xA20(0x4)
		float RotorsRadius; // 0xA24(0x4)
		float RotorsRadiusInner; // 0xA28(0x4)
		float NoDriverBrakeForce; // 0xA2C(0x4)
		float TimeBetweenRotorDamageTicks; // 0xA30(0x4)
		float AutoLandingForce; // 0xA34(0x4)
		float RotorDamageBoxSweepLength; // 0xA38(0x4)
		float CriticalStateLiftForce; // 0xA3C(0x4)
		float IdleRotationMultiplier; // 0xA40(0x4)
		float LiftPitchDegrees; // 0xA44(0x4)
		float MinAltitudeForIdleNoise; // 0xA48(0x4)
		float DefaultLinearDamp; // 0xA4C(0x4)
		float DefaultAngularDamp; // 0xA50(0x4)
		float LandingLinearDamp; // 0xA54(0x4)
		float LandingAngularDamp; // 0xA58(0x4)
		float LandingLiftAlpha; // 0xA5C(0x4)
		float CriticalStateThrustMultiplier; // 0xA60(0x4)
		float BodyUpDotThresholdForLanding; // 0xA64(0x4)
		int32_t CriticalHealthThreshold; // 0xA68(0x4)
		float DamagePerImpulseWhileCritical; // 0xA6C(0x4)
		float RotorImpulseLinear; // 0xA70(0x4)
		float RotorImpulseAngular; // 0xA74(0x4)
		float RotorImpulseCooldown; // 0xA78(0x4)
		float StartupLift; // 0xA7C(0x4)
		float StartupLiftTime; // 0xA80(0x4)
		float MaxAltitude; // 0xA84(0x4)
		float AltitudeForSpinning; // 0xA88(0x4)
		float RotorMaxSpeed; // 0xA8C(0x4)
		float RotorAccel; // 0xA90(0x4)
		float RotorDecel; // 0xA94(0x4)
		float ExplodeRotorDecel; // 0xA98(0x4)
		float MinRotorSpeedForSkippingStartup; // 0xA9C(0x4)
		float RotorSpeedForStartupLift; // 0xAA0(0x4)
		float CriticalLiftForceDecay; // 0xAA4(0x4)
		float CriticalYawTorqueMin; // 0xAA8(0x4)
		float CriticalYawTorqueMax; // 0xAAC(0x4)
		float CriticalYawTorqueRampDuration; // 0xAB0(0x4)
		float RotorTraceRotationSpeed; // 0xAB4(0x4)
		float RotorTraceBoxSize; // 0xAB8(0x4)
		float RotorTraceBoxHeight; // 0xABC(0x4)
		float MaxCriticalFallForce; // 0xAC0(0x4)
		float BoostFOV; // 0xAC4(0x4)
		float GentleCrashTimeToExplode; // 0xAC8(0x4)
		float CriticalTimeForGentleCrash; // 0xACC(0x4)
		float AutoLandingYawTorque; // 0xAD0(0x4)
		float MinHeightForAutoLandingYawTorque; // 0xAD4(0x4)
		float MinSpeedForScrapingBottom; // 0xAD8(0x4)
		float FallDamageHeightBuffer; // 0xADC(0x4)
		float TimeBetweenRotorPlayerDamage; // 0xAE0(0x4)
		float RotorMoveSpeedRequiredToUpdateTraceDirSqr; // 0xAE4(0x4)
		float FoliageTraceRate; // 0xAE8(0x4)
		float RotorWashTicksPerFrame; // 0xAEC(0x4)
		float CriticalHitRadius; // 0xAF0(0x4)
		float AngleNormalUpForLockMovement; // 0xAF4(0x4)
		float MaxAutoLandingTime; // 0xAF8(0x4)
		float SpeedThresholdForCrashed; // 0xAFC(0x4)
		float CritMultiplier; // 0xB00(0x4)
		float AltitudeForSprings; // 0xB04(0x4)
		float MaxCrashingTime; // 0xB08(0x4)
		float MaxCrashingScrapingTime; // 0xB0C(0x4)
		float MaxCrashingTimeSpentNotMoving; // 0xB10(0x4)
		float LandscapeRotorImpulseMag; // 0xB14(0x4)
		float HealthThresholdForLandscapeRotorImpulse; // 0xB18(0x4)
		float MaxHeightBuffer; // 0xB1C(0x4)
		bool bImpulseOnOuterRotorHitLandscape; // 0xB20(0x1)
		bool bSkipRotorImpulses; // 0xB21(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xB22(0x6) UNKNOWN PROPERTY
		FVector FoliageTraceBoxSize; // 0xB28(0x18)
		FVector WaterBoxSize; // 0xB40(0x18)
		FVector WaterBoxOffset; // 0xB58(0x18)
		FVector RotorOffsetFromActorLocationOnServer; // 0xB70(0x18)
		bool bSkipContactRotations; // 0xB88(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xB89(0x7) UNKNOWN PROPERTY
		FScalableFloat MaxAutoLandHeightWhenOutOfFuel; // 0xB90(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoagieRuntime.FortHoagieVehicleConfigs");
			return ret;
		}
	};

}
