#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TankRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct TankRuntime.TankWeaponAimingData
	// Size: 0x1C0 (0x1C0 - 0x0)
	struct FTankWeaponAimingData	
	{
	public:
		int32_t SeatIndex; // 0x0(0x4)
		bool bAimRotationLerpWithEasing; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FScalableFloat AimRotationLerpSpeed; // 0x8(0x28)
		FRuntimeFloatCurve AimYawRotationEasingCurve; // 0x30(0x88)
		FRuntimeFloatCurve AimPitchRotationEasingCurve; // 0xB8(0x88)
		TEnumAsByte AimingMode; // 0x140(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x141(0x7) UNKNOWN PROPERTY
		FScalableFloat AimingCameraToMuzzleDistanceScalar; // 0x148(0x28)
		FScalableFloat AimingWhileTargetingCameraToMuzzleDistanceScalar; // 0x170(0x28)
		FScalableFloat AimingPitchAdjust; // 0x198(0x28)
	};


	// Struct TankRuntime.TankAnimAimingData
	// Size: 0x60 (0x60 - 0x0)
	struct FTankAnimAimingData	
	{
	public:
		unsigned char UnknownData01_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct TankRuntime.ServerSocketTransformOverride
	// Size: 0x38 (0x38 - 0x0)
	struct FServerSocketTransformOverride	
	{
	public:
		FName SocketName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector PivotOffset; // 0x8(0x18)
		FVector OffsetFromPivot; // 0x20(0x18)
	};


	// Struct TankRuntime.TankAudioUpdateContext
	// Size: 0xB8 (0xB8 - 0x0)
	struct FTankAudioUpdateContext	
	{
	public:
		bool bIsAwake; // 0x0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float SpeedParamValue; // 0x4(0x4)
		float LeftTrackPower; // 0x8(0x4)
		float RightTrackPower; // 0xC(0x4)
		float TurningParamValue; // 0x10(0x4)
		int32_t CurrentGear; // 0x14(0x4)
		float AccelSpeedThreshold; // 0x18(0x4)
		float LastGearChangeTime; // 0x1C(0x4)
		float AccelWaitTime; // 0x20(0x4)
		bool bTurningRight; // 0x24(0x1)
		bool bTurningLeft; // 0x25(0x1)
		bool bPreviousTryMotion; // 0x26(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x27(0x1) UNKNOWN PROPERTY
		float LastForwardSpeed; // 0x28(0x4)
		float TimeUntilAccelOneShotFade; // 0x2C(0x4)
		float DecelSpeedThreshold; // 0x30(0x4)
		float EngineIdleThreshold; // 0x34(0x4)
		FVector2D WeaponsMovementThreshold; // 0x38(0x10)
		FName CannonSocketName; // 0x48(0x4)
		FName TurretSocketName; // 0x4C(0x4)
		int32_t SurfaceID; // 0x50(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UAudioComponent DecelOneShot; // 0x58(0x8)
		UAudioComponent AccelOneShot; // 0x60(0x8)
		UAudioComponent TurningOneShot; // 0x68(0x8)
		UFortLayeredAudioComponent TracksLeftAudio; // 0x70(0x8)
		UFortLayeredAudioComponent TracksRightAudio; // 0x78(0x8)
		unsigned char UnknownData07_7[0x38]; // 0x80(0x38) UNKNOWN PROPERTY
	};

}
