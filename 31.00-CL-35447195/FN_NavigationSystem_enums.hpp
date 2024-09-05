#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NavigationSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/NavigationSystem.ELinkGenerationDebugFlags
	enum ELinkGenerationDebugFlags
	{
		ELinkGenerationDebugFlags__WalkableSurface = 1,
		ELinkGenerationDebugFlags__WalkableBorders = 2,
		ELinkGenerationDebugFlags__SelectedEdge = 4,
		ELinkGenerationDebugFlags__SelectedEdgeTrajectory = 8,
		ELinkGenerationDebugFlags__SelectedEdgeLandingSamples = 10,
		ELinkGenerationDebugFlags__SelectedEdgeCollisions = 20,
		ELinkGenerationDebugFlags__Links = 40,
		ELinkGenerationDebugFlags__FilteredLinks = 80,
	};


	// Enum /Script/NavigationSystem.ERuntimeGenerationType
	enum ERuntimeGenerationType
	{
		ERuntimeGenerationType__Static = 0,
		ERuntimeGenerationType__DynamicModifiersOnly = 1,
		ERuntimeGenerationType__Dynamic = 2,
		ERuntimeGenerationType__LegacyGeneration = 3,
	};


	// Enum /Script/NavigationSystem.ENavCostDisplay
	enum ENavCostDisplay
	{
		ENavCostDisplay__TotalCost = 0,
		ENavCostDisplay__HeuristicOnly = 1,
		ENavCostDisplay__RealCostOnly = 2,
	};


	// Enum /Script/NavigationSystem.ERecastPartitioning
	enum ERecastPartitioning
	{
		ERecastPartitioning__Monotone = 0,
		ERecastPartitioning__Watershed = 1,
		ERecastPartitioning__ChunkyMonotone = 2,
	};


	// Enum /Script/NavigationSystem.ENavigationLedgeSlopeFilterMode
	enum ENavigationLedgeSlopeFilterMode
	{
		ENavigationLedgeSlopeFilterMode__Recast = 0,
		ENavigationLedgeSlopeFilterMode__None = 1,
		ENavigationLedgeSlopeFilterMode__UseStepHeightFromAgentMaxSlope = 2,
	};


	// Enum /Script/NavigationSystem.EHeightFieldRenderMode
	enum EHeightFieldRenderMode
	{
		EHeightFieldRenderMode__Solid = 0,
		EHeightFieldRenderMode__Walkable = 1,
	};


	// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
	enum ENavSystemOverridePolicy
	{
		ENavSystemOverridePolicy__Override = 0,
		ENavSystemOverridePolicy__Append = 1,
		ENavSystemOverridePolicy__Skip = 2,
	};


	// Enum /Script/NavigationSystem.ESubdivisionLOD
	enum ESubdivisionLOD
	{
		ESubdivisionLOD__Low = 0,
		ESubdivisionLOD__Medium = 1,
		ESubdivisionLOD__High = 2,
		ESubdivisionLOD__Ultra = 3,
	};

}
