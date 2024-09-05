#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StreamlineBlueprint
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct StreamlineBlueprint.StreamlineVersion
	// Size: 0xC (0xC - 0x0)
	struct FStreamlineVersion	
	{
	public:
		int32_t Major; // 0x0(0x4)
		int32_t Minor; // 0x4(0x4)
		int32_t Build; // 0x8(0x4)
	};


	// Struct StreamlineBlueprint.StreamlineFeatureRequirements
	// Size: 0x34 (0x34 - 0x0)
	struct FStreamlineFeatureRequirements	
	{
	public:
		UStreamlineFeatureSupport Support; // 0x0(0x1)
		UStreamlineFeatureRequirementsFlags Requirements; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FStreamlineVersion RequiredOperatingSystemVersion; // 0x4(0xC)
		FStreamlineVersion DetectedOperatingSystemVersion; // 0x10(0xC)
		FStreamlineVersion RequiredDriverVersion; // 0x1C(0xC)
		FStreamlineVersion DetectedDriverVersion; // 0x28(0xC)
	};

}
