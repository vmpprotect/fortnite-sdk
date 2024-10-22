#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Rock_Vehicle
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /RockVehicle/Rock_Vehicle.Rock_Vehicle_C
	// Inherited from ARockVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x4D8 (0x2828 - 0x2350)
	class ARock_Vehicle_C : public ARockVehicle	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2350(0x8)
		UBoxComponent* OverlapVolume; // 0x2358(0x8)
		UNiagaraComponent* Ambient_Exhaust_FX; // 0x2360(0x8)
		URockVehicleAbility_GroundTrails* RockVehicleAbility_GroundTrails; // 0x2368(0x8)
		UFortVehiclePontoonsComponent* FortVehiclePontoons; // 0x2370(0x8)
		URockVehicleAbility_Supersonic* RockVehicleAbility_Supersonic; // 0x2378(0x8)
		UNiagaraComponent* SupersonicTrailSystem_L; // 0x2380(0x8)
		UNiagaraComponent* SupersonicTrailSystem_R; // 0x2388(0x8)
		URockVehicleAbility_StickyWheels* RockVehicleAbility_StickyWheels; // 0x2390(0x8)
		UFortVehiclePhysicsCollisionDamageComponent* NonPhysTickDamageApplier; // 0x2398(0x8)
		URockVehicleBoostTank* RockVehicleBoostTank; // 0x23A0(0x8)
		UChildActorComponent* AudioControllerBP; // 0x23A8(0x8)
		URockVehicle_InteractionOverrideComponent* RockVehicle_InteractionOverride; // 0x23B0(0x8)
		UStaticMeshComponent* BoostCone_R; // 0x23B8(0x8)
		UStaticMeshComponent* BoostCone_L; // 0x23C0(0x8)
		UNiagaraComponent* DriveSystem_R; // 0x23C8(0x8)
		UNiagaraComponent* DriveSystem_L; // 0x23D0(0x8)
		UNiagaraComponent* BoostSystem_R; // 0x23D8(0x8)
		UNiagaraComponent* BoostSystem_L; // 0x23E0(0x8)
		URockVehicleAbility_Dodge* RockVehicleAbility_Dodge; // 0x23E8(0x8)
		URockVehicleAbility_AutoUpright* RockVehicleAbility_AutoUpright; // 0x23F0(0x8)
		URockVehicleAbility_DoubleJump* RockVehicleAbility_DoubleJump; // 0x23F8(0x8)
		URockVehicleAbility_Flip* RockVehicleAbility_Flip; // 0x2400(0x8)
		URockVehicleAbility_Jump* RockVehicleAbility_Jump; // 0x2408(0x8)
		URockVehicleAbility_Boost* RockVehicleAbility_Boost; // 0x2410(0x8)
		URockVehicleAbility_AirControl* RockVehicleAbility_AirControl; // 0x2418(0x8)
		float Timeline_Rumble_33B0465C4B2BCDABA8C49B9C7D345E69; // 0x2420(0x4)
		TEnumAsByte<ETimelineDirection> Timeline__Direction_33B0465C4B2BCDABA8C49B9C7D345E69; // 0x2424(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2425(0x3) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0x2428(0x8)
		double MinImpactEffectForce; // 0x2430(0x8)
		double LastCollisionTime; // 0x2438(0x8)
		double MinTimeBetweenCollision; // 0x2440(0x8)
		double SpawnImpactFX_VehicleSpeed; // 0x2448(0x8)
		double SpawnImpactFX_VehicleSpeed_Limit; // 0x2450(0x8)
		FMulticastInlineDelegate OnCollision; // 0x2458(0x10)
		UNiagaraComponent* RoadAndExhaustFX; // 0x2468(0x8)
		double ExplodeRadius; // 0x2470(0x8)
		UClass* GE_ExplodeVehicleDamage; // 0x2478(0x8)
		UClass* GE_Explode_BuildingDamage; // 0x2480(0x8)
		UClass* GE_ExplodePlayerDamage; // 0x2488(0x8)
		TArray<AActor*> TargetedActors; // 0x2490(0x10)
		double CachedExplosionDamageBuildings; // 0x24A0(0x8)
		double CachedExplosionDamageVehicles; // 0x24A8(0x8)
		double CachedExplosionDamagePlayers; // 0x24B0(0x8)
		double ExplodePlayerImpulse; // 0x24B8(0x8)
		double ExplodeSpinThrustMagnitude; // 0x24C0(0x8)
		FVector ExplodeVehicleSpin; // 0x24C8(0x18)
		AFortPawn* ExplodeInstigator; // 0x24E0(0x8)
		AFN_RadialForce_C* FN_RadialForce; // 0x24E8(0x8)
		FScalableFloat Explosion_Damage_Buildings; // 0x24F0(0x28)
		FScalableFloat ExplosionDamageBuildings; // 0x2518(0x28)
		FScalableFloat ExplosionDamagePlayers; // 0x2540(0x28)
		FScalableFloat ExplosionDamageVehicles; // 0x2568(0x28)
		double ExplodeImpulseZ_Magnitude; // 0x2590(0x8)
		double ExplodeVehicleImpulse; // 0x2598(0x8)
		FGameplayTagContainer HideHUD_Tag; // 0x25A0(0x20)
		UMaterialInstanceDynamic* BodyDynamicMaterial; // 0x25C0(0x8)
		APawn* DriverPawn; // 0x25C8(0x8)
		bool CriticalDamage; // 0x25D0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x25D1(0x7) UNKNOWN PROPERTY
		double CriticalDamageThreshold; // 0x25D8(0x8)
		FMulticastInlineDelegate OnWaterStateChanged; // 0x25E0(0x10)
		UMaterialInstanceDynamic* ChassisMat; // 0x25F0(0x8)
		AFortWaterBodyActor* WaterBody; // 0x25F8(0x8)
		UNiagaraSystem* TemplateWaterSplashFX; // 0x2600(0x8)
		FTimerHandle TimerSnapFoamToWaterSurface; // 0x2608(0x8)
		UNiagaraComponent* NS_LargeSplashFX; // 0x2610(0x8)
		double VehicleFallSpeed; // 0x2618(0x8)
		bool IsInDeepWater; // 0x2620(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2621(0x7) UNKNOWN PROPERTY
		UNiagaraSystem* FX_Road_Interaction_and_Exhaust_Template; // 0x2628(0x8)
		UNiagaraComponent* FX_Road_Interaction_And_Exhaust; // 0x2630(0x8)
		double TargetBoostGlow; // 0x2638(0x8)
		double CurrentBoostGlow; // 0x2640(0x8)
		double BoostGlowInterpRate; // 0x2648(0x8)
		FMulticastInlineDelegate OnCriticalDamage; // 0x2650(0x10)
		bool bReplicatedTricksEnabled; // 0x2660(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x2661(0x3) UNKNOWN PROPERTY
		FActiveGameplayEffectHandle HidePlayerGameplayEffectHandle; // 0x2664(0x8)
		FGameplayTag Supersonic_GC; // 0x266C(0x4)
		double HealthPctMissingToShowDmgCrinkle; // 0x2670(0x8)
		double MaxCrinkleSeverity; // 0x2678(0x8)
		double Damage_Stage1; // 0x2680(0x8)
		UNiagaraComponent* DamageFX; // 0x2688(0x8)
		UNiagaraSystem* NS_DamageFX; // 0x2690(0x8)
		double Explosion_CameraShake_Radius; // 0x2698(0x8)
		double PreFadeCleanupDelay; // 0x26A0(0x8)
		UNiagaraComponent* WreckFX; // 0x26A8(0x8)
		bool HitPlayerShouldIgnore_Fall_Damage; // 0x26B0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x26B1(0x3) UNKNOWN PROPERTY
		FGameplayTag HitPawnCue; // 0x26B4(0x4)
		FGameplayCueParameters GCParamsEmpty; // 0x26B8(0xD0)
		FScalableFloat RagdollEnabled; // 0x2788(0x28)
		AFortPlayerPawnAthena* LastHitPlayer; // 0x27B0(0x8)
		FGameplayTag HitPlayerCue; // 0x27B8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x27BC(0x4) UNKNOWN PROPERTY
		AFortPlayerController* DriverPlayerController; // 0x27C0(0x8)
		double BoostRumbleIntensity; // 0x27C8(0x8)
		UNiagaraSystem* NS_JumpStageOne; // 0x27D0(0x8)
		UNiagaraSystem* NS_JumpStageTwo; // 0x27D8(0x8)
		UForceFeedbackEffect* FF_DoubleJumpDodge; // 0x27E0(0x8)
		UForceFeedbackEffect* FF_Jump; // 0x27E8(0x8)
		UFXSystemAsset* NS_PlayerImpact; // 0x27F0(0x8)
		UFXSystemAsset* NS_ScrapeImpact; // 0x27F8(0x8)
		double HitDelta; // 0x2800(0x8)
		double CameraVelocityDelta; // 0x2808(0x8)
		UClass* BigHit_CameraShake; // 0x2810(0x8)
		UForceFeedbackEffect* FF_BigHit; // 0x2818(0x8)
		UNiagaraComponent* CriticalHealthFireFX; // 0x2820(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Rock_Vehicle.Rock_Vehicle_C");
			return ret;
		}

		void CameraShakeOnHit(double HitMagnitude); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFallInstigator(AFortPlayerPawnAthena* InPawn); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateDamageValueOnMaterial(double PercentHealthMissing); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplySupersonicBlur(bool Apply, APawn* Pawn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_bReplicatedTricksEnabled(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBoostGlow(double DeltaSeconds); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_CriticalDamage(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_DriverPawn(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBodyTeamColor(AActor* ContextActor); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector CalcImpulseDirection(AActor* Vehicle, double Magnitude); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CacheExplosionDamageValues(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyBuildingExplosionDamage(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupMaterials(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_Boost_K2Node_ComponentBoundEvent_2_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_Boost_K2Node_ComponentBoundEvent_3_ActorComponentDeactivateSignature__DelegateSignature(UActorComponent* Component); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_Jump_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_Dodge_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_DoubleJump_K2Node_ComponentBoundEvent_5_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCollisionHitEffects(FVector& HitLocation, FVector& HitNormalImpulse, FVector& HitFrictionImpulse, FVector& HitNormal, AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExploded(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExplodeCosmetics(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnExplosionForce(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamaged(float Damage, FGameplayTagContainer& DamageTags, FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnEnterVehicle(AFortPlayerPawn* PlayerPawn, int32_t SeatIdx); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnExitVehicle(AFortPlayerPawn* PlayerPawn, FName ExitSocketName); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PawnHitByVehicle(AFortPawn* Pawn, FVector& ImpactPoint, FVector& ImpactNormal, FVector LaunchVector, bool bTeleportPawn, float TeleportPawnDistance); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_Supersonic_K2Node_ComponentBoundEvent_7_SupersonicTrailsActivate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_Supersonic_K2Node_ComponentBoundEvent_8_SupersonicTrailsDeactivate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_Supersonic_K2Node_ComponentBoundEvent_9_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Rock_Vehicle_RockVehicleAbility_Supersonic_K2Node_ComponentBoundEvent_10_ActorComponentDeactivateSignature__DelegateSignature(UActorComponent* Component); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMinigameTeacmConfigUpdated(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HealthChanged(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSurfaceTypeVehicleIsOnChanged(TEnumAsByte<EPhysicalSurface> SurfaceTypeVehicleIsOn); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapFoamtoWaterSurface(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_WaterFX_ResetDeepWaterEffectActivate(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_PawnEnterVehicleWhileInWater(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CE_PawnExitVehicleWhileInWater(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnteredWaterBody(AFortWaterBodyActor* WaterBody); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitedWaterBody(AFortWaterBodyActor* WaterBody); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFreeCamToggled_Event(bool bFreeCam); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldExitStarted(AFortPawn* ExitingPawn, float ExitDuration); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldExitStopped(AFortPawn* ExitingPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateDamageState(double PercentHealthMissing); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VFX_DamageState(double Damage); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnWreckFire(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CleanUpFXAndFadeAway(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReverseBoostTimeline(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartBoostRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBoostRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopBoostRumble(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnCriticalHealthFire(); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartCriticalHealth_Event(AController* LastDamageInstigator); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSignificanceLODChanged(int32_t NewLOD); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Rock_Vehicle(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCriticalDamage__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWaterStateChanged__DelegateSignature(bool IsEnteringWater); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCollision__DelegateSignature(FVector HitLocation, FVector ImpulseNormal, AActor* Actor, TEnumAsByte<EPhysicalSurface> Surface); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
