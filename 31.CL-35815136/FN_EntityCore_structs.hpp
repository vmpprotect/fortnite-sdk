#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EntityCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EntityCore.ComponentData
	// Size: 0x1 (0x1 - 0x0)
	struct FComponentData	
	{
	public:
	};


	// Struct EntityCore.EntityPositionComponentData
	// Inherited from FComponentData
	// Size: 0x18 (0x18 - 0x0)
	struct FEntityPositionComponentData : public FComponentData	
	{
	public:
		FVector WorldPosition; // 0x0(0x18)
	};


	// Struct EntityCore.EntityRotationComponentData
	// Inherited from FComponentData
	// Size: 0x18 (0x18 - 0x0)
	struct FEntityRotationComponentData : public FComponentData	
	{
	public:
		FRotator WorldRotation; // 0x0(0x18)
	};


	// Struct EntityCore.EntityScaleComponentData
	// Inherited from FComponentData
	// Size: 0x18 (0x18 - 0x0)
	struct FEntityScaleComponentData : public FComponentData	
	{
	public:
		FVector WorldScale3D; // 0x0(0x18)
	};


	// Struct EntityCore.EntityCoreSystemRelativePositionComponentData
	// Inherited from FComponentData
	// Size: 0x20 (0x20 - 0x0)
	struct FEntityCoreSystemRelativePositionComponentData : public FComponentData	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct EntityCore.EntityComponentContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FEntityComponentContainer	
	{
	public:
		TArray<UEntityComponent*> Array; // 0x0(0x10)
	};


	// Struct EntityCore.EntityTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FEntityTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};

}
