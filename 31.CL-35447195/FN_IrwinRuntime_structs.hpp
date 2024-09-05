#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: IrwinRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct IrwinRuntime.RidingAnimationData
	// Size: 0x14 (0x14 - 0x0)
	struct FRidingAnimationData	
	{
	public:
		bool bIsRidden; // 0x0(0x1)
		bool bIsTurningInPlace; // 0x1(0x1)
		bool bIsSprinting; // 0x2(0x1)
		bool bIsBeingPetted; // 0x3(0x1)
		bool bIsMovingBackwards; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float TurnInPlaceRotationSpeed; // 0x8(0x4)
		float TurnInPlaceAngleDelta; // 0xC(0x4)
		float RiderReferentialYaw; // 0x10(0x4)
	};

}
