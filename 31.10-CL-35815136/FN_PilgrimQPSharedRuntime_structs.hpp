#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PilgrimQPSharedRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Base
	// Size: 0x10 (0x10 - 0x0)
	struct FPilgrimEvent_QuickplayState_Base	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		EPilgrimQuickplayState StateId; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Began
	// Inherited from FPilgrimEvent_QuickplayState_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FPilgrimEvent_QuickplayState_Began : public FPilgrimEvent_QuickplayState_Base	
	{
	public:
	};


	// Struct PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_BeganClient
	// Inherited from FPilgrimEvent_QuickplayState_Began -> FPilgrimEvent_QuickplayState_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FPilgrimEvent_QuickplayState_BeganClient : public FPilgrimEvent_QuickplayState_Began	
	{
	public:
	};


	// Struct PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_BeganServer
	// Inherited from FPilgrimEvent_QuickplayState_Began -> FPilgrimEvent_QuickplayState_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FPilgrimEvent_QuickplayState_BeganServer : public FPilgrimEvent_QuickplayState_Began	
	{
	public:
	};


	// Struct PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_Ended
	// Inherited from FPilgrimEvent_QuickplayState_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FPilgrimEvent_QuickplayState_Ended : public FPilgrimEvent_QuickplayState_Base	
	{
	public:
	};


	// Struct PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_EndedClient
	// Inherited from FPilgrimEvent_QuickplayState_Ended -> FPilgrimEvent_QuickplayState_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FPilgrimEvent_QuickplayState_EndedClient : public FPilgrimEvent_QuickplayState_Ended	
	{
	public:
	};


	// Struct PilgrimQPSharedRuntime.PilgrimEvent_QuickplayState_EndedServer
	// Inherited from FPilgrimEvent_QuickplayState_Ended -> FPilgrimEvent_QuickplayState_Base
	// Size: 0x0 (0x10 - 0x10)
	struct FPilgrimEvent_QuickplayState_EndedServer : public FPilgrimEvent_QuickplayState_Ended	
	{
	public:
	};


	// Struct PilgrimQPSharedRuntime.PilgrimEvent_Quickplay_ReturningToGameplay
	// Size: 0x1 (0x1 - 0x0)
	struct FPilgrimEvent_Quickplay_ReturningToGameplay	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
