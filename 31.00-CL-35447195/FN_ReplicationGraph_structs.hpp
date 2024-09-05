#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ReplicationGraph
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ReplicationGraph.ConnectionAlwaysRelevantNodePair
	// Size: 0x10 (0x10 - 0x0)
	struct FConnectionAlwaysRelevantNodePair	
	{
	public:
		UNetConnection NetConnection; // 0x0(0x8)
		UReplicationGraphNode_AlwaysRelevant_ForConnection Node; // 0x8(0x8)
	};


	// Struct ReplicationGraph.AlwaysRelevantActorInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FAlwaysRelevantActorInfo	
	{
	public:
		UNetConnection Connection; // 0x0(0x8)
		AActor LastViewer; // 0x8(0x8)
		AActor LastViewTarget; // 0x10(0x8)
	};


	// Struct ReplicationGraph.TearOffActorInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FTearOffActorInfo	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		AActor Actor; // 0x8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct ReplicationGraph.LastLocationGatherInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FLastLocationGatherInfo	
	{
	public:
		UNetConnection Connection; // 0x0(0x8)
		FVector LastLocation; // 0x8(0x18)
		FVector LastOutOfRangeLocationCheck; // 0x20(0x18)
	};


	// Struct ReplicationGraph.ClassReplicationInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FClassReplicationInfo	
	{
	public:
		float DistancePriorityScale; // 0x0(0x4)
		float StarvationPriorityScale; // 0x4(0x4)
		float AccumulatedNetPriorityBias; // 0x8(0x4)
		uint16_t ReplicationPeriodFrame; // 0xC(0x2)
		uint16_t FastPath_ReplicationPeriodFrame; // 0xE(0x2)
		uint16_t ActorChannelFrameTimeout; // 0x10(0x2)
		unsigned char UnknownData02_6[0x52]; // 0x12(0x52) UNKNOWN PROPERTY
		float CullDistance; // 0x64(0x4)
		float CullDistanceSquared; // 0x68(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};

}
