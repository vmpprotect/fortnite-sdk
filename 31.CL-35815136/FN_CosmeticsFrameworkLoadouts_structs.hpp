#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticsFrameworkLoadouts
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CosmeticsFrameworkLoadouts.CosmeticLoadoutActiveArchetype
	// Size: 0x8 (0x8 - 0x0)
	struct FCosmeticLoadoutActiveArchetype	
	{
	public:
		FGameplayTag ArchetypeGroupTag; // 0x0(0x4)
		FGameplayTag ArchetypeTag; // 0x4(0x4)
	};


	// Struct CosmeticsFrameworkLoadouts.CosmeticLoadout
	// Size: 0x10 (0x10 - 0x0)
	struct FCosmeticLoadout	
	{
	public:
		TArray<FCosmeticLoadoutSlot> Slots; // 0x0(0x10)
	};


	// Struct CosmeticsFrameworkLoadouts.CosmeticLoadoutSlot
	// Size: 0x20 (0x20 - 0x0)
	struct FCosmeticLoadoutSlot	
	{
	public:
		UCosmeticLoadoutSlotTemplate* SlotTemplate; // 0x0(0x8)
		UObject* EquippedItemDefinitionObject; // 0x8(0x8)
		TArray<FCosmeticCustomizationInfo> CustomizationInfo; // 0x10(0x10)
	};


	// Struct CosmeticsFrameworkLoadouts.CosmeticCustomizationInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FCosmeticCustomizationInfo	
	{
	public:
		FGameplayTag ChannelTag; // 0x0(0x4)
		FGameplayTag VariantTag; // 0x4(0x4)
		FString AdditionalData; // 0x8(0x10)
	};


	// Struct CosmeticsFrameworkLoadouts.CosmeticBackendLoadout
	// Size: 0x40 (0x40 - 0x0)
	struct FCosmeticBackendLoadout	
	{
	public:
		TArray<FCosmeticBackendLoadoutSlot> Slots; // 0x0(0x10)
		FGameplayTagContainer UserTags; // 0x10(0x20)
		FString DisplayName; // 0x30(0x10)
	};


	// Struct CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutSlot
	// Size: 0x20 (0x20 - 0x0)
	struct FCosmeticBackendLoadoutSlot	
	{
	public:
		FPrimaryAssetId SlotTemplate; // 0x0(0x8)
		FPrimaryAssetId EquippedItem; // 0x8(0x8)
		TArray<FCosmeticCustomizationInfo> CustomizationInfo; // 0x10(0x10)
	};


	// Struct CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotRequirements
	// Size: 0x50 (0x50 - 0x0)
	struct FCosmeticLoadoutSlotRequirements	
	{
	public:
		FGameplayTagContainer RequiredTags; // 0x0(0x20)
		FGameplayTagContainer DeniedTags; // 0x20(0x20)
		TArray<FPrimaryAssetType> AllowedItemTypes; // 0x40(0x10)
	};

}
