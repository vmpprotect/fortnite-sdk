#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NevadaRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NevadaRuntime.FortNevadaVehicleAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xE8 (0x750 - 0x668)
	class UFortNevadaVehicleAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		AFortNevadaVehicle* NevadaVehicle; // 0x668(0x8)
		bool bTractorBeam_IsAttached; // 0x670(0x1)
		bool bTractorBeam_IsCharging; // 0x671(0x1)
		bool bTractorBeam_IsActive; // 0x672(0x1)
		bool bTractorBeam_IsInactive; // 0x673(0x1)
		bool bTractorBeam_IsOn; // 0x674(0x1)
		bool bTractorBeam_HasTarget; // 0x675(0x1)
		bool bTractorBeam_ShouldApplyCustomAO; // 0x676(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x677(0x1) UNKNOWN PROPERTY
		float TractorBeam_LookAtPitch; // 0x678(0x4)
		float TractorBeam_LookAtYaw; // 0x67C(0x4)
		float LeanLeftRight; // 0x680(0x4)
		float LeanForwardBackward; // 0x684(0x4)
		float LeanValue; // 0x688(0x4)
		float PreviousLeanValue; // 0x68C(0x4)
		float VelocityZValue; // 0x690(0x4)
		float LeanDelta; // 0x694(0x4)
		bool bTurnAgain; // 0x698(0x1)
		bool bHadDriver; // 0x699(0x1)
		bool bJustGotDriver; // 0x69A(0x1)
		bool bJustLostDriver; // 0x69B(0x1)
		bool bWasBoosting; // 0x69C(0x1)
		bool bIsBoosting; // 0x69D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x69E(0x2) UNKNOWN PROPERTY
		int32_t PreviousBoostCount; // 0x6A0(0x4)
		int32_t BoostCount; // 0x6A4(0x4)
		bool bIsBoostingAgain; // 0x6A8(0x1)
		bool bIsMoving; // 0x6A9(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x6AA(0x2) UNKNOWN PROPERTY
		float WingsPlayRate; // 0x6AC(0x4)
		float TractorBeamAlpha; // 0x6B0(0x4)
		float AimPitch; // 0x6B4(0x4)
		float AimYaw; // 0x6B8(0x4)
		bool bIsFiringCannon; // 0x6BC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x6BD(0x3) UNKNOWN PROPERTY
		float DistanceFromGround; // 0x6C0(0x4)
		bool bIsLanding; // 0x6C4(0x1)
		bool bHasLanded; // 0x6C5(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x6C6(0x2) UNKNOWN PROPERTY
		float LandingAlpha; // 0x6C8(0x4)
		bool bNotLandingMode; // 0x6CC(0x1)
		bool bHadBattery; // 0x6CD(0x1)
		bool bOutOfBattery; // 0x6CE(0x1)
		bool bJustGotBattery; // 0x6CF(0x1)
		bool bLaunchToDepart; // 0x6D0(0x1)
		bool bLaunchToIdle; // 0x6D1(0x1)
		bool bIsPartsLanding; // 0x6D2(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x6D3(0x1) UNKNOWN PROPERTY
		FName TractorBeamSocketName; // 0x6D4(0x4)
		FName TractorBeamAimCurveName; // 0x6D8(0x4)
		FName NevadaVehicleInterruptName; // 0x6DC(0x4)
		FName LandingTraceRightName; // 0x6E0(0x4)
		FName LandingTraceLeftName; // 0x6E4(0x4)
		float MaxLeanDeltaInterruptMagnitude; // 0x6E8(0x4)
		float MinForwardSpeedToBeMoving; // 0x6EC(0x4)
		float MinForwardSpeedToPlayWings; // 0x6F0(0x4)
		float MinWingsPlayRate; // 0x6F4(0x4)
		float MaxWingsPlayRate; // 0x6F8(0x4)
		float WingsPlayRateInterpSpeed; // 0x6FC(0x4)
		TWeakObjectPtr<UAnimMontage*> CannonFiringMontage; // 0x700(0x20)
		float LandingGearTraceLength; // 0x720(0x4)
		unsigned char UnknownData06_7[0x2C]; // 0x724(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaRuntime.FortNevadaVehicleAnimInstance");
			return ret;
		}
	};


	// Class NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
	// Inherited from UFortPlayerAnimInstance_OctopusDriver -> UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x188 (0x17E0 - 0x1658)
	class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver	
	{
	public:
		AFortNevadaVehicle* NevadaVehicle; // 0x1658(0x8)
		float AnimLeftRight; // 0x1660(0x4)
		float AnimForwardBackward; // 0x1664(0x4)
		FVector RootAttachmentLoc; // 0x1668(0x18)
		FRotator RootAttachmentRot; // 0x1680(0x18)
		int32_t BoostCount; // 0x1698(0x4)
		int32_t PreviousBoostCount; // 0x169C(0x4)
		bool bIsBoostingAgain; // 0x16A0(0x1)
		bool bIsMoving; // 0x16A1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x16A2(0x2) UNKNOWN PROPERTY
		float MinVehicleVelocityToBeMoving; // 0x16A4(0x4)
		FName DriverSocketName; // 0x16A8(0x4)
		FName RightHandAttachmentSocketName; // 0x16AC(0x4)
		FName LeftHandAttachmentSocketName; // 0x16B0(0x4)
		FName RightFootAttachmentSocketName; // 0x16B4(0x4)
		FName LeftFootAttachementSocketName; // 0x16B8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x16BC(0x4) UNKNOWN PROPERTY
		FRotator RightHandRotationOffset; // 0x16C0(0x18)
		FRotator LeftHandRotationOffset; // 0x16D8(0x18)
		FRotator RightFootRotationOffset; // 0x16F0(0x18)
		FRotator LeftFootRotationOffset; // 0x1708(0x18)
		FVector RootAttachmentOffset; // 0x1720(0x18)
		unsigned char UnknownData02_7[0xA8]; // 0x1738(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaRuntime.FortPlayerAnimInstance_NevadaDriver");
			return ret;
		}
	};


	// Class NevadaRuntime.FortCameraMode_Nevada
	// Inherited from UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x78 (0x1EC0 - 0x1E48)
	class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x1E48(0x28) UNKNOWN PROPERTY
		FVector TractorBeamCameraOffset; // 0x1E70(0x18)
		float TractorBeamCameraLerpTime; // 0x1E88(0x4)
		float TractorBeamCameraExtraPitch; // 0x1E8C(0x4)
		float TractorBeamInactiveCameraExtraPitch; // 0x1E90(0x4)
		float TractorBeamCameraPositionResetDelay; // 0x1E94(0x4)
		float MinPitchForOffset; // 0x1E98(0x4)
		float MaxPitchForOffset; // 0x1E9C(0x4)
		FVector ExtraOffset; // 0x1EA0(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x1EB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaRuntime.FortCameraMode_Nevada");
			return ret;
		}
	};


	// Class NevadaRuntime.FortNevadaAudioController
	// Inherited from AActor -> UObject
	// Size: 0xC8 (0x358 - 0x290)
	class AFortNevadaAudioController : public AActor	
	{
	public:
		FVector2D SpeedRangeMap; // 0x290(0x10)
		FVector2D TurningRangeMap; // 0x2A0(0x10)
		FVector2D AcceleratingRangeMap; // 0x2B0(0x10)
		FVector2D BrakingRangeMap; // 0x2C0(0x10)
		FVector2D PassByRangeMap; // 0x2D0(0x10)
		FVector2D LFORangeMap; // 0x2E0(0x10)
		AFortNevadaVehicle* Vehicle; // 0x2F0(0x8)
		UFortLayeredAudioComponent* LayeredAudioComponent; // 0x2F8(0x8)
		float SpeedParamValue; // 0x300(0x4)
		float SpeedParamValuePrev; // 0x304(0x4)
		float AcceleratingParamValue; // 0x308(0x4)
		float BrakingParamValue; // 0x30C(0x4)
		FVector ForwardVector; // 0x310(0x18)
		FVector ForwardVectorPrev; // 0x328(0x18)
		float TurningParamValue; // 0x340(0x4)
		float PassByParamValue; // 0x344(0x4)
		float LocallyControlledParamValue; // 0x348(0x4)
		float LFOParamValue; // 0x34C(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x350(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaRuntime.FortNevadaAudioController");
			return ret;
		}

		void Update(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512A618C(relative to base address)
		void Init(AFortNevadaVehicle* InVehicle); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512A5834(relative to base address)
		AFortNevadaVehicle GetVehicleActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750020678(relative to base address)
		void CacheReferences(UFortLayeredAudioComponent* InLayeredAudioComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512A553C(relative to base address)
		void BP_Update(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_Init(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class NevadaRuntime.FortNevadaVehicle
	// Inherited from AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x600 (0x2710 - 0x2110)
	class AFortNevadaVehicle : public AFortAthenaSKVehicle	
	{
	public:
		FNevadaState ServerReplicatedState; // 0x2110(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x2124(0x4) UNKNOWN PROPERTY
		UFortNevadaVehicleConfigs* FortNevadaVehicleConfigs; // 0x2128(0x8)
		UClass* FortNevadaAudioControllerClass; // 0x2130(0x8)
		UChildActorComponent* AudioControllerActor; // 0x2138(0x8)
		AFortNevadaAudioController* FortNevadaAudioController; // 0x2140(0x8)
		FVehicleGamepadLiftInputs LiftInputs; // 0x2148(0x8)
		float LastBatteryRegenTickTime; // 0x2150(0x4)
		bool bBoostThrust; // 0x2154(0x1)
		bool bBoostDrag; // 0x2155(0x1)
		bool bBoostInputReleased; // 0x2156(0x1)
		bool bUseTractorBeamUprightForce; // 0x2157(0x1)
		bool bDeadBattery; // 0x2158(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2159(0x3) UNKNOWN PROPERTY
		float TractorBeamExtraLengthForExtents; // 0x215C(0x4)
		FVector CrashingDesiredUp; // 0x2160(0x18)
		float BoostStartTime; // 0x2178(0x4)
		float BoostPitchAlpha; // 0x217C(0x4)
		float BoostChargeProgress; // 0x2180(0x4)
		int32_t BoostChargesAvailable; // 0x2184(0x4)
		FVector CachedBoostMoveDir; // 0x2188(0x18)
		float CurrentStateStartTime; // 0x21A0(0x4)
		float HeightAtLandingTime; // 0x21A4(0x4)
		float CrashingScrapingTime; // 0x21A8(0x4)
		float CrashingNotMovingTimer; // 0x21AC(0x4)
		float AltimeterTraceHitDistance; // 0x21B0(0x4)
		float TractorBeamAppliedForceMagnitude; // 0x21B4(0x4)
		float AnimParamDriverSeatLeftRight; // 0x21B8(0x4)
		float AnimParamDriverSeatForwardBack; // 0x21BC(0x4)
		bool bForceNegativeLift; // 0x21C0(0x1)
		bool bForcePositiveLift; // 0x21C1(0x1)
		bool bInitialLift; // 0x21C2(0x1)
		ENevadaFlightStates CurrentVehicleState; // 0x21C3(0x1)
		unsigned char UnknownData02_6[0x4C]; // 0x21C4(0x4C) UNKNOWN PROPERTY
		TWeakObjectPtr<ALandscapeProxy*> CachedLandscapeProxy; // 0x2210(0x8)
		UClass* PassengerCameraModeClass; // 0x2218(0x8)
		bool bTractorBeamChargeStarted; // 0x2220(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x2221(0x7) UNKNOWN PROPERTY
		FTowhookParams TowhookParams; // 0x2228(0xD0)
		UClass* AttachedPawnHiddenVehicle; // 0x22F8(0x8)
		TWeakObjectPtr<UPrimitiveComponent*> TractorBeamAttachedPrimitive; // 0x2300(0x8)
		AFortAthenaVehicle* SpawnedTractorBeamVictimVehicle; // 0x2308(0x8)
		TWeakObjectPtr<UPrimitiveComponent*> PreviousTractorBeamAttachedPrimitive; // 0x2310(0x8)
		TArray<AActor*> TractorBeamTargetedActors; // 0x2318(0x10)
		TArray<AActor*> PreviouslyTargetedActors; // 0x2328(0x10)
		AActor* TractorBeamAttachedActor; // 0x2338(0x8)
		AActor* TractorBeamTargetedActor; // 0x2340(0x8)
		FVector TractorBeamTargetPosition; // 0x2348(0x18)
		unsigned char UnknownData04_6[0x1]; // 0x2360(0x1) UNKNOWN PROPERTY
		bool bBeamButtonReleased; // 0x2361(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x2362(0x6) UNKNOWN PROPERTY
		TArray<TEnumAsByte> TractorBeamObjectsTypes; // 0x2368(0x10)
		FGameplayTagContainer DisallowedBeamTags; // 0x2378(0x20)
		FGameplayTagContainer AlwaysAllowedBeamTags; // 0x2398(0x20)
		unsigned char UnknownData06_6[0x98]; // 0x23B8(0x98) UNKNOWN PROPERTY
		UNiagaraSystem* TractorBeamFX_Unattached; // 0x2450(0x8)
		UNiagaraSystem* TractorBeamFX_Attached; // 0x2458(0x8)
		UNiagaraComponent* BeamPSC; // 0x2460(0x8)
		unsigned char UnknownData07_6[0x50]; // 0x2468(0x50) UNKNOWN PROPERTY
		TEnumAsByte<ETractorBeamState> TractorBeamState; // 0x24B8(0x1)
		unsigned char UnknownData08_6[0x27]; // 0x24B9(0x27) UNKNOWN PROPERTY
		float TractorBeamDeactivationTimestamp; // 0x24E0(0x4)
		float TractorBeamDisruptedTimestamp; // 0x24E4(0x4)
		unsigned char UnknownData09_6[0x80]; // 0x24E8(0x80) UNKNOWN PROPERTY
		float CockpitHealth; // 0x2568(0x4)
		float Native_CockpitEnabled; // 0x256C(0x4)
		float LastCockpitHealthTickTime; // 0x2570(0x4)
		float LastCockpitDamageTime; // 0x2574(0x4)
		float CockpitDissolveStartTime; // 0x2578(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x257C(0x4) UNKNOWN PROPERTY
		FScalableFloat CockpitMaxHealth; // 0x2580(0x28)
		FScalableFloat CockpitHealthTickRate; // 0x25A8(0x28)
		FScalableFloat CockpitHealthPerTick; // 0x25D0(0x28)
		FScalableFloat CockpitRegenDelay; // 0x25F8(0x28)
		UCurveFloat* CockpitHitMaterialWobble; // 0x2620(0x8)
		float LastDamageAlpha; // 0x2628(0x4)
		bool bDissolvingCockpit; // 0x262C(0x1)
		bool bRestoringCockpit; // 0x262D(0x1)
		bool bCockpitWobble; // 0x262E(0x1)
		unsigned char UnknownData11_6[0x1]; // 0x262F(0x1) UNKNOWN PROPERTY
		UStaticMeshComponent* NativeComp_ShieldMesh; // 0x2630(0x8)
		UMaterialInstanceDynamic* Native_CockpitMaterial; // 0x2638(0x8)
		UMaterialInstanceDynamic* Native_EnergyRingMatInstance; // 0x2640(0x8)
		UMaterialInstanceDynamic* Native_EnergyFieldMatInstance; // 0x2648(0x8)
		UAudioComponent* NativeComp_DamageStateLastLife; // 0x2650(0x8)
		UAudioComponent* NativeComp_DamageState; // 0x2658(0x8)
		FVector Native_LastHitLocation; // 0x2660(0x18)
		FVector Native_LastHitNormal; // 0x2678(0x18)
		UNiagaraComponent* NativeComp_DamageStateFX; // 0x2690(0x8)
		UNiagaraComponent* NativeComp_HologramScreen; // 0x2698(0x8)
		UNiagaraComponent* NativeComp_SpeedLines; // 0x26A0(0x8)
		UMaterialInterface* Native_EnergyRingMat; // 0x26A8(0x8)
		UMaterialInterface* Native_EnergyFieldMat; // 0x26B0(0x8)
		UNiagaraSystem* NativeSys_DamageStateFX; // 0x26B8(0x8)
		UNiagaraSystem* NativeSys_CockpitDestroyed; // 0x26C0(0x8)
		USoundBase* CockpitDamagedSound; // 0x26C8(0x8)
		USoundBase* CockpitDestroyedSound; // 0x26D0(0x8)
		USoundBase* CockpitRespawnSound; // 0x26D8(0x8)
		USoundBase* Native_DamageStateSound; // 0x26E0(0x8)
		USoundBase* Native_DamageStateLastLifeSound; // 0x26E8(0x8)
		UForceFeedbackEffect* CockpitDeactivatedForceFeedback; // 0x26F0(0x8)
		UClass* CockpitDestroyedCamShake; // 0x26F8(0x8)
		TArray<UClass*> TractorBeamDisallowedClasses; // 0x2700(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaRuntime.FortNevadaVehicle");
			return ret;
		}

		void SetTractorBeamInactive(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512A6178(relative to base address)
		void SetTractorBeamEnabled(bool bEnabled); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		void SetCannonEnabled(bool bEnabled); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		void SetAttachedPawnAddedVelocity(FVector& AddedVelocity); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512A60B4(relative to base address)
		void OnTractorBeamDetached(AActor* DetachedActor, FVector& LastBeamPosition); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamDeactivated(FVector& LastBeamPosition); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamChargeStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamAttached(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTractorBeamActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetedActorChanged(AActor* NewTargetedActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartDescend(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartAscend(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_TractorBeamState(TEnumAsByte<ETractorBeamState> PreviousState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512A6028(relative to base address)
		void OnRep_TractorBeamChargeStarted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512A5FD8(relative to base address)
		void OnRep_TractorBeamAttached(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512A5FC4(relative to base address)
		void OnRep_TargetedActorChanged(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512A5F88(relative to base address)
		void OnRep_ReplicatedTargetedActors(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512A5F04(relative to base address)
		void OnRep_NevadaState(FNevadaState& PrevState); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7512A5E64(relative to base address)
		void OnRebootStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRebootFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOutOfBattery(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNewVehicleState(ENevadaFlightStates NewVehicleState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCrashingStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCrashedImpact(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostChargeRefilled(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBatteryRegen(float Newcharge); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAttachedActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF7512A5A64(relative to base address)
		void OnAttachedActorDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512A59E8(relative to base address)
		void NativeToggleCockpit(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512A5968(relative to base address)
		bool IsTractorBeamDisrupted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A58F8(relative to base address)
		bool IsTractorBeamAttached(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A58D4(relative to base address)
		bool IsTractorBeamActive(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A58B4(relative to base address)
		FVector GetTractorBeamAttachLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A57FC(relative to base address)
		int32_t GetNumRebootsAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A57E4(relative to base address)
		float GetEnergyCanonChargePercent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A57BC(relative to base address)
		void GetDriverSeatRotationAnimParams(float& OutLeftRight, float& OutForwardBack); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512A56E0(relative to base address)
		ENevadaFlightStates GetCurrentVehicleState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A56C8(relative to base address)
		float GetBoostChargeTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A567C(relative to base address)
		int32_t GetBoostChargesAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A56B0(relative to base address)
		float GetBoostChargeProgress(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A565C(relative to base address)
		float GetBatteryCharge(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A5634(relative to base address)
		AFortNevadaAudioController GetAudioController(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A561C(relative to base address)
		void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		void DisruptTractorBeam(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512A55C8(relative to base address)
		void AddPhysicsImpulseToTractorBeamAttachedActor(FVector& Impulse, FName BoneName, bool bVelChange); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512A533C(relative to base address)
	};


	// Class NevadaRuntime.FortNevadaVehicleConfigs
	// Inherited from UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x4A8 (0xE28 - 0x980)
	class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs	
	{
	public:
		FNevadaMoveModeConfig BaseMovement; // 0x980(0x14)
		FNevadaMoveModeConfig BoostMovement; // 0x994(0x14)
		FNevadaMoveModeConfig ChargingMovement; // 0x9A8(0x14)
		FDampedSpringConfig UprightSpringForce; // 0x9BC(0xC)
		float DebaseLaunchspeed; // 0x9C8(0x4)
		float MaxHeight; // 0x9CC(0x4)
		float MinHeight; // 0x9D0(0x4)
		float OnEnterPitchAlpha; // 0x9D4(0x4)
		float FallDamageHeightBuffer; // 0x9D8(0x4)
		float TurningForce; // 0x9DC(0x4)
		float ThrustRotationAlpha; // 0x9E0(0x4)
		float PitchDrag; // 0x9E4(0x4)
		float YawDrag; // 0x9E8(0x4)
		float RollDrag; // 0x9EC(0x4)
		float BoostThrustDuration; // 0x9F0(0x4)
		float BoostDragDuration; // 0x9F4(0x4)
		int32_t NumBoostCharges; // 0x9F8(0x4)
		float BoostChargeDuration; // 0x9FC(0x4)
		float BoostChargeDelay; // 0xA00(0x4)
		float BoostDragFinishSpeed; // 0xA04(0x4)
		float TractorBeamRadius; // 0xA08(0x4)
		float TractorBeamWithTargetRadius; // 0xA0C(0x4)
		FScalableFloat TractorBeamSweepLength; // 0xA10(0x28)
		FScalableFloat TractorBeamChargeTime; // 0xA38(0x28)
		FScalableFloat TractorBeamDurationTime; // 0xA60(0x28)
		FScalableFloat TractorBeamTossImpulseStrengthForward; // 0xA88(0x28)
		FScalableFloat TractorBeamTossImpulseStrengthUpward; // 0xAB0(0x28)
		float TractorBeamShutdownTime; // 0xAD8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xADC(0x4) UNKNOWN PROPERTY
		FScalableFloat TractorBeamTurnOffDamage; // 0xAE0(0x28)
		FScalableFloat AllowTractorBeamAIPawns; // 0xB08(0x28)
		float TractorBeamBreakForceMagnitude; // 0xB30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB34(0x4) UNKNOWN PROPERTY
		FScalableFloat TractorBeamActive; // 0xB38(0x28)
		FScalableFloat TractorBeamCooldown; // 0xB60(0x28)
		FScalableFloat TractorBeamDisruptionCooldown; // 0xB88(0x28)
		FName TractorBeamSocket; // 0xBB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xBB4(0x4) UNKNOWN PROPERTY
		FVector TractorBeamAttachPositionOffset; // 0xBB8(0x18)
		FRigidBodyErrorCorrection TractorBeamTargetOverridenErrorCorrection; // 0xBD0(0x34)
		float VictimPitchDrag; // 0xC04(0x4)
		float VictimYawDrag; // 0xC08(0x4)
		float VictimRollDrag; // 0xC0C(0x4)
		FDampedSpringConfig TractorBeamVictimUprightForce; // 0xC10(0xC)
		int32_t NumReboots; // 0xC1C(0x4)
		int32_t NumRebootsDefault; // 0xC20(0x4)
		float MaxCrashingTime; // 0xC24(0x4)
		float MaxCrashingScrapingTime; // 0xC28(0x4)
		float MaxCrashingTimeSpentNotMoving; // 0xC2C(0x4)
		float SpeedThresholdForCrashed; // 0xC30(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC34(0x4) UNKNOWN PROPERTY
		FScalableFloat RebootDuration; // 0xC38(0x28)
		FScalableFloat RebootDelay; // 0xC60(0x28)
		float LandingTraceRange; // 0xC88(0x4)
		float DesiredLandingDistance; // 0xC8C(0x4)
		float LandingDelay_Max; // 0xC90(0x4)
		float LandingDelay_Min; // 0xC94(0x4)
		float HeightForMinLandingDelay; // 0xC98(0x4)
		float HeightForMaxLandingDelay; // 0xC9C(0x4)
		float LandingPitchAlphaMax; // 0xCA0(0x4)
		float LandingPitchAlphaMin; // 0xCA4(0x4)
		float DriverSeatRotationAnimBlendSpeed; // 0xCA8(0x4)
		float CrashingDesiredUpLerpFactor; // 0xCAC(0x4)
		float CrashedLinearDrag; // 0xCB0(0x4)
		float LandedDragCoef; // 0xCB4(0x4)
		float LandedDragCoef2; // 0xCB8(0x4)
		float LandedMaxDragSpeed; // 0xCBC(0x4)
		float CrashedAngularDragMultiplier; // 0xCC0(0x4)
		float BoostFOV; // 0xCC4(0x4)
		float ExtraTraceInteractRange; // 0xCC8(0x4)
		float AntiGravityMult; // 0xCCC(0x4)
		float InitialLiftDuration; // 0xCD0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xCD4(0x4) UNKNOWN PROPERTY
		FScalableFloat BatteryCostDuringFlight; // 0xCD8(0x28)
		FScalableFloat BatteryRegenDelay; // 0xD00(0x28)
		FScalableFloat BatteryRegenTickRate; // 0xD28(0x28)
		FScalableFloat BatteryRegenAmount; // 0xD50(0x28)
		FScalableFloat MaxBattery; // 0xD78(0x28)
		FScalableFloat MinBatteryForFlight; // 0xDA0(0x28)
		TArray<FName> CockpitShapeNames; // 0xDC8(0x10)
		FScalableFloat CockpitDamageMult; // 0xDD8(0x28)
		FScalableFloat CockpitHealth; // 0xE00(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NevadaRuntime.FortNevadaVehicleConfigs");
			return ret;
		}
	};

}
