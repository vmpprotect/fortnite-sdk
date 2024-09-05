#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoGameNative
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoGameNative.FortAutomationRpcManager_Juno
	// Inherited from UFortAutomationRpcManager -> UObject
	// Size: 0x50 (0xB8 - 0x68)
	class UFortAutomationRpcManager_Juno : public UFortAutomationRpcManager	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x68(0x50) UNKNOWN PROPERTY

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
		UClass* GenerateInVolume; // 0xF8(0x8)

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

		bool ShouldBeTrackedByMetrics(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF747A09D0C(relative to base address)
		int32_t GetNumberOfRelevantActors(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C37692C(relative to base address)
		float GetNetRelevanceDistanceOverride(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF750CA6B24(relative to base address)
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

		void OnResurrectTriggered(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoGameNative.JunoAbility_PlayerPushPhysicsObject
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x130 (0xC70 - 0xB40)
	class UJunoAbility_PlayerPushPhysicsObject : public UFortGameplayAbility	
	{
	public:
		EFortPhysicsSimSize MaxPhysicsObjectSizeToPush; // 0xB40(0x1)
		EFortPhysicsSimSize MinPhysicsObjectSizeToPush; // 0xB41(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xB42(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer NoTagsPusher; // 0xB48(0x20)
		FGameplayTagContainer NoTagsPushedObject; // 0xB68(0x20)
		UAnimMontage* DefaultPushMontage; // 0xB88(0x8)
		TArray<FPushMontageData> SpecializedPushMontages; // 0xB90(0x10)
		FGameplayTagQuery EnergyComponentQuery; // 0xBA0(0x48)
		FScalableFloat EnergyInitialCost; // 0xBE8(0x28)
		FScalableFloat EnergyDrainPerSecond; // 0xC10(0x28)
		bool bEnergyExhausted; // 0xC38(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC39(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortComponent_Energy*> CachedEnergyComponent; // 0xC3C(0x8)
		unsigned char UnknownData02_6[0xC]; // 0xC44(0xC) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> TrackedObjectToPush; // 0xC50(0x8)
		EFortPhysicsSimSize TrackedObjectSimSize; // 0xC58(0x1)
		unsigned char UnknownData03_7[0x17]; // 0xC59(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject");
			return ret;
		}

		void StopUsingEnergy(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750CA71C0(relative to base address)
		void PotentiallyStartUsingEnergy(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750CA6FA0(relative to base address)
		void OnPlayerHit(AActor* HitPlayer, AActor* HitActor, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF750CA6D0C(relative to base address)
		void OnEnergyFullyRecharged(UFortComponent_Energy* EnergyComponentRecharged); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CA6C78(relative to base address)
		void OnEnergyDrained(UFortComponent_Energy* EnergyComponentDrained); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CA6BE4(relative to base address)
		UAnimMontage GetMontageToPlay(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CA6B00(relative to base address)
		void CancelPushingPhysicsObject(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class JunoGameNative.JunoAccountItemDefinitionOverrideManager
	// Inherited from UObject
	// Size: 0x208 (0x230 - 0x28)
	class UJunoAccountItemDefinitionOverrideManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UFortHeroType* JunoHeroDefinition; // 0x30(0x8)
		UDataTable* DefaultCharacters; // 0x38(0x8)
		TMap<TWeakObjectPtr, TWeakObjectPtr> PreviewActorClasses; // 0x40(0x50)
		TMap<TWeakObjectPtr, FGameplayTagContainer> GameplayTagParentsToRemoveFromOverrides; // 0x90(0x50)
		TMap<TWeakObjectPtr, FGameplayTagContainer> GameplayTagsToAdd; // 0xE0(0x50)
		TMap<TWeakObjectPtr, FGameplayTagContainer> CosmeticsMarkupGameplayTagsToAllow; // 0x130(0x50)
		TSet<FString> CosmeticsProhibitedByHotfix; // 0x180(0x50)
		TMap<FPrimaryAssetId, FJunoAccountItemDefinitionOverride> Overrides; // 0x1D0(0x50)
		unsigned char UnknownData01_7[0x10]; // 0x220(0x10) UNKNOWN PROPERTY

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
		TArray<UFortCosmeticVariant*> ItemVariantsOverride; // 0x50(0x10)
		bool bOverrideFrontendTransform; // 0x60(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		float FrontendPreviewScale; // 0x64(0x4)
		FVector FrontendPreviewPivotOffset; // 0x68(0x18)
		FRotator FrontendPreviewInitialRotation; // 0x80(0x18)
		TWeakObjectPtr<UClass*> PreviewActorClass; // 0x98(0x20)

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
		unsigned char UnknownData00_3[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<UAthenaCharacterItemDefinition*> BaseAthenaCharacterItemDefinition; // 0xC8(0x20)
		TWeakObjectPtr<UAssembledMeshSchema*> AssembledMeshSchema; // 0xE8(0x20)
		TWeakObjectPtr<UAssembledMeshSchema*> LowDetailsAssembledMeshSchema; // 0x108(0x20)
		TWeakObjectPtr<UAnimMontage*> FrontendAnimMontageIdleOverride; // 0x128(0x20)
		float PreviewPawnScale; // 0x148(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAthenaCharacterItemOverrideDefinition");
			return ret;
		}

		void SetBaseAthenaCharacterItemDefinition(TWeakObjectPtr<UAthenaCharacterItemDefinition*> InBaseAthenaCharacterItemDefinition); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750CA6FB4(relative to base address)
	};


	// Class JunoGameNative.JunoAthenaDanceItemOverrideDefinition
	// Inherited from UJunoAccountItemOverrideDefinition -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x118 (0x1D0 - 0xB8)
	class UJunoAthenaDanceItemOverrideDefinition : public UJunoAccountItemOverrideDefinition	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UAthenaDanceItemDefinition*> BaseAthenaDanceItemDefinition; // 0xC0(0x20)
		TWeakObjectPtr<UAnimMontage*> Animation; // 0xE0(0x20)
		TWeakObjectPtr<UAnimMontage*> AnimationFemaleOverride; // 0x100(0x20)
		TArray<FFortEmoteMapping> AnimationOverrides; // 0x120(0x10)
		bool bOverridePlayRandomSectionByName; // 0x130(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
		TArray<FSectionNameAndWeight> PlayRandomSectionByName; // 0x138(0x10)
		TWeakObjectPtr<UAnimMontage*> FrontEndAnimation; // 0x148(0x20)
		TWeakObjectPtr<UAnimMontage*> FrontEndAnimationFemaleOverride; // 0x168(0x20)
		TArray<FFortEmoteMapping> FrontEndAnimationOverrides; // 0x188(0x10)
		bool bOverridePreviewDuration; // 0x198(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		int32_t PreviewLoops; // 0x19C(0x4)
		float PreviewLength; // 0x1A0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FVector GroupEmotePositionOffset; // 0x1A8(0x18)
		float GroupEmotePositionOffsetTolerance; // 0x1C0(0x4)
		float GroupEmoteFollowDistance; // 0x1C4(0x4)
		float WalkForwardSpeed; // 0x1C8(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAthenaDanceItemOverrideDefinition");
			return ret;
		}

		void SetBaseAthenaDanceItemDefinition(TWeakObjectPtr<UAthenaDanceItemDefinition*> InBaseAthenaDanceItemDefinition); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750CA70B0(relative to base address)
	};


	// Class JunoGameNative.JunoActionConfig
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoActionConfig : public UObject	
	{
	public:
		UClass* JunoActionClass; // 0x28(0x8)
		EJunoActionExecutionConfig JunoActionExecutionConfig; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		TWeakObjectPtr<UStaticMesh*> SoftStaticMesh; // 0x38(0x20)
		unsigned char UnknownData00_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

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
		UStaticMesh* StaticMesh; // 0x38(0x8)

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
		unsigned char UnknownData00_7[0x14]; // 0xA4(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoActorAttributeOverrideComponent");
			return ret;
		}

		void SetupHealthAttributeSet(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CA71AC(relative to base address)
		FName GetSecondaryLootTier(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CA6B98(relative to base address)
		FName GetPrimaryLootTier(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CA6B4C(relative to base address)
	};


	// Class JunoGameNative.JunoActorInstancesReportHandler
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UJunoActorInstancesReportHandler : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		bool bTriggerErrorOnSetDirtyAfterCheckIn; // 0x38(0x1)
		unsigned char UnknownData01_6[0x17]; // 0x39(0x17) UNKNOWN PROPERTY
		bool bDirty; // 0x50(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBasePFWPersistenceFeatureData");
			return ret;
		}

		void OnPersistentDataModified(); // Flags: RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF747B0DC80(relative to base address)
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
		unsigned char UnknownData00_1[0xA0]; // 0x140(0xA0) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery CombatPositionQuery; // 0x118(0x48)
		FValueOrBBKey_Float ReengageDistance; // 0x160(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData02_6[0x1C]; // 0x1E4(0x1C) UNKNOWN PROPERTY
		APawn* CachedPawnPtr; // 0x200(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x208(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x20]; // 0xA8(0x20) UNKNOWN PROPERTY
		FGameplayTag TorchWeaponTag; // 0xC8(0x4)
		FGameplayTag OffhandWeaponToEquipTag; // 0xCC(0x4)
		TArray<FName> ExecutionStatusesToCheckedToHolsterKeyNames; // 0xD0(0x10)
		unsigned char UnknownData01_6[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
		TArray<FName> BoolsToCheckToHolsterKeyNames; // 0xF0(0x10)
		unsigned char UnknownData02_7[0x10]; // 0x100(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<UCraftingObjectComponent*> CachedCraftingObjectComponent; // 0xB8(0x8)
		FDataRegistryType WeaponEssenceDataRegistryType; // 0xC0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAlterationCraftingComponent");
			return ret;
		}

		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CAA264(relative to base address)
		bool OnCheckValidItemType(AFortPlayerController* Instigator); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E700530(relative to base address)
		void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CAA1C8(relative to base address)
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
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_7[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter");
			return ret;
		}

		UJunoAsyncAction_WaitForEventRouter WaitForEventRouter(AActor* ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CAA30C(relative to base address)
		void onGameplayEventRouterAvailable__DelegateSignature(UGameplayEventRouterComponent* EventRouter); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoGameNative.JunoAsyncAction_WaitForRootPlayspace
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UJunoAsyncAction_WaitForRootPlayspace : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnReady; // 0x30(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAsyncAction_WaitForRootPlayspace");
			return ret;
		}

		UJunoAsyncAction_WaitForRootPlayspace RootPlayspaceReadyAsync(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CAD3D0(relative to base address)
	};


	// Class JunoGameNative.JunoPersistenceAssetType
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoPersistenceAssetType : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		UBoneMaskDefinitionDataAsset* BodyPartsDefinition; // 0x30(0x8)
		TArray<FJunoBoneMaskInstanceEntry> Data; // 0x38(0x10)

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
		unsigned char UnknownData00_7[0x14]; // 0xD4(0x14) UNKNOWN PROPERTY

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

		void ReceiveSpawnedByBuilderTool(AJunoBuilderTool* BuilderTool, UJunoBuilderToolInteractionBehavior* Behavior); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF750CAD30C(relative to base address)
		void ReceiveSelectionSpawnedByBuilderTool(AJunoBuilderTool* BuilderTool, UJunoBuilderToolInteractionBehavior* Behavior, FJunoBuilderToolSelectionSpawnParams& SelectionSpawnParameters); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF750CAD1C8(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingAccountItemDefBase
	// Inherited from UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x4B8 - 0x498)
	class UJunoBuildingAccountItemDefBase : public UAthenaCosmeticItemDefinition	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x498(0x8) UNKNOWN PROPERTY
		float JunoBuildingFrontendPreviewScale; // 0x4A0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4A4(0x4) UNKNOWN PROPERTY
		FVector2D JunoBuildingFrontendFramingCenterOffsetRatio; // 0x4A8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingAccountItemDefBase");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingSetAccountItemDefinition
	// Inherited from UJunoBuildingAccountItemDefBase -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x4E0 - 0x4B8)
	class UJunoBuildingSetAccountItemDefinition : public UJunoBuildingAccountItemDefBase	
	{
	public:
		float FoundationPiecesHeightToShow; // 0x4B8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4BC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> BuildingActorClassToPreview; // 0x4C0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingSetAccountItemDefinition");
			return ret;
		}
	};


	// Class JunoGameNative.JunoBuildingPropAccountItemDefinition
	// Inherited from UJunoBuildingAccountItemDefBase -> UAthenaCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x4D8 - 0x4B8)
	class UJunoBuildingPropAccountItemDefinition : public UJunoBuildingAccountItemDefBase	
	{
	public:
		TWeakObjectPtr<UClass*> BuildingActorClassToPreview; // 0x4B8(0x20)

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

		TArray GetKnobs(FJunoBuildingConnectionPointsResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CAD0A0(relative to base address)
		TArray GetAtomModelAssetUserData(UObject* Object); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CACFE8(relative to base address)
		void DebugDrawConnections(UObject* WorldContextObject, FJunoBuildingConnectionPointsResult& Candidates, FJunoBuildingConnectionPointsResult& Targets, FJunoBuildingConnection& ChosenConnection, TArray<FJunoBuildingConnection>& Connections); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CACDD0(relative to base address)
		void DebugDrawConnectionLocations(UObject* WorldContextObject, FJunoBuildingConnection& Connection); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CACCEC(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingCosmeticsSettings
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UJunoBuildingCosmeticsSettings : public UPrimaryDataAsset	
	{
	public:
		TWeakObjectPtr<UClass*> JunoBuildingSetPreviewActorClass; // 0x30(0x20)
		TWeakObjectPtr<UClass*> JunoBuildingPropPreviewActorClass; // 0x50(0x20)
		TWeakObjectPtr<UClass*> JunoBuildingSetPreviewPrefabAssetClass; // 0x70(0x20)
		TWeakObjectPtr<UClass*> JunoBuildingPropPreviewPrefabAssetClass; // 0x90(0x20)
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
		unsigned char UnknownData00_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		FFortUICameraFrameTargetBounds CameraFrameTargetBounds; // 0x2A0(0x20)
		float ZoomedInBoundsScale; // 0x2C0(0x4)
		unsigned char UnknownData01_7[0xBC]; // 0x2C4(0xBC) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x70]; // 0xBD8(0x70) UNKNOWN PROPERTY
		UJunoHarvestingComponent* HarvestingComponent; // 0xC48(0x8)
		UJunoPhysicsPersistenceComponent* PhysicsPersistenceComponent; // 0xC50(0x8)
		unsigned char UnknownData01_6[0x10]; // 0xC58(0x10) UNKNOWN PROPERTY
		UJunoGeometryCollectionAssemblerComponent* GeometryCollectionAssemblerComponent; // 0xC68(0x8)
		UItemDefinitionBase* AssociatedItem; // 0xC70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingProp");
			return ret;
		}

		UItemDefinitionBase GetAssociatedItem(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCC594(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingPropTree
	// Inherited from AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0xC80 - 0xC78)
	class AJunoBuildingPropTree : public AJunoBuildingProp	
	{
	public:
		UActorComponent* LifeCycleComponent; // 0xC78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPropTree");
			return ret;
		}

		bool BlueprintCanDieInLifecyclePhase(char CurrentPhaseIndex); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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

		void UpdateViewTargetValues(FTViewTarget& InViewTarget, AActor* InViewTargetActor, double InInteriorFOV, float InCameraPitchMin, float InCameraPitchMax, bool bInAllowChangingHidePercentByPitch, double InCurrentFOV, double& OutCurrentFOV, double& OutVTVelocity, FVector& OutVelocityDirection, FVector& OutVTVelDir, FVector& OutViewTargetBoxExtent, FVector& OutProbeCastOrigin, double& OutVTVelocityDotWithCam, double& OutCameraPitch, double& OutNormalizedCameraPitch, float& OutHidePawnPenetrationPercent); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB30F4(relative to base address)
		void UpdateProbeChecks(UObject* InWorldContextObject, AActor* InViewTargetActor, FVector& InProbeCastOrigin, FName& InTagIgnoredActors, FVector& InViewTargetBoxExtent, double InVerticalProbeLength, int32_t InVerticalProbeTickSkip, int32_t InFrontalProbeTickSkip, double InFrontalAngledProbeAngle, double InFrontalAngledProbeLength, int32_t InVerticalProbeCurTickNum, int32_t InFrontalProbeCurTickNum, int32_t& OutVerticalProbeCurTickNum, int32_t& OutFrontalProbeCurTickNum, bool& bOutVerticalProbeBlocked, float& OutVerticalHitDistance, bool& bOutFrontalProbeBlocked, float& OutFrontalHitDistance); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB292C(relative to base address)
		FBox RebuildCameraLocationErrorConstraintBox(FBox CameraLocationErrorConstraintBox); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB263C(relative to base address)
		double GetVelocityWeight(double InVelocityAddDistanceThreshold, double InVTVelocity, double InFastVelocityThreshold); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB2530(relative to base address)
		double GetVelocityDistanceAdd(double InWeight, double InAddMaxDistance); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB2460(relative to base address)
		double GetProbeWeight(double InHitDistance, double InProbeLength, bool bInProbeBlocked); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB2354(relative to base address)
		double GetFOVAndDistanceInterpSpeed(double InConfinedSpaceWeight, double InMinInterpSpeed, double InMaxInterpSpeed); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB2174(relative to base address)
		double GetDesiredFOV(double InVelocityWeight, double InConfinedSpaceWeight, double InVelocityAddMaxFOV, double InExteriorFOV, double InInteriorFOV); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB0DE4(relative to base address)
		double GetDesiredForwardDistance(UObject* InWorldContextObject, double InBuildingPreviewHeightAdditionalZoom, double InBuildingPreviewSizeScalar, FFloatRange InPitchCameraForwardDistanceManager, bool bInIsTargetInConversation, UCurveFloat* InCurvePitchDistance, double InNormalizedCameraPitch, double InCameraPitch, double InCameraPitchMax, bool bInIsTargetStrafing, bool bInIsTargetBuilding, double InExteriorCameraSpaceForwardDistance, double InExteriorCameraSpaceForwardDistanceStrafing, bool bInCameraAdjustsWhenStrafing, bool bIsBuildPreviewMode, UCurveFloat* InBuildPreviewBoundsToForwardDistanceScale, FBox InBuildPreviewLocalBounds, double InConfinedSpaceWeight, double bInteriorCameraSpaceForwardDistance, double InVelocityAddMaxDistance, double InFastVelocityThreshold, double InVTVelocity, double InVelocityAddDistanceThreshold, double InCurrentBuildingScalarDistanceOffset, double& OutCurrentBuildingScalarDistanceOffset); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB0F78(relative to base address)
		double GetConfinedSpaceWeight(double InVerticalHitDistance, double InVerticalProbeLength, bool bInVerticalProbeBlocked, double InFrontalHitDistance, double InFrontalProbeLength, bool bInFrontalProbeBlocked); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB0C08(relative to base address)
		FInterpOffset ComputeViewTargetSpaceViewOffset(bool bIsTargetInConversation, FInterpOffset& ViewTargetSpaceViewOffset, UMaterialParameterCollection* Collection, double DeltaTime, double ViewTargetOffsetInterpSpeed, FVector& DefaultTargetViewOffset, AActor* ViewTarget, FTViewTarget& OutVT); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB0670(relative to base address)
		FInterpOffset ComputeVelocityBasedCameraSpaceViewOffset(bool bUseVelocityViewTargetLeading, FInterpOffset& CameraSpaceViewOffset, FVector& CurVelOffset); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB0470(relative to base address)
		double ComputeHidePawnPenetrationPercent(double StartingHidePawnPenetrationPercent, bool bAllowChangingHidePercentByPitch, double ChangingHideDefaultValue, double ChangingHidePitchedValue, double NormalizedCameraPitch, double ChangingHidePitchedThreshold); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB0290(relative to base address)
		double ComputeFOV(bool bCameraAdjustsWhenStrafing, double FOV, double ExteriorFOV, double StrafingFOV, double DeltaTime, double StrafingTransitionInterpSpeed, bool bIsTargetStrafing); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB0064(relative to base address)
		FVector ComputeCurVelOffset(bool bUseVelocityViewTargetLeading, bool bIsTargetStrafing, bool bIsTargetAttackingMelee, FVector& CurVelOffset, double DeltaTime, double MaxVelocityCamOffset, double VTVelocityDotWithCam, double DotParallelThreshold, double VelOffsetSpeed, FVector& VTVelDir, FTViewTarget& OutVT, UCurveFloat* Curve_VelocityInterpSpeed, double VTVelocity); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CAF520(relative to base address)
		double ComputeCurrentFOV(double CurrentFOV, double DesiredFOV, double DeltaTime, double FOVAndDistanceInterpSpeed); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CAFF14(relative to base address)
		double ComputeCurGroundedBlendInterp(bool bIsTargetFalling, double CurGroundedBlendInterp, double DeltaTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CAF410(relative to base address)
		double ComputeCurFollowBlendInterp(bool bIsTargetAttackingMelee, double CurFollowBlendInterp, double DeltaTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CAF300(relative to base address)
		FVector ComputeCurCamSpaceViewOffset(FVector& CurCamSpaceViewOffset, float DeltaTime, bool bIsTargetInConversation, FInterpOffset& CameraSpaceViewOffset, float InteriorCamZOffset, float ConfinedWieghtSpace); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CAEF28(relative to base address)
		FInterpOffset ComputeCameraSpaceViewOffset(FInterpOffset& CameraSpaceViewOffset, FVector& CurCamSpaceViewOffset); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CAED68(relative to base address)
		double ComputeCameraSpaceForwardDistance(double CameraSpaceForwardDistance, double DesiredForwardDistance, double DeltaTime); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CAEC54(relative to base address)
		FVector ComputeCameraOriginInterpSpeed(bool bIsTargetAttackingMelee, bool IsTargetFalling, double NonAttackingFollowInterp, double AttackingFollowInterp, double CurFollowBlendInterp, double NonGroundedZInterp, double GroundedZInterp, double CurGroundedBlendInterp); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CAE9B4(relative to base address)
		void ComputeBuildingPreviewSizeScalar(double& InBuildingPreviewSizeScalar, AActor* InViewTargetActor, bool& bInIsTargetBuilding, UMaterialParameterCollection* InCollection, double& InBuildingSizeMin, double& InBuildingSizeMax, double& OutBuildingPreviewSizeScalar); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CAE734(relative to base address)
		FVector ComputeBasePlatformVelocity(UCharacterMovementComponent* CharacterMovementComponent); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CAE668(relative to base address)
		void CheckViewTargetTags(AActor* InViewTargetActor, bool& bOutIsTargetBuilding, bool& bOutIsTargetFalling, bool& bOutIsTargetInConversation, bool& bOutIsTargetAttackingMelee, bool& bOutIsTargetStrafing); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CAE3E4(relative to base address)
	};


	// Class JunoGameNative.JunoCampActor
	// Inherited from AActor -> UObject
	// Size: 0xE8 (0x378 - 0x290)
	class AJunoCampActor : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x290(0x40) UNKNOWN PROPERTY
		FGameplayTag StaticGameplayTag; // 0x2D0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer DefaultPersistentTags; // 0x2D8(0x20)
		int32_t CampUpgradeRewardFilters; // 0x2F8(0x4)
		unsigned char UnknownData02_6[0x2C]; // 0x2FC(0x2C) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x328(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x338(0x8) UNKNOWN PROPERTY
		UOverlapComponent* BoundsComponent; // 0x340(0x8)
		TWeakObjectPtr<UJunoCampCenterComponent*> CampCenterCache; // 0x348(0x8)
		EJunoBiome CampBiome; // 0x350(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer OwnedGameplayTags; // 0x358(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampActor");
			return ret;
		}

		void RemovePersistentTags(FGameplayTagContainer& TagsToRemove); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CB2874(relative to base address)
		void RemoveGameplayTag(FGameplayTag& TagToRemove); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CB27A0(relative to base address)
		FGameplayTag GetStaticGameplayTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E587AB0(relative to base address)
		void GetPersistentTags(FGameplayTagContainer& PersistentTags); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB229C(relative to base address)
		FGameplayTagContainer GetOwnedGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB2280(relative to base address)
		FGameplayTag GetCampTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E587AB0(relative to base address)
		void ApplyPersistentTags(FGameplayTagContainer& TagsToApply); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CAE32C(relative to base address)
		void AddGameplayTag(FGameplayTag& TagToAdd); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CAE25C(relative to base address)
	};


	// Class JunoGameNative.JunoCampCenterComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x1B0 - 0xA0)
	class UJunoCampCenterComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoCampAwesomeLevelChangedDelegate; // 0xA8(0x10)
		FMulticastInlineDelegate OnJunoCampAwesomePointModificationDelegate; // 0xB8(0x10)
		FMulticastInlineDelegate OnJunoCampNonResourceRequirementsMetChanged; // 0xC8(0x10)
		unsigned char UnknownData01_6[0x30]; // 0xD8(0x30) UNKNOWN PROPERTY
		UClass* CampActorClassToSpawn; // 0x108(0x8)
		FGameplayTag CampCenterDestructionDeathReasonTag; // 0x110(0x4)
		bool bForceCampCreation; // 0x114(0x1)
		bool bCreatePermanentCamp; // 0x115(0x1)
		bool bUseAlternateCampCreationFlow; // 0x116(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x117(0x1) UNKNOWN PROPERTY
		UJunoAsyncAction_WaitForEventRouter* WaitForEventRouterAction; // 0x118(0x8)
		FGuid LinkedCampActorID; // 0x120(0x10)
		bool bCampCreationFlowTriggered; // 0x130(0x1)
		unsigned char UnknownData03_6[0x17]; // 0x131(0x17) UNKNOWN PROPERTY
		TWeakObjectPtr<AJunoCampActor*> CampActorCache; // 0x148(0x8)
		unsigned char UnknownData04_7[0x60]; // 0x150(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampCenterComponent");
			return ret;
		}

		void OnNonResourceRequirementsChanged(FJunoEvent_NonResourceRequirementsMetChanged& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750CB75C0(relative to base address)
		void OnCampAwesomePointModification(FJunoEvent_CampAwesomePointsModified& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750CB7530(relative to base address)
		void OnCampAwesomeLevelChanged(FJunoEvent_CampAwesomeLevelChanged& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750CB7498(relative to base address)
		void NotifyOwnerPlacedByBuilderTool(AFortPlayerController* FortPC); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CB7400(relative to base address)
		void HandleSmartObjectEvent(FSmartObjectEventData& SmartObjectEventData, AActor* Actor); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CB7024(relative to base address)
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
		unsigned char UnknownData00_7[0x17]; // 0x161(0x17) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x18]; // 0xF0(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<AJunoCampActor*> BoundCamp; // 0x108(0x8)
		unsigned char UnknownData01_6[0x30]; // 0x110(0x30) UNKNOWN PROPERTY
		FScalableFloat ToleranceForMovementUpdates; // 0x140(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampMembershipActorComponent");
			return ret;
		}

		void OnRep_BoundCamp(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB7664(relative to base address)
		bool HasCampAtLocation(UObject* WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB7270(relative to base address)
		bool HasCampAtBounds(UObject* WorldContextObject, FBox& Bounds); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB71A0(relative to base address)
		void HandleBoundCampEndPlayEvent(AActor* InOwner, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB6A70(relative to base address)
		UActorComponent GetBoundComponent(UClass* ComponentClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB69CC(relative to base address)
		AJunoCampActor GetBoundCamp(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB69A8(relative to base address)
		UActorComponent FindOrCreateCampMembershipComponentAndReturnComponent(UClass* ComponentClass, AActor* Owner); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB6878(relative to base address)
		UJunoCampMembershipActorComponent FindOrCreateCampMembershipActorComponentOnActor(AActor* Owner); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB67F8(relative to base address)
		UActorComponent FindCampMembershipComponentAndReturnComponent(UClass* ComponentClass, AActor* Owner); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB671C(relative to base address)
		UJunoCampMembershipActorComponent FindCampMembershipActorComponentOnActor(AActor* Owner); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB6690(relative to base address)
		AJunoCampActor FindBindableLocalCampForLocation(UObject* WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB6588(relative to base address)
		AJunoCampActor FindBindableLocalCampForArea(AActor* Actor, FBox& AreaBox); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB643C(relative to base address)
		UActorComponent FindBindableLocalCampForActorAndReturnComponent(UClass* ComponentClass, AActor* Actor); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB6344(relative to base address)
		AJunoCampActor FindBindableLocalCampForActor(AActor* Actor); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CB62C4(relative to base address)
		UActorComponent FindBindableLocalCampAtLocationAndReturnComponent(UClass* ComponentClass, UObject* WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CB6144(relative to base address)
		void AttemptToBindToCamp(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB5FA0(relative to base address)
	};


	// Class JunoGameNative.JunoCampPersistenceComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UJunoCampPersistenceComponent : public UJunoCampComponentBase	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY
		FAwesomeLevelSaveData AwesomeLevelSaveData; // 0xC0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FAICampManagementSaveData AICampManagementSaveData; // 0xC8(0x20)
		FNamedPOISaveData NamedPOISaveData; // 0xE8(0xE0)
		unsigned char UnknownData02_7[0x18]; // 0x1C8(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY
		TArray<FActiveCampNPCEntry> ActiveNPCEntries; // 0xE8(0x10)
		TArray<FActiveCampCreatureEntry> ActiveCreatureEntries; // 0xF8(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x108(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampRecruitmentComponent");
			return ret;
		}

		TArray GetActiveNPCEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CB6970(relative to base address)
		TArray GetActiveCreatureEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CB6954(relative to base address)
	};


	// Class JunoGameNative.JunoCampRecruitmentObjectComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UJunoCampRecruitmentObjectComponent : public UGameFrameworkComponent	
	{
	public:
		int32_t AcceptedPawnTypes; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoRecruitmentObjectAssignedChangedDelegate; // 0xA8(0x10)
		unsigned char UnknownData01_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoRecruitmentObjectEnableChangeDelegate; // 0xD0(0x10)
		FMulticastInlineDelegate OnJunoRecruitmentObjectAssignedAISpawnedDelegate; // 0xE0(0x10)
		FMulticastInlineDelegate OnJunoRecruitmentObjectAssignedAIDespawnedDelegate; // 0xF0(0x10)
		bool bIsEnabled; // 0x100(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FJunoRecruitmentObjectAssignedData CachedAssignedData; // 0x108(0x78)
		unsigned char UnknownData03_7[0x60]; // 0x180(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampRecruitmentObjectComponent");
			return ret;
		}

		void OnRep_bIsEnabled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CB7678(relative to base address)
		void OnRep_AssignedData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CB7650(relative to base address)
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D6917E8(relative to base address)
		bool IsAssignedToPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB73D4(relative to base address)
		bool IsAssignedToNPC(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB73B4(relative to base address)
		bool IsAssignedToCreature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB7394(relative to base address)
		bool IsAssignedToAI(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB7378(relative to base address)
		void HandleOnEmptyRecrutmentObjectInteracted(AFortPlayerController* InteractingController); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CB6F98(relative to base address)
		void HandleDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF750CB6B34(relative to base address)
		FJunoRecruitmentObjectAssignedData GetAssignedData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB698C(relative to base address)
		bool CostlyFindAssignableNPCs(TArray<FGameplayTag>& OutAssignableNPCs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB6098(relative to base address)
		bool CostlyFindAssignableCreatures(TArray<FGameplayTag>& OutAssignableCreatures); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB5FEC(relative to base address)
		bool CanBeAssignedToPlayers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EBBA5F8(relative to base address)
		bool CanBeAssignedToNPCs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB5FD0(relative to base address)
		bool CanBeAssignedToCreatures(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB5FB4(relative to base address)
		void AssignToPlayer(AFortPlayerController* PlayerController, bool bCheckForDuplicateRecruitmentObjects); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CB5ED8(relative to base address)
		bool AssignToCreature(FGameplayTag& UniqueAIIdentifier, bool bCheckForDuplicateRecruitmentObjects, FText CustomName); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CB5D14(relative to base address)
		void AssignedActorSpawnLocationOverride(FVector& OutSpawnLocation); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoGameNative.JunoCampRemovalStatusComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJunoCampRemovalStatusComponent : public UJunoCampComponentBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		FScalableFloat SoftRemovalCampComponentUpdateRate; // 0xB0(0x28)
		unsigned char UnknownData01_6[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
		FJunoCampRemovalStatusData CampRemovalStatusData; // 0xE0(0xC)
		unsigned char UnknownData02_7[0xC]; // 0xEC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCampRemovalStatusComponent");
			return ret;
		}

		void OnRep_CampRemovalStatusData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB9BAC(relative to base address)
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

		void GetCaveEntrances(TArray<FTransform>& Transforms); // Flags: Native|Public|HasOutParms|Const, Memory Exec: 0x7FF750CB9080(relative to base address)
	};


	// Class JunoGameNative.JunoChaosAudioGameStateComponent
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x2C0 (0x360 - 0xA0)
	class UJunoChaosAudioGameStateComponent : public UFortGameStateComponent	
	{
	public:
		UPhysicalMaterial* FallbackPhysicalMaterial; // 0xA0(0x8)
		FName CollisionEventSizeParamName; // 0xA8(0x4)
		FName CollisionTriggerUpdateParamName; // 0xAC(0x4)
		TWeakObjectPtr<USoundBase*> Collision_Loop; // 0xB0(0x20)
		FScalableFloat CollisionMassToSize; // 0xD0(0x28)
		FScalableFloat CollisionVolumeMultiplier; // 0xF8(0x28)
		TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds> CollisionMaterials; // 0x120(0x50)
		FName BreakEventSizeParamName; // 0x170(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<USoundBase*> Break_Group_Default; // 0x178(0x20)
		TMap<UPhysicalMaterial*, USoundBase*> BreakGroupMaterialMap; // 0x198(0x50)
		FScalableFloat BreakMassToSize; // 0x1E8(0x28)
		FScalableFloat BreakVolumeMultiplier; // 0x210(0x28)
		TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds> BreakMaterials; // 0x238(0x50)
		TMap<FGuid, TWeakObjectPtr> CollisionSoundMap; // 0x288(0x50)
		TMap<FGuid, TWeakObjectPtr> BreakSoundMap; // 0x2D8(0x50)
		UAudioEventAggregatorSubsystem* AudioEventAggregatorSubsystem; // 0x328(0x8)
		TArray<TWeakObjectPtr> SoftAssets; // 0x330(0x10)
		TArray<USoundBase*> LoadedAssets; // 0x340(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x350(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoChaosAudioGameStateComponent");
			return ret;
		}

		void UnSubscribeToChaosEventRelayEvents(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CBA184(relative to base address)
		void SubscribeToChaosEventRelayEvents(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CBA170(relative to base address)
		void OnSoundCollisionEvents(TArray<FSoundCollisionEvent>& SoundCollisionEvents); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CB9D18(relative to base address)
		void OnSoundBreakEvents(TArray<FSoundBreakEvent>& SoundBreakEvents); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CB9C7C(relative to base address)
		void OnActiveSoundCollisionEventsUpdated(TArray<FSoundCollisionEvent>& SoundCollisionEvents); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CB9A5C(relative to base address)
		void OnActiveSoundCollisionEventSoundFinished(UAudioComponent* Component); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB99DC(relative to base address)
		void OnActiveSoundBreakEventsUpdated(TArray<FSoundBreakEvent>& SoundBreakEvents); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CB9940(relative to base address)
		void OnActiveSoundBreakEventSoundFinished(UAudioComponent* Component); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB98C0(relative to base address)
		USoundBase GetSingleChaosEventSound(TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds> ChaosEventMaterials, UPhysicalMaterial* Material, char EventSize); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB93A0(relative to base address)
	};


	// Class JunoGameNative.JunoCheatProfilerSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x80 (0xC0 - 0x40)
	class UJunoCheatProfilerSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x80]; // 0x40(0x80) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x10]; // 0x710(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyOnRigidStateChanged; // 0x720(0x10)
		unsigned char UnknownData01_7[0xF0]; // 0x730(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClusterUnionComponent");
			return ret;
		}

		void IgnoreReadinessSystems(bool bIgnore); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CB97E8(relative to base address)
	};


	// Class JunoGameNative.JunoComponent_HealthIndicator
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UJunoComponent_HealthIndicator : public UPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY
		float Health; // 0xC0(0x4)
		float MaxHealth; // 0xC4(0x4)
		FVector AttachOffset; // 0xC8(0x18)
		unsigned char UnknownData01_7[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoComponent_HealthIndicator");
			return ret;
		}

		void OnServerPawnHealthChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CB9C68(relative to base address)
		void OnRep_MaxHealth(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CB9C10(relative to base address)
		void OnRep_Health(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CB9BCC(relative to base address)
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

		FJunoActionChannelInfo GetSubscribingChannelInfo(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FJunoActionChannelInfo GetBroadcastingChannelInfo(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChangeSubscribingChannelTag(int32_t NewChannelIndex, bool bIsOn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChangeBroadcastingChannelTag(int32_t NewChannelIndex, bool bIsOn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoGameNative.JunoControlChannelComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UJunoControlChannelComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnDetachedFromClusterUnion; // 0xA0(0x10)
		FMulticastInlineDelegate OnJunoChannelValueReceived; // 0xB0(0x10)
		unsigned char UnknownData00_6[0x68]; // 0xC0(0x68) UNKNOWN PROPERTY
		AJunoClusterUnionActor* SourceClusterUnionActor; // 0x128(0x8)
		unsigned char UnknownData01_7[0x68]; // 0x130(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControlChannelComponent");
			return ret;
		}

		void UnsubscribeFromUniversal(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CBA2E0(relative to base address)
		void UnsubscribeFromChannel(FGameplayTag InChannelTag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CBA1B4(relative to base address)
		void UnsubscribeFromAllChannels(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CBA198(relative to base address)
		void SubscribeToChannel(FGameplayTag InChannelTag, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CB9F88(relative to base address)
		void SetChannelValue(FGameplayTag InChannelTag, float ChannelValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CB9DB4(relative to base address)
		void OnRep_SourceClusterUnionActor(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB9C54(relative to base address)
		void OnDetached(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB9B98(relative to base address)
		void OnAttached(FGraphIslandHandle& IslandHandle); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CB9AF8(relative to base address)
		float GetCombinedChannelValue(FGameplayTagContainer InChannelTagContainer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB9240(relative to base address)
		float GetChannelValue(FGameplayTag InChannelTag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CB9120(relative to base address)
		void ChangeChannelSubscription(FGameplayTag OldChannel, FGameplayTag NewChannel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CB8EAC(relative to base address)
	};


	// Class JunoGameNative.JunoControllerComponent_ActiveEffects
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UJunoControllerComponent_ActiveEffects : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_ActiveEffects");
			return ret;
		}

		void HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* AffectedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CB9724(relative to base address)
		void ApplyBuffsFromSaveDataToSelf(TArray<FJunoActiveBuffData>& SavedBuffs); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CB8E34(relative to base address)
	};


	// Class JunoGameNative.JunoControllerComponent_AFKHandler
	// Inherited from UFortControllerComponent_AFKHandler -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x140 - 0xD0)
	class UJunoControllerComponent_AFKHandler : public UFortControllerComponent_AFKHandler	
	{
	public:
		UDataTable* AFKEventsDataTable; // 0xD0(0x8)
		unsigned char UnknownData00_7[0x68]; // 0xD8(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_AFKHandler");
			return ret;
		}

		void OnPlayerStateRemoved(APlayerState* RemovedPlayerState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnPlayerStateAdded(APlayerState* AddedPlayerState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C088608(relative to base address)
	};


	// Class JunoGameNative.JunoControllerComponent_Indicators
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE0 (0x188 - 0xA8)
	class UJunoControllerComponent_Indicators : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		float ShowDistance; // 0xB8(0x4)
		float HideDistance; // 0xBC(0x4)
		float BuildingShowDistance; // 0xC0(0x4)
		float BuildingHideDistance; // 0xC4(0x4)
		unsigned char UnknownData01_6[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY
		FGameplayTag HealthIndicatorTag; // 0xD8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TSet<AFortPawn*> VisiblePawnsCache; // 0xE0(0x50)
		TArray<FJunoIndicatorVisibilityQueryEntry> QueryToPawnEntries; // 0x130(0x10)
		unsigned char UnknownData03_6[0x30]; // 0x140(0x30) UNKNOWN PROPERTY
		float BuildingHealthBarDisplayMaxDuration; // 0x170(0x4)
		TWeakObjectPtr<AActor*> JunoSingleHealthbarActor; // 0x174(0x8)
		unsigned char UnknownData04_7[0xC]; // 0x17C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_Indicators");
			return ret;
		}

		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF750CBC3A4(relative to base address)
		void OnAnyFortPawnDestroyed(AActor* InActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CBC240(relative to base address)
	};


	// Class JunoGameNative.JunoControllerComponent_MapMarker
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UJunoControllerComponent_MapMarker : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0xA8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_MapMarker");
			return ret;
		}

		void ServerCustomizeMarker(FGuid Guid, FJunoMarker NewMarker, FText DisplayName); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF750CBCB3C(relative to base address)
		void ClientRequestCustomization(FGuid Guid, FJunoMarker NewMarker, FText DisplayName, EJunoBiome Biome); // Flags: Net|NetReliableNative|Event|Public|HasDefaults|NetClient, Memory Exec: 0x7FF750CBB820(relative to base address)
		void ClientNotifyCustomizationResult(bool bSuccess); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74E801A28(relative to base address)
	};


	// Class JunoGameNative.JunoControllerComponent_ProfanityCheck
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UJunoControllerComponent_ProfanityCheck : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0xA8(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_SocialSim");
			return ret;
		}

		void Server_TriggerVillageSelfDestruct(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E217D18(relative to base address)
		void Server_TriggerAwesomeLevelChange(AFortPlayerController* TriggeringPlayer); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E9C0428(relative to base address)
		void OnJunoPlayerPersistenceDataAvailable(FUniqueNetIdRepl& UniquePlayerId, UJunoPlayerPersistenceComponent* PlayerPersistenceComponent); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CBC9E8(relative to base address)
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
		unsigned char UnknownData00_3[0x40]; // 0xA0(0x40) UNKNOWN PROPERTY
		FJunoInventoryConfig InventoryConfig; // 0xE0(0x18)
		FName InventoryLootTierGroup; // 0xF8(0x4)
		bool bShouldDropContentsOnOwnerDeath; // 0xFC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xFD(0x3) UNKNOWN PROPERTY
		float LootTossSpeed; // 0x100(0x4)
		float LootTossAngle; // 0x104(0x4)
		FVector LootTossOffset; // 0x108(0x18)
		FJunoInventoryHandle InventoryHandle; // 0x120(0x24)
		unsigned char UnknownData02_6[0x4]; // 0x144(0x4) UNKNOWN PROPERTY
		TMap<FGameplayTag, FJunoItemSlotGroup> ItemSlotGroups; // 0x148(0x50)
		FJunoReplicatedItemSlotList ReplicatedItemSlotData; // 0x198(0x128)
		FMulticastInlineDelegate OnInventoryChangedEvent; // 0x2C0(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x2D0(0x8) UNKNOWN PROPERTY
		TArray<FJunoSelectedSlotData> SelectedItemGroupSlots; // 0x2D8(0x10)
		unsigned char UnknownData04_7[0x28]; // 0x2E8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInventoryComponent");
			return ret;
		}

		void UseOffHandDurability(float DurabilityPerUse); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D89698(relative to base address)
		bool TryEquippingGear(UFortItem* ItemToEquip); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E700530(relative to base address)
		void ServerTakeItem(FJunoTakeItemRequest Request); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF750D89358(relative to base address)
		void ServerSortInventory(FJunoSortInventoryRequest Request); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF750D88F44(relative to base address)
		void ServerMoveAllItemsPossible(UJunoInventoryComponent* SourceInventoryComponent, UJunoInventoryComponent* DestinationInventoryComponent, TArray<FGameplayTag> SourceGroupTags, TArray<FGameplayTag> DestinationGroupTags); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF750D88D54(relative to base address)
		void ServerMoveAllItemsOfType(UJunoInventoryComponent* SourceInventoryComponent, UJunoInventoryComponent* DestinationInventoryComponent, TArray<FGameplayTag> SourceGroupTags, TArray<FGameplayTag> DestinationGroupTags, UItemDefinitionBase* ItemType); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF750D88BA4(relative to base address)
		void ServerMoveAllItemsAlreadyInDestination(UJunoInventoryComponent* SourceInventoryComponent, UJunoInventoryComponent* DestinationInventoryComponent, TArray<FGameplayTag> SourceGroupTags, TArray<FGameplayTag> DestinationGroupTags); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF750D88A38(relative to base address)
		void ServerMergeAllItemsPossible(AActor* TargetInventoryActor, FGameplayTag GroupTag); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF750D888C0(relative to base address)
		void ServerAttemptItemTransfer(FJunoItemTransferRequest Request); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF750D886C8(relative to base address)
		void ServerAttemptItemMerge(FJunoItemSlot SourceItemSlot, FJunoItemSlot DestinationItemSlot, AActor* SourceInventoryActor, AActor* DestinationInventoryActor, int32_t Count); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF750D881D8(relative to base address)
		bool RemoveItemFromInventory(FGuid ItemGuid, int32_t Count); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750D87F8C(relative to base address)
		void OnRep_InventoryHandle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D87DE4(relative to base address)
		void OnOwningBuildingActorKilled(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74E7294A8(relative to base address)
		UFortItem GetOffhandItem(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D8741C(relative to base address)
		TArray GetInventoryItemsInGroups(TArray<FGameplayTag>& Groups); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87294(relative to base address)
		TArray GetInventoryItems(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87254(relative to base address)
		UFortItem AddItemToInventory(UFortItemDefinition* ItemDefinition, int32_t Count); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D86DCC(relative to base address)
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

		bool UnlockRandomRecipeFromKnowledgeBundleTable(AFortPlayerController* PC, UDataTable* DataTable); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CBD0AC(relative to base address)
		FCraftingMultiKey MakePerPlayerCraftingKey(AActor* Instigator); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CBC1C0(relative to base address)
		FText MakeDeterministicCraftingFormulaDisplayNameText(UDataTable* DataTable, FName RowName, FString DisplayName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CBC098(relative to base address)
		int32_t GetRuneTier(UFortAlterationItemDefinition* RuneItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CBC018(relative to base address)
		FName GetRuneMinorCategory(UFortAlterationItemDefinition* RuneItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CBBF90(relative to base address)
		FName GetRuneMajorCategory(UFortAlterationItemDefinition* RuneItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CBBF08(relative to base address)
		FGameplayTag GetRuneFullCategory(UFortAlterationItemDefinition* RuneItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CBBE80(relative to base address)
		TArray FindRecipesCraftableFrom(UObject* WorldContextObject, TArray<FItemAndCount>& Ingredients); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CBBBD0(relative to base address)
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
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoDeleteActionsReportHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoDeltasSaveHandler
	// Inherited from UObject
	// Size: 0x120 (0x148 - 0x28)
	class UJunoDeltasSaveHandler : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x118]; // 0x28(0x118) UNKNOWN PROPERTY
		UDeltaFileSaveHandler* SaveHandler; // 0x140(0x8)

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
		TArray<FString> DeprecatedPersistentClassPaths; // 0x28(0x10)

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

		void SetGeometryCollectionSourceFromAtomModel(UGeometryCollection* GeometryCollection, UAtomModel* AtomModel, FName SelectionSetFilter); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CBCFC8(relative to base address)
		void SetGeometryCollectionMaterialForInstancedMeshes(UGeometryCollection* GeometryCollection, UMaterialInterface* OpaqueMaterial, UMaterialInterface* TransparentMaterial, UMaterialInterface* GlitterMaterial, UMaterialInterface* OpalMaterial, UMaterialInterface* InternalGlowMaterial); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CBCE2C(relative to base address)
		TArray GetGeometryCollectionSource(UAtomModel* AtomModel, FName SelectionSetFilter); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CBBD70(relative to base address)
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

		void OnEquip(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CBC968(relative to base address)
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

		UGameplayEventRouterComponent GetGameplayEventRouter(AActor* ContextActor); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CBBCF0(relative to base address)
	};


	// Class JunoGameNative.JunoExampleMacroGenerated_CheatTestSetup
	// Inherited from UPFWCheatTestSetup -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UJunoExampleMacroGenerated_CheatTestSetup : public UPFWCheatTestSetup	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x30(0x38) UNKNOWN PROPERTY
		UJunoExample_InGameClass* InGameClass; // 0x68(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x38]; // 0x30(0x38) UNKNOWN PROPERTY
		UJunoExample_InGameClass* InGameClass; // 0x68(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x1E0(0x8) UNKNOWN PROPERTY

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

		bool IsPlayerAllowedToFly(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CC68D4(relative to base address)
		bool IsItemSpawnerEnabled(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CC6834(relative to base address)
		bool IsFreeBuildEnabled(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CC679C(relative to base address)
		bool IsFreeBuildCostFilteringEnabled(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CC66FC(relative to base address)
		TArray GetFreeBuildSpawnableItems(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CC63AC(relative to base address)
		UFortItemDefinition GetFreeBuildSpawnableItemDefinition(UObject* WorldContextObject, FName& Name); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CC62DC(relative to base address)
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
		unsigned char UnknownData00_7[0x3F]; // 0xA9(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoFreeBuildComponent");
			return ret;
		}

		bool WasFreeBuildEverEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFB9D68(relative to base address)
		void OnRep_WasFreeBuildEverEnabled(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CC6B24(relative to base address)
		void OnRep_IsFreeBuildEnabled(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CC6ABC(relative to base address)
		void OnRep_AnyFreeBuildFlag(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CC6AA8(relative to base address)
		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CC6978(relative to base address)
		bool IsPlayerAllowedToFly(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC6954(relative to base address)
		bool IsItemSpawnerEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC68B4(relative to base address)
		bool IsFreeBuildEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC681C(relative to base address)
		bool IsFreeBuildCostFilteringEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC677C(relative to base address)
		TArray GetSpawnableItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC6480(relative to base address)
		void EnableFreeBuild(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CC6168(relative to base address)
		void DisableFreeBuild(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CC6154(relative to base address)
	};


	// Class JunoGameNative.JunoFreeBuildPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x28 (0x80 - 0x58)
	class UJunoFreeBuildPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x58(0x20) UNKNOWN PROPERTY
		FJunoFreeBuildSaveData FreeBuildSaveData; // 0x78(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x7A(0x6) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FJunoGameEventsFastArray GameEventEntries; // 0xA8(0x148)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_GameEventStream");
			return ret;
		}

		void AddGameEventEntry(FText& GameEventText, FUniqueNetIdRepl& TargetPlayerId); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CC6054(relative to base address)
	};


	// Class JunoGameNative.JunoGameStateComponent_Sleep
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoGameStateComponent_Sleep : public UFortGameStateComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_Sleep");
			return ret;
		}

		void RecordSleepThroughTheNightVoteFinished(FUniqueNetIdRepl& InitiatedVote, TArray<FUniqueNetIdRepl>& ControllersThatVotedYes, bool bVotePassed); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CC6B38(relative to base address)
	};


	// Class JunoGameNative.JunoGameStateComponent_WorldReactionsManager
	// Inherited from UFortGameStateComponent_WorldReactionsManager -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x288 - 0x238)
	class UJunoGameStateComponent_WorldReactionsManager : public UFortGameStateComponent_WorldReactionsManager	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x238(0x50) UNKNOWN PROPERTY

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
		UJunoRuntimeSettings* PreOverrideRuntimeSettings; // 0xA0(0x8)

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
		unsigned char UnknownData00_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY

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
		TMap<FGameplayTag, FScalableFloat> TemperatureToFloatMap; // 0xA0(0x50)
		TMap<FGameplayTag, FScalableFloat> TemperatureThresholdsMap; // 0xF0(0x50)
		FFloatRange TemperatureRange; // 0x140(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x150(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateTemperatureComponent");
			return ret;
		}

		float TemperatureToFloat(FGameplayTag& Temperature); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC6EB4(relative to base address)
		TArray GetTemperatureRanges(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC64C0(relative to base address)
		float GetMinimumTemperature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC6460(relative to base address)
		float GetMaximumTemperature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC6440(relative to base address)
	};


	// Class JunoGameNative.JunoGameStateWeatherComponent
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJunoGameStateWeatherComponent : public UGameStateComponent	
	{
	public:
		UDataTable* SeasonTable; // 0xA0(0x8)
		UClass* LocalizedWeatherStateSubclass; // 0xA8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		UJunoPlayspacePersistenceFeatureHelper* WeatherPersistenceFeatureHelper; // 0xB8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateWeatherComponent");
			return ret;
		}

		void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase, FJunoWeatherLocation OptionalLocation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CC6FD0(relative to base address)
		void TransitionWeatherNow(FName OptionalLocation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CC6F50(relative to base address)
		void SetAutoTransitioning(bool bAutoTransitionWeather); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CC6D54(relative to base address)
		void OnWeatherPhaseChanged(UJunoWeatherStateComponent* WeatherState); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnNextWeatherQueueChanged(UJunoWeatherStateComponent* WeatherState); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		bool IsAutoTransitioning(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF33B54(relative to base address)
		void HandleWeatherStatesSetup(TArray<UJunoWeatherStateComponent*>& WeatherStates); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetWeatherStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC64FC(relative to base address)
		void ForceWeatherState(FName NewWeatherType, FName OptionalLocation); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF750CC6218(relative to base address)
		UJunoWeatherStateComponent FindWeatherState(FJunoWeatherLocation& Location); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CC617C(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FScalableFloat TimeToAssemble; // 0xB8(0x28)
		FScalableFloat SingleGeometryTimeToAssemble; // 0xE0(0x28)
		FScalableFloat DisassembledZDistance; // 0x108(0x28)
		FScalableFloat DisassembledZDistanceRandomRatio; // 0x130(0x28)
		FScalableFloat DisassembledRotationAmount; // 0x158(0x28)
		bool bFreeMemoryWhenNotAnimating; // 0x180(0x1)
		bool bDestroyComponentOnAssemblyComplete; // 0x181(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x182(0x6) UNKNOWN PROPERTY
		TMap<UGeometryCollectionComponent*, FJunoGeometryCollectionAssemblerGCInfo> GeometryCollectionInfos; // 0x188(0x50)
		FMulticastInlineDelegate OnAssemblyVisualsAnimationStart; // 0x1D8(0x10)
		FMulticastInlineDelegate OnAssemblyVisualsAnimationUpdated; // 0x1E8(0x10)
		FMulticastInlineDelegate OnAssemblyVisualsAnimationEnd; // 0x1F8(0x10)
		FJunoGeometryCollectionAssemblerTargetData TargetData; // 0x208(0x8)
		unsigned char UnknownData02_7[0x30]; // 0x210(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent");
			return ret;
		}

		void SetFreeMemoryWhenNotAnimating(bool bValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CC6DD4(relative to base address)
		void OnRep_TargetData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CC6AF0(relative to base address)
		bool IsUpdating(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C45C1B8(relative to base address)
		bool IsDisassembling(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC66A4(relative to base address)
		bool IsDisassembled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC6684(relative to base address)
		bool IsAssembling(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC6660(relative to base address)
		bool IsAssembled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC663C(relative to base address)
		bool IsActorAssembled(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CC6568(relative to base address)
		float GetAssemblyRatio(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E9D5864(relative to base address)
	};


	// Class JunoGameNative.JunoGuidedBuildCampCommunicationComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UJunoGuidedBuildCampCommunicationComponent : public UGameFrameworkComponent	
	{
	public:
		FGameplayTagContainer PersistentTagsToApplyOnStart; // 0xA0(0x20)
		FGameplayTagContainer PeristentTagsToApplyOnCompletion; // 0xC0(0x20)
		unsigned char UnknownData00_7[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildCampCommunicationComponent");
			return ret;
		}

		void HandleOnSetComplete(FGuidedBuildingUpdate& UpdateData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CC9AB8(relative to base address)
		void HandleOnJunoAwesomeComponentReady(FJunoCampAwesomeStatsData& AwesomeData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CC9A24(relative to base address)
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

		void SetParentGuidedBuilding(AJunoGuidedBuildingActor* OurGuidedBuild); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TArray<FJunoGuidedBuildingDisplayActorDataEntry> DataArray; // 0x298(0x10)
		FName GuidedBuildingRecipe; // 0x2A8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY

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

		void OnSlottedIntoGuidedBuild(AJunoGuidedBuildingActor* GBA, FJunoGuidedBuildingData& SlotData); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF750CC9BF0(relative to base address)
	};


	// Class JunoGameNative.JunoInputMappingComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoInputMappingComponent : public UGameFrameworkComponent	
	{
	public:
		UJunoInputMappingComponentData* Data; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputMappingComponent");
			return ret;
		}

		void PushContext(UJunoInputControllerComponent* JunoInputController); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CCA030(relative to base address)
		void PopContext(UJunoInputControllerComponent* JunoInputController); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CC9FA0(relative to base address)
		FGameplayTag GetEventTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC995C(relative to base address)
	};


	// Class JunoGameNative.JunoInputMappingComponentData
	// Inherited from UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UJunoInputMappingComponentData : public UDataAsset	
	{
	public:
		TArray<FJunoInputMapping> DesiredInputMappings; // 0x30(0x10)
		TArray<FJunoInputAlternateDisplayText> DisplayTexts; // 0x40(0x10)
		FGameplayTag EventTag; // 0x50(0x4)
		bool bPopDefaultContext; // 0x54(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x55(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputMappingComponentData");
			return ret;
		}

		void SetEventTag(FGameplayTag& InTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CCA140(relative to base address)
		FGameplayTag GetEventTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748BA0724(relative to base address)
	};


	// Class JunoGameNative.JunoInputQueueComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UJunoInputQueueComponent : public UPawnComponent	
	{
	public:
		unsigned char UnknownData00_1[0x68]; // 0xA0(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputQueueComponent");
			return ret;
		}

		void StopQueueingInput(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CCA64C(relative to base address)
		void StartQueueingInput(int32_t MontageInstanecID, UGameplayAbility* ability, bool bQueueMantisInputs, FGameplayTagContainer EventTags); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CCA444(relative to base address)
		void SetInterruptible(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CCA1C8(relative to base address)
		void ResetBlockingTags(int32_t MontageInstanceID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CCA0C0(relative to base address)
		void OverrideBlockingTags(int32_t MontageInstanceID, UGameplayAbility* ability, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CC9CE0(relative to base address)
		void FireQueuedInputs(int32_t MontageInstanceID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CC96E4(relative to base address)
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
		UDataTable* RecipeTable; // 0x30(0x8)
		FText BundleName; // 0x38(0x10)
		FText BundleDescription; // 0x48(0x10)
		TWeakObjectPtr<UObject*> BundleImage; // 0x58(0x20)
		FGameplayTag BundleIdentifier; // 0x78(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
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
		TWeakObjectPtr<UCraftingObjectComponent*> CachedCraftingObjectComponent; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgeCraftingComponent");
			return ret;
		}

		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CC9B48(relative to base address)
		void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CC9988(relative to base address)
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

		FGuid GetCaveId(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC992C(relative to base address)
		FJunoBiomeInfoQueryResult GetBiome(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC9800(relative to base address)
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

		bool GetBiomeInfo(FJunoBiomeInfoQueryResult& OutHabitat); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC983C(relative to base address)
		bool GetBiome(EJunoBiome& OutBiome); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC9764(relative to base address)
	};


	// Class JunoGameNative.JunoLocalPlayersProximityComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UJunoLocalPlayersProximityComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate OnLocalPlayerInRangeEvent; // 0xA0(0x10)
		FJunoLocalPlayerProximityDistanceSettings DistanceCheckSettings; // 0xB0(0x8)
		unsigned char UnknownData00_7[0x50]; // 0xB8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLocalPlayersProximityComponent");
			return ret;
		}

		void OnLocalPlayerInRangeChanged__DelegateSignature(APlayerController* LocalController, bool bInRange); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsLocalPlayerInRange(APlayerController* InLocalPlayerController); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD4D1C(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		UTexture2D* FogMask; // 0x90(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		float ExploredRadius; // 0x100(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> OceanTileTexture; // 0x108(0x20)
		FMapExplorationData MapExplorationData; // 0x128(0x170)
		float TileSize; // 0x298(0x4)
		bool bIsExplorationDataInitialized; // 0x29C(0x1)
		unsigned char UnknownData02_6[0xB]; // 0x29D(0xB) UNKNOWN PROPERTY
		TArray<UDisplayableTile*> DisplayableTiles; // 0x2A8(0x10)
		UTexture2D* ClearedFogMask; // 0x2B8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x2C0(0x10) UNKNOWN PROPERTY

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

		void ServerPlaceMarker(FVector2D InLocation); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF750CD4FB4(relative to base address)
		void ClientPlaceMarker(FVector InLocation, bool bNeedsRefinement); // Flags: Net|NetReliableNative|Event|Protected|HasDefaults|NetClient, Memory Exec: 0x7FF750CD4974(relative to base address)
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
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		UDataTable* MerchantSalesDataTable; // 0xF8(0x8)

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
		TArray<FJunoSynchronizedWeatherState> SynchronizedWeatherStates; // 0x150(0x10)
		unsigned char UnknownData00_7[0x48]; // 0x160(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMeshNetworkWeatherComponent");
			return ret;
		}

		void OnRep_OnSynchronizedWeatherStates(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CD4FA0(relative to base address)
	};


	// Class JunoGameNative.JunoMoodReactionConfigMappings
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoMoodReactionConfigMappings : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, FDataTableRowHandle> MoodReactionConfigMap; // 0x30(0x50)

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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMultiCraftingFinished; // 0xA8(0x10)
		FMulticastInlineDelegate OnMultiCraftingBlocked; // 0xB8(0x10)
		unsigned char UnknownData01_6[0x18]; // 0xC8(0x18) UNKNOWN PROPERTY
		float TimeToStartProcess; // 0xE0(0x4)
		TWeakObjectPtr<UCraftingObjectComponent*> CachedCraftingObjectComponent; // 0xE4(0x8)
		TWeakObjectPtr<UJunoInventoryComponent*> CachedInventoryComponent; // 0xEC(0x8)
		TWeakObjectPtr<UJunoPassiveCraftingAnalyticsComponent*> AnalyticsComponent; // 0xF4(0x8)
		unsigned char UnknownData02_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		TArray<FCraftingProcess> CraftingProcesses; // 0x100(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x110(0x8) UNKNOWN PROPERTY
		int64_t KeyGenerator; // 0x118(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x120(0x10) UNKNOWN PROPERTY
		bool bIsCraftingBlocked; // 0x130(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x131(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMultiCraftingComponent");
			return ret;
		}

		void OnRep_CraftingProcesses(TArray<FCraftingProcess>& PrevCraftingProcesses); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CD4F08(relative to base address)
		void OnRep_CraftingBlocked(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CD4EF4(relative to base address)
		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750CD4E30(relative to base address)
		bool IsCraftingBlocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F7116B8(relative to base address)
		void HandleInventoryDataRestored(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CD4CDC(relative to base address)
		void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750CD4BA4(relative to base address)
		TArray GetCraftingProcesses(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD4B88(relative to base address)
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
		UJunoMoodReactionConfigMappings* MoodReactionConfigMappings; // 0xF8(0x8)

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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FJunoPassiveCraftingItemAndCount AccumulatedItem; // 0xA8(0x10)
		TArray<FJunoPassiveCraftingContributorAnalytics> AccumulatedContributors; // 0xB8(0x10)
		TArray<FJunoPassiveCraftingItemAndCount> AccumulatedIngredients; // 0xC8(0x10)
		FName Recipe; // 0xD8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPassiveCraftingDone; // 0xA8(0x10)
		FMulticastInlineDelegate OnAutoCraftingFormulaRowChanged; // 0xB8(0x10)
		bool bAutoSelectRecipeFromIngredients; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UJunoInventoryComponent*> CachedInventoryComponent; // 0xCC(0x8)
		TWeakObjectPtr<UCraftingObjectComponent*> CachedCraftingObjectComponent; // 0xD4(0x8)
		bool bIsAutoCrafting; // 0xDC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		FName AutoCraftingFormulaRow; // 0xE0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		FDateTime AutoCraftingStartDateTime; // 0xE8(0x8)
		unsigned char UnknownData04_7[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPassiveCraftingComponent");
			return ret;
		}

		void SetAutoCraftRecipe(FName FormulaRow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD50D0(relative to base address)
		void OnRep_AutoCraftingFormulaRow(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CD4EB4(relative to base address)
		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CD4E30(relative to base address)
		void MulticastFireCraftingDone(EPassiveCraftingDoneReason Reason); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF750CD4DAC(relative to base address)
		bool IsAutoCrafting(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD4D04(relative to base address)
		void HandleInventoryDataRestored(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CD4CF0(relative to base address)
		void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CD4C40(relative to base address)
		FName GetAutoCraftingFormulaRow(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEEC0(relative to base address)
		void EnableAutoCrafting(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD4B74(relative to base address)
		void DisableAutoCrafting(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD4B60(relative to base address)
		int32_t CalculateNumRemainingAutoCraft(FName OptionalFormulaRow); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD48E8(relative to base address)
	};


	// Class JunoGameNative.JunoPassiveResourcesGathererPawnComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x130 - 0xA0)
	class UJunoPassiveResourcesGathererPawnComponent : public UPawnComponent	
	{
	public:
		FScalableFloat JobEstimationTimeMultiplier; // 0xA0(0x28)
		UDataTable* GathererTable; // 0xC8(0x8)
		FMulticastInlineDelegate OnPassiveResourceGeneratedOnPawnDelegate; // 0xD0(0x10)
		unsigned char UnknownData00_7[0x50]; // 0xE0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent");
			return ret;
		}

		float GetTotalJobCompletionTimeInJunoHours(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD83B8(relative to base address)
		float GetRemainingJobCompletionTimeInJunoHours(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8300(relative to base address)
		FPrimaryAssetId GetLastUsedGatheringActorItemId(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8294(relative to base address)
		FText GetLastUsedGatheringActorDisplayText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8258(relative to base address)
		float GetLastGeneratedPercentage(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD81DC(relative to base address)
		float GetEstimatedTotalJobCompletionTimeInJunoDays(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8198(relative to base address)
	};


	// Class JunoGameNative.JunoPassiveResourcesGatheringWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UJunoPassiveResourcesGatheringWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY
		TArray<FPassiveResourcesGatheringRowRuntime> ActiveGatheringRows; // 0xC8(0x10)
		FMulticastInlineDelegate OnPassiveResourceGeneratedDelegate; // 0xD8(0x10)
		unsigned char UnknownData01_6[0x28]; // 0xE8(0x28) UNKNOWN PROPERTY
		FGameplayTagQuery MatchingRolesQuery; // 0x110(0x48)
		TArray<FDataTableRowHandle> GatheringRows; // 0x158(0x10)
		FDataTableRowHandle SimulationConfigurationRow; // 0x168(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPassiveResourcesGatheringComponent");
			return ret;
		}

		void RemoveGatheringRowOverride(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD89AC(relative to base address)
		bool OverrideGatheringRow(FDataTableRowHandle& GatheringRow); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CD8910(relative to base address)
	};


	// Class JunoGameNative.JunoPawnComponent_MovementInputOverrides
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoPawnComponent_MovementInputOverrides : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_7[0x5]; // 0x73(0x5) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0xA8]; // 0x40(0xA8) UNKNOWN PROPERTY

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
	// Size: 0x248 (0x2F0 - 0xA8)
	class UJunoPlayerBuildingComponent : public UFortControllerComponent	
	{
	public:
		FJunoSelectedSlot ReplicatedSelectedSlot; // 0xA8(0x30)
		unsigned char UnknownData00_6[0x34]; // 0xD8(0x34) UNKNOWN PROPERTY
		TWeakObjectPtr<AJunoGuidedBuildingActor*> LastGuidedBuildingActor; // 0x10C(0x8)
		TWeakObjectPtr<AJunoGuidedBuildingActor*> ReplicatedLastGuidedBuildingActor; // 0x114(0x8)
		float ReplicateLastGuidedActorTime; // 0x11C(0x4)
		float ReplicateBuildingMetricSpatialPrecision; // 0x120(0x4)
		unsigned char UnknownData01_6[0x14]; // 0x124(0x14) UNKNOWN PROPERTY
		UClass* DefaultBuildingCameraMode; // 0x138(0x8)
		FJunoBuildingSessionInfo BuildingSessionInfo; // 0x140(0x28)
		UJunoInputMappingComponentData* InputMappingData; // 0x168(0x8)
		UInputAction* ExitBuildMode; // 0x170(0x8)
		TArray<FDataTableRowHandle> DefaultRecipes; // 0x178(0x10)
		TArray<FJunoBuildingMetricsClientPermissions> ClientSpatialMetricsBuildingPermissions; // 0x188(0x10)
		FIntVector LastKnownPawnSpatialCell; // 0x198(0xC)
		unsigned char UnknownData02_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		TSet<FJunoTrackedActorKey> DirtyCellLocations; // 0x1A8(0x50)
		unsigned char UnknownData03_6[0x10]; // 0x1F8(0x10) UNKNOWN PROPERTY
		int32_t MaxRecentRecipes; // 0x208(0x4)
		FJunoMCPItemPlacementStatus MCPItemPlacementStatus; // 0x20C(0xC)
		TWeakObjectPtr<UObject*> UINotificationIcon; // 0x218(0x20)
		TArray<FJunoMCPItemPlacementStatusAlertData> AlertData; // 0x238(0x10)
		bool bHasSeenItemShopCallout; // 0x248(0x1)
		unsigned char UnknownData04_6[0x8F]; // 0x249(0x8F) UNKNOWN PROPERTY
		UJunoAsyncAction_WaitForEventRouter* WaitForEventRouterAction; // 0x2D8(0x8)
		unsigned char UnknownData05_7[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerBuildingComponent");
			return ret;
		}

		void TryAbandonGuidedBuild(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD8BB0(relative to base address)
		void SetLastGuidedBuildingActor(AJunoGuidedBuildingActor* InLastGuidedBuildingActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD8B30(relative to base address)
		void ServerSetLastGuidedBuildingActor(AJunoGuidedBuildingActor* InLastActor); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74FCB13CC(relative to base address)
		void ServerSetHasSeenItemShopCallout(bool bHasSeen); // Flags: Net|Native|Event|Protected|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E8019A4(relative to base address)
		void ServerSelectSlot(FJunoSelectedSlot NewSlot); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF750CD89C8(relative to base address)
		void ServerEndGuidedBuild(AJunoGuidedBuildingActor* GuidedBuildingActor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74EA6764C(relative to base address)
		void ServerAttemptAutoComplete(AJunoGuidedBuildingActor* GuidedBuildingActor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74E313DEC(relative to base address)
		void OnRep_ReplicateLastGuidedActorTime(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CD88D4(relative to base address)
		void OnRep_ReplicatedSelectedSlot(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CD88FC(relative to base address)
		void OnRep_ReplicatedLastGuidedBuildingActor(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CD88E8(relative to base address)
		void OnRep_MCPItemPlacementStatus(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CD8870(relative to base address)
		void OnGuidedBuildingStageChanged(FGuidedBuildingUpdate& StageUpdate); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750CD87E0(relative to base address)
		void OnGuidedBuildDone(FGuidedBuildingUpdate& StageUpdate); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750CD8750(relative to base address)
		bool IsRecipePinned(FName Recipe); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD86C4(relative to base address)
		bool IsBuildModeEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749859FE0(relative to base address)
		bool HasSelectedRemainingParts(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD86A0(relative to base address)
		bool HasSelectedMissingParts(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD867C(relative to base address)
		void HandleBuildingMetricsThresholdChange(FInt32Vector& Location); // Flags: Final|Native|Protected|HasOutParms|HasDefaults, Memory Exec: 0x7FF750CD85F4(relative to base address)
		void HandleBuildingMetricsActorCountChange(FInt32Vector& Location, int32_t PreviousActorCount, int32_t NewActorCount); // Flags: Final|Native|Protected|HasOutParms|HasDefaults, Memory Exec: 0x7FF750CD83E0(relative to base address)
		int32_t GetTotalAllowedMCPItemWorlds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD839C(relative to base address)
		int32_t GetRemainingWorldsForMCPItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8378(relative to base address)
		FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsForSelectedRecipe(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8344(relative to base address)
		FText GetMCPItemPlacedMessageTitle(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750CD82C0(relative to base address)
		FText GetMCPItemPlacedMessageDescription(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FFEEDB8(relative to base address)
		FName GetLastSelectedRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFCA8(relative to base address)
		FJunoLastLoadedRecipeData GetLastLoadedRecipeData(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8240(relative to base address)
		FName GetLastLoadedRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8228(relative to base address)
		AJunoGuidedBuildingActor GetLastGuidedBuildingActor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8204(relative to base address)
		FName GetLastFocusedRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C39EDA8(relative to base address)
		bool GetIsInBuildMode(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD81C0(relative to base address)
		FName GetForcedRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEEC0(relative to base address)
		FName GetCurrentRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8170(relative to base address)
		EJunoBuildModeType GetBuildModeType(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E56A000(relative to base address)
		void EnterGuidedBuilding(AJunoGuidedBuildingActor* InLastGuidedBuildingActor); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD80F0(relative to base address)
		void EnterBuildingModeAndSelectIndex(int32_t Index, EJunoBuildModeType InType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD8000(relative to base address)
		bool CanPlaceRecipe(FName RecipeToPlace); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD7F78(relative to base address)
		bool CanPlaceMCPItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD7F54(relative to base address)
		bool CanAutoCompleteBuilding(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD7F30(relative to base address)
		void AttemptAutoComplete(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CD7ED4(relative to base address)
	};


	// Class JunoGameNative.JunoPlayerCampPawnComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UJunoPlayerCampPawnComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x78]; // 0xA0(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerCampPawnComponent");
			return ret;
		}

		void HandleAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CDAC64(relative to base address)
	};


	// Class JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x288 (0x328 - 0xA0)
	class UJunoPlayerControllerComponent_SessionAnalytics : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		double JunoPlaySessionStartedTime; // 0xA8(0x8)
		FGuid JunoPlaySessionID; // 0xB0(0x10)
		TArray<FName> RecipesUnlockedDuringSession; // 0xC0(0x10)
		float AccumulatedDistanceTraveled; // 0xD0(0x4)
		float LastIdleCheckTime; // 0xD4(0x4)
		float AccumulatedIdleTime; // 0xD8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FVector LastPlayerPawnLocation; // 0xE0(0x18)
		unsigned char UnknownData02_6[0x50]; // 0xF8(0x50) UNKNOWN PROPERTY
		FString SavedDisconnectReason; // 0x148(0x10)
		FGameplayEventListenerHandle GracefulShutdownInitiatedEventHandle; // 0x158(0x1C)
		bool bGracefulShutdownStarted; // 0x174(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x175(0x3) UNKNOWN PROPERTY
		int32_t GracefulShutdownExitCode; // 0x178(0x4)
		int32_t GracefulShutdownMaxTime; // 0x17C(0x4)
		FString SavedPlayerPermadeathStatus; // 0x180(0x10)
		unsigned char UnknownData04_6[0x50]; // 0x190(0x50) UNKNOWN PROPERTY
		FGameplayEventListenerHandle PawnEliminatedEventHandle; // 0x1E0(0x1C)
		unsigned char UnknownData05_7[0x12C]; // 0x1FC(0x12C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics");
			return ret;
		}

		void TotemConsumedDuringCurrentPlaySession(UFortWorldItem* TotemConsumedDuringSession); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CDB120(relative to base address)
		void SetConsumedTotemOfReturn(UFortWorldItem* TotemOfReturn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CDB06C(relative to base address)
		void ResetHeartbeatStats(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDB00C(relative to base address)
		void OnRep_JunoPlaySessionID(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDAFF8(relative to base address)
		void OnPlayerStatsUpdateTimer(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDAFAC(relative to base address)
		void OnPlayerPermadeath(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDAF98(relative to base address)
		void OnPlayerDisconnecting(AFortPlayerController* FortPlayerController, FString DevReason, bool bGracefulDisconnect); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDAE7C(relative to base address)
		void OnHeartbeatTimer(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDADD0(relative to base address)
		void HandleInventoryDataRestored(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDAD90(relative to base address)
		void HandleGracefulShutdownInitiated(FFortGracefulShutdownInitiatedEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CDACF4(relative to base address)
	};


	// Class JunoGameNative.JunoPlayerLifetimeStatsComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UJunoPlayerLifetimeStatsComponent : public UFortControllerComponent	
	{
	public:
		int32_t AccumulatedTimePlayedSeconds; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x14]; // 0xAC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerLifetimeStatsComponent");
			return ret;
		}

		void OnRep_AccumulatedTimePlayed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDAFC0(relative to base address)
		FTimespan GetPlayerTimePlayedInGameTimespan(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDAC04(relative to base address)
		float CalculateCurrentServerTimePlayedSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDABDC(relative to base address)
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
		unsigned char UnknownData00_7[0x18]; // 0x240(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x18]; // 0x118(0x18) UNKNOWN PROPERTY
		FVector PlayspaceSearchBoxExtent; // 0x130(0x18)
		unsigned char UnknownData01_6[0x10]; // 0x148(0x10) UNKNOWN PROPERTY
		bool bHasPlayerRespawnedFromDeath; // 0x158(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x159(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning");
			return ret;
		}

		void StartRespawn(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CDB10C(relative to base address)
		void ServerQueuePlayerForRespawn(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF750CDB020(relative to base address)
		void OnPawnPosessed(AFortPawn* NewPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDADE4(relative to base address)
		bool IsAllowedToShowRespawnUI(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDADB8(relative to base address)
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
		UClass* PersistenceFeatureDataClass; // 0x28(0x8)
		TScriptInterface<Class> PersistenceFeatureData; // 0x30(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePickupComponent");
			return ret;
		}
	};


	// Class JunoGameNative.JunoPlayspacePickupFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x108 (0x160 - 0x58)
	class UJunoPlayspacePickupFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		FJunoPlayspacePickupSaveData JunoPlayspacePickupSaveData; // 0x58(0x50)
		TMap<TWeakObjectPtr, FPickupTypePersistenceInfo> PendingLoadPickups; // 0xA8(0x50)
		AFortPickup* SpawnedPickupBeingProcessed; // 0xF8(0x8)
		TMap<int32_t, FPickupPendingSpawnInfo> PendingSpawnPickups; // 0x100(0x50)
		unsigned char UnknownData00_7[0x10]; // 0x150(0x10) UNKNOWN PROPERTY

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
		UClass* Context; // 0x1F8(0x8)

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
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray<FName> QuickBuildRecipes; // 0x30(0x10)

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
		USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x290(0x8)
		UMaterialParameterCollection* MaterialParameterCollection; // 0x298(0x8)
		FName RainOccluderSceneCaptureLocationName; // 0x2A0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
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
		UJunoRainCaptureSubsystemData* SubsystemData; // 0x58(0x8)
		unsigned char UnknownData00_6[0x20]; // 0x60(0x20) UNKNOWN PROPERTY
		AJunoRainCapture* RainCaptureInstance; // 0x80(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

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
		UMaterialParameterCollection* MaterialParameterCollection; // 0x30(0x8)
		UTextureRenderTarget2D* TextureTarget; // 0x38(0x8)
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
		unsigned char UnknownData00_3[0x4]; // 0xF8(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UJunoPersistentPlayspaceSaveHandler*> JunoPersistentPlayspaceSaveHandler; // 0xFC(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x104(0x4) UNKNOWN PROPERTY

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

		void HandleWorldChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDADA4(relative to base address)
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
		UCurveFloat* LootTierPercentageToSlotPickingModifier; // 0x320(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x328(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoSyncTimeOfDayComponent");
			return ret;
		}

		void SetTimeOfDaySyncEnabled(bool bNewTimeOfDaySyncEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750CDD954(relative to base address)
		bool GetTimeOfDaySyncEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E228C6C(relative to base address)
	};


	// Class JunoGameNative.JunoSyncWeatherComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UJunoSyncWeatherComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY

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

		void CreateTargetTeleporter(APawn* InteractingPawn, FDelegateProperty& OnFinished); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF750CDCFF8(relative to base address)
	};


	// Class JunoGameNative.JunoTeleporter
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x28 (0xC00 - 0xBD8)
	class AJunoTeleporter : public ABuildingProp	
	{
	public:
		TWeakObjectPtr<AJunoTeleporter*> TargetTeleporter; // 0xBD8(0x8)
		unsigned char UnknownData00_7[0x20]; // 0xBE0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTeleporter");
			return ret;
		}

		void TeleportFinished(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CDD9D4(relative to base address)
		void SetTargetTeleporter(AJunoTeleporter* TargetTeleportActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CDD854(relative to base address)
		bool IsTeleporterEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749859FE0(relative to base address)
		AJunoTeleporter GetTargetTeleporter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDD1F4(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray<FTemperatureRange> TemperatureRanges; // 0xD0(0x10)
		FMulticastInlineDelegate OnTemperatureChanged; // 0xE0(0x10)
		FMulticastInlineDelegate OnTemperatureRangesChanged; // 0xF0(0x10)
		bool bAddTemperatureTagToActor; // 0x100(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x101(0x3) UNKNOWN PROPERTY
		FGameplayTag ForcedTemperature; // 0x104(0x4)
		unsigned char UnknownData02_7[0x28]; // 0x108(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTemperatureAttributeSet");
			return ret;
		}

		void OnRep_TemperatureRanges(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDD840(relative to base address)
		void OnRep_Temperature(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CDD740(relative to base address)
		void OnRep_HeatResistance(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CDD640(relative to base address)
		void OnRep_CurrentTemperature(FGameplayTag OldTemperature); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDD530(relative to base address)
		void OnRep_ColdResistance(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CDD430(relative to base address)
		void HandleWeatherTemperatureChanged(FJunoEvent_TemperatureChanged Payload); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDD300(relative to base address)
		void ForceTemperature(FGameplayTag TemperatureToForce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CDD0E4(relative to base address)
	};


	// Class JunoGameNative.JunoTemperatureComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoTemperatureComponent : public UGameFrameworkComponent	
	{
	public:
		TWeakObjectPtr<UJunoTemperatureAttributeSet*> TemperatureAttributeSet; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoTemperatureComponent");
			return ret;
		}

		void HandleOwnerASCInvalidated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDD2D8(relative to base address)
		void HandleOwnerASCInitialized(UFortAbilitySystemComponent* FortAbilitySystemComponent, AFortPlayerPawn* AffectedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDD21C(relative to base address)
		UJunoTemperatureAttributeSet GetTemperatureAttributeSet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C75ECB0(relative to base address)
	};


	// Class JunoGameNative.JunoTemplatesReportHandler
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoTemplatesReportHandler : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoToyAttachmentFixupComponent");
			return ret;
		}

		void HandleToyAttachementFixupTimer(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CDD2EC(relative to base address)
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

		bool GetHealthBarRelativeLocation(FVector& OutLocation); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

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
	// Size: 0x30 (0x4B8 - 0x488)
	class UJunoWeaponCreatureItemDefinition : public UFortWeaponRangedItemDefinition	
	{
	public:
		TArray<UClass*> Debug_CreaturesToSpawn; // 0x488(0x10)
		TArray<FDataTableRowHandle> SpawnEvents; // 0x498(0x10)
		TArray<FDataRegistryId> SpawnEventRegistryIds; // 0x4A8(0x10)

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

		TArray GetSpawnEvents(UGameplayAbility* GameplayAbility); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CDF764(relative to base address)
		TArray GetSpawnEventRegistryIds(UGameplayAbility* GameplayAbility); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CDF66C(relative to base address)
		TArray GetCreaturesToSpawn(UGameplayAbility* GameplayAbility); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CDF300(relative to base address)
	};


	// Class JunoGameNative.JunoWeatherFXPersistence
	// Inherited from AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class AJunoWeatherFXPersistence : public AActor	
	{
	public:
		UMaterialParameterCollection* MaterialParameterCollection; // 0x290(0x8)
		UMaterialParameterCollectionInstance* CachedMPCInstance; // 0x298(0x8)
		FLinearColor WindPosition; // 0x2A0(0x10)
		FLinearColor WindValueInCave; // 0x2B0(0x10)
		float MaxWindSpeed; // 0x2C0(0x4)
		FLinearColor GustMaxWindSpeedAddend; // 0x2C4(0x10)
		float WindScalar; // 0x2D4(0x4)
		FName WindParamName; // 0x2D8(0x4)
		FName WindPositionParamName; // 0x2DC(0x4)
		FName WindPreviousPositionParamName; // 0x2E0(0x4)
		bool bInCave; // 0x2E4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherFXPersistence");
			return ret;
		}

		void UpdateWindGust(float IntensityScalar, FVector& GustIntensity, FLinearColor& CurrentWind); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CE013C(relative to base address)
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

		FJunoWeatherLocation StringToLocation(FName LocationName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CDFFB0(relative to base address)
		FJunoWeatherPhase RollWeatherFromSeason(FJunoWeatherSeasonRow& Season, FJunoWeatherLocation& Location, FGameplayTag& OptionalWeatherType); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CDFD74(relative to base address)
		FJunoWeatherPhase RollWeatherFromForecast(FJunoWeatherPhaseForecast& Forecast); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CDFCB4(relative to base address)
		bool NotEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CDF9C0(relative to base address)
		UJunoGameStateWeatherComponent FindGameStateWeatherComponent(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CDF138(relative to base address)
		bool EqualEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CDF044(relative to base address)
		FString DescribePhase(FJunoWeatherPhase& WeatherPhase); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CDEF9C(relative to base address)
		FString DescribeLocation(FJunoWeatherLocation& WeatherLocation); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CDEEF8(relative to base address)
		FJunoWeatherLocation CalculateLocation(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CDEE64(relative to base address)
	};


	// Class JunoGameNative.JunoWeatherLocationComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoWeatherLocationComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate OnLocationChanged; // 0xA0(0x10)
		FJunoWeatherLocation Location; // 0xB0(0x2)
		unsigned char UnknownData00_7[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherLocationComponent");
			return ret;
		}

		void OnRep_Location(FJunoWeatherLocation& OldLocation); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750CDFAC8(relative to base address)
		void HandleLocationChanged(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750CDF888(relative to base address)
		FJunoWeatherLocation GetLocation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF5B8(relative to base address)
		FJunoWeatherLocation BP_CalculateLocation(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF750CDEE34(relative to base address)
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
		unsigned char UnknownData00_7[0x48]; // 0xC0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherReactionComponent");
			return ret;
		}

		void ReceiveOnWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged Payload); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveOnTemperatureChanged(FJunoEvent_TemperatureChanged Payload); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWeatherLocationChanged(FJunoWeatherLocationChangedEvent Payload); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CDF89C(relative to base address)
		FJunoWeatherPhase GetCurrentWeatherPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF4E8(relative to base address)
		float GetCurrentTemperatureFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF4C0(relative to base address)
		FGameplayTag GetCurrentTemperature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF450(relative to base address)
		FJunoWeatherLocation GetClosestStatefulLocationFor(FJunoWeatherLocation& WeatherLocation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF26C(relative to base address)
		UJunoWeatherStateComponent FindWeatherState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF1B8(relative to base address)
	};


	// Class JunoGameNative.JunoWeatherStateComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE8 (0x188 - 0xA0)
	class UJunoWeatherStateComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		FJunoWeatherLocation Location; // 0xD0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY
		UDataTable* SeasonTable; // 0xD8(0x8)
		unsigned char UnknownData02_6[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY
		FJunoWeatherPhase CurrentWeatherPhase; // 0xE8(0x38)
		FJunoWeatherPhase NextWeatherPhase; // 0x120(0x38)
		TArray<FJunoWeatherPhase> NextWeatherQueue; // 0x158(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x168(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherStateComponent");
			return ret;
		}

		void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE0044(relative to base address)
		void TransitionWeatherNow(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CE0030(relative to base address)
		void SetAutoTransitioning(bool bAutoTransitionWeather); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CDFF30(relative to base address)
		FJunoWeatherPhase RollWeatherPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDFEE8(relative to base address)
		void RerollNextWeatherWith(FGameplayTag& WeatherTypeName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CDFC28(relative to base address)
		void ReceiveWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTemperatureChanged(FJunoEvent_TemperatureChanged& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void QueueNextWeather(FJunoWeatherPhase& QueuedWeather); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CDFB98(relative to base address)
		void OnRep_CurrentWeatherPhase(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CDFAB4(relative to base address)
		bool IsAutoTransitioning(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501B8D0C(relative to base address)
		float GetTransitionOutAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3C1308(relative to base address)
		float GetTransitionInAlpha(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294A00(relative to base address)
		TArray GetNextWeatherQueue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF630(relative to base address)
		FJunoWeatherPhase GetNextWeatherPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF5F0(relative to base address)
		FJunoWeatherLocation GetLocation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF5D4(relative to base address)
		FJunoWeatherPhase GetCurrentWeatherPhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF578(relative to base address)
		float GetCurrentTemperatureFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDFEED8(relative to base address)
		FGameplayTag GetCurrentTemperature(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CDF494(relative to base address)
		FGameplayTag GetCurrentSeason(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750CDF420(relative to base address)
		void ForceNextWeatherTo(FJunoWeatherPhase& NewNextWeatherPhase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CDF1DC(relative to base address)
		void ClearNextWeatherQueue(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CDEEE4(relative to base address)
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
		unsigned char UnknownData00_7[0x1C]; // 0x34(0x1C) UNKNOWN PROPERTY

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


	// Class JunoGameNative.JunoWorldPersistenceSaveHandler
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UJunoWorldPersistenceSaveHandler : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceSaveHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceSaveInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWorldPersistenceSaveInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceSaveInterface");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1D8 (0x208 - 0x30)
	class UJunoWorldPersistenceSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x30(0x50) UNKNOWN PROPERTY
		UJunoWorldPersistenceHandler* WorldPersistenceHandler; // 0x80(0x8)
		UJunoWorldPersistencePlayerManager* WorldPersistencePlayerManager; // 0x88(0x8)
		UJunoWorldPersistenceSubsystemData* SubsystemData; // 0x90(0x8)
		UJunoWorldPersistenceCheckpointManager* CheckpointManager; // 0x98(0x8)
		TMap<FGuid, TWeakObjectPtr> PersistentPlayspaceMap; // 0xA0(0x50)
		TArray<TWeakObjectPtr> PersistentPlayspaceInsertionOrderArray; // 0xF0(0x10)
		EJunoWorldSaveDataState WorldSaveDataState; // 0x100(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FSoftObjectPath SubsystemDataAssetPath; // 0x108(0x18)
		unsigned char UnknownData02_6[0x18]; // 0x120(0x18) UNKNOWN PROPERTY
		TMap<FString, EJunoPersistenceUnrecoverableErrorResponse> ErrorCodeResponses; // 0x138(0x50)
		unsigned char UnknownData03_6[0x78]; // 0x188(0x78) UNKNOWN PROPERTY
		UJunoPersistentPlayspaceSaveHandlerContainer* JunoPersistentPlayspaceSaveHandlerContainer; // 0x200(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceSubsystem");
			return ret;
		}

		bool WasActorSpawnedFromSavedGame(AActor* Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE278C(relative to base address)
		void RequestActorSave(AActor* Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE2454(relative to base address)
		FGuid GenerateDeterministicMapActorGUID(AActor* Actor); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CE14CC(relative to base address)
	};


	// Class JunoGameNative.JunoWorldPersistenceSubsystemData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UJunoWorldPersistenceSubsystemData : public UPrimaryDataAsset	
	{
	public:
		TArray<UClass*> AvailableWorldPersistenceHandlerClasses; // 0x30(0x10)
		UClass* DefaultWorldPersistenceHandlerClass; // 0x40(0x8)

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

		void GetWorldDebugInfoText(AFortPlayerPawn* PlayerPawn, FJunoDebugWorldInfoResult& WorldDebugInfo); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1CE8(relative to base address)
		void GetWorldAnalyticsInfo(UObject* WorldContextObject, FVector& WorldLocation, FJunoWorldAnalyticsInfoResult& WorldAnalyticsInfo); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1B60(relative to base address)
		void GetGlobalPOIs(UObject* WorldContextObject, TArray<FJunoGlobalPOIInfo>& OutGlobalPOIs, FName EventName, FName POIName); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE18F0(relative to base address)
		bool GetEventTilesAverageLocation(UObject* WorldContextObject, FName& EventName, FVector& OutLocation); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1784(relative to base address)
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

		void TurnWorldSettingOn(UObject* WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE26B8(relative to base address)
		void TurnWorldSettingOff(UObject* WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE25E4(relative to base address)
		bool IsWorldSettingTainted(UObject* WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE22B4(relative to base address)
		bool IsWorldSettingSaved(UObject* WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE21E4(relative to base address)
		bool IsWorldSettingOn(UObject* WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE2114(relative to base address)
		bool IsSandboxMode(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE1ECC(relative to base address)
		bool IsHardcoreMode(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE1E4C(relative to base address)
		bool IsCozyMode(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE1DCC(relative to base address)
		FGameplayTag GetEnumWorldSetting(UObject* WorldContextObject, FGameplayTag& SettingName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE162C(relative to base address)
		TArray GetAllWorldSettingNames(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE1598(relative to base address)
		FName EnumWorldSettingValueToName(FGameplayTag& SettingValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE143C(relative to base address)
		void ChangeEnumWorldSetting(UObject* WorldContextObject, FGameplayTag& SettingValue); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE12DC(relative to base address)
		bool CanGetWorldSettings(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE1260(relative to base address)
		bool AreWorldSettingsLoaded(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE11C8(relative to base address)
	};


	// Class JunoGameNative.JunoWorldSettingsComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UJunoWorldSettingsComponent : public UPlayspaceComponent	
	{
	public:
		UDataTable* WorldSettingsTable; // 0xA0(0x8)
		TArray<FJunoWorldSettingRepState> WorldSettings; // 0xA8(0x10)
		bool bAreWorldSettingsLoaded; // 0xB8(0x1)
		unsigned char UnknownData00_7[0x17]; // 0xB9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldSettingsComponent");
			return ret;
		}

		void TurnSettingOn(FGameplayTag& SettingName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE2558(relative to base address)
		void TurnSettingOff(FGameplayTag& SettingName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE24CC(relative to base address)
		void OnRep_WorldSettings(TArray<FJunoWorldSettingRepState>& OldValue); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750CE23B8(relative to base address)
		void OnRep_AreWorldSettingsLoaded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750CE2394(relative to base address)
		bool IsSettingTainted(FGameplayTag& SettingName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE207C(relative to base address)
		bool IsSettingSaved(FGameplayTag& SettingName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1FE4(relative to base address)
		bool IsSettingOn(FGameplayTag& SettingName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1F4C(relative to base address)
		FGameplayTag GetEnumWorldSetting(FGameplayTag& SettingName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE16F4(relative to base address)
		TArray GetAllSettingNames(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1558(relative to base address)
		void ChangeEnumWorldSetting(FGameplayTag& SettingValue); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE13B0(relative to base address)
		bool AreWorldSettingsLoaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE1248(relative to base address)
	};


	// Class JunoGameNative.JunoWorldSettingsPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0xD0 (0x128 - 0x58)
	class UJunoWorldSettingsPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x58(0x20) UNKNOWN PROPERTY
		TMap<FName, bool> BoolWorldSettings; // 0x78(0x50)
		TMap<FName, FName> EnumWorldSettings; // 0xC8(0x50)
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
		unsigned char UnknownData00_6[0x6]; // 0x10A(0x6) UNKNOWN PROPERTY
		AJunoCampActor* OwningCampActor; // 0x110(0x8)

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
		unsigned char UnknownData00_1[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float FatigueDamageThresholdPercent; // 0x34(0x4)
		float FatigueDamageThresholdMinimum; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoActorWorldLocation");
			return ret;
		}

		void RemoveLocationInfoForActor(FGameplayTag& ActorTypeIdentifier, FGuid& LocationGUID); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CE5054(relative to base address)
		void GetLocationInfosForActorsOnTile(FGameplayTag& ActorTypeIdentifier, FGuid& TileGUID, TArray<FJunoActorLocationInfo>& LocationInfos); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CE471C(relative to base address)
		void GetLocationInfoForActorWithGUID(FGameplayTag& ActorTypeIdentifier, FGuid& ActorGuid, FJunoActorLocationInfo& LocationInfo); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CE457C(relative to base address)
		void GetLocationInfoForActorOnEventTile(FGameplayTag& ActorTypeIdentifier, AActor* Actor, FGameplayTag& LocationIdentifierTag, FJunoActorLocationInfo& LocationInfos); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE4394(relative to base address)
		UPlayspaceComponent_JunoActorWorldLocation GetJunoActorWorldLocationPersistenceComponent(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE4294(relative to base address)
		void ChangeLocationInfoForActor(FGameplayTag& ActorTypeIdentifier, FGuid& ActorGuid, FJunoActorLocationInfo& NewLocationInfo); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750CE4068(relative to base address)
		void AddLocationInfoForActor(FGameplayTag& ActorTypeIdentifier, FJunoActorLocationInfo& ActorLocationInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE3F24(relative to base address)
	};


	// Class JunoGameNative.PlayspaceComponent_JunoLTMState
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UPlayspaceComponent_JunoLTMState : public UPlayspaceComponent	
	{
	public:
		FMulticastInlineDelegate OnLTMStateChanged; // 0xA0(0x10)
		unsigned char UnknownData00_7[0x60]; // 0xB0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoLTMState");
			return ret;
		}

		void StartLimitedTimeModeCinematic(FGameplayTag& CinematicID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE513C(relative to base address)
		void RemoveLTMState(FGameplayTag OldState); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CE4EB8(relative to base address)
		bool IsLimitedTimeModeCinematicPlaying(FGameplayTag& CinematicID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE4DF4(relative to base address)
		bool HasLTMState(FGameplayTag TestState); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE48E8(relative to base address)
		bool HasLimitedTimeModeCinematicPlayed(FGameplayTag& CinematicID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE4A2C(relative to base address)
		UPlayspaceComponent_JunoLTMState GetJunoLTMState(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750CE4314(relative to base address)
		void EndLimitedTimeModeCinematic(FGameplayTag& CinematicID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750CE4208(relative to base address)
		void AddLTMState(FGameplayTag NewState); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750CE3E14(relative to base address)
	};


	// Class JunoGameNative.JunoCampWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UJunoCampWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

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
		TMap<EJunoBiome, UDataTable*> NPCPerksPerBiome; // 0x218(0x50)
		unsigned char UnknownData00_6[0x30]; // 0x268(0x30) UNKNOWN PROPERTY
		UJunoAsyncAction_WaitForEventRouter* WaitForEventRouterAction; // 0x298(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x2A0(0x10) UNKNOWN PROPERTY
		TArray<FReplicatedCampData> ReplicatedCampDatas; // 0x2B0(0x10)
		TArray<FReplicatedCampAreaReservationData> ReplicatedCampAreaReservationDatas; // 0x2C0(0x10)
		unsigned char UnknownData02_6[0x148]; // 0x2D0(0x148) UNKNOWN PROPERTY
		TArray<FPOIEncounterDataForCamps> ActivePOIEncounters; // 0x418(0x10)
		unsigned char UnknownData03_7[0x148]; // 0x428(0x148) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement");
			return ret;
		}

		bool IsAValidLocationForANewCamp(FVector& Location, FGameplayTagContainer SupportedCampTags, bool bShouldSkipEncounterCheck, FGameplayTagContainer& OutFailureReasons); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CE4AF0(relative to base address)
		UPlayspaceComponent_JunoRootCampManagement GetRootPlayspaceJunoCampManagementComponent(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750CE4868(relative to base address)
	};


	// Class JunoGameNative.JunoAwesomeInteractionConfigMappings
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoAwesomeInteractionConfigMappings : public UDataAsset	
	{
	public:
		TMap<FGameplayTag, FDataTableRowHandle> InteractionConfigMap; // 0x30(0x50)

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
		unsigned char UnknownData00_3[0xA0]; // 0x30(0xA0) UNKNOWN PROPERTY
		FDataRegistryType PlacementConfigRegistryType; // 0xD0(0x4)
		unsigned char UnknownData01_6[0x54]; // 0xD4(0x54) UNKNOWN PROPERTY
		UDataTable* CategoryConfigTable; // 0x128(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x130(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0xA4]; // 0x34(0xA4) UNKNOWN PROPERTY
		FDataTableRowHandle DefaultConfig; // 0xD8(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xE8(0x18) UNKNOWN PROPERTY

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
		UJunoAwesomeInteractionConfigMappings* InteractionConfigMappings; // 0xF8(0x8)
		UJunoAwesomePlacementConfigMappings* PlacementConfigMappings; // 0x100(0x8)
		UJunoAwesomePoiConfigMappings* PoiConfigMappings; // 0x108(0x8)
		unsigned char UnknownData00_7[0x38]; // 0x110(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomeSystemDatabaseComponent");
			return ret;
		}

		void HandleOnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750D05700(relative to base address)
	};


	// Class JunoGameNative.JunoAwesomeThresholdsComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UJunoAwesomeThresholdsComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate OnAwesomeLevelChanged; // 0xA0(0x10)
		TArray<FJunoAwesomeThresholdMapping> AwesomeThresholdToActionsMappings; // 0xB0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomeThresholdsComponent");
			return ret;
		}

		void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750D05670(relative to base address)
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
		unsigned char UnknownData00_6[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY
		int32_t AwesomeLevel; // 0xF8(0x4)
		int32_t CurrentAwesomePoints; // 0xFC(0x4)
		unsigned char UnknownData01_6[0x50]; // 0x100(0x50) UNKNOWN PROPERTY
		TArray<int32_t> AwesomePointGoals; // 0x150(0x10)
		TArray<FJunoAwesomeUpgradeRequirements> AwesomeUpgradeRequirements; // 0x160(0x10)
		FJunoAwesomeUpgradeRequirements CurrentUpgradeRequirements; // 0x170(0x20)
		unsigned char UnknownData02_6[0x50]; // 0x190(0x50) UNKNOWN PROPERTY
		FGameplayTagContainer CampPersistentTagsCopy; // 0x1E0(0x20)
		EJunoAwesomeConfigDeterminationType AwesomeConfigDeterminationType; // 0x200(0x1)
		EJunoBiome CampBiomeType; // 0x201(0x1)
		bool bNonResourceRequirementsMet; // 0x202(0x1)
		unsigned char UnknownData03_6[0x19]; // 0x203(0x19) UNKNOWN PROPERTY
		bool bIsReadyForUse; // 0x21C(0x1)
		bool bIsFromPersistence; // 0x21D(0x1)
		unsigned char UnknownData04_6[0x22]; // 0x21E(0x22) UNKNOWN PROPERTY
		FJunoAwesomePointModificationData CachedAwesomePointModificationData; // 0x240(0x28)
		FJunoAwesomeLevelChangeData CachedAwesomeLevelChangeData; // 0x268(0x18)
		bool bSkipAwesomeUpgradeResourceChecks; // 0x280(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x281(0x7) UNKNOWN PROPERTY
		TArray<FAwesomeLevelRewardEntry> AwesomeLevelRewardEntries; // 0x288(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAwesomeLevelComponent");
			return ret;
		}

		void TriggerAwesomeLevelChange(AFortPlayerController* TriggeringPlayer, bool bForceUpgrade); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D05E18(relative to base address)
		bool ProcessAwesomePointModifierCheat(int32_t AwesomePointAmount, AActor* SourceActor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D05B08(relative to base address)
		void OnRep_NonResourceRequirementsMet(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D05A70(relative to base address)
		void OnRep_CurrentAwesomePoints(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D05A44(relative to base address)
		void OnRep_bIsReadyForUse(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D05ADC(relative to base address)
		void OnRep_AwesomeLevel(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D05A2C(relative to base address)
		void OnAwesomeSettingsInitialized(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D05A18(relative to base address)
		bool IsReadyForUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D058D4(relative to base address)
		EJunoAwesomeLevelUpgradeQueryResult IsAwesomeLevelUpPending(AFortPlayerController* TriggeringPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05844(relative to base address)
		bool HasEnoughAwesomePointsForALevelUp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05820(relative to base address)
		bool HasAllNonResourceRequirementsMet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D057FC(relative to base address)
		int32_t GetMaxAwesomeLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05638(relative to base address)
		int32_t GetMaxAwesomeIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8550(relative to base address)
		FJunoAwesomeUpgradeRequirements GetCurrentUpgradeRequirements(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05600(relative to base address)
		int32_t GetCurrentAwesomePointGoal(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D055DC(relative to base address)
		int32_t GetCurrentAwesomePointFloor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D055B8(relative to base address)
		EJunoBiome GetBiomeType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D055A0(relative to base address)
		int32_t GetAwesomePointsNeededForNextLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D0557C(relative to base address)
		int32_t GetAwesomePoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05564(relative to base address)
		TArray GetAwesomeLevelRewardEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05548(relative to base address)
		int32_t GetAwesomeLevelFromCurrentPoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05524(relative to base address)
		int32_t GetAwesomeLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3F0BE0(relative to base address)
		void BP_OnAwesomePointsModified(FJunoAwesomePointModificationData& ModificationData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoGameNative.JunoNamedPOIComponent
	// Inherited from UJunoCampComponentBase -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UJunoNamedPOIComponent : public UJunoCampComponentBase	
	{
	public:
		FMulticastInlineDelegate OnJunoPOINameChangedDelegate; // 0xA0(0x10)
		FMulticastInlineDelegate OnJunoPOIMarkerChangedDelegate; // 0xB0(0x10)
		unsigned char UnknownData00_6[0xA]; // 0xC0(0xA) UNKNOWN PROPERTY
		bool bUseStaticPOIName; // 0xCA(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xCB(0x5) UNKNOWN PROPERTY
		FText POIName; // 0xD0(0x10)
		bool bUseStaticMarker; // 0xE0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		FJunoMarker Marker; // 0xE8(0xC0)
		FGuid MarkerID; // 0x1A8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x1B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoNamedPOIComponent");
			return ret;
		}

		void SetPOIName(FText& NewPOIName); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D05D7C(relative to base address)
		void ProcessCampReadyLogic(FJunoCampAwesomeStatsData& ReadyData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750D05C2C(relative to base address)
		void PrepareForCampReadyLogic(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D05AF4(relative to base address)
		void OnRep_POIName(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D05A88(relative to base address)
		void OnRep_MarkerId(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D05A5C(relative to base address)
		void OnRep_Marker(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D05A5C(relative to base address)
		void OnJunoPOINameChangedSignature__DelegateSignature(FText& NewName); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJunoPOIMarkerChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750D0597C(relative to base address)
		void OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750D058EC(relative to base address)
		void K2_OnPlayerExitedCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, AJunoCampActor* OwningCamp); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnPlayerEnteredCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, AJunoCampActor* OwningCamp); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnCampNameChanged(FText& NewName, AJunoCampActor* OwningCamp); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetPOIName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05654(relative to base address)
		FJunoMarker GetMarker(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D0561C(relative to base address)
	};


	// Class JunoGameNative.JunoAdventurePlayspaceBase
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x28 (0x6C8 - 0x6A0)
	class AJunoAdventurePlayspaceBase : public AFortPlayspace	
	{
	public:
		bool bShouldPersist; // 0x6A0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x6A1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer AdventureTags; // 0x6A8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAdventurePlayspaceBase");
			return ret;
		}

		void RemoveAdventureTags(FGameplayTagContainer& TagsToRemove); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D05CC0(relative to base address)
		FGameplayTagContainer GetAdventureTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D05508(relative to base address)
		bool ContainsController(AController* Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D0544C(relative to base address)
		void AppendAdventureTags(FGameplayTagContainer& TagsToAdd); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D05390(relative to base address)
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
		unsigned char UnknownData00_1[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		bool bShouldPersist; // 0x338(0x1)
		bool bDestroyLinkedPlayspaceOnEndPlay; // 0x339(0x1)
		unsigned char UnknownData01_6[0x1E]; // 0x33A(0x1E) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x358(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x368(0x8) UNKNOWN PROPERTY

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

		void OnPlayerPossessed(APawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D2CF20(relative to base address)
		void OnNPCPossessed(APawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D2CEA0(relative to base address)
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
		unsigned char UnknownData00_6[0x6C]; // 0xB4(0x6C) UNKNOWN PROPERTY
		UPrimitiveComponent* PrimitiveComponentAffectingNavMesh; // 0x120(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x128(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsObjectNavigationComponent");
			return ret;
		}

		void OnWake(UPrimitiveComponent* SimulatingComponent, FName BoneName); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF750D2D128(relative to base address)
		void OnSleep(UPrimitiveComponent* SimulatingComponent, FName BoneName); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF750D2D064(relative to base address)
		void OnRemovedFromClusterUnion(UClusterUnionComponent* ClusterUnion, UPrimitiveComponent* Component); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF750D2CFA0(relative to base address)
		void OnClusterUnionPhysicsObjectAwakeChanged(UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF750D2CDD8(relative to base address)
		void OnAddedToClusterUnion(UClusterUnionComponent* ClusterUnion, UPrimitiveComponent* Component); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF750D2CBE4(relative to base address)
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
		UJunoAnalytics* JunoAnalytics; // 0x28(0x8)

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

		void SetPostProcessAnimBlueprint(USkeletalMesh* SkeletalMesh, UClass* PostProcessAnimBlueprint); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF750D2D7AC(relative to base address)
		void MakeBoneMaskFromInstanceDataAsset(UJunoBoneMaskInstanceDataAsset* DataAsset, FBoneMask& OutBoneMask); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2CA18(relative to base address)
		void ImpactOrDamage(FGameplayTagContainer& DamageTags, AFortPawn* DamageInstigator, AActor* DamageSource, EImpactOrDamage_ExecutionPin& ExecutionPin); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2C804(relative to base address)
		bool HasMatchingImpactCue(FGameplayTagContainer& DamageTags, AFortPawn* DamageInstigator, AActor* DamageSource); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2C644(relative to base address)
		UClass GetPostProcessAnimBlueprint(USkeletalMesh* SkeletalMesh); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF750D2C5A4(relative to base address)
		void GetClampedWarpTargetLocation(FVector WarpStartLocation, FVector WarpTargetLocation, float WarpTargetRadius, float WarpDistanceMax, bool ConstrainToPawnForwardVector, FVector PawnForward, FVector& ClampedTargetLocation, FRotator& FaceTargetRotation); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750D2BDE4(relative to base address)
		void GetCapsuleActorSpaceBounds(UCapsuleComponent* Capsule, FVector& Origin, FVector& Extents); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750D2BC58(relative to base address)
		void AbilityMontage_SetNextSection(AFortPawn* FortPawn, FName NextSection); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF750D2B838(relative to base address)
		void AbilityMontage_ReplicatePosition(AFortPawn* FortPawn, bool bReplicatePosition); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF750D2B758(relative to base address)
	};


	// Class JunoGameNative.JunoAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x4C0 - 0x4A8)
	class UJunoAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x4A8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAnimInstance");
			return ret;
		}

		void UpdateAnimationTimer(float& TimeRemaining, bool& bTimeIsExpired, EUpdateAnimationTimer_ExecutionPin& ExecutionPin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2DADC(relative to base address)
		void RandomizeAnimationTimer(float MinTime, float MaxTime, float& TimeRemaining, bool& bTimeIsExpired); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2D1EC(relative to base address)
		UJunoAnimInstance GetMainAnimInstance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D2C40C(relative to base address)
		float BlendCurvesByName(FName CurveA, FName CurveB, float Alpha); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D2B924(relative to base address)
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
		unsigned char UnknownData00_5[0x3]; // 0x881(0x3) UNKNOWN PROPERTY
		float GliderPitch; // 0x884(0x4)
		float GliderRoll; // 0x888(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x88C(0x4) UNKNOWN PROPERTY
		UJunoPlayerAnimInstance* PlayerAnimInstance; // 0x890(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x898(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x4C9(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_5[0x6]; // 0x502(0x6) UNKNOWN PROPERTY
		FVector PawnAcceleration; // 0x508(0x18)
		float PawnAccelerationDirection; // 0x520(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x524(0x4) UNKNOWN PROPERTY
		FRotator PawnRotation; // 0x528(0x18)
		FRotator PawnRotationDelta; // 0x540(0x18)
		FRotator PawnRotationRateNormalized; // 0x558(0x18)
		FRotator PawnRootRotation; // 0x570(0x18)
		float PawnVelocityDirection; // 0x588(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x58C(0x4) UNKNOWN PROPERTY
		FVector PawnPreviousVelocity; // 0x590(0x18)
		float PawnIdleBreakTime; // 0x5A8(0x4)
		float PawnMovingIdleBreakTime; // 0x5AC(0x4)
		int32_t PawnCurrentLOD; // 0x5B0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x5B4(0x4) UNKNOWN PROPERTY
		FVector PawnLocation; // 0x5B8(0x18)
		bool bClothEnabled : 1; // 0x5D0:0(0x1)
		bool bAnimDynamicsEnabled : 1; // 0x5D0:1(0x1)
		bool bRigidBodyEnabled : 1; // 0x5D0:2(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x5D1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnAnimInstance");
			return ret;
		}

		void StartPawnMovingIdleBreakTimer(float MinTime, float MaxTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2DA0C(relative to base address)
		void StartPawnIdleBreakTimer(float MinTime, float MaxTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2D93C(relative to base address)
		void OnStoppedBeingAggressive(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBecomeAggressive(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UAnimMontage DetermineMoodReactionMontage(FGameplayTag& MoodReactionTag, UProxyTable* MoodReactionProxyTable); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearPawnMovingIdleBreakTimer(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2BA3C(relative to base address)
		void ClearPawnIdleBreakTimer(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2BA20(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0x5F4(0x4) UNKNOWN PROPERTY
		UCurveVector* PlayerStrafeCurve; // 0x5F8(0x8)
		AFortPlayerPawn* FortPlayerPawn; // 0x600(0x8)
		bool bIsAccelerating2D : 1; // 0x608:0(0x1)
		bool bIsSurfaceSwimming : 1; // 0x608:1(0x1)
		bool bIsMovingAndInMotionEmote : 1; // 0x608:2(0x1)
		bool bIsSlopeSliding; // 0x609(0x1)
		bool bIsInVehicle : 1; // 0x60A:0(0x1)
		unsigned char UnknownData01_5[0x5]; // 0x60B(0x5) UNKNOWN PROPERTY
		FVector LocalAcceleration; // 0x610(0x18)
		float LocalAccelYawAngle; // 0x628(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x62C(0x4) UNKNOWN PROPERTY
		FVector LocalVelocity; // 0x630(0x18)
		float LocalVelocityRight; // 0x648(0x4)
		float LocalVelocityYawAngle; // 0x64C(0x4)
		float MaxSpeed; // 0x650(0x4)
		float MaxSwimSpeed; // 0x654(0x4)
		float VelocityZ; // 0x658(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x65C(0x4) UNKNOWN PROPERTY
		FVector WorldAcceleration; // 0x660(0x18)
		FVector WorldVelocity; // 0x678(0x18)
		FRotator ActorRotationLastTick; // 0x690(0x18)
		float YawDeltaCurrentTick; // 0x6A8(0x4)
		float YawDeltaLastTick; // 0x6AC(0x4)
		float YawDeltaSmoothed; // 0x6B0(0x4)
		bool bIsTacticalSprint : 1; // 0x6B4:0(0x1)
		bool bIsSkydiving : 1; // 0x6B4:1(0x1)
		bool bIsParachuteOpen : 1; // 0x6B4:2(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x6B5(0x3) UNKNOWN PROPERTY
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
		TEnumAsByte<EFortMovementStyle> PlayerMovementStyle; // 0x6CD(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x6CE(0x2) UNKNOWN PROPERTY
		float PlayerAccelerationAmount; // 0x6D0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x6D4(0x4) UNKNOWN PROPERTY
		FRotator PlayerLookAtRotation; // 0x6D8(0x18)
		FRotator PlayerRotationTarget; // 0x6F0(0x18)
		FRotator PlayerPreviousRotationTarget; // 0x708(0x18)
		float PlayerRotationTargetRate; // 0x720(0x4)
		float PlayerVelocityYawRate; // 0x724(0x4)
		float PlayerUseProceduralFaceAnim; // 0x728(0x4)
		FJunoMinifigLayeringMask LayeringMask; // 0x72C(0xA0)
		unsigned char UnknownData07_6[0x4]; // 0x7CC(0x4) UNKNOWN PROPERTY
		FInputAlphaBoolBlend SecondaryMotionLODBlend; // 0x7D0(0x48)
		int32_t SecondaryMotionLODThreshold; // 0x818(0x4)
		float SecondaryMotionLODBlendTime; // 0x81C(0x4)
		float GliderPitch; // 0x820(0x4)
		float GliderRoll; // 0x824(0x4)
		AFortWeapon* PlayerMainHandItem; // 0x828(0x8)
		AFortWeapon* PlayerOffHandItem; // 0x830(0x8)
		FVector2D PlayerAimOffset; // 0x838(0x10)
		FVector PlayerAimOffsetTemp; // 0x848(0x18)
		FVector2D PlayerProp1AimOffset; // 0x860(0x10)
		FVector PlayerProp1AimTargetLocation; // 0x870(0x18)
		FRotator PlayerSlopeMatchingRotationOffset; // 0x888(0x18)
		float PlayerSlopeMatchingWeight; // 0x8A0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x8A4(0x4) UNKNOWN PROPERTY
		FRotator PlayerPreviousRootRotation; // 0x8A8(0x18)
		EJunoMinifigRotationMode PlayerRotationMode; // 0x8C0(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x8C1(0x7) UNKNOWN PROPERTY
		FRotator SmoothedRotationTarget; // 0x8C8(0x18)
		FRotator SuperSmoothedRotationTarget; // 0x8E0(0x18)
		FRotator PlayerStartingRotation; // 0x8F8(0x18)
		float PlayerStartingAngle; // 0x910(0x4)
		bool bPlayerEmotionHasChanged; // 0x914(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x915(0x3) UNKNOWN PROPERTY
		FFortAnimInput_RandomizeMontageSection JunoRandomizeMontageSectionInput; // 0x918(0x18)
		bool bForcePlayerToFacePawnRotation; // 0x930(0x1)
		unsigned char UnknownData11_7[0x5F]; // 0x931(0x5F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerAnimInstance");
			return ret;
		}

		void UpdatePlayerRotationTarget(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2F52C(relative to base address)
		void UpdatePlayerRootRotation(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2F4AC(relative to base address)
		void UpdatePlayerCurveRotateToStaticTarget(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2F430(relative to base address)
		void UpdatePlayerCurveRotateToMovingTarget(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2F3B0(relative to base address)
		void UpdatePlayerContinuousRotateToTarget(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2F330(relative to base address)
		void UpdatePlayerAimOffsetWithRootCompensation(FRotator LookAtRotation, float InterpSpeed, bool bCompensate, float DeltaSeconds); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750D2EFD0(relative to base address)
		void UpdatePlayerAimOffset(float DeltaSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2EF50(relative to base address)
		bool ShouldForcePlayerToFacePawnRotation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D2D918(relative to base address)
		void SetPlayerRotationMode(EJunoMinifigRotationMode RotationMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2D710(relative to base address)
		void OnPlayerStoppedPushing(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerOffHandItemChanged(AFortWeapon* CurrentItem); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerMainHandItemChanged(AFortWeapon* CurrentItem); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerEmotionChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetPlayerStrideScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D2C57C(relative to base address)
		void GetPlayerRotationTargetInterpolationSpeeds(float& SmoothedSpeed, float& SuperSmoothedSpeed); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D2C4A4(relative to base address)
		EJunoMinifigRotationMode GetPlayerRotationMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D2C450(relative to base address)
		float GetPlayerLeanAmount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D2C430(relative to base address)
	};


	// Class JunoGameNative.JunoPropAnimInstance
	// Inherited from UJunoAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x4D0 - 0x4C0)
	class UJunoPropAnimInstance : public UJunoAnimInstance	
	{
	public:
		bool bIsMoving2D; // 0x4C0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x4C1(0xF) UNKNOWN PROPERTY

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
		UWorld* World; // 0x70(0x8)
		unsigned char UnknownData00_7[0x38]; // 0x78(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.AudioEventAggregatorSubsystem");
			return ret;
		}

		void SetRadius(float Radius); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2D894(relative to base address)
		void SetCollisionEventLifetime(float Time); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2D690(relative to base address)
		void SetCollisionDeltaVelocityMagnitudeThreshold(float Magnitude); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2D610(relative to base address)
		void SetBreakEventLifetime(float Time); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2D590(relative to base address)
		void RemoveActiveCollisionEvent(FGuid EventId); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF750D2D470(relative to base address)
		void RemoveActiveBreakEvent(FGuid EventId); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF750D2D350(relative to base address)
		bool IsAggregatingCollisionEvents(); // Flags: Final|Native|Public, Memory Exec: 0x7FF750D2C9E4(relative to base address)
		void InitChaosEventRelay(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2C9D0(relative to base address)
		void FilterAndGroupCollisionEvents(TArray<FCollisionChaosEvent>& CollisionEvents); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF750D2BB08(relative to base address)
		void FilterAndGroupBreakEvents(TArray<FChaosBreakEvent>& BreakEvents); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF750D2BA6C(relative to base address)
		void DeinitChaosEventRelay(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D2BA58(relative to base address)
	};


	// Class JunoGameNative.JunoFoleyContext
	// Inherited from UFortPlayerFoleyContext -> UFortSoundLibraryContext -> USoundLibraryContext -> UObject
	// Size: 0x8 (0x140 - 0x138)
	class UJunoFoleyContext : public UFortPlayerFoleyContext	
	{
	public:
		float PitchMultiplier; // 0x138(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY

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
	// Size: 0x2C0 (0x20F0 - 0x1E30)
	class UJunoCameraMode_OrbitCam : public UFortCameraMode_ThirdPerson	
	{
	public:
		bool bIsBuildPreviewMode; // 0x1E30(0x1)
		unsigned char UnknownData00_6[0xF]; // 0x1E31(0xF) UNKNOWN PROPERTY
		FTransform BuildPreviewActorTransform; // 0x1E40(0x60)
		FBox BuildPreviewLocalBounds; // 0x1EA0(0x38)
		bool bOverrideCameraOriginDuringBuildPreview; // 0x1ED8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1ED9(0x7) UNKNOWN PROPERTY
		UCurveFloat* BuildPreviewBoundsToForwardDistanceScale; // 0x1EE0(0x8)
		double BuildingPreviewHeightAdditionalZoom; // 0x1EE8(0x8)
		double BuildingSizeMin; // 0x1EF0(0x8)
		double BuildingSizeMax; // 0x1EF8(0x8)
		double BuildingScalarDistanceOffsetInterpSpeed; // 0x1F00(0x8)
		UMaterialParameterCollection* JunoMaterialCollection; // 0x1F08(0x8)
		FName Tag_IgnoredActors; // 0x1F10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1F14(0x4) UNKNOWN PROPERTY
		double VerticalProbeLength; // 0x1F18(0x8)
		float FrontalAngledProbeAngle; // 0x1F20(0x4)
		float FrontalAngledProbeLength; // 0x1F24(0x4)
		double ViewTargetHeight; // 0x1F28(0x8)
		int32_t VerticalProbeTickSkip; // 0x1F30(0x4)
		int32_t FrontalProbeTickSkip; // 0x1F34(0x4)
		double NonAttackingFollowInterp; // 0x1F38(0x8)
		double AttackingFollowInterp; // 0x1F40(0x8)
		double FollowInterpBlenuOutSpeed; // 0x1F48(0x8)
		double FollowInterpBlendInSpeed; // 0x1F50(0x8)
		double GroundInterpBlendOutSpeed; // 0x1F58(0x8)
		double GroundInterpBlendInSpeed; // 0x1F60(0x8)
		double GroundedZInterp; // 0x1F68(0x8)
		double NonGroundedZInterp; // 0x1F70(0x8)
		bool UseVelocityViewTargetLeading; // 0x1F78(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1F79(0x7) UNKNOWN PROPERTY
		double MaxVelocityCamOffset; // 0x1F80(0x8)
		double DotParallelThreshold; // 0x1F88(0x8)
		double VelOffsetSpeed; // 0x1F90(0x8)
		UCurveFloat* Curve_VelocityInterpSpeed; // 0x1F98(0x8)
		double StrafingVelOffsetInterpSpeed; // 0x1FA0(0x8)
		double MinVelOffsetInterpSpeed; // 0x1FA8(0x8)
		double MaxVelOffsetInterpSpeed; // 0x1FB0(0x8)
		double CameraSpaceForwardDistanceIterpoltionSpeed; // 0x1FB8(0x8)
		double CurCamSpaceViewOffsetIterpoltionSpeed; // 0x1FC0(0x8)
		float ViewTargetOffsetInterpSpeed; // 0x1FC8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1FCC(0x4) UNKNOWN PROPERTY
		FVector DefaultTargetViewOffset; // 0x1FD0(0x18)
		FFloatRange PitchCameraForwardDistanceMultiplier; // 0x1FE8(0x10)
		UCurveFloat* Curve_PitchDistanceMult; // 0x1FF8(0x8)
		bool CameraAdjustsWhenStrafing; // 0x2000(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x2001(0x7) UNKNOWN PROPERTY
		double VelocityAddDistanceThreshold; // 0x2008(0x8)
		double VelocityAddMaxDistance; // 0x2010(0x8)
		double InteriorCameraSpaceForwardDistance; // 0x2018(0x8)
		double InteriorCamZOffset; // 0x2020(0x8)
		double ExteriorCameraSpaceForwardDistance; // 0x2028(0x8)
		double ExteriorCameraSpaceForwardDistanceStrafing; // 0x2030(0x8)
		double ExteriorCamZOffset; // 0x2038(0x8)
		bool AllowChangingHidePercentByPitch; // 0x2040(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x2041(0x3) UNKNOWN PROPERTY
		float ChangingHideDefaultValue; // 0x2044(0x4)
		float ChangingHidePitchedValue; // 0x2048(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x204C(0x4) UNKNOWN PROPERTY
		double ChangingHidePitchedThreshold; // 0x2050(0x8)
		double VelocityAddMaxFOV; // 0x2058(0x8)
		double MinFOVAndDistanceInterpSpeed; // 0x2060(0x8)
		double MaxFOVAndDistanceInterpSpeed; // 0x2068(0x8)
		double CurrentFOV; // 0x2070(0x8)
		double FastVelocityThreshold; // 0x2078(0x8)
		double InteriorFOV; // 0x2080(0x8)
		double ExteriorFOV; // 0x2088(0x8)
		int32_t VerticalProbeCurTickNum; // 0x2090(0x4)
		int32_t FrontalProbeCurTickNum; // 0x2094(0x4)
		double CurGroundedBlendInterp; // 0x2098(0x8)
		double CurFollowBlendInterp; // 0x20A0(0x8)
		FVector CurVelOffset; // 0x20A8(0x18)
		double CurrentBuildingScalarDistanceOffset; // 0x20C0(0x8)
		FVector CurCamSpaceViewOffset; // 0x20C8(0x18)
		bool VerticalProbeBlocked; // 0x20E0(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x20E1(0x3) UNKNOWN PROPERTY
		float VerticalHitDistance; // 0x20E4(0x4)
		bool FrontaAngledlProbeBlocked; // 0x20E8(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x20E9(0x3) UNKNOWN PROPERTY
		float ForwardAngledHitDistance; // 0x20EC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCameraMode_OrbitCam");
			return ret;
		}

		void UpdateCameraNativeRawTranslation(AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT, FOrbitCamLocalUpdateVariables& OutLocalVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2E2EC(relative to base address)
		void UpdateCameraNative(AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT, FOrbitCamLocalUpdateVariables& OutLocalVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2DC08(relative to base address)
		void UpdateCameraBP(AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCamera_UpdateViewTargetSpaceViewOffset(FTViewTarget& OutVT, FOrbitCamLocalUpdateVariables& LocalUpdateVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2EE38(relative to base address)
		void UpdateCamera_UpdateVerticalProbeTrace(AActor* ViewTargetActor); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750D2ECD4(relative to base address)
		void UpdateCamera_UpdateHidePawnPenetrationPercent(FOrbitCamLocalUpdateVariables& LocalUpdateVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2EC44(relative to base address)
		void UpdateCamera_UpdateFrontalProbeTrace(AActor* ViewTargetActor); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750D2E7A8(relative to base address)
		void UpdateCamera_UpdateCameraSpaceViewOffset(FTViewTarget& OutVT, FOrbitCamLocalUpdateVariables& LocalUpdateVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2E690(relative to base address)
		void UpdateCamera_UpdateCameraOriginInterpSpeed(FOrbitCamLocalUpdateVariables& LocalUpdateVariables); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2E600(relative to base address)
		FOrbitCamLocalUpdateVariables UpdateCamera_ComputeLocalUpdateVariables(AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D2E4A0(relative to base address)
		void OnBecomeActiveBP(AActor* ViewTarget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsCurrentlyInBuildPreviewMode(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D2CA00(relative to base address)
		AJunoBuilderTool GetBuildPreviewerFromViewTarget(AActor* ViewTarget); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750D2BBA4(relative to base address)
		bool CalculateCameraOriginForBuildPreview(AActor* ViewTarget, FVector& OutOrigin); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoGameNative.FortClientPilot_QuickSmokeJuno
	// Inherited from UFortClientPilot_GameplayBase -> UFortClientPilot_Base -> UClientPilotComponent -> UObject
	// Size: 0x10 (0x320 - 0x310)
	class UFortClientPilot_QuickSmokeJuno : public UFortClientPilot_GameplayBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x310(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x17]; // 0xA9(0x17) UNKNOWN PROPERTY
		TMap<FGameplayTag, FName> ItemTagToEntryName; // 0xC0(0x50)
		TMap<TWeakObjectPtr, FName> ItemDefinitionToEntryName; // 0x110(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_Codex");
			return ret;
		}

		void OnRep_IsCodexEnabled(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D530B4(relative to base address)
		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750D52E40(relative to base address)
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
		unsigned char UnknownData00_1[0x58]; // 0xA8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoAIPersistenceComponent");
			return ret;
		}

		void HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D52A84(relative to base address)
		void HandleAIFullySpawned(AAIController* Controller, AFortPawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D528F0(relative to base address)
		FGameplayTag GetUniqueAIIdentifier(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D528D8(relative to base address)
		AFortPawn CostlyFindSpawnedNPCByUniqueAIIdentifier(UWorld* World, FGameplayTag& UniqueAIIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D51C64(relative to base address)
		AFortPawn CostlyFindSpawnedCreatureByUniqueAIIdentifier(UWorld* World, FGameplayTag& UniqueAIIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D51C64(relative to base address)
		AFortPawn CostlyFindSpawnedAIByUniqueAIIdentifier(UWorld* World, FGameplayTag& UniqueAIIdentifier, bool bSearchForNPC, bool bSearchForCreature); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D51ABC(relative to base address)
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
		unsigned char UnknownData00_3[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY
		FJunoReplicatedCharacterData ReplicatedCharacterData; // 0xC0(0x28)
		unsigned char UnknownData01_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents");
			return ret;
		}

		FText TryFindCharacterDisplayName(FGameplayTag& CharacterGameplayTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D539FC(relative to base address)
		void ServerHandleEndInteraction(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E4851A4(relative to base address)
		void ServerAttemptAssignPlayerCharacter(AActor* ReceivingActor); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF750D53458(relative to base address)
		void ServerAttemptAssignAICharacter(AActor* ReceivingActor, FGameplayTag CharacterGameplayTag); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF750D53304(relative to base address)
		void OnRep_CharacterData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D530A0(relative to base address)
		void HandleCampObjectInteracted(AActor* ReceivingActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF750D52A04(relative to base address)
		FJunoReplicatedCharacterData GetCharacterData(); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF750D52520(relative to base address)
		void ClientNotifyObjectInteracted(AActor* ReceivingActor); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74E241010(relative to base address)
	};


	// Class JunoGameNative.JunoControllerComponent_ControlChannelNetworkEvents
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UJunoControllerComponent_ControlChannelNetworkEvents : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_ControlChannelNetworkEvents");
			return ret;
		}

		void ServerSetControlEnabled(bool bEnabled); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E801AAC(relative to base address)
		void ServerSetControlChannelValue(UJunoControlChannelComponent* ControlChannelComponent, FGameplayTag ChannelTag, float InValue); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF750D53620(relative to base address)
		void ServerChangeChannelForActor(AActor* Actor, bool bIsBroadcaster, int32_t NewChannelColorIndex, bool bIsSelected); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF750D534DC(relative to base address)
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

		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750D52F70(relative to base address)
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

		void HandleInventoryItemChanged(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750D52B94(relative to base address)
	};


	// Class JunoGameNative.JunoPlayspaceAccountantComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x118 - 0xF8)
	class UJunoPlayspaceAccountantComponent : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceAccountantComponent");
			return ret;
		}

		void SetPersistentValue(FName ValueName, int32_t Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D53824(relative to base address)
		bool IsAccountantReady(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D52DF4(relative to base address)
		void IncrementPersistentValue(FName ValueName, int32_t Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D52D1C(relative to base address)
		int32_t GetPersistentValue(FName ValueName); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D5284C(relative to base address)
		UJunoPlayspaceAccountantComponent GetJunoRootPlayspaceAccountantComponent(UObject* WorldContextObject); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750D5274C(relative to base address)
		UJunoPlayspaceAccountantComponent GetJunoPlayspaceAccountantComponent(UObject* WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750D5253C(relative to base address)
		void DecrementPersistentValue(FName ValueName, int32_t Value); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D51E28(relative to base address)
	};


	// Class JunoGameNative.JunoNamedRandomStreamGenerator
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoNamedRandomStreamGenerator : public UObject	
	{
	public:
		int32_t RandomSeed; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoNamedRandomStreamGenerator");
			return ret;
		}

		int32_t GetSeed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C910E0C(relative to base address)
		FRandomStream GenerateRandomStream(FString Name, FVector OptionalLocation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D52208(relative to base address)
		int32_t GenerateRandomSeed(FString Name, FVector OptionalLocation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D51F00(relative to base address)
	};


	// Class JunoGameNative.JunoPlayspaceRandomStreamComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x108 - 0xF8)
	class UJunoPlayspaceRandomStreamComponent : public UFortPlayspaceComponent	
	{
	public:
		int32_t PlayspaceRandomSeed; // 0xF8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		UJunoNamedRandomStreamGenerator* RandomStreamGenerator; // 0x100(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspaceRandomStreamComponent");
			return ret;
		}

		void OnVolumeGuidChanged(AActor* Actor, FGuid NewGuid); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF750D531BC(relative to base address)
		void OnVolumeBoundsChanged(APlayspace* Playspace); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D53140(relative to base address)
		void OnRep_PlayspaceRandomSeed(); // Flags: Final|RequiredAPI|Native|Private, Memory Exec: 0x7FF750D530D4(relative to base address)
		UJunoNamedRandomStreamGenerator GetRandomGeneratorBP(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F67B378(relative to base address)
		UJunoPlayspaceRandomStreamComponent GetJunoRootPlayspaceRandomStreamComponent(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750D527CC(relative to base address)
		UJunoPlayspaceRandomStreamComponent GetJunoPlayspaceRandomStreamComponent(UObject* WorldContextObject, FVector& Location); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750D52644(relative to base address)
		FRandomStream GenerateRandomStream(FString Name, FVector OptionalLocation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D52394(relative to base address)
		int32_t GenerateRandomSeed(FString Name, FVector OptionalLocation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D52084(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UDataTable* BuildingTagToResourceDataTable; // 0xB0(0x8)
		FGameplayTagContainer ResourceIdentifierTags; // 0xB8(0x20)
		FGameplayTagContainer BuildingTagsToIgnoreForResourceSplitting; // 0xD8(0x20)
		FDataRegistryType CraftingIngredientRegistryType; // 0xF8(0x4)
		float TimeToRegenHealth; // 0xFC(0x4)
		TArray<FJunoBuildingHitData> BuildingsHitList; // 0x100(0x10)
		float ResourcePercentToReturn; // 0x110(0x4)
		int32_t PickupsPerResource; // 0x114(0x4)
		TWeakObjectPtr<UClass*> PickupClassPtr; // 0x118(0x20)
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
		unsigned char UnknownData00_3[0x28]; // 0xB0(0x28) UNKNOWN PROPERTY
		FGameplayTagContainer AllowedTeamStartTags; // 0xD8(0x20)
		unsigned char UnknownData01_7[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x27]; // 0x359(0x27) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x58]; // 0x6A0(0x58) UNKNOWN PROPERTY
		TArray<FJunoPersistenceFeatureClassPair> RequiredPersistenceFeatureDataClassesNative; // 0x6F8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x708(0x8) UNKNOWN PROPERTY
		UJunoPlayspacePersistenceComponent* PersistenceComponent; // 0x710(0x8)
		TArray<UClass*> RequiredPersistenceFeatureDataClasses; // 0x718(0x10)
		ESpatialLoadingState SpatialLoadingState; // 0x728(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x729(0x3) UNKNOWN PROPERTY
		FName PersistenceMainLevelUniquePackageName; // 0x72C(0x4)
		TWeakObjectPtr<ULevel*> PersistenceMainLevelWeakPtr; // 0x730(0x8)
		uint32_t PlayspaceRequestKey; // 0x738(0x4)
		unsigned char UnknownData03_7[0xCC]; // 0x73C(0xCC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPersistentPlayspace");
			return ret;
		}

		bool ShouldBeTrackedByPlayspace(AActor* Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E9FC58(relative to base address)
		void SetShouldBeTrackedByPlayspace(AActor* Actor, bool bShouldBeTracked); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E9FBA4(relative to base address)
		void RemoveActorWhenEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E9FA44(relative to base address)
		void EnableSpawnedActorTracking(AActor* Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E9F3D4(relative to base address)
	};


	// Class JunoGameNative.JunoRootPlayspace
	// Inherited from AJunoPersistentPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x200 (0xA08 - 0x808)
	class AJunoRootPlayspace : public AJunoPersistentPlayspace	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x808(0x38) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortPlayerControllerAthena*> OwningController; // 0x840(0x8)
		FGameplayTag DefaultInventoryItemTag; // 0x848(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x84C(0x4) UNKNOWN PROPERTY
		UPlayspaceComponent_JunoServerExpiration* JunoServerExpiration; // 0x850(0x8)
		UJunoPlayerSpawningComponent* JunoPlayerSpawningComponent; // 0x858(0x8)
		unsigned char UnknownData02_6[0x30]; // 0x860(0x30) UNKNOWN PROPERTY
		float ProcessPlayerProgressionTime; // 0x890(0x4)
		unsigned char UnknownData03_6[0xC]; // 0x894(0xC) UNKNOWN PROPERTY
		UClass* JunoStateMachineClass; // 0x8A0(0x8)
		EWorldDataAvailable WorldDataAvailable; // 0x8A8(0x1)
		bool bRootPlayspaceReady; // 0x8A9(0x1)
		bool bReadyToApplyPersistentData; // 0x8AA(0x1)
		unsigned char UnknownData04_6[0x5]; // 0x8AB(0x5) UNKNOWN PROPERTY
		UJunoWorld* CurrentJunoWorld; // 0x8B0(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x8B8(0x8) UNKNOWN PROPERTY
		FJunoReplicatedWorldMetadata MetadataForReplication; // 0x8C0(0xC8)
		UJunoPlayerPersistenceComponent* JunoPlayerPersistenceComponent; // 0x988(0x8)
		unsigned char UnknownData06_7[0x78]; // 0x990(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoRootPlayspace");
			return ret;
		}

		void OnRep_WorldMetadata(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D5312C(relative to base address)
		void OnPeriodicSaveCompletedSuccessfully(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D52E2C(relative to base address)
		void OnCheckInAllCompletedSuccessfully(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D52E18(relative to base address)
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
		TWeakObjectPtr<UDataTable*> PossibleWorldsDataTable; // 0x78(0x20)
		int32_t WorldRandomSeed; // 0x98(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x1]; // 0x5E3(0x1) UNKNOWN PROPERTY
		float IdleShufflePlayRate; // 0x5E4(0x4)
		bool bIsIdleShuffleTurn; // 0x5E8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x5E9(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData02_6[0x3]; // 0x6A1(0x3) UNKNOWN PROPERTY
		float RootSmoothing_Distance; // 0x6A4(0x4)
		bool bSlopeWarpingIsEnabled; // 0x6A8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x6A9(0x3) UNKNOWN PROPERTY
		float SlopeWarpingFloorCheckFrequency; // 0x6AC(0x4)
		float SlopeWarpingRollAlpha; // 0x6B0(0x4)
		bool bStartingInPlace; // 0x6B4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x6B5(0x3) UNKNOWN PROPERTY
		FVector StartInPlace_RootTranslation; // 0x6B8(0x18)
		UAnimSequence* StartInPlace_Sequence; // 0x6D0(0x8)
		float StartInPlace_SequenceTime; // 0x6D8(0x4)
		bool bTurningInPlace; // 0x6DC(0x1)
		bool bTurnInPlace_UseAuthoredAngle; // 0x6DD(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x6DE(0x2) UNKNOWN PROPERTY
		UAnimSequence* TurnAnimation; // 0x6E0(0x8)
		float TurnInPlace_AnimationAuthoredAngle; // 0x6E8(0x4)
		float TurnPlayRate; // 0x6EC(0x4)
		float TurnInPlace_RootRotationZ; // 0x6F0(0x4)
		float TurnInPlace_RotationAngle; // 0x6F4(0x4)
		float TurnInPlace_RotationAngle_Min; // 0x6F8(0x4)
		float TurnInPlace_RotationRate; // 0x6FC(0x4)
		UAnimSequence* TurnInPlace_Sequence; // 0x700(0x8)
		float TurnInPlace_SequenceTime; // 0x708(0x4)
		bool bStateRule_Idle_Moving; // 0x70C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x70D(0x3) UNKNOWN PROPERTY
		float IdleShuffleTurnThreshold; // 0x710(0x4)
		float IdleShuffleTurnDirectionThreshold; // 0x714(0x4)
		float IdleShufflePlayRateInRangeA; // 0x718(0x4)
		float IdleShufflePlayRateInRangeB; // 0x71C(0x4)
		float IdleShufflePlayRateOutRangeA; // 0x720(0x4)
		float IdleShufflePlayRateOutRangeB; // 0x724(0x4)
		bool bHasValidAimTarget; // 0x728(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x729(0x7) UNKNOWN PROPERTY
		FVector AimTargetLocation; // 0x730(0x18)
		float AimTime; // 0x748(0x4)
		float LookAtAlpha; // 0x74C(0x4)
		float MaxDistanceToPlayerForLookAt; // 0x750(0x4)
		float LookAtTooFarFromPlayerTimeOut; // 0x754(0x4)
		bool bDisableLookAtDuringMontage; // 0x758(0x1)
		bool bStartTurn; // 0x759(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x75A(0x2) UNKNOWN PROPERTY
		float TurnAngle; // 0x75C(0x4)
		float TurnRate; // 0x760(0x4)
		FName DisableHeadTrackingCurveName; // 0x764(0x4)
		FJunoRidingAnimationData RidingAnimationData; // 0x768(0x14)
		float Speed; // 0x77C(0x4)
		bool bPlayLandAdditive; // 0x780(0x1)
		bool bIsFloating; // 0x781(0x1)
		bool bIsSurfaceSwimming; // 0x782(0x1)
		bool bIsTurningInPlace; // 0x783(0x1)
		unsigned char UnknownData09_7[0xEC]; // 0x784(0xEC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCreatureAnimInstance");
			return ret;
		}

		void TurnInPlace_Started(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TurnInPlace_SignalAnimationEnded(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D53F70(relative to base address)
		void TurnInPlace_Setup(UAnimSequence* TurnAnimSequence); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D53B00(relative to base address)
		void TurnInPlace_Interrupted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TurnInPlace_Ended(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartInPlace_Started(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartInPlace_Setup(UAnimSequence* StartAnimSequence); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D538FC(relative to base address)
		bool CreatureIsMovingRight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D51DA0(relative to base address)
		bool CreatureIsMovingLeft(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D51D18(relative to base address)
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
		unsigned char UnknownData00_6[0x2]; // 0x87A(0x2) UNKNOWN PROPERTY
		float TargetDistance; // 0x87C(0x4)
		bool bTargetIsClose; // 0x880(0x1)
		bool bIsToppled; // 0x881(0x1)
		bool bIsLeaking; // 0x882(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x883(0x1) UNKNOWN PROPERTY
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
		unsigned char UnknownData00_3[0x30]; // 0x538(0x30) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x568(0x10)
		unsigned char UnknownData01_6[0x28]; // 0x578(0x28) UNKNOWN PROPERTY
		int32_t InventoryCapacity; // 0x5A0(0x4)
		FGuid InventoryHandleGuid; // 0x5A4(0x10)
		bool bIsPersistent; // 0x5B4(0x1)
		bool bWasSpawnedByLevelSaveRecord; // 0x5B5(0x1)
		unsigned char UnknownData02_7[0x2]; // 0x5B6(0x2) UNKNOWN PROPERTY

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
		TArray<FJunoInventoryHandle> InventoryHandles; // 0xA0(0x10)
		TArray<TWeakObjectPtr> InventoryInstances; // 0xB0(0x10)
		unsigned char UnknownData00_7[0x30]; // 0xC0(0x30) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x60]; // 0x348(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerInventoryComponent");
			return ret;
		}

		void TrySwappingReplacementItem(UFortItem* ItemToSwap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D89618(relative to base address)
		void PlayerAbilitySystemInitialized(UFortAbilitySystemComponent* FortAbilitySystemComponent, AFortPlayerPawn* AffectedPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D87ED0(relative to base address)
		void OnPlayerPawnPossessed(APawn* PossessedPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750D87CB0(relative to base address)
		void ClientOnItemReplaced(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF74E313DBC(relative to base address)
	};


	// Class JunoGameNative.JunoBuilderTool
	// Inherited from AFortWeapon -> AActor -> UObject
	// Size: 0x68 (0x1660 - 0x15F8)
	class AJunoBuilderTool : public AFortWeapon	
	{
	public:
		FMulticastInlineDelegate OnBuilderToolInteractionStarted; // 0x15F8(0x10)
		FMulticastInlineDelegate OnBuilderToolInteractionStopped; // 0x1608(0x10)
		UJunoInputMappingComponentData* InputMappingData; // 0x1618(0x8)
		UInputAction* UnEquipInputAction; // 0x1620(0x8)
		FGameplayTagContainer ActivatedTags; // 0x1628(0x20)
		TArray<UJunoBuilderToolInteractionBehavior*> InteractionBehaviors; // 0x1648(0x10)
		UJunoBuilderToolInteractionBehavior* ActiveInteractionBehavior; // 0x1658(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuilderTool");
			return ret;
		}

		void ServerStartInteraction(TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF750D891E0(relative to base address)
		void ServerClearInteraction(bool bExited); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF750D88810(relative to base address)
		void ReceiveInteractionStarted(UJunoBuilderToolInteractionBehavior* InteractionBehavior); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveInteractionEnded(UJunoBuilderToolInteractionBehavior* InteractionBehavior); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MulticastStartInteractionOnRemoteClients(UJunoBuilderToolInteractionBehavior* InteractionBehavior, TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults, Memory Exec: 0x7FF750D8795C(relative to base address)
		void MulticastClearInteractionOnRemoteClients(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74E486698(relative to base address)
		bool IsRunningOnOwningClient(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D878F0(relative to base address)
		bool IsEnabled(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750D878C8(relative to base address)
		FGuid GetSelectionGUID(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D8758C(relative to base address)
		TArray GetSelectedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D874C0(relative to base address)
		UJunoBuilderToolInteractionBehavior GetActiveInteractionBehavior(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D870B4(relative to base address)
		void ClientStopInteraction(bool bIsExiting); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF750ABB950(relative to base address)
		void ClientStartInteraction(UJunoBuilderToolInteractionBehavior* InteractionBehavior, TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // Flags: Final|Net|NetReliableNative|Event|Private|HasDefaults|NetClient, Memory Exec: 0x7FF750D86F10(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		int32_t Priority; // 0xE4(0x4)
		FDataTableRowHandle ConfigData; // 0xE8(0x10)
		FGameplayTagContainer ActivatedTags; // 0xF8(0x20)
		unsigned char UnknownData01_6[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
		UInputMappingContext* InputMappingContext; // 0x120(0x8)
		int32_t InputMappingPriority; // 0x128(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		UInputAction* TriggerInputAction; // 0x130(0x8)
		UInputAction* ExitInputAction; // 0x138(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x140(0x10) UNKNOWN PROPERTY
		UClass* StartInteractionAbility; // 0x150(0x8)
		UClass* EndInteractionAbility; // 0x158(0x8)
		UClass* FailAbility; // 0x160(0x8)
		UClass* ExitAbility; // 0x168(0x8)
		FJunoBuilderToolInteractionActorClassSet SupportedClasses; // 0x170(0xA0)
		TArray<FJunoBuilderToolSelectedActor> SelectedActors; // 0x210(0x10)
		FGuid SelectionGUID; // 0x220(0x10)
		TArray<FJunoBuilderToolTimedActors> ClientPredictedActors; // 0x230(0x10)
		TArray<FServerSpawnedActorPair> ServerSpawnedActors; // 0x240(0x10)
		unsigned char UnknownData04_7[0x10]; // 0x250(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuilderToolInteractionBehavior");
			return ret;
		}

		void ServerSpawnSelectedActors(FJunoBuilderToolSelectionSpawnParams SelectionSpawnParameters); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF750D89094(relative to base address)
		void ServerOnSpawnedActorProcessedByClient(FName StableName); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF750D88EC0(relative to base address)
		void ReceiveTriggerInteraction(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTickInteraction(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveStartInteractionOnServer(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveStartInteractionOnRemoteClient(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveStartInteractionOnClient(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveSpawnedActor(AActor* SpawnedActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveExitInteraction(bool bClearInteractionBehavior); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndInteraction(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveClearInteractionOnRemoteClient(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayGameplayAbility(UClass* AbilityClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750D87E3C(relative to base address)
		void OnRep_ServerSpawnedActors(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D87DF8(relative to base address)
		bool IsRunningOnOwningClient(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87914(relative to base address)
		bool IsActiveBehavior(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87864(relative to base address)
		FGuid GetSelectionGUID(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D875B4(relative to base address)
		TArray GetSelectedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87570(relative to base address)
		APlayerController GetPlayerController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D8749C(relative to base address)
		APawn GetInstigator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87230(relative to base address)
		AFortPlayerController GetFortPlayerController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D8714C(relative to base address)
		AJunoBuilderTool GetBuilderTool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D870CC(relative to base address)
		void ClientOnServerSpawnSelectedActorsFailed(TArray<FName> FailedNames); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF750D86E7C(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingActor
	// Inherited from AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x30 (0xCA8 - 0xC78)
	class AJunoBuildingActor : public AJunoBuildingProp	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xC78(0x18) UNKNOWN PROPERTY
		UJunoConnectivityComponent* Connectivity; // 0xC90(0x8)
		AJunoGuidedBuildingLandscapeVisualModifierActor* TerrainVisualModifierActor; // 0xC98(0x8)
		bool bCanRegenHealth : 1; // 0xCA0:0(0x1)
		bool bShouldPersist; // 0xCA1(0x1)
		bool bPreventDestroyingFoliageWhenPlaced; // 0xCA2(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xCA3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingActor");
			return ret;
		}

		void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, UActorComponent* TargetActorComponent); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750D8950C(relative to base address)
		void OnRep_bPreventDestroyingFoliageWhenPlaced(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750D87E0C(relative to base address)
		void OnPlacedInWorld(bool bFinalize, TArray<FJunoBuilderToolSupportActorComponentPair>& SupportCandidates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750D87BBC(relative to base address)
		void OnBuildingActorDetached(); // Flags: Native|Protected, Memory Exec: 0x7FF750D87BA4(relative to base address)
		void OnBuildingActorAttached(FGraphIslandHandle& IslandHandle); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF750D87B00(relative to base address)
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

		bool CanRemoveAssociatedItemFromInventory(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7484CB9B0(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingBehaviorBase
	// Inherited from UJunoBuilderToolInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x158 (0x3B8 - 0x260)
	class UJunoBuildingBehaviorBase : public UJunoBuilderToolInteractionBehavior	
	{
	public:
		UClass* PreviewerClass; // 0x260(0x8)
		FJunoBuildingPreviewParams DefaultPreviewParams; // 0x268(0x18)
		AJunoBuildingPreviewer* Previewer_Internal; // 0x280(0x8)
		unsigned char UnknownData00_6[0x20]; // 0x288(0x20) UNKNOWN PROPERTY
		EJunoBuildingBehaviorState BuildingState; // 0x2A8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2A9(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer BuildingStateTags; // 0x2B0(0x20)
		FMulticastInlineDelegate OnBuildingStateChanged; // 0x2D0(0x10)
		FMulticastInlineDelegate OnBuildingStateTagsChanged; // 0x2E0(0x10)
		FMulticastInlineDelegate OnEnterPreviewMode; // 0x2F0(0x10)
		FMulticastInlineDelegate OnExitPreviewMode; // 0x300(0x10)
		UJunoInputMappingComponentData* PreviewInputMappingData; // 0x310(0x8)
		UInputAction* BuildingPreviewModeCameraRotationAction; // 0x318(0x8)
		float LocationLerpAlpha; // 0x320(0x4)
		float RotationLerpAlpha; // 0x324(0x4)
		FMulticastInlineDelegate OnPositionInterpStart; // 0x328(0x10)
		FMulticastInlineDelegate OnPositionInterpEnd; // 0x338(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x348(0x8) UNKNOWN PROPERTY
		bool bIsCurrentlyInPreviewMode; // 0x350(0x1)
		EJunoBuildModeType CurrentBuildMode; // 0x351(0x1)
		unsigned char UnknownData03_6[0x1E]; // 0x352(0x1E) UNKNOWN PROPERTY
		FGameplayTagQuery SpatialInterfaceSelectionQuery; // 0x370(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingBehaviorBase");
			return ret;
		}

		void SetDisabled(bool bShouldBeDisabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750DCD550(relative to base address)
		void ServerUpdatePreview(FTransform NewSelectionToWorld, EJunoBuildingBehaviorState NewBuildingState); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF750DCD288(relative to base address)
		void ReceivePositionInterpStart(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePositionInterpEnd(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBuildingStateChanged(EJunoBuildingBehaviorState PreviousState, EJunoBuildingBehaviorState NewState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MulticastUpdatePreviewOnRemoteClients(FTransform NewSelectionToWorld, EJunoBuildingBehaviorState NewBuildingState); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults, Memory Exec: 0x7FF750DCD044(relative to base address)
		bool IsDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCCF98(relative to base address)
		void HandleBuildModeChanged(FJunoEvent_BuildingModeChanged& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750DCCEC8(relative to base address)
		FTransform GetTargetSelectionToWorld(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCCBF8(relative to base address)
		FTransform GetSelectionToWorld(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCCACC(relative to base address)
		FBox GetPreviewWorldBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCCA50(relative to base address)
		FBox GetPreviewLocalBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCCA08(relative to base address)
		AJunoBuildingPreviewer GetPreviewer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7494A9934(relative to base address)
		FJunoBuildingPreviewParams GetDefaultPreviewParams(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCC7C4(relative to base address)
		FGameplayTagContainer GetBuildingStateTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCC5D8(relative to base address)
		EJunoBuildingBehaviorState GetBuildingState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCC5C0(relative to base address)
		bool CanSelectedActorsBePlaced(TArray<FJunoBuilderToolSelectedActor>& InSelectedActors, FTransform& InSelectionToWorld, FGameplayTagContainer& OutBuildingStateTags); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF750DCC298(relative to base address)
		bool CanPlaceSelectedActors(FGameplayTagContainer& OutBuildingStateTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCC1BC(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingBehavior
	// Inherited from UJunoBuildingBehaviorBase -> UJunoBuilderToolInteractionBehavior -> UActorComponent -> UObject
	// Size: 0x658 (0xA10 - 0x3B8)
	class UJunoBuildingBehavior : public UJunoBuildingBehaviorBase	
	{
	public:
		UInputAction* RotateInputAction; // 0x3B8(0x8)
		UInputAction* NudgeInputAction; // 0x3C0(0x8)
		UInputAction* ToggleNudgeInputAction; // 0x3C8(0x8)
		UInputAction* AdjacencyInputAction; // 0x3D0(0x8)
		UInputAction* SnapToggleInputAction; // 0x3D8(0x8)
		double OffGridRotationStep; // 0x3E0(0x8)
		float MaxSelectionDistance; // 0x3E8(0x4)
		float MaxSelectionDistanceZ; // 0x3EC(0x4)
		FVector MaxConnectivityDistance; // 0x3F0(0x18)
		FJunoBuildingBehaviorGridLimits DefaultGridOffsetLimit; // 0x408(0x10)
		FVector PenetrationTolerance; // 0x418(0x18)
		FJunoBuildingBehaviorOverrides Overrides; // 0x430(0x260)
		unsigned char UnknownData00_6[0x2B0]; // 0x690(0x2B0) UNKNOWN PROPERTY
		bool bEnableAdjacency; // 0x940(0x1)
		bool bEnableSnapPlacement; // 0x941(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x942(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnToggleSnapping; // 0x948(0x10)
		FMulticastInlineDelegate OnSmoothingChanged; // 0x958(0x10)
		FMulticastInlineDelegate OnPlacementTypeChanged; // 0x968(0x10)
		unsigned char UnknownData02_6[0x20]; // 0x978(0x20) UNKNOWN PROPERTY
		FJunoBuildingBehaviorStateContext CachedBuildingStateContext; // 0x998(0x40)
		FMulticastInlineDelegate OnBuildingStateContextChanged; // 0x9D8(0x10)
		double LastTriggerRequestedTimestamp; // 0x9E8(0x8)
		double LastTriggerTimestamp; // 0x9F0(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x9F8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingBehavior");
			return ret;
		}

		void ToggleAdjacency(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF750D89604(relative to base address)
		bool ShouldRotateAroundGridOffset(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750D895E8(relative to base address)
		bool ShouldMinDistanceIncludeBounds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D895D0(relative to base address)
		void RotateSelection(double Delta); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF750D88154(relative to base address)
		void ReceiveSnappingEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveSnappingDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveRotateSelection(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePositionChangedGridCell(FVector& GridCellLocation); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveNudgeInputAction(bool bOffsetChanged); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivedFailedInteraction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSnapPlacementEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87938(relative to base address)
		bool IsAdjacencyEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D878B0(relative to base address)
		bool HasAnySnapEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750D87848(relative to base address)
		FVector GetWorldSpacePivotOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D877EC(relative to base address)
		FVector2D GetWorldSpaceGridOffsetLimits(FVector2D& MinOffset, FVector2D& MaxOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D876F4(relative to base address)
		FVector2D GetWorldSpaceGridOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D876A0(relative to base address)
		FHitResult GetTargetTraceResult(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D875F4(relative to base address)
		FJunoBuildingSnapContext GetSnapContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D875D0(relative to base address)
		FVector GetPivotOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87468(relative to base address)
		FVector GetPenetrationTolerance(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87440(relative to base address)
		float GetMinSelectionDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ED4C61C(relative to base address)
		float GetMaxSelectionDistanceZ(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87404(relative to base address)
		float GetMaxSelectionDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E22630C(relative to base address)
		FVector GetMaxConnectivityDistance(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D873DC(relative to base address)
		FJunoBuildingPlacementResult GetLastPlacementResult(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D8735C(relative to base address)
		FVector GetGridSnapOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D871D4(relative to base address)
		FVector GetGridSize(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D871AC(relative to base address)
		FJunoBuildingBehaviorGridLimits GetGridOffsetLimits(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87190(relative to base address)
		FIntPoint GetGridOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87170(relative to base address)
		FJunoBuildingConnectivityContext GetConnectivityContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D87128(relative to base address)
		FJunoBuildingBehaviorInteractionRow GetConfigData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D8710C(relative to base address)
		FJunoBuildingBehaviorStateContext GetBuildingStateContext(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750D870F0(relative to base address)
		void AddGridOffset(FIntPoint& OffsetDelta); // Flags: Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750D86D40(relative to base address)
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

		bool ValidateSupport(FJunoBuilderToolSupportCandidate& Candidate, FGameplayTagContainer& OutTags); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCDB10(relative to base address)
		void UpdateNoTargetPlacement(FTransform& NewSelectionToWorld, FTransform& NewUnsnappedSelectionToWorld, FTransform& NewBasis, FTransform& ActorToSelection, FJunoBuildingPlacementResult& PlacementResult, UJunoBuildingBehavior* Behavior); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF750DCD70C(relative to base address)
		bool ShouldUpdateNoTargetPlacement(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCD6E8(relative to base address)
		bool ShouldMinDistanceIncludeBounds(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74C68DD74(relative to base address)
		bool ShouldIgnoreOverlaps(UPrimitiveComponent* PrimComp, AActor* OverlappingActor); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCD620(relative to base address)
		bool ShouldBeGridAligned(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74E260A0C(relative to base address)
		FRotator GetRotationOffset(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7489C7574(relative to base address)
		FVector GetPivotOffset(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC914(relative to base address)
		FJunoBuilderToolInteractionActorClassSet GetOverlappableClasses(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC8B0(relative to base address)
		float GetMinDistance(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC888(relative to base address)
		FVector GetGridSnapOffset(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC850(relative to base address)
		FVector GetGridSize(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750AA4ACC(relative to base address)
		FJunoBuildingBehaviorGridLimits GetGridOffsetLimits(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC820(relative to base address)
		TArray GetFloatingValidationDirections(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC7E0(relative to base address)
		FTransform GetCoordinateBasis(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC650(relative to base address)
		UClass GetCameraMode(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC61C(relative to base address)
		bool CanSupport(UClass* ActorClass); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC4BC(relative to base address)
		bool CanPlaceSelectedActor(UJunoBuildingBehavior* Behavior, FTransform& ToWorld, FGameplayTagContainer& OutBuildingStateTags); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCC03C(relative to base address)
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

		bool IsPathInNewJunoThemePluginArchitecture(FString Path); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750DCCFB4(relative to base address)
		FVector GetUnitGridSize(); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750DCCE88(relative to base address)
		FTransform GetTargetTransform(FJunoBuildingPlacementResult& PlacementResult); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750DCCD94(relative to base address)
		FHitResult GetTargetTraceResult(FJunoBuildingPlacementResult& PlacementResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750DCCC54(relative to base address)
		TArray GetSupportCandidates(FJunoBuilderToolSelectionSpawnParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750DCCB1C(relative to base address)
		EJunoBuildingPlacementType GetPlacementType(FJunoBuildingPlacementResult& PlacementResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750DCC94C(relative to base address)
		FTransform GetCoordinateBasis(FJunoBuildingPlacementResult& PlacementResult); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750DCC6D0(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingGameplayActor
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xB0 (0xA38 - 0x988)
	class AJunoBuildingGameplayActor : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData00_3[0x88]; // 0x988(0x88) UNKNOWN PROPERTY
		UJunoGeometryCollectionAssemblerComponent* GeometryCollectionAssemblerComponent; // 0xA10(0x8)
		UItemDefinitionBase* AssociatedItem; // 0xA18(0x8)
		bool bShouldPersist; // 0xA20(0x1)
		unsigned char UnknownData01_7[0x17]; // 0xA21(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingGameplayActor");
			return ret;
		}

		void SetAssociatedItem(UItemDefinitionBase* Item); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF750DCD4CC(relative to base address)
		bool HasBeenMigrated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCCF64(relative to base address)
		UItemDefinitionBase GetAssociatedItem(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCC568(relative to base address)
		bool BlueprintCanDropResourceWithTagOnDeath(FGameplayTag ResourceTag); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF750DCBF18(relative to base address)
		bool BlueprintCanDropResourceOnDeath(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74E8E4370(relative to base address)
		bool BlueprintCanDropItemOnDestroy(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74E8E4348(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingSnapEditorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoBuildingSnapEditorComponent : public UActorComponent	
	{
	public:
		TArray<FJunoBuildingSnapEntry> SnapEntries; // 0xA0(0x10)
		bool bShowUnselectedTargetingAreas; // 0xB0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

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
		TArray<FJunoBuildingSnapEntryBase> SnapEntries; // 0x240(0x10)

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

		void OnBuildingHandleOutOfHealth(FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser, FGameplayTagContainer& InTags); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF750E07EF0(relative to base address)
		void OnBuildingHandleDamage(AActor* DamageCauser); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74E2463B0(relative to base address)
	};


	// Class JunoGameNative.JunoGuidedBuildingActor
	// Inherited from AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x5F8 (0x1270 - 0xC78)
	class AJunoGuidedBuildingActor : public AJunoBuildingProp	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xC78(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCurrentStageUpdateDelegate; // 0xC98(0x10)
		FMulticastInlineDelegate OnStageUpdateDelegate; // 0xCA8(0x10)
		FMulticastInlineDelegate OnStageCompleteDelegate; // 0xCB8(0x10)
		FMulticastInlineDelegate OnSectionCompleteDelegate; // 0xCC8(0x10)
		FMulticastInlineDelegate OnSetCompleteDelegate; // 0xCD8(0x10)
		FMulticastInlineDelegate OnSetIncompleteDelegate; // 0xCE8(0x10)
		FMulticastInlineDelegate OnSetUnfinishedDelegate; // 0xCF8(0x10)
		FMulticastInlineDelegate OnCurrentStageChange; // 0xD08(0x10)
		FMulticastInlineDelegate OnSnapsUpdatedDelegate; // 0xD18(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xD28(0x8) UNKNOWN PROPERTY
		FName GuidedBuildingRecipe; // 0xD30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xD34(0x4) UNKNOWN PROPERTY
		TArray<FJunoGuidedBuildingData> DataArray; // 0xD38(0x10)
		FJunoGuidedBuildingStateArray StateArray; // 0xD48(0x120)
		FJunoStageKey CurrentStage; // 0xE68(0x8)
		FJunoGuidedBuildingSetCompleteState SetCompleteState; // 0xE70(0x10)
		FDateTime TimeStarted; // 0xE80(0x8)
		FUniqueNetIdRepl OwningPlayerID; // 0xE88(0x30)
		FJunoGuidedBuildingSetData SetData; // 0xEB8(0x90)
		AFortPlayerController* LocalRegisteredController; // 0xF48(0x8)
		AJunoGuidedBuildingLandscapeVisualModifierActor* TerrainVisualModifierActor; // 0xF50(0x8)
		unsigned char UnknownData03_6[0x68]; // 0xF58(0x68) UNKNOWN PROPERTY
		FJunoGuidedBuildingRegisteredPlayerArray RegisteredPlayers; // 0xFC0(0x148)
		TArray<FAutoCompleteBlockedIndex> BlockedAutoCompleteIndexes; // 0x1108(0x10)
		TWeakObjectPtr<APawn*> AutoCompleteInstigatingPawn; // 0x1118(0x8)
		UClass* OptionalCameraMode; // 0x1120(0x8)
		FGuid BuildId; // 0x1128(0x10)
		TArray<FAutoCompleteData> PendingAutoCompleteJobs; // 0x1138(0x10)
		TArray<FAutoCompleteBatch> CurrentAutoCompleteBatches; // 0x1148(0x10)
		unsigned char UnknownData04_6[0x38]; // 0x1158(0x38) UNKNOWN PROPERTY
		bool bSkipFoundation; // 0x1190(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x1191(0x3) UNKNOWN PROPERTY
		FJunoStageKey AutoCompleteStageKey; // 0x1194(0x8)
		bool bInstantBuildAutoComplete; // 0x119C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x119D(0x3) UNKNOWN PROPERTY
		UClass* DisplayActorClass; // 0x11A0(0x8)
		AJunoGuidedBuildingDisplayActor* DisplayActor; // 0x11A8(0x8)
		bool bEnablePreciseCollision; // 0x11B0(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x11B1(0x7) UNKNOWN PROPERTY
		TArray<UClass*> BehaviorClasses; // 0x11B8(0x10)
		unsigned char UnknownData08_6[0x90]; // 0x11C8(0x90) UNKNOWN PROPERTY
		UJunoConnectivityComponent* ConnectivityComponent; // 0x1258(0x8)
		unsigned char UnknownData09_7[0x10]; // 0x1260(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingActor");
			return ret;
		}

		void UpdateBlueprintColor(FJunoGuidedBuildingBrushState& BrushState); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowSparkleEffect(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupComponent(UPrimitiveComponent* PrimComp); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74E910C04(relative to base address)
		void SetToAutoCompleteToStage(APawn* InInstigator, FJunoStageKey& InAutoCompleteToStage); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E09048(relative to base address)
		void SetToAutoCompleteCurrentStage(APawn* InInstigator); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E08FC0(relative to base address)
		void SetToAutoComplete(APawn* InInstigator); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E08F40(relative to base address)
		void SetTerrainVisualModifierOptions(EJunoLandscapeVisualModifierType InModifierType, FTransform& InTransform); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750E08DD4(relative to base address)
		void OnRep_SetCompleteState(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E088D0(relative to base address)
		void OnRep_RegisteredPlayers(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E088BC(relative to base address)
		void OnRep_CurrentStage(FJunoStageKey OldKeyVal); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E08798(relative to base address)
		void OnRep_BlockedAutoCompleteIndexes(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E086C8(relative to base address)
		void OnGhostBrushesVisible(bool bIsFocused, bool bCanBlendVisibility); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGhostBrushesHidden(bool bCanBlendVisibility); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFilledPieceDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF750E081E8(relative to base address)
		void OnFilledPieceDestroyed(AActor* Actor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E08168(relative to base address)
		void OnBlockedAutoCompleteIndexes(TArray<FAutoCompleteBlockedIndex>& BlockedIndexes); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSetComplete(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07D64(relative to base address)
		bool IsRecipeInStage(FJunoStageKey& InStageKey, FName& Recipe); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07C10(relative to base address)
		bool IsRecipeInCurrentStage(FName& Recipe); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07B6C(relative to base address)
		bool IsOwningPlayerController(APlayerController* Controller); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07ADC(relative to base address)
		bool IsOwnedByAnyPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07AB0(relative to base address)
		void HideSparkleEffect(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FGuidedBuildingUpdate GetStageUpdate(FJunoStageKey& InKey); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07524(relative to base address)
		FJunoGuidedBuildingSetCompleteState GetSetCompleteState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07508(relative to base address)
		FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipeInCurrentStage(FName& Recipe); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07460(relative to base address)
		FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipe(FJunoStageKey& InStageKey, FName& Recipe); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07360(relative to base address)
		bool GetPartsInStage(FJunoStageKey& InStageKey, TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07154(relative to base address)
		bool GetPartsInCurrentStage(TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E070A8(relative to base address)
		FJunoGuidedBuildRemainingPartsInfo GetMissingPartsForRecipe(FName& Recipe); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E06DB4(relative to base address)
		void GetMissingParts(TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E06D18(relative to base address)
		FGuidedBuildingUpdate GetLatestUpdate(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E06CD4(relative to base address)
		EJunoGuidedBuildingState GetEntryState(int32_t BuildingDataIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E06C08(relative to base address)
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

		void ShowProgressUpTo(FJunoStageKey& InStageKey); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E0650C(relative to base address)
		void ShowAllStages(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetStageHidden(FJunoStageKey StageKey, bool bHidden); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E08C24(relative to base address)
		void SetActorToDestroyAtStage(AActor* Actor, FGameplayTag& StageTag, bool bDestroy); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E08988(relative to base address)
		void SetActorToAutoComplete(AActor* Actor, bool bAutoComplete); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E248000(relative to base address)
		void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E07E2C(relative to base address)
		void MoveActorToNewStage(AActor* Actor, FJunoStageKey& NewStage); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E07D7C(relative to base address)
		void IsolateStage(FJunoStageKey& InStageKey); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E0650C(relative to base address)
		void HideAllStages(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		FJunoStageKey GetPreviousStage(FJunoStageKey StageKey); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750E06E5C(relative to base address)
		FJunoStageKey GetNextStage(FJunoStageKey StageKey); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750E06E5C(relative to base address)
		AJunoGuidedBuildingSettings GetJunoGuidedBuildingWorldSettings(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C6345FC(relative to base address)
		TArray GetAllStageKeys(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750E06BD8(relative to base address)
		void CheckForGuidedBuildingOverlap(AActor* ActorToCheck); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E06690(relative to base address)
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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<AJunoGuidedBuildingActor*> ParentBuilding; // 0xA8(0x8)
		FText InteractionText; // 0xB0(0x10)
		float InteractRatingAdjustment; // 0xC0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingInteractionComponent");
			return ret;
		}

		FText GetInteractionText(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF750E06C94(relative to base address)
	};


	// Class JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor
	// Inherited from AActor -> UObject
	// Size: 0x48 (0x2D8 - 0x290)
	class AJunoGuidedBuildingLandscapeVisualModifierActor : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UJunoLandscapeVisualModifierComponent* VisualModifier; // 0x298(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x2A0(0x4) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x2A4(0x10)
		unsigned char UnknownData02_7[0x24]; // 0x2B4(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor");
			return ret;
		}

		void SetupVisualModifier(EJunoLandscapeVisualModifierType InModifierType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E09120(relative to base address)
		void RemoveOwningPartRef(AActor* InOwningPart); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E0890C(relative to base address)
		void AddOwningPartRef(AActor* InOwningPart); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E06490(relative to base address)
	};


	// Class JunoGameNative.JunoGuidedBuildingSettings
	// Inherited from AActor -> UObject
	// Size: 0x378 (0x608 - 0x290)
	class AJunoGuidedBuildingSettings : public AActor	
	{
	public:
		float ZLevelSize; // 0x290(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		TArray<FGameplayTag> SortRankTags; // 0x298(0x10)
		TArray<UClass*> BaseActorClasses; // 0x2A8(0x10)
		TArray<UClass*> AllowedInterfaces; // 0x2B8(0x10)
		TArray<UClass*> ExcludedBaseActorClasses; // 0x2C8(0x10)
		FJunoGuidedBuildingSetEditorData GeneratedData; // 0x2D8(0xB0)
		TArray<FString> DefaultPluginsToActivate; // 0x388(0x10)
		FName PrimaryPlaylist; // 0x398(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x39C(0x4) UNKNOWN PROPERTY
		TMap<UClass*, FName> ClassToRecipeMap; // 0x3A0(0x50)
		FName CraftingFormulaRegistryType; // 0x3F0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3F4(0x4) UNKNOWN PROPERTY
		FGuidedBuildingCachedEditorData CurrentState; // 0x3F8(0x140)
		TArray<FJunoBuildingEditorActorEntry> ActorList; // 0x538(0x10)
		TArray<FGameplayTag> PassThroughTags; // 0x548(0x10)
		bool bUpdateRetainedData; // 0x558(0x1)
		bool bCreateDisplayActor; // 0x559(0x1)
		bool bCreateDisplayActorInMinimalPlugin; // 0x55A(0x1)
		bool bEnablePreciseCollision; // 0x55B(0x1)
		bool bCreateCustomMesh; // 0x55C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		UStaticMesh* DefaultMesh; // 0x560(0x8)
		bool bConvexHullsWithSimplerCollisionShapes; // 0x568(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x569(0x3) UNKNOWN PROPERTY
		FGeometryScriptConvexHullApproximationOptions ConvexHullApproximationOptions; // 0x56C(0xC)
		bool bMergeCollision; // 0x578(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		FGeometryScriptMergeSimpleCollisionOptions MergeOptions; // 0x580(0x70)
		bool bSimplifyHull; // 0x5F0(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x5F1(0x3) UNKNOWN PROPERTY
		FGeometryScriptConvexHullSimplificationOptions HullSimplificationOptions; // 0x5F4(0x10)
		unsigned char UnknownData07_7[0x4]; // 0x604(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGuidedBuildingSettings");
			return ret;
		}

		void StartGeneratingGuidedBuildingAssets(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E091A0(relative to base address)
		void SetActorToDestroyAtStage(AActor* Actor, FGameplayTag& StageTag, bool bDestroy); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E08988(relative to base address)
		void SetActorToAutoComplete(AActor* Actor, bool bAutoComplete); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E248000(relative to base address)
		void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E07E2C(relative to base address)
		void MoveActorToNewStage(AActor* Actor, FJunoStageKey& NewStage); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E07D7C(relative to base address)
		TArray GetAllStageKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E06BBC(relative to base address)
		FName GetActorIdentifier(AActor* ActorPtr); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E06B38(relative to base address)
		void GenerateNewStageData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E06B04(relative to base address)
		void AddStage(FJunoStageKey& NewStage); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E0650C(relative to base address)
	};


	// Class JunoGameNative.JunoISMPoolRenderer
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UJunoISMPoolRenderer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UGeometryCollectionISMPoolComponent* CachedISMPoolComponent; // 0x38(0x8)
		UGeometryCollectionISMPoolComponent* LocalISMPoolComponent; // 0x40(0x8)
		UGeometryCollectionISMPoolComponent* OverrideISMPoolComponent; // 0x48(0x8)
		unsigned char UnknownData01_7[0x150]; // 0x50(0x150) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x2]; // 0x4A(0x2) UNKNOWN PROPERTY
		int32_t MergedMeshCellSize; // 0x4C(0x4)
		bool bCommonPartsEnable; // 0x50(0x1)
		bool bCommonPartsEnableShadows; // 0x51(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x52(0x2) UNKNOWN PROPERTY
		int32_t CommonPartsCullDistanceStart; // 0x54(0x4)
		int32_t CommonPartsCullDistanceEnd; // 0x58(0x4)
		int32_t CommonPartsCullDistanceBoost; // 0x5C(0x4)
		bool bInstancesEnable; // 0x60(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x61(0x3) UNKNOWN PROPERTY
		int32_t InstancesMinLod; // 0x64(0x4)
		float InstancesLodScale; // 0x68(0x4)
		int32_t InstancesCullDistance; // 0x6C(0x4)
		bool bInstancesEnableShadows; // 0x70(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		int32_t InstancesPreallocateComponents; // 0x74(0x4)
		bool bInstancesAllowRemove; // 0x78(0x1)
		unsigned char UnknownData04_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

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
		TMap<TWeakObjectPtr, FJunoCommonPartsSettings> Mapping; // 0x30(0x50)

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
		unsigned char UnknownData00_3[0x18]; // 0x220(0x18) UNKNOWN PROPERTY
		UStaticMeshComponent* DirtPlane; // 0x238(0x8)
		EJunoLandscapeVisualModifierType VisualModifierType; // 0x240(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x241(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoLandscapeVisualModifierComponent");
			return ret;
		}

		void OnRep_LandscapeModifierData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E088A8(relative to base address)
	};


	// Class JunoGameNative.JunoPhysicsToySpawnerActor
	// Inherited from AJunoBuildingActor -> AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0xCC0 - 0xCA8)
	class AJunoPhysicsToySpawnerActor : public AJunoBuildingActor	
	{
	public:
		bool bUseOffsetOrientation : 1; // 0xCA8:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0xCA9(0x7) UNKNOWN PROPERTY
		TArray<EJunoContactDirection> FloatingValidationDirections; // 0xCB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsToySpawnerActor");
			return ret;
		}

		UClass GetToyClass(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoGameNative.JunoPickupComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoPickupComponent : public UGameFrameworkComponent	
	{
	public:
		FDataTableRowHandle CraftingSourceTable; // 0xA0(0x10)
		UDataTable* ResourceDataTable; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPickupComponent");
			return ret;
		}

		void PickupBuildingctor(AFortPlayerController* FPC); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
	};


	// Class JunoGameNative.JunoResourceComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UJunoResourceComponent : public UGameFrameworkComponent	
	{
	public:
		UDataTable* BuildingTagDataTable; // 0xA0(0x8)
		UDataTable* ResourceDataTable; // 0xA8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoResourceComponent");
			return ret;
		}

		void HandleBuildingDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF750E075E8(relative to base address)
	};


	// Class JunoGameNative.JunoStorageChest
	// Inherited from AJunoBuildingProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x258 (0xED0 - 0xC78)
	class AJunoStorageChest : public AJunoBuildingProp	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xC78(0x10) UNKNOWN PROPERTY
		UGeometryCollectionComponent* GeometryCollectionComponent; // 0xC88(0x8)
		UJunoInventoryComponent* ChestInventoryComponent; // 0xC90(0x8)
		UJunoCampMembershipActorComponent* CampMembershipComponent; // 0xC98(0x8)
		bool bTakeAllItemsOnInteract; // 0xCA0(0x1)
		bool bDestroyOnInteract; // 0xCA1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xCA2(0x6) UNKNOWN PROPERTY
		FVector GridSizeOverride; // 0xCA8(0x18)
		FTransform BuildingPivotOffset; // 0xCC0(0x60)
		FVector BuildingGridSnapOffset; // 0xD20(0x18)
		FJunoBuildingBehaviorGridLimits GridOffsetLimits; // 0xD38(0x10)
		FJunoBuilderToolInteractionActorClassSet OverlappableClasses; // 0xD48(0xA0)
		TMap<FName, UClass*> PreviewComponentTemplates; // 0xDE8(0x50)
		FUniqueNetIdRepl OwnerPlayerId; // 0xE38(0x30)
		FName BaseLootTierGroup; // 0xE68(0x4)
		float DefaultInteractTime; // 0xE6C(0x4)
		float PlayerPlacedInteractTime; // 0xE70(0x4)
		float SearchedInteractTime; // 0xE74(0x4)
		bool bUsePlayerPlacedInteractionTime; // 0xE78(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xE79(0x7) UNKNOWN PROPERTY
		UStaticMesh* SearchedMesh; // 0xE80(0x8)
		float LootTossSpeed; // 0xE88(0x4)
		float LootTossAngle; // 0xE8C(0x4)
		bool bChestSearched; // 0xE90(0x1)
		bool bChestLooted; // 0xE91(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xE92(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> LastInteractor; // 0xE94(0x8)
		FName RuntimeLootTierGroup; // 0xE9C(0x4)
		FJunoChestTransactionTelemetry ChestTransactionTelemetry; // 0xEA0(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoStorageChest");
			return ret;
		}

		void UpdateVisibilityOfLightBeamDeathChest(bool IsVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ChestSearched(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E08774(relative to base address)
		void OnRep_ChestLooted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E08730(relative to base address)
		void OnPersistentPlayspaceDataLoadEnd(AJunoPersistentPlayspace* PersistentPlayspace, bool bSuccess); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E08600(relative to base address)
		void OnInventoryAcquired(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E085EC(relative to base address)
		bool IsChestAlreadySearched(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07A98(relative to base address)
		FUniqueNetIdRepl GetOwningPlayerID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E06F94(relative to base address)
		bool CanInteractWithChest(AFortPawn* FortPawn); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF750E065FC(relative to base address)
		void BlueprintOnChestLooted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FName BlueprintGetLootTierGroup(FJunoBiomeInfoQueryResult BiomeInfo, FString TilePrefix); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintCanShowInventoryUI(FInteractionType& InteractType); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF750E0657C(relative to base address)
		bool BlueprintAllowSpawnLoot(FInteractionType& InteractType); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF750E0657C(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingPreviewComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoBuildingPreviewComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPreviewComponent");
			return ret;
		}

		void ReceiveSet(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePlacementStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveCreated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveCleared(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07D00(relative to base address)
		UClass GetSourceActorClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750911FA8(relative to base address)
		AJunoBuildingPreviewer GetPreviewer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E0733C(relative to base address)
		FJunoBuildingSelectionPreview GetOwningPreviewRef(bool& bSuccess); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E06FF4(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingPreviewer
	// Inherited from AActor -> UObject
	// Size: 0x160 (0x3F0 - 0x290)
	class AJunoBuildingPreviewer : public AActor	
	{
	public:
		TWeakObjectPtr<UJunoBuildingBehaviorBase*> OwningBehavior; // 0x290(0x8)
		bool bEnabled; // 0x298(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		TMap<FGuid, FJunoBuildingSelectionPreview> PreviewPool; // 0x2A0(0x50)
		TArray<FGuid> MostRecentlyUpdated; // 0x2F0(0x10)
		FGuid CurrentlySetPreviewGUID; // 0x300(0x10)
		bool bHasSetPreview; // 0x310(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x311(0xF) UNKNOWN PROPERTY
		FJunoBuildingPlacementPreview PlacementPreview; // 0x320(0xC0)
		unsigned char UnknownData02_7[0x10]; // 0x3E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildingPreviewer");
			return ret;
		}

		void SetPreviewVisibility(bool bVisible); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E08B4C(relative to base address)
		bool SetPreview(FGuid& Guid); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750E08AB0(relative to base address)
		void ReceiveUpdateSnapEntryPreviews(TArray<FJunoBuildingSnapEntryPreview>& Previews); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePreviewSet(FJunoBuildingSelectionPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePreviewCreated(FJunoBuildingSelectionPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePreviewCleared(FJunoBuildingSelectionPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePlacementStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePlacementPreviewInitialized(FJunoBuildingPlacementPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceivePlacementPreviewHidden(FJunoBuildingPlacementPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDestroyPreview(FJunoBuildingSelectionPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDestroyPlacementPreview(FJunoBuildingPlacementPreview& Preview); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveClearSnapEntryPreviews(TArray<FJunoBuildingSnapEntryPreview>& Previews); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyPlacementStarted(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E07EDC(relative to base address)
		bool IsPreviewerEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C7B0534(relative to base address)
		void InitializePlacementPreview(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E07A84(relative to base address)
		void HidePlacementPreview(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E07A70(relative to base address)
		bool HasSetPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07A4C(relative to base address)
		FJunoBuildingSelectionPreview GetPreviewRef(bool& bSuccess); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E0727C(relative to base address)
		FJunoBuildingPlacementPreview GetPlacementPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E07260(relative to base address)
		UJunoBuildingBehaviorBase GetOwningBuildingBehavior(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E06F6C(relative to base address)
		FJunoBuildingSelectionPreview FindPreviewRef(FGuid& Guid, bool& bSuccess); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E069F4(relative to base address)
		void Enable(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E069E0(relative to base address)
		void Disable(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E069CC(relative to base address)
		void DestroyPreview(FGuid Guid); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750E068AC(relative to base address)
		void DestroyPlacementPreview(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E06898(relative to base address)
		bool CreatePreview(TArray<FJunoBuilderToolSelectedActor>& SelectedActors, FGuid& Guid, FJunoBuildingPreviewParams& Params); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750E0671C(relative to base address)
		void ClearPreview(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E06708(relative to base address)
	};


	// Class JunoGameNative.JunoBuildingPreviewerSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UJunoBuildingPreviewerSubsystem : public UTickableWorldSubsystem	
	{
	public:
		TArray<FJunoBuildingPreviewerWorkingDataAsync> AsyncPreviewsStack; // 0x40(0x10)

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

		TMap GetPreviewComponentTemplates(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750E3A010(relative to base address)
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
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		TArray<UDataTable*> LootTierTables; // 0xB0(0x10)
		TArray<UDataTable*> LootPackageTables; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_Loot");
			return ret;
		}

		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E3B89C(relative to base address)
	};


	// Class JunoGameNative.JunoBuildInstructionsItemDefinition
	// Inherited from UFortWorldItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x60 (0x108 - 0xA8)
	class UJunoBuildInstructionsItemDefinition : public UFortWorldItemDefinition	
	{
	public:
		bool bGiveResourcesOnDestroy : 1; // 0xA8:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		FName SelfCraftingFormulaName; // 0xAC(0x4)
		TArray<FName> PrerequisiteCraftingFormulaNames; // 0xB0(0x10)
		TWeakObjectPtr<UClass*> ActorClassToBuild; // 0xC0(0x20)
		UFortPlaysetPropItemDefinition* PlaysetPropToBuild; // 0xE0(0x8)
		FText SizeDescription; // 0xE8(0x10)
		FText SetDescription; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoBuildInstructionsItemDefinition");
			return ret;
		}

		bool ShouldGiveResourcesOnDestroy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E3C458(relative to base address)
		FText GetSizeDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E3A0CC(relative to base address)
		FText GetSetDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E3A0B0(relative to base address)
		FName GetSelfCraftingFormulaName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE60(relative to base address)
		TArray GetPrerequisiteCraftingFormulaNames(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E39FF4(relative to base address)
		TWeakObjectPtr GetActorClassToBuild(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E39EA0(relative to base address)
	};


	// Class JunoGameNative.JunoControllerComponent_CraftingNetworkEvents
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UJunoControllerComponent_CraftingNetworkEvents : public UFortControllerComponent	
	{
	public:
		TArray<FActorUpgradeInfo> ActorsToUpgrade; // 0xA8(0x10)
		TWeakObjectPtr<AActor*> LastUpgradedActor; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents");
			return ret;
		}

		void ServerSetAutoPassiveCraftingFormula(AActor* PassiveCraftingObject, FName FormulaName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF750E3C36C(relative to base address)
		void ServerHandleCraftingBGAContributor(AActor* CraftingObject); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF750E3C2CC(relative to base address)
		void ServerEnableAutoPassiveCrafting(AActor* PassiveCraftingObject); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF750E3C22C(relative to base address)
		void ServerDisableAutoPassiveCrafting(AActor* PassiveCraftingObject); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF750E3C18C(relative to base address)
		void ServerAttemptCraftingUpgrage(AActor* ActorToUpgrade, FName RecipeName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF750E3C0A0(relative to base address)
		void OnRep_LastUpgradedActor(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E3BCDC(relative to base address)
		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750E3ABD0(relative to base address)
		void OnCraftingChangedState(FCraftingObjectStateChangedEvent& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750E3AB34(relative to base address)
	};


	// Class JunoGameNative.JunoCraftingObjectBGA
	// Inherited from ACraftingObjectBGA -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x250 (0xC40 - 0x9F0)
	class AJunoCraftingObjectBGA : public ACraftingObjectBGA	
	{
	public:
		unsigned char UnknownData00_3[0x98]; // 0x9F0(0x98) UNKNOWN PROPERTY
		UJunoGeometryCollectionAssemblerComponent* GeometryCollectionAssemblerComponent; // 0xA88(0x8)
		FVector GridSizeOverride; // 0xA90(0x18)
		unsigned char UnknownData01_6[0x8]; // 0xAA8(0x8) UNKNOWN PROPERTY
		FTransform BuildingPivotOffset; // 0xAB0(0x60)
		FVector BuildingGridSnapOffset; // 0xB10(0x18)
		FJunoBuildingBehaviorGridLimits GridOffsetLimits; // 0xB28(0x10)
		FJunoBuilderToolInteractionActorClassSet OverlappableClasses; // 0xB38(0xA0)
		UItemDefinitionBase* AssociatedItem; // 0xBD8(0x8)
		TMap<FName, UClass*> PreviewComponentTemplates; // 0xBE0(0x50)
		FName UpgradeRecipe; // 0xC30(0x4)
		bool bAutoTakeCraftingInventoryOnServerInteract; // 0xC34(0x1)
		bool bShouldPersist; // 0xC35(0x1)
		bool bCloseMenuWhenOutOfInteractionRange; // 0xC36(0x1)
		unsigned char UnknownData02_6[0x1]; // 0xC37(0x1) UNKNOWN PROPERTY
		float InteractionRangeSphereRadius; // 0xC38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCraftingObjectBGA");
			return ret;
		}

		void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E3A0E8(relative to base address)
		UItemDefinitionBase GetAssociatedItem(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E39EC8(relative to base address)
	};


	// Class JunoGameNative.JunoGameStateComponent_Crafting
	// Inherited from UFortGameStateComponent_Crafting -> UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x288 (0x4D8 - 0x250)
	class UJunoGameStateComponent_Crafting : public UFortGameStateComponent_Crafting	
	{
	public:
		uint32_t AllRecipeNamesHash; // 0x250(0x4)
		unsigned char UnknownData00_7[0x284]; // 0x254(0x284) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoGameStateComponent_Crafting");
			return ret;
		}

		void OnRep_AllRecipeNamesHash(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E3BB70(relative to base address)
		void HandleLootTablesLoaded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74E94B630(relative to base address)
	};


	// Class JunoGameNative.JunoRecipeBundleItemDefinition
	// Inherited from UFortWorldItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UJunoRecipeBundleItemDefinition : public UFortWorldItemDefinition	
	{
	public:
		TArray<FDataTableRowHandle> CraftingFormulas; // 0xA8(0x10)

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

		void StopAttachment(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF748F3297C(relative to base address)
		void StartAttachmentToActor(AActor* Actor); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF750E3C49C(relative to base address)
		void OnToyStopTrigger(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74D099444(relative to base address)
		void OnToyStartTrigger(bool bIsControlled); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF750E3BF00(relative to base address)
		void EnablePhysics(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF749263428(relative to base address)
		void DisablePhysics(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF748D7CC28(relative to base address)
		void DestroyToy(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF748EABA54(relative to base address)
	};


	// Class JunoGameNative.JunoAnimGeometryCollectionComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UJunoAnimGeometryCollectionComponent : public UGameFrameworkComponent	
	{
	public:
		FComponentReference GeometryCollectionReference; // 0xA0(0x28)
		FComponentReference SkeletalMeshReference; // 0xC8(0x28)
		TArray<FJunoAnimGcMappingEntry> Mappings; // 0xF0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x100(0x18) UNKNOWN PROPERTY

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
		AJunoPersistentPlayspace* TargetPlayspace; // 0xB0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClientAtomicReplacementComponent");
			return ret;
		}

		void OnRep_PlayspsaceRenameRepData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E3BD50(relative to base address)
		void OnRep_Guid(FGuid OldGuid); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF750E3BB98(relative to base address)
		void OnOwnerGuidChanged(AActor* Owner, FGuid InGUID); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF750E3AD24(relative to base address)
	};


	// Class JunoGameNative.JunoClientAtomicReplacementWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UJunoClientAtomicReplacementWorldSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0xF8]; // 0x330(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoClusterUnionActor");
			return ret;
		}

		void OnComponentRemovedFromClusterUnion(UPrimitiveComponent* Component, TArray<FClusterUnionBoneData>& RemovedBonesData); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750E3A7D4(relative to base address)
		void OnComponentAddedToClusterUnion(UPrimitiveComponent* Component, TArray<FClusterUnionBoneData>& BonesData, TArray<FClusterUnionBoneData>& RemovedBoneIDs, bool bIsNew); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750E3A3D4(relative to base address)
	};


	// Class JunoGameNative.JunoConnectivityComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x128 (0x1C8 - 0xA0)
	class UJunoConnectivityComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyAddedIntoClusterUnion; // 0xA8(0x10)
		FMulticastInlineDelegate NotifyRemovedFromClusterUnion; // 0xB8(0x10)
		unsigned char UnknownData01_6[0x18]; // 0xC8(0x18) UNKNOWN PROPERTY
		float ContactDistance; // 0xE0(0x4)
		bool bIsInGraph; // 0xE4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xE5(0x3) UNKNOWN PROPERTY
		TArray<FComponentReference> GeometryCollectionsToIgnoreBreaksForConnectivity; // 0xE8(0x10)
		TArray<FComponentReference> RootDoorComponentReferences; // 0xF8(0x10)
		TArray<TWeakObjectPtr> DoorComponents; // 0x108(0x10)
		bool bAreDoorsEjected; // 0x118(0x1)
		bool bAreDoorsEjectedInternal; // 0x119(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x11A(0x6) UNKNOWN PROPERTY
		FGraphVertexHandle GraphHandle; // 0x120(0x28)
		bool bRootPlayspaceInitialized; // 0x148(0x1)
		bool bIsDebris; // 0x149(0x1)
		bool bHasBeenSaved; // 0x14A(0x1)
		EJunoAutomaticConnectionMethod AutomaticConnectionMethod; // 0x14B(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		TArray<EJunoContactDirection> CustomConnectionDirections; // 0x150(0x10)
		bool bCanBeConnectedTo; // 0x160(0x1)
		bool bMustConnectToDynamic; // 0x161(0x1)
		bool bForceIndependentlySupported; // 0x162(0x1)
		bool bForceWorldSupportWhenPotentialConnectionsAreNotFound; // 0x163(0x1)
		bool bAddToConnectivityGraphOnBeginPlay; // 0x164(0x1)
		bool bCanBeWorldSupported; // 0x165(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x166(0x2) UNKNOWN PROPERTY
		TArray<UClass*> ClassesThatAreAlwaysValidForWorldSupport; // 0x168(0x10)
		FVector OverlapMargin; // 0x178(0x18)
		int32_t MinimumIslandSize; // 0x190(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> AttachedToys; // 0x198(0x10)
		unsigned char UnknownData07_6[0x1]; // 0x1A8(0x1) UNKNOWN PROPERTY
		bool bDisablePartialDestruction; // 0x1A9(0x1)
		unsigned char UnknownData08_7[0x1E]; // 0x1AA(0x1E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityComponent");
			return ret;
		}

		bool ShouldUsePartialDestruction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750E3C474(relative to base address)
		void OverrideMinimumIslandSize(int32_t NewSize); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E3C024(relative to base address)
		void OnVertexRemovedFromGraph(FGraphVertexHandle& VertexHandle); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E3BF84(relative to base address)
		void OnToyAttached(AActor* ToyActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF750E3BD64(relative to base address)
		void OnRep_IsDebris(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E3BCB8(relative to base address)
		void OnRep_AreDoorsEjected(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E3BB84(relative to base address)
		void OnRemovedFromGraph(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
		void OnRemovedFromClusterUnion(UClusterUnionComponent* ClusterUnion, UPrimitiveComponent* Component); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E3B9CC(relative to base address)
		void OnParentClusterUnionAwake(UPrimitiveComponent* WakingComponent, FName BoneName); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E3B7D8(relative to base address)
		void OnParentActorDeath(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF750E3B374(relative to base address)
		void OnGeometryCollectionDecayed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E3AD10(relative to base address)
		void OnGeometryCollectionBreak(FChaosBreakEvent& BreakEvent); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750E3AC78(relative to base address)
		void OnAttachedToyDetached(AActor* ToyActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF750E3A254(relative to base address)
		void OnAddedIntoClusterUnion(UClusterUnionComponent* ClusterUnion, UPrimitiveComponent* Component); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E3A190(relative to base address)
		void NotifyRemovedFromGraph(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF7474A9F44(relative to base address)
		TArray GetRelevantSimulatingComponents(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF750E3A070(relative to base address)
		UClusterUnionComponent GetCurrentClusterUnion(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E39FCC(relative to base address)
		float GetContactDistance(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74CDFEEC0(relative to base address)
		AActor GetBaseAttachParentActor(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E39F94(relative to base address)
		void GetAutomaticallyConnectedComponents(TArray<UJunoConnectivityComponent*>& Results); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF750E39EF4(relative to base address)
	};


	// Class JunoGameNative.JunoConnectivityGraphWorldSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x1F0 (0x230 - 0x40)
	class UJunoConnectivityGraphWorldSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x1F0]; // 0x40(0x1F0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityGraphWorldSubsystem");
			return ret;
		}
	};


	// Class JunoGameNative.JunoConnectivityManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x178 (0x218 - 0xA0)
	class UJunoConnectivityManagerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x19]; // 0xA0(0x19) UNKNOWN PROPERTY
		bool bIsReady; // 0xB9(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xBA(0x1) UNKNOWN PROPERTY
		bool bIsNewPlayspace; // 0xBB(0x1)
		unsigned char UnknownData02_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		UFortConnectivityGraph* Graph; // 0xC0(0x8)
		bool bIsGraphInReadOnlyMode; // 0xC8(0x1)
		unsigned char UnknownData03_6[0xA7]; // 0xC9(0xA7) UNKNOWN PROPERTY
		FJunoConnectivityDebugData DebugDrawData; // 0x170(0x38)
		unsigned char UnknownData04_7[0x70]; // 0x1A8(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoConnectivityManagerComponent");
			return ret;
		}

		void RequestAddActorsToConnectivityGraph(TArray<AActor*>& Actors); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF750E6FEC8(relative to base address)
		void OnLevelActorSavedGuidsChanged(FName& LevelUniquePackagePath, TMap<FGuid, FGuid>& SavedActorGUIDMap); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E6F9B0(relative to base address)
		void OnGraphVertexRemovedFromIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E6F898(relative to base address)
		void OnGraphVertexAddedToIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E6F780(relative to base address)
		void OnGraphIslandDestroyed(FGraphIslandHandle& IslandHandle); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E6F6E0(relative to base address)
		void OnGraphIslandCreated(FGraphIslandHandle& IslandHandle); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E6F640(relative to base address)
		void OnGraphIslandConnectivityChanged(FGraphIslandHandle& IslandHandle, EGraphIslandConnectivityChange Change); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E6F4C8(relative to base address)
		void HandleOnGeometryCollectionBreaks(TArray<FChaosBreakEvent>& BreakEvents); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750E6EBA4(relative to base address)
	};


	// Class JunoGameNative.JunoConnectivityRemovalFixupComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoConnectivityRemovalFixupComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xA38(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate NotifyAttachedToConnectivityComponent; // 0xA8(0x10)
		FMulticastInlineDelegate NotifyRemovedFromConnectivityComponent; // 0xB8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		bool bPlayspaceInitialized; // 0xD0(0x1)
		unsigned char UnknownData02_7[0x17]; // 0xD1(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPhysicsToyConnectivityComponent");
			return ret;
		}

		void OnAttachedToNewIsland(FGraphIslandHandle& NewIslandHandle); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750E6F1D4(relative to base address)
		void DetachFromConnectivity(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E6E99C(relative to base address)
		void AttachToConnectivity(AActor* Other); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E6E91C(relative to base address)
	};


	// Class JunoGameNative.JunoSkeletalMeshDynamicsComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UJunoSkeletalMeshDynamicsComponent : public UGameFrameworkComponent	
	{
	public:
		FComponentReference SkeletalMeshReference; // 0xA0(0x28)
		unsigned char UnknownData00_7[0xB0]; // 0xC8(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoSkeletalMeshDynamicsComponent");
			return ret;
		}

		void SetVelocityBias(FVector LinearBias, FVector AngularBias); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750E70AB4(relative to base address)
		void SetRadialVelocity(FVector Origin, float Velocity); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750E707D0(relative to base address)
		void MakeDynamic(double LinearMultiplier, double LinearVariance, double AngularMultiplier, double AngularVariance); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E6F080(relative to base address)
	};


	// Class JunoGameNative.JunoWorldReadinessQueryComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x130 - 0xA0)
	class UJunoWorldReadinessQueryComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_1[0x90]; // 0xA0(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldReadinessQueryComponent");
			return ret;
		}

		void OnBasePhysicsStateChange(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E6F338(relative to base address)
		void OnBaseEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E6F274(relative to base address)
	};


	// Class JunoGameNative.JunoPlayspacePersistenceFeatureDataActor
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class AJunoPlayspacePersistenceFeatureDataActor : public AInfo	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x290(0x28) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x2B8(0x10)
		int32_t Version; // 0x2C8(0x4)
		bool bTriggerErrorOnSetDirtyAfterCheckIn; // 0x2CC(0x1)
		unsigned char UnknownData01_6[0x13]; // 0x2CD(0x13) UNKNOWN PROPERTY
		bool bSpawnedByLevelSaveRecord; // 0x2E0(0x1)
		bool bForceDirty; // 0x2E1(0x1)
		bool bDirty; // 0x2E2(0x1)
		unsigned char UnknownData02_7[0x5]; // 0x2E3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayspacePersistenceFeatureDataActor");
			return ret;
		}

		void OnPersistentDataModified(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C388930(relative to base address)
	};


	// Class JunoGameNative.JunoConnectivityGraphPersistenceFeatureData
	// Inherited from AJunoPlayspacePersistenceFeatureDataActor -> AInfo -> AActor -> UObject
	// Size: 0x2C0 (0x5A8 - 0x2E8)
	class AJunoConnectivityGraphPersistenceFeatureData : public AJunoPlayspacePersistenceFeatureDataActor	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2E8(0x10) UNKNOWN PROPERTY
		FSerializableConnectivityGraph SavedConnectivityData; // 0x2F8(0x108)
		FSerializableConnectivityGraph_v2 CurrentSavedConnectivityData; // 0x400(0xC8)
		unsigned char UnknownData01_7[0xE0]; // 0x4C8(0xE0) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x90]; // 0xA0(0x90) UNKNOWN PROPERTY
		FJunoKnowledgeSaveRecord CurrentWorldKnowledge; // 0x130(0x138)
		unsigned char UnknownData01_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0xC0]; // 0xA8(0xC0) UNKNOWN PROPERTY
		bool bEnableKnowledgeComponent; // 0x168(0x1)
		bool bEnableKnowledgePersistence; // 0x169(0x1)
		bool bEnableKnowledgeFiltering; // 0x16A(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x16B(0x1) UNKNOWN PROPERTY
		bool bUnownedMCPRecipesKnowledgeBlockedWhenUnfiltered; // 0x16C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x16D(0x3) UNKNOWN PROPERTY
		TArray<UFortItemDefinition*> DefaultKnownItems; // 0x170(0x10)
		FGameplayTagContainer DefaultCraftingObjects; // 0x180(0x20)
		FGameplayTag UnblockMCPRecipesWorldStateTag; // 0x1A0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer FoundCraftingObjects; // 0x1A8(0x20)
		FGameplayTagContainer ClaimedKnowlegeBundles; // 0x1C8(0x20)
		TArray<UItemDefinitionBase*> ItemStateArray; // 0x1E8(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x1F8(0x8) UNKNOWN PROPERTY
		FJunoKnowledgeRecipeStateFastArray RecipeStateArray; // 0x200(0x120)
		TArray<FGameplayTag> CreatureStateArray; // 0x320(0x10)
		unsigned char UnknownData05_6[0x8]; // 0x330(0x8) UNKNOWN PROPERTY
		TArray<FJunoKnowledgeItemServerState> ItemServerState; // 0x338(0x10)
		TMap<FName, FJunoKnowledgeRecipeServerState> RecipeServerState; // 0x348(0x50)
		TArray<FJunoKnowledgeCreatureServerState> CreatureServerState; // 0x398(0x10)
		FGameplayTagContainer McpProfileOwnershipTagsCached; // 0x3A8(0x20)
		unsigned char UnknownData06_6[0xF0]; // 0x3C8(0xF0) UNKNOWN PROPERTY
		TArray<UItemDefinitionBase*> ViewedItems; // 0x4B8(0x10)
		TArray<int16_t> ViewedRecipes; // 0x4C8(0x10)
		TArray<FGameplayTag> ViewedCreatures; // 0x4D8(0x10)
		TArray<int16_t> OwnedMcpRecipes; // 0x4E8(0x10)
		TArray<FJunoKnowledgeReplicatedRecipeDiscoverer> RecipeDiscoverers; // 0x4F8(0x10)
		TMap<FName, AFortPlayerState*> RecipeDiscoverersMap; // 0x508(0x50)
		bool bMCPRecipesBlocked; // 0x558(0x1)
		bool bComponentReady; // 0x559(0x1)
		unsigned char UnknownData07_6[0x6]; // 0x55A(0x6) UNKNOWN PROPERTY
		TSet<UItemDefinitionBase*> ItemQuickLookup; // 0x560(0x50)
		TSet<FGameplayTag> CreatureQuickLookup; // 0x5B0(0x50)
		FGameplayTagContainer CreatureDiscoveredTagContainer; // 0x600(0x20)
		unsigned char UnknownData08_7[0x1E8]; // 0x620(0x1E8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgeComponent");
			return ret;
		}

		void ViewRecipe(FName InRecipeName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E70F88(relative to base address)
		void ViewItem(UItemDefinitionBase* InItemDef); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E70DE4(relative to base address)
		void ViewCreature(FGameplayTag& InCreatureTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E70D58(relative to base address)
		void ViewAllDiscovered(bool bExcludePlayerBuiltRecipes); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E70CD8(relative to base address)
		bool UnblockMCPRecipes(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E70CB4(relative to base address)
		void SetRecipeKnowledgeState(FName RowName, EJunoKnowledgeState NewState, bool bForceUpdate); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E709BC(relative to base address)
		void SetPlayerRecipeKnowledgeState(AFortPlayerController* PC, FName RowName, EJunoKnowledgeState NewState); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E706D0(relative to base address)
		void ServerViewRecipe(FName InRecipeName); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF75055D9D4(relative to base address)
		void ServerViewItem(UItemDefinitionBase* InItemDef); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74FCB13CC(relative to base address)
		void ServerViewCreature(FGameplayTag InCreatureTag); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF750E705BC(relative to base address)
		void ServerViewAllDiscovered(bool bExcludePlayerBuiltRecipes); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E801A28(relative to base address)
		void ServerRequestItemKnowledge(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E313DBC(relative to base address)
		void ServerRequestCreatureKnowledge(); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E313DD4(relative to base address)
		void RevealRecipeCategoryForPlayer(AFortPlayerController* PC, FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E701EC(relative to base address)
		void RevealRecipeCategory(FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E6FF64(relative to base address)
		bool OwnsAnyMCPRecipe(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6FEAC(relative to base address)
		void OnRep_ViewedRecipes(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E6FE98(relative to base address)
		void OnRep_ViewedItems(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E6FE20(relative to base address)
		void OnRep_ViewedCreatures(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E6FDBC(relative to base address)
		void OnRep_RecipeDiscoverers(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E6FDA8(relative to base address)
		void OnReactionGrantedObject(UObject* SourceObject, FReactionGrantedObject& GrantedItem); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750E6FCA4(relative to base address)
		void OnMcpInventoryChanged(TSet<FString>& ItemChangeFlags, int64_t ProfileRevision); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750E6FADC(relative to base address)
		void OnCraftingObjectInteraction(AActor* CraftingObject); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74E241010(relative to base address)
		bool IsRecipeMissingMCPOwnership(FName RowName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6EFF4(relative to base address)
		bool HasViewedRecipe(FName InRecipeName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6EF68(relative to base address)
		bool HasViewedItem(UItemDefinitionBase* InItemDef); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6EED8(relative to base address)
		bool HasViewedCreature(FGameplayTag& InCreatureTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6EE14(relative to base address)
		bool HasDiscoveredItem(UItemDefinitionBase* InItemDef); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6ED84(relative to base address)
		bool HasDiscoveredCreature(FGameplayTag& InCreatureTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6ECEC(relative to base address)
		bool HasClaimedKnowledgeBundle(FGameplayTag& BundleIdentifier); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6EC54(relative to base address)
		void HandleWorldStateChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E6EC40(relative to base address)
		EJunoKnowledgeState GetRecipeKnowledgeState(FName RowName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6EB18(relative to base address)
		EJunoKnowledgeState GetPlayerRecipeKnowledgeState(AFortPlayerController* PC, FName RowName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E6EA3C(relative to base address)
		bool DoesRecipeRequireMCPOwnership(FName RowName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6E9B0(relative to base address)
		void ClientItemKnowledgeResponse(TArray<UItemDefinitionBase*> NewItems); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74E2141DC(relative to base address)
		void ClientCreatureKnowledgeResponse(TArray<FGameplayTag> NewCreatures); // Flags: RequiredAPI|Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74E4BB6D8(relative to base address)
		bool AreMCPRecipesBlocked(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E6E8F8(relative to base address)
		void AddCraftingObjectTagsToPlayer(AFortPlayerController* PC, FGameplayTagContainer CraftingObjectTags); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E6E738(relative to base address)
		void AddCraftingObjectTags(FGameplayTagContainer CraftingObjectTags); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E6E5EC(relative to base address)
		void AcquireItemForPlayer(AFortPlayerController* PC, UItemDefinitionBase* NewItemDef); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E6E520(relative to base address)
		void AcquireItem(UItemDefinitionBase* NewItemDef); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E6E4A0(relative to base address)
	};


	// Class JunoGameNative.JunoKnowledgeDebugMenu
	// Inherited from AImGuiDebugMenuBase -> AActor -> UObject
	// Size: 0x400 (0x8C0 - 0x4C0)
	class AJunoKnowledgeDebugMenu : public AImGuiDebugMenuBase	
	{
	public:
		unsigned char UnknownData00_1[0x400]; // 0x4C0(0x400) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoKnowledgeDebugMenu");
			return ret;
		}

		void ServerSetRecipeKnowledgeState(APlayerController* InPlayerController, FName InRecipeRowName, EJunoKnowledgeState InKnowledgeState); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF750E704C0(relative to base address)
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
		unsigned char UnknownData00_3[0x38]; // 0xF8(0x38) UNKNOWN PROPERTY
		TArray<FJunoMarker> Markers; // 0x130(0x10)
		UDataRegistry* MarkerDataRegistry; // 0x140(0x8)
		TArray<FUniqueMarkerSettings> UniqueMarkers; // 0x148(0x10)
		TArray<UObject*> LoadedIconTextures; // 0x158(0x10)
		unsigned char UnknownData01_7[0x58]; // 0x168(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent");
			return ret;
		}

		void OnRep_Markers(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750E9FA30(relative to base address)
		UJunoMarkerManagerPlayspaceComponent GetJunoMarkerManagerComponent(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E9F444(relative to base address)
		bool CreateMarker(AActor* Actor, FJunoMarker& Marker); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E9F28C(relative to base address)
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

		bool IsPlayerAllowedToFly(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E9F740(relative to base address)
		bool IsModeratorModeEnabled(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750E9F61C(relative to base address)
	};


	// Class JunoGameNative.JunoModeratorModeComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoModeratorModeComponent : public UGameFrameworkComponent	
	{
	public:
		UInputAction* InputAction_TeleportPlayer_ModeratorMode; // 0xA0(0x8)
		bool bIsModeratorModeEnabled; // 0xA8(0x1)
		bool bIsPlayerAllowedToFly; // 0xA9(0x1)
		bool bModeratorConfirmed; // 0xAA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoModeratorModeComponent");
			return ret;
		}

		void OnRootPlayspaceOwnerSet(AFortPlayerControllerAthena* PlayerControllerAthena); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnRep_IsModeratorModeEnabled(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E9FA1C(relative to base address)
		void OnPawnDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E9F918(relative to base address)
		bool IsPlayerAllowedToFly(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750E9F7C0(relative to base address)
		bool IsModeratorModeEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFB9D68(relative to base address)
		void HandleTeleportPlayer(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E9F608(relative to base address)
		void HandlePlayerPossesedPawn(APawn* PlayerPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E9F588(relative to base address)
		void HandleOnCreativeFlyChangedDelegate(bool bIsFlying); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E9F4C4(relative to base address)
		void EnableModeratorMode(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DisableModeratorMode(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void CheatModeratorConfirm(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E9F274(relative to base address)
	};


	// Class JunoGameNative.JunoDoorMetaNavArea
	// Inherited from UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UJunoDoorMetaNavArea : public UNavAreaMeta	
	{
	public:
		FNavAgentSelector DoorAwareAgents; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x18]; // 0x198(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		float MaximumTimeToUseRequest; // 0xD0(0x4)
		FJunoMoodStateData CurrentMoodState; // 0xD4(0x4)
		UProxyTable* MoodAnimProxyTable; // 0xD8(0x8)
		bool bIsMoodReactionActive; // 0xE0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		FMoodReactionRequestConfig RunningMoodReactionConfig; // 0xE4(0x10)
		unsigned char UnknownData02_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		FRequestedMoodReaction LastRequestedMoodReaction; // 0xF8(0x18)
		FMulticastInlineDelegate OnJunoMoodReactionTriggeredDelegate; // 0x110(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x120(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoMoodReactionFinishedDelegate; // 0x138(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x148(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoMoodReactionCanceledDelegate; // 0x160(0x10)
		unsigned char UnknownData05_7[0x30]; // 0x170(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnComponentMood");
			return ret;
		}

		void RequestMoodReaction(FMoodReactionRequestConfig& RequestConfig); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E9FB08(relative to base address)
		void OnRep_CurrentMoodState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E9FA08(relative to base address)
		void NotifyMoodReactionComplete(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750E9F904(relative to base address)
		void MulticastTriggerMoodReaction(FMoodReactionRequestConfig RequestConfig); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF750E9F7E0(relative to base address)
		void MulticastOnMoodReactionComplete(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private|BlueprintCallable, Memory Exec: 0x7FF74847EE18(relative to base address)
		void MulticastOnCancelCurrentMoodReaction(); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
		bool IsMoodReactionSupported_Internal(FGameplayTag& MoodReactionTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsMoodReactionSupported(FGameplayTag& MoodReactionTag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750E9F6A8(relative to base address)
		UProxyTable GetMoodAnimProxyTable(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691680(relative to base address)
		FJunoMoodStateData GetCurrentMoodState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F86403C(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0x76C(0x4) UNKNOWN PROPERTY
		TMap<FGuid, FJunoUpdateAction> UpdateActions; // 0x770(0x50)
		TWeakObjectPtr<AJunoPersistentPlayspace*> WeakPersistentPlayspaceToApplyTo; // 0x7C0(0x8)
		bool bDirty; // 0x7C8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x7C9(0x7) UNKNOWN PROPERTY

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
		TMap<FGuid, FJunoUpdateAction> UpdateActionMap; // 0x550(0x50)
		TMap<FGuid, FDeleteAction> DeleteActionMap; // 0x5A0(0x50)

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
		unsigned char UnknownData00_1[0x38]; // 0x140(0x38) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x20]; // 0x1E0(0x20) UNKNOWN PROPERTY

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
		TMap<FName, FJunoPersistentPlayspaceLevelRegistryEntry> PersistentPlayspaceLevelMap; // 0x30(0x50)

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<FJunoPlayspacePersistenceFeature> PersistenceFeatures; // 0x30(0x10)
		unsigned char UnknownData01_7[0x38]; // 0x40(0x38) UNKNOWN PROPERTY

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
		TMap<FGuid, FJunoPersistentPlayspaceSaveHandlerContainerItem> JunoPersistentPlayspaceSaveHandlers; // 0x28(0x50)

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
		unsigned char UnknownData00_1[0x88]; // 0xF8(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerPersistenceComponent");
			return ret;
		}

		void OnRemoveDuplicatePlayer(APlayerController* PlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF750E9F998(relative to base address)
		void OnControllerBeginDestroy(AFortPlayerControllerAthena* FortPCAthena); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnAnyPlayerLoggedIn(APlayerController* PlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void HandlePlayerDisconnecting(AFortPlayerController* Controller, FString DevReason, bool bGracefulDisconnect); // Flags: Final|Native|Private, Memory Exec: 0x7FF74EE2A3D4(relative to base address)
	};


	// Class JunoGameNative.JunoWorldPersistenceHandler
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoWorldPersistenceHandler : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistenceHandler");
			return ret;
		}
	};


	// Class JunoGameNative.JunoWorldPersistenceHandler_Deltas
	// Inherited from UJunoWorldPersistenceHandler -> UObject
	// Size: 0x170 (0x1A0 - 0x30)
	class UJunoWorldPersistenceHandler_Deltas : public UJunoWorldPersistenceHandler	
	{
	public:
		int32_t DeltasPeriodicSaveIntervalSeconds_Default; // 0x30(0x4)
		int32_t DeltasPeriodicSaveIntervalSeconds_PIEOverride; // 0x34(0x4)
		unsigned char UnknownData00_6[0x110]; // 0x38(0x110) UNKNOWN PROPERTY
		UJunoDeltasSaveHandler* DeltasSaveHandler; // 0x148(0x8)
		TScriptInterface<Class> WorldSaveInterface; // 0x150(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x160(0x10) UNKNOWN PROPERTY
		FSoftClassPath DefaultDeltaFileClass; // 0x170(0x18)
		TArray<FJunoRollbackBadCheckpointRange> RollbackBadCheckpointRanges; // 0x188(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x98]; // 0x28(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldPersistencePlayerManager");
			return ret;
		}

		void OnAnyPlayerLoggedIn(APlayerController* PlayerController); // Flags: Final|Native|Public, Memory Exec: 0x7FF750EBEAF0(relative to base address)
	};


	// Class JunoGameNative.JunoAIPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x200 (0x258 - 0x58)
	class UJunoAIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x58(0x20) UNKNOWN PROPERTY
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
		UClass* CachedWorldTilePlayspaceClass; // 0x70(0x8)
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
		unsigned char UnknownData00_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
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
		TWeakObjectPtr<UJunoBasePFWPersistenceFeatureDataContainer*> ContainerWeakPtr; // 0x28(0x8)

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
		unsigned char UnknownData00_1[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.PFWSubsystemExtension_JunoGameNative");
			return ret;
		}
	};


	// Class JunoGameNative.JunoControllerComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x4C8 (0x570 - 0xA8)
	class UJunoControllerComponent : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerSpawnedActorWithBuilderTool; // 0xA8(0x10)
		FMulticastInlineDelegate OnOffhandInputPressed; // 0xB8(0x10)
		FMulticastInlineDelegate OnOffhandInputReleased; // 0xC8(0x10)
		unsigned char UnknownData00_6[0x10]; // 0xD8(0x10) UNKNOWN PROPERTY
		UFortWorldItemDefinition* EmptyHandItemDefinition; // 0xE8(0x8)
		float InteractionDistanceFromCamera; // 0xF0(0x4)
		float InteractionDistanceFromPlayer; // 0xF4(0x4)
		FPrimaryAssetId BuilderToolPrimaryAsset; // 0xF8(0x8)
		UClass* DeathChestActorClass; // 0x100(0x8)
		UClass* DeathChestNavFilterClass; // 0x108(0x8)
		FVector DeathChestNavQuestyExtents; // 0x110(0x18)
		float DeathChestZDistanceToCheck; // 0x128(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FJunoMarker CheckpointMarker; // 0x130(0xC0)
		FGuid ItemToBuildGUID; // 0x1F0(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x200(0x10) UNKNOWN PROPERTY
		FGuid ItemSelectedGuid; // 0x210(0x10)
		bool bSpawnedBackpack; // 0x220(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x221(0x7) UNKNOWN PROPERTY
		FVector BackpackSpawnLocation; // 0x228(0x18)
		unsigned char UnknownData04_6[0x10]; // 0x240(0x10) UNKNOWN PROPERTY
		UInputComponent* InputComponent; // 0x250(0x8)
		unsigned char UnknownData05_6[0xD8]; // 0x258(0xD8) UNKNOWN PROPERTY
		UFortItem* CachedQuickBuildItem; // 0x330(0x8)
		unsigned char UnknownData06_6[0x190]; // 0x338(0x190) UNKNOWN PROPERTY
		UFortOffhandComponent* OffhandComponent; // 0x4C8(0x8)
		FGameplayEventListenerHandle CheckpointActorDestroyedHandle; // 0x4D0(0x1C)
		unsigned char UnknownData07_6[0x4]; // 0x4EC(0x4) UNKNOWN PROPERTY
		FJunoPlayerCheckpoint PlayerCheckpoint; // 0x4F0(0x38)
		unsigned char UnknownData08_6[0x20]; // 0x528(0x20) UNKNOWN PROPERTY
		bool bIsModeratorModeEnabled; // 0x548(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x549(0x7) UNKNOWN PROPERTY
		TArray<FGameplayTag> NonPermadeathTags; // 0x550(0x10)
		TArray<FGameplayTag> DeathTagsConsideredAsLogout; // 0x560(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoControllerComponent");
			return ret;
		}

		void SwitchToEmptyHands(bool bTriggerSelection, FGameplayTag OptionalSlotGroupTag, int32_t OptionalSlotRow, int32_t OptionalSlotColumn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750EEA90C(relative to base address)
		bool SpawnedBackpack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750EEA8F4(relative to base address)
		bool ShouldSpawnDeathChest(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750EEA8D0(relative to base address)
		void SetPlayerLastCaveTeleporterLocation(FVector& TeleporterLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750EEA80C(relative to base address)
		void SetPlayerCheckpoint(AActor* CheckpointActor, FVector& CheckpointLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750EEA704(relative to base address)
		void SetIsModeratorModeEnabled(bool bEnable); // Flags: Final|Native|Public, Memory Exec: 0x7FF750EEA684(relative to base address)
		void ServerTeleportToPOI(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E313DD4(relative to base address)
		void ServerTeleportToLocation(FVector TeleportLocation, FRotator TeleportRotation); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF750EEA270(relative to base address)
		void ServerTeleportToCave(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E3138BC(relative to base address)
		void ServerSetSelectedItem(FGuid ItemGuid, FGameplayTag SlotGroupTag, int32_t SlotRow, int32_t SlotColumn); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF750EE9F18(relative to base address)
		void ServerSetCraftingContextItem(FGuid InItemGuid); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF750EE9DF4(relative to base address)
		void ServerRespawnAtLocation(FVector2D InLocation); // Flags: Net|NetReliableNative|Event|Public|NetServer|HasDefaults, Memory Exec: 0x7FF750EE9CE4(relative to base address)
		void ServerRequestPersistenceDataReport(EJunoPersistenceReportOptions ReportOptions); // Flags: Net|NetReliableNative|Event|Public|NetServer|Const, Memory Exec: 0x7FF750EE9C60(relative to base address)
		void ServerReportRecipeMismatch(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E3115AC(relative to base address)
		void ServerReplicateMapData(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E4850C4(relative to base address)
		void ServerFreeBuildAddInventoryItem(FFortItemEntry InItemEntry); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF750EE9B14(relative to base address)
		void OnRep_ItemSelectedGuid(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE97A4(relative to base address)
		void OnCameraToggle(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAnimToggle(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFortPawnChanged(AFortPawn* NewPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE9304(relative to base address)
		void HandleBuilderToolUnEquip(AFortWeapon* Weapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE8D58(relative to base address)
		void HandleBuilderToolInteractionStopped(AJunoBuilderTool* BuilderTool, UJunoBuilderToolInteractionBehavior* Behavior); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE8C94(relative to base address)
		void HandleBuilderToolInteractionStarted(AJunoBuilderTool* BuilderTool, UJunoBuilderToolInteractionBehavior* Behavior); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE8BD0(relative to base address)
		FJunoPlayerCheckpoint GetPlayerCheckpoint(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750EE8B90(relative to base address)
		FVector GetLastCaveTeleporterLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750EE8B68(relative to base address)
		bool GetIsModeratorModeEnabled(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FCAF48C(relative to base address)
		AJunoBuilderTool GetBuilderTool(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750EE8B10(relative to base address)
		void EquipQuickBarItem(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750EE8A90(relative to base address)
		void ClientPrintPersistenceDataReport(TArray<FString> Logs); // Flags: Net|NetReliableNative|Event|Public|NetClient|Const, Memory Exec: 0x7FF750EE89D8(relative to base address)
		void ClientNotifyInventoryInvoked(AActor* ReceivingActor); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF75074F660(relative to base address)
		void ClientNotifyInventoryFull(); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF74F49544C(relative to base address)
		void ClientNotifyInventoryClosed(AActor* ReceivingActor); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF75074F5DC(relative to base address)
		void AddRecipeToBuilderTool(FName RecipeName); // Flags: Final|Native|Public, Memory Exec: 0x7FF750EE8958(relative to base address)
		void AddItemToBuilderToolOnEquip(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE8894(relative to base address)
		void AddItemToBuilderTool(UFortItem* Item); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750EE8814(relative to base address)
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
		unsigned char UnknownData00_3[0x40]; // 0xA8(0x40) UNKNOWN PROPERTY
		bool bCachedEnableClientSettingsRestoreInputPresets : 1; // 0xE8:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		UJunoInputMappingComponentData* InputMappingData; // 0xF0(0x8)
		UInputAction* InputAction_HandleCameraToggle; // 0xF8(0x8)
		UInputAction* InputAction_HandleAnimToggle; // 0x100(0x8)
		UInputAction* InputAction_HandleCyclePOI; // 0x108(0x8)
		UInputAction* InputAction_HandleTeleportToCave; // 0x110(0x8)
		UInputAction* InputAction_NextQuickbarSlot; // 0x118(0x8)
		UInputAction* InputAction_NextQuickbarSlot_Delayed; // 0x120(0x8)
		UInputAction* InputAction_PrevQuickbarSlot; // 0x128(0x8)
		UInputAction* InputAction_PrevQuickbarSlot_Delayed; // 0x130(0x8)
		UInputAction* InputAction_HandleOpenHudMenu; // 0x138(0x8)
		UInputAction* InputAction_HandleOpenBuildingMenu; // 0x140(0x8)
		UInputAction* InputAction_HandleOpenMapMenu; // 0x148(0x8)
		UInputAction* InputAction_HandleOpenInventoryMenu; // 0x150(0x8)
		UInputAction* InputAction_HandleOpenShopMenu; // 0x158(0x8)
		UInputAction* InputAction_HandleOpenEngagementMenu; // 0x160(0x8)
		UInputAction* InputAction_HandleOpenInGameFrontend; // 0x168(0x8)
		UInputAction* InputAction_HideFTUEQuestTracking; // 0x170(0x8)
		UInputAction* InputAction_HandleOpenEscapeMenu; // 0x178(0x8)
		UInputAction* InputAction_JunoBuildingStartPlacement; // 0x180(0x8)
		UInputAction* InputAction_ToggleBuildMode; // 0x188(0x8)
		UInputAction* InputAction_TeleportPlayer; // 0x190(0x8)
		UInputAction* InputAction_OffhandUse; // 0x198(0x8)
		UInputAction* InputAction_FlyDown; // 0x1A0(0x8)
		UInputAction* InputAction_FlyUp; // 0x1A8(0x8)
		TArray<UInputAction*> QuickbarBindings; // 0x1B0(0x10)
		TArray<FJunoEnhancedInputActionToGameplayEvent> InputActionsToGameplayEvents; // 0x1C0(0x10)
		bool bJunoIsFlying; // 0x1D0(0x1)
		unsigned char UnknownData02_7[0x17]; // 0x1D1(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoInputControllerComponent");
			return ret;
		}

		void PushInputMappingContext(UJunoInputMappingComponentData* InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF750EE9988(relative to base address)
		void PopInputMappingContext(UJunoInputMappingComponentData* InData); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF750EE9810(relative to base address)
		void HandleOnCreativeFlyChangedDelegate(bool bIsFlying); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE96B8(relative to base address)
	};


	// Class JunoGameNative.JunoLWITriggerComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UJunoLWITriggerComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnComponent");
			return ret;
		}

		bool ShouldPawnSpawnDeathChest(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFB9D68(relative to base address)
		bool IsPlayerInCave(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750EE9738(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0xE9(0x3) UNKNOWN PROPERTY
		FJunoEmotionalStateData TargetEmotionalState; // 0xEC(0x10)
		char CheatEmotionIndex; // 0xFC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xFD(0x3) UNKNOWN PROPERTY
		TArray<FJunoPawnEmotionalStateMappingFromAwesomeLevel> JunoPawnEmotionalStateMappingFromAwesomeLevel; // 0x100(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x110(0x8) UNKNOWN PROPERTY
		float ResetToDefaultEmotionRate; // 0x118(0x4)
		float TimeToStayAtEmotionInSeconds; // 0x11C(0x4)
		unsigned char UnknownData03_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		FTimerHandle DefaultEmotionHandle; // 0x128(0x8)
		unsigned char UnknownData04_7[0x8]; // 0x130(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnComponent_EmotionalState");
			return ret;
		}

		void SetEmotionalState(FJunoEmotionalStateData Emotion); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750EEA558(relative to base address)
		void SetCurrentEmotionalState(EJunoPawnEmotionalState NewEmotion); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750EEA4D8(relative to base address)
		void ResetToDefaultEmotionalState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE9B00(relative to base address)
		void OnRep_TargetEmotionalState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE97FC(relative to base address)
		void OnRep_CurrentEmotionalState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE9790(relative to base address)
		void OnRep_CheatEmotionIndex(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE975C(relative to base address)
		void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750EE94A8(relative to base address)
		float GetCurrentEmotionalStateValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750EE8B50(relative to base address)
		EJunoPawnEmotionalState GetCurrentEmotionalState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EA7E60C(relative to base address)
	};


	// Class JunoGameNative.JunoPawnPhysicsRepulsionComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UJunoPawnPhysicsRepulsionComponent : public UActorComponent	
	{
	public:
		float PushOutMaxDistance; // 0xA0(0x4)
		unsigned char UnknownData00_7[0x2C]; // 0xA4(0x2C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent");
			return ret;
		}

		void SetCapsuleMass(float InBaseForce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750EEA450(relative to base address)
		void HandleMovementModeChanged(TEnumAsByte<EMovementMode> MovementMode, char CustomMode); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE95FC(relative to base address)
		void HandleMovementBaseChanged(UPrimitiveComponent* NewBaseComponent, FName BoneName); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE9538(relative to base address)
		void HandleHeldObjectChanged(AActor* HeldObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE942C(relative to base address)
		void HandleComponentPhysicsStateChange(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Private, Memory Exec: 0x7FF750EE9240(relative to base address)
		void HandleComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF750EE8E3C(relative to base address)
		float GetCapsuleMass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749336438(relative to base address)
	};


	// Class JunoGameNative.JunoPlayerState
	// Inherited from AFortPlayerStateAthena -> AFortPlayerStateZone -> AFortPlayerState -> AFGF_PlayerState -> APlayerState -> AInfo -> AActor -> UObject
	// Size: 0x28 (0x1A30 - 0x1A08)
	class AJunoPlayerState : public AFortPlayerStateAthena	
	{
	public:
		FGuid CaveId; // 0x1A08(0x10)
		TArray<FLinearColor> PinColorForPlayer; // 0x1A18(0x10)
		FGameplayTag GameplayTagPresentWhenTeleporting; // 0x1A28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1A2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoPlayerState");
			return ret;
		}

		FGuid GetCaveId(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750EE8B34(relative to base address)
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
		unsigned char UnknownData00_1[0x50]; // 0x110(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x48]; // 0xF8(0x48) UNKNOWN PROPERTY
		FGameplayTagContainer AllDynamicUniqueAIIdentifiers; // 0x140(0x20)
		TArray<FJunoAIFriendshipStateThresholds> FriendshipStateThresholds; // 0x160(0x10)
		unsigned char UnknownData01_7[0x1C0]; // 0x170(0x1C0) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x1B9(0x7) UNKNOWN PROPERTY
		TArray<FServerExpirationAlertData> ConfigAlertDataList; // 0x1C0(0x10)

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
		unsigned char UnknownData00_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

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
		TArray<AJunoClusterUnionActor*> AllClusterUnions; // 0x50(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

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

		void K2_OnExecuteAction(FJunoActionTargetPayload& ActionTargetPayload, UJunoActionConfig* Config); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		UDataRegistry* BuildLimitDataRegistry; // 0x28(0x8)

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
		UClass* JunoBuildingMetricClass; // 0xA0(0x8)
		UJunoBuildingActorCountMetric* JunoBuildingMetric; // 0xA8(0x8)

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
		unsigned char UnknownData00_3[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
		FScalableFloat MinValue; // 0x60(0x28)
		FScalableFloat NetworkRelevantActorCountThreshold; // 0x88(0x28)
		FScalableFloat SpatialPrecision; // 0xB0(0x28)
		TMap<FJunoTrackedActorKey, FJunoRelevantActorTrackingData> ActorCounts; // 0xD8(0x50)
		TSet<FJunoTrackedActor> TrackedActors; // 0x128(0x50)
		TArray<UClass*> TrackedClasses; // 0x178(0x10)
		TSet<FJunoTrackedActorRefreshmentOptions> PendingRefreshments; // 0x188(0x50)
		TSet<TWeakObjectPtr> ActorsPendingAdd; // 0x1D8(0x50)

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
		TWeakObjectPtr<UClass*> JunoBuildingMetricClass; // 0xA0(0x20)
		TWeakObjectPtr<UJunoBuildingActorMetric*> JunoBuildingMetric; // 0xC0(0x8)

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
		TArray<FSoftObjectPath> Assets; // 0x28(0x10)

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

		void UnpackColorFromCustomDataFloat(float InPackedColor, int32_t& OutColorId, int32_t& OutVariantId, int32_t& OutRandomId); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F0CA70(relative to base address)
		void SpawnResourcesOnDestruction(AActor* Actor, FVector& LastHitLocation, AActor* DamageCauser, FGameplayEffectContextHandle& EffectContext); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750F0C83C(relative to base address)
		AActor SpawnPersistentActor(UObject* WorldContextObject, UClass* ActorClass, FTransform& SpawnTransform, APawn* Instigator, AJunoPersistentPlayspace* Playspace, FGameplayTagQuery PlayspaceTagQuery); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750F0C398(relative to base address)
		void SetGeometryCollectionISMPoolCustomInstanceData(UGeometryCollectionComponent* GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C129338(relative to base address)
		float PackColorToCustomDataFloat(int32_t InColorId, int32_t InVariantId, int32_t InRandomId); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F0C298(relative to base address)
		void JunoForEachActorComponentConstDelegate__DelegateSignature(UActorComponent* Component); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsWorldOwner(AFortPlayerController* PC); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F0BEF8(relative to base address)
		bool IsFreshWorld(UObject* WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F0BE54(relative to base address)
		bool IsFirstPlayerSpawn(AFortPlayerPawn* PlayerPawn); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F0BDD4(relative to base address)
		bool IsActorInCone(AActor* Actor, FVector& ConeLocation, FVector& ConeForward, float FacingHalfAngleDeg); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F0BA78(relative to base address)
		bool HasPlayerRespawned(AFortPlayerController* PC); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F0B9E8(relative to base address)
		void GetWorldStartPosition(UObject* WorldContextObject, FVector& Location, bool& bIsReady); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750F0B894(relative to base address)
		void GetTileInformationTagsForActor(AActor* Actor, FGameplayTagContainer& OutResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F0B7A4(relative to base address)
		bool GetPreviewSmartObjectEntranceLocationsWithValidation(UObject* WorldContextObject, FTransform& WorldTransform, USmartObjectDefinition* SmartObjectDefinition, AActor* SkipActor, FSmartObjectSlotEntranceLocationRequest& Request, TArray<FSmartObjectSlotEntranceLocationResult>& Results); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750F0B434(relative to base address)
		bool GetPreviewSmartObjectEntranceLocations(FTransform& WorldTransform, USmartObjectDefinition* SmartObjectDefinition, TArray<FSmartObjectSlotEntranceLocationResult>& Results); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750F0B0A0(relative to base address)
		UPlayspaceComponent GetPlayspaceComponentFromPlayspace(AActor* Actor, UClass* ComponentClass, UClass* PlayspaceClass); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F0AE10(relative to base address)
		UPlayspaceComponent GetPlayspaceComponentByInterface(AActor* Actor, UClass* InterfaceClass, UClass* PlayspaceClass); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F0AB5C(relative to base address)
		FJunoPlayerSaveData GetPlayerSaveData(AController* PlayerController, bool& bIsValid); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F0A9B8(relative to base address)
		FJunoPlayerActiveEffectsSaveData GetPlayerActiveEffectsSaveData(AController* PlayerController, bool& bIsValid); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F0A80C(relative to base address)
		TArray GetMergedMeshComponents(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F0A778(relative to base address)
		UJunoMapManagerComponent GetMapManagerComponent(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F0A6F8(relative to base address)
		void GetKnownCraftingRecipes(AFortPlayerController* FortPC, AActor* CraftingObject, TArray<FName>& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F0A490(relative to base address)
		bool GetIsWorldKeyHolder(AFortPlayerController* PC); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F0A410(relative to base address)
		double GetDistanceToWorldStartPosition(UObject* WorldContextObject, FVector& Location, bool& bIsReady); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750F0A2B8(relative to base address)
		int32_t GetCountOfResourcesInAIResourcesInventory(AActor* AIActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F0A200(relative to base address)
		int32_t GetBoneIndex(USkeletalMesh* SkeletalMesh, FName BoneName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F0A110(relative to base address)
		void GetBiomeInformationForActor(AActor* Actor, FJunoBiomeInfoQueryResult& OutResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F09F04(relative to base address)
		void GetBiomeInformationAtLocation(UObject* WorldContextObject, FVector& Location, FJunoBiomeInfoQueryResult& OutResult); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750F09D60(relative to base address)
		void GetBiomeForActor(AActor* Actor, EJunoBiome& OutResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F09B4C(relative to base address)
		UCustomizableObjectInstance GetAMSCustomizableObjectInstance(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F09A20(relative to base address)
		bool GetAMSAnimDataAssetsFromActor(AActor* Actor, FAssembledMeshSchemaData_AnimDataAssets& AnimData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F09910(relative to base address)
		bool GetAMSAnimDataAssets(AFortPlayerPawn* FortPlayerPawn, FAssembledMeshSchemaData_AnimDataAssets& AnimData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F09910(relative to base address)
		AJunoPersistentPlayspace GetActorPersistentPlayspace(AActor* Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F09ACC(relative to base address)
		void ForEachComponentOfActorClassDefault(UClass* ActorClass, UClass* ComponentClass, FDelegateProperty& Func); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F097B4(relative to base address)
		FText CostlyFindAIDisplayNameFromUniqueAIIdentifier(UObject* WorldContextObject, FGameplayTag& UniqueAIIdentifier); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F096DC(relative to base address)
		void BreakHitResultThreadSafe(FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, UPhysicalMaterial* PhysMat, AActor* HitActor, UPrimitiveComponent* HitComponent, FName& HitBoneName, FName& BoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, FVector& TraceStart, FVector& TraceEnd); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F08E08(relative to base address)
	};


	// Class JunoGameNative.JunoCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UJunoCheatManager : public UChildCheatManager	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoCheatManager");
			return ret;
		}

		void JunoTurnOnWorldSetting(FName WorldSetting); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoTurnOffWorldSetting(FName WorldSetting); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoTransitionWeatherNow(FName OptionalLocation); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoToggleKnowledgeFiltering(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoToggleKnowledgeDebugMenu(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoToggleFreeCrafting(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoToggleBlockUnownedMCPRecipesKnowledgeWhenUnfiltered(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoTeleportToPersistenceLocationOfInterest(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoTeleportToBackpack(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoSpawnMinifig(float Health); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void JunoShowDualLocalPlayerInventory(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoSetEmotion(int32_t EmotionIndex); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void JunoSavePersistenceDataCsvReport(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoSaveBuiltStructure(FString SaveName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void JunoRevealRecipesOfCategory(FName CraftingObjectTag, FName CategoryTag, FName SubCategoryTag); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF750F0C098(relative to base address)
		void JunoRevealRecipe(FName RecipeName); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoRevealBuildingTestRecipes(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoResavePlayerPersistence(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoResaveAllPersistentPlayspacesActorsAroundPlayer(float Max2DDistance); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void JunoResaveAllPersistentPlayspacesActors(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoProfiler_Item(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoProfiler_Creature(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoProfiler_BuildingSuburb(int32_t NumBuildings); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void JunoProfiler_BuildingPropBundle(FString PropBundleTemplateId); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void JunoProfiler_BuildingJunkyard(int32_t NumBuildings, bool bSpawnRandom); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74F49684C(relative to base address)
		void JunoProfiler_BuildingActor(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoProcessPlayerProgression(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoPrintWorldSettings(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoPrintPersistenceDataReport(bool bShowTemplateData, bool bShowActorInstanceData, bool bShowJunoUpdateActions, bool bShowJunoDeleteActions); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF750F0BF78(relative to base address)
		void JunoPrintConnectivityGraphSummary(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoPrintAreaAwesomeLevelInfo(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoLogPersistenceDebugInfo(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoLoadBuiltStructure(FString SaveName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void JunoListWorlds(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoGiveWeapon(FString WeaponPath); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void JunoForceWeatherState(FName NewWeatherType, FName OptionalLocation); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C7B5350(relative to base address)
		void JunoForcePlayerTemperature(FName NewTemperatureTag); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoForceAreaAwesomeLevelUpgrade(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoEnableSpawnedActorPersistentPlayspaceTracking(FName ActorName); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoEnableSandbox(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoEnableModeratorMode(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoEnableFreeBuild(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoDumpWorldPersistentContents(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoDumpAllDeltasAssetReferences(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoDisableSandbox(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoDisableModeratorMode(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoDisableFreeBuild(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoDestroyCurrentVillage(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoDestroyAllSupportStructures(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoDeleteWorld(FString JunoWorldId); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void JunoDeleteAllWorlds(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoCreateNewWorld(FString Title, int32_t AdventureSeed); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74E56B058(relative to base address)
		void JunoCreateCurrentWorldCheckpoint(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoCompleteGuidedBuildToStage(int32_t SectionIndex, int32_t StageIndex); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C39C954(relative to base address)
		void JunoCompleteGuidedBuild(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoCompleteCurrentGuidedBuildStage(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoClearKnowledgeCloudSave(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoClearFOW(bool bForCurrentTile); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoClearClientFOW(bool bForCurrentTile); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoCheckInWorldSaveDataAndExitPIE(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoChangeEnumWorldSetting(FName WorldSettingValue); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoApplyDamageToRadius(float Radius, float DamageToApply); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74E226C38(relative to base address)
		void JunoAFKKick(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoAdjustAreaAwesomePoints(int32_t AwesomePointsDelta); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void JunoAddEssence(FString EssencePath); // Flags: Final|Exec|Native|Private|Const, Memory Exec: 0x7FF74EC51B44(relative to base address)
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
		UMaterialParameterCollection* WeatherCollection; // 0xB8(0x8)
		FLinearColor TorchLightColorIC; // 0xC0(0x10)
		FLinearColor TorchCampfireLightColor; // 0xD0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWeatherFXComponent");
			return ret;
		}

		void NativelySetPlayerLocationRuntime(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750F0C284(relative to base address)
		void NativelySetDayNightLightDirectionColorRuntime(double RuinsWeight, double LavaWeight, double SurfaceWeight); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF750F0C178(relative to base address)
		bool IsLumen(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F0BED4(relative to base address)
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
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.JunoWorldConditionWeatherState");
			return ret;
		}

		void HandleWeatherChanged(FJunoEvent_WeatherPhaseChanged& Payload); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750F17948(relative to base address)
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
		unsigned char UnknownData00_6[0xA7]; // 0x299(0xA7) UNKNOWN PROPERTY
		TMap<int32_t, UInstancedStaticMeshComponent*> CellIdToISMC; // 0x340(0x50)
		unsigned char UnknownData01_6[0x10]; // 0x390(0x10) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent* ISMC; // 0x3A0(0x8)
		TArray<UInstancedStaticMeshComponent*> ISMCFreeList; // 0x3A8(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x3B8(0x10) UNKNOWN PROPERTY
		TArray<FVector> Positions; // 0x3C8(0x10)
		TArray<FLinearColor> Colors; // 0x3D8(0x10)
		TArray<FLinearColor> RandomColors; // 0x3E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.BlockOctreeManager");
			return ret;
		}

		void Towers(int32_t Rows, int32_t Cols); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F17A68(relative to base address)
	};


	// Class JunoGameNative.StressISMManager
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x60 (0x2F0 - 0x290)
	class AStressISMManager : public AInfo	
	{
	public:
		bool bPushUpdatesEveryTick; // 0x290(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent* ISMC; // 0x298(0x8)
		TArray<UInstancedStaticMeshComponent*> ChildISMC; // 0x2A0(0x10)
		TArray<FVector> Positions; // 0x2B0(0x10)
		TArray<FRotator> Rotations; // 0x2C0(0x10)
		TArray<FLinearColor> Colors; // 0x2D0(0x10)
		TArray<FLinearColor> RandomColors; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoGameNative.StressISMManager");
			return ret;
		}

		void Towers(int32_t Rows, int32_t Cols, int32_t Height); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F17B28(relative to base address)
		void SetNumChildISMC(int32_t Num); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F179E8(relative to base address)
		void PushUpdatesToISMC(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F179D4(relative to base address)
	};

}
