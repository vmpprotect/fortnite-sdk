#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NavCorridor
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NavCorridor.NavCorridorParams
	// Size: 0x1C (0x1C - 0x0)
	struct FNavCorridorParams	
	{
	public:
		float Width; // 0x0(0x4)
		float PathOffsetFromBoundaries; // 0x4(0x4)
		float ObstacleTaperAngle; // 0x8(0x4)
		float SmallSectorThreshold; // 0xC(0x4)
		float LargeSectorThreshold; // 0x10(0x4)
		float SimplifyEdgeThreshold; // 0x14(0x4)
		bool bSimplifyFlipPortals; // 0x18(0x1)
		bool bSimplifyConvexPortals; // 0x19(0x1)
		bool bSimplifyConcavePortals; // 0x1A(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
	};

}
