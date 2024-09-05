#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FlyingCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FlyingCodeRuntime.FortMovementMode_FlyingCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x20 (0x30 - 0x10)
	struct FFortMovementMode_FlyingCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		float CeilingHeight; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FRotator MoveOrientation; // 0x18(0x18)
	};

}
