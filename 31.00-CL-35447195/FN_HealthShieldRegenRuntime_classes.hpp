#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HealthShieldRegenRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HealthShieldRegenRuntime.FortHealthShieldRegenComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UFortHealthShieldRegenComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0xF8]; // 0xA0(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent");
			return ret;
		}

		void ClearHealthShieldRegen_ShieldListenerDelegates(UGameplayAbility OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DDA400
		void ClearHealthShieldRegen_HealthListenerDelegates(UGameplayAbility OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DDA320
		void AssignHealthShieldRegen_ShieldListenerDelegates(UGameplayAbility OwningAbility, FFortHealthShieldRegen_ShieldDelegateContainer Delegates); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DDA240
		void AssignHealthShieldRegen_HealthListenerDelegates(UGameplayAbility OwningAbility, FFortHealthShieldRegen_HealthDelegateContainer Delegates); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414DDA160
		bool AllowHealthShieldRegen(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DDA080
	};

}
