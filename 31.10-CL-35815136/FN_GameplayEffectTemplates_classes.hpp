#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayEffectTemplates
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/GameplayEffectTemplates/GET_DamageParent.GET_DamageParent_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DamageParent_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DamageParent.GET_DamageParent_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_AfflictedParent.GET_AfflictedParent_C
	// Inherited from UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_AfflictedParent_C : public UGET_DamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_AfflictedParent.GET_AfflictedParent_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_PeriodicDamageParent.GET_PeriodicDamageParent_C
	// Inherited from UGET_AfflictedParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_PeriodicDamageParent_C : public UGET_AfflictedParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_PeriodicDamageParent.GET_PeriodicDamageParent_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C
	// Inherited from UGET_PeriodicDamageParent_C -> UGET_AfflictedParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_PeriodicPhysicalDamage_C : public UGET_PeriodicDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_PeriodicEnergyDamage.GET_PeriodicEnergyDamage_C
	// Inherited from UGET_PeriodicPhysicalDamage_C -> UGET_PeriodicDamageParent_C -> UGET_AfflictedParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_PeriodicEnergyDamage_C : public UGET_PeriodicPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_PeriodicEnergyDamage.GET_PeriodicEnergyDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_CooldownDuration.GET_CooldownDuration_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_CooldownDuration_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_CooldownDuration.GET_CooldownDuration_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/Get_DirectDamageParent.Get_DirectDamageParent_C
	// Inherited from UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGet_DirectDamageParent_C : public UGET_DamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/Get_DirectDamageParent.Get_DirectDamageParent_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectEnvironmentDamage.GET_DirectEnvironmentDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectEnvironmentDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectEnvironmentDamage.GET_DirectEnvironmentDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectVehicleDamage.GET_DirectVehicleDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectVehicleDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectVehicleDamage.GET_DirectVehicleDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_FallingDamage.GET_FallingDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_FallingDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_FallingDamage.GET_FallingDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_FatalDamage.GET_FatalDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_FatalDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_FatalDamage.GET_FatalDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_TagContainer.GET_TagContainer_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_TagContainer_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_TagContainer.GET_TagContainer_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_Status_FullHealth.GET_Status_FullHealth_C
	// Inherited from UGET_TagContainer_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_Status_FullHealth_C : public UGET_TagContainer_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_Status_FullHealth.GET_Status_FullHealth_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectPhysicalDamage.GET_DirectPhysicalDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectPhysicalDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectPhysicalDamage.GET_DirectPhysicalDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_EnergyCost.GET_EnergyCost_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_EnergyCost_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_EnergyCost.GET_EnergyCost_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_KnockbackImmunityTag.GET_KnockbackImmunityTag_C
	// Inherited from UGET_TagContainer_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_KnockbackImmunityTag_C : public UGET_TagContainer_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_KnockbackImmunityTag.GET_KnockbackImmunityTag_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectEnergyDamage.GET_DirectEnergyDamage_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectEnergyDamage_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectEnergyDamage.GET_DirectEnergyDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_Cooldown.GET_Cooldown_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_Cooldown_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_Cooldown.GET_Cooldown_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/Hero/GET_Cooldown_Hero.GET_Cooldown_Hero_C
	// Inherited from UGET_Cooldown_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_Cooldown_Hero_C : public UGET_Cooldown_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/Hero/GET_Cooldown_Hero.GET_Cooldown_Hero_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/Hero/GET_Cooldown_Hero_Active.GET_Cooldown_Hero_Active_C
	// Inherited from UGET_Cooldown_Hero_C -> UGET_Cooldown_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_Cooldown_Hero_Active_C : public UGET_Cooldown_Hero_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/Hero/GET_Cooldown_Hero_Active.GET_Cooldown_Hero_Active_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DamagePercent.GET_DamagePercent_C
	// Inherited from UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DamagePercent_C : public UGET_DamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DamagePercent.GET_DamagePercent_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectDamage_LootOnDestroy.GET_DirectDamage_LootOnDestroy_C
	// Inherited from UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectDamage_LootOnDestroy_C : public UGET_DamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectDamage_LootOnDestroy.GET_DirectDamage_LootOnDestroy_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectBallisticDamage.GET_DirectBallisticDamage_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectBallisticDamage_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectBallisticDamage.GET_DirectBallisticDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectElementalDamage.GET_DirectElementalDamage_C
	// Inherited from UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectElementalDamage_C : public UGet_DirectDamageParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectElementalDamage.GET_DirectElementalDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectLightningDamage.GET_DirectLightningDamage_C
	// Inherited from UGET_DirectElementalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectLightningDamage_C : public UGET_DirectElementalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectLightningDamage.GET_DirectLightningDamage_C");
			return ret;
		}
	};


	// Class /Game/GameplayEffectTemplates/GET_DirectCreatureDamage.GET_DirectCreatureDamage_C
	// Inherited from UGET_DirectPhysicalDamage_C -> UGet_DirectDamageParent_C -> UGET_DamageParent_C -> UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGET_DirectCreatureDamage_C : public UGET_DirectPhysicalDamage_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/GameplayEffectTemplates/GET_DirectCreatureDamage.GET_DirectCreatureDamage_C");
			return ret;
		}
	};

}
