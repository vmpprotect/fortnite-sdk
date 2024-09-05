#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WaterAdvanced
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct WaterAdvanced.ShallowWaterSimParameters
	// Size: 0x8 (0x8 - 0x0)
	struct FShallowWaterSimParameters	
	{
	public:
		float WorldGridSize; // 0x0(0x4)
		int32_t ResolutionMaxAxis; // 0x4(0x4)
	};


	// Struct WaterAdvanced.ShallowWaterPhysicsAssetOverride
	// Size: 0x20 (0x20 - 0x0)
	struct FShallowWaterPhysicsAssetOverride	
	{
	public:
		TWeakObjectPtr<UPhysicsAsset*> PhysicsAsset; // 0x0(0x20)
	};


	// Struct WaterAdvanced.ShallowWaterCollisionContext
	// Size: 0x18 (0x18 - 0x0)
	struct FShallowWaterCollisionContext	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		USkeletalMeshComponent* Component; // 0x8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct WaterAdvanced.ShallowWaterCollisionTracker_Actor
	// Size: 0x10 (0x10 - 0x0)
	struct FShallowWaterCollisionTracker_Actor	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> CollisionActor; // 0x8(0x8)
	};


	// Struct WaterAdvanced.ShallowWaterCollisionTracker_Direct
	// Size: 0x10 (0x10 - 0x0)
	struct FShallowWaterCollisionTracker_Direct	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<AWaterBody*> WaterBody; // 0x8(0x8)
	};

}
