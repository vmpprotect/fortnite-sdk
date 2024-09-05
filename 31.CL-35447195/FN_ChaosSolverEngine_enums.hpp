#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosSolverEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
