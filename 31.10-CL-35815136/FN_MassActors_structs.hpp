#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassActors
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MassActors.MassActorSpawnRequestHandle
	// Inherited from FIndexedHandleBase -> FSimpleIndexedHandleBase
	// Size: 0x0 (0x8 - 0x8)
	struct FMassActorSpawnRequestHandle : public FIndexedHandleBase	
	{
	public:
	};


	// Struct MassActors.MassActorSpawnRequest
	// Size: 0xD0 (0xD0 - 0x0)
	struct FMassActorSpawnRequest	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UClass* Template; // 0x8(0x8)
		unsigned char UnknownData01_6[0x90]; // 0x10(0x90) UNKNOWN PROPERTY
		AActor* SpawnedActor; // 0xA0(0x8)
		unsigned char UnknownData02_7[0x28]; // 0xA8(0x28) UNKNOWN PROPERTY
	};


	// Struct MassActors.MassGuidFragment
	// Inherited from FObjectWrapperFragment -> FMassFragment
	// Size: 0x10 (0x10 - 0x0)
	struct FMassGuidFragment : public FObjectWrapperFragment	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct MassActors.MassActorInstanceFragment
	// Inherited from FMassFragment
	// Size: 0x20 (0x20 - 0x0)
	struct FMassActorInstanceFragment : public FMassFragment	
	{
	public:
		FActorInstanceHandle Handle; // 0x0(0x20)
	};


	// Struct MassActors.MassActorFragment
	// Inherited from FObjectWrapperFragment -> FMassFragment
	// Size: 0xC (0xC - 0x0)
	struct FMassActorFragment : public FObjectWrapperFragment	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x0(0x8)
		unsigned char UnknownData00_7[0x4]; // 0x8(0x4) UNKNOWN PROPERTY
	};


	// Struct MassActors.MassAgentInitializationQueue
	// Size: 0x10 (0x10 - 0x0)
	struct FMassAgentInitializationQueue	
	{
	public:
		TArray<UMassAgentComponent*> AgentComponents; // 0x0(0x10)
	};


	// Struct MassActors.CapsuleComponentWrapperFragment
	// Inherited from FObjectWrapperFragment -> FMassFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FCapsuleComponentWrapperFragment : public FObjectWrapperFragment	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MassActors.MassCapsuleTransformCopyToMassTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassCapsuleTransformCopyToMassTag : public FMassTag	
	{
	public:
	};


	// Struct MassActors.MassCapsuleTransformCopyToActorTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassCapsuleTransformCopyToActorTag : public FMassTag	
	{
	public:
	};


	// Struct MassActors.CharacterMovementComponentWrapperFragment
	// Inherited from FObjectWrapperFragment -> FMassFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FCharacterMovementComponentWrapperFragment : public FObjectWrapperFragment	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MassActors.MassCharacterMovementCopyToMassTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassCharacterMovementCopyToMassTag : public FMassTag	
	{
	public:
	};


	// Struct MassActors.MassCharacterMovementCopyToActorTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassCharacterMovementCopyToActorTag : public FMassTag	
	{
	public:
	};


	// Struct MassActors.MassCharacterOrientationCopyToMassTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassCharacterOrientationCopyToMassTag : public FMassTag	
	{
	public:
	};


	// Struct MassActors.MassCharacterOrientationCopyToActorTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassCharacterOrientationCopyToActorTag : public FMassTag	
	{
	public:
	};


	// Struct MassActors.MassSceneComponentWrapperFragment
	// Inherited from FObjectWrapperFragment -> FMassFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FMassSceneComponentWrapperFragment : public FObjectWrapperFragment	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MassActors.MassSceneComponentLocationCopyToMassTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassSceneComponentLocationCopyToMassTag : public FMassTag	
	{
	public:
	};


	// Struct MassActors.MassSceneComponentLocationCopyToActorTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassSceneComponentLocationCopyToActorTag : public FMassTag	
	{
	public:
	};


	// Struct MassActors.DataFragment_BehaviorTreeComponentWrapper
	// Inherited from FObjectWrapperFragment -> FMassFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FDataFragment_BehaviorTreeComponentWrapper : public FObjectWrapperFragment	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};

}
