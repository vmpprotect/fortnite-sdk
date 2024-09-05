#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ContextualActionCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ContextualActionCodeRuntime.FortMovementMode_SwingingObjectCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x20 (0x30 - 0x10)
	struct FFortMovementMode_SwingingObjectCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		FVector AttachLocation; // 0x10(0x18)
		TWeakObjectPtr<AFortSwingingObject*> TargetSwingingObject; // 0x28(0x8)
	};


	// Struct ContextualActionCodeRuntime.FortMovementMode_SwingingRopeCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x20 (0x30 - 0x10)
	struct FFortMovementMode_SwingingRopeCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		FVector AttachLocation; // 0x10(0x18)
		TWeakObjectPtr<AFortSwingingObject*> TargetSwingingRope; // 0x28(0x8)
	};


	// Struct ContextualActionCodeRuntime.FortSwingingObjectClassData
	// Inherited from FBuildingGameplayActorClassData -> FBuildingActorClassData -> FUserOptionDefinitionContainer
	// Size: 0x0 (0x100 - 0x100)
	struct FFortSwingingObjectClassData : public FBuildingGameplayActorClassData	
	{
	public:
	};

}
