#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ItemizationCoreRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ItemizationCoreRuntime.InventoryCollection
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x608 (0x898 - 0x290)
	class AInventoryCollection : public AInfo	
	{
	public:
		FMulticastInlineDelegate OnInventoryCollectionLoadStateChanged; // 0x290(0x10)
		TArray InventoryList; // 0x2A0(0x10)
		TMap InventoryMap; // 0x2B0(0x50)
		TMap ItemInventoryMap; // 0x300(0x50)
		TMap ItemInstanceMap; // 0x350(0x50)
		unsigned char UnknownData03_6[0x4D0]; // 0x3A0(0x4D0) UNKNOWN PROPERTY
		TWeakObjectPtr InputPlayerController; // 0x870(0x8)
		EInventoryCollectionType InventoryCollectionType; // 0x878(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x879(0x3) UNKNOWN PROPERTY
		FGuid InventoryCollectionID; // 0x87C(0x10)
		EInventoryCollectionLoadState InventoryCollectionLoadState; // 0x88C(0x1)
		bool bIsInventoryCollectionUnregistered; // 0x88D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x88E(0x2) UNKNOWN PROPERTY
		UInventorySetupDataBase UsedInventorySetupData; // 0x890(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventoryCollection");
			return ret;
		}

		void UseItem(FGuid& ItemId, FGuid AdditionalItemID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464BD58
		int64_t SetInventoryTotalSlotsOverride(FGuid& TargetInventoryID, int64_t InInventoryTotalSlotsOverride); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464BC78
		int64_t SetInventoryMaxStackSizeOverride(FGuid& TargetInventoryID, int64_t InInventoryMaxStackSizeOverride); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464BB98
		void SetEquippableItemInactive(FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464BAB8
		void SetEquippableItemActive(FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464B9D8
		void Server_UseItem(FGuid ItemId, FGuid AdditionalItemID); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults 0x7FF41464B8F8
		void Server_SwapItems(FGuid ItemEntryID, AInventoryCollection OtherInventoryCollection, FGuid OtherItemEntryID); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 0x7FF41464B818
		void Server_SetItemSlot(FGuid OwningInventoryID, FGuid ItemEntryID, uint16_t SlotNumber, EVkInventoryMoveBehaviour MoveBehaviour); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 0x7FF41464B738
		void Server_SetEquippableItemInactive(FGuid ItemEntryID); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 0x7FF41464B658
		void Server_SetEquippableItemActive(FGuid ItemEntryID); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 0x7FF41464B578
		void Server_MoveItemsWithDefinitionToInventory(FGuid OwningInventoryID, UItemDefinitionBase ItemDefinition, AInventoryCollection TargetInventoryCollection, FGuid TargetInventoryID, int64_t Amount); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 0x7FF41464B498
		void Server_MoveItemListToInventory(TArray ItemEntryIDList, AInventoryCollection TargetInventoryCollection, FGuid TargetInventoryID); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults 0x7FF41464B3B8
		void Server_DropItem(FGuid ItemEntryID, int64_t AmountToDrop); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate 0x7FF41464B2D8
		void OnRep_InventoryCollectionID(); // Flags: Final|Native|Protected 0x7FF41464B1F8
		bool IsEquippableItemActive(FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464B118
		int32_t GetItemSlotNumber(FGuid& TargetInventoryID, FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464B038
		int64_t GetItemMaxAmountForEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464AF58
		FGuid GetItemEntryIDBySlot(FGuid& TargetInventoryID, int32_t SlotNumber); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464AE78
		UItemDefinitionBase GetItemDefinition(FGuid& TargetInventoryID, FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464AD98
		int64_t GetItemAmountFromInventory(UItemDefinitionBase ItemDefinition, FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464ACB8
		int64_t GetItemAmountFromEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464ABD8
		int64_t GetItemAmount(UItemDefinitionBase ItemDefinition); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464AAF8
		int64_t GetInventoryTotalSlots(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464AA18
		FText GetInventoryName(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464A938
		int64_t GetInventoryMaxStackSizeOverride(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464A858
		TArray GetInventoryListInPickupPriorityForItemDefinition(UItemDefinitionBase ItemDefinition); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464A778
		UInventoryDefinition GetInventoryDefinition(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464A698
		EItemizationInventoryCreationType GetInventoryCreationType(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464A5B8
		TArray GetInventoriesWithInventoryDefinition(UInventoryDefinition InventoryDefinition); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464A4D8
		bool GetAllItemsInInventory(FGuid& TargetInventoryID, TArray& OutItemEntryIDList); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464A3F8
		bool GetAllInventoriesInCollection(TArray& OutInventoryIDList); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41464A318
		void DropItem(FGuid& ItemEntryID, int64_t AmountToDrop); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464A238
		void ClientOnItemAbilityCooldownUpdated(FGuid InventoryID, FGuid ItemEntryID, int32_t AbilityBindingIndex, FItemAbilityCooldownState CooldownState); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF41464A158
	};


	// Class ItemizationCoreRuntime.Inventory
	// Inherited from UActorComponent -> UObject
	// Size: 0x4F8 (0x598 - 0xA0)
	class UInventory : public UActorComponent	
	{
	public:
		AInventoryCollection OwningInventoryCollection; // 0xA0(0x8)
		UObject VerseInventoryInternal; // 0xA8(0x8)
		FGuid InventoryID; // 0xB0(0x10)
		EItemizationInventoryCreationType InventoryType; // 0xC0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		FItemEntryList ItemEntryData; // 0xC8(0x308)
		unsigned char UnknownData03_7[0x1C8]; // 0x3D0(0x1C8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.Inventory");
			return ret;
		}

		void OnRep_VerseInventory(); // Flags: Native|Protected 0x7FF4146497B8
		void OnRep_ItemData(); // Flags: Final|Native|Protected 0x7FF4146496D8
		void OnRep_InventoryTotalSlotsOverride(); // Flags: Final|Native|Protected 0x7FF4146495F8
		void OnRep_InventoryMaxStackSizeOverride(); // Flags: Final|Native|Protected 0x7FF414649518
		void OnRep_InventoryID(); // Flags: Final|Native|Protected 0x7FF414649438
	};


	// Class ItemizationCoreRuntime.EquippableInventory
	// Inherited from UInventory -> UActorComponent -> UObject
	// Size: 0x78 (0x610 - 0x598)
	class UEquippableInventory : public UInventory	
	{
	public:
		TArray ActiveItems; // 0x598(0x10)
		TArray PreviouslyActiveItems; // 0x5A8(0x10)
		unsigned char UnknownData01_6[0x48]; // 0x5B8(0x48) UNKNOWN PROPERTY
		TArray SlotBindingList; // 0x600(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.EquippableInventory");
			return ret;
		}

		void OnRep_SlotBindings(); // Flags: Final|Native|Private 0x7FF414649978
		void OnRep_ActiveItems(); // Flags: Final|Native|Private 0x7FF414649898
	};


	// Class ItemizationCoreRuntime.InventoryDefinition
	// Inherited from UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UInventoryDefinition : public UDataAsset	
	{
	public:
		FText Name; // 0x30(0x10)
		FText Description; // 0x40(0x10)
		uint16_t Slots; // 0x50(0x2)
		char PickupPriority; // 0x52(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x53(0x5) UNKNOWN PROPERTY
		UItemRequirements ItemRequirements; // 0x58(0x8)
		bool bEnableItemStacking; // 0x60(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FVerseGameplayTagContainer VerseGameplayTags; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventoryDefinition");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.EquippableInventoryDefinition
	// Inherited from UInventoryDefinition -> UDataAsset -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UEquippableInventoryDefinition : public UInventoryDefinition	
	{
	public:
		TArray EquipRestrictions; // 0x78(0x10)
		TArray AutoEquipConditions; // 0x88(0x10)
		TArray SlotBindings; // 0x98(0x10)
		bool bShowSlotBindings; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.EquippableInventoryDefinition");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.EquipmentSlot
	// Inherited from UEquippableInventoryDefinition -> UInventoryDefinition -> UDataAsset -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UEquipmentSlot : public UEquippableInventoryDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.EquipmentSlot");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.EquipmentHotBar
	// Inherited from UEquippableInventoryDefinition -> UInventoryDefinition -> UDataAsset -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UEquipmentHotBar : public UEquippableInventoryDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.EquipmentHotBar");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.InventoryCheatManager
	// Inherited from UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInventoryCheatManager : public UCheatManagerExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventoryCheatManager");
			return ret;
		}

		void InventoryUseItem(int32_t InventoryIndex, int32_t ItemIndex); // Flags: Final|Exec|Native|Public 0x7FF41464A078
		void InventorySetItemSlot(int32_t InventoryIndex, int32_t ItemIndex, uint16_t NewSlotIndex); // Flags: Final|Exec|Native|Public 0x7FF414649F98
		void InventorySetEquippedItemActive(int32_t InventoryIndex, int32_t ItemIndex, bool bActive); // Flags: Final|Exec|Native|Public 0x7FF414649EB8
		void InventoryRemoveFromItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToRemove); // Flags: Final|Exec|Native|Public 0x7FF414649DD8
		void InventoryMoveItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex); // Flags: Final|Exec|Native|Public 0x7FF414649CF8
		void InventoryMoveAmountOfItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex, int64_t AmountToMove); // Flags: Final|Exec|Native|Public 0x7FF414649C18
		void InventoryDropItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToDrop); // Flags: Final|Exec|Native|Public 0x7FF414649B38
		void InventoryAddToItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToAdd); // Flags: Final|Exec|Native|Public 0x7FF414649A58
	};


	// Class ItemizationCoreRuntime.InventorySetupDataBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInventorySetupDataBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventorySetupDataBase");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.InventorySetupDataNativeBasic
	// Inherited from UInventorySetupDataBase -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UInventorySetupDataNativeBasic : public UInventorySetupDataBase	
	{
	public:
		TArray EquippableInventoryList; // 0x28(0x10)
		TArray InventoryList; // 0x38(0x10)
		TArray StartingItemList; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventorySetupDataNativeBasic");
			return ret;
		}

		TArray GetDisallowedInventoryClasses(); // Flags: Native|Public|Const 0x7FF41464BFF8
		TArray GetAllowedInventoryClasses(); // Flags: Native|Public|Const 0x7FF41464BF18
		TArray GetAllowedEquipmentInventoryClasses(); // Flags: Native|Public|Const 0x7FF41464BE38
	};


	// Class ItemizationCoreRuntime.InventorySetupData
	// Inherited from UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UInventorySetupData : public UDataAsset	
	{
	public:
		TArray EquipmentSetups; // 0x30(0x10)
		TArray InventoryDefinitions; // 0x40(0x10)
		TArray StartingItems; // 0x50(0x10)
		TWeakObjectPtr InputMappingContext; // 0x60(0x20)
		TWeakObjectPtr InventoryUIWidgetClass; // 0x80(0x20)
		TWeakObjectPtr InventoryHUDUIWidgetClass; // 0xA0(0x20)
		FText DisplayName; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventorySetupData");
			return ret;
		}

		void SetInventoryDefinitionList(TArray& InventoryDefinitionList); // Flags: Final|Native|Public|HasOutParms 0x7FF41464C618
		void SetEquippableInventoryDefinitionList(TArray& EquipmentInventoryDefinitionList); // Flags: Final|Native|Public|HasOutParms 0x7FF41464C538
		TArray GetStartingItems(); // Flags: Final|Native|Public|Const 0x7FF41464C458
		TArray GetInventoryDefinitionList(); // Flags: Final|Native|Public|Const 0x7FF41464C378
		TArray GetEquippableInventoryDefinitionList(); // Flags: Final|Native|Public|Const 0x7FF41464C298
		TArray GetDisallowedInventoryDefinitionAssetClasses(); // Flags: Native|Protected|Const 0x7FF41464C1B8
		TArray GetDisallowedEquipmentInventoryDefinitionAssetClasses(); // Flags: Native|Protected|Const 0x7FF41464C0D8
	};


	// Class ItemizationCoreRuntime.ItemAbilityConfigurationAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UItemAbilityConfigurationAsset : public UPrimaryDataAsset	
	{
	public:
		UClass GameplayAbilityClass; // 0x30(0x8)
		FGameplayTagContainer GameplayTags; // 0x38(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset");
			return ret;
		}

		void Construct(UGameplayAbility ability); // Flags: Event|Public|BlueprintEvent|Const 0x7FF41464C6F8
	};


	// Class ItemizationCoreRuntime.ItemAbilityEffectAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UItemAbilityEffectAsset : public UPrimaryDataAsset	
	{
	public:
		UClass GameplayEffectClass; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAbilityEffectAsset");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemAbilityCost
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemAbilityCost : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAbilityCost");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemAbilityCostItem
	// Inherited from UItemAbilityCost -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UItemAbilityCostItem : public UItemAbilityCost	
	{
	public:
		TWeakObjectPtr ItemDefinition; // 0x28(0x20)
		int64_t NumConsumed; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAbilityCostItem");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemAbilityCooldown
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UItemAbilityCooldown : public UObject	
	{
	public:
		bool bApplyOnStart; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAbilityCooldown");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemAbilityCooldownTime
	// Inherited from UItemAbilityCooldown -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UItemAbilityCooldownTime : public UItemAbilityCooldown	
	{
	public:
		float CooldownTime; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAbilityCooldownTime");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemAbilityCooldownVelocityBased
	// Inherited from UItemAbilityCooldown -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UItemAbilityCooldownVelocityBased : public UItemAbilityCooldown	
	{
	public:
		float CooldownTimeIfStationary; // 0x30(0x4)
		float CooldownTimeScaleFactorIfMoving; // 0x34(0x4)
		bool CooldownTimeIsResetToZeroWhenMoving; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAbilityCooldownVelocityBased");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemAttachment
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class AItemAttachment : public AActor	
	{
	public:
		UMeshComponent Mesh; // 0x290(0x8)
		UItemAttachmentDefinition AttachmentData; // 0x298(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2A0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAttachment");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemComponentBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemComponentBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemComponentBase");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemAttachmentDefinition
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UItemAttachmentDefinition : public UObject	
	{
	public:
		EItemStateFilter AttachmentVisibility; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAttachmentDefinition");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemMeshAttachmentDefinition
	// Inherited from UItemAttachmentDefinition -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UItemMeshAttachmentDefinition : public UItemAttachmentDefinition	
	{
	public:
		FName AttachToSocketName; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FVector OffsetLocation; // 0x38(0x18)
		FRotator OffsetRotation; // 0x50(0x18)
		FVector MeshScale; // 0x68(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemMeshAttachmentDefinition");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemStaticMeshAttachmentDefinition
	// Inherited from UItemMeshAttachmentDefinition -> UItemAttachmentDefinition -> UObject
	// Size: 0x20 (0xA0 - 0x80)
	class UItemStaticMeshAttachmentDefinition : public UItemMeshAttachmentDefinition	
	{
	public:
		TWeakObjectPtr Mesh; // 0x80(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemStaticMeshAttachmentDefinition");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemSkeletalMeshAttachmentDefinition
	// Inherited from UItemMeshAttachmentDefinition -> UItemAttachmentDefinition -> UObject
	// Size: 0x40 (0xC0 - 0x80)
	class UItemSkeletalMeshAttachmentDefinition : public UItemMeshAttachmentDefinition	
	{
	public:
		TWeakObjectPtr Mesh; // 0x80(0x20)
		TWeakObjectPtr Animation; // 0xA0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemSkeletalMeshAttachmentDefinition");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemOwnerPoseAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UItemOwnerPoseAsset : public UPrimaryDataAsset	
	{
	public:
		UProxyTable ProxyTable; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemOwnerPoseAsset");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemDefinitionBase
	// Inherited from UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UItemDefinitionBase : public UMcpItemDefinitionBase	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		FText ItemName; // 0x40(0x10)
		FText ItemDescription; // 0x50(0x10)
		FText ItemShortDescription; // 0x60(0x10)
		TArray DataList; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemDefinitionBase");
			return ret;
		}

		FText GetItemShortDescription(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464CA78
		FText GetItemDescription(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464C998
		void GetItemData(EItemDataQueryResult& ExecResult, int32_t& ItemData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF41464C8B8
		FText GetDisplayName(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464C7D8
	};


	// Class ItemizationCoreRuntime.ItemEntityPrefab
	// Inherited from UEntityPrefab -> UBlueprint -> UBlueprintCore -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UItemEntityPrefab : public UEntityPrefab	
	{
	public:
		UItemDefinitionBase ItemDefinition; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemEntityPrefab");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemInputAction
	// Inherited from UInputAction -> UDataAsset -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UItemInputAction : public UInputAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemInputAction");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemInputMappingContext
	// Inherited from UInputMappingContext -> UDataAsset -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UItemInputMappingContext : public UInputMappingContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemInputMappingContext");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemInstance
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UItemInstance : public UObject	
	{
	public:
		FGuid ItemEntryID; // 0x28(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemInstance");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemInterface");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationConfigurationAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x90 (0xC0 - 0x30)
	class UItemizationConfigurationAsset : public UPrimaryDataAsset	
	{
	public:
		UClass InventorySetup; // 0x30(0x8)
		UClass AIInventorySetup; // 0x38(0x8)
		UClass EditModeInventorySetup; // 0x40(0x8)
		TWeakObjectPtr HUDWidgetClass; // 0x48(0x20)
		TWeakObjectPtr InventoryScreenWidgetClass; // 0x68(0x20)
		TWeakObjectPtr InputMappingContext; // 0x88(0x20)
		UInventorySetupDataNativeBasic DEBUG_InventorySetup; // 0xA8(0x8)
		UInventorySetupDataNativeBasic DEBUG_AIInventorySetup; // 0xB0(0x8)
		UInventorySetupDataNativeBasic DEBUG_EditModeInventorySetup; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationConfigurationAsset");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationCoreSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UItemizationCoreSubsystem : public UEngineSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationCoreSubsystem");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemizationFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationFunctionLibrary");
			return ret;
		}

		int32_t GetItemDataSlot(FItemAggregatedData& ItemData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41464CED8
		FGuid GetItemDataItemEntryID(FItemAggregatedData& ItemData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41464CDF8
		UItemDefinitionBase GetItemDataDefinition(FItemAggregatedData& ItemData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF41464CD18
		FString DescribeItemEntryID(FGuid& ItemEntryID); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41464CC38
		FString DescribeInventoryID(FGuid& InventoryID); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41464CB58
	};


	// Class ItemizationCoreRuntime.ItemizationLootCountCalculator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemizationLootCountCalculator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootCountCalculator");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationLootCountCalculator_Value
	// Inherited from UItemizationLootCountCalculator -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UItemizationLootCountCalculator_Value : public UItemizationLootCountCalculator	
	{
	public:
		FScalableFloat Value; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_Value");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationLootCountCalculator_Range
	// Inherited from UItemizationLootCountCalculator -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UItemizationLootCountCalculator_Range : public UItemizationLootCountCalculator	
	{
	public:
		FScalableFloat Min; // 0x28(0x28)
		FScalableFloat Max; // 0x50(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_Range");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationLootPoolAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UItemizationLootPoolAsset : public UDataAsset	
	{
	public:
		FText LootTableName; // 0x30(0x10)
		FText LootTableDescription; // 0x40(0x10)
		TArray LootPoolPostProcessorList; // 0x50(0x10)
		TArray GuaranteedLoot; // 0x60(0x10)
		UItemizationLootCountCalculator SelectionCount; // 0x70(0x8)
		TArray ChanceLoot; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootPoolAsset");
			return ret;
		}

		TArray GetDisallowedLootPoolItemClasses(); // Flags: Native|Public|Const 0x7FF41464D098
		TArray GetAllowedLootPoolItemClasses(); // Flags: Native|Public|Const 0x7FF41464CFB8
	};


	// Class ItemizationCoreRuntime.ItemizationLootPoolProcessor
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemizationLootPoolProcessor : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootPoolProcessor");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationLootWeightCalculator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemizationLootWeightCalculator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationLootWeightCalculator_Value
	// Inherited from UItemizationLootWeightCalculator -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UItemizationLootWeightCalculator_Value : public UItemizationLootWeightCalculator	
	{
	public:
		FScalableFloat Value; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator_Value");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationLootWeightCalculator_Range
	// Inherited from UItemizationLootWeightCalculator -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UItemizationLootWeightCalculator_Range : public UItemizationLootWeightCalculator	
	{
	public:
		FScalableFloat Min; // 0x28(0x28)
		FScalableFloat Max; // 0x50(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator_Range");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationPersistenceManagerBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemizationPersistenceManagerBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationPersistenceManagerBase");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationSubsystemComponent
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemizationSubsystemComponent : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationSubsystemComponent");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationSubsystemComponent_Ability
	// Inherited from UItemizationSubsystemComponent -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UItemizationSubsystemComponent_Ability : public UItemizationSubsystemComponent	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationSubsystemComponent_Ability");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationSubsystemComponent_Attach
	// Inherited from UItemizationSubsystemComponent -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UItemizationSubsystemComponent_Attach : public UItemizationSubsystemComponent	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationSubsystemComponent_Attach");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationSubsystemComponent_OwnerPose
	// Inherited from UItemizationSubsystemComponent -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UItemizationSubsystemComponent_OwnerPose : public UItemizationSubsystemComponent	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationSubsystemComponent_OwnerPose");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemizationWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x138 (0x168 - 0x30)
	class UItemizationWorldSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x120]; // 0x30(0x120) UNKNOWN PROPERTY
		UItemizationPersistenceManagerBase ItemizationPersistenceManager; // 0x150(0x8)
		TArray Components; // 0x158(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationWorldSubsystem");
			return ret;
		}

		void OnInventoryComponentDestroyed(UInventoryComponent InventoryComponent); // Flags: Final|Native|Protected 0x7FF41464D178
	};


	// Class ItemizationCoreRuntime.ItemRarity
	// Inherited from UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UItemRarity : public UDataAsset	
	{
	public:
		FText Name; // 0x30(0x10)
		FText Description; // 0x40(0x10)
		FLinearColor Color; // 0x50(0x10)
		float Tier; // 0x60(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVerseGameplayTagContainer Tags; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemRarity");
			return ret;
		}

		float GetTier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464D4F8
		FText GetName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464D418
		FText GetDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464D338
		FLinearColor GetColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41464D258
	};


	// Class ItemizationCoreRuntime.ItemRarityTable
	// Inherited from UDataAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UItemRarityTable : public UDataAsset	
	{
	public:
		FText RarityTableName; // 0x30(0x10)
		FText RarityTableDescription; // 0x40(0x10)
		TArray RarityList; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemRarityTable");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemRequirements
	// Inherited from UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UItemRequirements : public UDataAsset	
	{
	public:
		FText Name; // 0x30(0x10)
		FText Description; // 0x40(0x10)
		TSet ItemTypes; // 0x50(0x50)
		FItemTagContainer TagContainer; // 0xA0(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemRequirements");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemType
	// Inherited from UDataAsset -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UItemType : public UDataAsset	
	{
	public:
		FText Name; // 0x30(0x10)
		FText Description; // 0x40(0x10)
		UItemType ParentType; // 0x50(0x8)
		FVerseGameplayTagContainer Tags; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemType");
			return ret;
		}

		UItemType GetParentType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464D798
		FText GetName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464D6B8
		FText GetDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464D5D8
	};


	// Class ItemizationCoreRuntime.VerseItemizationSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xD0 (0x100 - 0x30)
	class UVerseItemizationSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0xD0]; // 0x30(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.VerseItemizationSubsystem");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.ItemRequirementBase
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UItemRequirementBase : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemRequirementBase");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.EquippableItemRestrictionBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEquippableItemRestrictionBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.EquippableItemRestrictionBase");
			return ret;
		}
	};


	// Class ItemizationCoreRuntime.InventoryComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UInventoryComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnInventoryComponentDestroyed; // 0xA0(0x10)
		UClass InventoryCollectionClass; // 0xB0(0x8)
		TWeakObjectPtr InventorySetupData; // 0xB8(0x20)
		TWeakObjectPtr InventoryCollection; // 0xD8(0x8)
		FGuid InventoryCollectionID; // 0xE0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventoryComponent");
			return ret;
		}

		void UseItem(FGuid& ItemId, FGuid AdditionalItemID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464DDB8
		void SetEquippableItemActive(FGuid& ItemEntryID, bool bActive); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464DCD8
		void OnRep_InventoryCollection(); // Flags: Final|Native|Private 0x7FF41464DBF8
		AInventoryCollection GetInventoryCollection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41464DB18
		void DropItem(FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41464DA38
		void AddOrResetInventory(UInventoryDefinition NewInventoryDefinition); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41464D958
		void AddItem(UItemDefinitionBase ItemDefinition, int64_t Amount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41464D878
	};

}
