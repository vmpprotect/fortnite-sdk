#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayAbilities
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData10_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EGameplayEffectDurationType DurationPolicy; // 0x30(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x1D8)
		FScalableFloat Period; // 0x210(0x28)
		bool bExecutePeriodicEffectOnApplication; // 0x238(0x1)
		EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x239(0x1)
		unsigned char UnknownData12_6[0x6]; // 0x23A(0x6) UNKNOWN PROPERTY
		TArray Modifiers; // 0x240(0x10)
		TArray Executions; // 0x250(0x10)
		FScalableFloat ChanceToApplyToTarget; // 0x260(0x28)
		TArray ApplicationRequirements; // 0x288(0x10)
		TArray ConditionalGameplayEffects; // 0x298(0x10)
		TArray OverflowEffects; // 0x2A8(0x10)
		bool bDenyOverflowApplication; // 0x2B8(0x1)
		bool bClearStackOnOverflow; // 0x2B9(0x1)
		unsigned char UnknownData13_6[0x6]; // 0x2BA(0x6) UNKNOWN PROPERTY
		TArray PrematureExpirationEffectClasses; // 0x2C0(0x10)
		TArray RoutineExpirationEffectClasses; // 0x2D0(0x10)
		bool bRequireModifierSuccessToTriggerCues; // 0x2E0(0x1)
		bool bSuppressStackingCues; // 0x2E1(0x1)
		unsigned char UnknownData14_6[0x6]; // 0x2E2(0x6) UNKNOWN PROPERTY
		TArray GameplayCues; // 0x2E8(0x10)
		UGameplayEffectUIData UIData; // 0x2F8(0x8)
		FInheritedTagContainer InheritableGameplayEffectTags; // 0x300(0x60)
		FInheritedTagContainer InheritableOwnedTagsContainer; // 0x360(0x60)
		FInheritedTagContainer InheritableBlockedAbilityTagsContainer; // 0x3C0(0x60)
		FGameplayTagRequirements OngoingTagRequirements; // 0x420(0x88)
		FGameplayTagRequirements ApplicationTagRequirements; // 0x4A8(0x88)
		FGameplayTagRequirements RemovalTagRequirements; // 0x530(0x88)
		FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x5B8(0x60)
		FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x618(0x88)
		FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x6A0(0x198)
		unsigned char UnknownData15_6[0x8]; // 0x838(0x8) UNKNOWN PROPERTY
		FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x840(0x198)
		unsigned char UnknownData16_6[0x1]; // 0x9D8(0x1) UNKNOWN PROPERTY
		EGameplayEffectStackingType StackingType; // 0x9D9(0x1)
		unsigned char UnknownData17_6[0x2]; // 0x9DA(0x2) UNKNOWN PROPERTY
		int32_t StackLimitCount; // 0x9DC(0x4)
		EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x9E0(0x1)
		EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x9E1(0x1)
		EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x9E2(0x1)
		unsigned char UnknownData18_6[0x5]; // 0x9E3(0x5) UNKNOWN PROPERTY
		TArray GrantedAbilities; // 0x9E8(0x10)
		unsigned char UnknownData19_6[0x60]; // 0x9F8(0x60) UNKNOWN PROPERTY
		TArray GEComponents; // 0xA58(0x10)

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
		TArray GrantAbilityConfigs; // 0x28(0x10)

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
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync");
			return ret;
		}

		void EndAction(); // Flags: Native|Public|BlueprintCallable 0x7FF411933490
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UAbilityAsync_WaitGameplayTagCountChanged : public UAbilityAsync	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate TagCountChanged; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged");
			return ret;
		}

		UAbilityAsync_WaitGameplayTagCountChanged WaitGameplayTagCountChangedOnActor(AActor TargetActor, FGameplayTag tag); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF411973EB0
		void AsyncWaitGameplayTagCountDelegate__DelegateSignature(int32_t TagCount); // Flags: MulticastDelegate|Public|Delegate 0x7FF411973DD0
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

		void EffectRemove(FString NameOrHandle); // Flags: Final|Exec|Native|Public|Const 0x7FF4145F0818
		void EffectListActive(); // Flags: Final|Exec|Native|Public|Const 0x7FF4145F0738
		void EffectApply(FString PartialName, float EffectLevel); // Flags: Final|Exec|Native|Public|Const 0x7FF4145F0658
		void AbilityListGranted(); // Flags: Final|Exec|Native|Public|Const 0x7FF4145F0578
		void AbilityGrant(FString AssetSearchString); // Flags: Final|Exec|Native|Public|Const 0x7FF4145F0498
		void AbilityCancel(FString PartialName); // Flags: Final|Exec|Native|Public|Const 0x7FF4145F03B8
		void AbilityActivate(FString PartialName); // Flags: Final|Exec|Native|Public|Const 0x7FF4145F02D8
	};


	// Class GameplayAbilities.AbilityTask
	// Inherited from UGameplayTask -> UObject
	// Size: 0x18 (0x78 - 0x60)
	class UAbilityTask : public UGameplayTask	
	{
	public:
		UGameplayAbility ability; // 0x60(0x8)
		TWeakObjectPtr AbilitySystemComponent; // 0x68(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x38]; // 0xC8(0x38) UNKNOWN PROPERTY
		UAnimSequence AnimSequenceToPlay; // 0x100(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x108(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_PlayAnimAndWait");
			return ret;
		}

		void OnMontageInterrupted(); // Flags: Final|Native|Public 0x7FF4145F0C78
		void OnMontageEnded(UAnimMontage Montage, bool bInterrupted); // Flags: Final|Native|Public 0x7FF4145F0B98
		void OnMontageBlendingOut(UAnimMontage Montage, bool bInterrupted); // Flags: Final|Native|Public 0x7FF4145F0AB8
		void OnMontageBlendedIn(UAnimMontage Montage); // Flags: Final|Native|Public 0x7FF4145F09D8
		UAbilityTask_PlayAnimAndWait CreatePlayAnimAndWaitProxy(UGameplayAbility OwningAbility, FName TaskInstanceName, UAnimSequence AnimSequence, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, float StartTimeSeconds, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F08F8
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UAbilityTask_WaitGameplayTagCountChanged : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate TagCountChanged; // 0x78(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		UAbilitySystemComponent OptionalExternalTarget; // 0x90(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged");
			return ret;
		}

		UAbilityTask_WaitGameplayTagCountChanged WaitGameplayTagCountChange(UGameplayAbility OwningAbility, FGameplayTag tag, AActor InOptionalExternalTarget); // Flags: Final|Native|Static|Protected|BlueprintCallable 0x7FF4145F0D58
	};


	// Class GameplayAbilities.AdditionalEffectsGameplayEffectComponent
	// Inherited from UGameplayEffectComponent -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent	
	{
	public:
		bool bOnApplicationCopyDataFromOriginalSpec; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray OnApplicationGameplayEffects; // 0x30(0x10)
		TArray OnCompleteAlways; // 0x40(0x10)
		TArray OnCompleteNormal; // 0x50(0x10)
		TArray OnCompletePrematurely; // 0x60(0x10)

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
		TArray ApplicationRequirements; // 0x28(0x10)

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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_Static");
			return ret;
		}

		bool WhileActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4145F11B8
		bool OnRemove(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4145F10D8
		bool OnExecute(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4145F0FF8
		bool OnActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4145F0F18
		void K2_HandleGameplayCue(AActor MyTarget, TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF4145F0E38
	};


	// Class GameplayAbilities.GameplayCueNotify_UnitTest
	// Inherited from UGameplayCueNotify_Static -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UGameplayCueNotify_UnitTest : public UGameplayCueNotify_Static	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

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
		TArray ImmunityQueries; // 0x28(0x10)

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
		TArray RemoveGameplayEffectQueries; // 0x28(0x10)

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
		unsigned char UnknownData01_7[0x48]; // 0x48(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged");
			return ret;
		}

		UAbilityAsync_WaitAttributeChanged WaitForAttributeChanged(AActor TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF411933650
		void AsyncWaitAttributeChangedDelegate__DelegateSignature(FGameplayAttribute Attribute, float NewValue, float OldValue); // Flags: MulticastDelegate|Public|Delegate 0x7FF411933570
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x150 (0x188 - 0x38)
	class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync	
	{
	public:
		FMulticastInlineDelegate OnApplied; // 0x38(0x10)
		unsigned char UnknownData01_7[0x140]; // 0x48(0x140) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied");
			return ret;
		}

		UAbilityAsync_WaitGameplayEffectApplied WaitGameplayEffectAppliedToActor(AActor TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF411933810
		void OnAppliedDelegate__DelegateSignature(AActor Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle); // Flags: MulticastDelegate|Public|Delegate 0x7FF411933730
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayEvent
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync	
	{
	public:
		FMulticastInlineDelegate EventReceived; // 0x38(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent");
			return ret;
		}

		UAbilityAsync_WaitGameplayEvent WaitGameplayEventToActor(AActor TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF411933C10
		void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload); // Flags: MulticastDelegate|Public|Delegate 0x7FF411933B30
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayTag
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UAbilityAsync_WaitGameplayTag : public UAbilityAsync	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x38(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayTag");
			return ret;
		}

		void AsyncWaitGameplayTagDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF411973CF0
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

		UAbilityAsync_WaitGameplayTagAdded WaitGameplayTagAddToActor(AActor TargetActor, FGameplayTag tag, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F1298
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

		UAbilityAsync_WaitGameplayTagRemoved WaitGameplayTagRemoveFromActor(AActor TargetActor, FGameplayTag tag, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F1378
	};


	// Class GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
	// Inherited from UAbilityAsync -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0xD0 (0x108 - 0x38)
	class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync	
	{
	public:
		unsigned char UnknownData01_3[0xC0]; // 0x38(0xC0) UNKNOWN PROPERTY
		FMulticastInlineDelegate Triggered; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery");
			return ret;
		}

		UAbilityAsync_WaitGameplayTagQuery WaitGameplayTagQueryOnActor(AActor TargetActor, FGameplayTagQuery TagQuery, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // Flags: Final|Native|Static|Protected|BlueprintCallable 0x7FF4145F1458
	};


	// Class GameplayAbilities.GameplayAbility
	// Inherited from UObject
	// Size: 0x388 (0x3B0 - 0x28)
	class UGameplayAbility : public UObject	
	{
	public:
		unsigned char UnknownData09_3[0x80]; // 0x28(0x80) UNKNOWN PROPERTY
		FGameplayTagContainer AbilityTags; // 0xA8(0x20)
		bool bReplicateInputDirectly; // 0xC8(0x1)
		bool RemoteInstanceEnded; // 0xC9(0x1)
		unsigned char UnknownData10_6[0x4]; // 0xCA(0x4) UNKNOWN PROPERTY
		TEnumAsByte ReplicationPolicy; // 0xCE(0x1)
		TEnumAsByte InstancingPolicy; // 0xCF(0x1)
		bool bServerRespectsRemoteAbilityCancellation; // 0xD0(0x1)
		bool bRetriggerInstancedAbility; // 0xD1(0x1)
		unsigned char UnknownData11_6[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY
		FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xD8(0x18)
		FGameplayEventData CurrentEventData; // 0xF0(0xB0)
		TEnumAsByte NetExecutionPolicy; // 0x1A0(0x1)
		TEnumAsByte NetSecurityPolicy; // 0x1A1(0x1)
		unsigned char UnknownData12_6[0x6]; // 0x1A2(0x6) UNKNOWN PROPERTY
		UClass CostGameplayEffectClass; // 0x1A8(0x8)
		TArray AbilityTriggers; // 0x1B0(0x10)
		UClass CooldownGameplayEffectClass; // 0x1C0(0x8)
		FGameplayTagContainer CancelAbilitiesWithTag; // 0x1C8(0x20)
		FGameplayTagContainer BlockAbilitiesWithTag; // 0x1E8(0x20)
		FGameplayTagContainer ActivationOwnedTags; // 0x208(0x20)
		FGameplayTagContainer ActivationRequiredTags; // 0x228(0x20)
		FGameplayTagContainer ActivationBlockedTags; // 0x248(0x20)
		FGameplayTagContainer SourceRequiredTags; // 0x268(0x20)
		FGameplayTagContainer SourceBlockedTags; // 0x288(0x20)
		FGameplayTagContainer TargetRequiredTags; // 0x2A8(0x20)
		FGameplayTagContainer TargetBlockedTags; // 0x2C8(0x20)
		unsigned char UnknownData13_6[0x20]; // 0x2E8(0x20) UNKNOWN PROPERTY
		TArray ActiveTasks; // 0x308(0x10)
		unsigned char UnknownData14_6[0x10]; // 0x318(0x10) UNKNOWN PROPERTY
		UAnimMontage CurrentMontage; // 0x328(0x8)
		unsigned char UnknownData15_6[0x60]; // 0x330(0x60) UNKNOWN PROPERTY
		bool bIsActive; // 0x390(0x1)
		bool bIsAbilityEnding; // 0x391(0x1)
		bool bIsCancelable; // 0x392(0x1)
		bool bIsBlockingOtherAbilities; // 0x393(0x1)
		unsigned char UnknownData16_6[0x14]; // 0x394(0x14) UNKNOWN PROPERTY
		bool bMarkPendingKillOnAbilityEnd; // 0x3A8(0x1)
		unsigned char UnknownData17_7[0x7]; // 0x3A9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbility");
			return ret;
		}

		void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Flags: Native|Public|BlueprintCallable 0x7FF413ED5188
		void SetCanBeCanceled(bool bCanBeCanceled); // Flags: Native|Public|BlueprintCallable 0x7FF413ED50A8
		void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload); // Flags: Native|Protected|BlueprintCallable 0x7FF413ED4FC8
		void RemoveGrantedByEffect(); // Flags: Native|Public|BlueprintCallable 0x7FF413ED4EE8
		void MontageStop(float OverrideBlendOutTime); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED4E08
		void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED4D28
		void MontageJumpToSection(FName SectionName); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED4C48
		FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF413ED4B68
		FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF413ED49C8
		FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(UClass GameplayEffectClass, float Level); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED48E8
		bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF413ED4808
		void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag); // Flags: Native|Protected|BlueprintCallable 0x7FF413ED4728
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent 0x7FF413ED4648
		bool K2_HasAuthority(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF413ED4568
		void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters); // Flags: Native|Protected|HasOutParms|BlueprintCallable 0x7FF413ED4488
		void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context); // Flags: Native|Protected|BlueprintCallable 0x7FF413ED43A8
		void K2_EndAbilityLocally(); // Flags: Native|Protected|BlueprintCallable 0x7FF413ED42C8
		void K2_EndAbility(); // Flags: Native|Protected|BlueprintCallable 0x7FF413ED41E8
		void K2_CommitExecute(); // Flags: Event|Public|BlueprintEvent 0x7FF413ED4108
		bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Flags: Native|Public|BlueprintCallable 0x7FF413ED4028
		bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Flags: Native|Public|BlueprintCallable 0x7FF413ED3F48
		bool K2_CommitAbility(); // Flags: Native|Public|BlueprintCallable 0x7FF413ED3E68
		bool K2_CheckAbilityCost(); // Flags: Native|Public|BlueprintCallable 0x7FF413ED3D88
		bool K2_CheckAbilityCooldown(); // Flags: Native|Public|BlueprintCallable 0x7FF413ED3CA8
		void K2_CancelAbility(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413ED3BC8
		bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF413ED3AE8
		TArray K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED3A08
		FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED3928
		void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // Flags: Native|Protected|HasOutParms|BlueprintCallable 0x7FF413ED3848
		void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Flags: Native|Protected|BlueprintCallable 0x7FF413ED3768
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF413ED3688
		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent 0x7FF413ED35A8
		bool IsLocallyControlled(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF413ED34C8
		void InvalidateClientPredictionKey(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF413ED33E8
		UObject GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF413ED3308
		USkeletalMeshComponent GetOwningComponentFromActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED3228
		AActor GetOwningActorFromActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED3148
		FGameplayEffectContextHandle GetGrantedByEffectContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED3068
		UObject GetCurrentSourceObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED2F88
		UAnimMontage GetCurrentMontage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED2EA8
		float GetCooldownTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED2DC8
		FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED2CE8
		AActor GetAvatarActorFromActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED2C08
		FGameplayAbilityActorInfo GetActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED2B28
		UAbilitySystemComponent GetAbilitySystemComponentFromActorInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED2A48
		int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF413ED28A8
		int32_t GetAbilityLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413ED27C8
		void EndTaskByInstanceName(FName InstanceName); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED26E8
		void EndAbilityState(FName OptionalStateNameToEnd); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED2608
		void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED2528
		void CancelTaskByInstanceName(FName InstanceName); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED2448
		void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED2368
		void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED2288
		void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED21A8
		TArray BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, UClass GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED20C8
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(UClass GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413ED1FE8
	};


	// Class GameplayAbilities.GameplayAbilitySet
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UGameplayAbilitySet : public UDataAsset	
	{
	public:
		TArray Abilities; // 0x30(0x10)

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
		unsigned char UnknownData04_6[0xF]; // 0x291(0xF) UNKNOWN PROPERTY
		FGameplayAbilityTargetingLocationInfo StartLocation; // 0x2A0(0x90)
		unsigned char UnknownData05_6[0x30]; // 0x330(0x30) UNKNOWN PROPERTY
		APlayerController PrimaryPC; // 0x360(0x8)
		UGameplayAbility OwningAbility; // 0x368(0x8)
		bool bDestroyOnConfirmation; // 0x370(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x371(0x7) UNKNOWN PROPERTY
		AActor SourceActor; // 0x378(0x8)
		FWorldReticleParameters ReticleParams; // 0x380(0x18)
		UClass ReticleClass; // 0x398(0x8)
		FGameplayTargetDataFilterHandle Filter; // 0x3A0(0x10)
		bool bDebug; // 0x3B0(0x1)
		unsigned char UnknownData07_6[0x17]; // 0x3B1(0x17) UNKNOWN PROPERTY
		UAbilitySystemComponent GenericDelegateBoundASC; // 0x3C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityTargetActor");
			return ret;
		}

		void ConfirmTargeting(); // Flags: Native|Public 0x7FF4145F1618
		void CancelTargeting(); // Flags: Native|Public 0x7FF4145F1538
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
		unsigned char UnknownData01_7[0xF]; // 0x3D9(0xF) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY

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
		UClass PlacedActorClass; // 0x408(0x8)
		UMaterialInterface PlacedActorMaterial; // 0x410(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x418(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0xC]; // 0x3D4(0xC) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x3E8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY
		APlayerController PrimaryPC; // 0x2B0(0x8)
		AGameplayAbilityTargetActor TargetingActor; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayAbilityWorldReticle");
			return ret;
		}

		void SetReticleMaterialParamVector(FName ParamName, FVector Value); // Flags: Event|Public|HasDefaults|BlueprintEvent 0x7FF4145F1B58
		void SetReticleMaterialParamFloat(FName ParamName, float Value); // Flags: Event|Public|BlueprintEvent 0x7FF4145F1A78
		void OnValidTargetChanged(bool bNewValue); // Flags: Event|Public|BlueprintEvent 0x7FF4145F1998
		void OnTargetingAnActor(bool bNewValue); // Flags: Event|Public|BlueprintEvent 0x7FF4145F18B8
		void OnParametersInitialized(); // Flags: Event|Public|BlueprintEvent 0x7FF4145F17D8
		void FaceTowardSource(bool bFaceIn2D); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145F16F8
	};


	// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
	// Inherited from AGameplayAbilityWorldReticle -> AActor -> UObject
	// Size: 0x18 (0x2D8 - 0x2C0)
	class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle	
	{
	public:
		UCapsuleComponent CollisionComponent; // 0x2C0(0x8)
		TArray VisualizationComponents; // 0x2C8(0x10)

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
		UAnimMontage MontageToPlay; // 0x3B0(0x8)
		float PlayRate; // 0x3B8(0x4)
		FName SectionName; // 0x3BC(0x4)
		TArray GameplayEffectClassesWhileAnimating; // 0x3C0(0x10)
		TArray GameplayEffectsWhileAnimating; // 0x3D0(0x10)

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
		unsigned char UnknownData03_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		FVector FinishSetVelocity; // 0x80(0x18)
		float FinishClampVelocity; // 0x98(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		UCharacterMovementComponent MovementComponent; // 0xA0(0x8)
		unsigned char UnknownData05_7[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		UCurveFloat StrengthOverTime; // 0xF0(0x8)
		bool bEnableGravity; // 0xF8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce");
			return ret;
		}

		UAbilityTask_ApplyRootMotionConstantForce ApplyRootMotionConstantForce(UGameplayAbility OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float duration, bool bIsAdditive, UCurveFloat StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F1C38
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
		unsigned char UnknownData02_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		UCurveVector PathOffsetCurve; // 0x108(0x8)
		UCurveFloat TimeMappingCurve; // 0x110(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce");
			return ret;
		}

		void OnLandedCallback(FHitResult& Hit); // Flags: Final|Native|Public|HasOutParms 0x7FF4145F1ED8
		void Finish(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145F1DF8
		UAbilityTask_ApplyRootMotionJumpForce ApplyRootMotionJumpForce(UGameplayAbility OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector PathOffsetCurve, UCurveFloat TimeMappingCurve); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F1D18
	};


	// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
	// Inherited from UAbilityTask_ApplyRootMotion_Base -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xC8 (0x180 - 0xB8)
	class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base	
	{
	public:
		FMulticastInlineDelegate OnFinished; // 0xB8(0x10)
		unsigned char UnknownData05_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FVector StartLocation; // 0xD0(0x18)
		FVector TargetLocation; // 0xE8(0x18)
		AActor TargetActor; // 0x100(0x8)
		USceneComponent TargetComponent; // 0x108(0x8)
		FVector TargetComponentRelativeLocation; // 0x110(0x18)
		FVector TargetLocationOffset; // 0x128(0x18)
		ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0x140(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x141(0x3) UNKNOWN PROPERTY
		float duration; // 0x144(0x4)
		bool bDisableDestinationReachedInterrupt; // 0x148(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x149(0x3) UNKNOWN PROPERTY
		float ReachedDestinationDistance; // 0x14C(0x4)
		bool bSetNewMovementMode; // 0x150(0x1)
		TEnumAsByte NewMovementMode; // 0x151(0x1)
		bool bRestrictSpeedToExpected; // 0x152(0x1)
		unsigned char UnknownData08_6[0x5]; // 0x153(0x5) UNKNOWN PROPERTY
		UCurveVector PathOffsetCurve; // 0x158(0x8)
		UCurveFloat TimeMappingCurve; // 0x160(0x8)
		UCurveFloat TargetLerpSpeedHorizontalCurve; // 0x168(0x8)
		UCurveFloat TargetLerpSpeedVerticalCurve; // 0x170(0x8)
		unsigned char UnknownData09_7[0x8]; // 0x178(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce");
			return ret;
		}

		void OnTargetActorSwapped(AActor OriginalTarget, AActor NewTarget); // Flags: Final|Native|Public 0x7FF4145F2338
		void OnRep_TargetLocation(); // Flags: Final|Native|Protected 0x7FF4145F2258
		UAbilityTask_ApplyRootMotionMoveToActorForce ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, UCurveFloat TargetLerpSpeedHorizontal, UCurveFloat TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte MovementMode, bool bRestrictSpeedToExpected, UCurveVector PathOffsetCurve, UCurveFloat TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F2178
		UAbilityTask_ApplyRootMotionMoveToActorForce ApplyRootMotionMoveToComponentForce(UGameplayAbility OwningAbility, FName TaskInstanceName, USceneComponent TargetComponent, FVector TargetComponentRelativeLocation, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, UCurveFloat TargetLerpSpeedHorizontal, UCurveFloat TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte MovementMode, bool bRestrictSpeedToExpected, UCurveVector PathOffsetCurve, UCurveFloat TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F2098
		UAbilityTask_ApplyRootMotionMoveToActorForce ApplyRootMotionMoveToActorForce(UGameplayAbility OwningAbility, FName TaskInstanceName, AActor TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float duration, UCurveFloat TargetLerpSpeedHorizontal, UCurveFloat TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte MovementMode, bool bRestrictSpeedToExpected, UCurveVector PathOffsetCurve, UCurveFloat TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, float ReachedDestinationDistance); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F1FB8
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
		TEnumAsByte NewMovementMode; // 0x10D(0x1)
		bool bRestrictSpeedToExpected; // 0x10E(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x10F(0x1) UNKNOWN PROPERTY
		UCurveVector PathOffsetCurve; // 0x110(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce");
			return ret;
		}

		UAbilityTask_ApplyRootMotionMoveToForce ApplyRootMotionMoveToForce(UGameplayAbility OwningAbility, FName TaskInstanceName, FVector TargetLocation, float duration, bool bSetNewMovementMode, TEnumAsByte MovementMode, bool bRestrictSpeedToExpected, UCurveVector PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F2418
	};


	// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
	// Inherited from UAbilityTask_ApplyRootMotion_Base -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x70 (0x128 - 0xB8)
	class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base	
	{
	public:
		FMulticastInlineDelegate OnFinish; // 0xB8(0x10)
		FVector Location; // 0xC8(0x18)
		AActor LocationActor; // 0xE0(0x8)
		float Strength; // 0xE8(0x4)
		float duration; // 0xEC(0x4)
		float Radius; // 0xF0(0x4)
		bool bIsPush; // 0xF4(0x1)
		bool bIsAdditive; // 0xF5(0x1)
		bool bNoZForce; // 0xF6(0x1)
		unsigned char UnknownData02_6[0x1]; // 0xF7(0x1) UNKNOWN PROPERTY
		UCurveFloat StrengthDistanceFalloff; // 0xF8(0x8)
		UCurveFloat StrengthOverTime; // 0x100(0x8)
		bool bUseFixedWorldDirection; // 0x108(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
		FRotator FixedWorldDirection; // 0x110(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce");
			return ret;
		}

		UAbilityTask_ApplyRootMotionRadialForce ApplyRootMotionRadialForce(UGameplayAbility OwningAbility, FName TaskInstanceName, FVector Location, AActor LocationActor, float Strength, float duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, UCurveFloat StrengthDistanceFalloff, UCurveFloat StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F24F8
	};


	// Class GameplayAbilities.AbilityTask_MoveToLocation
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x68 (0xE0 - 0x78)
	class UAbilityTask_MoveToLocation : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnTargetLocationReached; // 0x78(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		FVector StartLocation; // 0x90(0x18)
		FVector TargetLocation; // 0xA8(0x18)
		float DurationOfMovement; // 0xC0(0x4)
		unsigned char UnknownData03_6[0xC]; // 0xC4(0xC) UNKNOWN PROPERTY
		UCurveFloat LerpCurve; // 0xD0(0x8)
		UCurveVector LerpCurveVector; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_MoveToLocation");
			return ret;
		}

		UAbilityTask_MoveToLocation MoveToLocation(UGameplayAbility OwningAbility, FName TaskInstanceName, FVector Location, float duration, UCurveFloat OptionalInterpolationCurve, UCurveVector OptionalVectorInterpolationCurve); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F25D8
	};


	// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UAbilityTask_NetworkSyncPoint : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnSync; // 0x78(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_NetworkSyncPoint");
			return ret;
		}

		UAbilityTask_NetworkSyncPoint WaitNetSync(UGameplayAbility OwningAbility, EAbilityTaskNetSyncType SyncType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F2798
		void OnSignalCallback(); // Flags: Final|Native|Public 0x7FF4145F26B8
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
		unsigned char UnknownData02_6[0x38]; // 0xC8(0x38) UNKNOWN PROPERTY
		UAnimMontage MontageToPlay; // 0x100(0x8)
		float Rate; // 0x108(0x4)
		FName StartSection; // 0x10C(0x4)
		float AnimRootMotionTranslationScale; // 0x110(0x4)
		float StartTimeSeconds; // 0x114(0x4)
		bool bStopWhenAbilityEnds; // 0x118(0x1)
		bool bAllowInterruptAfterBlendOut; // 0x119(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_PlayMontageAndWait");
			return ret;
		}

		void OnMontageInterrupted(); // Flags: Final|Native|Public 0x7FF4145F2CD8
		void OnMontageEnded(UAnimMontage Montage, bool bInterrupted); // Flags: Final|Native|Public 0x7FF4145F2BF8
		void OnMontageBlendingOut(UAnimMontage Montage, bool bInterrupted); // Flags: Final|Native|Public 0x7FF4145F2B18
		void OnMontageBlendedIn(UAnimMontage Montage); // Flags: Final|Native|Public 0x7FF4145F2A38
		void OnGameplayAbilityCancelled(); // Flags: Final|Native|Public 0x7FF4145F2958
		UAbilityTask_PlayMontageAndWait CreatePlayMontageAndWaitProxy(UGameplayAbility OwningAbility, FName TaskInstanceName, UAnimMontage MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F2878
	};


	// Class GameplayAbilities.AbilityTask_Repeat
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAbilityTask_Repeat : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnPerformAction; // 0x78(0x10)
		FMulticastInlineDelegate OnFinished; // 0x88(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x98(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_Repeat");
			return ret;
		}

		UAbilityTask_Repeat RepeatAction(UGameplayAbility OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F2DB8
	};


	// Class GameplayAbilities.AbilityTask_SpawnActor
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x48 (0xC0 - 0x78)
	class UAbilityTask_SpawnActor : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate Success; // 0x78(0x10)
		FMulticastInlineDelegate DidNotSpawn; // 0x88(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x98(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_SpawnActor");
			return ret;
		}

		UAbilityTask_SpawnActor SpawnActor(UGameplayAbility OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass Class); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3058
		void FinishSpawningActor(UGameplayAbility OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor SpawnedActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145F2F78
		bool BeginSpawningActor(UGameplayAbility OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass Class, AActor& SpawnedActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145F2E98
	};


	// Class GameplayAbilities.AbilityTask_StartAbilityState
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAbilityTask_StartAbilityState : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnStateEnded; // 0x78(0x10)
		FMulticastInlineDelegate OnStateInterrupted; // 0x88(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x98(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_StartAbilityState");
			return ret;
		}

		UAbilityTask_StartAbilityState StartAbilityState(UGameplayAbility OwningAbility, FName StateName, bool bEndCurrentState); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3138
	};


	// Class GameplayAbilities.AbilityTask_VisualizeTargeting
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UAbilityTask_VisualizeTargeting : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate TimeElapsed; // 0x78(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x88(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_VisualizeTargeting");
			return ret;
		}

		UAbilityTask_VisualizeTargeting VisualizeTargetingUsingActor(UGameplayAbility OwningAbility, AGameplayAbilityTargetActor TargetActor, FName TaskInstanceName, float duration); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F34B8
		UAbilityTask_VisualizeTargeting VisualizeTargeting(UGameplayAbility OwningAbility, UClass Class, FName TaskInstanceName, float duration); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F33D8
		void FinishSpawningActor(UGameplayAbility OwningAbility, AGameplayAbilityTargetActor SpawnedActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145F32F8
		bool BeginSpawningActor(UGameplayAbility OwningAbility, UClass Class, AGameplayAbilityTargetActor& SpawnedActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145F3218
	};


	// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xF8 (0x170 - 0x78)
	class UAbilityTask_WaitAbilityActivate : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnActivate; // 0x78(0x10)
		unsigned char UnknownData01_7[0xE8]; // 0x88(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAbilityActivate");
			return ret;
		}

		UAbilityTask_WaitAbilityActivate WaitForAbilityActivateWithTagRequirements(UGameplayAbility OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3838
		UAbilityTask_WaitAbilityActivate WaitForAbilityActivate_Query(UGameplayAbility OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3758
		UAbilityTask_WaitAbilityActivate WaitForAbilityActivate(UGameplayAbility OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3678
		void OnAbilityActivate(UGameplayAbility ActivatedAbility); // Flags: Final|Native|Public 0x7FF4145F3598
	};


	// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x70 (0xE8 - 0x78)
	class UAbilityTask_WaitAbilityCommit : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnCommit; // 0x78(0x10)
		unsigned char UnknownData01_7[0x60]; // 0x88(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAbilityCommit");
			return ret;
		}

		UAbilityTask_WaitAbilityCommit WaitForAbilityCommit_Query(UGameplayAbility OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3AD8
		UAbilityTask_WaitAbilityCommit WaitForAbilityCommit(UGameplayAbility OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F39F8
		void OnAbilityCommit(UGameplayAbility ActivatedAbility); // Flags: Final|Native|Public 0x7FF4145F3918
	};


	// Class GameplayAbilities.AbilityTask_WaitAttributeChange
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x70 (0xE8 - 0x78)
	class UAbilityTask_WaitAttributeChange : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		unsigned char UnknownData01_6[0x58]; // 0x88(0x58) UNKNOWN PROPERTY
		UAbilitySystemComponent ExternalOwner; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAttributeChange");
			return ret;
		}

		UAbilityTask_WaitAttributeChange WaitForAttributeChangeWithComparison(UGameplayAbility OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte InComparisonType, float InComparisonValue, bool TriggerOnce, AActor OptionalExternalOwner); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3C98
		UAbilityTask_WaitAttributeChange WaitForAttributeChange(UGameplayAbility OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor OptionalExternalOwner); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3BB8
	};


	// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xC0 (0x138 - 0x78)
	class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		unsigned char UnknownData01_6[0xA8]; // 0x88(0xA8) UNKNOWN PROPERTY
		UAbilitySystemComponent ExternalOwner; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold");
			return ret;
		}

		UAbilityTask_WaitAttributeChangeRatioThreshold WaitForAttributeChangeRatioThreshold(UGameplayAbility OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor OptionalExternalOwner); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3D78
	};


	// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x70 (0xE8 - 0x78)
	class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		unsigned char UnknownData01_6[0x58]; // 0x88(0x58) UNKNOWN PROPERTY
		UAbilitySystemComponent ExternalOwner; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold");
			return ret;
		}

		UAbilityTask_WaitAttributeChangeThreshold WaitForAttributeChangeThreshold(UGameplayAbility OwningAbility, FGameplayAttribute Attribute, TEnumAsByte ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor OptionalExternalOwner); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F3E58
	};


	// Class GameplayAbilities.AbilityTask_WaitCancel
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UAbilityTask_WaitCancel : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnCancel; // 0x78(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitCancel");
			return ret;
		}

		UAbilityTask_WaitCancel WaitCancel(UGameplayAbility OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F40F8
		void OnLocalCancelCallback(); // Flags: Final|Native|Public 0x7FF4145F4018
		void OnCancelCallback(); // Flags: Final|Native|Public 0x7FF4145F3F38
	};


	// Class GameplayAbilities.AbilityTask_WaitConfirm
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitConfirm : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitConfirm");
			return ret;
		}

		UAbilityTask_WaitConfirm WaitConfirm(UGameplayAbility OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F42B8
		void OnConfirmCallback(UGameplayAbility InAbility); // Flags: Final|Native|Public 0x7FF4145F41D8
	};


	// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UAbilityTask_WaitConfirmCancel : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnConfirm; // 0x78(0x10)
		FMulticastInlineDelegate OnCancel; // 0x88(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitConfirmCancel");
			return ret;
		}

		UAbilityTask_WaitConfirmCancel WaitConfirmCancel(UGameplayAbility OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F4718
		void OnLocalConfirmCallback(); // Flags: Final|Native|Public 0x7FF4145F4638
		void OnLocalCancelCallback(); // Flags: Final|Native|Public 0x7FF4145F4558
		void OnConfirmCallback(); // Flags: Final|Native|Public 0x7FF4145F4478
		void OnCancelCallback(); // Flags: Final|Native|Public 0x7FF4145F4398
	};


	// Class GameplayAbilities.AbilityTask_WaitDelay
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UAbilityTask_WaitDelay : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnFinish; // 0x78(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitDelay");
			return ret;
		}

		UAbilityTask_WaitDelay WaitDelay(UGameplayAbility OwningAbility, float Time); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F47F8
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x1C8 (0x240 - 0x78)
	class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask	
	{
	public:
		unsigned char UnknownData02_3[0x1B8]; // 0x78(0x1B8) UNKNOWN PROPERTY
		UAbilitySystemComponent ExternalOwner; // 0x230(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
			return ret;
		}

		void OnApplyGameplayEffectCallback(UAbilitySystemComponent Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Public|HasOutParms 0x7FF4145F48D8
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
	// Inherited from UAbilityTask_WaitGameplayEffectApplied -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x260 - 0x240)
	class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied	
	{
	public:
		FMulticastInlineDelegate OnApplied; // 0x240(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x250(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectApplied_Self WaitGameplayEffectAppliedToSelf_Query(UGameplayAbility OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor OptionalExternalOwner, bool ListenForPeriodicEffect); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F4A98
		UAbilityTask_WaitGameplayEffectApplied_Self WaitGameplayEffectAppliedToSelf(UGameplayAbility OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor OptionalExternalOwner, bool ListenForPeriodicEffect); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F49B8
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
	// Inherited from UAbilityTask_WaitGameplayEffectApplied -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x260 - 0x240)
	class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied	
	{
	public:
		FMulticastInlineDelegate OnApplied; // 0x240(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x250(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectApplied_Target WaitGameplayEffectAppliedToTarget_Query(UGameplayAbility OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor OptionalExternalOwner, bool ListenForPeriodicEffect); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F4C58
		UAbilityTask_WaitGameplayEffectApplied_Target WaitGameplayEffectAppliedToTarget(UGameplayAbility OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor OptionalExternalOwner, bool ListenForPeriodicEffects); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F4B78
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x138 (0x1B0 - 0x78)
	class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate bLocked; // 0x78(0x10)
		unsigned char UnknownData02_6[0x118]; // 0x88(0x118) UNKNOWN PROPERTY
		UAbilitySystemComponent ExternalOwner; // 0x1A0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectBlockedImmunity WaitGameplayEffectBlockedByImmunity(UGameplayAbility OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor OptionalExternalTarget, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F4D38
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x40 (0xB8 - 0x78)
	class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnRemoved; // 0x78(0x10)
		FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x98(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectRemoved WaitForGameplayEffectRemoved(UGameplayAbility OwningAbility, FActiveGameplayEffectHandle Handle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F4EF8
		void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo); // Flags: Final|Native|Public|HasOutParms 0x7FF4145F4E18
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		FMulticastInlineDelegate InvalidHandle; // 0x88(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x98(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange");
			return ret;
		}

		UAbilityTask_WaitGameplayEffectStackChange WaitForGameplayEffectStackChange(UGameplayAbility OwningAbility, FActiveGameplayEffectHandle Handle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F50B8
		void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount); // Flags: Final|Native|Public 0x7FF4145F4FD8
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x30 (0xA8 - 0x78)
	class UAbilityTask_WaitGameplayEvent : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate EventReceived; // 0x78(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
		UAbilitySystemComponent OptionalExternalTarget; // 0x90(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayEvent");
			return ret;
		}

		UAbilityTask_WaitGameplayEvent WaitGameplayEvent(UGameplayAbility OwningAbility, FGameplayTag EventTag, AActor OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F5198
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayTag
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitGameplayTag : public UAbilityTask	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		UAbilitySystemComponent OptionalExternalTarget; // 0x80(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayTag");
			return ret;
		}

		void GameplayTagCallback(FGameplayTag tag, int32_t NewCount); // Flags: Native|Public 0x7FF4145F5278
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

		UAbilityTask_WaitGameplayTagAdded WaitGameplayTagAdd(UGameplayAbility OwningAbility, FGameplayTag tag, AActor InOptionalExternalTarget, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F5358
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

		UAbilityTask_WaitGameplayTagRemoved WaitGameplayTagRemove(UGameplayAbility OwningAbility, FGameplayTag tag, AActor InOptionalExternalTarget, bool OnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F5438
	};


	// Class GameplayAbilities.AbilityTask_WaitGameplayTagQuery
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0xE0 (0x158 - 0x78)
	class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask	
	{
	public:
		unsigned char UnknownData02_3[0xC0]; // 0x78(0xC0) UNKNOWN PROPERTY
		FMulticastInlineDelegate Triggered; // 0x138(0x10)
		UAbilitySystemComponent OptionalExternalTarget; // 0x148(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x150(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery");
			return ret;
		}

		UAbilityTask_WaitGameplayTagQuery WaitGameplayTagQuery(UGameplayAbility OwningAbility, FGameplayTagQuery TagQuery, AActor InOptionalExternalTarget, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F55F8
		void UpdateTargetTags(FGameplayTag tag, int32_t NewCount); // Flags: Final|Native|Protected 0x7FF4145F5518
	};


	// Class GameplayAbilities.AbilityTask_WaitInputPress
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitInputPress : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnPress; // 0x78(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitInputPress");
			return ret;
		}

		UAbilityTask_WaitInputPress WaitInputPress(UGameplayAbility OwningAbility, bool bTestAlreadyPressed); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F57B8
		void OnPressCallback(); // Flags: Final|Native|Public 0x7FF4145F56D8
	};


	// Class GameplayAbilities.AbilityTask_WaitInputRelease
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitInputRelease : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnRelease; // 0x78(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitInputRelease");
			return ret;
		}

		UAbilityTask_WaitInputRelease WaitInputRelease(UGameplayAbility OwningAbility, bool bTestAlreadyReleased); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F5978
		void OnReleaseCallback(); // Flags: Final|Native|Public 0x7FF4145F5898
	};


	// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UAbilityTask_WaitMovementModeChange : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnChange; // 0x78(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x88(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitMovementModeChange");
			return ret;
		}

		void OnMovementModeChange(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Public 0x7FF4145F5B38
		UAbilityTask_WaitMovementModeChange CreateWaitMovementModeChange(UGameplayAbility OwningAbility, TEnumAsByte NewMode); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F5A58
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

		UAbilityTask_WaitOverlap WaitForOverlap(UGameplayAbility OwningAbility); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F5CF8
		void OnHitCallback(UPrimitiveComponent HitComp, AActor OtherActor, UPrimitiveComponent OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Public|HasOutParms|HasDefaults 0x7FF4145F5C18
	};


	// Class GameplayAbilities.AbilityTask_WaitTargetData
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x40 (0xB8 - 0x78)
	class UAbilityTask_WaitTargetData : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate ValidData; // 0x78(0x10)
		FMulticastInlineDelegate Cancelled; // 0x88(0x10)
		UClass TargetClass; // 0x98(0x8)
		AGameplayAbilityTargetActor TargetActor; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitTargetData");
			return ret;
		}

		UAbilityTask_WaitTargetData WaitTargetDataUsingActor(UGameplayAbility OwningAbility, FName TaskInstanceName, TEnumAsByte ConfirmationType, AGameplayAbilityTargetActor TargetActor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F63F8
		UAbilityTask_WaitTargetData WaitTargetData(UGameplayAbility OwningAbility, FName TaskInstanceName, TEnumAsByte ConfirmationType, UClass Class); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F6318
		void OnTargetDataReplicatedCancelledCallback(); // Flags: Native|Public 0x7FF4145F6238
		void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag); // Flags: Native|Public|HasOutParms 0x7FF4145F6158
		void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data); // Flags: Native|Public|HasOutParms 0x7FF4145F6078
		void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data); // Flags: Native|Public|HasOutParms 0x7FF4145F5F98
		void FinishSpawningActor(UGameplayAbility OwningAbility, AGameplayAbilityTargetActor SpawnedActor); // Flags: Native|Public|BlueprintCallable 0x7FF4145F5EB8
		bool BeginSpawningActor(UGameplayAbility OwningAbility, UClass Class, AGameplayAbilityTargetActor& SpawnedActor); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4145F5DD8
	};


	// Class GameplayAbilities.AbilityTask_WaitVelocityChange
	// Inherited from UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAbilityTask_WaitVelocityChange : public UAbilityTask	
	{
	public:
		FMulticastInlineDelegate OnVelocityChage; // 0x78(0x10)
		TWeakObjectPtr CachedMovementComponent; // 0x88(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x90(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilityTask_WaitVelocityChange");
			return ret;
		}

		UAbilityTask_WaitVelocityChange CreateWaitVelocityChange(UGameplayAbility OwningAbility, FVector Direction, float MinimumMagnitude); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F64D8
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

		bool TargetDataHasOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145FB638
		bool TargetDataHasHitResult(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145FB558
		bool TargetDataHasEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145FB478
		bool TargetDataHasActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145FB398
		FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145FB2B8
		FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32_t StackCount); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145FB1D8
		FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float duration); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145FB0F8
		void SendGameplayEventToActor(AActor Actor, FGameplayTag EventTag, FGameplayEventData Payload); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145FB018
		bool RemoveLooseGameplayTags(AActor Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145FAF38
		bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145FAE58
		bool NotEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145FAD78
		bool NotEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145FAC98
		FGameplayEffectSpecHandle MakeSpecHandleByClass(UClass GameplayEffect, AActor Instigator, AActor EffectCauser, float Level); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145FABB8
		FGameplayEffectSpecHandle MakeSpecHandle(UGameplayEffect InGameplayEffect, AActor InInstigator, AActor InEffectCauser, float InLevel); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145FAAD8
		FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, AActor Instigator, AActor EffectCauser, UObject SourceObject, UPhysicalMaterial PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, USceneComponent TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145FA9F8
		FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, AActor FilterActor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145FA918
		bool IsValid(FGameplayAttribute Attribute); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145FA838
		bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145FA758
		bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145FA678
		bool IsGameplayAbilityActive(UGameplayAbility GameplayAbility); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145FA598
		bool HasHitResult(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145FA4B8
		FTransform GetTargetDataOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145FA3D8
		FTransform GetTargetDataEndPointTransform(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145FA2F8
		FVector GetTargetDataEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145FA218
		FVector GetOrigin(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145FA138
		float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145FA058
		FTransform GetInstigatorTransform(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145F9F78
		AActor GetInstigatorActor(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F9E98
		FHitResult GetHitResultFromTargetData(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F9DB8
		FHitResult GetHitResult(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F9CD8
		UGameplayEffectUIData GetGameplayEffectUIData(UClass EffectClass, UClass DataType); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F9BF8
		FGameplayTagContainer GetGameplayEffectGrantedTags(UClass EffectClass); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F9B18
		UGameplayEffect GetGameplayEffectFromActiveEffectHandle(FActiveGameplayEffectHandle& ActiveHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F9A38
		FGameplayTagContainer GetGameplayEffectAssetTags(UClass EffectClass); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F9958
		bool GetGameplayCueEndLocationAndNormal(AActor TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145F9878
		bool GetGameplayCueDirection(AActor TargetActor, FGameplayCueParameters Parameters, FVector& Direction); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145F9798
		UGameplayAbility GetGameplayAbilityFromSpecHandle(UAbilitySystemComponent AbilitySystem, FGameplayAbilitySpecHandle& AbilitySpecHandle, bool& bIsInstance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F96B8
		float GetFloatAttributeFromAbilitySystemComponent(UAbilitySystemComponent AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F95D8
		float GetFloatAttributeBaseFromAbilitySystemComponent(UAbilitySystemComponent AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F94F8
		float GetFloatAttributeBase(AActor Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F9418
		float GetFloatAttribute(AActor Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F9338
		FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F9258
		FString GetDebugStringFromGameplayAttribute(FGameplayAttribute& Attribute); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F9178
		int32_t GetDataCountFromTargetData(FGameplayAbilityTargetDataHandle& TargetData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F9098
		TArray GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F8FB8
		TArray GetAllActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F8ED8
		TArray GetActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F8DF8
		int32_t GetActorCount(FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F8D18
		AActor GetActorByIndex(FGameplayCueParameters Parameters, int32_t Index); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F8C38
		float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F8B58
		float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F8A78
		int32_t GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F8998
		int32_t GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F88B8
		float GetActiveGameplayEffectRemainingDuration(UObject WorldContextObject, FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F87D8
		float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F86F8
		FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F8618
		UAbilitySystemComponent GetAbilitySystemComponent(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F8538
		void ForwardGameplayCueToTarget(TScriptInterface TargetCueInterface, TEnumAsByte EventType, FGameplayCueParameters Parameters); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F8458
		FGameplayAbilityTargetDataHandle FilterTargetData(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F8378
		float EvaluateAttributeValueWithTagsAndBase(UAbilitySystemComponent AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F8298
		float EvaluateAttributeValueWithTags(UAbilitySystemComponent AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, bool& bSuccess); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F81B8
		bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F80D8
		bool EqualEqual_GameplayAbilitySpecHandle(FGameplayAbilitySpecHandle& A, FGameplayAbilitySpecHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F7FF8
		bool EqualEqual_ActiveGameplayEffectHandle(FActiveGameplayEffectHandle& A, FActiveGameplayEffectHandle& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F7F18
		void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4145F7E38
		bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F7D58
		bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F7C78
		bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F7B98
		UObject EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F7AB8
		AActor EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F79D8
		FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145F78F8
		AActor EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F7818
		FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F7738
		AActor EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F7658
		void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F7578
		bool DoesTargetDataContainActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, AActor Actor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F7498
		bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, FGameplayTagRequirements& SourceTagReqs, FGameplayTagRequirements& TargetTagReqs); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F73B8
		FGameplayEffectSpecHandle CloneSpecHandle(AActor InNewInstigator, AActor InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F72D8
		void BreakGameplayCueParameters(FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, AActor& Instigator, AActor& EffectCauser, UObject& SourceObject, UPhysicalMaterial& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, USceneComponent& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145F71F8
		FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F7118
		FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F7038
		FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, FGameplayAbilityTargetDataHandle& HandleToAdd); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145F6F58
		bool AddLooseGameplayTags(AActor Actor, FGameplayTagContainer& GameplayTags, bool bShouldReplicate); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145F6E78
		FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F6D98
		FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, UClass LinkedGameplayEffect); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F6CB8
		FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F6BD8
		FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F6AF8
		FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F6A18
		FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145F6938
		FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(FGameplayAbilityTargetingLocationInfo& SourceLocation, FGameplayAbilityTargetingLocationInfo& TargetLocation); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F6858
		FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(FHitResult& HitResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F6778
		FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray& ActorArray, bool OneTargetPerHandle); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145F6698
		FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145F65B8
	};


	// Class GameplayAbilities.AbilitySystemComponent
	// Inherited from UGameplayTasksComponent -> UActorComponent -> UObject
	// Size: 0x1120 (0x1238 - 0x118)
	class UAbilitySystemComponent : public UGameplayTasksComponent	
	{
	public:
		unsigned char UnknownData16_3[0x10]; // 0x118(0x10) UNKNOWN PROPERTY
		TArray DefaultStartingData; // 0x128(0x10)
		FName AffectedAnimInstanceTag; // 0x138(0x4)
		unsigned char UnknownData17_6[0x1A4]; // 0x13C(0x1A4) UNKNOWN PROPERTY
		float OutgoingDuration; // 0x2E0(0x4)
		float IncomingDuration; // 0x2E4(0x4)
		unsigned char UnknownData18_6[0x20]; // 0x2E8(0x20) UNKNOWN PROPERTY
		TArray ClientDebugStrings; // 0x308(0x10)
		TArray ServerDebugStrings; // 0x318(0x10)
		unsigned char UnknownData19_6[0x58]; // 0x328(0x58) UNKNOWN PROPERTY
		bool UserAbilityActivationInhibited; // 0x380(0x1)
		bool ReplicationProxyEnabled; // 0x381(0x1)
		bool bSuppressGrantAbility; // 0x382(0x1)
		bool bSuppressGameplayCues; // 0x383(0x1)
		unsigned char UnknownData20_6[0x4]; // 0x384(0x4) UNKNOWN PROPERTY
		TArray SpawnedTargetActors; // 0x388(0x10)
		unsigned char UnknownData21_6[0x28]; // 0x398(0x28) UNKNOWN PROPERTY
		AActor OwnerActor; // 0x3C0(0x8)
		AActor AvatarActor; // 0x3C8(0x8)
		unsigned char UnknownData22_6[0x10]; // 0x3D0(0x10) UNKNOWN PROPERTY
		FGameplayAbilitySpecContainer ActivatableAbilities; // 0x3E0(0x120)
		unsigned char UnknownData23_6[0x30]; // 0x500(0x30) UNKNOWN PROPERTY
		TArray AllReplicatedInstancedAbilities; // 0x530(0x10)
		unsigned char UnknownData24_6[0x220]; // 0x540(0x220) UNKNOWN PROPERTY
		FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x760(0x38)
		bool bCachedIsNetSimulated; // 0x798(0x1)
		bool bPendingMontageRep; // 0x799(0x1)
		unsigned char UnknownData25_6[0x6]; // 0x79A(0x6) UNKNOWN PROPERTY
		FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x7A0(0x28)
		unsigned char UnknownData26_6[0xA0]; // 0x7C8(0xA0) UNKNOWN PROPERTY
		FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x868(0x300)
		FActiveGameplayCueContainer ActiveGameplayCues; // 0xB68(0x128)
		FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xC90(0x128)
		unsigned char UnknownData27_6[0x128]; // 0xDB8(0x128) UNKNOWN PROPERTY
		TArray BlockedAbilityBindings; // 0xEE0(0x10)
		unsigned char UnknownData28_6[0x128]; // 0xEF0(0x128) UNKNOWN PROPERTY
		FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x1018(0x68)
		TArray SpawnedAttributes; // 0x1080(0x10)
		unsigned char UnknownData29_6[0x10]; // 0x1090(0x10) UNKNOWN PROPERTY
		FMinimalReplicationTagCountMap ReplicatedLooseTags; // 0x10A0(0x68)
		unsigned char UnknownData30_6[0x8]; // 0x1108(0x8) UNKNOWN PROPERTY
		FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1110(0x118)
		unsigned char UnknownData31_7[0x10]; // 0x1228(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.AbilitySystemComponent");
			return ret;
		}

		void UpdateActiveGameplayEffectSetByCallerMagnitudes(FActiveGameplayEffectHandle ActiveHandle, TMap& NewSetByCallerValues); // Flags: BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF411A19580
		void UpdateActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag SetByCallerTag, float NewValue); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF411A194A0
		bool TryActivateAbilityByClass(UClass InAbilityToActivate, bool bAllowRemoteActivation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411A193C0
		bool TryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411A192E0
		bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411A19200
		void TargetConfirm(); // Flags: Native|Public|BlueprintCallable 0x7FF411A19120
		void TargetCancel(); // Flags: Native|Public|BlueprintCallable 0x7FF411A19040
		void SetUserAbilityActivationInhibited(bool NewInhibit); // Flags: Native|Public|BlueprintCallable 0x7FF411A18F60
		void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF411A18E80
		void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF411A18DA0
		void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF411A18CC0
		void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF411A18BE0
		void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A18B00
		void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A18A20
		void ServerSetReplicatedEventWithPayload(TEnumAsByte EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A18880
		void ServerSetReplicatedEvent(TEnumAsByte EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A187A0
		void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A186C0
		void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A185E0
		void ServerPrintDebug_RequestWithStrings(TArray Strings); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A18500
		void ServerPrintDebug_Request(); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A18420
		void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF411A18340
		void ServerCurrentMontageSetPlayRate(UAnimSequenceBase ClientAnimation, float InPlayRate); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF411A18260
		void ServerCurrentMontageSetNextSectionName(UAnimSequenceBase ClientAnimation, float ClientPosition, FName SectionName, FName NextSectionName); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF411A18180
		void ServerCurrentMontageJumpToSectionName(UAnimSequenceBase ClientAnimation, FName SectionName); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF411A180A0
		void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF411A17FC0
		void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF411A17E20
		void RemoveActiveGameplayEffectBySourceEffect(UClass GameplayEffect, UAbilitySystemComponent InstigatorAbilitySystemComponent, int32_t StacksToRemove); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF411A17D40
		bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF411A17C60
		int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411A17B80
		int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411A17AA0
		int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411A179C0
		int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411A178E0
		void ReleaseInputID(int32_t InputID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411A17800
		void PressInputID(int32_t InputID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411A17720
		void OnSpawnedAttributesEndPlayed(AActor InActor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Public 0x7FF411A17640
		void OnRep_SpawnedAttributes(TArray& PreviousSpawnedAttributes); // Flags: Final|Native|Private|HasOutParms 0x7FF411A17560
		void OnRep_ServerDebugString(); // Flags: Native|Public 0x7FF411A17480
		void OnRep_ReplicatedAnimMontage(); // Flags: Native|Protected 0x7FF411A173A0
		void OnRep_OwningActor(); // Flags: Final|Native|Public 0x7FF411A172C0
		void OnRep_ClientDebugString(); // Flags: Native|Public 0x7FF411A171E0
		void OnRep_ActivateAbilities(); // Flags: Native|Protected 0x7FF411A17100
		void OnOwnerActorDestroyed(AActor InActor); // Flags: Final|Native|Public 0x7FF411A17020
		void OnAvatarActorDestroyed(AActor InActor); // Flags: Final|Native|Public 0x7FF4119F6F40
		void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F6E60
		void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F6D80
		void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F6CA0
		void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F6BC0
		void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F6AE0
		void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F6A00
		void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F6920
		void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F6780
		void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F66A0
		void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // Flags: Net|Native|Event|NetMulticast|Public 0x7FF4119F65C0
		FGameplayEffectSpecHandle MakeOutgoingSpec(UClass GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4119F64E0
		FGameplayEffectContextHandle MakeEffectContext(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4119F6400
		void K2_InitStats(UClass Attributes, UDataTable DataTable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4119F6320
		FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(UClass AbilityClass, int32_t Level, int32_t InputID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4119F6240
		FGameplayAbilitySpecHandle K2_GiveAbility(UClass AbilityClass, int32_t Level, int32_t InputID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4119F6160
		bool IsGameplayCueActive(FGameplayTag GameplayCueTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4119F6080
		void InputConfirm(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4119F5FA0
		void InputCancel(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4119F5EC0
		bool GetUserAbilityActivationInhibited(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4119F5DE0
		int32_t GetGameplayTagCount(FGameplayTag GameplayTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4119F5D00
		float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4119F5C20
		int32_t GetGameplayEffectCount_IfLoaded(TWeakObjectPtr SoftSourceGameplayEffect, UAbilitySystemComponent OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4119B5B40
		int32_t GetGameplayEffectCount(UClass SourceGameplayEffect, UAbilitySystemComponent OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4119B5A60
		float GetGameplayAttributeValue(FGameplayAttribute Attribute, bool& bFound); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4119B5980
		UAttributeSet GetAttributeSet(UClass AttributeSetClass); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF4119B58A0
		void GetAllAttributes(TArray& OutAttributes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4119B57C0
		void GetAllAbilities(TArray& OutAbilityHandles); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4119B56E0
		TArray GetActiveEffectsWithAllTags(FGameplayTagContainer Tags); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF4119B5600
		TArray GetActiveEffects(FGameplayEffectQuery& Query); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4119B5460
		void FindAllAbilitiesWithTags(TArray& OutAbilityHandles, FGameplayTagContainer Tags, bool bExactMatch); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4119B5380
		void FindAllAbilitiesWithInputID(TArray& OutAbilityHandles, int32_t InputID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4119B52A0
		void FindAllAbilitiesMatchingQuery(TArray& OutAbilityHandles, FGameplayTagQuery Query); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF4119B51C0
		void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF4119B50E0
		void ClientSetReplicatedEvent(TEnumAsByte EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF411994F98
		void ClientPrintDebug_Response(TArray Strings, int32_t GameFlags); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF411994EB8
		void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF411994DD8
		void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF411994BD0
		void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF411974AF0
		void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF411974A10
		void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF411974930
		void ClearAllAbilitiesWithInputID(int32_t InputID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF411974850
		void ClearAllAbilities(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF411974770
		void ClearAbility(FGameplayAbilitySpecHandle& Handle); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF411974690
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(UClass GameplayEffectClass, UAbilitySystemComponent Target, float Level, FGameplayEffectContextHandle Context); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4119745B0
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(UClass GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4119744D0
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent Target); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4119743F0
		FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411974310
		void AbilityConfirmOrCancel__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF411974230
		void AbilityAbilityKey__DelegateSignature(int32_t InputID); // Flags: MulticastDelegate|Public|Delegate 0x7FF411974150
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
		unsigned char UnknownData01_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

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
		unsigned char UnknownData07_6[0x28]; // 0x40(0x28) UNKNOWN PROPERTY
		bool bUseDebugTargetFromHud; // 0x68(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData09_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
		FName GameplayModEvaluationChannelAliases; // 0xC4(0x28)
		unsigned char UnknownData10_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		FSoftObjectPath GlobalCurveTableName; // 0xF0(0x18)
		UCurveTable GlobalCurveTable; // 0x108(0x8)
		FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x110(0x18)
		UDataTable GlobalAttributeMetaDataTable; // 0x128(0x8)
		FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x130(0x18)
		TArray GlobalAttributeSetDefaultsTableNames; // 0x148(0x10)
		TArray GlobalAttributeDefaultsTables; // 0x158(0x10)
		FSoftObjectPath GlobalGameplayCueManagerClass; // 0x168(0x18)
		FSoftObjectPath GlobalGameplayCueManagerName; // 0x180(0x18)
		TArray GameplayCueNotifyPaths; // 0x198(0x10)
		FSoftObjectPath GameplayTagResponseTableName; // 0x1A8(0x18)
		UGameplayTagReponseTable GameplayTagResponseTable; // 0x1C0(0x8)
		unsigned char UnknownData11_6[0x1]; // 0x1C8(0x1) UNKNOWN PROPERTY
		bool PredictTargetGameplayEffects; // 0x1C9(0x1)
		bool ReplicateActivationOwnedTags; // 0x1CA(0x1)
		unsigned char UnknownData12_6[0x5]; // 0x1CB(0x5) UNKNOWN PROPERTY
		UGameplayCueManager GlobalGameplayCueManager; // 0x1D0(0x8)
		unsigned char UnknownData13_7[0x90]; // 0x1D8(0x90) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x18]; // 0x338(0x18) UNKNOWN PROPERTY
		UAbilitySystemComponent AbilitySystemComponent; // 0x350(0x8)

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
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

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

		void RemoveGameplayCueOnActor(AActor Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145FB9B8
		FGameplayCueParameters MakeGameplayCueParametersFromHitResult(FHitResult& HitResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4145FB8D8
		void ExecuteGameplayCueOnActor(AActor Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145FB7F8
		void AddGameplayCueOnActor(AActor Target, FGameplayTag GameplayCueTag, FGameplayCueParameters& Parameters); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4145FB718
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

		void ForwardGameplayCueToParent(); // Flags: BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4145FBB78
		void BlueprintCustomHandler(TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF4145FBA98
	};


	// Class GameplayAbilities.GameplayCueManager
	// Inherited from UDataAsset -> UObject
	// Size: 0x290 (0x2C0 - 0x30)
	class UGameplayCueManager : public UDataAsset	
	{
	public:
		unsigned char UnknownData04_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x48(0x50)
		FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0x98(0x50)
		unsigned char UnknownData05_6[0x178]; // 0xE8(0x178) UNKNOWN PROPERTY
		TArray LoadedGameplayCueNotifyClasses; // 0x260(0x10)
		TArray GameplayCueClassesForPreallocation; // 0x270(0x10)
		TArray PendingExecuteCues; // 0x280(0x10)
		int32_t GameplayCueSendContextCount; // 0x290(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		TArray PreallocationInfoList_Internal; // 0x298(0x10)
		unsigned char UnknownData07_7[0x18]; // 0x2A8(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData04_6[0x3]; // 0x291(0x3) UNKNOWN PROPERTY
		float AutoDestroyDelay; // 0x294(0x4)
		bool WarnIfTimelineIsStillRunning; // 0x298(0x1)
		bool WarnIfLatentActionIsStillRunning; // 0x299(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x29A(0x2) UNKNOWN PROPERTY
		FGameplayTag GameplayCueTag; // 0x29C(0x4)
		FName GameplayCueName; // 0x2A0(0x4)
		bool bAutoAttachToOwner; // 0x2A4(0x1)
		bool IsOverride; // 0x2A5(0x1)
		bool bUniqueInstancePerInstigator; // 0x2A6(0x1)
		bool bUniqueInstancePerSourceObject; // 0x2A7(0x1)
		bool bAllowMultipleOnActiveEvents; // 0x2A8(0x1)
		bool bAllowMultipleWhileActiveEvents; // 0x2A9(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x2AA(0x2) UNKNOWN PROPERTY
		int32_t NumPreallocatedInstances; // 0x2AC(0x4)
		unsigned char UnknownData07_7[0x48]; // 0x2B0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_Actor");
			return ret;
		}

		bool WhileActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4145FC198
		bool OnRemove(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4145FC0B8
		void OnOwnerDestroyed(AActor DestroyedActor); // Flags: Native|Public 0x7FF4145FBFD8
		bool OnExecute(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4145FBEF8
		bool OnActive(AActor MyTarget, FGameplayCueParameters& Parameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4145FBE18
		void K2_HandleGameplayCue(AActor MyTarget, TEnumAsByte EventType, FGameplayCueParameters& Parameters); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4145FBD38
		void K2_EndGameplayCue(); // Flags: Native|Public|BlueprintCallable 0x7FF4145FBC58
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

		void OnBurst(AActor Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF4145FC278
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

		void OnBurst(AActor Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4145FC358
	};


	// Class GameplayAbilities.GameplayCueNotify_HitImpact
	// Inherited from UGameplayCueNotify_Static -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static	
	{
	public:
		USoundBase Sound; // 0x38(0x8)
		UParticleSystem ParticleSystem; // 0x40(0x8)

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
		unsigned char UnknownData01_7[0x8]; // 0xE88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayCueNotify_Looping");
			return ret;
		}

		void OnRemoval(AActor Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4145FC6D8
		void OnRecurring(AActor Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4145FC5F8
		void OnLoopingStart(AActor Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4145FC518
		void OnApplication(AActor Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4145FC438
	};


	// Class GameplayAbilities.GameplayCueSet
	// Inherited from UDataAsset -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UGameplayCueSet : public UDataAsset	
	{
	public:
		TArray GameplayCueData; // 0x30(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

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
		TArray RelevantAttributesToCapture; // 0x28(0x10)

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

		bool CanApplyGameplayEffect(UGameplayEffect GameplayEffect, FGameplayEffectSpec& Spec, UAbilitySystemComponent ASC); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF4145FC7B8
	};


	// Class GameplayAbilities.GameplayEffectExecutionCalculation
	// Inherited from UGameplayEffectCalculation -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation	
	{
	public:
		bool bRequiresPassedInTags; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayEffectExecutionCalculation");
			return ret;
		}

		void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF4145FC898
	};


	// Class GameplayAbilities.GameplayModMagnitudeCalculation
	// Inherited from UGameplayEffectCalculation -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation	
	{
	public:
		bool bAllowNonNetAuthorityDependencyRegistration; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayModMagnitudeCalculation");
			return ret;
		}

		float K2_GetCapturedAttributeMagnitude(FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF4145FD158
		FGameplayTagContainer GetTargetSpecTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145FD078
		FGameplayTagContainer GetTargetAggregatedTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF4145FCF98
		FGameplayTagContainer GetTargetActorTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145FCEB8
		FGameplayTagContainer GetSourceSpecTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145FCDD8
		FGameplayTagContainer GetSourceAggregatedTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF4145FCCF8
		FGameplayTagContainer GetSourceActorTags(FGameplayEffectSpec& EffectSpec); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145FCC18
		float GetSetByCallerMagnitudeByTag(FGameplayEffectSpec& EffectSpec, FGameplayTag& tag); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF4145FCB38
		float GetSetByCallerMagnitudeByName(FGameplayEffectSpec& EffectSpec, FName& MagnitudeName); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|Const 0x7FF4145FCA58
		float CalculateBaseMagnitude(FGameplayEffectSpec& Spec); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF4145FC978
	};


	// Class GameplayAbilities.GameplayTagReponseTable
	// Inherited from UDataAsset -> UObject
	// Size: 0x200 (0x230 - 0x30)
	class UGameplayTagReponseTable : public UDataAsset	
	{
	public:
		TArray Entries; // 0x30(0x10)
		unsigned char UnknownData01_7[0x1F0]; // 0x40(0x1F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.GameplayTagReponseTable");
			return ret;
		}

		void TagResponseEvent(FGameplayTag tag, int32_t NewCount, UAbilitySystemComponent ASC, int32_t idx); // Flags: Final|Native|Protected 0x7FF4145FD238
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
		TArray Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayAbilities.MovieSceneGameplayCueTrack");
			return ret;
		}

		void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145FD318
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
