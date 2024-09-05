#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarTrackRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/DelMarTrackRuntime.EDelMarTrackOobTubeTransitionType
	enum EDelMarTrackOobTubeTransitionType
	{
		EDelMarTrackOobTubeTransitionType__Default = 0,
		EDelMarTrackOobTubeTransitionType__IntoTunnel = 1,
		EDelMarTrackOobTubeTransitionType__OutOfTunnel = 2,
		EDelMarTrackOobTubeTransitionType__IntoPipe = 3,
		EDelMarTrackOobTubeTransitionType__OutOfPipe = 4,
		EDelMarTrackOobTubeTransitionType__NoMeshNeeded = 5,
	};


	// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropType
	enum EDelMarTrackPropType
	{
		EDelMarTrackPropType__None = 0,
		EDelMarTrackPropType__SkeletalMesh = 1,
		EDelMarTrackPropType__StaticMesh = 2,
		EDelMarTrackPropType__Blueprint = 3,
	};


	// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropPlacementPosition
	enum EDelMarTrackPropPlacementPosition
	{
		EDelMarTrackPropPlacementPosition__FromBeginning = 0,
		EDelMarTrackPropPlacementPosition__FromEnding = 1,
	};


	// Enum /Script/DelMarTrackRuntime.EDelMarTrackPropPlacementSpread
	enum EDelMarTrackPropPlacementSpread
	{
		EDelMarTrackPropPlacementSpread__UseDistanceBetween = 0,
		EDelMarTrackPropPlacementSpread__UseNumberOfProps = 1,
		EDelMarTrackPropPlacementSpread__UseBothDistanceAndNumber = 2,
	};


	// Enum /Script/DelMarTrackRuntime.EDelMarTrackRoadPropType
	enum EDelMarTrackRoadPropType
	{
		EDelMarTrackRoadPropType__StartLine = 0,
		EDelMarTrackRoadPropType__FinishLine = 1,
	};


	// Enum /Script/DelMarTrackRuntime.EDelMarTrackSide
	enum EDelMarTrackSide
	{
		EDelMarTrackSide__Neither = 0,
		EDelMarTrackSide__Left = 1,
		EDelMarTrackSide__Right = 2,
		EDelMarTrackSide__Both = 3,
	};


	// Enum /Script/DelMarTrackRuntime.EDelMarTrackSnapComponentMode
	enum EDelMarTrackSnapComponentMode
	{
		EDelMarTrackSnapComponentMode__SetTransform = 0,
		EDelMarTrackSnapComponentMode__SnapToComponent = 1,
	};


	// Enum /Script/DelMarTrackRuntime.EDelMarTrackSplinePointSnapMode
	enum EDelMarTrackSplinePointSnapMode
	{
		EDelMarTrackSplinePointSnapMode__StartingPoint = 0,
		EDelMarTrackSplinePointSnapMode__EndingPoint = 1,
		EDelMarTrackSplinePointSnapMode__CustomPoint = 2,
	};


	// Enum /Script/DelMarTrackRuntime.EDelMarTrackType
	enum EDelMarTrackType
	{
		EDelMarTrackType__Primary = 0,
		EDelMarTrackType__Secondary = 1,
		EDelMarTrackType__Cosmetic = 2,
	};

}
