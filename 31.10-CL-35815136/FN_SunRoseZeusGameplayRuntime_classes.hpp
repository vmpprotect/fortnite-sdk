#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SunRoseZeusGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SunRoseZeusGameplayRuntime.SunRose_Zeus_Player_LayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1430 - 0x1420)
	class USunRose_Zeus_Player_LayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsThrowActive; // 0x1420(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1421(0x3) UNKNOWN PROPERTY
		FGameplayTag LightningAbilityActiveTag; // 0x1424(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x1428(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseZeusGameplayRuntime.SunRose_Zeus_Player_LayerAnimInstance");
			return ret;
		}
	};


	// Class SunRoseZeusGameplayRuntime.SunRose_Zeus_Weapon_Hand_AnimInstance
	// Inherited from UFortWeaponAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x4D0 - 0x4B8)
	class USunRose_Zeus_Weapon_Hand_AnimInstance : public UFortWeaponAnimInstance	
	{
	public:
		bool bIsThrow; // 0x4B8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x4B9(0x7) UNKNOWN PROPERTY
		FString LightningThrowMontageName; // 0x4C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseZeusGameplayRuntime.SunRose_Zeus_Weapon_Hand_AnimInstance");
			return ret;
		}
	};


	// Class SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x78 (0xA00 - 0x988)
	class ABuildingGameplayActorZeusThunderstorm : public ABuildingGameplayActor	
	{
	public:
		FScalableFloat Row_TelegraphDuration; // 0x988(0x28)
		FScalableFloat Row_LightningStrikeFXDelay; // 0x9B0(0x28)
		unsigned char UnknownData00_7[0x28]; // 0x9D8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm");
			return ret;
		}

		void StrikeLightning(FVector Location); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF7513E7474(relative to base address)
		void StartLightningStrike(FVector& Location, float BoltHeight); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513E7324(relative to base address)
		void StartLightningFX(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513E7310(relative to base address)
		void SetStrikeTargetingLocation(FTargetingRequestHandle& TargetingHandle, FVector& Location); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513E71A4(relative to base address)
		void OnTelegraphStart(FVector Location); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults, Memory Exec: 0x7FF7513E7094(relative to base address)
		void OnTelegraphEnd(); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF74E486680(relative to base address)
		void K2_OnTelegraphStart(FVector& Location); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnTelegraphEnd(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnLightningStrikeFX(FVector& Location, float BoltHeight); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnLightningStrike(FVector& Location); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector GetStrikeTargetingLocation(FTargetingRequestHandle& TargetingHandle); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513E6FE8(relative to base address)
	};


	// Class SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x310 (0xE38 - 0xB28)
	class AFortProjectileSunRoseLightning : public AFortProjectileBase	
	{
	public:
		TArray<UClass*> ExplosionDamageGEs; // 0xB28(0x10)
		float ExplosionGELevel; // 0xB38(0x4)
		TEnumAsByte<ECollisionChannel> ExplosionTraceChannel; // 0xB3C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB3D(0x3) UNKNOWN PROPERTY
		FScalableFloat MaxHitsPerFrame; // 0xB40(0x28)
		unsigned char UnknownData01_6[0x2C8]; // 0xB68(0x2C8) UNKNOWN PROPERTY
		FTargetingRequestHandle ExplosionAsyncLOSTargetingHandle; // 0xE30(0x4)
		unsigned char UnknownData02_7[0x4]; // 0xE34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning");
			return ret;
		}

		void OnExplosionFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoExplosionAsyncLOS(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513E6FD4(relative to base address)
	};

}
