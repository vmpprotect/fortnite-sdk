#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayGraph
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayGraph.GraphElement
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGraphElement : public UObject	
	{
	public:
		EGraphElementType ElementType; // 0x28(0x4)
		FGraphUniqueIndex UniqueIndex; // 0x2C(0x14)
		TWeakObjectPtr<UGraph*> ParentGraph; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayGraph.GraphElement");
			return ret;
		}
	};


	// Class GameplayGraph.Graph
	// Inherited from UObject
	// Size: 0x108 (0x130 - 0x28)
	class UGraph : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0x28(0x60) UNKNOWN PROPERTY
		TMap<FGraphVertexHandle, UGraphVertex*> Vertices; // 0x88(0x50)
		TMap<FGraphIslandHandle, UGraphIsland*> Islands; // 0xD8(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x128(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayGraph.Graph");
			return ret;
		}
	};


	// Class GameplayGraph.GraphIsland
	// Inherited from UGraphElement -> UObject
	// Size: 0xB8 (0x100 - 0x48)
	class UGraphIsland : public UGraphElement	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0x48(0x60) UNKNOWN PROPERTY
		TSet<FGraphVertexHandle> Vertices; // 0xA8(0x50)
		EGraphIslandOperations AllowedOperations; // 0xF8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayGraph.GraphIsland");
			return ret;
		}
	};


	// Class GameplayGraph.GraphVertex
	// Inherited from UGraphElement -> UObject
	// Size: 0xA8 (0xF0 - 0x48)
	class UGraphVertex : public UGraphElement	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x48(0x30) UNKNOWN PROPERTY
		TSet<FGraphVertexHandle> Edges; // 0x78(0x50)
		FGraphIslandHandle ParentIsland; // 0xC8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayGraph.GraphVertex");
			return ret;
		}
	};

}
