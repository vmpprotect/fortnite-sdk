#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteAI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortniteAI.AthenaAIBehaviorInjectionManager
	// Size: 0xB0 (0xB0 - 0x0)
	struct FAthenaAIBehaviorInjectionManager	
	{
	public:
		UDataRegistry* ItemBehaviorsRegistry; // 0x0(0x8)
		UDataRegistry* PawnTagsBehaviorsRegistry; // 0x8(0x8)
		TArray<TWeakObjectPtr> InjectionSupportingBehaviors; // 0x10(0x10)
		UBlackboardData* InjectionBlackboard; // 0x20(0x8)
		TMap<UBehaviorTree*, UBehaviorTree*> BehaviorToRuntimeBehavior; // 0x28(0x50)
		unsigned char UnknownData00_7[0x38]; // 0x78(0x38) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.DebugMinimapData
	// Size: 0x190 (0x190 - 0x0)
	struct FDebugMinimapData	
	{
	public:
		bool bIsOverridden; // 0x0(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
		FSlateBrush DebugMinimapIconBrush; // 0x10(0xB0)
		FVector2D DebugMinimapIconScale; // 0xC0(0x10)
		FSlateBrush DebugCompassIconBrush; // 0xD0(0xB0)
		FVector2D DebugCompassIconScale; // 0x180(0x10)
	};


	// Struct FortniteAI.FortAIInjectedDecisionServiceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAIInjectedDecisionServiceData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UBTService* InjectedService; // 0x8(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIInjectedDecisionStateTreeData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAIInjectedDecisionStateTreeData	
	{
	public:
		FStateTreeInstanceData DecisionInstanceData; // 0x0(0x10)
		FFortAIInjectedDecisionContextData ContextData; // 0x10(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x11(0xF) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIInjectedDecisionContextData
	// Size: 0x1 (0x1 - 0x0)
	struct FFortAIInjectedDecisionContextData	
	{
	public:
		EExecutionStatus ExecutionStatus; // 0x0(0x1)
	};


	// Struct FortniteAI.FortAIInjectedDecision
	// Size: 0x68 (0x68 - 0x0)
	struct FFortAIInjectedDecision	
	{
	public:
		UFortInjectedBehavior* InjectedBehavior; // 0x0(0x8)
		UBehaviorTreeComponent* OwnerComp; // 0x8(0x8)
		FFortAIInjectedDecisionServiceData ServiceData; // 0x10(0x28)
		FFortAIInjectedDecisionStateTreeData StateTreeData; // 0x38(0x20)
		unsigned char UnknownData00_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIInjectedDecisionsByTag
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAIInjectedDecisionsByTag	
	{
	public:
		TArray<FFortAIInjectedDecision> InjectedDecisions; // 0x0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIInjectedBehaviorInjectorRuntime
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAIInjectedBehaviorInjectorRuntime	
	{
	public:
		TArray<FFortAIInjectedDecisionsByTag> InjectedDecisionsByTag; // 0x0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortInstancedInjectedBehavior
	// Size: 0x10 (0x10 - 0x0)
	struct FFortInstancedInjectedBehavior	
	{
	public:
		UFortInjectedBehavior* InjectedBehavior; // 0x0(0x8)
		FGameplayTag InjectionTag; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.SmartObjectActivityResult
	// Size: 0x20 (0x20 - 0x0)
	struct FSmartObjectActivityResult	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortSmartObjectRuntimeConfigForResult
	// Size: 0x20 (0x20 - 0x0)
	struct FFortSmartObjectRuntimeConfigForResult	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UClass* OverridenFilterClassForEntryPoints; // 0x8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortSmartObjectEvaluationResult
	// Size: 0x190 (0x190 - 0x0)
	struct FFortSmartObjectEvaluationResult	
	{
	public:
		unsigned char UnknownData00_7[0x78]; // 0x0(0x78) UNKNOWN PROPERTY
		USmartObjectComponent* PickedSmartObjectComponent; // 0x78(0x8)
		unsigned char UnknownData01_6[0x70]; // 0x80(0x70) UNKNOWN PROPERTY
		FGameplayInteractionContext ActiveGameplayInteractionContext; // 0xF0(0x68)
		UGameplayBehaviorConfig* ActiveBehaviorConfig; // 0x158(0x8)
		UGameplayBehavior* ActiveGameplayBehavior; // 0x160(0x8)
		UGameplayInteractionSmartObjectBehaviorDefinition* ActiveSmartObjectInteractionBehaviorDefinition; // 0x168(0x8)
		unsigned char UnknownData02_7[0x20]; // 0x170(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortSmartObjectEvaluationRequest
	// Size: 0x58 (0x58 - 0x0)
	struct FFortSmartObjectEvaluationRequest	
	{
	public:
		TArray<USmartObjectComponent*> OptionalApprovedList; // 0x0(0x10)
		unsigned char UnknownData00_6[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
		UCurveFloat* DistanceToWeightCurveForSlotPicking; // 0x30(0x8)
		UClass* OverridenFilterClassForEntryPoints; // 0x38(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x40(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAISmartObjectEvaluationRequestInternalData
	// Size: 0xC0 (0xC0 - 0x0)
	struct FFortAISmartObjectEvaluationRequestInternalData	
	{
	public:
		FFortSmartObjectEvaluationRequest Request; // 0x0(0x58)
		unsigned char UnknownData00_7[0x68]; // 0x58(0x68) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.SmartObjectBanned
	// Size: 0x10 (0x10 - 0x0)
	struct FSmartObjectBanned	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAICommandSOUsageDataBase
	// Size: 0x8 (0x8 - 0x0)
	struct FFortAICommandSOUsageDataBase	
	{
	public:
		float RequestDuration; // 0x0(0x4)
		bool bIgnoreCooldowns; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAICommandSOUsageData
	// Inherited from FFortAICommandSOUsageDataBase
	// Size: 0x8 (0x10 - 0x8)
	struct FFortAICommandSOUsageData : public FFortAICommandSOUsageDataBase	
	{
	public:
		AActor* SOActor; // 0x8(0x8)
	};


	// Struct FortniteAI.FortAIActiveCommandSOUsageData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAIActiveCommandSOUsageData	
	{
	public:
		USmartObjectComponent* SOComponent; // 0x0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAISmartObjectAnimConfigRow
	// Inherited from FTableRowBase
	// Size: 0xA0 (0xA8 - 0x8)
	struct FFortAISmartObjectAnimConfigRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr<UAnimMontage*> Montage; // 0x8(0x20)
		TWeakObjectPtr<UContextualAnimSceneAsset*> SceneAsset; // 0x28(0x20)
		FGameplayTagQuery TagQuery; // 0x48(0x48)
		FWorldConditionQueryDefinition SelectionPreconditions; // 0x90(0x18)
	};


	// Struct FortniteAI.FortAISpawnerTagQueryInjectedBehavior
	// Size: 0x58 (0x58 - 0x0)
	struct FFortAISpawnerTagQueryInjectedBehavior	
	{
	public:
		FGameplayTagQuery SpawnerTagsQuery; // 0x0(0x48)
		TArray<FFortInjectedBehaviorEntry> InjectedBehaviors; // 0x48(0x10)
	};


	// Struct FortniteAI.FortInjectedBehaviorEntry
	// Size: 0x40 (0x40 - 0x0)
	struct FFortInjectedBehaviorEntry	
	{
	public:
		FGameplayTagContainer InjectionTags; // 0x0(0x20)
		TWeakObjectPtr<UClass*> InjectedBehavior; // 0x20(0x20)
	};


	// Struct FortniteAI.FortAISpawnGroupUpgradeUIData
	// Size: 0x60 (0x60 - 0x0)
	struct FFortAISpawnGroupUpgradeUIData	
	{
	public:
		bool bAlwaysDisplayHealthBar; // 0x0(0x1)
		bool bOverrideHealthBarColor; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> UpgradeIconImage; // 0x8(0x20)
		FSlateColor UpgradeIconTintColor; // 0x28(0x14)
		FLinearColor HealthBarColorOverride; // 0x3C(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FText UpgradeName; // 0x50(0x10)
	};


	// Struct FortniteAI.AIVisibilityRangeSettings
	// Size: 0xC (0xC - 0x0)
	struct FAIVisibilityRangeSettings	
	{
	public:
		bool bUsesRangeSettings : 1; // 0x0:0(0x1)
		char VisibilitySettings; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float Range; // 0x4(0x4)
		float IdleTime; // 0x8(0x4)
	};


	// Struct FortniteAI.FortAIVisibilityDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x58 (0x60 - 0x8)
	struct FFortAIVisibilityDataTableRow : public FTableRowBase	
	{
	public:
		FGameplayTagQuery VisibilityTagQuery; // 0x8(0x48)
		TArray<FAIVisibilityRangeSettings> RangeSettings; // 0x50(0x10)
	};


	// Struct FortniteAI.FortAIWeaponModDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x58 (0x60 - 0x8)
	struct FFortAIWeaponModDataTableRow : public FTableRowBase	
	{
	public:
		FGameplayTagQuery WeaponModTagQuery; // 0x8(0x48)
		bool bCanAffectLootScore : 1; // 0x50:0(0x1)
		bool bCanAffectAccuracy : 1; // 0x50:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float LootScore; // 0x54(0x4)
		float AccuracyModifier; // 0x58(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAthenaAILoadoutTableRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FFortAthenaAILoadoutTableRow : public FTableRowBase	
	{
	public:
		TArray<FItemAndCount> Items; // 0x8(0x10)
		FDataTableRowHandle LootInfo; // 0x18(0x10)
	};


	// Struct FortniteAI.FortAILoadoutEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAILoadoutEntry	
	{
	public:
		FName Loadout; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FScalableFloat Weight; // 0x8(0x28)
	};


	// Struct FortniteAI.FortAILoadoutInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FFortAILoadoutInfo	
	{
	public:
		UDataTable* LoadoutTable; // 0x0(0x8)
		TArray<FFortAILoadoutEntry> Loadouts; // 0x8(0x10)
	};


	// Struct FortniteAI.FortAthenaAILODSetting
	// Size: 0x1 (0x1 - 0x0)
	struct FFortAthenaAILODSetting	
	{
	public:
		bool bIsValid; // 0x0(0x1)
	};


	// Struct FortniteAI.FortAILODSetting_AIEvaluator
	// Inherited from FFortAthenaAILODSetting
	// Size: 0x67 (0x68 - 0x1)
	struct FFortAILODSetting_AIEvaluator : public FFortAthenaAILODSetting	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FScalableFloat IntervalMultiplier; // 0x8(0x28)
		unsigned char UnknownData01_6[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FScalableFloat RandomDeviationMultiplier; // 0x38(0x28)
		unsigned char UnknownData02_7[0x8]; // 0x60(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAILODSetting_CharacterMovement
	// Inherited from FFortAthenaAILODSetting
	// Size: 0x187 (0x188 - 0x1)
	struct FFortAILODSetting_CharacterMovement : public FFortAthenaAILODSetting	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FScalableFloat Interval; // 0x8(0x28)
		FScalableFloat RandomDeviation; // 0x30(0x28)
		FScalableFloat MinimumDynamicInterval; // 0x58(0x28)
		FScalableFloat MaximumDotDifferenceBetweenInputVectors; // 0x80(0x28)
		FScalableFloat bDisableAvoidance; // 0xA8(0x28)
		FScalableFloat bBotsEnableNavWalkingMode; // 0xD0(0x28)
		FScalableFloat bBotsEnablePhysNavWalkingPathFollowingMode; // 0xF8(0x28)
		FScalableFloat bSweepWhileNavWalking; // 0x120(0x28)
		FScalableFloat bGenerateOverlapInNavWalking; // 0x148(0x28)
		unsigned char UnknownData01_7[0x18]; // 0x170(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAILODSetting_FortWeaponRanged
	// Inherited from FFortAthenaAILODSetting
	// Size: 0x67 (0x68 - 0x1)
	struct FFortAILODSetting_FortWeaponRanged : public FFortAthenaAILODSetting	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FScalableFloat Interval; // 0x8(0x28)
		unsigned char UnknownData01_6[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FScalableFloat RandomDeviation; // 0x38(0x28)
		unsigned char UnknownData02_7[0x8]; // 0x60(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAILODSetting_GenericTickingObject
	// Inherited from FFortAthenaAILODSetting
	// Size: 0x37 (0x38 - 0x1)
	struct FFortAILODSetting_GenericTickingObject : public FFortAthenaAILODSetting	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FScalableFloat TickMultiplier; // 0x8(0x28)
		unsigned char UnknownData01_7[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBehaviorValueBase
	// Size: 0x8 (0x8 - 0x0)
	struct FFortBehaviorValueBase	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBehaviorValue_Bool
	// Inherited from FFortBehaviorValueBase
	// Size: 0x4 (0xC - 0x8)
	struct FFortBehaviorValue_Bool : public FFortBehaviorValueBase	
	{
	public:
		bool DefaultValue; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBehaviorValue_Class
	// Inherited from FFortBehaviorValueBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortBehaviorValue_Class : public FFortBehaviorValueBase	
	{
	public:
		UClass* DefaultValue; // 0x8(0x8)
		UClass* BaseClass; // 0x10(0x8)
	};


	// Struct FortniteAI.FortBehaviorValue_Enum
	// Inherited from FFortBehaviorValueBase
	// Size: 0x20 (0x28 - 0x8)
	struct FFortBehaviorValue_Enum : public FFortBehaviorValueBase	
	{
	public:
		char DefaultValue; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		UEnum* EnumType; // 0x10(0x8)
		FString NativeEnumTypeName; // 0x18(0x10)
	};


	// Struct FortniteAI.FortBehaviorValue_Float
	// Inherited from FFortBehaviorValueBase
	// Size: 0x4 (0xC - 0x8)
	struct FFortBehaviorValue_Float : public FFortBehaviorValueBase	
	{
	public:
		float DefaultValue; // 0x8(0x4)
	};


	// Struct FortniteAI.FortBehaviorValue_GameplayTagContainer
	// Inherited from FFortBehaviorValueBase
	// Size: 0x20 (0x28 - 0x8)
	struct FFortBehaviorValue_GameplayTagContainer : public FFortBehaviorValueBase	
	{
	public:
		FGameplayTagContainer DefaultValue; // 0x8(0x20)
	};


	// Struct FortniteAI.FortBehaviorValue_Int32
	// Inherited from FFortBehaviorValueBase
	// Size: 0x4 (0xC - 0x8)
	struct FFortBehaviorValue_Int32 : public FFortBehaviorValueBase	
	{
	public:
		int32_t DefaultValue; // 0x8(0x4)
	};


	// Struct FortniteAI.FortBehaviorValue_Name
	// Inherited from FFortBehaviorValueBase
	// Size: 0x4 (0xC - 0x8)
	struct FFortBehaviorValue_Name : public FFortBehaviorValueBase	
	{
	public:
		FName DefaultValue; // 0x8(0x4)
	};


	// Struct FortniteAI.FortBehaviorValue_String
	// Inherited from FFortBehaviorValueBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortBehaviorValue_String : public FFortBehaviorValueBase	
	{
	public:
		FString DefaultValue; // 0x8(0x10)
	};


	// Struct FortniteAI.FortBehaviorValue_Object
	// Inherited from FFortBehaviorValueBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortBehaviorValue_Object : public FFortBehaviorValueBase	
	{
	public:
		UObject* DefaultValue; // 0x8(0x8)
		UClass* BaseClass; // 0x10(0x8)
	};


	// Struct FortniteAI.FortBehaviorValue_Rotator
	// Inherited from FFortBehaviorValueBase
	// Size: 0x18 (0x20 - 0x8)
	struct FFortBehaviorValue_Rotator : public FFortBehaviorValueBase	
	{
	public:
		FRotator DefaultValue; // 0x8(0x18)
	};


	// Struct FortniteAI.FortBehaviorValue_Vector
	// Inherited from FFortBehaviorValueBase
	// Size: 0x18 (0x20 - 0x8)
	struct FFortBehaviorValue_Vector : public FFortBehaviorValueBase	
	{
	public:
		FVector DefaultValue; // 0x8(0x18)
	};


	// Struct FortniteAI.FortBlackboardParameterManager
	// Size: 0x68 (0x68 - 0x0)
	struct FFortBlackboardParameterManager	
	{
	public:
		FInstancedPropertyBag ParameterKeyValues; // 0x0(0x10)
		unsigned char UnknownData00_7[0x58]; // 0x10(0x58) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortInjectedBehaviorsDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortInjectedBehaviorsDataTableRow : public FTableRowBase	
	{
	public:
		TArray<FFortAISpawnerTagQueryInjectedBehavior> InjectedBehaviorsByTagQuery; // 0x8(0x10)
	};


	// Struct FortniteAI.FortItemInjectedBehaviorsDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x78 (0x80 - 0x8)
	struct FFortItemInjectedBehaviorsDataTableRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr<UFortItemDefinition*> ItemDefinition; // 0x8(0x20)
		FGameplayTagQuery ItemGameplayTagQuery; // 0x28(0x48)
		TArray<FFortAISpawnerTagQueryInjectedBehavior> InjectedBehaviorsByTagQuery; // 0x70(0x10)
	};


	// Struct FortniteAI.FortNPCVerbReactionTableRow
	// Inherited from FTableRowBase
	// Size: 0x70 (0x78 - 0x8)
	struct FFortNPCVerbReactionTableRow : public FTableRowBase	
	{
	public:
		TArray<FInstancedStruct> VerbFilters; // 0x8(0x10)
		UAthenaDanceItemDefinition* EmoteReaction; // 0x18(0x8)
		UClass* GameplayEffectReaction; // 0x20(0x8)
		FGameplayTagQuery ConditionalQuery; // 0x28(0x48)
		bool bOncePerWorld; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.PendingSpawnInfo
	// Size: 0x130 (0x130 - 0x0)
	struct FPendingSpawnInfo	
	{
	public:
		UClass* PawnClassToSpawn; // 0x0(0x8)
		AActor* SpawnPoint; // 0x8(0x8)
		FVector SpawnLocation; // 0x10(0x18)
		FRotator SpawnRotation; // 0x28(0x18)
		AActor* SpawnSource; // 0x40(0x8)
		bool bSpawnedFromExternalSpawner; // 0x48(0x1)
		bool bIsEncounterAI; // 0x49(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		UFortAIEncounterInfo* EncounterInfo; // 0x50(0x8)
		float DifficultyLevel; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		UFortAISpawnGroup* SpawnGroup; // 0x60(0x8)
		FGuid SpawnGroupGuid; // 0x68(0x10)
		int32_t EnemyIndexInSpawnGroup; // 0x78(0x4)
		float TimeToSpawn; // 0x7C(0x4)
		FGuid PendingSpawnInfoGuid; // 0x80(0x10)
		bool bIgnoreCollision; // 0x90(0x1)
		bool bKillBuildingActorsAtSpawnLocation; // 0x91(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x92(0x2) UNKNOWN PROPERTY
		float EncounterAILifespan; // 0x94(0x4)
		float ScoreMultiplier; // 0x98(0x4)
		bool bDebugSpawnedAI; // 0x9C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x9D(0x3) UNKNOWN PROPERTY
		TArray<UFortAbilitySet*> AbilitySetsToGrantOnSpawn; // 0xA0(0x10)
		TArray<UFortGameplayModifierItemDefinition*> ModifiersToApplyOnSpawn; // 0xB0(0x10)
		FFortAISpawnGroupUpgradeUIData UpgradeUIData; // 0xC0(0x60)
		FFortAIPawnLootDropData LootDropData; // 0x120(0x10)
	};


	// Struct FortniteAI.FortWorldConditionAlwaysTrue
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x0 (0x10 - 0x10)
	struct FFortWorldConditionAlwaysTrue : public FWorldConditionCommonBase	
	{
	public:
	};


	// Struct FortniteAI.FortWorldConditionCheckSmartObjectState
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x18 (0x28 - 0x10)
	struct FFortWorldConditionCheckSmartObjectState : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef SmartObjectActorRef; // 0x10(0x8)
		FWorldConditionContextDataRef UserActorRef; // 0x18(0x8)
		FWorldConditionContextDataRef OptionalSlotHandleRef; // 0x20(0x8)
	};


	// Struct FortniteAI.MMRSpawningBracketBaseDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FMMRSpawningBracketBaseDataTableRow : public FTableRowBase	
	{
	public:
		int32_t MMRBracketLow; // 0x8(0x4)
		int32_t MMRBracketHigh; // 0xC(0x4)
	};


	// Struct FortniteAI.MMRSpawningBaseRuntimeInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FMMRSpawningBaseRuntimeInfo	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.MMRSpawningDataTableInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FMMRSpawningDataTableInfo	
	{
	public:
		UClass* AISpawnerData; // 0x0(0x8)
		float Skill; // 0x8(0x4)
		float Weight; // 0xC(0x4)
		int32_t SpawingItemIndex; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.MMRPhaseSpawningDataTableInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FMMRPhaseSpawningDataTableInfo	
	{
	public:
		int32_t GamePhaseIndexToSpawn; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FMMRSpawningDataTableInfo> SpawningItems; // 0x8(0x10)
	};


	// Struct FortniteAI.MMRSpawningBracketBotDataTableRow
	// Inherited from FMMRSpawningBracketBaseDataTableRow -> FTableRowBase
	// Size: 0x10 (0x20 - 0x10)
	struct FMMRSpawningBracketBotDataTableRow : public FMMRSpawningBracketBaseDataTableRow	
	{
	public:
		TArray<FMMRPhaseSpawningDataTableInfo> PhaseSpawningItems; // 0x10(0x10)
	};


	// Struct FortniteAI.AIHotSpotSlotInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FAIHotSpotSlotInfo	
	{
	public:
		AAIHotSpot* HotSpot; // 0x0(0x8)
		int32_t SlotIndex; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AthenaMemoryBudgetInterfaces
	// Size: 0x10 (0x10 - 0x0)
	struct FAthenaMemoryBudgetInterfaces	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.ClientAILODMovementCompOptimizationConfiguration
	// Size: 0x1E0 (0x1E0 - 0x0)
	struct FClientAILODMovementCompOptimizationConfiguration	
	{
	public:
		FScalableFloat bEnable; // 0x0(0x28)
		FScalableFloat bEnableSimulationDataOptimizations; // 0x28(0x28)
		FScalableFloat MinDistanceToApplyFrameSkippingWhenVisible; // 0x50(0x28)
		FScalableFloat FrameSkippingOnLOD1; // 0x78(0x28)
		FScalableFloat bRequireHittingPawnThresholdForLOD1; // 0xA0(0x28)
		FScalableFloat FrameSkippingOnLOD2; // 0xC8(0x28)
		FScalableFloat bRequireHittingPawnThresholdForLOD2; // 0xF0(0x28)
		FScalableFloat FrameSkippingOnLowestLOD; // 0x118(0x28)
		FScalableFloat FrameSkippingOnLowestLODWithSmallViewAngleRendered; // 0x140(0x28)
		FScalableFloat FrameSkippingOnLowestLODWithSmallViewAngleNotRendered; // 0x168(0x28)
		FScalableFloat FrameSkippingInvisible; // 0x190(0x28)
		FScalableFloat bForceInvisibleValueWhenNotRenderedForThreshold; // 0x1B8(0x28)
	};


	// Struct FortniteAI.ClientAILODSettings
	// Size: 0x2F0 (0x2F0 - 0x0)
	struct FClientAILODSettings	
	{
	public:
		FScalableFloat ScoreMultiplier; // 0x0(0x28)
		FScalableFloat PreloadingPriorityOverride; // 0x28(0x28)
		FScalableFloat bSupportCharacterMovementOptimization; // 0x50(0x28)
		FClientAILODMovementCompOptimizationConfiguration MovementCompOptimizationConfiguration; // 0x78(0x1E0)
		FScalableFloat bAIPawnOnlyTickMeshWhenRendered; // 0x258(0x28)
		FScalableFloat bAIPawnApplyEffectOptimizations; // 0x280(0x28)
		unsigned char UnknownData00_7[0x48]; // 0x2A8(0x48) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.DroppingAgentData
	// Size: 0x18 (0x18 - 0x0)
	struct FDroppingAgentData	
	{
	public:
		AAthenaAIController* AIController; // 0x0(0x8)
		ABuildingActor* MovementBase; // 0x8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIComponent_AnimationEvaluationContext
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAIComponent_AnimationEvaluationContext	
	{
	public:
		FGameplayTagContainer TagContainer; // 0x0(0x20)
	};


	// Struct FortniteAI.AISpawnCountInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FAISpawnCountInfo	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.NPCCustomEffect
	// Size: 0x58 (0x58 - 0x0)
	struct FNPCCustomEffect	
	{
	public:
		FGameplayTag EffectTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UNiagaraSystem*> VisualEffect; // 0x8(0x20)
		FName VisualEffectSocket; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<USoundBase*> SoundEffect; // 0x30(0x20)
		FName SoundEffectSocket; // 0x50(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.PendingRequestManager
	// Size: 0x30 (0x30 - 0x0)
	struct FPendingRequestManager	
	{
	public:
		unsigned char UnknownData00_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.GoalSelectionQueryInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FGoalSelectionQueryInfo	
	{
	public:
		UEnvQuery* GoalSelectionQuery; // 0x0(0x8)
		FGameplayTagContainer RequiredGameplayTags; // 0x8(0x20)
	};


	// Struct FortniteAI.AICustomTargetConfiguration
	// Size: 0x20 (0x20 - 0x0)
	struct FAICustomTargetConfiguration	
	{
	public:
		FVector Offset; // 0x0(0x18)
		char ValidRequestTypes; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.IntensityContribution
	// Size: 0x48 (0x48 - 0x0)
	struct FIntensityContribution	
	{
	public:
		TEnumAsByte<EFortCombatFactors> CombatFactor; // 0x0(0x1)
		EFortAIDirectorFactor ContributingAIDirectorFactor; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float MaxContribution; // 0x4(0x4)
		bool bModifyContributionByCompletionPercentage; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FCurveTableRowHandle CompletionPercentageInitialMultiplier; // 0x10(0x10)
		FCurveTableRowHandle CompletionPercentageToStartReducingMultiplier; // 0x20(0x10)
		FCurveTableRowHandle CompletionPercentageToStopReducingMultiplier; // 0x30(0x10)
		bool bModifyByNumberOfCriticalEncounterGoals; // 0x40(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.IntensityData
	// Size: 0x30 (0x30 - 0x0)
	struct FIntensityData	
	{
	public:
		TArray<FIntensityContribution> ContributingFactors; // 0x0(0x10)
		float ContributionsTotal; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray<UBuildingEditModeMetadata*> ExceptionEditModes; // 0x18(0x10)
		float ExceptionEditModeWeight; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.UtilityTypeFloatPair
	// Size: 0x8 (0x8 - 0x0)
	struct FUtilityTypeFloatPair	
	{
	public:
		TEnumAsByte<EFortAIUtility> Utility; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Value; // 0x4(0x4)
	};


	// Struct FortniteAI.UtilityContribution
	// Size: 0x8 (0x8 - 0x0)
	struct FUtilityContribution	
	{
	public:
		float MaxContribution; // 0x0(0x4)
		TEnumAsByte<EFortCombatFactors> ContributingFactor; // 0x4(0x1)
		EFortAIDirectorFactor ContributingAIDirectorFactor; // 0x5(0x1)
		TEnumAsByte<EFortFactorContributionType> ContributionType; // 0x6(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.UtilityData
	// Size: 0x40 (0x40 - 0x0)
	struct FUtilityData	
	{
	public:
		TArray<FUtilityContribution> ContributingFactors; // 0x0(0x10)
		float ContributionsTotal; // 0x10(0x4)
		bool bApplyRecentSelectionPenalty; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float RecentlySelectedPenaltyPercentage; // 0x18(0x4)
		float PenaltyFallOffRate; // 0x1C(0x4)
		FString DebugGraphName; // 0x20(0x10)
		FLinearColor DebugGraphColor; // 0x30(0x10)
	};


	// Struct FortniteAI.FortAIEncounterPIDControllerSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAIEncounterPIDControllerSettings	
	{
	public:
		FCurveTableRowHandle ProportionalGain; // 0x0(0x10)
		FCurveTableRowHandle IntegralGain; // 0x10(0x10)
		FCurveTableRowHandle DerivativeGain; // 0x20(0x10)
	};


	// Struct FortniteAI.FortAIEncounterPIDController
	// Size: 0x68 (0x68 - 0x0)
	struct FFortAIEncounterPIDController	
	{
	public:
		float ProportionalGain; // 0x0(0x4)
		float IntegralGain; // 0x4(0x4)
		float DerivativeGain; // 0x8(0x4)
		unsigned char UnknownData00_7[0x5C]; // 0xC(0x5C) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortPlayerPerformanceEstimateSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FFortPlayerPerformanceEstimateSettings	
	{
	public:
		FCurveTableRowHandle PlayerPerformanceEstimateTransformMin; // 0x0(0x10)
		FCurveTableRowHandle PlayerPerformanceEstimateTransformOrigin; // 0x10(0x10)
		FCurveTableRowHandle PlayerPerformanceEstimateTransformMax; // 0x20(0x10)
		float EncounterPlayerPerformanceWeight; // 0x30(0x4)
		float PreviousWavePlayerPerformanceWeight; // 0x34(0x4)
		float CampaignPlayerPerformanceWeight; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortEncounterPawnNumberCaps
	// Size: 0x18 (0x18 - 0x0)
	struct FFortEncounterPawnNumberCaps	
	{
	public:
		bool bApplyPawnNumberCaps; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FCurveTableRowHandle> PawnCapsPerPlayerCount; // 0x8(0x10)
	};


	// Struct FortniteAI.FortAIEncounterSpawnGroupCap
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAIEncounterSpawnGroupCap	
	{
	public:
		FCurveTableRowHandle MinSpawnGroupNumberCap; // 0x0(0x10)
		FCurveTableRowHandle MaxSpawnGroupNumberCap; // 0x10(0x10)
	};


	// Struct FortniteAI.FortAIEncounterSpawnGroupCapsCategory
	// Size: 0x140 (0x140 - 0x0)
	struct FFortAIEncounterSpawnGroupCapsCategory	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		bool bApplyGroupPopulationCurveToCategoryMax; // 0x48(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FCurveTableRowHandle InitialSpawnGroupAvailabilityDelaySeconds; // 0x50(0x10)
		FCurveTableRowHandle SpawnGroupAvailabilityDelaySeconds; // 0x60(0x10)
		FGameplayTagQuery UnlockingTagQuery; // 0x70(0x48)
		TArray<FFortAIEncounterSpawnGroupCap> SpawnGroupCapsPerPlayerCount; // 0xB8(0x10)
		float InitialSpawnGroupAvailabilityTime; // 0xC8(0x4)
		float NumActiveCategorySpawnGroups; // 0xCC(0x4)
		TArray<float> SpawnGroupAvailabilityTimes; // 0xD0(0x10)
		int32_t NumSpawnGroupAvailable; // 0xE0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		UObject* CategorySource; // 0xE8(0x8)
		unsigned char UnknownData02_7[0x50]; // 0xF0(0x50) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIEncounterSpawnGroupCapsProfile
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAIEncounterSpawnGroupCapsProfile	
	{
	public:
		FGameplayTagContainer EncounterTypeTags; // 0x0(0x20)
		TArray<FFortAIEncounterSpawnGroupCapsCategory> PopulationCategories; // 0x20(0x10)
	};


	// Struct FortniteAI.FortAIEncounterSpawnPointsProfile
	// Size: 0x40 (0x40 - 0x0)
	struct FFortAIEncounterSpawnPointsProfile	
	{
	public:
		FGameplayTagContainer EncounterTypeTags; // 0x0(0x20)
		TArray<FCurveTableRowHandle> MaxSpawnPointsPerPlayerCount; // 0x20(0x10)
		TArray<FCurveTableRowHandle> MinSpawnPointsPerPlayerCount; // 0x30(0x10)
	};


	// Struct FortniteAI.FortAIPawnUpgradeProbability
	// Size: 0x58 (0x58 - 0x0)
	struct FFortAIPawnUpgradeProbability	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		FCurveTableRowHandle UpgradeProbability; // 0x48(0x10)
	};


	// Struct FortniteAI.FortAISpawnGroupUpgradeData
	// Size: 0x60 (0x60 - 0x0)
	struct FFortAISpawnGroupUpgradeData	
	{
	public:
		UClass* SpawnGroupUpgrade; // 0x0(0x8)
		UClass* UpgradeProbabilities; // 0x8(0x8)
		UClass* SpawnGroupCapsCategories; // 0x10(0x8)
		FGameplayTagQuery EncounterTagRequirementsQuery; // 0x18(0x48)
	};


	// Struct FortniteAI.FortAIEncounterPawnDifficultyLevelModifier
	// Size: 0x58 (0x58 - 0x0)
	struct FFortAIEncounterPawnDifficultyLevelModifier	
	{
	public:
		FGameplayTagQuery EncounterTagRequirementsQuery; // 0x0(0x48)
		FCurveTableRowHandle DifficultyLevelModifierCurve; // 0x48(0x10)
	};


	// Struct FortniteAI.FortPendingStoppedEncounterData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortPendingStoppedEncounterData	
	{
	public:
		UFortAIEncounterInfo* Encounter; // 0x0(0x8)
		EFortObjectiveStatus ObjectiveStatus; // 0x8(0x1)
		bool bForceDestroyAI; // 0x9(0x1)
		bool bEncounterCompletedSuccessfully; // 0xA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortEncounterGroupLimitData
	// Size: 0xC (0xC - 0x0)
	struct FFortEncounterGroupLimitData	
	{
	public:
		int32_t DesiredPawnNumCap; // 0x0(0x4)
		int32_t RemainingDesiredLimit; // 0x4(0x4)
		int32_t CurrentEncounterLimit; // 0x8(0x4)
	};


	// Struct FortniteAI.FortAIEncounterRequirements
	// Size: 0x50 (0x50 - 0x0)
	struct FFortAIEncounterRequirements	
	{
	public:
		TEnumAsByte<EFortMissionType> AssociatedMissionType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery TagQuery; // 0x8(0x48)
	};


	// Struct FortniteAI.FortAIBaseLootDropRow
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FFortAIBaseLootDropRow : public FTableRowBase	
	{
	public:
		int32_t Priority; // 0x8(0x4)
		float ItemDropChance; // 0xC(0x4)
		FName WorldItemLootTierGroup; // 0x10(0x4)
		FName WorldItemInstancedLootTierGroup; // 0x14(0x4)
		FName AccountItemLootTierGroup; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer AITagsContainer; // 0x20(0x20)
	};


	// Struct FortniteAI.FortAILootDropModifierRow
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FFortAILootDropModifierRow : public FTableRowBase	
	{
	public:
		int32_t Priority; // 0x8(0x4)
		float ItemDropChanceMultiplier; // 0xC(0x4)
		FName WorldItemLootTierGroup; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer AITagsContainer; // 0x18(0x20)
	};


	// Struct FortniteAI.FortAILootDropModifiers
	// Size: 0x60 (0x60 - 0x0)
	struct FFortAILootDropModifiers	
	{
	public:
		FFortAIEncounterRequirements Requirements; // 0x0(0x50)
		TArray<FDataTableRowHandle> LootDropModifierRows; // 0x50(0x10)
	};


	// Struct FortniteAI.LODAIUpdateInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FLODAIUpdateInfo	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIEncounterQueryData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAIEncounterQueryData	
	{
	public:
		TArray<FVector> QueryLocations; // 0x0(0x10)
		TArray<AActor*> QueryActors; // 0x10(0x10)
	};


	// Struct FortniteAI.PlayerLODViewConeConfig
	// Size: 0x80 (0x80 - 0x0)
	struct FPlayerLODViewConeConfig	
	{
	public:
		FScalableFloat ObserverVisionAngleDeg; // 0x0(0x28)
		FScalableFloat ViewConeMaxRadius; // 0x28(0x28)
		FScalableFloat AlwaysVisibleRadius; // 0x50(0x28)
		EFortAILODLevel FortAILODLevel; // 0x78(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.PlayerLODViewConeHysteresisConfig
	// Size: 0x50 (0x50 - 0x0)
	struct FPlayerLODViewConeHysteresisConfig	
	{
	public:
		FScalableFloat AdditionalObserverVisionAngleDeg; // 0x0(0x28)
		FScalableFloat AdditionalRadius; // 0x28(0x28)
	};


	// Struct FortniteAI.FortAIDirectorPerLODConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAIDirectorPerLODConfig	
	{
	public:
		FScalableFloat MaxNPCCosts; // 0x0(0x28)
		EFortAILODLevel FortAILODLevel; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AIDirectorEventData
	// Size: 0x30 (0x30 - 0x0)
	struct FAIDirectorEventData	
	{
	public:
		EFortAIDirectorEvent Event; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FCurveTableRowHandle DataMax; // 0x8(0x10)
		FCurveTableRowHandle CoolDownRate; // 0x18(0x10)
		EFortAIDirectorEventContribution ContributionType; // 0x28(0x1)
		EFortAIDirectorEventParticipant OwnerParticipantType; // 0x29(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIDirectorFactorContribution
	// Size: 0xC (0xC - 0x0)
	struct FFortAIDirectorFactorContribution	
	{
	public:
		EFortAIDirectorEvent AIDirectorEvent; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MaxContribution; // 0x4(0x4)
		TEnumAsByte<EFortAIDirectorFactorContribution> ContributionType; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIDirectorFactorData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAIDirectorFactorData	
	{
	public:
		EFortAIDirectorFactor AIDirectorFactor; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FFortAIDirectorFactorContribution> ContributingEvents; // 0x8(0x10)
		float MaxValue; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.SpawnGroupProgression
	// Size: 0x8 (0x8 - 0x0)
	struct FSpawnGroupProgression	
	{
	public:
		UFortAISpawnGroup* SpawnGroup; // 0x0(0x8)
	};


	// Struct FortniteAI.AIEncounterSpawnGroupWeights
	// Size: 0x18 (0x18 - 0x0)
	struct FAIEncounterSpawnGroupWeights	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortSpawnPointsPercentageCurve
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortSpawnPointsPercentageCurve : public FTableRowBase	
	{
	public:
		UCurveTable* SpawnPointsPercentageCurveTable; // 0x8(0x8)
		FName SpawnPointsPercentageCurveTableRow; // 0x10(0x4)
		float MaxRampTime; // 0x14(0x4)
	};


	// Struct FortniteAI.FortIntensityCurve
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FFortIntensityCurve : public FTableRowBase	
	{
	public:
		UCurveTable* IntensityCurveTable; // 0x8(0x8)
		FName IntensityCurveTableRow; // 0x10(0x4)
		float LowPlayerPerformancePeakIntensityThreshold; // 0x14(0x4)
		float NormalPlayerPerformancePeakIntensityThreshold; // 0x18(0x4)
		float HighPlayerPerformancePeakIntensityThreshold; // 0x1C(0x4)
		float MaxRampTime; // 0x20(0x4)
		float FadeEndIntensityThreshold; // 0x24(0x4)
		float StartIntensityOffsetFloor; // 0x28(0x4)
		float EndIntensityOffsetFloor; // 0x2C(0x4)
		float StartIntensityOffsetCeiling; // 0x30(0x4)
		float EndIntensityOffsetCeiling; // 0x34(0x4)
	};


	// Struct FortniteAI.CurrentIntensityAnalyticsBucket
	// Size: 0x38 (0x38 - 0x0)
	struct FCurrentIntensityAnalyticsBucket	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortCurveSequenceInstanceInfo
	// Size: 0x4 (0x4 - 0x0)
	struct FFortCurveSequenceInstanceInfo	
	{
	public:
		unsigned char UnknownData00_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortSpawnPointsPercentageCurveSequenceInstanceInfo
	// Inherited from FFortCurveSequenceInstanceInfo
	// Size: 0xC (0x10 - 0x4)
	struct FFortSpawnPointsPercentageCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFortSpawnPointsPercentageCurveSequence* SpawnPointsPercentageCurveSequence; // 0x8(0x8)
	};


	// Struct FortniteAI.FortIntensityCurveSequenceInstanceInfo
	// Inherited from FFortCurveSequenceInstanceInfo
	// Size: 0xC (0x10 - 0x4)
	struct FFortIntensityCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFortIntensityCurveSequence* IntensityCurveSequence; // 0x8(0x8)
	};


	// Struct FortniteAI.SpawnGroupInstanceInfo
	// Size: 0xF8 (0xF8 - 0x0)
	struct FSpawnGroupInstanceInfo	
	{
	public:
		UFortAISpawnGroup* SpawnGroup; // 0x0(0x8)
		int32_t NumActiveAlive; // 0x8(0x4)
		int32_t TotalGroupCost; // 0xC(0x4)
		int32_t SpawnPointsUsed; // 0x10(0x4)
		int32_t NumEngaged; // 0x14(0x4)
		bool bReadyToSpawn; // 0x18(0x1)
		bool bFinishedSpawning; // 0x19(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		FGuid GroupGuid; // 0x1C(0x10)
		int32_t EnemySpawnDataIndex; // 0x2C(0x4)
		float TimeSelected; // 0x30(0x4)
		int32_t NextEnemyToSpawnIndex; // 0x34(0x4)
		FGameplayTagContainer UpgradeTags; // 0x38(0x20)
		FFortAISpawnGroupUpgradeUIData UpgradeUIData; // 0x58(0x60)
		TArray<FFortAIPawnUpgradeData> PawnUpgrades; // 0xB8(0x10)
		TArray<UFortGameplayModifierItemDefinition*> ModifiersForAllPawns; // 0xC8(0x10)
		TArray<AFortAIPawn*> PawnList; // 0xD8(0x10)
		TArray<AFortAIPawn*> LifespanExpiredList; // 0xE8(0x10)
	};


	// Struct FortniteAI.FortAIPawnUpgradeData
	// Size: 0x48 (0x48 - 0x0)
	struct FFortAIPawnUpgradeData	
	{
	public:
		FCurveTableRowHandle SpawnPointsMultiplierCurve; // 0x0(0x10)
		FCurveTableRowHandle LifespanMultiplierCurve; // 0x10(0x10)
		FCurveTableRowHandle ScoreMultiplierCurve; // 0x20(0x10)
		UFortGameplayModifierItemDefinition* ModifierDefinition; // 0x30(0x8)
		TArray<UFortGameplayModifierItemDefinition*> AdditionalModifiers; // 0x38(0x10)
	};


	// Struct FortniteAI.FortSpawnAIRequest
	// Size: 0x68 (0x68 - 0x0)
	struct FFortSpawnAIRequest	
	{
	public:
		FGuid SpawnGroupInstanceGuid; // 0x0(0x10)
		int32_t EnemyIndex; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FVector SpawnLocation; // 0x18(0x18)
		FRotator SpawnRotation; // 0x30(0x18)
		AActor* SpawnPoint; // 0x48(0x8)
		TArray<UFortAbilitySet*> AbilitySetsToGrantOnSpawn; // 0x50(0x10)
		bool bIgnoreCollisionWhenSpawning; // 0x60(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		float SpawnDelay; // 0x64(0x4)
	};


	// Struct FortniteAI.FortAISpawnerData
	// Size: 0x78 (0x78 - 0x0)
	struct FFortAISpawnerData	
	{
	public:
		FGuid SpawnGroupInstanceGuid; // 0x0(0x10)
		FFortSpawnAIRequest ReservedSpawnRequest; // 0x10(0x68)
	};


	// Struct FortniteAI.FortEncounterAIDirectorFactor
	// Size: 0xC (0xC - 0x0)
	struct FFortEncounterAIDirectorFactor	
	{
	public:
		float CurrentValue; // 0x0(0x4)
		float AccumulatedPeriodValue; // 0x4(0x4)
		float TotalPeriodTime; // 0x8(0x4)
	};


	// Struct FortniteAI.EncounterEnvironmentQueryInstance
	// Size: 0x58 (0x58 - 0x0)
	struct FEncounterEnvironmentQueryInstance	
	{
	public:
		FEncounterEnvironmentQueryInfo EnvironmentQueryInfo; // 0x0(0x28)
		int32_t QueryID; // 0x28(0x4)
		bool bIsWaitingForQueryResults; // 0x2C(0x1)
		TEnumAsByte<EFortEncounterDirection> ChosenDirection; // 0x2D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
		TArray<FVector> QueryLocations; // 0x30(0x10)
		TArray<TWeakObjectPtr> FoundRifts; // 0x40(0x10)
		int32_t NumTimesUsed; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIEncounterWaveProgressEstimation
	// Size: 0x1C (0x1C - 0x0)
	struct FFortAIEncounterWaveProgressEstimation	
	{
	public:
		float SectionProgressEstimate; // 0x0(0x4)
		float SectionStartTime; // 0x4(0x4)
		float LastWaveProgressUpdateTime; // 0x8(0x4)
		float PeakAndFadeWavePercentage; // 0xC(0x4)
		float MaxAdjustmentPerSecond; // 0x10(0x4)
		TEnumAsByte<EFortAIWaveProgressSection> CurrentSection; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		int32_t NumberOfWaveSegments; // 0x18(0x4)
	};


	// Struct FortniteAI.FortGoalActorEncounterDataManagerPair
	// Size: 0x10 (0x10 - 0x0)
	struct FFortGoalActorEncounterDataManagerPair	
	{
	public:
		AActor* GoalActor; // 0x0(0x8)
		AFortAIDirectorDataManager* EncounterDataManager; // 0x8(0x8)
	};


	// Struct FortniteAI.FortAIEncounterRift
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAIEncounterRift	
	{
	public:
		int32_t QueryID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector RiftLocation; // 0x8(0x18)
		ABuildingRift* RiftActor; // 0x20(0x8)
		FFortRiftReservationHandle RiftReservationHandle; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIEncounterSpawnArea
	// Size: 0x58 (0x58 - 0x0)
	struct FFortAIEncounterSpawnArea	
	{
	public:
		TArray<FEncounterEnvironmentQueryInstance> QueryInstances; // 0x0(0x10)
		TArray<FFortAIEncounterRift> PendingRifts; // 0x10(0x10)
		TArray<FFortAIEncounterRift> Rifts; // 0x20(0x10)
		TArray<FVector> UsedRiftLocations; // 0x30(0x10)
		TArray<UFortPathCostEstimator*> PathEstimators; // 0x40(0x10)
		bool bIsActive; // 0x50(0x1)
		bool bUsingFallbackQuery; // 0x51(0x1)
		EFortEncounterSpawnLocationManagementMode SpawnLocationManagementMode; // 0x52(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x53(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIEncounterRiftManagerInitializationData
	// Size: 0x130 (0x130 - 0x0)
	struct FFortAIEncounterRiftManagerInitializationData	
	{
	public:
		UFortAIEncounterInfo* EncounterInfo; // 0x0(0x8)
		FFortEncounterSettings EncounterSettings; // 0x8(0xC0)
		FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0xC8(0x28)
		FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0xF0(0x28)
		UClass* RiftClassTemplate; // 0x118(0x8)
		int32_t NumRiftsToUse; // 0x120(0x4)
		int32_t MinRiftsToUse; // 0x124(0x4)
		float UpdateIntervalTimeSeconds; // 0x128(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIEncounterQueryDirectionTracker
	// Size: 0x48 (0x48 - 0x0)
	struct FFortAIEncounterQueryDirectionTracker	
	{
	public:
		bool bHasTriedPreviousDirections; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<TEnumAsByte> PreviousQueryDirections; // 0x8(0x10)
		TArray<TEnumAsByte> ChosenDirections; // 0x18(0x10)
		TArray<TEnumAsByte> FailedDirections; // 0x28(0x10)
		TArray<TEnumAsByte> AvailableDirections; // 0x38(0x10)
	};


	// Struct FortniteAI.AIDiscouragedGoalTimer
	// Size: 0x38 (0x38 - 0x0)
	struct FAIDiscouragedGoalTimer	
	{
	public:
		FFortAIGoalInfo DiscouragedGoalInfo; // 0x0(0x28)
		double ExpirationTime; // 0x28(0x8)
		uint32_t NumberOfTimesMarkedForDiscouragement; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIGoalInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAIGoalInfo	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x0(0x8)
		FVector Location; // 0x8(0x18)
		bool bActorAlwaysPerceived; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AIAssignmentInfo
	// Size: 0xF8 (0xF8 - 0x0)
	struct FAIAssignmentInfo	
	{
	public:
		TWeakObjectPtr<UFortAIAssignment*> CurrentAssignment; // 0x0(0x8)
		FFortAIGoalInfo CurrentGoal; // 0x8(0x28)
		float TimeCurrentGoalWasChosen; // 0x30(0x4)
		float TimeExitedLastAssignmentOfType; // 0x34(0x10)
		TWeakObjectPtr<UFortAIAssignment*> PreviousAssignment; // 0x44(0x8)
		unsigned char UnknownData00_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FFortAIGoalInfo PreviousGoal; // 0x50(0x28)
		bool bWaitingForQueryResponse; // 0x78(0x1)
		bool bSuppressGoalUpdates; // 0x79(0x1)
		bool bReportEnemyGoalSelection; // 0x7A(0x1)
		unsigned char UnknownData01_7[0x7D]; // 0x7B(0x7D) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIPawnMaterialDefinition
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAIPawnMaterialDefinition	
	{
	public:
		TWeakObjectPtr<UMaterialInterface*> Material; // 0x0(0x20)
		bool bRequireDynamicInstance; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIPawnVariantDefinition
	// Size: 0x68 (0x68 - 0x0)
	struct FFortAIPawnVariantDefinition	
	{
	public:
		UClass* PawnClass; // 0x0(0x8)
		FCurveTableRowHandle VariantWeightCurve; // 0x8(0x10)
		float CurrentWeight; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery RequiredTagsQuery; // 0x20(0x48)
	};


	// Struct FortniteAI.FortVariantSpawnPoints
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FFortVariantSpawnPoints : public FTableRowBase	
	{
	public:
		int32_t BudgetPoints; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.SpawnGroupEnemy
	// Size: 0x10 (0x10 - 0x0)
	struct FSpawnGroupEnemy	
	{
	public:
		UClass* EnemyVariantClass; // 0x0(0x8)
		bool bOverrideVariantSpawnPointValue; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t SpawnValue; // 0xC(0x4)
	};


	// Struct FortniteAI.FortSpawnGroupEncounterTypeData
	// Size: 0x40 (0x40 - 0x0)
	struct FFortSpawnGroupEncounterTypeData	
	{
	public:
		FGameplayTagContainer EncounterTypeTags; // 0x0(0x20)
		FCurveTableRowHandle MaxGroupCategoryPopulationDensityCurve; // 0x20(0x10)
		FCurveTableRowHandle RespawnDelayCurve; // 0x30(0x10)
	};


	// Struct FortniteAI.FortAIPawnUpgrade
	// Size: 0x58 (0x58 - 0x0)
	struct FFortAIPawnUpgrade	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		TArray<FFortAIPawnUpgradeData> PawnUpgradeDataPerPlayerCount; // 0x48(0x10)
	};


	// Struct FortniteAI.FortAIAssignmentIdentifier
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAIAssignmentIdentifier	
	{
	public:
		EAssignmentType AssignmentType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer AssignmentGameplayTags; // 0x8(0x20)
		TEnumAsByte<EFortTeam> AssignmentTeam; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.BuildingActorNavArea
	// Size: 0x4 (0x4 - 0x0)
	struct FBuildingActorNavArea	
	{
	public:
		int32_t AreaBits; // 0x0(0x4)
	};


	// Struct FortniteAI.FortNavLinkPattern
	// Size: 0x8 (0x8 - 0x0)
	struct FFortNavLinkPattern	
	{
	public:
		int32_t PatternBits; // 0x0(0x4)
		int32_t WildcardBits; // 0x4(0x4)
	};


	// Struct FortniteAI.AIHotSpotUseInfo
	// Inherited from FAIHotSpotSlotInfo
	// Size: 0x8 (0x18 - 0x10)
	struct FAIHotSpotUseInfo : public FAIHotSpotSlotInfo	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.DistanceToTargetComparison
	// Size: 0x38 (0x38 - 0x0)
	struct FDistanceToTargetComparison	
	{
	public:
		bool bUseOverriddenValue; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float OverriddenValue; // 0x4(0x4)
		FGameplayTagContainer DistanceDataTags; // 0x8(0x20)
		bool bUseAddedOffset; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float AddedOffset; // 0x2C(0x4)
		TEnumAsByte<EArithmeticKeyOperation> Operator; // 0x30(0x1)
		TEnumAsByte<ETargetDistanceComparisonType> ComparisonType; // 0x31(0x1)
		unsigned char UnknownData02_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AIScalableFloat
	// Size: 0x38 (0x38 - 0x0)
	struct FAIScalableFloat	
	{
	public:
		FScalableFloat ScalableFloat; // 0x0(0x28)
		EAIScalableFloatScalingType ScalingType; // 0x28(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x2C(0xC) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBotInventoryInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FFortBotInventoryInfo	
	{
	public:
		UItemDefinitionBase* ItemDefinition; // 0x0(0x8)
		UFortWorldItem* FortItem; // 0x8(0x8)
		unsigned char UnknownData00_6[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
		UFortWorldItemDefinition* WeaponDefinitionCache; // 0x30(0x8)
		UFortWorldMultiItemDefinition* MultiItemDefinitionCache; // 0x38(0x8)
		unsigned char UnknownData01_6[0x20]; // 0x40(0x20) UNKNOWN PROPERTY
		AFortAthenaAIBotController* BotController; // 0x60(0x8)
	};


	// Struct FortniteAI.FortAthenaAIBotNameDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FFortAthenaAIBotNameDataTableRow : public FTableRowBase	
	{
	public:
		FString Name; // 0x8(0x10)
		FString UniqueID; // 0x18(0x10)
	};


	// Struct FortniteAI.FortAthenaAIBotNameRegionData
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAthenaAIBotNameRegionData	
	{
	public:
		FString RegionId; // 0x0(0x10)
		TWeakObjectPtr<UDataTable*> NameDataTable; // 0x10(0x20)
	};


	// Struct FortniteAI.FortInstensityCurveSequenceProgression
	// Size: 0x18 (0x18 - 0x0)
	struct FFortInstensityCurveSequenceProgression	
	{
	public:
		UFortIntensityCurveSequence* CurveSequence; // 0x0(0x8)
		FCurveTableRowHandle SelectionWeight; // 0x8(0x10)
	};


	// Struct FortniteAI.MetaNavCachedEntry
	// Size: 0x1E8 (0x1E8 - 0x0)
	struct FMetaNavCachedEntry	
	{
	public:
		unsigned char UnknownData00_2[0x1E8]; // 0x0(0x1E8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.ThreatGridIndex
	// Size: 0x8 (0x8 - 0x0)
	struct FThreatGridIndex	
	{
	public:
		int32_t X; // 0x0(0x4)
		int32_t Y; // 0x4(0x4)
	};


	// Struct FortniteAI.ThreatLocationInfo
	// Inherited from FFastArraySerializerItem
	// Size: 0x7C (0x88 - 0xC)
	struct FThreatLocationInfo : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector CloudLocation; // 0x10(0x18)
		FBox ThreatVolume; // 0x28(0x38)
		AFortThreatVisualsManager* ThreatVisualsManager; // 0x60(0x8)
		TWeakObjectPtr<AThreatCloud*> CloudActor; // 0x68(0x8)
		unsigned char UnknownData01_6[0x1]; // 0x70(0x1) UNKNOWN PROPERTY
		bool bThreatActivated; // 0x71(0x1)
		EFortThreatDeactivationType DeactivationType; // 0x72(0x1)
		unsigned char UnknownData02_7[0x15]; // 0x73(0x15) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.ThreatLocationArray
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FThreatLocationArray : public FFastArraySerializer	
	{
	public:
		TArray<FThreatLocationInfo> Locations; // 0x108(0x10)
	};


	// Struct FortniteAI.StormWind
	// Inherited from FFastArraySerializerItem
	// Size: 0x5C (0x68 - 0xC)
	struct FStormWind : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x10(0x18)
		FVector Direction; // 0x28(0x18)
		float Radius; // 0x40(0x4)
		float Magnitude; // 0x44(0x4)
		AFortThreatVisualsManager* ThreatVisualsManager; // 0x48(0x8)
		TArray<UFortAIEncounterInfo*> Encounters; // 0x50(0x10)
		FFortWindImpulseHandle WindHandle; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.StormWindArray
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FStormWindArray : public FFastArraySerializer	
	{
	public:
		TArray<FStormWind> StormWinds; // 0x108(0x10)
	};


	// Struct FortniteAI.GoalUpdateSuppressionHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FGoalUpdateSuppressionHandle	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIGoal
	// Inherited from FFortAIGoalInfo
	// Size: 0x10 (0x38 - 0x28)
	struct FFortAIGoal : public FFortAIGoalInfo	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.GoalSelectionCriteria
	// Size: 0x20 (0x20 - 0x0)
	struct FGoalSelectionCriteria	
	{
	public:
		TWeakObjectPtr<UEnvQuery*> GoalSelectionQuery; // 0x0(0x20)
	};


	// Struct FortniteAI.EncounterGoalSelectionTableEntry
	// Size: 0x40 (0x40 - 0x0)
	struct FEncounterGoalSelectionTableEntry	
	{
	public:
		FGameplayTagContainer RequiredGameplayTags; // 0x0(0x20)
		FGoalSelectionCriteria GoalSelectionCriteria; // 0x20(0x20)
	};


	// Struct FortniteAI.PawnGoalSelectionCriteria
	// Size: 0x50 (0x50 - 0x0)
	struct FPawnGoalSelectionCriteria	
	{
	public:
		FGameplayTagContainer IncludeEnemiesWithTags; // 0x0(0x20)
		FGameplayTagContainer ExcludeEnemiesWithTags; // 0x20(0x20)
		TArray<FGoalSelectionCriteria> GoalSelectionCriteria; // 0x40(0x10)
	};


	// Struct FortniteAI.PawnGoalSelectionTableEntry
	// Size: 0x70 (0x70 - 0x0)
	struct FPawnGoalSelectionTableEntry	
	{
	public:
		FGameplayTagContainer RequiredGameplayTags; // 0x0(0x20)
		FPawnGoalSelectionCriteria PawnGoalSelectionCriteria; // 0x20(0x50)
	};


	// Struct FortniteAI.AIHotSpotSlotConfig
	// Size: 0x38 (0x38 - 0x0)
	struct FAIHotSpotSlotConfig	
	{
	public:
		FVector Offset; // 0x0(0x18)
		FVector Direction; // 0x18(0x18)
		EFortHotSpotSlot SlotType; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.BuildingActorHotSpotDirection
	// Size: 0x28 (0x28 - 0x0)
	struct FBuildingActorHotSpotDirection	
	{
	public:
		UAIHotSpotConfig* HotSpotConfig; // 0x0(0x8)
		FVector Offset; // 0x8(0x18)
		bool bMirrorX : 1; // 0x20:0(0x1)
		bool bMirrorY : 1; // 0x20:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		EFortHotSpotDirection Direction; // 0x24(0x1)
		EHotspotTypeConfigMode TypeConfigUsage; // 0x25(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AutoAcquireSlot
	// Inherited from FAIHotSpotSlotInfo
	// Size: 0x18 (0x28 - 0x10)
	struct FAutoAcquireSlot : public FAIHotSpotSlotInfo	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.NavAgentData
	// Size: 0x28 (0x28 - 0x0)
	struct FNavAgentData	
	{
	public:
		FName AgentName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FCurveTableRowHandle BuildingActorHealthToNavAreaStrengthHandle; // 0x8(0x10)
		FCurveTableRowHandle PlayerBuiltBuildingActorHealthToNavAreaStrengthHandle; // 0x18(0x10)
	};


	// Struct FortniteAI.UpdatedNavMeshTiles
	// Size: 0x18 (0x18 - 0x0)
	struct FUpdatedNavMeshTiles	
	{
	public:
		AAthenaNavMesh* NavMesh; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.NavMeshDetectedInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FNavMeshDetectedInfo	
	{
	public:
		AAthenaNavMesh* NavMesh; // 0x0(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x8(0x28) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.BoxNavInvoker
	// Size: 0x20 (0x20 - 0x0)
	struct FBoxNavInvoker	
	{
	public:
		AAthenaNavInvokerBox* Invoker; // 0x0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.NavDataSetVariantSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FNavDataSetVariantSettings	
	{
	public:
		TWeakObjectPtr<UWorld*> Level; // 0x0(0x20)
		uint32_t OceanFloodLevel; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.OverriddenSupportedAgentsByReleaseVersion
	// Size: 0xC (0xC - 0x0)
	struct FOverriddenSupportedAgentsByReleaseVersion	
	{
	public:
		FFortReleaseVersion StartVersion; // 0x0(0x4)
		FFortReleaseVersion EndVersion; // 0x4(0x4)
		FNavAgentSelector OverriddenSupportedAgentsMask; // 0x8(0x4)
	};


	// Struct FortniteAI.PathRendererDetails
	// Size: 0x18 (0x18 - 0x0)
	struct FPathRendererDetails	
	{
	public:
		TArray<FVector> PathPoints; // 0x0(0x10)
		ENavPathRendererStatus PathStatus; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.PathRendererInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FPathRendererInfo	
	{
	public:
		TScriptInterface<Class> PathRendererInterface; // 0x0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.ClimbLinkData
	// Size: 0x30 (0x30 - 0x0)
	struct FClimbLinkData	
	{
	public:
		unsigned char UnknownData00_7[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
		uint32_t UniqueLinkId; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.WeightedAIPerk
	// Size: 0x30 (0x30 - 0x0)
	struct FWeightedAIPerk	
	{
	public:
		UClass* PerkClass; // 0x0(0x8)
		FScalableFloat RandomWeight; // 0x8(0x28)
	};


	// Struct FortniteAI.PerkAvailabilityContainer
	// Size: 0x18 (0x18 - 0x0)
	struct FPerkAvailabilityContainer	
	{
	public:
		TArray<FWeightedAIPerk> AvailablePerks; // 0x0(0x10)
		int32_t DesiredPerkCount; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIRuntimePerkInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FFortAIRuntimePerkInfo	
	{
	public:
		unsigned char UnknownData00_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIStateTreeReference
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAIStateTreeReference	
	{
	public:
		FStateTreeReference StateTreeRef; // 0x0(0x28)
	};


	// Struct FortniteAI.FortAIInjectedActionStateTreeReference
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAIInjectedActionStateTreeReference	
	{
	public:
		FStateTreeReference StateTreeRef; // 0x0(0x28)
	};


	// Struct FortniteAI.FortAIInjectedDecisionStateTreeReference
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAIInjectedDecisionStateTreeReference	
	{
	public:
		FStateTreeReference StateTreeRef; // 0x0(0x28)
	};


	// Struct FortniteAI.FortMoveConfig
	// Size: 0x38 (0x38 - 0x0)
	struct FFortMoveConfig	
	{
	public:
		unsigned char UnknownData00_7[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
		AActor* FocusTarget; // 0x28(0x8)
		UClass* PushPawnClassOnBump; // 0x30(0x8)
	};


	// Struct FortniteAI.OwnedTokenData
	// Size: 0x18 (0x18 - 0x0)
	struct FOwnedTokenData	
	{
	public:
		FGameplayTag TokenTag; // 0x0(0x4)
		FTokenHandle TokenHandle; // 0x4(0x8)
		ETokenState TokenState; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortAICombatTokenProviderComponent*> TokenProvider; // 0x10(0x8)
	};


	// Struct FortniteAI.TokenHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FTokenHandle	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.TokenReservationData
	// Size: 0x18 (0x18 - 0x0)
	struct FTokenReservationData	
	{
	public:
		ETokenState TokenState; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FTokenHandle TokenHandle; // 0x4(0x8)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UFortAICombatTokenConsumerComponent* TokenConsumer; // 0x10(0x8)
	};


	// Struct FortniteAI.TokenType
	// Size: 0x48 (0x48 - 0x0)
	struct FTokenType	
	{
	public:
		FGameplayTag TokenIdentificationTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FScalableFloat NumberOfTokens; // 0x8(0x28)
		float CurrentNumberOfTokens; // 0x30(0x4)
		bool bAmountModified; // 0x34(0x1)
		bool bAssignTokensBasedOnProximity; // 0x35(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		TArray<FTokenReservationData> TokenReservations; // 0x38(0x10)
	};


	// Struct FortniteAI.TokenProviderPositioningData
	// Size: 0x178 (0x178 - 0x0)
	struct FTokenProviderPositioningData	
	{
	public:
		FGameplayTagContainer TagContainer; // 0x0(0x20)
		UEnvQuery* QueryTemplate; // 0x20(0x8)
		FScalableFloat QueryUpdateFrequency; // 0x28(0x28)
		FScalableFloat DistanceForResultsInvalidation; // 0x50(0x28)
		FScalableFloat OrientationAngleForResultsInvalidation; // 0x78(0x28)
		FScalableFloat MinimumDistanceBetweenPositions; // 0xA0(0x28)
		bool bOwnerRelativePositions; // 0xC8(0x1)
		bool bOwnerVelocityOffset; // 0xC9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xCA(0x6) UNKNOWN PROPERTY
		FScalableFloat OffsetMaxLength; // 0xD0(0x28)
		FTimerHandle RunQueryHandle; // 0xF8(0x8)
		FVector LastQueryLocation; // 0x100(0x18)
		FVector LastQueryOrientation; // 0x118(0x18)
		AActor* Owner; // 0x130(0x8)
		float LastQueryTimestamp; // 0x138(0x4)
		int32_t PositionRequesters; // 0x13C(0x4)
		unsigned char UnknownData01_7[0x38]; // 0x140(0x38) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAthenaAIBotBuildingQueue
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAthenaAIBotBuildingQueue	
	{
	public:
		unsigned char UnknownData00_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AIEnergyOverTimeData
	// Size: 0x8 (0x8 - 0x0)
	struct FAIEnergyOverTimeData	
	{
	public:
		FGameplayTag EnergyOverTimeIdentifier; // 0x0(0x4)
		float EnergyPerSecond; // 0x4(0x4)
	};


	// Struct FortniteAI.FortAthenaAIFormationSlotRuntime
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAthenaAIFormationSlotRuntime	
	{
	public:
		FVector LocalLocation; // 0x0(0x18)
		AFortPawn* UserPawn; // 0x18(0x8)
	};


	// Struct FortniteAI.FortPingInfo
	// Size: 0x108 (0x108 - 0x0)
	struct FFortPingInfo	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FFortWorldMarkerData MarkerData; // 0x8(0xE8)
		unsigned char UnknownData01_7[0x18]; // 0xF0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.DigestedAimingCircleSettings
	// Size: 0x168 (0x168 - 0x0)
	struct FDigestedAimingCircleSettings	
	{
	public:
		bool bUseAimingCircle; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float CircleCenterOffsetZ; // 0x4(0x4)
		FScalableFloat MinCircleOpeningAngleVerticalCurve; // 0x8(0x28)
		FScalableFloat MaxCircleOpeningAngleVerticalCurve; // 0x30(0x28)
		FScalableFloat MinCircleOpeningAngleHorizontalCurve; // 0x58(0x28)
		FScalableFloat MaxCircleOpeningAngleHorizontalCurve; // 0x80(0x28)
		float MinCursorRotationSpeed; // 0xA8(0x4)
		float MaxCursorRotationSpeed; // 0xAC(0x4)
		float MinCursorUpdateInterval; // 0xB0(0x4)
		float MaxCursorUpdateInterval; // 0xB4(0x4)
		float MinCursorTrackingFrequency; // 0xB8(0x4)
		float MaxCursorTrackingFrequency; // 0xBC(0x4)
		FScalableFloat CircleShrinkCurve; // 0xC0(0x28)
		float MinDistanceForTimeBetweenHits; // 0xE8(0x4)
		float MaxDistanceForTimeBetweenHits; // 0xEC(0x4)
		float MinTimeBetweenHitsAtMinRange; // 0xF0(0x4)
		float MaxTimeBetweenHitsAtMinRange; // 0xF4(0x4)
		float MinTimeBetweenHitsAtMaxRange; // 0xF8(0x4)
		float MaxTimeBetweenHitsAtMaxRange; // 0xFC(0x4)
		float IncreasedAccuracyRatioAgainstDBNO; // 0x100(0x4)
		bool bUseLastTimeToHitOnWeaponChange; // 0x104(0x1)
		bool bForceMissEnabled; // 0x105(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x106(0x2) UNKNOWN PROPERTY
		float ExtraClampingDistance; // 0x108(0x4)
		bool bPreventHeadshots; // 0x10C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x10D(0x3) UNKNOWN PROPERTY
		FScalableFloat WeaponSpreadContributionToClampCurve; // 0x110(0x28)
		float KillingBlowGracePeriodAtMinRange; // 0x138(0x4)
		float KillingBlowGracePeriodAtMaxRange; // 0x13C(0x4)
		FScalableFloat ExtraHitOddsCurve; // 0x140(0x28)
	};


	// Struct FortniteAI.AimingCircleSettings
	// Size: 0x460 (0x460 - 0x0)
	struct FAimingCircleSettings	
	{
	public:
		FScalableFloat UseAimingCircle; // 0x0(0x28)
		FScalableFloat CircleCenterOffsetZ; // 0x28(0x28)
		FScalableFloat MinCircleOpeningAngleVerticalCurve; // 0x50(0x28)
		FScalableFloat MaxCircleOpeningAngleVerticalCurve; // 0x78(0x28)
		FScalableFloat MinCircleOpeningAngleHorizontalCurve; // 0xA0(0x28)
		FScalableFloat MaxCircleOpeningAngleHorizontalCurve; // 0xC8(0x28)
		FScalableFloat MinCursorRotationSpeed; // 0xF0(0x28)
		FScalableFloat MaxCursorRotationSpeed; // 0x118(0x28)
		FScalableFloat MinCursorUpdateInterval; // 0x140(0x28)
		FScalableFloat MaxCursorUpdateInterval; // 0x168(0x28)
		FScalableFloat MinCursorTrackingFrequency; // 0x190(0x28)
		FScalableFloat MaxCursorTrackingFrequency; // 0x1B8(0x28)
		FScalableFloat CircleShrinkCurve; // 0x1E0(0x28)
		FScalableFloat MinDistanceForTimeBetweenHits; // 0x208(0x28)
		FScalableFloat MaxDistanceForTimeBetweenHits; // 0x230(0x28)
		FScalableFloat MinTimeBetweenHitsAtMinRange; // 0x258(0x28)
		FScalableFloat MaxTimeBetweenHitsAtMinRange; // 0x280(0x28)
		FScalableFloat MinTimeBetweenHitsAtMaxRange; // 0x2A8(0x28)
		FScalableFloat MaxTimeBetweenHitsAtMaxRange; // 0x2D0(0x28)
		FScalableFloat IncreasedAccuracyRatioAgainstDBNO; // 0x2F8(0x28)
		FScalableFloat UseLastTimeToHitOnWeaponChange; // 0x320(0x28)
		FScalableFloat ForceMissEnabled; // 0x348(0x28)
		FScalableFloat ExtraClampingDistance; // 0x370(0x28)
		FScalableFloat PreventHeadshots; // 0x398(0x28)
		FScalableFloat WeaponSpreadContributionToClampCurve; // 0x3C0(0x28)
		FScalableFloat KillingBlowGracePeriodAtMinRange; // 0x3E8(0x28)
		FScalableFloat KillingBlowGracePeriodAtMaxRange; // 0x410(0x28)
		FScalableFloat ExtraHitOddsCurve; // 0x438(0x28)
	};


	// Struct FortniteAI.TargetBasedAccuracy
	// Size: 0x118 (0x118 - 0x0)
	struct FTargetBasedAccuracy	
	{
	public:
		FScalableFloat AimTrackingOffsetErrorMultiplier; // 0x0(0x28)
		FScalableFloat AimTrackingHeightOffsetErrorMultiplier; // 0x28(0x28)
		FScalableFloat AimTrackingDistanceErrorMultiplier; // 0x50(0x28)
		FScalableFloat AimTrackingReactionTimeMultiplier; // 0x78(0x28)
		FScalableFloat AimTrackingInterpTimeMultiplier; // 0xA0(0x28)
		FScalableFloat AimTrackingInAirVelocityThresholdMultiplier; // 0xC8(0x28)
		FScalableFloat AimTrackinginAirHeightDataThresholdMultiplier; // 0xF0(0x28)
	};


	// Struct FortniteAI.DigestedTargetBasedAccuracy
	// Size: 0x1C (0x1C - 0x0)
	struct FDigestedTargetBasedAccuracy	
	{
	public:
		float AimTrackingOffsetErrorMultiplier; // 0x0(0x4)
		float AimTrackingHeightOffsetErrorMultiplier; // 0x4(0x4)
		float AimTrackingDistanceErrorMultiplier; // 0x8(0x4)
		float AimTrackingReactionTimeMultiplier; // 0xC(0x4)
		float AimTrackingInterpTimeMultiplier; // 0x10(0x4)
		float AimTrackingInAirVelocityThresholdMultiplier; // 0x14(0x4)
		float AimTrackinginAirHeightDataThresholdMultiplier; // 0x18(0x4)
	};


	// Struct FortniteAI.TargetBasedAccuracyCategory
	// Size: 0x138 (0x138 - 0x0)
	struct FTargetBasedAccuracyCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FTargetBasedAccuracy TargetBasedAccuracy; // 0x20(0x118)
	};


	// Struct FortniteAI.DigestedTargetBasedAccuracyCategory
	// Size: 0x40 (0x40 - 0x0)
	struct FDigestedTargetBasedAccuracyCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FDigestedTargetBasedAccuracy TargetBasedAccuracy; // 0x20(0x1C)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.WeaponAccuracy
	// Size: 0x800 (0x800 - 0x0)
	struct FWeaponAccuracy	
	{
	public:
		FScalableFloat MaxTrackingOffsetError; // 0x0(0x28)
		FScalableFloat TargetingMaxTrackingOffsetError; // 0x28(0x28)
		FScalableFloat MaxTrackingDistanceFarError; // 0x50(0x28)
		FScalableFloat TargetingMaxTrackingDistanceFarError; // 0x78(0x28)
		FScalableFloat MaxTrackingDistanceNearError; // 0xA0(0x28)
		FScalableFloat TargetingMaxTrackingDistanceNearError; // 0xC8(0x28)
		FScalableFloat TrackingDistanceNearErrorProbability; // 0xF0(0x28)
		FScalableFloat TargetingActivationProbability; // 0x118(0x28)
		FScalableFloat FiringRestrictedToTargetingActive; // 0x140(0x28)
		FScalableFloat MinimumDistanceForAiming; // 0x168(0x28)
		FScalableFloat MinimumDistanceForPawnAiming; // 0x190(0x28)
		FScalableFloat MaxAngleThresholdToAddWeaponOffset; // 0x1B8(0x28)
		FScalableFloat IdealAttackRange; // 0x1E0(0x28)
		FScalableFloat TargetingIdealAttackRange; // 0x208(0x28)
		FScalableFloat MaxAttackRangeFactor; // 0x230(0x28)
		FScalableFloat ShouldAimAtTargetsFeet; // 0x258(0x28)
		FScalableFloat ChanceToAimAtTargetsFeetWhenTimeToHit; // 0x280(0x28)
		FScalableFloat ShouldUseProjectileArcForAiming; // 0x2A8(0x28)
		FScalableFloat KeepAimingOnSameSideWhileFiring; // 0x2D0(0x28)
		FScalableFloat MaxTrackingHeightOffsetError; // 0x2F8(0x28)
		FScalableFloat MinRotationInterpSpeed; // 0x320(0x28)
		FScalableFloat MaxRotationInterpSpeed; // 0x348(0x28)
		FScalableFloat ConsiderProjectileTravelTime; // 0x370(0x28)
		bool bOverrideAimingCircleSettings; // 0x398(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x399(0x7) UNKNOWN PROPERTY
		FAimingCircleSettings AimingCircleSettingsOverride; // 0x3A0(0x460)
	};


	// Struct FortniteAI.WeaponAccuracyCategorySpecialization
	// Size: 0x820 (0x820 - 0x0)
	struct FWeaponAccuracyCategorySpecialization	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FWeaponAccuracy WeaponAccuracy; // 0x20(0x800)
	};


	// Struct FortniteAI.WeaponAccuracyCategory
	// Size: 0x830 (0x830 - 0x0)
	struct FWeaponAccuracyCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FWeaponAccuracy WeaponAccuracy; // 0x20(0x800)
		TArray<FWeaponAccuracyCategorySpecialization> Specializations; // 0x820(0x10)
	};


	// Struct FortniteAI.WeaponAimOffset
	// Size: 0xC0 (0xC0 - 0x0)
	struct FWeaponAimOffset	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		FScalableFloat AimOffsetX; // 0x48(0x28)
		FScalableFloat AimOffsetY; // 0x70(0x28)
		FScalableFloat AimOffsetZ; // 0x98(0x28)
	};


	// Struct FortniteAI.DigestedWeaponAccuracy
	// Size: 0x330 (0x330 - 0x0)
	struct FDigestedWeaponAccuracy	
	{
	public:
		FScalableFloat TrackingOffsetError; // 0x0(0x28)
		FScalableFloat TargetingTrackingOffsetError; // 0x28(0x28)
		FScalableFloat TrackingDistanceFarError; // 0x50(0x28)
		FScalableFloat TargetingTrackingDistanceFarError; // 0x78(0x28)
		FScalableFloat TrackingDistanceNearError; // 0xA0(0x28)
		FScalableFloat TargetingTrackingDistanceNearError; // 0xC8(0x28)
		FScalableFloat TrackingDistanceNearErrorProbability; // 0xF0(0x28)
		FScalableFloat TargetingActivationProbability; // 0x118(0x28)
		FScalableFloat FiringRestrictedToTargetingActive; // 0x140(0x28)
		float MinimumDistanceForAiming; // 0x168(0x4)
		float MinimumDistanceForPawnAiming; // 0x16C(0x4)
		float MaxAngleThresholdToAddWeaponOffset; // 0x170(0x4)
		float IdealAttackRange; // 0x174(0x4)
		float TargetingIdealAttackRange; // 0x178(0x4)
		float MaxAttackRange; // 0x17C(0x4)
		float ChanceToAimAtTargetsFeet; // 0x180(0x4)
		float ChanceToAimAtTargetsFeetWhenTimeToHit; // 0x184(0x4)
		FScalableFloat ShouldUseProjectileArcForAiming; // 0x188(0x28)
		bool bKeepAimingOnSameSideWhileFiring; // 0x1B0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1B1(0x3) UNKNOWN PROPERTY
		float MaxTrackingHeightOffsetError; // 0x1B4(0x4)
		float MinRotationInterpSpeed; // 0x1B8(0x4)
		float MaxRotationInterpSpeed; // 0x1BC(0x4)
		bool bOverrideAimingCircleSettings; // 0x1C0(0x1)
		bool bConsiderProjectileTravelTime; // 0x1C1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x1C2(0x6) UNKNOWN PROPERTY
		FDigestedAimingCircleSettings AimingCircleSettingsOverride; // 0x1C8(0x168)
	};


	// Struct FortniteAI.DigestedWeaponAccuracyCategorySpecialization
	// Size: 0x350 (0x350 - 0x0)
	struct FDigestedWeaponAccuracyCategorySpecialization	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FDigestedWeaponAccuracy WeaponAccuracy; // 0x20(0x330)
	};


	// Struct FortniteAI.DigestedWeaponAccuracyCategory
	// Size: 0x360 (0x360 - 0x0)
	struct FDigestedWeaponAccuracyCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FDigestedWeaponAccuracy WeaponAccuracy; // 0x20(0x330)
		TArray<FDigestedWeaponAccuracyCategorySpecialization> Specializations; // 0x350(0x10)
	};


	// Struct FortniteAI.DigestedWeaponAimOffset
	// Size: 0x60 (0x60 - 0x0)
	struct FDigestedWeaponAimOffset	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		FVector AimOffset; // 0x48(0x18)
	};


	// Struct FortniteAI.TrackingOffsetModifiers
	// Size: 0x168 (0x168 - 0x0)
	struct FTrackingOffsetModifiers	
	{
	public:
		FScalableFloat CombatStartDuration; // 0x0(0x28)
		FScalableFloat TargetLowHealthThreshold; // 0x28(0x28)
		FScalableFloat Curves; // 0x50(0x78)
		FScalableFloat DistanceCurves; // 0xC8(0x78)
		FScalableFloat InAirHeightCurve; // 0x140(0x28)
	};


	// Struct FortniteAI.TrackingOffsetModifierInfo
	// Size: 0x1B8 (0x1B8 - 0x0)
	struct FTrackingOffsetModifierInfo	
	{
	public:
		FScalableFloat MinSkill; // 0x0(0x28)
		FScalableFloat MaxSkill; // 0x28(0x28)
		FTrackingOffsetModifiers Modifiers; // 0x50(0x168)
	};


	// Struct FortniteAI.DigestedTrackingOffsetModifierCurves
	// Size: 0x28 (0x28 - 0x0)
	struct FDigestedTrackingOffsetModifierCurves	
	{
	public:
		int32_t Values; // 0x0(0x28)
	};


	// Struct FortniteAI.DigestedTrackingOffsetModifiers
	// Size: 0x120 (0x120 - 0x0)
	struct FDigestedTrackingOffsetModifiers	
	{
	public:
		float CombatStartDuration; // 0x0(0x4)
		float TargetLowHealthThreshold; // 0x4(0x4)
		FDigestedTrackingOffsetModifierCurves Curves; // 0x8(0x78)
		FDigestedTrackingOffsetModifierCurves DistanceCurves; // 0x80(0x78)
		FDigestedTrackingOffsetModifierCurves InAirHeightCurve; // 0xF8(0x28)
	};


	// Struct FortniteAI.LookAtDigestedSetting
	// Size: 0x10 (0x10 - 0x0)
	struct FLookAtDigestedSetting	
	{
	public:
		float LookAtDuration; // 0x0(0x4)
		float LookAtDurationDeviation; // 0x4(0x4)
		float LookAtDelay; // 0x8(0x4)
		float LookAtDelayDeviation; // 0xC(0x4)
	};


	// Struct FortniteAI.FocusSetting
	// Size: 0x140 (0x140 - 0x0)
	struct FFocusSetting	
	{
	public:
		FGameplayTagQuery WeaponTagQuery; // 0x0(0x48)
		bool bRequireAmmoToMatch; // 0x48(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FScalableFloat IgnoreThreatTimeWhenNotAttacking; // 0x50(0x28)
		FScalableFloat IgnoreThreatDeviationWhenNotAttacking; // 0x78(0x28)
		FScalableFloat IgnoreThreatDuration; // 0xA0(0x28)
		FScalableFloat IgnoreThreatDurationDeviation; // 0xC8(0x28)
		FScalableFloat IgnoreThreatDistanceWhenFleeing; // 0xF0(0x28)
		FScalableFloat IgnoreThreatDirectionAngleWhenFleeing; // 0x118(0x28)
	};


	// Struct FortniteAI.DigestedFocusSetting
	// Size: 0x68 (0x68 - 0x0)
	struct FDigestedFocusSetting	
	{
	public:
		FGameplayTagQuery WeaponTagQuery; // 0x0(0x48)
		bool bRequireAmmoToMatch; // 0x48(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		float IgnoreThreatTimeWhenNotAttacking; // 0x4C(0x4)
		float IgnoreThreatDeviationWhenNotAttacking; // 0x50(0x4)
		float IgnoreThreatDuration; // 0x54(0x4)
		float IgnoreThreatDurationDeviation; // 0x58(0x4)
		float IgnoreThreatDistanceWhenFleeing; // 0x5C(0x4)
		float IgnoreThreatDirectionCosAngleWhenFleeing; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.LookAtSetting
	// Size: 0xA0 (0xA0 - 0x0)
	struct FLookAtSetting	
	{
	public:
		FScalableFloat LookAtDuration; // 0x0(0x28)
		FScalableFloat LookAtDurationDeviation; // 0x28(0x28)
		FScalableFloat LookAtDelay; // 0x50(0x28)
		FScalableFloat LookAtDelayDeviation; // 0x78(0x28)
	};


	// Struct FortniteAI.MeleeWeaponSkill
	// Size: 0xC8 (0xC8 - 0x0)
	struct FMeleeWeaponSkill	
	{
	public:
		FScalableFloat IdealAttackDistance; // 0x0(0x28)
		FScalableFloat IdealAttackDistanceTolerance; // 0x28(0x28)
		FScalableFloat MinCooldownDelayBetweenMeleeAttackAttempts; // 0x50(0x28)
		FScalableFloat MaxCooldownDelayBetweenMeleeAttackAttempts; // 0x78(0x28)
		FScalableFloat MaxHeightDifferenceExtentMultiplierToAttemptMeleeAttack; // 0xA0(0x28)
	};


	// Struct FortniteAI.MeleeWeaponSkillCategory
	// Size: 0xE8 (0xE8 - 0x0)
	struct FMeleeWeaponSkillCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FMeleeWeaponSkill WeaponSkill; // 0x20(0xC8)
	};


	// Struct FortniteAI.DigestedMeleeWeaponSkill
	// Size: 0x14 (0x14 - 0x0)
	struct FDigestedMeleeWeaponSkill	
	{
	public:
		float IdealAttackDistance; // 0x0(0x4)
		float IdealAttackDistanceTolerance; // 0x4(0x4)
		float MinCooldownDelayBetweenMeleeAttackAttempts; // 0x8(0x4)
		float MaxCooldownDelayBetweenMeleeAttackAttempts; // 0xC(0x4)
		float MaxHeightDifferenceExtentMultiplierToAttemptMeleeAttack; // 0x10(0x4)
	};


	// Struct FortniteAI.DigestedMeleeWeaponSkillCategory
	// Size: 0x38 (0x38 - 0x0)
	struct FDigestedMeleeWeaponSkillCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FDigestedMeleeWeaponSkill WeaponSkill; // 0x20(0x14)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAthenaAIBotBuildDescriptor
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAthenaAIBotBuildDescriptor	
	{
	public:
		FIntVector Location; // 0x0(0xC)
		TEnumAsByte<EOrientedConstructionBuildingType> BuildingType; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AthenaFortAIBotWeightedBuildingList
	// Size: 0x38 (0x38 - 0x0)
	struct FAthenaFortAIBotWeightedBuildingList	
	{
	public:
		FScalableFloat Weight; // 0x0(0x28)
		TArray<FFortAthenaAIBotBuildDescriptor> BuildDescriptors; // 0x28(0x10)
	};


	// Struct FortniteAI.AthenaFortAIBotDigestedWeightedBuildingList
	// Size: 0x18 (0x18 - 0x0)
	struct FAthenaFortAIBotDigestedWeightedBuildingList	
	{
	public:
		float Weight; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FFortAthenaAIBotBuildDescriptor> BuildDescriptors; // 0x8(0x10)
	};


	// Struct FortniteAI.MMRSpawningBracketNPCDataTableRow
	// Inherited from FMMRSpawningBracketBaseDataTableRow -> FTableRowBase
	// Size: 0x8 (0x18 - 0x10)
	struct FMMRSpawningBracketNPCDataTableRow : public FMMRSpawningBracketBaseDataTableRow	
	{
	public:
		float Skill; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAthenaAIBotRunTimeCustomizationData
	// Size: 0xC (0xC - 0x0)
	struct FFortAthenaAIBotRunTimeCustomizationData	
	{
	public:
		FGameplayTag PredefinedCosmeticSetTag; // 0x0(0x4)
		float CullDistanceSquared; // 0x4(0x4)
		bool bCheckForOverlaps; // 0x8(0x1)
		bool bHasCustomSquadId; // 0x9(0x1)
		char CustomSquadId; // 0xA(0x1)
		unsigned char UnknownData00_7[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.DigestedEvasiveManeuverSkillSettings
	// Size: 0x58 (0x58 - 0x0)
	struct FDigestedEvasiveManeuverSkillSettings	
	{
	public:
		float JumpDelay; // 0x0(0x4)
		float JumpRandomDeviationDelay; // 0x4(0x4)
		float CrouchDelay; // 0x8(0x4)
		float CrouchRandomDeviationDelay; // 0xC(0x4)
		float DodgeDelay; // 0x10(0x4)
		float DodgeRandomDeviationDelay; // 0x14(0x4)
		float CrouchOverlayWeight; // 0x18(0x4)
		float JumpOverlayWeight; // 0x1C(0x4)
		float NoOverlayWeight; // 0x20(0x4)
		float DodgeWeight; // 0x24(0x4)
		float DodgeJumpWeight; // 0x28(0x4)
		float DodgeDistanceMax; // 0x2C(0x4)
		float DodgeDistanceMin; // 0x30(0x4)
		float CrouchTimeMax; // 0x34(0x4)
		float CrouchTimeMin; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FString DebugName; // 0x40(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.EvasiveManeuverSkillSettings
	// Size: 0x258 (0x258 - 0x0)
	struct FEvasiveManeuverSkillSettings	
	{
	public:
		FScalableFloat CrouchOverlayWeight; // 0x0(0x28)
		FScalableFloat JumpOverlayWeight; // 0x28(0x28)
		FScalableFloat NoOverlayWeight; // 0x50(0x28)
		FScalableFloat DodgeWeight; // 0x78(0x28)
		FScalableFloat DodgeJumpWeight; // 0xA0(0x28)
		FScalableFloat JumpDelay; // 0xC8(0x28)
		FScalableFloat JumpRandomDeviationDelay; // 0xF0(0x28)
		FScalableFloat CrouchDelay; // 0x118(0x28)
		FScalableFloat CrouchRandomDeviationDelay; // 0x140(0x28)
		FScalableFloat DodgeDelay; // 0x168(0x28)
		FScalableFloat DodgeRandomDeviationDelay; // 0x190(0x28)
		FScalableFloat DodgeDistanceMax; // 0x1B8(0x28)
		FScalableFloat DodgeDistanceMin; // 0x1E0(0x28)
		FScalableFloat CrouchTimeMax; // 0x208(0x28)
		FScalableFloat CrouchTimeMin; // 0x230(0x28)
	};


	// Struct FortniteAI.DigestedEvasiveManeuverSkillSettingsSpecialization
	// Size: 0xC0 (0xC0 - 0x0)
	struct FDigestedEvasiveManeuverSkillSettingsSpecialization	
	{
	public:
		float OddsToBeUsed; // 0x0(0x4)
		float MaxDuration; // 0x4(0x4)
		float MaxDurationRandomDeviation; // 0x8(0x4)
		float Cooldown; // 0xC(0x4)
		float CooldownRandomDeviation; // 0x10(0x4)
		float DistanceMinSquared; // 0x14(0x4)
		float DistanceMaxSquared; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery WeaponTagQuery; // 0x20(0x48)
		FDigestedEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings; // 0x68(0x58)
	};


	// Struct FortniteAI.EvasiveManeuverSkillSettingsSpecialization
	// Size: 0x3C8 (0x3C8 - 0x0)
	struct FEvasiveManeuverSkillSettingsSpecialization	
	{
	public:
		FScalableFloat OddsToBeUsed; // 0x0(0x28)
		FScalableFloat MaxDuration; // 0x28(0x28)
		FScalableFloat MaxDurationRandomDeviation; // 0x50(0x28)
		FScalableFloat Cooldown; // 0x78(0x28)
		FScalableFloat CooldownRandomDeviation; // 0xA0(0x28)
		FString DebugName; // 0xC8(0x10)
		FScalableFloat DistanceMin; // 0xD8(0x28)
		FScalableFloat DistanceMax; // 0x100(0x28)
		FGameplayTagQuery WeaponTagQuery; // 0x128(0x48)
		FEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings; // 0x170(0x258)
	};


	// Struct FortniteAI.FortBotHealingItems
	// Size: 0x70 (0x70 - 0x0)
	struct FFortBotHealingItems	
	{
	public:
		FScalableFloat UseItemResourceThreshold; // 0x0(0x28)
		FGameplayTagQuery ItemTagQuery; // 0x28(0x48)
	};


	// Struct FortniteAI.FortBotDigestedHealingItems
	// Size: 0x50 (0x50 - 0x0)
	struct FFortBotDigestedHealingItems	
	{
	public:
		float UseItemResourceThreshold; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery ItemTagQuery; // 0x8(0x48)
	};


	// Struct FortniteAI.FortBotHealingItemsList
	// Size: 0x10 (0x10 - 0x0)
	struct FFortBotHealingItemsList	
	{
	public:
		TArray<FFortBotHealingItems> HealthItems; // 0x0(0x10)
	};


	// Struct FortniteAI.FortBotDigestedHealingItemsList
	// Size: 0x10 (0x10 - 0x0)
	struct FFortBotDigestedHealingItemsList	
	{
	public:
		TArray<FFortBotDigestedHealingItems> HealthItems; // 0x0(0x10)
	};


	// Struct FortniteAI.FortBotHealingItemsSpec
	// Size: 0x58 (0x58 - 0x0)
	struct FFortBotHealingItemsSpec	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		FFortBotHealingItemsList HealthItemsList; // 0x48(0x10)
	};


	// Struct FortniteAI.FortBotDigestedHealingItemsSpec
	// Size: 0x58 (0x58 - 0x0)
	struct FFortBotDigestedHealingItemsSpec	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		FFortBotDigestedHealingItemsList HealthItemsList; // 0x48(0x10)
	};


	// Struct FortniteAI.BotEquipWeaponInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FBotEquipWeaponInfo	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		FScalableFloat DistanceEffectivenessWithThreat; // 0x48(0x28)
		FScalableFloat DistanceEffectivenessNoThreat; // 0x70(0x28)
	};


	// Struct FortniteAI.DigestedBotEquipWeaponInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FDigestedBotEquipWeaponInfo	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		FScalableFloat DistanceEffectivenessWithThreat; // 0x48(0x28)
		FScalableFloat DistanceEffectivenessNoThreat; // 0x70(0x28)
	};


	// Struct FortniteAI.WeaponAmmoCheat
	// Size: 0x58 (0x58 - 0x0)
	struct FWeaponAmmoCheat	
	{
	public:
		FGameplayTag WeaponTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FScalableFloat HasInfiniteAmmo; // 0x8(0x28)
		FScalableFloat CheckLoadedAmmoForInfiniteAmmo; // 0x30(0x28)
	};


	// Struct FortniteAI.BotKnockbackSettings
	// Size: 0xC0 (0xC0 - 0x0)
	struct FBotKnockbackSettings	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		FScalableFloat ShouldAllowCharacterToBeLaunched; // 0x48(0x28)
		FScalableFloat ShouldStopActiveMovement; // 0x70(0x28)
		FScalableFloat IgnoreMoveInputDuration; // 0x98(0x28)
	};


	// Struct FortniteAI.DigestedBotKnockbackSettings
	// Size: 0x50 (0x50 - 0x0)
	struct FDigestedBotKnockbackSettings	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		bool bShouldAllowCharacterToBeLaunched; // 0x48(0x1)
		bool bShouldStopActiveMovement; // 0x49(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x4A(0x2) UNKNOWN PROPERTY
		float IgnoreMoveInputDuration; // 0x4C(0x4)
	};


	// Struct FortniteAI.AlertLevelInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FAlertLevelInfo	
	{
	public:
		TArray<UAISenseConfig*> SensesConfig; // 0x0(0x10)
	};


	// Struct FortniteAI.DigestedPerceptionStateSettings
	// Size: 0x38 (0x38 - 0x0)
	struct FDigestedPerceptionStateSettings	
	{
	public:
		float ForgetTime; // 0x0(0x4)
		float ForgetTimeDeviation; // 0x4(0x4)
		float ForgetDistance; // 0x8(0x4)
		float ForgetDistanceDeviation; // 0xC(0x4)
		unsigned char UnknownData00_7[0x28]; // 0x10(0x28) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.DigestedTokenTargetWeightHeuristic
	// Size: 0x50 (0x50 - 0x0)
	struct FDigestedTokenTargetWeightHeuristic	
	{
	public:
		FGameplayTagQuery TokenTagQuery; // 0x0(0x48)
		float Weight; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.SoundPerceptionDigestedSetting
	// Size: 0xC (0xC - 0x0)
	struct FSoundPerceptionDigestedSetting	
	{
	public:
		float Loudness; // 0x0(0x4)
		float IgnoreTime; // 0x4(0x4)
		float OverrideReactionDistanceSq; // 0x8(0x4)
	};


	// Struct FortniteAI.SightReactionSpecialization
	// Size: 0x70 (0x70 - 0x0)
	struct FSightReactionSpecialization	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FScalableFloat SightMinAdditionTime; // 0x20(0x28)
		FScalableFloat SightMaxAdditionTime; // 0x48(0x28)
	};


	// Struct FortniteAI.DigestedSightReactionSpecialization
	// Size: 0x70 (0x70 - 0x0)
	struct FDigestedSightReactionSpecialization	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FScalableFloat SightMinAdditionTime; // 0x20(0x28)
		FScalableFloat SightMaxAdditionTime; // 0x48(0x28)
	};


	// Struct FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettings
	// Size: 0x1A0 (0x1A0 - 0x0)
	struct FFortAthenaAIBotDigestedTargetHeuristicSettings	
	{
	public:
		TArray<FDigestedTokenTargetWeightHeuristic> TokenWeights; // 0x0(0x10)
		FDigestedPerceptionStateSettings PerceptionStateSettings; // 0x10(0x150)
		float ThreatDamageWeight; // 0x160(0x4)
		float ThreatDamageWeightMultiplier; // 0x164(0x4)
		FScalableFloat ThreatTimeSinceLastDamageMultiplier; // 0x168(0x28)
		float ThreatLoFWeight; // 0x190(0x4)
		float DBNOWeightModifier; // 0x194(0x4)
		float GameParticipantWeightModifier; // 0x198(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization
	// Size: 0x1E8 (0x1E8 - 0x0)
	struct FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization	
	{
	public:
		FGameplayTagQuery TargetTagQuery; // 0x0(0x48)
		FFortAthenaAIBotDigestedTargetHeuristicSettings Settings; // 0x48(0x1A0)
	};


	// Struct FortniteAI.PerceptionStateSettings
	// Size: 0xC8 (0xC8 - 0x0)
	struct FPerceptionStateSettings	
	{
	public:
		FScalableFloat ForgetTime; // 0x0(0x28)
		FScalableFloat ForgetTimeDeviation; // 0x28(0x28)
		FScalableFloat ForgetDistance; // 0x50(0x28)
		FScalableFloat ForgetDistanceDeviation; // 0x78(0x28)
		FScalableFloat ThreatDistanceWeight; // 0xA0(0x28)
	};


	// Struct FortniteAI.SoundPerceptionSetting
	// Size: 0x78 (0x78 - 0x0)
	struct FSoundPerceptionSetting	
	{
	public:
		FScalableFloat Loudness; // 0x0(0x28)
		FScalableFloat IgnoreTime; // 0x28(0x28)
		FScalableFloat OverrideReactionDistance; // 0x50(0x28)
	};


	// Struct FortniteAI.TokenTargetWeightHeuristic
	// Size: 0x70 (0x70 - 0x0)
	struct FTokenTargetWeightHeuristic	
	{
	public:
		FGameplayTagQuery TokenTagQuery; // 0x0(0x48)
		FScalableFloat Weight; // 0x48(0x28)
	};


	// Struct FortniteAI.FortAthenaAIBotTargetHeuristicSettings
	// Size: 0x358 (0x358 - 0x0)
	struct FFortAthenaAIBotTargetHeuristicSettings	
	{
	public:
		FPerceptionStateSettings ThreatSeeingPerceptionSettings; // 0x0(0xC8)
		FPerceptionStateSettings ThreatLKPPerceptionSettings; // 0xC8(0xC8)
		FPerceptionStateSettings ThreatAlertedPerceptionSettings; // 0x190(0xC8)
		FScalableFloat ThreatDamageWeight; // 0x258(0x28)
		FScalableFloat ThreatDamageWeightMultiplier; // 0x280(0x28)
		FScalableFloat ThreatTimeSinceLastDamageMultiplier; // 0x2A8(0x28)
		FScalableFloat ThreatLoFWeight; // 0x2D0(0x28)
		FScalableFloat DBNOWeightModifier; // 0x2F8(0x28)
		FScalableFloat GameParticipantWeightModifier; // 0x320(0x28)
		TArray<FTokenTargetWeightHeuristic> TokenWeights; // 0x348(0x10)
	};


	// Struct FortniteAI.FortAthenaAIBotTargetHeuristicSettingsSpecialization
	// Size: 0x3A0 (0x3A0 - 0x0)
	struct FFortAthenaAIBotTargetHeuristicSettingsSpecialization	
	{
	public:
		FGameplayTagQuery TargetTagQuery; // 0x0(0x48)
		FFortAthenaAIBotTargetHeuristicSettings Settings; // 0x48(0x358)
	};


	// Struct FortniteAI.PlaystyleSwitchToAggressiveDataDigested
	// Size: 0x58 (0x58 - 0x0)
	struct FPlaystyleSwitchToAggressiveDataDigested	
	{
	public:
		FGameplayTagQuery TagQueryToMatch; // 0x0(0x48)
		float TurnToAggressiveMinimumDistanceSquared; // 0x48(0x4)
		float TurnToAggressiveTime; // 0x4C(0x4)
		float DamageThresholdToSwitchToAggressive; // 0x50(0x4)
		float SwitchBackToDefensivePreventionTime; // 0x54(0x4)
	};


	// Struct FortniteAI.PlaystyleSwitchToAggressiveData
	// Size: 0xE8 (0xE8 - 0x0)
	struct FPlaystyleSwitchToAggressiveData	
	{
	public:
		FGameplayTagQuery TagQueryToMatch; // 0x0(0x48)
		FScalableFloat TurnToAggressiveMinimumDistance; // 0x48(0x28)
		FScalableFloat TurnToAggressiveTime; // 0x70(0x28)
		FScalableFloat SwitchBackToDefensivePreventionTime; // 0x98(0x28)
		FScalableFloat DamageThresholdToSwitchToAggressive; // 0xC0(0x28)
	};


	// Struct FortniteAI.FiringPattern
	// Size: 0xD0 (0xD0 - 0x0)
	struct FFiringPattern	
	{
	public:
		FScalableFloat MinRange; // 0x0(0x28)
		FScalableFloat MaxRange; // 0x28(0x28)
		FScalableFloat HoldTimeDeviation; // 0x50(0x28)
		FScalableFloat PreventFireTimeDeviation; // 0x78(0x28)
		FScalableFloat FiringPatternHysteresis; // 0xA0(0x28)
		UCurveFloat* FiringPatternCurve; // 0xC8(0x8)
	};


	// Struct FortniteAI.RangedWeaponSkill
	// Size: 0x188 (0x188 - 0x0)
	struct FRangedWeaponSkill	
	{
	public:
		FScalableFloat DelayBetweenShots; // 0x0(0x28)
		FScalableFloat DelayDeviationTimeBetweenShots; // 0x28(0x28)
		FScalableFloat TriggerHoldDuration; // 0x50(0x28)
		FScalableFloat TriggerHoldDeviationTime; // 0x78(0x28)
		FScalableFloat DelayBeforeFirstShot; // 0xA0(0x28)
		FScalableFloat ShotDelayAfterTargeting; // 0xC8(0x28)
		FScalableFloat ShotDelayAfterIncomingLethality; // 0xF0(0x28)
		TArray<FFiringPattern> TargetInAirFiringPatterns; // 0x118(0x10)
		TArray<FFiringPattern> FiringPatterns; // 0x128(0x10)
		FScalableFloat InterruptReloadToShootOdds; // 0x138(0x28)
		FScalableFloat StopFiringWhenTargetWillDieOdds; // 0x160(0x28)
	};


	// Struct FortniteAI.DigestedWeaponFiringTime
	// Size: 0x8 (0x8 - 0x0)
	struct FDigestedWeaponFiringTime	
	{
	public:
		float HoldFireTime; // 0x0(0x4)
		float PreventFireTime; // 0x4(0x4)
	};


	// Struct FortniteAI.DigestedFiringPattern
	// Size: 0x28 (0x28 - 0x0)
	struct FDigestedFiringPattern	
	{
	public:
		float MinRange; // 0x0(0x4)
		float MaxRange; // 0x4(0x4)
		float HoldTimeDeviation; // 0x8(0x4)
		float PreventFireTimeDeviation; // 0xC(0x4)
		float FiringPatternHysteresis; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray<FDigestedWeaponFiringTime> FiringTimes; // 0x18(0x10)
	};


	// Struct FortniteAI.RangedWeaponSkillCategorySpecialization
	// Size: 0x1A8 (0x1A8 - 0x0)
	struct FRangedWeaponSkillCategorySpecialization	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FRangedWeaponSkill WeaponSkill; // 0x20(0x188)
	};


	// Struct FortniteAI.RangedWeaponSkillCategory
	// Size: 0x1B8 (0x1B8 - 0x0)
	struct FRangedWeaponSkillCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FRangedWeaponSkill WeaponSkill; // 0x20(0x188)
		TArray<FRangedWeaponSkillCategorySpecialization> Specializations; // 0x1A8(0x10)
	};


	// Struct FortniteAI.DigestedRangedWeaponSkill
	// Size: 0x48 (0x48 - 0x0)
	struct FDigestedRangedWeaponSkill	
	{
	public:
		float DelayBetweenShots; // 0x0(0x4)
		float DelayDeviationTimeBetweenShots; // 0x4(0x4)
		float TriggerHoldDuration; // 0x8(0x4)
		float TriggerHoldDeviationTime; // 0xC(0x4)
		float DelayBeforeFirstShot; // 0x10(0x4)
		float ShotDelayAfterTargeting; // 0x14(0x4)
		float ShotDelayAfterIncomingLethality; // 0x18(0x4)
		float InterruptReloadToShootOdds; // 0x1C(0x4)
		float StopFiringWhenTargetWillDieOdds; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray<FDigestedFiringPattern> TargetInAirFiringPatterns; // 0x28(0x10)
		TArray<FDigestedFiringPattern> FiringPatterns; // 0x38(0x10)
	};


	// Struct FortniteAI.DigestedRangedWeaponSkillCategorySpecialization
	// Size: 0x68 (0x68 - 0x0)
	struct FDigestedRangedWeaponSkillCategorySpecialization	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FDigestedRangedWeaponSkill WeaponSkill; // 0x20(0x48)
	};


	// Struct FortniteAI.DigestedRangedWeaponSkillCategory
	// Size: 0x78 (0x78 - 0x0)
	struct FDigestedRangedWeaponSkillCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FDigestedRangedWeaponSkill WeaponSkill; // 0x20(0x48)
		TArray<FDigestedRangedWeaponSkillCategorySpecialization> Specializations; // 0x68(0x10)
	};


	// Struct FortniteAI.VehicleDigestedPIDController
	// Size: 0xC (0xC - 0x0)
	struct FVehicleDigestedPIDController	
	{
	public:
		float KP; // 0x0(0x4)
		float KI; // 0x4(0x4)
		float KD; // 0x8(0x4)
	};


	// Struct FortniteAI.VehiclePIDController
	// Size: 0x78 (0x78 - 0x0)
	struct FVehiclePIDController	
	{
	public:
		FScalableFloat KP; // 0x0(0x28)
		FScalableFloat KI; // 0x28(0x28)
		FScalableFloat KD; // 0x50(0x28)
	};


	// Struct FortniteAI.VehicleDigestedAppendToPath
	// Size: 0x8 (0x8 - 0x0)
	struct FVehicleDigestedAppendToPath	
	{
	public:
		float MinimumPathLengthToEndOfPath; // 0x0(0x4)
		float MinTimeSinceLastAppend; // 0x4(0x4)
	};


	// Struct FortniteAI.VehicleAppendToPath
	// Size: 0x50 (0x50 - 0x0)
	struct FVehicleAppendToPath	
	{
	public:
		FScalableFloat MinimumPathLengthToEndOfPath; // 0x0(0x28)
		FScalableFloat MinTimeSinceLastAppend; // 0x28(0x28)
	};


	// Struct FortniteAI.VehicleDigestedTurnInPlace
	// Size: 0x18 (0x18 - 0x0)
	struct FVehicleDigestedTurnInPlace	
	{
	public:
		float MovingAngleBegin; // 0x0(0x4)
		float MovingAngleEnd; // 0x4(0x4)
		float IdleAngleBegin; // 0x8(0x4)
		float IdleAngleEnd; // 0xC(0x4)
		float MinMovingSpeed; // 0x10(0x4)
		bool bMissedPathPointReverse; // 0x14(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.VehicleTurnInPlace
	// Size: 0xD0 (0xD0 - 0x0)
	struct FVehicleTurnInPlace	
	{
	public:
		FScalableFloat MovingAngleBegin; // 0x0(0x28)
		FScalableFloat MovingAngleEnd; // 0x28(0x28)
		FScalableFloat IdleAngleBegin; // 0x50(0x28)
		FScalableFloat IdleAngleEnd; // 0x78(0x28)
		FScalableFloat MinMovingSpeed; // 0xA0(0x28)
		bool bMissedPathPointReverse; // 0xC8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.DigestedVehicleDriving
	// Size: 0xB8 (0xB8 - 0x0)
	struct FDigestedVehicleDriving	
	{
	public:
		bool bCanTurnInPlace; // 0x0(0x1)
		bool bAvoidanceEnabled; // 0x1(0x1)
		bool bPreventTurningWhenStopping; // 0x2(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FGameplayTagQuery AvoidanceTagQuery; // 0x8(0x48)
		float NavigationOffsetFromObstacles; // 0x50(0x4)
		bool bReverseSwapLeftAndRight; // 0x54(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		float MinimumForwardPIDValueForStopping; // 0x58(0x4)
		float MinimumDistanceLeftForBoosting; // 0x5C(0x4)
		FVehicleDigestedPIDController ForwardPIDController; // 0x60(0xC)
		FVehicleDigestedPIDController SteeringPIDController; // 0x6C(0xC)
		FVehicleDigestedAppendToPath AppendToPath; // 0x78(0x8)
		FVehicleDigestedTurnInPlace TurnInPlace; // 0x80(0x18)
		FGameplayTagContainer ModsTags; // 0x98(0x20)
	};


	// Struct FortniteAI.DigestedVehicleDrivingCategory
	// Size: 0xD8 (0xD8 - 0x0)
	struct FDigestedVehicleDrivingCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FDigestedVehicleDriving VehicleDriving; // 0x20(0xB8)
	};


	// Struct FortniteAI.VehicleDriving
	// Size: 0x328 (0x328 - 0x0)
	struct FVehicleDriving	
	{
	public:
		bool bCanTurnInPlace; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVehicleTurnInPlace TurnInPlace; // 0x8(0xD0)
		FScalableFloat ReverseSwapLeftAndRight; // 0xD8(0x28)
		FScalableFloat MinimumForwardPIDValueForStopping; // 0x100(0x28)
		FScalableFloat MinimumDistanceLeftForBoosting; // 0x128(0x28)
		FVehiclePIDController ForwardPIDController; // 0x150(0x78)
		FVehiclePIDController SteeringPIDController; // 0x1C8(0x78)
		bool bAvoidanceEnabled; // 0x240(0x1)
		bool bPreventTurningWhenStopping; // 0x241(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x242(0x6) UNKNOWN PROPERTY
		FGameplayTagQuery AvoidanceTagQuery; // 0x248(0x48)
		FScalableFloat NavigationOffsetFromObstacles; // 0x290(0x28)
		FVehicleAppendToPath AppendToPath; // 0x2B8(0x50)
		FGameplayTagContainer ModsTags; // 0x308(0x20)
	};


	// Struct FortniteAI.VehicleDrivingCategory
	// Size: 0x348 (0x348 - 0x0)
	struct FVehicleDrivingCategory	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FVehicleDriving VehicleDriving; // 0x20(0x328)
	};


	// Struct FortniteAI.FortAthenaAIObjectTrackerQuerySimplified
	// Size: 0x80 (0x80 - 0x0)
	struct FFortAthenaAIObjectTrackerQuerySimplified	
	{
	public:
		EFortAthenaAIObjectTrackerQueryOrder PickOrder; // 0x0(0x1)
		bool bMustBeUsable; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FGameplayTagQuery RequiredTagsQuery; // 0x8(0x48)
		FVector MaximumDistance; // 0x50(0x18)
		AFortPlayspace* RequiredToBeInPlayspace; // 0x68(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAthenaAIObjectTrackerQuery
	// Inherited from FFortAthenaAIObjectTrackerQuerySimplified
	// Size: 0x18 (0x98 - 0x80)
	struct FFortAthenaAIObjectTrackerQuery : public FFortAthenaAIObjectTrackerQuerySimplified	
	{
	public:
		FVector StartLocation; // 0x80(0x18)
	};


	// Struct FortniteAI.FortSmartObjectCustomVerb
	// Size: 0xC (0xC - 0x0)
	struct FFortSmartObjectCustomVerb	
	{
	public:
		FGameplayTag VerbTag; // 0x0(0x4)
		FName InstigatorName; // 0x4(0x4)
		FName ActivityName; // 0x8(0x4)
	};


	// Struct FortniteAI.FortSmartObjectSlotDefinitionData
	// Inherited from FSmartObjectDefinitionData
	// Size: 0x28 (0x30 - 0x8)
	struct FFortSmartObjectSlotDefinitionData : public FSmartObjectDefinitionData	
	{
	public:
		float CooldownOnFinished; // 0x8(0x4)
		float CooldownOnInterrupted; // 0xC(0x4)
		float Radius; // 0x10(0x4)
		float SlotCooldownOnFinished; // 0x14(0x4)
		float SlotCooldownOnInterrupted; // 0x18(0x4)
		EFortAthenaSmartObjectPriority Priority; // 0x1C(0x1)
		EFortAthenaSmartObjectUrgency Urgency; // 0x1D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
		TArray<FFortSmartObjectCustomVerb> CustomVerbs; // 0x20(0x10)
	};


	// Struct FortniteAI.FortAthenaSmartObjectSlotStateData
	// Inherited from FSmartObjectSlotStateData
	// Size: 0x4 (0x4 - 0x0)
	struct FFortAthenaSmartObjectSlotStateData : public FSmartObjectSlotStateData	
	{
	public:
		unsigned char UnknownData00_1[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.SmartObjectRecentlyUsed
	// Size: 0x20 (0x20 - 0x0)
	struct FSmartObjectRecentlyUsed	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AIRuntimeParametersSmartObjectActivityCondition
	// Size: 0x48 (0x48 - 0x0)
	struct FAIRuntimeParametersSmartObjectActivityCondition	
	{
	public:
		FGameplayTagQuery SmartObjectActivityConditionTagQuery; // 0x0(0x48)
	};


	// Struct FortniteAI.AIRuntimeParametersSmartObjectActivityConfig
	// Size: 0x58 (0x58 - 0x0)
	struct FAIRuntimeParametersSmartObjectActivityConfig	
	{
	public:
		FGameplayTagQuery ActivityRequirements; // 0x0(0x48)
		float MaxDetectionRadius; // 0x48(0x4)
		float MaxDetectionRadiusSqr; // 0x4C(0x4)
		float ActivityCooldownOnFinished; // 0x50(0x4)
		float ActivityCooldownOnInterrupted; // 0x54(0x4)
	};


	// Struct FortniteAI.AIRuntimeParametersSmartObjectActivity
	// Size: 0xB0 (0xB0 - 0x0)
	struct FAIRuntimeParametersSmartObjectActivity	
	{
	public:
		FAIRuntimeParametersSmartObjectActivityCondition SmartObjectActivityCondition; // 0x0(0x48)
		FAIRuntimeParametersSmartObjectActivityConfig SmartObjectActivityConfig; // 0x48(0x58)
		bool bEnabled : 1; // 0xA0:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		int32_t ActivityId; // 0xA4(0x4)
		float LastUseTimestamp; // 0xA8(0x4)
		float Cooldown; // 0xAC(0x4)
	};


	// Struct FortniteAI.FortAthenaAISmartObjectActivityCondition
	// Size: 0x48 (0x48 - 0x0)
	struct FFortAthenaAISmartObjectActivityCondition	
	{
	public:
		FGameplayTagQuery SmartObjectActivityConditionTagQuery; // 0x0(0x48)
	};


	// Struct FortniteAI.FortAthenaAISmartObjectActivityConfig
	// Size: 0xC0 (0xC0 - 0x0)
	struct FFortAthenaAISmartObjectActivityConfig	
	{
	public:
		FGameplayTagQuery ActivityRequirements; // 0x0(0x48)
		FScalableFloat MaxDetectionRadius; // 0x48(0x28)
		FScalableFloat ActivityCooldownOnFinished; // 0x70(0x28)
		FScalableFloat ActivityCooldownOnInterrupted; // 0x98(0x28)
	};


	// Struct FortniteAI.SpawnerDataComponentAffiliationSharedBBConfiguration
	// Size: 0x40 (0x40 - 0x0)
	struct FSpawnerDataComponentAffiliationSharedBBConfiguration	
	{
	public:
		FGameplayTag FactionTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FScalableFloat MaximumDistance; // 0x8(0x28)
		FGameplayTag SharedBlackboardTag; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UBlackboardData* SharedBlackboard; // 0x38(0x8)
	};


	// Struct FortniteAI.EscalateBehaviorSettings
	// Size: 0x198 (0x198 - 0x0)
	struct FEscalateBehaviorSettings	
	{
	public:
		FScalableFloat EscalateBehaviorEnabled; // 0x0(0x28)
		FScalableFloat EscalateMeterFillTime; // 0x28(0x28)
		FScalableFloat EscalateVisionAngleCutoff; // 0x50(0x28)
		FScalableFloat EscalatePlayerOnPathForwardDistance; // 0x78(0x28)
		FScalableFloat EscalatePlayerOnPathPerpindicularDistance; // 0xA0(0x28)
		FScalableFloat EscalatePlayerOnPathZCutoff; // 0xC8(0x28)
		FScalableFloat EscalatePlayerAimingAngleCutoff; // 0xF0(0x28)
		FScalableFloat StopEscalateRequiredDistance; // 0x118(0x28)
		FScalableFloat StopEscalateRequiredTime; // 0x140(0x28)
		FScalableFloat StopEscalateAngleCutoff; // 0x168(0x28)
		FGameplayTag EscalateDefaultSpeechTag; // 0x190(0x4)
		FGameplayTag EscalateAimingSpeechTag; // 0x194(0x4)
	};


	// Struct FortniteAI.PatrolBehaviorSettings
	// Size: 0x48 (0x48 - 0x0)
	struct FPatrolBehaviorSettings	
	{
	public:
		TWeakObjectPtr<UAthenaDanceItemDefinition*> PatrolEmote; // 0x0(0x20)
		FScalableFloat PatrolSpeed; // 0x20(0x28)
	};


	// Struct FortniteAI.ConstructionBuildingList
	// Size: 0x90 (0x90 - 0x0)
	struct FConstructionBuildingList	
	{
	public:
		FConstructionBuildingInfo BuildingList; // 0x0(0x90)
	};


	// Struct FortniteAI.ConstructionBuildingInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FConstructionBuildingInfo	
	{
	public:
		UClass* BuildingActorClass; // 0x0(0x18)
	};


	// Struct FortniteAI.FortAthenaAIWeightedCosmeticLoadout
	// Size: 0x158 (0x158 - 0x0)
	struct FFortAthenaAIWeightedCosmeticLoadout	
	{
	public:
		FFortAthenaLoadout CosmeticLoadout; // 0x0(0x130)
		FScalableFloat Weight; // 0x130(0x28)
	};


	// Struct FortniteAI.InitialGameplayEffectInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FInitialGameplayEffectInfo	
	{
	public:
		UClass* GameplayEffect; // 0x0(0x8)
		float Level; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.TeleportSettings
	// Size: 0x38 (0x38 - 0x0)
	struct FTeleportSettings	
	{
	public:
		FScalableFloat CheckTeleportConditionsTimeInterval; // 0x0(0x28)
		float TeleportRange; // 0x28(0x4)
		float TimeNeededOutsideTeleportRange; // 0x2C(0x4)
		FGameplayTag TeleportAbilityTag; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.PickupTagConvertInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FPickupTagConvertInfo	
	{
	public:
		FGameplayTagContainer PickupTags; // 0x0(0x20)
		FScalableFloat ConvertDamage; // 0x20(0x28)
	};


	// Struct FortniteAI.AILootInfoRowEntry
	// Size: 0x110 (0x110 - 0x0)
	struct FAILootInfoRowEntry	
	{
	public:
		FGameplayTagQuery OptionalTagQuery; // 0x0(0x48)
		FGameplayTagQuery OptionalPlaylistTagQuery; // 0x48(0x48)
		bool bShouldDropInventoryOnDeath : 1; // 0x90:0(0x1)
		bool bShouldDropLootOnDeath : 1; // 0x90:1(0x1)
		bool bShouldGrantLootOnSpawn : 1; // 0x90:2(0x1)
		bool bShouldBotPickRandomLootTier : 1; // 0x90:3(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		TArray<FName> LootTiers; // 0x98(0x10)
		TArray<UClass*> ItemClassToDropOnDeathInsteadOfGrant; // 0xA8(0x10)
		TArray<TWeakObjectPtr> ItemToDropOnDeathInsteadOfGrant; // 0xB8(0x10)
		FGameplayTagQuery ItemTagQueryToDropOnDeathInsteadOfGrant; // 0xC8(0x48)
	};


	// Struct FortniteAI.FortAthenaAILootInfoDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortAthenaAILootInfoDataTableRow : public FTableRowBase	
	{
	public:
		TArray<FAILootInfoRowEntry> LootDroppingBehaviors; // 0x8(0x10)
	};


	// Struct FortniteAI.WeightedAIInventoryLoadout
	// Size: 0x38 (0x38 - 0x0)
	struct FWeightedAIInventoryLoadout	
	{
	public:
		FScalableFloat Weight; // 0x0(0x28)
		TArray<FItemAndCount> Items; // 0x28(0x10)
	};


	// Struct FortniteAI.FortBotTargetInfo
	// Size: 0x148 (0x148 - 0x0)
	struct FFortBotTargetInfo	
	{
	public:
		AActor* SourceActor; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		AActor* SupportingActor; // 0x10(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x18(0x18) UNKNOWN PROPERTY
		ABuildingActor* AlternateTargetingActor; // 0x30(0x8)
		unsigned char UnknownData02_7[0x110]; // 0x38(0x110) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBotThreatActorInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FFortBotThreatActorInfo	
	{
	public:
		AActor* ThreatActor; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBotTargetHandler
	// Size: 0x40 (0x40 - 0x0)
	struct FFortBotTargetHandler	
	{
	public:
		TArray<FFortBotTargetInfo> Targets; // 0x0(0x10)
		unsigned char UnknownData00_7[0x30]; // 0x10(0x30) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.BotDelayedStimulus
	// Size: 0x68 (0x68 - 0x0)
	struct FBotDelayedStimulus	
	{
	public:
		AActor* SourceActor; // 0x0(0x8)
		unsigned char UnknownData00_7[0x60]; // 0x8(0x60) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.BotPerceivedSound
	// Size: 0x28 (0x28 - 0x0)
	struct FBotPerceivedSound	
	{
	public:
		AActor* SourceActor; // 0x0(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x8(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.PatrolPathLeash
	// Size: 0x60 (0x60 - 0x0)
	struct FPatrolPathLeash	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x0(0x48)
		float Width; // 0x48(0x4)
		float Height; // 0x4C(0x4)
		bool bHasInnerLeash; // 0x50(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		float InnerWidth; // 0x54(0x4)
		float InnerHeight; // 0x58(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.LeashInfoOverride
	// Size: 0x8 (0x8 - 0x0)
	struct FLeashInfoOverride	
	{
	public:
		float LeashInnerRadius; // 0x0(0x4)
		float LeashOuterRadius; // 0x4(0x4)
	};


	// Struct FortniteAI.QueryableTagContainerEntry
	// Size: 0x68 (0x68 - 0x0)
	struct FQueryableTagContainerEntry	
	{
	public:
		FGameplayTagQuery Query; // 0x0(0x48)
		FGameplayTagContainer Tags; // 0x48(0x20)
	};


	// Struct FortniteAI.QueryableTagContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FQueryableTagContainer	
	{
	public:
		TArray<FQueryableTagContainerEntry> Entries; // 0x0(0x10)
	};


	// Struct FortniteAI.TrapPerceptionSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FTrapPerceptionSettings	
	{
	public:
		unsigned char UnknownData00_2[0x14]; // 0x0(0x14) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.TrapDetectionState
	// Size: 0x8 (0x8 - 0x0)
	struct FTrapDetectionState	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIRuntimePerkInfo_Bunker
	// Inherited from FFortAIRuntimePerkInfo
	// Size: 0x28 (0x68 - 0x40)
	struct FFortAIRuntimePerkInfo_Bunker : public FFortAIRuntimePerkInfo	
	{
	public:
		float OddsToBeUsedAgainstUnknownThreat; // 0x40(0x4)
		float OddsToUseRoofBuilding; // 0x44(0x4)
		float OddsToBuildForwardRamp; // 0x48(0x4)
		float InitialBuildDelay; // 0x4C(0x4)
		float SamePieceBuildDelay; // 0x50(0x4)
		float SamePieceBuildDelayRandomDeviation; // 0x54(0x4)
		float DifferentPieceBuildDelay; // 0x58(0x4)
		float DifferentPieceBuildDelayRandomDeviation; // 0x5C(0x4)
		float OddsToSelectRandomMaterial; // 0x60(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortAIRuntimePerkInfo_EvasiveManeuvers
	// Inherited from FFortAIRuntimePerkInfo
	// Size: 0x60 (0xA0 - 0x40)
	struct FFortAIRuntimePerkInfo_EvasiveManeuvers : public FFortAIRuntimePerkInfo	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0x40(0x58) UNKNOWN PROPERTY
		float DistanceMinSquared; // 0x98(0x4)
		float DistanceMaxSquared; // 0x9C(0x4)
	};


	// Struct FortniteAI.BotDebugInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FBotDebugInfo	
	{
	public:
		int32_t BotID; // 0x0(0x4)
		int32_t SquadID; // 0x4(0x4)
		FString BTActiveTasks; // 0x8(0x10)
		EAlertLevel AlertLevel; // 0x18(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FVector Location; // 0x20(0x18)
	};


	// Struct FortniteAI.BotPOIDebugInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FBotPOIDebugInfo	
	{
	public:
		int32_t ID; // 0x0(0x4)
		bool bEnabled; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FBox Box; // 0x8(0x38)
		int32_t Weight; // 0x40(0x4)
		EBotPOIType Type; // 0x44(0x1)
		char Usage; // 0x45(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
		int32_t NavMeshLocationsCount; // 0x48(0x4)
		bool bIsMainPOI; // 0x4C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		FString DebugInfo; // 0x50(0x10)
	};


	// Struct FortniteAI.BotPOIExcludedZonesDebugInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FBotPOIExcludedZonesDebugInfo	
	{
	public:
		FBox Box; // 0x0(0x38)
		char UsagesToExclude; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.ClientAIPlayerList
	// Size: 0x18 (0x18 - 0x0)
	struct FClientAIPlayerList	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AIPopulationCountSnapshot
	// Size: 0x14 (0x14 - 0x0)
	struct FAIPopulationCountSnapshot	
	{
	public:
		int32_t NumTotalSpawnedBots; // 0x0(0x4)
		int32_t NumAliveBots; // 0x4(0x4)
		int32_t NumAlivePlayerBots; // 0x8(0x4)
		int32_t NumAliveNPCBots; // 0xC(0x4)
		int32_t NumAliveAIPawns; // 0x10(0x4)
	};


	// Struct FortniteAI.AthenaAIServiceGroupInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FAthenaAIServiceGroupInfo	
	{
	public:
		int32_t GroupId; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFortPawnComponent_AIGroup* GroupLeader; // 0x8(0x8)
		TArray<UFortPawnComponent_AIGroup*> GroupMembers; // 0x10(0x10)
		FGameplayTagContainer GroupTags; // 0x20(0x20)
	};


	// Struct FortniteAI.CachedSupplyDrop
	// Size: 0x28 (0x28 - 0x0)
	struct FCachedSupplyDrop	
	{
	public:
		AFortAthenaSupplyDrop* supplydrop; // 0x0(0x8)
		bool bInOctree; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FVector LastLocation; // 0x10(0x18)
	};


	// Struct FortniteAI.MovingLootInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FMovingLootInfo	
	{
	public:
		FVector LastLocationInOctree; // 0x0(0x18)
	};


	// Struct FortniteAI.ClusterLoot
	// Size: 0x40 (0x40 - 0x0)
	struct FClusterLoot	
	{
	public:
		FBox ClusterBox; // 0x0(0x38)
		int32_t Weight; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBotClusterLootWeightDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FFortBotClusterLootWeightDataTableRow : public FTableRowBase	
	{
	public:
		FGameplayTag Tag; // 0x8(0x4)
		int32_t Weight; // 0xC(0x4)
	};


	// Struct FortniteAI.BattleBusPOI
	// Size: 0x90 (0x90 - 0x0)
	struct FBattleBusPOI	
	{
	public:
		FScalableFloat IsEnabled; // 0x0(0x28)
		FGameplayTagQuery POIFilterQuery; // 0x28(0x48)
		TArray<AFortPoiVolume*> ValidPOIVolumeList; // 0x70(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x80(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.NavigationPOI
	// Size: 0x80 (0x80 - 0x0)
	struct FNavigationPOI	
	{
	public:
		FScalableFloat IsEnabled; // 0x0(0x28)
		FGameplayTagQuery POIFilterQuery; // 0x28(0x48)
		TArray<AFortPoiVolume*> ValidPOIVolumeList; // 0x70(0x10)
	};


	// Struct FortniteAI.CachedPOIVolumeLocations
	// Size: 0x20 (0x20 - 0x0)
	struct FCachedPOIVolumeLocations	
	{
	public:
		AFortPoiVolume* POIVolume; // 0x0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortServerBotInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FFortServerBotInfo	
	{
	public:
		AFortAthenaAIBotController* BotController; // 0x0(0x8)
		AFortPoiVolume* SelectedPoiVolume; // 0x8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBotBackfillSpawnRequest
	// Size: 0x18 (0x18 - 0x0)
	struct FFortBotBackfillSpawnRequest	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.MMRSpawningInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FMMRSpawningInfo	
	{
	public:
		unsigned char UnknownData00_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.MMRSpawningPlayerBotsRuntimeInfo
	// Inherited from FMMRSpawningBaseRuntimeInfo
	// Size: 0x28 (0x38 - 0x10)
	struct FMMRSpawningPlayerBotsRuntimeInfo : public FMMRSpawningBaseRuntimeInfo	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
		TArray<FMMRSpawningInfo> SpawningInfos; // 0x20(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.UpdateBotSkillInfo
	// Size: 0xC (0xC - 0x0)
	struct FUpdateBotSkillInfo	
	{
	public:
		unsigned char UnknownData00_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBotDisablePOIRequest
	// Size: 0x10 (0x10 - 0x0)
	struct FFortBotDisablePOIRequest	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		UAthenaAIServicePlayerBots* CachedAIServicePlayerBots; // 0x8(0x8)
	};


	// Struct FortniteAI.AthenaAITrackedZone
	// Size: 0x30 (0x30 - 0x0)
	struct FAthenaAITrackedZone	
	{
	public:
		unsigned char UnknownData00_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.BotPOI
	// Size: 0x70 (0x70 - 0x0)
	struct FBotPOI	
	{
	public:
		int32_t ID; // 0x0(0x4)
		bool bEnabled; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FBox Box; // 0x8(0x38)
		int32_t Weight; // 0x40(0x4)
		EBotPOIType Type; // 0x44(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		TArray<FVector> NavMeshLocations; // 0x48(0x10)
		bool bIsMainPOI; // 0x58(0x1)
		char Usage; // 0x59(0x1)
		unsigned char UnknownData02_7[0x16]; // 0x5A(0x16) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.BotPOIExcludedZone
	// Size: 0x40 (0x40 - 0x0)
	struct FBotPOIExcludedZone	
	{
	public:
		FBox Box; // 0x0(0x38)
		char UsagesToExclude; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortBotPOIExcludedZoneDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x98 (0xA0 - 0x8)
	struct FFortBotPOIExcludedZoneDataTableRow : public FTableRowBase	
	{
	public:
		FVector Location; // 0x8(0x18)
		FVector BoxHalfSize; // 0x20(0x18)
		char UsagesToExclude; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery PlaylistQuery; // 0x40(0x48)
		FString MapPath; // 0x88(0x10)
		bool bEnabled; // 0x98(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortWorldConditionAthenaGamePhase
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FFortWorldConditionAthenaGamePhase : public FWorldConditionCommonBase	
	{
	public:
		EAthenaGamePhaseStep PhaseStep; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t SafeZonePhase; // 0x14(0x4)
	};


	// Struct FortniteAI.WorldConditionControllerBase
	// Inherited from FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FWorldConditionControllerBase : public FWorldConditionBase	
	{
	public:
		FWorldConditionContextDataRef ControllerRef; // 0x10(0x8)
	};


	// Struct FortniteAI.WorldConditionBotControllerBase
	// Inherited from FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FWorldConditionBotControllerBase : public FWorldConditionBase	
	{
	public:
		FWorldConditionContextDataRef BotControllerRef; // 0x10(0x8)
	};


	// Struct FortniteAI.WorldConditionHasReceivedDamageFromTarget
	// Inherited from FWorldConditionBotControllerBase -> FWorldConditionBase
	// Size: 0x8 (0x20 - 0x18)
	struct FWorldConditionHasReceivedDamageFromTarget : public FWorldConditionBotControllerBase	
	{
	public:
		FWorldConditionContextDataRef TargetActorRef; // 0x18(0x8)
	};


	// Struct FortniteAI.FortWorldConditionDistanceCheck
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x40 (0x50 - 0x10)
	struct FFortWorldConditionDistanceCheck : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef SourceActorRef; // 0x10(0x8)
		FWorldConditionContextDataRef TargetActorRef; // 0x18(0x8)
		FScalableFloat Distance; // 0x20(0x28)
		TEnumAsByte<EArithmeticKeyOperation> Operation; // 0x48(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortWorldConditionFacing
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x40 (0x50 - 0x10)
	struct FFortWorldConditionFacing : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef SourceActorRef; // 0x10(0x8)
		FWorldConditionContextDataRef TargetActorRef; // 0x18(0x8)
		FScalableFloat CutoffAngle; // 0x20(0x28)
		unsigned char UnknownData00_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortWorldConditionInSafeZone
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FFortWorldConditionInSafeZone : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
	};


	// Struct FortniteAI.WorldConditionPawnBase
	// Inherited from FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FWorldConditionPawnBase : public FWorldConditionBase	
	{
	public:
		FWorldConditionContextDataRef PawnRef; // 0x10(0x8)
	};


	// Struct FortniteAI.WorldConditionFortPawnBase
	// Inherited from FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FWorldConditionFortPawnBase : public FWorldConditionBase	
	{
	public:
		FWorldConditionContextDataRef FortPawnRef; // 0x10(0x8)
	};


	// Struct FortniteAI.FortWorldConditionFactionAlliesCheck
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0xA8 (0xB8 - 0x10)
	struct FFortWorldConditionFactionAlliesCheck : public FWorldConditionCommonActorBase	
	{
	public:
		FScalableFloat Radius; // 0x10(0x28)
		FGameplayTagQuery AlliesTagQuery; // 0x38(0x48)
		FScalableFloat NumberOfAllies; // 0x80(0x28)
		TEnumAsByte<EArithmeticKeyOperation> Operation; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		FWorldConditionContextDataRef ActorRef; // 0xAC(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortWorldConditionIsMoving
	// Inherited from FWorldConditionPawnBase -> FWorldConditionBase
	// Size: 0x30 (0x48 - 0x18)
	struct FFortWorldConditionIsMoving : public FWorldConditionPawnBase	
	{
	public:
		FScalableFloat SpeedThreshold; // 0x18(0x28)
		TEnumAsByte<EArithmeticKeyOperation> Operation; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortWorldConditionHealthCheck
	// Inherited from FWorldConditionFortPawnBase -> FWorldConditionBase
	// Size: 0x30 (0x48 - 0x18)
	struct FFortWorldConditionHealthCheck : public FWorldConditionFortPawnBase	
	{
	public:
		FScalableFloat HealthThresholdRatio; // 0x18(0x28)
		TEnumAsByte<EArithmeticKeyOperation> Operation; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.FortWorldConditionPerceivedHostilePlayer
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FFortWorldConditionPerceivedHostilePlayer : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
	};


	// Struct FortniteAI.WorldConditionFortWeaponBase
	// Inherited from FWorldConditionBase
	// Size: 0x8 (0x18 - 0x10)
	struct FWorldConditionFortWeaponBase : public FWorldConditionBase	
	{
	public:
		FWorldConditionContextDataRef WeaponActorRef; // 0x10(0x8)
	};


	// Struct FortniteAI.FortWorldConditionIsReloading
	// Inherited from FWorldConditionFortWeaponBase -> FWorldConditionBase
	// Size: 0x0 (0x18 - 0x18)
	struct FFortWorldConditionIsReloading : public FWorldConditionFortWeaponBase	
	{
	public:
	};


	// Struct FortniteAI.GameDifficultyInfo
	// Inherited from FTableRowBase
	// Size: 0x88 (0x90 - 0x8)
	struct FGameDifficultyInfo : public FTableRowBase	
	{
	public:
		bool bIsOnboarding; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float Difficulty; // 0xC(0x4)
		float DifficultyMatchmakingMinOverride; // 0x10(0x4)
		float DifficultyMatchmakingMaxOverride; // 0x14(0x4)
		int32_t LootLevel; // 0x18(0x4)
		ERatingsEnforcementType RatingsEnforcement; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		int32_t RequiredRating; // 0x20(0x4)
		int32_t MaximumRating; // 0x24(0x4)
		int32_t PvPRating; // 0x28(0x4)
		int32_t RecommendedRating; // 0x2C(0x4)
		float ScoreBonus; // 0x30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FString LootTierGroup; // 0x38(0x10)
		FString BonusLootTierGroup; // 0x48(0x10)
		FString DifficultyIncreaseLootTierGroup; // 0x58(0x10)
		int32_t NumDifficultyIncreases; // 0x68(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FText ThreatDisplayName; // 0x70(0x10)
		FName ColorParamName; // 0x80(0x4)
		int32_t DefaultPlayerLives; // 0x84(0x4)
		FName PlayerStatClampRowName; // 0x88(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAI.AttributeClamp
	// Size: 0x40 (0x40 - 0x0)
	struct FAttributeClamp	
	{
	public:
		FGameplayAttribute Attribute; // 0x0(0x38)
		EClampType ClampType; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float ClampValue; // 0x3C(0x4)
	};


	// Struct FortniteAI.PlayerClampInfo
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FPlayerClampInfo : public FTableRowBase	
	{
	public:
		TArray<FAttributeClamp> AttributeClamps; // 0x8(0x10)
	};


	// Struct FortniteAI.GameRewardOverridesInfo
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FGameRewardOverridesInfo : public FTableRowBase	
	{
	public:
		FString MissionName; // 0x8(0x10)
		FString OverrideRewardsTag; // 0x18(0x10)
		int32_t LootLevel; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString LootTierGroup; // 0x30(0x10)
	};

}
