#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CraftingUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CraftingUI.FortCraftingListItem
	// Inherited from UObject
	// Size: 0x110 (0x138 - 0x28)
	class UFortCraftingListItem : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x110]; // 0x28(0x110) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingListItem");
			return ret;
		}
	};


	// Class CraftingUI.AthenaCraftingQuickBarButton
	// Inherited from UAthenaQuickBarSlotButtonBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13C0 - 0x13A0)
	class UAthenaCraftingQuickBarButton : public UAthenaQuickBarSlotButtonBase	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x13A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.AthenaCraftingQuickBarButton");
			return ret;
		}

		void OnIsCraftableItemChanged(bool bIsCraftableItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCanCraftNowChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CraftingUI.AthenaEquippedItemCraftingIndicator
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x2D8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.AthenaEquippedItemCraftingIndicator");
			return ret;
		}

		void OnIsCraftableItemChanged(bool bIsCraftableItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCanCraftNowChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F34BC0(relative to base address)
		void HandleInventoryActiveChanged(bool bInventoryActive); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F349C8(relative to base address)
	};


	// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x2D8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator");
			return ret;
		}

		void OnIsCraftableItemChanged(bool bIsCraftableItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCanCraftNowChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInventoryItemSelected(UFortItem* SelectedItem); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F34AC0(relative to base address)
	};


	// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
	// Inherited from UAthenaQuickBarSlotExtensionWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x310 - 0x2E0)
	class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x2E0(0x20) UNKNOWN PROPERTY
		bool bCheckForIngredientChangesWhenCraftable; // 0x300(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x301(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator");
			return ret;
		}

		void OnIsCraftableItemChanged(bool bIsCraftableItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIngredientChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCanCraftNowChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F34C84(relative to base address)
		void HandleInventoryActiveChanged(bool bInventoryActive); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F34A44(relative to base address)
	};


	// Class CraftingUI.FortCookingScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x440 - 0x3F0)
	class UFortCookingScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle CloseInputAction; // 0x3F8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x408(0x8) UNKNOWN PROPERTY
		UCommonButtonLegacy* Button_EjectAll; // 0x410(0x8)
		UCommonButtonLegacy* Button_Cancel; // 0x418(0x8)
		UCommonTextBlock* Text_RecipeName; // 0x420(0x8)
		UCommonTextBlock* Text_RecipeDescription; // 0x428(0x8)
		UImage* Image_Recipe; // 0x430(0x8)
		UFortSlottedRadialMenu* RadialMenu_Recipes; // 0x438(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCookingScreen");
			return ret;
		}
	};


	// Class CraftingUI.FortCraftingFormulaIngredientsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UFortCraftingFormulaIngredientsWidget : public UCommonUserWidget	
	{
	public:
		UDynamicEntryBox* EntryBox_Ingredients; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingFormulaIngredientsWidget");
			return ret;
		}
	};


	// Class CraftingUI.FortCraftingIngredientWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UFortCraftingIngredientWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* Text_NumAvailable; // 0x2E0(0x8)
		UCommonTextBlock* Text_NumRequired; // 0x2E8(0x8)
		UAthenaItemIcon* ItemIcon; // 0x2F0(0x8)
		UCommonLazyImage* LazyImage_Icon; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingIngredientWidget");
			return ret;
		}

		void OnIngredientWidgetUpdated(int32_t NumAvailable, int32_t NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CraftingUI.FortCraftingItemInfoWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x450 - 0x3F0)
	class UFortCraftingItemInfoWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FText RarityTextFormat; // 0x3F8(0x10)
		UCommonTextBlock* Text_ItemName; // 0x408(0x8)
		UCommonTextBlock* Text_ItemRarity; // 0x410(0x8)
		UCommonTextBlock* Text_ItemCategory; // 0x418(0x8)
		UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x420(0x8)
		UCommonTextBlock* Text_ItemDescription; // 0x428(0x8)
		UAthenaInventoryItemStatsWidget* ItemStatsWidget; // 0x430(0x8)
		UFortCraftingFormulaIngredientsWidget* IngredientsWidget; // 0x438(0x8)
		UCommonButtonLegacy* Button_StartCrafting; // 0x440(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x448(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingItemInfoWidget");
			return ret;
		}

		void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CraftingUI.FortCraftingListEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortCraftingListEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UAthenaItemIcon* ItemIcon; // 0x13E8(0x8)
		bool bCanCraftItem; // 0x13F0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x13F1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingListEntry");
			return ret;
		}

		void OnCraftingListItemSet(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CraftingUI.FortCraftingTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x140 (0x530 - 0x3F0)
	class UFortCraftingTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FName TabNameID; // 0x3F8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3FC(0x4) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x400(0xF0)
		FGameplayTagContainer PrimaryIngredientTags; // 0x4F0(0x20)
		UFortCraftingItemInfoWidget* CraftingItemInfo; // 0x510(0x8)
		UCommonListView* ListView_Recipes; // 0x518(0x8)
		UAthenaQuickbarEditorBase* QuickbarEditor; // 0x520(0x8)
		UAthenaInventoryItemInfo* ItemInfoWidget; // 0x528(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingTab");
			return ret;
		}

		void OnFormulaListUpdated(int32_t NumFormulas); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInventoryItemSelected(UFortItem* Item); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F34B40(relative to base address)
	};


	// Class CraftingUI.FortPotContentsPopup
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class UFortPotContentsPopup : public UUserWidget	
	{
	public:
		int32_t MaxItemsToShow; // 0x2B0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x2B4(0xC) UNKNOWN PROPERTY
		UCommonTileView* TileView_PotContents; // 0x2C0(0x8)
		UCommonTextBlock* Text_MoreItems; // 0x2C8(0x8)
		UWidget* Overlay_Popup; // 0x2D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortPotContentsPopup");
			return ret;
		}

		void SetOwningCraftingObject(ACraftingObjectBGA* InCraftingObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F34D40(relative to base address)
	};


	// Class CraftingUI.FortPotContentsTile
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortPotContentsTile : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UCommonLazyImage* Image_Item; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortPotContentsTile");
			return ret;
		}
	};


	// Class CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UFortUIGameFeatureAction_SetCraftMenuWidget : public UFortUIGameFeatureAction	
	{
	public:
		UClass* CraftingObject; // 0x28(0x8)
		TWeakObjectPtr<UClass*> CraftingMenuWidget; // 0x30(0x20)
		unsigned char UnknownData00_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget");
			return ret;
		}
	};

}
