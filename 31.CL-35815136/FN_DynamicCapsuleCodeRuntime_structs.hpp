#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DynamicCapsuleCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DynamicCapsuleCodeRuntime.DynamicCapsuleState
	// Size: 0x10 (0x10 - 0x0)
	struct FDynamicCapsuleState	
	{
	public:
		float CapsuleRadius; // 0x0(0x4)
		float CapsuleHalfHeight; // 0x4(0x4)
		double RelativeMeshHeight; // 0x8(0x8)
	};


	// Struct DynamicCapsuleCodeRuntime.DynamicCapsuleEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FDynamicCapsuleEntry	
	{
	public:
		FGameplayTag Tag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDynamicCapsuleState State; // 0x8(0x10)
	};

}
