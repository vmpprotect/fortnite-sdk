#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoUI.JunoBiomeUIDataRow
	// Inherited from FTableRowBase
	// Size: 0x48 (0x50 - 0x8)
	struct FJunoBiomeUIDataRow : public FTableRowBase	
	{
	public:
		EJunoBiome BiomeEnum; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FName BiomeName; // 0xC(0x4)
		FText DisplayText; // 0x10(0x10)
		TWeakObjectPtr Icon; // 0x20(0x20)
		FLinearColor BiomeColor; // 0x40(0x10)
	};


	// Struct JunoUI.JunoEvent_BuildingLimitStatusChanged
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoEvent_BuildingLimitStatusChanged	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoGuidedBuildingUIData
	// Size: 0xC (0xC - 0x0)
	struct FJunoGuidedBuildingUIData	
	{
	public:
		bool bIsGuidedBuildingSet; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t TotalStagesInSet; // 0x4(0x4)
		int32_t ExtraIngredientsInSet; // 0x8(0x4)
	};


	// Struct JunoUI.JunoMarkerMaterialInstances
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoMarkerMaterialInstances	
	{
	public:
		TArray Instances; // 0x0(0x10)
	};


	// Struct JunoUI.JunoCraftingEvent_CanCraftRecipeChange
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoCraftingEvent_CanCraftRecipeChange	
	{
	public:
		bool bCanCraft; // 0x0(0x1)
	};


	// Struct JunoUI.TrackedTouchData
	// Size: 0x18 (0x18 - 0x0)
	struct FTrackedTouchData	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoHudMenuTabRequest
	// Size: 0x110 (0x110 - 0x0)
	struct FJunoHudMenuTabRequest	
	{
	public:
		FName NameId; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass ButtonType; // 0x8(0x8)
		UClass ContentType; // 0x10(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x20(0xF0)
	};


	// Struct JunoUI.JunoIngredientInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoIngredientInfo	
	{
	public:
		unsigned char UnknownData01_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		FGameplayTagContainer IngredientTags; // 0x20(0x20)
		int32_t OwnedCount; // 0x40(0x4)
		int32_t RequiredCount; // 0x44(0x4)
		UItemDefinitionBase LoadedIngredient; // 0x48(0x8)
	};


	// Struct JunoUI.JunoInventoryGroupUIData
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoInventoryGroupUIData	
	{
	public:
		FGameplayTag GroupTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x8(0x10)
		TWeakObjectPtr OptionalIcon; // 0x18(0x20)
	};


	// Struct JunoUI.JunoInventoryGroupUIDataList
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoInventoryGroupUIDataList	
	{
	public:
		FGameplayTagContainer AllowedInventoryTags; // 0x0(0x20)
		TArray GroupDataList; // 0x20(0x10)
	};


	// Struct JunoUI.JunoItemSpawnerListEntries
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoItemSpawnerListEntries	
	{
	public:
		TArray ListEntries; // 0x0(0x10)
	};


	// Struct JunoUI.JunoItemSpawnerItemTagOrder
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoItemSpawnerItemTagOrder	
	{
	public:
		TArray ItemTags; // 0x0(0x10)
	};


	// Struct JunoUI.BlockingWidgetData
	// Size: 0x10 (0x10 - 0x0)
	struct FBlockingWidgetData	
	{
	public:
		FName WidgetName; // 0x0(0x4)
		bool bClampLeft; // 0x4(0x1)
		bool bClampRight; // 0x5(0x1)
		bool bClampTop; // 0x6(0x1)
		bool bClampBottom; // 0x7(0x1)
		UWidget WidgetReference; // 0x8(0x8)
	};


	// Struct JunoUI.JunoCustomMapElement
	// Size: 0x110 (0x110 - 0x0)
	struct FJunoCustomMapElement	
	{
	public:
		FSlateBrush SlateBrush; // 0x0(0xB0)
		FVector WorldLocation; // 0xB0(0x18)
		FGameplayTagQuery VisibilityQuery; // 0xC8(0x48)
	};


	// Struct JunoUI.JunoMapZoomBounds
	// Size: 0xC (0xC - 0x0)
	struct FJunoMapZoomBounds	
	{
	public:
		float MinZoom; // 0x0(0x4)
		float MaximumZoom; // 0x4(0x4)
		float DefaultZoom; // 0x8(0x4)
	};


	// Struct JunoUI.JunoModalSceneOperation
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoModalSceneOperation	
	{
	public:
		UDynamicUIScene ModalScene; // 0x0(0x8)
		UObject Payload; // 0x8(0x8)
	};


	// Struct JunoUI.JunoModalSelectionChoice
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoModalSelectionChoice	
	{
	public:
		FText SelectionTitle; // 0x0(0x10)
		FDataTableRowHandle Action; // 0x10(0x10)
		FMulticastInlineDelegate SelectionDelegate; // 0x20(0x10)
	};


	// Struct JunoUI.JunoBuffInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoBuffInfo	
	{
	public:
		UClass GEClass; // 0x0(0x8)
		float StatPowerupModify; // 0x8(0x4)
		float duration; // 0xC(0x4)
	};


	// Struct JunoUI.JunoQuickBuildSlotData
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoQuickBuildSlotData	
	{
	public:
		TWeakObjectPtr Icon; // 0x0(0x20)
		FText DisplayName; // 0x20(0x10)
	};


	// Struct JunoUI.JunoWidgetSceneAndIndex
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWidgetSceneAndIndex	
	{
	public:
		UDynamicUIScene WidgetScene; // 0x0(0x8)
		int32_t WidgetAllowedIndex; // 0x8(0x4)
		bool bRemoveOnDeath; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoTaggedWidgetScene
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoTaggedWidgetScene	
	{
	public:
		FJunoWidgetSceneAndIndex WidgetSceneAndIndex; // 0x0(0x10)
		int32_t Priority; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoTaggedWidget
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoTaggedWidget	
	{
	public:
		UClass WidgetClass; // 0x0(0x8)
		int32_t Priority; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoUI.CountUnviewedRecipesInCategoryArgs
	// Size: 0x20 (0x20 - 0x0)
	struct FCountUnviewedRecipesInCategoryArgs	
	{
	public:
		AFortPlayerController PlayerController; // 0x0(0x8)
		AActor CraftingObject; // 0x8(0x8)
		FGameplayTag CategoryTag; // 0x10(0x4)
		FGameplayTag SubCategoryTag; // 0x14(0x4)
		bool bOnlyKnownRecipes; // 0x18(0x1)
		bool bCountUnacquiredRecipes; // 0x19(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoNPCStateUIData
	// Size: 0x48 (0x48 - 0x0)
	struct FJunoNPCStateUIData	
	{
	public:
		int32_t Priority; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr PrimaryIcon; // 0x8(0x20)
		TWeakObjectPtr SecondaryIcon; // 0x28(0x20)
	};


	// Struct JunoUI.JunoVillageRewardEntryInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FJunoVillageRewardEntryInfo	
	{
	public:
		int32_t AwesomeLevel; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FAwesomePerkReward AwesomePerkReward; // 0x8(0x40)
		int32_t NewVillagerSlotCount; // 0x48(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		TArray KnowledgeBundles; // 0x50(0x10)
		int32_t ButtonIndex; // 0x60(0x4)
		int32_t IndexWithinGroup; // 0x64(0x4)
		int32_t ButtonsWithinGroup; // 0x68(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoEventPendingActionsToShow
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoEventPendingActionsToShow	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoEventAckPendingAction
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoEventAckPendingAction	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoFreeBuildCategoryUIDataEntry
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoFreeBuildCategoryUIDataEntry	
	{
	public:
		FGameplayTag CategoryTag; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CategoryIcon; // 0x8(0x20)
		FText CategoryTitle; // 0x28(0x10)
		bool bShowInFreeBuild; // 0x38(0x1)
		bool bShowInCodex; // 0x39(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoFreeBuildSubCategoryUIDataEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoFreeBuildSubCategoryUIDataEntry	
	{
	public:
		FGameplayTag SubCategoryTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText SubCategoryTitle; // 0x8(0x10)
		FText SubCategoryUnknownItemTitle; // 0x18(0x10)
	};


	// Struct JunoUI.GridListViewInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FGridListViewInfo	
	{
	public:
		UClass UserWidgetClass; // 0x0(0x8)
		FGridListSlotInfo GridListSlotInfo; // 0x8(0x24)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoUI.GridListSlotInfo
	// Size: 0x24 (0x24 - 0x0)
	struct FGridListSlotInfo	
	{
	public:
		FName SlotType; // 0x0(0x4)
		float Height; // 0x4(0x4)
		float Width; // 0x8(0x4)
		int32_t ItemsPerRow; // 0xC(0x4)
		FMargin ItemPadding; // 0x10(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x20(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoCraftingStationUIDataEntry
	// Size: 0xE0 (0xE0 - 0x0)
	struct FJunoCraftingStationUIDataEntry	
	{
	public:
		FGameplayTag SourceTag; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CraftingObjectRef; // 0x8(0x20)
		unsigned char UnknownData03_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FSlateBrush CraftStationIcon; // 0x30(0xB0)
	};


	// Struct JunoUI.GridListSlotInfoContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FGridListSlotInfoContainer	
	{
	public:
		TArray GridListInfo; // 0x0(0x10)
	};


	// Struct JunoUI.InactiveUserWidgets
	// Size: 0x10 (0x10 - 0x0)
	struct FInactiveUserWidgets	
	{
	public:
		TArray InactiveWidgets; // 0x0(0x10)
	};


	// Struct JunoUI.JunoWidgetPool
	// Size: 0xB0 (0xB0 - 0x0)
	struct FJunoWidgetPool	
	{
	public:
		TArray ActiveWidgets; // 0x0(0x10)
		TMap InactiveWidgetsMap; // 0x10(0x50)
		unsigned char UnknownData01_7[0x50]; // 0x60(0x50) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoModalDescription
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoModalDescription	
	{
	public:
		UDynamicUIScene ModalScene; // 0x0(0x8)
		FText Title; // 0x8(0x10)
		FText Description; // 0x18(0x10)
		FText ConfirmButtonText; // 0x28(0x10)
		FText CancelButtonText; // 0x38(0x10)
		FDataTableRowHandle ConfirmAction; // 0x48(0x10)
		FDataTableRowHandle CancelAction; // 0x58(0x10)
	};


	// Struct JunoUI.JunoCraftingFolderUIDataEntry
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoCraftingFolderUIDataEntry	
	{
	public:
		FGameplayTag FolderTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText FolderText; // 0x8(0x10)
		TWeakObjectPtr FolderIcon; // 0x18(0x20)
	};


	// Struct JunoUI.JunoMapMarkerEntryInitData
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoMapMarkerEntryInitData	
	{
	public:
		EJunoMapMarkerCustomizationEntryType WidgetEntryType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr EntryIcon; // 0x8(0x20)
		FLinearColor EntryColor; // 0x28(0x10)
	};


	// Struct JunoUI.JunoVillageUIData
	// Size: 0x218 (0x218 - 0x0)
	struct FJunoVillageUIData	
	{
	public:
		FText POIName; // 0x0(0x10)
		FJunoMarker Marker; // 0x10(0xC0)
		FGuid MarkerID; // 0xD0(0x10)
		EJunoBiome BiomeType; // 0xE0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		int32_t AwesomeLevel; // 0xE4(0x4)
		int32_t MaxAwesomeLevel; // 0xE8(0x4)
		int32_t AwesomePoints; // 0xEC(0x4)
		int32_t AwesomePointGoal; // 0xF0(0x4)
		int32_t AwesomePointFloor; // 0xF4(0x4)
		int32_t AwesomePointsNeededForNextLevel; // 0xF8(0x4)
		float AwesomeProgressToNextLevel; // 0xFC(0x4)
		float AwesomeEffectiveProgressToNextLevel; // 0x100(0x4)
		int32_t AwesomeLevelFromCurrentPoints; // 0x104(0x4)
		TArray AwesomeLevelRewardEntries; // 0x108(0x10)
		FJunoAwesomeUpgradeRequirements CurrentUpgradeRequirements; // 0x118(0x20)
		TArray UnlockedPlayerPerks; // 0x138(0x10)
		TArray ActiveNPCEntries; // 0x148(0x10)
		int32_t MaxNPCs; // 0x158(0x4)
		int32_t NPCSlots; // 0x15C(0x4)
		int32_t CreatureSlots; // 0x160(0x4)
		int32_t SharedSlots; // 0x164(0x4)
		int32_t MaxNPCsEver; // 0x168(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
		TArray VisitingNPCEntries; // 0x170(0x10)
		TArray ActiveCreatureEntries; // 0x180(0x10)
		TMap JobCounts; // 0x190(0x50)
		TArray KnowledgeBundles; // 0x1E0(0x10)
		UFortItemDefinition VillageCenterItemDefinition; // 0x1F0(0x8)
		bool bHasReachedGlobalNPCsCap; // 0x1F8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x1F9(0x3) UNKNOWN PROPERTY
		int32_t FreeSlotsForNPCs; // 0x1FC(0x4)
		int32_t GlobalNPCCount; // 0x200(0x4)
		int32_t GlobalNPCsCap; // 0x204(0x4)
		bool bHasReachedGlobalCreaturesCap; // 0x208(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x209(0x3) UNKNOWN PROPERTY
		int32_t FreeSlotsForCreatures; // 0x20C(0x4)
		int32_t GlobalCreatureCount; // 0x210(0x4)
		int32_t GlobalCreaturesCap; // 0x214(0x4)
	};


	// Struct JunoUI.JunoHUDShowVillageUpgradeCelebrationEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoHUDShowVillageUpgradeCelebrationEvent	
	{
	public:
		FText VillageName; // 0x0(0x10)
		EJunoBiome Biome; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t NewLevel; // 0x14(0x4)
	};


	// Struct JunoUI.JunoGameEventStreamData
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoGameEventStreamData	
	{
	public:
		unsigned char UnknownData01_2[0x58]; // 0x0(0x58) UNKNOWN PROPERTY
	};


	// Struct JunoUI.JunoNotificationData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoNotificationData	
	{
	public:
		FGameplayTag NotificationType; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray ItemDefinitions; // 0x8(0x10)
		FGameplayTagContainer AdditionalTags; // 0x18(0x20)
		FString PlayerName; // 0x38(0x10)
		UObject InitObject; // 0x48(0x8)
	};


	// Struct JunoUI.JunoNotificationEvent
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoNotificationEvent	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr NotificationSoftClass; // 0x8(0x20)
		UObject InitObject; // 0x28(0x8)
	};


	// Struct JunoUI.JunoWidgetPoolInitData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWidgetPoolInitData	
	{
	public:
		UClass WidgetClass; // 0x0(0x8)
		int32_t Count; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoUI.PendingActionMsgText
	// Size: 0x20 (0x20 - 0x0)
	struct FPendingActionMsgText	
	{
	public:
		FText Title; // 0x0(0x10)
		FText Description; // 0x10(0x10)
	};


	// Struct JunoUI.JunoPendingActionSetupData
	// Size: 0x88 (0x88 - 0x0)
	struct FJunoPendingActionSetupData	
	{
	public:
		UDynamicUIScene ConfirmationModalScene; // 0x0(0x8)
		TMap MessageTextMap; // 0x8(0x50)
		FText ConfirmButtonText; // 0x58(0x10)
		FDataTableRowHandle ConfirmAction; // 0x68(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY
	};

}
