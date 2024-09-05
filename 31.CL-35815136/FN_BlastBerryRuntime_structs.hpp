#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BlastBerryRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct BlastBerryRuntime.BlastBerryTeamLives
	// Size: 0x8 (0x8 - 0x0)
	struct FBlastBerryTeamLives	
	{
	public:
		char TeamID; // 0x0(0x1)
		int8_t TeamLivesUsed; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ServerTimeForRecharge; // 0x4(0x4)
	};


	// Struct BlastBerryRuntime.BlastBerrySoloRespawnData
	// Size: 0x38 (0x38 - 0x0)
	struct FBlastBerrySoloRespawnData	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};

}
