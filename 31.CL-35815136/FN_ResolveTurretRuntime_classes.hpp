#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ResolveTurretRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x40 (0x1460 - 0x1420)
	class UFortPlayerAnimInstance_AntiVehMountedTurret : public UFortPlayerAnimInstanceProxy	
	{
	public:
		FVector HandAttachL; // 0x1420(0x18)
		FVector HandAttachR; // 0x1438(0x18)
		FName HandAttachBoneNameL; // 0x1450(0x4)
		FName HandAttachBoneNameR; // 0x1454(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x1458(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x68C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x68C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret");
			return ret;
		}
	};

}
