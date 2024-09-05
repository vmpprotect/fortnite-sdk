#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BasicCar
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Valet/BasicCar/Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C
	// Inherited from AFortDagwoodVehicle -> AFortAthenaSKMotorVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0xED0 (0x3750 - 0x2880)
	class AValet_BasicCar_Vehicle_C : public AFortDagwoodVehicle	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2880(0x8)
		UValet_InteractionOverride_Default_C* Valet_InteractionOverride_Default; // 0x2888(0x8)
		UFortVehiclePhysicsCollisionDamageComponent* PhysicsDamageCauserComponent; // 0x2890(0x8)
		UFortVehicleFuelComponent* FuelComponent; // 0x2898(0x8)
		UValetLightSpawnerComponent_C* ValetLightSpawnerComponent; // 0x28A0(0x8)
		UChildActorComponent* AudioControllerBP; // 0x28A8(0x8)
		UBoxComponent* OverlapVolume; // 0x28B0(0x8)
		float Body_BoostEmissiveOff_BoostGlowIntensity_BBD0AD904AE5C50A14DAC6BB895BDD3D; // 0x28B8(0x4)
		TEnumAsByte<ETimelineDirection> Body_BoostEmissiveOff__Direction_BBD0AD904AE5C50A14DAC6BB895BDD3D; // 0x28BC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x28BD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Body_BoostEmissiveOff; // 0x28C0(0x8)
		float Body_BoostEmissiveOn_BoostGlowIntensity_015642854F77F95716D512A3FF7F8788; // 0x28C8(0x4)
		TEnumAsByte<ETimelineDirection> Body_BoostEmissiveOn__Direction_015642854F77F95716D512A3FF7F8788; // 0x28CC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x28CD(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Body_BoostEmissiveOn; // 0x28D0(0x8)
		float BoostFOVRumbleTimeline_Rumble_4398A5E6444D49F8629D269235124894; // 0x28D8(0x4)
		float BoostFOVRumbleTimeline_FoV_4398A5E6444D49F8629D269235124894; // 0x28DC(0x4)
		TEnumAsByte<ETimelineDirection> BoostFOVRumbleTimeline__Direction_4398A5E6444D49F8629D269235124894; // 0x28E0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x28E1(0x7) UNKNOWN PROPERTY
		UTimelineComponent* BoostFOVRumbleTimeline; // 0x28E8(0x8)
		float OutOfFuel_Intensity_C83D96E348E80AB3A7B67182D3F6C892; // 0x28F0(0x4)
		TEnumAsByte<ETimelineDirection> OutOfFuel__Direction_C83D96E348E80AB3A7B67182D3F6C892; // 0x28F4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x28F5(0x3) UNKNOWN PROPERTY
		UTimelineComponent* OutOfFuel; // 0x28F8(0x8)
		USoundBase* OnDeathSound; // 0x2900(0x8)
		double MaxSpeedForAccelFX; // 0x2908(0x8)
		AFortPlayerPawn* PassengerPawn; // 0x2910(0x8)
		APlayerController* DrivingPlayerController; // 0x2918(0x8)
		AFortPlayerPawn* DriverPawn; // 0x2920(0x8)
		AFortPlayerPawn* LastDriver; // 0x2928(0x8)
		AFortPlayerPawnAthena* LastHitPlayer; // 0x2930(0x8)
		bool IgnoreHitLastDriver; // 0x2938(0x1)
		bool PassengerIsInstigator; // 0x2939(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x293A(0x6) UNKNOWN PROPERTY
		FScalableFloat CanLaunchPlayer; // 0x2940(0x28)
		APlayerController* PassengerPlayerController; // 0x2968(0x8)
		TArray<AFortPlayerPawn*> Passengers; // 0x2970(0x10)
		bool Debug_NoCameraShake; // 0x2980(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x2981(0x7) UNKNOWN PROPERTY
		TArray<AFortPlayerPawn*> BounceIgnoreList; // 0x2988(0x10)
		double DestructionAngle; // 0x2998(0x8)
		double EngineSoundMaxDistance; // 0x29A0(0x8)
		double SavedDamageValueForMID; // 0x29A8(0x8)
		UParticleSystemComponent* InWaterFX; // 0x29B0(0x8)
		FGameplayCueParameters GCParamsEmpty; // 0x29B8(0xD0)
		FGameplayTag HitPlayerCue; // 0x2A88(0x4)
		FGameplayTag HitFiendCue; // 0x2A8C(0x4)
		USoundBase* WaterMovementSound; // 0x2A90(0x8)
		USoundBase* InWaterLoopSound; // 0x2A98(0x8)
		UParticleSystem* InWaterSplashFX; // 0x2AA0(0x8)
		UParticleSystem* InWaterLoopingFX; // 0x2AA8(0x8)
		double AccelRumbleIntensityFalloff; // 0x2AB0(0x8)
		UParticleSystem* DestroyedFX; // 0x2AB8(0x8)
		UForceFeedbackEffect* MovementForceFeedback; // 0x2AC0(0x8)
		UClass* Movement_CameraShake; // 0x2AC8(0x8)
		UClass* Driver_CameraShake; // 0x2AD0(0x8)
		bool bLocalPlayerADS; // 0x2AD8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x2AD9(0x7) UNKNOWN PROPERTY
		ULegacyCameraShake* DriverCameraShake; // 0x2AE0(0x8)
		ULegacyCameraShake* OffRoadCamera_Shake; // 0x2AE8(0x8)
		double OffRoadCameraShakeFalloff; // 0x2AF0(0x8)
		double OffRoadCameraSpeedForShakes; // 0x2AF8(0x8)
		double OffRoadNormalizedSpeedForRumble; // 0x2B00(0x8)
		double OffRoadCameraMinFrequency; // 0x2B08(0x8)
		double OffRoadCameraMaxFrequency; // 0x2B10(0x8)
		double OffRoadCameraY_Amp; // 0x2B18(0x8)
		double OffRoadCameraZ_Amp; // 0x2B20(0x8)
		double OffRoadCameraRot_Amp; // 0x2B28(0x8)
		double AccelRumbleIntensityPower; // 0x2B30(0x8)
		double AccelRumbleIntensity; // 0x2B38(0x8)
		bool LargeRumble; // 0x2B40(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x2B41(0x7) UNKNOWN PROPERTY
		UClass* OffRoad_CameraShake; // 0x2B48(0x8)
		double VehicleMaxSpeed; // 0x2B50(0x8)
		double ImpactEjectUpVelocity; // 0x2B58(0x8)
		double ImpactEjectForwardVelocity; // 0x2B60(0x8)
		UClass* OutOfFuelCameraShake; // 0x2B68(0x8)
		double MaxSpeedForAccelRumble; // 0x2B70(0x8)
		double MinSkidAmountRequired; // 0x2B78(0x8)
		double TireSkidRumbleFalloff; // 0x2B80(0x8)
		double MinSpeedForTireSkid; // 0x2B88(0x8)
		double MinSpeedForBrakingSkid; // 0x2B90(0x8)
		double MinDamageToEjectDriver; // 0x2B98(0x8)
		UParticleSystem* WindshieldBreakFX; // 0x2BA0(0x8)
		FTimerHandle HandbrakeSmoke; // 0x2BA8(0x8)
		ULegacyCameraShake* AccelCameraShake; // 0x2BB0(0x8)
		ULegacyCameraShake* HandbrakeCameraShake; // 0x2BB8(0x8)
		UClass* Handbrake_CameraShake; // 0x2BC0(0x8)
		double HandbrakeCameraShakeFalloff; // 0x2BC8(0x8)
		double HandbrakeCameraSpeedForShakes; // 0x2BD0(0x8)
		double NormalizedSpeedForRumble; // 0x2BD8(0x8)
		double HandbrakeCameraMinFrequency; // 0x2BE0(0x8)
		double HandbrakeCameraMaxFrequency; // 0x2BE8(0x8)
		double HandbrakeCameraY_Amp; // 0x2BF0(0x8)
		double HandbrakeCameraZ_Amp; // 0x2BF8(0x8)
		double HandbrakeCameraRot_Amp; // 0x2C00(0x8)
		double FuelLeakPerDrop; // 0x2C08(0x8)
		double FuelLeakFrequency; // 0x2C10(0x8)
		FTimerHandle LeakingFuelTimer; // 0x2C18(0x8)
		bool bFuelLeaking; // 0x2C20(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x2C21(0x7) UNKNOWN PROPERTY
		TArray<TEnumAsByte> LeakObjectTrace; // 0x2C28(0x10)
		bool bIsOnFire; // 0x2C38(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x2C39(0x3) UNKNOWN PROPERTY
		int32_t DripOntoFuelCount; // 0x2C3C(0x4)
		FVector DripDistanceCheck; // 0x2C40(0x18)
		AAthena_PlayerController_C* DamagingPlayerController; // 0x2C58(0x8)
		AFortPlayerPawn* DamagingPlayerPawn; // 0x2C60(0x8)
		UClass* GE_DamagePlayerHit; // 0x2C68(0x8)
		UClass* CameraShakeBoost; // 0x2C70(0x8)
		ULegacyCameraShake* BoostCameraShake; // 0x2C78(0x8)
		UParticleSystem* ExplodeFX; // 0x2C80(0x8)
		UClass* GE_RimScrapeDamage; // 0x2C88(0x8)
		double LowFuelThreshold; // 0x2C90(0x8)
		USoundBase* LowFuelWarningSound; // 0x2C98(0x8)
		USoundBase* OutOfFuelSound; // 0x2CA0(0x8)
		UParticleSystem* PopTireFX; // 0x2CA8(0x8)
		FName WheelSocket_FR; // 0x2CB0(0x4)
		FName WheelSocket_FL; // 0x2CB4(0x4)
		FName WheelSocket_BR; // 0x2CB8(0x4)
		FName WheelSocket_BL; // 0x2CBC(0x4)
		FName WheelSocketBR_Mid; // 0x2CC0(0x4)
		FName WheelSocketBL_Mid; // 0x2CC4(0x4)
		bool MidR_TirePop; // 0x2CC8(0x1)
		bool MidL_TirePop; // 0x2CC9(0x1)
		bool IsBigRig; // 0x2CCA(0x1)
		unsigned char UnknownData10_6[0x5]; // 0x2CCB(0x5) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* BodyMID; // 0x2CD0(0x8)
		double DamageValue; // 0x2CD8(0x8)
		FVector LaunchVelocity; // 0x2CE0(0x18)
		TArray<AActor*> TargetedActors; // 0x2CF8(0x10)
		AFortPawn* ExplodeInstigator; // 0x2D08(0x8)
		UClass* GE_ExplodeBuildingDamage; // 0x2D10(0x8)
		TArray<TEnumAsByte> ObjectArray; // 0x2D18(0x10)
		double ExplodeRadius; // 0x2D28(0x8)
		UClass* GE_ExplodePlayerDamage; // 0x2D30(0x8)
		UClass* GE_ExplodeVehicleDamage; // 0x2D38(0x8)
		FVector ExplodeVehicleSpin; // 0x2D40(0x18)
		double ExplodeVehicleImpulse; // 0x2D58(0x8)
		double Turn_Signal_Update_Frequencey; // 0x2D60(0x8)
		double BasePontoonRadiusFront; // 0x2D68(0x8)
		double BasePontoonRadiusRear; // 0x2D70(0x8)
		double MinPontoonRadiusToSink; // 0x2D78(0x8)
		double ReduceRadiusTerTickRear; // 0x2D80(0x8)
		double ReduceRadiusTerTickFront; // 0x2D88(0x8)
		double ScalePontoonTickRateFront; // 0x2D90(0x8)
		double ScalePontoonTickRateRear; // 0x2D98(0x8)
		double ScaledPontoonRadiusRear; // 0x2DA0(0x8)
		double ScaledPontoonRadiusFront; // 0x2DA8(0x8)
		FTimerHandle ScalePontoonTimerFront; // 0x2DB0(0x8)
		FTimerHandle ScalePontoonTimerRear; // 0x2DB8(0x8)
		double FuelGainPerInteract; // 0x2DC0(0x8)
		UNiagaraComponent* FX_Road_Interaction_And_Exhaust; // 0x2DC8(0x8)
		FTimerHandle TimerSnapFoamToWaterSurface; // 0x2DD0(0x8)
		UNiagaraComponent* NS_LargeSplashFX; // 0x2DD8(0x8)
		UNiagaraComponent* FX_LowFuelSputterSmoke; // 0x2DE0(0x8)
		bool Tire_Popped_FL; // 0x2DE8(0x1)
		bool Tire_Popped_FR; // 0x2DE9(0x1)
		bool Tire_Popped_RL; // 0x2DEA(0x1)
		bool Tire_Popped_RR; // 0x2DEB(0x1)
		unsigned char UnknownData11_6[0x4]; // 0x2DEC(0x4) UNKNOWN PROPERTY
		FVector Wheel_Scale_Rear; // 0x2DF0(0x18)
		FVector Wheel_Scale_Front; // 0x2E08(0x18)
		FVector Tire_Scale_Rear; // 0x2E20(0x18)
		FVector Tire_Scale_Front; // 0x2E38(0x18)
		double MinSpeedForDust; // 0x2E50(0x8)
		FLinearColor FX_Dust_Color_Dirt; // 0x2E58(0x10)
		FLinearColor FX_Dust_Color_Default; // 0x2E68(0x10)
		UNiagaraComponent* FX_LeakingFuel; // 0x2E78(0x8)
		FTransform WindowTransform_F; // 0x2E80(0x60)
		FTransform WindowTransform_FL; // 0x2EE0(0x60)
		FTransform WindowTransform_FR; // 0x2F40(0x60)
		FTransform WindowTransform_BL; // 0x2FA0(0x60)
		FTransform WindowTransform_BR; // 0x3000(0x60)
		FTransform WindowTransform_B; // 0x3060(0x60)
		bool CanExplodeHack; // 0x30C0(0x1)
		bool VehicleImpulseOnExplode; // 0x30C1(0x1)
		unsigned char UnknownData12_6[0x6]; // 0x30C2(0x6) UNKNOWN PROPERTY
		double ExplodeSpinThrustMagnitude; // 0x30C8(0x8)
		UNiagaraSystem* PopTireFXNiagara; // 0x30D0(0x8)
		UNiagaraSystem* ExplodeFXNiagara; // 0x30D8(0x8)
		UNiagaraComponent* FX_TireSkid; // 0x30E0(0x8)
		double Damage_Stage1; // 0x30E8(0x8)
		double Damage_Stage2; // 0x30F0(0x8)
		double Damage_Stage3Critical; // 0x30F8(0x8)
		double VehicleFallSpeed; // 0x3100(0x8)
		UNiagaraSystem* WreckFXNiagara; // 0x3108(0x8)
		ABP_Vehicle_Radio_C* VehicleRadio; // 0x3110(0x8)
		bool isVehicleOccupied_; // 0x3118(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x3119(0x7) UNKNOWN PROPERTY
		FString SportCar; // 0x3120(0x10)
		FString SportCarUpgrade; // 0x3130(0x10)
		FString SemiTruck; // 0x3140(0x10)
		UNiagaraComponent* FX_LeakingFuel_r; // 0x3150(0x8)
		bool IsInDeepWater; // 0x3158(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x3159(0x3) UNKNOWN PROPERTY
		int32_t NumWheels; // 0x315C(0x4)
		TArray<double> WheelSpringLength; // 0x3160(0x10)
		double SurfaceChangeTime; // 0x3170(0x8)
		double MaxDepthToEject; // 0x3178(0x8)
		AFortWaterBodyActor* WaterBody; // 0x3180(0x8)
		FTimerHandle WaterDepthCheckTimer; // 0x3188(0x8)
		double Explosion_CameraShake_Radius; // 0x3190(0x8)
		double ExplodeImpulseZ_Magnitude; // 0x3198(0x8)
		double MaxSpeedToHandbrakeHaptics; // 0x31A0(0x8)
		double ExplodePlayerImpulse; // 0x31A8(0x8)
		double ScalePlayerHitImpulseBySpeed; // 0x31B0(0x8)
		double ScalePlayerHitImpulseNoDriver; // 0x31B8(0x8)
		int32_t RandomMatInt; // 0x31C0(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x31C4(0x4) UNKNOWN PROPERTY
		TArray<UMaterialInterface*> SK_RandomMat2_Array; // 0x31C8(0x10)
		TArray<UMaterialInterface*> SK_RandomMat0_Array; // 0x31D8(0x10)
		TArray<UMaterialInterface*> SK_RandomMat1_Array; // 0x31E8(0x10)
		UTexture* Diffuse; // 0x31F8(0x8)
		UTexture* Mask; // 0x3200(0x8)
		UTexture* Normal; // 0x3208(0x8)
		UTexture* ScratchGrime; // 0x3210(0x8)
		UTexture* SpecularMask; // 0x3218(0x8)
		UMaterialInstanceDynamic* Mid; // 0x3220(0x8)
		UMaterialInstanceDynamic* DestroyedMID; // 0x3228(0x8)
		FLinearColor Primary_Color; // 0x3230(0x10)
		UClass* GE_ApplyInValetTag; // 0x3240(0x8)
		FGameplayTagContainer InValetVehicleTag; // 0x3248(0x20)
		UClass* GE_ApplyAllowFlippingTag; // 0x3268(0x8)
		FGameplayTagContainer VehicleAllowFlippingTag; // 0x3270(0x20)
		FScalableFloat HotfixCurieEnabled; // 0x3290(0x28)
		UNiagaraComponent* DamageFX; // 0x32B8(0x8)
		FScalableFloat RagdollEnabled; // 0x32C0(0x28)
		AFN_RadialForce_C* FN_RadialForce; // 0x32E8(0x8)
		FScalableFloat Row_ShouldDropLootOnDamage; // 0x32F0(0x28)
		FScalableFloat LootDropDamageThresholds; // 0x3318(0x28)
		int32_t LootDropCurentThreshold; // 0x3340(0x4)
		FName LootOnDamagePackage; // 0x3344(0x4)
		double LootTossOffset; // 0x3348(0x8)
		UParticleSystem* FX_LootDropOnDamagedSpawn; // 0x3350(0x8)
		double LootTossMin; // 0x3358(0x8)
		FGameplayTag Boost_GC; // 0x3360(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x3364(0x4) UNKNOWN PROPERTY
		UNiagaraComponent* NS_TurboBoost_FX; // 0x3368(0x8)
		FRotator BoostFXRotation; // 0x3370(0x18)
		bool bBoostUsesQuadExhaust; // 0x3388(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x3389(0x7) UNKNOWN PROPERTY
		double BoostQuadExhaustHorizontalOffset; // 0x3390(0x8)
		double BoostJetLocationOffsetX; // 0x3398(0x8)
		double BoostJetLocationOffsetZ; // 0x33A0(0x8)
		double BoostJetFlameHeight; // 0x33A8(0x8)
		double BoostJetFlameHeightMax; // 0x33B0(0x8)
		bool NewVar; // 0x33B8(0x1)
		unsigned char UnknownData18_6[0x7]; // 0x33B9(0x7) UNKNOWN PROPERTY
		double WheelWidth; // 0x33C0(0x8)
		double WheelWidthBack; // 0x33C8(0x8)
		FLinearColor ExhaustColor; // 0x33D0(0x10)
		double ExhaustScale; // 0x33E0(0x8)
		bool BoostCameraActive; // 0x33E8(0x1)
		bool IsBoosting; // 0x33E9(0x1)
		unsigned char UnknownData19_6[0x6]; // 0x33EA(0x6) UNKNOWN PROPERTY
		double BoostRumbleIntensity; // 0x33F0(0x8)
		double MaxBoostFOV; // 0x33F8(0x8)
		double HealthPctMissingToShowDmgCrinkle; // 0x3400(0x8)
		double MaxCrinkleSeverity; // 0x3408(0x8)
		FScalableFloat ExplosionDamageBuildings; // 0x3410(0x28)
		double CachedExplosionDamageBuildings; // 0x3438(0x8)
		FScalableFloat ExplosionDamagePlayers; // 0x3440(0x28)
		double CachedExplosionDamagePlayers; // 0x3468(0x8)
		FScalableFloat ExplosionDamageVehicles; // 0x3470(0x28)
		double CachedExplosionDamageVehicles; // 0x3498(0x8)
		UClass* GE_Explode_BuildingDamage; // 0x34A0(0x8)
		UNiagaraComponent* NS_WreckFX; // 0x34A8(0x8)
		bool VehicleExploded; // 0x34B0(0x1)
		bool HandbrakeDown_; // 0x34B1(0x1)
		unsigned char UnknownData20_6[0x2]; // 0x34B2(0x2) UNKNOWN PROPERTY
		FGameplayTag GC_ApplyTireMod; // 0x34B4(0x4)
		double PreFadeCleanupDelay; // 0x34B8(0x8)
		UNiagaraSystem* TemplateWaterSplashFX; // 0x34C0(0x8)
		UNiagaraSystem* TemplateBoostFX; // 0x34C8(0x8)
		UNiagaraSystem* FX_Tire_Skid_Template; // 0x34D0(0x8)
		UNiagaraSystem* FX_Road_Interaction_and_Exhaust_Template; // 0x34D8(0x8)
		UNiagaraSystem* FX_Large_Impact; // 0x34E0(0x8)
		TArray<APlayerController*> ValidPlayerControllers; // 0x34E8(0x10)
		int32_t CurrentGear; // 0x34F8(0x4)
		bool IsBasicModdedCar; // 0x34FC(0x1)
		unsigned char UnknownData21_6[0x3]; // 0x34FD(0x3) UNKNOWN PROPERTY
		int32_t RandomMatInt_BasicModdedCar; // 0x3500(0x4)
		int32_t PhysSurfaceIndex; // 0x3504(0x4)
		TMap<FName, int32_t> ShapeNameToTireIndexMap; // 0x3508(0x50)
		unsigned char UnknownData22_6[0x8]; // 0x3558(0x8) UNKNOWN PROPERTY
		FTransform WindowTrasform_MidR; // 0x3560(0x60)
		FTransform WindowTrasform_MidL; // 0x35C0(0x60)
		FMulticastInlineDelegate NewEventDispatcher; // 0x3620(0x10)
		FMulticastInlineDelegate OnPawnHitByVehicle; // 0x3630(0x10)
		bool IgnoreExhaustVfx; // 0x3640(0x1)
		unsigned char UnknownData23_6[0x3]; // 0x3641(0x3) UNKNOWN PROPERTY
		int32_t Max_Team_Size; // 0x3644(0x4)
		UClass* GE_VehicleHealthByTeamSize; // 0x3648(0x8)
		UClass* GE_MarkVehicleOnExit; // 0x3650(0x8)
		FScalableFloat Row_BoostFOV_ScalarForLowEnd; // 0x3658(0x28)
		float LowEndBoostFOV; // 0x3680(0x4)
		bool DriftTrailsEnabled; // 0x3684(0x1)
		unsigned char UnknownData24_6[0x3]; // 0x3685(0x3) UNKNOWN PROPERTY
		FScalableFloat HotfixDriftTrailsEnabled; // 0x3688(0x28)
		FDagwoodCollisionHitHapticsConfig CollisionHapticsConfig; // 0x36B0(0x48)
		FDagwoodCollisionHitFXConfig CollisionFxConfig; // 0x36F8(0x20)
		UClass* GE_VehicleOccupiedTag; // 0x3718(0x8)
		FActiveGameplayEffectHandle VehicleOccupiedTag; // 0x3720(0x8)
		FGameplayTagContainer OutOfFuelTag; // 0x3728(0x20)
		UB_Vehicle_AudioController_PrimaryDataAsset_C* AudioDataAsset; // 0x3748(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicCar/Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C");
			return ret;
		}

		void OverrideCollisionHitFX(UFXSystemAsset* PawnImpact, UFXSystemAsset* ScrapeImpact); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PhysicalSurfaceIDCheck(int32_t Physical Surface ID, bool& CheckedPhysicalSurfaceID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_RandomMatInt_BasicModdedCar(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GenerateRandomInt_BasicModdedCar(TArray<UMaterialInterface*>& TargetArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSurfaceTypeChanged(TEnumAsByte<EPhysicalSurface> SurfaceType); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void getAttachmentMeshComponents(TArray<UMeshComponent*>& Meshes); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void setHeadlightEmissiveOn(bool IsOn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddToPlayerControllerArray(APawn* PlayerPawn); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsVehicleOccupied(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyBuildingExplosionDamage(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CacheExplosionDamageValues(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Driver Restricted By Team Setting(AFortPlayerPawn* PlayerPawn, bool& Restricted); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateBaseMID(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateDestroyedMIDApply(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GenerateRandomInt(TArray<UMaterialInterface*>& TargetArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_RandomMatInt(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DamgeStateSetAmount(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleGlassFX(FName AttachPointName, FTransform& InTransform); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleDustFX(bool InValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFxSettingsForVehicleType(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TurnSignalsandBrakes(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector CalcImpulseDirection(AActor* Vehicle, double Magnitude); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFallInstigator(AFortPlayerPawnAthena* Pawn); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Damageable Part Changed(FVehicleDamageablePartConfig PartConfig, FVehicleDamageablePart Part, bool NewlyDisabled, bool NewlyEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsVehicleAccelerating?(double MaxSpeed, bool& Return); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		double CalcAccelRumbleIntensity(double MaxIntensity); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SendDamageValueToMaterials(double ParameterValue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTurnSlowMagnitude(double SteeringAngle, double& SlowResult); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OutOfFuel__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OutOfFuel__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BoostFOVRumbleTimeline__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BoostFOVRumbleTimeline__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Body_BoostEmissiveOn__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Body_BoostEmissiveOn__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Body_BoostEmissiveOff__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Body_BoostEmissiveOff__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoaded_AF1B449D42477593860477A55013288A(UClass* Loaded); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieActive_1D9CDF534780404ABF0AA6893CD541A6(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReady_04DD3D3E4FBD21BFC0E43DAB4B40FA90(AGameStateBase* GameState); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReady_1EB2F019473BE6E555A80C9750A413D8(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TagCountChanged_BA8798CB47FC9A80C5666490EB3D02B0(int32_t TagCount); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateMovementCosmeticParameters(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnEnterVehicle(AFortPlayerPawn* PlayerPawn, int32_t SeatIdx); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnExitVehicle(AFortPlayerPawn* PlayerPawn, FName ExitSocketName); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamaged(float Damage, FGameplayTagContainer& DamageTags, FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Damage State(double Damage); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LocalPassengerADS(bool isADS); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PawnHitByVehicle(AFortPawn* Pawn, FVector& ImpactPoint, FVector& ImpactNormal, FVector LaunchVector, bool bTeleportPawn, float TeleportPawnDistance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStopTick(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldExitStarted(AFortPawn* ExitingPawn, float ExitDuration); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldExitStopped(AFortPawn* ExitingPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHonk(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFireStart(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFireStop(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopAccelRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartAccelRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTireSmoke(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateTireSmoke(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateTireSmoke(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventOutOfFuel(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartOutOfGasRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopOutOfGasRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ManageAccelRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TireSkid(bool Condition); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SkidRumbleStop(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SkidRumbleStart(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BrakingRumbleStart(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BrakingRumbleStop(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartHandbrake(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStopHandbrake(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopHandbrakeHaptics(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandbrakeSkid(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AccelCameraShakeBegin(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AccelCameraShakeEnd(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartHandbrakeCameraShake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopHandbrakeCameraShake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateHandbrakeCameraShake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBoostStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBoostFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopBoostCameraShake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BoostRumbleStop(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRimScrapeDamage(int32_t TireIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetLastHitPlayer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamageablePartHealthChanged_Event(FVehicleDamageablePartConfig& PartConfig, FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FX_Init_Settings(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExplodeCosmetics(AActor* DestroyedActor); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnteredWaterBody(AFortWaterBodyActor* WaterBody); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitedWaterBody(AFortWaterBodyActor* WaterBody); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapFoamtoWaterSurface(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_WaterFX_ResetDeepWaterEffectActivate(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BrakingSkid(bool Condition); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VFX_DamageState(double Damage); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeoutCosmetics(AActor* DestroyedActor); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CreateRadio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioGo(bool Start, int32_t RadioStationIndex); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyRadio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnWreckFX(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_PawnEnterVehicleWhileInWater(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_PawnExitVehicleWhileInWater(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSleepStateChanged(bool bAwake); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PickRandomMaterial(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DisolveVehicle(double Fade); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSurfaceTypeVehicleIsOnChanged(TEnumAsByte<EPhysicalSurface> SurfaceTypeVehicleIsOn); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HealthChanged(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckSpeed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTickAudioFade(float FadeParam); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DropLootOnDamage(AActor* DamagingActor, FHitResult HitResult); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateBoostFX(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateBoostFX(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopHandbrakeRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShiftBlip(bool bUpshift); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BoostFOV_Rumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReverseBoostTimeline(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBoostRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopBoostRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BoostCameraReverse(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartBoostRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWaterTooDeep(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModAppliedOnClient(FGameplayTag& ModTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCurieContainerAcquired_BP(FCurieContainerHandle CurieContainerHandle); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnExplode(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnStartCriticalHealth(AController* LastDamageInstigator); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamagePlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PawnExitSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PawnEnterSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LoadAudioControllerClass(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CurrentGearCheck(int32_t NewGear); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveParticleData(TArray<FBasicParticleData>& Data, UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RepairPart(FName NewParam); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BreakPart(FName NewParam); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTireMod(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeleteTireMod(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RepairAll(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyAll(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioStartEvent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RadioQuestEvent(); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleCosmeticsFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CurrentGearCheckCosmetic(int32_t NewGear, bool IgnoreExhaustPops); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BroadcastCollisionHitAudio(AActor* OtherActor, FVector NormalImpulse, FVector ImpactPoint, FVector LaunchVector); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopDriverCameraShake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartDriverCameraShake(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ScaleVehicleHealthByPlaylist(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FuelComponent_OutOfFuel(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FuelComponent_RefuledFromEmpty(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CanHitLastDriver(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Valet_BasicCar_Vehicle(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnHitByVehicle__DelegateSignature(AFortPawn* FortPawn, FVector ImpactNormal, FVector LaunchVector); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NewEventDispatcher__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Valet/BasicCar/Valet_BasicCar_VehicleConfigs_BR.Valet_BasicCar_VehicleConfigs_BR_C
	// Inherited from UFortDagwoodVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x0 (0xF18 - 0xF18)
	class UValet_BasicCar_VehicleConfigs_BR_C : public UFortDagwoodVehicleConfigs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicCar/Valet_BasicCar_VehicleConfigs_BR.Valet_BasicCar_VehicleConfigs_BR_C");
			return ret;
		}
	};


	// Class /Valet/BasicCar/Valet_BasicCar_VehicleConfigs.Valet_BasicCar_VehicleConfigs_C
	// Inherited from UFortDagwoodVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x0 (0xF18 - 0xF18)
	class UValet_BasicCar_VehicleConfigs_C : public UFortDagwoodVehicleConfigs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicCar/Valet_BasicCar_VehicleConfigs.Valet_BasicCar_VehicleConfigs_C");
			return ret;
		}
	};


	// Class /Valet/BasicCar/Valet_InteractionOverride_Default.Valet_InteractionOverride_Default_C
	// Inherited from UFortVehicleInteractionOverrideComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UValet_InteractionOverride_Default_C : public UFortVehicleInteractionOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicCar/Valet_InteractionOverride_Default.Valet_InteractionOverride_Default_C");
			return ret;
		}
	};


	// Class /Valet/BasicCar/GE_RecentlyHonked.GE_RecentlyHonked_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_RecentlyHonked_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicCar/GE_RecentlyHonked.GE_RecentlyHonked_C");
			return ret;
		}
	};


	// Class /Valet/BasicCar/CameraShakes/Valet_OffRoad_CameraShake.Valet_OffRoad_CameraShake_C
	// Inherited from ULegacyCameraShake -> UCameraShakeBase -> UObject
	// Size: 0x0 (0x1F0 - 0x1F0)
	class UValet_OffRoad_CameraShake_C : public ULegacyCameraShake	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicCar/CameraShakes/Valet_OffRoad_CameraShake.Valet_OffRoad_CameraShake_C");
			return ret;
		}
	};


	// Class /Valet/BasicCar/CameraShakes/Valet_Passenger_Base_CameraMode.Valet_Passenger_Base_CameraMode_C
	// Inherited from UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x8 (0x1E50 - 0x1E48)
	class UValet_Passenger_Base_CameraMode_C : public UFortCameraMode_AthenaVehicle	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x1E48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Valet/BasicCar/CameraShakes/Valet_Passenger_Base_CameraMode.Valet_Passenger_Base_CameraMode_C");
			return ret;
		}
	};

}
