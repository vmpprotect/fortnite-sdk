#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarTether
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarTether.DelMarPlayerTetherComponent
	// Inherited from UDelMarPlayerAttachmentComponent -> UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UDelMarPlayerTetherComponent : public UDelMarPlayerAttachmentComponent	
	{
	public:
		TArray WeaponsToGive; // 0xA8(0x10)
		bool bInfiniteAmmo; // 0xB8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		float SecondsBetweenRequests; // 0xBC(0x4)
		TWeakObjectPtr AttachedVehicle; // 0xC0(0x8)
		TWeakObjectPtr TetheredMovementComp; // 0xC8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarTether.DelMarPlayerTetherComponent");
			return ret;
		}

		void OnRep_TetheredMovementComp(); // Flags: Final|Native|Protected 0x7FF414DE9BA0
		void OnRep_AttachedVehicle(); // Flags: Final|Native|Protected 0x7FF414DE9AC0
		void HandleVehicleAppliedTeleportLocation(); // Flags: Final|Native|Protected 0x7FF414DE99E0
	};

}
