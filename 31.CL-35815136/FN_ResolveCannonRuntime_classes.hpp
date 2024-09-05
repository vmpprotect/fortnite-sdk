#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ResolveCannonRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ResolveCannonRuntime.FortVehicleAnimInstance_MountedCannon
	// Inherited from UFortMountedTurretAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x690 - 0x688)
	class UFortVehicleAnimInstance_MountedCannon : public UFortMountedTurretAnimInstance	
	{
	public:
		float AimingYawLastFrame; // 0x688(0x4)
		float MinTimeStepForInterpolatingTurnRate; // 0x68C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResolveCannonRuntime.FortVehicleAnimInstance_MountedCannon");
			return ret;
		}
	};

}
