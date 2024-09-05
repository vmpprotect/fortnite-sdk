#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehicleBouncyChassisRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VehicleBouncyChassisRuntime.VehicleBouncyChassisAnimInstance
	// Inherited from UFortVehicleAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x248 (0x8B0 - 0x668)
	class UVehicleBouncyChassisAnimInstance : public UFortVehicleAnimInstance	
	{
	public:
		FBouncyChassisVehicleState BouncyChassis; // 0x668(0xC)
		unsigned char UnknownData03_6[0x4]; // 0x674(0x4) UNKNOWN PROPERTY
		FBouncyChassisVehicleSetup BouncyChassisSetup; // 0x678(0x48)
		float BouncyChassisBlendRate; // 0x6C0(0x4)
		float VisualSteerAngleInterpRate; // 0x6C4(0x4)
		float WheelLerpSpeed; // 0x6C8(0x4)
		bool bThrottling; // 0x6CC(0x1)
		bool bReversing; // 0x6CD(0x1)
		bool bAccelerating; // 0x6CE(0x1)
		bool bBraking; // 0x6CF(0x1)
		float Throttle; // 0x6D0(0x4)
		float Steering; // 0x6D4(0x4)
		float SteeringAngle; // 0x6D8(0x4)
		bool bWheelsOnGround; // 0x6DC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x6DD(0x3) UNKNOWN PROPERTY
		float ForwardSpeed; // 0x6E0(0x4)
		FBouncyChassisVehicleWheelAnimInfo WheelInfoFR; // 0x6E4(0x2C)
		FBouncyChassisVehicleWheelAnimInfo WheelInfoFL; // 0x710(0x2C)
		FBouncyChassisVehicleWheelAnimInfo WheelInfoBR; // 0x73C(0x2C)
		FBouncyChassisVehicleWheelAnimInfo WheelInfoBL; // 0x768(0x2C)
		unsigned char UnknownData05_7[0x114]; // 0x794(0x114) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleBouncyChassisRuntime.VehicleBouncyChassisAnimInstance");
			return ret;
		}
	};

}
