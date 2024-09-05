#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SmartObjectsModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SmartObjectsModule.EnvQueryGenerator_SmartObjects
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x100 (0x150 - 0x50)
	class UEnvQueryGenerator_SmartObjects : public UEnvQueryGenerator	
	{
	public:
		UClass QueryOriginContext; // 0x50(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FSmartObjectRequestFilter SmartObjectRequestFilter; // 0x60(0xD0)
		FVector QueryBoxExtent; // 0x130(0x18)
		bool bOnlyClaimable; // 0x148(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x149(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.EnvQueryGenerator_SmartObjects");
			return ret;
		}
	};


	// Class SmartObjectsModule.EnvQueryItemType_SmartObject
	// Inherited from UEnvQueryItemType_VectorBase -> UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEnvQueryItemType_SmartObject : public UEnvQueryItemType_VectorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.EnvQueryItemType_SmartObject");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class USmartObjectSettings : public UDeveloperSettings	
	{
	public:
		ESmartObjectTagFilteringPolicy DefaultUserTagsFilteringPolicy; // 0x30(0x1)
		ESmartObjectTagMergingPolicy DefaultActivityTagsMergingPolicy; // 0x31(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		UClass DefaultWorldConditionSchemaClass; // 0x38(0x8)
		bool bShouldExcludePreConditionsOnDedicatedClient; // 0x40(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectSettings");
			return ret;
		}
	};


	// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
	// Inherited from UBlackboardKeyType -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UBlackboardKeyType_SOClaimHandle : public UBlackboardKeyType	
	{
	public:
		FSmartObjectClaimHandle Handle; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.BlackboardKeyType_SOClaimHandle");
			return ret;
		}
	};


	// Class SmartObjectsModule.GenericSmartObject
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AGenericSmartObject : public AActor	
	{
	public:
		USmartObjectComponent SOComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.GenericSmartObject");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary");
			return ret;
		}

		FSmartObjectClaimHandle SmartObjectClaimHandle_Invalid(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414611CF8
		void SetValueAsSOClaimHandle(UBlackboardComponent BlackboardComponent, FName& KeyName, FSmartObjectClaimHandle Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414611C18
		bool SetSmartObjectEnabled(AActor SmartObjectActor, bool bEnabled); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414611B38
		bool SetMultipleSmartObjectsEnabled(TArray& SmartObjectActors, bool bEnabled); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414611A58
		void SetBlackboardValueAsSOClaimHandle(UBTNode NodeOwner, FBlackboardKeySelector& Key, FSmartObjectClaimHandle& Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414611978
		bool RemoveSmartObject(AActor SmartObjectActor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414611898
		bool RemoveMultipleSmartObjects(TArray& SmartObjectActors); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146117B8
		bool NotEqual_SmartObjectSlotHandleSmartObjectSlotHandle(FSmartObjectSlotHandle& A, FSmartObjectSlotHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4146116D8
		bool NotEqual_SmartObjectHandleSmartObjectHandle(FSmartObjectHandle& A, FSmartObjectHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4146115F8
		USmartObjectBehaviorDefinition MarkSmartObjectSlotAsOccupied(UObject WorldContextObject, FSmartObjectClaimHandle ClaimHandle, UClass DefinitionClass); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414611518
		bool MarkSmartObjectSlotAsFree(UObject WorldContextObject, FSmartObjectClaimHandle ClaimHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414611438
		FSmartObjectClaimHandle MarkSmartObjectSlotAsClaimed(UObject WorldContextObject, FSmartObjectSlotHandle SlotHandle, AActor UserActor, ESmartObjectClaimPriority ClaimPriority); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414611358
		bool IsValidSmartObjectSlotHandle(FSmartObjectSlotHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414611278
		bool IsValidSmartObjectHandle(FSmartObjectHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414611198
		bool IsValidSmartObjectClaimHandle(FSmartObjectClaimHandle Handle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4146110B8
		FSmartObjectClaimHandle GetValueAsSOClaimHandle(UBlackboardComponent BlackboardComponent, FName& KeyName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414610FD8
		FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(UBTNode NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414610EF8
		bool FindSmartObjectsInTargetingRequest(UObject WorldContextObject, FSmartObjectRequestFilter& Filter, FTargetingRequestHandle TargetingHandle, TArray& OutResults, AActor UserActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414610E18
		bool FindSmartObjectsInList(UObject WorldContextObject, FSmartObjectRequestFilter& Filter, TArray& ActorList, TArray& OutResults, AActor UserActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414610D38
		bool FindSmartObjectsInComponent(FSmartObjectRequestFilter& Filter, USmartObjectComponent SmartObjectComponent, TArray& OutResults, AActor UserActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414610C58
		bool FindSmartObjectsInActor(FSmartObjectRequestFilter& Filter, AActor SearchActor, TArray& OutResults, AActor UserActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414610B78
		bool Equal_SmartObjectSlotHandleSmartObjectSlotHandle(FSmartObjectSlotHandle& A, FSmartObjectSlotHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414610A98
		bool Equal_SmartObjectHandleSmartObjectHandle(FSmartObjectHandle& A, FSmartObjectHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4146109B8
		FString Conv_SmartObjectSlotHandleToString(FSmartObjectSlotHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4146108D8
		FString Conv_SmartObjectRequestResultToString(FSmartObjectRequestResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4146107F8
		FString Conv_SmartObjectHandleToString(FSmartObjectHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414610718
		FString Conv_SmartObjectDefinitionToString(USmartObjectDefinition Definition); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414610638
		FString Conv_SmartObjectClaimHandleToString(FSmartObjectClaimHandle& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414610558
		bool AddSmartObject(AActor SmartObjectActor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414610478
		bool AddOrRemoveSmartObject(AActor SmartObject, bool bEnabled); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414610398
		bool AddOrRemoveMultipleSmartObjects(TArray& SmartObjectActors, bool bAdd); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146102B8
		bool AddMultipleSmartObjects(TArray& SmartObjectActors); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146101D8
	};


	// Class SmartObjectsModule.SmartObjectCollection
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class ASmartObjectCollection : public AActor	
	{
	public:
		FBox Bounds; // 0x290(0x38)
		TArray CollectionEntries; // 0x2C8(0x10)
		TMap RegisteredIdToObjectMap; // 0x2D8(0x50)
		TArray Definitions; // 0x328(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x338(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectCollection");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x2A0 - 0x220)
	class USmartObjectComponent : public USceneComponent	
	{
	public:
		FMulticastInlineDelegate OnSmartObjectEvent; // 0x220(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x230(0x18) UNKNOWN PROPERTY
		FSmartObjectDefinitionReference DefinitionRef; // 0x248(0x28)
		FSmartObjectHandle RegisteredHandle; // 0x270(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x278(0x10) UNKNOWN PROPERTY
		bool bCanBePartOfCollection; // 0x288(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x289(0x7) UNKNOWN PROPERTY
		USmartObjectDefinition CachedDefinitionAssetVariation; // 0x290(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x298(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectComponent");
			return ret;
		}

		bool SetSmartObjectEnabledForReason(FGameplayTag ReasonTag, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146123F8
		bool SetSmartObjectEnabled(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414612318
		void SetDefinition(USmartObjectDefinition DefinitionAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414612238
		void ReceiveOnEvent(FSmartObjectEventData& EventData, AActor Interactor); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414612158
		bool IsSmartObjectEnabledForReason(FGameplayTag ReasonTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414612078
		bool IsSmartObjectEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414611F98
		bool IsBoundToSimulation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414611EB8
		USmartObjectDefinition GetDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414611DD8
	};


	// Class SmartObjectsModule.SmartObjectContainerRenderingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class USmartObjectContainerRenderingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectContainerRenderingComponent");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectDebugRenderingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x520 - 0x518)
	class USmartObjectDebugRenderingComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectDebugRenderingComponent");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectBehaviorDefinition
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USmartObjectBehaviorDefinition : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectBehaviorDefinition");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectDefinition
	// Inherited from UDataAsset -> UObject
	// Size: 0x110 (0x140 - 0x30)
	class USmartObjectDefinition : public UDataAsset	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		FInstancedPropertyBag Parameters; // 0x40(0x10)
		FGuid ParametersID; // 0x50(0x10)
		FGuid RootID; // 0x60(0x10)
		TArray PropertyBindings; // 0x70(0x10)
		TArray Slots; // 0x80(0x10)
		TArray DefaultBehaviorDefinitions; // 0x90(0x10)
		FGameplayTagQuery UserTagFilter; // 0xA0(0x48)
		FWorldConditionQueryDefinition Preconditions; // 0xE8(0x18)
		FGameplayTagContainer ActivityTags; // 0x100(0x20)
		TArray DefinitionData; // 0x120(0x10)
		UClass WorldConditionSchemaClass; // 0x130(0x8)
		ESmartObjectTagMergingPolicy ActivityTagsMergingPolicy; // 0x138(0x1)
		ESmartObjectTagFilteringPolicy UserTagsFilteringPolicy; // 0x139(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectDefinition");
			return ret;
		}

		void SetUserTagFilter(FGameplayTagQuery& InUserTagFilter); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414612CB8
		TArray K2_GetSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414612BD8
		bool IsValidSlotIndex(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414612AF8
		ESmartObjectTagFilteringPolicy GetUserTagsFilteringPolicy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414612A18
		FGameplayTagQuery GetUserTagFilter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414612938
		FTransform GetSlotWorldTransform(int32_t SlotIndex, FTransform& OwnerTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414612858
		void GetSlotActivityTags(int32_t SlotIndex, FGameplayTagContainer& OutActivityTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414612778
		FSmartObjectSlotDefinition GetMutableSlot(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414612698
		FBox GetBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146125B8
		FGameplayTagContainer GetActivityTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146124D8
	};


	// Class SmartObjectsModule.SmartObjectSpacePartition
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USmartObjectSpacePartition : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectSpacePartition");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectHashGrid
	// Inherited from USmartObjectSpacePartition -> UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class USmartObjectHashGrid : public USmartObjectSpacePartition	
	{
	public:
		unsigned char UnknownData01_1[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectHashGrid");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectOctree
	// Inherited from USmartObjectSpacePartition -> UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class USmartObjectOctree : public USmartObjectSpacePartition	
	{
	public:
		unsigned char UnknownData01_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectOctree");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectPersistentCollection
	// Inherited from AActor -> UObject
	// Size: 0xB8 (0x348 - 0x290)
	class ASmartObjectPersistentCollection : public AActor	
	{
	public:
		FSmartObjectContainer SmartObjectContainer; // 0x290(0xB0)
		unsigned char UnknownData01_7[0x8]; // 0x340(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectPersistentCollection");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectRenderingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class USmartObjectRenderingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectRenderingComponent");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x168 (0x198 - 0x30)
	class USmartObjectSubsystem : public UWorldSubsystem	
	{
	public:
		FSoftClassPath SpacePartitionClassName; // 0x30(0x18)
		UClass SpacePartitionClass; // 0x48(0x8)
		USmartObjectSpacePartition SpacePartition; // 0x50(0x8)
		ASmartObjectSubsystemRenderingActor RenderingActor; // 0x58(0x8)
		FSmartObjectContainer SmartObjectContainer; // 0x60(0xB0)
		unsigned char UnknownData02_6[0x10]; // 0x110(0x10) UNKNOWN PROPERTY
		TMap RuntimeSmartObjects; // 0x120(0x50)
		TArray RegisteredSOComponents; // 0x170(0x10)
		TArray PendingSmartObjectRegistration; // 0x180(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x190(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectSubsystem");
			return ret;
		}

		bool SetSlotEnabled(FSmartObjectSlotHandle SlotHandle, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146141B8
		bool SetEnabledForReason(FSmartObjectHandle Handle, FGameplayTag ReasonTag, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146140D8
		bool SetEnabled(FSmartObjectHandle Handle, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414613FF8
		bool RemoveTagFromSlot(FSmartObjectSlotHandle SlotHandle, FGameplayTag& tag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414613F18
		void RemoveTagFromInstance(FSmartObjectHandle Handle, FGameplayTag& tag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414613E38
		bool Release(FSmartObjectClaimHandle& ClaimHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414613D58
		bool IsEnabledForReason(FSmartObjectHandle Handle, FGameplayTag ReasonTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414613C78
		bool IsEnabled(FSmartObjectHandle Handle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414613B98
		USmartObjectComponent GetSmartObjectComponentByRequestResult(FSmartObjectRequestResult& Result, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414613AB8
		USmartObjectComponent GetSmartObjectComponent(FSmartObjectClaimHandle& ClaimHandle, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4146139D8
		bool GetSlotTransformFromRequestResult(FSmartObjectRequestResult& RequestResult, FTransform& OutSlotTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4146138F8
		bool GetSlotTransform(FSmartObjectClaimHandle& ClaimHandle, FTransform& OutSlotTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414613818
		FGameplayTagContainer GetSlotTags(FSmartObjectSlotHandle SlotHandle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414613738
		ESmartObjectSlotState GetSlotState(FSmartObjectSlotHandle SlotHandle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414613658
		bool GetSlotLocation(FSmartObjectClaimHandle& ClaimHandle, FVector& OutSlotLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414613578
		FGameplayTagContainer GetInstanceTags(FSmartObjectHandle Handle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414613498
		USmartObjectBehaviorDefinition GetBehaviorDefinitionByRequestResult(FSmartObjectRequestResult& RequestResult, UClass DefinitionClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146133B8
		USmartObjectBehaviorDefinition GetBehaviorDefinition(FSmartObjectClaimHandle& ClaimHandle, UClass DefinitionClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146132D8
		void GetAllSlots(FSmartObjectHandle Handle, TArray& OutSlots); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4146131F8
		bool FindSmartObjects_BP(FSmartObjectRequest& Request, TArray& OutResults, AActor UserActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414613118
		bool FindSmartObjects(FSmartObjectRequest& Request, TArray& OutResults, AActor UserActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414613038
		FSmartObjectRequestResult FindSmartObject(FSmartObjectRequest& Request, AActor UserActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414612F58
		void AddTagToSlot(FSmartObjectSlotHandle SlotHandle, FGameplayTag& tag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414612E78
		void AddTagToInstance(FSmartObjectHandle Handle, FGameplayTag& tag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414612D98
	};


	// Class SmartObjectsModule.SmartObjectSubsystemRenderingComponent
	// Inherited from USmartObjectDebugRenderingComponent -> UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x520 - 0x520)
	class USmartObjectSubsystemRenderingComponent : public USmartObjectDebugRenderingComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectSubsystemRenderingComponent");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectSubsystemRenderingActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ASmartObjectSubsystemRenderingActor : public AActor	
	{
	public:
		USmartObjectSubsystemRenderingComponent RenderingComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectSubsystemRenderingActor");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectTest
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USmartObjectTest : public UObject	
	{
	public:
		ASmartObjectTestingActor SmartObjectTestingActor; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectTest");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectSimpleQueryTest
	// Inherited from USmartObjectTest -> UObject
	// Size: 0x120 (0x150 - 0x30)
	class USmartObjectSimpleQueryTest : public USmartObjectTest	
	{
	public:
		FSmartObjectRequest Request; // 0x30(0x110)
		TArray Results; // 0x140(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectSimpleQueryTest");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectTestRenderingComponent
	// Inherited from USmartObjectDebugRenderingComponent -> UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x520 - 0x520)
	class USmartObjectTestRenderingComponent : public USmartObjectDebugRenderingComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectTestRenderingComponent");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectTestingActor
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class ASmartObjectTestingActor : public AActor	
	{
	public:
		TArray Tests; // 0x290(0x10)
		USmartObjectTestRenderingComponent RenderingComponent; // 0x2A0(0x8)
		USmartObjectSubsystem SmartObjectSubsystem; // 0x2A8(0x8)
		bool bRunTestsEachFrame; // 0x2B0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectTestingActor");
			return ret;
		}

		void RunTests(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414614378
		void ResetTests(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414614298
	};


	// Class SmartObjectsModule.SmartObjectSlotValidationFilter
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class USmartObjectSlotValidationFilter : public UObject	
	{
	public:
		FSmartObjectSlotValidationParams EntryParameters; // 0x28(0x70)
		bool bUseEntryParametersForExit; // 0x98(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		FSmartObjectSlotValidationParams ExitParameters; // 0xA0(0x70)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectSlotValidationFilter");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectUserComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class USmartObjectUserComponent : public UActorComponent	
	{
	public:
		UClass ValidationFilter; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectUserComponent");
			return ret;
		}
	};


	// Class SmartObjectsModule.SmartObjectWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class USmartObjectWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x38(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectWorldConditionSchema");
			return ret;
		}
	};

}
