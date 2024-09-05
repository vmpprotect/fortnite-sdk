#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseAbilities
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseAbilities.GameplayAbility_Verse
	// Inherited from UGameplayAbility -> UObject
	// Size: 0x0 (0x3B0 - 0x3B0)
	class UGameplayAbility_Verse : public UGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAbilities.GameplayAbility_Verse");
			return ret;
		}
	};


	// Class VerseAbilities.VerseAbility
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UVerseAbility : public UObject	
	{
	public:
		UClass GameplayAbilityClass; // 0x28(0x8)
		TArray PropertyLinks; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAbilities.VerseAbility");
			return ret;
		}
	};


	// Class VerseAbilities.VerseAbilitySource
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UVerseAbilitySource : public UObject	
	{
	public:
		FVerseAbilityMappingContainer ActivatableAbilities; // 0x28(0x118)
		TWeakObjectPtr AbilitySystemComponent; // 0x140(0x8)
		unsigned char UnknownData01_7[0x58]; // 0x148(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAbilities.VerseAbilitySource");
			return ret;
		}

		void OnRep_AbilitySystemComponent(); // Flags: Final|Native|Private 0x7FF414627E78
	};


	// Class VerseAbilities.VerseAbilitySubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UVerseAbilitySubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseAbilities.VerseAbilitySubsystem");
			return ret;
		}
	};

}
