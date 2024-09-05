#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ResolveCannonRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
