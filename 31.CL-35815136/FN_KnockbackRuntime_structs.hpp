#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: KnockbackRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct KnockbackRuntime.KnockbackMutatorData
	// Inherited from FFastArraySerializerItem
	// Size: 0x14 (0x20 - 0xC)
	struct FKnockbackMutatorData : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		APawn* Pawn; // 0x10(0x8)
		float KnockbackMultiplier; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct KnockbackRuntime.KnockbackMutatorDataArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FKnockbackMutatorDataArray : public FFastArraySerializer	
	{
	public:
		TArray<FKnockbackMutatorData> Entries; // 0x108(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
	};

}
