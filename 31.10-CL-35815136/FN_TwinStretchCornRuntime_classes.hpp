#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TwinStretchCornRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TwinStretchCornRuntime.FortPlayerViewFollowerComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UFortPlayerViewFollowerComponent : public UGameFrameworkComponent	
	{
	public:
		FVector WolrdOffsetFromPlayerLocation; // 0xA0(0x18)
		FVector RelativeOffsetFromPlayerView; // 0xB8(0x18)
		FFloatRange PitchRange; // 0xD0(0x10)
		FScalableFloat UpdateFrequency; // 0xE0(0x28)
		FScalableFloat LocationLerpSpeed; // 0x108(0x28)
		FScalableFloat RotationLerpSpeed; // 0x130(0x28)
		unsigned char UnknownData00_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TwinStretchCornRuntime.FortPlayerViewFollowerComponent");
			return ret;
		}

		FVector GetRelativeOffsetFromPlayer(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751588764(relative to base address)
	};


	// Class TwinStretchCornRuntime.TwinStretchCornLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x60 (0x1480 - 0x1420)
	class UTwinStretchCornLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsBlocking; // 0x1420(0x1)
		bool bIsFiring; // 0x1421(0x1)
		bool bIsReFiring; // 0x1422(0x1)
		bool bIsFireActive; // 0x1423(0x1)
		float FireAOAlpha; // 0x1424(0x4)
		float ClampedPitch; // 0x1428(0x4)
		float UpperLowerBlendAlpha; // 0x142C(0x4)
		bool bIsUpperBodyOnly; // 0x1430(0x1)
		bool bIsShieldBroken; // 0x1431(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1432(0x2) UNKNOWN PROPERTY
		FGameplayTag CooldownTagName; // 0x1434(0x4)
		FGameplayTagContainer UpperBodyOnlyTestTagContainer; // 0x1438(0x20)
		unsigned char UnknownData01_7[0x28]; // 0x1458(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TwinStretchCornRuntime.TwinStretchCornLayerAnimInstance");
			return ret;
		}
	};


	// Class TwinStretchCornRuntime.TwinStretchCornShieldInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTwinStretchCornShieldInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TwinStretchCornRuntime.TwinStretchCornShieldInterface");
			return ret;
		}

		bool GetShieldIsActive(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74E20ECE4(relative to base address)
	};


	// Class TwinStretchCornRuntime.TwinStretchCornShieldWeaponAnimInstance
	// Inherited from UFortWeaponAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xF8 (0x5B0 - 0x4B8)
	class UTwinStretchCornShieldWeaponAnimInstance : public UFortWeaponAnimInstance	
	{
	public:
		float ShieldPosOffset; // 0x4B8(0x4)
		bool bIsBlocking; // 0x4BC(0x1)
		bool bIsEquip; // 0x4BD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x4BE(0x2) UNKNOWN PROPERTY
		float LagPitch; // 0x4C0(0x4)
		float LagYaw; // 0x4C4(0x4)
		bool bIsShieldBroken; // 0x4C8(0x1)
		bool bIsShieldHit; // 0x4C9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x4CA(0x2) UNKNOWN PROPERTY
		float LagForwardSpeed; // 0x4CC(0x4)
		float ShardNoiseAlpha; // 0x4D0(0x4)
		bool bIsIdleNoise; // 0x4D4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x4D5(0x3) UNKNOWN PROPERTY
		FGameplayTag CooldownTagName; // 0x4D8(0x4)
		unsigned char UnknownData03_7[0xD4]; // 0x4DC(0xD4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TwinStretchCornRuntime.TwinStretchCornShieldWeaponAnimInstance");
			return ret;
		}
	};


	// Class TwinStretchCornRuntime.TwinStretchCornWeaponAnimInstance
	// Inherited from UFortWeaponAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x4C0 - 0x4B8)
	class UTwinStretchCornWeaponAnimInstance : public UFortWeaponAnimInstance	
	{
	public:
		bool bIsBlocking; // 0x4B8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x4B9(0x3) UNKNOWN PROPERTY
		FGameplayTag BlockingTagName; // 0x4BC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TwinStretchCornRuntime.TwinStretchCornWeaponAnimInstance");
			return ret;
		}
	};


	// Class TwinStretchCornRuntime.TwinStretchCornWeaponInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTwinStretchCornWeaponInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TwinStretchCornRuntime.TwinStretchCornWeaponInterface");
			return ret;
		}

		AActor GetShieldActor(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7488DDC68(relative to base address)
	};

}
