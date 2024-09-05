#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Balance
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Balance/GameplayEffects/GE_HidePlayerPawn_Default.GE_HidePlayerPawn_Default_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_HidePlayerPawn_Default_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Balance/GameplayEffects/GE_HidePlayerPawn_Default.GE_HidePlayerPawn_Default_C");
			return ret;
		}
	};


	// Class /Game/Balance/Physics/GameplayEffects/GE_PhysicsObject_ImpactDamage_Default.GE_PhysicsObject_ImpactDamage_Default_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_PhysicsObject_ImpactDamage_Default_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Balance/Physics/GameplayEffects/GE_PhysicsObject_ImpactDamage_Default.GE_PhysicsObject_ImpactDamage_Default_C");
			return ret;
		}
	};


	// Class /Game/Balance/Physics/BP_FortPhysicsObjectManager.BP_FortPhysicsObjectManager_C
	// Inherited from AFortPhysicsObjectManager -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x3A8 - 0x3A8)
	class ABP_FortPhysicsObjectManager_C : public AFortPhysicsObjectManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Balance/Physics/BP_FortPhysicsObjectManager.BP_FortPhysicsObjectManager_C");
			return ret;
		}
	};


	// Class /Game/Balance/Physics/BP_PhysicsCollisionHandler.BP_PhysicsCollisionHandler_C
	// Inherited from UFortPhysicsCollisionHandler -> UPhysicsCollisionHandler -> UObject
	// Size: 0x0 (0xF8 - 0xF8)
	class UBP_PhysicsCollisionHandler_C : public UFortPhysicsCollisionHandler	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Balance/Physics/BP_PhysicsCollisionHandler.BP_PhysicsCollisionHandler_C");
			return ret;
		}
	};


	// Class /Game/Balance/CombinedStats/GE_Map_Fortitude_To_Health.GE_Map_Fortitude_To_Health_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Map_Fortitude_To_Health_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Balance/CombinedStats/GE_Map_Fortitude_To_Health.GE_Map_Fortitude_To_Health_C");
			return ret;
		}
	};

}
