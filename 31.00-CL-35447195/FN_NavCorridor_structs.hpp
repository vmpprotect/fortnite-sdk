#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NavCorridor
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
	};

}
