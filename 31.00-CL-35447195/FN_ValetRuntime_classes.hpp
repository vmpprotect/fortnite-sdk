#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ValetRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ValetRuntime.SportsCarVehicleAnimInstance
	// Inherited from UVehicleBouncyChassisAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x8C0 - 0x8A8)
	class USportsCarVehicleAnimInstance : public UVehicleBouncyChassisAnimInstance	
	{
	public:
		float TriggerSpoiler; // 0x8A8(0x4)
		float TriggerMirrorL; // 0x8AC(0x4)
		float TriggerMirrorR; // 0x8B0(0x4)
		bool bHasTireMod; // 0x8B4(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x8B5(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.SportsCarVehicleAnimInstance");
			return ret;
		}
	};


	// Class ValetRuntime.FortValetMountedGunAnimInstance
	// Inherited from UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x28 (0x5D0 - 0x5A8)
	class UFortValetMountedGunAnimInstance : public UFortAnimInstance	
	{
	public:
		AFortDagwoodVehicle VehicleActor; // 0x5A8(0x8)
		bool bIsUsingMountedGun; // 0x5B0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5B1(0x3) UNKNOWN PROPERTY
		int32_t SeatIndexCached; // 0x5B4(0x4)
		float AimingYaw; // 0x5B8(0x4)
		float AimingPitch; // 0x5BC(0x4)
		AFortWeaponRangedForVehicle MountedWeapon; // 0x5C0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x5C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortValetMountedGunAnimInstance");
			return ret;
		}
	};


	// Class ValetRuntime.FortValetPassengerAnimInstance
	// Inherited from UFortVehicleOccupantAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x90 (0x910 - 0x880)
	class UFortValetPassengerAnimInstance : public UFortVehicleOccupantAnimInstance	
	{
	public:
		FCachedAnimRelevancyData IntoVehicleCachedData; // 0x880(0x14)
		FCachedAnimRelevancyData OutOfVehicleCachedData; // 0x894(0x14)
		TWeakObjectPtr DagwoodVehicleInstance; // 0x8A8(0x20)
		float TurnYaw; // 0x8C8(0x4)
		float InTime; // 0x8CC(0x4)
		float OutTime; // 0x8D0(0x4)
		float NegativeTurnYaw; // 0x8D4(0x4)
		bool bIsReloading; // 0x8D8(0x1)
		bool bIsTargeting; // 0x8D9(0x1)
		bool bIsFiring; // 0x8DA(0x1)
		bool bIsUsingConsumable; // 0x8DB(0x1)
		bool bIsInAction; // 0x8DC(0x1)
		bool bIsPassengerBackLeft; // 0x8DD(0x1)
		bool bIsThrowConsumable; // 0x8DE(0x1)
		bool bIsLeaning; // 0x8DF(0x1)
		bool bIsControllingTurret; // 0x8E0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x8E1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer PawnControllingTurretTags; // 0x8E8(0x20)
		unsigned char UnknownData03_7[0x8]; // 0x908(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortValetPassengerAnimInstance");
			return ret;
		}
	};


	// Class ValetRuntime.FortValetSedanAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x680 - 0x668)
	class UFortValetSedanAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		unsigned char UnknownData03_3[0x4]; // 0x668(0x4) UNKNOWN PROPERTY
		bool bHasTireMod; // 0x66C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x66D(0x3) UNKNOWN PROPERTY
		float TrunkDamageAlpha; // 0x670(0x4)
		float MirrorLeftDamageAlpha; // 0x674(0x4)
		float MirrorRightDamageAlpha; // 0x678(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x67C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortValetSedanAnimInstance");
			return ret;
		}
	};


	// Class ValetRuntime.DagwoodNetworkPhysicsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xF60 (0x1000 - 0xA0)
	class UDagwoodNetworkPhysicsComponent : public UActorComponent	
	{
	public:
		FNetworkPhysicsState NetworkPhysicsState; // 0xA0(0x90)
		FMulticastInlineDelegate OnGeneratedLocalInputCmd; // 0x130(0x10)
		FDagwoodManagedState ReplicatedManagedState; // 0x140(0x4E8)
		FDagwoodManagedState InManagedState; // 0x628(0x4E8)
		FDagwoodManagedState OutManagedState; // 0xB10(0x4E8)
		unsigned char UnknownData01_7[0x8]; // 0xFF8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.DagwoodNetworkPhysicsComponent");
			return ret;
		}

		void SetState_GT(FDagwoodInPersistent& In); // Flags: Final|Native|Public|HasOutParms 0x7FF414026AA0
		void SetPendingInputCmd(FFortDagwoodCmd& In); // Flags: Final|Native|Public|HasOutParms 0x7FF4140269C0
		void OnGeneratedLocalInputCmd__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140268E0
		FDagwoodState_PT GetState_PT(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140262C0
		FDagwoodInPersistent GetState_GT(); // Flags: Final|Native|Public|Const 0x7FF414025D60
		FFortDagwoodCmd GetPendingInputCmd(); // Flags: Final|Native|Public|Const 0x7FF414025BC0
	};


	// Class ValetRuntime.NetworkPhysicsManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x60E8 (0x6118 - 0x30)
	class UNetworkPhysicsManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x60E8]; // 0x30(0x60E8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.NetworkPhysicsManager");
			return ret;
		}
	};


	// Class ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x50 (0x388 - 0x338)
	class AFortAthenaMutator_OverrideValetVehicleParameters : public AFortAthenaMutator	
	{
	public:
		FScalableFloat MinInitialVehicleFuelPercent; // 0x338(0x28)
		FScalableFloat MaxInitialVehicleFuelPercent; // 0x360(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters");
			return ret;
		}

		void OnPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContainerTags); // Flags: Final|Native|Public|HasOutParms 0x7FF414BB82D8
	};


	// Class ValetRuntime.FortCameraMode_Dagwood
	// Inherited from UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x48 (0x1D60 - 0x1D18)
	class UFortCameraMode_Dagwood : public UFortCameraMode_AthenaVehicle	
	{
	public:
		float HorizontalCameraSpaceOffsetWhileTurning; // 0x1D18(0x4)
		float SteeringAngleForMaxHorizontalOffset; // 0x1D1C(0x4)
		float InAirVerticalOffset; // 0x1D20(0x4)
		float AirOffsetDampFactor; // 0x1D24(0x4)
		float SpeedAlphaDampFactor; // 0x1D28(0x4)
		float TimeInAirRequiredForVertOffset; // 0x1D2C(0x4)
		float VehicleBasePitch; // 0x1D30(0x4)
		float HorizOffsetInterpSpeed; // 0x1D34(0x4)
		float HorizOffsetInterpSpeedRecovery; // 0x1D38(0x4)
		float CurrentSpeedAlpha; // 0x1D3C(0x4)
		float CurrentVerticalOffset; // 0x1D40(0x4)
		float CurrentHorizontalOffset; // 0x1D44(0x4)
		float TimeInAir; // 0x1D48(0x4)
		float PreviousSpeed; // 0x1D4C(0x4)
		float AppliedPitch; // 0x1D50(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1D54(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortCameraMode_Dagwood");
			return ret;
		}
	};


	// Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
	// Inherited from UFortContextualTutorial -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UFortContextualTutorial_VehicleValetLowFuel : public UFortContextualTutorial	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortContextualTutorial_VehicleValetLowFuel");
			return ret;
		}

		void HandleVehicleStateChanged(AFortPlayerPawn PlayerPawn, AActor NewVehicle, AActor OldVehicle); // Flags: Final|Native|Private 0x7FF414BB8498
		void HandleStartSkydivingForActivation(); // Flags: Final|Native|Private 0x7FF414BB83B8
	};


	// Class ValetRuntime.FortDagwoodModsConfigs
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortDagwoodModsConfigs : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortDagwoodModsConfigs");
			return ret;
		}
	};


	// Class ValetRuntime.FortDagwoodVehicle
	// Inherited from AFortAthenaSKMotorVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x6E8 (0x2870 - 0x2188)
	class AFortDagwoodVehicle : public AFortAthenaSKMotorVehicle	
	{
	public:
		unsigned char UnknownData21_3[0x48]; // 0x2188(0x48) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStartHandbrakeDelegate; // 0x21D0(0x10)
		FMulticastInlineDelegate OnStopHandbrakeDelegate; // 0x21E0(0x10)
		FMulticastInlineDelegate OnStartHandBrakeCatchupForceDelegate; // 0x21F0(0x10)
		UClass HardLandingCameraShake; // 0x2200(0x8)
		UClass DriverCamShakeClass; // 0x2208(0x8)
		UClass HandBrakeCamShakeClass; // 0x2210(0x8)
		EVehicleClass VehicleClass; // 0x2218(0x1)
		unsigned char UnknownData22_6[0x3]; // 0x2219(0x3) UNKNOWN PROPERTY
		float FadeDelay; // 0x221C(0x4)
		float FadeDuration; // 0x2220(0x4)
		float MinBrakeForceForSkid; // 0x2224(0x4)
		float MinForwardSpeedForSkid; // 0x2228(0x4)
		FGameplayTag SpeedLinesCueTag; // 0x222C(0x4)
		float FadeStartTime; // 0x2230(0x4)
		unsigned char UnknownData23_6[0x4]; // 0x2234(0x4) UNKNOWN PROPERTY
		UDagwoodNetworkPhysicsComponent NetworkPhysicsComponent; // 0x2238(0x8)
		FMulticastInlineDelegate OnTireModHealthChanged; // 0x2240(0x10)
		float RechargeableBoostPercent; // 0x2250(0x4)
		unsigned char UnknownData24_6[0x4]; // 0x2254(0x4) UNKNOWN PROPERTY
		UFortSplatterSourceComponent SplatterSourceComp; // 0x2258(0x8)
		bool bEnableNativizedTick; // 0x2260(0x1)
		bool bShouldApplyPowerFunctionToMobileInput; // 0x2261(0x1)
		unsigned char UnknownData25_6[0x7E]; // 0x2262(0x7E) UNKNOWN PROPERTY
		TArray PassengerLeanSockets; // 0x22E0(0x10)
		TArray PassngerLeanRelativeOffsets; // 0x22F0(0x10)
		UClass PassengerCameraModeClass; // 0x2300(0x8)
		UClass PassengerCameraModeClass_ADS; // 0x2308(0x8)
		TArray WheelSocketNames; // 0x2310(0x10)
		UFortDagwoodVehicleConfigs FortDagwoodVehicleConfigs; // 0x2320(0x8)
		TArray RearShocks; // 0x2328(0x10)
		FGameplayTagContainer OffroadEnvironmentDamageTags; // 0x2338(0x20)
		FGameplayTagContainer FireDamageTags; // 0x2358(0x20)
		FVector NativeWheelScaleRear; // 0x2378(0x18)
		FVector NativeWheelScaleFront; // 0x2390(0x18)
		FVector NativeTireScaleRear; // 0x23A8(0x18)
		FVector NativeTireScaleFront; // 0x23C0(0x18)
		bool bTireSmokeActive; // 0x23D8(0x1)
		bool bBoostFailed; // 0x23D9(0x1)
		bool bCanBoostPitch; // 0x23DA(0x1)
		unsigned char UnknownData26_6[0x5]; // 0x23DB(0x5) UNKNOWN PROPERTY
		uint64_t AccelForceFeedbackHandle; // 0x23E0(0x8)
		uint64_t SkidForceFeedbackHandle; // 0x23E8(0x8)
		uint64_t BrakeForceFeedbackHandle; // 0x23F0(0x8)
		uint64_t HandBrakeForceFeedbackHandle; // 0x23F8(0x8)
		bool bSpeedLinesActive; // 0x2400(0x1)
		unsigned char UnknownData27_6[0x1F]; // 0x2401(0x1F) UNKNOWN PROPERTY
		FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties; // 0x2420(0x70)
		TArray ServerRepWheelData; // 0x2490(0x10)
		unsigned char UnknownData28_6[0x50]; // 0x24A0(0x50) UNKNOWN PROPERTY
		FVector FlipYawForwardTargetDirection; // 0x24F0(0x18)
		FVector FlipYawOriginalForward; // 0x2508(0x18)
		EVehicleWheelLocations LastPoppedTire; // 0x2520(0x1)
		unsigned char UnknownData29_6[0x3]; // 0x2521(0x3) UNKNOWN PROPERTY
		float RoadTopSpeedMultiplier; // 0x2524(0x4)
		float CurrentBumpiness; // 0x2528(0x4)
		float CurrentForwardAcceleration; // 0x252C(0x4)
		float PreviousTurnAlpha; // 0x2530(0x4)
		float CurrentCameraAssistStrength; // 0x2534(0x4)
		float LostGripTime; // 0x2538(0x4)
		float LostGripRightAlpha; // 0x253C(0x4)
		float HandbrakeTime; // 0x2540(0x4)
		float HandbrakeStartTime; // 0x2544(0x4)
		float HandbrakeEndTime; // 0x2548(0x4)
		float FlipYawMult; // 0x254C(0x4)
		float FlipTimer; // 0x2550(0x4)
		float FlipExplodeTimer; // 0x2554(0x4)
		float FlipPushForceTimer; // 0x2558(0x4)
		float FlipAirTimer; // 0x255C(0x4)
		float FlipLanding; // 0x2560(0x4)
		float FlipStartTime; // 0x2564(0x4)
		float LastFlipDamageTime; // 0x2568(0x4)
		float PreFlipControlLossTimer; // 0x256C(0x4)
		bool bDidCinematicFlip; // 0x2570(0x1)
		bool bCanCinematicFlip; // 0x2571(0x1)
		bool bInPopTireVeer; // 0x2572(0x1)
		bool bInFlipRecovery; // 0x2573(0x1)
		bool bExplodeAfterFlip; // 0x2574(0x1)
		bool bLostGrip; // 0x2575(0x1)
		bool bApplyHandbrakeCatchupForce; // 0x2576(0x1)
		bool bDidHandbrakeCatchup; // 0x2577(0x1)
		bool bInFlipRoll; // 0x2578(0x1)
		bool bInFlipYaw; // 0x2579(0x1)
		bool bInFlipPitch; // 0x257A(0x1)
		bool bFlipDidLeaveGround; // 0x257B(0x1)
		bool bBreakBuildingsIfBlockingLeaningPassenger; // 0x257C(0x1)
		unsigned char UnknownData30_6[0x3]; // 0x257D(0x3) UNKNOWN PROPERTY
		float LeanBreakTimeAccumulator; // 0x2580(0x4)
		float LeanBreakCheckInterval; // 0x2584(0x4)
		TArray SeatToWindowShapeNames; // 0x2588(0x10)
		ULegacyCameraShake OffroadCameraShakeInstance; // 0x2598(0x8)
		ULegacyCameraShake DriverCameraShakeInstance; // 0x25A0(0x8)
		ULegacyCameraShake AccelCameraShakeInstance; // 0x25A8(0x8)
		ULegacyCameraShake HandBrakeCameraShakeInstance; // 0x25B0(0x8)
		UNiagaraComponent NativeComp_RoadAndExhaust; // 0x25B8(0x8)
		UNiagaraComponent NativeComp_TireSkid; // 0x25C0(0x8)
		UNiagaraComponent NativeComp_Damage; // 0x25C8(0x8)
		UNiagaraComponent NativeComp_SpeedLines; // 0x25D0(0x8)
		UNiagaraSystem NativeSys_TireExhaust; // 0x25D8(0x8)
		UNiagaraSystem NativeSys_SpeedLines; // 0x25E0(0x8)
		UNiagaraSystem NativeSys_TireSkid; // 0x25E8(0x8)
		TArray RoadAndExhaustSurfaceTypeArrayForFX; // 0x25F0(0x10)
		FName RoadAndExhaustPeelOutColorIndexName; // 0x2600(0x4)
		FName BrakeLightsName; // 0x2604(0x4)
		unsigned char UnknownData31_6[0x10]; // 0x2608(0x10) UNKNOWN PROPERTY
		TArray FakeTireStates; // 0x2618(0x10)
		EPoppedTireReactionStates ActivePoppedTireReaction; // 0x2628(0x1)
		EPoppedTireReactionStates ReplicatedPoppedTireReaction; // 0x2629(0x1)
		unsigned char UnknownData32_6[0x2]; // 0x262A(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr ValetAudio; // 0x262C(0x8)
		unsigned char UnknownData33_6[0x4]; // 0x2634(0x4) UNKNOWN PROPERTY
		TArray TireMeshes; // 0x2638(0x10)
		TArray FakeTireMeshes; // 0x2648(0x10)
		unsigned char UnknownData34_6[0x4]; // 0x2658(0x4) UNKNOWN PROPERTY
		bool bIsInoperable; // 0x265C(0x1)
		unsigned char UnknownData35_6[0x3]; // 0x265D(0x3) UNKNOWN PROPERTY
		int32_t RandomSeed; // 0x2660(0x4)
		FRandomStream RandStream; // 0x2664(0x8)
		bool bHasTraction; // 0x266C(0x1)
		bool bStartHandBrakeCatchupForce; // 0x266D(0x1)
		unsigned char UnknownData36_6[0x102]; // 0x266E(0x102) UNKNOWN PROPERTY
		bool bSelfDestructEnabled : 1; // 0x2770:0(0x1)
		bool bClientUsesSelfDestructTimer : 1; // 0x2770:1(0x1)
		unsigned char UnknownData37_5[0x7]; // 0x2771(0x7) UNKNOWN PROPERTY
		UStaticMesh TireBootMesh; // 0x2778(0x8)
		TMap MapSelfDestructActionDefForUI; // 0x2780(0x50)
		float MinimumTimeBetweenSelfDestructPromptChanges; // 0x27D0(0x4)
		unsigned char UnknownData38_6[0x38]; // 0x27D4(0x38) UNKNOWN PROPERTY
		float BoostEmissiveOnDuration; // 0x280C(0x4)
		float BoostEmissiveOffDuration; // 0x2810(0x4)
		unsigned char UnknownData39_6[0xC]; // 0x2814(0xC) UNKNOWN PROPERTY
		UCurveFloat BoostCameraFoVCurve; // 0x2820(0x8)
		UCurveFloat BoostCameraRumbleCurve; // 0x2828(0x8)
		bool bIsBoostCameraActive; // 0x2830(0x1)
		unsigned char UnknownData40_6[0x3]; // 0x2831(0x3) UNKNOWN PROPERTY
		float BoostCameraFoVRumbleTweenDuration; // 0x2834(0x4)
		float BoostCameraMaxFoV; // 0x2838(0x4)
		float BoostCameraRumbleDuration; // 0x283C(0x4)
		unsigned char UnknownData41_7[0x30]; // 0x2840(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortDagwoodVehicle");
			return ret;
		}

		void StartFade(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBB2F8
		void SetWheelAndTireParam(TEnumAsByte Flag, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBB218
		void SetValetAudioController(AFortValetAudioController ValetAudio); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BBB138
		void SetRuntimeSpringsInfoOnServer(FRuntimeSpringsInfo& SpringsInfo); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BBB058
		void SetRuntimeGravityOnServer(float GravMult); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BBAF78
		void SetRuntimeFuelInfoOnServer(FRuntimeFuelInfo& FuelInfo); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BBAE98
		void SetRuntimeDriveInfoOnServer(float MaxIncline, float MaxTilt); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BBADB8
		void SetRuntimeBoostInfoOnServer(FRuntimeBoostInfo& BoostInfo); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BBACD8
		void SetNativeCollisionHitHapticsConfig(FDagwoodCollisionHitHapticsConfig& InCollisionHapticsConfig); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BBABF8
		void SetNativeCollisionHitFxConfig(FDagwoodCollisionHitFXConfig& InCollisionHitFxConfig); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BBAB18
		void SetDamageInfoOnServer(bool bInDamageFriendlyVehicles, bool bInDamageOtherVehicles, bool bInDamageOwnVehicle, bool bInDamageAllowedFromOtherVehicle); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414BBAA38
		void ServerSetFadeDuration(float NewFadeDuration); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BBA958
		void ServerSelfDestructActivated(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BBA878
		void SelfDestructCleanup(); // Flags: Final|Native|Public 0x7FF414BBA798
		void OnTickAudioFade(float FadeParam); // Flags: Event|Public|BlueprintEvent 0x7FF414BBA6B8
		void OnStopHandbrake(); // Flags: Event|Public|BlueprintEvent 0x7FF414BBA5D8
		void OnStartHandbrake(); // Flags: Event|Public|BlueprintEvent 0x7FF414BBA4F8
		void OnServerAltInteract(AFortPawn Pawn); // Flags: Event|Public|BlueprintEvent 0x7FF414BBA418
		void OnRep_ServerRepWheelData(TArray& PrevWheelData); // Flags: Final|Native|Private|HasOutParms 0x7FF414BBA338
		void OnRep_RandSeed(); // Flags: Final|Native|Private 0x7FF414BBA258
		void OnRep_PoppedTireReaction(); // Flags: Final|Native|Private 0x7FF414BBA178
		void OnRep_IsInoperable(); // Flags: Final|Native|Private 0x7FF414BBA098
		void OnRep_FakeTires(TArray& PrevTireStates); // Flags: Final|Native|Private|HasOutParms 0x7FF414BB9FB8
		void OnRep_DagwoodRuntimeModifiers(FDagwoodRuntimeModifiers& PrevMods); // Flags: Final|Native|Private|HasOutParms 0x7FF414BB9ED8
		void OnInoperableChanged(bool bInoperable); // Flags: Event|Public|BlueprintEvent 0x7FF414BB9DF8
		void OnHoldSelfDestructStopped(AFortPawn DriverPawn); // Flags: Event|Protected|BlueprintEvent 0x7FF414BB9D18
		void OnHoldSelfDestructStarted(AFortPawn DriverPawn, float ExitDuration); // Flags: Event|Protected|BlueprintEvent 0x7FF414BB9C38
		void OnFlipImpactDamage(); // Flags: Event|Public|BlueprintEvent 0x7FF414BB9B58
		void OnDestroyedPropFromCollision(ABuildingActor BuildingHitActor); // Flags: Event|Protected|BlueprintEvent 0x7FF414BB9A78
		void OnClientBeginAltInteract(AFortPawn Pawn); // Flags: Event|Public|BlueprintEvent 0x7FF414BB9998
		void OnBoostReady(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BB98B8
		void OnBoostFailed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BB97D8
		void NativePlayCollisionHitHaptics(TArray& ValidPlayerControllers, float HitMagnitude, FDagwoodCollisionHitHapticsConfig& HapticsConfig); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BB96F8
		void NativePlayCollisionHitFX(AActor HitActor, FVector& HitLocation, FVector& HitNormal, float HitMagnitude, FDagwoodCollisionHitFXConfig& HitFXConfig); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BB9618
		float NativeCalculateAccelRumbleIntensity(float MaxIntensity); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BB9538
		void MakeOperable(bool bAddGas); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB9458
		void MakeInoperable(); // Flags: Native|Public|BlueprintCallable 0x7FF414BB9378
		bool IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB9298
		bool IsOnLandscape(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB91B8
		void HandleCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BB90D8
		ETireSurfaces GetTireSurface(EVehicleWheelLocations TireIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB8FF8
		float GetTireHealthPercent(EVehicleWheelLocations TireIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB8F18
		float GetMiddleAxleForwardAdjust(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BB8E38
		FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB8D58
		float GetBumpiness(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BB8C78
		bool ForwardOrReverseInputPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB8B98
		void CleanupLoopingPooledFX(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414BB8AB8
		void CacheDagwoodConfigs(); // Flags: Final|Native|Protected 0x7FF414BB89D8
		void BoostEmissiveTween(bool bTurnOn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB88F8
		void BoostCameraFoVRumble(bool bReverse, FLatentActionInfo LatentInfo); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB8818
		void ApplyRuntimeModifiers(); // Flags: Final|Native|Private 0x7FF414BB8738
		void ApplyParams(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB8658
		void AddRuntimeGearsInfoOnServer(FRuntimeGearInfo& GearInfo); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BB8578
	};


	// Class ValetRuntime.FortDagwoodVehicleAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x68 (0x6D0 - 0x668)
	class UFortDagwoodVehicleAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		AFortDagwoodVehicle Dagwood; // 0x668(0x8)
		FVector GlassScale_FR; // 0x670(0x18)
		FVector GlassScale_FL; // 0x688(0x18)
		FVector GlassScale_BR; // 0x6A0(0x18)
		FVector GlassScale_BL; // 0x6B8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortDagwoodVehicleAnimInstance");
			return ret;
		}
	};


	// Class ValetRuntime.FortDagwoodVehicleConfigs
	// Inherited from UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x598 (0xF18 - 0x980)
	class UFortDagwoodVehicleConfigs : public UFortPhysicsVehicleConfigs	
	{
	public:
		float VehiclePowerSlideFrontMultiplier; // 0x980(0x4)
		float VehiclePowerSlideRearMultiplier; // 0x984(0x4)
		float IceVehiclePowerSlideFrontMultiplier; // 0x988(0x4)
		float IceVehiclePowerSlideRearMultiplier; // 0x98C(0x4)
		float MudVehiclePowerSlideFrontMultiplier; // 0x990(0x4)
		float MudVehiclePowerSlideRearMultiplier; // 0x994(0x4)
		bool bUseAccelerationLean; // 0x998(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x999(0x3) UNKNOWN PROPERTY
		float HandbrakeGripAngle; // 0x99C(0x4)
		float HandbrakeGripAngleRecovery; // 0x9A0(0x4)
		float HandbrakeSpeedForGripLoss; // 0x9A4(0x4)
		float MinSlipDuration; // 0x9A8(0x4)
		float HandbrakeLateralFriction; // 0x9AC(0x4)
		float HandbrakeSteeringMultiplier; // 0x9B0(0x4)
		float HandbrakeFrictionDampFactor; // 0x9B4(0x4)
		float RestoreTractionDampFactor; // 0x9B8(0x4)
		float HandBrakeForce; // 0x9BC(0x4)
		float HandbrakeForceNoAccel; // 0x9C0(0x4)
		bool bUseHandbrakeToDrift; // 0x9C4(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x9C5(0x3) UNKNOWN PROPERTY
		float DriftMinSpeedSteeringAngle; // 0x9C8(0x4)
		float DriftMaxSpeedSteeringAngle; // 0x9CC(0x4)
		float DriftFrontLateralFrictionMultiplier; // 0x9D0(0x4)
		float DriftRearLateralFrictionMultiplier; // 0x9D4(0x4)
		float DirtRoadTopSpeedMultiplier; // 0x9D8(0x4)
		float DirtRoadFrontLateralFriction; // 0x9DC(0x4)
		float DirtRoadRearLateralFriction; // 0x9E0(0x4)
		float DirtRoadAccelForceMultiplier; // 0x9E4(0x4)
		float OffRoadTopSpeedMultiplier; // 0x9E8(0x4)
		float OffRoadFrontLateralFriction; // 0x9EC(0x4)
		float OffRoadRearLateralFriction; // 0x9F0(0x4)
		float OffRoadPushForceMultiplier; // 0x9F4(0x4)
		float OffroadDamageImpactForceMin; // 0x9F8(0x4)
		float OffroadDamageImpactForceMax; // 0x9FC(0x4)
		float OffroadImpactDamageMin; // 0xA00(0x4)
		float OffroadImpactDamageMax; // 0xA04(0x4)
		float MinSpeedForOffroadHandling; // 0xA08(0x4)
		float SnowFrontLateralFriction; // 0xA0C(0x4)
		float SnowRearLateralFriction; // 0xA10(0x4)
		float IceFrontLateralFriction; // 0xA14(0x4)
		float IceRearLateralFriction; // 0xA18(0x4)
		float MudFrontLateralFriction; // 0xA1C(0x4)
		float MudRearLateralFriction; // 0xA20(0x4)
		float IcePushForceMultiplier; // 0xA24(0x4)
		float IceBrakeForceMultiplier; // 0xA28(0x4)
		float FireHealthPercentThreshold; // 0xA2C(0x4)
		float OffroadRumbleIntensity; // 0xA30(0x4)
		float DirtRoadRumbleIntensity; // 0xA34(0x4)
		float OffroadDamageScaleExponent; // 0xA38(0x4)
		float HardLandingThresholdMin; // 0xA3C(0x4)
		float HardLandingThresholdMax; // 0xA40(0x4)
		float HardLandingShakeZAmplitudeMin; // 0xA44(0x4)
		float HardLandingShakeZAmplitudeMax; // 0xA48(0x4)
		float SpeedLinesThreshold; // 0xA4C(0x4)
		float PropDestructionImpulse; // 0xA50(0x4)
		float DestructionAngle; // 0xA54(0x4)
		float UpNormalMinProtected; // 0xA58(0x4)
		float UpForwardMinProtected; // 0xA5C(0x4)
		float NonCameraSteeringAngleMultiplier; // 0xA60(0x4)
		float CameraAssistStrengthMax; // 0xA64(0x4)
		float CameraAssistStrengthMin; // 0xA68(0x4)
		float CameraAssistStrengthRecovery; // 0xA6C(0x4)
		float CameraAssistInterpSpeed; // 0xA70(0x4)
		float DriftExitPushForce; // 0xA74(0x4)
		float DriftExitCatchupSpeed; // 0xA78(0x4)
		float HandbrakeDurationRequiredForCatchup; // 0xA7C(0x4)
		float ImpactMagnitudeToEndCatchup; // 0xA80(0x4)
		float PoppedTireSpringLength; // 0xA84(0x4)
		float PoppedTireSpringStiff; // 0xA88(0x4)
		float PoppedTireSpringDamp; // 0xA8C(0x4)
		float PoppedTireScrapeFrictionMultiplier; // 0xA90(0x4)
		float RimScrapeFlipRollMagnitude; // 0xA94(0x4)
		float RimScrapeFlipPitchMagnitude; // 0xA98(0x4)
		float SpeedForRimFlip; // 0xA9C(0x4)
		float HealthPercentForFlip; // 0xAA0(0x4)
		float FlipYawDuration; // 0xAA4(0x4)
		float FlipRollDuration; // 0xAA8(0x4)
		float FlipPitchDuration; // 0xAAC(0x4)
		float FlipExplodeDuration_Yaw; // 0xAB0(0x4)
		float FlipExplodeDuration_Pitch; // 0xAB4(0x4)
		float FlipPushForceDuration_Yaw; // 0xAB8(0x4)
		float FlipPushForceDuration_Pitch; // 0xABC(0x4)
		float FlipPushForcMultiplier; // 0xAC0(0x4)
		float FlipPushForce_UpComponentPitch; // 0xAC4(0x4)
		float FlipPushForce_UpComponentRoll; // 0xAC8(0x4)
		float MinTimeInAirRequiredForExplodeLanding; // 0xACC(0x4)
		float FlipYawSpringStiff; // 0xAD0(0x4)
		float FlipYawSpringDamp; // 0xAD4(0x4)
		float FlipYawSpringMaxAccel; // 0xAD8(0x4)
		float HealthPercentForExplode; // 0xADC(0x4)
		float FlipRecoveryTime; // 0xAE0(0x4)
		float FlipMaxDuration; // 0xAE4(0x4)
		float FlipWiggleDuration; // 0xAE8(0x4)
		float PoppedTireVeerDuration; // 0xAEC(0x4)
		float PoppedTireVeerSteeringAngle; // 0xAF0(0x4)
		float FlipWiggleFrequency; // 0xAF4(0x4)
		float FlipWiggleSteeringAngle; // 0xAF8(0x4)
		float FlipYawAngleThreshold; // 0xAFC(0x4)
		float AnalogDriftStickThreshold; // 0xB00(0x4)
		FName TireBootRightSocketName; // 0xB04(0x4)
		FName TireBootLeftSocketName; // 0xB08(0x4)
		float TireBootRelativeDistance; // 0xB0C(0x4)
		TArray TireSocketNames; // 0xB10(0x10)
		TArray TireBoneNames; // 0xB20(0x10)
		TArray RearTireIndices; // 0xB30(0x10)
		TArray RightSideTires; // 0xB40(0x10)
		TArray FakeTireIndices; // 0xB50(0x10)
		bool bNoWheels; // 0xB60(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xB61(0x3) UNKNOWN PROPERTY
		float NoWheelsSpringLenMult; // 0xB64(0x4)
		TArray NoWheelsBonesToHide; // 0xB68(0x10)
		FScalableFloat ForwardChangeDirectionBrakeForceMultiplier; // 0xB78(0x28)
		FScalableFloat ForwardChangeDirectionSpeedThreshold; // 0xBA0(0x28)
		FScalableFloat ReverseChangeDirectionBrakeForceMultiplier; // 0xBC8(0x28)
		FScalableFloat ReverseChangeDirectionSpeedThreshold; // 0xBF0(0x28)
		FScalableFloat UsesBoost; // 0xC18(0x28)
		FScalableFloat Boost_MinPushForce; // 0xC40(0x28)
		FScalableFloat Boost_TopSpeedForceMultiplier; // 0xC68(0x28)
		FScalableFloat Boost_TopSpeedMultiplier; // 0xC90(0x28)
		FScalableFloat Boost_SteeringMultiplier; // 0xCB8(0x28)
		FScalableFloat Boost_WaterMultiplier; // 0xCE0(0x28)
		FScalableFloat Boost_ForceInAir; // 0xD08(0x28)
		FScalableFloat Boost_AirMaxSpeed; // 0xD30(0x28)
		FScalableFloat UsesRechargeableBoost; // 0xD58(0x28)
		FScalableFloat RechargeableBoost_RateOfUse; // 0xD80(0x28)
		FScalableFloat RechargeableBoost_RateOfRegen; // 0xDA8(0x28)
		FScalableFloat RechargeableBoost_RateOfRegenMultMin; // 0xDD0(0x28)
		FScalableFloat RechargeableBoost_RateOfRegenMultMax; // 0xDF8(0x28)
		FScalableFloat RechargeableBoost_RegenMaxMultTime; // 0xE20(0x28)
		FScalableFloat RechargeableBoost_RequiredPercentToActivate; // 0xE48(0x28)
		FScalableFloat RechargeableBoost_MinPercent; // 0xE70(0x28)
		FScalableFloat RechargeableBoost_MaxPercent; // 0xE98(0x28)
		unsigned char UnknownData08_6[0x10]; // 0xEC0(0x10) UNKNOWN PROPERTY
		bool bCachedUsesBoost; // 0xED0(0x1)
		unsigned char UnknownData09_7[0x47]; // 0xED1(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortDagwoodVehicleConfigs");
			return ret;
		}
	};


	// Class ValetRuntime.FortDagwoodVehicleManager
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortDagwoodVehicleManager : public UGameStateComponent	
	{
	public:
		bool bHasUpdatedPropReplacement; // 0xA0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		int32_t NumVehiclesSpawnedWithTireMod; // 0xA4(0x4)
		unsigned char UnknownData03_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortDagwoodVehicleManager");
			return ret;
		}

		void UpdatePropReplacement(); // Flags: Final|Native|Public 0x7FF414BBB678
		void OnVehicleSpawnsUpdated(UFortVehicleItemDefinition VehicleItemDef, TArray& SpawnedVehicles, int32_t NewVehicleCount); // Flags: Final|Native|Public|HasOutParms 0x7FF414BBB598
		void OnVehicleSpawned(AFortAthenaVehicle Vehicle); // Flags: Final|Native|Public 0x7FF414BBB4B8
		void CustomHandleActorStreamedInEditor(AActor SourceActor); // Flags: Final|Native|Public 0x7FF414BBB3D8
	};


	// Class ValetRuntime.FortValetAudioController
	// Inherited from AActor -> UObject
	// Size: 0x150 (0x3E0 - 0x290)
	class AFortValetAudioController : public AActor	
	{
	public:
		FMulticastInlineDelegate OnEngineLoadChanged; // 0x290(0x10)
		FMulticastInlineDelegate OnShiftGearCompleted; // 0x2A0(0x10)
		FMulticastInlineDelegate OnShiftGearDelegate; // 0x2B0(0x10)
		float RPMResetTime_Native; // 0x2C0(0x4)
		float JitterAmount_Native; // 0x2C4(0x4)
		float ShiftTimeThreshold_Native; // 0x2C8(0x4)
		float TimeSinceShift_Native; // 0x2CC(0x4)
		float EngineRPMInterp_Native; // 0x2D0(0x4)
		float EngineRPMLinear_Native; // 0x2D4(0x4)
		float MinRPMRange_Native; // 0x2D8(0x4)
		float MaxRPMRange_Native; // 0x2DC(0x4)
		bool bCurrentlyShifting_Native; // 0x2E0(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x2E1(0x3) UNKNOWN PROPERTY
		float CurrentAccelRateGearModifier_Native; // 0x2E4(0x4)
		float CurrentAccelRate_Native; // 0x2E8(0x4)
		int32_t CurrentGear_Native; // 0x2EC(0x4)
		int32_t MaxGear_Native; // 0x2F0(0x4)
		float DefaultAccelRateScalar_Native; // 0x2F4(0x4)
		float GearAttackInterpSpeed_Native; // 0x2F8(0x4)
		float GearReleaseInterpSpeed_Native; // 0x2FC(0x4)
		float AccelRateScalarFirstGear_Native; // 0x300(0x4)
		float AccelRateScalarMinGear_Native; // 0x304(0x4)
		float AccelRateScalarMaxGear_Native; // 0x308(0x4)
		float ShiftToRPMStart_Native; // 0x30C(0x4)
		float ShiftToRPMEnd_Native; // 0x310(0x4)
		float ShiftFromRPMStart_Native; // 0x314(0x4)
		float ShiftFromRPMEnd_Native; // 0x318(0x4)
		float MaxRPMSawtoothDecrement_Native; // 0x31C(0x4)
		float MaxRPMSawtoothRepeatTime_Native; // 0x320(0x4)
		float DownhillAccelScalar_Native; // 0x324(0x4)
		float UphillAccelScalar_Native; // 0x328(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		UCurveFloat RPMFloatCurveMapping; // 0x330(0x8)
		float NormalizedSpeed_Native; // 0x338(0x4)
		float SuspValue_Native; // 0x33C(0x4)
		bool bIsHandbraking_Native; // 0x340(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x341(0x3) UNKNOWN PROPERTY
		float MotoSynthVolume_Native; // 0x344(0x4)
		float MotoSynthInitialFadeInTime_Native; // 0x348(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x34C(0x4) UNKNOWN PROPERTY
		float MotoSynthLogRPM_Native; // 0x350(0x4)
		bool bHasFuel_Native; // 0x354(0x1)
		bool bIsInWater_Native; // 0x355(0x1)
		bool bLocalPlayerInVehicle_Native; // 0x356(0x1)
		unsigned char UnknownData13_6[0x1]; // 0x357(0x1) UNKNOWN PROPERTY
		float TimeLocalPlayerEnteredVehicle_Native; // 0x358(0x4)
		bool bAttemptingDirectionChange_Native; // 0x35C(0x1)
		bool bPreDestroy_Native; // 0x35D(0x1)
		bool bEngineLoad_Native; // 0x35E(0x1)
		unsigned char UnknownData14_6[0x1]; // 0x35F(0x1) UNKNOWN PROPERTY
		float SkidAmount_Native; // 0x360(0x4)
		float TimeSinceAwoken_Native; // 0x364(0x4)
		bool bDestroyed_Native; // 0x368(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x369(0x3) UNKNOWN PROPERTY
		float TimeSinceSurfaceChange_Native; // 0x36C(0x4)
		USoundBase OnInitialSuspensionSound; // 0x370(0x8)
		float AngleForSkidding_Native; // 0x378(0x4)
		float SpringCompressionMultiplier; // 0x37C(0x4)
		float MotoSynthMaxVolume_Native; // 0x380(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x384(0x4) UNKNOWN PROPERTY
		FVector2D MotoSynthTimeInVehicleTimeRange; // 0x388(0x10)
		FVector2D MotoSynthTimeInVehicleVolumeRange; // 0x398(0x10)
		TWeakObjectPtr ValetVehicle; // 0x3A8(0x8)
		UFortLayeredAudioComponent Engine_Native; // 0x3B0(0x8)
		UAudioComponent BoostAudioComponent_Native; // 0x3B8(0x8)
		USynthComponentMoto SynthComponentMoto_Native; // 0x3C0(0x8)
		UFortCollisionAudioComponent SuspensionCollisionComponent_Native; // 0x3C8(0x8)
		unsigned char UnknownData17_7[0x10]; // 0x3D0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortValetAudioController");
			return ret;
		}

		void Update_Native(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBB9F8
		void OnTireModApplied(FTireInfo& AppliedTireMod); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414BBB918
		void OnSuspensionCollision_Native(bool& OutResult, float& OutMagnitude); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BBB838
		void CacheValetVehicle(AFortDagwoodVehicle InVehicle); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBB758
	};


	// Class ValetRuntime.FortValetGameFeatureData
	// Inherited from UFortGameFeatureData -> UGameFeatureData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x78 (0x5B8 - 0x540)
	class UFortValetGameFeatureData : public UFortGameFeatureData	
	{
	public:
		TMap PropReplacements; // 0x540(0x50)
		TWeakObjectPtr VehicleSpawnerClass; // 0x590(0x20)
		ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod; // 0x5B0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x5B1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ValetRuntime.FortValetGameFeatureData");
			return ret;
		}
	};

}
