#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WheelGrenadeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WheelGrenadeRuntime.WheelGrenadeWheel
	// Inherited from AAttachableWheel -> AActor -> UObject
	// Size: 0x18 (0x348 - 0x330)
	class AWheelGrenadeWheel : public AAttachableWheel	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		float MaxHealth; // 0x338(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x33C(0x4) UNKNOWN PROPERTY
		UFortAbilitySystemComponent AbilitySystemComponent; // 0x340(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WheelGrenadeRuntime.WheelGrenadeWheel");
			return ret;
		}

		void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, AController InEventInstigator, AActor InDamageCauser); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414D5C078
		void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, AController EventInstigator, AActor DamageCauser); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414D5BF98
		float GetMaxHealth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D5BEB8
		float GetHealth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D5BDD8
	};

}
