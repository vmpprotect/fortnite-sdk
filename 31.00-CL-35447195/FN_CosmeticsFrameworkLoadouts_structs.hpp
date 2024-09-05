#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CosmeticsFrameworkLoadouts
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TArray Slots; // 0x0(0x10)
	};


	// Struct CosmeticsFrameworkLoadouts.CosmeticLoadoutSlot
	// Size: 0x20 (0x20 - 0x0)
	struct FCosmeticLoadoutSlot	
	{
	public:
		UCosmeticLoadoutSlotTemplate SlotTemplate; // 0x0(0x8)
		UObject EquippedItemDefinitionObject; // 0x8(0x8)
		TArray CustomizationInfo; // 0x10(0x10)
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
		TArray Slots; // 0x0(0x10)
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
		TArray CustomizationInfo; // 0x10(0x10)
	};


	// Struct CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotRequirements
	// Size: 0x50 (0x50 - 0x0)
	struct FCosmeticLoadoutSlotRequirements	
	{
	public:
		FGameplayTagContainer RequiredTags; // 0x0(0x20)
		FGameplayTagContainer DeniedTags; // 0x20(0x20)
		TArray AllowedItemTypes; // 0x40(0x10)
	};

}
