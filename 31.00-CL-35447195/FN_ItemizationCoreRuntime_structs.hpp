#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ItemizationCoreRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ItemizationCoreRuntime.EquippableInventorySlotBinding
	// Size: 0x10 (0x10 - 0x0)
	struct FEquippableInventorySlotBinding	
	{
	public:
		int64_t Slot; // 0x0(0x8)
		UInputAction InputAction; // 0x8(0x8)
	};


	// Struct ItemizationCoreRuntime.EquipItemFilter
	// Size: 0x18 (0x18 - 0x0)
	struct FEquipItemFilter	
	{
	public:
		bool bAppliesToAllItems; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray ItemDefinitions; // 0x8(0x10)
	};


	// Struct ItemizationCoreRuntime.EquipItemRestriction
	// Inherited from FEquipItemFilter
	// Size: 0x10 (0x28 - 0x18)
	struct FEquipItemRestriction : public FEquipItemFilter	
	{
	public:
		int64_t ActiveLimit; // 0x18(0x8)
		EEquipItemLimitHitBehaviour LimitHitBehaviour; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct ItemizationCoreRuntime.EquipItemCondition
	// Inherited from FEquipItemFilter
	// Size: 0x0 (0x18 - 0x18)
	struct FEquipItemCondition : public FEquipItemFilter	
	{
	public:
	};


	// Struct ItemizationCoreRuntime.ItemAggregatedData
	// Size: 0x70 (0x70 - 0x0)
	struct FItemAggregatedData	
	{
	public:
		unsigned char UnknownData01_2[0x70]; // 0x0(0x70) UNKNOWN PROPERTY
	};


	// Struct ItemizationCoreRuntime.ItemSlotChangeEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FItemSlotChangeEvent	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct ItemizationCoreRuntime.InventoryStartingItem
	// Size: 0x28 (0x28 - 0x0)
	struct FInventoryStartingItem	
	{
	public:
		TWeakObjectPtr ItemDefinition; // 0x0(0x20)
		int64_t Amount; // 0x20(0x8)
	};


	// Struct ItemizationCoreRuntime.InventoryPropertiesBase
	// Size: 0x30 (0x30 - 0x0)
	struct FInventoryPropertiesBase	
	{
	public:
		FString InventoryName; // 0x0(0x10)
		TArray ItemRequirements; // 0x10(0x10)
		int64_t PickupPriority; // 0x20(0x8)
		int64_t TotalSlotsOverride; // 0x28(0x8)
	};


	// Struct ItemizationCoreRuntime.InventoryProperties
	// Inherited from FInventoryPropertiesBase
	// Size: 0x20 (0x50 - 0x30)
	struct FInventoryProperties : public FInventoryPropertiesBase	
	{
	public:
		TWeakObjectPtr InventoryClass; // 0x30(0x20)
	};


	// Struct ItemizationCoreRuntime.EquippableInventorySlotBindingDefinition
	// Size: 0x28 (0x28 - 0x0)
	struct FEquippableInventorySlotBindingDefinition	
	{
	public:
		int64_t Slot; // 0x0(0x8)
		TWeakObjectPtr InputAction; // 0x8(0x20)
	};


	// Struct ItemizationCoreRuntime.EquippableInventoryProperties
	// Inherited from FInventoryPropertiesBase
	// Size: 0x30 (0x60 - 0x30)
	struct FEquippableInventoryProperties : public FInventoryPropertiesBase	
	{
	public:
		TWeakObjectPtr InventoryClass; // 0x30(0x20)
		TArray SlotBindings; // 0x50(0x10)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData
	// Size: 0x1 (0x1 - 0x0)
	struct FItemComponentData	
	{
	public:
	};


	// Struct ItemizationCoreRuntime.ItemComponentDataList
	// Size: 0x108 (0x108 - 0x0)
	struct FItemComponentDataList	
	{
	public:
		TArray DataList; // 0x0(0x10)
		unsigned char UnknownData01_7[0xF8]; // 0x10(0xF8) UNKNOWN PROPERTY
	};


	// Struct ItemizationCoreRuntime.ItemAbilityBinding
	// Size: 0x50 (0x50 - 0x0)
	struct FItemAbilityBinding	
	{
	public:
		TWeakObjectPtr InputAction; // 0x0(0x20)
		EItemStateFilter ActiveState; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray Costs; // 0x28(0x10)
		TArray Cooldowns; // 0x38(0x10)
		UItemAbilityConfigurationAsset ability; // 0x48(0x8)
	};


	// Struct ItemizationCoreRuntime.ItemAbilityCooldownState
	// Size: 0x18 (0x18 - 0x0)
	struct FItemAbilityCooldownState	
	{
	public:
		bool bIsActive; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Progress; // 0x4(0x4)
		float PredictedTimeLeft; // 0x8(0x4)
		float PredictedProgressPerSecond; // 0xC(0x4)
		double TimeLastUpdated; // 0x10(0x8)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_Ability
	// Inherited from FItemComponentData
	// Size: 0x10 (0x10 - 0x0)
	struct FItemComponentData_Ability : public FItemComponentData	
	{
	public:
		TArray AbilityList; // 0x0(0x10)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_Attach
	// Inherited from FItemComponentData
	// Size: 0x10 (0x10 - 0x0)
	struct FItemComponentData_Attach : public FItemComponentData	
	{
	public:
		TArray Attachments; // 0x0(0x10)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_Icon
	// Inherited from FItemComponentData
	// Size: 0x20 (0x20 - 0x0)
	struct FItemComponentData_Icon : public FItemComponentData	
	{
	public:
		TWeakObjectPtr Icon; // 0x0(0x20)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_MaxStackSize
	// Inherited from FItemComponentData
	// Size: 0x28 (0x28 - 0x0)
	struct FItemComponentData_MaxStackSize : public FItemComponentData	
	{
	public:
		FScalableFloat MaxStackSize; // 0x0(0x28)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_OwnedGameplayTags
	// Inherited from FItemComponentData
	// Size: 0x20 (0x20 - 0x0)
	struct FItemComponentData_OwnedGameplayTags : public FItemComponentData	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_OwnerPose
	// Inherited from FItemComponentData
	// Size: 0x18 (0x18 - 0x0)
	struct FItemComponentData_OwnerPose : public FItemComponentData	
	{
	public:
		EItemStateFilter ApplyPoseState; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UItemOwnerPoseAsset PoseAsset; // 0x8(0x8)
		float PosePriority; // 0x10(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_Rarity
	// Inherited from FItemComponentData
	// Size: 0x8 (0x8 - 0x0)
	struct FItemComponentData_Rarity : public FItemComponentData	
	{
	public:
		UItemRarity ItemRarity; // 0x0(0x8)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_SlotSize
	// Inherited from FItemComponentData
	// Size: 0x1 (0x1 - 0x0)
	struct FItemComponentData_SlotSize : public FItemComponentData	
	{
	public:
		char SlotSize; // 0x0(0x1)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_StackSize
	// Inherited from FItemComponentData
	// Size: 0x8 (0x8 - 0x0)
	struct FItemComponentData_StackSize : public FItemComponentData	
	{
	public:
		int64_t StackSize; // 0x0(0x8)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_Tags
	// Inherited from FItemComponentData
	// Size: 0x10 (0x10 - 0x0)
	struct FItemComponentData_Tags : public FItemComponentData	
	{
	public:
		FVerseGameplayTagContainer ItemTags; // 0x0(0x10)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_Traits
	// Inherited from FItemComponentData
	// Size: 0x20 (0x20 - 0x0)
	struct FItemComponentData_Traits : public FItemComponentData	
	{
	public:
		FGameplayTagContainer Traits; // 0x0(0x20)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_Type
	// Inherited from FItemComponentData
	// Size: 0x8 (0x8 - 0x0)
	struct FItemComponentData_Type : public FItemComponentData	
	{
	public:
		UItemType ItemType; // 0x0(0x8)
	};


	// Struct ItemizationCoreRuntime.ItemComponentData_WasLoadedFromSave
	// Inherited from FItemComponentData
	// Size: 0x1 (0x1 - 0x0)
	struct FItemComponentData_WasLoadedFromSave : public FItemComponentData	
	{
	public:
		bool bWasLoadedFromSave; // 0x0(0x1)
	};


	// Struct ItemizationCoreRuntime.ItemComponentContainer
	// Size: 0x1 (0x1 - 0x0)
	struct FItemComponentContainer	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct ItemizationCoreRuntime.ItemEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x134 (0x140 - 0xC)
	struct FItemEntry : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData03_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UItemDefinitionBase ItemDefinition; // 0x10(0x8)
		FGuid ItemEntryID; // 0x18(0x10)
		int32_t SlotNumber; // 0x28(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FItemComponentDataList ItemData; // 0x30(0x108)
		unsigned char UnknownData05_7[0x8]; // 0x138(0x8) UNKNOWN PROPERTY
	};


	// Struct ItemizationCoreRuntime.ItemEntryList
	// Inherited from FFastArraySerializer
	// Size: 0x200 (0x308 - 0x108)
	struct FItemEntryList : public FFastArraySerializer	
	{
	public:
		TArray ItemList; // 0x108(0x10)
		unsigned char UnknownData01_7[0x1F0]; // 0x118(0x1F0) UNKNOWN PROPERTY
	};


	// Struct ItemizationCoreRuntime.ItemizationLootEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FItemizationLootEntry	
	{
	public:
		UObject Item; // 0x0(0x8)
	};


	// Struct ItemizationCoreRuntime.ItemizationLootEntry_Guaranteed
	// Inherited from FItemizationLootEntry
	// Size: 0x8 (0x10 - 0x8)
	struct FItemizationLootEntry_Guaranteed : public FItemizationLootEntry	
	{
	public:
		UItemizationLootCountCalculator Count; // 0x8(0x8)
	};


	// Struct ItemizationCoreRuntime.ItemizationLootEntry_Chance
	// Inherited from FItemizationLootEntry
	// Size: 0x38 (0x40 - 0x8)
	struct FItemizationLootEntry_Chance : public FItemizationLootEntry	
	{
	public:
		UItemizationLootCountCalculator Count; // 0x8(0x8)
		UItemizationLootWeightCalculator Weight; // 0x10(0x8)
		FScalableFloat MaxSelectCount; // 0x18(0x28)
	};


	// Struct ItemizationCoreRuntime.VkRarityEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FVkRarityEntry	
	{
	public:
		FText Name; // 0x0(0x10)
		FText Description; // 0x10(0x10)
		FLinearColor Color; // 0x20(0x10)
	};


	// Struct ItemizationCoreRuntime.ItemTagContainer
	// Size: 0x30 (0x30 - 0x0)
	struct FItemTagContainer	
	{
	public:
		unsigned char UnknownData01_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};

}
