#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotorboatRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MotorboatRuntime.FortMeatballVehicleAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xE8 (0x750 - 0x668)
	class UFortMeatballVehicleAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		AFortMeatballVehicle Meatball; // 0x668(0x8)
		float MeatballSpeed; // 0x670(0x4)
		float SteeringAngle; // 0x674(0x4)
		float BoostCharge; // 0x678(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x67C(0x4) UNKNOWN PROPERTY
		FVector SeatOffset; // 0x680(0x18)
		FRotator SeatRotation; // 0x698(0x18)
		FRotator CurrentDriveJiggle; // 0x6B0(0x18)
		FRotator SteeringRotator; // 0x6C8(0x18)
		FRotator SpeedGuageRotator; // 0x6E0(0x18)
		FRotator BoostPercentRotator; // 0x6F8(0x18)
		FRotator RandomJiggleRotatorMotorTop; // 0x710(0x18)
		FRotator RandomJiggleRotatorMotorBase; // 0x728(0x18)
		bool bIsMovingForward; // 0x740(0x1)
		bool bIsDrivingFast; // 0x741(0x1)
		bool bIsBraking; // 0x742(0x1)
		bool bIsBoosting; // 0x743(0x1)
		bool bIsBoostReady; // 0x744(0x1)
		bool bIsBoostStarting; // 0x745(0x1)
		bool bIsBoostEnding; // 0x746(0x1)
		bool bIsRocketReady; // 0x747(0x1)
		bool bIsRocketOnCooldown; // 0x748(0x1)
		bool bIsSteeringLeft; // 0x749(0x1)
		bool bIsSteeringRight; // 0x74A(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x74B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorboatRuntime.FortMeatballVehicleAnimInstance");
			return ret;
		}
	};


	// Class MotorboatRuntime.FortMeatballPontoonsComponent
	// Inherited from UFortVehiclePontoonsComponent -> UBuoyancyComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x2C0 - 0x2C0)
	class UFortMeatballPontoonsComponent : public UFortVehiclePontoonsComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorboatRuntime.FortMeatballPontoonsComponent");
			return ret;
		}
	};


	// Class MotorboatRuntime.FortMeatballVehicle
	// Inherited from AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x2F0 (0x2400 - 0x2110)
	class AFortMeatballVehicle : public AFortAthenaSKVehicle	
	{
	public:
		FFortRechargingActionTimer BoostAction; // 0x2110(0xD8)
		float FxNormalizationMaxSpeedKmh; // 0x21E8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x21EC(0x4) UNKNOWN PROPERTY
		UFortVehicleAudioVoice CacheAudioEngineUp; // 0x21F0(0x8)
		UFortVehicleAudioVoice CacheAudioEngineDown; // 0x21F8(0x8)
		UFortVehicleAudioVoice CacheAudioWakeTurn; // 0x2200(0x8)
		UFortVehicleAudioVoice CacheAudioWakeSpeed; // 0x2208(0x8)
		UFortVehicleAudioVoice CacheAudioScrape; // 0x2210(0x8)
		UFortVehicleAudioVoice CacheAudioEngineOutOfFuel; // 0x2218(0x8)
		UMaterialInstanceDynamic BoostMID; // 0x2220(0x8)
		UNiagaraComponent CachedGroundFXComponent; // 0x2228(0x8)
		APlayerController DrivingPlayerController; // 0x2230(0x8)
		ULegacyCameraShake LandCameraShake; // 0x2238(0x8)
		UClass LandCameraShakeClass; // 0x2240(0x8)
		ULegacyCameraShake DriverCameraShake; // 0x2248(0x8)
		UClass DriverCameraShakeClass; // 0x2250(0x8)
		float LandRumbleIntensity; // 0x2258(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x225C(0x4) UNKNOWN PROPERTY
		uint64_t LandForceFeedbackHandle; // 0x2260(0x8)
		float TurnRumbleIntensity; // 0x2268(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x226C(0x4) UNKNOWN PROPERTY
		uint64_t TurnForceFeedbackHandle; // 0x2270(0x8)
		float CurrentSnowAltitude; // 0x2278(0x4)
		bool bHasSnow; // 0x227C(0x1)
		bool bLargeRumble; // 0x227D(0x1)
		bool bTurnRumbleActive; // 0x227E(0x1)
		bool bWaterDropsOnScreen; // 0x227F(0x1)
		FGameplayTag GCVehicleScreenDrips; // 0x2280(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x2284(0x4) UNKNOWN PROPERTY
		FGameplayCueParameters GCParamsEmpty; // 0x2288(0xD0)
		UClass BoostingCamera; // 0x2358(0x8)
		UClass VehicleCameraNoWeaponOverride; // 0x2360(0x8)
		unsigned char UnknownData11_6[0x10]; // 0x2368(0x10) UNKNOWN PROPERTY
		UFortMeatballVehicleConfigs FortMeatballVehicleConfigs; // 0x2378(0x8)
		int32_t WaterLineStartPontoonIndex; // 0x2380(0x4)
		int32_t WaterLineEndPontoonIndex; // 0x2384(0x4)
		unsigned char UnknownData12_6[0x38]; // 0x2388(0x38) UNKNOWN PROPERTY
		bool bBoostFailed; // 0x23C0(0x1)
		unsigned char UnknownData13_7[0x3F]; // 0x23C1(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorboatRuntime.FortMeatballVehicle");
			return ret;
		}

		void UpdateSnowAndDirtParams(float NormalizedForwardSpeed); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BCB898
		void StopTurnRumble(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BCB7B8
		void StopLandRumble(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BCB6D8
		void StopDriverCameraShake(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BCB5F8
		void SmashedThroughBuildingPiece(FVector& ImpactPoint, FVector& ImpactNormal, ABuildingActor BuildingHitActor); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BCB518
		void ShowCooldownCue(AFortPlayerPawn Pawn, float duration); // Flags: Event|Public|BlueprintEvent 0x7FF414BCB438
		void OnBoostStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCB358
		void OnBoostReady(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCB278
		void OnBoostFinished(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCB198
		void OnBoostFailed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BCB0B8
		void LandShakeEnd(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BCAFD8
		FQuat GetSeatRotation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414BCAEF8
		FVector GetSeatOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414BCAE18
		float GetBoostCharge(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BCAD38
		void CacheGroundFXComponent(UNiagaraComponent InGroundFXComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BCAC58
		void CacheAudioPointers(UFortVehicleAudioVoice InAudioEngineUp, UFortVehicleAudioVoice InAudioEngineDown, UFortVehicleAudioVoice InAudioWakeTurn, UFortVehicleAudioVoice InAudioWakeSpeed, UFortVehicleAudioVoice InAudioScrape, UFortVehicleAudioVoice InAudioEngineOutOfFuel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BCAB78
	};


	// Class MotorboatRuntime.FortMeatballVehicleConfigs
	// Inherited from UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0xD0 (0xA50 - 0x980)
	class UFortMeatballVehicleConfigs : public UFortPhysicsVehicleConfigs	
	{
	public:
		float WaterSteerRollFactor; // 0x980(0x4)
		float InnerTurnPontoonOffsetMultiplier; // 0x984(0x4)
		float OuterTurnPontoonOffsetMultiplier; // 0x988(0x4)
		float MinForwardSpeedToBankOnTurn; // 0x98C(0x4)
		float BoostMinPushForce; // 0x990(0x4)
		float BoostTopSpeedForceMultiplier; // 0x994(0x4)
		float BoostTopSpeedMultiplier; // 0x998(0x4)
		float MaxPontoonOffsetPerSecond; // 0x99C(0x4)
		float LandTopSpeedMultiplier; // 0x9A0(0x4)
		float LandPushForceMultiplier; // 0x9A4(0x4)
		int32_t MinPushPontoonsForWaterDriving; // 0x9A8(0x4)
		float MaxWaterPitchAngle; // 0x9AC(0x4)
		float MinForwardSpeedToPitch; // 0x9B0(0x4)
		float MinForwardSpeedForMaxPitch; // 0x9B4(0x4)
		float MaxForwardSpeedForMaxPitch; // 0x9B8(0x4)
		float MaxFowrardSpeedPitchFactor; // 0x9BC(0x4)
		float BoostMaxForwardSpeedPitchFactor; // 0x9C0(0x4)
		float FrontLateralFrictionFactor; // 0x9C4(0x4)
		float RearLateralFrictionFactor; // 0x9C8(0x4)
		float LandFrontLateralFrictionFactor; // 0x9CC(0x4)
		float LandRearLateralFrictionFactor; // 0x9D0(0x4)
		float LateralFrictionModStartSpeedKmh; // 0x9D4(0x4)
		float RearLateralFrictionModPerSpeedKmh; // 0x9D8(0x4)
		float FrontLateralFrictionModPerSpeedKmh; // 0x9DC(0x4)
		float SeatOffsetScaleX; // 0x9E0(0x4)
		float SeatOffsetScaleY; // 0x9E4(0x4)
		float SeatYawAngleMax; // 0x9E8(0x4)
		float SeatPitchAngleMax; // 0x9EC(0x4)
		float BoostSteeringMultiplier; // 0x9F0(0x4)
		float BoostSteeringMultiplierRampTime; // 0x9F4(0x4)
		float LandSteeringMultiplier; // 0x9F8(0x4)
		float LandMinSpeedSteeringAngle; // 0x9FC(0x4)
		float LandMaxSpeedSteeringAngle; // 0xA00(0x4)
		float DragCoefficientNoAccel; // 0xA04(0x4)
		float DragCoefficient2NoAccel; // 0xA08(0x4)
		float DragCoefficientMultiplierRoad; // 0xA0C(0x4)
		float DragCoefficientMultiplierGrass; // 0xA10(0x4)
		float DragCoefficientMultiplierDirt; // 0xA14(0x4)
		float DragCoefficientMultiplierSnow; // 0xA18(0x4)
		float DragCoefficientMultiplierIce; // 0xA1C(0x4)
		float DragCoefficientMultiplierMud; // 0xA20(0x4)
		float MinSteerAlphaForWaterFriction; // 0xA24(0x4)
		float TurnInPlaceYawStiff; // 0xA28(0x4)
		float TurnInPlaceYawDamp; // 0xA2C(0x4)
		float MaxSteerRollAngle; // 0xA30(0x4)
		float MaxTurnInPlaceYawAngle; // 0xA34(0x4)
		float UprightSpringSteerStrength; // 0xA38(0x4)
		float TurnInPlaceYawStrength; // 0xA3C(0x4)
		float MaxSpeedForTurnInPlaceKmH; // 0xA40(0x4)
		float BlendOutExtraSpeedTurnInPlaceKmH; // 0xA44(0x4)
		float MaxPitchForCameraInPlaceSteer; // 0xA48(0x4)
		float SpringLengthMutliplierWater; // 0xA4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotorboatRuntime.FortMeatballVehicleConfigs");
			return ret;
		}
	};

}
