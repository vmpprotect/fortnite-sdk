#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayGraph
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameplayGraph.GraphProperties
	// Size: 0x1 (0x1 - 0x0)
	struct FGraphProperties	
	{
	public:
		bool bGenerateIslands; // 0x0(0x1)
	};


	// Struct GameplayGraph.SerializedEdgeData
	// Size: 0x50 (0x50 - 0x0)
	struct FSerializedEdgeData	
	{
	public:
		FGraphVertexHandle Node1; // 0x0(0x28)
		FGraphVertexHandle Node2; // 0x28(0x28)
	};


	// Struct GameplayGraph.GraphHandle
	// Size: 0x28 (0x28 - 0x0)
	struct FGraphHandle	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FGraphUniqueIndex UniqueIndex; // 0x8(0x14)
		TWeakObjectPtr<UGraph*> WeakGraph; // 0x1C(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayGraph.GraphUniqueIndex
	// Size: 0x14 (0x14 - 0x0)
	struct FGraphUniqueIndex	
	{
	public:
		FGuid UniqueIndex; // 0x0(0x10)
		bool bIsTemporary; // 0x10(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct GameplayGraph.GraphVertexHandle
	// Inherited from FGraphHandle
	// Size: 0x0 (0x28 - 0x28)
	struct FGraphVertexHandle : public FGraphHandle	
	{
	public:
	};


	// Struct GameplayGraph.SerializedIslandData
	// Size: 0x10 (0x10 - 0x0)
	struct FSerializedIslandData	
	{
	public:
		TArray<FGraphVertexHandle> Vertices; // 0x0(0x10)
	};


	// Struct GameplayGraph.SerializableGraph
	// Size: 0x78 (0x78 - 0x0)
	struct FSerializableGraph	
	{
	public:
		FGraphProperties Properties; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FGraphVertexHandle> Vertices; // 0x8(0x10)
		TArray<FSerializedEdgeData> Edges; // 0x18(0x10)
		TMap<FGraphIslandHandle, FSerializedIslandData> Islands; // 0x28(0x50)
	};


	// Struct GameplayGraph.GraphIslandHandle
	// Inherited from FGraphHandle
	// Size: 0x0 (0x28 - 0x28)
	struct FGraphIslandHandle : public FGraphHandle	
	{
	public:
	};

}
