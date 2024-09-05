#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CraftingUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CraftingUI.FortCraftingListItem
	// Inherited from UObject
	// Size: 0x110 (0x138 - 0x28)
	class UFortCraftingListItem : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x110]; // 0x28(0x110) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x20]; // 0x13A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.AthenaCraftingQuickBarButton");
			return ret;
		}

		void OnIsCraftableItemChanged(bool bIsCraftableItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFFA78
		void OnCanCraftNowChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFF998
	};


	// Class CraftingUI.AthenaEquippedItemCraftingIndicator
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x2E0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.AthenaEquippedItemCraftingIndicator");
			return ret;
		}

		void OnIsCraftableItemChanged(bool bIsCraftableItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFFDF8
		void OnCanCraftNowChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFFD18
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414BFFC38
		void HandleInventoryActiveChanged(bool bInventoryActive); // Flags: Final|Native|Private 0x7FF414BFFB58
	};


	// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x2E0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator");
			return ret;
		}

		void OnIsCraftableItemChanged(bool bIsCraftableItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414C00098
		void OnCanCraftNowChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFFFB8
		void HandleInventoryItemSelected(UFortItem SelectedItem); // Flags: Final|Native|Private 0x7FF414BFFED8
	};


	// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
	// Inherited from UAthenaQuickBarSlotExtensionWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x318 - 0x2E8)
	class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x2E8(0x20) UNKNOWN PROPERTY
		bool bCheckForIngredientChangesWhenCraftable; // 0x308(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x309(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator");
			return ret;
		}

		void OnIsCraftableItemChanged(bool bIsCraftableItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414C004F8
		void OnIngredientChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent 0x7FF414C00418
		void OnCanCraftNowChanged(bool bCanCraftNow); // Flags: Event|Protected|BlueprintEvent 0x7FF414C00338
		void HandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414C00258
		void HandleInventoryActiveChanged(bool bInventoryActive); // Flags: Final|Native|Private 0x7FF414C00178
	};


	// Class CraftingUI.FortCookingScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x448 - 0x3F8)
	class UFortCookingScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle CloseInputAction; // 0x400(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x410(0x8) UNKNOWN PROPERTY
		UCommonButtonLegacy Button_EjectAll; // 0x418(0x8)
		UCommonButtonLegacy Button_Cancel; // 0x420(0x8)
		UCommonTextBlock Text_RecipeName; // 0x428(0x8)
		UCommonTextBlock Text_RecipeDescription; // 0x430(0x8)
		UImage Image_Recipe; // 0x438(0x8)
		UFortSlottedRadialMenu RadialMenu_Recipes; // 0x440(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCookingScreen");
			return ret;
		}
	};


	// Class CraftingUI.FortCraftingFormulaIngredientsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UFortCraftingFormulaIngredientsWidget : public UCommonUserWidget	
	{
	public:
		UDynamicEntryBox EntryBox_Ingredients; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingFormulaIngredientsWidget");
			return ret;
		}
	};


	// Class CraftingUI.FortCraftingIngredientWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UFortCraftingIngredientWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_NumAvailable; // 0x2E8(0x8)
		UCommonTextBlock Text_NumRequired; // 0x2F0(0x8)
		UAthenaItemIcon ItemIcon; // 0x2F8(0x8)
		UCommonLazyImage LazyImage_Icon; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingIngredientWidget");
			return ret;
		}

		void OnIngredientWidgetUpdated(int32_t NumAvailable, int32_t NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient); // Flags: Event|Protected|BlueprintEvent 0x7FF414C005D8
	};


	// Class CraftingUI.FortCraftingItemInfoWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x458 - 0x3F8)
	class UFortCraftingItemInfoWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FText RarityTextFormat; // 0x400(0x10)
		UCommonTextBlock Text_ItemName; // 0x410(0x8)
		UCommonTextBlock Text_ItemRarity; // 0x418(0x8)
		UCommonTextBlock Text_ItemCategory; // 0x420(0x8)
		UFortItemCategoryIndicator ItemCategoryIndicator; // 0x428(0x8)
		UCommonTextBlock Text_ItemDescription; // 0x430(0x8)
		UAthenaInventoryItemStatsWidget ItemStatsWidget; // 0x438(0x8)
		UFortCraftingFormulaIngredientsWidget IngredientsWidget; // 0x440(0x8)
		UCommonButtonLegacy Button_StartCrafting; // 0x448(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x450(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingItemInfoWidget");
			return ret;
		}

		void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData); // Flags: Event|Protected|BlueprintEvent 0x7FF414C006B8
	};


	// Class CraftingUI.FortCraftingListEntry
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortCraftingListEntry : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UAthenaItemIcon ItemIcon; // 0x13E8(0x8)
		bool bCanCraftItem; // 0x13F0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x13F1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingListEntry");
			return ret;
		}

		void OnCraftingListItemSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF414C00798
	};


	// Class CraftingUI.FortCraftingTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x148 (0x540 - 0x3F8)
	class UFortCraftingTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FName TabNameID; // 0x400(0x4)
		unsigned char UnknownData03_6[0xC]; // 0x404(0xC) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x410(0xF0)
		FGameplayTagContainer PrimaryIngredientTags; // 0x500(0x20)
		UFortCraftingItemInfoWidget CraftingItemInfo; // 0x520(0x8)
		UCommonListView ListView_Recipes; // 0x528(0x8)
		UAthenaQuickbarEditorBase QuickbarEditor; // 0x530(0x8)
		UAthenaInventoryItemInfo ItemInfoWidget; // 0x538(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortCraftingTab");
			return ret;
		}

		void OnFormulaListUpdated(int32_t NumFormulas); // Flags: Event|Protected|BlueprintEvent 0x7FF414C00958
		void HandleInventoryItemSelected(UFortItem Item); // Flags: Final|Native|Private 0x7FF414C00878
	};


	// Class CraftingUI.FortPotContentsPopup
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2E0 - 0x2B8)
	class UFortPotContentsPopup : public UUserWidget	
	{
	public:
		int32_t MaxItemsToShow; // 0x2B8(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x2BC(0xC) UNKNOWN PROPERTY
		UCommonTileView TileView_PotContents; // 0x2C8(0x8)
		UCommonTextBlock Text_MoreItems; // 0x2D0(0x8)
		UWidget Overlay_Popup; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortPotContentsPopup");
			return ret;
		}

		void SetOwningCraftingObject(ACraftingObjectBGA InCraftingObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C00A38
	};


	// Class CraftingUI.FortPotContentsTile
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortPotContentsTile : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UCommonLazyImage Image_Item; // 0x13E8(0x8)

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
		UClass CraftingObject; // 0x28(0x8)
		TWeakObjectPtr CraftingMenuWidget; // 0x30(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget");
			return ret;
		}
	};

}
