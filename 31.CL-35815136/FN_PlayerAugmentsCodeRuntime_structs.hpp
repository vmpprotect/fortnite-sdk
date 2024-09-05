#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PlayerAugmentsCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PlayerAugmentsCodeRuntime.FortAugmentPassiveUnlockResult
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAugmentPassiveUnlockResult	
	{
	public:
		UFortPlayerAugmentItemDefinition* UnlockedAugment; // 0x0(0x8)
		bool bAlreadyInInventory; // 0x8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct PlayerAugmentsCodeRuntime.PlayerAugmentLockStatus
	// Size: 0x18 (0x18 - 0x0)
	struct FPlayerAugmentLockStatus	
	{
	public:
		UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition; // 0x0(0x8)
		bool bIsLocked; // 0x8(0x1)
		bool bWasCollectedInThisMatch; // 0x9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		AFortPlayerStateAthena* SharedFromPlayer; // 0x10(0x8)
	};


	// Struct PlayerAugmentsCodeRuntime.PlayerAugmentChoiceDatum
	// Size: 0x28 (0x28 - 0x0)
	struct FPlayerAugmentChoiceDatum	
	{
	public:
		UFortPlayerAugmentItemDefinition* ItemDef; // 0x0(0x8)
		FGameplayTagContainer ChoiceMetaTags; // 0x8(0x20)
	};


	// Struct PlayerAugmentsCodeRuntime.FortAugmentRerollCost
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAugmentRerollCost	
	{
	public:
		UFortItemDefinition* ResourceCurrency; // 0x0(0x8)
		FScalableFloat Amount; // 0x8(0x28)
	};


	// Struct PlayerAugmentsCodeRuntime.SquadMemberAugmentData
	// Size: 0x18 (0x18 - 0x0)
	struct FSquadMemberAugmentData	
	{
	public:
		TWeakObjectPtr<UFortPlayerStateComponent_PlayerAugmentSystem*> AugmentSystem; // 0x0(0x8)
		TArray<UFortPlayerAugmentItemDefinition*> ActiveAugments; // 0x8(0x10)
	};


	// Struct PlayerAugmentsCodeRuntime.PlayerAugmentTrackedData
	// Size: 0x28 (0x28 - 0x0)
	struct FPlayerAugmentTrackedData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray<FPlayerAugmentAbilitySetHandlesStackEntry> AbilitySetHandlesStack; // 0x8(0x10)
		TArray<FPlayerAugmentGameplayEffectHandlesStackEntry> GEHandlesStack; // 0x18(0x10)
	};


	// Struct PlayerAugmentsCodeRuntime.PlayerAugmentGameplayEffectHandlesStackEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FPlayerAugmentGameplayEffectHandlesStackEntry	
	{
	public:
		TArray<FActiveGameplayEffectHandle> GEHandles; // 0x0(0x10)
	};


	// Struct PlayerAugmentsCodeRuntime.PlayerAugmentAbilitySetHandlesStackEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FPlayerAugmentAbilitySetHandlesStackEntry	
	{
	public:
		TArray<FFortAbilitySetHandle> AbilitySetHandles; // 0x0(0x10)
	};


	// Struct PlayerAugmentsCodeRuntime.CarryOverPlayerAugment
	// Size: 0xC (0xC - 0x0)
	struct FCarryOverPlayerAugment	
	{
	public:
		FPrimaryAssetId AugmentAssetId; // 0x0(0x8)
		FName SourcePlaylistName; // 0x8(0x4)
	};


	// Struct PlayerAugmentsCodeRuntime.ReplicatedSharedPlayerAugment
	// Size: 0xC (0xC - 0x0)
	struct FReplicatedSharedPlayerAugment	
	{
	public:
		int32_t PlayerAugmentIndex; // 0x0(0x4)
		TWeakObjectPtr<AFortPlayerStateAthena*> SharedFromPlayer; // 0x4(0x8)
	};


	// Struct PlayerAugmentsCodeRuntime.FortAugmentBaseWeightTableRow
	// Inherited from FFortDynamicRollBaseWeightTableRow -> FTableRowBase
	// Size: 0x0 (0x38 - 0x38)
	struct FFortAugmentBaseWeightTableRow : public FFortDynamicRollBaseWeightTableRow	
	{
	public:
	};


	// Struct PlayerAugmentsCodeRuntime.FortAugmentWeightModificationDataRow
	// Inherited from FFortDynamicRollWeightModifierTableRow -> FTableRowBase
	// Size: 0x0 (0x18 - 0x18)
	struct FFortAugmentWeightModificationDataRow : public FFortDynamicRollWeightModifierTableRow	
	{
	public:
	};


	// Struct PlayerAugmentsCodeRuntime.FortMcpCollectedPlayerAugmentProperties
	// Size: 0x1 (0x1 - 0x0)
	struct FFortMcpCollectedPlayerAugmentProperties	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
