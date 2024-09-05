#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EntityActor
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/EntityActor.EEntityActorReplicationOverrideType
	enum EEntityActorReplicationOverrideType
	{
		AutoReplication = 0,
		DoNotReplicate = 1,
		ReplicateAlways = 2,
		Static_Spatial = 3,
		Dynamic_Spatial = 4,
		Dormancy_Spatial = 5,
	};


	// Enum /Script/EntityActor.EEntityActorReplicationRelevancyBucketType
	enum EEntityActorReplicationRelevancyBucketType
	{
		UseVisualCullDistanceForReplicationRelevancy = 0,
		SmallReplicationRelevancy = 1,
		MediumReplicationRelevancy = 2,
		LargeReplicationRelevancy = 3,
		MaxTargetRangeReplicationRelevancy = 4,
		ImportantReplicationRelevancy = 5,
		CustomReplicationRelevancy = 6,
	};


	// Enum /Script/EntityActor.ESimObjectRepNodeMapping
	enum ESimObjectRepNodeMapping
	{
		NotReplicated = 0,
		RelevantAllInsidePlayspace = 1,
		Spatial_Static = 2,
		Spatial_Dynamic = 3,
		Spatial_Dormancy = 4,
	};


	// Enum /Script/EntityActor.ECollisionShapeMode
	enum ECollisionShapeMode
	{
		ECollisionShapeMode__Mesh = 0,
		ECollisionShapeMode__Box = 1,
		ECollisionShapeMode__Capsule = 2,
		ECollisionShapeMode__Sphere = 3,
	};


	// Enum /Script/EntityActor.EDefaultAnimationMode
	enum EDefaultAnimationMode
	{
		EDefaultAnimationMode__UseAnimationBlueprint = 0,
		EDefaultAnimationMode__UseAnimationAsset = 1,
		EDefaultAnimationMode__UseCustomMode = 2,
	};


	// Enum /Script/EntityActor.EDefaultStaticMesh
	enum EDefaultStaticMesh
	{
		EDefaultStaticMesh__Cube = 0,
		EDefaultStaticMesh__Sphere = 1,
		EDefaultStaticMesh__Cylinder = 2,
		EDefaultStaticMesh__Cone = 3,
		EDefaultStaticMesh__Plane = 4,
	};

}
