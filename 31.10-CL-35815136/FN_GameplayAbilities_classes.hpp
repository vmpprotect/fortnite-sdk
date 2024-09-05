#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayAbilities
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayAbilities.AbilitySystemDebugHUD
	// Inherited from AHUD -> AActor -> UObject
	// Size: 0x0 (0x380 - 0x380)
	class AAbilitySystemDebugHUD : public AHUD	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemDebugHUD");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayEffect
	// Inherited from UObject
	// Size: 0xA40 (0xA68 - 0x28)
	class UGameplayEffect : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EGameplayEffectDurationType DurationPolicy; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x1D8)
		FScalableFloat Period; // 0x210(0x28)
		bool bExecutePeriodicEffectOnApplication; // 0x238(0x1)
		EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x239(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x23A(0x6) UNKNOWN PROPERTY
		TArray<FGameplayModifierInfo> Modifiers; // 0x240(0x10)
		TArray<FGameplayEffectExecutionDefinition> Executions; // 0x250(0x10)
		FScalableFloat ChanceToApplyToTarget; // 0x260(0x28)
		TArray<UClass*> ApplicationRequirements; // 0x288(0x10)
		TArray<FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x298(0x10)
		TArray<UClass*> OverflowEffects; // 0x2A8(0x10)
		bool bDenyOverflowApplication; // 0x2B8(0x1)
		bool bClearStackOnOverflow; // 0x2B9(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x2BA(0x6) UNKNOWN PROPERTY
		TArray<UClass*> PrematureExpirationEffectClasses; // 0x2C0(0x10)
		TArray<UClass*> RoutineExpirationEffectClasses; // 0x2D0(0x10)
		bool bRequireModifierSuccessToTriggerCues; // 0x2E0(0x1)
		bool bSuppressStackingCues; // 0x2E1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x2E2(0x6) UNKNOWN PROPERTY
		TArray<FGameplayEffectCue> GameplayCues; // 0x2E8(0x10)
		UGameplayEffectUIData* UIData; // 0x2F8(0x8)
		FInheritedTagContainer InheritableGameplayEffectTags; // 0x300(0x60)
		FInheritedTagContainer InheritableOwnedTagsContainer; // 0x360(0x60)
		FInheritedTagContainer InheritableBlockedAbilityTagsContainer; // 0x3C0(0x60)
		FGameplayTagRequirements OngoingTagRequirements; // 0x420(0x88)
		FGameplayTagRequirements ApplicationTagRequirements; // 0x4A8(0x88)
		FGameplayTagRequirements RemovalTagRequirements; // 0x530(0x88)
		FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x5B8(0x60)
		FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x618(0x88)
		FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x6A0(0x198)
		unsigned char UnknownData05_6[0x8]; // 0x838(0x8) UNKNOWN PROPERTY
		FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x840(0x198)
		unsigned char UnknownData06_6[0x1]; // 0x9D8(0x1) UNKNOWN PROPERTY
		EGameplayEffectStackingType StackingType; // 0x9D9(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x9DA(0x2) UNKNOWN PROPERTY
		int32_t StackLimitCount; // 0x9DC(0x4)
		EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x9E0(0x1)
		EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x9E1(0x1)
		EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x9E2(0x1)
		unsigned char UnknownData08_6[0x5]; // 0x9E3(0x5) UNKNOWN PROPERTY
		TArray<FGameplayAbilitySpecDef> GrantedAbilities; // 0x9E8(0x10)
		unsigned char UnknownData09_6[0x60]; // 0x9F8(0x60) UNKNOWN PROPERTY
		TArray<UGameplayEffectComponent*> GEComponents; // 0xA58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayEffect");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayEffectComponent
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayEffectComponent : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitiesGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		TArray<FGameplayAbilitySpecConfig> GrantAbilityConfigs; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitiesGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilityAsync
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAbilityAsync : public UCancellableAsyncAction	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync");
			return ret;
		}

		void EndAction(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74802F76C(relative to base address)
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UAbilityAsync_WaitGameplayTagCountChanged : public UAbilityAsync	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate TagCountChanged; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged");
			return ret;
		}

		UAbilityAsync_WaitGameplayTagCountChanged WaitGameplayTagCountChangedOnActor(AActor* TargetActor, FGameplayTag Tag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7489D4460(relative to base address)
		void AsyncWaitGameplayTagCountDelegate__DelegateSignature(int32_t TagCount); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.AbilitySystemCheatManagerExtension
	// Inherited from UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAbilitySystemCheatManagerExtension : public UCheatManagerExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemCheatManagerExtension");
			return ret;
		}

		void EffectRemove(FString NameOrHandle); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74D284790(relative to base address)
		void EffectListActive(); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74D28477C(relative to base address)
		void EffectApply(FString PartialName, float EffectLevel); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74D2846A8(relative to base address)
		void AbilityListGranted(); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74D283754(relative to base address)
		void AbilityGrant(FString AssetSearchString); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74D2836C4(relative to base address)
		void AbilityCancel(FString PartialName); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74D283634(relative to base address)
		void AbilityActivate(FString PartialName); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74D2835A4(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask
	// Inherited from UGameplayTask -> UObject
	// Size: 0x18 (0x78 - 0x60)
	class UAbilityTask : public UGameplayTask	
	{
	public:
		UGameplayAbility* ability; // 0x60(0x8)
		TWeakObjectPtr<UAbilitySystemComponent*> AbilitySystemComponent; // 0x68(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilityTask_PlayAnimAndWait
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xB0 (0x128 - 0x78)
	class UAbilityTask_PlayAnimAndWait : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnCompleted; // 0x78(0x10)
		FMulticastInlineDelegate OnBlendOut; // 0x88(0x10)
		FMulticastInlineDelegate OnBlendIn; // 0x98(0x10)
		FMulticastInlineDelegate OnInterrupted; // 0xA8(0x10)
		FMulticastInlineDelegate OnCancelled; // 0xB8(0x10)
		unsigned char UnknownData00_6[0x38]; // 0xC8(0x38) UNKNOWN PROPERTY
		UAnimSequence* AnimSequenceToPlay; // 0x100(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x108(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_PlayAnimAndWait");
			return ret;
		}

		void OnMontageInterrupted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D286828(relative to base address)
		void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D286760(relative to base address)
		void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D286698(relative to base address)
		void OnMontageBlendedIn(UAnimMontage* Montage); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D286618(relative to base address)
		UAbilityTask_PlayAnimAndWait CreatePlayAnimAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimSequence* AnimSequence, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, float StartTimeSeconds, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2843C8(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UAbilityTask_WaitGameplayTagCountChanged : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate TagCountChanged; // 0x78(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		UAbilitySystemComponent* OptionalExternalTarget; // 0x90(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged");
			return ret;
		}

		UAbilityTask_WaitGameplayTagCountChanged WaitGameplayTagCountChange(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget); // Flags: Final|Native|Static|Protected|BlueprintCallable, Memory Exec: 0x7FF74D287154(relative to base address)
	};


	// Class GameplayAbilities.AdditionalEffectsGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		bool bOnApplicationCopyDataFromOriginalSpec; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray<FConditionalGameplayEffect> OnApplicationGameplayEffects; // 0x30(0x10)
		TArray<UClass*> OnCompleteAlways; // 0x40(0x10)
		TArray<UClass*> OnCompleteNormal; // 0x50(0x10)
		TArray<UClass*> OnCompletePrematurely; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AdditionalEffectsGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.AssetTagsGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		FInheritedTagContainer InheritableAssetTags; // 0x28(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AssetTagsGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		FInheritedTagContainer InheritableBlockedAbilityTagsContainer; // 0x28(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.BlockAbilityTagsGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.ChanceToApplyGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		FScalableFloat ChanceToApplyToTarget; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.ChanceToApplyGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.CustomCanApplyGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		TArray<UClass*> ApplicationRequirements; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.CustomCanApplyGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayCueNotify_Static
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameplayCueNotify_Static : public UObject	
	{
	public:
		FGameplayTag GameplayCueTag; // 0x28(0x4)
		FName GameplayCueName; // 0x2C(0x4)
		bool IsOverride; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_Static");
			return ret;
		}

		bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74D30B920(relative to base address)
		bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74D30B718(relative to base address)
		bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF748F7CFE0(relative to base address)
		bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74D30B614(relative to base address)
		void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.GameplayCueNotify_UnitTest
	// Inherited from UGameplayCueNotify_Static -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UGameplayCueNotify_UnitTest : public UGameplayCueNotify_Static	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_UnitTest");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayEffectUIData
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayEffectUIData : public UGameplayEffectComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayEffectUIData");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayEffectUIData_TextOnly
	// Inherited from UGameplayEffectUIData -> UGameplayEffectComponent -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData	
	{
	public:
		FText Description; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayEffectUIData_TextOnly");
			return ret;
		}
	};


	// Class GameplayAbilities.ImmunityGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UImmunityGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		TArray<FGameplayEffectQuery> ImmunityQueries; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.ImmunityGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.RemoveOtherGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		TArray<FGameplayEffectQuery> RemoveGameplayEffectQueries; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.RemoveOtherGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x198 (0x1C0 - 0x28)
	class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		FGameplayTagRequirements ApplicationTagRequirements; // 0x28(0x88)
		FGameplayTagRequirements OngoingTagRequirements; // 0xB0(0x88)
		FGameplayTagRequirements RemovalTagRequirements; // 0x138(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.TargetTagRequirementsGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.TargetTagsGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		FInheritedTagContainer InheritableGrantedTagsContainer; // 0x28(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.TargetTagsGameplayEffectComponent");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilityAsync_WaitAttributeChanged
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x58 (0x90 - 0x38)
	class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync	
	{
	public:
		FMulticastInlineDelegate Changed; // 0x38(0x10)
		unsigned char UnknownData00_7[0x48]; // 0x48(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged");
			return ret;
		}

		UAbilityAsync_WaitAttributeChanged WaitForAttributeChanged(AActor* TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7489D3464(relative to base address)
		void AsyncWaitAttributeChangedDelegate__DelegateSignature(FGameplayAttribute Attribute, float NewValue, float OldValue); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x150 (0x188 - 0x38)
	class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync	
	{
	public:
		FMulticastInlineDelegate OnApplied; // 0x38(0x10)
		unsigned char UnknownData00_7[0x140]; // 0x48(0x140) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied");
			return ret;
		}

		UAbilityAsync_WaitGameplayEffectApplied WaitGameplayEffectAppliedToActor(AActor* TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D286B6C(relative to base address)
		void OnAppliedDelegate__DelegateSignature(AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync	
	{
	public:
		FMulticastInlineDelegate EventReceived; // 0x38(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent");
			return ret;
		}

		UAbilityAsync_WaitGameplayEvent WaitGameplayEventToActor(AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7489D4698(relative to base address)
		void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UAbilityAsync_WaitGameplayTag : public UAbilityAsync	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayTag");
			return ret;
		}

		void AsyncWaitGameplayTagDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
	// Inherited from UAbilityAsync_WaitGameplayTag -> UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag	
	{
	public:
		FMulticastInlineDelegate Added; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded");
			return ret;
		}

		UAbilityAsync_WaitGameplayTagAdded WaitGameplayTagAddToActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7489D41C8(relative to base address)
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
	// Inherited from UAbilityAsync_WaitGameplayTag -> UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag	
	{
	public:
		FMulticastInlineDelegate Removed; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved");
			return ret;
		}

		UAbilityAsync_WaitGameplayTagRemoved WaitGameplayTagRemoveFromActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7489D3F30(relative to base address)
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0xD0 (0x108 - 0x38)
	class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync	
	{
	public:
		unsigned char UnknownData00_3[0xC0]; // 0x38(0xC0) UNKNOWN PROPERTY
		FMulticastInlineDelegate Triggered; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery");
			return ret;
		}

		UAbilityAsync_WaitGameplayTagQuery WaitGameplayTagQueryOnActor(AActor* TargetActor, FGameplayTagQuery TagQuery, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // Flags: Final|Native|Static|Protected|BlueprintCallable, Memory Exec: 0x7FF74D287350(relative to base address)
	};


	// Class GameplayAbilities.GameplayAbility
	// Inherited from UObject
	// Size: 0x388 (0x3B0 - 0x28)
	class UGameplayAbility : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x80]; // 0x28(0x80) UNKNOWN PROPERTY
		FGameplayTagContainer AbilityTags; // 0xA8(0x20)
		bool bReplicateInputDirectly; // 0xC8(0x1)
		bool RemoteInstanceEnded; // 0xC9(0x1)
		unsigned char UnknownData01_6[0x4]; // 0xCA(0x4) UNKNOWN PROPERTY
		TEnumAsByte<EGameplayAbilityReplicationPolicy> ReplicationPolicy; // 0xCE(0x1)
		TEnumAsByte<EGameplayAbilityInstancingPolicy> InstancingPolicy; // 0xCF(0x1)
		bool bServerRespectsRemoteAbilityCancellation; // 0xD0(0x1)
		bool bRetriggerInstancedAbility; // 0xD1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY
		FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xD8(0x18)
		FGameplayEventData CurrentEventData; // 0xF0(0xB0)
		TEnumAsByte<EGameplayAbilityNetExecutionPolicy> NetExecutionPolicy; // 0x1A0(0x1)
		TEnumAsByte<EGameplayAbilityNetSecurityPolicy> NetSecurityPolicy; // 0x1A1(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x1A2(0x6) UNKNOWN PROPERTY
		UClass* CostGameplayEffectClass; // 0x1A8(0x8)
		TArray<FAbilityTriggerData> AbilityTriggers; // 0x1B0(0x10)
		UClass* CooldownGameplayEffectClass; // 0x1C0(0x8)
		FGameplayTagContainer CancelAbilitiesWithTag; // 0x1C8(0x20)
		FGameplayTagContainer BlockAbilitiesWithTag; // 0x1E8(0x20)
		FGameplayTagContainer ActivationOwnedTags; // 0x208(0x20)
		FGameplayTagContainer ActivationRequiredTags; // 0x228(0x20)
		FGameplayTagContainer ActivationBlockedTags; // 0x248(0x20)
		FGameplayTagContainer SourceRequiredTags; // 0x268(0x20)
		FGameplayTagContainer SourceBlockedTags; // 0x288(0x20)
		FGameplayTagContainer TargetRequiredTags; // 0x2A8(0x20)
		FGameplayTagContainer TargetBlockedTags; // 0x2C8(0x20)
		unsigned char UnknownData04_6[0x20]; // 0x2E8(0x20) UNKNOWN PROPERTY
		TArray<UGameplayTask*> ActiveTasks; // 0x308(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x318(0x10) UNKNOWN PROPERTY
		UAnimMontage* CurrentMontage; // 0x328(0x8)
		unsigned char UnknownData06_6[0x60]; // 0x330(0x60) UNKNOWN PROPERTY
		bool bIsActive; // 0x390(0x1)
		bool bIsAbilityEnding; // 0x391(0x1)
		bool bIsCancelable; // 0x392(0x1)
		bool bIsBlockingOtherAbilities; // 0x393(0x1)
		unsigned char UnknownData07_6[0x14]; // 0x394(0x14) UNKNOWN PROPERTY
		bool bMarkPendingKillOnAbilityEnd; // 0x3A8(0x1)
		unsigned char UnknownData08_7[0x7]; // 0x3A9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbility");
			return ret;
		}

		void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D286AE8(relative to base address)
		void SetCanBeCanceled(bool bCanBeCanceled); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D286A64(relative to base address)
		void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D28683C(relative to base address)
		void RemoveGrantedByEffect(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4A3840(relative to base address)
		void MontageStop(float OverrideBlendOutTime); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D286598(relative to base address)
		void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D2864B0(relative to base address)
		void MontageJumpToSection(FName SectionName); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D28640C(relative to base address)
		FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D286320(relative to base address)
		FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D28626C(relative to base address)
		FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(UClass* GameplayEffectClass, float Level); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D28616C(relative to base address)
		bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D286058(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool K2_HasAuthority(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74D28603C(relative to base address)
		void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters); // Flags: Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D285EB0(relative to base address)
		void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D285C20(relative to base address)
		void K2_EndAbilityLocally(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D285C08(relative to base address)
		void K2_EndAbility(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D285BF0(relative to base address)
		void K2_CommitExecute(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D285B58(relative to base address)
		bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D285A7C(relative to base address)
		bool K2_CommitAbility(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C316748(relative to base address)
		bool K2_CheckAbilityCost(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D285A54(relative to base address)
		bool K2_CheckAbilityCooldown(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D285A2C(relative to base address)
		void K2_CancelAbility(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2859DC(relative to base address)
		bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D285708(relative to base address)
		FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D28554C(relative to base address)
		void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // Flags: Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D285308(relative to base address)
		void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D284FB8(relative to base address)
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsLocallyControlled(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74D284F94(relative to base address)
		void InvalidateClientPredictionKey(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74D284F58(relative to base address)
		UObject GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284DE0(relative to base address)
		USkeletalMeshComponent GetOwningComponentFromActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284D9C(relative to base address)
		AActor GetOwningActorFromActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284D78(relative to base address)
		FGameplayEffectContextHandle GetGrantedByEffectContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284D30(relative to base address)
		UObject GetCurrentSourceObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284D0C(relative to base address)
		UAnimMontage GetCurrentMontage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284CEC(relative to base address)
		float GetCooldownTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284CB0(relative to base address)
		FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284B38(relative to base address)
		AActor GetAvatarActorFromActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284B14(relative to base address)
		FGameplayAbilityActorInfo GetActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284AE0(relative to base address)
		UAbilitySystemComponent GetAbilitySystemComponentFromActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284ABC(relative to base address)
		int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284944(relative to base address)
		int32_t GetAbilityLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D284920(relative to base address)
		void EndTaskByInstanceName(FName InstanceName); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D2848A0(relative to base address)
		void EndAbilityState(FName OptionalStateNameToEnd); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D284820(relative to base address)
		void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D284304(relative to base address)
		void CancelTaskByInstanceName(FName InstanceName); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D284284(relative to base address)
		void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D2840A8(relative to base address)
		void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D283E8C(relative to base address)
		void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D283C70(relative to base address)
		TArray BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D283890(relative to base address)
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D283768(relative to base address)
	};


	// Class GameplayAbilities.GameplayAbilitySet
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UGameplayAbilitySet : public UDataAsset	
	{
	public:
		TArray<FGameplayAbilityBindInfo> Abilities; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilitySet");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbilityTargetActor
	// Inherited from AActor -> UObject
	// Size: 0x140 (0x3D0 - 0x290)
	class AGameplayAbilityTargetActor : public AActor	
	{
	public:
		bool ShouldProduceTargetDataOnServer; // 0x290(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x291(0xF) UNKNOWN PROPERTY
		FGameplayAbilityTargetingLocationInfo StartLocation; // 0x2A0(0x90)
		unsigned char UnknownData01_6[0x30]; // 0x330(0x30) UNKNOWN PROPERTY
		APlayerController* PrimaryPC; // 0x360(0x8)
		UGameplayAbility* OwningAbility; // 0x368(0x8)
		bool bDestroyOnConfirmation; // 0x370(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x371(0x7) UNKNOWN PROPERTY
		AActor* SourceActor; // 0x378(0x8)
		FWorldReticleParameters ReticleParams; // 0x380(0x18)
		UClass* ReticleClass; // 0x398(0x8)
		FGameplayTargetDataFilterHandle Filter; // 0x3A0(0x10)
		bool bDebug; // 0x3B0(0x1)
		unsigned char UnknownData03_6[0x17]; // 0x3B1(0x17) UNKNOWN PROPERTY
		UAbilitySystemComponent* GenericDelegateBoundASC; // 0x3C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityTargetActor");
			return ret;
		}

		void ConfirmTargeting(); // Flags: Native|Public, Memory Exec: 0x7FF749066BE0(relative to base address)
		void CancelTargeting(); // Flags: Native|Public, Memory Exec: 0x7FF747E38800(relative to base address)
	};


	// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
	// Inherited from AGameplayAbilityTargetActor -> AActor -> UObject
	// Size: 0x20 (0x3F0 - 0x3D0)
	class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor	
	{
	public:
		float MaxRange; // 0x3D0(0x4)
		FCollisionProfileName TraceProfile; // 0x3D4(0x4)
		bool bTraceAffectsAimPitch; // 0x3D8(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x3D9(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityTargetActor_Trace");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
	// Inherited from AGameplayAbilityTargetActor_Trace -> AGameplayAbilityTargetActor -> AActor -> UObject
	// Size: 0x28 (0x410 - 0x3E8)
	class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace	
	{
	public:
		float CollisionRadius; // 0x3E8(0x4)
		float CollisionHeight; // 0x3EC(0x4)
		unsigned char UnknownData00_7[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
	// Inherited from AGameplayAbilityTargetActor_GroundTrace -> AGameplayAbilityTargetActor_Trace -> AGameplayAbilityTargetActor -> AActor -> UObject
	// Size: 0x18 (0x420 - 0x408)
	class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace	
	{
	public:
		UClass* PlacedActorClass; // 0x408(0x8)
		UMaterialInterface* PlacedActorMaterial; // 0x410(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x418(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
	// Inherited from AGameplayAbilityTargetActor -> AActor -> UObject
	// Size: 0x10 (0x3E0 - 0x3D0)
	class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor	
	{
	public:
		float Radius; // 0x3D0(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x3D4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityTargetActor_Radius");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
	// Inherited from AGameplayAbilityTargetActor_Trace -> AGameplayAbilityTargetActor -> AActor -> UObject
	// Size: 0x8 (0x3F0 - 0x3E8)
	class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x3E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbilityWorldReticle
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class AGameplayAbilityWorldReticle : public AActor	
	{
	public:
		FWorldReticleParameters Parameters; // 0x290(0x18)
		bool bFaceOwnerFlat; // 0x2A8(0x1)
		bool bSnapToTargetedActor; // 0x2A9(0x1)
		bool bIsTargetValid; // 0x2AA(0x1)
		bool bIsTargetAnActor; // 0x2AB(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY
		APlayerController* PrimaryPC; // 0x2B0(0x8)
		AGameplayAbilityTargetActor* TargetingActor; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityWorldReticle");
			return ret;
		}

		void SetReticleMaterialParamVector(FName ParamName, FVector Value); // Flags: Event|Public|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetReticleMaterialParamFloat(FName ParamName, float Value); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnValidTargetChanged(bool bNewValue); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetingAnActor(bool bNewValue); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnParametersInitialized(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FaceTowardSource(bool bFaceIn2D); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D7EAC(relative to base address)
	};


	// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
	// Inherited from AGameplayAbilityWorldReticle -> AActor -> UObject
	// Size: 0x18 (0x2D8 - 0x2C0)
	class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle	
	{
	public:
		UCapsuleComponent* CollisionComponent; // 0x2C0(0x8)
		TArray<UActorComponent*> VisualizationComponents; // 0x2C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbility_CharacterJump
	// Inherited from UGameplayAbility -> UObject
	// Size: 0x0 (0x3B0 - 0x3B0)
	class UGameplayAbility_CharacterJump : public UGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbility_CharacterJump");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbility_Montage
	// Inherited from UGameplayAbility -> UObject
	// Size: 0x30 (0x3E0 - 0x3B0)
	class UGameplayAbility_Montage : public UGameplayAbility	
	{
	public:
		UAnimMontage* MontageToPlay; // 0x3B0(0x8)
		float PlayRate; // 0x3B8(0x4)
		FName SectionName; // 0x3BC(0x4)
		TArray<UClass*> GameplayEffectClassesWhileAnimating; // 0x3C0(0x10)
		TArray<UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x3D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbility_Montage");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x40 (0xB8 - 0x78)
	class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask	
	{
	public:
		FName ForceName; // 0x78(0x4)
		ERootMotionFinishVelocityMode FinishVelocityMode; // 0x7C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		FVector FinishSetVelocity; // 0x80(0x18)
		float FinishClampVelocity; // 0x98(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		UCharacterMovementComponent* MovementComponent; // 0xA0(0x8)
		unsigned char UnknownData02_7[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
	// Inherited from UAbilityTask_ApplyRootMotion_Base -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x48 (0x100 - 0xB8)
	class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base	
	{
	public:
		FMulticastInlineDelegate OnFinish; // 0xB8(0x10)
		FVector WorldDirection; // 0xC8(0x18)
		float Strength; // 0xE0(0x4)
		float duration; // 0xE4(0x4)
		bool bIsAdditive; // 0xE8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		UCurveFloat* StrengthOverTime; // 0xF0(0x8)
		bool bEnableGravity; // 0xF8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
			return ret;
		}

		UAbilityTask_ApplyRootMotionConstantForce ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float duration, bool bIsAdditive, UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2CE1B4(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
	// Inherited from UAbilityTask_ApplyRootMotion_Base -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x68 (0x120 - 0xB8)
	class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base	
	{
	public:
		FMulticastInlineDelegate OnFinish; // 0xB8(0x10)
		FMulticastInlineDelegate OnLanded; // 0xC8(0x10)
		FRotator Rotation; // 0xD8(0x18)
		float Distance; // 0xF0(0x4)
		float Height; // 0xF4(0x4)
		float duration; // 0xF8(0x4)
		float MinimumLandedTriggerTime; // 0xFC(0x4)
		bool bFinishOnLanded; // 0x100(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		UCurveVector* PathOffsetCurve; // 0x108(0x8)
		UCurveFloat* TimeMappingCurve; // 0x110(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
			return ret;
		}

		void OnLandedCallback(FHitResult& Hit); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74D2E1084(relative to base address)
		void Finish(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D8754(relative to base address)
		UAbilityTask_ApplyRootMotionJumpForce ApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2CE964(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
	// Inherited from UAbilityTask_ApplyRootMotion_Base -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xC8 (0x180 - 0xB8)
	class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base	
	{
	public:
		FMulticastInlineDelegate OnFinished; // 0xB8(0x10)
		unsigned char UnknownData00_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FVector StartLocation; // 0xD0(0x18)
		FVector TargetLocation; // 0xE8(0x18)
		AActor* TargetActor; // 0x100(0x8)
		USceneComponent* TargetComponent; // 0x108(0x8)
		FVector TargetComponentRelativeLocation; // 0x110(0x18)
		FVector TargetLocationOffset; // 0x128(0x18)
		ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0x140(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x141(0x3) UNKNOWN PROPERTY
		float duration; // 0x144(0x4)
		bool bDisableDestinationReachedInterrupt; // 0x148(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x149(0x3) UNKNOWN PROPERTY
		float ReachedDestinationDistance; // 0x14C(0x4)
		bool bSetNewMovementMode; // 0x150(0x1)
		TEnumAsByte<EMovementMode> NewMovementMode; // 0x151(0x1)
		bool bRestrictSpeedToExpected; // 0x152(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x153(0x5) UNKNOWN PROPERTY
		UCurveVector* PathOffsetCurve; // 0x158(0x8)
		UCurveFloat* TimeMappingCurve; // 0x160(0x8)
		UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x168(0x8)
		UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x170(0x8)
		unsigned char UnknownData04_7[0x8]; // 0x178(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
			return ret;
		}

		void OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E162C(relative to base address)
		void OnRep_TargetLocation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D2E1530(relative to base address)
		UAbilityTask_ApplyRootMotionMoveToActorForce ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2D1458(relative to base address)
		UAbilityTask_ApplyRootMotionMoveToActorForce ApplyRootMotionMoveToComponentForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* TargetComponent, FVector TargetComponentRelativeLocation, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2CFF30(relative to base address)
		UAbilityTask_ApplyRootMotionMoveToActorForce ApplyRootMotionMoveToActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2CF2A4(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
	// Inherited from UAbilityTask_ApplyRootMotion_Base -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x68 (0x120 - 0xB8)
	class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base	
	{
	public:
		FMulticastInlineDelegate OnTimedOut; // 0xB8(0x10)
		FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xC8(0x10)
		FVector StartLocation; // 0xD8(0x18)
		FVector TargetLocation; // 0xF0(0x18)
		float duration; // 0x108(0x4)
		bool bSetNewMovementMode; // 0x10C(0x1)
		TEnumAsByte<EMovementMode> NewMovementMode; // 0x10D(0x1)
		bool bRestrictSpeedToExpected; // 0x10E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x10F(0x1) UNKNOWN PROPERTY
		UCurveVector* PathOffsetCurve; // 0x110(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
			return ret;
		}

		UAbilityTask_ApplyRootMotionMoveToForce ApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2D0C8C(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
	// Inherited from UAbilityTask_ApplyRootMotion_Base -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x70 (0x128 - 0xB8)
	class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base	
	{
	public:
		FMulticastInlineDelegate OnFinish; // 0xB8(0x10)
		FVector Location; // 0xC8(0x18)
		AActor* LocationActor; // 0xE0(0x8)
		float Strength; // 0xE8(0x4)
		float duration; // 0xEC(0x4)
		float Radius; // 0xF0(0x4)
		bool bIsPush; // 0xF4(0x1)
		bool bIsAdditive; // 0xF5(0x1)
		bool bNoZForce; // 0xF6(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xF7(0x1) UNKNOWN PROPERTY
		UCurveFloat* StrengthDistanceFalloff; // 0xF8(0x8)
		UCurveFloat* StrengthOverTime; // 0x100(0x8)
		bool bUseFixedWorldDirection; // 0x108(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
		FRotator FixedWorldDirection; // 0x110(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
			return ret;
		}

		UAbilityTask_ApplyRootMotionRadialForce ApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, AActor* LocationActor, float Strength, float duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, UCurveFloat* StrengthDistanceFalloff, UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2D2350(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_MoveToLocation
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x68 (0xE0 - 0x78)
	class UAbilityTask_MoveToLocation : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnTargetLocationReached; // 0x78(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		FVector StartLocation; // 0x90(0x18)
		FVector TargetLocation; // 0xA8(0x18)
		float DurationOfMovement; // 0xC0(0x4)
		unsigned char UnknownData01_6[0xC]; // 0xC4(0xC) UNKNOWN PROPERTY
		UCurveFloat* LerpCurve; // 0xD0(0x8)
		UCurveVector* LerpCurveVector; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_MoveToLocation");
			return ret;
		}

		UAbilityTask_MoveToLocation MoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2DE7CC(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UAbilityTask_NetworkSyncPoint : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnSync; // 0x78(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_NetworkSyncPoint");
			return ret;
		}

		UAbilityTask_NetworkSyncPoint WaitNetSync(UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EC3F8(relative to base address)
		void OnSignalCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E1554(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xA8 (0x120 - 0x78)
	class UAbilityTask_PlayMontageAndWait : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnCompleted; // 0x78(0x10)
		FMulticastInlineDelegate OnBlendedIn; // 0x88(0x10)
		FMulticastInlineDelegate OnBlendOut; // 0x98(0x10)
		FMulticastInlineDelegate OnInterrupted; // 0xA8(0x10)
		FMulticastInlineDelegate OnCancelled; // 0xB8(0x10)
		unsigned char UnknownData00_6[0x38]; // 0xC8(0x38) UNKNOWN PROPERTY
		UAnimMontage* MontageToPlay; // 0x100(0x8)
		float Rate; // 0x108(0x4)
		FName StartSection; // 0x10C(0x4)
		float AnimRootMotionTranslationScale; // 0x110(0x4)
		float StartTimeSeconds; // 0x114(0x4)
		bool bStopWhenAbilityEnds; // 0x118(0x1)
		bool bAllowInterruptAfterBlendOut; // 0x119(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_PlayMontageAndWait");
			return ret;
		}

		void OnMontageInterrupted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E0988(relative to base address)
		void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E12E0(relative to base address)
		void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E1218(relative to base address)
		void OnMontageBlendedIn(UAnimMontage* Montage); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E1198(relative to base address)
		void OnGameplayAbilityCancelled(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E0988(relative to base address)
		UAbilityTask_PlayMontageAndWait CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D5184(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_Repeat
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAbilityTask_Repeat : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnPerformAction; // 0x78(0x10)
		FMulticastInlineDelegate OnFinished; // 0x88(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x98(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_Repeat");
			return ret;
		}

		UAbilityTask_Repeat RepeatAction(UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E2290(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_SpawnActor
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x48 (0xC0 - 0x78)
	class UAbilityTask_SpawnActor : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate Success; // 0x78(0x10)
		FMulticastInlineDelegate DidNotSpawn; // 0x88(0x10)
		unsigned char UnknownData00_7[0x28]; // 0x98(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_SpawnActor");
			return ret;
		}

		UAbilityTask_SpawnActor SpawnActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E52D0(relative to base address)
		void FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D8768(relative to base address)
		bool BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class, AActor* SpawnedActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2D39A0(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_StartAbilityState
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAbilityTask_StartAbilityState : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnStateEnded; // 0x78(0x10)
		FMulticastInlineDelegate OnStateInterrupted; // 0x88(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x98(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_StartAbilityState");
			return ret;
		}

		UAbilityTask_StartAbilityState StartAbilityState(UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E5534(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_VisualizeTargeting
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UAbilityTask_VisualizeTargeting : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate TimeElapsed; // 0x78(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x88(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_VisualizeTargeting");
			return ret;
		}

		UAbilityTask_VisualizeTargeting VisualizeTargetingUsingActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float duration); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E6868(relative to base address)
		UAbilityTask_VisualizeTargeting VisualizeTargeting(UGameplayAbility* OwningAbility, UClass* Class, FName TaskInstanceName, float duration); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E6708(relative to base address)
		void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D8AF0(relative to base address)
		bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor* SpawnedActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2D3C6C(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xF8 (0x170 - 0x78)
	class UAbilityTask_WaitAbilityActivate : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnActivate; // 0x78(0x10)
		unsigned char UnknownData00_7[0xE8]; // 0x88(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAbilityActivate");
			return ret;
		}

		UAbilityTask_WaitAbilityActivate WaitForAbilityActivateWithTagRequirements(UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E703C(relative to base address)
		UAbilityTask_WaitAbilityActivate WaitForAbilityActivate_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E73A8(relative to base address)
		UAbilityTask_WaitAbilityActivate WaitForAbilityActivate(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E6CB0(relative to base address)
		void OnAbilityActivate(UGameplayAbility* ActivatedAbility); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E05E4(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x70 (0xE8 - 0x78)
	class UAbilityTask_WaitAbilityCommit : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnCommit; // 0x78(0x10)
		unsigned char UnknownData00_7[0x60]; // 0x88(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAbilityCommit");
			return ret;
		}

		UAbilityTask_WaitAbilityCommit WaitForAbilityCommit_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E79B0(relative to base address)
		UAbilityTask_WaitAbilityCommit WaitForAbilityCommit(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E76EC(relative to base address)
		void OnAbilityCommit(UGameplayAbility* ActivatedAbility); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E0664(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitAttributeChange
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x70 (0xE8 - 0x78)
	class UAbilityTask_WaitAttributeChange : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		unsigned char UnknownData00_6[0x58]; // 0x88(0x58) UNKNOWN PROPERTY
		UAbilitySystemComponent* ExternalOwner; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAttributeChange");
			return ret;
		}

		UAbilityTask_WaitAttributeChange WaitForAttributeChangeWithComparison(UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, AActor* OptionalExternalOwner); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E8B98(relative to base address)
		UAbilityTask_WaitAttributeChange WaitForAttributeChange(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor* OptionalExternalOwner); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E7C34(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xC0 (0x138 - 0x78)
	class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		unsigned char UnknownData00_6[0xA8]; // 0x88(0xA8) UNKNOWN PROPERTY
		UAbilitySystemComponent* ExternalOwner; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
			return ret;
		}

		UAbilityTask_WaitAttributeChangeRatioThreshold WaitForAttributeChangeRatioThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E80DC(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x70 (0xE8 - 0x78)
	class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		unsigned char UnknownData00_6[0x58]; // 0x88(0x58) UNKNOWN PROPERTY
		UAbilitySystemComponent* ExternalOwner; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
			return ret;
		}

		UAbilityTask_WaitAttributeChangeThreshold WaitForAttributeChangeThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E86E4(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitCancel
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UAbilityTask_WaitCancel : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnCancel; // 0x78(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitCancel");
			return ret;
		}

		UAbilityTask_WaitCancel WaitCancel(UGameplayAbility* OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E69A0(relative to base address)
		void OnLocalCancelCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E115C(relative to base address)
		void OnCancelCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E08CC(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitConfirm
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitConfirm : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitConfirm");
			return ret;
		}

		UAbilityTask_WaitConfirm WaitConfirm(UGameplayAbility* OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E6A60(relative to base address)
		void OnConfirmCallback(UGameplayAbility* InAbility); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E08F4(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UAbilityTask_WaitConfirmCancel : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
		FMulticastInlineDelegate OnCancel; // 0x88(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitConfirmCancel");
			return ret;
		}

		UAbilityTask_WaitConfirmCancel WaitConfirmCancel(UGameplayAbility* OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E6B20(relative to base address)
		void OnLocalConfirmCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E1184(relative to base address)
		void OnLocalCancelCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E1170(relative to base address)
		void OnConfirmCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E0974(relative to base address)
		void OnCancelCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E08E0(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitDelay
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UAbilityTask_WaitDelay : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnFinish; // 0x78(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitDelay");
			return ret;
		}

		UAbilityTask_WaitDelay WaitDelay(UGameplayAbility* OwningAbility, float Time); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E6BE0(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x1C8 (0x240 - 0x78)
	class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask	
	{
	public:
		unsigned char UnknownData00_3[0x1B8]; // 0x78(0x1B8) UNKNOWN PROPERTY
		UAbilitySystemComponent* ExternalOwner; // 0x230(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
			return ret;
		}

		void OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74D2E06E4(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
	// Inherited from UAbilityTask_WaitGameplayEffectApplied -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x260 - 0x240)
	class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied	
	{
	public:
		FMulticastInlineDelegate OnApplied; // 0x240(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x250(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectApplied_Self WaitGameplayEffectAppliedToSelf_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E9BF8(relative to base address)
		UAbilityTask_WaitGameplayEffectApplied_Self WaitGameplayEffectAppliedToSelf(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E9540(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
	// Inherited from UAbilityTask_WaitGameplayEffectApplied -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x260 - 0x240)
	class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied	
	{
	public:
		FMulticastInlineDelegate OnApplied; // 0x240(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x250(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectApplied_Target WaitGameplayEffectAppliedToTarget_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EA978(relative to base address)
		UAbilityTask_WaitGameplayEffectApplied_Target WaitGameplayEffectAppliedToTarget(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EA2C0(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x138 (0x1B0 - 0x78)
	class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate bLocked; // 0x78(0x10)
		unsigned char UnknownData00_6[0x118]; // 0x88(0x118) UNKNOWN PROPERTY
		UAbilitySystemComponent* ExternalOwner; // 0x1A0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectBlockedImmunity WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EB040(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x40 (0xB8 - 0x78)
	class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnRemoved; // 0x78(0x10)
		FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x98(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectRemoved WaitForGameplayEffectRemoved(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E91D0(relative to base address)
		void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74D2E099C(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x98(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectStackChange WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E9328(relative to base address)
		void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E0A50(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x30 (0xA8 - 0x78)
	class UAbilityTask_WaitGameplayEvent : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate EventReceived; // 0x78(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		UAbilitySystemComponent* OptionalExternalTarget; // 0x90(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEvent");
			return ret;
		}

		UAbilityTask_WaitGameplayEvent WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EB4C0(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayTag
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitGameplayTag : public UAbilityTask	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		UAbilitySystemComponent* OptionalExternalTarget; // 0x80(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayTag");
			return ret;
		}

		void GameplayTagCallback(FGameplayTag Tag, int32_t NewCount); // Flags: Native|Public, Memory Exec: 0x7FF74D2D8FE0(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
	// Inherited from UAbilityTask_WaitGameplayTag -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag	
	{
	public:
		FMulticastInlineDelegate Added; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
			return ret;
		}

		UAbilityTask_WaitGameplayTagAdded WaitGameplayTagAdd(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EB850(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
	// Inherited from UAbilityTask_WaitGameplayTag -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag	
	{
	public:
		FMulticastInlineDelegate Removed; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
			return ret;
		}

		UAbilityTask_WaitGameplayTagRemoved WaitGameplayTagRemove(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EBF20(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayTagQuery
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xE0 (0x158 - 0x78)
	class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask	
	{
	public:
		unsigned char UnknownData00_3[0xC0]; // 0x78(0xC0) UNKNOWN PROPERTY
		FMulticastInlineDelegate Triggered; // 0x138(0x10)
		UAbilitySystemComponent* OptionalExternalTarget; // 0x148(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x150(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery");
			return ret;
		}

		UAbilityTask_WaitGameplayTagQuery WaitGameplayTagQuery(UGameplayAbility* OwningAbility, FGameplayTagQuery TagQuery, AActor* InOptionalExternalTarget, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EBB18(relative to base address)
		void UpdateTargetTags(FGameplayTag Tag, int32_t NewCount); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D2E6534(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitInputPress
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitInputPress : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnPress; // 0x78(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitInputPress");
			return ret;
		}

		UAbilityTask_WaitInputPress WaitInputPress(UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EC1E8(relative to base address)
		void OnPressCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E14F0(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitInputRelease
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitInputRelease : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnRelease; // 0x78(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitInputRelease");
			return ret;
		}

		UAbilityTask_WaitInputRelease WaitInputRelease(UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EC2F0(relative to base address)
		void OnReleaseCallback(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E1504(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitMovementModeChange : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitMovementModeChange");
			return ret;
		}

		void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E13A8(relative to base address)
		UAbilityTask_WaitMovementModeChange CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D5414(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitOverlap
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UAbilityTask_WaitOverlap : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnOverlap; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitOverlap");
			return ret;
		}

		UAbilityTask_WaitOverlap WaitForOverlap(UGameplayAbility* OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E9480(relative to base address)
		void OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Public|HasOutParms|HasDefaults, Memory Exec: 0x7FF74D2E0CDC(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitTargetData
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x40 (0xB8 - 0x78)
	class UAbilityTask_WaitTargetData : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate ValidData; // 0x78(0x10)
		FMulticastInlineDelegate Cancelled; // 0x88(0x10)
		UClass* TargetClass; // 0x98(0x8)
		AGameplayAbilityTargetActor* TargetActor; // 0xA0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitTargetData");
			return ret;
		}

		UAbilityTask_WaitTargetData WaitTargetDataUsingActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, AGameplayAbilityTargetActor* TargetActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EC670(relative to base address)
		UAbilityTask_WaitTargetData WaitTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, UClass* Class); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2EC4FC(relative to base address)
		void OnTargetDataReplicatedCancelledCallback(); // Flags: Native|Public, Memory Exec: 0x7FF74763E8D8(relative to base address)
		void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74D2E18D4(relative to base address)
		void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74D2E180C(relative to base address)
		void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74D2E1744(relative to base address)
		void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D8C3C(relative to base address)
		bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor* SpawnedActor); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2D3DA8(relative to base address)
	};


	// Class GameplayAbilities.AbilityTask_WaitVelocityChange
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAbilityTask_WaitVelocityChange : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnVelocityChage; // 0x78(0x10)
		TWeakObjectPtr<UMovementComponent*> CachedMovementComponent; // 0x88(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x90(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitVelocityChange");
			return ret;
		}

		UAbilityTask_WaitVelocityChange CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2D5518(relative to base address)
	};


	// Class GameplayAbilities.AbilitySystemBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemBlueprintLibrary");
			return ret;
		}

		bool TargetDataHasOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2E5B28(relative to base address)
		bool TargetDataHasHitResult(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2E5994(relative to base address)
		bool TargetDataHasEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2E5800(relative to base address)
		bool TargetDataHasActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2E566C(relative to base address)
		FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E5094(relative to base address)
		FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32_t StackCount); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E4E08(relative to base address)
		FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float duration); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E4B7C(relative to base address)
		void SendGameplayEventToActor(AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7489F4354(relative to base address)
		bool RemoveLooseGameplayTags(AActor* Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7489F4674(relative to base address)
		bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2E0354(relative to base address)
		bool NotEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2E026C(relative to base address)
		bool NotEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2E017C(relative to base address)
		FGameplayEffectSpecHandle MakeSpecHandleByClass(UClass* GameplayEffect, AActor* Instigator, AActor* EffectCauser, float Level); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2DE52C(relative to base address)
		FGameplayEffectSpecHandle MakeSpecHandle(UGameplayEffect* InGameplayEffect, AActor* InInstigator, AActor* InEffectCauser, float InLevel); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DE3D8(relative to base address)
		FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, AActor* Instigator, AActor* EffectCauser, UObject* SourceObject, UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74887EB88(relative to base address)
		FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, AActor* FilterActor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DDF34(relative to base address)
		bool IsValid(FGameplayAttribute Attribute); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DDA30(relative to base address)
		bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DD8EC(relative to base address)
		bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DD7A8(relative to base address)
		bool IsGameplayAbilityActive(UGameplayAbility* GameplayAbility); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DD608(relative to base address)
		bool HasHitResult(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DD4D0(relative to base address)
		FTransform GetTargetDataOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DD2F8(relative to base address)
		FTransform GetTargetDataEndPointTransform(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DD120(relative to base address)
		FVector GetTargetDataEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DCF78(relative to base address)
		FVector GetOrigin(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DCE30(relative to base address)
		float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2DCA48(relative to base address)
		FTransform GetInstigatorTransform(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DC8DC(relative to base address)
		AActor GetInstigatorActor(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DC7A4(relative to base address)
		FHitResult GetHitResultFromTargetData(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DC56C(relative to base address)
		FHitResult GetHitResult(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DC3A8(relative to base address)
		UGameplayEffectUIData GetGameplayEffectUIData(UClass* EffectClass, UClass* DataType); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2DC0DC(relative to base address)
		FGameplayTagContainer GetGameplayEffectGrantedTags(UClass* EffectClass); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DBD7C(relative to base address)
		UGameplayEffect GetGameplayEffectFromActiveEffectHandle(FActiveGameplayEffectHandle& ActiveHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DBCB0(relative to base address)
		FGameplayTagContainer GetGameplayEffectAssetTags(UClass* EffectClass); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DB8EC(relative to base address)
		bool GetGameplayCueEndLocationAndNormal(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DB5D0(relative to base address)
		bool GetGameplayCueDirection(AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DB37C(relative to base address)
		UGameplayAbility GetGameplayAbilityFromSpecHandle(UAbilitySystemComponent* AbilitySystem, FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DAFB8(relative to base address)
		float GetFloatAttributeFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748FC5C34(relative to base address)
		float GetFloatAttributeBaseFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DAD88(relative to base address)
		float GetFloatAttributeBase(AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DAB58(relative to base address)
		float GetFloatAttribute(AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DA928(relative to base address)
		FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2DA760(relative to base address)
		FString GetDebugStringFromGameplayAttribute(FGameplayAttribute& Attribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DA670(relative to base address)
		int32_t GetDataCountFromTargetData(FGameplayAbilityTargetDataHandle& TargetData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DA5B0(relative to base address)
		TArray GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DA354(relative to base address)
		TArray GetAllActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DA16C(relative to base address)
		TArray GetActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D9F28(relative to base address)
		int32_t GetActorCount(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D9DF0(relative to base address)
		AActor GetActorByIndex(FGameplayCueParameters Parameters, int32_t Index); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D9BDC(relative to base address)
		float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D9AC8(relative to base address)
		float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D99B4(relative to base address)
		int32_t GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D98A0(relative to base address)
		int32_t GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D978C(relative to base address)
		float GetActiveGameplayEffectRemainingDuration(UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D9634(relative to base address)
		float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D9520(relative to base address)
		FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D93F8(relative to base address)
		UAbilitySystemComponent GetAbilitySystemComponent(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7489F4868(relative to base address)
		void ForwardGameplayCueToTarget(TScriptInterface<Class> TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D8D04(relative to base address)
		FGameplayAbilityTargetDataHandle FilterTargetData(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D7F2C(relative to base address)
		float EvaluateAttributeValueWithTagsAndBase(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D7990(relative to base address)
		float EvaluateAttributeValueWithTags(UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, bool& bSuccess); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D754C(relative to base address)
		bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D72BC(relative to base address)
		bool EqualEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D71D4(relative to base address)
		bool EqualEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D70E4(relative to base address)
		void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D2D6E50(relative to base address)
		bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D6C28(relative to base address)
		bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D69F0(relative to base address)
		bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D6830(relative to base address)
		UObject EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D65FC(relative to base address)
		AActor EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D63C8(relative to base address)
		FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D61F4(relative to base address)
		AActor EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74956C944(relative to base address)
		FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748ADCD08(relative to base address)
		AActor EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D5FC0(relative to base address)
		void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D5BFC(relative to base address)
		bool DoesTargetDataContainActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, AActor* Actor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D59B0(relative to base address)
		bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, FGameplayTagRequirements& SourceTagReqs, FGameplayTagRequirements& TargetTagReqs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D5738(relative to base address)
		FGameplayEffectSpecHandle CloneSpecHandle(AActor* InNewInstigator, AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2D4F50(relative to base address)
		void BreakGameplayCueParameters(FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, AActor* Instigator, AActor* EffectCauser, UObject* SourceObject, UPhysicalMaterial* PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, USceneComponent* TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF747CBF19C(relative to base address)
		FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D32FC(relative to base address)
		FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D2FBC(relative to base address)
		FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, FGameplayAbilityTargetDataHandle& HandleToAdd); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2CDFE4(relative to base address)
		bool AddLooseGameplayTags(AActor* Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7489F4114(relative to base address)
		FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2CDCCC(relative to base address)
		FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, UClass* LinkedGameplayEffect); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2CD8A4(relative to base address)
		FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2CD5D4(relative to base address)
		FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2CD348(relative to base address)
		FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2CD078(relative to base address)
		FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D2CCDEC(relative to base address)
		FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(FGameplayAbilityTargetingLocationInfo& SourceLocation, FGameplayAbilityTargetingLocationInfo& TargetLocation); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2CCCBC(relative to base address)
		FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(FHitResult& HitResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2CCBA8(relative to base address)
		FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<AActor*>& ActorArray, bool OneTargetPerHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748E15E70(relative to base address)
		FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2CCAF4(relative to base address)
	};


	// Class GameplayAbilities.AbilitySystemComponent
	// Inherited from UGameplayTasksComponent -> UActorComponent -> UObject
	// Size: 0x1120 (0x1238 - 0x118)
	class UAbilitySystemComponent : public UGameplayTasksComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x118(0x10) UNKNOWN PROPERTY
		TArray<FAttributeDefaults> DefaultStartingData; // 0x128(0x10)
		FName AffectedAnimInstanceTag; // 0x138(0x4)
		unsigned char UnknownData01_6[0x1A4]; // 0x13C(0x1A4) UNKNOWN PROPERTY
		float OutgoingDuration; // 0x2E0(0x4)
		float IncomingDuration; // 0x2E4(0x4)
		unsigned char UnknownData02_6[0x20]; // 0x2E8(0x20) UNKNOWN PROPERTY
		TArray<FString> ClientDebugStrings; // 0x308(0x10)
		TArray<FString> ServerDebugStrings; // 0x318(0x10)
		unsigned char UnknownData03_6[0x58]; // 0x328(0x58) UNKNOWN PROPERTY
		bool UserAbilityActivationInhibited; // 0x380(0x1)
		bool ReplicationProxyEnabled; // 0x381(0x1)
		bool bSuppressGrantAbility; // 0x382(0x1)
		bool bSuppressGameplayCues; // 0x383(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x384(0x4) UNKNOWN PROPERTY
		TArray<AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x388(0x10)
		unsigned char UnknownData05_6[0x28]; // 0x398(0x28) UNKNOWN PROPERTY
		AActor* OwnerActor; // 0x3C0(0x8)
		AActor* AvatarActor; // 0x3C8(0x8)
		unsigned char UnknownData06_6[0x10]; // 0x3D0(0x10) UNKNOWN PROPERTY
		FGameplayAbilitySpecContainer ActivatableAbilities; // 0x3E0(0x120)
		unsigned char UnknownData07_6[0x30]; // 0x500(0x30) UNKNOWN PROPERTY
		TArray<UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x530(0x10)
		unsigned char UnknownData08_6[0x220]; // 0x540(0x220) UNKNOWN PROPERTY
		FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x760(0x38)
		bool bCachedIsNetSimulated; // 0x798(0x1)
		bool bPendingMontageRep; // 0x799(0x1)
		unsigned char UnknownData09_6[0x6]; // 0x79A(0x6) UNKNOWN PROPERTY
		FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x7A0(0x28)
		unsigned char UnknownData10_6[0xA0]; // 0x7C8(0xA0) UNKNOWN PROPERTY
		FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x868(0x300)
		FActiveGameplayCueContainer ActiveGameplayCues; // 0xB68(0x128)
		FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xC90(0x128)
		unsigned char UnknownData11_6[0x128]; // 0xDB8(0x128) UNKNOWN PROPERTY
		TArray<char> BlockedAbilityBindings; // 0xEE0(0x10)
		unsigned char UnknownData12_6[0x128]; // 0xEF0(0x128) UNKNOWN PROPERTY
		FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x1018(0x68)
		TArray<UAttributeSet*> SpawnedAttributes; // 0x1080(0x10)
		unsigned char UnknownData13_6[0x10]; // 0x1090(0x10) UNKNOWN PROPERTY
		FMinimalReplicationTagCountMap ReplicatedLooseTags; // 0x10A0(0x68)
		unsigned char UnknownData14_6[0x8]; // 0x1108(0x8) UNKNOWN PROPERTY
		FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1110(0x118)
		unsigned char UnknownData15_7[0x10]; // 0x1228(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemComponent");
			return ret;
		}

		void UpdateActiveGameplayEffectSetByCallerMagnitudes(FActiveGameplayEffectHandle ActiveHandle, TMap<FGameplayTag, float>& NewSetByCallerValues); // Flags: BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2E636C(relative to base address)
		void UpdateActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag SetByCallerTag, float NewValue); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E60DC(relative to base address)
		bool TryActivateAbilityByClass(UClass* InAbilityToActivate, bool bAllowRemoteActivation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E5FF4(relative to base address)
		bool TryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E5E10(relative to base address)
		bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2E5CBC(relative to base address)
		void TargetConfirm(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BD1AB4(relative to base address)
		void TargetCancel(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7489E627C(relative to base address)
		void SetUserAbilityActivationInhibited(bool NewInhibit); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E524C(relative to base address)
		void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E495C(relative to base address)
		void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E477C(relative to base address)
		void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D2E4364(relative to base address)
		void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D2E4080(relative to base address)
		void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E3D80(relative to base address)
		void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E38C8(relative to base address)
		void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E3498(relative to base address)
		void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E3158(relative to base address)
		void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E302C(relative to base address)
		void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E2F00(relative to base address)
		void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E2E20(relative to base address)
		void ServerPrintDebug_Request(); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E2DD4(relative to base address)
		void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D2E2AB4(relative to base address)
		void ServerCurrentMontageSetPlayRate(UAnimSequenceBase* ClientAnimation, float InPlayRate); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D2E29C8(relative to base address)
		void ServerCurrentMontageSetNextSectionName(UAnimSequenceBase* ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D2E2854(relative to base address)
		void ServerCurrentMontageJumpToSectionName(UAnimSequenceBase* ClientAnimation, FName SectionName); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D2E2768(relative to base address)
		void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74D2E252C(relative to base address)
		void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74D2E2388(relative to base address)
		void RemoveActiveGameplayEffectBySourceEffect(UClass* GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E2170(relative to base address)
		bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E1F88(relative to base address)
		int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E1E2C(relative to base address)
		int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E1CD0(relative to base address)
		int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7490131EC(relative to base address)
		int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E1B74(relative to base address)
		void ReleaseInputID(int32_t InputID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E1AF0(relative to base address)
		void PressInputID(int32_t InputID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2E1A6C(relative to base address)
		void OnSpawnedAttributesEndPlayed(AActor* InActor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Public, Memory Exec: 0x7FF74D2E1568(relative to base address)
		void OnRep_SpawnedAttributes(TArray<UAttributeSet*>& PreviousSpawnedAttributes); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7473D443C(relative to base address)
		void OnRep_ServerDebugString(); // Flags: Native|Public, Memory Exec: 0x7FF74C9D53A0(relative to base address)
		void OnRep_ReplicatedAnimMontage(); // Flags: Native|Protected, Memory Exec: 0x7FF74D2E1518(relative to base address)
		void OnRep_OwningActor(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7490797F8(relative to base address)
		void OnRep_ClientDebugString(); // Flags: Native|Public, Memory Exec: 0x7FF7486C1414(relative to base address)
		void OnRep_ActivateAbilities(); // Flags: Native|Protected, Memory Exec: 0x7FF746EAA834(relative to base address)
		void OnOwnerActorDestroyed(AActor* InActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF748FE3A08(relative to base address)
		void OnAvatarActorDestroyed(AActor* InActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF748C1BC34(relative to base address)
		void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF74D2DFE48(relative to base address)
		void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF74D2DFAA0(relative to base address)
		void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF74D2DF76C(relative to base address)
		void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF748C9B384(relative to base address)
		void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF748FC8B70(relative to base address)
		void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF74D2DF408(relative to base address)
		void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF74D2DF114(relative to base address)
		void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF74D2DEF08(relative to base address)
		void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF7492750B4(relative to base address)
		void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // Flags: Net|Native|Event|NetMulticast|Public, Memory Exec: 0x7FF74D2DEBA4(relative to base address)
		FGameplayEffectSpecHandle MakeOutgoingSpec(UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2DE15C(relative to base address)
		FGameplayEffectContextHandle MakeEffectContext(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2DDEE8(relative to base address)
		void K2_InitStats(UClass* Attributes, UDataTable* DataTable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2DDDFC(relative to base address)
		FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(UClass* AbilityClass, int32_t Level, int32_t InputID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2DDCD8(relative to base address)
		FGameplayAbilitySpecHandle K2_GiveAbility(UClass* AbilityClass, int32_t Level, int32_t InputID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2DDBB4(relative to base address)
		bool IsGameplayCueActive(FGameplayTag GameplayCueTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2DD688(relative to base address)
		void InputConfirm(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74939D540(relative to base address)
		void InputCancel(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747B2C2C4(relative to base address)
		bool GetUserAbilityActivationInhibited(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493CFC7C(relative to base address)
		int32_t GetGameplayTagCount(FGameplayTag GameplayTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2DC28C(relative to base address)
		float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2DBE9C(relative to base address)
		int32_t GetGameplayEffectCount_IfLoaded(TWeakObjectPtr<UClass*> SoftSourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2DBB30(relative to base address)
		int32_t GetGameplayEffectCount(UClass* SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2DBA0C(relative to base address)
		float GetGameplayAttributeValue(FGameplayAttribute Attribute, bool& bFound); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D2DB16C(relative to base address)
		UAttributeSet GetAttributeSet(UClass* AttributeSetClass); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74D2DA50C(relative to base address)
		void GetAllAttributes(TArray<FGameplayAttribute>& OutAttributes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D2DA248(relative to base address)
		void GetAllAbilities(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D2DA0D0(relative to base address)
		TArray GetActiveEffectsWithAllTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74D2D9280(relative to base address)
		TArray GetActiveEffects(FGameplayEffectQuery& Query); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D2D91B8(relative to base address)
		void FindAllAbilitiesWithTags(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagContainer Tags, bool bExactMatch); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D2D84DC(relative to base address)
		void FindAllAbilitiesWithInputID(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D2D835C(relative to base address)
		void FindAllAbilitiesMatchingQuery(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagQuery Query); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D2D816C(relative to base address)
		void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D2D4E3C(relative to base address)
		void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74D2D4C18(relative to base address)
		void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74D2D4B18(relative to base address)
		void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D2D491C(relative to base address)
		void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D2D4720(relative to base address)
		void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D2D4428(relative to base address)
		void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D2D423C(relative to base address)
		void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74D2D4060(relative to base address)
		void ClearAllAbilitiesWithInputID(int32_t InputID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D3F8C(relative to base address)
		void ClearAllAbilities(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D2D3F78(relative to base address)
		void ClearAbility(FGameplayAbilitySpecHandle& Handle); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2D3EEC(relative to base address)
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(UClass* GameplayEffectClass, UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747EF76AC(relative to base address)
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747EF7980(relative to base address)
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent* Target); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2D3780(relative to base address)
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D2D363C(relative to base address)
		void AbilityConfirmOrCancel__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AbilityAbilityKey__DelegateSignature(int32_t InputID); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.AbilitySystemDebugHUDExtension
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAbilitySystemDebugHUDExtension : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemDebugHUDExtension");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
	// Inherited from UAbilitySystemDebugHUDExtension -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Tags");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
	// Inherited from UAbilitySystemDebugHUDExtension -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
	// Inherited from UAbilitySystemDebugHUDExtension -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitySystemGlobals
	// Inherited from UObject
	// Size: 0x240 (0x268 - 0x28)
	class UAbilitySystemGlobals : public UObject	
	{
	public:
		FSoftClassPath AbilitySystemGlobalsClassName; // 0x28(0x18)
		unsigned char UnknownData00_6[0x28]; // 0x40(0x28) UNKNOWN PROPERTY
		bool bUseDebugTargetFromHud; // 0x68(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		FGameplayTag ActivateFailIsDeadTag; // 0x6C(0x4)
		FName ActivateFailIsDeadName; // 0x70(0x4)
		FGameplayTag ActivateFailCooldownTag; // 0x74(0x4)
		FName ActivateFailCooldownName; // 0x78(0x4)
		FGameplayTag ActivateFailCostTag; // 0x7C(0x4)
		FName ActivateFailCostName; // 0x80(0x4)
		FGameplayTag ActivateFailTagsBlockedTag; // 0x84(0x4)
		FName ActivateFailTagsBlockedName; // 0x88(0x4)
		FGameplayTag ActivateFailTagsMissingTag; // 0x8C(0x4)
		FName ActivateFailTagsMissingName; // 0x90(0x4)
		FGameplayTag ActivateFailNetworkingTag; // 0x94(0x4)
		FName ActivateFailNetworkingName; // 0x98(0x4)
		int32_t MinimalReplicationTagCountBits; // 0x9C(0x4)
		FNetSerializeScriptStructCache TargetDataStructCache; // 0xA0(0x10)
		FNetSerializeScriptStructCache EffectContextStructCache; // 0xB0(0x10)
		bool bAllowGameplayModEvaluationChannels; // 0xC0(0x1)
		EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xC1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
		FName GameplayModEvaluationChannelAliases; // 0xC4(0x28)
		unsigned char UnknownData03_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		FSoftObjectPath GlobalCurveTableName; // 0xF0(0x18)
		UCurveTable* GlobalCurveTable; // 0x108(0x8)
		FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x110(0x18)
		UDataTable* GlobalAttributeMetaDataTable; // 0x128(0x8)
		FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x130(0x18)
		TArray<FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x148(0x10)
		TArray<UCurveTable*> GlobalAttributeDefaultsTables; // 0x158(0x10)
		FSoftObjectPath GlobalGameplayCueManagerClass; // 0x168(0x18)
		FSoftObjectPath GlobalGameplayCueManagerName; // 0x180(0x18)
		TArray<FString> GameplayCueNotifyPaths; // 0x198(0x10)
		FSoftObjectPath GameplayTagResponseTableName; // 0x1A8(0x18)
		UGameplayTagReponseTable* GameplayTagResponseTable; // 0x1C0(0x8)
		unsigned char UnknownData04_6[0x1]; // 0x1C8(0x1) UNKNOWN PROPERTY
		bool PredictTargetGameplayEffects; // 0x1C9(0x1)
		bool ReplicateActivationOwnedTags; // 0x1CA(0x1)
		unsigned char UnknownData05_6[0x5]; // 0x1CB(0x5) UNKNOWN PROPERTY
		UGameplayCueManager* GlobalGameplayCueManager; // 0x1D0(0x8)
		unsigned char UnknownData06_7[0x90]; // 0x1D8(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemGlobals");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitySystemInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAbilitySystemInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemInterface");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAbilitySystemReplicationProxyInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemReplicationProxyInterface");
			return ret;
		}
	};


	// Class GameplayAbilities.AttributeSet
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UAttributeSet : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AttributeSet");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitySystemTestAttributeSet
	// Inherited from UAttributeSet -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UAbilitySystemTestAttributeSet : public UAttributeSet	
	{
	public:
		float MaxHealth; // 0x30(0x4)
		float Health; // 0x34(0x4)
		FGameplayAttributeData Mana; // 0x38(0x10)
		float MaxMana; // 0x48(0x4)
		float Damage; // 0x4C(0x4)
		float SpellDamage; // 0x50(0x4)
		float PhysicalDamage; // 0x54(0x4)
		float CritChance; // 0x58(0x4)
		float CritMultiplier; // 0x5C(0x4)
		float ArmorDamageReduction; // 0x60(0x4)
		float DodgeChance; // 0x64(0x4)
		float LifeSteal; // 0x68(0x4)
		float Strength; // 0x6C(0x4)
		float StackingAttribute1; // 0x70(0x4)
		float StackingAttribute2; // 0x74(0x4)
		float NoStackAttribute; // 0x78(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemTestAttributeSet");
			return ret;
		}
	};


	// Class GameplayAbilities.AbilitySystemTestPawn
	// Inherited from ADefaultPawn -> APawn -> AActor -> UObject
	// Size: 0x20 (0x358 - 0x338)
	class AAbilitySystemTestPawn : public ADefaultPawn	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x338(0x18) UNKNOWN PROPERTY
		UAbilitySystemComponent* AbilitySystemComponent; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemTestPawn");
			return ret;
		}
	};


	// Class GameplayAbilities.AnimNotify_GameplayCue
	// Inherited from UAnimNotify -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UAnimNotify_GameplayCue : public UAnimNotify	
	{
	public:
		FGameplayCueTag GameplayCue; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AnimNotify_GameplayCue");
			return ret;
		}
	};


	// Class GameplayAbilities.AnimNotify_GameplayCueState
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UAnimNotify_GameplayCueState : public UAnimNotifyState	
	{
	public:
		FGameplayCueTag GameplayCue; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AnimNotify_GameplayCueState");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayAbilityBlueprint
	// Inherited from UBlueprint -> UBlueprintCore -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UGameplayAbilityBlueprint : public UBlueprint	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityBlueprint");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayCueFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueFunctionLibrary");
			return ret;
		}

		void RemoveGameplayCueOnActor(AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748B49094(relative to base address)
		FGameplayCueParameters MakeGameplayCueParametersFromHitResult(FHitResult& HitResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74D30B3C8(relative to base address)
		void ExecuteGameplayCueOnActor(AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748C8DE98(relative to base address)
		void AddGameplayCueOnActor(AActor* Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748CC80B8(relative to base address)
	};


	// Class GameplayAbilities.GameplayCueInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayCueInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueInterface");
			return ret;
		}

		void ForwardGameplayCueToParent(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748D7CED0(relative to base address)
		void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.GameplayCueManager
	// Inherited from UDataAsset -> UObject
	// Size: 0x290 (0x2C0 - 0x30)
	class UGameplayCueManager : public UDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x48(0x50)
		FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0x98(0x50)
		unsigned char UnknownData01_6[0x178]; // 0xE8(0x178) UNKNOWN PROPERTY
		TArray<UClass*> LoadedGameplayCueNotifyClasses; // 0x260(0x10)
		TArray<UClass*> GameplayCueClassesForPreallocation; // 0x270(0x10)
		TArray<FGameplayCuePendingExecute> PendingExecuteCues; // 0x280(0x10)
		int32_t GameplayCueSendContextCount; // 0x290(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		TArray<FPreallocationInfo> PreallocationInfoList_Internal; // 0x298(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x2A8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueManager");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayCueNotify_Actor
	// Inherited from AActor -> UObject
	// Size: 0x68 (0x2F8 - 0x290)
	class AGameplayCueNotify_Actor : public AActor	
	{
	public:
		bool bAutoDestroyOnRemove; // 0x290(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		float AutoDestroyDelay; // 0x294(0x4)
		bool WarnIfTimelineIsStillRunning; // 0x298(0x1)
		bool WarnIfLatentActionIsStillRunning; // 0x299(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x29A(0x2) UNKNOWN PROPERTY
		FGameplayTag GameplayCueTag; // 0x29C(0x4)
		FName GameplayCueName; // 0x2A0(0x4)
		bool bAutoAttachToOwner; // 0x2A4(0x1)
		bool IsOverride; // 0x2A5(0x1)
		bool bUniqueInstancePerInstigator; // 0x2A6(0x1)
		bool bUniqueInstancePerSourceObject; // 0x2A7(0x1)
		bool bAllowMultipleOnActiveEvents; // 0x2A8(0x1)
		bool bAllowMultipleWhileActiveEvents; // 0x2A9(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2AA(0x2) UNKNOWN PROPERTY
		int32_t NumPreallocatedInstances; // 0x2AC(0x4)
		unsigned char UnknownData03_7[0x48]; // 0x2B0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_Actor");
			return ret;
		}

		bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74D30B81C(relative to base address)
		bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF749130648(relative to base address)
		void OnOwnerDestroyed(AActor* DestroyedActor); // Flags: Native|Public, Memory Exec: 0x7FF748FFE16C(relative to base address)
		bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7495289AC(relative to base address)
		bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74D30B510(relative to base address)
		void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_EndGameplayCue(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7475A8C1C(relative to base address)
	};


	// Class GameplayAbilities.GameplayCueNotify_Burst
	// Inherited from UGameplayCueNotify_Static -> UObject
	// Size: 0x310 (0x348 - 0x38)
	class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static	
	{
	public:
		FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x38(0x38)
		FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x70(0x40)
		FGameplayCueNotify_BurstEffects BurstEffects; // 0xB0(0x298)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_Burst");
			return ret;
		}

		void OnBurst(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.GameplayCueNotify_BurstLatent
	// Inherited from AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x368 (0x660 - 0x2F8)
	class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor	
	{
	public:
		FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2F8(0x38)
		FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x330(0x40)
		FGameplayCueNotify_BurstEffects BurstEffects; // 0x370(0x298)
		FGameplayCueNotify_SpawnResult BurstSpawnResults; // 0x608(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_BurstLatent");
			return ret;
		}

		void OnBurst(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.GameplayCueNotify_HitImpact
	// Inherited from UGameplayCueNotify_Static -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static	
	{
	public:
		USoundBase* Sound; // 0x38(0x8)
		UParticleSystem* ParticleSystem; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_HitImpact");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayCueNotify_Looping
	// Inherited from AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0xB98 (0xE90 - 0x2F8)
	class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor	
	{
	public:
		FGameplayCueNotify_SpawnCondition DefaultSpawnCondition; // 0x2F8(0x38)
		FGameplayCueNotify_PlacementInfo DefaultPlacementInfo; // 0x330(0x40)
		FGameplayCueNotify_BurstEffects ApplicationEffects; // 0x370(0x298)
		FGameplayCueNotify_SpawnResult ApplicationSpawnResults; // 0x608(0x58)
		FGameplayCueNotify_LoopingEffects LoopingEffects; // 0x660(0x1F0)
		FGameplayCueNotify_SpawnResult LoopingSpawnResults; // 0x850(0x58)
		FGameplayCueNotify_BurstEffects RecurringEffects; // 0x8A8(0x298)
		FGameplayCueNotify_SpawnResult RecurringSpawnResults; // 0xB40(0x58)
		FGameplayCueNotify_BurstEffects RemovalEffects; // 0xB98(0x298)
		FGameplayCueNotify_SpawnResult RemovalSpawnResults; // 0xE30(0x58)
		unsigned char UnknownData00_7[0x8]; // 0xE88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_Looping");
			return ret;
		}

		void OnRemoval(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRecurring(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoopingStart(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnApplication(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GameplayAbilities.GameplayCueSet
	// Inherited from UDataAsset -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UGameplayCueSet : public UDataAsset	
	{
	public:
		TArray<FGameplayCueNotifyData> GameplayCueData; // 0x30(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueSet");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayCueTranslator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayCueTranslator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueTranslator");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayCueTranslator_Test
	// Inherited from UGameplayCueTranslator -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayCueTranslator_Test : public UGameplayCueTranslator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueTranslator_Test");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayEffectCalculation
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameplayEffectCalculation : public UObject	
	{
	public:
		TArray<FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayEffectCalculation");
			return ret;
		}
	};


	// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayEffectCustomApplicationRequirement : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement");
			return ret;
		}

		bool CanApplyGameplayEffect(UGameplayEffect* GameplayEffect, FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74D321378(relative to base address)
	};


	// Class GameplayAbilities.GameplayEffectExecutionCalculation
	// Inherited from UGameplayEffectCalculation -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation	
	{
	public:
		bool bRequiresPassedInTags; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayEffectExecutionCalculation");
			return ret;
		}

		void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74D321564(relative to base address)
	};


	// Class GameplayAbilities.GameplayModMagnitudeCalculation
	// Inherited from UGameplayEffectCalculation -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation	
	{
	public:
		bool bAllowNonNetAuthorityDependencyRegistration; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayModMagnitudeCalculation");
			return ret;
		}

		float K2_GetCapturedAttributeMagnitude(FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D321E5C(relative to base address)
		FGameplayTagContainer GetTargetSpecTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D321D90(relative to base address)
		FGameplayTagContainer GetTargetAggregatedTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D321C60(relative to base address)
		FGameplayTagContainer GetTargetActorTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D321B94(relative to base address)
		FGameplayTagContainer GetSourceSpecTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D321AC8(relative to base address)
		FGameplayTagContainer GetSourceAggregatedTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D321998(relative to base address)
		FGameplayTagContainer GetSourceActorTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D3218D0(relative to base address)
		float GetSetByCallerMagnitudeByTag(FGameplayEffectSpec& EffectSpec, FGameplayTag& Tag); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D3217B4(relative to base address)
		float GetSetByCallerMagnitudeByName(FGameplayEffectSpec& EffectSpec, FName& MagnitudeName); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74D321698(relative to base address)
		float CalculateBaseMagnitude(FGameplayEffectSpec& Spec); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74D3212AC(relative to base address)
	};


	// Class GameplayAbilities.GameplayTagReponseTable
	// Inherited from UDataAsset -> UObject
	// Size: 0x200 (0x230 - 0x30)
	class UGameplayTagReponseTable : public UDataAsset	
	{
	public:
		TArray<FGameplayTagResponseTableEntry> Entries; // 0x30(0x10)
		unsigned char UnknownData00_7[0x1F0]; // 0x40(0x1F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayTagReponseTable");
			return ret;
		}

		void TagResponseEvent(FGameplayTag Tag, int32_t NewCount, UAbilitySystemComponent* ASC, int32_t idx); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D3221A4(relative to base address)
	};


	// Class GameplayAbilities.MovieSceneGameplayCueTriggerSection
	// Inherited from UMovieSceneHookSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0xF8 (0x200 - 0x108)
	class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection	
	{
	public:
		FMovieSceneGameplayCueChannel Channel; // 0x108(0xF8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection");
			return ret;
		}
	};


	// Class GameplayAbilities.MovieSceneGameplayCueSection
	// Inherited from UMovieSceneHookSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x88 (0x190 - 0x108)
	class UMovieSceneGameplayCueSection : public UMovieSceneHookSection	
	{
	public:
		FMovieSceneGameplayCueKey Cue; // 0x108(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.MovieSceneGameplayCueSection");
			return ret;
		}
	};


	// Class GameplayAbilities.MovieSceneGameplayCueTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.MovieSceneGameplayCueTrack");
			return ret;
		}

		void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D322124(relative to base address)
	};


	// Class GameplayAbilities.TickableAttributeSetInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTickableAttributeSetInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.TickableAttributeSetInterface");
			return ret;
		}
	};

}
