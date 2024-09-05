#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoEncountersPOIRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct JunoEncountersPOIRuntime.JunoCampApplyPersistentTagsStateTreeTaskInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoCampApplyPersistentTagsStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		AActor* UserActor; // 0x20(0x8)
	};


	// Struct JunoEncountersPOIRuntime.JunoCampApplyPersistentTagsStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoCampApplyPersistentTagsStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoCampGetPersistentTagsStateTreeTaskInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoCampGetPersistentTagsStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagContainer Value; // 0x0(0x20)
		AActor* UserActor; // 0x20(0x8)
	};


	// Struct JunoEncountersPOIRuntime.JunoCampGetPersistentTagsStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoCampGetPersistentTagsStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoEnableCaveExitGateStateTreeTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoEnableCaveExitGateStateTreeTaskInstanceData	
	{
	public:
		AActor* UserActor; // 0x0(0x8)
		TArray<TWeakObjectPtr> GateActors; // 0x8(0x10)
	};


	// Struct JunoEncountersPOIRuntime.JunoEnableCaveExitGateStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoEnableCaveExitGateStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoEnableVillagerProviderStateTreeTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoEnableVillagerProviderStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr<AJunoEncounterStaticPointProvider*> VillagerProvider; // 0x0(0x8)
		bool bEnableProvider; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		AActor* UserActor; // 0x10(0x8)
	};


	// Struct JunoEncountersPOIRuntime.JunoEnableVillagerProviderStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoEnableVillagerProviderStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoGetCampLevelStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoGetCampLevelStateTreeTaskInstanceData	
	{
	public:
		int32_t Value; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor* UserActor; // 0x8(0x8)
	};


	// Struct JunoEncountersPOIRuntime.JunoGetCampLevelStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoGetCampLevelStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoGetVillagerProviderStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoGetVillagerProviderStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery ProviderTagQuery; // 0x0(0x48)
		AActor* UserActor; // 0x48(0x8)
		TWeakObjectPtr<AJunoEncounterStaticPointProvider*> VillagerProvider; // 0x50(0x8)
	};


	// Struct JunoEncountersPOIRuntime.JunoGetVillagerProviderStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoGetVillagerProviderStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterCategoryRow
	// Inherited from FTableRowBase
	// Size: 0x108 (0x110 - 0x8)
	struct FJunoPOIEncounterCategoryRow : public FTableRowBase	
	{
	public:
		FSoftDataRegistryOrTable POIEncounterRegistry; // 0x8(0x30)
		FGameplayTagQuery RequiredCapabilities; // 0x38(0x48)
		FWorldConditionQueryDefinition WorldConditionDefinition; // 0x80(0x18)
		FGameplayTagQuery RepeatWeightMitigationIdentityQuery; // 0x98(0x48)
		FScalableFloat RepeatWeightMitigationFactor; // 0xE0(0x28)
		float Weight; // 0x108(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x160 (0x160 - 0x0)
	struct FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		FJunoPOIEncounterSaveData SavedEncounterState; // 0x0(0x160)
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterSaveData
	// Size: 0x160 (0x160 - 0x0)
	struct FJunoPOIEncounterSaveData	
	{
	public:
		bool bEncounterChosen; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UEncounterItemDefinition*> ChosenEncounterDefinition; // 0x8(0x20)
		TWeakObjectPtr<UEncounterFactionData*> ChosenFaction; // 0x28(0x20)
		int32_t ChosenVariant; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FPersistenceFrameworkDataRegistryOrTableRowHandle SelectedEncounterRow; // 0x50(0x30)
		TMap<FGameplayTag, FPersistenceFrameworkDataRegistryOrTableRowHandle> Variables; // 0x80(0x50)
		TMap<FGameplayTag, FPOIPersistenceValueEntry> PersistentValues; // 0xD0(0x50)
		bool bIsPOISetup; // 0x120(0x1)
		bool bEncounterFinished; // 0x121(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x122(0x6) UNKNOWN PROPERTY
		double LastFinishTime; // 0x128(0x8)
		bool bFactionChosen; // 0x130(0x1)
		bool bEncounterSuccess; // 0x131(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x132(0x2) UNKNOWN PROPERTY
		int32_t EncounterCount; // 0x134(0x4)
		FGameplayTagContainer DynamicPOICapabitities; // 0x138(0x20)
		unsigned char UnknownData04_7[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.POIPersistenceValueEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FPOIPersistenceValueEntry	
	{
	public:
		int32_t Value; // 0x0(0x4)
		EPersistentValueScope Scope; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v1
	// Size: 0x150 (0x150 - 0x0)
	struct FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v1	
	{
	public:
		FJunoPOIEncounterSaveData_v1 SavedEncounterState; // 0x0(0x150)
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterSaveData_v1
	// Size: 0x150 (0x150 - 0x0)
	struct FJunoPOIEncounterSaveData_v1	
	{
	public:
		bool bEncounterChosen; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UEncounterItemDefinition*> ChosenEncounterDefinition; // 0x8(0x20)
		TWeakObjectPtr<UEncounterFactionData*> ChosenFaction; // 0x28(0x20)
		int32_t ChosenVariant; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FDataRegistryOrTableRow SelectedEncounterRow; // 0x50(0x20)
		TMap<FGameplayTag, FPersistenceFrameworkDataTableRowHandle> Variables; // 0x70(0x50)
		TMap<FGameplayTag, int32_t> PersistentValues; // 0xC0(0x50)
		bool bIsPOISetup; // 0x110(0x1)
		bool bEncounterFinished; // 0x111(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x112(0x6) UNKNOWN PROPERTY
		int64_t LastFinishTime; // 0x118(0x8)
		bool bFactionChosen; // 0x120(0x1)
		bool bEncounterSuccess; // 0x121(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x122(0x2) UNKNOWN PROPERTY
		int32_t EncounterCount; // 0x124(0x4)
		FGameplayTagContainer DynamicPOICapabitities; // 0x128(0x20)
		unsigned char UnknownData04_7[0x8]; // 0x148(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v0
	// Size: 0x100 (0x100 - 0x0)
	struct FJunoPOIEncounterPersistenceFeatureData_InGameClass_PersistentInfo_v0	
	{
	public:
		FJunoPOIEncounterSaveData_v0 SavedEncounterState; // 0x0(0x100)
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterSaveData_v0
	// Size: 0x100 (0x100 - 0x0)
	struct FJunoPOIEncounterSaveData_v0	
	{
	public:
		bool bEncounterChosen; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UEncounterItemDefinition*> ChosenEncounterDefinition; // 0x8(0x20)
		TWeakObjectPtr<UEncounterFactionData*> ChosenFaction; // 0x28(0x20)
		int32_t ChosenVariant; // 0x48(0x4)
		FDataRegistryId EncounterRow; // 0x4C(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		TMap<FGameplayTag, FPersistenceFrameworkDataTableRowHandle> Variables; // 0x58(0x50)
		TMap<FGameplayTag, int32_t> PersistentValues; // 0xA8(0x50)
		bool bIsPOISetup; // 0xF8(0x1)
		bool bEncounterFinished; // 0xF9(0x1)
		bool bFactionChosen; // 0xFA(0x1)
		unsigned char UnknownData02_7[0x5]; // 0xFB(0x5) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterFollowupEntry
	// Size: 0x88 (0x88 - 0x0)
	struct FJunoPOIEncounterFollowupEntry	
	{
	public:
		FDataRegistryOrTableRow FollowupChain; // 0x0(0x20)
		FGameplayTagQuery RequiredCapabilities; // 0x20(0x48)
		FWorldConditionQueryDefinition WorldConditionDefinition; // 0x68(0x18)
		float Weight; // 0x80(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIDestroyActorRetainmentEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoPOIDestroyActorRetainmentEntry	
	{
	public:
		int32_t Count; // 0x0(0x4)
		float Weight; // 0x4(0x4)
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIDestroyActorInfo
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoPOIDestroyActorInfo	
	{
	public:
		FGameplayTagQuery DestroyActorQuery; // 0x0(0x48)
		TArray<FJunoPOIDestroyActorRetainmentEntry> RetainmentEntries; // 0x48(0x10)
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIHLODActorInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoPOIHLODActorInfo	
	{
	public:
		TWeakObjectPtr<UClass*> HLODActorClass; // 0x0(0x20)
		FGameplayTagQuery HLODActorAnchorQuery; // 0x20(0x48)
	};


	// Struct JunoEncountersPOIRuntime.JunoPOIEncounterRow
	// Inherited from FTableRowBase
	// Size: 0x1E0 (0x1E8 - 0x8)
	struct FJunoPOIEncounterRow : public FTableRowBase	
	{
	public:
		UEncounterItemDefinition* EncounterDefinition; // 0x8(0x8)
		FDataRegistryType FactionRegistry; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery FactionRequirements; // 0x18(0x48)
		FGameplayTagContainer IdentityTags; // 0x60(0x20)
		FGameplayTagQuery RequiredCapabilities; // 0x80(0x48)
		FWorldConditionQueryDefinition WorldConditionDefinition; // 0xC8(0x18)
		TArray<FJunoPOIHLODActorInfo> HLODActorsEntries; // 0xE0(0x10)
		TArray<FJunoPOIDestroyActorInfo> DestroyActorsEntries; // 0xF0(0x10)
		TArray<FInstancedStruct> POIVariables; // 0x100(0x10)
		FGameplayTagQuery RepeatWeightMitigationIdentityQuery; // 0x110(0x48)
		FScalableFloat RepeatWeightMitigationFactor; // 0x158(0x28)
		TArray<FJunoPOIEncounterFollowupEntry> SuccessFollowupEncounters; // 0x180(0x10)
		TArray<FJunoPOIEncounterFollowupEntry> FailureFollowupEncounters; // 0x190(0x10)
		FGameplayTagContainer AddToPOITags; // 0x1A0(0x20)
		FGameplayTagContainer RemoveFromPOITags; // 0x1C0(0x20)
		bool bWaitForVolumeOccupied; // 0x1E0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1E1(0x3) UNKNOWN PROPERTY
		float Weight; // 0x1E4(0x4)
	};


	// Struct JunoEncountersPOIRuntime.JunoSpawnActorStateTreeTaskInstanceData
	// Size: 0xF8 (0xF8 - 0x0)
	struct FJunoSpawnActorStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr<UClass*> ActorClass; // 0x0(0x20)
		FGameplayTagQuery AnchorQuery; // 0x20(0x48)
		FVector AnchorOffset; // 0x68(0x18)
		bool bEnablePhysics; // 0x80(0x1)
		bool bAttachEncounterVolume; // 0x81(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x82(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer ActorTags; // 0x88(0x20)
		FGameplayTagContainer ActorIdentifierTags; // 0xA8(0x20)
		ESpawnActorPersistenceBehavior PersistenceBehavior; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		FGameplayTag PersistenceID; // 0xCC(0x4)
		bool bWaitForSpawnedActor; // 0xD0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> SpawnedActor; // 0xD4(0x8)
		unsigned char UnknownData03_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		AActor* UserActor; // 0xE0(0x8)
		UJunoSpawnActorTaskHelper* JunoSpawnActorHelper; // 0xE8(0x8)
		unsigned char UnknownData04_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.JunoSpawnActorStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoSpawnActorStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoSpawnedActorMakePersistentStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoSpawnedActorMakePersistentStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery ActorQuery; // 0x0(0x48)
		bool bMakeTransient; // 0x48(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		AActor* UserActor; // 0x50(0x8)
	};


	// Struct JunoEncountersPOIRuntime.JunoSpawnedActorMakePersistentStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoSpawnedActorMakePersistentStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoWaitForCampActorStateTreeTaskInstanceData
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoWaitForCampActorStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery CampTagQuery; // 0x0(0x48)
		TWeakObjectPtr<AActor*> CampActor; // 0x48(0x8)
		AActor* UserActor; // 0x50(0x8)
		UJunoWaitForCampActorTaskHelper* JunoWaitForCampActorHelper; // 0x58(0x8)
	};


	// Struct JunoEncountersPOIRuntime.JunoWaitForCampActorStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FJunoWaitForCampActorStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct JunoEncountersPOIRuntime.JunoEncounterConditionalTags
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoEncounterConditionalTags	
	{
	public:
		EJunoBiome Biome; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer TagsToApply; // 0x8(0x20)
	};


	// Struct JunoEncountersPOIRuntime.FindPrefabSpawnedActorStateTreeTaskInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FFindPrefabSpawnedActorStateTreeTaskInstanceData	
	{
	public:
		UClass* MustBeOfClass; // 0x0(0x8)
		AActor* UserActor; // 0x8(0x8)
		TWeakObjectPtr<AActor*> Actor; // 0x10(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.FindPrefabSpawnedActorStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFindPrefabSpawnedActorStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		FStateTreeStateLink TransitionTo; // 0x20(0x2)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.JunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData
	// Size: 0x48 (0x48 - 0x0)
	struct FJunoVillagerProviderSpawnTransitionStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr<AJunoEncounterStaticPointProvider*> VillagerProvider; // 0x0(0x8)
		FScalableFloat SpawnTimeout; // 0x8(0x28)
		AActor* UserActor; // 0x30(0x8)
		TWeakObjectPtr<AActor*> Villager; // 0x38(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoEncountersPOIRuntime.JunoVillagerProviderSpawnTransitionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FJunoVillagerProviderSpawnTransitionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		FStateTreeStateLink TransitionTo; // 0x20(0x2)
		FStateTreeStateLink TimeoutTransitionTo; // 0x22(0x2)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};

}
