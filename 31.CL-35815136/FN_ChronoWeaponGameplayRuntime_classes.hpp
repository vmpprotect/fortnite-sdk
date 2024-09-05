#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChronoWeaponGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ChronoWeaponGameplayRuntime.AnimInstance_ChronoPanRifle
	// Inherited from UAnimInstance -> UObject
	// Size: 0x18 (0x3D0 - 0x3B8)
	class UAnimInstance_ChronoPanRifle : public UAnimInstance	
	{
	public:
		bool bIsFiring; // 0x3B8(0x1)
		bool bIsReloading; // 0x3B9(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x3BA(0x2) UNKNOWN PROPERTY
		float MagRotationValue; // 0x3BC(0x4)
		FName ResetMagRotationCurveName; // 0x3C0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x3C4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChronoWeaponGameplayRuntime.AnimInstance_ChronoPanRifle");
			return ret;
		}
	};

}
