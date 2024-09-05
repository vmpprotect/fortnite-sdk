#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TempestRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct TempestRuntime.TempestStateInfo
	// Size: 0xC (0xC - 0x0)
	struct FTempestStateInfo	
	{
	public:
		ETempestState CurrentState; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float StartTime; // 0x4(0x4)
		float EndTime; // 0x8(0x4)
	};


	// Struct TempestRuntime.TempestReplicatedMovementData
	// Size: 0x50 (0x50 - 0x0)
	struct FTempestReplicatedMovementData	
	{
	public:
		FVector TargetServerLocation; // 0x0(0x18)
		FVector LastServerLocation; // 0x18(0x18)
		FQuat LastServerRotation; // 0x30(0x20)
	};


	// Struct TempestRuntime.TempestStateChangeTimerInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FTempestStateChangeTimerInfo	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};

}
