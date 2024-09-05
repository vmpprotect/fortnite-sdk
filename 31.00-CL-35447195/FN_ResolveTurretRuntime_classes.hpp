#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ResolveTurretRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x40 (0x1450 - 0x1410)
	class UFortPlayerAnimInstance_AntiVehMountedTurret : public UFortPlayerAnimInstanceProxy	
	{
	public:
		FVector HandAttachL; // 0x1410(0x18)
		FVector HandAttachR; // 0x1428(0x18)
		FName HandAttachBoneNameL; // 0x1440(0x4)
		FName HandAttachBoneNameR; // 0x1444(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x1448(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret");
			return ret;
		}
	};


	// Class ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
	// Inherited from UFortMountedTurretAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x690 - 0x688)
	class UFortVehicleAnimInstance_AntiVehMountedTurret : public UFortMountedTurretAnimInstance	
	{
	public:
		float YawDeltaSmoothed; // 0x688(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x68C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret");
			return ret;
		}
	};


	// Class ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
	// Inherited from UFortMountedTurretAnimInstance -> UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x690 - 0x688)
	class UFortVehicleAnimInstance_SevenMountedTurret : public UFortMountedTurretAnimInstance	
	{
	public:
		float YawDeltaSmoothed; // 0x688(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x68C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret");
			return ret;
		}
	};

}
