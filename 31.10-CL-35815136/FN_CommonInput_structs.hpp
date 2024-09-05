#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonInput
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CommonInput.CommonInputKeyBrushConfiguration
	// Size: 0xD0 (0xD0 - 0x0)
	struct FCommonInputKeyBrushConfiguration	
	{
	public:
		FKey Key; // 0x0(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FSlateBrush KeyBrush; // 0x20(0xB0)
	};


	// Struct CommonInput.CommonInputKeySetBrushConfiguration
	// Size: 0xC0 (0xC0 - 0x0)
	struct FCommonInputKeySetBrushConfiguration	
	{
	public:
		TArray<FKey> Keys; // 0x0(0x10)
		FSlateBrush KeyBrush; // 0x10(0xB0)
	};


	// Struct CommonInput.InputDeviceIdentifierPair
	// Size: 0x18 (0x18 - 0x0)
	struct FInputDeviceIdentifierPair	
	{
	public:
		FName InputDeviceName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString HardwareDeviceIdentifier; // 0x8(0x10)
	};


	// Struct CommonInput.InputHoldData
	// Size: 0x8 (0x8 - 0x0)
	struct FInputHoldData	
	{
	public:
		float HoldTime; // 0x0(0x4)
		float HoldRollbackTime; // 0x4(0x4)
	};


	// Struct CommonInput.CommonInputPlatformBaseData
	// Size: 0x38 (0x38 - 0x0)
	struct FCommonInputPlatformBaseData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		ECommonInputType DefaultInputType; // 0x8(0x1)
		bool bSupportsMouseAndKeyboard; // 0x9(0x1)
		bool bSupportsGamepad; // 0xA(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
		FName DefaultGamepadName; // 0xC(0x4)
		bool bCanChangeGamepadType; // 0x10(0x1)
		bool bSupportsTouch; // 0x11(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> ControllerData; // 0x18(0x10)
		TArray<UClass*> ControllerDataClasses; // 0x28(0x10)
	};

}
