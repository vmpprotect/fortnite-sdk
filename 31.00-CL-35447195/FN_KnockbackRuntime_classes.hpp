#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: KnockbackRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class KnockbackRuntime.FortAthenaMutator_Knockback
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x240 (0x578 - 0x338)
	class AFortAthenaMutator_Knockback : public AFortAthenaMutator	
	{
	public:
		bool bStorePlayerKnockbackData; // 0x338(0x1)
		bool bReplicatePlayerKnockbackData; // 0x339(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x33A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPlayerKnockbackDataChanged; // 0x340(0x10)
		FKnockbackMutatorDataArray AllPlayersKnockbackData; // 0x350(0x120)
		FScalableFloat bDisplayKnockbackDamageNumbersAsPercentage; // 0x470(0x28)
		FScalableFloat ConvertToKnockbackDamageMultiplier; // 0x498(0x28)
		FScalableFloat PercentDamageLowMaxThreshold; // 0x4C0(0x28)
		FScalableFloat PercentDamageMediumMaxThreshold; // 0x4E8(0x28)
		float KnockbackMultiplierInitialValue; // 0x510(0x4)
		unsigned char UnknownData03_7[0x64]; // 0x514(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KnockbackRuntime.FortAthenaMutator_Knockback");
			return ret;
		}

		void SetPlayersShouldBreakThroughStructures(bool bActive, AFortPlayerPawn PlayerPawn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFF7D8
		void HandleBlockedCharacterMovement(FHitResult& InOutImpact, AFortPawn FortPawn); // Flags: Final|Native|Private|HasOutParms 0x7FF414CFF6F8
		float GetPercentDamageMediumMaxThreshold(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CFF618
		float GetPercentDamageLowMaxThreshold(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CFF538
		float GetKnockbackMultiplierInitialValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CFF458
		TArray GetAllPlayersKnockbackData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414CFF378
	};


	// Class KnockbackRuntime.FortGameplayAbility_KnockbackMutator
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB50 - 0xB40)
	class UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility	
	{
	public:
		AFortAthenaMutator_Knockback CachedMutator; // 0xB40(0x8)
		UClass MutatorClassToGet; // 0xB48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator");
			return ret;
		}

		void SaveKnockbackData(FKnockbackMutatorData& InKnockbackData); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CFF998
		AFortAthenaMutator_Knockback GetCachedMutator(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF414CFF8B8
	};

}
