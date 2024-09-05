#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EntityFortnite
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EntityFortnite.EntityFortniteStormPhase
	// Size: 0x50 (0x50 - 0x0)
	struct FEntityFortniteStormPhase	
	{
	public:
		float WaitTime; // 0x0(0x4)
		float ShrinkTime; // 0x4(0x4)
		float EndRadius; // 0x8(0x4)
		float EndRadiusPercentage; // 0xC(0x4)
		int32_t DamageIndex; // 0x10(0x4)
		bool bMoves; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float MinMovementDistance; // 0x18(0x4)
		float MaxMovementDistance; // 0x1C(0x4)
		float MinMovementDistancePercentage; // 0x20(0x4)
		float MaxMovementDistancePercentage; // 0x24(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FVector4 EndLocation; // 0x30(0x20)
	};

}
