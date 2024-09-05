#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotorcycleRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MotorcycleRuntime.MotorcycleWheel
	// Size: 0x3C (0x3C - 0x0)
	struct FMotorcycleWheel	
	{
	public:
		FName WheelSocket; // 0x0(0x4)
		float Radius; // 0x4(0x4)
		float TireWidth; // 0x8(0x4)
		float SpringLength; // 0xC(0x4)
		float WheelieMinSpringLength; // 0x10(0x4)
		float SpringStiff; // 0x14(0x4)
		float SpringDamp; // 0x18(0x4)
		float PoppedTireSpringLength; // 0x1C(0x4)
		float PoppedTireSpringStiff; // 0x20(0x4)
		float PoppedTireSpringDamp; // 0x24(0x4)
		float PowerslideSpringStiff; // 0x28(0x4)
		float PowerslideSpringDamp; // 0x2C(0x4)
		float WheelieSpringStiff; // 0x30(0x4)
		float WheelieSpringDamp; // 0x34(0x4)
		EFortMotorcycleWheelTraceMode WheelTraceMode; // 0x38(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
	};

}
