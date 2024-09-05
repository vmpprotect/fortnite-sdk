#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ZoneGraph
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ZoneGraph.EZoneGraphTags
	enum EZoneGraphTags
	{
		EZoneGraphTags__MaxTags = 20,
		EZoneGraphTags__MaxTagIndex = 1F,
	};


	// Enum /Script/ZoneGraph.EZoneLaneTagMaskComparison
	enum EZoneLaneTagMaskComparison
	{
		EZoneLaneTagMaskComparison__Any = 0,
		EZoneLaneTagMaskComparison__All = 1,
		EZoneLaneTagMaskComparison__Not = 2,
	};


	// Enum /Script/ZoneGraph.EZoneLaneDirection
	enum EZoneLaneDirection
	{
		EZoneLaneDirection__None = 0,
		EZoneLaneDirection__Forward = 1,
		EZoneLaneDirection__Backward = 2,
	};


	// Enum /Script/ZoneGraph.EZoneLaneLinkType
	enum EZoneLaneLinkType
	{
		EZoneLaneLinkType__None = 0,
		EZoneLaneLinkType__All = FF,
		EZoneLaneLinkType__Outgoing = 1,
		EZoneLaneLinkType__Incoming = 2,
		EZoneLaneLinkType__Adjacent = 4,
	};


	// Enum /Script/ZoneGraph.EZoneLaneLinkFlags
	enum EZoneLaneLinkFlags
	{
		EZoneLaneLinkFlags__None = 0,
		EZoneLaneLinkFlags__All = FF,
		EZoneLaneLinkFlags__Left = 1,
		EZoneLaneLinkFlags__Right = 2,
		EZoneLaneLinkFlags__Splitting = 4,
		EZoneLaneLinkFlags__Merging = 8,
		EZoneLaneLinkFlags__OppositeDirection = 10,
	};


	// Enum /Script/ZoneGraph.FZoneShapeType
	enum FZoneShapeType
	{
		FZoneShapeType__Spline = 0,
		FZoneShapeType__Polygon = 1,
	};


	// Enum /Script/ZoneGraph.EZoneShapePolygonRoutingType
	enum EZoneShapePolygonRoutingType
	{
		EZoneShapePolygonRoutingType__Bezier = 0,
		EZoneShapePolygonRoutingType__Arcs = 1,
	};


	// Enum /Script/ZoneGraph.EZoneShapeLaneConnectionRestrictions
	enum EZoneShapeLaneConnectionRestrictions
	{
		EZoneShapeLaneConnectionRestrictions__None = 0,
		EZoneShapeLaneConnectionRestrictions__NoLeftTurn = 1,
		EZoneShapeLaneConnectionRestrictions__NoRightTurn = 2,
		EZoneShapeLaneConnectionRestrictions__OneLanePerDestination = 4,
		EZoneShapeLaneConnectionRestrictions__MergeLanesToOneDestinationLane = 8,
	};


	// Enum /Script/ZoneGraph.FZoneShapePointType
	enum FZoneShapePointType
	{
		FZoneShapePointType__Sharp = 0,
		FZoneShapePointType__Bezier = 1,
		FZoneShapePointType__AutoBezier = 2,
		FZoneShapePointType__LaneProfile = 3,
	};


	// Enum /Script/ZoneGraph.EZoneGraphLaneRoutingCountRule
	enum EZoneGraphLaneRoutingCountRule
	{
		EZoneGraphLaneRoutingCountRule__Any = 0,
		EZoneGraphLaneRoutingCountRule__One = 1,
		EZoneGraphLaneRoutingCountRule__Many = 2,
	};

}
