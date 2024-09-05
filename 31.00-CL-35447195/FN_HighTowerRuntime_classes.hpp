#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HighTowerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HighTowerRuntime.HighTowerDateLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1420 - 0x1410)
	class UHighTowerDateLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsFiringLeft; // 0x1410(0x1)
		bool bIsFiringRight; // 0x1411(0x1)
		bool bShouldPlayCustomJumpLand; // 0x1412(0x1)
		bool bMontageActive; // 0x1413(0x1)
		bool bIsBoostJumping; // 0x1414(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x1415(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HighTowerRuntime.HighTowerDateLayerAnimInstance");
			return ret;
		}
	};


	// Class HighTowerRuntime.FortItemLayerAnimInstance_DateGaunlets
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x4C0 - 0x4B8)
	class UFortItemLayerAnimInstance_DateGaunlets : public UFortBaseLayerAnimInstance	
	{
	public:
		bool bIsBoostJumping; // 0x4B8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x4B9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HighTowerRuntime.FortItemLayerAnimInstance_DateGaunlets");
			return ret;
		}
	};


	// Class HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro
	// Inherited from AFortAthenaMutator_GameModeBase -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x490 - 0x488)
	class AFortAthenaMutator_HighTowerAbilityIntro : public AFortAthenaMutator_GameModeBase	
	{
	public:
		FGameplayTag ShowAbilityIntroTag; // 0x488(0x4)
		bool bPlayOnlyOnce; // 0x48C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x48D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro");
			return ret;
		}

		void OnBeginSkydiveFromBus(AFortPlayerControllerZone PlayerController); // Flags: Final|Native|Private 0x7FF414BDA698
	};

}
