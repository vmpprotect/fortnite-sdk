#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/JunoUI.EBlockedDirection
	enum EBlockedDirection
	{
		EBlockedDirection__Left = 0,
		EBlockedDirection__Right = 1,
		EBlockedDirection__Top = 2,
		EBlockedDirection__Bottom = 3,
	};


	// Enum /Script/JunoUI.EJunoBangVisibility
	enum EJunoBangVisibility
	{
		EJunoBangVisibility__Hidden = 0,
		EJunoBangVisibility__UnviewedBang = 1,
		EJunoBangVisibility__UnacquiredBang = 2,
	};


	// Enum /Script/JunoUI.EStationInventoryState
	enum EStationInventoryState
	{
		EStationInventoryState__CanCraft = 0,
		EStationInventoryState__InputIsEmpty = 1,
		EStationInventoryState__InputAndProcessingEmpty = 2,
		EStationInventoryState__Processing = 3,
		EStationInventoryState__OutputFull = 4,
	};


	// Enum /Script/JunoUI.EJunoEnchantmentScreenState
	enum EJunoEnchantmentScreenState
	{
		EJunoEnchantmentScreenState__WeaponSelection = 0,
		EJunoEnchantmentScreenState__EnchantmentSelection = 1,
		EJunoEnchantmentScreenState__Count = 2,
	};


	// Enum /Script/JunoUI.EJunoEnchantButtonState
	enum EJunoEnchantButtonState
	{
		EJunoEnchantButtonState__CanEnchant = 0,
		EJunoEnchantButtonState__NotEnoughResources = 1,
		EJunoEnchantButtonState__NoAvailableEnchantments = 2,
		EJunoEnchantButtonState__SlotsFull = 3,
		EJunoEnchantButtonState__CanCancelEnchant = 4,
	};


	// Enum /Script/JunoUI.EJunoEnchantmentState
	enum EJunoEnchantmentState
	{
		EJunoEnchantmentState__Empty = 0,
		EJunoEnchantmentState__Occupied = 1,
		EJunoEnchantmentState__Preview = 2,
		EJunoEnchantmentState__Updated = 3,
	};


	// Enum /Script/JunoUI.EJunoHudMenuScreen
	enum EJunoHudMenuScreen
	{
		EJunoHudMenuScreen__InventoryScreen = 0,
		EJunoHudMenuScreen__CraftingScreen = 1,
		EJunoHudMenuScreen__CollectionScreen = 2,
		EJunoHudMenuScreen__BuildingScreen = 3,
		EJunoHudMenuScreen__Max_None = 4,
	};


	// Enum /Script/JunoUI.EJunoSwapItemType
	enum EJunoSwapItemType
	{
		EJunoSwapItemType__None = 0,
		EJunoSwapItemType__Source = 1,
		EJunoSwapItemType__SelectedDestination = 2,
		EJunoSwapItemType__PotentialDestination = 3,
		EJunoSwapItemType__GearDestinationInvalid = 4,
	};


	// Enum /Script/JunoUI.EJunoBedAssignmentActionType
	enum EJunoBedAssignmentActionType
	{
		EJunoBedAssignmentActionType__None = 0,
		EJunoBedAssignmentActionType__AssignEmpty = 1,
		EJunoBedAssignmentActionType__ReassignExisting = 2,
		EJunoBedAssignmentActionType__UnassignExisting = 3,
	};


	// Enum /Script/JunoUI.EJunoCraftButtonState
	enum EJunoCraftButtonState
	{
		EJunoCraftButtonState__CanCraft = 0,
		EJunoCraftButtonState__CannotCraft = 1,
		EJunoCraftButtonState__StopCraft = 2,
	};


	// Enum /Script/JunoUI.ESelectRecipeButtonState
	enum ESelectRecipeButtonState
	{
		ESelectRecipeButtonState__SelectRecipeHeroState = 0,
		ESelectRecipeButtonState__SelectRecipeCommonState = 1,
		ESelectRecipeButtonState__DepositState = 2,
	};


	// Enum /Script/JunoUI.ECraftingStationsInventoryState
	enum ECraftingStationsInventoryState
	{
		ECraftingStationsInventoryState__CanCraft = 0,
		ECraftingStationsInventoryState__MissingIngredients = 1,
		ECraftingStationsInventoryState__OutputFull = 2,
	};


	// Enum /Script/JunoUI.EJunoMapMarkerCustomizationEntryType
	enum EJunoMapMarkerCustomizationEntryType
	{
		EJunoMapMarkerCustomizationEntryType__Icon = 0,
		EJunoMapMarkerCustomizationEntryType__Color = 1,
	};


	// Enum /Script/JunoUI.EJunoPickupStreamAnim
	enum EJunoPickupStreamAnim
	{
		EJunoPickupStreamAnim__None = 0,
		EJunoPickupStreamAnim__Intro = 1,
		EJunoPickupStreamAnim__Update = 2,
	};


	// Enum /Script/JunoUI.EJunoHealthBarType
	enum EJunoHealthBarType
	{
		EJunoHealthBarType__Health = 0,
		EJunoHealthBarType__Overshield = 1,
	};


	// Enum /Script/JunoUI.EPendingActionType
	enum EPendingActionType
	{
		EPendingActionType__None = 0,
		EPendingActionType__WorldNameModeration = 1,
		EPendingActionType__IngameNameModeration = 2,
		EPendingActionType__DeidentificationOccurred = 3,
	};

}
