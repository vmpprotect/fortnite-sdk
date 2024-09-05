#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HeadMountedDisplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct HeadMountedDisplay.XRHMDData
	// Size: 0x60 (0x60 - 0x0)
	struct FXRHMDData	
	{
	public:
		bool bValid; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName DeviceName; // 0x4(0x4)
		FGuid ApplicationInstanceID; // 0x8(0x10)
		ETrackingStatus TrackingStatus; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FVector Position; // 0x20(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0x40(0x20)
	};


	// Struct HeadMountedDisplay.XRMotionControllerData
	// Size: 0x120 (0x120 - 0x0)
	struct FXRMotionControllerData	
	{
	public:
		bool bValid; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName DeviceName; // 0x4(0x4)
		FGuid ApplicationInstanceID; // 0x8(0x10)
		EXRVisualType DeviceVisualType; // 0x18(0x1)
		EControllerHand HandIndex; // 0x19(0x1)
		ETrackingStatus TrackingStatus; // 0x1A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
		FVector GripPosition; // 0x20(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FQuat GripRotation; // 0x40(0x20)
		FVector AimPosition; // 0x60(0x18)
		unsigned char UnknownData03_6[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		FQuat AimRotation; // 0x80(0x20)
		FVector PalmPosition; // 0xA0(0x18)
		unsigned char UnknownData04_6[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		FQuat PalmRotation; // 0xC0(0x20)
		TArray<FVector> HandKeyPositions; // 0xE0(0x10)
		TArray<FQuat> HandKeyRotations; // 0xF0(0x10)
		TArray<float> HandKeyRadii; // 0x100(0x10)
		bool bIsGrasped; // 0x110(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x111(0xF) UNKNOWN PROPERTY
	};


	// Struct HeadMountedDisplay.XRDeviceId
	// Size: 0x8 (0x8 - 0x0)
	struct FXRDeviceId	
	{
	public:
		FName SystemName; // 0x0(0x4)
		int32_t DeviceID; // 0x4(0x4)
	};

}
