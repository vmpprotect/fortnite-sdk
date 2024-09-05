#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioCapture
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
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
