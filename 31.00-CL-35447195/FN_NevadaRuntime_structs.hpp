#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NevadaRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NevadaRuntime.NevadaAudioUpdateContext
	// Size: 0x1 (0x1 - 0x0)
	struct FNevadaAudioUpdateContext	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct NevadaRuntime.NevadaOutContinuous
	// Inherited from FFortVehicleOutContinuous
	// Size: 0x8 (0x58 - 0x50)
	struct FNevadaOutContinuous : public FFortVehicleOutContinuous	
	{
	public:
		float AltimeterTraceHitDistance; // 0x50(0x4)
		float TractorBeamAppliedForceMagnitude; // 0x54(0x4)
	};


	// Struct NevadaRuntime.NevadaOutPersistent
	// Inherited from FFortVehicleOutPersistent
	// Size: 0x428 (0x450 - 0x28)
	struct FNevadaOutPersistent : public FFortVehicleOutPersistent	
	{
	public:
		unsigned char UnknownData01_1[0x428]; // 0x28(0x428) UNKNOWN PROPERTY
	};


	// Struct NevadaRuntime.NevadaState
	// Size: 0x14 (0x14 - 0x0)
	struct FNevadaState	
	{
	public:
		ENevadaFlightStates CurrentStatus; // 0x0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t LivesRemaining; // 0x4(0x4)
		bool bHijackingActive; // 0x8(0x1)
		bool bPilotBubbleCollisionEnabled; // 0x9(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		float CurrentBatteryCharge; // 0xC(0x4)
		bool bCannonEnabled; // 0x10(0x1)
		bool bTractorBeamEnabled; // 0x11(0x1)
		unsigned char UnknownData05_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct NevadaRuntime.NevadaMoveModeConfig
	// Size: 0x14 (0x14 - 0x0)
	struct FNevadaMoveModeConfig	
	{
	public:
		float ThrustForce; // 0x0(0x4)
		float LiftForce; // 0x4(0x4)
		float MaxHorizontalSpeed; // 0x8(0x4)
		float MaxVerticalSpeed; // 0xC(0x4)
		float DragForceMultiplier; // 0x10(0x4)
	};


	// Struct NevadaRuntime.DampedSpringConfig
	// Size: 0xC (0xC - 0x0)
	struct FDampedSpringConfig	
	{
	public:
		float Stiffness; // 0x0(0x4)
		float Damping; // 0x4(0x4)
		float MaxAccel; // 0x8(0x4)
	};


	// Struct NevadaRuntime.NevadaInPersistent
	// Inherited from FFortVehicleInPersistent
	// Size: 0x110 (0x2B0 - 0x1A0)
	struct FNevadaInPersistent : public FFortVehicleInPersistent	
	{
	public:
		UFortNevadaVehicleConfigs FortNevadaVehicleConfigs; // 0x1A0(0x8)
		bool bBoostThrust; // 0x1A8(0x1)
		bool bBoostDrag; // 0x1A9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x1AA(0x2) UNKNOWN PROPERTY
		float TractorBeamExtraLengthForExtents; // 0x1AC(0x4)
		bool bUseTractorBeamUprightForce; // 0x1B0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1B1(0x7) UNKNOWN PROPERTY
		FVector CrashingDesiredUp; // 0x1B8(0x18)
		ENevadaFlightStates CurrentVehicleState; // 0x1D0(0x1)
		unsigned char UnknownData05_7[0xDF]; // 0x1D1(0xDF) UNKNOWN PROPERTY
	};

}
