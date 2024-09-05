#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MusterCoreWeaponsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile
	// Inherited from AFortProjectileAthena -> AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x90 (0xD50 - 0xCC0)
	class AFortMusterExplosiveARProjectile : public AFortProjectileAthena	
	{
	public:
		FVector HitLocation; // 0xCC0(0x18)
		FRotator HitRotation; // 0xCD8(0x18)
		bool bHitPlayer; // 0xCF0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xCF1(0x3) UNKNOWN PROPERTY
		float DrawDistance; // 0xCF4(0x4)
		UParticleSystemComponent* ProjectileTrail; // 0xCF8(0x8)
		UNiagaraSystem* NS_Explosion; // 0xD00(0x8)
		FGameplayTag FeedbackCue; // 0xD08(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xD0C(0x4) UNKNOWN PROPERTY
		FVector DecalSize; // 0xD10(0x18)
		float DecalLifeSpan; // 0xD28(0x4)
		float TimebeforeDecalFadeOut; // 0xD2C(0x4)
		float DecalFadeOutDuration; // 0xD30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xD34(0x4) UNKNOWN PROPERTY
		UMaterialInterface* DecalMaterial; // 0xD38(0x8)
		USoundBase* Cue_CloseSound; // 0xD40(0x8)
		USoundBase* Cue_DistantSound; // 0xD48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile");
			return ret;
		}

		void SetHitRotation(FRotator& NewHitRotation); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506A8FFC(relative to base address)
		void SetHitPlayer(bool bWasHit); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506A8F74(relative to base address)
		void SetHitLocation(FVector& NewHitLocation); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7506A8E74(relative to base address)
		void OnRep_HitLocation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A8DD0(relative to base address)
	};


	// Class MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x28 (0x3E0 - 0x3B8)
	class UMusterCoreWeaponsAnimInstance : public UAnimInstance	
	{
	public:
		AFortWeapon* OwningWeapon; // 0x3B8(0x8)
		bool bIsShotFired; // 0x3C0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x3C1(0x3) UNKNOWN PROPERTY
		int32_t LocalAmmoCount; // 0x3C4(0x4)
		float CylinderMaskAlpha; // 0x3C8(0x4)
		bool bIsAmmoCountTwo; // 0x3CC(0x1)
		bool bIsAmmoCountOne; // 0x3CD(0x1)
		bool bStateRuleFromFullToTwoAmmo; // 0x3CE(0x1)
		bool bStateRuleFromTwoToOneAmmo; // 0x3CF(0x1)
		bool bStateRuleFromOneToZero; // 0x3D0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x3D1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance");
			return ret;
		}
	};


	// Class MusterCoreWeaponsRuntime.FortExCaliberProjectile
	// Inherited from AFortProjectileAthena -> AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x90 (0xD50 - 0xCC0)
	class AFortExCaliberProjectile : public AFortProjectileAthena	
	{
	public:
		bool bSimulationRunning; // 0xCC0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xCC1(0x7) UNKNOWN PROPERTY
		FScalableFloat TimeToExplode; // 0xCC8(0x28)
		bool bHasStopped; // 0xCF0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xCF1(0x7) UNKNOWN PROPERTY
		FVector HitNormal; // 0xCF8(0x18)
		TEnumAsByte<EPhysicalSurface> SurfaceType; // 0xD10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD11(0x3) UNKNOWN PROPERTY
		FName SwordRevealMaterialParam; // 0xD14(0x4)
		FName EmissiveColorMaterialParam; // 0xD18(0x4)
		FName HDRMultiplierMaterialParam; // 0xD1C(0x4)
		FLinearColor EmissiveBlueColor; // 0xD20(0x10)
		FLinearColor EmissivePurpleColor; // 0xD30(0x10)
		float MinPitchForRotationAdjustment; // 0xD40(0x4)
		float MaxPitchForRotationAdjustment; // 0xD44(0x4)
		unsigned char UnknownData03_7[0x8]; // 0xD48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile");
			return ret;
		}

		void UnblockPawnCollision(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TriggerExplosion(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSwordRevealEffects(UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506A90C0(relative to base address)
		void SetupProjectileHitAudio(FVector& ProjectileImpactLocation, AActor* HitActor); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFuseColorBasedOnTeam(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestartSimulating(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506A8E60(relative to base address)
		void PlayPreExplosionEfffects(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_bSimulationRunning(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A8DE4(relative to base address)
		void OnAttachedBuildingDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF7506A8998(relative to base address)
		void OnAttachedActorDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A88F4(relative to base address)
		void BP_OnProjectileStopped(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
