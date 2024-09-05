#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ItemizationCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionLoadState
	enum EInventoryCollectionLoadState
	{
		EInventoryCollectionLoadState__Invalid = 0,
		EInventoryCollectionLoadState__WaitingToLoad = A,
		EInventoryCollectionLoadState__Loading = B,
		EInventoryCollectionLoadState__Loaded = C,
		EInventoryCollectionLoadState__WaitingToUnload = 14,
		EInventoryCollectionLoadState__Unloading = 15,
		EInventoryCollectionLoadState__Unloaded = 16,
		EInventoryCollectionLoadState__WaitingToClear = 1E,
		EInventoryCollectionLoadState__Clearing = 1F,
		EInventoryCollectionLoadState__Cleared = 20,
		EInventoryCollectionLoadState__Ready = FF,
	};


	// Enum /Script/ItemizationCoreRuntime.EEquipItemLimitHitBehaviour
	enum EEquipItemLimitHitBehaviour
	{
		EEquipItemLimitHitBehaviour__UnequipLeastRecentlyUsed = 0,
		EEquipItemLimitHitBehaviour__Block = 1,
	};


	// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveResult
	enum EVkInventoryMoveResult
	{
		EVkInventoryMoveResult__Success = 0,
		EVkInventoryMoveResult__Failed = 1,
		EVkInventoryMoveResult__InvalidRequest = 2,
		EVkInventoryMoveResult__NoChange = 3,
	};


	// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveBehaviour
	enum EVkInventoryMoveBehaviour
	{
		EVkInventoryMoveBehaviour__SwapSlotNumber = 0,
		EVkInventoryMoveBehaviour__EmplaceSlotNumber = 1,
	};


	// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionType
	enum EInventoryCollectionType
	{
		EInventoryCollectionType__Player = 0,
		EInventoryCollectionType__World = 1,
	};


	// Enum /Script/ItemizationCoreRuntime.EItemizationInventoryCreationType
	enum EItemizationInventoryCreationType
	{
		EItemizationInventoryCreationType__Runtime = 0,
		EItemizationInventoryCreationType__SetupData = 1,
		EItemizationInventoryCreationType__Invalid = FF,
	};


	// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionAccess
	enum EInventoryCollectionAccess
	{
		EInventoryCollectionAccess__None = 0,
		EInventoryCollectionAccess__Read = 1,
		EInventoryCollectionAccess__Write = 2,
		EInventoryCollectionAccess__All = 3,
	};


	// Enum /Script/ItemizationCoreRuntime.EItemState
	enum EItemState
	{
		EItemState__NotInInventory = 0,
		EItemState__InInventory = 1,
		EItemState__EquippedAndActive = 2,
		EItemState__NumStates = 3,
	};


	// Enum /Script/ItemizationCoreRuntime.EItemStateFilter
	enum EItemStateFilter
	{
		EItemStateFilter__Owned = 0,
		EItemStateFilter__Equipped = 1,
		EItemStateFilter__EquippedAndActive = 2,
	};


	// Enum /Script/ItemizationCoreRuntime.EItemDataQueryResult
	enum EItemDataQueryResult
	{
		EItemDataQueryResult__Found = 0,
		EItemDataQueryResult__NotFound = 1,
	};


	// Enum /Script/ItemizationCoreRuntime.EItemizationPersistenceRequestType
	enum EItemizationPersistenceRequestType
	{
		EItemizationPersistenceRequestType__Invalid = 0,
		EItemizationPersistenceRequestType__Checkout = 1,
		EItemizationPersistenceRequestType__CheckIn = 2,
		EItemizationPersistenceRequestType__Clear = 3,
		EItemizationPersistenceRequestType__Update = 4,
	};


	// Enum /Script/ItemizationCoreRuntime.EItemizationPersistenceResponseType
	enum EItemizationPersistenceResponseType
	{
		EItemizationPersistenceResponseType__Invalid = 0,
		EItemizationPersistenceResponseType__NoPersistenceManager = 1,
		EItemizationPersistenceResponseType__Failed = 2,
		EItemizationPersistenceResponseType__Success = FF,
	};

}
