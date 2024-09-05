#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehicleBouncyChassisRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VehicleBouncyChassisRuntime.BouncyChassisVehicleBoxSpringSetup
	// Size: 0x50 (0x50 - 0x0)
	struct FBouncyChassisVehicleBoxSpringSetup	
	{
	public:
		FVector Strength; // 0x0(0x18)
		FVector Damping; // 0x18(0x18)
		FVector MaxDisplacement; // 0x30(0x18)
		float MaxSpeed; // 0x48(0x4)
		float Mass; // 0x4C(0x4)
	};


	// Struct VehicleBouncyChassisRuntime.BouncyChassisVehicleBoxSpring
	// Size: 0xB0 (0xB0 - 0x0)
	struct FBouncyChassisVehicleBoxSpring	
	{
	public:
		FBouncyChassisVehicleBoxSpringSetup Setup; // 0x0(0x50)
		unsigned char UnknownData01_7[0x60]; // 0x50(0x60) UNKNOWN PROPERTY
	};


	// Struct VehicleBouncyChassisRuntime.BouncyChassisVehicleSpringSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FBouncyChassisVehicleSpringSettings	
	{
	public:
		float Strength; // 0x0(0x4)
		float Damping; // 0x4(0x4)
	};


	// Struct VehicleBouncyChassisRuntime.BouncyChassisVehicleSetup
	// Size: 0x48 (0x48 - 0x0)
	struct FBouncyChassisVehicleSetup	
	{
	public:
		FBouncyChassisVehicleSpringSettings PitchSpring; // 0x0(0x8)
		float PitchMaxAngleDegrees; // 0x8(0x4)
		FBouncyChassisVehicleSpringSettings RollSpring; // 0xC(0x8)
		float RollMaxAngleDegrees; // 0x14(0x4)
		FBouncyChassisVehicleSpringSettings ZSpring; // 0x18(0x8)
		float ZMaxDrop; // 0x20(0x4)
		float ZMaxRaise; // 0x24(0x4)
		FVector MaxDisplacement; // 0x28(0x18)
		float DisplacementZOffset; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct VehicleBouncyChassisRuntime.BouncyChassisVehicleState
	// Size: 0xC (0xC - 0x0)
	struct FBouncyChassisVehicleState	
	{
	public:
		float PitchDegrees; // 0x0(0x4)
		float RollDegrees; // 0x4(0x4)
		float TranslationZ; // 0x8(0x4)
	};


	// Struct VehicleBouncyChassisRuntime.BouncyChassisVehicleInstance
	// Size: 0x108 (0x108 - 0x0)
	struct FBouncyChassisVehicleInstance	
	{
	public:
		FBouncyChassisVehicleBoxSpring Spring; // 0x0(0xB0)
		unsigned char UnknownData01_7[0x58]; // 0xB0(0x58) UNKNOWN PROPERTY
	};


	// Struct VehicleBouncyChassisRuntime.BouncyChassisSpringTravel
	// Size: 0x20 (0x20 - 0x0)
	struct FBouncyChassisSpringTravel	
	{
	public:
		FFloatInterval Default; // 0x0(0x8)
		FFloatInterval Popped; // 0x8(0x8)
		FFloatInterval TireModded; // 0x10(0x8)
		FFloatInterval TireModPopped; // 0x18(0x8)
	};


	// Struct VehicleBouncyChassisRuntime.BouncyChassisVehicleWheelAnimInfo
	// Size: 0x2C (0x2C - 0x0)
	struct FBouncyChassisVehicleWheelAnimInfo	
	{
	public:
		float SpringToWheelOffsetZ; // 0x0(0x4)
		FBouncyChassisSpringTravel SpringTravelRange; // 0x4(0x20)
		float WheelRadius; // 0x24(0x4)
		float TravelDistance; // 0x28(0x4)
	};


	// Struct VehicleBouncyChassisRuntime.AnimNode_VehicleBouncyChassisController
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x18 (0xE0 - 0xC8)
	struct FAnimNode_VehicleBouncyChassisController : public FAnimNode_SkeletalControlBase	
	{
	public:
		FBoneReference ChassisBone; // 0xC8(0xC)
		FBouncyChassisVehicleState BouncyChassis; // 0xD4(0xC)
	};

}
