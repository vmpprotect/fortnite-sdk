#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StreamlineBlueprint
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/StreamlineBlueprint.UStreamlineFeature
	enum UStreamlineFeature
	{
		UStreamlineFeature__DLSSG = 0,
		UStreamlineFeature__Reflex = 1,
		UStreamlineFeature__Count = 2,
	};


	// Enum /Script/StreamlineBlueprint.UStreamlineFeatureSupport
	enum UStreamlineFeatureSupport
	{
		UStreamlineFeatureSupport__Supported = 0,
		UStreamlineFeatureSupport__NotSupported = 1,
		UStreamlineFeatureSupport__NotSupportedIncompatibleHardware = 2,
		UStreamlineFeatureSupport__NotSupportedDriverOutOfDate = 3,
		UStreamlineFeatureSupport__NotSupportedOperatingSystemOutOfDate = 4,
		UStreamlineFeatureSupport__NotSupportedHardewareSchedulingDisabled = 5,
		UStreamlineFeatureSupport__NotSupportedByRHI = 6,
		UStreamlineFeatureSupport__NotSupportedByPlatformAtBuildTime = 7,
		UStreamlineFeatureSupport__NotSupportedIncompatibleAPICaptureToolActive = 8,
	};


	// Enum /Script/StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
	enum UStreamlineFeatureRequirementsFlags
	{
		UStreamlineFeatureRequirementsFlags__None = 0,
		UStreamlineFeatureRequirementsFlags__D3D11Supported = 1,
		UStreamlineFeatureRequirementsFlags__D3D12Supported = 2,
		UStreamlineFeatureRequirementsFlags__VulkanSupported = 4,
		UStreamlineFeatureRequirementsFlags__VSyncOffRequired = 8,
		UStreamlineFeatureRequirementsFlags__HardwareSchedulingRequired = 10,
	};


	// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGMode
	enum UStreamlineDLSSGMode
	{
		UStreamlineDLSSGMode__Off = 0,
		UStreamlineDLSSGMode__On = 1,
	};


	// Enum /Script/StreamlineBlueprint.UStreamlineReflexMode
	enum UStreamlineReflexMode
	{
		UStreamlineReflexMode__Disabled = 0,
		UStreamlineReflexMode__Enabled = 1,
		UStreamlineReflexMode__EnabledPlusBoost = 3,
	};

}
