#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosSolverEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
	enum EClusterConnectionTypeEnum
	{
		EClusterConnectionTypeEnum__Chaos_PointImplicit = 0,
		EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation = 1,
		EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
		EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
		EClusterConnectionTypeEnum__Chaos_BoundsOverlapFilteredDelaunayTriangulation = 4,
		EClusterConnectionTypeEnum__Chaos_None = 5,
		EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max = 6,
	};

}
