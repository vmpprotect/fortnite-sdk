#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DLSSBlueprint
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/DLSSBlueprint.UDLSSSupport
	enum UDLSSSupport
	{
		UDLSSSupport__Supported = 0,
		UDLSSSupport__NotSupported = 1,
		UDLSSSupport__NotSupportedIncompatibleHardware = 2,
		UDLSSSupport__NotSupportedDriverOutOfDate = 3,
		UDLSSSupport__NotSupportedOperatingSystemOutOfDate = 4,
		UDLSSSupport__NotSupportedByPlatformAtBuildTime = 5,
		UDLSSSupport__NotSupportedIncompatibleAPICaptureToolActive = 6,
	};


	// Enum /Script/DLSSBlueprint.UDLSSMode
	enum UDLSSMode
	{
		UDLSSMode__Off = 0,
		UDLSSMode__Auto = 1,
		UDLSSMode__UltraQuality = 2,
		UDLSSMode__Quality = 3,
		UDLSSMode__Balanced = 4,
		UDLSSMode__Performance = 5,
		UDLSSMode__UltraPerformance = 6,
	};

}
