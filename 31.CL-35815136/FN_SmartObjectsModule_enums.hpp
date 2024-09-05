#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SmartObjectsModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/SmartObjectsModule.ESmartObjectChangeReason
	enum ESmartObjectChangeReason
	{
		ESmartObjectChangeReason__None = 0,
		ESmartObjectChangeReason__OnEvent = 1,
		ESmartObjectChangeReason__OnTagAdded = 2,
		ESmartObjectChangeReason__OnTagRemoved = 3,
		ESmartObjectChangeReason__OnClaimed = 4,
		ESmartObjectChangeReason__OnOccupied = 5,
		ESmartObjectChangeReason__OnReleased = 6,
		ESmartObjectChangeReason__OnSlotEnabled = 7,
		ESmartObjectChangeReason__OnSlotDisabled = 8,
		ESmartObjectChangeReason__OnObjectEnabled = 9,
		ESmartObjectChangeReason__OnObjectDisabled = A,
		ESmartObjectChangeReason__OnComponentBound = B,
		ESmartObjectChangeReason__OnComponentUnbound = C,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectEntrancePriority
	enum ESmartObjectEntrancePriority
	{
		ESmartObjectEntrancePriority__Lowest = 0,
		ESmartObjectEntrancePriority__Lower = 1,
		ESmartObjectEntrancePriority__Low = 2,
		ESmartObjectEntrancePriority__BelowNormal = 3,
		ESmartObjectEntrancePriority__Normal = 4,
		ESmartObjectEntrancePriority__AboveNormal = 5,
		ESmartObjectEntrancePriority__High = 6,
		ESmartObjectEntrancePriority__Higher = 7,
		ESmartObjectEntrancePriority__Highest = 8,
		ESmartObjectEntrancePriority__MIN = 0,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectSlotShape
	enum ESmartObjectSlotShape
	{
		ESmartObjectSlotShape__Circle = 0,
		ESmartObjectSlotShape__Rectangle = 1,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectSlotState
	enum ESmartObjectSlotState
	{
		ESmartObjectSlotState__Invalid = 0,
		ESmartObjectSlotState__Free = 1,
		ESmartObjectSlotState__Claimed = 2,
		ESmartObjectSlotState__Occupied = 3,
		ESmartObjectSlotState__Disabled = 4,
	};


	// Enum /Script/SmartObjectsModule.ETrySpawnActorIfDehydrated
	enum ETrySpawnActorIfDehydrated
	{
		ETrySpawnActorIfDehydrated__No = 0,
		ETrySpawnActorIfDehydrated__Yes = 1,
	};


	// Enum /Script/SmartObjectsModule.FSmartObjectSlotEntrySelectionMethod
	enum FSmartObjectSlotEntrySelectionMethod
	{
		FSmartObjectSlotEntrySelectionMethod__First = 0,
		FSmartObjectSlotEntrySelectionMethod__NearestToSearchLocation = 1,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectCollectionRegistrationResult
	enum ESmartObjectCollectionRegistrationResult
	{
		ESmartObjectCollectionRegistrationResult__Failed_InvalidCollection = 0,
		ESmartObjectCollectionRegistrationResult__Failed_AlreadyRegistered = 1,
		ESmartObjectCollectionRegistrationResult__Failed_NotFromPersistentLevel = 2,
		ESmartObjectCollectionRegistrationResult__Succeeded = 3,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectTagMergingPolicy
	enum ESmartObjectTagMergingPolicy
	{
		ESmartObjectTagMergingPolicy__Combine = 0,
		ESmartObjectTagMergingPolicy__Override = 1,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectTagFilteringPolicy
	enum ESmartObjectTagFilteringPolicy
	{
		ESmartObjectTagFilteringPolicy__NoFilter = 0,
		ESmartObjectTagFilteringPolicy__Combine = 1,
		ESmartObjectTagFilteringPolicy__Override = 2,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectSlotNavigationLocationType
	enum ESmartObjectSlotNavigationLocationType
	{
		ESmartObjectSlotNavigationLocationType__Entry = 0,
		ESmartObjectSlotNavigationLocationType__Exit = 1,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectClaimPriority
	enum ESmartObjectClaimPriority
	{
		ESmartObjectClaimPriority__None = 0,
		ESmartObjectClaimPriority__Low = 1,
		ESmartObjectClaimPriority__BelowNormal = 2,
		ESmartObjectClaimPriority__Normal = 3,
		ESmartObjectClaimPriority__AboveNormal = 4,
		ESmartObjectClaimPriority__High = 5,
		ESmartObjectClaimPriority__MIN = 0,
	};


	// Enum /Script/SmartObjectsModule.ESmartObjectTraceType
	enum ESmartObjectTraceType
	{
		ESmartObjectTraceType__ByChannel = 0,
		ESmartObjectTraceType__ByProfile = 1,
		ESmartObjectTraceType__ByObjectTypes = 2,
	};

}
