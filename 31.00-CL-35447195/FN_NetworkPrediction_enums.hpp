#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NetworkPrediction
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/NetworkPrediction.ENetworkPredictionTickingPolicy
	enum ENetworkPredictionTickingPolicy
	{
		ENetworkPredictionTickingPolicy__Independent = 1,
		ENetworkPredictionTickingPolicy__Fixed = 2,
		ENetworkPredictionTickingPolicy__All = 3,
	};


	// Enum /Script/NetworkPrediction.ENetworkLOD
	enum ENetworkLOD
	{
		ENetworkLOD__Interpolated = 1,
		ENetworkLOD__SimExtrapolate = 2,
		ENetworkLOD__ForwardPredict = 4,
		ENetworkLOD__All = 7,
	};


	// Enum /Script/NetworkPrediction.ENetworkPredictionStateRead
	enum ENetworkPredictionStateRead
	{
		ENetworkPredictionStateRead__Simulation = 0,
		ENetworkPredictionStateRead__Presentation = 1,
	};

}
