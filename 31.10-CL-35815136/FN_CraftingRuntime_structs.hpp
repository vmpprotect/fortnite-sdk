#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CraftingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CraftingRuntime.CraftingObjectSuccessEvent
	// Size: 0x30 (0x30 - 0x0)
	struct FCraftingObjectSuccessEvent	
	{
	public:
		AActor* CraftingObject; // 0x0(0x8)
		FCraftingMultiKey Key; // 0x8(0x8)
		AFortPlayerController* Instigator; // 0x10(0x8)
		FName FormulaRowName; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray<FFortItemEntry> ConsumedIngredients; // 0x20(0x10)
	};


	// Struct CraftingRuntime.CraftingMultiKey
	// Size: 0x8 (0x8 - 0x0)
	struct FCraftingMultiKey	
	{
	public:
		int64_t Key; // 0x0(0x8)
	};


	// Struct CraftingRuntime.CraftingObjectStateChangedEvent
	// Size: 0x28 (0x28 - 0x0)
	struct FCraftingObjectStateChangedEvent	
	{
	public:
		AActor* CraftingObject; // 0x0(0x8)
		FCraftingMultiKey Key; // 0x8(0x8)
		AFortPlayerController* Instigator; // 0x10(0x8)
		ECraftingObjectState CraftingState; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float CraftingStateStartTime; // 0x1C(0x4)
		float CraftingStateDuration; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct CraftingRuntime.CraftingObjectRepStateData
	// Size: 0x18 (0x18 - 0x0)
	struct FCraftingObjectRepStateData	
	{
	public:
		TArray<FCraftingObjectEntryState> CraftingObjectEntryStates; // 0x0(0x10)
		float CraftingSpeedMultiplier; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct CraftingRuntime.CraftingObjectEntryState
	// Size: 0x28 (0x28 - 0x0)
	struct FCraftingObjectEntryState	
	{
	public:
		FCraftingMultiKey Key; // 0x0(0x8)
		ECraftingObjectState CraftingObjectState; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float StateChangeServerTime; // 0xC(0x4)
		float PausedCraftingTime; // 0x10(0x4)
		float OverriddenObjectStateLength; // 0x14(0x4)
		FName CraftingFormulaRow; // 0x18(0x4)
		int32_t NumToCraft; // 0x1C(0x4)
		TWeakObjectPtr<AFortPlayerController*> CraftingInstigator; // 0x20(0x8)
	};


	// Struct CraftingRuntime.CraftingObjectServerStateData
	// Size: 0x200 (0x200 - 0x0)
	struct FCraftingObjectServerStateData	
	{
	public:
		bool bNextResultsHandledExternally : 1; // 0x0:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AFortPickup* PendingPickupCraftingItem; // 0x8(0x8)
		FName PendingPickupCraftingFormula; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FFortItemEntry PendingPickupCraftingItemEntry; // 0x18(0x1A8)
		int32_t PendingPickupHeldCount; // 0x1C0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		TArray<FFortItemEntry> AllOfTheIngredientItems; // 0x1C8(0x10)
		TArray<int32_t> NonConsumedIngredientItemIndices; // 0x1D8(0x10)
		TArray<FItemAndCount> CraftingResults; // 0x1E8(0x10)
		FGameplayAbilitySpecHandle InstigatorWhileCraftingAbilitySpecHandle; // 0x1F8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY
	};


	// Struct CraftingRuntime.CraftingEvent_OpenCraftingMenu
	// Size: 0x8 (0x8 - 0x0)
	struct FCraftingEvent_OpenCraftingMenu	
	{
	public:
		AActor* CraftingObject; // 0x0(0x8)
	};


	// Struct CraftingRuntime.CraftingIngredientRequirement
	// Size: 0x28 (0x28 - 0x0)
	struct FCraftingIngredientRequirement	
	{
	public:
		FGameplayTagContainer IngredientTags; // 0x0(0x20)
		int32_t Count; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct CraftingRuntime.CraftingUpgradeRule
	// Size: 0x118 (0x118 - 0x0)
	struct FCraftingUpgradeRule	
	{
	public:
		FGameplayTagRequirements SourceItemTags; // 0x0(0x88)
		FGameplayTagRequirements TargetItemTags; // 0x88(0x88)
		char UpgradeFlags; // 0x110(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
	};


	// Struct CraftingRuntime.CraftingFormula
	// Inherited from FItemShopTableRowBase -> FTableRowBase
	// Size: 0xB0 (0xC0 - 0x10)
	struct FCraftingFormula : public FItemShopTableRowBase	
	{
	public:
		FText DisplayName; // 0x10(0x10)
		bool bEnabled : 1; // 0x20:0(0x1)
		bool bAlwaysKnownFormula : 1; // 0x20:1(0x1)
		bool bInstantlyConsumeIngredients : 1; // 0x20:2(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		int32_t SortingPriority; // 0x24(0x4)
		FGameplayTag SourceObjectTag; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer AttributeTags; // 0x30(0x20)
		TArray<FCraftingIngredientRequirement> RequiredIngredients; // 0x50(0x10)
		FName ResultLootTierKey; // 0x60(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> WhileCraftingAbility; // 0x68(0x20)
		TArray<FCraftingUpgradeRule> UpgradeRules; // 0x88(0x10)
		float OverrideCraftingTime; // 0x98(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> InstigatorWhileCraftingAbility; // 0xA0(0x20)
	};


	// Struct CraftingRuntime.CraftingResult
	// Size: 0x18 (0x18 - 0x0)
	struct FCraftingResult	
	{
	public:
		FName ResultLootTierKey; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FItemAndCount> Results; // 0x8(0x10)
	};


	// Struct CraftingRuntime.CraftingIngredientUIData
	// Inherited from FItemShopTableRowBase -> FTableRowBase
	// Size: 0x40 (0x50 - 0x10)
	struct FCraftingIngredientUIData : public FItemShopTableRowBase	
	{
	public:
		FGameplayTagContainer IngredientTags; // 0x10(0x20)
		TArray<TWeakObjectPtr> ItemDefs; // 0x30(0x10)
		TArray<TWeakObjectPtr> Icons; // 0x40(0x10)
	};


	// Struct CraftingRuntime.CraftingIngredientQueryState
	// Size: 0x30 (0x30 - 0x0)
	struct FCraftingIngredientQueryState	
	{
	public:
		FCraftingIngredientRequirement Requirement; // 0x0(0x28)
		int32_t Owned; // 0x28(0x4)
		int32_t Missing; // 0x2C(0x4)
	};


	// Struct CraftingRuntime.CraftingTagsChangedMessage
	// Size: 0x8 (0x8 - 0x0)
	struct FCraftingTagsChangedMessage	
	{
	public:
		AActor* CraftingObject; // 0x0(0x8)
	};

}
