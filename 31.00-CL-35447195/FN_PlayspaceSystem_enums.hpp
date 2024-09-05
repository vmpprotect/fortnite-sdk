#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PlayspaceSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

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
