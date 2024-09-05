#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoGameNative
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoGameNative.FortAutomationRpcManager_Juno
	// Inherited from UFortAutomationRpcManager -> UObject
	// Size: 0x50 (0xB8 - 0x68)
	class UFortAutomationRpcManager_Juno : public UFortAutomationRpcManager	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x68(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.FortAutomationRpcManager_Juno");
			return ret;
		}
	};


	// Class JunoGameNative.FortQueryGenerator_PointsOutsideVolume
	// Inherited from UEnvQueryGenerator_ProjectedPoints -> UEnvQueryGenerator -> UEnvQueryNode -> UObject
	// Size: 0x78 (0x100 - 0x88)
	class UFortQueryGenerator_PointsOutsideVolume : public UEnvQueryGenerator_ProjectedPoints	
	{
	public:
		FAIDataProviderFloatValue SpaceBetween; // 0x88(0x38)
		FAIDataProviderFloatValue NumberOfRingsAroundVolume; // 0xC0(0x38)
		UClass GenerateInVolume; // 0xF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.FortQueryGenerator_PointsOutsideVolume");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingTrackedActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBuildingTrackedActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingTrackedActorInterface");
			return ret;
		}

		bool ShouldBeTrackedByMetrics(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414C847F8
		int32_t GetNumberOfRelevantActors(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414C84718
		float GetNetRelevanceDistanceOverride(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414C84638
	};


	// Class JunoGameNative.JunoAbility_Gear
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB40 - 0xB40)
	class UJunoAbility_Gear : public UFortGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAbility_Gear");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAbility_Gear_Resurrect
	// Inherited from UJunoAbility_Gear -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB40 - 0xB40)
	class UJunoAbility_Gear_Resurrect : public UJunoAbility_Gear	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAbility_Gear_Resurrect");
			return ret;
		}

		void OnResurrectTriggered(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 0x7FF414C848D8
	};


	// Class JunoGameNative.JunoAbility_PlayerPushPhysicsObject
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x130 (0xC70 - 0xB40)
	class UJunoAbility_PlayerPushPhysicsObject : public UFortGameplayAbility	
	{
	public:
		EFortPhysicsSimSize MaxPhysicsObjectSizeToPush; // 0xB40(0x1)
		EFortPhysicsSimSize MinPhysicsObjectSizeToPush; // 0xB41(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xB42(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer NoTagsPusher; // 0xB48(0x20)
		FGameplayTagContainer NoTagsPushedObject; // 0xB68(0x20)
		UAnimMontage DefaultPushMontage; // 0xB88(0x8)
		TArray SpecializedPushMontages; // 0xB90(0x10)
		FGameplayTagQuery EnergyComponentQuery; // 0xBA0(0x48)
		FScalableFloat EnergyInitialCost; // 0xBE8(0x28)
		FScalableFloat EnergyDrainPerSecond; // 0xC10(0x28)
		bool bEnergyExhausted; // 0xC38(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xC39(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr CachedEnergyComponent; // 0xC3C(0x8)
		unsigned char UnknownData06_6[0xC]; // 0xC44(0xC) UNKNOWN PROPERTY
		TWeakObjectPtr TrackedObjectToPush; // 0xC50(0x8)
		EFortPhysicsSimSize TrackedObjectSimSize; // 0xC58(0x1)
		unsigned char UnknownData07_7[0x17]; // 0xC59(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject");
			return ret;
		}

		void StopUsingEnergy(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C84EF8
		void PotentiallyStartUsingEnergy(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C84E18
		void OnPlayerHit(AActor HitPlayer, AActor HitActor, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414C84D38
		void OnEnergyFullyRecharged(UFortComponent_Energy EnergyComponentRecharged); // Flags: Final|Native|Private 0x7FF414C84C58
		void OnEnergyDrained(UFortComponent_Energy EnergyComponentDrained); // Flags: Final|Native|Private 0x7FF414C84B78
		UAnimMontage GetMontageToPlay(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414C84A98
		void CancelPushingPhysicsObject(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C849B8
	};


	// Class JunoGameNative.JunoAccountItemDefinitionOverrideManager
	// Inherited from UObject
	// Size: 0x208 (0x230 - 0x28)
	class UJunoAccountItemDefinitionOverrideManager : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UFortHeroType JunoHeroDefinition; // 0x30(0x8)
		UDataTable DefaultCharacters; // 0x38(0x8)
		TMap PreviewActorClasses; // 0x40(0x50)
		TMap GameplayTagParentsToRemoveFromOverrides; // 0x90(0x50)
		TMap GameplayTagsToAdd; // 0xE0(0x50)
		TMap CosmeticsMarkupGameplayTagsToAllow; // 0x130(0x50)
		TSet CosmeticsProhibitedByHotfix; // 0x180(0x50)
		TMap Overrides; // 0x1D0(0x50)
		unsigned char UnknownData03_7[0x10]; // 0x220(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAccountItemDefinitionOverrideManager");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAccountItemOverrideDefinition
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UJunoAccountItemOverrideDefinition : public UPrimaryDataAsset	
	{
	public:
		FGameplayTagContainer GameplayTagsToAdd; // 0x30(0x20)
		TArray ItemVariantsOverride; // 0x50(0x10)
		bool bOverrideFrontendTransform; // 0x60(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		float FrontendPreviewScale; // 0x64(0x4)
		FVector FrontendPreviewPivotOffset; // 0x68(0x18)
		FRotator FrontendPreviewInitialRotation; // 0x80(0x18)
		TWeakObjectPtr PreviewActorClass; // 0x98(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAccountItemOverrideDefinition");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAthenaCharacterItemOverrideDefinition
	// Inherited from UJunoAccountItemOverrideDefinition -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x98 (0x150 - 0xB8)
	class UJunoAthenaCharacterItemOverrideDefinition : public UJunoAccountItemOverrideDefinition	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr BaseAthenaCharacterItemDefinition; // 0xC8(0x20)
		TWeakObjectPtr AssembledMeshSchema; // 0xE8(0x20)
		TWeakObjectPtr LowDetailsAssembledMeshSchema; // 0x108(0x20)
		TWeakObjectPtr FrontendAnimMontageIdleOverride; // 0x128(0x20)
		float PreviewPawnScale; // 0x148(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAthenaCharacterItemOverrideDefinition");
			return ret;
		}

		void SetBaseAthenaCharacterItemDefinition(TWeakObjectPtr InBaseAthenaCharacterItemDefinition); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C84FD8
	};


	// Class JunoGameNative.JunoAthenaDanceItemOverrideDefinition
	// Inherited from UJunoAccountItemOverrideDefinition -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x118 (0x1D0 - 0xB8)
	class UJunoAthenaDanceItemOverrideDefinition : public UJunoAccountItemOverrideDefinition	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr BaseAthenaDanceItemDefinition; // 0xC0(0x20)
		TWeakObjectPtr Animation; // 0xE0(0x20)
		TWeakObjectPtr AnimationFemaleOverride; // 0x100(0x20)
		TArray AnimationOverrides; // 0x120(0x10)
		bool bOverridePlayRandomSectionByName; // 0x130(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
		TArray PlayRandomSectionByName; // 0x138(0x10)
		TWeakObjectPtr FrontEndAnimation; // 0x148(0x20)
		TWeakObjectPtr FrontEndAnimationFemaleOverride; // 0x168(0x20)
		TArray FrontEndAnimationOverrides; // 0x188(0x10)
		bool bOverridePreviewDuration; // 0x198(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		int32_t PreviewLoops; // 0x19C(0x4)
		float PreviewLength; // 0x1A0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FVector GroupEmotePositionOffset; // 0x1A8(0x18)
		float GroupEmotePositionOffsetTolerance; // 0x1C0(0x4)
		float GroupEmoteFollowDistance; // 0x1C4(0x4)
		float WalkForwardSpeed; // 0x1C8(0x4)
		unsigned char UnknownData09_7[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAthenaDanceItemOverrideDefinition");
			return ret;
		}

		void SetBaseAthenaDanceItemDefinition(TWeakObjectPtr InBaseAthenaDanceItemDefinition); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C850B8
	};


	// Class JunoGameNative.JunoActionConfig
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoActionConfig : public UObject	
	{
	public:
		UClass JunoActionClass; // 0x28(0x8)
		EJunoActionExecutionConfig JunoActionExecutionConfig; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActionConfig");
			return ret;
		}
	};


	// Class JunoGameNative.JunoActionConfig_LoadAndSetStaticMesh
	// Inherited from UJunoActionConfig -> UObject
	// Size: 0x30 (0x68 - 0x38)
	class UJunoActionConfig_LoadAndSetStaticMesh : public UJunoActionConfig	
	{
	public:
		TWeakObjectPtr SoftStaticMesh; // 0x38(0x20)
		unsigned char UnknownData01_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActionConfig_LoadAndSetStaticMesh");
			return ret;
		}
	};


	// Class JunoGameNative.JunoActionConfig_StaticMesh
	// Inherited from UJunoActionConfig -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoActionConfig_StaticMesh : public UJunoActionConfig	
	{
	public:
		UStaticMesh StaticMesh; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActionConfig_StaticMesh");
			return ret;
		}
	};


	// Class JunoGameNative.JunoActorAttributeOverrideComponent
	// Inherited from UFortBuildingActorTagComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoActorAttributeOverrideComponent : public UFortBuildingActorTagComponent	
	{
	public:
		FDataRegistryType AttributeOverrideDataRegistry; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x14]; // 0xA4(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActorAttributeOverrideComponent");
			return ret;
		}

		void SetupHealthAttributeSet(); // Flags: Final|Native|Protected 0x7FF414C85358
		FName GetSecondaryLootTier(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C85278
		FName GetPrimaryLootTier(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C85198
	};


	// Class JunoGameNative.JunoActorInstancesReportHandler
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UJunoActorInstancesReportHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActorInstancesReportHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBasePFWPersistenceFeatureData
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UJunoBasePFWPersistenceFeatureData : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		bool bTriggerErrorOnSetDirtyAfterCheckIn; // 0x38(0x1)
		unsigned char UnknownData04_6[0x17]; // 0x39(0x17) UNKNOWN PROPERTY
		bool bDirty; // 0x50(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBasePFWPersistenceFeatureData");
			return ret;
		}

		void OnPersistentDataModified(); // Flags: RequiredAPI|Native|Protected|BlueprintCallable 0x7FF414C85438
	};


	// Class JunoGameNative.JunoActorWorldLocationPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x50 (0xA8 - 0x58)
	class UJunoActorWorldLocationPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoActorLocationSaveData ActorWorldLocationSaveData; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActorWorldLocationPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoActorWorldLocationPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoActorWorldLocationPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActorWorldLocationPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBasePFWContainer
	// Inherited from UPersistenceFrameworkContainer -> UObject
	// Size: 0xA0 (0x1E0 - 0x140)
	class UJunoBasePFWContainer : public UPersistenceFrameworkContainer	
	{
	public:
		unsigned char UnknownData01_1[0xA0]; // 0x140(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBasePFWContainer");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBasePFWPersistenceFeatureDataContainer
	// Inherited from UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoBasePFWPersistenceFeatureDataContainer : public UJunoBasePFWContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBasePFWPersistenceFeatureDataContainer");
			return ret;
		}
	};


	// Class JunoGameNative.JunoActorWorldLocationPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoActorWorldLocationPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActorWorldLocationPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAIBotEvaluator_Leash
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x170 (0x218 - 0xA8)
	class UJunoAIBotEvaluator_Leash : public UFortAthenaAIBotEvaluator	
	{
	public:
		FGameplayTagQuery DisengageTokenQuery; // 0xA8(0x48)
		FValueOrBBKey_Float DisengageTimeOutsideLeashMin; // 0xF0(0xC)
		FValueOrBBKey_Float DisengageTimeOutsideLeashMax; // 0xFC(0xC)
		FValueOrBBKey_Float DisengageTimeSinceLastRangedWeaponFireOnTarget; // 0x108(0xC)
		unsigned char UnknownData04_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery CombatPositionQuery; // 0x118(0x48)
		FValueOrBBKey_Float ReengageDistance; // 0x160(0xC)
		unsigned char UnknownData05_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery KitingTokenQuery; // 0x170(0x48)
		FValueOrBBKey_Float GiveUpWaitTime; // 0x1B8(0xC)
		FName TargetActorKeyName; // 0x1C4(0x4)
		FName TargetInsideLeashKeyName; // 0x1C8(0x4)
		FName TargetLeashExitTimeKeyName; // 0x1CC(0x4)
		FName LastRangedWeaponFireAbilityTimeKeyName; // 0x1D0(0x4)
		FName HasLoSOnThreatKeyName; // 0x1D4(0x4)
		FName BehaviorStartTimeKeyName; // 0x1D8(0x4)
		FName TokenMovementStateKeyName; // 0x1DC(0x4)
		FName FallbackMovementStateKeyName; // 0x1E0(0x4)
		unsigned char UnknownData06_6[0x1C]; // 0x1E4(0x1C) UNKNOWN PROPERTY
		APawn CachedPawnPtr; // 0x200(0x8)
		unsigned char UnknownData07_7[0x10]; // 0x208(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAIBotEvaluator_Leash");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAIBotEvaluator_OffhandWeapon
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UJunoAIBotEvaluator_OffhandWeapon : public UFortAthenaAIBotEvaluator	
	{
	public:
		unsigned char UnknownData03_3[0x20]; // 0xA8(0x20) UNKNOWN PROPERTY
		FGameplayTag TorchWeaponTag; // 0xC8(0x4)
		FGameplayTag OffhandWeaponToEquipTag; // 0xCC(0x4)
		TArray ExecutionStatusesToCheckedToHolsterKeyNames; // 0xD0(0x10)
		unsigned char UnknownData04_6[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
		TArray BoolsToCheckToHolsterKeyNames; // 0xF0(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x100(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAIBotEvaluator_OffhandWeapon");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAIPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoAIPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAIPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAIPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoAIPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAIPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAlterationCraftingComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJunoAlterationCraftingComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr CachedCraftingObjectComponent; // 0xB8(0x8)
		FDataRegistryType WeaponEssenceDataRegistryType; // 0xC0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAlterationCraftingComponent");
			return ret;
		}

		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414C856D8
		bool OnCheckValidItemType(AFortPlayerController Instigator); // Flags: Final|Native|Private 0x7FF414C855F8
		void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414C85518
	};


	// Class JunoGameNative.JunoAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAnalytics");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAnimNotifyState_QueueInput
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UJunoAnimNotifyState_QueueInput : public UAnimNotifyState	
	{
	public:
		bool bQueueMantisInput; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayEventTagsToQueue; // 0x38(0x20)
		FGameplayTagContainer AbilityTagsToRemove; // 0x58(0x20)
		FGameplayTagContainer AbilityTagsToAdd; // 0x78(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAnimNotifyState_QueueInput");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAnimNotifyState_MakeInterruptible
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UJunoAnimNotifyState_MakeInterruptible : public UAnimNotifyState	
	{
	public:
		FGameplayTagContainer AbilityTagsToRemove; // 0x30(0x20)
		FGameplayTagContainer AbilityTagsToAdd; // 0x50(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAnimNotifyState_MakeInterruptible");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAsyncAction_WaitForEventRouter
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UJunoAsyncAction_WaitForEventRouter : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnGameplayEventRouterAvailable; // 0x30(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter");
			return ret;
		}

		UJunoAsyncAction_WaitForEventRouter WaitForEventRouter(AActor ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414065E48
		void onGameplayEventRouterAvailable__DelegateSignature(UGameplayEventRouterComponent EventRouter); // Flags: MulticastDelegate|Public|Delegate 0x7FF414065D68
	};


	// Class JunoGameNative.JunoAsyncAction_WaitForRootPlayspace
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UJunoAsyncAction_WaitForRootPlayspace : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnReady; // 0x30(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAsyncAction_WaitForRootPlayspace");
			return ret;
		}

		UJunoAsyncAction_WaitForRootPlayspace RootPlayspaceReadyAsync(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C857B8
	};


	// Class JunoGameNative.JunoPersistenceAssetType
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoPersistenceAssetType : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistenceAssetType");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBlueprintPersistenceAssetType
	// Inherited from UJunoPersistenceAssetType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoBlueprintPersistenceAssetType : public UJunoPersistenceAssetType	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBlueprintPersistenceAssetType");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBoneMaskInstanceDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoBoneMaskInstanceDataAsset : public UDataAsset	
	{
	public:
		UBoneMaskDefinitionDataAsset BodyPartsDefinition; // 0x30(0x8)
		TArray Data; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBoneMaskInstanceDataAsset");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBTService_Leash
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x78 (0xE8 - 0x70)
	class UJunoBTService_Leash : public UBTService	
	{
	public:
		FGameplayTagQuery KitingTokenQuery; // 0x70(0x48)
		FName BehaviorStartTimeKeyName; // 0xB8(0x4)
		FName PlayspaceVolumeActorKeyName; // 0xBC(0x4)
		FName TokenMovementStateKeyName; // 0xC0(0x4)
		FName FallbackMovementStateKeyName; // 0xC4(0x4)
		FName FallbackDestinationKeyName; // 0xC8(0x4)
		FName TargetActorKeyName; // 0xCC(0x4)
		FName HasLoSOnThreatKeyName; // 0xD0(0x4)
		unsigned char UnknownData01_7[0x14]; // 0xD4(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBTService_Leash");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuilderToolSelectedActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBuilderToolSelectedActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuilderToolSelectedActorInterface");
			return ret;
		}

		void ReceiveSpawnedByBuilderTool(AJunoBuilderTool BuilderTool, UJunoBuilderToolInteractionBehavior Behavior); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C85978
		void ReceiveSelectionSpawnedByBuilderTool(AJunoBuilderTool BuilderTool, UJunoBuilderToolInteractionBehavior Behavior, FJunoBuilderToolSelectionSpawnParams& SelectionSpawnParameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C85898
	};


	// Class JunoGameNative.JunoBuildingAccountItemDefBase
	// Inherited from UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x4C0 - 0x4A0)
	class UJunoBuildingAccountItemDefBase : public UAthenaCosmeticItemDefinition	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x4A0(0x8) UNKNOWN PROPERTY
		float JunoBuildingFrontendPreviewScale; // 0x4A8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4AC(0x4) UNKNOWN PROPERTY
		FVector2D JunoBuildingFrontendFramingCenterOffsetRatio; // 0x4B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingAccountItemDefBase");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingSetAccountItemDefinition
	// Inherited from UJunoBuildingAccountItemDefBase -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x4E8 - 0x4C0)
	class UJunoBuildingSetAccountItemDefinition : public UJunoBuildingAccountItemDefBase	
	{
	public:
		float FoundationPiecesHeightToShow; // 0x4C0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4C4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr BuildingActorClassToPreview; // 0x4C8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingSetAccountItemDefinition");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingPropAccountItemDefinition
	// Inherited from UJunoBuildingAccountItemDefBase -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x4E0 - 0x4C0)
	class UJunoBuildingPropAccountItemDefinition : public UJunoBuildingAccountItemDefBase	
	{
	public:
		TWeakObjectPtr BuildingActorClassToPreview; // 0x4C0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPropAccountItemDefinition");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingConnectivityBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBuildingConnectivityBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary");
			return ret;
		}

		TArray GetKnobs(FJunoBuildingConnectionPointsResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C85CF8
		TArray GetAtomModelAssetUserData(UObject Object); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C85C18
		void DebugDrawConnections(UObject WorldContextObject, FJunoBuildingConnectionPointsResult& Candidates, FJunoBuildingConnectionPointsResult& Targets, FJunoBuildingConnection& ChosenConnection, TArray& Connections); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C85B38
		void DebugDrawConnectionLocations(UObject WorldContextObject, FJunoBuildingConnection& Connection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C85A58
	};


	// Class JunoGameNative.JunoBuildingCosmeticsSettings
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UJunoBuildingCosmeticsSettings : public UPrimaryDataAsset	
	{
	public:
		TWeakObjectPtr JunoBuildingSetPreviewActorClass; // 0x30(0x20)
		TWeakObjectPtr JunoBuildingPropPreviewActorClass; // 0x50(0x20)
		TWeakObjectPtr JunoBuildingSetPreviewPrefabAssetClass; // 0x70(0x20)
		TWeakObjectPtr JunoBuildingPropPreviewPrefabAssetClass; // 0x90(0x20)
		FGameplayTag BlueprintCategoryTag; // 0xB0(0x4)
		FGameplayTag BuildingPartSubCategoryTag; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingCosmeticsSettings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingItemPreviewActor
	// Inherited from AFortItemPreviewOffPawnActor -> AFortItemPreviewSingleAngleActor -> AFortItemPreviewActor -> AActor -> UObject
	// Size: 0x0 (0x4D0 - 0x4D0)
	class AJunoBuildingItemPreviewActor : public AFortItemPreviewOffPawnActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingItemPreviewActor");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingPreviewPrefabAsset
	// Inherited from AActor -> UObject
	// Size: 0xF0 (0x380 - 0x290)
	class AJunoBuildingPreviewPrefabAsset : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		FFortUICameraFrameTargetBounds CameraFrameTargetBounds; // 0x2A0(0x20)
		float ZoomedInBoundsScale; // 0x2C0(0x4)
		unsigned char UnknownData03_7[0xBC]; // 0x2C4(0xBC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPreviewPrefabAsset");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingProp
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xA0 (0xC78 - 0xBD8)
	class AJunoBuildingProp : public ABuildingProp	
	{
	public:
		unsigned char UnknownData02_3[0x70]; // 0xBD8(0x70) UNKNOWN PROPERTY
		UJunoHarvestingComponent HarvestingComponent; // 0xC48(0x8)
		UJunoPhysicsPersistenceComponent PhysicsPersistenceComponent; // 0xC50(0x8)
		unsigned char UnknownData03_6[0x10]; // 0xC58(0x10) UNKNOWN PROPERTY
		UJunoGeometryCollectionAssemblerComponent GeometryCollectionAssemblerComponent; // 0xC68(0x8)
		UItemDefinitionBase AssociatedItem; // 0xC70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingProp");
			return ret;
		}

		UItemDefinitionBase GetAssociatedItem(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C85DD8
	};


	// Class JunoGameNative.JunoBuildingPropTree
	// Inherited from AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0xC80 - 0xC78)
	class AJunoBuildingPropTree : public AJunoBuildingProp	
	{
	public:
		UActorComponent LifeCycleComponent; // 0xC78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPropTree");
			return ret;
		}

		bool BlueprintCanDieInLifecyclePhase(char CurrentPhaseIndex); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 0x7FF414C85EB8
	};


	// Class JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCameraMode_OrbitCam_BPFunctions : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions");
			return ret;
		}

		void UpdateViewTargetValues(FTViewTarget& InViewTarget, AActor InViewTargetActor, double InInteriorFOV, float InCameraPitchMin, float InCameraPitchMax, bool bInAllowChangingHidePercentByPitch, double InCurrentFOV, double& OutCurrentFOV, double& OutVTVelocity, FVector& OutVelocityDirection, FVector& OutVTVelDir, FVector& OutViewTargetBoxExtent, FVector& OutProbeCastOrigin, double& OutVTVelocityDotWithCam, double& OutCameraPitch, double& OutNormalizedCameraPitch, float& OutHidePawnPenetrationPercent); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C87498
		void UpdateProbeChecks(UObject InWorldContextObject, AActor InViewTargetActor, FVector& InProbeCastOrigin, FName& InTagIgnoredActors, FVector& InViewTargetBoxExtent, double InVerticalProbeLength, int32_t InVerticalProbeTickSkip, int32_t InFrontalProbeTickSkip, double InFrontalAngledProbeAngle, double InFrontalAngledProbeLength, int32_t InVerticalProbeCurTickNum, int32_t InFrontalProbeCurTickNum, int32_t& OutVerticalProbeCurTickNum, int32_t& OutFrontalProbeCurTickNum, bool& bOutVerticalProbeBlocked, float& OutVerticalHitDistance, bool& bOutFrontalProbeBlocked, float& OutFrontalHitDistance); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C873B8
		FBox RebuildCameraLocationErrorConstraintBox(FBox CameraLocationErrorConstraintBox); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C872D8
		double GetVelocityWeight(double InVelocityAddDistanceThreshold, double InVTVelocity, double InFastVelocityThreshold); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C871F8
		double GetVelocityDistanceAdd(double InWeight, double InAddMaxDistance); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C87118
		double GetProbeWeight(double InHitDistance, double InProbeLength, bool bInProbeBlocked); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C87038
		double GetFOVAndDistanceInterpSpeed(double InConfinedSpaceWeight, double InMinInterpSpeed, double InMaxInterpSpeed); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C86F58
		double GetDesiredFOV(double InVelocityWeight, double InConfinedSpaceWeight, double InVelocityAddMaxFOV, double InExteriorFOV, double InInteriorFOV); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C86E78
		double GetDesiredForwardDistance(UObject InWorldContextObject, double InBuildingPreviewHeightAdditionalZoom, double InBuildingPreviewSizeScalar, FFloatRange InPitchCameraForwardDistanceManager, bool bInIsTargetInConversation, UCurveFloat InCurvePitchDistance, double InNormalizedCameraPitch, double InCameraPitch, double InCameraPitchMax, bool bInIsTargetStrafing, bool bInIsTargetBuilding, double InExteriorCameraSpaceForwardDistance, double InExteriorCameraSpaceForwardDistanceStrafing, bool bInCameraAdjustsWhenStrafing, bool bIsBuildPreviewMode, UCurveFloat InBuildPreviewBoundsToForwardDistanceScale, FBox InBuildPreviewLocalBounds, double InConfinedSpaceWeight, double bInteriorCameraSpaceForwardDistance, double InVelocityAddMaxDistance, double InFastVelocityThreshold, double InVTVelocity, double InVelocityAddDistanceThreshold, double InCurrentBuildingScalarDistanceOffset, double& OutCurrentBuildingScalarDistanceOffset); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C86D98
		double GetConfinedSpaceWeight(double InVerticalHitDistance, double InVerticalProbeLength, bool bInVerticalProbeBlocked, double InFrontalHitDistance, double InFrontalProbeLength, bool bInFrontalProbeBlocked); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C86CB8
		FInterpOffset ComputeViewTargetSpaceViewOffset(bool bIsTargetInConversation, FInterpOffset& ViewTargetSpaceViewOffset, UMaterialParameterCollection Collection, double DeltaTime, double ViewTargetOffsetInterpSpeed, FVector& DefaultTargetViewOffset, AActor ViewTarget, FTViewTarget& OutVT); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C86BD8
		FInterpOffset ComputeVelocityBasedCameraSpaceViewOffset(bool bUseVelocityViewTargetLeading, FInterpOffset& CameraSpaceViewOffset, FVector& CurVelOffset); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C86AF8
		double ComputeHidePawnPenetrationPercent(double StartingHidePawnPenetrationPercent, bool bAllowChangingHidePercentByPitch, double ChangingHideDefaultValue, double ChangingHidePitchedValue, double NormalizedCameraPitch, double ChangingHidePitchedThreshold); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C86A18
		double ComputeFOV(bool bCameraAdjustsWhenStrafing, double FOV, double ExteriorFOV, double StrafingFOV, double DeltaTime, double StrafingTransitionInterpSpeed, bool bIsTargetStrafing); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C86938
		FVector ComputeCurVelOffset(bool bUseVelocityViewTargetLeading, bool bIsTargetStrafing, bool bIsTargetAttackingMelee, FVector& CurVelOffset, double DeltaTime, double MaxVelocityCamOffset, double VTVelocityDotWithCam, double DotParallelThreshold, double VelOffsetSpeed, FVector& VTVelDir, FTViewTarget& OutVT, UCurveFloat Curve_VelocityInterpSpeed, double VTVelocity); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C86858
		double ComputeCurrentFOV(double CurrentFOV, double DesiredFOV, double DeltaTime, double FOVAndDistanceInterpSpeed); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C86778
		double ComputeCurGroundedBlendInterp(bool bIsTargetFalling, double CurGroundedBlendInterp, double DeltaTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C86698
		double ComputeCurFollowBlendInterp(bool bIsTargetAttackingMelee, double CurFollowBlendInterp, double DeltaTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C865B8
		FVector ComputeCurCamSpaceViewOffset(FVector& CurCamSpaceViewOffset, float DeltaTime, bool bIsTargetInConversation, FInterpOffset& CameraSpaceViewOffset, float InteriorCamZOffset, float ConfinedWieghtSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C864D8
		FInterpOffset ComputeCameraSpaceViewOffset(FInterpOffset& CameraSpaceViewOffset, FVector& CurCamSpaceViewOffset); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C863F8
		double ComputeCameraSpaceForwardDistance(double CameraSpaceForwardDistance, double DesiredForwardDistance, double DeltaTime); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C86318
		FVector ComputeCameraOriginInterpSpeed(bool bIsTargetAttackingMelee, bool IsTargetFalling, double NonAttackingFollowInterp, double AttackingFollowInterp, double CurFollowBlendInterp, double NonGroundedZInterp, double GroundedZInterp, double CurGroundedBlendInterp); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C86238
		void ComputeBuildingPreviewSizeScalar(double& InBuildingPreviewSizeScalar, AActor InViewTargetActor, bool& bInIsTargetBuilding, UMaterialParameterCollection InCollection, double& InBuildingSizeMin, double& InBuildingSizeMax, double& OutBuildingPreviewSizeScalar); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C86158
		FVector ComputeBasePlatformVelocity(UCharacterMovementComponent CharacterMovementComponent); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C86078
		void CheckViewTargetTags(AActor InViewTargetActor, bool& bOutIsTargetBuilding, bool& bOutIsTargetFalling, bool& bOutIsTargetInConversation, bool& bOutIsTargetAttackingMelee, bool& bOutIsTargetStrafing); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C85F98
	};


	// Class JunoGameNative.JunoCampActor
	// Inherited from AActor -> UObject
	// Size: 0xE8 (0x378 - 0x290)
	class AJunoCampActor : public AActor	
	{
	public:
		unsigned char UnknownData05_3[0x40]; // 0x290(0x40) UNKNOWN PROPERTY
		FGameplayTag StaticGameplayTag; // 0x2D0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer DefaultPersistentTags; // 0x2D8(0x20)
		int32_t CampUpgradeRewardFilters; // 0x2F8(0x4)
		unsigned char UnknownData07_6[0x2C]; // 0x2FC(0x2C) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x328(0x10)
		unsigned char UnknownData08_6[0x8]; // 0x338(0x8) UNKNOWN PROPERTY
		UOverlapComponent BoundsComponent; // 0x340(0x8)
		TWeakObjectPtr CampCenterCache; // 0x348(0x8)
		EJunoBiome CampBiome; // 0x350(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer OwnedGameplayTags; // 0x358(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampActor");
			return ret;
		}

		void RemovePersistentTags(FGameplayTagContainer& TagsToRemove); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C87B98
		void RemoveGameplayTag(FGameplayTag& TagToRemove); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C87AB8
		FGameplayTag GetStaticGameplayTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C879D8
		void GetPersistentTags(FGameplayTagContainer& PersistentTags); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C878F8
		FGameplayTagContainer GetOwnedGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C87818
		FGameplayTag GetCampTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C87738
		void ApplyPersistentTags(FGameplayTagContainer& TagsToApply); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C87658
		void AddGameplayTag(FGameplayTag& TagToAdd); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C87578
	};


	// Class JunoGameNative.JunoCampCenterComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x1B0 - 0xA0)
	class UJunoCampCenterComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoCampAwesomeLevelChangedDelegate; // 0xA8(0x10)
		FMulticastInlineDelegate OnJunoCampAwesomePointModificationDelegate; // 0xB8(0x10)
		FMulticastInlineDelegate OnJunoCampNonResourceRequirementsMetChanged; // 0xC8(0x10)
		unsigned char UnknownData06_6[0x30]; // 0xD8(0x30) UNKNOWN PROPERTY
		UClass CampActorClassToSpawn; // 0x108(0x8)
		FGameplayTag CampCenterDestructionDeathReasonTag; // 0x110(0x4)
		bool bForceCampCreation; // 0x114(0x1)
		bool bCreatePermanentCamp; // 0x115(0x1)
		bool bUseAlternateCampCreationFlow; // 0x116(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x117(0x1) UNKNOWN PROPERTY
		UJunoAsyncAction_WaitForEventRouter WaitForEventRouterAction; // 0x118(0x8)
		FGuid LinkedCampActorID; // 0x120(0x10)
		bool bCampCreationFlowTriggered; // 0x130(0x1)
		unsigned char UnknownData08_6[0x17]; // 0x131(0x17) UNKNOWN PROPERTY
		TWeakObjectPtr CampActorCache; // 0x148(0x8)
		unsigned char UnknownData09_7[0x60]; // 0x150(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampCenterComponent");
			return ret;
		}

		void OnNonResourceRequirementsChanged(FJunoEvent_NonResourceRequirementsMetChanged& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C87FF8
		void OnCampAwesomePointModification(FJunoEvent_CampAwesomePointsModified& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C87F18
		void OnCampAwesomeLevelChanged(FJunoEvent_CampAwesomeLevelChanged& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C87E38
		void NotifyOwnerPlacedByBuilderTool(AFortPlayerController FortPC); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C87D58
		void HandleSmartObjectEvent(FSmartObjectEventData& SmartObjectEventData, AActor Actor); // Flags: Final|Native|Private|HasOutParms 0x7FF414C87C78
	};


	// Class JunoGameNative.JunoCampComponentBase
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoCampComponentBase : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampComponentBase");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMarkerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UJunoMarkerComponent : public UActorComponent	
	{
	public:
		FJunoMarker Settings; // 0xA0(0xC0)
		bool bShouldCreateMarkerOnStart; // 0x160(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x161(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMarkerComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCampMarkerComponent
	// Inherited from UJunoMarkerComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x178 - 0x178)
	class UJunoCampMarkerComponent : public UJunoMarkerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampMarkerComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCampMembershipActorComponent
	// Inherited from UFortAthenaTrackableAIObjectComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x168 - 0xE0)
	class UJunoCampMembershipActorComponent : public UFortAthenaTrackableAIObjectComponent	
	{
	public:
		FMulticastInlineDelegate OnJunoCampMembershipChanged; // 0xE0(0x10)
		unsigned char UnknownData02_6[0x18]; // 0xF0(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr BoundCamp; // 0x108(0x8)
		unsigned char UnknownData03_6[0x30]; // 0x110(0x30) UNKNOWN PROPERTY
		FScalableFloat ToleranceForMovementUpdates; // 0x140(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampMembershipActorComponent");
			return ret;
		}

		void OnRep_BoundCamp(); // Flags: Final|Native|Private 0x7FF414C88DF8
		bool HasCampAtLocation(UObject WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C88D18
		bool HasCampAtBounds(UObject WorldContextObject, FBox& Bounds); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C88C38
		void HandleBoundCampEndPlayEvent(AActor InOwner, TEnumAsByte EndPlayReason); // Flags: Final|Native|Private 0x7FF414C88B58
		UActorComponent GetBoundComponent(UClass ComponentClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C88A78
		AJunoCampActor GetBoundCamp(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C88998
		UActorComponent FindOrCreateCampMembershipComponentAndReturnComponent(UClass ComponentClass, AActor Owner); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414C888B8
		UJunoCampMembershipActorComponent FindOrCreateCampMembershipActorComponentOnActor(AActor Owner); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414C887D8
		UActorComponent FindCampMembershipComponentAndReturnComponent(UClass ComponentClass, AActor Owner); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C886F8
		UJunoCampMembershipActorComponent FindCampMembershipActorComponentOnActor(AActor Owner); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C88618
		AJunoCampActor FindBindableLocalCampForLocation(UObject WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C88538
		AJunoCampActor FindBindableLocalCampForArea(AActor Actor, FBox& AreaBox); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C88458
		UActorComponent FindBindableLocalCampForActorAndReturnComponent(UClass ComponentClass, AActor Actor); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414C88378
		AJunoCampActor FindBindableLocalCampForActor(AActor Actor); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414C88298
		UActorComponent FindBindableLocalCampAtLocationAndReturnComponent(UClass ComponentClass, UObject WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C881B8
		void AttemptToBindToCamp(); // Flags: Final|Native|Private 0x7FF414C880D8
	};


	// Class JunoGameNative.JunoCampPersistenceComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UJunoCampPersistenceComponent : public UJunoCampComponentBase	
	{
	public:
		unsigned char UnknownData03_3[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY
		FAwesomeLevelSaveData AwesomeLevelSaveData; // 0xC0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FAICampManagementSaveData AICampManagementSaveData; // 0xC8(0x20)
		FNamedPOISaveData NamedPOISaveData; // 0xE8(0xE0)
		unsigned char UnknownData05_7[0x18]; // 0x1C8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampPersistenceComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCampPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoCampPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCampPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoCampPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCampRecruitmentComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB8 (0x158 - 0xA0)
	class UJunoCampRecruitmentComponent : public UJunoCampComponentBase	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY
		TArray ActiveNPCEntries; // 0xE8(0x10)
		TArray ActiveCreatureEntries; // 0xF8(0x10)
		unsigned char UnknownData03_7[0x50]; // 0x108(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampRecruitmentComponent");
			return ret;
		}

		TArray GetActiveNPCEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C88FB8
		TArray GetActiveCreatureEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C88ED8
	};


	// Class JunoGameNative.JunoCampRecruitmentObjectComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UJunoCampRecruitmentObjectComponent : public UGameFrameworkComponent	
	{
	public:
		int32_t AcceptedPawnTypes; // 0xA0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoRecruitmentObjectAssignedChangedDelegate; // 0xA8(0x10)
		unsigned char UnknownData05_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoRecruitmentObjectEnableChangeDelegate; // 0xD0(0x10)
		FMulticastInlineDelegate OnJunoRecruitmentObjectAssignedAISpawnedDelegate; // 0xE0(0x10)
		FMulticastInlineDelegate OnJunoRecruitmentObjectAssignedAIDespawnedDelegate; // 0xF0(0x10)
		bool bIsEnabled; // 0x100(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FJunoRecruitmentObjectAssignedData CachedAssignedData; // 0x108(0x78)
		unsigned char UnknownData07_7[0x60]; // 0x180(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampRecruitmentObjectComponent");
			return ret;
		}

		void OnRep_bIsEnabled(); // Flags: Final|Native|Protected 0x7FF414C89F78
		void OnRep_AssignedData(); // Flags: Final|Native|Protected 0x7FF414C89E98
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C89DB8
		bool IsAssignedToPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C89CD8
		bool IsAssignedToNPC(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C89BF8
		bool IsAssignedToCreature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C89B18
		bool IsAssignedToAI(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C89A38
		void HandleOnEmptyRecrutmentObjectInteracted(AFortPlayerController InteractingController); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C89958
		void HandleDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF414C89878
		FJunoRecruitmentObjectAssignedData GetAssignedData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C89798
		bool CostlyFindAssignableNPCs(TArray& OutAssignableNPCs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C896B8
		bool CostlyFindAssignableCreatures(TArray& OutAssignableCreatures); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C895D8
		bool CanBeAssignedToPlayers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C894F8
		bool CanBeAssignedToNPCs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C89418
		bool CanBeAssignedToCreatures(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C89338
		void AssignToPlayer(AFortPlayerController PlayerController, bool bCheckForDuplicateRecruitmentObjects); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C89258
		bool AssignToCreature(FGameplayTag& UniqueAIIdentifier, bool bCheckForDuplicateRecruitmentObjects, FText CustomName); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C89178
		void AssignedActorSpawnLocationOverride(FVector& OutSpawnLocation); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF414C89098
	};


	// Class JunoGameNative.JunoCampRemovalStatusComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJunoCampRemovalStatusComponent : public UJunoCampComponentBase	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		FScalableFloat SoftRemovalCampComponentUpdateRate; // 0xB0(0x28)
		unsigned char UnknownData04_6[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
		FJunoCampRemovalStatusData CampRemovalStatusData; // 0xE0(0xC)
		unsigned char UnknownData05_7[0xC]; // 0xEC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampRemovalStatusComponent");
			return ret;
		}

		void OnRep_CampRemovalStatusData(); // Flags: Final|Native|Private 0x7FF414C8A058
	};


	// Class JunoGameNative.JunoCaveContainerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCaveContainerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCaveContainerInterface");
			return ret;
		}

		void GetCaveEntrances(TArray& Transforms); // Flags: Native|Public|HasOutParms|Const 0x7FF414C8A138
	};


	// Class JunoGameNative.JunoChaosAudioGameStateComponent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x2C0 (0x360 - 0xA0)
	class UJunoChaosAudioGameStateComponent : public UFortGameStateComponent	
	{
	public:
		UPhysicalMaterial FallbackPhysicalMaterial; // 0xA0(0x8)
		FName CollisionEventSizeParamName; // 0xA8(0x4)
		FName CollisionTriggerUpdateParamName; // 0xAC(0x4)
		TWeakObjectPtr Collision_Loop; // 0xB0(0x20)
		FScalableFloat CollisionMassToSize; // 0xD0(0x28)
		FScalableFloat CollisionVolumeMultiplier; // 0xF8(0x28)
		TMap CollisionMaterials; // 0x120(0x50)
		FName BreakEventSizeParamName; // 0x170(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Break_Group_Default; // 0x178(0x20)
		TMap BreakGroupMaterialMap; // 0x198(0x50)
		FScalableFloat BreakMassToSize; // 0x1E8(0x28)
		FScalableFloat BreakVolumeMultiplier; // 0x210(0x28)
		TMap BreakMaterials; // 0x238(0x50)
		TMap CollisionSoundMap; // 0x288(0x50)
		TMap BreakSoundMap; // 0x2D8(0x50)
		unsigned char UnknownData03_7[0x38]; // 0x328(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoChaosAudioGameStateComponent");
			return ret;
		}

		void UnSubscribeToChaosEventRelayEvents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8A918
		void SubscribeToChaosEventRelayEvents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8A838
		void OnSoundCollisionEvents(TArray& SoundCollisionEvents); // Flags: Final|Native|Private|HasOutParms 0x7FF414C8A758
		void OnSoundBreakEvents(TArray& SoundBreakEvents); // Flags: Final|Native|Private|HasOutParms 0x7FF414C8A678
		void OnActiveSoundCollisionEventsUpdated(TArray& SoundCollisionEvents); // Flags: Final|Native|Private|HasOutParms 0x7FF414C8A598
		void OnActiveSoundCollisionEventSoundFinished(UAudioComponent Component); // Flags: Final|Native|Private 0x7FF414C8A4B8
		void OnActiveSoundBreakEventsUpdated(TArray& SoundBreakEvents); // Flags: Final|Native|Private|HasOutParms 0x7FF414C8A3D8
		void OnActiveSoundBreakEventSoundFinished(UAudioComponent Component); // Flags: Final|Native|Private 0x7FF414C8A2F8
		USoundBase GetSingleChaosEventSound(TMap ChaosEventMaterials, UPhysicalMaterial Material, char EventSize); // Flags: Final|Native|Private 0x7FF414C8A218
	};


	// Class JunoGameNative.JunoCheatProfilerSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x80 (0xC0 - 0x40)
	class UJunoCheatProfilerSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x80]; // 0x40(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCheatProfilerSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoClosedDoorNavArea
	// Inherited from UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UJunoClosedDoorNavArea : public UNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClosedDoorNavArea");
			return ret;
		}
	};


	// Class JunoGameNative.JunoClusterUnionComponent
	// Inherited from UClusterUnionComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x820 - 0x710)
	class UJunoClusterUnionComponent : public UClusterUnionComponent	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x710(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyOnRigidStateChanged; // 0x720(0x10)
		unsigned char UnknownData03_7[0xF0]; // 0x730(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClusterUnionComponent");
			return ret;
		}

		void IgnoreReadinessSystems(bool bIgnore); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C8A9F8
	};


	// Class JunoGameNative.JunoComponent_HealthIndicator
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UJunoComponent_HealthIndicator : public UPawnComponent	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY
		float Health; // 0xC0(0x4)
		float MaxHealth; // 0xC4(0x4)
		FVector AttachOffset; // 0xC8(0x18)
		unsigned char UnknownData03_7[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoComponent_HealthIndicator");
			return ret;
		}

		void OnServerPawnHealthChanged(); // Flags: Final|Native|Protected 0x7FF414C8AC98
		void OnRep_MaxHealth(); // Flags: Final|Native|Protected 0x7FF414C8ABB8
		void OnRep_Health(); // Flags: Final|Native|Protected 0x7FF414C8AAD8
	};


	// Class JunoGameNative.JunoConnectableActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoConnectableActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectableActorInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoControlChannelActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoControlChannelActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControlChannelActorInterface");
			return ret;
		}

		FJunoActionChannelInfo GetSubscribingChannelInfo(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414C8B018
		FJunoActionChannelInfo GetBroadcastingChannelInfo(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414C8AF38
		void ChangeSubscribingChannelTag(int32_t NewChannelIndex, bool bIsOn); // Flags: Event|Public|BlueprintEvent 0x7FF414C8AE58
		void ChangeBroadcastingChannelTag(int32_t NewChannelIndex, bool bIsOn); // Flags: Event|Public|BlueprintEvent 0x7FF414C8AD78
	};


	// Class JunoGameNative.JunoControlChannelComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UJunoControlChannelComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnDetachedFromClusterUnion; // 0xA0(0x10)
		FMulticastInlineDelegate OnJunoChannelValueReceived; // 0xB0(0x10)
		unsigned char UnknownData02_6[0x68]; // 0xC0(0x68) UNKNOWN PROPERTY
		AJunoClusterUnionActor SourceClusterUnionActor; // 0x128(0x8)
		unsigned char UnknownData03_7[0x68]; // 0x130(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControlChannelComponent");
			return ret;
		}

		void UnsubscribeFromUniversal(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C8B9B8
		void UnsubscribeFromChannel(FGameplayTag InChannelTag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C8B8D8
		void UnsubscribeFromAllChannels(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C8B7F8
		void SubscribeToChannel(FGameplayTag InChannelTag, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C8B718
		void SetChannelValue(FGameplayTag InChannelTag, float ChannelValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C8B638
		void OnRep_SourceClusterUnionActor(); // Flags: Final|Native|Private 0x7FF414C8B558
		void OnDetached(); // Flags: Final|Native|Private 0x7FF414C8B478
		void OnAttached(FGraphIslandHandle& IslandHandle); // Flags: Final|Native|Private|HasOutParms 0x7FF414C8B398
		float GetCombinedChannelValue(FGameplayTagContainer InChannelTagContainer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8B2B8
		float GetChannelValue(FGameplayTag InChannelTag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8B1D8
		void ChangeChannelSubscription(FGameplayTag OldChannel, FGameplayTag NewChannel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C8B0F8
	};


	// Class JunoGameNative.JunoControllerComponent_ActiveEffects
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UJunoControllerComponent_ActiveEffects : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_ActiveEffects");
			return ret;
		}

		void ApplyBuffsFromSaveDataToSelf(TArray& SavedBuffs); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C8BA98
	};


	// Class JunoGameNative.JunoControllerComponent_AFKHandler
	// Inherited from UFortControllerComponent_AFKHandler -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x140 - 0xD0)
	class UJunoControllerComponent_AFKHandler : public UFortControllerComponent_AFKHandler	
	{
	public:
		UDataTable AFKEventsDataTable; // 0xD0(0x8)
		unsigned char UnknownData01_7[0x68]; // 0xD8(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_AFKHandler");
			return ret;
		}

		void OnPlayerStateRemoved(APlayerState RemovedPlayerState); // Flags: Final|Native|Protected 0x7FF414C8BC58
		void OnPlayerStateAdded(APlayerState AddedPlayerState); // Flags: Final|Native|Protected 0x7FF414C8BB78
	};


	// Class JunoGameNative.JunoControllerComponent_Indicators
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE0 (0x188 - 0xA8)
	class UJunoControllerComponent_Indicators : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		float ShowDistance; // 0xB8(0x4)
		float HideDistance; // 0xBC(0x4)
		float BuildingShowDistance; // 0xC0(0x4)
		float BuildingHideDistance; // 0xC4(0x4)
		unsigned char UnknownData06_6[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY
		FGameplayTag HealthIndicatorTag; // 0xD8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TSet VisiblePawnsCache; // 0xE0(0x50)
		TArray QueryToPawnEntries; // 0x130(0x10)
		unsigned char UnknownData08_6[0x30]; // 0x140(0x30) UNKNOWN PROPERTY
		float BuildingHealthBarDisplayMaxDuration; // 0x170(0x4)
		TWeakObjectPtr JunoSingleHealthbarActor; // 0x174(0x8)
		unsigned char UnknownData09_7[0xC]; // 0x17C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_Indicators");
			return ret;
		}

		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn InstigatedBy, AActor DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414C8BE18
		void OnAnyFortPawnDestroyed(AActor InActor); // Flags: Final|Native|Private 0x7FF414C8BD38
	};


	// Class JunoGameNative.JunoControllerComponent_MapMarker
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UJunoControllerComponent_MapMarker : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0xA8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_MapMarker");
			return ret;
		}

		void ServerCustomizeMarker(FGuid Guid, FJunoMarker NewMarker, FText DisplayName); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults 0x7FF414C8C0B8
		void ClientRequestCustomization(FGuid Guid, FJunoMarker NewMarker, FText DisplayName, EJunoBiome Biome); // Flags: Net|NetReliableNative|Event|Public|HasDefaults|NetClient 0x7FF414C8BFD8
		void ClientNotifyCustomizationResult(bool bSuccess); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414C8BEF8
	};


	// Class JunoGameNative.JunoControllerComponent_ProfanityCheck
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UJunoControllerComponent_ProfanityCheck : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0xA8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_ProfanityCheck");
			return ret;
		}
	};


	// Class JunoGameNative.JunoControllerComponent_SocialSim
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UJunoControllerComponent_SocialSim : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_SocialSim");
			return ret;
		}

		void Server_TriggerVillageSelfDestruct(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414C8C358
		void Server_TriggerAwesomeLevelChange(AFortPlayerController TriggeringPlayer); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414C8C278
		void OnJunoPlayerPersistenceDataAvailable(FUniqueNetIdRepl& UniquePlayerId, UJunoPlayerPersistenceComponent PlayerPersistenceComponent); // Flags: Final|Native|Private|HasOutParms 0x7FF414C8C198
	};


	// Class JunoGameNative.JunoCraftingAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCraftingAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCraftingAnalytics");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCraftingGameplayAbility
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB40 - 0xB40)
	class UJunoCraftingGameplayAbility : public UFortGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCraftingGameplayAbility");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventoryComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x270 (0x310 - 0xA0)
	class UJunoInventoryComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData05_3[0x40]; // 0xA0(0x40) UNKNOWN PROPERTY
		FJunoInventoryConfig InventoryConfig; // 0xE0(0x18)
		FName InventoryLootTierGroup; // 0xF8(0x4)
		bool bShouldDropContentsOnOwnerDeath; // 0xFC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xFD(0x3) UNKNOWN PROPERTY
		float LootTossSpeed; // 0x100(0x4)
		float LootTossAngle; // 0x104(0x4)
		FVector LootTossOffset; // 0x108(0x18)
		FJunoInventoryHandle InventoryHandle; // 0x120(0x24)
		unsigned char UnknownData07_6[0x4]; // 0x144(0x4) UNKNOWN PROPERTY
		TMap ItemSlotGroups; // 0x148(0x50)
		FJunoReplicatedItemSlotList ReplicatedItemSlotData; // 0x198(0x128)
		FMulticastInlineDelegate OnInventoryChangedEvent; // 0x2C0(0x10)
		unsigned char UnknownData08_6[0x8]; // 0x2D0(0x8) UNKNOWN PROPERTY
		TArray SelectedItemGroupSlots; // 0x2D8(0x10)
		unsigned char UnknownData09_7[0x28]; // 0x2E8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryComponent");
			return ret;
		}

		void UseOffHandDurability(float DurabilityPerUse); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8D238
		bool TryEquippingGear(UFortItem ItemToEquip); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8D158
		void ServerTakeItem(FJunoTakeItemRequest Request); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF414C8D078
		void ServerSortInventory(FJunoSortInventoryRequest Request); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF414C8CF98
		void ServerMoveAllItemsPossible(UJunoInventoryComponent SourceInventoryComponent, UJunoInventoryComponent DestinationInventoryComponent, TArray SourceGroupTags, TArray DestinationGroupTags); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 0x7FF414C8CEB8
		void ServerMoveAllItemsOfType(UJunoInventoryComponent SourceInventoryComponent, UJunoInventoryComponent DestinationInventoryComponent, TArray SourceGroupTags, TArray DestinationGroupTags, UItemDefinitionBase ItemType); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 0x7FF414C8CDD8
		void ServerMoveAllItemsAlreadyInDestination(UJunoInventoryComponent SourceInventoryComponent, UJunoInventoryComponent DestinationInventoryComponent, TArray SourceGroupTags, TArray DestinationGroupTags); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 0x7FF414C8CCF8
		void ServerMergeAllItemsPossible(AActor TargetInventoryActor, FGameplayTag GroupTag); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF414C8CC18
		void ServerAttemptItemTransfer(FJunoItemTransferRequest Request); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414C8CB38
		void ServerAttemptItemMerge(FJunoItemSlot SourceItemSlot, FJunoItemSlot DestinationItemSlot, AActor SourceInventoryActor, AActor DestinationInventoryActor, int32_t Count); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414C8CA58
		bool RemoveItemFromInventory(FGuid ItemGuid, int32_t Count); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414C8C978
		void OnRep_InventoryHandle(); // Flags: Final|Native|Protected 0x7FF414C8C898
		void OnOwningBuildingActorKilled(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414C8C7B8
		UFortItem GetOffhandItem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C8C6D8
		TArray GetInventoryItemsInGroups(TArray& Groups); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C8C5F8
		TArray GetInventoryItems(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8C518
		UFortItem AddItemToInventory(UFortItemDefinition ItemDefinition, int32_t Count); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8C438
	};


	// Class JunoGameNative.JunoCraftingInventoryComponent
	// Inherited from UJunoInventoryComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x310 - 0x310)
	class UJunoCraftingInventoryComponent : public UJunoInventoryComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCraftingInventoryComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCraftingLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCraftingLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCraftingLibrary");
			return ret;
		}

		bool UnlockRandomRecipeFromKnowledgeBundleTable(AFortPlayerController PC, UDataTable DataTable); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414C8D938
		FCraftingMultiKey MakePerPlayerCraftingKey(AActor Instigator); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C8D858
		FText MakeDeterministicCraftingFormulaDisplayNameText(UDataTable DataTable, FName RowName, FString DisplayName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C8D778
		int32_t GetRuneTier(UFortAlterationItemDefinition RuneItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C8D698
		FName GetRuneMinorCategory(UFortAlterationItemDefinition RuneItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C8D5B8
		FName GetRuneMajorCategory(UFortAlterationItemDefinition RuneItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C8D4D8
		FGameplayTag GetRuneFullCategory(UFortAlterationItemDefinition RuneItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C8D3F8
		TArray FindRecipesCraftableFrom(UObject WorldContextObject, TArray& Ingredients); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C8D318
	};


	// Class JunoGameNative.JunoDataRegistryPersistenceAssetType
	// Inherited from UJunoPersistenceAssetType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoDataRegistryPersistenceAssetType : public UJunoPersistenceAssetType	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDataRegistryPersistenceAssetType");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDataTablePersistenceAssetType
	// Inherited from UJunoPersistenceAssetType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoDataTablePersistenceAssetType : public UJunoPersistenceAssetType	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDataTablePersistenceAssetType");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDeleteActionsReportHandler
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoDeleteActionsReportHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDeleteActionsReportHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDeltasSaveHandler
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UJunoDeltasSaveHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x110]; // 0x28(0x110) UNKNOWN PROPERTY
		UDeltaFileSaveHandler SaveHandler; // 0x138(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDeltasSaveHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDeprecatedPersistentClasses
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoDeprecatedPersistentClasses : public UObject	
	{
	public:
		TArray DeprecatedPersistentClassPaths; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDeprecatedPersistentClasses");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDestructionBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoDestructionBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDestructionBlueprintLibrary");
			return ret;
		}

		void SetGeometryCollectionSourceFromAtomModel(UGeometryCollection GeometryCollection, UAtomModel AtomModel, FName SelectionSetFilter); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8DBD8
		void SetGeometryCollectionMaterialForInstancedMeshes(UGeometryCollection GeometryCollection, UMaterialInterface OpaqueMaterial, UMaterialInterface TransparentMaterial, UMaterialInterface GlitterMaterial, UMaterialInterface OpalMaterial, UMaterialInterface InternalGlowMaterial); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8DAF8
		TArray GetGeometryCollectionSource(UAtomModel AtomModel, FName SelectionSetFilter); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8DA18
	};


	// Class JunoGameNative.JunoDumpWorldPersistentContents
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoDumpWorldPersistentContents : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDumpWorldPersistentContents");
			return ret;
		}
	};


	// Class JunoGameNative.JunoEncounterCheatInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoEncounterCheatInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoEncounterCheatInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoEssenceLevelComponent
	// Inherited from UFortWeaponComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoEssenceLevelComponent : public UFortWeaponComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoEssenceLevelComponent");
			return ret;
		}

		void OnEquip(AFortWeapon Weapon); // Flags: Final|Native|Protected 0x7FF414C8DCB8
	};


	// Class JunoGameNative.JunoEventLimiterInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoEventLimiterInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoEventLimiterInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoEventRouterLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoEventRouterLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoEventRouterLibrary");
			return ret;
		}

		UGameplayEventRouterComponent GetGameplayEventRouter(AActor ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C8DD98
	};


	// Class JunoGameNative.JunoExampleMacroGenerated_CheatTestSetup
	// Inherited from UPFWCheatTestSetup -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UJunoExampleMacroGenerated_CheatTestSetup : public UPFWCheatTestSetup	
	{
	public:
		unsigned char UnknownData02_3[0x38]; // 0x30(0x38) UNKNOWN PROPERTY
		UJunoExample_InGameClass InGameClass; // 0x68(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoExampleMacroGenerated_CheatTestSetup");
			return ret;
		}
	};


	// Class JunoGameNative.JunoExampleMacroGenerated_Container
	// Inherited from UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoExampleMacroGenerated_Container : public UJunoBasePFWContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoExampleMacroGenerated_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoExample_CheatTestSetup
	// Inherited from UPFWCheatTestSetup -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UJunoExample_CheatTestSetup : public UPFWCheatTestSetup	
	{
	public:
		unsigned char UnknownData02_3[0x38]; // 0x30(0x38) UNKNOWN PROPERTY
		UJunoExample_InGameClass InGameClass; // 0x68(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoExample_CheatTestSetup");
			return ret;
		}
	};


	// Class JunoGameNative.JunoExample_Container
	// Inherited from UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x8 (0x1E8 - 0x1E0)
	class UJunoExample_Container : public UJunoBasePFWContainer	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x1E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoExample_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoExample_InGameClass
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoExample_InGameClass : public UObject	
	{
	public:
		int32_t PersistentData; // 0x28(0x4)
		int32_t TransientData; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoExample_InGameClass");
			return ret;
		}
	};


	// Class JunoGameNative.JunoExample_Module
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoExample_Module : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoExample_Module");
			return ret;
		}
	};


	// Class JunoGameNative.JunoFilteredEventContextCollector
	// Inherited from UFilteredEventContextCollectorBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoFilteredEventContextCollector : public UFilteredEventContextCollectorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFilteredEventContextCollector");
			return ret;
		}
	};


	// Class JunoGameNative.JunoFogOfWarPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoFogOfWarPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFogOfWarPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoFogOfWarPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoFogOfWarPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoFreeBuildBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoFreeBuildBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFreeBuildBlueprintLibrary");
			return ret;
		}

		bool IsPlayerAllowedToFly(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8E2D8
		bool IsItemSpawnerEnabled(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8E1F8
		bool IsFreeBuildEnabled(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8E118
		bool IsFreeBuildCostFilteringEnabled(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8E038
		TArray GetFreeBuildSpawnableItems(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8DF58
		UFortItemDefinition GetFreeBuildSpawnableItemDefinition(UObject WorldContextObject, FName& Name); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C8DE78
	};


	// Class JunoGameNative.JunoFreeBuildComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UJunoFreeBuildComponent : public UGameFrameworkComponent	
	{
	public:
		FDataRegistryType SpawnableItemsRegistryType; // 0xA0(0x4)
		bool bIsFreeBuildEnabled; // 0xA4(0x1)
		bool bIsItemSpawnerEnabled; // 0xA5(0x1)
		bool bIsPlayerAllowedToFly; // 0xA6(0x1)
		bool bIsFreeBuildCostFilteringEnabled; // 0xA7(0x1)
		bool bWasFreeBuildEverEnabled; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x3F]; // 0xA9(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFreeBuildComponent");
			return ret;
		}

		bool WasFreeBuildEverEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8ED58
		void OnRep_WasFreeBuildEverEnabled(); // Flags: Final|Native|Private 0x7FF414C8EC78
		void OnRep_IsFreeBuildEnabled(); // Flags: Final|Native|Private 0x7FF414C8EB98
		void OnRep_AnyFreeBuildFlag(); // Flags: Final|Native|Private 0x7FF414C8EAB8
		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414C8E9D8
		bool IsPlayerAllowedToFly(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8E8F8
		bool IsItemSpawnerEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8E818
		bool IsFreeBuildEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8E738
		bool IsFreeBuildCostFilteringEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8E658
		TArray GetSpawnableItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8E578
		void EnableFreeBuild(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8E498
		void DisableFreeBuild(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8E3B8
	};


	// Class JunoGameNative.JunoFreeBuildPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x28 (0x80 - 0x58)
	class UJunoFreeBuildPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x58(0x20) UNKNOWN PROPERTY
		FJunoFreeBuildSaveData FreeBuildSaveData; // 0x78(0x2)
		unsigned char UnknownData03_7[0x6]; // 0x7A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoFreeBuildPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoFreeBuildPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFreeBuildPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoFreeBuildPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoFreeBuildPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGameStateComponent_GameEventStream
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x150 (0x1F0 - 0xA0)
	class UJunoGameStateComponent_GameEventStream : public UGameStateComponent	
	{
	public:
		int32_t MaxGameEventEntries; // 0xA0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FJunoGameEventsFastArray GameEventEntries; // 0xA8(0x148)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_GameEventStream");
			return ret;
		}

		void AddGameEventEntry(FText& GameEventText, FUniqueNetIdRepl& TargetPlayerId); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C8EE38
	};


	// Class JunoGameNative.JunoGameStateComponent_WorldReactionsManager
	// Inherited from UFortGameStateComponent_WorldReactionsManager -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x288 - 0x238)
	class UJunoGameStateComponent_WorldReactionsManager : public UFortGameStateComponent_WorldReactionsManager	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x238(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_WorldReactionsManager");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGameStateSettings
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoGameStateSettings : public UGameStateComponent	
	{
	public:
		UJunoRuntimeSettings PreOverrideRuntimeSettings; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateSettings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoRuntimeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UJunoRuntimeSettings : public UDeveloperSettings	
	{
	public:
		bool bPawnsUseProbeCollision; // 0x30(0x1)
		bool bCharacterBasedMovementIgnorePhysicsBase; // 0x31(0x1)
		bool bCharacterStayBasedInAir; // 0x32(0x1)
		bool bCharacterBaseOnAttachmentRoot; // 0x33(0x1)
		bool bBuoyancyEnabled; // 0x34(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRuntimeSettings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGameStateTemperatureComponent
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UJunoGameStateTemperatureComponent : public UGameStateComponent	
	{
	public:
		TMap TemperatureToFloatMap; // 0xA0(0x50)
		TMap TemperatureThresholdsMap; // 0xF0(0x50)
		FFloatRange TemperatureRange; // 0x140(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x150(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateTemperatureComponent");
			return ret;
		}

		float TemperatureToFloat(FGameplayTag& Temperature); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C8F1B8
		TArray GetTemperatureRanges(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8F0D8
		float GetMinimumTemperature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8EFF8
		float GetMaximumTemperature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8EF18
	};


	// Class JunoGameNative.JunoGameStateWeatherComponent
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJunoGameStateWeatherComponent : public UGameStateComponent	
	{
	public:
		UDataTable SeasonTable; // 0xA0(0x8)
		UClass LocalizedWeatherStateSubclass; // 0xA8(0x8)
		unsigned char UnknownData02_6[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		UJunoPlayspacePersistenceFeatureHelper WeatherPersistenceFeatureHelper; // 0xB8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateWeatherComponent");
			return ret;
		}

		void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase, FJunoWeatherLocation OptionalLocation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C8FA78
		void TransitionWeatherNow(FName OptionalLocation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8F998
		void SetAutoTransitioning(bool bAutoTransitionWeather); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C8F8B8
		void OnWeatherPhaseChanged(UJunoWeatherStateComponent WeatherState); // Flags: Final|Native|Private 0x7FF414C8F7D8
		void OnNextWeatherQueueChanged(UJunoWeatherStateComponent WeatherState); // Flags: Final|Native|Private 0x7FF414C8F6F8
		bool IsAutoTransitioning(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8F618
		void HandleWeatherStatesSetup(TArray& WeatherStates); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C8F538
		TArray GetWeatherStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8F458
		void ForceWeatherState(FName NewWeatherType, FName OptionalLocation); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C8F378
		UJunoWeatherStateComponent FindWeatherState(FJunoWeatherLocation& Location); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C8F298
	};


	// Class JunoGameNative.JunoGeneratePersistenceAssetsReportCommandlet
	// Inherited from UCommandlet -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UJunoGeneratePersistenceAssetsReportCommandlet : public UCommandlet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGeneratePersistenceAssetsReportCommandlet");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGeometryCollectionAssemblerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x1A0 (0x240 - 0xA0)
	class UJunoGeometryCollectionAssemblerComponent : public UActorComponent	
	{
	public:
		float AssemblyRatioInterpSpeed; // 0xA0(0x4)
		float DestroyComponentAfterAssemblyDelay; // 0xA4(0x4)
		EJunoGeometryCollectionAssemblerDurationType DurationType; // 0xA8(0x4)
		float LayerHeight; // 0xAC(0x4)
		int32_t LayerCount; // 0xB0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FScalableFloat TimeToAssemble; // 0xB8(0x28)
		FScalableFloat SingleGeometryTimeToAssemble; // 0xE0(0x28)
		FScalableFloat DisassembledZDistance; // 0x108(0x28)
		FScalableFloat DisassembledZDistanceRandomRatio; // 0x130(0x28)
		FScalableFloat DisassembledRotationAmount; // 0x158(0x28)
		bool bFreeMemoryWhenNotAnimating; // 0x180(0x1)
		bool bDestroyComponentOnAssemblyComplete; // 0x181(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x182(0x6) UNKNOWN PROPERTY
		TMap GeometryCollectionInfos; // 0x188(0x50)
		FMulticastInlineDelegate OnAssemblyVisualsAnimationStart; // 0x1D8(0x10)
		FMulticastInlineDelegate OnAssemblyVisualsAnimationUpdated; // 0x1E8(0x10)
		FMulticastInlineDelegate OnAssemblyVisualsAnimationEnd; // 0x1F8(0x10)
		FJunoGeometryCollectionAssemblerTargetData TargetData; // 0x208(0x8)
		unsigned char UnknownData05_7[0x30]; // 0x210(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent");
			return ret;
		}

		void SetFreeMemoryWhenNotAnimating(bool bValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C90258
		void OnRep_TargetData(); // Flags: Final|Native|Protected 0x7FF414C90178
		bool IsUpdating(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C90098
		bool IsDisassembling(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8FFB8
		bool IsDisassembled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8FED8
		bool IsAssembling(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8FDF8
		bool IsAssembled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8FD18
		bool IsActorAssembled(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C8FC38
		float GetAssemblyRatio(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C8FB58
	};


	// Class JunoGameNative.JunoGuidedBuildCampCommunicationComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJunoGuidedBuildCampCommunicationComponent : public UGameFrameworkComponent	
	{
	public:
		FGameplayTagContainer PersistentTagsToApplyOnStart; // 0xA0(0x20)
		FGameplayTagContainer PeristentTagsToApplyOnCompletion; // 0xC0(0x20)
		unsigned char UnknownData01_7[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildCampCommunicationComponent");
			return ret;
		}

		void HandleOnSetComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Final|Native|Private|HasOutParms 0x7FF414C90338
	};


	// Class JunoGameNative.JunoGuidedBuildingBCOInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoGuidedBuildingBCOInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingBCOInterface");
			return ret;
		}

		void SetParentGuidedBuilding(AJunoGuidedBuildingActor OurGuidedBuild); // Flags: Event|Public|BlueprintEvent 0x7FF414C90418
	};


	// Class JunoGameNative.JunoGuidedBuildingCosmeticInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoGuidedBuildingCosmeticInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingCosmeticInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGuidedBuildingDisplayActor
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class AJunoGuidedBuildingDisplayActor : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TArray DataArray; // 0x298(0x10)
		FName GuidedBuildingRecipe; // 0x2A8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingDisplayActor");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGuidedBuildingInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoGuidedBuildingInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingInterface");
			return ret;
		}

		void OnSlottedIntoGuidedBuild(AJunoGuidedBuildingActor GBA, FJunoGuidedBuildingData& SlotData); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C904F8
	};


	// Class JunoGameNative.JunoInputMappingComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoInputMappingComponent : public UGameFrameworkComponent	
	{
	public:
		UJunoInputMappingComponentData Data; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputMappingComponent");
			return ret;
		}

		void PushContext(UJunoInputControllerComponent JunoInputController); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C90798
		void PopContext(UJunoInputControllerComponent JunoInputController); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C906B8
		FGameplayTag GetEventTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C905D8
	};


	// Class JunoGameNative.JunoInputMappingComponentData
	// Inherited from UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UJunoInputMappingComponentData : public UDataAsset	
	{
	public:
		TArray DesiredInputMappings; // 0x30(0x10)
		TArray DisplayTexts; // 0x40(0x10)
		FGameplayTag EventTag; // 0x50(0x4)
		bool bPopDefaultContext; // 0x54(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x55(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputMappingComponentData");
			return ret;
		}

		void SetEventTag(FGameplayTag& InTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C90958
		FGameplayTag GetEventTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C90878
	};


	// Class JunoGameNative.JunoInputQueueComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UJunoInputQueueComponent : public UPawnComponent	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0xA0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputQueueComponent");
			return ret;
		}

		void StopQueueingInput(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C90E98
		void StartQueueingInput(int32_t MontageInstanecID, UGameplayAbility ability, bool bQueueMantisInputs, FGameplayTagContainer EventTags); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C90DB8
		void SetInterruptible(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C90CD8
		void ResetBlockingTags(int32_t MontageInstanceID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C90BF8
		void OverrideBlockingTags(int32_t MontageInstanceID, UGameplayAbility ability, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C90B18
		void FireQueuedInputs(int32_t MontageInstanceID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C90A38
	};


	// Class JunoGameNative.JunoInventoryBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoInventoryBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryBlueprintLibrary");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventoryPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoInventoryPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventoryPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoInventoryPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventoryUIPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoInventoryUIPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryUIPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventoryUIPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoInventoryUIPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoItemDefinitionPersistenceAssetType
	// Inherited from UJunoPersistenceAssetType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoItemDefinitionPersistenceAssetType : public UJunoPersistenceAssetType	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoItemDefinitionPersistenceAssetType");
			return ret;
		}
	};


	// Class JunoGameNative.JunoKnowledgeBundle
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UJunoKnowledgeBundle : public UPrimaryDataAsset	
	{
	public:
		UDataTable RecipeTable; // 0x30(0x8)
		FText BundleName; // 0x38(0x10)
		FText BundleDescription; // 0x48(0x10)
		TWeakObjectPtr BundleImage; // 0x58(0x20)
		FGameplayTag BundleIdentifier; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer BundleTags; // 0x80(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgeBundle");
			return ret;
		}
	};


	// Class JunoGameNative.JunoKnowledgeCraftingComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoKnowledgeCraftingComponent : public UGameFrameworkComponent	
	{
	public:
		TWeakObjectPtr CachedCraftingObjectComponent; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgeCraftingComponent");
			return ret;
		}

		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414C91058
		void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414C90F78
	};


	// Class JunoGameNative.JunoKnowledgePersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoKnowledgePersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgePersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoKnowledgePersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoKnowledgePersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgePersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoLevelProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoLevelProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLevelProviderInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoLevelReadyInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoLevelReadyInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLevelReadyInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoLifeCycleInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoLifeCycleInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLifeCycleInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoLocalEnvironmentComponentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoLocalEnvironmentComponentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLocalEnvironmentComponentInterface");
			return ret;
		}

		FGuid GetCaveId(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C91218
		FJunoBiomeInfoQueryResult GetBiome(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C91138
	};


	// Class JunoGameNative.JunoLocalEnvironmentActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoLocalEnvironmentActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLocalEnvironmentActorInterface");
			return ret;
		}

		bool GetBiomeInfo(FJunoBiomeInfoQueryResult& OutHabitat); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C913D8
		bool GetBiome(EJunoBiome& OutBiome); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C912F8
	};


	// Class JunoGameNative.JunoLocalPlayersProximityComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UJunoLocalPlayersProximityComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate OnLocalPlayerInRangeEvent; // 0xA0(0x10)
		FJunoLocalPlayerProximityDistanceSettings DistanceCheckSettings; // 0xB0(0x8)
		unsigned char UnknownData01_7[0x50]; // 0xB8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLocalPlayersProximityComponent");
			return ret;
		}

		void OnLocalPlayerInRangeChanged__DelegateSignature(APlayerController LocalController, bool bInRange); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140689B0
		bool IsLocalPlayerInRange(APlayerController InLocalPlayerController); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140688D0
	};


	// Class JunoGameNative.JunoLWMCaveEventDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoLWMCaveEventDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLWMCaveEventDataInterface");
			return ret;
		}
	};


	// Class JunoGameNative.DisplayableTile
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UDisplayableTile : public UObject	
	{
	public:
		FJunoTileInfo TileInfo; // 0x28(0x60)
		int32_t ClearedPixelCount; // 0x88(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		UTexture2D FogMask; // 0x90(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.DisplayableTile");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMapManagerComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1D8 (0x2D0 - 0xF8)
	class UJunoMapManagerComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		float ExploredRadius; // 0x100(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr OceanTileTexture; // 0x108(0x20)
		FMapExplorationData MapExplorationData; // 0x128(0x170)
		float TileSize; // 0x298(0x4)
		bool bIsExplorationDataInitialized; // 0x29C(0x1)
		unsigned char UnknownData06_6[0xB]; // 0x29D(0xB) UNKNOWN PROPERTY
		TArray DisplayableTiles; // 0x2A8(0x10)
		UTexture2D ClearedFogMask; // 0x2B8(0x8)
		unsigned char UnknownData07_7[0x10]; // 0x2C0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMapManagerComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMapPersistenceAssetType
	// Inherited from UJunoPersistenceAssetType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoMapPersistenceAssetType : public UJunoPersistenceAssetType	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMapPersistenceAssetType");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMarkerRefinementComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UJunoMarkerRefinementComponent : public UFortControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMarkerRefinementComponent");
			return ret;
		}

		void ServerPlaceMarker(FVector2D InLocation); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|HasDefaults 0x7FF414C91598
		void ClientPlaceMarker(FVector InLocation, bool bNeedsRefinement); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 0x7FF414C914B8
	};


	// Class JunoGameNative.JunoBuildLimitGetter
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBuildLimitGetter : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildLimitGetter");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMarkersLimitPool
	// Inherited from UJunoBuildLimitGetter -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoMarkersLimitPool : public UJunoBuildLimitGetter	
	{
	public:
		FName PhysicalMarkerSettingName; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMarkersLimitPool");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMarkersPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoMarkersPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMarkersPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMarkersPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoMarkersPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMarkersPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMerchantDatabase
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UJunoMerchantDatabase : public UFortPlayspaceComponent	
	{
	public:
		UDataTable MerchantSalesDataTable; // 0xF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMerchantDatabase");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMeshNetworkWeatherComponent
	// Inherited from UMeshNetworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x1A8 - 0x150)
	class UJunoMeshNetworkWeatherComponent : public UMeshNetworkComponent	
	{
	public:
		TArray SynchronizedWeatherStates; // 0x150(0x10)
		unsigned char UnknownData01_7[0x48]; // 0x160(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMeshNetworkWeatherComponent");
			return ret;
		}

		void OnRep_OnSynchronizedWeatherStates(); // Flags: Final|Native|Private 0x7FF414C91678
	};


	// Class JunoGameNative.JunoMoodReactionConfigMappings
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoMoodReactionConfigMappings : public UDataAsset	
	{
	public:
		TMap MoodReactionConfigMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMoodReactionConfigMappings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMovementMode_ELTacSprint
	// Inherited from UFortMovementMode_ELTacSprint -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x0 (0x3F0 - 0x3F0)
	class UJunoMovementMode_ELTacSprint : public UFortMovementMode_ELTacSprint	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMovementMode_ELTacSprint");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMultiCraftingComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UJunoMultiCraftingComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMultiCraftingFinished; // 0xA8(0x10)
		FMulticastInlineDelegate OnMultiCraftingBlocked; // 0xB8(0x10)
		unsigned char UnknownData07_6[0x18]; // 0xC8(0x18) UNKNOWN PROPERTY
		float TimeToStartProcess; // 0xE0(0x4)
		TWeakObjectPtr CachedCraftingObjectComponent; // 0xE4(0x8)
		TWeakObjectPtr CachedInventoryComponent; // 0xEC(0x8)
		TWeakObjectPtr AnalyticsComponent; // 0xF4(0x8)
		unsigned char UnknownData08_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		TArray CraftingProcesses; // 0x100(0x10)
		unsigned char UnknownData09_6[0x8]; // 0x110(0x8) UNKNOWN PROPERTY
		int64_t KeyGenerator; // 0x118(0x8)
		unsigned char UnknownData10_6[0x10]; // 0x120(0x10) UNKNOWN PROPERTY
		bool bIsCraftingBlocked; // 0x130(0x1)
		unsigned char UnknownData11_7[0x7]; // 0x131(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMultiCraftingComponent");
			return ret;
		}

		void OnRep_CraftingProcesses(TArray& PrevCraftingProcesses); // Flags: Final|Native|Private|HasOutParms 0x7FF414C91C98
		void OnRep_CraftingBlocked(); // Flags: Final|Native|Private 0x7FF414C91BB8
		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C91AD8
		bool IsCraftingBlocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C919F8
		void HandleInventoryDataRestored(); // Flags: Final|Native|Protected 0x7FF414C91918
		void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C91838
		TArray GetCraftingProcesses(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C91758
	};


	// Class JunoGameNative.JunoMutator_AutoPickup
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x20 (0x358 - 0x338)
	class AJunoMutator_AutoPickup : public AFortAthenaMutator	
	{
	public:
		FGameplayTagContainer DoNotAutoPickupGameplayTags; // 0x338(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMutator_AutoPickup");
			return ret;
		}
	};


	// Class JunoGameNative.JunoNPCMoodReactionDatabase
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UJunoNPCMoodReactionDatabase : public UFortPlayspaceComponent	
	{
	public:
		UJunoMoodReactionConfigMappings MoodReactionConfigMappings; // 0xF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoNPCMoodReactionDatabase");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPassiveCraftingAnalyticsComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UJunoPassiveCraftingAnalyticsComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FJunoPassiveCraftingItemAndCount AccumulatedItem; // 0xA8(0x10)
		TArray AccumulatedContributors; // 0xB8(0x10)
		TArray AccumulatedIngredients; // 0xC8(0x10)
		FName Recipe; // 0xD8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		double AccumulatedCraftingTime; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPassiveCraftingAnalyticsComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPassiveCraftingComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UJunoPassiveCraftingComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPassiveCraftingDone; // 0xA8(0x10)
		FMulticastInlineDelegate OnAutoCraftingFormulaRowChanged; // 0xB8(0x10)
		bool bAutoSelectRecipeFromIngredients; // 0xC8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr CachedInventoryComponent; // 0xCC(0x8)
		TWeakObjectPtr CachedCraftingObjectComponent; // 0xD4(0x8)
		bool bIsAutoCrafting; // 0xDC(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		FName AutoCraftingFormulaRow; // 0xE0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		FDateTime AutoCraftingStartDateTime; // 0xE8(0x8)
		unsigned char UnknownData09_7[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPassiveCraftingComponent");
			return ret;
		}

		void SetAutoCraftRecipe(FName FormulaRow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C92638
		void OnRep_AutoCraftingFormulaRow(); // Flags: Final|Native|Private 0x7FF414C92558
		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414C92478
		void MulticastFireCraftingDone(EPassiveCraftingDoneReason Reason); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414C92398
		bool IsAutoCrafting(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C922B8
		void HandleInventoryDataRestored(); // Flags: Final|Native|Private 0x7FF414C921D8
		void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414C920F8
		FName GetAutoCraftingFormulaRow(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C92018
		void EnableAutoCrafting(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C91F38
		void DisableAutoCrafting(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C91E58
		int32_t CalculateNumRemainingAutoCraft(FName OptionalFormulaRow); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C91D78
	};


	// Class JunoGameNative.JunoPassiveResourcesGathererPawnComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x130 - 0xA0)
	class UJunoPassiveResourcesGathererPawnComponent : public UPawnComponent	
	{
	public:
		FScalableFloat JobEstimationTimeMultiplier; // 0xA0(0x28)
		UDataTable GathererTable; // 0xC8(0x8)
		FMulticastInlineDelegate OnPassiveResourceGeneratedOnPawnDelegate; // 0xD0(0x10)
		unsigned char UnknownData01_7[0x50]; // 0xE0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent");
			return ret;
		}

		float GetTotalJobCompletionTimeInJunoHours(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C92B78
		float GetRemainingJobCompletionTimeInJunoHours(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C92A98
		FPrimaryAssetId GetLastUsedGatheringActorItemId(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C929B8
		FText GetLastUsedGatheringActorDisplayText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C928D8
		float GetLastGeneratedPercentage(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C927F8
		float GetEstimatedTotalJobCompletionTimeInJunoDays(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C92718
	};


	// Class JunoGameNative.JunoPassiveResourcesGatheringWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UJunoPassiveResourcesGatheringWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPassiveResourcesGatheringWorldConditionSchema");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPassiveResourcesGatheringComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UJunoPassiveResourcesGatheringComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY
		TArray ActiveGatheringRows; // 0xC8(0x10)
		FMulticastInlineDelegate OnPassiveResourceGeneratedDelegate; // 0xD8(0x10)
		unsigned char UnknownData03_6[0x28]; // 0xE8(0x28) UNKNOWN PROPERTY
		FGameplayTagQuery MatchingRolesQuery; // 0x110(0x48)
		TArray GatheringRows; // 0x158(0x10)
		FDataTableRowHandle SimulationConfigurationRow; // 0x168(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPassiveResourcesGatheringComponent");
			return ret;
		}

		void RemoveGatheringRowOverride(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C92D38
		bool OverrideGatheringRow(FDataTableRowHandle& GatheringRow); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C92C58
	};


	// Class JunoGameNative.JunoPawnComponent_MovementInputOverrides
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoPawnComponent_MovementInputOverrides : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnComponent_MovementInputOverrides");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistenceAnalytics
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPersistenceAnalytics : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistenceAnalytics");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistenceDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UJunoPersistenceDeveloperSettings : public UDeveloperSettings	
	{
	public:
		EJunoWorldPersistenceType PersistenceType; // 0x30(0x4)
		EJunoWorldReadOnly ReadOnly; // 0x34(0x4)
		bool bForceCreateNewEmptyWorldVersion; // 0x38(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FString DevSettings; // 0x40(0x10)
		FString WorldId; // 0x50(0x10)
		int32_t NewWorldAdventureSeed; // 0x60(0x4)
		EJunoWorldSettingOptions_BuildMode Mode; // 0x64(0x1)
		EJunoWorldSettingOptions_WorldSwitch HostileCreatures; // 0x65(0x1)
		EJunoWorldSettingOptions_WorldSwitch FriendlyCreatures; // 0x66(0x1)
		EJunoWorldSettingOptions_WorldSwitch DropInventoryOnDeath; // 0x67(0x1)
		EJunoWorldSettingOptions_WorldSwitch Hunger; // 0x68(0x1)
		EJunoWorldSettingOptions_WorldSwitch StaminaDrain; // 0x69(0x1)
		EJunoWorldSettingOptions_WorldSwitch NPCs; // 0x6A(0x1)
		EJunoWorldSettingOptions_WorldSwitch Temperature; // 0x6B(0x1)
		EJunoWorldSettingOptions_Death Death; // 0x6C(0x1)
		EJunoWorldSettingOptions_WorldSwitch FriendlyFire; // 0x6D(0x1)
		EJunoWorldSettingOptions_WorldSwitch PowerSystem; // 0x6E(0x1)
		EJunoWorldSettingOptions_RecruitedCreaturePermaDeath RecruitedCreaturePermaDeath; // 0x6F(0x1)
		EJunoWorldSettingOptions_WorldSwitch EliteHostileCreatures; // 0x70(0x1)
		EJunoWorldSettingOptions_Difficulty Difficulty; // 0x71(0x1)
		EJunoWorldSettingOptions_WorldSwitch Flying; // 0x72(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x73(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistenceDeveloperSettings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistenceFeaturesReportHandler
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoPersistenceFeaturesReportHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistenceFeaturesReportHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistenceReportGenerator
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UJunoPersistenceReportGenerator : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistenceReportGenerator");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPFWDefaultServiceWrapperSettings
	// Inherited from UPersistenceFrameworkServiceSettingsBase -> UDataAsset -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoPFWDefaultServiceWrapperSettings : public UPersistenceFrameworkServiceSettingsBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPFWDefaultServiceWrapperSettings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsTelemetrySubSystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xA8 (0xE8 - 0x40)
	class UJunoPhysicsTelemetrySubSystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0xA8]; // 0x40(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsTelemetrySubSystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPickup
	// Inherited from AFortPickupAthena -> AFortPickup -> AActor -> UObject
	// Size: 0x8 (0x7B0 - 0x7A8)
	class AJunoPickup : public AFortPickupAthena	
	{
	public:
		float MaxDropTossSpeed; // 0x7A8(0x4)
		float CombineLerpTimeModValue; // 0x7AC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPickup");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayerBuildingComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x278 (0x320 - 0xA8)
	class UJunoPlayerBuildingComponent : public UFortControllerComponent	
	{
	public:
		FJunoSelectedSlot ReplicatedSelectedSlot; // 0xA8(0x30)
		unsigned char UnknownData06_6[0x34]; // 0xD8(0x34) UNKNOWN PROPERTY
		TWeakObjectPtr LastGuidedBuildingActor; // 0x10C(0x8)
		TWeakObjectPtr ReplicatedLastGuidedBuildingActor; // 0x114(0x8)
		float ReplicateLastGuidedActorTime; // 0x11C(0x4)
		float ReplicateBuildingMetricSpatialPrecision; // 0x120(0x4)
		unsigned char UnknownData07_6[0x14]; // 0x124(0x14) UNKNOWN PROPERTY
		UClass DefaultBuildingCameraMode; // 0x138(0x8)
		FJunoBuildingSessionInfo BuildingSessionInfo; // 0x140(0x28)
		UJunoInputMappingComponentData InputMappingData; // 0x168(0x8)
		UInputAction ExitBuildMode; // 0x170(0x8)
		TArray DefaultRecipes; // 0x178(0x10)
		TArray ClientSpatialMetricsBuildingPermissions; // 0x188(0x10)
		FIntVector LastKnownPawnSpatialCell; // 0x198(0xC)
		unsigned char UnknownData08_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		TSet DirtyCellLocations; // 0x1A8(0x50)
		unsigned char UnknownData09_6[0x10]; // 0x1F8(0x10) UNKNOWN PROPERTY
		int32_t MaxRecentRecipes; // 0x208(0x4)
		FJunoMCPItemPlacementStatus MCPItemPlacementStatus; // 0x20C(0xC)
		TWeakObjectPtr UINotificationIcon; // 0x218(0x20)
		TArray AlertData; // 0x238(0x10)
		bool bHasSeenItemShopCallout; // 0x248(0x1)
		unsigned char UnknownData10_6[0xBF]; // 0x249(0xBF) UNKNOWN PROPERTY
		UJunoAsyncAction_WaitForEventRouter WaitForEventRouterAction; // 0x308(0x8)
		unsigned char UnknownData11_7[0x10]; // 0x310(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerBuildingComponent");
			return ret;
		}

		void TryAbandonGuidedBuild(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C94F58
		void SetLastGuidedBuildingActor(AJunoGuidedBuildingActor InLastGuidedBuildingActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414C94E78
		void ServerSetLastGuidedBuildingActor(AJunoGuidedBuildingActor InLastActor); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414C94D98
		void ServerSetHasSeenItemShopCallout(bool bHasSeen); // Flags: Net|Native|Event|Protected|NetServer|BlueprintCallable 0x7FF414C94CB8
		void ServerSelectSlot(FJunoSelectedSlot NewSlot); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414C94BD8
		void ServerEndGuidedBuild(AJunoGuidedBuildingActor GuidedBuildingActor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 0x7FF414C94AF8
		void ServerAttemptAutoComplete(AJunoGuidedBuildingActor GuidedBuildingActor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 0x7FF414C94A18
		void OnRep_ReplicateLastGuidedActorTime(); // Flags: Final|Native|Protected 0x7FF414C94938
		void OnRep_ReplicatedSelectedSlot(); // Flags: Final|Native|Protected 0x7FF414C94858
		void OnRep_ReplicatedLastGuidedBuildingActor(); // Flags: Final|Native|Protected 0x7FF414C94778
		void OnRep_MCPItemPlacementStatus(); // Flags: Final|Native|Protected 0x7FF414C94698
		void OnGuidedBuildingStageChanged(FGuidedBuildingUpdate& StageUpdate); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C945B8
		void OnGuidedBuildDone(FGuidedBuildingUpdate& StageUpdate); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C944D8
		bool IsRecipePinned(FName Recipe); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C943F8
		bool IsBuildModeEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C94318
		bool HasSelectedRemainingParts(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C94238
		bool HasSelectedMissingParts(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C94158
		void HandleBuildingMetricsThresholdChange(FInt32Vector& Location); // Flags: Final|Native|Protected|HasOutParms|HasDefaults 0x7FF414C94078
		void HandleBuildingMetricsActorCountChange(FInt32Vector& Location, int32_t PreviousActorCount, int32_t NewActorCount); // Flags: Final|Native|Protected|HasOutParms|HasDefaults 0x7FF414C93F98
		int32_t GetTotalAllowedMCPItemWorlds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93EB8
		int32_t GetRemainingWorldsForMCPItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93DD8
		FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsForSelectedRecipe(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93CF8
		FText GetMCPItemPlacedMessageTitle(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C93C18
		FText GetMCPItemPlacedMessageDescription(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C93B38
		FName GetLastSelectedRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93A58
		FJunoLastLoadedRecipeData GetLastLoadedRecipeData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93978
		FName GetLastLoadedRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93898
		AJunoGuidedBuildingActor GetLastGuidedBuildingActor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C937B8
		FName GetLastFocusedRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C936D8
		bool GetIsInBuildMode(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C935F8
		FName GetForcedRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93518
		FName GetCurrentRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93438
		EJunoBuildModeType GetBuildModeType(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C93358
		void EnterGuidedBuilding(AJunoGuidedBuildingActor InLastGuidedBuildingActor); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414C93278
		void EnterBuildingModeAndSelectIndex(int32_t Index, EJunoBuildModeType InType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C93198
		bool CanPlaceRecipe(FName RecipeToPlace); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C930B8
		bool CanPlaceMCPItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C92FD8
		bool CanAutoCompleteBuilding(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C92EF8
		void AttemptAutoComplete(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C92E18
	};


	// Class JunoGameNative.JunoPlayerCampPawnComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UJunoPlayerCampPawnComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0xA0(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerCampPawnComponent");
			return ret;
		}

		void HandleAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Private|HasOutParms 0x7FF414C95038
	};


	// Class JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x270 (0x310 - 0xA0)
	class UJunoPlayerControllerComponent_SessionAnalytics : public UControllerComponent	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		double JunoPlaySessionStartedTime; // 0xA8(0x8)
		FGuid JunoPlaySessionID; // 0xB0(0x10)
		TArray RecipesUnlockedDuringSession; // 0xC0(0x10)
		float AccumulatedDistanceTraveled; // 0xD0(0x4)
		float LastIdleCheckTime; // 0xD4(0x4)
		float AccumulatedIdleTime; // 0xD8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FVector LastPlayerPawnLocation; // 0xE0(0x18)
		unsigned char UnknownData08_6[0x50]; // 0xF8(0x50) UNKNOWN PROPERTY
		FString SavedDisconnectReason; // 0x148(0x10)
		FGameplayEventListenerHandle GracefulShutdownInitiatedEventHandle; // 0x158(0x1C)
		bool bGracefulShutdownStarted; // 0x174(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x175(0x3) UNKNOWN PROPERTY
		int32_t GracefulShutdownExitCode; // 0x178(0x4)
		int32_t GracefulShutdownMaxTime; // 0x17C(0x4)
		FString SavedPlayerPermadeathStatus; // 0x180(0x10)
		unsigned char UnknownData10_6[0x50]; // 0x190(0x50) UNKNOWN PROPERTY
		FGameplayEventListenerHandle PawnEliminatedEventHandle; // 0x1E0(0x1C)
		unsigned char UnknownData11_7[0x114]; // 0x1FC(0x114) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics");
			return ret;
		}

		void TotemConsumedDuringCurrentPlaySession(UFortWorldItem TotemConsumedDuringSession); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C958F8
		void SetConsumedTotemOfReturn(UFortWorldItem TotemOfReturn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C95818
		void ResetHeartbeatStats(); // Flags: Final|Native|Private 0x7FF414C95738
		void OnRep_JunoPlaySessionID(); // Flags: Final|Native|Private 0x7FF414C95658
		void OnPlayerStatsUpdateTimer(); // Flags: Final|Native|Private 0x7FF414C95578
		void OnPlayerPermadeath(); // Flags: Final|Native|Private 0x7FF414C95498
		void OnPlayerDisconnecting(AFortPlayerController FortPlayerController, FString DevReason, bool bGracefulDisconnect); // Flags: Final|Native|Private 0x7FF414C953B8
		void OnHeartbeatTimer(); // Flags: Final|Native|Private 0x7FF414C952D8
		void HandleInventoryDataRestored(); // Flags: Final|Native|Private 0x7FF414C951F8
		void HandleGracefulShutdownInitiated(FFortGracefulShutdownInitiatedEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414C95118
	};


	// Class JunoGameNative.JunoPlayerLifetimeStatsComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UJunoPlayerLifetimeStatsComponent : public UFortControllerComponent	
	{
	public:
		int32_t AccumulatedTimePlayedSeconds; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x14]; // 0xAC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerLifetimeStatsComponent");
			return ret;
		}

		void OnRep_AccumulatedTimePlayed(); // Flags: Final|Native|Private 0x7FF414C95B98
		FTimespan GetPlayerTimePlayedInGameTimespan(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C95AB8
		float CalculateCurrentServerTimePlayedSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C959D8
	};


	// Class JunoGameNative.JunoPlayerModifiersPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoPlayerModifiersPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerModifiersPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayerPersistenceContainerGeneric
	// Inherited from UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x78 (0x258 - 0x1E0)
	class UJunoPlayerPersistenceContainerGeneric : public UJunoBasePFWContainer	
	{
	public:
		FPersistenceFrameworkPlayerInfo PlayerInfo; // 0x1E0(0x20)
		FUniqueNetIdRepl PlayerNetId; // 0x200(0x30)
		FString SaveFrameworkResourceId; // 0x230(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x240(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerPersistenceContainerGeneric");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayerPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoPlayerPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspaceAccountantFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x50 (0xA8 - 0x58)
	class UJunoPlayspaceAccountantFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoPlayspaceAccountantSaveData JunoPlayspaceAccountantSaveData; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceAccountantFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoPlayspaceAccountantPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoPlayspaceAccountantPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning
	// Inherited from UPlayspaceControllerComponent_PlayerSpawning -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x160 - 0x118)
	class UJunoPlayspaceControllerComponent_PlayerSpawning : public UPlayspaceControllerComponent_PlayerSpawning	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x118(0x18) UNKNOWN PROPERTY
		FVector PlayspaceSearchBoxExtent; // 0x130(0x18)
		unsigned char UnknownData04_6[0x10]; // 0x148(0x10) UNKNOWN PROPERTY
		bool bHasPlayerRespawnedFromDeath; // 0x158(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x159(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning");
			return ret;
		}

		void StartRespawn(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C95F18
		void ServerQueuePlayerForRespawn(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414C95E38
		void OnPawnPosessed(AFortPawn NewPawn); // Flags: Final|Native|Private 0x7FF414C95D58
		bool IsAllowedToShowRespawnUI(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C95C78
	};


	// Class JunoGameNative.JunoPlayspaceIndexPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoPlayspaceIndexPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoPlayspaceIndexPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePersistenceFeatureData
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPlayspacePersistenceFeatureData : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePersistenceFeatureHelper
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UJunoPlayspacePersistenceFeatureHelper : public UObject	
	{
	public:
		UClass PersistenceFeatureDataClass; // 0x28(0x8)
		TScriptInterface PersistenceFeatureData; // 0x30(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePersistenceFeatureHelper");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePersistenceFeatureOwner
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPlayspacePersistenceFeatureOwner : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePersistenceFeatureOwner");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePickupComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UJunoPlayspacePickupComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePickupComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePickupFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x100 (0x158 - 0x58)
	class UJunoPlayspacePickupFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoPlayspacePickupSaveData JunoPlayspacePickupSaveData; // 0x58(0x50)
		TMap PendingLoadPickups; // 0xA8(0x50)
		AFortPickup SpawnedPickupBeingProcessed; // 0xF8(0x8)
		TMap PendingSpawnPickups; // 0x100(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x150(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePickupFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePickupPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoPlayspacePickupPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePickupPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePickupPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoPlayspacePickupPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePickupPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoQueryContext_Camp_Center
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoQueryContext_Camp_Center : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoQueryContext_Camp_Center");
			return ret;
		}
	};


	// Class JunoGameNative.JunoQueryContext_Camp_Extents
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoQueryContext_Camp_Extents : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoQueryContext_Camp_Extents");
			return ret;
		}
	};


	// Class JunoGameNative.JunoQueryTest_IsInCamp
	// Inherited from UEnvQueryTest -> UEnvQueryNode -> UObject
	// Size: 0x8 (0x200 - 0x1F8)
	class UJunoQueryTest_IsInCamp : public UEnvQueryTest	
	{
	public:
		UClass Context; // 0x1F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoQueryTest_IsInCamp");
			return ret;
		}
	};


	// Class JunoGameNative.JunoQuickBuildSelectionData
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoQuickBuildSelectionData : public UObject	
	{
	public:
		int32_t CurrentlySelectedIndex; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray QuickBuildRecipes; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoQuickBuildSelectionData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoRainCapture
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class AJunoRainCapture : public AActor	
	{
	public:
		USceneCaptureComponent2D SceneCaptureComponent2D; // 0x290(0x8)
		UMaterialParameterCollection MaterialParameterCollection; // 0x298(0x8)
		FName RainOccluderSceneCaptureLocationName; // 0x2A0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
		FVector RainOccluderPositionOffset; // 0x2A8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRainCapture");
			return ret;
		}
	};


	// Class JunoGameNative.JunoRainCaptureSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UJunoRainCaptureSubsystem : public UTickableWorldSubsystem	
	{
	public:
		FSoftObjectPath SubsystemDataAssetPath; // 0x40(0x18)
		UJunoRainCaptureSubsystemData SubsystemData; // 0x58(0x8)
		unsigned char UnknownData02_6[0x20]; // 0x60(0x20) UNKNOWN PROPERTY
		AJunoRainCapture RainCaptureInstance; // 0x80(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRainCaptureSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoRainCaptureSubsystemData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UJunoRainCaptureSubsystemData : public UPrimaryDataAsset	
	{
	public:
		UMaterialParameterCollection MaterialParameterCollection; // 0x30(0x8)
		UTextureRenderTarget2D TextureTarget; // 0x38(0x8)
		FName WeatherParameterName; // 0x40(0x4)
		FName RainOccluderSceneCaptureLocationName; // 0x44(0x4)
		FVector RainOccluderPositionOffset; // 0x48(0x18)
		float UpdateDistanceThreshold; // 0x60(0x4)
		float UpdateTimeThreshold; // 0x64(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRainCaptureSubsystemData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoRainOccluderComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoRainOccluderComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRainOccluderComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoReportHandler
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoReportHandler : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoReportHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePersistenceComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x108 - 0xF8)
	class UJunoPlayspacePersistenceComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData02_3[0x4]; // 0xF8(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr JunoPersistentPlayspaceSaveHandler; // 0xFC(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x104(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePersistenceComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoRootPlayspacePersistenceComponent
	// Inherited from UJunoPlayspacePersistenceComponent -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x108 - 0x108)
	class UJunoRootPlayspacePersistenceComponent : public UJunoPlayspacePersistenceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRootPlayspacePersistenceComponent");
			return ret;
		}

		void HandleWorldChanged(); // Flags: Final|Native|Private 0x7FF414C95FF8
	};


	// Class JunoGameNative.JunoSavedWorldWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoSavedWorldWorldSubsystem : public UWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoSavedWorldWorldSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoSmartObjectComponent
	// Inherited from UFortSmartObjectComponent -> USmartObjectComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x330 - 0x320)
	class UJunoSmartObjectComponent : public UFortSmartObjectComponent	
	{
	public:
		UCurveFloat LootTierPercentageToSlotPickingModifier; // 0x320(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x328(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoSmartObjectComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoSyncTimeOfDayComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoSyncTimeOfDayComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoSyncTimeOfDayComponent");
			return ret;
		}

		void SetTimeOfDaySyncEnabled(bool bNewTimeOfDaySyncEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C961B8
		bool GetTimeOfDaySyncEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414C960D8
	};


	// Class JunoGameNative.JunoSyncWeatherComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UJunoSyncWeatherComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoSyncWeatherComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoTeamStart
	// Inherited from APlayerStart -> ANavigationObjectBase -> AActor -> UObject
	// Size: 0x28 (0x2E8 - 0x2C0)
	class AJunoTeamStart : public APlayerStart	
	{
	public:
		FGameplayTagContainer IdentifierTag; // 0x2C0(0x20)
		float CapsuleRadius; // 0x2E0(0x4)
		float CapsuleHeight; // 0x2E4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTeamStart");
			return ret;
		}
	};


	// Class JunoGameNative.JunoTargetTeleporterGeneratorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoTargetTeleporterGeneratorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTargetTeleporterGeneratorInterface");
			return ret;
		}

		void CreateTargetTeleporter(APawn InteractingPawn, FDelegateProperty& OnFinished); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C96298
	};


	// Class JunoGameNative.JunoTeleporter
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x28 (0xC00 - 0xBD8)
	class AJunoTeleporter : public ABuildingProp	
	{
	public:
		TWeakObjectPtr TargetTeleporter; // 0xBD8(0x8)
		unsigned char UnknownData01_7[0x20]; // 0xBE0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTeleporter");
			return ret;
		}

		void TeleportFinished(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C96618
		void SetTargetTeleporter(AJunoTeleporter TargetTeleportActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C96538
		bool IsTeleporterEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C96458
		AJunoTeleporter GetTargetTeleporter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C96378
	};


	// Class JunoGameNative.JunoTemperatureAttributeSet
	// Inherited from UFortAttributeSet -> UAttributeSet -> UObject
	// Size: 0x100 (0x130 - 0x30)
	class UJunoTemperatureAttributeSet : public UFortAttributeSet	
	{
	public:
		FGameplayTagContainer BlockedTemperatures; // 0x30(0x20)
		FFortGameplayAttributeData Temperature; // 0x50(0x28)
		FFortGameplayAttributeData ColdResistance; // 0x78(0x28)
		FFortGameplayAttributeData HeatResistance; // 0xA0(0x28)
		FGameplayTag CurrentTemperature; // 0xC8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray TemperatureRanges; // 0xD0(0x10)
		FMulticastInlineDelegate OnTemperatureChanged; // 0xE0(0x10)
		FMulticastInlineDelegate OnTemperatureRangesChanged; // 0xF0(0x10)
		bool bAddTemperatureTagToActor; // 0x100(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x101(0x3) UNKNOWN PROPERTY
		FGameplayTag ForcedTemperature; // 0x104(0x4)
		unsigned char UnknownData05_7[0x28]; // 0x108(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTemperatureAttributeSet");
			return ret;
		}

		void OnRep_TemperatureRanges(); // Flags: Final|Native|Private 0x7FF414C96C38
		void OnRep_Temperature(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414C96B58
		void OnRep_HeatResistance(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414C96A78
		void OnRep_CurrentTemperature(FGameplayTag OldTemperature); // Flags: Final|Native|Private 0x7FF414C96998
		void OnRep_ColdResistance(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414C968B8
		void HandleWeatherTemperatureChanged(FJunoEvent_TemperatureChanged Payload); // Flags: Final|Native|Private 0x7FF414C967D8
		void ForceTemperature(FGameplayTag TemperatureToForce); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C966F8
	};


	// Class JunoGameNative.JunoTemperatureComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoTemperatureComponent : public UGameFrameworkComponent	
	{
	public:
		TWeakObjectPtr TemperatureAttributeSet; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTemperatureComponent");
			return ret;
		}

		void HandleOwnerASCInvalidated(); // Flags: Final|Native|Private 0x7FF414C96ED8
		void HandleOwnerASCInitialized(UFortAbilitySystemComponent FortAbilitySystemComponent, AFortPlayerPawn AffectedPawn); // Flags: Final|Native|Private 0x7FF414C96DF8
		UJunoTemperatureAttributeSet GetTemperatureAttributeSet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C96D18
	};


	// Class JunoGameNative.JunoTemplatesReportHandler
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoTemplatesReportHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTemplatesReportHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoToyAttachmentFixupComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoToyAttachmentFixupComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoToyAttachmentFixupComponent");
			return ret;
		}

		void HandleToyAttachementFixupTimer(); // Flags: Final|Native|Protected 0x7FF414C96FB8
	};


	// Class JunoGameNative.JunoUIHealthBarLocationInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoUIHealthBarLocationInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoUIHealthBarLocationInterface");
			return ret;
		}

		bool GetHealthBarRelativeLocation(FVector& OutLocation); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF414C97098
	};


	// Class JunoGameNative.JunoUIHealthInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoUIHealthInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoUIHealthInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoUpdateActionsReportHandler
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoUpdateActionsReportHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoUpdateActionsReportHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoUserGeneratedTextPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoUserGeneratedTextPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoUserGeneratedTextPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoUserGeneratedTextPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoUserGeneratedTextPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoUserGeneratedTextPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_RecruitCreature
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_RecruitCreature : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_RecruitCreature");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWeaponAbility
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0xB40 - 0xB40)
	class UJunoWeaponAbility : public UFortGameplayAbility	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeaponAbility");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWeaponCreatureItemDefinition
	// Inherited from UFortWeaponRangedItemDefinition -> UFortWeaponItemDefinition -> UFortWorldItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x30 (0x490 - 0x460)
	class UJunoWeaponCreatureItemDefinition : public UFortWeaponRangedItemDefinition	
	{
	public:
		TArray Debug_CreaturesToSpawn; // 0x460(0x10)
		TArray SpawnEvents; // 0x470(0x10)
		TArray SpawnEventRegistryIds; // 0x480(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeaponCreatureItemDefinition");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWeaponsBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWeaponsBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeaponsBlueprintLibrary");
			return ret;
		}

		TArray GetSpawnEvents(UGameplayAbility GameplayAbility); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C97338
		TArray GetSpawnEventRegistryIds(UGameplayAbility GameplayAbility); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C97258
		TArray GetCreaturesToSpawn(UGameplayAbility GameplayAbility); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C97178
	};


	// Class JunoGameNative.JunoWeatherFXPersistence
	// Inherited from AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class AJunoWeatherFXPersistence : public AActor	
	{
	public:
		UMaterialParameterCollection MaterialParameterCollection; // 0x290(0x8)
		UMaterialParameterCollectionInstance CachedMPCInstance; // 0x298(0x8)
		FLinearColor WindPosition; // 0x2A0(0x10)
		FLinearColor WindValueInCave; // 0x2B0(0x10)
		float MaxWindSpeed; // 0x2C0(0x4)
		FLinearColor GustMaxWindSpeedAddend; // 0x2C4(0x10)
		float WindScalar; // 0x2D4(0x4)
		FName WindParamName; // 0x2D8(0x4)
		FName WindPositionParamName; // 0x2DC(0x4)
		FName WindPreviousPositionParamName; // 0x2E0(0x4)
		bool bInCave; // 0x2E4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherFXPersistence");
			return ret;
		}

		void UpdateWindGust(float IntensityScalar, FVector& GustIntensity, FLinearColor& CurrentWind); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C97418
	};


	// Class JunoGameNative.JunoWeatherLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWeatherLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherLibrary");
			return ret;
		}

		FJunoWeatherLocation StringToLocation(FName LocationName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C97BF8
		FJunoWeatherPhase RollWeatherFromSeason(FJunoWeatherSeasonRow& Season, FJunoWeatherLocation& Location, FGameplayTag& OptionalWeatherType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C97B18
		FJunoWeatherPhase RollWeatherFromForecast(FJunoWeatherPhaseForecast& Forecast); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C97A38
		bool NotEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C97958
		UJunoGameStateWeatherComponent FindGameStateWeatherComponent(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C97878
		bool EqualEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C97798
		void DescribePhase(FJunoWeatherPhase& WeatherPhase); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C976B8
		void DescribeLocation(); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C975D8
		FJunoWeatherLocation CalculateLocation(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C974F8
	};


	// Class JunoGameNative.JunoWeatherLocationComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoWeatherLocationComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate OnLocationChanged; // 0xA0(0x10)
		FJunoWeatherLocation Location; // 0xB0(0x2)
		unsigned char UnknownData01_7[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherLocationComponent");
			return ret;
		}

		void OnRep_Location(FJunoWeatherLocation& OldLocation); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C97F78
		void HandleLocationChanged(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414C97E98
		FJunoWeatherLocation GetLocation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C97DB8
		FJunoWeatherLocation BP_CalculateLocation(); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414C97CD8
	};


	// Class JunoGameNative.JunoWeatherPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoWeatherPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWeatherPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoWeatherPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWeatherReactionComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UJunoWeatherReactionComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnWeatherPhaseChanged; // 0xA0(0x10)
		FMulticastInlineDelegate OnTemperatureChanged; // 0xB0(0x10)
		unsigned char UnknownData01_7[0x48]; // 0xC0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherReactionComponent");
			return ret;
		}

		void ReceiveOnWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged Payload); // Flags: Event|Public|BlueprintEvent 0x7FF414C98678
		void ReceiveOnTemperatureChanged(FJunoEvent_TemperatureChanged Payload); // Flags: Event|Public|BlueprintEvent 0x7FF414C98598
		void HandleWeatherLocationChanged(FJunoWeatherLocationChangedEvent Payload); // Flags: Final|Native|Protected 0x7FF414C984B8
		FJunoWeatherPhase GetCurrentWeatherPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C983D8
		float GetCurrentTemperatureFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C982F8
		FGameplayTag GetCurrentTemperature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C98218
		FJunoWeatherLocation GetClosestStatefulLocationFor(FJunoWeatherLocation& WeatherLocation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C98138
		UJunoWeatherStateComponent FindWeatherState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C98058
	};


	// Class JunoGameNative.JunoWeatherStateComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE8 (0x188 - 0xA0)
	class UJunoWeatherStateComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData04_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		FJunoWeatherLocation Location; // 0xD0(0x2)
		unsigned char UnknownData05_6[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY
		UDataTable SeasonTable; // 0xD8(0x8)
		unsigned char UnknownData06_6[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY
		FJunoWeatherPhase CurrentWeatherPhase; // 0xE8(0x38)
		FJunoWeatherPhase NextWeatherPhase; // 0x120(0x38)
		TArray NextWeatherQueue; // 0x158(0x10)
		unsigned char UnknownData07_7[0x20]; // 0x168(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherStateComponent");
			return ret;
		}

		void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C998D8
		void TransitionWeatherNow(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C997F8
		void SetAutoTransitioning(bool bAutoTransitionWeather); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C99718
		FJunoWeatherPhase RollWeatherPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C99638
		void RerollNextWeatherWith(FGameplayTag& WeatherTypeName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C99558
		void ReceiveWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C99478
		void ReceiveTemperatureChanged(FJunoEvent_TemperatureChanged& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C99398
		void QueueNextWeather(FJunoWeatherPhase& QueuedWeather); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C992B8
		void OnRep_CurrentWeatherPhase(); // Flags: Final|Native|Private 0x7FF414C991D8
		bool IsAutoTransitioning(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C990F8
		float GetTransitionOutAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C99018
		float GetTransitionInAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C98F38
		TArray GetNextWeatherQueue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C98E58
		FJunoWeatherPhase GetNextWeatherPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C98D78
		FJunoWeatherLocation GetLocation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C98C98
		FJunoWeatherPhase GetCurrentWeatherPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C98BB8
		float GetCurrentTemperatureFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C98AD8
		FGameplayTag GetCurrentTemperature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C989F8
		FGameplayTag GetCurrentSeason(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414C98918
		void ForceNextWeatherTo(FJunoWeatherPhase& NewNextWeatherPhase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C98838
		void ClearNextWeatherQueue(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C98758
	};


	// Class JunoGameNative.JunoWorldInGameTimePersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoWorldInGameTimePersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldInGameTimePersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldInGameTimePersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoWorldInGameTimePersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldInGameTimePersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceCheckpointManager
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UJunoWorldPersistenceCheckpointManager : public UObject	
	{
	public:
		int32_t CheckpointIntervalSeconds; // 0x28(0x4)
		int32_t MinCheckpointIntervalSeconds; // 0x2C(0x4)
		int32_t MaxCheckpointCountWithinConfiguredInterval; // 0x30(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x34(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceCheckpointManager");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoWorldPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoWorldPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1D8 (0x208 - 0x30)
	class UJunoWorldPersistenceSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData04_3[0x50]; // 0x30(0x50) UNKNOWN PROPERTY
		UJunoWorldPersistenceHandler WorldPersistenceHandler; // 0x80(0x8)
		UJunoWorldPersistencePlayerManager WorldPersistencePlayerManager; // 0x88(0x8)
		UJunoWorldPersistenceSubsystemData SubsystemData; // 0x90(0x8)
		UJunoWorldPersistenceCheckpointManager CheckpointManager; // 0x98(0x8)
		TMap PersistentPlayspaceMap; // 0xA0(0x50)
		TArray PersistentPlayspaceInsertionOrderArray; // 0xF0(0x10)
		EJunoWorldSaveDataState WorldSaveDataState; // 0x100(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FSoftObjectPath SubsystemDataAssetPath; // 0x108(0x18)
		unsigned char UnknownData06_6[0x18]; // 0x120(0x18) UNKNOWN PROPERTY
		TMap ErrorCodeResponses; // 0x138(0x50)
		unsigned char UnknownData07_6[0x78]; // 0x188(0x78) UNKNOWN PROPERTY
		UJunoPersistentPlayspaceSaveHandlerContainer JunoPersistentPlayspaceSaveHandlerContainer; // 0x200(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceSubsystem");
			return ret;
		}

		bool WasActorSpawnedFromSavedGame(AActor Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C99B78
		void RequestActorSave(AActor Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C99A98
		FGuid GenerateDeterministicMapActorGUID(AActor Actor); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414C999B8
	};


	// Class JunoGameNative.JunoWorldPersistenceSubsystemData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoWorldPersistenceSubsystemData : public UPrimaryDataAsset	
	{
	public:
		TArray AvailableWorldPersistenceHandlerClasses; // 0x30(0x10)
		UClass DefaultWorldPersistenceHandlerClass; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceSubsystemData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldRegistryInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWorldRegistryInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldRegistryInterface");
			return ret;
		}

		void GetWorldDebugInfoText(AFortPlayerPawn PlayerPawn, FJunoDebugWorldInfoResult& WorldDebugInfo); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C99EF8
		void GetWorldAnalyticsInfo(UObject WorldContextObject, FVector& WorldLocation, FJunoWorldAnalyticsInfoResult& WorldAnalyticsInfo); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C99E18
		void GetGlobalPOIs(UObject WorldContextObject, TArray& OutGlobalPOIs, FName EventName, FName POIName); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C99D38
		bool GetEventTilesAverageLocation(UObject WorldContextObject, FName& EventName, FVector& OutLocation); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C99C58
	};


	// Class JunoGameNative.JunoWorldSettingsBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWorldSettingsBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary");
			return ret;
		}

		void TurnWorldSettingOn(UObject WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C9AB38
		void TurnWorldSettingOff(UObject WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C9AA58
		bool IsWorldSettingTainted(UObject WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C9A978
		bool IsWorldSettingSaved(UObject WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C9A898
		bool IsWorldSettingOn(UObject WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C9A7B8
		bool IsSandboxMode(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C9A6D8
		bool IsHardcoreMode(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C9A5F8
		bool IsCozyMode(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C9A518
		FGameplayTag GetEnumWorldSetting(UObject WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C9A438
		TArray GetAllWorldSettingNames(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C9A358
		FName EnumWorldSettingValueToName(FGameplayTag& SettingValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C9A278
		void ChangeEnumWorldSetting(UObject WorldContextObject, FGameplayTag& SettingValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C9A198
		bool CanGetWorldSettings(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C9A0B8
		bool AreWorldSettingsLoaded(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C99FD8
	};


	// Class JunoGameNative.JunoWorldSettingsComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UJunoWorldSettingsComponent : public UPlayspaceComponent	
	{
	public:
		UDataTable WorldSettingsTable; // 0xA0(0x8)
		TArray WorldSettings; // 0xA8(0x10)
		bool bAreWorldSettingsLoaded; // 0xB8(0x1)
		unsigned char UnknownData01_7[0x17]; // 0xB9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldSettingsComponent");
			return ret;
		}

		void TurnSettingOn(FGameplayTag& SettingName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9B4D8
		void TurnSettingOff(FGameplayTag& SettingName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9B3F8
		void OnRep_WorldSettings(TArray& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414C9B318
		void OnRep_AreWorldSettingsLoaded(); // Flags: Final|Native|Private 0x7FF414C9B238
		bool IsSettingTainted(FGameplayTag& SettingName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C9B158
		bool IsSettingSaved(FGameplayTag& SettingName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C9B078
		bool IsSettingOn(FGameplayTag& SettingName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C9AF98
		FGameplayTag GetEnumWorldSetting(FGameplayTag& SettingName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C9AEB8
		TArray GetAllSettingNames(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9ADD8
		void ChangeEnumWorldSetting(FGameplayTag& SettingValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9ACF8
		bool AreWorldSettingsLoaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9AC18
	};


	// Class JunoGameNative.JunoWorldSettingsPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0xD0 (0x128 - 0x58)
	class UJunoWorldSettingsPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		unsigned char UnknownData01_3[0x20]; // 0x58(0x20) UNKNOWN PROPERTY
		TMap BoolWorldSettings; // 0x78(0x50)
		TMap EnumWorldSettings; // 0xC8(0x50)
		FJunoWorldSettingsSaveData WorldSettingsSaveData; // 0x118(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldSettingsPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoWorldSettingsPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldSettingsPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoWorldSettingsPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMapMarkerCustomizationInitData
	// Inherited from UObject
	// Size: 0xF0 (0x118 - 0x28)
	class UJunoMapMarkerCustomizationInitData : public UObject	
	{
	public:
		FGuid MarkerID; // 0x28(0x10)
		FJunoMarker Marker; // 0x38(0xC0)
		FText DisplayName; // 0xF8(0x10)
		EJunoBiome Biome; // 0x108(0x1)
		bool bEditingMarker; // 0x109(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x10A(0x6) UNKNOWN PROPERTY
		AJunoCampActor OwningCampActor; // 0x110(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMapMarkerCustomizationInitData");
			return ret;
		}
	};


	// Class JunoGameNative.PhysicalStrainHealthSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x20 (0x60 - 0x40)
	class UPhysicalStrainHealthSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PhysicalStrainHealthSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.PhysicalStrainHealthRuntimeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UPhysicalStrainHealthRuntimeSettings : public UDeveloperSettings	
	{
	public:
		EPhysicalStrainHealthMode Mode; // 0x30(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float FatigueDamageThresholdPercent; // 0x34(0x4)
		float FatigueDamageThresholdMinimum; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PhysicalStrainHealthRuntimeSettings");
			return ret;
		}
	};


	// Class JunoGameNative.PlayspaceComponent_JunoActorWorldLocation
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UPlayspaceComponent_JunoActorWorldLocation : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoActorWorldLocation");
			return ret;
		}

		void RemoveLocationInfoForActor(FGameplayTag& ActorTypeIdentifier, FGuid& LocationGUID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C9BAF8
		void GetLocationInfosForActorsOnTile(FGameplayTag& ActorTypeIdentifier, FGuid& TileGUID, TArray& LocationInfos); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C9BA18
		void GetLocationInfoForActorWithGUID(FGameplayTag& ActorTypeIdentifier, FGuid& ActorGuid, FJunoActorLocationInfo& LocationInfo); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C9B938
		void GetLocationInfoForActorOnEventTile(FGameplayTag& ActorTypeIdentifier, AActor Actor, FGameplayTag& LocationIdentifierTag, FJunoActorLocationInfo& LocationInfos); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9B858
		UPlayspaceComponent_JunoActorWorldLocation GetJunoActorWorldLocationPersistenceComponent(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C9B778
		void ChangeLocationInfoForActor(FGameplayTag& ActorTypeIdentifier, FGuid& ActorGuid, FJunoActorLocationInfo& NewLocationInfo); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C9B698
		void AddLocationInfoForActor(FGameplayTag& ActorTypeIdentifier, FJunoActorLocationInfo& ActorLocationInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9B5B8
	};


	// Class JunoGameNative.PlayspaceComponent_JunoLTMState
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UPlayspaceComponent_JunoLTMState : public UPlayspaceComponent	
	{
	public:
		FMulticastInlineDelegate OnLTMStateChanged; // 0xA0(0x10)
		unsigned char UnknownData01_7[0x60]; // 0xB0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoLTMState");
			return ret;
		}

		void StartLimitedTimeModeCinematic(FGameplayTag& CinematicID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9C1F8
		void RemoveLTMState(FGameplayTag OldState); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414C9C118
		bool IsLimitedTimeModeCinematicPlaying(FGameplayTag& CinematicID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C9C038
		bool HasLTMState(FGameplayTag TestState); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9BF58
		bool HasLimitedTimeModeCinematicPlayed(FGameplayTag& CinematicID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C9BE78
		UPlayspaceComponent_JunoLTMState GetJunoLTMState(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C9BD98
		void EndLimitedTimeModeCinematic(FGameplayTag& CinematicID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9BCB8
		void AddLTMState(FGameplayTag NewState); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414C9BBD8
	};


	// Class JunoGameNative.JunoCampWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoCampWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampWorldConditionSchema");
			return ret;
		}
	};


	// Class JunoGameNative.PlayspaceComponent_JunoRootCampManagement
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x478 (0x570 - 0xF8)
	class UPlayspaceComponent_JunoRootCampManagement : public UFortPlayspaceComponent	
	{
	public:
		FScalableFloat TimeBeforeSoftRemovedCampBecomesHardRemovedInJunoGameTimeHours; // 0xF8(0x28)
		FScalableFloat RunValidityChecksForCampPlacementOnServer; // 0x120(0x28)
		FScalableFloat RunValidityChecksForCampPlacementOnClients; // 0x148(0x28)
		FScalableFloat BoxExtentsForCampValidityCheck; // 0x170(0x28)
		FScalableFloat BoxExtentsForCampValidityCheckForPOIs; // 0x198(0x28)
		FScalableFloat BoxExtentsForCampAreaReservationBounds; // 0x1C0(0x28)
		FScalableFloat MoveCampWhenNewSquareIsAddedAfterSoftRemoval; // 0x1E8(0x28)
		FDataRegistryType PlayerPerks; // 0x210(0x4)
		FDataRegistryType NPCPerks; // 0x214(0x4)
		TMap NPCPerksPerBiome; // 0x218(0x50)
		unsigned char UnknownData04_6[0x30]; // 0x268(0x30) UNKNOWN PROPERTY
		UJunoAsyncAction_WaitForEventRouter WaitForEventRouterAction; // 0x298(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x2A0(0x10) UNKNOWN PROPERTY
		TArray ReplicatedCampDatas; // 0x2B0(0x10)
		TArray ReplicatedCampAreaReservationDatas; // 0x2C0(0x10)
		unsigned char UnknownData06_6[0x148]; // 0x2D0(0x148) UNKNOWN PROPERTY
		TArray ActivePOIEncounters; // 0x418(0x10)
		unsigned char UnknownData07_7[0x148]; // 0x428(0x148) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement");
			return ret;
		}

		bool IsAValidLocationForANewCamp(FVector& Location, FGameplayTagContainer SupportedCampTags, bool bShouldSkipEncounterCheck, FGameplayTagContainer& OutFailureReasons); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C9C3B8
		UPlayspaceComponent_JunoRootCampManagement GetRootPlayspaceJunoCampManagementComponent(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414C9C2D8
	};


	// Class JunoGameNative.JunoAwesomeInteractionConfigMappings
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoAwesomeInteractionConfigMappings : public UDataAsset	
	{
	public:
		TMap InteractionConfigMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomeInteractionConfigMappings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAwesomePlacementConfigMappings
	// Inherited from UDataAsset -> UObject
	// Size: 0x118 (0x148 - 0x30)
	class UJunoAwesomePlacementConfigMappings : public UDataAsset	
	{
	public:
		unsigned char UnknownData03_3[0xA0]; // 0x30(0xA0) UNKNOWN PROPERTY
		FDataRegistryType PlacementConfigRegistryType; // 0xD0(0x4)
		unsigned char UnknownData04_6[0x54]; // 0xD4(0x54) UNKNOWN PROPERTY
		UDataTable CategoryConfigTable; // 0x128(0x8)
		unsigned char UnknownData05_7[0x18]; // 0x130(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomePlacementConfigMappings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAwesomePoiConfigMappings
	// Inherited from UDataAsset -> UObject
	// Size: 0xD0 (0x100 - 0x30)
	class UJunoAwesomePoiConfigMappings : public UDataAsset	
	{
	public:
		FDataRegistryType AwesomeProgressionConfigRegistryType; // 0x30(0x4)
		unsigned char UnknownData02_6[0xA4]; // 0x34(0xA4) UNKNOWN PROPERTY
		FDataTableRowHandle DefaultConfig; // 0xD8(0x10)
		unsigned char UnknownData03_7[0x18]; // 0xE8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomePoiConfigMappings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAwesomeSystemDatabaseComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x148 - 0xF8)
	class UJunoAwesomeSystemDatabaseComponent : public UFortPlayspaceComponent	
	{
	public:
		UJunoAwesomeInteractionConfigMappings InteractionConfigMappings; // 0xF8(0x8)
		UJunoAwesomePlacementConfigMappings PlacementConfigMappings; // 0x100(0x8)
		UJunoAwesomePoiConfigMappings PoiConfigMappings; // 0x108(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x110(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomeSystemDatabaseComponent");
			return ret;
		}

		void HandleOnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414C9C498
	};


	// Class JunoGameNative.JunoAwesomeThresholdsComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UJunoAwesomeThresholdsComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate OnAwesomeLevelChanged; // 0xA0(0x10)
		TArray AwesomeThresholdToActionsMappings; // 0xB0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomeThresholdsComponent");
			return ret;
		}

		void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Private|HasOutParms 0x7FF414C9C578
	};


	// Class JunoGameNative.JunoAwesomeLevelComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1F8 (0x298 - 0xA0)
	class UJunoAwesomeLevelComponent : public UJunoCampComponentBase	
	{
	public:
		FMulticastInlineDelegate OnNonResourceRequirementsMetDelegate; // 0xA0(0x10)
		FMulticastInlineDelegate OnJunoAwesomeLevelChangedDelegate; // 0xB0(0x10)
		FMulticastInlineDelegate OnJunoAwesomePointModification; // 0xC0(0x10)
		FMulticastInlineDelegate OnJunoAwesomeComponentReadyDelegate; // 0xD0(0x10)
		unsigned char UnknownData06_6[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY
		int32_t AwesomeLevel; // 0xF8(0x4)
		int32_t CurrentAwesomePoints; // 0xFC(0x4)
		unsigned char UnknownData07_6[0x50]; // 0x100(0x50) UNKNOWN PROPERTY
		TArray AwesomePointGoals; // 0x150(0x10)
		TArray AwesomeUpgradeRequirements; // 0x160(0x10)
		FJunoAwesomeUpgradeRequirements CurrentUpgradeRequirements; // 0x170(0x20)
		unsigned char UnknownData08_6[0x50]; // 0x190(0x50) UNKNOWN PROPERTY
		FGameplayTagContainer CampPersistentTagsCopy; // 0x1E0(0x20)
		EJunoAwesomeConfigDeterminationType AwesomeConfigDeterminationType; // 0x200(0x1)
		EJunoBiome CampBiomeType; // 0x201(0x1)
		bool bNonResourceRequirementsMet; // 0x202(0x1)
		unsigned char UnknownData09_6[0x19]; // 0x203(0x19) UNKNOWN PROPERTY
		bool bIsReadyForUse; // 0x21C(0x1)
		bool bIsFromPersistence; // 0x21D(0x1)
		unsigned char UnknownData10_6[0x22]; // 0x21E(0x22) UNKNOWN PROPERTY
		FJunoAwesomePointModificationData CachedAwesomePointModificationData; // 0x240(0x28)
		FJunoAwesomeLevelChangeData CachedAwesomeLevelChangeData; // 0x268(0x18)
		bool bSkipAwesomeUpgradeResourceChecks; // 0x280(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x281(0x7) UNKNOWN PROPERTY
		TArray AwesomeLevelRewardEntries; // 0x288(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomeLevelComponent");
			return ret;
		}

		void TriggerAwesomeLevelChange(AFortPlayerController TriggeringPlayer, bool bForceUpgrade); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414C9DA78
		bool ProcessAwesomePointModifierCheat(int32_t AwesomePointAmount, AActor SourceActor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414C9D998
		void OnRep_NonResourceRequirementsMet(); // Flags: Final|Native|Protected 0x7FF414C9D8B8
		void OnRep_CurrentAwesomePoints(); // Flags: Final|Native|Protected 0x7FF414C9D7D8
		void OnRep_bIsReadyForUse(); // Flags: Final|Native|Private 0x7FF414C9D6F8
		void OnRep_AwesomeLevel(); // Flags: Final|Native|Protected 0x7FF414C9D618
		void OnAwesomeSettingsInitialized(); // Flags: Final|Native|Private 0x7FF414C9D538
		bool IsReadyForUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9D458
		EJunoAwesomeLevelUpgradeQueryResult IsAwesomeLevelUpPending(AFortPlayerController TriggeringPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9D378
		bool HasEnoughAwesomePointsForALevelUp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9D298
		bool HasAllNonResourceRequirementsMet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9D1B8
		int32_t GetMaxAwesomeLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9D0D8
		int32_t GetMaxAwesomeIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9CFF8
		FJunoAwesomeUpgradeRequirements GetCurrentUpgradeRequirements(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9CF18
		int32_t GetCurrentAwesomePointGoal(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9CE38
		int32_t GetCurrentAwesomePointFloor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9CD58
		EJunoBiome GetBiomeType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9CC78
		int32_t GetAwesomePointsNeededForNextLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9CB98
		int32_t GetAwesomePoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9CAB8
		TArray GetAwesomeLevelRewardEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9C9D8
		int32_t GetAwesomeLevelFromCurrentPoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9C8F8
		int32_t GetAwesomeLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9C818
		void BP_OnAwesomePointsModified(FJunoAwesomePointModificationData& ModificationData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C9C738
		void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C9C658
	};


	// Class JunoGameNative.JunoNamedPOIComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UJunoNamedPOIComponent : public UJunoCampComponentBase	
	{
	public:
		FMulticastInlineDelegate OnJunoPOINameChangedDelegate; // 0xA0(0x10)
		FMulticastInlineDelegate OnJunoPOIMarkerChangedDelegate; // 0xB0(0x10)
		unsigned char UnknownData04_6[0xA]; // 0xC0(0xA) UNKNOWN PROPERTY
		bool bUseStaticPOIName; // 0xCA(0x1)
		unsigned char UnknownData05_6[0x5]; // 0xCB(0x5) UNKNOWN PROPERTY
		FText POIName; // 0xD0(0x10)
		bool bUseStaticMarker; // 0xE0(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		FJunoMarker Marker; // 0xE8(0xC0)
		FGuid MarkerID; // 0x1A8(0x10)
		unsigned char UnknownData07_7[0x8]; // 0x1B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoNamedPOIComponent");
			return ret;
		}

		void SetPOIName(FText& NewPOIName); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414069A10
		void ProcessCampReadyLogic(FJunoCampAwesomeStatsData& ReadyData); // Flags: Final|Native|Private|HasOutParms 0x7FF414069930
		void PrepareForCampReadyLogic(); // Flags: Final|Native|Private 0x7FF414069850
		void OnRep_POIName(); // Flags: Final|Native|Private 0x7FF414069770
		void OnRep_MarkerId(); // Flags: Final|Native|Private 0x7FF414069690
		void OnRep_Marker(); // Flags: Final|Native|Private 0x7FF4140695B0
		void OnJunoPOINameChangedSignature__DelegateSignature(FText& NewName); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140694D0
		void OnJunoPOIMarkerChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140693F0
		void OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData); // Flags: Final|Native|Protected|HasOutParms 0x7FF414069310
		void OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Protected|HasOutParms 0x7FF414069230
		void K2_OnPlayerExitedCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, AJunoCampActor OwningCamp); // Flags: Event|Protected|BlueprintEvent 0x7FF414069150
		void K2_OnPlayerEnteredCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, AJunoCampActor OwningCamp); // Flags: Event|Protected|BlueprintEvent 0x7FF414069070
		void K2_OnCampNameChanged(FText& NewName, AJunoCampActor OwningCamp); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414068F90
		void K2_OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414068EB0
		void K2_OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414068DD0
		FText GetPOIName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414068CF0
		FJunoMarker GetMarker(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414068B50
	};


	// Class JunoGameNative.JunoAdventurePlayspaceBase
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x28 (0x6C8 - 0x6A0)
	class AJunoAdventurePlayspaceBase : public AFortPlayspace	
	{
	public:
		bool bShouldPersist; // 0x6A0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x6A1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer AdventureTags; // 0x6A8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAdventurePlayspaceBase");
			return ret;
		}

		void RemoveAdventureTags(FGameplayTagContainer& TagsToRemove); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9DDF8
		FGameplayTagContainer GetAdventureTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9DD18
		bool ContainsController(AController Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9DC38
		void AppendAdventureTags(FGameplayTagContainer& TagsToAdd); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9DB58
	};


	// Class JunoGameNative.JunoCampPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UJunoCampPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoAllCampsSaveData SavedAllCamps; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoQuestActorSpawnPoint
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class AJunoQuestActorSpawnPoint : public AActor	
	{
	public:
		FGameplayTagContainer SpawnTags; // 0x290(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoQuestActorSpawnPoint");
			return ret;
		}
	};


	// Class JunoGameNative.JunoQuestSystemInitReadyHelper
	// Inherited from UQuestSystemInitReadyHelperBase -> UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UJunoQuestSystemInitReadyHelper : public UQuestSystemInitReadyHelperBase	
	{
	public:
		unsigned char UnknownData01_1[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoQuestSystemInitReadyHelper");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_AwesomeLevelIncreased
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_AwesomeLevelIncreased : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_AwesomeLevelIncreased");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_BattleBusBoarded
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_BattleBusBoarded : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_BattleBusBoarded");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_CreaturePet
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_CreaturePet : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_CreaturePet");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_CreatureFed
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_CreatureFed : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_CreatureFed");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_EquipmentChanged
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_EquipmentChanged : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_EquipmentChanged");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_GuidedBuildCompleted
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_GuidedBuildCompleted : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_GuidedBuildCompleted");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_GuidedBuildStageCompleted
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_GuidedBuildStageCompleted : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_GuidedBuildStageCompleted");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_RecipeStateChanged
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_RecipeStateChanged : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_RecipeStateChanged");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_RecruitNPC
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_RecruitNPC : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_RecruitNPC");
			return ret;
		}
	};


	// Class JunoGameNative.JunoVerbProcessor_TemperatureUpdated
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoVerbProcessor_TemperatureUpdated : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoVerbProcessor_TemperatureUpdated");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAdventureGameplayVolume
	// Inherited from AGameplayVolume -> AActor -> UObject
	// Size: 0x40 (0x370 - 0x330)
	class AJunoAdventureGameplayVolume : public AGameplayVolume	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		bool bShouldPersist; // 0x338(0x1)
		bool bDestroyLinkedPlayspaceOnEndPlay; // 0x339(0x1)
		unsigned char UnknownData04_6[0x1E]; // 0x33A(0x1E) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x358(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x368(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAdventureGameplayVolume");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAINavInvokerComponent
	// Inherited from UNavigationInvokerComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UJunoAINavInvokerComponent : public UNavigationInvokerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAINavInvokerComponent");
			return ret;
		}

		void OnPlayerPossessed(APawn Pawn); // Flags: Final|Native|Protected 0x7FF414C9DFB8
		void OnNPCPossessed(APawn Pawn); // Flags: Final|Native|Protected 0x7FF414C9DED8
	};


	// Class JunoGameNative.JunoNavSystemConfig
	// Inherited from UAthenaNavSystemConfig -> UFortNavSystemConfig -> UNavigationSystemModuleConfig -> UNavigationSystemConfig -> UObject
	// Size: 0x0 (0xB8 - 0xB8)
	class UJunoNavSystemConfig : public UAthenaNavSystemConfig	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoNavSystemConfig");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsObjectNavigationComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UJunoPhysicsObjectNavigationComponent : public UActorComponent	
	{
	public:
		float LowSpeedThreshold; // 0xA0(0x4)
		float LowSpeedDistanceThreshold; // 0xA4(0x4)
		float LowSpeedRotationThreshold; // 0xA8(0x4)
		float LowSpeedScaleThreshold; // 0xAC(0x4)
		float LowSpeedDurationTrigger; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x6C]; // 0xB4(0x6C) UNKNOWN PROPERTY
		UPrimitiveComponent PrimitiveComponentAffectingNavMesh; // 0x120(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x128(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsObjectNavigationComponent");
			return ret;
		}

		void OnWake(UPrimitiveComponent SimulatingComponent, FName BoneName); // Flags: Final|RequiredAPI|Native|Protected 0x7FF414C9E418
		void OnSleep(UPrimitiveComponent SimulatingComponent, FName BoneName); // Flags: Final|RequiredAPI|Native|Protected 0x7FF414C9E338
		void OnRemovedFromClusterUnion(UClusterUnionComponent ClusterUnion, UPrimitiveComponent Component); // Flags: Final|RequiredAPI|Native|Protected 0x7FF414C9E258
		void OnClusterUnionPhysicsObjectAwakeChanged(UPrimitiveComponent SimulatingComponent, bool bIsAwake); // Flags: Final|RequiredAPI|Native|Protected 0x7FF414C9E178
		void OnAddedToClusterUnion(UClusterUnionComponent ClusterUnion, UPrimitiveComponent Component); // Flags: Final|RequiredAPI|Native|Protected 0x7FF414C9E098
	};


	// Class JunoGameNative.JunoBTService_UseOffhand
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UJunoBTService_UseOffhand : public UBTService	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBTService_UseOffhand");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGameFeatureAction_AddJunoAnalytics
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoGameFeatureAction_AddJunoAnalytics : public UGameFeatureAction	
	{
	public:
		UJunoAnalytics JunoAnalytics; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameFeatureAction_AddJunoAnalytics");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAnimationBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAnimationBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAnimationBlueprintLibrary");
			return ret;
		}

		void MakeBoneMaskFromInstanceDataAsset(UJunoBoneMaskInstanceDataAsset DataAsset, FBoneMask& OutBoneMask); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C9EA38
		void ImpactOrDamage(FGameplayTagContainer& DamageTags, AFortPawn DamageInstigator, AActor DamageSource, EImpactOrDamage_ExecutionPin& ExecutionPin); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C9E958
		bool HasMatchingImpactCue(FGameplayTagContainer& DamageTags, AFortPawn DamageInstigator, AActor DamageSource); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C9E878
		void GetClampedWarpTargetLocation(FVector WarpStartLocation, FVector WarpTargetLocation, float WarpTargetRadius, float WarpDistanceMax, bool ConstrainToPawnForwardVector, FVector PawnForward, FVector& ClampedTargetLocation, FRotator& FaceTargetRotation); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C9E798
		void GetCapsuleActorSpaceBounds(UCapsuleComponent Capsule, FVector& Origin, FVector& Extents); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414C9E6B8
		void AbilityMontage_SetNextSection(AFortPawn FortPawn, FName NextSection); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF414C9E5D8
		void AbilityMontage_ReplicatePosition(AFortPawn FortPawn, bool bReplicatePosition); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF414C9E4F8
	};


	// Class JunoGameNative.JunoAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x4C0 - 0x4A8)
	class UJunoAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x4A8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAnimInstance");
			return ret;
		}

		void UpdateAnimationTimer(float& TimeRemaining, bool& bTimeIsExpired, EUpdateAnimationTimer_ExecutionPin& ExecutionPin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9EDB8
		void RandomizeAnimationTimer(float MinTime, float MaxTime, float& TimeRemaining, bool& bTimeIsExpired); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C9ECD8
		UJunoAnimInstance GetMainAnimInstance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9EBF8
		float BlendCurvesByName(FName CurveA, FName CurveB, float Alpha); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9EB18
	};


	// Class JunoGameNative.JunoAnimNotifyState_RandomizeNextSection
	// Inherited from UFortAnimNotifyState_RandomizeNextSection -> UAnimNotifyState -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UJunoAnimNotifyState_RandomizeNextSection : public UFortAnimNotifyState_RandomizeNextSection	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAnimNotifyState_RandomizeNextSection");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGliderAnimInstance
	// Inherited from UFortGliderAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x20 (0x8A0 - 0x880)
	class UJunoGliderAnimInstance : public UFortGliderAnimInstance	
	{
	public:
		bool bIsSkydiving : 1; // 0x880:0(0x1)
		bool bIsParachuteOpen : 1; // 0x880:1(0x1)
		bool bGliderUseFastDeploy : 1; // 0x880:2(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x881(0x3) UNKNOWN PROPERTY
		float GliderPitch; // 0x884(0x4)
		float GliderRoll; // 0x888(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x88C(0x4) UNKNOWN PROPERTY
		UJunoPlayerAnimInstance PlayerAnimInstance; // 0x890(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x898(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGliderAnimInstance");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMinifigAnimationComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoMinifigAnimationComponent : public UPawnComponent	
	{
	public:
		FRotator MinifigLookAtRotation; // 0xA0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMinifigAnimationComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPawnAnimInstance
	// Inherited from UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x120 (0x5E0 - 0x4C0)
	class UJunoPawnAnimInstance : public UJunoAnimInstance	
	{
	public:
		FGameplayTag AggressiveGameplayTag; // 0x4C0(0x4)
		float PawnMovingSpeedThreshold; // 0x4C4(0x4)
		bool bIsFalling; // 0x4C8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x4C9(0x3) UNKNOWN PROPERTY
		float PawnSpeed2D; // 0x4CC(0x4)
		FVector PawnVelocity; // 0x4D0(0x18)
		FRotator PawnRotationRate; // 0x4E8(0x18)
		bool bPawnIsDying : 1; // 0x500:0(0x1)
		bool bPawnIsFalling : 1; // 0x500:1(0x1)
		bool bPawnIsOnGround : 1; // 0x500:2(0x1)
		bool bPawnIsIdling : 1; // 0x500:3(0x1)
		bool bPawnIsJumping : 1; // 0x500:4(0x1)
		bool bPawnIsMoving2D : 1; // 0x500:5(0x1)
		bool bPawnIsMovingOnGround : 1; // 0x500:6(0x1)
		bool bPawnWasMoving2D : 1; // 0x500:7(0x1)
		bool bPawnHasAcceleration : 1; // 0x501:0(0x1)
		bool bPawnHasRootMotion : 1; // 0x501:1(0x1)
		bool bPawnHasVelocity : 1; // 0x501:2(0x1)
		bool bPawnIdleBreakTimeIsExpired : 1; // 0x501:3(0x1)
		bool bPawnMovingIdleBreakTimeIsExpired : 1; // 0x501:4(0x1)
		bool bPawnIsAggressive : 1; // 0x501:5(0x1)
		unsigned char UnknownData07_5[0x6]; // 0x502(0x6) UNKNOWN PROPERTY
		FVector PawnAcceleration; // 0x508(0x18)
		float PawnAccelerationDirection; // 0x520(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x524(0x4) UNKNOWN PROPERTY
		FRotator PawnRotation; // 0x528(0x18)
		FRotator PawnRotationDelta; // 0x540(0x18)
		FRotator PawnRotationRateNormalized; // 0x558(0x18)
		FRotator PawnRootRotation; // 0x570(0x18)
		float PawnVelocityDirection; // 0x588(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x58C(0x4) UNKNOWN PROPERTY
		FVector PawnPreviousVelocity; // 0x590(0x18)
		float PawnIdleBreakTime; // 0x5A8(0x4)
		float PawnMovingIdleBreakTime; // 0x5AC(0x4)
		int32_t PawnCurrentLOD; // 0x5B0(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x5B4(0x4) UNKNOWN PROPERTY
		FVector PawnLocation; // 0x5B8(0x18)
		bool bClothEnabled : 1; // 0x5D0:0(0x1)
		bool bAnimDynamicsEnabled : 1; // 0x5D0:1(0x1)
		bool bRigidBodyEnabled : 1; // 0x5D0:2(0x1)
		unsigned char UnknownData11_7[0xF]; // 0x5D1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnAnimInstance");
			return ret;
		}

		void StartPawnMovingIdleBreakTimer(float MinTime, float MaxTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C9F3D8
		void StartPawnIdleBreakTimer(float MinTime, float MaxTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C9F2F8
		void OnStoppedBeingAggressive(); // Flags: Event|Protected|BlueprintEvent 0x7FF414C9F218
		void OnBecomeAggressive(); // Flags: Event|Protected|BlueprintEvent 0x7FF414C9F138
		UAnimMontage DetermineMoodReactionMontage(FGameplayTag& MoodReactionTag, UProxyTable MoodReactionProxyTable); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C9F058
		void ClearPawnMovingIdleBreakTimer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C9EF78
		void ClearPawnIdleBreakTimer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C9EE98
	};


	// Class JunoGameNative.JunoPlayerAnimInstance
	// Inherited from UJunoPawnAnimInstance -> UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x3B0 (0x990 - 0x5E0)
	class UJunoPlayerAnimInstance : public UJunoPawnAnimInstance	
	{
	public:
		float PlayerLookAngleFromPawnMax; // 0x5E0(0x4)
		float PlayerLookAngleFromRootMax; // 0x5E4(0x4)
		float PlayerFaceVisibleAngle; // 0x5E8(0x4)
		float PlayerRunningAccelerationThreshold; // 0x5EC(0x4)
		float PlayerWalkingAccelerationThreshold; // 0x5F0(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x5F4(0x4) UNKNOWN PROPERTY
		UCurveVector PlayerStrafeCurve; // 0x5F8(0x8)
		AFortPlayerPawn FortPlayerPawn; // 0x600(0x8)
		bool bIsAccelerating2D : 1; // 0x608:0(0x1)
		bool bIsSurfaceSwimming : 1; // 0x608:1(0x1)
		bool bIsMovingAndInMotionEmote : 1; // 0x608:2(0x1)
		bool bIsSlopeSliding; // 0x609(0x1)
		bool bIsInVehicle : 1; // 0x60A:0(0x1)
		unsigned char UnknownData13_5[0x5]; // 0x60B(0x5) UNKNOWN PROPERTY
		FVector LocalAcceleration; // 0x610(0x18)
		float LocalAccelYawAngle; // 0x628(0x4)
		unsigned char UnknownData14_6[0x4]; // 0x62C(0x4) UNKNOWN PROPERTY
		FVector LocalVelocity; // 0x630(0x18)
		float LocalVelocityRight; // 0x648(0x4)
		float LocalVelocityYawAngle; // 0x64C(0x4)
		float MaxSpeed; // 0x650(0x4)
		float MaxSwimSpeed; // 0x654(0x4)
		float VelocityZ; // 0x658(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x65C(0x4) UNKNOWN PROPERTY
		FVector WorldAcceleration; // 0x660(0x18)
		FVector WorldVelocity; // 0x678(0x18)
		FRotator ActorRotationLastTick; // 0x690(0x18)
		float YawDeltaCurrentTick; // 0x6A8(0x4)
		float YawDeltaLastTick; // 0x6AC(0x4)
		float YawDeltaSmoothed; // 0x6B0(0x4)
		bool bIsTacticalSprint : 1; // 0x6B4:0(0x1)
		bool bIsSkydiving : 1; // 0x6B4:1(0x1)
		bool bIsParachuteOpen : 1; // 0x6B4:2(0x1)
		unsigned char UnknownData16_5[0x3]; // 0x6B5(0x3) UNKNOWN PROPERTY
		float AimPitch; // 0x6B8(0x4)
		float FreeFallAimPitch; // 0x6BC(0x4)
		float SkydiveAimPitch; // 0x6C0(0x4)
		float SkydiveAimYaw; // 0x6C4(0x4)
		bool bMinifigDisableHeadConstraints : 1; // 0x6C8:0(0x1)
		bool bGliderUseFastDeploy : 1; // 0x6C8:1(0x1)
		bool bGliderIsOpen : 1; // 0x6C8:2(0x1)
		bool bGliderWasOpen : 1; // 0x6C8:3(0x1)
		bool bPlayerProp1Aim : 1; // 0x6C8:4(0x1)
		bool bPlayerProp2Aim : 1; // 0x6C8:5(0x1)
		bool bPlayerIsCold : 1; // 0x6C8:6(0x1)
		bool bPlayerIsMildCold : 1; // 0x6C8:7(0x1)
		bool bPlayerIsVeryCold : 1; // 0x6C9:0(0x1)
		bool bPlayerIsHot : 1; // 0x6C9:1(0x1)
		bool bPlayerIsMildHot : 1; // 0x6C9:2(0x1)
		bool bPlayerIsVeryHot : 1; // 0x6C9:3(0x1)
		bool bPlayerIsHumanControlled : 1; // 0x6C9:4(0x1)
		bool bPlayerIsSneaking : 1; // 0x6C9:5(0x1)
		bool bPlayerIsFastDiving : 1; // 0x6C9:6(0x1)
		bool bPlayerIsFishing : 1; // 0x6C9:7(0x1)
		bool bPlayerWasFishing : 1; // 0x6CA:0(0x1)
		bool bPlayerIsFocusing : 1; // 0x6CA:1(0x1)
		bool bPlayerIsFlying : 1; // 0x6CA:2(0x1)
		bool bPlayerIsZiplining : 1; // 0x6CA:3(0x1)
		bool bPlayerIsFacingController : 1; // 0x6CA:4(0x1)
		bool bPlayerIsMovingBackwards : 1; // 0x6CA:5(0x1)
		bool bPlayerIsProp1AimTargetValid : 1; // 0x6CA:6(0x1)
		bool bPlayerIsPushing : 1; // 0x6CA:7(0x1)
		bool bPlayerWasPushing : 1; // 0x6CB:0(0x1)
		bool bPlayerIsRunning : 1; // 0x6CB:1(0x1)
		bool bPlayerIsSprinting : 1; // 0x6CB:2(0x1)
		bool bPlayerIsWalking : 1; // 0x6CB:3(0x1)
		bool bPlayerIsWaterJumping : 1; // 0x6CB:4(0x1)
		bool bPlayerShouldMove : 1; // 0x6CB:5(0x1)
		bool bPlayerShouldTurnInPlace : 1; // 0x6CB:6(0x1)
		bool bPlayerFaceIsVisible : 1; // 0x6CB:7(0x1)
		bool bPlayerUpperBodyIsSwinging : 1; // 0x6CC:0(0x1)
		bool bPlayerProp1MontageActive : 1; // 0x6CC:1(0x1)
		bool bPlayerProp2MontageActive : 1; // 0x6CC:2(0x1)
		bool bPlayerHeadShouldFollowCamera : 1; // 0x6CC:3(0x1)
		TEnumAsByte PlayerMovementStyle; // 0x6CD(0x1)
		unsigned char UnknownData17_6[0x2]; // 0x6CE(0x2) UNKNOWN PROPERTY
		float PlayerAccelerationAmount; // 0x6D0(0x4)
		unsigned char UnknownData18_6[0x4]; // 0x6D4(0x4) UNKNOWN PROPERTY
		FRotator PlayerLookAtRotation; // 0x6D8(0x18)
		FRotator PlayerRotationTarget; // 0x6F0(0x18)
		FRotator PlayerPreviousRotationTarget; // 0x708(0x18)
		float PlayerRotationTargetRate; // 0x720(0x4)
		float PlayerVelocityYawRate; // 0x724(0x4)
		float PlayerUseProceduralFaceAnim; // 0x728(0x4)
		FJunoMinifigLayeringMask LayeringMask; // 0x72C(0xA0)
		unsigned char UnknownData19_6[0x4]; // 0x7CC(0x4) UNKNOWN PROPERTY
		FInputAlphaBoolBlend SecondaryMotionLODBlend; // 0x7D0(0x48)
		int32_t SecondaryMotionLODThreshold; // 0x818(0x4)
		float SecondaryMotionLODBlendTime; // 0x81C(0x4)
		float GliderPitch; // 0x820(0x4)
		float GliderRoll; // 0x824(0x4)
		AFortWeapon PlayerMainHandItem; // 0x828(0x8)
		AFortWeapon PlayerOffHandItem; // 0x830(0x8)
		FVector2D PlayerAimOffset; // 0x838(0x10)
		FVector PlayerAimOffsetTemp; // 0x848(0x18)
		FVector2D PlayerProp1AimOffset; // 0x860(0x10)
		FVector PlayerProp1AimTargetLocation; // 0x870(0x18)
		FRotator PlayerSlopeMatchingRotationOffset; // 0x888(0x18)
		float PlayerSlopeMatchingWeight; // 0x8A0(0x4)
		unsigned char UnknownData20_6[0x4]; // 0x8A4(0x4) UNKNOWN PROPERTY
		FRotator PlayerPreviousRootRotation; // 0x8A8(0x18)
		EJunoMinifigRotationMode PlayerRotationMode; // 0x8C0(0x1)
		unsigned char UnknownData21_6[0x7]; // 0x8C1(0x7) UNKNOWN PROPERTY
		FRotator SmoothedRotationTarget; // 0x8C8(0x18)
		FRotator SuperSmoothedRotationTarget; // 0x8E0(0x18)
		FRotator PlayerStartingRotation; // 0x8F8(0x18)
		float PlayerStartingAngle; // 0x910(0x4)
		bool bPlayerEmotionHasChanged; // 0x914(0x1)
		unsigned char UnknownData22_6[0x3]; // 0x915(0x3) UNKNOWN PROPERTY
		FFortAnimInput_RandomizeMontageSection JunoRandomizeMontageSectionInput; // 0x918(0x18)
		bool bForcePlayerToFacePawnRotation; // 0x930(0x1)
		unsigned char UnknownData23_7[0x5F]; // 0x931(0x5F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerAnimInstance");
			return ret;
		}

		void UpdatePlayerRotationTarget(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA02B8
		void UpdatePlayerRootRotation(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA01D8
		void UpdatePlayerCurveRotateToStaticTarget(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA00F8
		void UpdatePlayerCurveRotateToMovingTarget(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA0018
		void UpdatePlayerContinuousRotateToTarget(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C9FF38
		void UpdatePlayerAimOffsetWithRootCompensation(FRotator LookAtRotation, float InterpSpeed, bool bCompensate, float DeltaSeconds); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414C9FE58
		void UpdatePlayerAimOffset(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C9FD78
		bool ShouldForcePlayerToFacePawnRotation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9FC98
		void SetPlayerRotationMode(EJunoMinifigRotationMode RotationMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C9FBB8
		void OnPlayerStoppedPushing(); // Flags: Event|Public|BlueprintEvent 0x7FF414C9FAD8
		void OnPlayerOffHandItemChanged(AFortWeapon CurrentItem); // Flags: Event|Public|BlueprintEvent 0x7FF414C9F9F8
		void OnPlayerMainHandItemChanged(AFortWeapon CurrentItem); // Flags: Event|Public|BlueprintEvent 0x7FF414C9F918
		void OnPlayerEmotionChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414C9F838
		float GetPlayerStrideScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9F758
		void GetPlayerRotationTargetInterpolationSpeeds(float& SmoothedSpeed, float& SuperSmoothedSpeed); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C9F678
		EJunoMinifigRotationMode GetPlayerRotationMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9F598
		float GetPlayerLeanAmount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C9F4B8
	};


	// Class JunoGameNative.JunoPropAnimInstance
	// Inherited from UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x4D0 - 0x4C0)
	class UJunoPropAnimInstance : public UJunoAnimInstance	
	{
	public:
		bool bIsMoving2D; // 0x4C0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x4C1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPropAnimInstance");
			return ret;
		}
	};


	// Class JunoGameNative.AudioEventAggregatorSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UAudioEventAggregatorSubsystem : public UWorldSubsystem	
	{
	public:
		FMulticastInlineDelegate OnSoundBreakEvents; // 0x30(0x10)
		FMulticastInlineDelegate OnSoundCollisionEvents; // 0x40(0x10)
		FMulticastInlineDelegate OnActiveSoundBreakEventsUpdated; // 0x50(0x10)
		FMulticastInlineDelegate OnActiveSoundCollisionEventsUpdated; // 0x60(0x10)
		UWorld World; // 0x70(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x78(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.AudioEventAggregatorSubsystem");
			return ret;
		}

		void SetRadius(float Radius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA0C58
		void SetCollisionEventLifetime(float Time); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA0B78
		void SetCollisionDeltaVelocityMagnitudeThreshold(float Magnitude); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA0A98
		void SetBreakEventLifetime(float Time); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA09B8
		void RemoveActiveCollisionEvent(FGuid EventId); // Flags: Final|Native|Public|HasDefaults 0x7FF414CA08D8
		void RemoveActiveBreakEvent(FGuid EventId); // Flags: Final|Native|Public|HasDefaults 0x7FF414CA07F8
		bool IsAggregatingCollisionEvents(); // Flags: Final|Native|Public 0x7FF414CA0718
		void InitChaosEventRelay(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA0638
		void FilterAndGroupCollisionEvents(TArray& CollisionEvents); // Flags: Final|Native|Public|HasOutParms 0x7FF414CA0558
		void FilterAndGroupBreakEvents(TArray& BreakEvents); // Flags: Final|Native|Public|HasOutParms 0x7FF414CA0478
		void DeinitChaosEventRelay(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA0398
	};


	// Class JunoGameNative.JunoFoleyContext
	// Inherited from UFortPlayerFoleyContext -> UFortSoundLibraryContext -> USoundLibraryContext -> UObject
	// Size: 0x8 (0x140 - 0x138)
	class UJunoFoleyContext : public UFortPlayerFoleyContext	
	{
	public:
		float PitchMultiplier; // 0x138(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFoleyContext");
			return ret;
		}
	};


	// Class JunoGameNative.JunoActiveItemAnimContext
	// Inherited from USoundLibraryAnimContext -> USoundLibraryContext -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoActiveItemAnimContext : public USoundLibraryAnimContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActiveItemAnimContext");
			return ret;
		}
	};


	// Class JunoGameNative.JunoSmartSoundLibraryContext
	// Inherited from USoundLibraryAnimContext -> USoundLibraryContext -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoSmartSoundLibraryContext : public USoundLibraryAnimContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoSmartSoundLibraryContext");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCameraMode_OrbitCam
	// Inherited from UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x2C0 (0x1FC0 - 0x1D00)
	class UJunoCameraMode_OrbitCam : public UFortCameraMode_ThirdPerson	
	{
	public:
		bool bIsBuildPreviewMode; // 0x1D00(0x1)
		unsigned char UnknownData05_6[0xF]; // 0x1D01(0xF) UNKNOWN PROPERTY
		FTransform BuildPreviewActorTransform; // 0x1D10(0x60)
		FBox BuildPreviewLocalBounds; // 0x1D70(0x38)
		bool bOverrideCameraOriginDuringBuildPreview; // 0x1DA8(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x1DA9(0x7) UNKNOWN PROPERTY
		UCurveFloat BuildPreviewBoundsToForwardDistanceScale; // 0x1DB0(0x8)
		double BuildingPreviewHeightAdditionalZoom; // 0x1DB8(0x8)
		double BuildingSizeMin; // 0x1DC0(0x8)
		double BuildingSizeMax; // 0x1DC8(0x8)
		double BuildingScalarDistanceOffsetInterpSpeed; // 0x1DD0(0x8)
		UMaterialParameterCollection JunoMaterialCollection; // 0x1DD8(0x8)
		FName Tag_IgnoredActors; // 0x1DE0(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x1DE4(0x4) UNKNOWN PROPERTY
		double VerticalProbeLength; // 0x1DE8(0x8)
		float FrontalAngledProbeAngle; // 0x1DF0(0x4)
		float FrontalAngledProbeLength; // 0x1DF4(0x4)
		double ViewTargetHeight; // 0x1DF8(0x8)
		int32_t VerticalProbeTickSkip; // 0x1E00(0x4)
		int32_t FrontalProbeTickSkip; // 0x1E04(0x4)
		double NonAttackingFollowInterp; // 0x1E08(0x8)
		double AttackingFollowInterp; // 0x1E10(0x8)
		double FollowInterpBlenuOutSpeed; // 0x1E18(0x8)
		double FollowInterpBlendInSpeed; // 0x1E20(0x8)
		double GroundInterpBlendOutSpeed; // 0x1E28(0x8)
		double GroundInterpBlendInSpeed; // 0x1E30(0x8)
		double GroundedZInterp; // 0x1E38(0x8)
		double NonGroundedZInterp; // 0x1E40(0x8)
		bool UseVelocityViewTargetLeading; // 0x1E48(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1E49(0x7) UNKNOWN PROPERTY
		double MaxVelocityCamOffset; // 0x1E50(0x8)
		double DotParallelThreshold; // 0x1E58(0x8)
		double VelOffsetSpeed; // 0x1E60(0x8)
		UCurveFloat Curve_VelocityInterpSpeed; // 0x1E68(0x8)
		double StrafingVelOffsetInterpSpeed; // 0x1E70(0x8)
		double MinVelOffsetInterpSpeed; // 0x1E78(0x8)
		unsigned char UnknownData09_7[0x140]; // 0x1E80(0x140) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCameraMode_OrbitCam");
			return ret;
		}

		void UpdateCameraNativeRawTranslation(AActor ViewTarget, float DeltaTime, FTViewTarget& OutVT, FOrbitCamLocalUpdateVariables& OutLocalVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CA1898
		void UpdateCameraNative(AActor ViewTarget, float DeltaTime, FTViewTarget& OutVT, FOrbitCamLocalUpdateVariables& OutLocalVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CA17B8
		void UpdateCameraBP(AActor ViewTarget, float DeltaTime, FTViewTarget& OutVT); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CA16D8
		void UpdateCamera_UpdateViewTargetSpaceViewOffset(FTViewTarget& OutVT, FOrbitCamLocalUpdateVariables& LocalUpdateVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CA15F8
		void UpdateCamera_UpdateVerticalProbeTrace(AActor ViewTargetActor); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CA1518
		void UpdateCamera_UpdateHidePawnPenetrationPercent(FOrbitCamLocalUpdateVariables& LocalUpdateVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CA1438
		void UpdateCamera_UpdateFrontalProbeTrace(AActor ViewTargetActor); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CA1358
		void UpdateCamera_UpdateCameraSpaceViewOffset(FTViewTarget& OutVT, FOrbitCamLocalUpdateVariables& LocalUpdateVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CA1278
		void UpdateCamera_UpdateCameraOriginInterpSpeed(FOrbitCamLocalUpdateVariables& LocalUpdateVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CA1198
		FOrbitCamLocalUpdateVariables UpdateCamera_ComputeLocalUpdateVariables(AActor ViewTarget, float DeltaTime, FTViewTarget& OutVT); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414CA10B8
		void OnBecomeActiveBP(AActor ViewTarget); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA0FD8
		bool IsCurrentlyInBuildPreviewMode(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CA0EF8
		AJunoBuilderTool GetBuildPreviewerFromViewTarget(AActor ViewTarget); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CA0E18
		bool CalculateCameraOriginForBuildPreview(AActor ViewTarget, FVector& OutOrigin); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF414CA0D38
	};


	// Class JunoGameNative.FortClientPilot_QuickSmokeJuno
	// Inherited from UFortClientPilot_GameplayBase -> UFortClientPilot_Base -> UClientPilotComponent -> UObject
	// Size: 0x10 (0x320 - 0x310)
	class UFortClientPilot_QuickSmokeJuno : public UFortClientPilot_GameplayBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x310(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.FortClientPilot_QuickSmokeJuno");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGameStateComponent_Codex
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UJunoGameStateComponent_Codex : public UGameFrameworkComponent	
	{
	public:
		FDataRegistryType CodexEntryRegistryType; // 0xA0(0x4)
		FDataRegistryType CraftingStationUIDataRegistryType; // 0xA4(0x4)
		bool bIsCodexEnabled; // 0xA8(0x1)
		unsigned char UnknownData01_6[0x17]; // 0xA9(0x17) UNKNOWN PROPERTY
		TMap ItemTagToEntryName; // 0xC0(0x50)
		TMap ItemDefinitionToEntryName; // 0x110(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_Codex");
			return ret;
		}

		void OnRep_IsCodexEnabled(); // Flags: Final|Native|Private 0x7FF414CA1A58
		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414CA1978
	};


	// Class JunoGameNative.FortPickupInteractOverrideComponent_Juno
	// Inherited from UFortPickupInteractOverrideComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UFortPickupInteractOverrideComponent_Juno : public UFortPickupInteractOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.FortPickupInteractOverrideComponent_Juno");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAIPersistenceComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UJunoAIPersistenceComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0xA8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAIPersistenceComponent");
			return ret;
		}

		void HandleControllerChanged(APawn Pawn, AController OldController, AController NewController); // Flags: Final|Native|Protected 0x7FF414CA1F98
		void HandleAIFullySpawned(AAIController Controller, AFortPawn Pawn); // Flags: Final|Native|Protected 0x7FF414CA1EB8
		FGameplayTag GetUniqueAIIdentifier(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA1DD8
		AFortPawn CostlyFindSpawnedNPCByUniqueAIIdentifier(UWorld World, FGameplayTag& UniqueAIIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414CA1CF8
		AFortPawn CostlyFindSpawnedCreatureByUniqueAIIdentifier(UWorld World, FGameplayTag& UniqueAIIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414CA1C18
		AFortPawn CostlyFindSpawnedAIByUniqueAIIdentifier(UWorld World, FGameplayTag& UniqueAIIdentifier, bool bSearchForNPC, bool bSearchForCreature); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414CA1B38
	};


	// Class JunoGameNative.JunoCameraModeOverrideComponent
	// Inherited from UFortCameraModeOverrideComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UJunoCameraModeOverrideComponent : public UFortCameraModeOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCameraModeOverrideComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UJunoControllerComponent_BedAssignmentNetworkEvents : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY
		FJunoReplicatedCharacterData ReplicatedCharacterData; // 0xC0(0x28)
		unsigned char UnknownData03_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents");
			return ret;
		}

		FText TryFindCharacterDisplayName(FGameplayTag& CharacterGameplayTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CA2698
		void ServerHandleEndInteraction(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414CA25B8
		void ServerAttemptAssignPlayerCharacter(AActor ReceivingActor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414CA24D8
		void ServerAttemptAssignAICharacter(AActor ReceivingActor, FGameplayTag CharacterGameplayTag); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414CA23F8
		void OnRep_CharacterData(); // Flags: Final|Native|Private 0x7FF414CA2318
		void HandleCampObjectInteracted(AActor ReceivingActor); // Flags: Final|Native|Public 0x7FF414CA2238
		FJunoReplicatedCharacterData GetCharacterData(); // Flags: Final|RequiredAPI|Native|Public 0x7FF414CA2158
		void ClientNotifyObjectInteracted(AActor ReceivingActor); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414CA2078
	};


	// Class JunoGameNative.JunoControllerComponent_ControlChannelNetworkEvents
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UJunoControllerComponent_ControlChannelNetworkEvents : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_ControlChannelNetworkEvents");
			return ret;
		}

		void ServerSetControlEnabled(bool bEnabled); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414CA2938
		void ServerSetControlChannelValue(UJunoControlChannelComponent ControlChannelComponent, FGameplayTag ChannelTag, float InValue); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414CA2858
		void ServerChangeChannelForActor(AActor Actor, bool bIsBroadcaster, int32_t NewChannelColorIndex, bool bIsSelected); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 0x7FF414CA2778
	};


	// Class JunoGameNative.JunoGameStateComponent_PickupManagement
	// Inherited from UFortGameStateComponent_PickupManagement -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x180 - 0x170)
	class UJunoGameStateComponent_PickupManagement : public UFortGameStateComponent_PickupManagement	
	{
	public:
		FDataTableRowHandle SettingsRow; // 0x170(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_PickupManagement");
			return ret;
		}

		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414CA2A18
	};


	// Class JunoGameNative.JunoInputBasedAFKComponent
	// Inherited from UFortInputBasedAFKComponent -> UFortAFKComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x238 - 0x1B8)
	class UJunoInputBasedAFKComponent : public UFortInputBasedAFKComponent	
	{
	public:
		FDataTableRowHandle AFKTableRowEntry; // 0x1B8(0x10)
		FInputBasedAFKDetectionParameters CachedAFKDetectionParameters; // 0x1C8(0x70)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputBasedAFKComponent");
			return ret;
		}

		void HandleInventoryItemChanged(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CA2AF8
	};


	// Class JunoGameNative.JunoPlayspaceAccountantComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x118 - 0xF8)
	class UJunoPlayspaceAccountantComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceAccountantComponent");
			return ret;
		}

		void SetPersistentValue(FName ValueName, int32_t Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CA3118
		bool IsAccountantReady(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA3038
		void IncrementPersistentValue(FName ValueName, int32_t Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CA2F58
		int32_t GetPersistentValue(FName ValueName); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA2E78
		UJunoPlayspaceAccountantComponent GetJunoRootPlayspaceAccountantComponent(UObject WorldContextObject); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414CA2D98
		UJunoPlayspaceAccountantComponent GetJunoPlayspaceAccountantComponent(UObject WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CA2CB8
		void DecrementPersistentValue(FName ValueName, int32_t Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CA2BD8
	};


	// Class JunoGameNative.JunoNamedRandomStreamGenerator
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoNamedRandomStreamGenerator : public UObject	
	{
	public:
		int32_t RandomSeed; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoNamedRandomStreamGenerator");
			return ret;
		}

		int32_t GetSeed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA33B8
		FRandomStream GenerateRandomStream(FString Name, FVector OptionalLocation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA32D8
		int32_t GenerateRandomSeed(FString Name, FVector OptionalLocation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA31F8
	};


	// Class JunoGameNative.JunoPlayspaceRandomStreamComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x108 - 0xF8)
	class UJunoPlayspaceRandomStreamComponent : public UFortPlayspaceComponent	
	{
	public:
		int32_t PlayspaceRandomSeed; // 0xF8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		UJunoNamedRandomStreamGenerator RandomStreamGenerator; // 0x100(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceRandomStreamComponent");
			return ret;
		}

		void OnVolumeGuidChanged(AActor Actor, FGuid NewGuid); // Flags: Final|Native|Private|HasDefaults 0x7FF414CA3AB8
		void OnVolumeBoundsChanged(APlayspace Playspace); // Flags: Final|Native|Private 0x7FF414CA39D8
		void OnRep_PlayspaceRandomSeed(); // Flags: Final|RequiredAPI|Native|Private 0x7FF414CA38F8
		UJunoNamedRandomStreamGenerator GetRandomGeneratorBP(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414CA3818
		UJunoPlayspaceRandomStreamComponent GetJunoRootPlayspaceRandomStreamComponent(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414CA3738
		UJunoPlayspaceRandomStreamComponent GetJunoPlayspaceRandomStreamComponent(UObject WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CA3658
		FRandomStream GenerateRandomStream(FString Name, FVector OptionalLocation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA3578
		int32_t GenerateRandomSeed(FString Name, FVector OptionalLocation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA3498
	};


	// Class JunoGameNative.JunoHarvestingComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UJunoHarvestingComponent : public UPlayspaceComponent	
	{
	public:
		float HeightOffset; // 0xA0(0x4)
		float HorizontalConeRadius; // 0xA4(0x4)
		float VerticalConeRadius; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UDataTable BuildingTagToResourceDataTable; // 0xB0(0x8)
		FGameplayTagContainer ResourceIdentifierTags; // 0xB8(0x20)
		FGameplayTagContainer BuildingTagsToIgnoreForResourceSplitting; // 0xD8(0x20)
		FDataRegistryType CraftingIngredientRegistryType; // 0xF8(0x4)
		float TimeToRegenHealth; // 0xFC(0x4)
		TArray BuildingsHitList; // 0x100(0x10)
		float ResourcePercentToReturn; // 0x110(0x4)
		int32_t PickupsPerResource; // 0x114(0x4)
		TWeakObjectPtr PickupClassPtr; // 0x118(0x20)
		float TossSpeed; // 0x138(0x4)
		float ConeHalfAngleDegrees; // 0x13C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoHarvestingComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayerSpawningComponent
	// Inherited from UPlayspaceComponent_PlayerSpawning -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x108 - 0xB0)
	class UJunoPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning	
	{
	public:
		unsigned char UnknownData02_3[0x28]; // 0xB0(0x28) UNKNOWN PROPERTY
		FGameplayTagContainer AllowedTeamStartTags; // 0xD8(0x20)
		unsigned char UnknownData03_7[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerSpawningComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCoreMutators
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x48 (0x380 - 0x338)
	class AJunoCoreMutators : public AFortAthenaMutator	
	{
	public:
		FMulticastInlineDelegate OnPawnLoaded; // 0x338(0x10)
		FMulticastInlineDelegate OnClientInitialLoadingFinished; // 0x348(0x10)
		bool bIsJunoPlayspaceReady; // 0x358(0x1)
		unsigned char UnknownData01_7[0x27]; // 0x359(0x27) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCoreMutators");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistentPlayspace
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x168 (0x808 - 0x6A0)
	class AJunoPersistentPlayspace : public AFortPlayspace	
	{
	public:
		unsigned char UnknownData04_3[0x58]; // 0x6A0(0x58) UNKNOWN PROPERTY
		TArray RequiredPersistenceFeatureDataClassesNative; // 0x6F8(0x10)
		unsigned char UnknownData05_6[0x8]; // 0x708(0x8) UNKNOWN PROPERTY
		UJunoPlayspacePersistenceComponent PersistenceComponent; // 0x710(0x8)
		TArray RequiredPersistenceFeatureDataClasses; // 0x718(0x10)
		ESpatialLoadingState SpatialLoadingState; // 0x728(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x729(0x3) UNKNOWN PROPERTY
		FName PersistenceMainLevelUniquePackageName; // 0x72C(0x4)
		TWeakObjectPtr PersistenceMainLevelWeakPtr; // 0x730(0x8)
		uint32_t PlayspaceRequestKey; // 0x738(0x4)
		unsigned char UnknownData07_7[0xCC]; // 0x73C(0xCC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistentPlayspace");
			return ret;
		}

		bool ShouldBeTrackedByPlayspace(AActor Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414CA3E38
		void SetShouldBeTrackedByPlayspace(AActor Actor, bool bShouldBeTracked); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414CA3D58
		void RemoveActorWhenEndPlay(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Private 0x7FF414CA3C78
		void EnableSpawnedActorTracking(AActor Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414CA3B98
	};


	// Class JunoGameNative.JunoRootPlayspace
	// Inherited from AJunoPersistentPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x200 (0xA08 - 0x808)
	class AJunoRootPlayspace : public AJunoPersistentPlayspace	
	{
	public:
		unsigned char UnknownData07_3[0x38]; // 0x808(0x38) UNKNOWN PROPERTY
		TWeakObjectPtr OwningController; // 0x840(0x8)
		FGameplayTag DefaultInventoryItemTag; // 0x848(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x84C(0x4) UNKNOWN PROPERTY
		UPlayspaceComponent_JunoServerExpiration JunoServerExpiration; // 0x850(0x8)
		UJunoPlayerSpawningComponent JunoPlayerSpawningComponent; // 0x858(0x8)
		unsigned char UnknownData09_6[0x30]; // 0x860(0x30) UNKNOWN PROPERTY
		float ProcessPlayerProgressionTime; // 0x890(0x4)
		unsigned char UnknownData10_6[0xC]; // 0x894(0xC) UNKNOWN PROPERTY
		UClass JunoStateMachineClass; // 0x8A0(0x8)
		EWorldDataAvailable WorldDataAvailable; // 0x8A8(0x1)
		bool bRootPlayspaceReady; // 0x8A9(0x1)
		bool bReadyToApplyPersistentData; // 0x8AA(0x1)
		unsigned char UnknownData11_6[0x5]; // 0x8AB(0x5) UNKNOWN PROPERTY
		UJunoWorld CurrentJunoWorld; // 0x8B0(0x8)
		unsigned char UnknownData12_6[0x8]; // 0x8B8(0x8) UNKNOWN PROPERTY
		FJunoReplicatedWorldMetadata MetadataForReplication; // 0x8C0(0xC8)
		UJunoPlayerPersistenceComponent JunoPlayerPersistenceComponent; // 0x988(0x8)
		unsigned char UnknownData13_7[0x78]; // 0x990(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRootPlayspace");
			return ret;
		}

		void OnRep_WorldMetadata(); // Flags: Final|Native|Private 0x7FF414CA40D8
		void OnPeriodicSaveCompletedSuccessfully(); // Flags: Final|Native|Private 0x7FF414CA3FF8
		void OnCheckInAllCompletedSuccessfully(); // Flags: Final|Native|Private 0x7FF414CA3F18
	};


	// Class JunoGameNative.JunoStateMachine
	// Inherited from UGameplayStateMachine -> UGameplayState -> UObject
	// Size: 0x0 (0xC8 - 0xC8)
	class UJunoStateMachine : public UGameplayStateMachine	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoStateMachine");
			return ret;
		}
	};


	// Class JunoGameNative.JunoState_Setup
	// Inherited from UGameplayState -> UObject
	// Size: 0x28 (0xA0 - 0x78)
	class UJunoState_Setup : public UGameplayState	
	{
	public:
		TWeakObjectPtr PossibleWorldsDataTable; // 0x78(0x20)
		int32_t WorldRandomSeed; // 0x98(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoState_Setup");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCreatureAnimInstance
	// Inherited from UJunoPawnAnimInstance -> UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x290 (0x870 - 0x5E0)
	class UJunoCreatureAnimInstance : public UJunoPawnAnimInstance	
	{
	public:
		bool bIsTurning; // 0x5E0(0x1)
		bool bWasTurning; // 0x5E1(0x1)
		bool bIdleShuffleTurnDirection; // 0x5E2(0x1)
		unsigned char UnknownData10_6[0x1]; // 0x5E3(0x1) UNKNOWN PROPERTY
		float IdleShufflePlayRate; // 0x5E4(0x4)
		bool bIsIdleShuffleTurn; // 0x5E8(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x5E9(0x7) UNKNOWN PROPERTY
		FVector CreaturePosition; // 0x5F0(0x18)
		FVector CreaturePositionDelta; // 0x608(0x18)
		FRotator CreatureRootRotation; // 0x620(0x18)
		FRotator CreatureRootRotationOffset; // 0x638(0x18)
		FRotator CreatureRotation; // 0x650(0x18)
		FRotator CreatureRotationDelta; // 0x668(0x18)
		FVector CreatureVelocity; // 0x680(0x18)
		float CreatureYaw; // 0x698(0x4)
		float CreatureYawDelta; // 0x69C(0x4)
		bool RootSmoothing_Enabled; // 0x6A0(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x6A1(0x3) UNKNOWN PROPERTY
		float RootSmoothing_Distance; // 0x6A4(0x4)
		bool bSlopeWarpingIsEnabled; // 0x6A8(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x6A9(0x3) UNKNOWN PROPERTY
		float SlopeWarpingFloorCheckFrequency; // 0x6AC(0x4)
		float SlopeWarpingRollAlpha; // 0x6B0(0x4)
		bool bStartingInPlace; // 0x6B4(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x6B5(0x3) UNKNOWN PROPERTY
		FVector StartInPlace_RootTranslation; // 0x6B8(0x18)
		UAnimSequence StartInPlace_Sequence; // 0x6D0(0x8)
		float StartInPlace_SequenceTime; // 0x6D8(0x4)
		bool bTurningInPlace; // 0x6DC(0x1)
		bool bTurnInPlace_UseAuthoredAngle; // 0x6DD(0x1)
		unsigned char UnknownData15_6[0x2]; // 0x6DE(0x2) UNKNOWN PROPERTY
		UAnimSequence TurnAnimation; // 0x6E0(0x8)
		float TurnInPlace_AnimationAuthoredAngle; // 0x6E8(0x4)
		float TurnPlayRate; // 0x6EC(0x4)
		float TurnInPlace_RootRotationZ; // 0x6F0(0x4)
		float TurnInPlace_RotationAngle; // 0x6F4(0x4)
		float TurnInPlace_RotationAngle_Min; // 0x6F8(0x4)
		float TurnInPlace_RotationRate; // 0x6FC(0x4)
		UAnimSequence TurnInPlace_Sequence; // 0x700(0x8)
		float TurnInPlace_SequenceTime; // 0x708(0x4)
		bool bStateRule_Idle_Moving; // 0x70C(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x70D(0x3) UNKNOWN PROPERTY
		float IdleShuffleTurnThreshold; // 0x710(0x4)
		float IdleShuffleTurnDirectionThreshold; // 0x714(0x4)
		float IdleShufflePlayRateInRangeA; // 0x718(0x4)
		float IdleShufflePlayRateInRangeB; // 0x71C(0x4)
		float IdleShufflePlayRateOutRangeA; // 0x720(0x4)
		float IdleShufflePlayRateOutRangeB; // 0x724(0x4)
		bool bHasValidAimTarget; // 0x728(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x729(0x7) UNKNOWN PROPERTY
		FVector AimTargetLocation; // 0x730(0x18)
		float AimTime; // 0x748(0x4)
		float LookAtAlpha; // 0x74C(0x4)
		float MaxDistanceToPlayerForLookAt; // 0x750(0x4)
		float LookAtTooFarFromPlayerTimeOut; // 0x754(0x4)
		bool bDisableLookAtDuringMontage; // 0x758(0x1)
		bool bStartTurn; // 0x759(0x1)
		unsigned char UnknownData18_6[0x2]; // 0x75A(0x2) UNKNOWN PROPERTY
		float TurnAngle; // 0x75C(0x4)
		float TurnRate; // 0x760(0x4)
		FName DisableHeadTrackingCurveName; // 0x764(0x4)
		FJunoRidingAnimationData RidingAnimationData; // 0x768(0x14)
		float Speed; // 0x77C(0x4)
		bool bPlayLandAdditive; // 0x780(0x1)
		bool bIsFloating; // 0x781(0x1)
		bool bIsSurfaceSwimming; // 0x782(0x1)
		bool bIsTurningInPlace; // 0x783(0x1)
		unsigned char UnknownData19_7[0xEC]; // 0x784(0xEC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCreatureAnimInstance");
			return ret;
		}

		void TurnInPlace_Started(); // Flags: Event|Public|BlueprintEvent 0x7FF414CA48B8
		void TurnInPlace_SignalAnimationEnded(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA47D8
		void TurnInPlace_Setup(UAnimSequence TurnAnimSequence); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA46F8
		void TurnInPlace_Interrupted(); // Flags: Event|Public|BlueprintEvent 0x7FF414CA4618
		void TurnInPlace_Ended(); // Flags: Event|Public|BlueprintEvent 0x7FF414CA4538
		void StartInPlace_Started(); // Flags: Event|Public|BlueprintEvent 0x7FF414CA4458
		void StartInPlace_Setup(UAnimSequence StartAnimSequence); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA4378
		bool CreatureIsMovingRight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA4298
		bool CreatureIsMovingLeft(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA41B8
	};


	// Class JunoGameNative.JunoCreatureAnimInstance_LootLlama
	// Inherited from UJunoCreatureAnimInstance -> UJunoPawnAnimInstance -> UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x30 (0x8A0 - 0x870)
	class UJunoCreatureAnimInstance_LootLlama : public UJunoCreatureAnimInstance	
	{
	public:
		bool bHighVelocity; // 0x870(0x1)
		bool bIsInterruptible; // 0x871(0x1)
		bool bLocoToIdle; // 0x872(0x1)
		bool bIdleToLoco; // 0x873(0x1)
		bool bJumpStartToJumpLoop; // 0x874(0x1)
		bool bJumpLandToMovement; // 0x875(0x1)
		bool bIsRunning; // 0x876(0x1)
		bool bIdleToFalling; // 0x877(0x1)
		bool bToppledOnGround; // 0x878(0x1)
		bool bTransitionToLand; // 0x879(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x87A(0x2) UNKNOWN PROPERTY
		float TargetDistance; // 0x87C(0x4)
		bool bTargetIsClose; // 0x880(0x1)
		bool bIsToppled; // 0x881(0x1)
		bool bIsLeaking; // 0x882(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x883(0x1) UNKNOWN PROPERTY
		float MinHighVelocityMagnitude; // 0x884(0x4)
		float MaxInterruptibleCurveValue; // 0x888(0x4)
		float LocoIdleTransitionThreshold; // 0x88C(0x4)
		float RunSpeedThreshold; // 0x890(0x4)
		float JumpLandToMovementInterruptibleThreshold; // 0x894(0x4)
		float MinTargetIsCloseDistance; // 0x898(0x4)
		FName CurveName_Interruptible; // 0x89C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCreatureAnimInstance_LootLlama");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDamageFormulaExecutionCalculation
	// Inherited from UFortDamageFormulaExecutionCalculation -> UFortGameplayEffectExecutionCalculation -> UGameplayEffectExecutionCalculation -> UGameplayEffectCalculation -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UJunoDamageFormulaExecutionCalculation : public UFortDamageFormulaExecutionCalculation	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDamageFormulaExecutionCalculation");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventory
	// Inherited from AFortInventory -> AActor -> UObject
	// Size: 0x80 (0x5B8 - 0x538)
	class AJunoInventory : public AFortInventory	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x538(0x30) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x568(0x10)
		unsigned char UnknownData04_6[0x28]; // 0x578(0x28) UNKNOWN PROPERTY
		int32_t InventoryCapacity; // 0x5A0(0x4)
		FGuid InventoryHandleGuid; // 0x5A4(0x10)
		bool bIsPersistent; // 0x5B4(0x1)
		bool bWasSpawnedByLevelSaveRecord; // 0x5B5(0x1)
		unsigned char UnknownData05_7[0x2]; // 0x5B6(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventory");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventoryManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UJunoInventoryManagerComponent : public UActorComponent	
	{
	public:
		TArray InventoryHandles; // 0xA0(0x10)
		TArray InventoryInstances; // 0xB0(0x10)
		unsigned char UnknownData01_7[0x30]; // 0xC0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryManagerComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventoryPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UJunoInventoryPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoInventoriesSaveData SavedInventories; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInventoryUIPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x50 (0xA8 - 0x58)
	class UJunoInventoryUIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoInventoryUISaveData SavedInventoryUI; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayerInventoryComponent
	// Inherited from UJunoInventoryComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x3A8 - 0x310)
	class UJunoPlayerInventoryComponent : public UJunoInventoryComponent	
	{
	public:
		FMulticastInlineDelegate OnItemReplacedEvent; // 0x310(0x10)
		FScalableFloat AutoReplacementDelay; // 0x320(0x28)
		unsigned char UnknownData01_7[0x60]; // 0x348(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerInventoryComponent");
			return ret;
		}

		void TrySwappingReplacementItem(UFortItem ItemToSwap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA4B58
		void OnPlayerPawnPossessed(APawn PossessedPawn); // Flags: Final|Native|Protected 0x7FF414CA4A78
		void ClientOnItemReplaced(); // Flags: Net|NetReliableNative|Event|Protected|NetClient 0x7FF414CA4998
	};


	// Class JunoGameNative.JunoBuilderTool
	// Inherited from AFortWeapon -> AActor -> UObject
	// Size: 0x68 (0x1648 - 0x15E0)
	class AJunoBuilderTool : public AFortWeapon	
	{
	public:
		FMulticastInlineDelegate OnBuilderToolInteractionStarted; // 0x15E0(0x10)
		FMulticastInlineDelegate OnBuilderToolInteractionStopped; // 0x15F0(0x10)
		UJunoInputMappingComponentData InputMappingData; // 0x1600(0x8)
		UInputAction UnEquipInputAction; // 0x1608(0x8)
		FGameplayTagContainer ActivatedTags; // 0x1610(0x20)
		TArray InteractionBehaviors; // 0x1630(0x10)
		UJunoBuilderToolInteractionBehavior ActiveInteractionBehavior; // 0x1640(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuilderTool");
			return ret;
		}

		void ServerStartInteraction(TArray SelectedActors, FGuid SelectionGUID); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 0x7FF414CA56B8
		void ServerClearInteraction(bool bExited); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414CA55D8
		void ReceiveInteractionStarted(UJunoBuilderToolInteractionBehavior InteractionBehavior); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA54F8
		void ReceiveInteractionEnded(UJunoBuilderToolInteractionBehavior InteractionBehavior); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA5418
		void MulticastStartInteractionOnRemoteClients(UJunoBuilderToolInteractionBehavior InteractionBehavior, TArray SelectedActors, FGuid SelectionGUID); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 0x7FF414CA5338
		void MulticastClearInteractionOnRemoteClients(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414CA5258
		bool IsRunningOnOwningClient(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5178
		bool IsEnabled(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CA5098
		FGuid GetSelectionGUID(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA4FB8
		TArray GetSelectedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA4ED8
		UJunoBuilderToolInteractionBehavior GetActiveInteractionBehavior(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA4DF8
		void ClientStopInteraction(bool bIsExiting); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF414CA4D18
		void ClientStartInteraction(UJunoBuilderToolInteractionBehavior InteractionBehavior, TArray SelectedActors, FGuid SelectionGUID); // Flags: Final|Net|NetReliableNative|Event|Private|HasDefaults|NetClient 0x7FF414CA4C38
	};


	// Class JunoGameNative.JunoBuilderToolInteractionBehavior
	// Inherited from UActorComponent -> UObject
	// Size: 0x1C0 (0x260 - 0xA0)
	class UJunoBuilderToolInteractionBehavior : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnInteractionStart; // 0xA0(0x10)
		FMulticastInlineDelegate OnInteractionTrigger; // 0xB0(0x10)
		FMulticastInlineDelegate OnInteractionEnd; // 0xC0(0x10)
		FMulticastInlineDelegate OnInteractionExit; // 0xD0(0x10)
		bool bShouldAddToParent; // 0xE0(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		int32_t Priority; // 0xE4(0x4)
		FDataTableRowHandle ConfigData; // 0xE8(0x10)
		FGameplayTagContainer ActivatedTags; // 0xF8(0x20)
		unsigned char UnknownData06_6[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
		UInputMappingContext InputMappingContext; // 0x120(0x8)
		int32_t InputMappingPriority; // 0x128(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		UInputAction TriggerInputAction; // 0x130(0x8)
		UInputAction ExitInputAction; // 0x138(0x8)
		unsigned char UnknownData08_6[0x10]; // 0x140(0x10) UNKNOWN PROPERTY
		UClass StartInteractionAbility; // 0x150(0x8)
		UClass EndInteractionAbility; // 0x158(0x8)
		UClass FailAbility; // 0x160(0x8)
		UClass ExitAbility; // 0x168(0x8)
		FJunoBuilderToolInteractionActorClassSet SupportedClasses; // 0x170(0xA0)
		TArray SelectedActors; // 0x210(0x10)
		FGuid SelectionGUID; // 0x220(0x10)
		TArray ClientPredictedActors; // 0x230(0x10)
		TArray ServerSpawnedActors; // 0x240(0x10)
		unsigned char UnknownData09_7[0x10]; // 0x250(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuilderToolInteractionBehavior");
			return ret;
		}

		void ServerSpawnSelectedActors(FJunoBuilderToolSelectionSpawnParams SelectionSpawnParameters); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414CA69F8
		void ServerOnSpawnedActorProcessedByClient(FName StableName); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414CA6918
		void ReceiveTriggerInteraction(); // Flags: Event|Public|BlueprintEvent 0x7FF414CA6838
		void ReceiveTickInteraction(); // Flags: Event|Public|BlueprintEvent 0x7FF414CA6758
		void ReceiveStartInteractionOnServer(TArray& Actors, FGuid& Guid); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414CA6678
		void ReceiveStartInteractionOnRemoteClient(TArray& Actors, FGuid& Guid); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414CA6598
		void ReceiveStartInteractionOnClient(TArray& Actors, FGuid& Guid); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414CA64B8
		void ReceiveSpawnedActor(AActor SpawnedActor); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA63D8
		void ReceiveExitInteraction(bool bClearInteractionBehavior); // Flags: Event|Public|BlueprintEvent 0x7FF414CA62F8
		void ReceiveEndInteraction(); // Flags: Event|Public|BlueprintEvent 0x7FF414CA6218
		void ReceiveClearInteractionOnRemoteClient(); // Flags: Event|Public|BlueprintEvent 0x7FF414CA6138
		void PlayGameplayAbility(UClass AbilityClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA6058
		void OnRep_ServerSpawnedActors(); // Flags: Final|Native|Private 0x7FF414CA5F78
		bool IsRunningOnOwningClient(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5E98
		bool IsActiveBehavior(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5DB8
		FGuid GetSelectionGUID(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5CD8
		TArray GetSelectedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5BF8
		APlayerController GetPlayerController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5B18
		APawn GetInstigator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5A38
		AFortPlayerController GetFortPlayerController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5958
		AJunoBuilderTool GetBuilderTool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA5878
		void ClientOnServerSpawnSelectedActorsFailed(TArray FailedNames); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient 0x7FF414CA5798
	};


	// Class JunoGameNative.JunoBuildingActor
	// Inherited from AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x30 (0xCA8 - 0xC78)
	class AJunoBuildingActor : public AJunoBuildingProp	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0xC78(0x18) UNKNOWN PROPERTY
		UJunoConnectivityComponent Connectivity; // 0xC90(0x8)
		AJunoGuidedBuildingLandscapeVisualModifierActor TerrainVisualModifierActor; // 0xC98(0x8)
		bool bCanRegenHealth : 1; // 0xCA0:0(0x1)
		bool bShouldPersist; // 0xCA1(0x1)
		bool bPreventDestroyingFoliageWhenPlaced; // 0xCA2(0x1)
		unsigned char UnknownData03_7[0x5]; // 0xCA3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingActor");
			return ret;
		}

		void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, UActorComponent TargetActorComponent); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CA6E58
		void OnRep_bPreventDestroyingFoliageWhenPlaced(); // Flags: Final|Native|Private 0x7FF414CA6D78
		void OnPlacedInWorld(bool bFinalize, TArray& SupportCandidates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CA6C98
		void OnBuildingActorDetached(); // Flags: Native|Protected 0x7FF414CA6BB8
		void OnBuildingActorAttached(FGraphIslandHandle& IslandHandle); // Flags: Native|Protected|HasOutParms 0x7FF414CA6AD8
	};


	// Class JunoGameNative.JunoBuildingAssociatedItemInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBuildingAssociatedItemInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingAssociatedItemInterface");
			return ret;
		}

		bool CanRemoveAssociatedItemFromInventory(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414CA6F38
	};


	// Class JunoGameNative.JunoBuildingBehaviorBase
	// Inherited from UJunoBuilderToolInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x158 (0x3B8 - 0x260)
	class UJunoBuildingBehaviorBase : public UJunoBuilderToolInteractionBehavior	
	{
	public:
		UClass PreviewerClass; // 0x260(0x8)
		FJunoBuildingPreviewParams DefaultPreviewParams; // 0x268(0x18)
		AJunoBuildingPreviewer Previewer_Internal; // 0x280(0x8)
		unsigned char UnknownData04_6[0x20]; // 0x288(0x20) UNKNOWN PROPERTY
		EJunoBuildingBehaviorState BuildingState; // 0x2A8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x2A9(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer BuildingStateTags; // 0x2B0(0x20)
		FMulticastInlineDelegate OnBuildingStateChanged; // 0x2D0(0x10)
		FMulticastInlineDelegate OnBuildingStateTagsChanged; // 0x2E0(0x10)
		FMulticastInlineDelegate OnEnterPreviewMode; // 0x2F0(0x10)
		FMulticastInlineDelegate OnExitPreviewMode; // 0x300(0x10)
		UJunoInputMappingComponentData PreviewInputMappingData; // 0x310(0x8)
		UInputAction BuildingPreviewModeCameraRotationAction; // 0x318(0x8)
		float LocationLerpAlpha; // 0x320(0x4)
		float RotationLerpAlpha; // 0x324(0x4)
		FMulticastInlineDelegate OnPositionInterpStart; // 0x328(0x10)
		FMulticastInlineDelegate OnPositionInterpEnd; // 0x338(0x10)
		unsigned char UnknownData06_6[0x8]; // 0x348(0x8) UNKNOWN PROPERTY
		bool bIsCurrentlyInPreviewMode; // 0x350(0x1)
		EJunoBuildModeType CurrentBuildMode; // 0x351(0x1)
		unsigned char UnknownData07_6[0x1E]; // 0x352(0x1E) UNKNOWN PROPERTY
		FGameplayTagQuery SpatialInterfaceSelectionQuery; // 0x370(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingBehaviorBase");
			return ret;
		}

		void SetDisabled(bool bShouldBeDisabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CA7EF8
		void ServerUpdatePreview(FTransform NewSelectionToWorld, EJunoBuildingBehaviorState NewBuildingState); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 0x7FF414CA7E18
		void ReceivePositionInterpStart(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA7D38
		void ReceivePositionInterpEnd(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA7C58
		void ReceiveBuildingStateChanged(EJunoBuildingBehaviorState PreviousState, EJunoBuildingBehaviorState NewState); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA7B78
		void MulticastUpdatePreviewOnRemoteClients(FTransform NewSelectionToWorld, EJunoBuildingBehaviorState NewBuildingState); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 0x7FF414CA7A98
		bool IsDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA79B8
		void HandleBuildModeChanged(FJunoEvent_BuildingModeChanged& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CA78D8
		FTransform GetTargetSelectionToWorld(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA77F8
		FTransform GetSelectionToWorld(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA7718
		FBox GetPreviewWorldBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA7638
		FBox GetPreviewLocalBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA7558
		AJunoBuildingPreviewer GetPreviewer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA7478
		FJunoBuildingPreviewParams GetDefaultPreviewParams(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA7398
		FGameplayTagContainer GetBuildingStateTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA72B8
		EJunoBuildingBehaviorState GetBuildingState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA71D8
		bool CanSelectedActorsBePlaced(TArray& InSelectedActors, FTransform& InSelectionToWorld, FGameplayTagContainer& OutBuildingStateTags); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF414CA70F8
		bool CanPlaceSelectedActors(FGameplayTagContainer& OutBuildingStateTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CA7018
	};


	// Class JunoGameNative.JunoBuildingBehavior
	// Inherited from UJunoBuildingBehaviorBase -> UJunoBuilderToolInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x658 (0xA10 - 0x3B8)
	class UJunoBuildingBehavior : public UJunoBuildingBehaviorBase	
	{
	public:
		UInputAction RotateInputAction; // 0x3B8(0x8)
		UInputAction NudgeInputAction; // 0x3C0(0x8)
		UInputAction ToggleNudgeInputAction; // 0x3C8(0x8)
		UInputAction AdjacencyInputAction; // 0x3D0(0x8)
		UInputAction SnapToggleInputAction; // 0x3D8(0x8)
		double OffGridRotationStep; // 0x3E0(0x8)
		float MaxSelectionDistance; // 0x3E8(0x4)
		float MaxSelectionDistanceZ; // 0x3EC(0x4)
		FVector MaxConnectivityDistance; // 0x3F0(0x18)
		FJunoBuildingBehaviorGridLimits DefaultGridOffsetLimit; // 0x408(0x10)
		FVector PenetrationTolerance; // 0x418(0x18)
		FJunoBuildingBehaviorOverrides Overrides; // 0x430(0x260)
		unsigned char UnknownData04_6[0x2B0]; // 0x690(0x2B0) UNKNOWN PROPERTY
		bool bEnableAdjacency; // 0x940(0x1)
		bool bEnableSnapPlacement; // 0x941(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x942(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnToggleSnapping; // 0x948(0x10)
		FMulticastInlineDelegate OnSmoothingChanged; // 0x958(0x10)
		FMulticastInlineDelegate OnPlacementTypeChanged; // 0x968(0x10)
		unsigned char UnknownData06_6[0x20]; // 0x978(0x20) UNKNOWN PROPERTY
		FJunoBuildingBehaviorStateContext CachedBuildingStateContext; // 0x998(0x40)
		FMulticastInlineDelegate OnBuildingStateContextChanged; // 0x9D8(0x10)
		double LastTriggerRequestedTimestamp; // 0x9E8(0x8)
		double LastTriggerTimestamp; // 0x9F0(0x8)
		unsigned char UnknownData07_7[0x18]; // 0x9F8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingBehavior");
			return ret;
		}

		void ToggleAdjacency(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414CA9BD8
		bool ShouldRotateAroundGridOffset(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414CA9AF8
		bool ShouldMinDistanceIncludeBounds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA9A18
		void RotateSelection(double Delta); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414CA9938
		void ReceiveSnappingEnabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA9858
		void ReceiveSnappingDisabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA9778
		void ReceiveRotateSelection(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA9698
		void ReceivePositionChangedGridCell(FVector& GridCellLocation); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414CA95B8
		void ReceiveNudgeInputAction(bool bOffsetChanged); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA94D8
		void ReceivedFailedInteraction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CA93F8
		bool IsSnapPlacementEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA9318
		bool IsAdjacencyEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA9238
		bool HasAnySnapEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414CA9158
		FVector GetWorldSpacePivotOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA9078
		FVector2D GetWorldSpaceGridOffsetLimits(FVector2D& MinOffset, FVector2D& MaxOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8F98
		FVector2D GetWorldSpaceGridOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8EB8
		FHitResult GetTargetTraceResult(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8DD8
		FJunoBuildingSnapContext GetSnapContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8CF8
		FVector GetPivotOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8C18
		FVector GetPenetrationTolerance(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8B38
		float GetMinSelectionDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8A58
		float GetMaxSelectionDistanceZ(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8978
		float GetMaxSelectionDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8898
		FVector GetMaxConnectivityDistance(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA87B8
		FJunoBuildingPlacementResult GetLastPlacementResult(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA86D8
		FVector GetGridSnapOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA85F8
		FVector GetGridSize(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8518
		FJunoBuildingBehaviorGridLimits GetGridOffsetLimits(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8438
		FIntPoint GetGridOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8358
		FJunoBuildingConnectivityContext GetConnectivityContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8278
		FJunoBuildingBehaviorInteractionRow GetConfigData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA8198
		FJunoBuildingBehaviorStateContext GetBuildingStateContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CA80B8
		void AddGridOffset(FIntPoint& OffsetDelta); // Flags: Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CA7FD8
	};


	// Class JunoGameNative.JunoBuildingBehaviorSelectedActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBuildingBehaviorSelectedActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface");
			return ret;
		}

		bool ValidateSupport(FJunoBuilderToolSupportCandidate& Candidate, FGameplayTagContainer& OutTags); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAAB98
		void UpdateNoTargetPlacement(FTransform& NewSelectionToWorld, FTransform& NewUnsnappedSelectionToWorld, FTransform& NewBasis, FTransform& ActorToSelection, FJunoBuildingPlacementResult& PlacementResult, UJunoBuildingBehavior Behavior); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF414CAAAB8
		bool ShouldUpdateNoTargetPlacement(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA9D8
		bool ShouldMinDistanceIncludeBounds(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA8F8
		bool ShouldIgnoreOverlaps(UPrimitiveComponent PrimComp, AActor OverlappingActor); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA818
		bool ShouldBeGridAligned(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA738
		FRotator GetRotationOffset(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA658
		FVector GetPivotOffset(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA578
		FJunoBuilderToolInteractionActorClassSet GetOverlappableClasses(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA498
		float GetMinDistance(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA3B8
		FVector GetGridSnapOffset(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA2D8
		FVector GetGridSize(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA1F8
		FJunoBuildingBehaviorGridLimits GetGridOffsetLimits(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA118
		TArray GetFloatingValidationDirections(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CAA038
		FTransform GetCoordinateBasis(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CA9F58
		UClass GetCameraMode(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CA9E78
		bool CanSupport(UClass ActorClass); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CA9D98
		bool CanPlaceSelectedActor(UJunoBuildingBehavior Behavior, FTransform& ToWorld, FGameplayTagContainer& OutBuildingStateTags); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CA9CB8
	};


	// Class JunoGameNative.JunoBuildingBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBuildingBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingBlueprintLibrary");
			return ret;
		}

		bool IsPathInNewJunoThemePluginArchitecture(FString Path); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414CAB1B8
		FVector GetUnitGridSize(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414CAB0D8
		FTransform GetTargetTransform(FJunoBuildingPlacementResult& PlacementResult); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414CAAFF8
		FHitResult GetTargetTraceResult(FJunoBuildingPlacementResult& PlacementResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CAAF18
		TArray GetSupportCandidates(FJunoBuilderToolSelectionSpawnParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CAAE38
		EJunoBuildingPlacementType GetPlacementType(FJunoBuildingPlacementResult& PlacementResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CAAD58
		FTransform GetCoordinateBasis(FJunoBuildingPlacementResult& PlacementResult); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414CAAC78
	};


	// Class JunoGameNative.JunoBuildingGameplayActor
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xB0 (0xA38 - 0x988)
	class AJunoBuildingGameplayActor : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData02_3[0x88]; // 0x988(0x88) UNKNOWN PROPERTY
		UJunoGeometryCollectionAssemblerComponent GeometryCollectionAssemblerComponent; // 0xA10(0x8)
		UItemDefinitionBase AssociatedItem; // 0xA18(0x8)
		bool bShouldPersist; // 0xA20(0x1)
		unsigned char UnknownData03_7[0x17]; // 0xA21(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingGameplayActor");
			return ret;
		}

		void SetAssociatedItem(UItemDefinitionBase Item); // Flags: Native|Public|BlueprintCallable 0x7FF414CAB6F8
		bool HasBeenMigrated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAB618
		UItemDefinitionBase GetAssociatedItem(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAB538
		bool BlueprintCanDropResourceWithTagOnDeath(FGameplayTag ResourceTag); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414CAB458
		bool BlueprintCanDropResourceOnDeath(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414CAB378
		bool BlueprintCanDropItemOnDestroy(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414CAB298
	};


	// Class JunoGameNative.JunoBuildingSnapEditorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoBuildingSnapEditorComponent : public UActorComponent	
	{
	public:
		TArray SnapEntries; // 0xA0(0x10)
		bool bShowUnselectedTargetingAreas; // 0xB0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingSnapEditorComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingSnappingLocation
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x250 - 0x220)
	class UJunoBuildingSnappingLocation : public USceneComponent	
	{
	public:
		FGameplayTagContainer LocationTags; // 0x220(0x20)
		TArray SnapEntries; // 0x240(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingSnappingLocation");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDamageableBuildingInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoDamageableBuildingInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDamageableBuildingInterface");
			return ret;
		}

		void OnBuildingHandleOutOfHealth(FGameplayEffectContextHandle& EffectContext, AController EventInstigator, AActor DamageCauser, FGameplayTagContainer& InTags); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414CAB8B8
		void OnBuildingHandleDamage(AActor DamageCauser); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414CAB7D8
	};


	// Class JunoGameNative.JunoGuidedBuildingActor
	// Inherited from AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x5C8 (0x1240 - 0xC78)
	class AJunoGuidedBuildingActor : public AJunoBuildingProp	
	{
	public:
		unsigned char UnknownData09_3[0x20]; // 0xC78(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCurrentStageUpdateDelegate; // 0xC98(0x10)
		FMulticastInlineDelegate OnStageUpdateDelegate; // 0xCA8(0x10)
		FMulticastInlineDelegate OnStageCompleteDelegate; // 0xCB8(0x10)
		FMulticastInlineDelegate OnSectionCompleteDelegate; // 0xCC8(0x10)
		FMulticastInlineDelegate OnSetCompleteDelegate; // 0xCD8(0x10)
		FMulticastInlineDelegate OnSetIncompleteDelegate; // 0xCE8(0x10)
		FMulticastInlineDelegate OnSetUnfinishedDelegate; // 0xCF8(0x10)
		FMulticastInlineDelegate OnCurrentStageChange; // 0xD08(0x10)
		FMulticastInlineDelegate OnSnapsUpdatedDelegate; // 0xD18(0x10)
		unsigned char UnknownData10_6[0x8]; // 0xD28(0x8) UNKNOWN PROPERTY
		FName GuidedBuildingRecipe; // 0xD30(0x4)
		unsigned char UnknownData11_6[0x4]; // 0xD34(0x4) UNKNOWN PROPERTY
		TArray DataArray; // 0xD38(0x10)
		FJunoGuidedBuildingStateArray StateArray; // 0xD48(0x120)
		FJunoStageKey CurrentStage; // 0xE68(0x8)
		FJunoGuidedBuildingSetCompleteState SetCompleteState; // 0xE70(0x10)
		FDateTime TimeStarted; // 0xE80(0x8)
		FUniqueNetIdRepl OwningPlayerID; // 0xE88(0x30)
		FJunoGuidedBuildingSetData SetData; // 0xEB8(0x90)
		AFortPlayerController LocalRegisteredController; // 0xF48(0x8)
		AJunoGuidedBuildingLandscapeVisualModifierActor TerrainVisualModifierActor; // 0xF50(0x8)
		unsigned char UnknownData12_6[0x68]; // 0xF58(0x68) UNKNOWN PROPERTY
		FJunoGuidedBuildingRegisteredPlayerArray RegisteredPlayers; // 0xFC0(0x148)
		TWeakObjectPtr AutoCompleteInstigatingPawn; // 0x1108(0x8)
		UClass OptionalCameraMode; // 0x1110(0x8)
		FGuid BuildId; // 0x1118(0x10)
		TArray PendingAutoCompleteJobs; // 0x1128(0x10)
		TArray CurrentAutoCompleteBatches; // 0x1138(0x10)
		unsigned char UnknownData13_6[0x38]; // 0x1148(0x38) UNKNOWN PROPERTY
		bool bSkipFoundation; // 0x1180(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x1181(0x3) UNKNOWN PROPERTY
		FJunoStageKey AutoCompleteStageKey; // 0x1184(0x8)
		bool bInstantBuildAutoComplete; // 0x118C(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x118D(0x3) UNKNOWN PROPERTY
		UClass DisplayActorClass; // 0x1190(0x8)
		AJunoGuidedBuildingDisplayActor DisplayActor; // 0x1198(0x8)
		bool bEnablePreciseCollision; // 0x11A0(0x1)
		unsigned char UnknownData16_6[0x8F]; // 0x11A1(0x8F) UNKNOWN PROPERTY
		UJunoConnectivityComponent ConnectivityComponent; // 0x1230(0x8)
		unsigned char UnknownData17_7[0x8]; // 0x1238(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingActor");
			return ret;
		}

		void UpdateBlueprintColor(FJunoGuidedBuildingBrushState& BrushState); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CAD2F8
		void ShowSparkleEffect(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414CAD218
		void SetupComponent(UPrimitiveComponent PrimComp); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414CAD138
		void SetToAutoCompleteToStage(APawn InInstigator, FJunoStageKey& InAutoCompleteToStage); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CAD058
		void SetToAutoCompleteCurrentStage(APawn InInstigator); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CACF78
		void SetToAutoComplete(APawn InInstigator); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CACE98
		void SetTerrainVisualModifierOptions(EJunoLandscapeVisualModifierType InModifierType, FTransform& InTransform); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CACDB8
		void OnRep_SetCompleteState(); // Flags: Final|Native|Protected 0x7FF414CACCD8
		void OnRep_RegisteredPlayers(); // Flags: Final|Native|Protected 0x7FF414CACBF8
		void OnRep_CurrentStage(FJunoStageKey OldKeyVal); // Flags: Final|Native|Protected 0x7FF414CACB18
		void OnGhostBrushesVisible(bool bIsFocused, bool bCanBlendVisibility); // Flags: Event|Protected|BlueprintEvent 0x7FF414CACA38
		void OnGhostBrushesHidden(bool bCanBlendVisibility); // Flags: Event|Protected|BlueprintEvent 0x7FF414CAC958
		void OnFilledPieceDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF414CAC878
		void OnFilledPieceDestroyed(AActor Actor); // Flags: Final|Native|Protected 0x7FF414CAC798
		bool IsSetComplete(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAC6B8
		bool IsRecipeInStage(FJunoStageKey& InStageKey, FName& Recipe); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CAC5D8
		bool IsRecipeInCurrentStage(FName& Recipe); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CAC4F8
		bool IsOwningPlayerController(APlayerController Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAC418
		bool IsOwnedByAnyPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAC338
		void HideSparkleEffect(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414CAC258
		FGuidedBuildingUpdate GetStageUpdate(FJunoStageKey& InKey); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CAC178
		FJunoGuidedBuildingSetCompleteState GetSetCompleteState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAC098
		FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipeInCurrentStage(FName& Recipe); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CABFB8
		FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipe(FJunoStageKey& InStageKey, FName& Recipe); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CABED8
		bool GetPartsInStage(FJunoStageKey& InStageKey, TArray& OutArray); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CABDF8
		bool GetPartsInCurrentStage(TArray& OutArray); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CABD18
		FJunoGuidedBuildRemainingPartsInfo GetMissingPartsForRecipe(FName& Recipe); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CABC38
		void GetMissingParts(TArray& OutArray); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CABB58
		FGuidedBuildingUpdate GetLatestUpdate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CABA78
		EJunoGuidedBuildingState GetEntryState(int32_t BuildingDataIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAB998
	};


	// Class JunoGameNative.JunoGuidedBuildingBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoGuidedBuildingBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary");
			return ret;
		}

		void ShowProgressUpTo(FJunoStageKey& InStageKey); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414CADF38
		void ShowAllStages(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CADE58
		void SetStageHidden(FJunoStageKey StageKey, bool bHidden); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CADD78
		void SetActorToDestroyAtStage(AActor Actor, FGameplayTag& StageTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414CADC98
		void SetActorToAutoComplete(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CADBB8
		void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414CADAD8
		void MoveActorToNewStage(AActor Actor, FJunoStageKey& NewStage); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414CAD9F8
		void IsolateStage(FJunoStageKey& InStageKey); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414CAD918
		void HideAllStages(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CAD838
		FJunoStageKey GetPreviousStage(FJunoStageKey StageKey); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414CAD758
		FJunoStageKey GetNextStage(FJunoStageKey StageKey); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414CAD678
		AJunoGuidedBuildingSettings GetJunoGuidedBuildingWorldSettings(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CAD598
		TArray GetAllStageKeys(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414CAD4B8
		void CheckForGuidedBuildingOverlap(AActor ActorToCheck); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414CAD3D8
	};


	// Class JunoGameNative.JunoGuidedBuildingChildActorComponent
	// Inherited from UChildActorComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x270 - 0x270)
	class UJunoGuidedBuildingChildActorComponent : public UChildActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingChildActorComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGuidedBuildingInteractionComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJunoGuidedBuildingInteractionComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr ParentBuilding; // 0xA8(0x8)
		FText InteractionText; // 0xB0(0x10)
		float InteractRatingAdjustment; // 0xC0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingInteractionComponent");
			return ret;
		}

		FText GetInteractionText(); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414CAE018
	};


	// Class JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor
	// Inherited from AActor -> UObject
	// Size: 0x48 (0x2D8 - 0x290)
	class AJunoGuidedBuildingLandscapeVisualModifierActor : public AActor	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UJunoLandscapeVisualModifierComponent VisualModifier; // 0x298(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x2A0(0x4) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x2A4(0x10)
		unsigned char UnknownData05_7[0x24]; // 0x2B4(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor");
			return ret;
		}

		void SetupVisualModifier(EJunoLandscapeVisualModifierType InModifierType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CAE2B8
		void RemoveOwningPartRef(AActor InOwningPart); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CAE1D8
		void AddOwningPartRef(AActor InOwningPart); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CAE0F8
	};


	// Class JunoGameNative.JunoGuidedBuildingSettings
	// Inherited from AActor -> UObject
	// Size: 0x378 (0x608 - 0x290)
	class AJunoGuidedBuildingSettings : public AActor	
	{
	public:
		float ZLevelSize; // 0x290(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		TArray SortRankTags; // 0x298(0x10)
		TArray BaseActorClasses; // 0x2A8(0x10)
		TArray AllowedInterfaces; // 0x2B8(0x10)
		TArray ExcludedBaseActorClasses; // 0x2C8(0x10)
		FJunoGuidedBuildingSetEditorData GeneratedData; // 0x2D8(0xB0)
		TArray DefaultPluginsToActivate; // 0x388(0x10)
		FName PrimaryPlaylist; // 0x398(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x39C(0x4) UNKNOWN PROPERTY
		TMap ClassToRecipeMap; // 0x3A0(0x50)
		FName CraftingFormulaRegistryType; // 0x3F0(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x3F4(0x4) UNKNOWN PROPERTY
		FGuidedBuildingCachedEditorData CurrentState; // 0x3F8(0x140)
		TArray ActorList; // 0x538(0x10)
		TArray PassThroughTags; // 0x548(0x10)
		bool bUpdateRetainedData; // 0x558(0x1)
		bool bCreateDisplayActor; // 0x559(0x1)
		bool bCreateDisplayActorInMinimalPlugin; // 0x55A(0x1)
		bool bEnablePreciseCollision; // 0x55B(0x1)
		bool bCreateCustomMesh; // 0x55C(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		UStaticMesh DefaultMesh; // 0x560(0x8)
		bool bConvexHullsWithSimplerCollisionShapes; // 0x568(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x569(0x3) UNKNOWN PROPERTY
		FGeometryScriptConvexHullApproximationOptions ConvexHullApproximationOptions; // 0x56C(0xC)
		bool bMergeCollision; // 0x578(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		FGeometryScriptMergeSimpleCollisionOptions MergeOptions; // 0x580(0x70)
		bool bSimplifyHull; // 0x5F0(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x5F1(0x3) UNKNOWN PROPERTY
		FGeometryScriptConvexHullSimplificationOptions HullSimplificationOptions; // 0x5F4(0x10)
		unsigned char UnknownData15_7[0x4]; // 0x604(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingSettings");
			return ret;
		}

		void StartGeneratingGuidedBuildingAssets(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CAEA98
		void SetActorToDestroyAtStage(AActor Actor, FGameplayTag& StageTag, bool bDestroy); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CAE9B8
		void SetActorToAutoComplete(AActor Actor, bool bAutoComplete); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CAE8D8
		void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CAE7F8
		void MoveActorToNewStage(AActor Actor, FJunoStageKey& NewStage); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CAE718
		TArray GetAllStageKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAE638
		FName GetActorIdentifier(AActor ActorPtr); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CAE558
		void GenerateNewStageData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CAE478
		void AddStage(FJunoStageKey& NewStage); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CAE398
	};


	// Class JunoGameNative.JunoISMPoolRenderer
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UJunoISMPoolRenderer : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UGeometryCollectionISMPoolComponent CachedISMPoolComponent; // 0x38(0x8)
		UGeometryCollectionISMPoolComponent LocalISMPoolComponent; // 0x40(0x8)
		UGeometryCollectionISMPoolComponent OverrideISMPoolComponent; // 0x48(0x8)
		unsigned char UnknownData03_7[0x150]; // 0x50(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoISMPoolRenderer");
			return ret;
		}
	};


	// Class JunoGameNative.JunoISMPoolRendererSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoISMPoolRendererSettings : public UDeveloperSettings	
	{
	public:
		int32_t NumPerInstanceFloats; // 0x30(0x4)
		int32_t MergedMeshMinLod; // 0x34(0x4)
		float MergedMeshLodScale; // 0x38(0x4)
		int32_t MergedMeshPropMinLod; // 0x3C(0x4)
		int32_t MergedMeshCullDistance; // 0x40(0x4)
		int32_t MergedMeshPropCullDistance; // 0x44(0x4)
		bool bMergedMeshAffectDistanceFieldLighting; // 0x48(0x1)
		bool bMergedMeshOverrideCastFarShadows; // 0x49(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x4A(0x2) UNKNOWN PROPERTY
		int32_t MergedMeshCellSize; // 0x4C(0x4)
		bool bCommonPartsEnable; // 0x50(0x1)
		bool bCommonPartsEnableShadows; // 0x51(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x52(0x2) UNKNOWN PROPERTY
		int32_t CommonPartsCullDistanceStart; // 0x54(0x4)
		int32_t CommonPartsCullDistanceEnd; // 0x58(0x4)
		int32_t CommonPartsCullDistanceBoost; // 0x5C(0x4)
		bool bInstancesEnable; // 0x60(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		int32_t InstancesMinLod; // 0x64(0x4)
		float InstancesLodScale; // 0x68(0x4)
		int32_t InstancesCullDistance; // 0x6C(0x4)
		bool bInstancesEnableShadows; // 0x70(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		int32_t InstancesPreallocateComponents; // 0x74(0x4)
		bool bInstancesAllowRemove; // 0x78(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoISMPoolRendererSettings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoCommonPartsDataMappings
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoCommonPartsDataMappings : public UPrimaryDataAsset	
	{
	public:
		TMap Mapping; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCommonPartsDataMappings");
			return ret;
		}
	};


	// Class JunoGameNative.JunoLandscapeVisualModifierComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x250 - 0x220)
	class UJunoLandscapeVisualModifierComponent : public USceneComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x220(0x18) UNKNOWN PROPERTY
		UStaticMeshComponent DirtPlane; // 0x238(0x8)
		EJunoLandscapeVisualModifierType VisualModifierType; // 0x240(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x241(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLandscapeVisualModifierComponent");
			return ret;
		}

		void OnRep_LandscapeModifierData(); // Flags: Final|Native|Private 0x7FF414CAEB78
	};


	// Class JunoGameNative.JunoPhysicsToySpawnerActor
	// Inherited from AJunoBuildingActor -> AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0xCC0 - 0xCA8)
	class AJunoPhysicsToySpawnerActor : public AJunoBuildingActor	
	{
	public:
		bool bUseOffsetOrientation : 1; // 0xCA8:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0xCA9(0x7) UNKNOWN PROPERTY
		TArray FloatingValidationDirections; // 0xCB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsToySpawnerActor");
			return ret;
		}

		UClass GetToyClass(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414CAEC58
	};


	// Class JunoGameNative.JunoPickupComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoPickupComponent : public UGameFrameworkComponent	
	{
	public:
		FDataTableRowHandle CraftingSourceTable; // 0xA0(0x10)
		UDataTable ResourceDataTable; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPickupComponent");
			return ret;
		}

		void PickupBuildingctor(AFortPlayerController FPC); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CAED38
	};


	// Class JunoGameNative.JunoResourceComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoResourceComponent : public UGameFrameworkComponent	
	{
	public:
		UDataTable BuildingTagDataTable; // 0xA0(0x8)
		UDataTable ResourceDataTable; // 0xA8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoResourceComponent");
			return ret;
		}

		void HandleBuildingDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414CAEE18
	};


	// Class JunoGameNative.JunoStorageChest
	// Inherited from AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x258 (0xED0 - 0xC78)
	class AJunoStorageChest : public AJunoBuildingProp	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0xC78(0x10) UNKNOWN PROPERTY
		UGeometryCollectionComponent GeometryCollectionComponent; // 0xC88(0x8)
		UJunoInventoryComponent ChestInventoryComponent; // 0xC90(0x8)
		UJunoCampMembershipActorComponent CampMembershipComponent; // 0xC98(0x8)
		bool bTakeAllItemsOnInteract; // 0xCA0(0x1)
		bool bDestroyOnInteract; // 0xCA1(0x1)
		unsigned char UnknownData05_6[0x6]; // 0xCA2(0x6) UNKNOWN PROPERTY
		FVector GridSizeOverride; // 0xCA8(0x18)
		FTransform BuildingPivotOffset; // 0xCC0(0x60)
		FVector BuildingGridSnapOffset; // 0xD20(0x18)
		FJunoBuildingBehaviorGridLimits GridOffsetLimits; // 0xD38(0x10)
		FJunoBuilderToolInteractionActorClassSet OverlappableClasses; // 0xD48(0xA0)
		TMap PreviewComponentTemplates; // 0xDE8(0x50)
		FUniqueNetIdRepl OwnerPlayerId; // 0xE38(0x30)
		FName BaseLootTierGroup; // 0xE68(0x4)
		float DefaultInteractTime; // 0xE6C(0x4)
		float PlayerPlacedInteractTime; // 0xE70(0x4)
		float SearchedInteractTime; // 0xE74(0x4)
		bool bUsePlayerPlacedInteractionTime; // 0xE78(0x1)
		unsigned char UnknownData06_6[0x7]; // 0xE79(0x7) UNKNOWN PROPERTY
		UStaticMesh SearchedMesh; // 0xE80(0x8)
		float LootTossSpeed; // 0xE88(0x4)
		float LootTossAngle; // 0xE8C(0x4)
		bool bChestSearched; // 0xE90(0x1)
		bool bChestLooted; // 0xE91(0x1)
		unsigned char UnknownData07_6[0x2]; // 0xE92(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr LastInteractor; // 0xE94(0x8)
		FName RuntimeLootTierGroup; // 0xE9C(0x4)
		FJunoChestTransactionTelemetry ChestTransactionTelemetry; // 0xEA0(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoStorageChest");
			return ret;
		}

		void UpdateVisibilityOfLightBeamDeathChest(bool IsVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF414CAF898
		void OnRep_ChestSearched(); // Flags: Final|Native|Protected 0x7FF414CAF7B8
		void OnRep_ChestLooted(); // Flags: Final|Native|Protected 0x7FF414CAF6D8
		void OnPersistentPlayspaceDataLoadEnd(AJunoPersistentPlayspace PersistentPlayspace, bool bSuccess); // Flags: Final|Native|Protected 0x7FF414CAF5F8
		void OnInventoryAcquired(); // Flags: Final|Native|Private 0x7FF414CAF518
		bool IsChestAlreadySearched(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAF438
		FUniqueNetIdRepl GetOwningPlayerID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAF358
		bool CanInteractWithChest(AFortPawn FortPawn); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414CAF278
		void BlueprintOnChestLooted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CAF198
		FName BlueprintGetLootTierGroup(FJunoBiomeInfoQueryResult BiomeInfo, FString TilePrefix); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 0x7FF414CAF0B8
		bool BlueprintCanShowInventoryUI(FInteractionType& InteractType); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CAEFD8
		bool BlueprintAllowSpawnLoot(FInteractionType& InteractType); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CAEEF8
	};


	// Class JunoGameNative.JunoBuildingPreviewComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoBuildingPreviewComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPreviewComponent");
			return ret;
		}

		void ReceiveSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CB0158
		void ReceivePlacementStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CB0078
		void ReceiveEnabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CAFF98
		void ReceiveDisabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CAFEB8
		void ReceiveCreated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CAFDD8
		void ReceiveCleared(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CAFCF8
		bool IsSet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAFC18
		UClass GetSourceActorClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAFB38
		AJunoBuildingPreviewer GetPreviewer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CAFA58
		FJunoBuildingSelectionPreview GetOwningPreviewRef(bool& bSuccess); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CAF978
	};


	// Class JunoGameNative.JunoBuildingPreviewer
	// Inherited from AActor -> UObject
	// Size: 0x160 (0x3F0 - 0x290)
	class AJunoBuildingPreviewer : public AActor	
	{
	public:
		TWeakObjectPtr OwningBehavior; // 0x290(0x8)
		bool bEnabled; // 0x298(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		TMap PreviewPool; // 0x2A0(0x50)
		TArray MostRecentlyUpdated; // 0x2F0(0x10)
		FGuid CurrentlySetPreviewGUID; // 0x300(0x10)
		bool bHasSetPreview; // 0x310(0x1)
		unsigned char UnknownData04_6[0xF]; // 0x311(0xF) UNKNOWN PROPERTY
		FJunoBuildingPlacementPreview PlacementPreview; // 0x320(0xC0)
		unsigned char UnknownData05_7[0x10]; // 0x3E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPreviewer");
			return ret;
		}

		void SetPreviewVisibility(bool bVisible); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB1AB8
		bool SetPreview(FGuid& Guid); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CB19D8
		void ReceiveUpdateSnapEntryPreviews(TArray& Previews); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB18F8
		void ReceivePreviewSet(FJunoBuildingSelectionPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB1818
		void ReceivePreviewCreated(FJunoBuildingSelectionPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB1738
		void ReceivePreviewCleared(FJunoBuildingSelectionPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB1658
		void ReceivePlacementStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CB1578
		void ReceivePlacementPreviewInitialized(FJunoBuildingPlacementPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB1498
		void ReceivePlacementPreviewHidden(FJunoBuildingPlacementPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB13B8
		void ReceiveEnabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CB12D8
		void ReceiveDisabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CB11F8
		void ReceiveDestroyPreview(FJunoBuildingSelectionPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB1118
		void ReceiveDestroyPlacementPreview(FJunoBuildingPlacementPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB1038
		void ReceiveClearSnapEntryPreviews(TArray& Previews); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB0F58
		void NotifyPlacementStarted(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB0E78
		bool IsPreviewerEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB0D98
		void InitializePlacementPreview(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB0CB8
		void HidePlacementPreview(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB0BD8
		bool HasSetPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB0AF8
		FJunoBuildingSelectionPreview GetPreviewRef(bool& bSuccess); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CB0A18
		FJunoBuildingPlacementPreview GetPlacementPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB0938
		UJunoBuildingBehaviorBase GetOwningBuildingBehavior(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB0858
		FJunoBuildingSelectionPreview FindPreviewRef(FGuid& Guid, bool& bSuccess); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CB0778
		void Enable(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB0698
		void Disable(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB05B8
		void DestroyPreview(FGuid Guid); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414CB04D8
		void DestroyPlacementPreview(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB03F8
		bool CreatePreview(TArray& SelectedActors, FGuid& Guid, FJunoBuildingPreviewParams& Params); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CB0318
		void ClearPreview(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB0238
	};


	// Class JunoGameNative.JunoBuildingPreviewerSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UJunoBuildingPreviewerSubsystem : public UTickableWorldSubsystem	
	{
	public:
		TArray AsyncPreviewsStack; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPreviewerSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingPreviewInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBuildingPreviewInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPreviewInterface");
			return ret;
		}

		TMap GetPreviewComponentTemplates(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414CB1B98
	};


	// Class JunoGameNative.JunoBuildingBehaviorToys
	// Inherited from UJunoBuildingBehavior -> UJunoBuildingBehaviorBase -> UJunoBuilderToolInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x0 (0xA10 - 0xA10)
	class UJunoBuildingBehaviorToys : public UJunoBuildingBehavior	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingBehaviorToys");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGameStateComponent_Loot
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UJunoGameStateComponent_Loot : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		TArray LootTierTables; // 0xB0(0x10)
		TArray LootPackageTables; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_Loot");
			return ret;
		}

		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB1C78
	};


	// Class JunoGameNative.JunoBuildInstructionsItemDefinition
	// Inherited from UFortWorldItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x60 (0x108 - 0xA8)
	class UJunoBuildInstructionsItemDefinition : public UFortWorldItemDefinition	
	{
	public:
		bool bGiveResourcesOnDestroy : 1; // 0xA8:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		FName SelfCraftingFormulaName; // 0xAC(0x4)
		TArray PrerequisiteCraftingFormulaNames; // 0xB0(0x10)
		TWeakObjectPtr ActorClassToBuild; // 0xC0(0x20)
		UFortPlaysetPropItemDefinition PlaysetPropToBuild; // 0xE0(0x8)
		FText SizeDescription; // 0xE8(0x10)
		FText SetDescription; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildInstructionsItemDefinition");
			return ret;
		}

		bool ShouldGiveResourcesOnDestroy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB21B8
		FText GetSizeDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB20D8
		FText GetSetDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB1FF8
		FName GetSelfCraftingFormulaName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB1F18
		TArray GetPrerequisiteCraftingFormulaNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB1E38
		TWeakObjectPtr GetActorClassToBuild(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB1D58
	};


	// Class JunoGameNative.JunoControllerComponent_CraftingNetworkEvents
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UJunoControllerComponent_CraftingNetworkEvents : public UFortControllerComponent	
	{
	public:
		TArray ActorsToUpgrade; // 0xA8(0x10)
		TWeakObjectPtr LastUpgradedActor; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents");
			return ret;
		}

		void ServerSetAutoPassiveCraftingFormula(AActor PassiveCraftingObject, FName FormulaName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414CB28B8
		void ServerHandleCraftingBGAContributor(AActor CraftingObject); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414CB27D8
		void ServerEnableAutoPassiveCrafting(AActor PassiveCraftingObject); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414CB26F8
		void ServerDisableAutoPassiveCrafting(AActor PassiveCraftingObject); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414CB2618
		void ServerAttemptCraftingUpgrage(AActor ActorToUpgrade, FName RecipeName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414CB2538
		void OnRep_LastUpgradedActor(); // Flags: Final|Native|Protected 0x7FF414CB2458
		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CB2378
		void OnCraftingChangedState(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CB2298
	};


	// Class JunoGameNative.JunoCraftingObjectBGA
	// Inherited from ACraftingObjectBGA -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x250 (0xC40 - 0x9F0)
	class AJunoCraftingObjectBGA : public ACraftingObjectBGA	
	{
	public:
		unsigned char UnknownData04_3[0x98]; // 0x9F0(0x98) UNKNOWN PROPERTY
		UJunoGeometryCollectionAssemblerComponent GeometryCollectionAssemblerComponent; // 0xA88(0x8)
		FVector GridSizeOverride; // 0xA90(0x18)
		unsigned char UnknownData05_6[0x8]; // 0xAA8(0x8) UNKNOWN PROPERTY
		FTransform BuildingPivotOffset; // 0xAB0(0x60)
		FVector BuildingGridSnapOffset; // 0xB10(0x18)
		FJunoBuildingBehaviorGridLimits GridOffsetLimits; // 0xB28(0x10)
		FJunoBuilderToolInteractionActorClassSet OverlappableClasses; // 0xB38(0xA0)
		UItemDefinitionBase AssociatedItem; // 0xBD8(0x8)
		TMap PreviewComponentTemplates; // 0xBE0(0x50)
		FName UpgradeRecipe; // 0xC30(0x4)
		bool bAutoTakeCraftingInventoryOnServerInteract; // 0xC34(0x1)
		bool bShouldPersist; // 0xC35(0x1)
		bool bCloseMenuWhenOutOfInteractionRange; // 0xC36(0x1)
		unsigned char UnknownData06_6[0x1]; // 0xC37(0x1) UNKNOWN PROPERTY
		float InteractionRangeSphereRadius; // 0xC38(0x4)
		unsigned char UnknownData07_7[0x4]; // 0xC3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCraftingObjectBGA");
			return ret;
		}

		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB2A78
		UItemDefinitionBase GetAssociatedItem(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB2998
	};


	// Class JunoGameNative.JunoGameStateComponent_Crafting
	// Inherited from UFortGameStateComponent_Crafting -> UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x288 (0x4D8 - 0x250)
	class UJunoGameStateComponent_Crafting : public UFortGameStateComponent_Crafting	
	{
	public:
		uint32_t AllRecipeNamesHash; // 0x250(0x4)
		unsigned char UnknownData01_7[0x284]; // 0x254(0x284) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_Crafting");
			return ret;
		}

		void OnRep_AllRecipeNamesHash(); // Flags: Final|Native|Private 0x7FF414CB2C38
		void HandleLootTablesLoaded(); // Flags: Final|Native|Protected 0x7FF414CB2B58
	};


	// Class JunoGameNative.JunoRecipeBundleItemDefinition
	// Inherited from UFortWorldItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UJunoRecipeBundleItemDefinition : public UFortWorldItemDefinition	
	{
	public:
		TArray CraftingFormulas; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRecipeBundleItemDefinition");
			return ret;
		}
	};


	// Class JunoGameNative.JunoConnectivityDataComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoConnectivityDataComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityDataComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoConnectivitySupportDataComponent
	// Inherited from UJunoConnectivityDataComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoConnectivitySupportDataComponent : public UJunoConnectivityDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivitySupportDataComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsToy
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPhysicsToy : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsToy");
			return ret;
		}

		void StopAttachment(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414CB3258
		void StartAttachmentToActor(AActor Actor); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414CB3178
		void OnToyStopTrigger(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414CB3098
		void OnToyStartTrigger(bool bIsControlled); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414CB2FB8
		void EnablePhysics(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414CB2ED8
		void DisablePhysics(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414CB2DF8
		void DestroyToy(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414CB2D18
	};


	// Class JunoGameNative.JunoAnimGeometryCollectionComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UJunoAnimGeometryCollectionComponent : public UGameFrameworkComponent	
	{
	public:
		FComponentReference GeometryCollectionReference; // 0xA0(0x28)
		FComponentReference SkeletalMeshReference; // 0xC8(0x28)
		TArray Mappings; // 0xF0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x100(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAnimGeometryCollectionComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBasePlayspaceMigrationComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoBasePlayspaceMigrationComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBasePlayspaceMigrationComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoClientAtomicReplacementComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UJunoClientAtomicReplacementComponent : public UGameFrameworkComponent	
	{
	public:
		FGuid Guid; // 0xA0(0x10)
		AJunoPersistentPlayspace TargetPlayspace; // 0xB0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClientAtomicReplacementComponent");
			return ret;
		}

		void OnRep_PlayspsaceRenameRepData(); // Flags: Final|Native|Private 0x7FF414CB34F8
		void OnRep_Guid(FGuid OldGuid); // Flags: Final|Native|Private|HasDefaults 0x7FF414CB3418
		void OnOwnerGuidChanged(AActor Owner, FGuid InGUID); // Flags: Final|Native|Private|HasDefaults 0x7FF414CB3338
	};


	// Class JunoGameNative.JunoClientAtomicReplacementWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoClientAtomicReplacementWorldSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClientAtomicReplacementWorldSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoClusterUnionActor
	// Inherited from AFortClusterUnionActor -> AClusterUnionActor -> AActor -> UObject
	// Size: 0xF8 (0x428 - 0x330)
	class AJunoClusterUnionActor : public AFortClusterUnionActor	
	{
	public:
		unsigned char UnknownData01_1[0xF8]; // 0x330(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClusterUnionActor");
			return ret;
		}

		void OnComponentRemovedFromClusterUnion(UPrimitiveComponent Component, TArray& RemovedBonesData); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CB36B8
		void OnComponentAddedToClusterUnion(UPrimitiveComponent Component, TArray& BonesData, TArray& RemovedBoneIDs, bool bIsNew); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CB35D8
	};


	// Class JunoGameNative.JunoConnectivityComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x128 (0x1C8 - 0xA0)
	class UJunoConnectivityComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData09_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyAddedIntoClusterUnion; // 0xA8(0x10)
		FMulticastInlineDelegate NotifyRemovedFromClusterUnion; // 0xB8(0x10)
		unsigned char UnknownData10_6[0x18]; // 0xC8(0x18) UNKNOWN PROPERTY
		float ContactDistance; // 0xE0(0x4)
		bool bIsInGraph; // 0xE4(0x1)
		unsigned char UnknownData11_6[0x3]; // 0xE5(0x3) UNKNOWN PROPERTY
		TArray GeometryCollectionsToIgnoreBreaksForConnectivity; // 0xE8(0x10)
		TArray RootDoorComponentReferences; // 0xF8(0x10)
		TArray DoorComponents; // 0x108(0x10)
		bool bAreDoorsEjected; // 0x118(0x1)
		bool bAreDoorsEjectedInternal; // 0x119(0x1)
		unsigned char UnknownData12_6[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY
		FGraphVertexHandle GraphHandle; // 0x120(0x28)
		bool bRootPlayspaceInitialized; // 0x148(0x1)
		bool bIsDebris; // 0x149(0x1)
		bool bHasBeenSaved; // 0x14A(0x1)
		EJunoAutomaticConnectionMethod AutomaticConnectionMethod; // 0x14B(0x1)
		unsigned char UnknownData13_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		TArray CustomConnectionDirections; // 0x150(0x10)
		bool bCanBeConnectedTo; // 0x160(0x1)
		bool bMustConnectToDynamic; // 0x161(0x1)
		bool bForceIndependentlySupported; // 0x162(0x1)
		bool bForceWorldSupportWhenPotentialConnectionsAreNotFound; // 0x163(0x1)
		bool bAddToConnectivityGraphOnBeginPlay; // 0x164(0x1)
		bool bCanBeWorldSupported; // 0x165(0x1)
		unsigned char UnknownData14_6[0x2]; // 0x166(0x2) UNKNOWN PROPERTY
		TArray ClassesThatAreAlwaysValidForWorldSupport; // 0x168(0x10)
		FVector OverlapMargin; // 0x178(0x18)
		int32_t MinimumIslandSize; // 0x190(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		TArray AttachedToys; // 0x198(0x10)
		unsigned char UnknownData16_6[0x1]; // 0x1A8(0x1) UNKNOWN PROPERTY
		bool bDisablePartialDestruction; // 0x1A9(0x1)
		unsigned char UnknownData17_7[0x1E]; // 0x1AA(0x1E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityComponent");
			return ret;
		}

		bool ShouldUsePartialDestruction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414CB4838
		void OverrideMinimumIslandSize(int32_t NewSize); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB4758
		void OnVertexRemovedFromGraph(FGraphVertexHandle& VertexHandle); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB4678
		void OnToyAttached(AActor ToyActor); // Flags: Final|Native|Public 0x7FF414CB4598
		void OnRep_IsDebris(); // Flags: Final|Native|Private 0x7FF414CB44B8
		void OnRep_AreDoorsEjected(); // Flags: Final|Native|Private 0x7FF414CB43D8
		void OnRemovedFromGraph(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414CB42F8
		void OnRemovedFromClusterUnion(UClusterUnionComponent ClusterUnion, UPrimitiveComponent Component); // Flags: Final|Native|Protected 0x7FF414CB4218
		void OnParentClusterUnionAwake(UPrimitiveComponent WakingComponent, FName BoneName); // Flags: Final|Native|Private 0x7FF414CB4138
		void OnParentActorDeath(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF414CB4058
		void OnGeometryCollectionDecayed(); // Flags: Final|Native|Protected 0x7FF414CB3F78
		void OnGeometryCollectionBreak(FChaosBreakEvent& BreakEvent); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CB3E98
		void OnAttachedToyDetached(AActor ToyActor); // Flags: Final|Native|Public 0x7FF414CB3DB8
		void OnAddedIntoClusterUnion(UClusterUnionComponent ClusterUnion, UPrimitiveComponent Component); // Flags: Final|Native|Protected 0x7FF414CB3CD8
		void NotifyRemovedFromGraph(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public 0x7FF414CB3BF8
		TArray GetRelevantSimulatingComponents(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF414CB3B18
		UClusterUnionComponent GetCurrentClusterUnion(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB3A38
		float GetContactDistance(); // Flags: Final|Native|Public|Const 0x7FF414CB3958
		AActor GetBaseAttachParentActor(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CB3878
		void GetAutomaticallyConnectedComponents(TArray& Results); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414CB3798
	};


	// Class JunoGameNative.JunoConnectivityGraphWorldSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1F0 (0x230 - 0x40)
	class UJunoConnectivityGraphWorldSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x1F0]; // 0x40(0x1F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityGraphWorldSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoConnectivityManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x170 (0x210 - 0xA0)
	class UJunoConnectivityManagerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData05_3[0x19]; // 0xA0(0x19) UNKNOWN PROPERTY
		bool bIsReady; // 0xB9(0x1)
		unsigned char UnknownData06_6[0x1]; // 0xBA(0x1) UNKNOWN PROPERTY
		bool bIsNewPlayspace; // 0xBB(0x1)
		unsigned char UnknownData07_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		UFortConnectivityGraph Graph; // 0xC0(0x8)
		unsigned char UnknownData08_6[0xA0]; // 0xC8(0xA0) UNKNOWN PROPERTY
		FJunoConnectivityDebugData DebugDrawData; // 0x168(0x38)
		unsigned char UnknownData09_7[0x70]; // 0x1A0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityManagerComponent");
			return ret;
		}

		void RequestAddActorsToConnectivityGraph(TArray& Actors); // Flags: Final|Native|Public|HasOutParms 0x7FF414CB4F38
		void OnLevelActorSavedGuidsChanged(FName& LevelUniquePackagePath, TMap& SavedActorGUIDMap); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB4E58
		void OnGraphVertexRemovedFromIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB4D78
		void OnGraphVertexAddedToIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB4C98
		void OnGraphIslandDestroyed(FGraphIslandHandle& IslandHandle); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB4BB8
		void OnGraphIslandCreated(FGraphIslandHandle& IslandHandle); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB4AD8
		void OnGraphIslandConnectivityChanged(FGraphIslandHandle& IslandHandle, EGraphIslandConnectivityChange Change); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB49F8
		void HandleOnGeometryCollectionBreaks(TArray& BreakEvents); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CB4918
	};


	// Class JunoGameNative.JunoConnectivityRemovalFixupComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoConnectivityRemovalFixupComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityRemovalFixupComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsToyActor
	// Inherited from AJunoBuildingGameplayActor -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0xA40 - 0xA38)
	class AJunoPhysicsToyActor : public AJunoBuildingGameplayActor	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsToyActor");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsToyConnectivityComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UJunoPhysicsToyConnectivityComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyAttachedToConnectivityComponent; // 0xA8(0x10)
		FMulticastInlineDelegate NotifyRemovedFromConnectivityComponent; // 0xB8(0x10)
		unsigned char UnknownData04_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		bool bPlayspaceInitialized; // 0xD0(0x1)
		unsigned char UnknownData05_7[0x17]; // 0xD1(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsToyConnectivityComponent");
			return ret;
		}

		void OnAttachedToNewIsland(FGraphIslandHandle& NewIslandHandle); // Flags: Final|Native|Private|HasOutParms 0x7FF414CB51D8
		void DetachFromConnectivity(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB50F8
		void AttachToConnectivity(AActor Other); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB5018
	};


	// Class JunoGameNative.JunoSkeletalMeshDynamicsComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UJunoSkeletalMeshDynamicsComponent : public UGameFrameworkComponent	
	{
	public:
		FComponentReference SkeletalMeshReference; // 0xA0(0x28)
		unsigned char UnknownData01_7[0xB0]; // 0xC8(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoSkeletalMeshDynamicsComponent");
			return ret;
		}

		void SetVelocityBias(FVector LinearBias, FVector AngularBias); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414CB5478
		void SetRadialVelocity(FVector Origin, float Velocity); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414CB5398
		void MakeDynamic(double LinearMultiplier, double LinearVariance, double AngularMultiplier, double AngularVariance); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB52B8
	};


	// Class JunoGameNative.JunoWorldReadinessQueryComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x130 - 0xA0)
	class UJunoWorldReadinessQueryComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData01_1[0x90]; // 0xA0(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldReadinessQueryComponent");
			return ret;
		}

		void OnBasePhysicsStateChange(UPrimitiveComponent ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Private 0x7FF414CB5638
		void OnBaseEndPlay(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Private 0x7FF414CB5558
	};


	// Class JunoGameNative.JunoPlayspacePersistenceFeatureDataActor
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class AJunoPlayspacePersistenceFeatureDataActor : public AInfo	
	{
	public:
		unsigned char UnknownData03_3[0x28]; // 0x290(0x28) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x2B8(0x10)
		int32_t Version; // 0x2C8(0x4)
		bool bTriggerErrorOnSetDirtyAfterCheckIn; // 0x2CC(0x1)
		unsigned char UnknownData04_6[0x13]; // 0x2CD(0x13) UNKNOWN PROPERTY
		bool bSpawnedByLevelSaveRecord; // 0x2E0(0x1)
		bool bForceDirty; // 0x2E1(0x1)
		bool bDirty; // 0x2E2(0x1)
		unsigned char UnknownData05_7[0x5]; // 0x2E3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePersistenceFeatureDataActor");
			return ret;
		}

		void OnPersistentDataModified(); // Flags: Native|Protected|BlueprintCallable 0x7FF414CB5718
	};


	// Class JunoGameNative.JunoConnectivityGraphPersistenceFeatureData
	// Inherited from AJunoPlayspacePersistenceFeatureDataActor -> AInfo -> AActor -> UObject
	// Size: 0x2C0 (0x5A8 - 0x2E8)
	class AJunoConnectivityGraphPersistenceFeatureData : public AJunoPlayspacePersistenceFeatureDataActor	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x2E8(0x10) UNKNOWN PROPERTY
		FSerializableConnectivityGraph SavedConnectivityData; // 0x2F8(0x108)
		FSerializableConnectivityGraph_v2 CurrentSavedConnectivityData; // 0x400(0xC8)
		unsigned char UnknownData03_7[0xE0]; // 0x4C8(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityGraphPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsPersistenceComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UJunoPhysicsPersistenceComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsPersistenceComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsPersistenceWorldSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UJunoPhysicsPersistenceWorldSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsPersistenceWorldSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoGlobalKnowledgeComponent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1D0 (0x270 - 0xA0)
	class UJunoGlobalKnowledgeComponent : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData02_3[0x90]; // 0xA0(0x90) UNKNOWN PROPERTY
		FJunoKnowledgeSaveRecord CurrentWorldKnowledge; // 0x130(0x138)
		unsigned char UnknownData03_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGlobalKnowledgeComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoKnowledgeComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x760 (0x808 - 0xA8)
	class UJunoKnowledgeComponent : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData09_3[0xC0]; // 0xA8(0xC0) UNKNOWN PROPERTY
		bool bEnableKnowledgeComponent; // 0x168(0x1)
		bool bEnableKnowledgePersistence; // 0x169(0x1)
		bool bEnableKnowledgeFiltering; // 0x16A(0x1)
		unsigned char UnknownData10_6[0x1]; // 0x16B(0x1) UNKNOWN PROPERTY
		bool bUnownedMCPRecipesKnowledgeBlockedWhenUnfiltered; // 0x16C(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x16D(0x3) UNKNOWN PROPERTY
		TArray DefaultKnownItems; // 0x170(0x10)
		FGameplayTagContainer DefaultCraftingObjects; // 0x180(0x20)
		FGameplayTag UnblockMCPRecipesWorldStateTag; // 0x1A0(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer FoundCraftingObjects; // 0x1A8(0x20)
		FGameplayTagContainer ClaimedKnowlegeBundles; // 0x1C8(0x20)
		TArray ItemStateArray; // 0x1E8(0x10)
		unsigned char UnknownData13_6[0x8]; // 0x1F8(0x8) UNKNOWN PROPERTY
		FJunoKnowledgeRecipeStateFastArray RecipeStateArray; // 0x200(0x120)
		TArray CreatureStateArray; // 0x320(0x10)
		unsigned char UnknownData14_6[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		TArray ItemServerState; // 0x338(0x10)
		TMap RecipeServerState; // 0x348(0x50)
		TArray CreatureServerState; // 0x398(0x10)
		FGameplayTagContainer McpProfileOwnershipTagsCached; // 0x3A8(0x20)
		unsigned char UnknownData15_6[0xF0]; // 0x3C8(0xF0) UNKNOWN PROPERTY
		TArray ViewedItems; // 0x4B8(0x10)
		TArray ViewedRecipes; // 0x4C8(0x10)
		TArray ViewedCreatures; // 0x4D8(0x10)
		TArray OwnedMcpRecipes; // 0x4E8(0x10)
		TArray RecipeDiscoverers; // 0x4F8(0x10)
		TMap RecipeDiscoverersMap; // 0x508(0x50)
		bool bMCPRecipesBlocked; // 0x558(0x1)
		bool bComponentReady; // 0x559(0x1)
		unsigned char UnknownData16_6[0x6]; // 0x55A(0x6) UNKNOWN PROPERTY
		TSet ItemQuickLookup; // 0x560(0x50)
		TSet CreatureQuickLookup; // 0x5B0(0x50)
		FGameplayTagContainer CreatureDiscoveredTagContainer; // 0x600(0x20)
		unsigned char UnknownData17_7[0x1E8]; // 0x620(0x1E8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgeComponent");
			return ret;
		}

		void ViewRecipe(FName InRecipeName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414CB7AF8
		void ViewItem(UItemDefinitionBase InItemDef); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414CB7A18
		void ViewCreature(FGameplayTag& InCreatureTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CB7938
		void ViewAllDiscovered(bool bExcludePlayerBuiltRecipes); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414CB7858
		bool UnblockMCPRecipes(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CB7778
		void SetRecipeKnowledgeState(FName RowName, EJunoKnowledgeState NewState, bool bForceUpdate); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CB7698
		void SetPlayerRecipeKnowledgeState(AFortPlayerController PC, FName RowName, EJunoKnowledgeState NewState); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414CB75B8
		void ServerViewRecipe(FName InRecipeName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414CB74D8
		void ServerViewItem(UItemDefinitionBase InItemDef); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414CB73F8
		void ServerViewCreature(FGameplayTag InCreatureTag); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414CB7318
		void ServerViewAllDiscovered(bool bExcludePlayerBuiltRecipes); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414CB7238
		void ServerRequestItemKnowledge(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414CB7158
		void ServerRequestCreatureKnowledge(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 0x7FF414CB7078
		void RevealRecipeCategoryForPlayer(AFortPlayerController PC, FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414CB6F98
		void RevealRecipeCategory(FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CB6EB8
		bool OwnsAnyMCPRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB6DD8
		void OnRep_ViewedRecipes(); // Flags: Final|Native|Private 0x7FF414CB6CF8
		void OnRep_ViewedItems(); // Flags: Final|Native|Private 0x7FF414CB6C18
		void OnRep_ViewedCreatures(); // Flags: Final|Native|Private 0x7FF414CB6B38
		void OnRep_RecipeDiscoverers(); // Flags: Final|Native|Private 0x7FF414CB6A58
		void OnReactionGrantedObject(UObject SourceObject, FReactionGrantedObject& GrantedItem); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CB6978
		void OnMcpInventoryChanged(TSet& ItemChangeFlags, int64_t ProfileRevision); // Flags: Final|Native|Protected|HasOutParms 0x7FF414CB6898
		void OnCraftingObjectInteraction(AActor CraftingObject); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414CB67B8
		bool IsRecipeMissingMCPOwnership(FName RowName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB66D8
		bool HasViewedRecipe(FName InRecipeName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB65F8
		bool HasViewedItem(UItemDefinitionBase InItemDef); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB6518
		bool HasViewedCreature(FGameplayTag& InCreatureTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CB6438
		bool HasDiscoveredItem(UItemDefinitionBase InItemDef); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB6358
		bool HasDiscoveredCreature(FGameplayTag& InCreatureTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CB6278
		bool HasClaimedKnowledgeBundle(FGameplayTag& BundleIdentifier); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414CB6198
		void HandleWorldStateChanged(); // Flags: Final|Native|Protected 0x7FF414CB60B8
		EJunoKnowledgeState GetRecipeKnowledgeState(FName RowName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB5FD8
		EJunoKnowledgeState GetPlayerRecipeKnowledgeState(AFortPlayerController PC, FName RowName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414CB5EF8
		bool DoesRecipeRequireMCPOwnership(FName RowName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB5E18
		void ClientItemKnowledgeResponse(TArray NewItems); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient 0x7FF414CB5D38
		void ClientCreatureKnowledgeResponse(TArray NewCreatures); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient 0x7FF414CB5C58
		bool AreMCPRecipesBlocked(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB5B78
		void AddCraftingObjectTagsToPlayer(AFortPlayerController PC, FGameplayTagContainer CraftingObjectTags); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414CB5A98
		void AddCraftingObjectTags(FGameplayTagContainer CraftingObjectTags); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CB59B8
		void AcquireItemForPlayer(AFortPlayerController PC, UItemDefinitionBase NewItemDef); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414CB58D8
		void AcquireItem(UItemDefinitionBase NewItemDef); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CB57F8
	};


	// Class JunoGameNative.JunoKnowledgeDebugMenu
	// Inherited from AImGuiDebugMenuBase -> AActor -> UObject
	// Size: 0x400 (0x8C0 - 0x4C0)
	class AJunoKnowledgeDebugMenu : public AImGuiDebugMenuBase	
	{
	public:
		unsigned char UnknownData01_1[0x400]; // 0x4C0(0x400) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgeDebugMenu");
			return ret;
		}

		void ServerSetRecipeKnowledgeState(APlayerController InPlayerController, FName InRecipeRowName, EJunoKnowledgeState InKnowledgeState); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF414CB7BD8
	};


	// Class JunoGameNative.JunoKnowledgePersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x138 (0x190 - 0x58)
	class UJunoKnowledgePersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoKnowledgeSaveData KnowledgeSaveData; // 0x58(0x138)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgePersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoFogOfWarPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x60 (0xB8 - 0x58)
	class UJunoFogOfWarPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoFogOfWarSaveData FogOfWarSaveDatas; // 0x58(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMarkerManagerPlayspaceComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC8 (0x1C0 - 0xF8)
	class UJunoMarkerManagerPlayspaceComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData02_3[0x38]; // 0xF8(0x38) UNKNOWN PROPERTY
		TArray Markers; // 0x130(0x10)
		UDataRegistry MarkerDataRegistry; // 0x140(0x8)
		TArray UniqueMarkers; // 0x148(0x10)
		TArray LoadedIconTextures; // 0x158(0x10)
		unsigned char UnknownData03_7[0x58]; // 0x168(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent");
			return ret;
		}

		void OnRep_Markers(); // Flags: Final|Native|Protected 0x7FF414CB7E78
		UJunoMarkerManagerPlayspaceComponent GetJunoMarkerManagerComponent(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414CB7D98
		bool CreateMarker(AActor Actor, FJunoMarker& Marker); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CB7CB8
	};


	// Class JunoGameNative.JunoMarkersPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x20 (0x78 - 0x58)
	class UJunoMarkersPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoMarkersSaveData MarkersSaveData; // 0x58(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMarkersPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoModeratorModeBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoModeratorModeBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoModeratorModeBlueprintLibrary");
			return ret;
		}

		bool IsPlayerAllowedToFly(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CB8038
		bool IsModeratorModeEnabled(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414CB7F58
	};


	// Class JunoGameNative.JunoModeratorModeComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoModeratorModeComponent : public UGameFrameworkComponent	
	{
	public:
		UInputAction InputAction_TeleportPlayer_ModeratorMode; // 0xA0(0x8)
		bool bIsModeratorModeEnabled; // 0xA8(0x1)
		bool bIsPlayerAllowedToFly; // 0xA9(0x1)
		bool bModeratorConfirmed; // 0xAA(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoModeratorModeComponent");
			return ret;
		}

		void OnRootPlayspaceOwnerSet(AFortPlayerControllerAthena PlayerControllerAthena); // Flags: Final|Native|Private 0x7FF414CB89D8
		void OnRep_IsModeratorModeEnabled(); // Flags: Final|Native|Private 0x7FF414CB88F8
		void OnPawnDestroyed(AActor DestroyedActor); // Flags: Final|Native|Private 0x7FF414CB8818
		bool IsPlayerAllowedToFly(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB8738
		bool IsModeratorModeEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB8658
		void HandleTeleportPlayer(); // Flags: Final|Native|Private 0x7FF414CB8578
		void HandlePlayerPossesedPawn(APawn PlayerPawn); // Flags: Final|Native|Private 0x7FF414CB8498
		void HandleOnCreativeFlyChangedDelegate(bool bIsFlying); // Flags: Final|Native|Private 0x7FF414CB83B8
		void EnableModeratorMode(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB82D8
		void DisableModeratorMode(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB81F8
		void CheatModeratorConfirm(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB8118
	};


	// Class JunoGameNative.JunoDoorMetaNavArea
	// Inherited from UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UJunoDoorMetaNavArea : public UNavAreaMeta	
	{
	public:
		FNavAgentSelector DoorAwareAgents; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDoorMetaNavArea");
			return ret;
		}
	};


	// Class JunoGameNative.JunoMetaNavArea
	// Inherited from UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UJunoMetaNavArea : public UNavAreaMeta	
	{
	public:
		int32_t HealthThreshold; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMetaNavArea");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAutoPickupComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x108 (0x1B0 - 0xA8)
	class UJunoAutoPickupComponent : public UFortPawnComponent	
	{
	public:
		FScalableFloat ScanRate; // 0xA8(0x28)
		FScalableFloat MinSpawnedTime; // 0xD0(0x28)
		FScalableFloat ScanDistance; // 0xF8(0x28)
		FScalableFloat TimeBetweenMultiPickups; // 0x120(0x28)
		FScalableFloat RandomPickupDelayMin; // 0x148(0x28)
		FScalableFloat RandomPickupDelayMax; // 0x170(0x28)
		unsigned char UnknownData01_7[0x18]; // 0x198(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAutoPickupComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPawnComponentMood
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x1A0 - 0xA8)
	class UJunoPawnComponentMood : public UFortPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnJunoMoodChangedDelegate; // 0xA8(0x10)
		unsigned char UnknownData06_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		float MaximumTimeToUseRequest; // 0xD0(0x4)
		FJunoMoodStateData CurrentMoodState; // 0xD4(0x4)
		UProxyTable MoodAnimProxyTable; // 0xD8(0x8)
		bool bIsMoodReactionActive; // 0xE0(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		FMoodReactionRequestConfig RunningMoodReactionConfig; // 0xE4(0x10)
		unsigned char UnknownData08_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		FRequestedMoodReaction LastRequestedMoodReaction; // 0xF8(0x18)
		FMulticastInlineDelegate OnJunoMoodReactionTriggeredDelegate; // 0x110(0x10)
		unsigned char UnknownData09_6[0x18]; // 0x120(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoMoodReactionFinishedDelegate; // 0x138(0x10)
		unsigned char UnknownData10_6[0x18]; // 0x148(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoMoodReactionCanceledDelegate; // 0x160(0x10)
		unsigned char UnknownData11_7[0x30]; // 0x170(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnComponentMood");
			return ret;
		}

		void RequestMoodReaction(FMoodReactionRequestConfig& RequestConfig); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CB9298
		void OnRep_CurrentMoodState(); // Flags: Final|Native|Private 0x7FF414CB91B8
		void NotifyMoodReactionComplete(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414CB90D8
		void MulticastTriggerMoodReaction(FMoodReactionRequestConfig RequestConfig); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected 0x7FF414CB8FF8
		void MulticastOnMoodReactionComplete(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private|BlueprintCallable 0x7FF414CB8F18
		void MulticastOnCancelCurrentMoodReaction(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private 0x7FF414CB8E38
		bool IsMoodReactionSupported_Internal(FGameplayTag& MoodReactionTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CB8D58
		bool IsMoodReactionSupported(FGameplayTag& MoodReactionTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CB8C78
		UProxyTable GetMoodAnimProxyTable(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB8B98
		FJunoMoodStateData GetCurrentMoodState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB8AB8
	};


	// Class JunoGameNative.JunoPawnComponentSpeechBubble
	// Inherited from UFortPawnComponent_SpeechBubble -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1D0 - 0x1D0)
	class UJunoPawnComponentSpeechBubble : public UFortPawnComponent_SpeechBubble	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnComponentSpeechBubble");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDeltaFile
	// Inherited from ULevelSaveRecord -> UObject
	// Size: 0x68 (0x7D0 - 0x768)
	class UJunoDeltaFile : public ULevelSaveRecord	
	{
	public:
		FName UniquePackageName; // 0x768(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x76C(0x4) UNKNOWN PROPERTY
		TMap UpdateActions; // 0x770(0x50)
		TWeakObjectPtr WeakPersistentPlayspaceToApplyTo; // 0x7C0(0x8)
		bool bDirty; // 0x7C8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x7C9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDeltaFile");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDeltaFileApplier
	// Inherited from ULevelRecordSpawner -> UObject
	// Size: 0xA0 (0x5F0 - 0x550)
	class UJunoDeltaFileApplier : public ULevelRecordSpawner	
	{
	public:
		TMap UpdateActionMap; // 0x550(0x50)
		TMap DeleteActionMap; // 0x5A0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDeltaFileApplier");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDeltasLevelSaveComponent
	// Inherited from UFortLevelSaveComponent -> ULevelSaveComponent -> ULevelSaveBaseComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x8F8 - 0x8F8)
	class UJunoDeltasLevelSaveComponent : public UFortLevelSaveComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDeltasLevelSaveComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPFWModule_LevelDeltas
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoPFWModule_LevelDeltas : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPFWModule_LevelDeltas");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPFWContainer_LevelDelta
	// Inherited from UPersistenceFrameworkContainer -> UObject
	// Size: 0x38 (0x178 - 0x140)
	class UJunoPFWContainer_LevelDelta : public UPersistenceFrameworkContainer	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x140(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPFWContainer_LevelDelta");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPFWContainer_LevelDeltaIndex
	// Inherited from UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x20 (0x200 - 0x1E0)
	class UJunoPFWContainer_LevelDeltaIndex : public UJunoBasePFWContainer	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x1E0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPFWContainer_LevelDeltaIndex");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspaceTrackableInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPlayspaceTrackableInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceTrackableInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistentPlayspaceLevelRegistry
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoPersistentPlayspaceLevelRegistry : public UEngineSubsystem	
	{
	public:
		TMap PersistentPlayspaceLevelMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistentPlayspaceLevelRegistry");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistentPlayspaceSaveHandler
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UJunoPersistentPlayspaceSaveHandler : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray PersistenceFeatures; // 0x30(0x10)
		unsigned char UnknownData03_7[0x38]; // 0x40(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistentPlayspaceSaveHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistentPlayspaceSaveHandlerContainer
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UJunoPersistentPlayspaceSaveHandlerContainer : public UObject	
	{
	public:
		TMap JunoPersistentPlayspaceSaveHandlers; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistentPlayspaceSaveHandlerContainer");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayerPersistenceComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x180 - 0xF8)
	class UJunoPlayerPersistenceComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x88]; // 0xF8(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerPersistenceComponent");
			return ret;
		}

		void OnRemoveDuplicatePlayer(APlayerController PlayerController); // Flags: Final|Native|Private 0x7FF414CB9618
		void OnControllerBeginDestroy(AFortPlayerControllerAthena FortPCAthena); // Flags: Final|Native|Private 0x7FF414CB9538
		void OnAnyPlayerLoggedIn(APlayerController PlayerController); // Flags: Final|Native|Private 0x7FF414CB9458
		void HandlePlayerDisconnecting(AFortPlayerController Controller, FString DevReason, bool bGracefulDisconnect); // Flags: Final|Native|Private 0x7FF414CB9378
	};


	// Class JunoGameNative.JunoWorldPersistenceHandler
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoWorldPersistenceHandler : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceHandler_Deltas
	// Inherited from UJunoWorldPersistenceHandler -> UObject
	// Size: 0x160 (0x190 - 0x30)
	class UJunoWorldPersistenceHandler_Deltas : public UJunoWorldPersistenceHandler	
	{
	public:
		int32_t DeltasPeriodicSaveIntervalSeconds_Default; // 0x30(0x4)
		int32_t DeltasPeriodicSaveIntervalSeconds_PIEOverride; // 0x34(0x4)
		unsigned char UnknownData03_6[0x110]; // 0x38(0x110) UNKNOWN PROPERTY
		UJunoDeltasSaveHandler DeltasSaveHandler; // 0x148(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x150(0x10) UNKNOWN PROPERTY
		FSoftClassPath DefaultDeltaFileClass; // 0x160(0x18)
		TArray RollbackBadCheckpointRanges; // 0x178(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x188(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceHandler_Deltas");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistencePlayerManager
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UJunoWorldPersistencePlayerManager : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x98]; // 0x28(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistencePlayerManager");
			return ret;
		}

		void OnAnyPlayerLoggedIn(APlayerController PlayerController); // Flags: Final|Native|Public 0x7FF414CB96F8
	};


	// Class JunoGameNative.JunoAIPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x200 (0x258 - 0x58)
	class UJunoAIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		unsigned char UnknownData01_3[0x20]; // 0x58(0x20) UNKNOWN PROPERTY
		FSavedAIDataManager SavedAIData; // 0x78(0x1E0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAIPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x70 (0xC8 - 0x58)
	class UJunoPlayspaceIndexPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FSoftClassPath WorldTilePlayspaceClass; // 0x58(0x18)
		UClass CachedWorldTilePlayspaceClass; // 0x70(0x8)
		FJunoPlayspaceIndexSaveData PlayspaceIndexSaveData; // 0x78(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoUserGeneratedTextPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x50 (0xA8 - 0x58)
	class UJunoUserGeneratedTextPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoUserGeneratedTextSaveData UserGeneratedTextSaveData; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoUserGeneratedTextPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldInGameTimePersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x18 (0x70 - 0x58)
	class UJunoWorldInGameTimePersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoWorldInGameTimeSaveData JunoWorldInGameTimeSaveData; // 0x58(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldInGameTimePersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x50 (0xA8 - 0x58)
	class UJunoWorldPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoWorldSaveData WorldSaveData; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoClusterUnionPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x50 (0xA8 - 0x58)
	class UJunoClusterUnionPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoClusterUnionSaveData SaveData; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoClusterUnionPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoClusterUnionPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoConnectivityGraphPersistenceFeatureDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoConnectivityGraphPersistenceFeatureDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityGraphPersistenceFeatureDataInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoConnectivityGraphPFWPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0xD0 (0x128 - 0x58)
	class UJunoConnectivityGraphPFWPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FSerializableConnectivityGraph_v2 SavedConnectivityData; // 0x60(0xC8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityGraphPFWPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoConnectivityGraphPFW_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoConnectivityGraphPFW_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityGraphPFW_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsPFWModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoPhysicsPFWModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsPFWModule");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsToyPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x50 (0xA8 - 0x58)
	class UJunoPhysicsToyPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoPhysicsToySaveData Container; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPhysicsToyPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoPhysicsToyPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPersistenceFeaturePFWState
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoPersistenceFeaturePFWState : public UObject	
	{
	public:
		TWeakObjectPtr ContainerWeakPtr; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistenceFeaturePFWState");
			return ret;
		}
	};


	// Class JunoGameNative.PFWSubsystemExtension_JunoGameNative
	// Inherited from UPersistenceFrameworkSubsystemExtension -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UPFWSubsystemExtension_JunoGameNative : public UPersistenceFrameworkSubsystemExtension	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PFWSubsystemExtension_JunoGameNative");
			return ret;
		}
	};


	// Class JunoGameNative.JunoControllerComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x4A8 (0x550 - 0xA8)
	class UJunoControllerComponent : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerSpawnedActorWithBuilderTool; // 0xA8(0x10)
		FMulticastInlineDelegate OnOffhandInputPressed; // 0xB8(0x10)
		FMulticastInlineDelegate OnOffhandInputReleased; // 0xC8(0x10)
		unsigned char UnknownData10_6[0x10]; // 0xD8(0x10) UNKNOWN PROPERTY
		UFortWorldItemDefinition EmptyHandItemDefinition; // 0xE8(0x8)
		float InteractionDistanceFromCamera; // 0xF0(0x4)
		float InteractionDistanceFromPlayer; // 0xF4(0x4)
		FPrimaryAssetId BuilderToolPrimaryAsset; // 0xF8(0x8)
		UClass DeathChestActorClass; // 0x100(0x8)
		UClass DeathChestNavFilterClass; // 0x108(0x8)
		FVector DeathChestNavQuestyExtents; // 0x110(0x18)
		float DeathChestZDistanceToCheck; // 0x128(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FJunoMarker CheckpointMarker; // 0x130(0xC0)
		FGuid ItemToBuildGUID; // 0x1F0(0x10)
		unsigned char UnknownData12_6[0x10]; // 0x200(0x10) UNKNOWN PROPERTY
		FGuid ItemSelectedGuid; // 0x210(0x10)
		bool bSpawnedBackpack; // 0x220(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x221(0x7) UNKNOWN PROPERTY
		FVector BackpackSpawnLocation; // 0x228(0x18)
		unsigned char UnknownData14_6[0x10]; // 0x240(0x10) UNKNOWN PROPERTY
		UInputComponent InputComponent; // 0x250(0x8)
		unsigned char UnknownData15_6[0xD8]; // 0x258(0xD8) UNKNOWN PROPERTY
		UFortItem CachedQuickBuildItem; // 0x330(0x8)
		unsigned char UnknownData16_6[0x190]; // 0x338(0x190) UNKNOWN PROPERTY
		UFortOffhandComponent OffhandComponent; // 0x4C8(0x8)
		FGameplayEventListenerHandle CheckpointActorDestroyedHandle; // 0x4D0(0x1C)
		unsigned char UnknownData17_6[0x4]; // 0x4EC(0x4) UNKNOWN PROPERTY
		FJunoPlayerCheckpoint PlayerCheckpoint; // 0x4F0(0x38)
		unsigned char UnknownData18_6[0x20]; // 0x528(0x20) UNKNOWN PROPERTY
		bool bIsModeratorModeEnabled; // 0x548(0x1)
		unsigned char UnknownData19_7[0x7]; // 0x549(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent");
			return ret;
		}

		void SwitchToEmptyHands(bool bTriggerSelection, FGameplayTag OptionalSlotGroupTag, int32_t OptionalSlotRow, int32_t OptionalSlotColumn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CBB678
		bool SpawnedBackpack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CBB598
		bool ShouldSpawnDeathChest(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CBB4B8
		void SetPlayerLastCaveTeleporterLocation(FVector& TeleporterLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CBB3D8
		void SetPlayerCheckpoint(AActor CheckpointActor, FVector& CheckpointLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CBB2F8
		void SetIsModeratorModeEnabled(bool bEnable); // Flags: Final|Native|Public 0x7FF414CBB218
		void ServerTeleportToPOI(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414CBB138
		void ServerTeleportToLocation(FVector TeleportLocation, FRotator TeleportRotation); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults 0x7FF414CBB058
		void ServerTeleportToCave(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414CBAF78
		void ServerSetSelectedItem(FGuid ItemGuid, FGameplayTag SlotGroupTag, int32_t SlotRow, int32_t SlotColumn); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 0x7FF414CBAE98
		void ServerSetCraftingContextItem(FGuid InItemGuid); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults 0x7FF414CBADB8
		void ServerRespawnAtLocation(FVector2D InLocation); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults 0x7FF414CBACD8
		void ServerRequestPersistenceDataReport(EJunoPersistenceReportOptions ReportOptions); // Flags: Net|NetReliableNative|Event|Public|NetServer|Const 0x7FF414CBABF8
		void ServerReportRecipeMismatch(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414CBAB18
		void ServerReplicateMapData(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414CBAA38
		void ServerFreeBuildAddInventoryItem(FFortItemEntry InItemEntry); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414CBA958
		void OnRep_ItemSelectedGuid(); // Flags: Final|Native|Private 0x7FF414CBA878
		void OnPlayerReturnToMainMenuOnClient(AFortPlayerController PC); // Flags: Final|Native|Private 0x7FF414CBA798
		void OnCameraToggle(); // Flags: Event|Public|BlueprintEvent 0x7FF414CBA6B8
		void OnAnimToggle(); // Flags: Event|Public|BlueprintEvent 0x7FF414CBA5D8
		void HandleFortPawnChanged(AFortPawn NewPawn); // Flags: Final|Native|Private 0x7FF414CBA4F8
		void HandleBuilderToolUnEquip(AFortWeapon Weapon); // Flags: Final|Native|Private 0x7FF414CBA418
		void HandleBuilderToolInteractionStopped(AJunoBuilderTool BuilderTool, UJunoBuilderToolInteractionBehavior Behavior); // Flags: Final|Native|Private 0x7FF414CBA338
		void HandleBuilderToolInteractionStarted(AJunoBuilderTool BuilderTool, UJunoBuilderToolInteractionBehavior Behavior); // Flags: Final|Native|Private 0x7FF414CBA258
		FJunoPlayerCheckpoint GetPlayerCheckpoint(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CBA178
		FVector GetLastCaveTeleporterLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CBA098
		bool GetIsModeratorModeEnabled(); // Flags: Final|Native|Public 0x7FF414CB9FB8
		AJunoBuilderTool GetBuilderTool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CB9ED8
		void EquipQuickBarItem(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB9DF8
		void ClientPrintPersistenceDataReport(TArray Logs); // Flags: Net|NetReliableNative|Event|Public|NetClient|Const 0x7FF414CB9D18
		void ClientNotifyInventoryInvoked(AActor ReceivingActor); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414CB9C38
		void ClientNotifyInventoryFull(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414CB9B58
		void ClientNotifyInventoryClosed(AActor ReceivingActor); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414CB9A78
		void AddRecipeToBuilderTool(FName RecipeName); // Flags: Final|Native|Public 0x7FF414CB9998
		void AddItemToBuilderToolOnEquip(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414CB98B8
		void AddItemToBuilderTool(UFortItem Item); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CB97D8
	};


	// Class JunoGameNative.JunoHealthComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoHealthComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoHealthComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoInputControllerComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x1E8 - 0xA8)
	class UJunoInputControllerComponent : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData03_3[0x40]; // 0xA8(0x40) UNKNOWN PROPERTY
		bool bCachedEnableClientSettingsRestoreInputPresets : 1; // 0xE8:0(0x1)
		unsigned char UnknownData04_5[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		UJunoInputMappingComponentData InputMappingData; // 0xF0(0x8)
		UInputAction InputAction_HandleCameraToggle; // 0xF8(0x8)
		UInputAction InputAction_HandleAnimToggle; // 0x100(0x8)
		UInputAction InputAction_HandleCyclePOI; // 0x108(0x8)
		UInputAction InputAction_HandleTeleportToCave; // 0x110(0x8)
		UInputAction InputAction_NextQuickbarSlot; // 0x118(0x8)
		UInputAction InputAction_NextQuickbarSlot_Delayed; // 0x120(0x8)
		UInputAction InputAction_PrevQuickbarSlot; // 0x128(0x8)
		UInputAction InputAction_PrevQuickbarSlot_Delayed; // 0x130(0x8)
		UInputAction InputAction_HandleOpenHudMenu; // 0x138(0x8)
		UInputAction InputAction_HandleOpenBuildingMenu; // 0x140(0x8)
		unsigned char UnknownData05_7[0xA0]; // 0x148(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputControllerComponent");
			return ret;
		}

		void PushInputMappingContext(UJunoInputMappingComponentData InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF414CBB918
		void PopInputMappingContext(UJunoInputMappingComponentData InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF414CBB838
		void HandleOnCreativeFlyChangedDelegate(bool bIsFlying); // Flags: Final|Native|Private 0x7FF414CBB758
	};


	// Class JunoGameNative.JunoLWITriggerComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UJunoLWITriggerComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLWITriggerComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPawnComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UJunoPawnComponent : public UFortPawnComponent	
	{
	public:
		bool bShouldSpawnDeathChest; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnComponent");
			return ret;
		}

		bool ShouldPawnSpawnDeathChest(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CBBAD8
		bool IsPlayerInCave(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CBB9F8
	};


	// Class JunoGameNative.JunoPawnComponent_EmotionalState
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x138 - 0xA8)
	class UJunoPawnComponent_EmotionalState : public UFortPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnJunoCurrentEmotionalStateChangedDelegate; // 0xA8(0x10)
		FMulticastInlineDelegate OnJunoCurrentEmotionalStateStartedChange; // 0xB8(0x10)
		FMulticastInlineDelegate OnJunoCurrentEmotionChangeFinished; // 0xC8(0x10)
		FMulticastInlineDelegate OnCheatEmotionIndexChanged; // 0xD8(0x10)
		EJunoPawnEmotionalState CurrentEmotionalState; // 0xE8(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xE9(0x3) UNKNOWN PROPERTY
		FJunoEmotionalStateData TargetEmotionalState; // 0xEC(0x10)
		char CheatEmotionIndex; // 0xFC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xFD(0x3) UNKNOWN PROPERTY
		TArray JunoPawnEmotionalStateMappingFromAwesomeLevel; // 0x100(0x10)
		unsigned char UnknownData07_6[0x8]; // 0x110(0x8) UNKNOWN PROPERTY
		float ResetToDefaultEmotionRate; // 0x118(0x4)
		float TimeToStayAtEmotionInSeconds; // 0x11C(0x4)
		unsigned char UnknownData08_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		FTimerHandle DefaultEmotionHandle; // 0x128(0x8)
		unsigned char UnknownData09_7[0x8]; // 0x130(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnComponent_EmotionalState");
			return ret;
		}

		void SetEmotionalState(FJunoEmotionalStateData Emotion); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CBC2B8
		void SetCurrentEmotionalState(EJunoPawnEmotionalState NewEmotion); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414CBC1D8
		void ResetToDefaultEmotionalState(); // Flags: Final|Native|Private 0x7FF414CBC0F8
		void OnRep_TargetEmotionalState(); // Flags: Final|Native|Private 0x7FF414CBC018
		void OnRep_CurrentEmotionalState(); // Flags: Final|Native|Private 0x7FF414CBBF38
		void OnRep_CheatEmotionIndex(); // Flags: Final|Native|Private 0x7FF414CBBE58
		void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Private|HasOutParms 0x7FF414CBBD78
		float GetCurrentEmotionalStateValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CBBC98
		EJunoPawnEmotionalState GetCurrentEmotionalState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CBBBB8
	};


	// Class JunoGameNative.JunoPawnPhysicsRepulsionComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UJunoPawnPhysicsRepulsionComponent : public UActorComponent	
	{
	public:
		float PushOutMaxDistance; // 0xA0(0x4)
		unsigned char UnknownData01_7[0x2C]; // 0xA4(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent");
			return ret;
		}

		void SetCapsuleMass(float InBaseForce); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CBC8D8
		void HandleMovementModeChanged(TEnumAsByte MovementMode, char CustomMode); // Flags: Final|Native|Private 0x7FF414CBC7F8
		void HandleMovementBaseChanged(UPrimitiveComponent NewBaseComponent, FName BoneName); // Flags: Final|Native|Private 0x7FF414CBC718
		void HandleHeldObjectChanged(AActor HeldObject); // Flags: Final|Native|Private 0x7FF414CBC638
		void HandleComponentPhysicsStateChange(UPrimitiveComponent ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Private 0x7FF414CBC558
		void HandleComponentHit(UPrimitiveComponent HitComponent, AActor OtherActor, UPrimitiveComponent OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414CBC478
		float GetCapsuleMass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CBC398
	};


	// Class JunoGameNative.JunoPlayerState
	// Inherited from AFortPlayerStateAthena -> AFortPlayerStateZone -> AFortPlayerState -> AFGF_PlayerState -> APlayerState -> AInfo -> AActor -> UObject
	// Size: 0x28 (0x1A00 - 0x19D8)
	class AJunoPlayerState : public AFortPlayerStateAthena	
	{
	public:
		FGuid CaveId; // 0x19D8(0x10)
		TArray PinColorForPlayer; // 0x19E8(0x10)
		FGameplayTag GameplayTagPresentWhenTeleporting; // 0x19F8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x19FC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerState");
			return ret;
		}

		FGuid GetCaveId(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CBC9B8
	};


	// Class JunoGameNative.JunoWorldStreamingSourceProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWorldStreamingSourceProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldStreamingSourceProviderInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoControllerComponent_StreamingSources
	// Inherited from UFortControllerComponent_StreamingSources -> UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x160 - 0x110)
	class UJunoControllerComponent_StreamingSources : public UFortControllerComponent_StreamingSources	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x110(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_StreamingSources");
			return ret;
		}
	};


	// Class JunoGameNative.PlayspaceComponent_JunoAIPersistence
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x238 (0x330 - 0xF8)
	class UPlayspaceComponent_JunoAIPersistence : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0xF8(0x48) UNKNOWN PROPERTY
		FGameplayTagContainer AllDynamicUniqueAIIdentifiers; // 0x140(0x20)
		TArray FriendshipStateThresholds; // 0x160(0x10)
		unsigned char UnknownData03_7[0x1C0]; // 0x170(0x1C0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoAIPersistence");
			return ret;
		}
	};


	// Class JunoGameNative.PlayspaceComponent_JunoPerformance
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UPlayspaceComponent_JunoPerformance : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoPerformance");
			return ret;
		}
	};


	// Class JunoGameNative.PlayspaceComponent_JunoServerExpiration
	// Inherited from UPlayspaceComponent_ServerExpiration -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x1D0 - 0x1B8)
	class UPlayspaceComponent_JunoServerExpiration : public UPlayspaceComponent_ServerExpiration	
	{
	public:
		bool bUseConfigAlertDataList; // 0x1B8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1B9(0x7) UNKNOWN PROPERTY
		TArray ConfigAlertDataList; // 0x1C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoServerExpiration");
			return ret;
		}
	};


	// Class JunoGameNative.JunoQuestDefinitionComponent_ProductCompatibilityInjector_GameMode
	// Inherited from UFortQuestDefinitionComponent_ProductCompatibilityInjector -> UFortQuestDefinitionComponent -> UObject
	// Size: 0x8 (0x80 - 0x78)
	class UJunoQuestDefinitionComponent_ProductCompatibilityInjector_GameMode : public UFortQuestDefinitionComponent_ProductCompatibilityInjector	
	{
	public:
		EJunoWorldSettingOptions_BuildMode GameMode; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoQuestDefinitionComponent_ProductCompatibilityInjector_GameMode");
			return ret;
		}
	};


	// Class JunoGameNative.JunoClusterUnionCustomRepNode
	// Inherited from UFortReplicationGraphNode_Custom -> UReplicationGraphNode -> UObject
	// Size: 0x20 (0x70 - 0x50)
	class UJunoClusterUnionCustomRepNode : public UFortReplicationGraphNode_Custom	
	{
	public:
		TArray AllClusterUnions; // 0x50(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClusterUnionCustomRepNode");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAction
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAction : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAction");
			return ret;
		}

		void K2_OnExecuteAction(FJunoActionTargetPayload& ActionTargetPayload, UJunoActionConfig Config); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414CBCA98
	};


	// Class JunoGameNative.JunoAction_LoadAndSetStaticMesh
	// Inherited from UJunoAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAction_LoadAndSetStaticMesh : public UJunoAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAction_LoadAndSetStaticMesh");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAction_SetStaticMesh
	// Inherited from UJunoAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoAction_SetStaticMesh : public UJunoAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAction_SetStaticMesh");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingActorCountMetric
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoBuildingActorCountMetric : public UObject	
	{
	public:
		UDataRegistry BuildLimitDataRegistry; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingActorCountMetric");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingActorCountMetricComponent
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoBuildingActorCountMetricComponent : public UGameStateComponent	
	{
	public:
		UClass JunoBuildingMetricClass; // 0xA0(0x8)
		UJunoBuildingActorCountMetric JunoBuildingMetric; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingActorCountMetricComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingActorMetric
	// Inherited from USpatialMetricInterface -> UWorldMetricInterface -> UObject
	// Size: 0x1D8 (0x228 - 0x50)
	class UJunoBuildingActorMetric : public USpatialMetricInterface	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
		FScalableFloat MinValue; // 0x60(0x28)
		FScalableFloat NetworkRelevantActorCountThreshold; // 0x88(0x28)
		FScalableFloat SpatialPrecision; // 0xB0(0x28)
		TMap ActorCounts; // 0xD8(0x50)
		TSet TrackedActors; // 0x128(0x50)
		TArray TrackedClasses; // 0x178(0x10)
		TSet PendingRefreshments; // 0x188(0x50)
		TSet ActorsPendingAdd; // 0x1D8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingActorMetric");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingSpatialMetricComponent
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJunoBuildingSpatialMetricComponent : public UGameStateComponent	
	{
	public:
		TWeakObjectPtr JunoBuildingMetricClass; // 0xA0(0x20)
		TWeakObjectPtr JunoBuildingMetric; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingSpatialMetricComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoAssetList
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoAssetList : public UObject	
	{
	public:
		TArray Assets; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAssetList");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBlueprintLibrary");
			return ret;
		}

		void UnpackColorFromCustomDataFloat(float InPackedColor, int32_t& OutColorId, int32_t& OutVariantId, int32_t& OutRandomId); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4140687F0
		void SpawnResourcesOnDestruction(AActor Actor, FVector& LastHitLocation, AActor DamageCauser, FGameplayEffectContextHandle& EffectContext); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414068710
		AActor SpawnPersistentActor(UObject WorldContextObject, UClass& ActorClass, FTransform& SpawnTransform, APawn Instigator, AJunoPersistentPlayspace Playspace, FGameplayTagQuery PlayspaceTagQuery); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414068630
		void SetGeometryCollectionISMPoolCustomInstanceData(UGeometryCollectionComponent GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414068550
		float PackColorToCustomDataFloat(int32_t InColorId, int32_t InVariantId, int32_t InRandomId); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414068470
		void JunoForEachActorComponentConstDelegate__DelegateSignature(UActorComponent Component); // Flags: Public|Delegate 0x7FF4140661C8
		bool IsWorldOwner(AFortPlayerController PC); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414068390
		bool IsFreshWorld(UObject WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4140682B0
		bool IsFirstPlayerSpawn(AFortPlayerPawn PlayerPawn); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4140681D0
		bool IsActorInCone(AActor Actor, FVector& ConeLocation, FVector& ConeForward, float FacingHalfAngleDeg); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4140680F0
		bool HasPlayerRespawned(AFortPlayerController PC); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414068010
		void GetWorldStartPosition(UObject WorldContextObject, FVector& Location, bool& bIsReady); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414067F30
		void GetTileInformationTagsForActor(AActor Actor, FGameplayTagContainer& OutResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414067E50
		bool GetPreviewSmartObjectEntranceLocationsWithValidation(UObject WorldContextObject, FTransform& WorldTransform, USmartObjectDefinition SmartObjectDefinition, AActor SkipActor, FSmartObjectSlotEntranceLocationRequest& Request, TArray& Results); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414067BF0
		bool GetPreviewSmartObjectEntranceLocations(FTransform& WorldTransform, USmartObjectDefinition SmartObjectDefinition, TArray& Results); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414067990
		UPlayspaceComponent GetPlayspaceComponentFromPlayspace(AActor Actor, UClass ComponentClass, UClass PlayspaceClass); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140678B0
		UPlayspaceComponent GetPlayspaceComponentByInterface(AActor Actor, UClass InterfaceClass, UClass PlayspaceClass); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140677D0
		FJunoPlayerSaveData GetPlayerSaveData(AController PlayerController, bool& bIsValid); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4140673F0
		FJunoPlayerActiveEffectsSaveData GetPlayerActiveEffectsSaveData(AController PlayerController, bool& bIsValid); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414067190
		TArray GetMergedMeshComponents(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4140670B0
		UJunoMapManagerComponent GetMapManagerComponent(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414066FD0
		void GetKnownCraftingRecipes(AFortPlayerController FortPC, AActor CraftingObject, TArray& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414066EF0
		bool GetIsWorldKeyHolder(AFortPlayerController PC); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414066E10
		double GetDistanceToWorldStartPosition(UObject WorldContextObject, FVector& Location, bool& bIsReady); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414066D30
		int32_t GetCountOfResourcesInAIResourcesInventory(AActor AIActor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414066C50
		int32_t GetBoneIndex(USkeletalMesh SkeletalMesh, FName BoneName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414066B70
		void GetBiomeInformationForActor(AActor Actor, FJunoBiomeInfoQueryResult& OutResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414066A90
		void GetBiomeInformationAtLocation(UObject WorldContextObject, FVector& Location, FJunoBiomeInfoQueryResult& OutResult); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414066888
		void GetBiomeForActor(AActor Actor, EJunoBiome& OutResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4140667A8
		UCustomizableObjectInstance GetAMSCustomizableObjectInstance(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140666C8
		bool GetAMSAnimDataAssetsFromActor(AActor Actor, FAssembledMeshSchemaData_AnimDataAssets& AnimData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4140665E8
		bool GetAMSAnimDataAssets(AFortPlayerPawn FortPlayerPawn, FAssembledMeshSchemaData_AnimDataAssets& AnimData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414066388
		AJunoPersistentPlayspace GetActorPersistentPlayspace(AActor Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4140662A8
		void ForEachComponentOfActorClassDefault(UClass& ActorClass, UClass& ComponentClass, FDelegateProperty& Func); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4140660E8
		FText CostlyFindAIDisplayNameFromUniqueAIIdentifier(UObject WorldContextObject, FGameplayTag& UniqueAIIdentifier); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414066008
		void BreakHitResultThreadSafe(FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, UPhysicalMaterial& PhysMat, AActor& HitActor, UPrimitiveComponent& HitComponent, FName& HitBoneName, FName& BoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, FVector& TraceStart, FVector& TraceEnd); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414065F28
	};


	// Class JunoGameNative.JunoCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoCheatManager : public UChildCheatManager	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCheatManager");
			return ret;
		}

		void JunoTurnOnWorldSetting(FName WorldSetting); // Flags: Final|Exec|Native|Private 0x7FF414CC0298
		void JunoTurnOffWorldSetting(FName WorldSetting); // Flags: Final|Exec|Native|Private 0x7FF414CC01B8
		void JunoTransitionWeatherNow(FName OptionalLocation); // Flags: Final|Exec|Native|Private 0x7FF414CC00D8
		void JunoToggleKnowledgeFiltering(); // Flags: Final|Exec|Native|Private 0x7FF414CBFFF8
		void JunoToggleKnowledgeDebugMenu(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414CBFF18
		void JunoToggleFreeCrafting(); // Flags: Final|Exec|Native|Private 0x7FF414CBFE38
		void JunoToggleBlockUnownedMCPRecipesKnowledgeWhenUnfiltered(); // Flags: Final|Exec|Native|Private 0x7FF414CBFD58
		void JunoTeleportToPersistenceLocationOfInterest(); // Flags: Final|Exec|Native|Private 0x7FF414CBFC78
		void JunoTeleportToBackpack(); // Flags: Final|Exec|Native|Private 0x7FF414CBFB98
		void JunoSpawnMinifig(float Health); // Flags: Final|Exec|Native|Private 0x7FF414CBFAB8
		void JunoShowDualLocalPlayerInventory(); // Flags: Final|Exec|Native|Private 0x7FF414CBF9D8
		void JunoSetEmotion(int32_t EmotionIndex); // Flags: Final|Exec|Native|Private 0x7FF414CBF8F8
		void JunoSavePersistenceDataCsvReport(); // Flags: Final|Exec|Native|Private 0x7FF414CBF818
		void JunoSaveBuiltStructure(FString SaveName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414CBF738
		void JunoRevealRecipesOfCategory(FName CraftingObjectTag, FName CategoryTag, FName SubCategoryTag); // Flags: Final|Exec|Native|Private 0x7FF414CBF658
		void JunoRevealRecipe(FName RecipeName); // Flags: Final|Exec|Native|Private 0x7FF414CBF578
		void JunoRevealBuildingTestRecipes(); // Flags: Final|Exec|Native|Private 0x7FF414CBF498
		void JunoResavePlayerPersistence(); // Flags: Final|Exec|Native|Private 0x7FF414CBF3B8
		void JunoResaveAllPersistentPlayspacesActorsAroundPlayer(float Max2DDistance); // Flags: Final|Exec|Native|Private 0x7FF414CBF2D8
		void JunoResaveAllPersistentPlayspacesActors(); // Flags: Final|Exec|Native|Private 0x7FF414CBF1F8
		void JunoProfiler_Item(); // Flags: Final|Exec|Native|Private 0x7FF414CBF118
		void JunoProfiler_Creature(); // Flags: Final|Exec|Native|Private 0x7FF414CBF038
		void JunoProfiler_BuildingSuburb(int32_t NumBuildings); // Flags: Final|Exec|Native|Private 0x7FF414CBEF58
		void JunoProfiler_BuildingPropBundle(FString PropBundleTemplateId); // Flags: Final|Exec|Native|Private 0x7FF414CBEE78
		void JunoProfiler_BuildingJunkyard(int32_t NumBuildings, bool bSpawnRandom); // Flags: Final|Exec|Native|Private 0x7FF414CBED98
		void JunoProfiler_BuildingActor(); // Flags: Final|Exec|Native|Private 0x7FF414CBECB8
		void JunoProcessPlayerProgression(); // Flags: Final|Exec|Native|Private 0x7FF414CBEBD8
		void JunoPrintWorldSettings(); // Flags: Final|Exec|Native|Private 0x7FF414CBEAF8
		void JunoPrintPersistenceDataReport(bool bShowTemplateData, bool bShowActorInstanceData, bool bShowJunoUpdateActions, bool bShowJunoDeleteActions); // Flags: Final|Exec|Native|Private 0x7FF414CBEA18
		void JunoPrintConnectivityGraphSummary(); // Flags: Final|Exec|Native|Private 0x7FF414CBE938
		void JunoPrintAreaAwesomeLevelInfo(); // Flags: Final|Exec|Native|Private 0x7FF414CBE858
		void JunoLogPersistenceDebugInfo(); // Flags: Final|Exec|Native|Private 0x7FF414CBE778
		void JunoLoadBuiltStructure(FString SaveName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414CBE698
		void JunoListWorlds(); // Flags: Final|Exec|Native|Private 0x7FF414CBE5B8
		void JunoGiveWeapon(FString WeaponPath); // Flags: Final|Exec|Native|Private|Const 0x7FF414CBE4D8
		void JunoForceWeatherState(FName NewWeatherType, FName OptionalLocation); // Flags: Final|Exec|Native|Private 0x7FF414CBE3F8
		void JunoForcePlayerTemperature(FName NewTemperatureTag); // Flags: Final|Exec|Native|Private 0x7FF414CBE318
		void JunoForceAreaAwesomeLevelUpgrade(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414CBE238
		void JunoEnableSpawnedActorPersistentPlayspaceTracking(FName ActorName); // Flags: Final|Exec|Native|Private 0x7FF414CBE158
		void JunoEnableSandbox(); // Flags: Final|Exec|Native|Private 0x7FF414CBE078
		void JunoEnableModeratorMode(); // Flags: Final|Exec|Native|Private 0x7FF414CBDF98
		void JunoEnableFreeBuild(); // Flags: Final|Exec|Native|Private 0x7FF414CBDEB8
		void JunoDumpWorldPersistentContents(); // Flags: Final|Exec|Native|Private 0x7FF414CBDDD8
		void JunoDumpAllDeltasAssetReferences(); // Flags: Final|Exec|Native|Private 0x7FF414CBDCF8
		void JunoDisableSandbox(); // Flags: Final|Exec|Native|Private 0x7FF414CBDC18
		void JunoDisableModeratorMode(); // Flags: Final|Exec|Native|Private 0x7FF414CBDB38
		void JunoDisableFreeBuild(); // Flags: Final|Exec|Native|Private 0x7FF414CBDA58
		void JunoDestroyCurrentVillage(); // Flags: Final|Exec|Native|Private 0x7FF414CBD978
		void JunoDestroyAllSupportStructures(); // Flags: Final|Exec|Native|Private 0x7FF414CBD898
		void JunoDeleteWorld(FString JunoWorldId); // Flags: Final|Exec|Native|Private 0x7FF414CBD7B8
		void JunoDeleteAllWorlds(); // Flags: Final|Exec|Native|Private 0x7FF414CBD6D8
		void JunoCreateNewWorld(FString Title, int32_t AdventureSeed); // Flags: Final|Exec|Native|Private 0x7FF414CBD5F8
		void JunoCreateCurrentWorldCheckpoint(); // Flags: Final|Exec|Native|Private 0x7FF414CBD518
		void JunoCompleteGuidedBuildToStage(int32_t SectionIndex, int32_t StageIndex); // Flags: Final|Exec|Native|Private 0x7FF414CBD438
		void JunoCompleteGuidedBuild(); // Flags: Final|Exec|Native|Private 0x7FF414CBD358
		void JunoCompleteCurrentGuidedBuildStage(); // Flags: Final|Exec|Native|Private 0x7FF414CBD278
		void JunoClearKnowledgeCloudSave(); // Flags: Final|Exec|Native|Private 0x7FF414CBD198
		void JunoClearFOW(bool bForCurrentTile); // Flags: Final|Exec|Native|Private 0x7FF414CBD0B8
		void JunoClearClientFOW(bool bForCurrentTile); // Flags: Final|Exec|Native|Private 0x7FF414CBCFD8
		void JunoCheckInWorldSaveDataAndExitPIE(); // Flags: Final|Exec|Native|Private 0x7FF414CBCEF8
		void JunoChangeEnumWorldSetting(FName WorldSettingValue); // Flags: Final|Exec|Native|Private 0x7FF414CBCE18
		void JunoApplyDamageToRadius(float Radius, float DamageToApply); // Flags: Final|Exec|Native|Private 0x7FF414CBCD38
		void JunoAdjustAreaAwesomePoints(int32_t AwesomePointsDelta); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private 0x7FF414CBCC58
		void JunoAddEssence(FString EssencePath); // Flags: Final|Exec|Native|Private|Const 0x7FF414CBCB78
	};


	// Class JunoGameNative.JunoGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGlobals");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWeatherFXComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UJunoWeatherFXComponent : public UGameFrameworkComponent	
	{
	public:
		FVector PlayerLocation; // 0xA0(0x18)
		UMaterialParameterCollection WeatherCollection; // 0xB8(0x8)
		FLinearColor TorchLightColorIC; // 0xC0(0x10)
		FLinearColor TorchCampfireLightColor; // 0xD0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherFXComponent");
			return ret;
		}

		void NativelySetPlayerLocationRuntime(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CC0538
		void NativelySetDayNightLightDirectionColorRuntime(double RuinsWeight, double LavaWeight, double SurfaceWeight); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CC0458
		bool IsLumen(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CC0378
	};


	// Class JunoGameNative.JunoWeatherPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UJunoWeatherPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoWeatherSaveData WeatherSaveData; // 0x58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldConditionWeatherState
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UJunoWorldConditionWeatherState : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldConditionWeatherState");
			return ret;
		}

		void HandleWeatherChanged(FJunoEvent_WeatherPhaseChanged& Payload); // Flags: Final|Native|Private|HasOutParms 0x7FF414CC0618
	};


	// Class JunoGameNative.BlockOctreeManager
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x168 (0x3F8 - 0x290)
	class ABlockOctreeManager : public AInfo	
	{
	public:
		int32_t RelevancyRadius; // 0x290(0x4)
		int32_t MaxISMCsToPopulateAFrame; // 0x294(0x4)
		bool bRenderAllBricks; // 0x298(0x1)
		unsigned char UnknownData03_6[0xA7]; // 0x299(0xA7) UNKNOWN PROPERTY
		TMap CellIdToISMC; // 0x340(0x50)
		unsigned char UnknownData04_6[0x10]; // 0x390(0x10) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent ISMC; // 0x3A0(0x8)
		TArray ISMCFreeList; // 0x3A8(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x3B8(0x10) UNKNOWN PROPERTY
		TArray Positions; // 0x3C8(0x10)
		TArray Colors; // 0x3D8(0x10)
		TArray RandomColors; // 0x3E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.BlockOctreeManager");
			return ret;
		}

		void Towers(int32_t Rows, int32_t Cols); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CC06F8
	};


	// Class JunoGameNative.StressISMManager
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x60 (0x2F0 - 0x290)
	class AStressISMManager : public AInfo	
	{
	public:
		bool bPushUpdatesEveryTick; // 0x290(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent ISMC; // 0x298(0x8)
		TArray ChildISMC; // 0x2A0(0x10)
		TArray Positions; // 0x2B0(0x10)
		TArray Rotations; // 0x2C0(0x10)
		TArray Colors; // 0x2D0(0x10)
		TArray RandomColors; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.StressISMManager");
			return ret;
		}

		void Towers(int32_t Rows, int32_t Cols, int32_t Height); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CC0998
		void SetNumChildISMC(int32_t Num); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CC08B8
		void PushUpdatesToISMC(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CC07D8
	};

}
