#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WheelGrenadeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class WheelGrenadeRuntime.WheelGrenadeWheel
	// Inherited from AAttachableWheel -> AActor -> UObject
	// Size: 0x18 (0x348 - 0x330)
	class AWheelGrenadeWheel : public AAttachableWheel	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		float MaxHealth; // 0x338(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x33C(0x4) UNKNOWN PROPERTY
		UFortAbilitySystemComponent* AbilitySystemComponent; // 0x340(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WheelGrenadeRuntime.WheelGrenadeWheel");
			return ret;
		}

		void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, AController* InEventInstigator, AActor* InDamageCauser); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7515A45E0(relative to base address)
		void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetMaxHealth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515A45A0(relative to base address)
		float GetHealth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515A4560(relative to base address)
	};

}
