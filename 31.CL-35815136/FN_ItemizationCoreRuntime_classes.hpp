#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ItemizationCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ItemizationCoreRuntime.InventoryCollection
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x608 (0x898 - 0x290)
	class AInventoryCollection : public AInfo	
	{
	public:
		FMulticastInlineDelegate OnInventoryCollectionLoadStateChanged; // 0x290(0x10)
		TArray<UInventory*> InventoryList; // 0x2A0(0x10)
		TMap<FGuid, UInventory*> InventoryMap; // 0x2B0(0x50)
		TMap<FGuid, FGuid> ItemInventoryMap; // 0x300(0x50)
		TMap<FGuid, UItemInstance*> ItemInstanceMap; // 0x350(0x50)
		unsigned char UnknownData00_6[0x4D0]; // 0x3A0(0x4D0) UNKNOWN PROPERTY
		TWeakObjectPtr<APlayerController*> InputPlayerController; // 0x870(0x8)
		EInventoryCollectionType InventoryCollectionType; // 0x878(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x879(0x3) UNKNOWN PROPERTY
		FGuid InventoryCollectionID; // 0x87C(0x10)
		EInventoryCollectionLoadState InventoryCollectionLoadState; // 0x88C(0x1)
		bool bIsInventoryCollectionUnregistered; // 0x88D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x88E(0x2) UNKNOWN PROPERTY
		UInventorySetupDataBase* UsedInventorySetupData; // 0x890(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventoryCollection");
			return ret;
		}

		void UseItem(FGuid& ItemId, FGuid AdditionalItemID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC2F12C(relative to base address)
		int64_t SetInventoryTotalSlotsOverride(FGuid& TargetInventoryID, int64_t InInventoryTotalSlotsOverride); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC2EFA8(relative to base address)
		int64_t SetInventoryMaxStackSizeOverride(FGuid& TargetInventoryID, int64_t InInventoryMaxStackSizeOverride); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC2EE68(relative to base address)
		void SetEquippableItemInactive(FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC2ECF4(relative to base address)
		void SetEquippableItemActive(FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC2EC64(relative to base address)
		void Server_UseItem(FGuid ItemId, FGuid AdditionalItemID); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF74DC2E988(relative to base address)
		void Server_SwapItems(FGuid ItemEntryID, AInventoryCollection* OtherInventoryCollection, FGuid OtherItemEntryID); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults, Memory Exec: 0x7FF74DC2E6E4(relative to base address)
		void Server_SetItemSlot(FGuid OwningInventoryID, FGuid ItemEntryID, uint16_t SlotNumber, EVkInventoryMoveBehaviour MoveBehaviour); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults, Memory Exec: 0x7FF74DC2E390(relative to base address)
		void Server_SetEquippableItemInactive(FGuid ItemEntryID); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults, Memory Exec: 0x7FF74DC2E278(relative to base address)
		void Server_SetEquippableItemActive(FGuid ItemEntryID); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults, Memory Exec: 0x7FF74DC2E160(relative to base address)
		void Server_MoveItemsWithDefinitionToInventory(FGuid OwningInventoryID, UItemDefinitionBase* ItemDefinition, AInventoryCollection* TargetInventoryCollection, FGuid TargetInventoryID, int64_t Amount); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults, Memory Exec: 0x7FF74DC2DD50(relative to base address)
		void Server_MoveItemListToInventory(TArray<FGuid> ItemEntryIDList, AInventoryCollection* TargetInventoryCollection, FGuid TargetInventoryID); // Flags: Net|NetReliableNative|Event|Protected|NetServer|HasDefaults, Memory Exec: 0x7FF74DC2DBAC(relative to base address)
		void Server_DropItem(FGuid ItemEntryID, int64_t AmountToDrop); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate, Memory Exec: 0x7FF74DC2D9A0(relative to base address)
		void OnRep_InventoryCollectionID(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DC2D954(relative to base address)
		bool IsEquippableItemActive(FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2D8A4(relative to base address)
		int32_t GetItemSlotNumber(FGuid& TargetInventoryID, FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2D1DC(relative to base address)
		int64_t GetItemMaxAmountForEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2D0DC(relative to base address)
		FGuid GetItemEntryIDBySlot(FGuid& TargetInventoryID, int32_t SlotNumber); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2CFB0(relative to base address)
		UItemDefinitionBase GetItemDefinition(FGuid& TargetInventoryID, FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2CEB0(relative to base address)
		int64_t GetItemAmountFromInventory(UItemDefinitionBase* ItemDefinition, FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2CDA8(relative to base address)
		int64_t GetItemAmountFromEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2CCA8(relative to base address)
		int64_t GetItemAmount(UItemDefinitionBase* ItemDefinition); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2CC18(relative to base address)
		int64_t GetInventoryTotalSlots(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2CB6C(relative to base address)
		FText GetInventoryName(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2CAE4(relative to base address)
		int64_t GetInventoryMaxStackSizeOverride(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2CA38(relative to base address)
		TArray GetInventoryListInPickupPriorityForItemDefinition(UItemDefinitionBase* ItemDefinition); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2C994(relative to base address)
		UInventoryDefinition GetInventoryDefinition(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2C86C(relative to base address)
		EItemizationInventoryCreationType GetInventoryCreationType(FGuid& TargetInventoryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2C7C8(relative to base address)
		TArray GetInventoriesWithInventoryDefinition(UInventoryDefinition* InventoryDefinition); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2C730(relative to base address)
		bool GetAllItemsInInventory(FGuid& TargetInventoryID, TArray<FGuid>& OutItemEntryIDList); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2C418(relative to base address)
		bool GetAllInventoriesInCollection(TArray<FGuid>& OutInventoryIDList); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC2C36C(relative to base address)
		void DropItem(FGuid& ItemEntryID, int64_t AmountToDrop); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC2C23C(relative to base address)
		void ClientOnItemAbilityCooldownUpdated(FGuid InventoryID, FGuid ItemEntryID, int32_t AbilityBindingIndex, FItemAbilityCooldownState CooldownState); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF74DC2BEC8(relative to base address)
	};


	// Class ItemizationCoreRuntime.Inventory
	// Inherited from UActorComponent -> UObject
	// Size: 0x4F8 (0x598 - 0xA0)
	class UInventory : public UActorComponent	
	{
	public:
		AInventoryCollection* OwningInventoryCollection; // 0xA0(0x8)
		UObject* VerseInventoryInternal; // 0xA8(0x8)
		FGuid InventoryID; // 0xB0(0x10)
		EItemizationInventoryCreationType InventoryType; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		FItemEntryList ItemEntryData; // 0xC8(0x308)
		unsigned char UnknownData01_7[0x1C8]; // 0x3D0(0x1C8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.Inventory");
			return ret;
		}

		void OnRep_VerseInventory(); // Flags: Native|Protected, Memory Exec: 0x7FF74847EE18(relative to base address)
		void OnRep_ItemData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DC3910C(relative to base address)
		void OnRep_InventoryTotalSlotsOverride(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DC390DC(relative to base address)
		void OnRep_InventoryMaxStackSizeOverride(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DC390AC(relative to base address)
		void OnRep_InventoryID(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DC39098(relative to base address)
	};


	// Class ItemizationCoreRuntime.EquippableInventory
	// Inherited from UInventory -> UActorComponent -> UObject
	// Size: 0x78 (0x610 - 0x598)
	class UEquippableInventory : public UInventory	
	{
	public:
		TArray<FGuid> ActiveItems; // 0x598(0x10)
		TArray<FGuid> PreviouslyActiveItems; // 0x5A8(0x10)
		unsigned char UnknownData00_6[0x48]; // 0x5B8(0x48) UNKNOWN PROPERTY
		TArray<FEquippableInventorySlotBinding> SlotBindingList; // 0x600(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.EquippableInventory");
			return ret;
		}

		void OnRep_SlotBindings(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74DC2D968(relative to base address)
		void OnRep_ActiveItems(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74DC2D940(relative to base address)
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
		unsigned char UnknownData00_6[0x5]; // 0x53(0x5) UNKNOWN PROPERTY
		UItemRequirements* ItemRequirements; // 0x58(0x8)
		bool bEnableItemStacking; // 0x60(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
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
		TArray<FEquipItemRestriction> EquipRestrictions; // 0x78(0x10)
		TArray<FEquipItemCondition> AutoEquipConditions; // 0x88(0x10)
		TArray<UInputAction*> SlotBindings; // 0x98(0x10)
		bool bShowSlotBindings; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

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

		void InventoryUseItem(int32_t InventoryIndex, int32_t ItemIndex); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C39C954(relative to base address)
		void InventorySetItemSlot(int32_t InventoryIndex, int32_t ItemIndex, uint16_t NewSlotIndex); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74DC2D748(relative to base address)
		void InventorySetEquippedItemActive(int32_t InventoryIndex, int32_t ItemIndex, bool bActive); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74DC2D668(relative to base address)
		void InventoryRemoveFromItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToRemove); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74DC2D384(relative to base address)
		void InventoryMoveItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74DC2D588(relative to base address)
		void InventoryMoveAmountOfItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex, int64_t AmountToMove); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74DC2D468(relative to base address)
		void InventoryDropItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToDrop); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74DC2D384(relative to base address)
		void InventoryAddToItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToAdd); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74DC2D384(relative to base address)
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
		TArray<FEquippableInventoryProperties> EquippableInventoryList; // 0x28(0x10)
		TArray<FInventoryProperties> InventoryList; // 0x38(0x10)
		TArray<FInventoryStartingItem> StartingItemList; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventorySetupDataNativeBasic");
			return ret;
		}

		TArray GetDisallowedInventoryClasses(); // Flags: Native|Public|Const, Memory Exec: 0x7FF74DC2C5F4(relative to base address)
		TArray GetAllowedInventoryClasses(); // Flags: Native|Public|Const, Memory Exec: 0x7FF74DC2C56C(relative to base address)
		TArray GetAllowedEquipmentInventoryClasses(); // Flags: Native|Public|Const, Memory Exec: 0x7FF74DC2C528(relative to base address)
	};


	// Class ItemizationCoreRuntime.InventorySetupData
	// Inherited from UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UInventorySetupData : public UDataAsset	
	{
	public:
		TArray<TWeakObjectPtr> EquipmentSetups; // 0x30(0x10)
		TArray<TWeakObjectPtr> InventoryDefinitions; // 0x40(0x10)
		TArray<FInventoryStartingItem> StartingItems; // 0x50(0x10)
		TWeakObjectPtr<UInputMappingContext*> InputMappingContext; // 0x60(0x20)
		TWeakObjectPtr<UClass*> InventoryUIWidgetClass; // 0x80(0x20)
		TWeakObjectPtr<UClass*> InventoryHUDUIWidgetClass; // 0xA0(0x20)
		FText DisplayName; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventorySetupData");
			return ret;
		}

		void SetInventoryDefinitionList(TArray<TWeakObjectPtr>& InventoryDefinitionList); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74DC2ED84(relative to base address)
		void SetEquippableInventoryDefinitionList(TArray<TWeakObjectPtr>& EquipmentInventoryDefinitionList); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74DC2EB80(relative to base address)
		TArray GetStartingItems(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74DC2D2DC(relative to base address)
		TArray GetInventoryDefinitionList(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74DC2C8E0(relative to base address)
		TArray GetEquippableInventoryDefinitionList(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74DC2C67C(relative to base address)
		TArray GetDisallowedInventoryDefinitionAssetClasses(); // Flags: Native|Protected|Const, Memory Exec: 0x7FF74DC2C638(relative to base address)
		TArray GetDisallowedEquipmentInventoryDefinitionAssetClasses(); // Flags: Native|Protected|Const, Memory Exec: 0x7FF74DC2C5B0(relative to base address)
	};


	// Class ItemizationCoreRuntime.ItemAbilityConfigurationAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UItemAbilityConfigurationAsset : public UPrimaryDataAsset	
	{
	public:
		UClass* GameplayAbilityClass; // 0x30(0x8)
		FGameplayTagContainer GameplayTags; // 0x38(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset");
			return ret;
		}

		void Construct(UGameplayAbility* ability); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ItemizationCoreRuntime.ItemAbilityEffectAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UItemAbilityEffectAsset : public UPrimaryDataAsset	
	{
	public:
		UClass* GameplayEffectClass; // 0x30(0x8)

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
		TWeakObjectPtr<UItemDefinitionBase*> ItemDefinition; // 0x28(0x20)
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
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

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
		UMeshComponent* Mesh; // 0x290(0x8)
		UItemAttachmentDefinition* AttachmentData; // 0x298(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2A0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
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
		TWeakObjectPtr<UStaticMesh*> Mesh; // 0x80(0x20)

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
		TWeakObjectPtr<USkeletalMesh*> Mesh; // 0x80(0x20)
		TWeakObjectPtr<UAnimSequence*> Animation; // 0xA0(0x20)

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
		UProxyTable* ProxyTable; // 0x30(0x8)

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
		unsigned char UnknownData00_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		FText ItemName; // 0x40(0x10)
		FText ItemDescription; // 0x50(0x10)
		FText ItemShortDescription; // 0x60(0x10)
		TArray<FInstancedStruct> DataList; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemDefinitionBase");
			return ret;
		}

		FText GetItemShortDescription(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC39058(relative to base address)
		FText GetItemDescription(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC39018(relative to base address)
		void GetItemData(EItemDataQueryResult& ExecResult, int32_t& ItemData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF748EABB04(relative to base address)
		FText GetDisplayName(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC38D7C(relative to base address)
	};


	// Class ItemizationCoreRuntime.ItemEntityPrefab
	// Inherited from UEntityPrefab -> UBlueprint -> UBlueprintCore -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UItemEntityPrefab : public UEntityPrefab	
	{
	public:
		UItemDefinitionBase* ItemDefinition; // 0xA8(0x8)

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
		unsigned char UnknownData00_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

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
		UClass* InventorySetup; // 0x30(0x8)
		UClass* AIInventorySetup; // 0x38(0x8)
		UClass* EditModeInventorySetup; // 0x40(0x8)
		TWeakObjectPtr<UClass*> HUDWidgetClass; // 0x48(0x20)
		TWeakObjectPtr<UClass*> InventoryScreenWidgetClass; // 0x68(0x20)
		TWeakObjectPtr<UInputMappingContext*> InputMappingContext; // 0x88(0x20)
		UInventorySetupDataNativeBasic* DEBUG_InventorySetup; // 0xA8(0x8)
		UInventorySetupDataNativeBasic* DEBUG_AIInventorySetup; // 0xB0(0x8)
		UInventorySetupDataNativeBasic* DEBUG_EditModeInventorySetup; // 0xB8(0x8)

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

		int32_t GetItemDataSlot(FItemAggregatedData& ItemData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC38F54(relative to base address)
		FGuid GetItemDataItemEntryID(FItemAggregatedData& ItemData); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC38E90(relative to base address)
		UItemDefinitionBase GetItemDataDefinition(FItemAggregatedData& ItemData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC38DBC(relative to base address)
		FString DescribeItemEntryID(FGuid& ItemEntryID); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC38CD0(relative to base address)
		FString DescribeInventoryID(FGuid& InventoryID); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74DC38CD0(relative to base address)
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
		TArray<UItemizationLootPoolProcessor*> LootPoolPostProcessorList; // 0x50(0x10)
		TArray<FItemizationLootEntry_Guaranteed> GuaranteedLoot; // 0x60(0x10)
		UItemizationLootCountCalculator* SelectionCount; // 0x70(0x8)
		TArray<FItemizationLootEntry_Chance> ChanceLoot; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationLootPoolAsset");
			return ret;
		}

		TArray GetDisallowedLootPoolItemClasses(); // Flags: Native|Public|Const, Memory Exec: 0x7FF74DC2C638(relative to base address)
		TArray GetAllowedLootPoolItemClasses(); // Flags: Native|Public|Const, Memory Exec: 0x7FF74DC2C5B0(relative to base address)
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
		unsigned char UnknownData00_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x120]; // 0x30(0x120) UNKNOWN PROPERTY
		UItemizationPersistenceManagerBase* ItemizationPersistenceManager; // 0x150(0x8)
		TArray<UItemizationSubsystemComponent*> Components; // 0x158(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemizationWorldSubsystem");
			return ret;
		}

		void OnInventoryComponentDestroyed(UInventoryComponent* InventoryComponent); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DC49400(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVerseGameplayTagContainer Tags; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemRarity");
			return ret;
		}

		float GetTier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6D398C(relative to base address)
		FText GetName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D07329C(relative to base address)
		FText GetDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC493BC(relative to base address)
		FLinearColor GetColor(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC493A4(relative to base address)
	};


	// Class ItemizationCoreRuntime.ItemRarityTable
	// Inherited from UDataAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UItemRarityTable : public UDataAsset	
	{
	public:
		FText RarityTableName; // 0x30(0x10)
		FText RarityTableDescription; // 0x40(0x10)
		TArray<FVkRarityEntry> RarityList; // 0x50(0x10)

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
		TSet<UItemType*> ItemTypes; // 0x50(0x50)
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
		UItemType* ParentType; // 0x50(0x8)
		FVerseGameplayTagContainer Tags; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.ItemType");
			return ret;
		}

		UItemType GetParentType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034578(relative to base address)
		FText GetName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D07329C(relative to base address)
		FText GetDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC493BC(relative to base address)
	};


	// Class ItemizationCoreRuntime.VerseItemizationSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xD0 (0x100 - 0x30)
	class UVerseItemizationSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0xD0]; // 0x30(0xD0) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

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
		UClass* InventoryCollectionClass; // 0xB0(0x8)
		TWeakObjectPtr<UInventorySetupDataBase*> InventorySetupData; // 0xB8(0x20)
		TWeakObjectPtr<AInventoryCollection*> InventoryCollection; // 0xD8(0x8)
		FGuid InventoryCollectionID; // 0xE0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizationCoreRuntime.InventoryComponent");
			return ret;
		}

		void UseItem(FGuid& ItemId, FGuid AdditionalItemID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC49630(relative to base address)
		void SetEquippableItemActive(FGuid& ItemEntryID, bool bActive); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC494E8(relative to base address)
		void OnRep_InventoryCollection(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74DC49480(relative to base address)
		AInventoryCollection GetInventoryCollection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC493D8(relative to base address)
		void DropItem(FGuid& ItemEntryID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DC492E8(relative to base address)
		void AddOrResetInventory(UInventoryDefinition* NewInventoryDefinition); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void AddItem(UItemDefinitionBase* ItemDefinition, int64_t Amount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC49244(relative to base address)
	};

}
