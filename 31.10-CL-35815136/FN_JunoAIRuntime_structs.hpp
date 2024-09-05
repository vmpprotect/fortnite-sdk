#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoAIRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct JunoAIRuntime.JunoNPCValidItemRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FJunoNPCValidItemRow : public FTableRowBase	
	{
	public:
		UFortItemDefinition* ValidItem; // 0x8(0x8)
		FString ValidItemPersistentName; // 0x10(0x10)
		bool bCanBeEquippedAsMainWeapon; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.ValidItemSlotConfiguration
	// Size: 0x10 (0x10 - 0x0)
	struct FValidItemSlotConfiguration	
	{
	public:
		UDataTable* ValidItemsTable; // 0x0(0x8)
		FGameplayTag TagToApplyWhenMissingItem; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoNPCValidItems
	// Size: 0x70 (0x70 - 0x0)
	struct FJunoNPCValidItems	
	{
	public:
		unsigned char UnknownData00_7[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
		TArray<UFortItemDefinition*> CachedListOfUnequippableWeapons; // 0x50(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAIFTUERuntimeConfiguration
	// Size: 0x88 (0x88 - 0x0)
	struct FJunoAIFTUERuntimeConfiguration	
	{
	public:
		FScalableFloat MaxDistanceFromCampToTeleport; // 0x0(0x28)
		FScalableFloat MinDistanceFromPlayersToTeleport; // 0x28(0x28)
		FScalableFloat TeleportToCampDelay; // 0x50(0x28)
		UEnvQuery* TeleportToPlayerQueryTemplate; // 0x78(0x8)
		TEnumAsByte<EEnvQueryRunMode> TeleportToPlayerRunMode; // 0x80(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAIUnstuckFailsafeConfiguration
	// Size: 0xE8 (0xE8 - 0x0)
	struct FJunoAIUnstuckFailsafeConfiguration	
	{
	public:
		FScalableFloat MinimumTimeUnderLandscape; // 0x0(0x28)
		FScalableFloat MinZThresholdForLandscapeTeleport; // 0x28(0x28)
		FScalableFloat TeleportToLandscapeDelay; // 0x50(0x28)
		UEnvQuery* TeleportToLandscapeQueryTemplate; // 0x78(0x8)
		TEnumAsByte<EEnvQueryRunMode> TeleportToLandscapeRunMode; // 0x80(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		FScalableFloat MinimumTimeFalling; // 0x88(0x28)
		FScalableFloat TeleportToNavmeshDelay; // 0xB0(0x28)
		UEnvQuery* TeleportToNavmeshQueryTemplate; // 0xD8(0x8)
		TEnumAsByte<EEnvQueryRunMode> TeleportToNavmeshRunMode; // 0xE0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAIFriendshipVerbTableRow
	// Inherited from FTableRowBase
	// Size: 0x78 (0x80 - 0x8)
	struct FJunoAIFriendshipVerbTableRow : public FTableRowBase	
	{
	public:
		float FriendshipChange; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FInstancedStruct> VerbFilters; // 0x10(0x10)
		EJunoAIFriendshipVerbPawnSubjectRequirement VerbSubjectsRequirement; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery ConditionalQuery; // 0x28(0x48)
		int32_t PawnCategories; // 0x70(0x4)
		float Cooldown; // 0x74(0x4)
		FMoodReactionDataExposedRequestConfig MoodReactionConfig; // 0x78(0x8)
	};


	// Struct JunoAIRuntime.AIFriendshipContinuousChangeConfiguration
	// Size: 0xC (0xC - 0x0)
	struct FAIFriendshipContinuousChangeConfiguration	
	{
	public:
		FGameplayTag Name; // 0x0(0x4)
		float ChangePerTick; // 0x4(0x4)
		uint32_t TickFrequencyInSeconds; // 0x8(0x4)
	};


	// Struct JunoAIRuntime.AIFriendshipContinuousChangeRuntimeData
	// Size: 0x10 (0x10 - 0x0)
	struct FAIFriendshipContinuousChangeRuntimeData	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.RandomizedMoodReactionConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FRandomizedMoodReactionConfig	
	{
	public:
		FScalableFloat Weight; // 0x0(0x28)
		FGameplayTag MoodReactionTag; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAICampManagementLWMConfiguration
	// Size: 0x3A0 (0x3A0 - 0x0)
	struct FJunoAICampManagementLWMConfiguration	
	{
	public:
		FFortAthenaLivingWorldEvent EventTemplate; // 0x0(0x1B0)
		FFortAthenaLivingWorldEventDataActorSpawnDescription SpawnDescriptionTemplate; // 0x1B0(0x130)
		FPointProviderFilterEntry FilterEntry; // 0x2E0(0x88)
		TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> Encounter; // 0x368(0x20)
		TArray<UClass*> PointProviderClasses; // 0x388(0x10)
		bool bRegisterReservoir; // 0x398(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x399(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAICampManagementVisitorsRarityConfiguration
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoAICampManagementVisitorsRarityConfiguration	
	{
	public:
		FGameplayTag Rarity; // 0x0(0x4)
		int32_t PickPercentage; // 0x4(0x4)
	};


	// Struct JunoAIRuntime.JunoAICampManagementVisitorsPickingConfiguration
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FJunoAICampManagementVisitorsPickingConfiguration : public FTableRowBase	
	{
	public:
		TArray<FJunoAICampManagementVisitorsRarityConfiguration> RaritiesConfiguration; // 0x8(0x10)
		int32_t MaxRecruitableNPCs; // 0x18(0x4)
		int32_t MaxRecruitableCreatures; // 0x1C(0x4)
		int32_t MaxRecruitableAIsSharedPool; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAICampManagementNPCRewardRecipe
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoAICampManagementNPCRewardRecipe	
	{
	public:
		TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*> KnowledgeItemDefinition; // 0x0(0x20)
		EJunoKnowledgeState NewState; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAICampManagementNPCReward
	// Inherited from FTableRowBase
	// Size: 0x48 (0x50 - 0x8)
	struct FJunoAICampManagementNPCReward : public FTableRowBase	
	{
	public:
		bool bAlwaysPick; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FGameplayTag AlwaysPickBlockTag; // 0xC(0x4)
		float PickWeight; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition SelectionPreconditions; // 0x18(0x18)
		ENPCRewardType RewardType; // 0x30(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		int32_t MaximumPickAmount; // 0x34(0x4)
		FName MaximumPickSaveName; // 0x38(0x4)
		FName LootTierGroup; // 0x3C(0x4)
		TArray<FJunoAICampManagementNPCRewardRecipe> Recipes; // 0x40(0x10)
	};


	// Struct JunoAIRuntime.JunoAICampManagementVisitorConfiguration
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FJunoAICampManagementVisitorConfiguration : public FTableRowBase	
	{
	public:
		FGameplayTag UniqueAIIdentifier; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FWorldConditionQueryDefinition SelectionPreconditions; // 0x10(0x18)
	};


	// Struct JunoAIRuntime.JunoAICampManagementVisitorConfigurationRuntime
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoAICampManagementVisitorConfigurationRuntime	
	{
	public:
		unsigned char UnknownData00_7[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
		FWorldConditionQueryState SelectionPreconditionsQueryState; // 0x30(0x30)
	};


	// Struct JunoAIRuntime.JunoAICampManagementVisitorsConfiguration
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoAICampManagementVisitorsConfiguration	
	{
	public:
		UDataTable* PossibleVisitorsDataTable; // 0x0(0x8)
		FScalableFloat InitialInGameHoursDelay; // 0x8(0x28)
	};


	// Struct JunoAIRuntime.JunoAICampManagementFixedNPCsPickingConfiguration
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FJunoAICampManagementFixedNPCsPickingConfiguration : public FTableRowBase	
	{
	public:
		FGameplayTag DescriptorTag; // 0x8(0x4)
		FGameplayTag PreselectedJob; // 0xC(0x4)
	};


	// Struct JunoAIRuntime.JunoAICampManagementVisitorsConfigurationDigested
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoAICampManagementVisitorsConfigurationDigested	
	{
	public:
		TArray<FJunoAICampManagementVisitorConfigurationRuntime> PossibleVisitors; // 0x0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.SpawnedCampCreatureRuntimeData
	// Size: 0x18 (0x18 - 0x0)
	struct FSpawnedCampCreatureRuntimeData	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortAIPawn*> CreaturePawn; // 0x10(0x8)
	};


	// Struct JunoAIRuntime.JunoCampAICachedRecruitmentData
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoCampAICachedRecruitmentData	
	{
	public:
		int32_t RecruitedNPCsFixedPool; // 0x0(0x4)
		int32_t RecruitedNPCsSharedPool; // 0x4(0x4)
		int32_t RecruitedCreaturesFixedPool; // 0x8(0x4)
		int32_t RecruitedCreaturesSharedPool; // 0xC(0x4)
		int32_t FreeSlotsForNPCs; // 0x10(0x4)
		int32_t GlobalNPCCount; // 0x14(0x4)
		int32_t GlobalRecruitableNPCsCap; // 0x18(0x4)
		bool bHasReachedGlobalNPCsCap; // 0x1C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		int32_t FreeSlotsForCreatures; // 0x20(0x4)
		int32_t GlobalCreatureCount; // 0x24(0x4)
		int32_t GlobalRecruitableCreaturesCap; // 0x28(0x4)
		bool bHasReachedGlobalCreaturesCap; // 0x2C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.FedItemHistoryEntry
	// Size: 0xC (0xC - 0x0)
	struct FFedItemHistoryEntry	
	{
	public:
		unsigned char UnknownData00_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoCreatureRecruitmentRequestData
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoCreatureRecruitmentRequestData	
	{
	public:
		AFortPlayerController* InstigatorController; // 0x0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoCreatureProfanityCheckMetadata
	// Inherited from FJunoProfanityCheckMetadata
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoCreatureProfanityCheckMetadata : public FJunoProfanityCheckMetadata	
	{
	public:
		AFortPlayerController* TriggeringPlayer; // 0x0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoIsVillagerProviderExpiredStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*> VillagerProvider; // 0x0(0x8)
		bool bIsExpired; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		AActor* UserActor; // 0x10(0x8)
	};


	// Struct JunoAIRuntime.JunoIsVillagerProviderExpiredStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoIsVillagerProviderExpiredStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoAIRuntime.JunoNPCVerbReactionTableRow
	// Inherited from FFortNPCVerbReactionTableRow -> FTableRowBase
	// Size: 0x8 (0x80 - 0x78)
	struct FJunoNPCVerbReactionTableRow : public FFortNPCVerbReactionTableRow	
	{
	public:
		FGameplayTag MoodReactionTag; // 0x78(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTaskInstanceData
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoResetVillagerProviderTimerStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr<AFortAthenaLivingWorldStaticPointProvider*> VillagerProvider; // 0x0(0x8)
		TWeakObjectPtr<AActor*> Villager; // 0x8(0x8)
		FScalableFloat ResetDuration; // 0x10(0x28)
		AActor* UserActor; // 0x38(0x8)
	};


	// Struct JunoAIRuntime.JunoResetVillagerProviderTimerStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoResetVillagerProviderTimerStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoAIRuntime.JunoWorldConditionAILocalCampChecks
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x70 (0x80 - 0x10)
	struct FJunoWorldConditionAILocalCampChecks : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		int32_t RequiredNPCsSlots; // 0x18(0x4)
		EJunoWorldConditionNPCSlotsLimit PotentialSlotCap; // 0x1C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float MinimumRemainingNPCSoftRemovalTimeInJunoHours; // 0x20(0x4)
		FGameplayTag HasGatheringActorUsableByRole; // 0x24(0x4)
		FWorldConditionContextDataRef HasGatheringActorUsableByActorRef; // 0x28(0x8)
		bool bRequireGatheringActorToBeActive; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery RequireCreatureMatchingDescriptorTag; // 0x38(0x48)
	};


	// Struct JunoAIRuntime.JunoWorldConditionHitGlobalNPCsCap
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FJunoWorldConditionHitGlobalNPCsCap : public FWorldConditionCommonBase	
	{
	public:
		int32_t RequiredSpaceInGlobalCap; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoWorldConditionNearestCampChecks
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x80 (0x90 - 0x10)
	struct FJunoWorldConditionNearestCampChecks : public FWorldConditionCommonBase	
	{
	public:
		int32_t RequiredCamps; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery RequiresCampTagQuery; // 0x18(0x48)
		FScalableFloat MaxDistanceFromCamp; // 0x60(0x28)
		FWorldConditionContextDataRef ActorRef; // 0x88(0x8)
	};


	// Struct JunoAIRuntime.JunoWorldConditionNPCCampReward
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FJunoWorldConditionNPCCampReward : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef AIRef; // 0x10(0x8)
		FWorldConditionContextDataRef InstigatorRef; // 0x18(0x8)
	};


	// Struct JunoAIRuntime.JunoWorldCondition_IsInTemporaryGlobalEncounter
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FJunoWorldCondition_IsInTemporaryGlobalEncounter : public FWorldConditionCommonBase	
	{
	public:
		FGameplayTag NPCGameplayTag; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAIBannedDescriptorTagRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FJunoAIBannedDescriptorTagRow : public FTableRowBase	
	{
	public:
		FGameplayTag DescriptorTag; // 0x8(0x4)
		bool bDisableAsVisitor; // 0xC(0x1)
		bool bDisableAsCampRecruit; // 0xD(0x1)
		bool bDisableAsAFollower; // 0xE(0x1)
		unsigned char UnknownData00_7[0x1]; // 0xF(0x1) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAIGlobalLWMConfiguration
	// Size: 0x390 (0x390 - 0x0)
	struct FJunoAIGlobalLWMConfiguration	
	{
	public:
		FFortAthenaLivingWorldEvent EventTemplate; // 0x0(0x1B0)
		FFortAthenaLivingWorldEventDataActorSpawnDescription SpawnDescriptionTemplate; // 0x1B0(0x130)
		FPointProviderFilterEntry FilterEntry; // 0x2E0(0x88)
		TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> Encounter; // 0x368(0x20)
		bool bRegisterReservoir; // 0x388(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x389(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAISinglePointProviderEncounterLWMConfiguration
	// Inherited from FJunoAIGlobalLWMConfiguration
	// Size: 0x8 (0x398 - 0x390)
	struct FJunoAISinglePointProviderEncounterLWMConfiguration : public FJunoAIGlobalLWMConfiguration	
	{
	public:
		UClass* PointProviderClass; // 0x390(0x8)
	};


	// Struct JunoAIRuntime.JunoAITemporaryGlobalEncounterLWMConfiguration
	// Inherited from FJunoAISinglePointProviderEncounterLWMConfiguration -> FJunoAIGlobalLWMConfiguration
	// Size: 0x0 (0x398 - 0x398)
	struct FJunoAITemporaryGlobalEncounterLWMConfiguration : public FJunoAISinglePointProviderEncounterLWMConfiguration	
	{
	public:
	};


	// Struct JunoAIRuntime.JunoAIFTUETagQueryPickingConfiguration
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoAIFTUETagQueryPickingConfiguration	
	{
	public:
		FWorldConditionQueryDefinition RequiredConditions; // 0x0(0x18)
		FGameplayTagQuery PossibleFTUEDescriptorTagQuery; // 0x18(0x48)
	};


	// Struct JunoAIRuntime.JunoAIFTUEConfiguration
	// Inherited from FJunoAISinglePointProviderEncounterLWMConfiguration -> FJunoAIGlobalLWMConfiguration
	// Size: 0xF8 (0x490 - 0x398)
	struct FJunoAIFTUEConfiguration : public FJunoAISinglePointProviderEncounterLWMConfiguration	
	{
	public:
		TArray<FJunoAIFTUETagQueryPickingConfiguration> PossibleFTUETagQueryPickingConfigurations; // 0x398(0x10)
		TArray<UClass*> GEsToAddToFTUENPC; // 0x3A8(0x10)
		FScalableFloat InitialChecksDelay; // 0x3B8(0x28)
		FWorldConditionQueryDefinition StartConditions; // 0x3E0(0x18)
		FWorldConditionQueryDefinition EndConditions; // 0x3F8(0x18)
		FScalableFloat CustomLeashInnerRadius; // 0x410(0x28)
		FScalableFloat CustomLeashOuterRadius; // 0x438(0x28)
		FScalableFloat SpawnDelay; // 0x460(0x28)
		bool bUseFirstSpawnLocationForever; // 0x488(0x1)
		bool bInstantDespawnOnEnd; // 0x489(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x48A(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAIFTUEConditionalConfigurationsChooserRow
	// Inherited from FTableRowBase
	// Size: 0x68 (0x70 - 0x8)
	struct FJunoAIFTUEConditionalConfigurationsChooserRow : public FTableRowBase	
	{
	public:
		FWorldConditionQueryDefinition PickCondition; // 0x8(0x18)
		TMap<FGameplayTag, FJunoAIFTUEConfiguration> Configurations; // 0x20(0x50)
	};


	// Struct JunoAIRuntime.JunoAIFollowerLWMConfiguration
	// Inherited from FJunoAIGlobalLWMConfiguration
	// Size: 0x10 (0x3A0 - 0x390)
	struct FJunoAIFollowerLWMConfiguration : public FJunoAIGlobalLWMConfiguration	
	{
	public:
		TArray<UClass*> PointProviderClasses; // 0x390(0x10)
	};


	// Struct JunoAIRuntime.JunoAIFollowerManagedData
	// Size: 0x98 (0x98 - 0x0)
	struct FJunoAIFollowerManagedData	
	{
	public:
		FUniqueNetIdRepl PlayerId; // 0x0(0x30)
		UFortAthenaLivingWorldEncounterInstance* Encounter; // 0x30(0x8)
		TArray<TScriptInterface> PointProviders; // 0x38(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x48(0x50) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoAIWorldNPCSpawningData
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoAIWorldNPCSpawningData	
	{
	public:
		TWeakObjectPtr<UObject*> AssignedPointProvider; // 0x0(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortAthenaLivingWorldEventData*> EventData; // 0x18(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.FTUERuntimeData
	// Size: 0x90 (0x90 - 0x0)
	struct FFTUERuntimeData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TScriptInterface<Class> EncounterPointProvider; // 0x8(0x10)
		UFortAthenaLivingWorldEncounterInstance* Encounter; // 0x18(0x8)
		FWorldConditionQueryState StartQueryState; // 0x20(0x30)
		FWorldConditionQueryState EndQueryState; // 0x50(0x30)
		unsigned char UnknownData01_7[0x10]; // 0x80(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoUniqueNPCLivingWorldPointProviderSelector
	// Inherited from FFortAthenaLivingWorldPointProviderSelector
	// Size: 0x70 (0x78 - 0x8)
	struct FJunoUniqueNPCLivingWorldPointProviderSelector : public FFortAthenaLivingWorldPointProviderSelector	
	{
	public:
		FGameplayTag NPCGameplayTag; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FScalableFloat InitialPersistenceDuration; // 0x10(0x28)
		FScalableFloat RespawnPersistenceDuration; // 0x38(0x28)
		TWeakObjectPtr<UFortAthenaLivingWorldEventData*> EventData; // 0x60(0x8)
		TWeakObjectPtr<UPlayspaceComponent_Root_JunoAIManagement*> CachedRootJunoAIManagement; // 0x68(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoVillagerSpawnerDataSelector
	// Inherited from FFortAthenaLivingWorldSpawnerDataSelector
	// Size: 0x98 (0xA0 - 0x8)
	struct FJunoVillagerSpawnerDataSelector : public FFortAthenaLivingWorldSpawnerDataSelector	
	{
	public:
		TWeakObjectPtr<UPlayspaceComponent_JunoAIPersistence*> CachedRootAIPersistence; // 0x8(0x8)
		FGameplayTagQuery SpawnerDataToFilter; // 0x10(0x48)
		FGameplayTagQuery RoleMustMatchQuery; // 0x58(0x48)
	};


	// Struct JunoAIRuntime.JunoMoveConfig
	// Size: 0xC (0xC - 0x0)
	struct FJunoMoveConfig	
	{
	public:
		unsigned char UnknownData00_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct JunoAIRuntime.JunoWorldCondition_AIWorldSettings
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FJunoWorldCondition_AIWorldSettings : public FWorldConditionCommonBase	
	{
	public:
		EJunoWorldCondition_AIWorldSettingsExpectedValue FriendlyCreatures; // 0x10(0x4)
		EJunoWorldCondition_AIWorldSettingsExpectedValue HostileCreatures; // 0x14(0x4)
		EJunoWorldCondition_AIWorldSettingsExpectedValue FriendlyNPCs; // 0x18(0x4)
		EJunoWorldCondition_AIWorldSettingsExpectedValue EliteHostileCreatures; // 0x1C(0x4)
	};

}
