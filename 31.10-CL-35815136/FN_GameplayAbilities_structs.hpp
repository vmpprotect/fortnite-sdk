#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayAbilities
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameplayAbilities.ActiveGameplayEffect
	// Inherited from FFastArraySerializerItem
	// Size: 0x354 (0x360 - 0xC)
	struct FActiveGameplayEffect : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0xC]; // 0xC(0xC) UNKNOWN PROPERTY
		FGameplayEffectSpec Spec; // 0x18(0x298)
		FPredictionKey PredictionKey; // 0x2B0(0x10)
		TArray<FGameplayAbilitySpecHandle> GrantedAbilityHandles; // 0x2C0(0x10)
		float StartServerWorldTime; // 0x2D0(0x4)
		float CachedStartServerWorldTime; // 0x2D4(0x4)
		float StartWorldTime; // 0x2D8(0x4)
		bool bIsInhibited; // 0x2DC(0x1)
		unsigned char UnknownData01_7[0x83]; // 0x2DD(0x83) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilitySpecHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FGameplayAbilitySpecHandle	
	{
	public:
		int32_t Handle; // 0x0(0x4)
	};


	// Struct GameplayAbilities.PredictionKey
	// Size: 0x10 (0x10 - 0x0)
	struct FPredictionKey	
	{
	public:
		int16_t Current; // 0x0(0x2)
		int16_t base; // 0x2(0x2)
		bool bIsServerInitiated; // 0x4(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x5(0xB) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectSpec
	// Size: 0x298 (0x298 - 0x0)
	struct FGameplayEffectSpec	
	{
	public:
		UGameplayEffect* Def; // 0x0(0x8)
		TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8(0x10)
		FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18(0x28)
		unsigned char UnknownData00_6[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
		float duration; // 0x50(0x4)
		float Period; // 0x54(0x4)
		float ChanceToApplyToTarget; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FTagContainerAggregator CapturedSourceTags; // 0x60(0x88)
		FTagContainerAggregator CapturedTargetTags; // 0xE8(0x88)
		FGameplayTagContainer DynamicGrantedTags; // 0x170(0x20)
		FGameplayTagContainer DynamicAssetTags; // 0x190(0x20)
		TArray<FModifierSpec> Modifiers; // 0x1B0(0x10)
		int32_t StackCount; // 0x1C0(0x4)
		bool bCompletedSourceAttributeCapture : 1; // 0x1C4:0(0x1)
		bool bCompletedTargetAttributeCapture : 1; // 0x1C4:1(0x1)
		bool bDurationLocked : 1; // 0x1C4:2(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x1C5(0x3) UNKNOWN PROPERTY
		TArray<FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x1C8(0x10)
		unsigned char UnknownData03_6[0xA0]; // 0x1D8(0xA0) UNKNOWN PROPERTY
		FGameplayEffectContextHandle EffectContext; // 0x278(0x18)
		float Level; // 0x290(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectContextHandle
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayEffectContextHandle	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilitySpecDef
	// Size: 0x98 (0x98 - 0x0)
	struct FGameplayAbilitySpecDef	
	{
	public:
		UClass* ability; // 0x0(0x8)
		FScalableFloat LevelScalableFloat; // 0x8(0x28)
		int32_t InputID; // 0x30(0x4)
		EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> SourceObject; // 0x38(0x8)
		unsigned char UnknownData01_6[0x50]; // 0x40(0x50) UNKNOWN PROPERTY
		FGameplayAbilitySpecHandle AssignedHandle; // 0x90(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.ScalableFloat
	// Size: 0x28 (0x28 - 0x0)
	struct FScalableFloat	
	{
	public:
		float Value; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FCurveTableRowHandle Curve; // 0x8(0x10)
		FDataRegistryType RegistryType; // 0x18(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1C(0xC) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.ModifierSpec
	// Size: 0x4 (0x4 - 0x0)
	struct FModifierSpec	
	{
	public:
		float EvaluatedMagnitude; // 0x0(0x4)
	};


	// Struct GameplayAbilities.TagContainerAggregator
	// Size: 0x88 (0x88 - 0x0)
	struct FTagContainerAggregator	
	{
	public:
		FGameplayTagContainer CapturedActorTags; // 0x0(0x20)
		FGameplayTagContainer CapturedSpecTags; // 0x20(0x20)
		FGameplayTagContainer ScopedTags; // 0x40(0x20)
		unsigned char UnknownData00_7[0x28]; // 0x60(0x28) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayEffectAttributeCaptureSpecContainer	
	{
	public:
		TArray<FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x0(0x10)
		TArray<FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10(0x10)
		bool bHasNonSnapshottedAttributes; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectAttributeCaptureSpec
	// Size: 0x50 (0x50 - 0x0)
	struct FGameplayEffectAttributeCaptureSpec	
	{
	public:
		FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x0(0x40)
		unsigned char UnknownData00_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
	// Size: 0x40 (0x40 - 0x0)
	struct FGameplayEffectAttributeCaptureDefinition	
	{
	public:
		FGameplayAttribute AttributeToCapture; // 0x0(0x38)
		EGameplayEffectAttributeCaptureSource AttributeSource; // 0x38(0x1)
		bool bSnapshot; // 0x39(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAttribute
	// Size: 0x38 (0x38 - 0x0)
	struct FGameplayAttribute	
	{
	public:
		FString AttributeName; // 0x0(0x10)
		unsigned char UnknownData00_6[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
		UStruct* AttributeOwner; // 0x30(0x8)
	};


	// Struct GameplayAbilities.GameplayEffectModifiedAttribute
	// Size: 0x40 (0x40 - 0x0)
	struct FGameplayEffectModifiedAttribute	
	{
	public:
		FGameplayAttribute Attribute; // 0x0(0x38)
		float TotalMagnitude; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.ActiveGameplayEffectHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FActiveGameplayEffectHandle	
	{
	public:
		int32_t Handle; // 0x0(0x4)
		bool bPassedFiltersAndWasExecuted; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectSpecHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayEffectSpecHandle	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueParameters
	// Size: 0xD0 (0xD0 - 0x0)
	struct FGameplayCueParameters	
	{
	public:
		float NormalizedMagnitude; // 0x0(0x4)
		float RawMagnitude; // 0x4(0x4)
		FGameplayEffectContextHandle EffectContext; // 0x8(0x18)
		FGameplayTag MatchedTagName; // 0x20(0x4)
		FGameplayTag OriginalTag; // 0x24(0x4)
		FGameplayTagContainer AggregatedSourceTags; // 0x28(0x20)
		FGameplayTagContainer AggregatedTargetTags; // 0x48(0x20)
		FVector_NetQuantize10 Location; // 0x68(0x18)
		FVector_NetQuantizeNormal Normal; // 0x80(0x18)
		TWeakObjectPtr<AActor*> Instigator; // 0x98(0x8)
		TWeakObjectPtr<AActor*> EffectCauser; // 0xA0(0x8)
		TWeakObjectPtr<UObject*> SourceObject; // 0xA8(0x8)
		TWeakObjectPtr<UPhysicalMaterial*> PhysicalMaterial; // 0xB0(0x8)
		int32_t GameplayEffectLevel; // 0xB8(0x4)
		int32_t AbilityLevel; // 0xBC(0x4)
		TWeakObjectPtr<USceneComponent*> TargetAttachComponent; // 0xC0(0x8)
		bool bReplicateLocationWhenUsingMinimalRepProxy; // 0xC8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectRemovalInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayEffectRemovalInfo	
	{
	public:
		bool bPrematureRemoval; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t StackCount; // 0x4(0x4)
		FGameplayEffectContextHandle EffectContext; // 0x8(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEventData
	// Size: 0xB0 (0xB0 - 0x0)
	struct FGameplayEventData	
	{
	public:
		FGameplayTag EventTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AActor* Instigator; // 0x8(0x8)
		AActor* Target; // 0x10(0x8)
		UObject* OptionalObject; // 0x18(0x8)
		UObject* OptionalObject2; // 0x20(0x8)
		FGameplayEffectContextHandle ContextHandle; // 0x28(0x18)
		FGameplayTagContainer InstigatorTags; // 0x40(0x20)
		FGameplayTagContainer TargetTags; // 0x60(0x20)
		float EventMagnitude; // 0x80(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FGameplayAbilityTargetDataHandle TargetData; // 0x88(0x28)
	};


	// Struct GameplayAbilities.GameplayAbilityTargetDataHandle
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayAbilityTargetDataHandle	
	{
	public:
		unsigned char UnknownData00_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayTagRequirements
	// Size: 0x88 (0x88 - 0x0)
	struct FGameplayTagRequirements	
	{
	public:
		FGameplayTagContainer RequireTags; // 0x0(0x20)
		FGameplayTagContainer IgnoreTags; // 0x20(0x20)
		FGameplayTagQuery TagQuery; // 0x40(0x48)
	};


	// Struct GameplayAbilities.GameplayTargetDataFilterHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayTargetDataFilterHandle	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilityActivationInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayAbilityActivationInfo	
	{
	public:
		TEnumAsByte<EGameplayAbilityActivationMode> ActivationMode; // 0x0(0x1)
		bool bCanBeEndedByOtherInstance : 1; // 0x1:0(0x1)
		unsigned char UnknownData00_5[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FPredictionKey PredictionKeyWhenActivated; // 0x8(0x10)
	};


	// Struct GameplayAbilities.GameplayEffectQuery
	// Size: 0x198 (0x198 - 0x0)
	struct FGameplayEffectQuery	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		FDelegateProperty CustomMatchDelegate_BP; // 0x10(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery OwningTagQuery; // 0x20(0x48)
		FGameplayTagQuery EffectTagQuery; // 0x68(0x48)
		FGameplayTagQuery SourceTagQuery; // 0xB0(0x48)
		FGameplayTagQuery SourceAggregateTagQuery; // 0xF8(0x48)
		FGameplayAttribute ModifyingAttribute; // 0x140(0x38)
		UObject* EffectSource; // 0x178(0x8)
		UClass* EffectDefinition; // 0x180(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x188(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectSpecForRPC
	// Size: 0x78 (0x78 - 0x0)
	struct FGameplayEffectSpecForRPC	
	{
	public:
		UGameplayEffect* Def; // 0x0(0x8)
		TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8(0x10)
		FGameplayEffectContextHandle EffectContext; // 0x18(0x18)
		FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
		FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
		float Level; // 0x70(0x4)
		float AbilityLevel; // 0x74(0x4)
	};


	// Struct GameplayAbilities.ServerAbilityRPCBatch
	// Size: 0x48 (0x48 - 0x0)
	struct FServerAbilityRPCBatch	
	{
	public:
		FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FPredictionKey PredictionKey; // 0x8(0x10)
		FGameplayAbilityTargetDataHandle TargetData; // 0x18(0x28)
		bool InputPressed; // 0x40(0x1)
		bool Ended; // 0x41(0x1)
		bool Started; // 0x42(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.ReplicatedPredictionKeyMap
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FReplicatedPredictionKeyMap : public FFastArraySerializer	
	{
	public:
		TArray<FReplicatedPredictionKeyItem> PredictionKeys; // 0x108(0x10)
	};


	// Struct GameplayAbilities.ReplicatedPredictionKeyItem
	// Inherited from FFastArraySerializerItem
	// Size: 0x14 (0x20 - 0xC)
	struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FPredictionKey PredictionKey; // 0x10(0x10)
	};


	// Struct GameplayAbilities.MinimalReplicationTagCountMap
	// Size: 0x68 (0x68 - 0x0)
	struct FMinimalReplicationTagCountMap	
	{
	public:
		unsigned char UnknownData00_7[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
		UAbilitySystemComponent* Owner; // 0x50(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.ActiveGameplayCueContainer
	// Inherited from FFastArraySerializer
	// Size: 0x20 (0x128 - 0x108)
	struct FActiveGameplayCueContainer : public FFastArraySerializer	
	{
	public:
		TArray<FActiveGameplayCue> GameplayCues; // 0x108(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
		UAbilitySystemComponent* Owner; // 0x120(0x8)
	};


	// Struct GameplayAbilities.ActiveGameplayCue
	// Inherited from FFastArraySerializerItem
	// Size: 0xEC (0xF8 - 0xC)
	struct FActiveGameplayCue : public FFastArraySerializerItem	
	{
	public:
		FGameplayTag GameplayCueTag; // 0xC(0x4)
		FPredictionKey PredictionKey; // 0x10(0x10)
		FGameplayCueParameters Parameters; // 0x20(0xD0)
		bool bPredictivelyRemoved; // 0xF0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.ActiveGameplayEffectsContainer
	// Inherited from FFastArraySerializer
	// Size: 0x1F8 (0x300 - 0x108)
	struct FActiveGameplayEffectsContainer : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x108(0x28) UNKNOWN PROPERTY
		TArray<FActiveGameplayEffect> GameplayEffects_Internal; // 0x130(0x10)
		unsigned char UnknownData01_7[0x1C0]; // 0x140(0x1C0) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilityLocalAnimMontage
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayAbilityLocalAnimMontage	
	{
	public:
		UAnimMontage* AnimMontage; // 0x0(0x8)
		char PlayInstanceId; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FPredictionKey PredictionKey; // 0x10(0x10)
		TWeakObjectPtr<UGameplayAbility*> AnimatingAbility; // 0x20(0x8)
	};


	// Struct GameplayAbilities.GameplayAbilityRepAnimMontage
	// Size: 0x38 (0x38 - 0x0)
	struct FGameplayAbilityRepAnimMontage	
	{
	public:
		UAnimSequenceBase* Animation; // 0x0(0x8)
		FName SlotName; // 0x8(0x4)
		float PlayRate; // 0xC(0x4)
		float Position; // 0x10(0x4)
		float BlendTime; // 0x14(0x4)
		float BlendOutTime; // 0x18(0x4)
		char NextSectionID; // 0x1C(0x1)
		char PlayInstanceId; // 0x1D(0x1)
		bool bRepPosition : 1; // 0x1E:0(0x1)
		bool IsStopped : 1; // 0x1E:1(0x1)
		bool SkipPositionCorrection : 1; // 0x1E:2(0x1)
		bool bSkipPlayRate : 1; // 0x1E:3(0x1)
		unsigned char UnknownData00_5[0x1]; // 0x1F(0x1) UNKNOWN PROPERTY
		FPredictionKey PredictionKey; // 0x20(0x10)
		char SectionIdToPlay; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilitySpecContainer
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FGameplayAbilitySpecContainer : public FFastArraySerializer	
	{
	public:
		TArray<FGameplayAbilitySpec> Items; // 0x108(0x10)
		UAbilitySystemComponent* Owner; // 0x118(0x8)
	};


	// Struct GameplayAbilities.GameplayAbilitySpec
	// Inherited from FFastArraySerializerItem
	// Size: 0xE4 (0xF0 - 0xC)
	struct FGameplayAbilitySpec : public FFastArraySerializerItem	
	{
	public:
		FGameplayAbilitySpecHandle Handle; // 0xC(0x4)
		UGameplayAbility* ability; // 0x10(0x8)
		int32_t Level; // 0x18(0x4)
		int32_t InputID; // 0x1C(0x4)
		TWeakObjectPtr<UObject*> SourceObject; // 0x20(0x8)
		char ActiveCount; // 0x28(0x1)
		bool InputPressed : 1; // 0x29:0(0x1)
		bool RemoveAfterActivation : 1; // 0x29:1(0x1)
		bool PendingRemove : 1; // 0x29:2(0x1)
		bool bActivateOnce : 1; // 0x29:3(0x1)
		unsigned char UnknownData00_5[0x16]; // 0x2A(0x16) UNKNOWN PROPERTY
		FGameplayAbilityActivationInfo ActivationInfo; // 0x40(0x18)
		FGameplayTagContainer DynamicAbilityTags; // 0x58(0x20)
		TArray<UGameplayAbility*> NonReplicatedInstances; // 0x78(0x10)
		TArray<UGameplayAbility*> ReplicatedInstances; // 0x88(0x10)
		FActiveGameplayEffectHandle GameplayEffectHandle; // 0x98(0x8)
		unsigned char UnknownData01_7[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.AttributeDefaults
	// Size: 0x10 (0x10 - 0x0)
	struct FAttributeDefaults	
	{
	public:
		UClass* Attributes; // 0x0(0x8)
		UDataTable* DefaultStartingTable; // 0x8(0x8)
	};


	// Struct GameplayAbilities.GameplayCueTag
	// Size: 0x4 (0x4 - 0x0)
	struct FGameplayCueTag	
	{
	public:
		FGameplayTag GameplayCueTag; // 0x0(0x4)
	};


	// Struct GameplayAbilities.GameplayAbilityActorInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FGameplayAbilityActorInfo	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> OwnerActor; // 0x8(0x8)
		TWeakObjectPtr<AActor*> AvatarActor; // 0x10(0x8)
		TWeakObjectPtr<APlayerController*> PlayerController; // 0x18(0x8)
		TWeakObjectPtr<UAbilitySystemComponent*> AbilitySystemComponent; // 0x20(0x8)
		TWeakObjectPtr<USkeletalMeshComponent*> SkeletalMeshComponent; // 0x28(0x8)
		TWeakObjectPtr<UAnimInstance*> AnimInstance; // 0x30(0x8)
		TWeakObjectPtr<UMovementComponent*> MovementComponent; // 0x38(0x8)
		FName AffectedAnimInstanceTag; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilityTargetingLocationInfo
	// Size: 0x90 (0x90 - 0x0)
	struct FGameplayAbilityTargetingLocationInfo	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		AActor* SourceActor; // 0x8(0x8)
		UMeshComponent* SourceComponent; // 0x10(0x8)
		UGameplayAbility* SourceAbility; // 0x18(0x8)
		FTransform LiteralTransform; // 0x20(0x60)
		FName SourceSocketName; // 0x80(0x4)
		TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType; // 0x84(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x85(0xB) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.AbilityTriggerData
	// Size: 0x8 (0x8 - 0x0)
	struct FAbilityTriggerData	
	{
	public:
		FGameplayTag TriggerTag; // 0x0(0x4)
		TEnumAsByte<EGameplayAbilityTriggerSource> TriggerSource; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayModifierEvaluatedData
	// Size: 0x50 (0x50 - 0x0)
	struct FGameplayModifierEvaluatedData	
	{
	public:
		FGameplayAttribute Attribute; // 0x0(0x38)
		TEnumAsByte<EGameplayModOp> ModifierOp; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float Magnitude; // 0x3C(0x4)
		FActiveGameplayEffectHandle Handle; // 0x40(0x8)
		bool IsValid; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
	// Size: 0x338 (0x338 - 0x0)
	struct FGameplayEffectExecutionScopedModifierInfo	
	{
	public:
		FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x0(0x40)
		FGameplayTag TransientAggregatorIdentifier; // 0x40(0x4)
		EGameplayEffectScopedModifierAggregatorType AggregatorType; // 0x44(0x1)
		TEnumAsByte<EGameplayModOp> ModifierOp; // 0x45(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
		FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x48(0x1D8)
		FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x220(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x221(0x7) UNKNOWN PROPERTY
		FGameplayTagRequirements SourceTags; // 0x228(0x88)
		FGameplayTagRequirements TargetTags; // 0x2B0(0x88)
	};


	// Struct GameplayAbilities.GameplayModEvaluationChannelSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FGameplayModEvaluationChannelSettings	
	{
	public:
		EGameplayModEvaluationChannel Channel; // 0x0(0x1)
	};


	// Struct GameplayAbilities.GameplayEffectModifierMagnitude
	// Size: 0x1D8 (0x1D8 - 0x0)
	struct FGameplayEffectModifierMagnitude	
	{
	public:
		EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FScalableFloat ScalableFloatMagnitude; // 0x8(0x28)
		FAttributeBasedFloat AttributeBasedMagnitude; // 0x30(0x110)
		FCustomCalculationBasedFloat CustomMagnitude; // 0x140(0x90)
		FSetByCallerFloat SetByCallerMagnitude; // 0x1D0(0x8)
	};


	// Struct GameplayAbilities.SetByCallerFloat
	// Size: 0x8 (0x8 - 0x0)
	struct FSetByCallerFloat	
	{
	public:
		FName DataName; // 0x0(0x4)
		FGameplayTag DataTag; // 0x4(0x4)
	};


	// Struct GameplayAbilities.CustomCalculationBasedFloat
	// Size: 0x90 (0x90 - 0x0)
	struct FCustomCalculationBasedFloat	
	{
	public:
		UClass* CalculationClassMagnitude; // 0x0(0x8)
		FScalableFloat Coefficient; // 0x8(0x28)
		FScalableFloat PreMultiplyAdditiveValue; // 0x30(0x28)
		FScalableFloat PostMultiplyAdditiveValue; // 0x58(0x28)
		FCurveTableRowHandle FinalLookupCurve; // 0x80(0x10)
	};


	// Struct GameplayAbilities.AttributeBasedFloat
	// Size: 0x110 (0x110 - 0x0)
	struct FAttributeBasedFloat	
	{
	public:
		FScalableFloat Coefficient; // 0x0(0x28)
		FScalableFloat PreMultiplyAdditiveValue; // 0x28(0x28)
		FScalableFloat PostMultiplyAdditiveValue; // 0x50(0x28)
		FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x78(0x40)
		FCurveTableRowHandle AttributeCurve; // 0xB8(0x10)
		EAttributeBasedFloatCalculationType AttributeCalculationType; // 0xC8(0x1)
		EGameplayModEvaluationChannel FinalChannel; // 0xC9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xCA(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer SourceTagFilter; // 0xD0(0x20)
		FGameplayTagContainer TargetTagFilter; // 0xF0(0x20)
	};


	// Struct GameplayAbilities.GameplayAbilitySpecConfig
	// Size: 0x38 (0x38 - 0x0)
	struct FGameplayAbilitySpecConfig	
	{
	public:
		UClass* ability; // 0x0(0x8)
		FScalableFloat LevelScalableFloat; // 0x8(0x28)
		int32_t InputID; // 0x30(0x4)
		EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x34(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilityTargetingLocationInfoNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FGameplayAbilityTargetingLocationInfoNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct GameplayAbilities.GameplayCuePendingExecute
	// Size: 0x180 (0x180 - 0x0)
	struct FGameplayCuePendingExecute	
	{
	public:
		unsigned char UnknownData00_7[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
		FPredictionKey PredictionKey; // 0x18(0x10)
		EGameplayCuePayloadType PayloadType; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UAbilitySystemComponent* OwningComponent; // 0x30(0x8)
		FGameplayEffectSpecForRPC FromSpec; // 0x38(0x78)
		FGameplayCueParameters CueParameters; // 0xB0(0xD0)
	};


	// Struct GameplayAbilities.GameplayCueNotifyActorArray
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayCueNotifyActorArray	
	{
	public:
		TArray<AGameplayCueNotify_Actor*> Actors; // 0x0(0x10)
	};


	// Struct GameplayAbilities.PreallocationInfo
	// Size: 0x68 (0x68 - 0x0)
	struct FPreallocationInfo	
	{
	public:
		TMap<UClass*, FGameplayCueNotifyActorArray> PreallocatedInstances; // 0x0(0x50)
		TArray<UClass*> ClassesNeedingPreallocation; // 0x50(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x60(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
	// Size: 0x20 (0x20 - 0x0)
	struct FMinimalGameplayCueReplicationProxyForNetSerializer	
	{
	public:
		TArray<FGameplayTag> Tags; // 0x0(0x10)
		TArray<FVector_NetQuantize> Locations; // 0x10(0x10)
	};


	// Struct GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
	// Size: 0x10 (0x10 - 0x0)
	struct FMinimalReplicationTagCountMapForNetSerializer	
	{
	public:
		TArray<FGameplayTag> Tags; // 0x0(0x10)
	};


	// Struct GameplayAbilities.GameplayAbilityBindInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayAbilityBindInfo	
	{
	public:
		TEnumAsByte<EGameplayAbilityInputBinds> Command; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UClass* GameplayAbilityClass; // 0x8(0x8)
	};


	// Struct GameplayAbilities.GameplayTargetDataFilter
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayTargetDataFilter	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		AActor* SelfActor; // 0x8(0x8)
		UClass* RequiredActorClass; // 0x10(0x8)
		TEnumAsByte<ETargetDataFilterSelf> SelfFilter; // 0x18(0x1)
		bool bReverseFilter; // 0x19(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.WorldReticleParameters
	// Size: 0x18 (0x18 - 0x0)
	struct FWorldReticleParameters	
	{
	public:
		FVector AOEScale; // 0x0(0x18)
	};


	// Struct GameplayAbilities.NetSerializeScriptStructCache
	// Size: 0x10 (0x10 - 0x0)
	struct FNetSerializeScriptStructCache	
	{
	public:
		TArray<UScriptStruct*> ScriptStructs; // 0x0(0x10)
	};


	// Struct GameplayAbilities.GameplayAttributeData
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayAttributeData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		float BaseValue; // 0x8(0x4)
		float CurrentValue; // 0xC(0x4)
	};


	// Struct GameplayAbilities.AttributeMetaData
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FAttributeMetaData : public FTableRowBase	
	{
	public:
		float BaseValue; // 0x8(0x4)
		float MinValue; // 0xC(0x4)
		float MaxValue; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString DerivedAttributeInfo; // 0x18(0x10)
		bool bCanStack; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilityTargetData
	// Size: 0x8 (0x8 - 0x0)
	struct FGameplayAbilityTargetData	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
	// Inherited from FGameplayAbilityTargetData
	// Size: 0x128 (0x130 - 0x8)
	struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x90)
		FGameplayAbilityTargetingLocationInfo TargetLocation; // 0xA0(0x90)
	};


	// Struct GameplayAbilities.GameplayAbilityTargetData_ActorArray
	// Inherited from FGameplayAbilityTargetData
	// Size: 0xA8 (0xB0 - 0x8)
	struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x90)
		TArray<TWeakObjectPtr> TargetActorArray; // 0xA0(0x10)
	};


	// Struct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
	// Inherited from FGameplayAbilityTargetData
	// Size: 0x100 (0x108 - 0x8)
	struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData	
	{
	public:
		FHitResult HitResult; // 0x8(0xF8)
		bool bHitReplaced; // 0x100(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.AbilityEndedData
	// Size: 0x10 (0x10 - 0x0)
	struct FAbilityEndedData	
	{
	public:
		UGameplayAbility* AbilityThatEnded; // 0x0(0x8)
		FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x8(0x4)
		bool bReplicateEndAbility; // 0xC(0x1)
		bool bWasCancelled; // 0xD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.AbilityTaskDebugMessage
	// Size: 0x18 (0x18 - 0x0)
	struct FAbilityTaskDebugMessage	
	{
	public:
		UGameplayTask* FromTask; // 0x0(0x8)
		FString Message; // 0x8(0x10)
	};


	// Struct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
	// Size: 0x8 (0x8 - 0x0)
	struct FGameplayAbilitySpecHandleAndPredictionKey	
	{
	public:
		FGameplayAbilitySpecHandle AbilityHandle; // 0x0(0x4)
		int32_t PredictionKeyAtCreation; // 0x4(0x4)
	};


	// Struct GameplayAbilities.MinimalGameplayCueReplicationProxy
	// Size: 0x2D0 (0x2D0 - 0x0)
	struct FMinimalGameplayCueReplicationProxy	
	{
	public:
		unsigned char UnknownData00_7[0x2C0]; // 0x0(0x2C0) UNKNOWN PROPERTY
		UAbilitySystemComponent* Owner; // 0x2C0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueObjectLibrary
	// Size: 0x50 (0x50 - 0x0)
	struct FGameplayCueObjectLibrary	
	{
	public:
		TArray<FString> Paths; // 0x0(0x10)
		unsigned char UnknownData00_6[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
		UObjectLibrary* ActorObjectLibrary; // 0x30(0x8)
		UObjectLibrary* StaticObjectLibrary; // 0x38(0x8)
		UGameplayCueSet* CueSet; // 0x40(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x48(0x4) UNKNOWN PROPERTY
		bool bShouldSyncScan; // 0x4C(0x1)
		bool bShouldAsyncLoad; // 0x4D(0x1)
		bool bShouldSyncLoad; // 0x4E(0x1)
		bool bHasBeenInitialized; // 0x4F(0x1)
	};


	// Struct GameplayAbilities.GameplayCueNotify_SpawnCondition
	// Size: 0x38 (0x38 - 0x0)
	struct FGameplayCueNotify_SpawnCondition	
	{
	public:
		EGameplayCueNotify_LocallyControlledSource LocallyControlledSource; // 0x0(0x1)
		EGameplayCueNotify_LocallyControlledPolicy LocallyControlledPolicy; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ChanceToPlay; // 0x4(0x4)
		TArray<TEnumAsByte> AllowedSurfaceTypes; // 0x8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		TArray<TEnumAsByte> RejectedSurfaceTypes; // 0x20(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueNotify_PlacementInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FGameplayCueNotify_PlacementInfo	
	{
	public:
		FName SocketName; // 0x0(0x4)
		EGameplayCueNotify_AttachPolicy AttachPolicy; // 0x4(0x1)
		EAttachmentRule AttachmentRule; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		bool bOverrideRotation : 1; // 0x8:0(0x1)
		bool bOverrideScale : 1; // 0x8:1(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FRotator RotationOverride; // 0x10(0x18)
		FVector ScaleOverride; // 0x28(0x18)
	};


	// Struct GameplayAbilities.GameplayCueNotify_SpawnResult
	// Size: 0x58 (0x58 - 0x0)
	struct FGameplayCueNotify_SpawnResult	
	{
	public:
		TArray<UFXSystemComponent*> FxSystemComponents; // 0x0(0x10)
		TArray<UAudioComponent*> AudioComponents; // 0x10(0x10)
		TArray<UCameraShakeBase*> CameraShakes; // 0x20(0x10)
		TArray<TScriptInterface> CameraLensEffects; // 0x30(0x10)
		UForceFeedbackComponent* ForceFeedbackComponent; // 0x40(0x8)
		APlayerController* ForceFeedbackTargetPC; // 0x48(0x8)
		UDecalComponent* DecalComponent; // 0x50(0x8)
	};


	// Struct GameplayAbilities.GameplayCueNotify_ParticleInfo
	// Size: 0x88 (0x88 - 0x0)
	struct FGameplayCueNotify_ParticleInfo	
	{
	public:
		FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0(0x38)
		FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38(0x40)
		UNiagaraSystem* NiagaraSystem; // 0x78(0x8)
		bool bOverrideSpawnCondition : 1; // 0x80:0(0x1)
		bool bOverridePlacementInfo : 1; // 0x80:1(0x1)
		bool bCastShadow : 1; // 0x80:2(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
	// Size: 0x4 (0x4 - 0x0)
	struct FGameplayCueNotify_SoundParameterInterfaceInfo	
	{
	public:
		FName StopTriggerName; // 0x0(0x4)
	};


	// Struct GameplayAbilities.GameplayCueNotify_SoundInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FGameplayCueNotify_SoundInfo	
	{
	public:
		FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0(0x38)
		FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38(0x40)
		USoundBase* Sound; // 0x78(0x8)
		USoundBase* SoundCue; // 0x80(0x8)
		float LoopingFadeOutDuration; // 0x88(0x4)
		float LoopingFadeVolumeLevel; // 0x8C(0x4)
		FGameplayCueNotify_SoundParameterInterfaceInfo SoundParameterInterfaceInfo; // 0x90(0x4)
		bool bOverrideSpawnCondition : 1; // 0x94:0(0x1)
		bool bOverridePlacementInfo : 1; // 0x94:1(0x1)
		bool bUseSoundParameterInterface : 1; // 0x94:2(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueNotify_CameraShakeInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FGameplayCueNotify_CameraShakeInfo	
	{
	public:
		FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0(0x38)
		FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38(0x40)
		UClass* CameraShake; // 0x78(0x8)
		float ShakeScale; // 0x80(0x4)
		EGameplayCueNotify_EffectPlaySpace Playspace; // 0x84(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		bool bOverrideSpawnCondition : 1; // 0x88:0(0x1)
		bool bOverridePlacementInfo : 1; // 0x88:1(0x1)
		bool bPlayInWorld : 1; // 0x88:2(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		float WorldInnerRadius; // 0x8C(0x4)
		float WorldOuterRadius; // 0x90(0x4)
		float WorldFalloffExponent; // 0x94(0x4)
	};


	// Struct GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
	// Size: 0x90 (0x90 - 0x0)
	struct FGameplayCueNotify_CameraLensEffectInfo	
	{
	public:
		FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0(0x38)
		FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38(0x40)
		UClass* CameraLensEffect; // 0x78(0x8)
		bool bOverrideSpawnCondition : 1; // 0x80:0(0x1)
		bool bOverridePlacementInfo : 1; // 0x80:1(0x1)
		bool bPlayInWorld : 1; // 0x80:2(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x81(0x3) UNKNOWN PROPERTY
		float WorldInnerRadius; // 0x84(0x4)
		float WorldOuterRadius; // 0x88(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
	// Size: 0x98 (0x98 - 0x0)
	struct FGameplayCueNotify_ForceFeedbackInfo	
	{
	public:
		FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0(0x38)
		FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38(0x40)
		UForceFeedbackEffect* ForceFeedbackEffect; // 0x78(0x8)
		FName ForceFeedbackTag; // 0x80(0x4)
		bool bIsLooping : 1; // 0x84:0(0x1)
		bool bOverrideSpawnCondition : 1; // 0x84:1(0x1)
		bool bOverridePlacementInfo : 1; // 0x84:2(0x1)
		bool bPlayInWorld : 1; // 0x84:3(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		float WorldIntensity; // 0x88(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		UForceFeedbackAttenuation* WorldAttenuation; // 0x90(0x8)
	};


	// Struct GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayCueNotify_InputDevicePropertyInfo	
	{
	public:
		TArray<UClass*> DeviceProperties; // 0x0(0x10)
	};


	// Struct GameplayAbilities.GameplayCueNotify_DecalInfo
	// Size: 0xA8 (0xA8 - 0x0)
	struct FGameplayCueNotify_DecalInfo	
	{
	public:
		FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0(0x38)
		FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38(0x40)
		UMaterialInterface* DecalMaterial; // 0x78(0x8)
		FVector DecalSize; // 0x80(0x18)
		bool bOverrideSpawnCondition : 1; // 0x98:0(0x1)
		bool bOverridePlacementInfo : 1; // 0x98:1(0x1)
		bool bOverrideFadeOut : 1; // 0x98:2(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		float FadeOutStartDelay; // 0x9C(0x4)
		float FadeOutDuration; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueNotify_BurstEffects
	// Size: 0x298 (0x298 - 0x0)
	struct FGameplayCueNotify_BurstEffects	
	{
	public:
		TArray<FGameplayCueNotify_ParticleInfo> BurstParticles; // 0x0(0x10)
		TArray<FGameplayCueNotify_SoundInfo> BurstSounds; // 0x10(0x10)
		FGameplayCueNotify_CameraShakeInfo BurstCameraShake; // 0x20(0x98)
		FGameplayCueNotify_CameraLensEffectInfo BurstCameraLensEffect; // 0xB8(0x90)
		FGameplayCueNotify_ForceFeedbackInfo BurstForceFeedback; // 0x148(0x98)
		FGameplayCueNotify_InputDevicePropertyInfo BurstDevicePropertyEffect; // 0x1E0(0x10)
		FGameplayCueNotify_DecalInfo BurstDecal; // 0x1F0(0xA8)
	};


	// Struct GameplayAbilities.GameplayCueNotify_LoopingEffects
	// Size: 0x1F0 (0x1F0 - 0x0)
	struct FGameplayCueNotify_LoopingEffects	
	{
	public:
		TArray<FGameplayCueNotify_ParticleInfo> LoopingParticles; // 0x0(0x10)
		TArray<FGameplayCueNotify_SoundInfo> LoopingSounds; // 0x10(0x10)
		FGameplayCueNotify_CameraShakeInfo LoopingCameraShake; // 0x20(0x98)
		FGameplayCueNotify_CameraLensEffectInfo LoopingCameraLensEffect; // 0xB8(0x90)
		FGameplayCueNotify_ForceFeedbackInfo LoopingForceFeedback; // 0x148(0x98)
		FGameplayCueNotify_InputDevicePropertyInfo LoopingInputDevicePropertyEffect; // 0x1E0(0x10)
	};


	// Struct GameplayAbilities.GameplayCueNotifyData
	// Size: 0x30 (0x30 - 0x0)
	struct FGameplayCueNotifyData	
	{
	public:
		FGameplayTag GameplayCueTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FSoftObjectPath GameplayCueNotifyObj; // 0x8(0x18)
		UClass* LoadedGameplayCueClass; // 0x20(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueTranslatorNodeIndex
	// Size: 0x4 (0x4 - 0x0)
	struct FGameplayCueTranslatorNodeIndex	
	{
	public:
		int32_t Index; // 0x0(0x4)
	};


	// Struct GameplayAbilities.GameplayCueTranslationLink
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayCueTranslationLink	
	{
	public:
		UGameplayCueTranslator* RulesCDO; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueTranslatorNode
	// Size: 0x70 (0x70 - 0x0)
	struct FGameplayCueTranslatorNode	
	{
	public:
		TArray<FGameplayCueTranslationLink> Links; // 0x0(0x10)
		FGameplayCueTranslatorNodeIndex CachedIndex; // 0x10(0x4)
		FGameplayTag CachedGameplayTag; // 0x14(0x4)
		FName CachedGameplayTagName; // 0x18(0x4)
		unsigned char UnknownData00_7[0x54]; // 0x1C(0x54) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayCueTranslationManager
	// Size: 0x80 (0x80 - 0x0)
	struct FGameplayCueTranslationManager	
	{
	public:
		TArray<FGameplayCueTranslatorNode> TranslationLUT; // 0x0(0x10)
		TMap<FName, FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x10(0x50)
		UGameplayTagsManager* TagManager; // 0x60(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x68(0x18) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.ConditionalGameplayEffect
	// Size: 0x28 (0x28 - 0x0)
	struct FConditionalGameplayEffect	
	{
	public:
		UClass* EffectClass; // 0x0(0x8)
		FGameplayTagContainer RequiredSourceTags; // 0x8(0x20)
	};


	// Struct GameplayAbilities.GameplayEffectExecutionDefinition
	// Size: 0x48 (0x48 - 0x0)
	struct FGameplayEffectExecutionDefinition	
	{
	public:
		UClass* CalculationClass; // 0x0(0x8)
		FGameplayTagContainer PassedInTags; // 0x8(0x20)
		TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x28(0x10)
		TArray<FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x38(0x10)
	};


	// Struct GameplayAbilities.GameplayModifierInfo
	// Size: 0x330 (0x330 - 0x0)
	struct FGameplayModifierInfo	
	{
	public:
		FGameplayAttribute Attribute; // 0x0(0x38)
		TEnumAsByte<EGameplayModOp> ModifierOp; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x40(0x1D8)
		FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x218(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x219(0x7) UNKNOWN PROPERTY
		FGameplayTagRequirements SourceTags; // 0x220(0x88)
		FGameplayTagRequirements TargetTags; // 0x2A8(0x88)
	};


	// Struct GameplayAbilities.GameplayEffectCue
	// Size: 0x60 (0x60 - 0x0)
	struct FGameplayEffectCue	
	{
	public:
		FGameplayAttribute MagnitudeAttribute; // 0x0(0x38)
		float MinLevel; // 0x38(0x4)
		float MaxLevel; // 0x3C(0x4)
		FGameplayTagContainer GameplayCueTags; // 0x40(0x20)
	};


	// Struct GameplayAbilities.InheritedTagContainer
	// Size: 0x60 (0x60 - 0x0)
	struct FInheritedTagContainer	
	{
	public:
		FGameplayTagContainer CombinedTags; // 0x0(0x20)
		FGameplayTagContainer Added; // 0x20(0x20)
		FGameplayTagContainer Removed; // 0x40(0x20)
	};


	// Struct GameplayAbilities.ActiveGameplayEffectQuery
	// Size: 0x88 (0x88 - 0x0)
	struct FActiveGameplayEffectQuery	
	{
	public:
		unsigned char UnknownData00_2[0x88]; // 0x0(0x88) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectVersion
	// Size: 0x1 (0x1 - 0x0)
	struct FGameplayEffectVersion	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectCustomExecutionParameters
	// Size: 0xF0 (0xF0 - 0x0)
	struct FGameplayEffectCustomExecutionParameters	
	{
	public:
		unsigned char UnknownData00_2[0xF0]; // 0x0(0xF0) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectCustomExecutionOutput
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayEffectCustomExecutionOutput	
	{
	public:
		TArray<FGameplayModifierEvaluatedData> OutputModifiers; // 0x0(0x10)
		bool bTriggerConditionalGameplayEffects : 1; // 0x10:0(0x1)
		bool bHandledStackCountManually : 1; // 0x10:1(0x1)
		bool bHandledGameplayCuesManually : 1; // 0x10:2(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayEffectContext
	// Size: 0x80 (0x80 - 0x0)
	struct FGameplayEffectContext	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> Instigator; // 0x8(0x8)
		TWeakObjectPtr<AActor*> EffectCauser; // 0x10(0x8)
		TWeakObjectPtr<UGameplayAbility*> AbilityCDO; // 0x18(0x8)
		TWeakObjectPtr<UGameplayAbility*> AbilityInstanceNotReplicated; // 0x20(0x8)
		int32_t AbilityLevel; // 0x28(0x4)
		TWeakObjectPtr<UObject*> SourceObject; // 0x2C(0x8)
		TWeakObjectPtr<UAbilitySystemComponent*> InstigatorAbilitySystemComponent; // 0x34(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> Actors; // 0x40(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
		FVector WorldOrigin; // 0x60(0x18)
		bool bHasWorldOrigin : 1; // 0x78:0(0x1)
		bool bReplicateSourceObject : 1; // 0x78:1(0x1)
		bool bReplicateInstigator : 1; // 0x78:2(0x1)
		bool bReplicateEffectCauser : 1; // 0x78:3(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayTagBlueprintPropertyMapping
	// Size: 0x48 (0x48 - 0x0)
	struct FGameplayTagBlueprintPropertyMapping	
	{
	public:
		FGameplayTag TagToMap; // 0x0(0x4)
		unsigned char UnknownData00_6[0x24]; // 0x4(0x24) UNKNOWN PROPERTY
		FName PropertyName; // 0x28(0x4)
		FGuid PropertyGuid; // 0x2C(0x10)
		unsigned char UnknownData01_7[0xC]; // 0x3C(0xC) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayTagBlueprintPropertyMap
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayTagBlueprintPropertyMap	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		TArray<FGameplayTagBlueprintPropertyMapping> PropertyMappings; // 0x10(0x10)
	};


	// Struct GameplayAbilities.GameplayTagReponsePair
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayTagReponsePair	
	{
	public:
		FGameplayTag Tag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass* ResponseGameplayEffect; // 0x8(0x8)
		TArray<UClass*> ResponseGameplayEffects; // 0x10(0x10)
		int32_t SoftCountCap; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayTagResponseTableEntry
	// Size: 0x50 (0x50 - 0x0)
	struct FGameplayTagResponseTableEntry	
	{
	public:
		FGameplayTagReponsePair Positive; // 0x0(0x28)
		FGameplayTagReponsePair Negative; // 0x28(0x28)
	};


	// Struct GameplayAbilities.MovieSceneGameplayCueKey
	// Size: 0x88 (0x88 - 0x0)
	struct FMovieSceneGameplayCueKey	
	{
	public:
		FGameplayCueTag Cue; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x8(0x18)
		FVector Normal; // 0x20(0x18)
		FName AttachSocketName; // 0x38(0x4)
		float NormalizedMagnitude; // 0x3C(0x4)
		FMovieSceneObjectBindingID Instigator; // 0x40(0x18)
		FMovieSceneObjectBindingID EffectCauser; // 0x58(0x18)
		UPhysicalMaterial* PhysicalMaterial; // 0x70(0x8)
		int32_t GameplayEffectLevel; // 0x78(0x4)
		int32_t AbilityLevel; // 0x7C(0x4)
		bool bAttachToBinding; // 0x80(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.MovieSceneGameplayCueChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xA8 (0xF8 - 0x50)
	struct FMovieSceneGameplayCueChannel : public FMovieSceneChannel	
	{
	public:
		TArray<FFrameNumber> KeyTimes; // 0x50(0x10)
		TArray<FMovieSceneGameplayCueKey> KeyValues; // 0x60(0x10)
		unsigned char UnknownData00_7[0x88]; // 0x70(0x88) UNKNOWN PROPERTY
	};


	// Struct GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FGameplayAbilityRepAnimMontageNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
	// Inherited from FPolymorphicStructNetSerializerConfig -> FNetSerializerConfig
	// Size: 0x0 (0x28 - 0x28)
	struct FGameplayEffectContextHandleNetSerializerConfig : public FPolymorphicStructNetSerializerConfig	
	{
	public:
	};


	// Struct GameplayAbilities.GameplayEffectContextNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FGameplayEffectContextNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FMinimalGameplayCueReplicationProxyNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FMinimalReplicationTagCountMapNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct GameplayAbilities.PredictionKeyNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FPredictionKeyNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};

}
