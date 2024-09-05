#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActorEntity
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ActorEntity.ActorEntityMappingArrayItem
	// Inherited from FFastArraySerializerItem
	// Size: 0x14 (0x20 - 0xC)
	struct FActorEntityMappingArrayItem : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UBaseEntity* Entity; // 0x10(0x8)
		UObject* Object; // 0x18(0x8)
	};


	// Struct ActorEntity.ActorEntityMappingArray
	// Inherited from FFastArraySerializer
	// Size: 0x28 (0x130 - 0x108)
	struct FActorEntityMappingArray : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		TArray<FActorEntityMappingArrayItem> Entities; // 0x120(0x10)
	};


	// Struct ActorEntity.SubEntityInteropRules
	// Size: 0x18 (0x18 - 0x0)
	struct FSubEntityInteropRules	
	{
	public:
		FName ComponentName; // 0x0(0x4)
		EConsideredForActorEntityInterop Considered; // 0x4(0x4)
		TArray<TWeakObjectPtr> AllowedEntityComponents; // 0x8(0x10)
	};


	// Struct ActorEntity.ActorEntityInteropRules
	// Size: 0x58 (0x58 - 0x0)
	struct FActorEntityInteropRules	
	{
	public:
		TWeakObjectPtr<UClass*> ActorClass; // 0x0(0x20)
		EConsideredForActorEntityInterop ActorEntityConsidered; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> AllowedEntityComponents; // 0x28(0x10)
		EConsideredForActorEntityInterop SubEntitiesConsidered; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<FSubEntityInteropRules> SubEntityRules; // 0x40(0x10)
		bool bEnableEntityReplication; // 0x50(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};

}
