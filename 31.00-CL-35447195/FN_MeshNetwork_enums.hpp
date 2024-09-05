#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshNetwork
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MeshNetwork.EMeshNetworkNodeType
	enum EMeshNetworkNodeType
	{
		EMeshNetworkNodeType__Root = 0,
		EMeshNetworkNodeType__Inner = 1,
		EMeshNetworkNodeType__Edge = 2,
		EMeshNetworkNodeType__Client = 3,
		EMeshNetworkNodeType__Unknown = 4,
	};


	// Enum /Script/MeshNetwork.EMeshNetworkRelevancy
	enum EMeshNetworkRelevancy
	{
		EMeshNetworkRelevancy__NotRelevant = 0,
		EMeshNetworkRelevancy__RelevantToEdgeNodes = 1,
		EMeshNetworkRelevancy__RelevantToClients = 2,
	};

}
