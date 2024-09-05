#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HighTowerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HighTowerRuntime.HighTowerDateLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1430 - 0x1420)
	class UHighTowerDateLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsFiringLeft; // 0x1420(0x1)
		bool bIsFiringRight; // 0x1421(0x1)
		bool bShouldPlayCustomJumpLand; // 0x1422(0x1)
		bool bMontageActive; // 0x1423(0x1)
		bool bIsBoostJumping; // 0x1424(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x1425(0xB) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x7]; // 0x4B9(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x3]; // 0x48D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HighTowerRuntime.FortAthenaMutator_HighTowerAbilityIntro");
			return ret;
		}

		void OnBeginSkydiveFromBus(AFortPlayerControllerZone* PlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A9B8C(relative to base address)
	};

}
