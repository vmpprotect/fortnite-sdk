#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DynamicCapsuleCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		FGameplayTag tag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDynamicCapsuleState State; // 0x8(0x10)
	};

}
