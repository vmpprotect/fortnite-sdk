#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SunRoseZeusGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SunRoseZeusGameplayRuntime.SunRose_Zeus_Player_LayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1420 - 0x1410)
	class USunRose_Zeus_Player_LayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsThrowActive; // 0x1410(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1411(0x3) UNKNOWN PROPERTY
		FGameplayTag LightningAbilityActiveTag; // 0x1414(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x1418(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x7]; // 0x4B9(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_7[0x28]; // 0x9D8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseZeusGameplayRuntime.BuildingGameplayActorZeusThunderstorm");
			return ret;
		}

		void StrikeLightning(FVector Location); // Flags: Final|Native|Private|HasDefaults 0x7FF414D02D38
		void StartLightningStrike(FVector& Location, float BoltHeight); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D02C58
		void StartLightningFX(); // Flags: Final|Native|Private 0x7FF414D02B78
		void SetStrikeTargetingLocation(FTargetingRequestHandle& TargetingHandle, FVector& Location); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D02A98
		void OnTelegraphStart(FVector Location); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 0x7FF414D029B8
		void OnTelegraphEnd(); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected 0x7FF414D028D8
		void K2_OnTelegraphStart(FVector& Location); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D027F8
		void K2_OnTelegraphEnd(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D02718
		void K2_OnLightningStrikeFX(FVector& Location, float BoltHeight); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D02638
		void K2_OnLightningStrike(FVector& Location); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D02558
		FVector GetStrikeTargetingLocation(FTargetingRequestHandle& TargetingHandle); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D02478
	};


	// Class SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x310 (0xE38 - 0xB28)
	class AFortProjectileSunRoseLightning : public AFortProjectileBase	
	{
	public:
		TArray ExplosionDamageGEs; // 0xB28(0x10)
		float ExplosionGELevel; // 0xB38(0x4)
		TEnumAsByte ExplosionTraceChannel; // 0xB3C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xB3D(0x3) UNKNOWN PROPERTY
		FScalableFloat MaxHitsPerFrame; // 0xB40(0x28)
		unsigned char UnknownData04_6[0x2C8]; // 0xB68(0x2C8) UNKNOWN PROPERTY
		FTargetingRequestHandle ExplosionAsyncLOSTargetingHandle; // 0xE30(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xE34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseZeusGameplayRuntime.FortProjectileSunRoseLightning");
			return ret;
		}

		void OnExplosionFinished(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D02EF8
		void DoExplosionAsyncLOS(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414D02E18
	};

}
