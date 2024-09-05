#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortGameplayGraph
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortGameplayGraph.FortConnectivityGraph
	// Inherited from UGraph -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UFortConnectivityGraph : public UGraph	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortGameplayGraph.FortConnectivityGraph");
			return ret;
		}
	};


	// Class FortGameplayGraph.FortConnectivityGraphIsland
	// Inherited from UGraphIsland -> UGraphElement -> UObject
	// Size: 0x50 (0x150 - 0x100)
	class UFortConnectivityGraphIsland : public UGraphIsland	
	{
	public:
		TSet<FGraphVertexHandle> SupportNodes; // 0x100(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortGameplayGraph.FortConnectivityGraphIsland");
			return ret;
		}
	};


	// Class FortGameplayGraph.FortConnectivityGraphVertex
	// Inherited from UGraphVertex -> UGraphElement -> UObject
	// Size: 0x20 (0x110 - 0xF0)
	class UFortConnectivityGraphVertex : public UGraphVertex	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xF0(0x18) UNKNOWN PROPERTY
		bool bIsIndependentlySupported; // 0x108(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortGameplayGraph.FortConnectivityGraphVertex");
			return ret;
		}
	};

}
