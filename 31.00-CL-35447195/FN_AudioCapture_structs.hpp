#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioCapture
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AudioCapture.AudioInputDeviceInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FAudioInputDeviceInfo	
	{
	public:
		FString DeviceName; // 0x0(0x10)
		FString DeviceID; // 0x10(0x10)
		int32_t InputChannels; // 0x20(0x4)
		int32_t PreferredSampleRate; // 0x24(0x4)
		bool bSupportsHardwareAEC : 1; // 0x28:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct AudioCapture.AudioCaptureDeviceInfo
	// Size: 0xC (0xC - 0x0)
	struct FAudioCaptureDeviceInfo	
	{
	public:
		FName DeviceName; // 0x0(0x4)
		int32_t NumInputChannels; // 0x4(0x4)
		int32_t SampleRate; // 0x8(0x4)
	};

}
