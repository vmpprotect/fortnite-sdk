#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMCalibrationRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FMCalibrationRuntime.FMEvent_Calibration_ToggleModal
	// Size: 0x2 (0x2 - 0x0)
	struct FFMEvent_Calibration_ToggleModal	
	{
	public:
		bool UsePreamble; // 0x0(0x1)
		bool bIsAutoLaunched; // 0x1(0x1)
	};


	// Struct FMCalibrationRuntime.FMEvent_Calibration_ModalOpened
	// Size: 0x1 (0x1 - 0x0)
	struct FFMEvent_Calibration_ModalOpened	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct FMCalibrationRuntime.FMEvent_Calibration_ModalClosed
	// Size: 0x1 (0x1 - 0x0)
	struct FFMEvent_Calibration_ModalClosed	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct FMCalibrationRuntime.FMEvent_Calibration_ModalSkipped
	// Size: 0x1 (0x1 - 0x0)
	struct FFMEvent_Calibration_ModalSkipped	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
