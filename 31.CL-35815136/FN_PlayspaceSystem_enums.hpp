#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PlayspaceSystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/PlayspaceSystem.EPlayspaceJurisdictionFilterState
	enum EPlayspaceJurisdictionFilterState
	{
		EPlayspaceJurisdictionFilterState__Initialized = 0,
		EPlayspaceJurisdictionFilterState__PendingResolve = 1,
		EPlayspaceJurisdictionFilterState__Resolved = 2,
	};


	// Enum /Script/PlayspaceSystem.EPlayspaceCreationType
	enum EPlayspaceCreationType
	{
		EPlayspaceCreationType__ChildOfRoot = 0,
		EPlayspaceCreationType__RootDestroy = 1,
		EPlayspaceCreationType__RootInserted = 2,
		EPlayspaceCreationType__RootDoNotClobber = 3,
	};


	// Enum /Script/PlayspaceSystem.EWithinBoundsEvaluationType
	enum EWithinBoundsEvaluationType
	{
		EWithinBoundsEvaluationType__UseOverlaps = 0,
		EWithinBoundsEvaluationType__UseBoxBounds = 1,
		EWithinBoundsEvaluationType__UseSphereBounds = 2,
	};


	// Enum /Script/PlayspaceSystem.EPlayspaceComponentCreationType
	enum EPlayspaceComponentCreationType
	{
		EPlayspaceComponentCreationType__Root = 0,
		EPlayspaceComponentCreationType__ByLocation = 1,
		EPlayspaceComponentCreationType__ByTags = 2,
	};


	// Enum /Script/PlayspaceSystem.EPlayspaceRootType
	enum EPlayspaceRootType
	{
		EPlayspaceRootType__ShouldBeRoot = 0,
		EPlayspaceRootType__ShouldBeClobbered = 1,
	};

}
