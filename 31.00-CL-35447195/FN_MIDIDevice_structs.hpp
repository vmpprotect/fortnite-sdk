#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MIDIDevice
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MIDIDevice.FoundMIDIDevice
	// Size: 0x20 (0x20 - 0x0)
	struct FFoundMIDIDevice	
	{
	public:
		int32_t DeviceID; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString DeviceName; // 0x8(0x10)
		bool bCanReceiveFrom; // 0x18(0x1)
		bool bCanSendTo; // 0x19(0x1)
		bool bIsAlreadyInUse; // 0x1A(0x1)
		bool bIsDefaultInputDevice; // 0x1B(0x1)
		bool bIsDefaultOutputDevice; // 0x1C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct MIDIDevice.MIDIDeviceInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FMIDIDeviceInfo	
	{
	public:
		int32_t DeviceID; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString DeviceName; // 0x8(0x10)
		bool bIsAlreadyInUse; // 0x18(0x1)
		bool bIsDefaultDevice; // 0x19(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};

}
