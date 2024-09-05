#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NetworkPrediction
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
