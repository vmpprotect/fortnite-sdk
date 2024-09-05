#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SmartObjectsModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SmartObjectsModule.SmartObjectEventData
	// Size: 0x30 (0x30 - 0x0)
	struct FSmartObjectEventData	
	{
	public:
		FSmartObjectHandle SmartObjectHandle; // 0x0(0x8)
		FSmartObjectSlotHandle SlotHandle; // 0x8(0x10)
		ESmartObjectChangeReason Reason; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FGameplayTag Tag; // 0x1C(0x4)
		unsigned char UnknownData01_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectSlotHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FSmartObjectSlotHandle	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FSmartObjectHandle	
	{
	public:
		uint64_t ID; // 0x0(0x8)
	};


	// Struct SmartObjectsModule.SmartObjectClaimHandle
	// Size: 0x20 (0x20 - 0x0)
	struct FSmartObjectClaimHandle	
	{
	public:
		FSmartObjectHandle SmartObjectHandle; // 0x0(0x8)
		FSmartObjectSlotHandle SlotHandle; // 0x8(0x10)
		FSmartObjectUserHandle UserHandle; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectUserHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FSmartObjectUserHandle	
	{
	public:
		uint32_t ID; // 0x0(0x4)
	};


	// Struct SmartObjectsModule.SmartObjectSlotEntranceLocationResult
	// Size: 0x80 (0x80 - 0x0)
	struct FSmartObjectSlotEntranceLocationResult	
	{
	public:
		FVector Location; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FGameplayTag Tag; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x40(0x20)
		FSmartObjectSlotEntranceHandle EntranceHandle; // 0x60(0x18)
		bool bIsValid; // 0x78(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectSlotEntranceHandle
	// Size: 0x18 (0x18 - 0x0)
	struct FSmartObjectSlotEntranceHandle	
	{
	public:
		FSmartObjectSlotHandle SlotHandle; // 0x0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectSlotEntranceLocationRequest
	// Size: 0x58 (0x58 - 0x0)
	struct FSmartObjectSlotEntranceLocationRequest	
	{
	public:
		AActor* UserActor; // 0x0(0x8)
		UClass* ValidationFilter; // 0x8(0x8)
		ANavigationData* NavigationData; // 0x10(0x8)
		FSmartObjectUserCapsuleParams UserCapsuleParams; // 0x18(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector SearchLocation; // 0x28(0x18)
		FSmartObjectSlotEntrySelectionMethod SelectMethod; // 0x40(0x1)
		ESmartObjectSlotNavigationLocationType LocationType; // 0x41(0x1)
		bool bProjectNavigationLocation; // 0x42(0x1)
		bool bTraceGroundLocation; // 0x43(0x1)
		bool bCheckTransitionTrajectory; // 0x44(0x1)
		bool bCheckEntranceLocationOverlap; // 0x45(0x1)
		bool bCheckSlotLocationOverlap; // 0x46(0x1)
		bool bUseSlotLocationAsFallback; // 0x47(0x1)
		unsigned char UnknownData01_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectUserCapsuleParams
	// Size: 0xC (0xC - 0x0)
	struct FSmartObjectUserCapsuleParams	
	{
	public:
		float Radius; // 0x0(0x4)
		float Height; // 0x4(0x4)
		float StepHeight; // 0x8(0x4)
	};


	// Struct SmartObjectsModule.SmartObjectDefinitionData
	// Size: 0x8 (0x8 - 0x0)
	struct FSmartObjectDefinitionData	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectSlotAnnotation
	// Inherited from FSmartObjectDefinitionData
	// Size: 0x0 (0x8 - 0x8)
	struct FSmartObjectSlotAnnotation : public FSmartObjectDefinitionData	
	{
	public:
	};


	// Struct SmartObjectsModule.SmartObjectWorldConditionBase
	// Inherited from FWorldConditionBase
	// Size: 0x0 (0x10 - 0x10)
	struct FSmartObjectWorldConditionBase : public FWorldConditionBase	
	{
	public:
	};


	// Struct SmartObjectsModule.SmartObjectAnnotation_SlotUserCollision
	// Inherited from FSmartObjectSlotAnnotation -> FSmartObjectDefinitionData
	// Size: 0x10 (0x18 - 0x8)
	struct FSmartObjectAnnotation_SlotUserCollision : public FSmartObjectSlotAnnotation	
	{
	public:
		bool bUseUserCapsuleSize; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FSmartObjectUserCapsuleParams Capsule; // 0xC(0xC)
	};


	// Struct SmartObjectsModule.SmartObjectSlotEntranceAnnotation
	// Inherited from FSmartObjectSlotAnnotation -> FSmartObjectDefinitionData
	// Size: 0x48 (0x50 - 0x8)
	struct FSmartObjectSlotEntranceAnnotation : public FSmartObjectSlotAnnotation	
	{
	public:
		FVector3f Offset; // 0x8(0xC)
		FRotator3f Rotation; // 0x14(0xC)
		FGameplayTagContainer Tags; // 0x20(0x20)
		bool bIsEntry : 1; // 0x40:0(0x1)
		bool bIsExit : 1; // 0x40:1(0x1)
		bool bTraceGroundLocation : 1; // 0x40:2(0x1)
		bool bCheckTransitionTrajectory : 1; // 0x40:3(0x1)
		ESmartObjectEntrancePriority SelectionPriority; // 0x41(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x42(0x2) UNKNOWN PROPERTY
		float TrajectoryStartHeightOffset; // 0x44(0x4)
		float TrajectorySlotHeightOffset; // 0x48(0x4)
		float TransitionCheckRadius; // 0x4C(0x4)
	};


	// Struct SmartObjectsModule.SmartObjectSlotLinkAnnotation
	// Inherited from FSmartObjectSlotAnnotation -> FSmartObjectDefinitionData
	// Size: 0x8 (0x10 - 0x8)
	struct FSmartObjectSlotLinkAnnotation : public FSmartObjectSlotAnnotation	
	{
	public:
		FGameplayTag Tag; // 0x8(0x4)
		FSmartObjectSlotReference LinkedSlot; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectSlotReference
	// Size: 0x1 (0x1 - 0x0)
	struct FSmartObjectSlotReference	
	{
	public:
		char Index; // 0x0(0x1)
	};


	// Struct SmartObjectsModule.SmartObjectComponentInstanceData
	// Inherited from FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x28 (0x90 - 0x68)
	struct FSmartObjectComponentInstanceData : public FActorComponentInstanceData	
	{
	public:
		FSmartObjectDefinitionReference SmartObjectDefinitionRef; // 0x68(0x28)
	};


	// Struct SmartObjectsModule.SmartObjectDefinitionReference
	// Size: 0x28 (0x28 - 0x0)
	struct FSmartObjectDefinitionReference	
	{
	public:
		USmartObjectDefinition* SmartObjectDefinition; // 0x0(0x8)
		FInstancedPropertyBag Parameters; // 0x8(0x10)
		TArray<FGuid> PropertyOverrides; // 0x18(0x10)
	};


	// Struct SmartObjectsModule.SmartObjectDefinitionDataProxy
	// Size: 0x10 (0x10 - 0x0)
	struct FSmartObjectDefinitionDataProxy	
	{
	public:
		FInstancedStruct Data; // 0x0(0x10)
	};


	// Struct SmartObjectsModule.SmartObjectSlotDefinition
	// Size: 0xE0 (0xE0 - 0x0)
	struct FSmartObjectSlotDefinition	
	{
	public:
		FVector3f Offset; // 0x0(0xC)
		FRotator3f Rotation; // 0xC(0xC)
		bool bEnabled; // 0x18(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery UserTagFilter; // 0x20(0x48)
		FGameplayTagContainer ActivityTags; // 0x68(0x20)
		FGameplayTagContainer RuntimeTags; // 0x88(0x20)
		FWorldConditionQueryDefinition SelectionPreconditions; // 0xA8(0x18)
		TArray<USmartObjectBehaviorDefinition*> BehaviorDefinitions; // 0xC0(0x10)
		TArray<FSmartObjectDefinitionDataProxy> DefinitionData; // 0xD0(0x10)
	};


	// Struct SmartObjectsModule.SmartObjectDefinitionPreviewData
	// Size: 0x78 (0x78 - 0x0)
	struct FSmartObjectDefinitionPreviewData	
	{
	public:
		TWeakObjectPtr<UClass*> ObjectActorClass; // 0x0(0x20)
		FSoftObjectPath ObjectMeshPath; // 0x20(0x18)
		TWeakObjectPtr<UClass*> UserActorClass; // 0x38(0x20)
		TWeakObjectPtr<UClass*> UserValidationFilterClass; // 0x58(0x20)
	};


	// Struct SmartObjectsModule.SmartObjectDefinitionDataHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FSmartObjectDefinitionDataHandle	
	{
	public:
		uint16_t SlotIndex; // 0x0(0x2)
		uint16_t DataIndex; // 0x2(0x2)
	};


	// Struct SmartObjectsModule.SmartObjectDefinitionPropertyBinding
	// Size: 0x28 (0x28 - 0x0)
	struct FSmartObjectDefinitionPropertyBinding	
	{
	public:
		FPropertyBindingPath SourcePath; // 0x0(0x10)
		FPropertyBindingPath TargetPath; // 0x10(0x10)
		FSmartObjectDefinitionDataHandle SourceDataHandle; // 0x20(0x4)
		FSmartObjectDefinitionDataHandle TargetDataHandle; // 0x24(0x4)
	};


	// Struct SmartObjectsModule.SmartObjectSpatialEntryData
	// Size: 0x1 (0x1 - 0x0)
	struct FSmartObjectSpatialEntryData	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectHashGridEntryData
	// Inherited from FSmartObjectSpatialEntryData
	// Size: 0xB (0xC - 0x1)
	struct FSmartObjectHashGridEntryData : public FSmartObjectSpatialEntryData	
	{
	public:
		unsigned char UnknownData00_1[0xB]; // 0x1(0xB) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectOctreeEntryData
	// Inherited from FSmartObjectSpatialEntryData
	// Size: 0xF (0x10 - 0x1)
	struct FSmartObjectOctreeEntryData : public FSmartObjectSpatialEntryData	
	{
	public:
		unsigned char UnknownData00_1[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectCollectionEntry
	// Size: 0xF0 (0xF0 - 0x0)
	struct FSmartObjectCollectionEntry	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FSoftObjectPath Path; // 0x20(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x40(0x60)
		FBox Bounds; // 0xA0(0x38)
		FSmartObjectHandle Handle; // 0xD8(0x8)
		uint32_t DefinitionIdx; // 0xE0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xE4(0xC) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectContainer
	// Size: 0xB0 (0xB0 - 0x0)
	struct FSmartObjectContainer	
	{
	public:
		FBox Bounds; // 0x0(0x38)
		TArray<FSmartObjectCollectionEntry> CollectionEntries; // 0x38(0x10)
		TMap<FSmartObjectHandle, FSoftObjectPath> RegisteredIdToObjectMap; // 0x48(0x50)
		TArray<USmartObjectDefinition*> Definitions; // 0x98(0x10)
		UObject* Owner; // 0xA8(0x8)
	};


	// Struct SmartObjectsModule.SmartObjectSlotStateData
	// Size: 0x1 (0x1 - 0x0)
	struct FSmartObjectSlotStateData	
	{
	public:
	};


	// Struct SmartObjectsModule.SmartObjectSlotTransform
	// Inherited from FSmartObjectSlotStateData
	// Size: 0x60 (0x60 - 0x0)
	struct FSmartObjectSlotTransform : public FSmartObjectSlotStateData	
	{
	public:
		FTransform Transform; // 0x0(0x60)
	};


	// Struct SmartObjectsModule.SmartObjectRuntimeSlot
	// Size: 0xA8 (0xA8 - 0x0)
	struct FSmartObjectRuntimeSlot	
	{
	public:
		FVector3f Offset; // 0x0(0xC)
		FRotator3f Rotation; // 0xC(0xC)
		FGameplayTagContainer Tags; // 0x18(0x20)
		unsigned char UnknownData00_6[0x30]; // 0x38(0x30) UNKNOWN PROPERTY
		FSmartObjectUserHandle User; // 0x68(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FWorldConditionQueryState PreconditionState; // 0x70(0x30)
		ESmartObjectSlotState State; // 0xA0(0x1)
		ESmartObjectClaimPriority ClaimedPriority; // 0xA1(0x1)
		bool bSlotEnabled : 1; // 0xA2:0(0x1)
		bool bObjectEnabled : 1; // 0xA2:1(0x1)
		unsigned char UnknownData02_7[0x5]; // 0xA3(0x5) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectRuntime
	// Size: 0x130 (0x130 - 0x0)
	struct FSmartObjectRuntime	
	{
	public:
		FWorldConditionQueryState PreconditionState; // 0x0(0x30)
		TArray<FSmartObjectRuntimeSlot> Slots; // 0x30(0x10)
		USmartObjectDefinition* Definition; // 0x40(0x8)
		TWeakObjectPtr<USmartObjectComponent*> OwnerComponent; // 0x48(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
		FTransform Transform; // 0x60(0x60)
		FGameplayTagContainer Tags; // 0xC0(0x20)
		unsigned char UnknownData01_6[0x28]; // 0xE0(0x28) UNKNOWN PROPERTY
		FSmartObjectHandle RegisteredHandle; // 0x108(0x8)
		FInstancedStruct SpatialEntryData; // 0x110(0x10)
		uint16_t DisableFlags; // 0x120(0x2)
		unsigned char UnknownData02_7[0xE]; // 0x122(0xE) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectSlotView
	// Size: 0x20 (0x20 - 0x0)
	struct FSmartObjectSlotView	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectRequestFilter
	// Size: 0xD0 (0xD0 - 0x0)
	struct FSmartObjectRequestFilter	
	{
	public:
		FGameplayTagContainer UserTags; // 0x0(0x20)
		ESmartObjectClaimPriority ClaimPriority; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery ActivityRequirements; // 0x28(0x48)
		TArray<UClass*> BehaviorDefinitionClasses; // 0x70(0x10)
		bool bShouldEvaluateConditions; // 0x80(0x1)
		bool bShouldIncludeClaimedSlots; // 0x81(0x1)
		bool bShouldIncludeDisabledSlots; // 0x82(0x1)
		unsigned char UnknownData01_7[0x4D]; // 0x83(0x4D) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectRequest
	// Size: 0x110 (0x110 - 0x0)
	struct FSmartObjectRequest	
	{
	public:
		FBox QueryBox; // 0x0(0x38)
		unsigned char UnknownData00_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FSmartObjectRequestFilter Filter; // 0x40(0xD0)
	};


	// Struct SmartObjectsModule.SmartObjectRequestResult
	// Size: 0x18 (0x18 - 0x0)
	struct FSmartObjectRequestResult	
	{
	public:
		FSmartObjectHandle SmartObjectHandle; // 0x0(0x8)
		FSmartObjectSlotHandle SlotHandle; // 0x8(0x10)
	};


	// Struct SmartObjectsModule.SmartObjectSlotIndex
	// Size: 0x4 (0x4 - 0x0)
	struct FSmartObjectSlotIndex	
	{
	public:
		int32_t Index; // 0x0(0x4)
	};


	// Struct SmartObjectsModule.SmartObjectTraceParams
	// Size: 0x20 (0x20 - 0x0)
	struct FSmartObjectTraceParams	
	{
	public:
		ESmartObjectTraceType Type; // 0x0(0x1)
		TEnumAsByte<ETraceTypeQuery> TraceChannel; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TArray<TEnumAsByte> ObjectTypes; // 0x8(0x10)
		FCollisionProfileName CollisionProfile; // 0x18(0x4)
		bool bTraceComplex; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectSlotValidationParams
	// Size: 0x70 (0x70 - 0x0)
	struct FSmartObjectSlotValidationParams	
	{
	public:
		UClass* NavigationFilter; // 0x0(0x8)
		FVector SearchExtents; // 0x8(0x18)
		FSmartObjectTraceParams GroundTraceParameters; // 0x20(0x20)
		FSmartObjectTraceParams TransitionTraceParameters; // 0x40(0x20)
		bool bUseNavigationCapsuleSize; // 0x60(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		FSmartObjectUserCapsuleParams UserCapsule; // 0x64(0xC)
	};


	// Struct SmartObjectsModule.SmartObjectActorUserData
	// Size: 0x8 (0x8 - 0x0)
	struct FSmartObjectActorUserData	
	{
	public:
		TWeakObjectPtr<AActor*> UserActor; // 0x0(0x8)
	};


	// Struct SmartObjectsModule.SmartObjectActorOwnerData
	// Size: 0x20 (0x20 - 0x0)
	struct FSmartObjectActorOwnerData	
	{
	public:
		FActorInstanceHandle Handle; // 0x0(0x20)
	};


	// Struct SmartObjectsModule.SmartObjectWorldConditionObjectTagQueryState
	// Size: 0x8 (0x8 - 0x0)
	struct FSmartObjectWorldConditionObjectTagQueryState	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectWorldConditionObjectTagQuery
	// Inherited from FSmartObjectWorldConditionBase -> FWorldConditionBase
	// Size: 0x58 (0x68 - 0x10)
	struct FSmartObjectWorldConditionObjectTagQuery : public FSmartObjectWorldConditionBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
		FGameplayTagQuery TagQuery; // 0x20(0x48)
	};


	// Struct SmartObjectsModule.SmartObjectWorldConditionSlotTagQueryState
	// Size: 0x18 (0x18 - 0x0)
	struct FSmartObjectWorldConditionSlotTagQueryState	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.SmartObjectWorldConditionSlotTagQuery
	// Inherited from FSmartObjectWorldConditionBase -> FWorldConditionBase
	// Size: 0x58 (0x68 - 0x10)
	struct FSmartObjectWorldConditionSlotTagQuery : public FSmartObjectWorldConditionBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
		FGameplayTagQuery TagQuery; // 0x20(0x48)
	};


	// Struct SmartObjectsModule.WorldCondition_SmartObjectActorTagQueryState
	// Size: 0x8 (0x8 - 0x0)
	struct FWorldCondition_SmartObjectActorTagQueryState	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct SmartObjectsModule.WorldCondition_SmartObjectActorTagQuery
	// Inherited from FSmartObjectWorldConditionBase -> FWorldConditionBase
	// Size: 0x50 (0x60 - 0x10)
	struct FWorldCondition_SmartObjectActorTagQuery : public FSmartObjectWorldConditionBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
		FGameplayTagQuery TagQuery; // 0x18(0x48)
	};

}
