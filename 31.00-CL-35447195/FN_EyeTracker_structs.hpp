#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EyeTracker
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EyeTracker.EyeTrackerGazeData
	// Size: 0x58 (0x58 - 0x0)
	struct FEyeTrackerGazeData	
	{
	public:
		FVector GazeOrigin; // 0x0(0x18)
		FVector GazeDirection; // 0x18(0x18)
		FVector FixationPoint; // 0x30(0x18)
		float ConfidenceValue; // 0x48(0x4)
		bool bIsLeftEyeBlink; // 0x4C(0x1)
		bool bIsRightEyeBlink; // 0x4D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY
		float LeftPupilDiameter; // 0x50(0x4)
		float RightPupilDiameter; // 0x54(0x4)
	};


	// Struct EyeTracker.EyeTrackerStereoGazeData
	// Size: 0x80 (0x80 - 0x0)
	struct FEyeTrackerStereoGazeData	
	{
	public:
		FVector LeftEyeOrigin; // 0x0(0x18)
		FVector LeftEyeDirection; // 0x18(0x18)
		FVector RightEyeOrigin; // 0x30(0x18)
		FVector RightEyeDirection; // 0x48(0x18)
		FVector FixationPoint; // 0x60(0x18)
		float ConfidenceValue; // 0x78(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};

}
