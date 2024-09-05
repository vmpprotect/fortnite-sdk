#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassSmartObjects
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MassSmartObjects.MassSmartObjectUserFragment
	// Inherited from FMassFragment
	// Size: 0x50 (0x50 - 0x0)
	struct FMassSmartObjectUserFragment : public FMassFragment	
	{
	public:
		FGameplayTagContainer UserTags; // 0x0(0x20)
		FSmartObjectClaimHandle InteractionHandle; // 0x20(0x20)
		EMassSmartObjectInteractionStatus InteractionStatus; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		double InteractionCooldownEndTime; // 0x48(0x8)
	};


	// Struct MassSmartObjects.MassSmartObjectTimedBehaviorFragment
	// Inherited from FMassFragment
	// Size: 0x4 (0x4 - 0x0)
	struct FMassSmartObjectTimedBehaviorFragment : public FMassFragment	
	{
	public:
		float UseTime; // 0x0(0x4)
	};


	// Struct MassSmartObjects.MassInActiveSmartObjectsRangeTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassInActiveSmartObjectsRangeTag : public FMassTag	
	{
	public:
	};


	// Struct MassSmartObjects.SmartObjectRegistrationFragment
	// Inherited from FMassFragment
	// Size: 0x10 (0x10 - 0x0)
	struct FSmartObjectRegistrationFragment : public FMassFragment	
	{
	public:
		TWeakObjectPtr Asset; // 0x0(0x8)
		FSmartObjectHandle Handle; // 0x8(0x8)
	};


	// Struct MassSmartObjects.SmartObjectCandidateSlot
	// Size: 0x20 (0x20 - 0x0)
	struct FSmartObjectCandidateSlot	
	{
	public:
		FSmartObjectRequestResult Result; // 0x0(0x18)
		float Cost; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct MassSmartObjects.MassSmartObjectRequestID
	// Size: 0x8 (0x8 - 0x0)
	struct FMassSmartObjectRequestID	
	{
	public:
		FMassEntityHandle Entity; // 0x0(0x8)
	};


	// Struct MassSmartObjects.MassSmartObjectCandidateSlots
	// Size: 0x88 (0x88 - 0x0)
	struct FMassSmartObjectCandidateSlots	
	{
	public:
		unsigned char UnknownData02_7[0x80]; // 0x0(0x80) UNKNOWN PROPERTY
		char NumSlots; // 0x80(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct MassSmartObjects.MassSmartObjectRequestResultFragment
	// Inherited from FMassFragment
	// Size: 0x90 (0x90 - 0x0)
	struct FMassSmartObjectRequestResultFragment : public FMassFragment	
	{
	public:
		FMassSmartObjectCandidateSlots Candidates; // 0x0(0x88)
		bool bProcessed; // 0x88(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
	};


	// Struct MassSmartObjects.MassSmartObjectWorldLocationRequestFragment
	// Inherited from FMassFragment
	// Size: 0x88 (0x88 - 0x0)
	struct FMassSmartObjectWorldLocationRequestFragment : public FMassFragment	
	{
	public:
		FVector SearchOrigin; // 0x0(0x18)
		FMassEntityHandle RequestingEntity; // 0x18(0x8)
		FGameplayTagContainer UserTags; // 0x20(0x20)
		FGameplayTagQuery ActivityRequirements; // 0x40(0x48)
	};


	// Struct MassSmartObjects.MassSmartObjectLaneLocationRequestFragment
	// Inherited from FMassFragment
	// Size: 0x80 (0x80 - 0x0)
	struct FMassSmartObjectLaneLocationRequestFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		FMassEntityHandle RequestingEntity; // 0x10(0x8)
		FGameplayTagContainer UserTags; // 0x18(0x20)
		FGameplayTagQuery ActivityRequirements; // 0x38(0x48)
	};


	// Struct MassSmartObjects.MassSmartObjectCompletedRequestTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassSmartObjectCompletedRequestTag : public FMassTag	
	{
	public:
	};


	// Struct MassSmartObjects.SmartObjectMassEntityUserData
	// Size: 0x8 (0x8 - 0x0)
	struct FSmartObjectMassEntityUserData	
	{
	public:
		FMassEntityHandle UserEntity; // 0x0(0x8)
	};


	// Struct MassSmartObjects.SmartObjectLaneLocation
	// Size: 0x10 (0x10 - 0x0)
	struct FSmartObjectLaneLocation	
	{
	public:
		FSmartObjectHandle ObjectHandle; // 0x0(0x8)
		int32_t LaneIndex; // 0x8(0x4)
		float DistanceAlongLane; // 0xC(0x4)
	};


	// Struct MassSmartObjects.SmartObjectLaneLocationIndices
	// Size: 0x10 (0x10 - 0x0)
	struct FSmartObjectLaneLocationIndices	
	{
	public:
		TArray SmartObjectLaneLocationIndices; // 0x0(0x10)
	};


	// Struct MassSmartObjects.SmartObjectAnnotationData
	// Size: 0xD0 (0xD0 - 0x0)
	struct FSmartObjectAnnotationData	
	{
	public:
		FZoneGraphDataHandle DataHandle; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray AffectedLanes; // 0x8(0x10)
		TArray SmartObjectLaneLocations; // 0x18(0x10)
		TMap SmartObjectToLaneLocationIndexLookup; // 0x28(0x50)
		TMap LaneToLaneLocationIndicesLookup; // 0x78(0x50)
		unsigned char UnknownData03_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
	};

}
