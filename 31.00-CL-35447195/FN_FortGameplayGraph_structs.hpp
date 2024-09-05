#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortGameplayGraph
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TMap ConnectivityVertexData; // 0x78(0x50)
	};

}
