#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HealthShieldRegenRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HealthShieldRegenRuntime.FortHealthShieldRegenComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UFortHealthShieldRegenComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0xF8]; // 0xA0(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent");
			return ret;
		}

		void ClearHealthShieldRegen_ShieldListenerDelegates(UGameplayAbility* OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751923268(relative to base address)
		void ClearHealthShieldRegen_HealthListenerDelegates(UGameplayAbility* OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751923050(relative to base address)
		void AssignHealthShieldRegen_ShieldListenerDelegates(UGameplayAbility* OwningAbility, FFortHealthShieldRegen_ShieldDelegateContainer Delegates); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751922EE0(relative to base address)
		void AssignHealthShieldRegen_HealthListenerDelegates(UGameplayAbility* OwningAbility, FFortHealthShieldRegen_HealthDelegateContainer Delegates); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751922D84(relative to base address)
		bool AllowHealthShieldRegen(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751922D68(relative to base address)
	};

}
