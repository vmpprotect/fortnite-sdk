#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SmartObjectsModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SmartObjectsModule.EnvQueryGenerator_SmartObjects
	// Inherited from UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x100 (0x150 - 0x50)
	class UEnvQueryGenerator_SmartObjects : public UEnvQueryGenerator	
	{
	public:
		UClass* QueryOriginContext; // 0x50(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FSmartObjectRequestFilter SmartObjectRequestFilter; // 0x60(0xD0)
		FVector QueryBoxExtent; // 0x130(0x18)
		bool bOnlyClaimable; // 0x148(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x149(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		UClass* DefaultWorldConditionSchemaClass; // 0x38(0x8)
		bool bShouldExcludePreConditionsOnDedicatedClient; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

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
		USmartObjectComponent* SOComponent; // 0x290(0x8)

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

		FSmartObjectClaimHandle SmartObjectClaimHandle_Invalid(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6F44E4(relative to base address)
		void SetValueAsSOClaimHandle(UBlackboardComponent* BlackboardComponent, FName& KeyName, FSmartObjectClaimHandle Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F431C(relative to base address)
		bool SetSmartObjectEnabled(AActor* SmartObjectActor, bool bEnabled); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F3EB8(relative to base address)
		bool SetMultipleSmartObjectsEnabled(TArray<AActor*>& SmartObjectActors, bool bEnabled); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F3B94(relative to base address)
		void SetBlackboardValueAsSOClaimHandle(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FSmartObjectClaimHandle& Value); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F3500(relative to base address)
		bool RemoveSmartObject(AActor* SmartObjectActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F310C(relative to base address)
		bool RemoveMultipleSmartObjects(TArray<AActor*>& SmartObjectActors); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F306C(relative to base address)
		bool NotEqual_SmartObjectSlotHandleSmartObjectSlotHandle(FSmartObjectSlotHandle& A, FSmartObjectSlotHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6F2EC0(relative to base address)
		bool NotEqual_SmartObjectHandleSmartObjectHandle(FSmartObjectHandle& A, FSmartObjectHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6F2DD4(relative to base address)
		USmartObjectBehaviorDefinition MarkSmartObjectSlotAsOccupied(UObject* WorldContextObject, FSmartObjectClaimHandle ClaimHandle, UClass* DefinitionClass); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F2B90(relative to base address)
		bool MarkSmartObjectSlotAsFree(UObject* WorldContextObject, FSmartObjectClaimHandle ClaimHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F2A1C(relative to base address)
		FSmartObjectClaimHandle MarkSmartObjectSlotAsClaimed(UObject* WorldContextObject, FSmartObjectSlotHandle SlotHandle, AActor* UserActor, ESmartObjectClaimPriority ClaimPriority); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F2730(relative to base address)
		bool IsValidSmartObjectSlotHandle(FSmartObjectSlotHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6F267C(relative to base address)
		bool IsValidSmartObjectHandle(FSmartObjectHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6F25E8(relative to base address)
		bool IsValidSmartObjectClaimHandle(FSmartObjectClaimHandle Handle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F24B4(relative to base address)
		FSmartObjectClaimHandle GetValueAsSOClaimHandle(UBlackboardComponent* BlackboardComponent, FName& KeyName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F1ECC(relative to base address)
		FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(UBTNode* NodeOwner, FBlackboardKeySelector& Key); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6F0E80(relative to base address)
		bool FindSmartObjectsInTargetingRequest(UObject* WorldContextObject, FSmartObjectRequestFilter& Filter, FTargetingRequestHandle TargetingHandle, TArray<FSmartObjectRequestResult>& OutResults, AActor* UserActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F06D8(relative to base address)
		bool FindSmartObjectsInList(UObject* WorldContextObject, FSmartObjectRequestFilter& Filter, TArray<AActor*>& ActorList, TArray<FSmartObjectRequestResult>& OutResults, AActor* UserActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F043C(relative to base address)
		bool FindSmartObjectsInComponent(FSmartObjectRequestFilter& Filter, USmartObjectComponent* SmartObjectComponent, TArray<FSmartObjectRequestResult>& OutResults, AActor* UserActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F011C(relative to base address)
		bool FindSmartObjectsInActor(FSmartObjectRequestFilter& Filter, AActor* SearchActor, TArray<FSmartObjectRequestResult>& OutResults, AActor* UserActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6EFE04(relative to base address)
		bool Equal_SmartObjectSlotHandleSmartObjectSlotHandle(FSmartObjectSlotHandle& A, FSmartObjectSlotHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6EF944(relative to base address)
		bool Equal_SmartObjectHandleSmartObjectHandle(FSmartObjectHandle& A, FSmartObjectHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6EF858(relative to base address)
		FString Conv_SmartObjectSlotHandleToString(FSmartObjectSlotHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6EF7A0(relative to base address)
		FString Conv_SmartObjectRequestResultToString(FSmartObjectRequestResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6EF6F4(relative to base address)
		FString Conv_SmartObjectHandleToString(FSmartObjectHandle& Handle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6EF64C(relative to base address)
		FString Conv_SmartObjectDefinitionToString(USmartObjectDefinition* Definition); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6EF5B8(relative to base address)
		FString Conv_SmartObjectClaimHandleToString(FSmartObjectClaimHandle& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6EF508(relative to base address)
		bool AddSmartObject(AActor* SmartObjectActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D6EF178(relative to base address)
		bool AddOrRemoveSmartObject(AActor* SmartObject, bool bEnabled); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D6EF084(relative to base address)
		bool AddOrRemoveMultipleSmartObjects(TArray<AActor*>& SmartObjectActors, bool bAdd); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6EEF54(relative to base address)
		bool AddMultipleSmartObjects(TArray<AActor*>& SmartObjectActors); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6EEEB4(relative to base address)
	};


	// Class SmartObjectsModule.SmartObjectCollection
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class ASmartObjectCollection : public AActor	
	{
	public:
		FBox Bounds; // 0x290(0x38)
		TArray<FSmartObjectCollectionEntry> CollectionEntries; // 0x2C8(0x10)
		TMap<FSmartObjectHandle, FSoftObjectPath> RegisteredIdToObjectMap; // 0x2D8(0x50)
		TArray<USmartObjectDefinition*> Definitions; // 0x328(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x338(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x18]; // 0x230(0x18) UNKNOWN PROPERTY
		FSmartObjectDefinitionReference DefinitionRef; // 0x248(0x28)
		FSmartObjectHandle RegisteredHandle; // 0x270(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x278(0x10) UNKNOWN PROPERTY
		bool bCanBePartOfCollection; // 0x288(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x289(0x7) UNKNOWN PROPERTY
		USmartObjectDefinition* CachedDefinitionAssetVariation; // 0x290(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x298(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectComponent");
			return ret;
		}

		bool SetSmartObjectEnabledForReason(FGameplayTag ReasonTag, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F4044(relative to base address)
		bool SetSmartObjectEnabled(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F3FAC(relative to base address)
		void SetDefinition(USmartObjectDefinition* DefinitionAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F368C(relative to base address)
		void ReceiveOnEvent(FSmartObjectEventData& EventData, AActor* Interactor); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSmartObjectEnabledForReason(FGameplayTag ReasonTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F2304(relative to base address)
		bool IsSmartObjectEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F22E0(relative to base address)
		bool IsBoundToSimulation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1FC4(relative to base address)
		USmartObjectDefinition GetDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1008(relative to base address)
	};


	// Class SmartObjectsModule.SmartObjectContainerRenderingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class USmartObjectContainerRenderingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		FInstancedPropertyBag Parameters; // 0x40(0x10)
		FGuid ParametersID; // 0x50(0x10)
		FGuid RootID; // 0x60(0x10)
		TArray<FSmartObjectDefinitionPropertyBinding> PropertyBindings; // 0x70(0x10)
		TArray<FSmartObjectSlotDefinition> Slots; // 0x80(0x10)
		TArray<USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions; // 0x90(0x10)
		FGameplayTagQuery UserTagFilter; // 0xA0(0x48)
		FWorldConditionQueryDefinition Preconditions; // 0xE8(0x18)
		FGameplayTagContainer ActivityTags; // 0x100(0x20)
		TArray<FSmartObjectDefinitionDataProxy> DefinitionData; // 0x120(0x10)
		UClass* WorldConditionSchemaClass; // 0x130(0x8)
		ESmartObjectTagMergingPolicy ActivityTagsMergingPolicy; // 0x138(0x1)
		ESmartObjectTagFilteringPolicy UserTagsFilteringPolicy; // 0x139(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectDefinition");
			return ret;
		}

		void SetUserTagFilter(FGameplayTagQuery& InUserTagFilter); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F4228(relative to base address)
		TArray K2_GetSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F2714(relative to base address)
		bool IsValidSlotIndex(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F2420(relative to base address)
		ESmartObjectTagFilteringPolicy GetUserTagsFilteringPolicy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1EB4(relative to base address)
		FGameplayTagQuery GetUserTagFilter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1E98(relative to base address)
		FTransform GetSlotWorldTransform(int32_t SlotIndex, FTransform& OwnerTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1A38(relative to base address)
		void GetSlotActivityTags(int32_t SlotIndex, FGameplayTagContainer& OutActivityTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F11EC(relative to base address)
		FSmartObjectSlotDefinition GetMutableSlot(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D6F1154(relative to base address)
		FBox GetBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F0FC0(relative to base address)
		FGameplayTagContainer GetActivityTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F09BC(relative to base address)
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
		unsigned char UnknownData00_1[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x8]; // 0x340(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

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
		UClass* SpacePartitionClass; // 0x48(0x8)
		USmartObjectSpacePartition* SpacePartition; // 0x50(0x8)
		ASmartObjectSubsystemRenderingActor* RenderingActor; // 0x58(0x8)
		FSmartObjectContainer SmartObjectContainer; // 0x60(0xB0)
		unsigned char UnknownData00_6[0x10]; // 0x110(0x10) UNKNOWN PROPERTY
		TMap<FSmartObjectHandle, FSmartObjectRuntime> RuntimeSmartObjects; // 0x120(0x50)
		TArray<USmartObjectComponent*> RegisteredSOComponents; // 0x170(0x10)
		TArray<USmartObjectComponent*> PendingSmartObjectRegistration; // 0x180(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x190(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectSubsystem");
			return ret;
		}

		bool SetSlotEnabled(FSmartObjectSlotHandle SlotHandle, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F3CC4(relative to base address)
		bool SetEnabledForReason(FSmartObjectHandle Handle, FGameplayTag ReasonTag, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F38F8(relative to base address)
		bool SetEnabled(FSmartObjectHandle Handle, bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D6F370C(relative to base address)
		bool RemoveTagFromSlot(FSmartObjectSlotHandle SlotHandle, FGameplayTag& Tag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F3318(relative to base address)
		void RemoveTagFromInstance(FSmartObjectHandle Handle, FGameplayTag& Tag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F31C4(relative to base address)
		bool Release(FSmartObjectClaimHandle& ClaimHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F2FC8(relative to base address)
		bool IsEnabledForReason(FSmartObjectHandle Handle, FGameplayTag ReasonTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F2100(relative to base address)
		bool IsEnabled(FSmartObjectHandle Handle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1FE0(relative to base address)
		USmartObjectComponent GetSmartObjectComponentByRequestResult(FSmartObjectRequestResult& Result, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1D1C(relative to base address)
		USmartObjectComponent GetSmartObjectComponent(FSmartObjectClaimHandle& ClaimHandle, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1B9C(relative to base address)
		bool GetSlotTransformFromRequestResult(FSmartObjectRequestResult& RequestResult, FTransform& OutSlotTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1894(relative to base address)
		bool GetSlotTransform(FSmartObjectClaimHandle& ClaimHandle, FTransform& OutSlotTransform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F16EC(relative to base address)
		FGameplayTagContainer GetSlotTags(FSmartObjectSlotHandle SlotHandle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F15B4(relative to base address)
		ESmartObjectSlotState GetSlotState(FSmartObjectSlotHandle SlotHandle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1488(relative to base address)
		bool GetSlotLocation(FSmartObjectClaimHandle& ClaimHandle, FVector& OutSlotLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F1304(relative to base address)
		FGameplayTagContainer GetInstanceTags(FSmartObjectHandle Handle); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F102C(relative to base address)
		USmartObjectBehaviorDefinition GetBehaviorDefinitionByRequestResult(FSmartObjectRequestResult& RequestResult, UClass* DefinitionClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F0CEC(relative to base address)
		USmartObjectBehaviorDefinition GetBehaviorDefinition(FSmartObjectClaimHandle& ClaimHandle, UClass* DefinitionClass); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6F0B54(relative to base address)
		void GetAllSlots(FSmartObjectHandle Handle, TArray<FSmartObjectSlotHandle>& OutSlots); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6F09D8(relative to base address)
		bool FindSmartObjects_BP(FSmartObjectRequest& Request, TArray<FSmartObjectRequestResult>& OutResults, AActor* UserActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D6EFC00(relative to base address)
		bool FindSmartObjects(FSmartObjectRequest& Request, TArray<FSmartObjectRequestResult>& OutResults, AActor* UserActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6EFC00(relative to base address)
		FSmartObjectRequestResult FindSmartObject(FSmartObjectRequest& Request, AActor* UserActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6EFA4C(relative to base address)
		void AddTagToSlot(FSmartObjectSlotHandle SlotHandle, FGameplayTag& Tag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6EF3A0(relative to base address)
		void AddTagToInstance(FSmartObjectHandle Handle, FGameplayTag& Tag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D6EF230(relative to base address)
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
		USmartObjectSubsystemRenderingComponent* RenderingComponent; // 0x290(0x8)

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
		ASmartObjectTestingActor* SmartObjectTestingActor; // 0x28(0x8)

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
		TArray<FSmartObjectRequestResult> Results; // 0x140(0x10)

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
		TArray<USmartObjectTest*> Tests; // 0x290(0x10)
		USmartObjectTestRenderingComponent* RenderingComponent; // 0x2A0(0x8)
		USmartObjectSubsystem* SmartObjectSubsystem; // 0x2A8(0x8)
		bool bRunTestsEachFrame; // 0x2B0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectTestingActor");
			return ret;
		}

		void RunTests(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D6F34EC(relative to base address)
		void ResetTests(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D6F3490(relative to base address)
	};


	// Class SmartObjectsModule.SmartObjectSlotValidationFilter
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class USmartObjectSlotValidationFilter : public UObject	
	{
	public:
		FSmartObjectSlotValidationParams EntryParameters; // 0x28(0x70)
		bool bUseEntryParametersForExit; // 0x98(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
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
		UClass* ValidationFilter; // 0xA0(0x8)

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
		unsigned char UnknownData00_1[0x28]; // 0x38(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SmartObjectsModule.SmartObjectWorldConditionSchema");
			return ret;
		}
	};

}
