#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FlyingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FlyingCodeRuntime.FortMovementMode_FlyingCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x20 (0x30 - 0x10)
	struct FFortMovementMode_FlyingCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		float CeilingHeight; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FRotator MoveOrientation; // 0x18(0x18)
	};

}
