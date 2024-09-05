#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EnergyRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EnergyRuntime.FortEnergyAttrSet
	// Inherited from UFortAttributeSet -> UAttributeSet -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UFortEnergyAttrSet : public UFortAttributeSet	
	{
	public:
		FFortGameplayAttributeData MaxEnergy; // 0x30(0x28)
		FFortGameplayAttributeData RechargeAmountPerSecond; // 0x58(0x28)
		FFortGameplayAttributeData EnergyUsageMultiplier; // 0x80(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnergyRuntime.FortEnergyAttrSet");
			return ret;
		}

		void OnRep_RechargeAmountPerSecond(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7506A6944(relative to base address)
		void OnRep_MaxEnergy(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7506A6844(relative to base address)
		void OnRep_EnergyUsageMultiplier(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7506A6744(relative to base address)
	};


	// Class EnergyRuntime.FortComponent_Energy
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x320 (0x3C0 - 0xA0)
	class UFortComponent_Energy : public UPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnEnergyCompletelyDrained; // 0xA0(0x10)
		FMulticastInlineDelegate OnEnergyRechargeComplete; // 0xB0(0x10)
		FGameplayAttribute MaxEnergyAttribute; // 0xC0(0x38)
		FScalableFloat MaxEnergy; // 0xF8(0x28)
		FGameplayTagQuery RechargeDisabledQuery; // 0x120(0x48)
		unsigned char UnknownData00_6[0x10]; // 0x168(0x10) UNKNOWN PROPERTY
		FGameplayTagQuery EnergyUseDisabledQuery; // 0x178(0x48)
		FTimerHandle BeginRechargeTimerHandle; // 0x1C0(0x8)
		FGameplayTagContainer EnergyTypeIdentifierTagContainer; // 0x1C8(0x20)
		float CurrentEnergy; // 0x1E8(0x4)
		float CachedMaxEnergy; // 0x1EC(0x4)
		float NetEnergyDeltaPerSecond; // 0x1F0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1F4(0x4) UNKNOWN PROPERTY
		FScalableFloat MinEnergyForUsing; // 0x1F8(0x28)
		FGameplayAttribute RechargeAmountPerSecondAttribute; // 0x220(0x38)
		FScalableFloat RechargeAmountPerSecond; // 0x258(0x28)
		FScalableFloat RechargeDelayInSeconds; // 0x280(0x28)
		FScalableFloat RechargePercentageLimit; // 0x2A8(0x28)
		FGameplayAttribute EnergyUsageMultiplierAttribute; // 0x2D0(0x38)
		FScalableFloat EnergyUsageMultiplier; // 0x308(0x28)
		bool bRemoveEnergyUsersWhenEmpty; // 0x330(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x331(0x7) UNKNOWN PROPERTY
		TArray<FEnergyChannelingData> ActiveEnergyChannels; // 0x338(0x10)
		TArray<FEnergyChannelingData> NewActiveEnergyChannels; // 0x348(0x10)
		TArray<FEnergyRegenOverrideData> EnergyRegenOverrides; // 0x358(0x10)
		FMulticastInlineDelegate OnCurrentEnergyChanged; // 0x368(0x10)
		FMulticastInlineDelegate OnEnergyRechargeBegun; // 0x378(0x10)
		FMulticastInlineDelegate OnEnergyRechargeInterrupted; // 0x388(0x10)
		FMulticastInlineDelegate OnEnergyReachedMax; // 0x398(0x10)
		FMulticastInlineDelegate OnEnergyReachedMinForUsing; // 0x3A8(0x10)
		bool bRechargingEnabled : 1; // 0x3B8:0(0x1)
		bool bIsRecharging : 1; // 0x3B8:1(0x1)
		bool bIsUsingEnergy : 1; // 0x3B8:2(0x1)
		unsigned char UnknownBit03 : 1; // 0x3B8:3(0x1) UNKNOWN PROPERTY
		bool bAllowEditMaxEnergyScalableFloat : 1; // 0x3B8:4(0x1)
		bool bAllowEditRechargeAmountPerSecondScalableFloat : 1; // 0x3B8:5(0x1)
		bool bAllowEditEnergyUsageMultiplierScalableFloat : 1; // 0x3B8:6(0x1)
		unsigned char UnknownData04_7[0x7]; // 0x3B9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EnergyRuntime.FortComponent_Energy");
			return ret;
		}

		bool UseEnergy(float& OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A72CC(relative to base address)
		bool StopUsingEnergy(FGameplayTag& EnergyUseIdentifier, UObject* OptionalEnergyUser); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A71B4(relative to base address)
		bool StopAddingEnergy(FGameplayTag& EnergyUseIdentifier, UObject* OptionalEnergySource); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A705C(relative to base address)
		bool StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, FGameplayTag& EnergyUseIdentifier, UObject* OptionalEnergyUser); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A6EC0(relative to base address)
		bool StartAddingEnergy(float EnergyToAddPerSecond, FGameplayTag& EnergySourceIdentifier, UObject* OptionalEnergySource); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A6D68(relative to base address)
		bool SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A6CC8(relative to base address)
		bool RemoveRegenDataOverride(FGameplayTag& RegenOverrideIdentifier); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A6C20(relative to base address)
		void RegisterMutatorUpdatedDelegate(APawn* AffectedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A6A44(relative to base address)
		void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF748FD56D8(relative to base address)
		void OnMutatorUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74851CA88(relative to base address)
		bool HasSufficientEnergy(float EnergyAmountToTest); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A66AC(relative to base address)
		void HandleAbilitySystemComponentInvalidated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74976E2D4(relative to base address)
		void HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF747A6B8F8(relative to base address)
		float GetCurrentEnergyPercentage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A6684(relative to base address)
		bool BP_HasSufficientEnergy(float EnergyAmountToTest); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyRegenDataOverride(FGameplayTag& RegenOverrideIdentifier, float NewRechargeAmountPerSecond, float NewRechargeDelayInSeconds, float NewRechargePercentageLimit); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A646C(relative to base address)
		bool AddEnergy(float& OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A6254(relative to base address)
	};

}
