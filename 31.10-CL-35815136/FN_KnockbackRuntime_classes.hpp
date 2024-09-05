#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: KnockbackRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x6]; // 0x33A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPlayerKnockbackDataChanged; // 0x340(0x10)
		FKnockbackMutatorDataArray AllPlayersKnockbackData; // 0x350(0x120)
		FScalableFloat bDisplayKnockbackDamageNumbersAsPercentage; // 0x470(0x28)
		FScalableFloat ConvertToKnockbackDamageMultiplier; // 0x498(0x28)
		FScalableFloat PercentDamageLowMaxThreshold; // 0x4C0(0x28)
		FScalableFloat PercentDamageMediumMaxThreshold; // 0x4E8(0x28)
		float KnockbackMultiplierInitialValue; // 0x510(0x4)
		unsigned char UnknownData01_7[0x64]; // 0x514(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KnockbackRuntime.FortAthenaMutator_Knockback");
			return ret;
		}

		void SetPlayersShouldBreakThroughStructures(bool bActive, AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513C8438(relative to base address)
		void HandleBlockedCharacterMovement(FHitResult& InOutImpact, AFortPawn* FortPawn); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7513C824C(relative to base address)
		float GetPercentDamageMediumMaxThreshold(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513C8218(relative to base address)
		float GetPercentDamageLowMaxThreshold(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513C81E4(relative to base address)
		float GetKnockbackMultiplierInitialValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D345F80(relative to base address)
		TArray GetAllPlayersKnockbackData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7513C8140(relative to base address)
	};


	// Class KnockbackRuntime.FortGameplayAbility_KnockbackMutator
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB50 - 0xB40)
	class UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility	
	{
	public:
		AFortAthenaMutator_Knockback* CachedMutator; // 0xB40(0x8)
		UClass* MutatorClassToGet; // 0xB48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator");
			return ret;
		}

		void SaveKnockbackData(FKnockbackMutatorData& InKnockbackData); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513C83BC(relative to base address)
		AFortAthenaMutator_Knockback GetCachedMutator(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7513C81C0(relative to base address)
	};

}
