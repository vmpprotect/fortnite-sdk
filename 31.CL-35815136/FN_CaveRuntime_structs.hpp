#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CaveRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CaveRuntime.CaveMeshNetworkEvent_PlayStatusChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FCaveMeshNetworkEvent_PlayStatusChanged	
	{
	public:
		ECaveMeshNetworkPlayStatus CurrentStatus; // 0x0(0x1)
	};


	// Struct CaveRuntime.CaveMeshNetworkEvent_LevelSequenceStatusChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FCaveMeshNetworkEvent_LevelSequenceStatusChanged	
	{
	public:
		ECaveMeshNetworkLevelSequenceStatus CurrentStatus; // 0x0(0x1)
	};


	// Struct CaveRuntime.CaveMeshNetworkEvent_ChangeTimeOfDay
	// Size: 0x4 (0x4 - 0x0)
	struct FCaveMeshNetworkEvent_ChangeTimeOfDay	
	{
	public:
		float NewTimeOfDay; // 0x0(0x4)
	};

}
