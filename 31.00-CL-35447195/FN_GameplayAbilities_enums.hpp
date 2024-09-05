#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayAbilities
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
	enum EGameplayEffectGrantedAbilityRemovePolicy
	{
		EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
		EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
		EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
	enum EGameplayEffectAttributeCaptureSource
	{
		EGameplayEffectAttributeCaptureSource__Source = 0,
		EGameplayEffectAttributeCaptureSource__Target = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayCueEvent
	enum EGameplayCueEvent
	{
		EGameplayCueEvent__OnActive = 0,
		EGameplayCueEvent__WhileActive = 1,
		EGameplayCueEvent__Executed = 2,
		EGameplayCueEvent__Removed = 3,
	};


	// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
	enum EGameplayAbilityActivationMode
	{
		EGameplayAbilityActivationMode__Authority = 0,
		EGameplayAbilityActivationMode__NonAuthority = 1,
		EGameplayAbilityActivationMode__Predicting = 2,
		EGameplayAbilityActivationMode__Confirmed = 3,
		EGameplayAbilityActivationMode__Rejected = 4,
	};


	// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
	enum EAbilityGenericReplicatedEvent
	{
		EAbilityGenericReplicatedEvent__GenericConfirm = 0,
		EAbilityGenericReplicatedEvent__GenericCancel = 1,
		EAbilityGenericReplicatedEvent__InputPressed = 2,
		EAbilityGenericReplicatedEvent__InputReleased = 3,
		EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
		EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
		EAbilityGenericReplicatedEvent__GameCustom1 = 6,
		EAbilityGenericReplicatedEvent__GameCustom2 = 7,
		EAbilityGenericReplicatedEvent__GameCustom3 = 8,
		EAbilityGenericReplicatedEvent__GameCustom4 = 9,
		EAbilityGenericReplicatedEvent__GameCustom5 = A,
		EAbilityGenericReplicatedEvent__GameCustom6 = B,
	};


	// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
	enum EGameplayCuePayloadType
	{
		EGameplayCuePayloadType__CueParameters = 0,
		EGameplayCuePayloadType__FromSpec = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
	enum EGameplayAbilityInputBinds
	{
		EGameplayAbilityInputBinds__Ability1 = 0,
		EGameplayAbilityInputBinds__Ability2 = 1,
		EGameplayAbilityInputBinds__Ability3 = 2,
		EGameplayAbilityInputBinds__Ability4 = 3,
		EGameplayAbilityInputBinds__Ability5 = 4,
		EGameplayAbilityInputBinds__Ability6 = 5,
		EGameplayAbilityInputBinds__Ability7 = 6,
		EGameplayAbilityInputBinds__Ability8 = 7,
		EGameplayAbilityInputBinds__Ability9 = 8,
	};


	// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
	enum ETargetDataFilterSelf
	{
		ETargetDataFilterSelf__TDFS_Any = 0,
		ETargetDataFilterSelf__TDFS_NoSelf = 1,
		ETargetDataFilterSelf__TDFS_NoOthers = 2,
	};


	// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
	enum EAbilityTaskWaitState
	{
		EAbilityTaskWaitState__WaitingOnGame = 1,
		EAbilityTaskWaitState__WaitingOnUser = 2,
		EAbilityTaskWaitState__WaitingOnAvatar = 4,
	};


	// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
	enum ERootMotionMoveToActorTargetOffsetType
	{
		ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource = 0,
		ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward = 1,
		ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace = 2,
	};


	// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
	enum EAbilityTaskNetSyncType
	{
		EAbilityTaskNetSyncType__BothWait = 0,
		EAbilityTaskNetSyncType__OnlyServerWait = 1,
		EAbilityTaskNetSyncType__OnlyClientWait = 2,
	};


	// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
	enum EWaitAttributeChangeComparison
	{
		EWaitAttributeChangeComparison__None = 0,
		EWaitAttributeChangeComparison__GreaterThan = 1,
		EWaitAttributeChangeComparison__LessThan = 2,
		EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
		EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
		EWaitAttributeChangeComparison__NotEqualTo = 5,
		EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	};


	// Enum /Script/GameplayAbilities.EWaitGameplayTagQueryTriggerCondition
	enum EWaitGameplayTagQueryTriggerCondition
	{
		EWaitGameplayTagQueryTriggerCondition__WhenTrue = 0,
		EWaitGameplayTagQueryTriggerCondition__WhenFalse = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
	enum EGameplayEffectReplicationMode
	{
		EGameplayEffectReplicationMode__Minimal = 0,
		EGameplayEffectReplicationMode__Mixed = 1,
		EGameplayEffectReplicationMode__Full = 2,
	};


	// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
	enum ERepAnimPositionMethod
	{
		ERepAnimPositionMethod__Position = 0,
		ERepAnimPositionMethod__CurrentSectionId = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
	enum EGameplayTargetingConfirmation
	{
		EGameplayTargetingConfirmation__Instant = 0,
		EGameplayTargetingConfirmation__UserConfirmed = 1,
		EGameplayTargetingConfirmation__Custom = 2,
		EGameplayTargetingConfirmation__CustomMulti = 3,
	};


	// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
	enum EGameplayAbilityTargetingLocationType
	{
		EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
		EGameplayAbilityTargetingLocationType__ActorTransform = 1,
		EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
	enum EGameplayAbilityInstancingPolicy
	{
		EGameplayAbilityInstancingPolicy__NonInstanced = 0,
		EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
		EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
	enum EGameplayAbilityNetExecutionPolicy
	{
		EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
		EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
		EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
		EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	};


	// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
	enum EGameplayAbilityNetSecurityPolicy
	{
		EGameplayAbilityNetSecurityPolicy__ClientOrServer = 0,
		EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution = 1,
		EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination = 2,
		EGameplayAbilityNetSecurityPolicy__ServerOnly = 3,
	};


	// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
	enum EGameplayAbilityReplicationPolicy
	{
		EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
		EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
	enum EGameplayAbilityTriggerSource
	{
		EGameplayAbilityTriggerSource__GameplayEvent = 0,
		EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
		EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayCueNotify_EffectPlaySpace
	enum EGameplayCueNotify_EffectPlaySpace
	{
		EGameplayCueNotify_EffectPlaySpace__WorldSpace = 0,
		EGameplayCueNotify_EffectPlaySpace__CameraSpace = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledSource
	enum EGameplayCueNotify_LocallyControlledSource
	{
		EGameplayCueNotify_LocallyControlledSource__InstigatorActor = 0,
		EGameplayCueNotify_LocallyControlledSource__TargetActor = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledPolicy
	enum EGameplayCueNotify_LocallyControlledPolicy
	{
		EGameplayCueNotify_LocallyControlledPolicy__Always = 0,
		EGameplayCueNotify_LocallyControlledPolicy__LocalOnly = 1,
		EGameplayCueNotify_LocallyControlledPolicy__NotLocal = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayCueNotify_AttachPolicy
	enum EGameplayCueNotify_AttachPolicy
	{
		EGameplayCueNotify_AttachPolicy__DoNotAttach = 0,
		EGameplayCueNotify_AttachPolicy__AttachToTarget = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
	enum EGameplayEffectMagnitudeCalculation
	{
		EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
		EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
		EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
		EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	};


	// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
	enum EAttributeBasedFloatCalculationType
	{
		EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
		EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
		EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
		EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel = 3,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectVersion
	enum EGameplayEffectVersion
	{
		EGameplayEffectVersion__Monolithic = 0,
		EGameplayEffectVersion__Modular53 = 1,
		EGameplayEffectVersion__AbilitiesComponent53 = 2,
		EGameplayEffectVersion__Current = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
	enum EGameplayEffectScopedModifierAggregatorType
	{
		EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked = 0,
		EGameplayEffectScopedModifierAggregatorType__Transient = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
	enum EGameplayEffectDurationType
	{
		EGameplayEffectDurationType__Instant = 0,
		EGameplayEffectDurationType__Infinite = 1,
		EGameplayEffectDurationType__HasDuration = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
	enum EGameplayEffectStackingDurationPolicy
	{
		EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
		EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
	enum EGameplayEffectStackingPeriodPolicy
	{
		EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
		EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
	enum EGameplayEffectStackingExpirationPolicy
	{
		EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
		EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
		EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
	enum EGameplayEffectPeriodInhibitionRemovedPolicy
	{
		EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset = 0,
		EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod = 1,
		EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
	enum EGameplayModEvaluationChannel
	{
		EGameplayModEvaluationChannel__Channel0 = 0,
		EGameplayModEvaluationChannel__Channel1 = 1,
		EGameplayModEvaluationChannel__Channel2 = 2,
		EGameplayModEvaluationChannel__Channel3 = 3,
		EGameplayModEvaluationChannel__Channel4 = 4,
		EGameplayModEvaluationChannel__Channel5 = 5,
		EGameplayModEvaluationChannel__Channel6 = 6,
		EGameplayModEvaluationChannel__Channel7 = 7,
		EGameplayModEvaluationChannel__Channel8 = 8,
		EGameplayModEvaluationChannel__Channel9 = 9,
	};


	// Enum /Script/GameplayAbilities.EGameplayModOp
	enum EGameplayModOp
	{
		EGameplayModOp__AddBase = 0,
		EGameplayModOp__MultiplyAdditive = 1,
		EGameplayModOp__DivideAdditive = 2,
		EGameplayModOp__MultiplyCompound = 4,
		EGameplayModOp__AddFinal = 5,
		EGameplayModOp__Max = 6,
		EGameplayModOp__Additive = 0,
		EGameplayModOp__Multiplicitive = 1,
		EGameplayModOp__Division = 2,
		EGameplayModOp__Override = 3,
	};


	// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
	enum EGameplayEffectStackingType
	{
		EGameplayEffectStackingType__None = 0,
		EGameplayEffectStackingType__AggregateBySource = 1,
		EGameplayEffectStackingType__AggregateByTarget = 2,
	};


	// Enum /Script/GameplayAbilities.EGameplayTagEventType
	enum EGameplayTagEventType
	{
		EGameplayTagEventType__NewOrRemoved = 0,
		EGameplayTagEventType__AnyCountChange = 1,
	};

}
