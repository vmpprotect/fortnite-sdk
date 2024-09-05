#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayEffects
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /RidingContent/GameplayEffects/GE_Riding_Creature_Sprint_Burt.GE_Riding_Creature_Sprint_Burt_C
	// Inherited from UGE_Riding_Creature_Sprint_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_Sprint_Burt_C : public UGE_Riding_Creature_Sprint_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayEffects/GE_Riding_Creature_Sprint_Burt.GE_Riding_Creature_Sprint_Burt_C");
			return ret;
		}
	};


	// Class /RidingContent/GameplayEffects/GE_Riding_NotPetableCreature_IsBeingRidden.GE_Riding_NotPetableCreature_IsBeingRidden_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_NotPetableCreature_IsBeingRidden_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayEffects/GE_Riding_NotPetableCreature_IsBeingRidden.GE_Riding_NotPetableCreature_IsBeingRidden_C");
			return ret;
		}
	};


	// Class /RidingContent/GameplayEffects/GE_Riding_Creature_Sprint.GE_Riding_Creature_Sprint_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Riding_Creature_Sprint_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/GameplayEffects/GE_Riding_Creature_Sprint.GE_Riding_Creature_Sprint_C");
			return ret;
		}
	};

}
