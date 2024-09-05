#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Entity
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Entity.FastEntityComponentArrayItem
	// Inherited from FFastArraySerializerItem
	// Size: 0x4 (0x10 - 0xC)
	struct FFastEntityComponentArrayItem : public FFastArraySerializerItem	
	{
	public:
		FName ComponentName; // 0xC(0x4)
	};


	// Struct Entity.FastEntityComponentArray
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FFastEntityComponentArray : public FFastArraySerializer	
	{
	public:
		TArray<FFastEntityComponentArrayItem> Components; // 0x108(0x10)
	};


	// Struct Entity.WorldExecutionPhase
	// Inherited from FTickFunction
	// Size: 0x30 (0x58 - 0x28)
	struct FWorldExecutionPhase : public FTickFunction	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
	};


	// Struct Entity.ReplicatedDataEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FReplicatedDataEntry	
	{
	public:
		UObject* ReplicatedData; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct Entity.ReplicatedDataRegistry
	// Size: 0x10 (0x10 - 0x0)
	struct FReplicatedDataRegistry	
	{
	public:
		TArray<FReplicatedDataEntry> Registry; // 0x0(0x10)
	};

}
