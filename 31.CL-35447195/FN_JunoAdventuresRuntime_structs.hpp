#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoAdventuresRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoAdventuresRuntime.JunoContextualMessageConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FJunoContextualMessageConfigTableRow : public FTableRowBase	
	{
	public:
		FJunoContextualMessageConfig MessageConfig; // 0x8(0x10)
	};


	// Struct JunoAdventuresRuntime.JunoContextualMessageConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoContextualMessageConfig	
	{
	public:
		TArray ContextualMessages; // 0x0(0x10)
	};


	// Struct JunoAdventuresRuntime.JunoContextualMessageCandidate
	// Size: 0x88 (0x88 - 0x0)
	struct FJunoContextualMessageCandidate	
	{
	public:
		EContextRequirementMatchPolicy RequirementMatchPolicy; // 0x0(0x1)
		bool bUseJunoContextRequirements; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TArray ContextRequirements; // 0x8(0x10)
		TArray JunoContextRequirements; // 0x18(0x10)
		FScalableFloat Priority; // 0x28(0x28)
		FScalableFloat Weight; // 0x50(0x28)
		TArray Messages; // 0x78(0x10)
	};


	// Struct JunoAdventuresRuntime.JunoContexualMessageContainer
	// Size: 0x48 (0x48 - 0x0)
	struct FJunoContexualMessageContainer	
	{
	public:
		FText Message; // 0x0(0x10)
		FGameplayTag VoiceOverTag; // 0x10(0x4)
		FGameplayTag MoodReactionTag; // 0x14(0x4)
		TArray MetadataParameters; // 0x18(0x10)
		FGameplayTagContainer MetadataTags; // 0x28(0x20)
	};


	// Struct JunoAdventuresRuntime.JunoConversationContextRequirement
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoConversationContextRequirement	
	{
	public:
		FGameplayTag ParticipantID; // 0x0(0x4)
		FGameplayTag RequirementTag; // 0x4(0x4)
	};


	// Struct JunoAdventuresRuntime.JunoContextualMessageQueryResult
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoContextualMessageQueryResult	
	{
	public:
		FText Message; // 0x0(0x10)
		FGameplayTag MoodReactionTag; // 0x10(0x4)
		FGameplayTag VoiceOverTag; // 0x14(0x4)
		TArray MetadataParameters; // 0x18(0x10)
		FGameplayTagContainer MetadataTags; // 0x28(0x20)
		bool bAreConsecutiveMessagesPending; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.JunoSpecializedContextualMessageConfig
	// Size: 0xB8 (0xB8 - 0x0)
	struct FJunoSpecializedContextualMessageConfig	
	{
	public:
		FGameplayTagQuery NPCActorTagQuery; // 0x0(0x48)
		FScalableFloat Priority; // 0x48(0x28)
		FScalableFloat Weight; // 0x70(0x28)
		FJunoContextualMessageConfig MessageConfig; // 0x98(0x10)
		FDataTableRowHandle MessageConfigTableRow; // 0xA8(0x10)
	};


	// Struct JunoAdventuresRuntime.JunoConversationGetResourceTaskMemory
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoConversationGetResourceTaskMemory	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.JunoConversationGiftNPCTaskMemory
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoConversationGiftNPCTaskMemory	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.JunoConversationGrantDirectRewardTaskMemory
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoConversationGrantDirectRewardTaskMemory	
	{
	public:
		TArray SaveNames; // 0x0(0x10)
		TArray SaveNamesPerPlayer; // 0x10(0x10)
		TArray Items; // 0x20(0x10)
	};


	// Struct JunoAdventuresRuntime.JunoAIGrantDirectRewardRow
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FJunoAIGrantDirectRewardRow : public FTableRowBase	
	{
	public:
		int32_t MaximumPickAmount; // 0x8(0x4)
		FName MaximumPickSaveName; // 0xC(0x4)
		int32_t MaximumPerPlayerPickAmount; // 0x10(0x4)
		FName MaximumPerPlayerPickSaveName; // 0x14(0x4)
		FName LootTierGroup; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.JunoConversationRemoteCampRecruitmentTaskMemory
	// Size: 0xC (0xC - 0x0)
	struct FJunoConversationRemoteCampRecruitmentTaskMemory	
	{
	public:
		unsigned char UnknownData01_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.QuestPropSpawnInfo
	// Size: 0x88 (0x88 - 0x0)
	struct FQuestPropSpawnInfo	
	{
	public:
		TWeakObjectPtr ClassToSpawn; // 0x0(0x20)
		FGameplayTagContainer RequiredTags; // 0x20(0x20)
		FGameplayTagContainer ForbiddenTags; // 0x40(0x20)
		bool bUseMinMaxDistances; // 0x60(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FVector2D MinMaxDistanceFromOtherQuestPropActors; // 0x68(0x10)
		FVector2D MinMaxDistanceFromQuestGiver; // 0x78(0x10)
	};


	// Struct JunoAdventuresRuntime.QuestPropSpawnInfoContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FQuestPropSpawnInfoContainer	
	{
	public:
		TArray QuestPropSpawnInfos; // 0x0(0x10)
	};


	// Struct JunoAdventuresRuntime.QuestTokenMappingContainer
	// Size: 0x50 (0x50 - 0x0)
	struct FQuestTokenMappingContainer	
	{
	public:
		TMap QuestTokens; // 0x0(0x50)
	};


	// Struct JunoAdventuresRuntime.QuestTokenMappings
	// Size: 0x50 (0x50 - 0x0)
	struct FQuestTokenMappings	
	{
	public:
		TMap ObjectiveQuestTokensToGrant; // 0x0(0x50)
	};


	// Struct JunoAdventuresRuntime.JunoQuestData
	// Size: 0xA8 (0xA8 - 0x0)
	struct FJunoQuestData	
	{
	public:
		TMap ObjectiveQuestPropActorsToSpawn; // 0x0(0x50)
		FQuestTokenMappings QuestTokenMappings; // 0x50(0x50)
		int32_t AwesomePointsToGrant; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.JunoChangeInventoryEventEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoChangeInventoryEventEntry	
	{
	public:
		FStateDrivenTagQuery ItemTagQuery; // 0x0(0x18)
		FStateDrivenFloat ItemCount; // 0x18(0x18)
	};


	// Struct JunoAdventuresRuntime.JunoStateDrivenEvent_ChangeInventory
	// Inherited from FStateDrivenEvent_InteractionBase -> FStateDrivenEvent
	// Size: 0x28 (0x70 - 0x48)
	struct FJunoStateDrivenEvent_ChangeInventory : public FStateDrivenEvent_InteractionBase	
	{
	public:
		TArray ItemRequirements; // 0x48(0x10)
		bool bExactRequirements; // 0x58(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		UJunoChangeInventoryHelper ChangeInventoryHelper; // 0x60(0x8)
		TWeakObjectPtr SavedInteractingPawn; // 0x68(0x8)
	};


	// Struct JunoAdventuresRuntime.JunoStateDrivenEvent_InsertItem
	// Inherited from FStateDrivenEvent_InteractionBase -> FStateDrivenEvent
	// Size: 0x50 (0x98 - 0x48)
	struct FJunoStateDrivenEvent_InsertItem : public FStateDrivenEvent_InteractionBase	
	{
	public:
		EJunoInsertItemType InsertType; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FStateDrivenTagQuery EquippedItemTagQuery; // 0x50(0x18)
		FStateDrivenTagQuery OffHandItemTagQuery; // 0x68(0x18)
		FStateDrivenTagQuery AnyHandItemTagQuery; // 0x80(0x18)
	};


	// Struct JunoAdventuresRuntime.JunoQuestPoolDataAssetEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoQuestPoolDataAssetEntry	
	{
	public:
		UFortQuestItemDefinition QuestDefinition; // 0x0(0x8)
		bool bIsRepeatable; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.JunoQuestIDListWrapper
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoQuestIDListWrapper	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.JunoQuestRuntimeEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoQuestRuntimeEntry	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.ActiveQuestInfo
	// Size: 0xD0 (0xD0 - 0x0)
	struct FActiveQuestInfo	
	{
	public:
		AActor QuestGiver; // 0x0(0x8)
		unsigned char UnknownData01_7[0xC8]; // 0x8(0xC8) UNKNOWN PROPERTY
	};


	// Struct JunoAdventuresRuntime.MappedJunoActions
	// Size: 0x10 (0x10 - 0x0)
	struct FMappedJunoActions	
	{
	public:
		TArray MappedJunoActions; // 0x0(0x10)
	};

}
