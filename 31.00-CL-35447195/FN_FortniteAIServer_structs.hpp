#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortniteAIServer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FortniteAIServer.BotEvaluatorCommandCooldown
	// Size: 0x18 (0x18 - 0x0)
	struct FBotEvaluatorCommandCooldown	
	{
	public:
		FFortAIActiveCommandSOUsageData Command; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.BotEvaluatorSmartObjectConvertedData
	// Size: 0x8 (0x8 - 0x0)
	struct FBotEvaluatorSmartObjectConvertedData	
	{
	public:
		USmartObjectComponent SmartObjectComponent; // 0x0(0x8)
	};


	// Struct FortniteAIServer.TokenEQSParameter
	// Size: 0x14 (0x14 - 0x0)
	struct FTokenEQSParameter	
	{
	public:
		FName ParamName; // 0x0(0x4)
		EAIParamType ParamType; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float DefaultValue; // 0x8(0x4)
		FName BlackboardKeyName; // 0xC(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x10(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.PositioningEQS
	// Size: 0x80 (0x80 - 0x0)
	struct FPositioningEQS	
	{
	public:
		FGameplayTagQuery ItemTagQuery; // 0x0(0x48)
		UEnvQuery QueryTemplate; // 0x48(0x8)
		TArray QueryConfig; // 0x50(0x10)
		bool bAllowStayingOnSamePosition; // 0x60(0x1)
		bool bRequestNewPosititonOnProviderRecomputed; // 0x61(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x62(0x2) UNKNOWN PROPERTY
		FValueOrBBKey_Bool AllowStayingOnSamePosition; // 0x64(0xC)
		FValueOrBBKey_Float TimerForNewPositionOnProviderRecomputed; // 0x70(0xC)
		unsigned char UnknownData03_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.EquippedItemTagAssociationData
	// Size: 0x90 (0x90 - 0x0)
	struct FEquippedItemTagAssociationData	
	{
	public:
		FGameplayTagQuery ItemTagQuery; // 0x0(0x48)
		FGameplayTagQuery TokenSystemTagQuery; // 0x48(0x48)
	};


	// Struct FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData	
	{
	public:
		FStateTreeStructRef SoftDisableStateReference; // 0x0(0x10)
		TArray ActorsToTeleportOnFailure; // 0x10(0x10)
	};


	// Struct FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaHandleSoftDisableGuardStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaSoftDisableStateTreeParameter
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAthenaSoftDisableStateTreeParameter	
	{
	public:
		TArray ActorsToTeleportOnExit; // 0x0(0x10)
	};


	// Struct FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTaskInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FFortAthenaHandleSoftDisableStateTreeTaskInstanceData	
	{
	public:
		AActor SmartObjectActor; // 0x0(0x8)
		TArray ActorsToCleanup; // 0x8(0x10)
		bool bHasReceivedSoftDisableEvent; // 0x18(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FGameplayTag ReceivedSoftDisableEvent; // 0x1C(0x4)
		FFortAthenaSoftDisableStateTreeParameter OutState; // 0x20(0x10)
	};


	// Struct FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x38 (0x58 - 0x20)
	struct FFortAthenaHandleSoftDisableStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		FGameplayTag StateTreeEventTag; // 0x20(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector TeleportOnNavmeshQueryBoxExtents; // 0x28(0x18)
		int32_t MaxTeleportToTryPerActor; // 0x40(0x4)
		bool bEnableNavmeshTeleportForPlayers; // 0x44(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		float MultiplierOnCapsuleHalfHeightForTeleportLocation; // 0x48(0x4)
		float MultiplierOnCapsuleRadiusForFallbackTeleportSweepCastSize; // 0x4C(0x4)
		float MultiplierOnCapsuleHeightForFallbackTeleportSweepCasts; // 0x50(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaPickAnimByWorldConditionsConfig
	// Size: 0x58 (0x58 - 0x0)
	struct FFortAthenaPickAnimByWorldConditionsConfig	
	{
	public:
		UAnimMontage Montage; // 0x0(0x8)
		UContextualAnimSceneAsset SceneAsset; // 0x8(0x8)
		FWorldConditionQueryDefinition RequiredConditions; // 0x10(0x18)
		FWorldConditionQueryState QueryState; // 0x28(0x30)
	};


	// Struct FortniteAIServer.FortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData
	// Size: 0x38 (0x38 - 0x0)
	struct FFortAthenaPickAnimByWorldConditionsStateTreeTaskInstanceData	
	{
	public:
		TArray PossibleAnims; // 0x0(0x10)
		AActor ActorAForWorldConditions; // 0x10(0x8)
		AActor ActorBForWorldConditions; // 0x18(0x8)
		AActor ActorCForWorldConditions; // 0x20(0x8)
		UAnimMontage PickedMontage; // 0x28(0x8)
		UContextualAnimSceneAsset PickedSceneAsset; // 0x30(0x8)
	};


	// Struct FortniteAIServer.FortAthenaPickAnimByWorldConditionsStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaPickAnimByWorldConditionsStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaPickRandomMontageConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAthenaPickRandomMontageConfig	
	{
	public:
		UAnimMontage Montage; // 0x0(0x8)
		int32_t RandomWeight; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaPickRandomMontageStateTreeTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortAthenaPickRandomMontageStateTreeTaskInstanceData	
	{
	public:
		TArray PossibleMontages; // 0x0(0x10)
		UAnimMontage PickedMontage; // 0x10(0x8)
	};


	// Struct FortniteAIServer.FortAthenaPickRandomMontageStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaPickRandomMontageStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAthenaToggleAllowInteractStateTreeTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		AActor TargetActor; // 0x8(0x8)
	};


	// Struct FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortAthenaToggleAllowInteractStateTreeTaskTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		EFortAthenaStateTreeTaskFeatureExecutionMode AddExecutionMode; // 0x20(0x4)
		EFortAthenaStateTreeTaskFeatureExecutionMode RemoveExecutionMode; // 0x24(0x4)
	};


	// Struct FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAthenaTrackEventConsumeStateTreeTaskInstanceData	
	{
	public:
		FStateTreeStructRef ReferencedEvent; // 0x0(0x10)
	};


	// Struct FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaTrackEventConsumeStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaTrackEventStateTreeTaskStateTreeParameter
	// Size: 0x8 (0x8 - 0x0)
	struct FFortAthenaTrackEventStateTreeTaskStateTreeParameter	
	{
	public:
		bool bHasReceivedTrackedEvent; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FGameplayTag ReceivedEventTag; // 0x4(0x4)
	};


	// Struct FortniteAIServer.FortAthenaTrackEventStateTreeTaskInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FFortAthenaTrackEventStateTreeTaskInstanceData	
	{
	public:
		FFortAthenaTrackEventStateTreeTaskStateTreeParameter OutParameter; // 0x0(0x8)
	};


	// Struct FortniteAIServer.FortAthenaTrackEventStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x50 (0x70 - 0x20)
	struct FFortAthenaTrackEventStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		FGameplayTagQuery EventTagQuery; // 0x20(0x48)
		FGameplayTag StateTreeEventTag; // 0x68(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaWorldConditionInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FFortAthenaWorldConditionInstanceData	
	{
	public:
		AActor ActorA; // 0x0(0x8)
		AActor ActorB; // 0x8(0x8)
		AActor ActorC; // 0x10(0x8)
		bool bOutResult; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FWorldConditionQueryState QueryState; // 0x20(0x30)
	};


	// Struct FortniteAIServer.FortAthenaWorldConditionInstanceDataStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x20 (0x40 - 0x20)
	struct FFortAthenaWorldConditionInstanceDataStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		FWorldConditionQueryDefinition Conditions; // 0x20(0x18)
		FGameplayTag StateTreeEventTag; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.OnInjectedBehaviorEndedStateTreeEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FOnInjectedBehaviorEndedStateTreeEvent	
	{
	public:
		EExecutionStatus ExecutionStatus; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UFortInjectedBehavior InjectedBehavior; // 0x8(0x8)
		TWeakObjectPtr Item; // 0x10(0x8)
	};


	// Struct FortniteAIServer.FortBTService_InjectionTagKey
	// Size: 0xC (0xC - 0x0)
	struct FFortBTService_InjectionTagKey	
	{
	public:
		FGameplayTag InjectionTag; // 0x0(0x4)
		FName InjectionKeyName; // 0x4(0x4)
		bool bHasBehaviorTreeSubtask; // 0x8(0x1)
		bool bHasStateTreeSubtask; // 0x9(0x1)
		bool bShareSameExecutionKey; // 0xA(0x1)
		unsigned char UnknownData01_7[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotCrouchTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeBotCrouchTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController BotController; // 0x0(0x8)
		bool bShouldCrouch; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotCrouchTask
	// Inherited from FStateTreeAIActionTaskBase -> FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeBotCrouchTask : public FStateTreeAIActionTaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeBotEquipItemTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortStateTreeBotEquipItemTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController Controller; // 0x0(0x8)
		UFortWorldItem ItemToEquip; // 0x8(0x8)
		bool bValidateAbility; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotEquipItemTask
	// Inherited from FStateTreeAIActionTaskBase -> FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeBotEquipItemTask : public FStateTreeAIActionTaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetItemFromInventoryTaskInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortStateTreeGetItemFromInventoryTaskInstanceData	
	{
	public:
		AController Controller; // 0x0(0x8)
		FItemVariantHandle ItemVariant; // 0x8(0x18)
		UFortWorldItem Item; // 0x20(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeGetItemFromInventoryTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortStateTreeGetItemFromInventoryTask : public FStateTreeAITaskBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotSprintTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeBotSprintTaskInstanceData	
	{
	public:
		APawn Pawn; // 0x0(0x8)
		bool bShouldSprint; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotSprintTask
	// Inherited from FStateTreeAIActionTaskBase -> FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x20 (0x40 - 0x20)
	struct FFortStateTreeBotSprintTask : public FStateTreeAIActionTaskBase	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x20(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotFireWeaponTaskInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FFortStateTreeBotFireWeaponTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController BotController; // 0x0(0x8)
		EForstStateTreeFireWeaponBehavior Behavior; // 0x8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TArray FiringTimes; // 0x10(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotFireWeaponTask
	// Inherited from FStateTreeAIActionTaskBase -> FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeBotFireWeaponTask : public FStateTreeAIActionTaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeBotGetCurrentWeaponTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeBotGetCurrentWeaponTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController BotController; // 0x0(0x8)
		AFortWeapon CurrentWeapon; // 0x8(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeBotGetCurrentWeaponTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeBotGetCurrentWeaponTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeBotGetFiringPatternTaskInstanceData
	// Size: 0x68 (0x68 - 0x0)
	struct FFortStateTreeBotGetFiringPatternTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController BotController; // 0x0(0x8)
		AFortWeapon CurrentWeapon; // 0x8(0x8)
		TArray FiringTimes; // 0x10(0x10)
		UFortAthenaAIBotRangeAttackDigestedSkillSet CacheRangeAttackDigestedSkillSet; // 0x20(0x8)
		AFortWeapon LastUsedWeapon; // 0x28(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x30(0x38) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotGetFiringPatternTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeBotGetFiringPatternTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortStateTreeBotGetWeaponItemEffectivenessTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController BotController; // 0x0(0x8)
		AActor Target; // 0x8(0x8)
		UFortItem Item; // 0x10(0x8)
		float Effectiveness; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotGetWeaponItemEffectivenessTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeBotGetWeaponItemEffectivenessTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortStateTreeBotGetMostEffectiveWeaponScoreTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController BotController; // 0x0(0x8)
		AActor Target; // 0x8(0x8)
		float Effectiveness; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeBotGetMostEffectiveWeaponScoreTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeBotGetMostEffectiveWeaponScoreTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeBotGetWeaponItemTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortStateTreeBotGetWeaponItemTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController BotController; // 0x0(0x8)
		AFortWeapon Weapon; // 0x8(0x8)
		UFortItem Item; // 0x10(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeBotGetWeaponItemTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeBotGetWeaponItemTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetControllerTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeGetControllerTaskInstanceData	
	{
	public:
		APawn Pawn; // 0x0(0x8)
		AController Controller; // 0x8(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeGetControllerTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetControllerTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetAIControllerTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeGetAIControllerTaskInstanceData	
	{
	public:
		APawn Pawn; // 0x0(0x8)
		AAIController AIController; // 0x8(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeGetAIControllerTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetAIControllerTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetBotControllerTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeGetBotControllerTaskInstanceData	
	{
	public:
		APawn Pawn; // 0x0(0x8)
		AFortAthenaAIBotController BotController; // 0x8(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeGetBotControllerTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetBotControllerTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeExecuteAbilityTaskInstanceData
	// Size: 0x40 (0x40 - 0x0)
	struct FFortStateTreeExecuteAbilityTaskInstanceData	
	{
	public:
		AAIController Controller; // 0x0(0x8)
		FGameplayTagContainer AbilityTag; // 0x8(0x20)
		UFortAITask_ExecuteAbility ExecuteAbilityTask; // 0x28(0x8)
		TScriptInterface TaskOwner; // 0x30(0x10)
	};


	// Struct FortniteAIServer.FortStateTreeExecuteAbilityTask
	// Inherited from FStateTreeAIActionTaskBase -> FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeExecuteAbilityTask : public FStateTreeAIActionTaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortGetActorLocationStateTreeTaskInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortGetActorLocationStateTreeTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		FVector OutVector; // 0x8(0x18)
		FStateTreePropertyRef OutRefVector; // 0x20(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortGetActorLocationStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortGetActorLocationStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		bool bRunOnce; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetDistanceParameterInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FFortStateTreeGetDistanceParameterInstanceData	
	{
	public:
		AFortPawn Pawn; // 0x0(0x8)
		FGameplayTagContainer AbilityTag; // 0x8(0x20)
		FGameplayTagContainer DistancePropertyTag; // 0x28(0x20)
		float OutDistance; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetDistanceParameterStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetDistanceParameterStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetTargetActorTaskInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FFortStateTreeGetTargetActorTaskInstanceData	
	{
	public:
		AActor TargetActor; // 0x0(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeGetTargetActorTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortStateTreeGetTargetActorTask : public FStateTreeAITaskBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetHealthTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortStateTreeGetHealthTaskInstanceData	
	{
	public:
		AFortPawn Pawn; // 0x0(0x8)
		float CurrentHealth; // 0x8(0x4)
		float MaxHealth; // 0xC(0x4)
		float HealthPercentage; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetHealthTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetHealthTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetShieldTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortStateTreeGetShieldTaskInstanceData	
	{
	public:
		AFortPawn Pawn; // 0x0(0x8)
		float CurrentShield; // 0x8(0x4)
		float MaxShield; // 0xC(0x4)
		float ShieldPercentage; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetShieldTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetShieldTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeIsInsideLeashConditionInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortStateTreeIsInsideLeashConditionInstanceData	
	{
	public:
		AAIController AIController; // 0x0(0x8)
		FVector Location; // 0x8(0x18)
		bool bUseInnerRadius; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeIsInsideLeashCondition
	// Inherited from FStateTreeAIConditionBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortStateTreeIsInsideLeashCondition : public FStateTreeAIConditionBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetMoveStatusTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeGetMoveStatusTaskInstanceData	
	{
	public:
		AAIController AIController; // 0x0(0x8)
		TEnumAsByte MoveStatus; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetMoveStatusTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetMoveStatusTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetMoveDestinationTaskInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortStateTreeGetMoveDestinationTaskInstanceData	
	{
	public:
		AAIController AIController; // 0x0(0x8)
		FVector MoveDestination; // 0x8(0x18)
	};


	// Struct FortniteAIServer.FortStateTreeGetMoveDestinationTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetMoveDestinationTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeSetFrustrationDiscouragementInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortStateTreeSetFrustrationDiscouragementInstanceData	
	{
	public:
		AAIController AIController; // 0x0(0x8)
		AActor TargetActor; // 0x8(0x8)
		float DiscouragementDuration; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeSetFrustrationDiscouragementTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeSetFrustrationDiscouragementTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeSetInTacticalActionTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeSetInTacticalActionTaskInstanceData	
	{
	public:
		AFortAthenaAIBotController Controller; // 0x0(0x8)
		bool bShouldSetInTacticalAction; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeSetInTacticalActionTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeSetInTacticalActionTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeHasFreeTokenConditionInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FFortStateTreeHasFreeTokenConditionInstanceData	
	{
	public:
		APawn ReserverPawn; // 0x0(0x8)
		AActor Target; // 0x8(0x8)
		FGameplayTagQuery TokenTagQuery; // 0x10(0x48)
	};


	// Struct FortniteAIServer.FortStateTreeHasFreeTokenCondition
	// Inherited from FStateTreeAIConditionBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeHasFreeTokenCondition : public FStateTreeAIConditionBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeReserveTokenTaskInstanceData
	// Size: 0x60 (0x60 - 0x0)
	struct FFortStateTreeReserveTokenTaskInstanceData	
	{
	public:
		APawn Pawn; // 0x0(0x8)
		AActor Target; // 0x8(0x8)
		FGameplayTagQuery TokenTagQuery; // 0x10(0x48)
		FTokenHandle GrantedToken; // 0x58(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeReserveTokenTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeReserveTokenTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeReserveTokenPositionTaskInstanceData
	// Size: 0x88 (0x88 - 0x0)
	struct FFortStateTreeReserveTokenPositionTaskInstanceData	
	{
	public:
		APawn Pawn; // 0x0(0x8)
		AActor Target; // 0x8(0x8)
		FVector Position; // 0x10(0x18)
		FGameplayTagQuery TokenTagQuery; // 0x28(0x48)
		float HoldReservationAtExitDuration; // 0x70(0x4)
		float AcceptableDistanceForPositionReservation; // 0x74(0x4)
		bool bAllowAddingNewPositionToProvider; // 0x78(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x79(0xF) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeReserveTokenPositionTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeReserveTokenPositionTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeWaitForTokenPositionTaskInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FFortStateTreeWaitForTokenPositionTaskInstanceData	
	{
	public:
		AActor Target; // 0x0(0x8)
		FGameplayTagQuery TokenTagQuery; // 0x8(0x48)
	};


	// Struct FortniteAIServer.FortStateTreeWaitForTokenPositionTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeWaitForTokenPositionTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetReservedTokenPositionTaskInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortStateTreeGetReservedTokenPositionTaskInstanceData	
	{
	public:
		APawn Pawn; // 0x0(0x8)
		AActor Target; // 0x8(0x8)
		FVector ReservedLocation; // 0x10(0x18)
	};


	// Struct FortniteAIServer.FortStateTreeGetReservedTokenPositionTask
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetReservedTokenPositionTask : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeRequestProviderPositionGenerationInstanceData
	// Size: 0x50 (0x50 - 0x0)
	struct FFortStateTreeRequestProviderPositionGenerationInstanceData	
	{
	public:
		AActor Target; // 0x0(0x8)
		FGameplayTagQuery TokenPositionTagQuery; // 0x8(0x48)
	};


	// Struct FortniteAIServer.FortStateTreeRequestProviderPositionGeneration
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeRequestProviderPositionGeneration : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeReloadWeaponTaskInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FFortStateTreeReloadWeaponTaskInstanceData	
	{
	public:
		AFortWeapon Weapon; // 0x0(0x8)
	};


	// Struct FortniteAIServer.FortStateTreeReloadWeaponTask
	// Inherited from FStateTreeAIActionTaskBase -> FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeReloadWeaponTask : public FStateTreeAIActionTaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetWeaponRemainingAmmoTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeGetWeaponRemainingAmmoTaskInstanceData	
	{
	public:
		AFortWeapon Weapon; // 0x0(0x8)
		int32_t RemainingAmmo; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetWeaponRemainingAmmoTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetWeaponRemainingAmmoTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeSetWeaponTargetingTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeSetWeaponTargetingTaskInstanceData	
	{
	public:
		AFortWeapon Weapon; // 0x0(0x8)
		bool bShouldActivateTargeting; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeSetWeaponTargetingTask
	// Inherited from FStateTreeAIActionTaskBase -> FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeSetWeaponTargetingTask : public FStateTreeAIActionTaskBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeGetWeaponMagazineAmmoTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortStateTreeGetWeaponMagazineAmmoTaskInstanceData	
	{
	public:
		AFortWeapon Weapon; // 0x0(0x8)
		int32_t AmmoInMagazine; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeGetWeaponMagazineAmmoTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeGetWeaponMagazineAmmoTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeWaitUntilAbilityFinishedTaskInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortStateTreeWaitUntilAbilityFinishedTaskInstanceData	
	{
	public:
		AFortPawn Pawn; // 0x0(0x8)
		AFortWeapon Weapon; // 0x8(0x8)
		UGameplayAbility ability; // 0x10(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeWaitUntilAbilityFinishedTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeWaitUntilAbilityFinishedTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortStateTreeWaitUntilMantisBranchAvailableTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortStateTreeWaitUntilMantisBranchAvailableTaskInstanceData	
	{
	public:
		AFortWeapon Weapon; // 0x0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortStateTreeWaitUntilMantisBranchAvailableTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortStateTreeWaitUntilMantisBranchAvailableTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortWorldConditionGameplayTagActorQueryState
	// Size: 0x8 (0x8 - 0x0)
	struct FFortWorldConditionGameplayTagActorQueryState	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortWorldConditionGameplayTagActor
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x30 (0x40 - 0x10)
	struct FFortWorldConditionGameplayTagActor : public FWorldConditionCommonBase	
	{
	public:
		FWorldConditionContextDataRef ActorContextRef; // 0x10(0x8)
		FGameplayTagContainer TagContainerToCheck; // 0x18(0x20)
		EHasMatchingGameplayTagContainerTestType TestType; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortWorldConditionNativeAction
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FFortWorldConditionNativeAction : public FWorldConditionCommonBase	
	{
	public:
		FWorldConditionContextDataRef BotControllerRef; // 0x10(0x8)
		FGameplayTag ActionTag; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortWorldConditionPlayerHasConvertedNPC
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FFortWorldConditionPlayerHasConvertedNPC : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		EFortWorldConditionPlayerHasConvertedNPCCondition ConditionToCheck; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortWorldConditionPlayerUsesCID
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x18 (0x28 - 0x10)
	struct FFortWorldConditionPlayerUsesCID : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		TArray AllowedCharacters; // 0x18(0x10)
	};


	// Struct FortniteAIServer.FortWorldConditionTimeOfDay
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x10 (0x20 - 0x10)
	struct FFortWorldConditionTimeOfDay : public FWorldConditionCommonBase	
	{
	public:
		FWorldConditionContextDataRef ActorContextRef; // 0x10(0x8)
		int32_t ValidTimesOfDay; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortWorldConditionWorldStatState
	// Size: 0x20 (0x20 - 0x0)
	struct FFortWorldConditionWorldStatState	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortWorldConditionWorldStat
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x18 (0x28 - 0x10)
	struct FFortWorldConditionWorldStat : public FWorldConditionCommonBase	
	{
	public:
		FName WorldStatRowName; // 0x10(0x4)
		FInt32Range ValueRange; // 0x14(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.PFWNPCReactions_TriggeredReactions_PersistentInfoData
	// Size: 0x10 (0x10 - 0x0)
	struct FPFWNPCReactions_TriggeredReactions_PersistentInfoData	
	{
	public:
		TArray TriggeredReactionRowNames; // 0x0(0x10)
	};


	// Struct FortniteAIServer.PFWNPCReactions_PersistentInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FPFWNPCReactions_PersistentInfo	
	{
	public:
		FPFWNPCReactions_TriggeredReactions_PersistentInfoData TriggeredReactions_PersistentInfoData; // 0x0(0x10)
	};


	// Struct FortniteAIServer.GameFeatureFortAIEvaluatorEntry
	// Size: 0x48 (0x48 - 0x0)
	struct FGameFeatureFortAIEvaluatorEntry	
	{
	public:
		TWeakObjectPtr TreeAsset; // 0x0(0x20)
		FGameplayTag InjectionTag; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr AIEvaluatorClass; // 0x28(0x20)
	};


	// Struct FortniteAIServer.FortPointOnCurveRange
	// Size: 0x8 (0x8 - 0x0)
	struct FFortPointOnCurveRange	
	{
	public:
		float MinPercentage; // 0x0(0x4)
		float MaxPercentage; // 0x4(0x4)
	};


	// Struct FortniteAIServer.FortPointsOnCurve
	// Size: 0x30 (0x30 - 0x0)
	struct FFortPointsOnCurve	
	{
	public:
		TWeakObjectPtr Curve; // 0x0(0x20)
		TArray RangesForPointsOnCurve; // 0x20(0x10)
	};


	// Struct FortniteAIServer.FortQueryGenerator_PerceivedActors_Settings
	// Size: 0x40 (0x40 - 0x0)
	struct FFortQueryGenerator_PerceivedActors_Settings	
	{
	public:
		bool bIgnoreDBNOPawns; // 0x0(0x1)
		bool bIgnoreSleepingAIs; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FAIDataProviderFloatValue MaxTimeSincePerceived; // 0x8(0x38)
	};


	// Struct FortniteAIServer.FortGameplayTagQueryPerDifficulty
	// Size: 0x60 (0x60 - 0x0)
	struct FFortGameplayTagQueryPerDifficulty	
	{
	public:
		FDataTableRowHandle DifficultyInfo; // 0x0(0x10)
		FGameplayTagQuery TagQueryToMatch; // 0x10(0x48)
		float Difficulty; // 0x58(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.GoalDistanceData
	// Size: 0x98 (0x98 - 0x0)
	struct FGoalDistanceData	
	{
	public:
		bool bIgnoreScreeningDistance; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FAIDataProviderFloatValue ScreeningTestMaxDistance; // 0x8(0x38)
		TWeakObjectPtr TestScoreCurve; // 0x40(0x20)
		FAIDataProviderFloatValue CurveDistanceScale; // 0x60(0x38)
	};


	// Struct FortniteAIServer.FortStateTreeGameplayAbilityCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortStateTreeGameplayAbilityCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortGameplayAbilityIsOnCooldownInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortGameplayAbilityIsOnCooldownInstanceData	
	{
	public:
		AFortPawn Pawn; // 0x0(0x8)
		FGameplayTagContainer AbilityTag; // 0x8(0x20)
	};


	// Struct FortniteAIServer.FortGameplayAbilityIsOnCooldownCondition
	// Inherited from FFortStateTreeGameplayAbilityCondition -> FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x28 - 0x28)
	struct FFortGameplayAbilityIsOnCooldownCondition : public FFortStateTreeGameplayAbilityCondition	
	{
	public:
	};


	// Struct FortniteAIServer.FortGameplayAbilityCanActivateAbilityInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortGameplayAbilityCanActivateAbilityInstanceData	
	{
	public:
		AFortPawn Pawn; // 0x0(0x8)
		FGameplayTagContainer AbilityTag; // 0x8(0x20)
	};


	// Struct FortniteAIServer.FortGameplayAbilityCanActivateAbilityCondition
	// Inherited from FFortStateTreeGameplayAbilityCondition -> FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x28 - 0x28)
	struct FFortGameplayAbilityCanActivateAbilityCondition : public FFortStateTreeGameplayAbilityCondition	
	{
	public:
	};


	// Struct FortniteAIServer.FortGameplayAbilityCanHitTargetInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FFortGameplayAbilityCanHitTargetInstanceData	
	{
	public:
		AFortPawn Pawn; // 0x0(0x8)
		AActor TargetActor; // 0x8(0x8)
		FGameplayTagContainer AbilityTag; // 0x10(0x20)
	};


	// Struct FortniteAIServer.FortGameplayAbilityCanHitTargetCondition
	// Inherited from FFortStateTreeGameplayAbilityCondition -> FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x30 - 0x28)
	struct FFortGameplayAbilityCanHitTargetCondition : public FFortStateTreeGameplayAbilityCondition	
	{
	public:
		bool bUseIdealYawRotationToTargetValue; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortGameplayAbilityCompareDistanceInstanceData
	// Size: 0x40 (0x40 - 0x0)
	struct FFortGameplayAbilityCompareDistanceInstanceData	
	{
	public:
		AFortPawn Pawn; // 0x0(0x8)
		AActor TargetActor; // 0x8(0x8)
		FGameplayTagContainer AbilityTag; // 0x10(0x20)
		TArray DistanceComparisons; // 0x30(0x10)
	};


	// Struct FortniteAIServer.FortGameplayAbilityCompareDistanceCondition
	// Inherited from FFortStateTreeGameplayAbilityCondition -> FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x28 - 0x28)
	struct FFortGameplayAbilityCompareDistanceCondition : public FFortStateTreeGameplayAbilityCondition	
	{
	public:
	};


	// Struct FortniteAIServer.MimicConverterAbilityData
	// Size: 0x78 (0x78 - 0x0)
	struct FMimicConverterAbilityData	
	{
	public:
		FGameplayTagQuery RequiredConverterAbilityTags; // 0x0(0x48)
		FGameplayTagContainer AbilitiesToApply; // 0x48(0x20)
		TArray GEsToApply; // 0x68(0x10)
	};


	// Struct FortniteAIServer.EscalateTargetData
	// Size: 0x18 (0x18 - 0x0)
	struct FEscalateTargetData	
	{
	public:
		TWeakObjectPtr Target; // 0x0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FlankingLocationInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FFlankingLocationInfo	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FailedToReachPOI
	// Size: 0x8 (0x8 - 0x0)
	struct FFailedToReachPOI	
	{
	public:
		int32_t BotPOIID; // 0x0(0x4)
		int32_t FailCount; // 0x4(0x4)
	};


	// Struct FortniteAIServer.GameplayAbilityEvaluatorModule
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayAbilityEvaluatorModule	
	{
	public:
		FGameplayTagContainer GameplayAbilityTag; // 0x0(0x20)
		UAbilitySystemComponent CachedAbilitySystemComponent; // 0x20(0x8)
	};


	// Struct FortniteAIServer.GameplayTagActorHasMatchingGameplayTagInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayTagActorHasMatchingGameplayTagInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		FGameplayTag TagToCheck; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.GameplayTagActorHasMatchingGameplayTagCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FGameplayTagActorHasMatchingGameplayTagCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.GameplayTagActorHasMatchingGameplayTagContainerInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayTagActorHasMatchingGameplayTagContainerInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		FGameplayTagContainer TagContainerToCheck; // 0x8(0x20)
	};


	// Struct FortniteAIServer.GameplayTagActorHasMatchingGameplayContainerTagCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FGameplayTagActorHasMatchingGameplayContainerTagCondition : public FStateTreeConditionCommonBase	
	{
	public:
		EHasMatchingGameplayTagContainerTestType TestType; // 0x20(0x1)
		bool bInvert; // 0x21(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTaskInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FFortAthenaAddGameplayTagsStateTreeTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		FGameplayTagContainer Tags; // 0x8(0x20)
	};


	// Struct FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x10 (0x30 - 0x20)
	struct FFortAthenaAddGameplayTagsStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		bool bReplicateChange; // 0x20(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		EFortAthenaStateTreeTaskFeatureExecutionMode AddExecutionMode; // 0x24(0x4)
		EFortAthenaStateTreeTaskFeatureExecutionMode RemoveExecutionMode; // 0x28(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaArithmeticStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortAthenaArithmeticStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		EGameplayInteractionTaskTrigger OperationTrigger; // 0x20(0x1)
		EFortAthenaArithmeticOperation Operation; // 0x21(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaIntArithmeticStateTreeTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortAthenaIntArithmeticStateTreeTaskInstanceData	
	{
	public:
		int32_t FirstOperand; // 0x0(0x4)
		int32_t SecondOperand; // 0x4(0x4)
		FStateTreeStructRef ReferencedResult; // 0x8(0x10)
	};


	// Struct FortniteAIServer.FortAthenaIntArithmeticStateTreeTask
	// Inherited from FFortAthenaArithmeticStateTreeTask -> FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x28 - 0x28)
	struct FFortAthenaIntArithmeticStateTreeTask : public FFortAthenaArithmeticStateTreeTask	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData
	// Size: 0x40 (0x40 - 0x0)
	struct FFortAthenaFindSmartObjectAnimForActorStateTreeTaskInstanceData	
	{
	public:
		AActor UserActor; // 0x0(0x8)
		AActor SmartObjectActor; // 0x8(0x8)
		FGameplayTagContainer Tags; // 0x10(0x20)
		UAnimMontage PickedMontage; // 0x30(0x8)
		UContextualAnimSceneAsset PickedSceneAsset; // 0x38(0x8)
	};


	// Struct FortniteAIServer.FortAthenaFindSmartObjectAnimForActorStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaFindSmartObjectAnimForActorStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaFocusAtStateTreeTaskInstanceData
	// Size: 0x90 (0x90 - 0x0)
	struct FFortAthenaFocusAtStateTreeTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		AActor FocusActor; // 0x8(0x8)
		FVector FocusActorOffset; // 0x10(0x18)
		FVector FocusWorldPoint; // 0x28(0x18)
		bool bSetBackOnExit; // 0x40(0x1)
		bool bShouldSetFocus; // 0x41(0x1)
		unsigned char UnknownData01_7[0x4E]; // 0x42(0x4E) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaFocusAtStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaFocusAtStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaIntStateTreeParameter
	// Size: 0x4 (0x4 - 0x0)
	struct FFortAthenaIntStateTreeParameter	
	{
	public:
		int32_t int; // 0x0(0x4)
	};


	// Struct FortniteAIServer.FortAthenaMakeIntVariableStateTreeTaskInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FFortAthenaMakeIntVariableStateTreeTaskInstanceData	
	{
	public:
		int32_t DefaultIntValue; // 0x0(0x4)
		FFortAthenaIntStateTreeParameter OutInt; // 0x4(0x4)
	};


	// Struct FortniteAIServer.FortAthenaMakeIntVariableStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortAthenaMakeIntVariableStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		bool bResetOnReselect; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaPlayContextualAnimStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaPlayContextualAnimStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaPlayInteractionStateTreeTaskActorInfo
	// Size: 0x24 (0x24 - 0x0)
	struct FFortAthenaPlayInteractionStateTreeTaskActorInfo	
	{
	public:
		unsigned char UnknownData01_2[0x24]; // 0x0(0x24) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.STFortAthenaPlayMontageWarpTarget
	// Size: 0x50 (0x50 - 0x0)
	struct FSTFortAthenaPlayMontageWarpTarget	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x8(0x18)
		FQuat Rotation; // 0x20(0x20)
		AActor Actor; // 0x40(0x8)
		FName BoneOrSocketName; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaStateTreeCrouchTaskInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FFortAthenaStateTreeCrouchTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
	};


	// Struct FortniteAIServer.FortAthenaStateTreeCrouchTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaStateTreeCrouchTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaStateTreeInteractTaskInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortAthenaStateTreeInteractTaskInstanceData	
	{
	public:
		TEnumAsByte InteractType; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AActor Actor; // 0x8(0x8)
		AActor InteractTargetActor; // 0x10(0x8)
		float InteractDuration; // 0x18(0x4)
		float Timer; // 0x1C(0x4)
	};


	// Struct FortniteAIServer.FortAthenaStateTreeInteractTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaStateTreeInteractTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaStateTreeLookAroundTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FFortAthenaStateTreeLookAroundTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		float LookAtDurationMin; // 0x8(0x4)
		float LookAtDurationMax; // 0xC(0x4)
		float LookAtDuration; // 0x10(0x4)
		float Timer; // 0x14(0x4)
	};


	// Struct FortniteAIServer.FortAthenaStateTreeLookAroundTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaStateTreeLookAroundTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaTeleportToActorStateTreeTaskInstanceData
	// Size: 0x40 (0x40 - 0x0)
	struct FFortAthenaTeleportToActorStateTreeTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		AActor TargetActor; // 0x8(0x8)
		FVector TeleportRelativeLocation; // 0x10(0x18)
		FRotator TeleportRelativeRotation; // 0x28(0x18)
	};


	// Struct FortniteAIServer.FortAthenaTeleportToActorStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FFortAthenaTeleportToActorStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTaskInstanceData
	// Size: 0xC8 (0xC8 - 0x0)
	struct FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		AActor TargetActor; // 0x8(0x8)
		TArray GameplayEffectClassesToAdd; // 0x10(0x10)
		bool bAutomaticallyRemoveAddedEffectsOnExit; // 0x20(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray GameplayEffectClassesToRemove; // 0x28(0x10)
		FGameplayTagContainer GameplayEffectsByTagsToRemove; // 0x38(0x20)
		FGameplayTagContainer GameplayEffectsBySourceTagsToRemove; // 0x58(0x20)
		FGameplayTagContainer GameplayEffectsByAppliedTagsToRemove; // 0x78(0x20)
		FGameplayTagContainer GameplayEffectsByGrantedTagsToRemove; // 0x98(0x20)
		unsigned char UnknownData03_7[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FFortAthenaToggleGameplayEffectStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		EFortAthenaStateTreeTaskFeatureExecutionMode AddExecutionMode; // 0x20(0x4)
		EFortAthenaStateTreeTaskFeatureExecutionMode RemoveExecutionMode; // 0x24(0x4)
	};


	// Struct FortniteAIServer.FortWorldConditionWorldState
	// Inherited from FWorldConditionCommonBase -> FWorldConditionBase
	// Size: 0x48 (0x58 - 0x10)
	struct FFortWorldConditionWorldState : public FWorldConditionCommonBase	
	{
	public:
		FGameplayTagQuery WorldStateQuery; // 0x10(0x48)
	};

}
