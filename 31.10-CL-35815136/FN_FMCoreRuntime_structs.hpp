#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FMCoreRuntime.FMCoreTimeSignature
	// Size: 0x8 (0x8 - 0x0)
	struct FFMCoreTimeSignature	
	{
	public:
		int32_t Numerator; // 0x0(0x4)
		int32_t Denominator; // 0x4(0x4)
	};


	// Struct FMCoreRuntime.FMCoreEvent_AutoCalibrationCompleted
	// Size: 0x4 (0x4 - 0x0)
	struct FFMCoreEvent_AutoCalibrationCompleted	
	{
	public:
		float AutoCalibrationLatencyMs; // 0x0(0x4)
	};


	// Struct FMCoreRuntime.FMCoreEvent_MuteJamAudioChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FFMCoreEvent_MuteJamAudioChanged	
	{
	public:
		bool bIsMuted; // 0x0(0x1)
	};


	// Struct FMCoreRuntime.FMPlayspaceSystemInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FFMPlayspaceSystemInfo	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};

}