#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassReplication
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MassReplication.MassFastArrayItemBase
	// Inherited from FFastArraySerializerItem
	// Size: 0x4 (0x10 - 0xC)
	struct FMassFastArrayItemBase : public FFastArraySerializerItem	
	{
	public:
		FMassReplicatedAgentHandle Handle; // 0xC(0x4)
	};


	// Struct MassReplication.MassReplicatedAgentHandle
	// Inherited from FCompactIndexedHandleBase
	// Size: 0x0 (0x4 - 0x4)
	struct FMassReplicatedAgentHandle : public FCompactIndexedHandleBase	
	{
	public:
	};


	// Struct MassReplication.MassClientBubbleSerializerBase
	// Inherited from FFastArraySerializer
	// Size: 0x30 (0x138 - 0x108)
	struct FMassClientBubbleSerializerBase : public FFastArraySerializer	
	{
	public:
		UWorld* World; // 0x108(0x8)
		UMassSpawnerSubsystem* SpawnerSubsystem; // 0x110(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x118(0x10) UNKNOWN PROPERTY
		UMassReplicationSubsystem* ReplicationSubsystem; // 0x128(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x130(0x8) UNKNOWN PROPERTY
	};


	// Struct MassReplication.MassNetworkIDFragment
	// Inherited from FMassFragment
	// Size: 0x4 (0x4 - 0x0)
	struct FMassNetworkIDFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData00_1[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct MassReplication.MassReplicatedAgentFragment
	// Inherited from FMassFragment
	// Size: 0x18 (0x18 - 0x0)
	struct FMassReplicatedAgentFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct MassReplication.MassReplicationViewerInfoFragment
	// Inherited from FMassFragment
	// Size: 0x18 (0x18 - 0x0)
	struct FMassReplicationViewerInfoFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct MassReplication.MassReplicationLODFragment
	// Inherited from FMassFragment
	// Size: 0x2 (0x2 - 0x0)
	struct FMassReplicationLODFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData00_1[0x2]; // 0x0(0x2) UNKNOWN PROPERTY
	};


	// Struct MassReplication.MassReplicationParameters
	// Inherited from FMassConstSharedFragment
	// Size: 0x58 (0x58 - 0x0)
	struct FMassReplicationParameters : public FMassConstSharedFragment	
	{
	public:
		float LODDistance; // 0x0(0x10)
		float BufferHysteresisOnDistancePercentage; // 0x10(0x4)
		int32_t LODMaxCount; // 0x14(0x10)
		int32_t LODMaxCountPerViewer; // 0x24(0x10)
		float UpdateInterval; // 0x34(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UClass* BubbleInfoClass; // 0x48(0x8)
		UClass* ReplicatorClass; // 0x50(0x8)
	};


	// Struct MassReplication.MassReplicationSharedFragment
	// Inherited from FMassSharedFragment
	// Size: 0x23A0 (0x23A0 - 0x0)
	struct FMassReplicationSharedFragment : public FMassSharedFragment	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		TArray<AMassClientBubbleInfoBase*> BubbleInfos; // 0x20(0x10)
		unsigned char UnknownData01_6[0x2360]; // 0x30(0x2360) UNKNOWN PROPERTY
		UMassReplicatorBase* CachedReplicator; // 0x2390(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x2398(0x8) UNKNOWN PROPERTY
	};


	// Struct MassReplication.MassReplicationGridCellLocationFragment
	// Inherited from FMassFragment
	// Size: 0xC (0xC - 0x0)
	struct FMassReplicationGridCellLocationFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData00_1[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct MassReplication.MassInReplicationGridTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassInReplicationGridTag : public FMassTag	
	{
	public:
	};


	// Struct MassReplication.MassClientBubbleInfoData
	// Size: 0x18 (0x18 - 0x0)
	struct FMassClientBubbleInfoData	
	{
	public:
		TArray<AMassClientBubbleInfoBase*> Bubbles; // 0x0(0x10)
		UClass* BubbleClass; // 0x10(0x8)
	};


	// Struct MassReplication.ReplicatedAgentPositionYawData
	// Size: 0x20 (0x20 - 0x0)
	struct FReplicatedAgentPositionYawData	
	{
	public:
		FVector Position; // 0x0(0x18)
		float Yaw; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct MassReplication.MassClientHandle
	// Inherited from FIndexedHandleBase -> FSimpleIndexedHandleBase
	// Size: 0x0 (0x8 - 0x8)
	struct FMassClientHandle : public FIndexedHandleBase	
	{
	public:
	};


	// Struct MassReplication.MassBubbleInfoClassHandle
	// Inherited from FSimpleIndexedHandleBase
	// Size: 0x0 (0x4 - 0x4)
	struct FMassBubbleInfoClassHandle : public FSimpleIndexedHandleBase	
	{
	public:
	};


	// Struct MassReplication.ReplicatedAgentBase
	// Size: 0x28 (0x28 - 0x0)
	struct FReplicatedAgentBase	
	{
	public:
		FMassNetworkID NetId; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FMassEntityTemplateID TemplateId; // 0x8(0x20)
	};

}
