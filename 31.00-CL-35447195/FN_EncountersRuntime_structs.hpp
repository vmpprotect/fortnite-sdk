#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EncountersRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EncountersRuntime.EncounterMobSpawnInfo
	// Size: 0xA0 (0xA0 - 0x0)
	struct FEncounterMobSpawnInfo	
	{
	public:
		FScalableFloat LeashRadiusInner; // 0x0(0x28)
		FScalableFloat LeashRadiusOuter; // 0x28(0x28)
		TWeakObjectPtr EncounterAnchorPoint; // 0x50(0x8)
		EEncounterMobSpawnType MobSpawnType; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer PointProviderFilterTags; // 0x60(0x20)
		TArray StaticPointProviders; // 0x80(0x10)
		UEnvQuery PointProviderEQS; // 0x90(0x8)
		UClass PointProviderVolumeClass; // 0x98(0x8)
	};


	// Struct EncountersRuntime.EncounterMobSpawnData
	// Size: 0xE0 (0xE0 - 0x0)
	struct FEncounterMobSpawnData	
	{
	public:
		FString DevNotes; // 0x0(0x10)
		FGameplayTag MobIdentifier; // 0x10(0x4)
		bool bActiveOnStart; // 0x14(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr MobEncounterData; // 0x18(0x20)
		bool bOverrideDefaultSpawnInfo; // 0x38(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FEncounterMobSpawnInfo MobSpawnInfo; // 0x40(0xA0)
	};


	// Struct EncountersRuntime.EncounterMobInstance
	// Size: 0x58 (0x58 - 0x0)
	struct FEncounterMobInstance	
	{
	public:
		unsigned char UnknownData03_7[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
		AFortAthenaLivingWorldVolume VolumePointProvider; // 0x18(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
		TArray CurrentPointProviders; // 0x30(0x10)
		unsigned char UnknownData05_7[0x18]; // 0x40(0x18) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.ActorAddLooseTagsStateTreeTaskInstanceData
	// Size: 0x38 (0x38 - 0x0)
	struct FActorAddLooseTagsStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr InActor; // 0x0(0x8)
		FGameplayTagContainer ActorTags; // 0x8(0x20)
		bool bAddTags; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x30(0x8)
	};


	// Struct EncountersRuntime.ActorAddLooseTagsStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FActorAddLooseTagsStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.ActorPhysicsStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FActorPhysicsStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery ActorQuery; // 0x0(0x48)
		bool bShouldWakeup; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x50(0x8)
	};


	// Struct EncountersRuntime.ActorPhysicsStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FActorPhysicsStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.AddEncounterPrefabTagStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FAddEncounterPrefabTagStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag PrefabTag; // 0x0(0x4)
		bool bRemoveOnExit; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.AddEncounterPrefabTagStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FAddEncounterPrefabTagStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.AddGameplayCueStateTreeTaskInstanceData
	// Size: 0x70 (0x70 - 0x0)
	struct FAddGameplayCueStateTreeTaskInstanceData	
	{
	public:
		FGameplayCueTag GameplayCue; // 0x0(0x4)
		bool bApplyToActor; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr TargetActor; // 0x8(0x8)
		bool bApplyToLWMEncounters; // 0x10(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery EncounterQuery; // 0x18(0x48)
		bool bIsLooping; // 0x60(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x68(0x8)
	};


	// Struct EncountersRuntime.AddGameplayCueStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FAddGameplayCueStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.DestroyActorsStateTreeTaskInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FDestroyActorsStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery ActorQuery; // 0x0(0x48)
		AActor UserActor; // 0x48(0x8)
	};


	// Struct EncountersRuntime.DestroyActorsStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FDestroyActorsStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EnableEncounterPointProvidersStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FEnableEncounterPointProvidersStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery ProviderTagQuery; // 0x0(0x48)
		bool bEnableProvider; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x50(0x8)
	};


	// Struct EncountersRuntime.EnableEncounterPointProvidersStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEnableEncounterPointProvidersStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EnableSmartObjectsStateTreeTaskInstanceData
	// Size: 0x80 (0x80 - 0x0)
	struct FEnableSmartObjectsStateTreeTaskInstanceData	
	{
	public:
		bool bUseTagQuery; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery ActorQuery; // 0x8(0x48)
		AActor TargetActor; // 0x50(0x8)
		bool bEnable; // 0x58(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x60(0x8)
		TArray AIActors; // 0x68(0x10)
		FFortAICommandSOUsageDataBase AICommandSOUsageData; // 0x78(0x8)
	};


	// Struct EncountersRuntime.EnableSmartObjectsStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEnableSmartObjectsStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterFactionRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FEncounterFactionRow : public FTableRowBase	
	{
	public:
		UEncounterFactionData FactionData; // 0x8(0x8)
		float Weight; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterGetEnemyFactionStateTreeTaskInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FEncounterGetEnemyFactionStateTreeTaskInstanceData	
	{
	public:
		bool bSpecifyFaction; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UEncounterFactionData Faction; // 0x8(0x8)
		AActor UserActor; // 0x10(0x8)
		UEncounterFactionData EnemyFaction; // 0x18(0x8)
	};


	// Struct EncountersRuntime.EncounterGetEnemyFactionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetEnemyFactionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetKillCountStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FEncounterGetKillCountStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		int32_t Value; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x50(0x8)
	};


	// Struct EncountersRuntime.EncounterGetKillCountStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetKillCountStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetPersistentValueStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterGetPersistentValueStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		int32_t Value; // 0x4(0x4)
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.EncounterGetPersistentValueStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetPersistentValueStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetRemainingCountStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FEncounterGetRemainingCountStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		int32_t Value; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x50(0x8)
	};


	// Struct EncountersRuntime.EncounterGetRemainingCountStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetRemainingCountStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableActorClassStateTreeTaskInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FEncounterGetVariableActorClassStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Value; // 0x8(0x20)
		AActor UserActor; // 0x28(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableActorClassStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableActorClassStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableActorDescriptionStateTreeTaskInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FEncounterGetVariableActorDescriptionStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Value; // 0x8(0x10)
		AActor UserActor; // 0x18(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableActorDescriptionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableActorDescriptionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableBoolStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterGetVariableBoolStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		bool bValue; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableBoolStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableBoolStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableFactionStateTreeTaskInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FEncounterGetVariableFactionStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Value; // 0x8(0x20)
		AActor UserActor; // 0x28(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableFactionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableFactionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableFloatStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterGetVariableFloatStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		float Value; // 0x4(0x4)
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableFloatStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableFloatStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FEncounterGetVariableGameplayTagContainerStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer Value; // 0x8(0x20)
		AActor UserActor; // 0x28(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableGameplayTagContainerStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableGameplayTagContainerStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterGetVariableGameplayTagStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		FGameplayTag Value; // 0x4(0x4)
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableGameplayTagStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableIntStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterGetVariableIntStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		int32_t Value; // 0x4(0x4)
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableIntStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableIntStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTaskInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Value; // 0x8(0x20)
		AActor UserActor; // 0x28(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableItemDefinitionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTaskInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Value; // 0x8(0x20)
		AActor UserActor; // 0x28(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableLWMEncounterStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariableTagQueryStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FEncounterGetVariableTagQueryStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery Value; // 0x8(0x48)
		AActor UserActor; // 0x50(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariableTagQueryStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariableTagQueryStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterGetVariantTagQueryStateTreeTaskInstanceData
	// Size: 0x98 (0x98 - 0x0)
	struct FEncounterGetVariantTagQueryStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery BaseTagQuery; // 0x0(0x48)
		FGameplayTagQuery Value; // 0x48(0x48)
		AActor UserActor; // 0x90(0x8)
	};


	// Struct EncountersRuntime.EncounterGetVariantTagQueryStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterGetVariantTagQueryStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterPrefabEntry
	// Size: 0x50 (0x50 - 0x0)
	struct FEncounterPrefabEntry	
	{
	public:
		UEncounterItemDefinition EncounterDefinition; // 0x0(0x8)
		FGameplayTag EncounterIdentifierTag; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FScalableFloat Weight; // 0x10(0x28)
		FWorldConditionQueryDefinition CanSpawnCondition; // 0x38(0x18)
	};


	// Struct EncountersRuntime.EncounterSelectFactionStateTreeTaskInstanceData
	// Size: 0x70 (0x70 - 0x0)
	struct FEncounterSelectFactionStateTreeTaskInstanceData	
	{
	public:
		UDataRegistry FactionRegistry; // 0x0(0x8)
		FGameplayTagQuery FactionRequirements; // 0x8(0x48)
		bool bSaveToEncounterManager; // 0x50(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x58(0x8)
		UEncounterFactionData Faction; // 0x60(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterSelectFactionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterSelectFactionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterSetCenterActorStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterSetCenterActorStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr CenterActor; // 0x0(0x8)
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.EncounterSetCenterActorStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterSetCenterActorStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterSetPersistentValueStateTreeTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FEncounterSetPersistentValueStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag VariableIdentifier; // 0x0(0x4)
		int32_t Value; // 0x4(0x4)
		EPersistentValueScope Scope; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x10(0x8)
	};


	// Struct EncountersRuntime.EncounterSetPersistentValueStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterSetPersistentValueStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterVariable
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterVariable	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FGameplayTag VarName; // 0x8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterVariableSelections
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterVariableSelections	
	{
	public:
		unsigned char UnknownData02_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FGameplayTag VarName; // 0x8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow
	// Inherited from FTableRowBase
	// Size: 0x68 (0x70 - 0x8)
	struct FEncounterVariableSelectionsRow : public FTableRowBase	
	{
	public:
		FGameplayTagQuery RequiredCapabilities; // 0x8(0x48)
		FWorldConditionQueryDefinition WorldConditionDefinition; // 0x50(0x18)
		int32_t Priority; // 0x68(0x4)
		float Weight; // 0x6C(0x4)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_ActorClass
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_ActorClass : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_ActorDescription
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_ActorDescription : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_Boolean
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_Boolean : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_Faction
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_Faction : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_Float
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_Float : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_GameplayTag
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_GameplayTag : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_GameplayTagContainer
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_GameplayTagContainer : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_Integer
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_Integer : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_LWMEncounter
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_LWMEncounter : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelectionsRow_TagQuery
	// Inherited from FEncounterVariableSelectionsRow -> FTableRowBase
	// Size: 0x20 (0x90 - 0x70)
	struct FEncounterVariableSelectionsRow_TagQuery : public FEncounterVariableSelectionsRow	
	{
	public:
		FDataRegistryOrTableRow RowValue; // 0x70(0x20)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_ActorClass
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_ActorClass : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_ActorDescription
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_ActorDescription : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_Boolean
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_Boolean : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_Faction
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_Faction : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_Float
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_Float : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_GameplayTag
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_GameplayTag : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_GameplayTagContainer
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_GameplayTagContainer : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_Integer
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_Integer : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_LWMEncounter
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_LWMEncounter : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariableSelections_TagQuery
	// Inherited from FEncounterVariableSelections
	// Size: 0x30 (0x40 - 0x10)
	struct FEncounterVariableSelections_TagQuery : public FEncounterVariableSelections	
	{
	public:
		FSoftDataRegistryOrTable ValueChoiceTable; // 0x10(0x30)
	};


	// Struct EncountersRuntime.EncounterVariable_ActorClass
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_ActorClass : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_ActorDescription
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_ActorDescription : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_Boolean
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_Boolean : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_Faction
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_Faction : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_Float
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_Float : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_GameplayTag
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_GameplayTag : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_GameplayTagContainer
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_GameplayTagContainer : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_Integer
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_Integer : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_ItemDefinition
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_ItemDefinition : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_LWMEncounter
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_LWMEncounter : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVariable_TagQuery
	// Inherited from FEncounterVariable
	// Size: 0x10 (0x20 - 0x10)
	struct FEncounterVariable_TagQuery : public FEncounterVariable	
	{
	public:
		FDataTableRowHandle RowValue; // 0x10(0x10)
	};


	// Struct EncountersRuntime.EncounterVarRow
	// Inherited from FTableRowBase
	// Size: 0x0 (0x8 - 0x8)
	struct FEncounterVarRow : public FTableRowBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterVarRow_ActorClass
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FEncounterVarRow_ActorClass : public FEncounterVarRow	
	{
	public:
		TWeakObjectPtr Value; // 0x8(0x20)
	};


	// Struct EncountersRuntime.EncounterVarRow_ActorDescription
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FEncounterVarRow_ActorDescription : public FEncounterVarRow	
	{
	public:
		TArray Value; // 0x8(0x10)
	};


	// Struct EncountersRuntime.EncounterVarRow_Boolean
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FEncounterVarRow_Boolean : public FEncounterVarRow	
	{
	public:
		bool bValue; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterVarRow_Faction
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FEncounterVarRow_Faction : public FEncounterVarRow	
	{
	public:
		UEncounterFactionData Value; // 0x8(0x8)
	};


	// Struct EncountersRuntime.EncounterVarRow_Float
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FEncounterVarRow_Float : public FEncounterVarRow	
	{
	public:
		float Value; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterVarRow_GameplayTag
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FEncounterVarRow_GameplayTag : public FEncounterVarRow	
	{
	public:
		FGameplayTag Value; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterVarRow_GameplayTagContainer
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FEncounterVarRow_GameplayTagContainer : public FEncounterVarRow	
	{
	public:
		FGameplayTagContainer Value; // 0x8(0x20)
	};


	// Struct EncountersRuntime.EncounterVarRow_Integer
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FEncounterVarRow_Integer : public FEncounterVarRow	
	{
	public:
		int32_t Value; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterVarRow_ItemDefinition
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FEncounterVarRow_ItemDefinition : public FEncounterVarRow	
	{
	public:
		TWeakObjectPtr Value; // 0x8(0x20)
	};


	// Struct EncountersRuntime.EncounterVarRow_LWMEncounter
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FEncounterVarRow_LWMEncounter : public FEncounterVarRow	
	{
	public:
		TWeakObjectPtr Value; // 0x8(0x20)
	};


	// Struct EncountersRuntime.EncounterVarRow_TagQuery
	// Inherited from FEncounterVarRow -> FTableRowBase
	// Size: 0x48 (0x50 - 0x8)
	struct FEncounterVarRow_TagQuery : public FEncounterVarRow	
	{
	public:
		FGameplayTagQuery Value; // 0x8(0x48)
	};


	// Struct EncountersRuntime.EndAllMobEncountersStateTreeTaskInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FEndAllMobEncountersStateTreeTaskInstanceData	
	{
	public:
		AActor UserActor; // 0x0(0x8)
	};


	// Struct EncountersRuntime.EndAllMobEncountersStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEndAllMobEncountersStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.FortVerbMessage_EncounterCompleted
	// Inherited from FVerbMessage
	// Size: 0x88 (0x100 - 0x78)
	struct FFortVerbMessage_EncounterCompleted : public FVerbMessage	
	{
	public:
		FSubjectTagsPair EncounterItemDef; // 0x78(0x38)
		bool bSuccess; // 0xB0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		TArray EncounterPlayers; // 0xB8(0x10)
		FSubjectTagsPair Faction; // 0xC8(0x38)
	};


	// Struct EncountersRuntime.GetAnchorStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FGetAnchorStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery AnchorQuery; // 0x0(0x48)
		TWeakObjectPtr AnchorActor; // 0x48(0x8)
		AActor UserActor; // 0x50(0x8)
	};


	// Struct EncountersRuntime.GetAnchorStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FGetAnchorStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.GetEncounterActorStateTreeTaskInstanceData
	// Size: 0x60 (0x60 - 0x0)
	struct FGetEncounterActorStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery ActorQuery; // 0x0(0x48)
		bool bQueryAgainstTrackedActorIdentifiers; // 0x48(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr ChosenActor; // 0x4C(0x8)
		unsigned char UnknownData03_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x58(0x8)
	};


	// Struct EncountersRuntime.GetEncounterActorStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FGetEncounterActorStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.GetFactionEntryStateTreeTaskInstanceData
	// Size: 0xD0 (0xD0 - 0x0)
	struct FGetFactionEntryStateTreeTaskInstanceData	
	{
	public:
		bool bSpecifyFaction; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UEncounterFactionData Faction; // 0x8(0x8)
		UDataRegistry FactionRegistry; // 0x10(0x8)
		FGameplayTagQuery FactionRequirements; // 0x18(0x48)
		FGameplayTagQuery LWMEncounterTagQuery; // 0x60(0x48)
		AActor UserActor; // 0xA8(0x8)
		TArray ActorDescriptions; // 0xB0(0x10)
		TArray SpawnActions; // 0xC0(0x10)
	};


	// Struct EncountersRuntime.GetFactionEntryStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FGetFactionEntryStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterAddGameplayEffectStateTreeTaskInstanceData
	// Size: 0x88 (0x88 - 0x0)
	struct FLWMEncounterAddGameplayEffectStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		UClass GameplayEffect; // 0x48(0x8)
		bool bRemoveEffectOnExit; // 0x50(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer IdentifierTags; // 0x58(0x20)
		AActor UserActor; // 0x78(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x80(0x8) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterAddGameplayEffectStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterAddGameplayEffectStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterAdvanceStateTreeTaskInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FLWMEncounterAdvanceStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		AActor UserActor; // 0x48(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterAdvanceStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterAdvanceStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterAssignPointProvidersStateTreeTaskInstanceData
	// Size: 0xA0 (0xA0 - 0x0)
	struct FLWMEncounterAssignPointProvidersStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		FGameplayTagQuery PatrolPathTagQuery; // 0x48(0x48)
		bool bUseClosestProvider; // 0x90(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x98(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterAssignPointProvidersStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterAssignPointProvidersStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.DynamicEncounterEntry
	// Size: 0x80 (0x80 - 0x0)
	struct FDynamicEncounterEntry	
	{
	public:
		FString DebugName; // 0x0(0x10)
		int32_t SpawnCount; // 0x10(0x4)
		int32_t MaxConcurrentSpawns; // 0x14(0x4)
		bool bOverrideActorCount; // 0x18(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		int32_t ActorCountOverrideMax; // 0x1C(0x4)
		int32_t ActorCountOverrideMin; // 0x20(0x4)
		bool bUseEncounterTagQuery; // 0x24(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		FGameplayTagQuery EncounterTagQuery; // 0x28(0x48)
		TArray ActorDescriptions; // 0x70(0x10)
	};


	// Struct EncountersRuntime.LWMEncounterStartSharedStateTreeTaskInstanceData
	// Size: 0x160 (0x160 - 0x0)
	struct FLWMEncounterStartSharedStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery PointProviderTagQuery; // 0x0(0x48)
		bool bUseVolumeAsAnchor; // 0x48(0x1)
		bool bAttachVolumeToSpawn; // 0x49(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		FGameplayTagQuery AnchorPointTagQuery; // 0x50(0x48)
		FScalableFloat LeashRadiusInner; // 0x98(0x28)
		FScalableFloat LeashRadiusOuter; // 0xC0(0x28)
		FGameplayTagContainer EncounterIdentifierTags; // 0xE8(0x20)
		FGameplayTagContainer ActorTags; // 0x108(0x20)
		FScalableFloat SpawnTimeout; // 0x128(0x28)
		bool bPauseOnExit; // 0x150(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x151(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x158(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterDynamicStartStateTreeTaskInstanceData
	// Inherited from FLWMEncounterStartSharedStateTreeTaskInstanceData
	// Size: 0x88 (0x1E8 - 0x160)
	struct FLWMEncounterDynamicStartStateTreeTaskInstanceData : public FLWMEncounterStartSharedStateTreeTaskInstanceData	
	{
	public:
		bool bSpecifyFaction; // 0x160(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x161(0x7) UNKNOWN PROPERTY
		UEncounterFactionData Faction; // 0x168(0x8)
		TArray DynamicEncounterEntries; // 0x170(0x10)
		TWeakObjectPtr DynamicEmptyEncounter; // 0x180(0x20)
		TArray SpawnActions; // 0x1A0(0x10)
		bool bOverrideEnvQuery; // 0x1B0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1B1(0x7) UNKNOWN PROPERTY
		UEnvQuery SpawnAroundEnvironmentQuery; // 0x1B8(0x8)
		TEnumAsByte SpawnAroundEnvironmentQueryRunMode; // 0x1C0(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x1C1(0x7) UNKNOWN PROPERTY
		FSoftClassPath SpawnAroundNavigationSourceOverride; // 0x1C8(0x18)
		TWeakObjectPtr EncounterInstance; // 0x1E0(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterDynamicStartStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterDynamicStartStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterAlertLevelTargetInfo
	// Size: 0x4 (0x4 - 0x0)
	struct FLWMEncounterAlertLevelTargetInfo	
	{
	public:
		float AwareForgetTime; // 0x0(0x4)
	};


	// Struct EncountersRuntime.LWMEncounterInstanceEffectInfo
	// Size: 0x58 (0x58 - 0x0)
	struct FLWMEncounterInstanceEffectInfo	
	{
	public:
		UClass GameplayEffect; // 0x0(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x8(0x50) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterPauseStateTreeTaskInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FLWMEncounterPauseStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		AActor UserActor; // 0x48(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterPauseStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterPauseStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FLWMEncounterRemoveGameplayEffectStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery GameplayEffectQuery; // 0x0(0x48)
		AActor UserActor; // 0x48(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterRemoveGameplayEffectStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterRemoveGameplayEffectStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterResumeStateTreeTaskInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FLWMEncounterResumeStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		AActor UserActor; // 0x48(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterResumeStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterResumeStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterRow
	// Inherited from FTableRowBase
	// Size: 0x48 (0x50 - 0x8)
	struct FLWMEncounterRow : public FTableRowBase	
	{
	public:
		TArray DynamicActorDescriptions; // 0x8(0x10)
		TArray DynamicSpawnActions; // 0x18(0x10)
		FGameplayTagContainer Tags; // 0x28(0x20)
		float Weight; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterSetAlertLevelStateTreeTaskInstanceData
	// Size: 0xA8 (0xA8 - 0x0)
	struct FLWMEncounterSetAlertLevelStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		FLWMEncounterAlertLevelTargetInfo TargetInfo; // 0x48(0x4)
		TWeakObjectPtr TargetActor; // 0x4C(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery TargetEncounterQuery; // 0x58(0x48)
		AActor UserActor; // 0xA0(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterSetAlertLevelStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterSetAlertLevelStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterSetStageStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FLWMEncounterSetStageStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		int32_t StageIndex; // 0x48(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x50(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterSetStageStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterSetStageStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterStartStateTreeTaskInstanceData
	// Inherited from FLWMEncounterStartSharedStateTreeTaskInstanceData
	// Size: 0x28 (0x188 - 0x160)
	struct FLWMEncounterStartStateTreeTaskInstanceData : public FLWMEncounterStartSharedStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr LWMEncounter; // 0x160(0x20)
		TWeakObjectPtr EncounterInstance; // 0x180(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterStartStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterStartStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterStopStateTreeTaskInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FLWMEncounterStopStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		AActor UserActor; // 0x48(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterStopStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterStopStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.LWMEncounterUpdateLeashStateTreeTaskInstanceData
	// Size: 0xF0 (0xF0 - 0x0)
	struct FLWMEncounterUpdateLeashStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		bool bUseVolumeAsAnchor; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery AnchorPointTagQuery; // 0x50(0x48)
		FScalableFloat LeashRadiusInner; // 0x98(0x28)
		FScalableFloat LeashRadiusOuter; // 0xC0(0x28)
		AActor UserActor; // 0xE8(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterUpdateLeashStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FLWMEncounterUpdateLeashStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.PauseMobEncounterStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FPauseMobEncounterStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag MobIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.PauseMobEncounterStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FPauseMobEncounterStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.RemoveEncounterPrefabTagStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FRemoveEncounterPrefabTagStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag PrefabTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.RemoveEncounterPrefabTagStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FRemoveEncounterPrefabTagStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.ResumeMobEncounterStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FResumeMobEncounterStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag MobIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.ResumeMobEncounterStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FResumeMobEncounterStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.SpawnActorStateTreeTaskInstanceData
	// Size: 0xE8 (0xE8 - 0x0)
	struct FSpawnActorStateTreeTaskInstanceData	
	{
	public:
		TWeakObjectPtr ActorClass; // 0x0(0x20)
		FGameplayTagQuery AnchorQuery; // 0x20(0x48)
		FVector AnchorOffset; // 0x68(0x18)
		bool bEnablePhysics; // 0x80(0x1)
		bool bAttachEncounterVolume; // 0x81(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x82(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer ActorTags; // 0x88(0x20)
		FGameplayTagContainer ActorIdentifierTags; // 0xA8(0x20)
		bool bWaitForSpawnedActor; // 0xC8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr SpawnedActor; // 0xCC(0x8)
		unsigned char UnknownData05_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0xD8(0x8)
		USpawnActorTaskHelper SpawnActorHelper; // 0xE0(0x8)
	};


	// Struct EncountersRuntime.SpawnActorStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FSpawnActorStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.StartMobEncounterStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FStartMobEncounterStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag MobIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.StartMobEncounterStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStartMobEncounterStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		bool bStopEncounterOnExit; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.StopMobEncounterStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FStopMobEncounterStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag MobIdentifier; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x8(0x8)
	};


	// Struct EncountersRuntime.StopMobEncounterStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStopMobEncounterStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.ToggleStateActorStateTreeTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FToggleStateActorStateTreeTaskInstanceData	
	{
	public:
		AActor TargetActor; // 0x0(0x8)
		bool bToggleOn; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		AActor UserActor; // 0x10(0x8)
	};


	// Struct EncountersRuntime.ToggleStateActorStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FToggleStateActorStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterFactionEnemy
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterFactionEnemy	
	{
	public:
		UEncounterFactionData FactionData; // 0x0(0x8)
		float Weight; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterRewardBehavior
	// Size: 0x80 (0x80 - 0x0)
	struct FEncounterRewardBehavior	
	{
	public:
		FVector RewardOffset; // 0x0(0x18)
		FVector RewardDirection; // 0x18(0x18)
		FScalableFloat RewardConeAngle; // 0x30(0x28)
		FScalableFloat RewardFlingMagnitude; // 0x58(0x28)
	};


	// Struct EncountersRuntime.ActorIdentifierEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FActorIdentifierEntry	
	{
	public:
		FGameplayTagContainer IdentifierTags; // 0x0(0x20)
		TWeakObjectPtr TargetActor; // 0x20(0x8)
	};


	// Struct EncountersRuntime.LWMEncounterInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FLWMEncounterInfo	
	{
	public:
		ULWMEncounterInstance LWMEncounter; // 0x0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x8(0x20) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.GameplayEffectIdentifierInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayEffectIdentifierInfo	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterGroupEffectInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FEncounterGroupEffectInfo	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.TrackedActorInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FTrackedActorInfo	
	{
	public:
		TWeakObjectPtr TrackedActor; // 0x0(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x8(0x30) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterPrefabInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FEncounterPrefabInfo	
	{
	public:
		UEncounterItemDefinition EncounterDefinition; // 0x0(0x8)
		FGameplayTag EncounterIdentifierTag; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FScalableFloat Weight; // 0x10(0x28)
	};


	// Struct EncountersRuntime.EncounterSendCustomVerbStateTreeTaskInstanceDataEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FEncounterSendCustomVerbStateTreeTaskInstanceDataEntry	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor Actor; // 0x8(0x8)
		FGameplayTagContainer AdditionalTags; // 0x10(0x20)
	};


	// Struct EncountersRuntime.EncounterSendCustomVerbStateTreeTaskInstanceValueEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FEncounterSendCustomVerbStateTreeTaskInstanceValueEntry	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double Value; // 0x8(0x8)
	};


	// Struct EncountersRuntime.EncounterSendCustomVerbStateTreeTaskInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FEncounterSendCustomVerbStateTreeTaskInstanceData	
	{
	public:
		FGameplayTag CustomVerbTag; // 0x0(0x4)
		uint32_t Amount; // 0x4(0x4)
		TArray Subjects; // 0x8(0x10)
		TArray Values; // 0x18(0x10)
		AActor UserActor; // 0x28(0x8)
	};


	// Struct EncountersRuntime.EncounterSendCustomVerbStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FEncounterSendCustomVerbStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
	};


	// Struct EncountersRuntime.EncounterVerbTransitionStateTreeTaskInstanceData
	// Size: 0x48 (0x48 - 0x0)
	struct FEncounterVerbTransitionStateTreeTaskInstanceData	
	{
	public:
		TArray ObjectiveVerbs; // 0x0(0x10)
		int32_t ObjectiveValueThreshold; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x18(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x20(0x28) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.EncounterVerbTransitionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FEncounterVerbTransitionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		FStateTreeStateLink TransitionTo; // 0x20(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterAlertLevelTransitionStateTreeTaskInstanceData
	// Size: 0x78 (0x78 - 0x0)
	struct FLWMEncounterAlertLevelTransitionStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		TArray AlertLevels; // 0x48(0x10)
		EAlertLevelComparisonOperator ComparisonOperator; // 0x58(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		int32_t Value; // 0x5C(0x4)
		AActor UserActor; // 0x60(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x68(0x10) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterAlertLevelTransitionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FLWMEncounterAlertLevelTransitionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		FStateTreeStateLink TransitionTo; // 0x20(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterKillCountTransitionStateTreeTaskInstanceData
	// Size: 0x68 (0x68 - 0x0)
	struct FLWMEncounterKillCountTransitionStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		uint32_t Value; // 0x48(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x50(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterKillCountTransitionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FLWMEncounterKillCountTransitionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		FStateTreeStateLink TransitionTo; // 0x20(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterRemainingCountTransitionStateTreeTaskInstanceData
	// Size: 0x68 (0x68 - 0x0)
	struct FLWMEncounterRemainingCountTransitionStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		int32_t Value; // 0x48(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		AActor UserActor; // 0x50(0x8)
		bool bOnlyTriggerOnce; // 0x58(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x59(0xF) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterRemainingCountTransitionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FLWMEncounterRemainingCountTransitionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		FStateTreeStateLink TransitionTo; // 0x20(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData
	// Size: 0x60 (0x60 - 0x0)
	struct FLWMEncounterSpawnCompleteTransitionStateTreeTaskInstanceData	
	{
	public:
		FGameplayTagQuery EncounterQuery; // 0x0(0x48)
		AActor UserActor; // 0x48(0x8)
		bool bOnlyTriggerOnce; // 0x50(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMEncounterSpawnCompleteTransitionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FLWMEncounterSpawnCompleteTransitionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		FStateTreeStateLink TransitionTo; // 0x20(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMWaitForNavMeshTransitionStateTreeTaskInstanceData
	// Size: 0x70 (0x70 - 0x0)
	struct FLWMWaitForNavMeshTransitionStateTreeTaskInstanceData	
	{
	public:
		AActor UserActor; // 0x0(0x8)
		TWeakObjectPtr TargetActor; // 0x8(0x8)
		FScalableFloat Radius; // 0x10(0x28)
		FNavAgentProperties NavAgentProperties; // 0x38(0x30)
		bool bOnlyTriggerOnce; // 0x68(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.LWMWaitForNavMeshTransitionStateTreeTask
	// Inherited from FFortStateTreeEncounterTaskBase -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FLWMWaitForNavMeshTransitionStateTreeTask : public FFortStateTreeEncounterTaskBase	
	{
	public:
		FStateTreeStateLink TransitionTo; // 0x20(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct EncountersRuntime.FortVerbFilter_EncounterCompleted
	// Inherited from FObjectiveFilter
	// Size: 0xE8 (0x188 - 0xA0)
	struct FFortVerbFilter_EncounterCompleted : public FObjectiveFilter	
	{
	public:
		FObjectiveSubjectTags EncounterItemDef; // 0xA0(0x48)
		EEncounterSuccessState SuccessState; // 0xE8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		FObjectiveSubjectTags_Progressible Participants; // 0xF0(0x50)
		FObjectiveSubjectTags Faction; // 0x140(0x48)
	};

}
