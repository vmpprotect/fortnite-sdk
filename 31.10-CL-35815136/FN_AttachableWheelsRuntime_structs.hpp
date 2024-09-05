#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AttachableWheelsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AttachableWheelsRuntime.AttachableWheelAttachData
	// Size: 0x58 (0x58 - 0x0)
	struct FAttachableWheelAttachData	
	{
	public:
		TWeakObjectPtr<UPrimitiveComponent*> PrimitiveComponent; // 0x0(0x8)
		FVector Pos; // 0x8(0x18)
		FVector Axis1; // 0x20(0x18)
		FVector Axis2; // 0x38(0x18)
		float Damping; // 0x50(0x4)
		FName AttachmentName; // 0x54(0x4)
	};


	// Struct AttachableWheelsRuntime.AttachableWheelRuntimeData
	// Size: 0xC (0xC - 0x0)
	struct FAttachableWheelRuntimeData	
	{
	public:
		float Torque; // 0x0(0x4)
		float Velocity; // 0x4(0x4)
		float SteerAngle; // 0x8(0x4)
	};

}
