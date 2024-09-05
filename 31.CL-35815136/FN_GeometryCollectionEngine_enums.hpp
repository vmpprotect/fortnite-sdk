#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryCollectionEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
	enum ECollectionAttributeEnum
	{
		ECollectionAttributeEnum__Chaos_Active = 0,
		ECollectionAttributeEnum__Chaos_DynamicState = 1,
		ECollectionAttributeEnum__Chaos_CollisionGroup = 2,
		ECollectionAttributeEnum__Chaos_Max = 3,
	};


	// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
	enum ECollectionGroupEnum
	{
		ECollectionGroupEnum__Chaos_Traansform = 0,
		ECollectionGroupEnum__Chaos_Max = 1,
	};


	// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
	enum EChaosBreakingSortMethod
	{
		EChaosBreakingSortMethod__SortNone = 0,
		EChaosBreakingSortMethod__SortByHighestMass = 1,
		EChaosBreakingSortMethod__SortByHighestSpeed = 2,
		EChaosBreakingSortMethod__SortByNearestFirst = 3,
		EChaosBreakingSortMethod__Count = 4,
	};


	// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
	enum EChaosCollisionSortMethod
	{
		EChaosCollisionSortMethod__SortNone = 0,
		EChaosCollisionSortMethod__SortByHighestMass = 1,
		EChaosCollisionSortMethod__SortByHighestSpeed = 2,
		EChaosCollisionSortMethod__SortByHighestImpulse = 3,
		EChaosCollisionSortMethod__SortByNearestFirst = 4,
		EChaosCollisionSortMethod__Count = 5,
	};


	// Enum /Script/GeometryCollectionEngine.EChaosRemovalSortMethod
	enum EChaosRemovalSortMethod
	{
		EChaosRemovalSortMethod__SortNone = 0,
		EChaosRemovalSortMethod__SortByHighestMass = 1,
		EChaosRemovalSortMethod__SortByNearestFirst = 2,
		EChaosRemovalSortMethod__Count = 3,
	};


	// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
	enum EChaosTrailingSortMethod
	{
		EChaosTrailingSortMethod__SortNone = 0,
		EChaosTrailingSortMethod__SortByHighestMass = 1,
		EChaosTrailingSortMethod__SortByHighestSpeed = 2,
		EChaosTrailingSortMethod__SortByNearestFirst = 3,
		EChaosTrailingSortMethod__Count = 4,
	};


	// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
	enum EGeometryCollectionDebugDrawActorHideGeometry
	{
		EGeometryCollectionDebugDrawActorHideGeometry__HideNone = 0,
		EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision = 1,
		EGeometryCollectionDebugDrawActorHideGeometry__HideSelected = 2,
		EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection = 3,
		EGeometryCollectionDebugDrawActorHideGeometry__HideAll = 4,
	};

}
