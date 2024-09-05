#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarTether
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarTether.DelMarPlayerTetherComponent
	// Inherited from UDelMarPlayerAttachmentComponent -> UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UDelMarPlayerTetherComponent : public UDelMarPlayerAttachmentComponent	
	{
	public:
		TArray<UFortWeaponItemDefinition*> WeaponsToGive; // 0xA8(0x10)
		bool bInfiniteAmmo; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		float SecondsBetweenRequests; // 0xBC(0x4)
		TWeakObjectPtr<ADelMarVehicle*> AttachedVehicle; // 0xC0(0x8)
		TWeakObjectPtr<UFortPawnComponent_TetheredMovement*> TetheredMovementComp; // 0xC8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTether.DelMarPlayerTetherComponent");
			return ret;
		}

		void OnRep_TetheredMovementComp(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A13964(relative to base address)
		void OnRep_AttachedVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A13964(relative to base address)
		void HandleVehicleAppliedTeleportLocation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A13950(relative to base address)
	};

}
