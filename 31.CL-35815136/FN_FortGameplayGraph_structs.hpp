#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortGameplayGraph
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortGameplayGraph.SerializableConnectivityGraphVertex
	// Size: 0x1 (0x1 - 0x0)
	struct FSerializableConnectivityGraphVertex	
	{
	public:
		bool bIsIndependentlySupported; // 0x0(0x1)
	};


	// Struct FortGameplayGraph.SerializableConnectivityGraph_v2
	// Inherited from FSerializableGraph
	// Size: 0x50 (0xC8 - 0x78)
	struct FSerializableConnectivityGraph_v2 : public FSerializableGraph	
	{
	public:
		TMap<FGraphVertexHandle, FSerializableConnectivityGraphVertex> ConnectivityVertexData; // 0x78(0x50)
	};

}
