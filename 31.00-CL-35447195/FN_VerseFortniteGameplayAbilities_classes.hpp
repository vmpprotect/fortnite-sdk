#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseFortniteGameplayAbilities
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseFortniteGameplayAbilities.FortAnimNotify_UEFNGameplayTag
	// Inherited from UFortAnimNotify_GameplayTag -> UAnimNotify -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFortAnimNotify_UEFNGameplayTag : public UFortAnimNotify_GameplayTag	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteGameplayAbilities.FortAnimNotify_UEFNGameplayTag");
			return ret;
		}
	};


	// Class VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB50 - 0xB40)
	class UFortGameplayAbility_PlayAnim : public UFortGameplayAbility	
	{
	public:
		UAnimMontage MontageToPlay; // 0xB40(0x8)
		float PlayRate; // 0xB48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim");
			return ret;
		}

		void OnInterrupted(); // Flags: Final|Native|Private 0x7FF414BD4118
		void OnCompleted(); // Flags: Final|Native|Private 0x7FF414BD4038
		void OnCancelled(); // Flags: Final|Native|Private 0x7FF414BD3F58
		void OnBlendOut(); // Flags: Final|Native|Private 0x7FF414BD3E78
	};


	// Class VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnimAndApplyEffect
	// Inherited from UFortGameplayAbility_PlayAnim -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x18 (0xB68 - 0xB50)
	class UFortGameplayAbility_PlayAnimAndApplyEffect : public UFortGameplayAbility_PlayAnim	
	{
	public:
		bool bWaitForAnimNotify; // 0xB50(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB51(0x7) UNKNOWN PROPERTY
		UClass EffectToApply; // 0xB58(0x8)
		UTargetingPreset TargetingPreset; // 0xB60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnimAndApplyEffect");
			return ret;
		}
	};


	// Class VerseFortniteGameplayAbilities.VerseGameplayAttribute
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseGameplayAttribute : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteGameplayAbilities.VerseGameplayAttribute");
			return ret;
		}

		FGameplayAttribute GetGameplayAttributeForClass(UClass& AttributeClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BD41F8
	};


	// Class VerseFortniteGameplayAbilities.VerseFortniteAbilityComponentBase
	// Inherited from UEntityActorComponent -> UEntityComponent -> UObject
	// Size: 0x8 (0x90 - 0x88)
	class UVerseFortniteAbilityComponentBase : public UEntityActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortniteGameplayAbilities.VerseFortniteAbilityComponentBase");
			return ret;
		}
	};

}
