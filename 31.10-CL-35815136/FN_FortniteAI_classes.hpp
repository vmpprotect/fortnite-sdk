#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteAI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortniteAI.FortAITask_Move
	// Inherited from UAITask_MoveTo -> UAITask -> UGameplayTask -> UObject
	// Size: 0x48 (0x160 - 0x118)
	class UFortAITask_Move : public UAITask_MoveTo	
	{
	public:
		FFortMoveConfig MoveConfig; // 0x118(0x38)
		unsigned char UnknownData00_7[0x10]; // 0x150(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_Move");
			return ret;
		}
	};


	// Class FortniteAI.FortAITask_RotateToFace
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UFortAITask_RotateToFace : public UAITask	
	{
	public:
		AActor* FocusTarget; // 0x68(0x8)
		FVector FocalPoint; // 0x70(0x18)
		unsigned char UnknownData00_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_RotateToFace");
			return ret;
		}
	};


	// Class FortniteAI.FortNavModifierComponent
	// Inherited from UNavModifierComponent -> UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x230 - 0x190)
	class UFortNavModifierComponent : public UNavModifierComponent	
	{
	public:
		float LowSpeedSquareThreshold; // 0x190(0x4)
		float LowSpeedSquareDistanceThreshold; // 0x194(0x4)
		float LowSpeedRotationThreshold; // 0x198(0x4)
		float LowSpeedScaleThreshold; // 0x19C(0x4)
		bool bAutomaticNavBoundComputation : 1; // 0x1A0:0(0x1)
		bool bForceFailSafeExtent : 1; // 0x1A0:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		float ExtrapolationMultiplierForFailsafeExtent; // 0x1A4(0x4)
		TArray<UClass*> DisableForNavmeshClasses; // 0x1A8(0x10)
		UPrimitiveComponent* PrimCompAffectingNavMesh; // 0x1B8(0x8)
		unsigned char UnknownData01_7[0x70]; // 0x1C0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavModifierComponent");
			return ret;
		}

		void SetComponentAffectingNavMesh(UPrimitiveComponent* InComponentAffectingNavMesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA40444(relative to base address)
	};


	// Class FortniteAI.FortPhysicsObjectNavigationComponent
	// Inherited from UFortNavModifierComponent -> UNavModifierComponent -> UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x240 - 0x230)
	class UFortPhysicsObjectNavigationComponent : public UFortNavModifierComponent	
	{
	public:
		UFortPhysicsObjectComponent* PhysicsObjectComponent; // 0x230(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPhysicsObjectNavigationComponent");
			return ret;
		}

		void OnSleepStateChanged(UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Flags: RequiredAPI|Native|Protected, Memory Exec: 0x7FF74FA402B4(relative to base address)
	};


	// Class FortniteAI.FortAIAimingInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAIAimingInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIAimingInterface");
			return ret;
		}

		void GetAimingRotation(FRotator& OutRotation); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF74F91B190(relative to base address)
	};


	// Class FortniteAI.FortAIAimingManagerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAIAimingManagerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIAimingManagerInterface");
			return ret;
		}

		void ComputeAimingRotations(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74D099444(relative to base address)
	};


	// Class FortniteAI.FortAISmartObjectUserComponent
	// Inherited from UFortSmartObjectUserComponent -> USmartObjectUserComponent -> UActorComponent -> UObject
	// Size: 0x1C8 (0x2E8 - 0x120)
	class UFortAISmartObjectUserComponent : public UFortSmartObjectUserComponent	
	{
	public:
		float BaseRunningEvaluationTickInterval; // 0x120(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		UDataTable* AnimConfigTable; // 0x128(0x8)
		bool bLoadingAnimConfigAssets; // 0x130(0x1)
		unsigned char UnknownData01_6[0x17]; // 0x131(0x17) UNKNOWN PROPERTY
		FFortAISmartObjectEvaluationRequestInternalData RunningQueryInternalData; // 0x148(0xC0)
		TMap<FGameplayTag, FFortSmartObjectEvaluationResult> ResultsPerEvaluationTag; // 0x208(0x50)
		TArray<FSmartObjectBanned> SmartObjectsBannedList; // 0x258(0x10)
		float GlobalDelayToDisableSmartObjectUsage; // 0x268(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		TArray<FSmartObjectRecentlyUsed> SmartObjectsMostRecentlyUsed; // 0x270(0x10)
		TArray<FAIRuntimeParametersSmartObjectActivity> SmartObjectActivities; // 0x280(0x10)
		int32_t ActivitiesIDCount; // 0x290(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		AAIController* CachedController; // 0x298(0x8)
		AFortPawn* CachedPawn; // 0x2A0(0x8)
		FFortAIActiveCommandSOUsageData ActiveCommandSOUsageData; // 0x2A8(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<USmartObjectComponent*> RunningSmartObjectComponent; // 0x2C0(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x2C8(0x10) UNKNOWN PROPERTY
		TScriptInterface<Class> CachedLODSettingsManager; // 0x2D8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISmartObjectUserComponent");
			return ret;
		}

		UContextualAnimSceneAsset FindSmartObjectAnimSceneByTag(FGameplayTagContainer& Tags, AActor* SmartObjectActor); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F91B03C(relative to base address)
		UAnimMontage FindSmartObjectAnimMontageByTag(FGameplayTagContainer& Tags, AActor* SmartObjectActor); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F91AEE8(relative to base address)
		bool CommandAIToUseSO(FFortAICommandSOUsageData& CommandSOUsageData); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F91AE44(relative to base address)
	};


	// Class FortniteAI.FortAIBotSmartObjectUserComponent
	// Inherited from UFortAISmartObjectUserComponent -> UFortSmartObjectUserComponent -> USmartObjectUserComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x340 - 0x2E8)
	class UFortAIBotSmartObjectUserComponent : public UFortAISmartObjectUserComponent	
	{
	public:
		AFortAthenaAIBotController* CachedBotController; // 0x2E8(0x8)
		UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters; // 0x2F0(0x8)
		unsigned char UnknownData00_7[0x48]; // 0x2F8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIBotSmartObjectUserComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAICoverPositionProviderComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x130 (0x1D0 - 0xA0)
	class UFortAICoverPositionProviderComponent : public UActorComponent	
	{
	public:
		FNavAgentSelector SupportedNavAgents; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery IgnoreVisibilityCollisionTagQuery; // 0xA8(0x48)
		double TileProcessingStartDelay; // 0xF0(0x8)
		double CoverPositionUpdateCooldown; // 0xF8(0x8)
		double CoverPositionUpdateTileDelay; // 0x100(0x8)
		FMulticastInlineDelegate CoverPositionsUpdatedDelegate; // 0x108(0x10)
		unsigned char UnknownData01_7[0xB8]; // 0x118(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAICoverPositionProviderComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIEnvironmentalDangerSourceInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAIEnvironmentalDangerSourceInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface");
			return ret;
		}

		FBox GetDangerSourceBounds(); // Flags: Native|Event|Public|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF74F91B2F0(relative to base address)
		bool GetDangerSourceActive(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74E20ECE4(relative to base address)
		float GetDangerAtLocation(FVector& Location); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF74F91B218(relative to base address)
	};


	// Class FortniteAI.FortAIInjectedBehaviorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UFortAIInjectedBehaviorComponent : public UActorComponent	
	{
	public:
		TMap<UObject*, FFortAIInjectedBehaviorInjectorRuntime> InjectorsRuntimeData; // 0xA0(0x50)
		TArray<FFortInstancedInjectedBehavior> InstanceInjectedBehaviors; // 0xF0(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x100(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIInjectedBehaviorComponent");
			return ret;
		}

		void RemoveInjectedBehavior(FFortInstancedInjectedBehavior& InjectedBehavior); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F91B3FC(relative to base address)
		void AddInjectedBehavior(FFortInstancedInjectedBehavior& InjectedBehavior); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F91ADB4(relative to base address)
	};


	// Class FortniteAI.FortAIPawnSmartObjectUserComponent
	// Inherited from UFortAISmartObjectUserComponent -> UFortSmartObjectUserComponent -> USmartObjectUserComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x2E8 - 0x2E8)
	class UFortAIPawnSmartObjectUserComponent : public UFortAISmartObjectUserComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIPawnSmartObjectUserComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIPerceptionSystem
	// Inherited from UAIPerceptionSystem -> UAISubsystem -> UObject
	// Size: 0x0 (0x130 - 0x130)
	class UFortAIPerceptionSystem : public UAIPerceptionSystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIPerceptionSystem");
			return ret;
		}
	};


	// Class FortniteAI.FortAISmartObjectAnimWorldConditionSchema
	// Inherited from UWorldConditionSchema -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UFortAISmartObjectAnimWorldConditionSchema : public UWorldConditionSchema	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISmartObjectAnimWorldConditionSchema");
			return ret;
		}
	};


	// Class FortniteAI.FortAsyncAction_IsInitialNavSystemBuildLockCompleted
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAsyncAction_IsInitialNavSystemBuildLockCompleted : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnInitialNavSystemBuildLockCompleted; // 0x30(0x10)
		UWorld* World; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAsyncAction_IsInitialNavSystemBuildLockCompleted");
			return ret;
		}

		void InitialNavSystemBuildLockCompleted__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortAsyncAction_IsInitialNavSystemBuildLockCompleted InitialNavSystemBuildLockCompleted(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F91B34C(relative to base address)
		void HandleInitialNavigationLockReleased(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F91B338(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotCharacterCustomization
	// Inherited from UObject
	// Size: 0x130 (0x158 - 0x28)
	class UFortAthenaAIBotCharacterCustomization : public UObject	
	{
	public:
		FFortAthenaLoadout CustomizationLoadout; // 0x28(0x130)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotCharacterCustomization");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotInventoryItems
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortAthenaAIBotInventoryItems : public UObject	
	{
	public:
		TArray<FItemAndCount> Items; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotInventoryItems");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortAthenaAIRuntimeParameters : public UObject	
	{
	public:
		int32_t ExtractedLevel; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotDigestedSkillSet
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAIBotDigestedSkillSet : public UFortAthenaAIRuntimeParameters	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotReactToVerbDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAIBotReactToVerbDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float OverriddenReactionDistance; // 0x30(0x4)
		float OverriddenHighPriorityReactionDistance; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotReactToVerbDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotSkillSet
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortAthenaAIBotSkillSet : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotReactToVerbSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortAthenaAIBotReactToVerbSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat OverriddenReactionDistance; // 0x30(0x28)
		FScalableFloat OverriddenHighPriorityReactionDistance; // 0x58(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotReactToVerbSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIControllerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaAIControllerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIControllerInterface");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAILODSettings
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaAILODSettings : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILODSettings");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAILODSettings_AIEvaluator
	// Inherited from UObject
	// Size: 0x288 (0x2B0 - 0x28)
	class UFortAthenaAILODSettings_AIEvaluator : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<UClass*> SystemClasses; // 0x30(0x10)
		FFortAILODSetting_AIEvaluator BelowLowerLODSettings; // 0x40(0x68)
		FFortAILODSetting_AIEvaluator LowerLODSettings; // 0xA8(0x68)
		FFortAILODSetting_AIEvaluator AboveLowerLODSettings; // 0x110(0x68)
		FFortAILODSetting_AIEvaluator BelowNormalLODSettings; // 0x178(0x68)
		FFortAILODSetting_AIEvaluator NormalLODSettings; // 0x1E0(0x68)
		FFortAILODSetting_AIEvaluator AboveNormalLODSettings; // 0x248(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILODSettings_AIEvaluator");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAILODSettings_CharacterMovement
	// Inherited from UObject
	// Size: 0x948 (0x970 - 0x28)
	class UFortAthenaAILODSettings_CharacterMovement : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<UClass*> SystemClasses; // 0x30(0x10)
		FFortAILODSetting_CharacterMovement BelowLowerLODSettings; // 0x40(0x188)
		FFortAILODSetting_CharacterMovement LowerLODSettings; // 0x1C8(0x188)
		FFortAILODSetting_CharacterMovement AboveLowerLODSettings; // 0x350(0x188)
		FFortAILODSetting_CharacterMovement BelowNormalLODSettings; // 0x4D8(0x188)
		FFortAILODSetting_CharacterMovement NormalLODSettings; // 0x660(0x188)
		FFortAILODSetting_CharacterMovement AboveNormalLODSettings; // 0x7E8(0x188)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILODSettings_CharacterMovement");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAILODSettings_FortWeaponRanged
	// Inherited from UObject
	// Size: 0x288 (0x2B0 - 0x28)
	class UFortAthenaAILODSettings_FortWeaponRanged : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<UClass*> SystemClasses; // 0x30(0x10)
		FFortAILODSetting_FortWeaponRanged BelowLowerLODSettings; // 0x40(0x68)
		FFortAILODSetting_FortWeaponRanged LowerLODSettings; // 0xA8(0x68)
		FFortAILODSetting_FortWeaponRanged AboveLowerLODSettings; // 0x110(0x68)
		FFortAILODSetting_FortWeaponRanged BelowNormalLODSettings; // 0x178(0x68)
		FFortAILODSetting_FortWeaponRanged NormalLODSettings; // 0x1E0(0x68)
		FFortAILODSetting_FortWeaponRanged AboveNormalLODSettings; // 0x248(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILODSettings_FortWeaponRanged");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAILODSettings_GenericTickingObject
	// Inherited from UObject
	// Size: 0x168 (0x190 - 0x28)
	class UFortAthenaAILODSettings_GenericTickingObject : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<UClass*> SystemClasses; // 0x30(0x10)
		FFortAILODSetting_GenericTickingObject BelowLowerLODSettings; // 0x40(0x38)
		FFortAILODSetting_GenericTickingObject LowerLODSettings; // 0x78(0x38)
		FFortAILODSetting_GenericTickingObject AboveLowerLODSettings; // 0xB0(0x38)
		FFortAILODSetting_GenericTickingObject BelowNormalLODSettings; // 0xE8(0x38)
		FFortAILODSetting_GenericTickingObject NormalLODSettings; // 0x120(0x38)
		FFortAILODSetting_GenericTickingObject AboveNormalLODSettings; // 0x158(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILODSettings_GenericTickingObject");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortAthenaAISpawnerDataComponent : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_ConstructionBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase");
			return ret;
		}

		bool GetConstructionBuildingInfo(FConstructionBuildingList& OutConstructionInfoList); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74FACCFC0(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConstruction
	// Inherited from UFortAthenaAISpawnerDataComponent_ConstructionBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x90 (0xC0 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotConstruction : public UFortAthenaAISpawnerDataComponent_ConstructionBase	
	{
	public:
		FConstructionBuildingList ConstructionBuildingInfoList; // 0x30(0x90)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConstruction");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_BehaviorBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase");
			return ret;
		}

		UBehaviorTree GetBehaviorTree(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACCEE0(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_Behavior
	// Inherited from UFortAthenaAISpawnerDataComponent_BehaviorBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAISpawnerDataComponent_Behavior : public UFortAthenaAISpawnerDataComponent_BehaviorBase	
	{
	public:
		UBehaviorTree* BehaviorTree; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_Behavior");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_ChanceEncounterBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_ChanceEncounterBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_ConversationBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_ConversationBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_ConversationBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_DebugBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_DebugBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_DebugBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_LODBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_LODBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_LODBase");
			return ret;
		}

		FClientAILODSettings GetClientAILODSettings(); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74FACCF28(relative to base address)
		UFortAthenaAILODSettingsContainer GetAILODSettingsContainer(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF748C4D310(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_LOD
	// Inherited from UFortAthenaAISpawnerDataComponent_LODBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x2F8 (0x328 - 0x30)
	class UFortAthenaAISpawnerDataComponent_LOD : public UFortAthenaAISpawnerDataComponent_LODBase	
	{
	public:
		UClass* LODSettings; // 0x30(0x8)
		FClientAILODSettings ClientLODSettings; // 0x38(0x2F0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_LOD");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_VehicleBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_VehicleBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_VehicleBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_VoiceBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_VoiceBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_VoiceBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerData
	// Inherited from UFortAthenaSpawnerDataBase -> UObject
	// Size: 0xD8 (0x120 - 0x48)
	class UFortAthenaAISpawnerData : public UFortAthenaSpawnerDataBase	
	{
	public:
		TArray<UFortAthenaAISpawnerDataComponent*> ClassComponentList; // 0x48(0x10)
		UClass* InventoryComponent; // 0x58(0x8)
		UClass* SpawnParamsComponent; // 0x60(0x8)
		UClass* BehaviorComponent; // 0x68(0x8)
		UClass* AffiliationComponent; // 0x70(0x8)
		UClass* LODComponent; // 0x78(0x8)
		UClass* DebugComponent; // 0x80(0x8)
		UClass* AnalyticComponent; // 0x88(0x8)
		UClass* GameplayComponent; // 0x90(0x8)
		UClass* ConversationComponent; // 0x98(0x8)
		UClass* VoiceComponent; // 0xA0(0x8)
		UClass* CosmeticComponent; // 0xA8(0x8)
		UClass* ChanceEncounterComponent; // 0xB0(0x8)
		UClass* OptimizationComponent; // 0xB8(0x8)
		UClass* GameplayAbilityComponent; // 0xC0(0x8)
		UClass* PerceptionComponent; // 0xC8(0x8)
		UClass* SmartObjectComponent; // 0xD0(0x8)
		UClass* GroupComponent; // 0xD8(0x8)
		UClass* ScriptComponent; // 0xE0(0x8)
		UClass* TokenComponent; // 0xE8(0x8)
		UClass* AnimationComponent; // 0xF0(0x8)
		FScalableFloat SpawnIntervalOverride; // 0xF8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerData");
			return ret;
		}

		UFortAthenaAISpawnerDataComponent_VoiceBase GetVoiceComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0B50(relative to base address)
		UFortAthenaAISpawnerDataComponent_TokenBase GetTokenComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0B08(relative to base address)
		UFortAthenaAISpawnerDataComponent_SpawnParamsBase GetSpawnParamsComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA089C(relative to base address)
		UFortAthenaAISpawnerDataComponent_SmartObjectBaseClass GetSmartObjectComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0878(relative to base address)
		UFortAthenaAISpawnerDataComponent_ScriptBase GetScriptComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0830(relative to base address)
		UFortAthenaAISpawnerDataComponent_PerceptionBase GetPerceptionComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA07E8(relative to base address)
		UFortAthenaAISpawnerDataComponent_OptimBase GetOptimizationComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA06E8(relative to base address)
		UFortAthenaAISpawnerDataComponent_InventoryBase GetInventoryComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0658(relative to base address)
		UFortAthenaAISpawnerDataComponent_GroupBase GetGroupComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0634(relative to base address)
		UFortAthenaAISpawnerDataComponent_GameplayBase GetGameplayComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0610(relative to base address)
		UFortAthenaAISpawnerDataComponent_GameplayAbilityBase GetGameplayAbilityComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA05EC(relative to base address)
		UFortAthenaAISpawnerDataComponent_DebugBase GetDebugComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA045C(relative to base address)
		UFortAthenaAISpawnerDataComponent_CosmeticBase GetCosmeticComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0414(relative to base address)
		UFortAthenaAISpawnerDataComponent_ConversationBase GetConversationComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA03F0(relative to base address)
		UFortAthenaAISpawnerDataComponent_ChanceEncounterBase GetChanceEncounterComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA029C(relative to base address)
		UFortAthenaAISpawnerDataComponent_BehaviorBase GetBehaviorComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0278(relative to base address)
		UFortAthenaAISpawnerDataComponent_AnimationBase GetAnimationComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA01C0(relative to base address)
		UFortAthenaAISpawnerDataComponent_AnalyticBase GetAnalyticComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E047ACC(relative to base address)
		UFortAthenaAISpawnerDataComponent_LODBase GetAILODComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0178(relative to base address)
		UFortAthenaAISpawnerDataComponent_AffiliationBase GetAffiliationComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA019C(relative to base address)
		UFortAthenaAISpawnerDataComponentList CreateComponentListFromClass(UClass* AISpawnerDataClass, UObject* OuterObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA9FE6C(relative to base address)
		UFortAthenaAISpawnerDataComponentList CreateComponentList(UObject* OuterObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA9FDDC(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotSpawnerData
	// Inherited from UFortAthenaAISpawnerData -> UFortAthenaSpawnerDataBase -> UObject
	// Size: 0x28 (0x148 - 0x120)
	class UFortAthenaAIBotSpawnerData : public UFortAthenaAISpawnerData	
	{
	public:
		UClass* SkillSetComponent; // 0x120(0x8)
		UClass* ConstructionComponent; // 0x128(0x8)
		UClass* VehicleComponent; // 0x130(0x8)
		UClass* CoverComponent; // 0x138(0x8)
		UClass* PerksComponent; // 0x140(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotSpawnerData");
			return ret;
		}

		UFortAthenaAISpawnerDataComponent_VehicleBase GetVehicleComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0B2C(relative to base address)
		UFortAthenaAISpawnerDataComponent_SkillsetBase GetSkillSetComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0854(relative to base address)
		UFortAthenaAISpawnerDataComponent_PerksBase GetPerksComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA080C(relative to base address)
		UFortAthenaAISpawnerDataComponent_CoverBase GetCoverComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0438(relative to base address)
		UFortAthenaAISpawnerDataComponent_ConstructionBase GetConstructionComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA03CC(relative to base address)
	};


	// Class FortniteAI.FortAthenaNPCSpawnerData
	// Inherited from UFortAthenaAIBotSpawnerData -> UFortAthenaAISpawnerData -> UFortAthenaSpawnerDataBase -> UObject
	// Size: 0x0 (0x148 - 0x148)
	class UFortAthenaNPCSpawnerData : public UFortAthenaAIBotSpawnerData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNPCSpawnerData");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaPlayerBotSpawnerData
	// Inherited from UFortAthenaAIBotSpawnerData -> UFortAthenaAISpawnerData -> UFortAthenaSpawnerDataBase -> UObject
	// Size: 0x0 (0x148 - 0x148)
	class UFortAthenaPlayerBotSpawnerData : public UFortAthenaAIBotSpawnerData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaPlayerBotSpawnerData");
			return ret;
		}
	};


	// Class FortniteAI.FortBotNameSettings
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortBotNameSettings : public UObject	
	{
	public:
		TEnumAsByte<EBotNamingMode> NamingMode; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FText OverrideName; // 0x30(0x10)
		bool bAddPlayerIDSuffix; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBotNameSettings");
			return ret;
		}
	};


	// Class FortniteAI.FortCustomNavLinkProcessor
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCustomNavLinkProcessor : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCustomNavLinkProcessor");
			return ret;
		}
	};


	// Class FortniteAI.FortDoorLinkOpenerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortDoorLinkOpenerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortDoorLinkOpenerInterface");
			return ret;
		}
	};


	// Class FortniteAI.FortGameFeatureAction_AddCustomNavLinkProcessor
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortGameFeatureAction_AddCustomNavLinkProcessor : public UGameFeatureAction	
	{
	public:
		UClass* CustomNavLinkProcessor; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortGameFeatureAction_AddCustomNavLinkProcessor");
			return ret;
		}
	};


	// Class FortniteAI.FortInjectedBehavior
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class UFortInjectedBehavior : public UObject	
	{
	public:
		UClass* AIEvaluator; // 0x28(0x8)
		UClass* AIService; // 0x30(0x8)
		FStateTreeReference DecisionStateTree; // 0x38(0x28)
		float Interval; // 0x60(0x4)
		float RandomDeviation; // 0x64(0x4)
		UBehaviorTree* InjectedBehaviorTree; // 0x68(0x8)
		FStateTreeReference ActionStateTree; // 0x70(0x28)
		float ActionInterval; // 0x98(0x4)
		float ActionRandomDeviation; // 0x9C(0x4)
		FFortBlackboardParameterManager BlackboardParameterManager; // 0xA0(0x68)
		uint32_t Priority; // 0x108(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortInjectedBehavior");
			return ret;
		}
	};


	// Class FortniteAI.FortMetaNavArea
	// Inherited from UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UFortMetaNavArea : public UNavAreaMeta	
	{
	public:
		TArray<FNavAgentData> AgentData; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortMetaNavArea");
			return ret;
		}
	};


	// Class FortniteAI.FortMetaNavArea_Wall
	// Inherited from UFortMetaNavArea -> UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UFortMetaNavArea_Wall : public UFortMetaNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortMetaNavArea_Wall");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea
	// Inherited from UNavArea -> UNavAreaBase -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UFortNavArea : public UNavArea	
	{
	public:
		bool bObstacle : 1; // 0x48:0(0x1)
		bool bSmashable : 1; // 0x48:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_DefaultSmashable
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_DefaultSmashable : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_DefaultSmashable");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_PlayerBuiltSmashable
	// Inherited from UFortNavArea_DefaultSmashable -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_PlayerBuiltSmashable : public UFortNavArea_DefaultSmashable	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_PlayerBuiltSmashable");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_WoodenWall
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_WoodenWall : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_WoodenWall");
			return ret;
		}
	};


	// Class FortniteAI.FortPawnComponent_AISequencer
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UFortPawnComponent_AISequencer : public UFortPawnComponent	
	{
	public:
		UMovieSceneSequencePlayer* BoundSceneSequencePlayer; // 0xA8(0x8)
		FMovieSceneObjectBindingID BoundSceneSequenceBindingID; // 0xB0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AISequencer");
			return ret;
		}

		void OnPawnDestroyed(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F91D198(relative to base address)
		void BoundSequenceOnStopped(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void BoundSequenceOnPlay(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void BoundSequenceOnPause(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void BoundSequenceOnFinished(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class FortniteAI.FortQueryContext_AIBotExtraData_Actor
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AIBotExtraData_Actor : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_AIBotExtraData_Actor");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_AIBotExtraData_Box_Center
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AIBotExtraData_Box_Center : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_AIBotExtraData_Box_Center");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_AIBotExtraData_Box_Extents
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_AIBotExtraData_Box_Extents : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_AIBotExtraData_Box_Extents");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_ConverterPawn
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_ConverterPawn : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_ConverterPawn");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_ConverterController
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_ConverterController : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_ConverterController");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_ConverterViewLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_ConverterViewLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_ConverterViewLocation");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_ConverterViewRotation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_ConverterViewRotation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_ConverterViewRotation");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_ClosestLandscapeLocation
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_ClosestLandscapeLocation : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_ClosestLandscapeLocation");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_LeashCenter
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_LeashCenter : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_LeashCenter");
			return ret;
		}
	};


	// Class FortniteAI.FortSpawnPointsPercentageCurveSequence
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortSpawnPointsPercentageCurveSequence : public UDataAsset	
	{
	public:
		TArray<FDataTableRowHandle> SpawnPointsPercentageCurves; // 0x30(0x10)
		TEnumAsByte<EFortIntensityCurveSequenceType> SequenceType; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortSpawnPointsPercentageCurveSequence");
			return ret;
		}
	};


	// Class FortniteAI.TimeSlicedExecutor
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UTimeSlicedExecutor : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.TimeSlicedExecutor");
			return ret;
		}
	};


	// Class FortniteAI.TrainTrackerSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UTrainTrackerSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.TrainTrackerSubsystem");
			return ret;
		}
	};


	// Class FortniteAI.AIHotSpot
	// Inherited from AActor -> UObject
	// Size: 0x1B0 (0x440 - 0x290)
	class AAIHotSpot : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TArray<UAIHotSpotSlot*> UserSlots; // 0x298(0x10)
		UAIHotSpotSlotGenerator* SlotGenerator; // 0x2A8(0x8)
		TArray<UAIHotSpotSlot*> Slots; // 0x2B0(0x10)
		AActor* FocusActor; // 0x2C0(0x8)
		UClass* FilterClass; // 0x2C8(0x8)
		FVector CustomNavmeshSearchExtent; // 0x2D0(0x18)
		bool bStartEnabled : 1; // 0x2E8:0(0x1)
		bool bAllowSlotlessAssignment : 1; // 0x2E8:1(0x1)
		bool bAllowClaimingMultipleSlots : 1; // 0x2E8:2(0x1)
		bool bTrackOverlappingSlots : 1; // 0x2E8:3(0x1)
		bool bProjectSlotsOnNavmesh : 1; // 0x2E8:4(0x1)
		bool bCustomNavmeshSearchExtent : 1; // 0x2E8:5(0x1)
		bool bIsEnabled : 1; // 0x2E8:6(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		TArray<AAIController*> NoSlotAssignees; // 0x2F0(0x10)
		unsigned char UnknownData02_6[0x128]; // 0x300(0x128) UNKNOWN PROPERTY
		UPrimitiveComponent* RenderingComponent; // 0x428(0x8)
		UBillboardComponent* SpriteComponent; // 0x430(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x438(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpot");
			return ret;
		}

		void SetEnabled(bool bEnabled); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F8D9074(relative to base address)
		int32_t RemoveGroupFromHotspot(TArray<AAIController*> GroupOfAI); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9302A4(relative to base address)
		bool RemoveFromHotspot(AAIController* AI, bool bAssignFromWaitingList); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9301D8(relative to base address)
		void OnSlotOccupied(AAIController* AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F9300DC(relative to base address)
		void OnSlotFreed(AAIController* AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92FFE0(relative to base address)
		void OnSlotEnabled(int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92FF1C(relative to base address)
		void OnSlotDisabled(int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92FE58(relative to base address)
		void OnSlotClaimed(AAIController* AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92FD5C(relative to base address)
		void OnSlotBlocked(AAIController* AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92FC60(relative to base address)
		void OnRemovedSlotlessBehavior(AAIController* AI, bool bIsClamingSlot); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92FB94(relative to base address)
		void OnRemovedBehavior(AAIController* AI, int32_t Index, int32_t UserId, EAIHotSpotSlot PrevState, bool bWasOnWaitingList); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92FA10(relative to base address)
		void OnMoveToSlotFinished(AAIController* AI, int32_t Index, int32_t UserId, bool bResult); // Flags: BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74F92F8D0(relative to base address)
		void OnHotSpotEnabled(); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF747E38E94(relative to base address)
		void OnHotSpotDisabled(); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C388930(relative to base address)
		bool OnAssignedSlotlessBehavior(AAIController* AI); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92F83C(relative to base address)
		bool OnAssignedOccupiedBehavior(AAIController* AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92F73C(relative to base address)
		bool OnAssignedClaimedBehavior(AAIController* AI, int32_t Index, int32_t UserId, bool bWasOnWaitingList); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92F5F8(relative to base address)
		bool OccupySlotByIndex(int32_t Index); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F92F2C8(relative to base address)
		bool IsSlotlessAssignmentAllowed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92F170(relative to base address)
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92F138(relative to base address)
		bool IsAIAllowed(AAIController* AI); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74F92F010(relative to base address)
		bool HasEnabledSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EFD0(relative to base address)
		bool HasAssignedAI(AAIController* AI, EAIHotSpotAssignmentFilter Filter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EF0C(relative to base address)
		int32_t GetSlotUserIdByIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EE80(relative to base address)
		EAIHotSpotSlot GetSlotStateByOwner(AAIController* AIOwner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EDD8(relative to base address)
		EAIHotSpotSlot GetSlotStateByIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92ED4C(relative to base address)
		FRotator GetSlotRotationByIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EC94(relative to base address)
		AAIController GetSlotOwnerByIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EBD0(relative to base address)
		FVector GetSlotLocationByIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EB30(relative to base address)
		int32_t GetSlotIndexByOwner(AAIController* AIOwner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EA78(relative to base address)
		int32_t GetSlotCount(EAIHotSpotSlotFilter Filter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E9D4(relative to base address)
		UAIHotSpotSlot GetSlotByOwner(AAIController* AIOwner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E938(relative to base address)
		UAIHotSpotSlot GetSlotByIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E8AC(relative to base address)
		int32_t GetAssignedAICount(EAIHotSpotAssignmentFilter Filter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E7B4(relative to base address)
		TArray GetAssignedAI(EAIHotSpotAssignmentFilter Filter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E6F0(relative to base address)
		TArray FindBestSlotIndices(TArray<AAIController*> AI); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E5E8(relative to base address)
		int32_t FindBestSlotIndex(AAIController* AI); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E554(relative to base address)
		bool CanUseSlotByIndex(AAIController* AI, int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E490(relative to base address)
		bool AssignToSlotByIndex(AAIController* AI, int32_t Index); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F92E3C8(relative to base address)
		bool AssignToHotspot(AAIController* AI); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C388D60(relative to base address)
		int32_t AssignGroupToHotspot(TArray<AAIController*> GroupOfAI); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F92E2DC(relative to base address)
		void AssignFromWaitingList(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F92E2C8(relative to base address)
	};


	// Class FortniteAI.AIHotSpotManagerProxy
	// Inherited from UAIHotSpotManager -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UAIHotSpotManagerProxy : public UAIHotSpotManager	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpotManagerProxy");
			return ret;
		}
	};


	// Class FortniteAI.AIHotSpotRenderingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x520 - 0x518)
	class UAIHotSpotRenderingComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpotRenderingComponent");
			return ret;
		}
	};


	// Class FortniteAI.AIHotSpotSlot
	// Inherited from UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UAIHotSpotSlot : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FTransform LocalTransform; // 0x30(0x60)
		float Height; // 0x90(0x4)
		float Radius; // 0x94(0x4)
		float DistanceToFocusActor; // 0x98(0x4)
		int32_t UserId; // 0x9C(0x4)
		bool bStartEnabled : 1; // 0xA0:0(0x1)
		bool bHasCachedAgentData : 1; // 0xA0:1(0x1)
		bool bHasOverlappingSlots : 1; // 0xA0:2(0x1)
		bool bHasDistanceToFocusActor : 1; // 0xA0:3(0x1)
		bool bIsBlockingOthers : 1; // 0xA0:4(0x1)
		bool bIsEnabled : 1; // 0xA0:5(0x1)
		unsigned char UnknownData01_5[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		AAIController* Owner; // 0xA8(0x8)
		int32_t SlotIndex; // 0xB0(0x4)
		EAIHotSpotSlot SlotState; // 0xB4(0x1)
		unsigned char UnknownData02_7[0x6B]; // 0xB5(0x6B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpotSlot");
			return ret;
		}

		void SetSlotState(EAIHotSpotSlot NewState); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9304DC(relative to base address)
		void SetSlotOwnerAndState(AAIController* NewOwner, EAIHotSpotSlot NewState); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F930414(relative to base address)
		void SetSlotEnabled(bool bNewEnabled); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F930390(relative to base address)
		void OnStateChanged(AAIController* SlotOwner, EAIHotSpotSlot NewState); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92F154(relative to base address)
		bool IsAIAllowed(AAIController* AI); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74F92F0A4(relative to base address)
		bool HasUserId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EFF4(relative to base address)
		int32_t GetSlotUserId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EE68(relative to base address)
		EAIHotSpotSlot GetSlotState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92ED34(relative to base address)
		FRotator GetSlotRotation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EC5C(relative to base address)
		float GetSlotRadius(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749FBC638(relative to base address)
		AAIController GetSlotOwner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333214(relative to base address)
		FVector GetSlotLocation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EB08(relative to base address)
		int32_t GetSlotIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE90(relative to base address)
		float GetSlotHeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EA60(relative to base address)
		FBox GetSlotBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E864(relative to base address)
		AAIHotSpot GetHotSpot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E840(relative to base address)
		void ClearSlot(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74802F76C(relative to base address)
	};


	// Class FortniteAI.AthenaAIBudgetManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x248 (0x278 - 0x30)
	class UAthenaAIBudgetManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x30(0x30) UNKNOWN PROPERTY
		TMap<TWeakObjectPtr, FAthenaMemoryBudgetInterfaces> StaticallyRegisteredPawns; // 0x60(0x50)
		unsigned char UnknownData01_7[0x1C8]; // 0xB0(0x1C8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIBudgetManager");
			return ret;
		}
	};


	// Class FortniteAI.FortAIController
	// Inherited from AAIController -> AController -> AActor -> UObject
	// Size: 0x1C0 (0x578 - 0x3B8)
	class AFortAIController : public AAIController	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x3B8(0x28) UNKNOWN PROPERTY
		bool bUsingNavMesh : 1; // 0x3E0:0(0x1)
		bool bAlwaysNotifyBumpWall : 1; // 0x3E0:1(0x1)
		bool bInstantRotation : 1; // 0x3E0:2(0x1)
		bool bTurnTransitionsEnabled : 1; // 0x3E0:3(0x1)
		unsigned char UnknownBit01 : 1; // 0x3E0:4(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit02 : 1; // 0x3E0:5(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit03 : 1; // 0x3E0:6(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit04 : 1; // 0x3E0:7(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit05 : 1; // 0x3E1:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit06 : 1; // 0x3E1:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit07 : 1; // 0x3E1:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit08 : 1; // 0x3E1:3(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit09 : 1; // 0x3E1:4(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit10 : 1; // 0x3E1:5(0x1) UNKNOWN PROPERTY
		bool bIgnoreAllActorsThatAreNotPawnsOrBuildings : 1; // 0x3E1:6(0x1)
		bool bAllowHotspotAbilityLooping : 1; // 0x3E1:7(0x1)
		unsigned char UnknownData11_5[0x6]; // 0x3E2(0x6) UNKNOWN PROPERTY
		UFortPathFollowingComponent* FortPathFollowingComp; // 0x3E8(0x8)
		FAIHotSpotUseInfo CurrentHotSpot; // 0x3F0(0x18)
		UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent; // 0x408(0x8)
		float GoalInfoUpdateRate; // 0x410(0x4)
		float GoalVisibilityPersistanceTime; // 0x414(0x4)
		unsigned char UnknownData12_6[0xB0]; // 0x418(0xB0) UNKNOWN PROPERTY
		AFortPawn* MyFortPawn; // 0x4C8(0x8)
		AFortAIPawn* MyFortAIPawn; // 0x4D0(0x8)
		FMulticastInlineDelegate OnTeamSetDelegate; // 0x4D8(0x10)
		FMulticastInlineDelegate OnControllerComponentAttachedEvent; // 0x4E8(0x10)
		unsigned char UnknownData13_6[0x18]; // 0x4F8(0x18) UNKNOWN PROPERTY
		UAIGoalComponent* AIGoalComponent; // 0x510(0x8)
		UFortPawnComponent_Sleep* PawnSleepComponent; // 0x518(0x8)
		FMulticastInlineDelegate OnPawnKilledEvent; // 0x520(0x10)
		unsigned char UnknownData14_6[0x20]; // 0x530(0x20) UNKNOWN PROPERTY
		UBehaviorTree* BTAssetToRunOnPawnAISpawned; // 0x550(0x8)
		FGameplayTag DescriptorTag; // 0x558(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x55C(0x4) UNKNOWN PROPERTY
		UFortGameStateComponent_AffiliationManager* CachedAffiliationManager; // 0x560(0x8)
		unsigned char UnknownData16_7[0x10]; // 0x568(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIController");
			return ret;
		}

		void WakeUp(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9568FC(relative to base address)
		void UnlockMovementResource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9567A4(relative to base address)
		void UnlockBehaviorResource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F956770(relative to base address)
		void SetupCustomVIM(UClass* VIM); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9563DC(relative to base address)
		void SetTeamInt(char InTeam); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F95635C(relative to base address)
		void SetTeam(TEnumAsByte<EFortTeam> InTeam); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9562D0(relative to base address)
		void SetFullPeripheralVision(bool bNewFullPeripheralVision); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F955EE8(relative to base address)
		void SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F955C30(relative to base address)
		void OnGoalActorChanged(AActor* OldGoalActor, AActor* NewGoalActor); // Flags: RequiredAPI|Native|Protected, Memory Exec: 0x7FF74F954664(relative to base address)
		void LockMovementResource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9540CC(relative to base address)
		void LockBehaviorResource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F954098(relative to base address)
		bool IsIgnoringProximity(AFortAIController* FortAIController); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F49B59C(relative to base address)
		bool IsAllowedToSleep(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9537A4(relative to base address)
		void IgnoreProximityForDuration(float DurationToIgnore); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F953720(relative to base address)
		UFortAIEncounterInfo GetEncounterInfo(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F952970(relative to base address)
		bool CreateBuildingActor(UClass* BuildingClass, FVector BuildLoc, FRotator BuildRot, bool bMirrored); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F952198(relative to base address)
		void ClearAllFocalPoints(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F95204C(relative to base address)
	};


	// Class FortniteAI.AthenaAIController
	// Inherited from AFortAIController -> AAIController -> AController -> AActor -> UObject
	// Size: 0x90 (0x608 - 0x578)
	class AAthenaAIController : public AFortAIController	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x578(0x20) UNKNOWN PROPERTY
		UFortGameplayAbility* PrimaryMeleeAttackAbilityInstance; // 0x598(0x8)
		UFortGameplayAbility* PrimaryRangedAttackAbilityInstance; // 0x5A0(0x8)
		FVector NavWalkingSearchExtentScale; // 0x5A8(0x18)
		float CheapFlyingNavPointHorizontalGridRatio; // 0x5C0(0x4)
		float CheapFlyingNavNavPointVerticalGridRatio; // 0x5C4(0x4)
		FGameplayTagContainer CheapFlyingNavSmashableAbilityTag; // 0x5C8(0x20)
		bool bEnableCheapFlyingNavigation : 1; // 0x5E8:0(0x1)
		bool bAllowBacktrackPathfinding : 1; // 0x5E8:1(0x1)
		bool bIsGoalRequiredForBehavior : 1; // 0x5E8:2(0x1)
		bool bAutomaticallyChooseClosestTargetAsGoal : 1; // 0x5E8:3(0x1)
		bool bAutoGenerateHotspotOnPlayerBuildings : 1; // 0x5E8:4(0x1)
		bool bAutoAttackOnMovedHit : 1; // 0x5E8:5(0x1)
		unsigned char UnknownBit01 : 1; // 0x5E8:6(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit02 : 1; // 0x5E8:7(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit03 : 1; // 0x5E9:0(0x1) UNKNOWN PROPERTY
		bool bRegisterToAthenaAIDropper : 1; // 0x5E9:1(0x1)
		unsigned char UnknownData04_5[0x6]; // 0x5EA(0x6) UNKNOWN PROPERTY
		AActor* SecondaryGoalActor; // 0x5F0(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x5F8(0x8) UNKNOWN PROPERTY
		UAthenaPathFollowingComponent* AthenaPFC; // 0x600(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIController");
			return ret;
		}
	};


	// Class FortniteAI.FortAIPerceptionComponent
	// Inherited from UAIPerceptionComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x198 - 0x188)
	class UFortAIPerceptionComponent : public UAIPerceptionComponent	
	{
	public:
		float LosingSightRadiusBump; // 0x188(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x18C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIPerceptionComponent");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIPerceptionComponent
	// Inherited from UFortAIPerceptionComponent -> UAIPerceptionComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x1A0 - 0x198)
	class UAthenaAIPerceptionComponent : public UFortAIPerceptionComponent	
	{
	public:
		TWeakObjectPtr<UFortAthenaAIRuntimeParametersComponent*> CachedAIRuntimeParametersComponent; // 0x198(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIPerceptionComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortBehaviorTreeComponent
	// Inherited from UBehaviorTreeComponent -> UBrainComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x2C8 - 0x298)
	class UFortBehaviorTreeComponent : public UBehaviorTreeComponent	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x298(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBehaviorTreeComponent");
			return ret;
		}
	};


	// Class FortniteAI.AthenaBehaviorTreeComponent
	// Inherited from UFortBehaviorTreeComponent -> UBehaviorTreeComponent -> UBrainComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x2C8 - 0x2C8)
	class UAthenaBehaviorTreeComponent : public UFortBehaviorTreeComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaBehaviorTreeComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDirector
	// Inherited from AActor -> UObject
	// Size: 0xD78 (0x1008 - 0x290)
	class AFortAIDirector : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		FCurveTableRowHandle MaxAliveCurve; // 0x2A0(0x10)
		FCurveTableRowHandle MinAliveCurve; // 0x2B0(0x10)
		FIntensityData IntensityInfo; // 0x2C0(0x30)
		FFortAIEncounterPIDController AIDirectorPIDController; // 0x2F0(0x68)
		FFortAIEncounterPIDControllerSettings PIDControllerSettings; // 0x358(0x30)
		FUtilityData UtilityContributionData; // 0x388(0x400)
		float UnreachableLocationPathCost; // 0x788(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x78C(0x4) UNKNOWN PROPERTY
		FFortPlayerPerformanceEstimateSettings PlayerPerformanceEstimateSettings; // 0x790(0x40)
		bool bUsePrototypeEnemies : 1; // 0x7D0:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x7D1(0x3) UNKNOWN PROPERTY
		bool bForceByPassNavMeshForAISpawning; // 0x7D4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x7D5(0x3) UNKNOWN PROPERTY
		TArray<TEnumAsByte> DebugEncounterDirections; // 0x7D8(0x10)
		EDespawnAIType DespawnAIType; // 0x7E8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x7E9(0x3) UNKNOWN PROPERTY
		float DespawnDistance; // 0x7EC(0x4)
		float DespawnInterval; // 0x7F0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x7F4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer DebugSpawnAIGroupTags; // 0x7F8(0x20)
		FGameplayTagContainer DebugEncounterTags; // 0x818(0x20)
		float BurstSpawnThreatVisualsEndDelay; // 0x838(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x83C(0x4) UNKNOWN PROPERTY
		TArray<FFortAIEncounterSpawnGroupCapsProfile> EncounterSpawnGroupCapSettings; // 0x840(0x10)
		TArray<FFortAIEncounterSpawnPointsProfile> EncounterSpawnPointsSettings; // 0x850(0x10)
		TArray<FFortAIEncounterPawnDifficultyLevelModifier> EncounterPawnDifficultyLevelModifiers; // 0x860(0x10)
		TArray<FFortAISpawnGroupUpgradeData> SpawnGroupUpgrades; // 0x870(0x10)
		float GuaranteedUpgradeGroupUtilityBonus; // 0x880(0x4)
		float DiscreteEncounterUtilityDesireMappings; // 0x884(0x10)
		TEnumAsByte<EFortAIUtility> InitialDynamicUtilities; // 0x894(0x4)
		FEncounterEnvironmentQueryInfo SpawnLocationPlacementQueries; // 0x898(0xA0)
		FEncounterEnvironmentQueryInfo SpawnLocationActorSearchQueries; // 0x938(0xA0)
		UFortAIDirectorDataTrackingSettings* DataTrackingSettings; // 0x9D8(0x8)
		TArray<FDataTableRowHandle> BaseLootDropData; // 0x9E0(0x10)
		TArray<FFortAILootDropModifiers> LootDropModifiers; // 0x9F0(0x10)
		FGameplayTagQuery LootDropDenialQuery; // 0xA00(0x48)
		bool bDebugEncounterQueries : 1; // 0xA48:0(0x1)
		unsigned char UnknownData07_5[0x17]; // 0xA49(0x17) UNKNOWN PROPERTY
		TArray<AFortPlayerControllerZone*> PlayerControllersForBVTree; // 0xA60(0x10)
		TArray<AFortPlayerPawn*> PlayerPawnsForBVTree; // 0xA70(0x10)
		unsigned char UnknownData08_6[0x30]; // 0xA80(0x30) UNKNOWN PROPERTY
		TArray<AFortAIController*> AIControllersForBVTree; // 0xAB0(0x10)
		TArray<AFortAIPawn*> AIPawnsForBVTree; // 0xAC0(0x10)
		unsigned char UnknownData09_6[0x30]; // 0xAD0(0x30) UNKNOWN PROPERTY
		TArray<AFortAthenaAIBotController*> AIPlayerBotControllersForBVTree; // 0xB00(0x10)
		TArray<AFortPlayerPawn*> AIPlayerBotPawnsForBVTree; // 0xB10(0x10)
		unsigned char UnknownData10_6[0x30]; // 0xB20(0x30) UNKNOWN PROPERTY
		TArray<AFortAthenaAIBotController*> AINonPlayerBotControllersForBVTree; // 0xB50(0x10)
		TArray<AFortPlayerPawn*> AINonPlayerBotPawnsForBVTree; // 0xB60(0x10)
		unsigned char UnknownData11_6[0x30]; // 0xB70(0x30) UNKNOWN PROPERTY
		TArray<AFortPlayerPawn*> NonPlayerBotPawns; // 0xBA0(0x10)
		TArray<AFortPlayerPawn*> PlayerBotPawns; // 0xBB0(0x10)
		TArray<AFortPlayerPawn*> PlayerPawns; // 0xBC0(0x10)
		TArray<AFortAIPawn*> FortAIPawns; // 0xBD0(0x10)
		unsigned char UnknownData12_6[0x100]; // 0xBE0(0x100) UNKNOWN PROPERTY
		bool bUseLODSettings; // 0xCE0(0x1)
		unsigned char UnknownData13_6[0x6F]; // 0xCE1(0x6F) UNKNOWN PROPERTY
		TScriptInterface<Class> CachedLODSettingsManager; // 0xD50(0x10)
		bool bAsyncProcessUpdateAliveAIs; // 0xD60(0x1)
		bool bAllowProcessPlayerTargeting; // 0xD61(0x1)
		unsigned char UnknownData14_6[0x2]; // 0xD62(0x2) UNKNOWN PROPERTY
		int32_t MaxNumLODAIProcessPerFrame; // 0xD64(0x4)
		FFortEncounterPawnNumberCaps DefaultEncounterPawnCaps; // 0xD68(0x18)
		unsigned char UnknownData15_6[0x8]; // 0xD80(0x8) UNKNOWN PROPERTY
		UReporterGraph* IntensityGraph; // 0xD88(0x8)
		UReporterGraph* UtilitiesGraph; // 0xD90(0x8)
		UReporterGraph* PIDValuesGraph; // 0xD98(0x8)
		UReporterGraph* PIDContributionsGraph; // 0xDA0(0x8)
		bool bNightActive : 1; // 0xDA8:0(0x1)
		bool bAIDisabled : 1; // 0xDA8:1(0x1)
		bool bRegisteredForDayPhaseChange : 1; // 0xDA8:2(0x1)
		bool bUseSpawnCap : 1; // 0xDA8:3(0x1)
		unsigned char UnknownData16_5[0x3]; // 0xDA9(0x3) UNKNOWN PROPERTY
		int32_t NightCount; // 0xDAC(0x4)
		float NightEncounterFailureBreatherTime; // 0xDB0(0x4)
		float EncounterPawnSpawnInterval; // 0xDB4(0x4)
		UClass* DefaultNightEncounter; // 0xDB8(0x8)
		UClass* DummyDebugEncounter; // 0xDC0(0x8)
		UClass* BaseEncounterClass; // 0xDC8(0x8)
		int32_t MaxActiveAlive; // 0xDD0(0x4)
		int32_t NumActiveAlive; // 0xDD4(0x4)
		int32_t NumPendingCapRelevantAI; // 0xDD8(0x4)
		unsigned char UnknownData17_6[0x54]; // 0xDDC(0x54) UNKNOWN PROPERTY
		TArray<FPendingSpawnInfo> PendingSpawns; // 0xE30(0x10)
		int32_t MaxAISpawnedPerFrame; // 0xE40(0x4)
		int32_t MaxAIDespawnedPerFrame; // 0xE44(0x4)
		int32_t DespawnAllAIMaxAIDespawnedPerFrame; // 0xE48(0x4)
		unsigned char UnknownData18_6[0x4]; // 0xE4C(0x4) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> PendingDespawns; // 0xE50(0x10)
		unsigned char UnknownData19_6[0x8]; // 0xE60(0x8) UNKNOWN PROPERTY
		int32_t NumWorldSubdivides; // 0xE68(0x4)
		float MinAISpawnDistanceFromPlayers; // 0xE6C(0x4)
		FGameplayTagContainer AmbientThreatPreferredPlacementActorTags; // 0xE70(0x20)
		FGameplayTagContainer AmbientThreatRequiredPlacementActorTags; // 0xE90(0x20)
		TArray<UFortAIEncounterInfo*> ActiveEncounters; // 0xEB0(0x10)
		TArray<UFortAIEncounterInfo*> InactiveEncounters; // 0xEC0(0x10)
		TArray<FFortPendingStoppedEncounterData> PendingStoppedEncounters; // 0xED0(0x10)
		UFortAIEncounterInfo* ActiveDefaultEncounter; // 0xEE0(0x8)
		UFortAIEncounterInfo* ActiveDummyDebugEncounter; // 0xEE8(0x8)
		TArray<UFortAIEncounterSequence*> EncounterSequences; // 0xEF0(0x10)
		UEQSRenderingComponent* EQSRenderingComp; // 0xF00(0x8)
		int32_t DebugGraphUpdateFrequency; // 0xF08(0x4)
		float MaxNormalLODDistanceToPlayer; // 0xF0C(0x4)
		float AIRelevantDistanceToPlayer; // 0xF10(0x4)
		float EncounterRelevantDistanceToPlayer; // 0xF14(0x4)
		float EncounterRelevantDistanceToDefender; // 0xF18(0x4)
		unsigned char UnknownData20_6[0x4]; // 0xF1C(0x4) UNKNOWN PROPERTY
		TArray<TScriptInterface> PatrolWards; // 0xF20(0x10)
		unsigned char UnknownData21_6[0x4]; // 0xF30(0x4) UNKNOWN PROPERTY
		int32_t MaxTotalActiveAliveAI; // 0xF34(0x4)
		int32_t MaxEncounterActiveAliveAI; // 0xF38(0x4)
		int32_t MaxSPUsed; // 0xF3C(0x4)
		unsigned char UnknownData22_6[0x8]; // 0xF40(0x8) UNKNOWN PROPERTY
		TArray<FUtilityTypeFloatPair> DebugEncounterTopUtilityPercentages; // 0xF48(0x10)
		TArray<UCurveFloat*> DebugEncounterSpawnPointsCurves; // 0xF58(0x10)
		bool bDebugAllowEncounterModifierTags : 1; // 0xF68:0(0x1)
		unsigned char UnknownData23_5[0x3]; // 0xF69(0x3) UNKNOWN PROPERTY
		int32_t SimulatedNumberOfPlayersForAIEncounters; // 0xF6C(0x4)
		unsigned char UnknownData24_6[0x78]; // 0xF70(0x78) UNKNOWN PROPERTY
		int32_t MaxNumberOfEncounterGroups; // 0xFE8(0x4)
		unsigned char UnknownData25_6[0x4]; // 0xFEC(0x4) UNKNOWN PROPERTY
		TArray<ABuildingProp_AISpawner*> RegisteredAISpawners; // 0xFF0(0x10)
		unsigned char UnknownData26_7[0x8]; // 0x1000(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDirector");
			return ret;
		}

		void UnregisterPatrolWard(TScriptInterface<Class> PatrolWard); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9567D8(relative to base address)
		UFortAIEncounterInfo StartEncounter(FString& EncounterInstigator, UFortDifficultyEncounterSettings* DifficultyEncounterSettings, FFortAIEncounterQueryData OptionalQueryData); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9564B4(relative to base address)
		void RegisterPatrolWard(TScriptInterface<Class> PatrolWard); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9558C0(relative to base address)
		void ReceivePawnSpawned(AFortPawn* SpawnedPawn); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PostDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRestStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRampStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerSpawn(AFortPlayerPawn* PlayerPawn); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerDied(AFortPlayerPawn* PlayerPawn); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPeakStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnDied(AFortAIPawn* KilledPawn); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFadeStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDirectorDeactivated(); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: Native|Public, Memory Exec: 0x7FF74F954100(relative to base address)
		bool IsPointTooCloseToPatrolWards(FVector& Point, EWardAffectType WardEffectTypeFilter); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F953F1C(relative to base address)
		bool IsLineTooCloseToPatrolWards(FVector& LineStart, FVector& LineEnd); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F953DB8(relative to base address)
		bool IsAnyEncounterGoalWithinDistanceOfPoint(FVector& Point, float Distance, bool bOnlyActiveEncounters); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F953BEC(relative to base address)
		bool IsAnyAIRelevantToPlayer(AFortPlayerPawn* Player); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F953834(relative to base address)
		bool IsAnyActiveEncounterRelevantToPlayer(AFortPlayerPawn* Player); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F953B48(relative to base address)
		bool IsAnyActiveEncounterRelevantToDefender(AFortAIPawn* Defender); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F953AA4(relative to base address)
		FVector GetVectorFromEncounterDirection(TEnumAsByte<EFortEncounterDirection> Direction); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F952EF8(relative to base address)
		TArray GetRiftsFromClosestActiveEncounterTo(AActor* Target); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F952CC4(relative to base address)
		int32_t GetPlayerPawnsInRange(FVector& Origin, float Radius, TArray<AFortPlayerPawn*>& OutPawns); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F952B34(relative to base address)
		int32_t GetNumPlayers(); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F0F6E48(relative to base address)
		int32_t GetNumActiveEncounters(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F95299C(relative to base address)
		TEnumAsByte GetEncounterDirectionFromVector(FVector DirectionVector); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F952850(relative to base address)
		void GetAmbientThreatEncounterSpawnLocations(TArray<FVector>& AmbientThreatEncounterSpawnLocations); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9524D8(relative to base address)
		void Deactivate(); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747E38E94(relative to base address)
		TArray ConvertInvalidDirectionsToValidDirections(TArray<TEnumAsByte> InvalidDirections); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F9520AC(relative to base address)
		void Activate(); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BA0AC4(relative to base address)
	};


	// Class FortniteAI.AthenaAIDirector
	// Inherited from AFortAIDirector -> AActor -> UObject
	// Size: 0x8 (0x1010 - 0x1008)
	class AAthenaAIDirector : public AFortAIDirector	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x1008(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIDirector");
			return ret;
		}

		void AggroOnActor(AAthenaAIController* AIController, AActor* Target); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F92E210(relative to base address)
	};


	// Class FortniteAI.AthenaAIDropper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAthenaAIDropper : public UObject	
	{
	public:
		TArray<FDroppingAgentData> InactiveAgents; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIDropper");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIPerceptionManager
	// Inherited from UAISubsystem -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UAthenaAIPerceptionManager : public UAISubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIPerceptionManager");
			return ret;
		}
	};


	// Class FortniteAI.AthenaNavSystemConfigOverride
	// Inherited from ANavSystemConfigOverride -> AActor -> UObject
	// Size: 0x0 (0x2A0 - 0x2A0)
	class AAthenaNavSystemConfigOverride : public ANavSystemConfigOverride	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavSystemConfigOverride");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAISettingsAIDIrectorLOD
	// Inherited from UDataAsset -> UObject
	// Size: 0xE8 (0x118 - 0x30)
	class UAthenaAISettingsAIDIrectorLOD : public UDataAsset	
	{
	public:
		TArray<FPlayerLODViewConeConfig> PlayerLODViewConeConfigs; // 0x30(0x10)
		FPlayerLODViewConeHysteresisConfig PlayerLODViewConeHysteresisConfig; // 0x40(0x50)
		FScalableFloat CouldBeVisibleViewConeAngleDegrees; // 0x90(0x28)
		FScalableFloat CouldBeVisibleMaxDistance; // 0xB8(0x28)
		FScalableFloat LODSortHysteresisDistance; // 0xE0(0x28)
		TArray<FFortAIDirectorPerLODConfig> FortAIDirectorLODConfigs; // 0x108(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAISettingsAIDIrectorLOD");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAISettings
	// Inherited from UDataAsset -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UAthenaAISettings : public UDataAsset	
	{
	public:
		bool bAllowAIDirector : 1; // 0x30:0(0x1)
		bool bAllowAIGoalManager : 1; // 0x30:1(0x1)
		bool bForceRVOUse : 1; // 0x30:2(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float MaxPlayerSpeedScaleFootstepSounds; // 0x34(0x4)
		float MinFootstepHearingRange; // 0x38(0x4)
		float MaxFootstepHearingRange; // 0x3C(0x4)
		float DamagedHearingRange; // 0x40(0x4)
		float CrouchHearingModifier; // 0x44(0x4)
		float MaxNPCHearingRange; // 0x48(0x4)
		float MaxPerceptualStimuliAge; // 0x4C(0x4)
		float DeAggroRange; // 0x50(0x4)
		float ReducedDeAggroRange; // 0x54(0x4)
		float DurationReduceAggroLimits; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		UClass* NavigationSystemConfig; // 0x60(0x8)
		UClass* StaticNavigationSystemConfig; // 0x68(0x8)
		TWeakObjectPtr<UAthenaAISettingsAIDIrectorLOD*> AIDIrectorLOD; // 0x70(0x20)
		TArray<UClass*> AIServices; // 0x90(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAISettings");
			return ret;
		}
	};


	// Class FortniteAI.FortAISystem
	// Inherited from UAISystem -> UAISystemBase -> UObject
	// Size: 0xA0 (0x218 - 0x178)
	class UFortAISystem : public UAISystem	
	{
	public:
		TArray<UFortQueryTwoPointSolver*> TwoPointSolvers; // 0x178(0x10)
		UFortInfluenceMap* InfluenceMap; // 0x188(0x8)
		UFortBotMissionManager* BotManager; // 0x190(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x198(0x10) UNKNOWN PROPERTY
		TArray<UFortRiftBlockerComponent*> ActiveRiftBlockers; // 0x1A8(0x10)
		unsigned char UnknownData01_6[0x50]; // 0x1B8(0x50) UNKNOWN PROPERTY
		UAthenaAISpawner* AISpawner; // 0x208(0x8)
		UAthenaAIServiceManager* AIServiceManager; // 0x210(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISystem");
			return ret;
		}

		bool IsInCone2D(FVector ConeOrigin, FVector ConeDirection, float HalfAngle, FVector LocationToCheck); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F9B9DE4(relative to base address)
	};


	// Class FortniteAI.AthenaAISystem
	// Inherited from UFortAISystem -> UAISystem -> UAISystemBase -> UObject
	// Size: 0x78 (0x290 - 0x218)
	class UAthenaAISystem : public UFortAISystem	
	{
	public:
		UAthenaAIPerceptionManager* PerceptionManager; // 0x218(0x8)
		UAthenaAIDropper* AIDropper; // 0x220(0x8)
		UAthenaAIPopulationTracker* AIPopulationTracker; // 0x228(0x8)
		UAthenaAIVehicleAvoidanceManager* AIVehicleAvoidanceManager; // 0x230(0x8)
		TArray<AAthenaAIController*> AIControllers; // 0x238(0x10)
		TArray<UAthenaPathFollowingComponent*> PathFollowingComponents; // 0x248(0x10)
		TArray<AActor*> RegisteredAISpawners; // 0x258(0x10)
		bool bUnlimitedAIHealth : 1; // 0x268:0(0x1)
		bool bNavigationReady : 1; // 0x268:1(0x1)
		unsigned char UnknownData00_7[0x27]; // 0x269(0x27) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAISystem");
			return ret;
		}

		void OnAIPawnSpawned(AController* SpawnedController, bool bIsABot, AFortPawn* FortAIPawn, AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F92F4C8(relative to base address)
		void OnAIPawnDied(AController* KilledController, bool bIsABot, AFortPawn* KilledAIPawn, AFortPlayerPawn* KilledPlayerPawn, AController* KillerController); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F92F35C(relative to base address)
		void OnAIPawnDestroyed(AFortPawn* DestroyedPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C088608(relative to base address)
		void HandlePlayerExitAircraft(AController* ExitingController); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C088608(relative to base address)
		void AIProfiling_OnSafeZoneUpdated(FFortSafeZonePhaseUpdatedEvent& Event); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74F92E1A4(relative to base address)
		void AIProfiling_OnGamePhaseChanged(FFortGamePhaseUpdatedEvent& Event); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74E74D514(relative to base address)
	};


	// Class FortniteAI.AthenaCreativeRift
	// Inherited from ABuildingRift -> ABuildingActor -> AActor -> UObject
	// Size: 0xF8 (0xC10 - 0xB18)
	class AAthenaCreativeRift : public ABuildingRift	
	{
	public:
		USphereComponent* DespawnSphereComponent; // 0xB18(0x8)
		ABuildingProp_AISpawner* ParentTrap; // 0xB20(0x8)
		FFortEncounterSettings OverrideEncounterSettings; // 0xB28(0xC0)
		bool bHasLoadedSettings; // 0xBE8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xBE9(0x7) UNKNOWN PROPERTY
		TArray<AFortPlayerPawn*> DespawnPlayerOverlaps; // 0xBF0(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xC00(0x8) UNKNOWN PROPERTY
		UFortAIManagerMinigameComponent* CachedAIMinigamecomponent; // 0xC08(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaCreativeRift");
			return ret;
		}

		void NotifyActorDespawnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F92F18C(relative to base address)
		void BlueprintShowRift(); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAI.FortPathFollowingComponentBase
	// Inherited from UCrowdFollowingComponent -> UPathFollowingComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x378 - 0x340)
	class UFortPathFollowingComponentBase : public UCrowdFollowingComponent	
	{
	public:
		AAIController* AIController; // 0x340(0x8)
		unsigned char UnknownData00_7[0x30]; // 0x348(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPathFollowingComponentBase");
			return ret;
		}
	};


	// Class FortniteAI.FortPathFollowingComponent
	// Inherited from UFortPathFollowingComponentBase -> UCrowdFollowingComponent -> UPathFollowingComponent -> UActorComponent -> UObject
	// Size: 0x100 (0x478 - 0x378)
	class UFortPathFollowingComponent : public UFortPathFollowingComponentBase	
	{
	public:
		AFortAIController* MyAI; // 0x378(0x8)
		unsigned char UnknownData00_6[0x20]; // 0x380(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAIMoveBlockedEvent; // 0x3A0(0x10)
		float MovementBlockFrustrationCooldownSpeed; // 0x3B0(0x4)
		unsigned char UnknownData01_7[0xC4]; // 0x3B4(0xC4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPathFollowingComponent");
			return ret;
		}

		void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F9F0650(relative to base address)
		void OnAIMoveBlocked__DelegateSignature(FHitResult& HitResult); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAI.AthenaPathFollowingComponent
	// Inherited from UFortPathFollowingComponent -> UFortPathFollowingComponentBase -> UCrowdFollowingComponent -> UPathFollowingComponent -> UActorComponent -> UObject
	// Size: 0x40 (0x4B8 - 0x478)
	class UAthenaPathFollowingComponent : public UFortPathFollowingComponent	
	{
	public:
		EAthenaPathFollowingFocus FocusDirectionMethod; // 0x478(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x479(0x3) UNKNOWN PROPERTY
		float OffsetPathFromCornersDistance; // 0x47C(0x4)
		unsigned char UnknownData01_6[0x18]; // 0x480(0x18) UNKNOWN PROPERTY
		AAthenaAIController* AthenaAIController; // 0x498(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x4A0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaPathFollowingComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIComponent_Animation
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortAIComponent_Animation : public UActorComponent	
	{
	public:
		UProxyTable* ProxyTable; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIComponent_Animation");
			return ret;
		}

		UAnimMontage GetAnimMontage(UProxyAsset* ProxyAsset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F952598(relative to base address)
	};


	// Class FortniteAI.FortAthenaAITelemetryFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaAITelemetryFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAITelemetryFunctionLibrary");
			return ret;
		}

		UFortAthenaAITelemetryData GetOrCreateAITelemetryData(AActor* Owner, UClass* TelemetryDataClass); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74F9529B4(relative to base address)
	};


	// Class FortniteAI.FortAthenaAITelemetryData
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaAITelemetryData : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAITelemetryData");
			return ret;
		}
	};


	// Class FortniteAI.FortAIComponent_Telemetry
	// Inherited from UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UFortAIComponent_Telemetry : public UActorComponent	
	{
	public:
		AFortAIPawn* PossessedPawn; // 0xA0(0x8)
		AAthenaAIController* CachedAIController; // 0xA8(0x8)
		AController* DeathInstigator; // 0xB0(0x8)
		TArray<UItemDefinitionBase*> GrabbedPickups; // 0xB8(0x10)
		TArray<UItemDefinitionBase*> DroppedPickups; // 0xC8(0x10)
		UFortAthenaAIRuntimeParameters_AIAnalytic* AnalyticRuntimeParameters; // 0xD8(0x8)
		TArray<UFortAthenaAITelemetryData*> TelemetryData; // 0xE0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0xF0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIComponent_Telemetry");
			return ret;
		}

		void OnTetheredFollowerChanged(AFortPawn* NewFollower, AFortPawn* OldFollower); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F9550CC(relative to base address)
		void OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74F95472C(relative to base address)
		void OnDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74F954200(relative to base address)
		UFortAthenaAITelemetryData GetOrCreateTelemetryData(UClass* TelemetryDataClass); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F952A90(relative to base address)
	};


	// Class FortniteAI.FortAIComponent_Voice
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortAIComponent_Voice : public UActorComponent	
	{
	public:
		UFortTaggedSoundBank* VoiceSoundBank; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIComponent_Voice");
			return ret;
		}

		void SetVoiceSoundBank(UFortTaggedSoundBank* InSoundBank); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74958B8E0(relative to base address)
		UFortTaggedSoundBank GetVoiceSoundBank(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74920FD38(relative to base address)
	};


	// Class FortniteAI.FortAIManagerMinigameComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UFortAIManagerMinigameComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY
		TArray<FGameplayTag> SpawnableAITypeTags; // 0x100(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIManagerMinigameComponent");
			return ret;
		}

		void OnPawnSpawned(APawn* Pawn, int32_t RequestID); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F954FF4(relative to base address)
		void OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74F954B90(relative to base address)
		void HandleMinigameStarted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F95312C(relative to base address)
		FGameplayTag GetSpawnTagFromPawnObject(UObject* PawnObject); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F952E70(relative to base address)
	};


	// Class FortniteAI.FortAINavInvokerComponent
	// Inherited from UNavigationInvokerComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UFortAINavInvokerComponent : public UNavigationInvokerComponent	
	{
	public:
		bool bEnableAutomaticNavMeshAssignation : 1; // 0xB0:0(0x1)
		bool bSkipAgentHeightCheckWhenPickingNavData : 1; // 0xB0:1(0x1)
		bool bDestroyComponentIfUGCNavMeshOnDemandIsDisabled : 1; // 0xB0:2(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAINavInvokerComponent");
			return ret;
		}

		void SetInvokerRadii(float GenerationRadius, float RemovalRadius); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F955F7C(relative to base address)
		void RevertRadiiToDefault(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F955BE4(relative to base address)
		void GetCharacterCollisionComponent(TArray<UShapeComponent*>& OutCollisionComponents); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF74CDFED14(relative to base address)
	};


	// Class FortniteAI.FortAISpawnerUtilityComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x90 (0x130 - 0xA0)
	class UFortAISpawnerUtilityComponent : public UActorComponent	
	{
	public:
		FGameplayTag AIPawnSpawnTypeTag; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		UEnvQuery* EnvironmentQuery; // 0xA8(0x8)
		TArray<FEnvNamedValue> QueryParams; // 0xB0(0x10)
		float QueryRadius; // 0xC0(0x4)
		float QueryMinDistance; // 0xC4(0x4)
		FMulticastInlineDelegate OnEnvironmentQueryFinishedDelegate; // 0xC8(0x10)
		FMulticastInlineDelegate OnUnownedPawnDiedDelegate; // 0xD8(0x10)
		unsigned char UnknownData01_6[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY
		TArray<FVector> FreeSpawnSlots; // 0xF8(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		TScriptInterface<Class> CachedFortSpatialGameplay; // 0x120(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnerUtilityComponent");
			return ret;
		}

		void StartEnvironmentQuery(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F956734(relative to base address)
		void SetQueryRadius(float Radius); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9560CC(relative to base address)
		void SetMinigame(AFortMinigame* Minigame); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F956040(relative to base address)
		void SetEQSQuery(TWeakObjectPtr<UEnvQuery*> SelectedEQSQuery); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F955DEC(relative to base address)
		int32_t RequestSpawn(UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, FTransform& SpawnTransform); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9559E4(relative to base address)
		void OnUnownedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74F95522C(relative to base address)
		bool IsSpawnCountCapped(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		void HandleUnownedPawnSpawned(AFortPawn* FortPawn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F953558(relative to base address)
	};


	// Class FortniteAI.FortControllerComponent_AIRandomTargeter
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x118 - 0xA8)
	class UFortControllerComponent_AIRandomTargeter : public UFortControllerComponent	
	{
	public:
		FScalableFloat ChangeTargetTimeMin; // 0xA8(0x28)
		FScalableFloat ChangeTargetTimeMax; // 0xD0(0x28)
		unsigned char UnknownData00_7[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortControllerComponent_AIRandomTargeter");
			return ret;
		}
	};


	// Class FortniteAI.FortPawnComponent_AICustomEffects
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UFortPawnComponent_AICustomEffects : public UPawnComponent	
	{
	public:
		TArray<FNPCCustomEffect> CustomEffects; // 0xA0(0x10)
		TArray<UNiagaraComponent*> TrackedFXComponent; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AICustomEffects");
			return ret;
		}

		void SetCustomEffects(TArray<FNPCCustomEffect>& CustomEffectList); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F955D54(relative to base address)
		void PlayCustomEffect(UNiagaraSystem* Effect, FTransform& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9556A0(relative to base address)
		FNPCCustomEffect GetCustomEffect(FGameplayTag& CustomEffectTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F952764(relative to base address)
		void AddCustomEffect(FGameplayTag& CustomEffectTag, FNPCCustomEffect& InEffect); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F951DC8(relative to base address)
	};


	// Class FortniteAI.FortPawnComponent_AIInventoryManagement
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UFortPawnComponent_AIInventoryManagement : public UFortPawnComponent	
	{
	public:
		FGameplayTagContainer CanEquipItemTags; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIInventoryManagement");
			return ret;
		}
	};


	// Class FortniteAI.FortPawnComponent_AIPatrol
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD8 - 0xA8)
	class UFortPawnComponent_AIPatrol : public UFortPawnComponent	
	{
	public:
		FGameplayTag PatrolStateTag; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x1C]; // 0xAC(0x1C) UNKNOWN PROPERTY
		UFortItemDefinition* CurrentTraversalEmote; // 0xC8(0x8)
		bool bIsPatrolling; // 0xD0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIPatrol");
			return ret;
		}

		void StopPatrolling(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F95675C(relative to base address)
		void StartPatrolling(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F956748(relative to base address)
		void OnRep_IsPatrolling(); // Flags: Final|Native|Private, Memory Exec: 0x7FF748F3BDA8(relative to base address)
		void HandleRequestedEmote(UAthenaDanceItemDefinition* RequestedEmote); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F9534DC(relative to base address)
		void HandlePatrolStateTagCountChanged(FGameplayTag Tag, int32_t Count); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F953208(relative to base address)
		void HandleEmoteFinished(FAbilityEndedData& AbilityData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74F9530A8(relative to base address)
		void HandleAbilitySystemComponentInvalidated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F953094(relative to base address)
		void HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent* FortAbilitySystemComponent, AFortPlayerPawn* FortPlayerPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F952F8C(relative to base address)
	};


	// Class FortniteAI.FortPawnComponent_Sleep
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x148 - 0xA8)
	class UFortPawnComponent_Sleep : public UFortPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnBeginSleepEffects; // 0xA8(0x10)
		FMulticastInlineDelegate OnEndSleepEffects; // 0xB8(0x10)
		unsigned char UnknownData00_6[0x30]; // 0xC8(0x30) UNKNOWN PROPERTY
		bool bCanSleep : 1; // 0xF8:0(0x1)
		bool bIsSleeping : 1; // 0xF8:1(0x1)
		bool bShouldStartSleeping : 1; // 0xF8:2(0x1)
		unsigned char UnknownData01_5[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery SleepForTheseGoalActorsQuery; // 0x100(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_Sleep");
			return ret;
		}

		bool ShouldStartSleeping(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F956498(relative to base address)
		void SetSleepForGoalActorsQuery(FGameplayTagQuery& InQuery); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9561DC(relative to base address)
		void SetShouldStartSleeping(bool bHintStartSleeping); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F95614C(relative to base address)
		void SetCanSleep(bool bInCanSleep); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F955CC8(relative to base address)
		void OnRep_bIsSleeping(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F9550B8(relative to base address)
		bool IsSleeping(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F95407C(relative to base address)
		FGameplayTagQuery GetSleepForGoalActorsQuery(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F952E54(relative to base address)
		UFortPawnComponent_Sleep GetSleepComponent(AActor* Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F952DD4(relative to base address)
		bool CanSleepForActor(AActor* Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F951F34(relative to base address)
		bool CanSleep(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F951F18(relative to base address)
	};


	// Class FortniteAI.FortPawnComponent_StepAside
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UFortPawnComponent_StepAside : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_StepAside");
			return ret;
		}

		void HandlePawnUnpossessed(APawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F95345C(relative to base address)
		void HandlePawnPossessed(APawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F9533DC(relative to base address)
		void HandleOnDBNOChanged(AFortPawn* Pawn, bool bIsDBNO); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F953140(relative to base address)
	};


	// Class FortniteAI.FortAIDataProvider_Ability
	// Inherited from UAIDataProvider -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class UFortAIDataProvider_Ability : public UAIDataProvider	
	{
	public:
		FGameplayTagContainer AbilityTag; // 0x28(0x20)
		FGameplayTagContainer AbilityBehaviorDistanceTag; // 0x48(0x20)
		float BehaviorDistance; // 0x68(0x4)
		float MaxTargetSelectionRange; // 0x6C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDataProvider_Ability");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDataProvider_AIDirector
	// Inherited from UAIDataProvider -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortAIDataProvider_AIDirector : public UAIDataProvider	
	{
	public:
		float AIRelevantDistanceToPlayer; // 0x28(0x4)
		float EncounterRelevantDistanceToPlayer; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDataProvider_AIDirector");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDataProvider_FloatCurveOverGameDifficulty
	// Inherited from UAIDataProvider -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UFortAIDataProvider_FloatCurveOverGameDifficulty : public UAIDataProvider	
	{
	public:
		FScalableFloat ScalableFloat; // 0x28(0x28)
		float FloatValue; // 0x50(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDataProvider_FloatCurveOverGameDifficulty");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDataProvider_GoalProviderAbility
	// Inherited from UFortAIDataProvider_Ability -> UAIDataProvider -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFortAIDataProvider_GoalProviderAbility : public UFortAIDataProvider_Ability	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDataProvider_GoalProviderAbility");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDataProvider_LeashComponent
	// Inherited from UAIDataProvider -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UFortAIDataProvider_LeashComponent : public UAIDataProvider	
	{
	public:
		float LeashRadius; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FScalableFloat LeashRadiusOffset; // 0x30(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDataProvider_LeashComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDataProvider_Pawn
	// Inherited from UAIDataProvider -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UFortAIDataProvider_Pawn : public UAIDataProvider	
	{
	public:
		float SightRadius; // 0x28(0x4)
		float HearingRadius; // 0x2C(0x4)
		float ViewLocationOffsetFromGround; // 0x30(0x4)
		float MaxStepHeight; // 0x34(0x4)
		FVector TetheredBoxCenterLocation; // 0x38(0x18)
		float TetheredBoxWidth; // 0x50(0x4)
		float TetheredBoxHeight; // 0x54(0x4)
		float TetheredBoxEQSGridSize; // 0x58(0x4)
		float TetheredBoxEQSSpaceBetween; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDataProvider_Pawn");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDataProvider_ScalableFloat
	// Inherited from UAIDataProvider -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UFortAIDataProvider_ScalableFloat : public UAIDataProvider	
	{
	public:
		FScalableFloat ScalableFloat; // 0x28(0x28)
		float FloatValue; // 0x50(0x4)
		int32_t IntValue; // 0x54(0x4)
		bool BoolValue; // 0x58(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDataProvider_ScalableFloat");
			return ret;
		}
	};


	// Class FortniteAI.FortAIAssetLoader
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UFortAIAssetLoader : public UObject	
	{
	public:
		TArray<FPendingRequestManager> PendingRequests; // 0x28(0x10)
		TArray<UObject*> AssetsLoaded; // 0x38(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIAssetLoader");
			return ret;
		}
	};


	// Class FortniteAI.FortAIAssignment
	// Inherited from UObject
	// Size: 0xB0 (0xD8 - 0x28)
	class UFortAIAssignment : public UObject	
	{
	public:
		FFortAIAssignmentIdentifier AssignmentIdentifier; // 0x28(0x30)
		UFortAIAssignmentSettings* AssignmentSettings; // 0x58(0x8)
		UFortAIGoalProvider* GoalProvider; // 0x60(0x8)
		TArray<TWeakObjectPtr> GoalComponentsOnAssignment; // 0x68(0x10)
		unsigned char UnknownData00_6[0x50]; // 0x78(0x50) UNKNOWN PROPERTY
		TArray<FFortAIGoal> Goals; // 0xC8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIAssignment");
			return ret;
		}
	};


	// Class FortniteAI.FortAIAssignmentSettings
	// Inherited from UDataAsset -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UFortAIAssignmentSettings : public UDataAsset	
	{
	public:
		TArray<FGoalSelectionQueryInfo> GoalSelectionQueryInfos; // 0x30(0x10)
		bool bGoalLocationsAlwaysKnown; // 0x40(0x1)
		bool bIsEnemyAssignment; // 0x41(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer RequiredTags; // 0x48(0x20)
		FGameplayTagContainer ProhibitedTags; // 0x68(0x20)
		float MaxAIAllowedForAssignment; // 0x88(0x4)
		float MaxAIAllowedPerGoal; // 0x8C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIAssignmentSettings");
			return ret;
		}
	};


	// Class FortniteAI.FortAIBotDebugActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AFortAIBotDebugActor : public AActor	
	{
	public:
		UAthenaAIBotDebugMiniMapIndicator* BotDebugMiniMapIndicator; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIBotDebugActor");
			return ret;
		}

		void OnRep_BotDebugMiniMapIndicator(UAthenaAIBotDebugMiniMapIndicator* OldBotDebugMiniMap); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
	};


	// Class FortniteAI.FortAIBotPOIDebugActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AFortAIBotPOIDebugActor : public AActor	
	{
	public:
		UAthenaAIBotPOIDebugMiniMapIndicator* BotPOIDebugMiniMapIndicator; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIBotPOIDebugActor");
			return ret;
		}

		void OnRep_PlayerBotsDebugMiniMap(UAthenaAIBotPOIDebugMiniMapIndicator* OldPlayerBotsDebugMiniMap); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
	};


	// Class FortniteAI.FortAICustomTargetingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UFortAICustomTargetingComponent : public UActorComponent	
	{
	public:
		TArray<FAICustomTargetConfiguration> Configurations; // 0xA0(0x10)
		unsigned char UnknownData00_7[0x50]; // 0xB0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAICustomTargetingComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDirectorLODAIConfig
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UFortAIDirectorLODAIConfig : public UObject	
	{
	public:
		FScalableFloat SingleAIUnitCost; // 0x28(0x28)
		FScalableFloat Priority; // 0x50(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDirectorLODAIConfig");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDirectorDataManager
	// Inherited from AActor -> UObject
	// Size: 0xE0 (0x370 - 0x290)
	class AFortAIDirectorDataManager : public AActor	
	{
	public:
		UObject* OwnerObject; // 0x290(0x8)
		TArray<FAIDirectorEventData> EventsToTrack; // 0x298(0x10)
		TArray<FFortAIDirectorFactorData> FactorsToTrack; // 0x2A8(0x10)
		unsigned char UnknownData00_6[0xA0]; // 0x2B8(0xA0) UNKNOWN PROPERTY
		TArray<EFortAIDirectorFactor> FactorsBeingTracked; // 0x358(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x368(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDirectorDataManager");
			return ret;
		}

		void TriggerEvent(FFortAIDirectorEvent& TriggeredEvent); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74F981A04(relative to base address)
		float GetAIDirectorFactorValue(EFortAIDirectorFactor AIDirectorFactor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97CF9C(relative to base address)
	};


	// Class FortniteAI.FortAIDirectorDataTrackingSettings
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAIDirectorDataTrackingSettings : public UDataAsset	
	{
	public:
		UClass* PlayerDataManager; // 0x30(0x8)
		UClass* EncounterDataManager; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDirectorDataTrackingSettings");
			return ret;
		}
	};


	// Class FortniteAI.FortAIDirectorEventManager
	// Inherited from AActor -> UObject
	// Size: 0x50 (0x2E0 - 0x290)
	class AFortAIDirectorEventManager : public AActor	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x290(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDirectorEventManager");
			return ret;
		}
	};


	// Class FortniteAI.FortAIEncounterInfo
	// Inherited from UObject
	// Size: 0xD70 (0xD98 - 0x28)
	class UFortAIEncounterInfo : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UFortAISpawnGroupProgressionInfo* SpawnGroupProgressionInfo; // 0x38(0x8)
		FFortSpawnPointsPercentageCurveSequenceInstanceInfo SpawnPointsPercentageCurveSequence; // 0x40(0x10)
		FFortIntensityCurveSequenceInstanceInfo IntensityCurveSequence; // 0x50(0x10)
		float BurstSpawnPointsPercentage; // 0x60(0x4)
		float SpawnPointsMultiplier; // 0x64(0x4)
		bool bUseBreathers; // 0x68(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FCurveTableRowHandle LowPlayerPerformanceBreatherTimeSecondsCurve; // 0x70(0x10)
		FCurveTableRowHandle NormalPlayerPerformanceBreatherTimeSecondsCurve; // 0x80(0x10)
		FCurveTableRowHandle HighPlayerPerformanceBreatherTimeSecondsCurve; // 0x90(0x10)
		float EncounterTimeSeconds; // 0xA0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TArray<FUtilityTypeFloatPair> LockedUtilityValues; // 0xA8(0x10)
		int32_t NumFreeUtilities; // 0xB8(0x4)
		float UtilityAdjustmentPeriodSeconds; // 0xBC(0x4)
		float MinSpawnDistance; // 0xC0(0x4)
		float MaxSpawnDistance; // 0xC4(0x4)
		int32_t NumDirections; // 0xC8(0x4)
		bool bChangeDirectionsOnRest; // 0xCC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		float SpawnPointsPercentageLimit; // 0xD0(0x4)
		int32_t PawnNumberLimit; // 0xD4(0x4)
		FFortEncounterPawnNumberCaps PawnNumberCaps; // 0xD8(0x18)
		float SpawningIntervalSeconds; // 0xF0(0x4)
		float PreSpawnRequeryTime; // 0xF4(0x4)
		FFortEncounterSettingsFixedPace EncounterSettingsFixed; // 0xF8(0x14)
		unsigned char UnknownData04_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnEncounterSpawnDirectionsChosen; // 0x110(0x10)
		float NextRiftReplacementTime; // 0x120(0x4)
		float NextSpawningTime; // 0x124(0x4)
		FFortAIEncounterSpawnGroupCapsProfile EncounterSpawnGroupCapsProfile; // 0x128(0x30)
		TArray<FFortAIEncounterSpawnGroupCapsCategory> AdditionalSpawnGroupCapsCategories; // 0x158(0x10)
		FFortAIEncounterSpawnPointsProfile EncounterSpawnPointsProfile; // 0x168(0x40)
		TArray<FFortAISpawnGroupUpgradeData> AvailableUpgrades; // 0x1A8(0x10)
		TArray<FCurveTableRowHandle> PawnDifficultyLevelModifiers; // 0x1B8(0x10)
		TArray<FFortAIBaseLootDropRow> BaseLootDropRows; // 0x1C8(0x10)
		TArray<FFortAILootDropModifierRow> LootDropModifierRows; // 0x1D8(0x10)
		bool bRequiresReinitializationFromProfile; // 0x1E8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x1E9(0x7) UNKNOWN PROPERTY
		FCurveTableRowHandle DesiredHostilityCurve; // 0x1F0(0x10)
		UFortIntensityCurveSequenceProgression* IntensitySequenceProgression; // 0x200(0x8)
		unsigned char UnknownData06_6[0x70]; // 0x208(0x70) UNKNOWN PROPERTY
		float AliveMultiplier; // 0x278(0x4)
		TEnumAsByte<EFortEncounterSpawnLimitType> SpawnLimitType; // 0x27C(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x27D(0x3) UNKNOWN PROPERTY
		int32_t SpawnLimit; // 0x280(0x4)
		int32_t PawnNumberLimitProgress; // 0x284(0x4)
		int32_t SpawnPointsLimitProgress; // 0x288(0x4)
		bool bSpawnLimitReached; // 0x28C(0x1)
		bool bHasSpawnedAllBurstSpawnAI; // 0x28D(0x1)
		bool bOverrideAliveCounts; // 0x28E(0x1)
		unsigned char UnknownData08_6[0x1]; // 0x28F(0x1) UNKNOWN PROPERTY
		int32_t MinAliveOverride; // 0x290(0x4)
		int32_t MaxAliveOverride; // 0x294(0x4)
		float HostilityThreshold; // 0x298(0x4)
		float PeakTimeSeconds; // 0x29C(0x4)
		float BreatherTimeSeconds; // 0x2A0(0x4)
		float MaxRampTimeSeconds; // 0x2A4(0x4)
		float MinTimeBetweenBreathesSeconds; // 0x2A8(0x4)
		float MaxFadeTimeSeconds; // 0x2AC(0x4)
		float FadeEndIntensity; // 0x2B0(0x4)
		float FadeEndRemainingSpawnPointsPercentage; // 0x2B4(0x4)
		float CompletionPercentageToDisableBreathers; // 0x2B8(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnEncounterAllEnemiesKilled; // 0x2C0(0x10)
		FMulticastInlineDelegate OnEncounterEnemySpawned; // 0x2D0(0x10)
		FMulticastInlineDelegate OnEncounterEnemySpawnFailed; // 0x2E0(0x10)
		FMulticastInlineDelegate OnEncounterAllBurstEnemiesSpawned; // 0x2F0(0x10)
		FMulticastInlineDelegate OnEncounterCompleted; // 0x300(0x10)
		FMulticastInlineDelegate OnEncounterPawnDied; // 0x310(0x10)
		FMulticastInlineDelegate OnEncounterSpawnedFinalEnemy; // 0x320(0x10)
		FMulticastInlineDelegate OnEncounterRiftSpawned; // 0x330(0x10)
		FMulticastInlineDelegate OnBuildingRiftBlockedShouldDie; // 0x340(0x10)
		unsigned char UnknownData10_6[0x3]; // 0x350(0x3) UNKNOWN PROPERTY
		bool bDisplayThreatVisuals; // 0x353(0x1)
		float BaseDesiredUtilities; // 0x354(0x40)
		unsigned char UnknownData11_6[0x4]; // 0x394(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer UtilitiesRequiredTags; // 0x398(0x200)
		FGameplayTagContainer InjectedTagForUtilityCheck; // 0x598(0x20)
		unsigned char UnknownData12_6[0x4]; // 0x5B8(0x4) UNKNOWN PROPERTY
		float MaxLargeSpawnGroupDiscountInterval; // 0x5BC(0x4)
		float MaxSelectionToSpawningDelay; // 0x5C0(0x4)
		unsigned char UnknownData13_6[0x54]; // 0x5C4(0x54) UNKNOWN PROPERTY
		TArray<FUtilityTypeFloatPair> CurrentDesiredUtilities; // 0x618(0x10)
		float UtilityRecentSelectionPenalties; // 0x628(0x40)
		float UtilityEffectivenessMeasurements; // 0x668(0x40)
		FCurveTableRowHandle UtilityEffectivenessMultiplierCurve; // 0x6A8(0x10)
		float UtilityEffectivenessInfluenceCap; // 0x6B8(0x4)
		unsigned char UnknownData14_6[0x4]; // 0x6BC(0x4) UNKNOWN PROPERTY
		TArray<FUtilityTypeFloatPair> CurrentTopUtilityPercentages; // 0x6C0(0x10)
		TArray<TEnumAsByte> UsedTopUtilities; // 0x6D0(0x10)
		TArray<TEnumAsByte> CurrentlySelectedFreeUtilities; // 0x6E0(0x10)
		int32_t NumUtilitiesConsidered; // 0x6F0(0x4)
		float ReactivityPercentage; // 0x6F4(0x4)
		bool bAdjustUtilitiesDuringRest; // 0x6F8(0x1)
		bool bDespawnAIsDuringRest; // 0x6F9(0x1)
		unsigned char UnknownData15_6[0x2]; // 0x6FA(0x2) UNKNOWN PROPERTY
		float LastPlayerCombatFactorUpdateTime; // 0x6FC(0x4)
		float LastUtilityAdjustTime; // 0x700(0x4)
		float LastSpawnPointAdjustmentTime; // 0x704(0x4)
		float LastLargeGroupSpawnTime; // 0x708(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x70C(0x4) UNKNOWN PROPERTY
		TArray<FAIEncounterSpawnGroupWeights> EnemySpawnData; // 0x710(0x10)
		FFortAIEncounterPIDController EncounterPIDController; // 0x720(0x68)
		int32_t CurrentSpawnPointsCap; // 0x788(0x4)
		int32_t CurrentSpawnPointsUsed; // 0x78C(0x4)
		unsigned char UnknownData17_6[0x8]; // 0x790(0x8) UNKNOWN PROPERTY
		int32_t FailSafeMinSpawnPoints; // 0x798(0x4)
		unsigned char UnknownData18_6[0x4]; // 0x79C(0x4) UNKNOWN PROPERTY
		TArray<FSpawnGroupInstanceInfo> ActiveSpawnGroups; // 0x7A0(0x10)
		float EncounterEngagementDistance; // 0x7B0(0x4)
		float MinRelevantBuildingDamagedDistance; // 0x7B4(0x4)
		float MaxRelevantBuildingDamagedDistance; // 0x7B8(0x4)
		unsigned char UnknownData19_6[0x14]; // 0x7BC(0x14) UNKNOWN PROPERTY
		AActor* CurrentGroupSpawnPoint; // 0x7D0(0x8)
		TEnumAsByte<EFortEncounterState> EncounterState; // 0x7D8(0x1)
		TEnumAsByte<EFortEncounterPacingState> PacingState; // 0x7D9(0x1)
		unsigned char UnknownData20_6[0x2]; // 0x7DA(0x2) UNKNOWN PROPERTY
		float LastPacingStateTransitionTime; // 0x7DC(0x4)
		FFortAIEncounterWaveProgressEstimation WaveProgressEstimate; // 0x7E0(0x1C)
		float DesiredDifficultyLevel; // 0x7FC(0x4)
		float DifficultyLevelOverride; // 0x800(0x4)
		unsigned char UnknownData21_6[0x4]; // 0x804(0x4) UNKNOWN PROPERTY
		AFortAIDirector* MyAIDirector; // 0x808(0x8)
		TArray<FFortGoalActorEncounterDataManagerPair> DataManagers; // 0x810(0x10)
		AActor* TargetObjective; // 0x820(0x8)
		bool bOnlyActiveAtNight; // 0x828(0x1)
		unsigned char UnknownData22_6[0x3]; // 0x829(0x3) UNKNOWN PROPERTY
		int32_t NumRiftsToUse; // 0x82C(0x4)
		int32_t MinRiftsToUse; // 0x830(0x4)
		int32_t NumRiftsUsed; // 0x834(0x4)
		FFortEncounterSettings EncounterSettings; // 0x838(0xC0)
		float EncounterStartTime; // 0x8F8(0x4)
		float HostilityCurveStartTime; // 0x8FC(0x4)
		FEncounterEnvironmentQueryInfo DefaultEnvironmentQueryInfo; // 0x900(0x28)
		FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0x928(0x28)
		FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo; // 0x950(0x28)
		FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0x978(0x28)
		bool bNukeWavesAtDaybreak; // 0x9A0(0x1)
		bool bNukeWavesAtEncounterEnd; // 0x9A1(0x1)
		bool bNukeWavesAtEncounterDeactivation; // 0x9A2(0x1)
		unsigned char UnknownData23_6[0x1]; // 0x9A3(0x1) UNKNOWN PROPERTY
		int32_t ActiveEnemyCap; // 0x9A4(0x4)
		unsigned char UnknownData24_6[0x8]; // 0x9A8(0x8) UNKNOWN PROPERTY
		float CurrentHostilityLevel; // 0x9B0(0x4)
		unsigned char UnknownData25_6[0x4]; // 0x9B4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnEncounterRampStarted; // 0x9B8(0x10)
		FMulticastInlineDelegate OnEncounterPeakStarted; // 0x9C8(0x10)
		FMulticastInlineDelegate OnEncounterFadeStarted; // 0x9D8(0x10)
		FMulticastInlineDelegate OnEncounterRestStarted; // 0x9E8(0x10)
		FMulticastInlineDelegate OnEncounterCombatParticipation; // 0x9F8(0x10)
		FMulticastInlineDelegate OnEncounterOptionsChanged; // 0xA08(0x10)
		UClass* RiftClassTemplate; // 0xA18(0x8)
		unsigned char UnknownData26_6[0x20]; // 0xA20(0x20) UNKNOWN PROPERTY
		TMap<TWeakObjectPtr, FFortAISpawnerData> ExternalAISpawners; // 0xA40(0x50)
		FFortAIEncounterQueryData EncounterQueryData; // 0xA90(0x20)
		UFortAIEncounterRiftManager* RiftManager; // 0xAB0(0x8)
		FString AssociatedMissionName; // 0xAB8(0x10)
		TEnumAsByte<EFortMissionType> AssociatedMissionType; // 0xAC8(0x1)
		unsigned char UnknownData27_6[0x3]; // 0xAC9(0x3) UNKNOWN PROPERTY
		bool bCanBeActive : 1; // 0xACC:0(0x1)
		unsigned char UnknownData28_5[0x3]; // 0xACD(0x3) UNKNOWN PROPERTY
		TArray<UFortAIAssignment*> EncounterAssignments; // 0xAD0(0x10)
		UFortAIAssignmentSettings* DefaultEncounterAssignmentSettings; // 0xAE0(0x8)
		unsigned char UnknownData29_6[0x30]; // 0xAE8(0x30) UNKNOWN PROPERTY
		int32_t MaxActiveAlive; // 0xB18(0x4)
		int32_t MaxSpawnPointsUsed; // 0xB1C(0x4)
		UCurveFloat* OverrideSpawnPointsCurve; // 0xB20(0x8)
		unsigned char UnknownData30_6[0x1F8]; // 0xB28(0x1F8) UNKNOWN PROPERTY
		bool bSendFullAnalyticsReport; // 0xD20(0x1)
		bool bUseAILifespans; // 0xD21(0x1)
		bool bTrackCombatParticipation; // 0xD22(0x1)
		unsigned char UnknownData31_6[0x5]; // 0xD23(0x5) UNKNOWN PROPERTY
		FGameplayTagContainer ModifierTags; // 0xD28(0x20)
		TArray<FFortAIEncounterTimedModifierTags> TimedModifierTags; // 0xD48(0x10)
		FGameplayTagContainer GameContextTags; // 0xD58(0x20)
		AFortGameplayMutator_AILevelVariance* AILevelMutator; // 0xD78(0x8)
		TArray<AFortGameplayMutator_AIEncounterModifierTags*> EncounterModifierTagsMutators; // 0xD80(0x10)
		unsigned char UnknownData32_7[0x8]; // 0xD90(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterInfo");
			return ret;
		}

		void UnRegisterAISpawner(AActor* InAISpawner); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F981AA4(relative to base address)
		void SpawnTestAIGroup(UFortAISpawnGroup* SpawnGroupToSpawn, FVector SpawnLocation, FRotator SpawnRotation, AActor* SpawnSource, TArray<UFortAbilitySet*> AbilitySetsToGrantOnSpawn, FFortAISpawnGroupUpgradeData UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F980904(relative to base address)
		AFortAIPawn SpawnAIPawnReservedForEnemySpawner(AActor* EnemySpawner, FVector SpawnLocation, FRotator SpawnRotation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9806C0(relative to base address)
		void SetPawnNumberLimit(int32_t InPawnNumberLimit); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F980644(relative to base address)
		void SetNukeWavesAtEncounterEnd(bool bNuke); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9805C4(relative to base address)
		void SetEncounterActivationState(bool bEncounterActivityState); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F980058(relative to base address)
		void RequestActivation(int32_t ActivationDelay); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97FEBC(relative to base address)
		void RegisterAISpawner(AActor* InAISpawner); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97F9E4(relative to base address)
		void OnRestStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRampStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPeakStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGoalTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74F97F4C4(relative to base address)
		void OnGameDifficultyChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F97F4B0(relative to base address)
		void OnFadeStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEncounterPawnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF74F97F04C(relative to base address)
		void NotifyRiftDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74F97EBE8(relative to base address)
		bool GroupHasAIRemainingToSpawn(FFortAISpawnerData& FortAISpawnerData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97D578(relative to base address)
		int32_t GetPawnNumberLimit(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D558(relative to base address)
		float GetEncounterTimeSeconds(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EFEA96C(relative to base address)
		void GetEncounterRifts(TArray<ABuildingRift*>& OutRifts); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D3A8(relative to base address)
		AActor GetEncounterQueryActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D360(relative to base address)
		void GetEncounterGameplayTags(FGameplayTagContainer& OutEncounterTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D2A8(relative to base address)
		AFortAIDirectorDataManager GetEncounterDataManager(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F97D27C(relative to base address)
		void GetEncounterAssignmentGoalActors(TArray<AActor*>& OutGoalActors); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D1E0(relative to base address)
		bool GetCurrentSpawnAreaDirections(TArray<TEnumAsByte>& OutDirections); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D134(relative to base address)
		bool EncounterHasReservedSpawnRequestForEnemySpawner(AActor* EnemySpawner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97CE4C(relative to base address)
		void DespawnPendingAndCurrentAI(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97CD84(relative to base address)
		UFortAIAssignment CreateEncounterAssignment(UFortAIAssignmentSettings* AssignmentSettings, AActor* GoalActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97C904(relative to base address)
	};


	// Class FortniteAI.FortAIEncounterInfoOwnerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAIEncounterInfoOwnerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterInfoOwnerInterface");
			return ret;
		}

		UFortAIEncounterInfo GetEncounterInfo(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748DB959C(relative to base address)
	};


	// Class FortniteAI.FortAIEncounterRiftManager
	// Inherited from UObject
	// Size: 0x288 (0x2B0 - 0x28)
	class UFortAIEncounterRiftManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UFortAIEncounterInfo* MyEncounter; // 0x38(0x8)
		AFortAIDirector* AIDirector; // 0x40(0x8)
		FFortAIEncounterSpawnArea CurrentSpawnArea; // 0x48(0x58)
		FFortAIEncounterSpawnArea FutureSpawnArea; // 0xA0(0x58)
		float UpdateIntervalTimeSeconds; // 0xF8(0x4)
		int32_t NumRiftsToUse; // 0xFC(0x4)
		int32_t MinRiftsToUse; // 0x100(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FFortEncounterSettings EncounterSettings; // 0x108(0xC0)
		float ExtraSpawnLocationPercentage; // 0x1C8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0x1D0(0x28)
		FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0x1F8(0x28)
		FFortAIEncounterQueryDirectionTracker EncounterQueryDirectionTracker; // 0x220(0x48)
		UClass* RiftClassTemplate; // 0x268(0x8)
		float LastObjectiveBatchPathCostUpdateTime; // 0x270(0x4)
		float LastPlayerBatchPathCostUpdateTime; // 0x274(0x4)
		unsigned char UnknownData03_7[0x38]; // 0x278(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterRiftManager");
			return ret;
		}

		void OnRiftDestroyed(AActor* Rift); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F97F928(relative to base address)
		AFortMission GetAssociatedMission(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D0C4(relative to base address)
	};


	// Class FortniteAI.FortAIEncounterSequence
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UFortAIEncounterSequence : public UObject	
	{
	public:
		FFortGeneratedEncounterSequence GeneratedEncounterSequence; // 0x28(0x30)
		int32_t CurrentEncounterIndexInSequence; // 0x58(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		UFortAIEncounterInfo* CurrentEncounter; // 0x60(0x8)
		AFortAIDirector* AssociatedAIDirector; // 0x68(0x8)
		AFortMission* AssociatedMission; // 0x70(0x8)
		TArray<AActor*> TargetActors; // 0x78(0x10)
		UFortAIAssignmentSettings* AssignmentSettings; // 0x88(0x8)
		FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo; // 0x90(0x28)
		AActor* OptionalQueryActor; // 0xB8(0x8)
		FGameplayTagContainer InjectedTags; // 0xC0(0x20)
		FFortEncounterSettings EncounterSettings; // 0xE0(0xC0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterSequence");
			return ret;
		}

		void StopCurrentEncounter(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F981744(relative to base address)
		UFortAIEncounterInfo StartCurrentEncounterWithSavedData(EFortEncounterSequenceResult& OutRequestResult, int32_t ActivationDelay); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9815D8(relative to base address)
		UFortAIEncounterInfo StartCurrentEncounter(EFortEncounterSequenceResult& OutRequestResult, TArray<AActor*>& InTargetActors, UFortAIAssignmentSettings* InAssignmentSettings, FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, AActor* InOptionalQueryActor, FGameplayTagContainer InInjectedTags, FFortEncounterSettings InEncounterSettings, int32_t ActivationDelay); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F980F5C(relative to base address)
		void SetEncounterStartingData(TArray<AActor*>& InTargetActors, UFortAIAssignmentSettings* InAssignmentSettings, FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, AActor* InOptionalQueryActor, FGameplayTagContainer InInjectedTags, FFortEncounterSettings InEncounterSettings); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9800D8(relative to base address)
		EFortEncounterSequenceResult Previous(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97F9A8(relative to base address)
		EFortEncounterSequenceResult Next(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97EBBC(relative to base address)
		EFortEncounterSequenceResult Last(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97DA2C(relative to base address)
		bool IsOnFinalIndexInSequence(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97DA10(relative to base address)
		bool HasEncounter(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D674(relative to base address)
		int32_t GetNumEncountersInSequence(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3345F8(relative to base address)
		int32_t GetEncounterIndexInSequence(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1D04(relative to base address)
		UFortAIEncounterInfo GetCurrentEncounter(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D11C(relative to base address)
		bool EncounterBelongsToSequence(UFortAIEncounterInfo* InEncounter); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97CDBC(relative to base address)
	};


	// Class FortniteAI.FortAIEncounterTargetInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAIEncounterTargetInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterTargetInterface");
			return ret;
		}

		bool IsFloatingTarget(); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetObjectiveCompletionPercentage(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAI.FortAIFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAIFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIFunctionLibrary");
			return ret;
		}

		bool TeleportAIPawn(AFortAIPawn* AIPawn, FVector DestLocation, FRotator DestRotation, bool bIgnoreCollision); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F981758(relative to base address)
		void SetHearingRange(AActor* AIAgent, float Range); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F0AAE00(relative to base address)
		void RequestNavUpdateForBuilding(ABuildingActor* BuildingActor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F97FF3C(relative to base address)
		void MakeNoiseEventAtLocation(AActor* NoiseMaker, float MaxRange, FVector& NoiseLocation, FName NoiseTag); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F97E984(relative to base address)
		void MakeNoiseEvent(AActor* NoiseMaker, float MaxRange, FName NoiseTag); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F97E7B8(relative to base address)
		bool IsConcealedByPerceptionModifiers(UObject* WorldContextObject, FVector ObserverLocation, FVector TargetLocation, float& OutConcealment); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F97D690(relative to base address)
		UFortAthenaAIRuntimeParameters GetOrCreateAIRuntimeParameters(AAIController* AIController, UClass* ParametersClass); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F97D444(relative to base address)
		UAthenaAISpawner GetAISpawner(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F97D02C(relative to base address)
	};


	// Class FortniteAI.FortAIGoalManager
	// Inherited from AActor -> UObject
	// Size: 0x170 (0x400 - 0x290)
	class AFortAIGoalManager : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TArray<UFortAIAssignment*> WorldAssignments; // 0x298(0x10)
		TArray<UFortAIAssignment*> WorldEnemyAssignments; // 0x2A8(0x10)
		UFortAIAssignment* DefaultAttackPlayersAssignment; // 0x2B8(0x8)
		unsigned char UnknownData01_6[0x60]; // 0x2C0(0x60) UNKNOWN PROPERTY
		TArray<UEnvQuery*> CombinedQueries; // 0x320(0x10)
		unsigned char UnknownData02_6[0x50]; // 0x330(0x50) UNKNOWN PROPERTY
		UFortAIAssignmentSettings* DefaultEncounterAssignmentSettings; // 0x380(0x8)
		UFortAIAssignmentSettings* DefaultEnemyAssignmentSettings; // 0x388(0x8)
		TArray<FPawnGoalSelectionTableEntry> PawnGoalSelectionTable; // 0x390(0x10)
		unsigned char UnknownData03_7[0x60]; // 0x3A0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIGoalManager");
			return ret;
		}

		void SetCurrentGoalDiscouragement(UObject* WorldContext, AFortAIController* AI); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F97FFA8(relative to base address)
		void RemoveWorldAssignment(UObject* WorldContextObject, FFortAIAssignmentIdentifier AssignmentIdentifier); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74F97FD24(relative to base address)
		void RemoveGoalsFromWorldAssignment(UObject* WorldContextObject, FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray<FFortAIGoalInfo>& GoalInfos); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97FBCC(relative to base address)
		void RemoveGoalFromWorldAssignment(UObject* WorldContextObject, FFortAIAssignmentIdentifier& AssignmentIdentifier, FFortAIGoalInfo& GoalInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97FA64(relative to base address)
		void MakeGoalsFromLocationsAndActor(TArray<FFortAIGoalInfo>& Goals, UObject* WorldContextObject, TArray<FVector>& GoalLocations, AActor* GoalActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97E558(relative to base address)
		void MakeGoalsFromLocations(TArray<FFortAIGoalInfo>& Goals, UObject* WorldContextObject, TArray<FVector>& GoalLocations); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97E3B0(relative to base address)
		void MakeGoalsFromActors(TArray<FFortAIGoalInfo>& Goals, UObject* WorldContextObject, TArray<AActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97E08C(relative to base address)
		void MakeGoalFromLocation(FFortAIGoalInfo& Goal, UObject* WorldContextObject, FVector& GoalLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F97DE78(relative to base address)
		void MakeGoalFromActor(FFortAIGoalInfo& Goal, UObject* WorldContextObject, AActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97DA50(relative to base address)
		bool IsDiscouragedFromActor(AFortAIController* AI, AActor* Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97D94C(relative to base address)
		void CreateWorldAssignment(UObject* WorldContextObject, FFortAIAssignmentIdentifier WorldAssignmentIdentifier, UFortAIAssignmentSettings* AssignmentSettings, UClass* GoalProvider, FFortAIAssignmentIdentifier& AssignmentIdentifier, EAssignmentCreationResult& CreationResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97C9C8(relative to base address)
		void ClearGoalDiscouragementFromActor(AFortAIController* AI, AActor* Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97C810(relative to base address)
		UFortAIAssignment AddWorldAssignment(UFortAIAssignmentSettings* AssignmentSettings, AActor* GoalActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97C74C(relative to base address)
		void AddGoalToWorldAssignment(UObject* WorldContextObject, FFortAIAssignmentIdentifier& AssignmentIdentifier, FFortAIGoalInfo& GoalInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97C48C(relative to base address)
		void AddGoalsToWorldAssignment(UObject* WorldContextObject, FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray<FFortAIGoalInfo>& GoalInfos); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F97C5F4(relative to base address)
		void AddGoalActorToAssignment(UFortAIAssignment* Assignment, AActor* GoalActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97C348(relative to base address)
		void AddGoal(AActor* GoalActor, UFortAIAssignmentSettings* GoalSettings); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F97C280(relative to base address)
	};


	// Class FortniteAI.FortAINearbyActorsPerceptionComponent
	// Inherited from UFortNearbyActorsPerceptionComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xE0 - 0xC8)
	class UFortAINearbyActorsPerceptionComponent : public UFortNearbyActorsPerceptionComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		TScriptInterface<Class> CachedLODSettingsManager; // 0xD0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAINearbyActorsPerceptionComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIObjectiveInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAIObjectiveInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIObjectiveInterface");
			return ret;
		}
	};


	// Class FortniteAI.FortAIPawnCustomizationDefinition
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x108 (0x138 - 0x30)
	class UFortAIPawnCustomizationDefinition : public UPrimaryDataAsset	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<USkeletalMesh*> SkeletalMesh; // 0x38(0x20)
		TWeakObjectPtr<UAssembledMeshSchema*> AssembledMeshSchema; // 0x58(0x20)
		TWeakObjectPtr<UClass*> CharacterBlueprint; // 0x78(0x20)
		TWeakObjectPtr<UClass*> AnimPreset; // 0x98(0x20)
		TWeakObjectPtr<UIKRetargeter*> IKRetargeter; // 0xB8(0x20)
		TArray<FFortAIPawnMaterialDefinition> OverrideMaterials; // 0xD8(0x10)
		TWeakObjectPtr<UClass*> AnimationBP; // 0xE8(0x20)
		TArray<UCustomCharacterPart*> CharacterParts; // 0x108(0x10)
		TWeakObjectPtr<UTexture2D*> MarkerIconOverride; // 0x118(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIPawnCustomizationDefinition");
			return ret;
		}
	};


	// Class FortniteAI.FortAIPawnVariant
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UFortAIPawnVariant : public UObject	
	{
	public:
		TArray<UClass*> PawnClasses; // 0x28(0x10)
		TArray<FFortAIPawnVariantDefinition> PawnVariantDefinitions; // 0x38(0x10)
		int32_t MinPlayersToSpawnVariant; // 0x48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle SpawnPointValueHandle; // 0x50(0x10)
		int32_t CachedSpawnPointValue; // 0x60(0x4)
		float EncounterExpectedLifespan; // 0x64(0x4)
		int32_t VersionNum; // 0x68(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIPawnVariant");
			return ret;
		}
	};


	// Class FortniteAI.FortAIRootAssignmentProviderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAIRootAssignmentProviderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIRootAssignmentProviderInterface");
			return ret;
		}

		FFortAIAssignmentIdentifier GetRootAssignmentIdentifier(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B98A8(relative to base address)
	};


	// Class FortniteAI.FortAISpawnerActorBase
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AFortAISpawnerActorBase : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnerActorBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAISpawnerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAISpawnerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnerInterface");
			return ret;
		}

		bool OnReceiveSpawnGroup(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsReadyToReceiveNewSpawnGroup(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAI.FortAISpawnGroup
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x160 (0x190 - 0x30)
	class UFortAISpawnGroup : public UPrimaryDataAsset	
	{
	public:
		float EnemyUtilities; // 0x30(0x40)
		TArray<FSpawnGroupEnemy> EnemiesToSpawn; // 0x70(0x10)
		bool bIsPrototype; // 0x80(0x1)
		bool bIsValidForEnemySpawners; // 0x81(0x1)
		bool bIsLargeSpawnGroup; // 0x82(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x83(0x1) UNKNOWN PROPERTY
		float MaxDiscountRatio; // 0x84(0x4)
		bool bUseWeightSystem; // 0x88(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		FScalableFloat Weight; // 0x90(0x28)
		FScalableFloat MinNumber; // 0xB8(0x28)
		FScalableFloat MaxNumber; // 0xE0(0x28)
		FCurveTableRowHandle MaxGroupCategoryPopulationDensityCurve; // 0x108(0x10)
		TArray<FFortSpawnGroupEncounterTypeData> EncounterTypeData; // 0x118(0x10)
		FGameplayTagContainer SpawnGroupGameplayTags; // 0x128(0x20)
		FGameplayTagQuery RequiredTagQuery; // 0x148(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnGroup");
			return ret;
		}

		bool IsValidForEnemySpawners(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F7F7B3C(relative to base address)
		bool IsPrototype(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F7F7B08(relative to base address)
		bool IsLargeSpawnGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F7F7900(relative to base address)
		int32_t GetNumberOfEnemies(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2414(relative to base address)
		UClass GetEnemy(int32_t EnemyIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B97D0(relative to base address)
	};


	// Class FortniteAI.FortAISpawnGroupCapsCategorySet
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortAISpawnGroupCapsCategorySet : public UObject	
	{
	public:
		TArray<FFortAIEncounterSpawnGroupCapsCategory> SpawnGroupCapsCategories; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnGroupCapsCategorySet");
			return ret;
		}
	};


	// Class FortniteAI.FortAISpawnGroupProgressionInfo
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAISpawnGroupProgressionInfo : public UDataAsset	
	{
	public:
		TArray<FSpawnGroupProgression> SpawnGroups; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnGroupProgressionInfo");
			return ret;
		}
	};


	// Class FortniteAI.FortAISpawnGroupUpgrade
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class UFortAISpawnGroupUpgrade : public UObject	
	{
	public:
		FGameplayTagContainer UpgradeTags; // 0x28(0x20)
		FGameplayTagQuery GroupRequiredTagQuery; // 0x48(0x48)
		TArray<FFortAIPawnUpgrade> BasePawnUpgrades; // 0x90(0x10)
		FName AdditionalModifiersLootTierGroup; // 0xA0(0x4)
		bool bInvalidForEnemySpawners; // 0xA4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY
		float SpawnGroupDiscountPercentage; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FFortAISpawnGroupUpgradeUIData UIData; // 0xB0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnGroupUpgrade");
			return ret;
		}
	};


	// Class FortniteAI.FortAISpawnGroupUpgradeProbabilities
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortAISpawnGroupUpgradeProbabilities : public UObject	
	{
	public:
		bool bIsGuaranteedUpgrade; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray<FFortAIPawnUpgradeProbability> UpgradeProbabilities; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnGroupUpgradeProbabilities");
			return ret;
		}
	};


	// Class FortniteAI.FortAITetheringBoxBoundsInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAITetheringBoxBoundsInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITetheringBoxBoundsInterface");
			return ret;
		}

		float GetTetheredBoxBoundsWidth(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetTetheredBoxBoundsHeight(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetTetheredBoxBoundsEQSSpaceBetween(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetTetheredBoxBoundsEQSGridSize(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector GetTetheredBoxBoundsCenter(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x258 (0x288 - 0x30)
	class UFortAsyncAction_MakeTieredWaveEncounterSettings : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnComplete; // 0x30(0x10)
		FTieredWaveSetData WaveData; // 0x40(0x178)
		FFortEncounterSettings EncounterSettings; // 0x1B8(0xC0)
		unsigned char UnknownData00_7[0x10]; // 0x278(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings");
			return ret;
		}

		UFortAsyncAction_MakeTieredWaveEncounterSettings CreateAsyncAction_MakeTieredWaveEncounterSettings(FTieredWaveSetData& WaveData, FFortEncounterSettings& InEncounterSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9B9300(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotController
	// Inherited from AAIController -> AController -> AActor -> UObject
	// Size: 0x1338 (0x16F0 - 0x3B8)
	class AFortAthenaAIBotController : public AAIController	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x3B8(0x48) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTeamSetDelegate; // 0x400(0x10)
		AActor* PreviousVehicle; // 0x410(0x8)
		FMulticastInlineDelegate OnPickupCreated; // 0x418(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x428(0x10) UNKNOWN PROPERTY
		TMap<FGuid, FFortAbilitySetHandle> AppliedInGameModifierAbilitySetHandles; // 0x438(0x50)
		TSet<FGuid> GadgetTrackedAttributeItemInstanceIds; // 0x488(0x50)
		unsigned char UnknownData02_6[0x50]; // 0x4D8(0x50) UNKNOWN PROPERTY
		FFortBotTargetHandler TargetHandler; // 0x528(0x40)
		unsigned char UnknownData03_6[0x1]; // 0x568(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit04 : 1; // 0x569:0(0x1) UNKNOWN PROPERTY
		bool bIsAnAthenaGameParticipant : 1; // 0x569:1(0x1)
		unsigned char UnknownBit05 : 1; // 0x569:2(0x1) UNKNOWN PROPERTY
		bool bEnableBotPerception : 1; // 0x569:3(0x1)
		unsigned char UnknownData06_5[0x12]; // 0x56A(0x12) UNKNOWN PROPERTY
		EReachLocationValidationMode ReachLocationValidationMode; // 0x57C(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x57D(0x3) UNKNOWN PROPERTY
		UBehaviorTree* BehaviorTree; // 0x580(0x8)
		FFortBotInventoryInfo SlotItems; // 0x588(0x270)
		TArray<FFortItemEntry> LootItemsToDropOnDeath; // 0x7F8(0x10)
		UFortWorldItem* ForcedBestWeapon; // 0x808(0x8)
		unsigned char UnknownData08_6[0x48]; // 0x810(0x48) UNKNOWN PROPERTY
		UFortAthenaAIBotInventoryDigestedSkillSet* CacheInventoryDigestedSkillSet; // 0x858(0x8)
		UFortAthenaAIBotHealingDigestedSkillSet* CacheHealingDigestedSkillSet; // 0x860(0x8)
		unsigned char UnknownData09_6[0x8]; // 0x868(0x8) UNKNOWN PROPERTY
		AFortPlayerPawnAthena* PlayerBotPawn; // 0x870(0x8)
		UAthenaAIServicePlayerBots* CachedAIServicePlayerBots; // 0x878(0x8)
		AFortGameModeAthena* CachedGameMode; // 0x880(0x8)
		UFortAthenaAIRuntimeParametersComponent* CachedAIRuntimeParametersComponent; // 0x888(0x8)
		UFortAthenaAIRuntimeParameters_Leash* CachedLeashRuntimeParameters; // 0x890(0x8)
		UFortAthenaAIRuntimeParameters_AffiliationBase* CachedAffiliationRuntimeParameters; // 0x898(0x8)
		UFortAthenaAIRuntimeParameters_AIBotInventory* CachedInventoryRuntimeParameters; // 0x8A0(0x8)
		UFortAthenaNpcPatrollingComponent* CachedPatrollingComponent; // 0x8A8(0x8)
		UFortAIControllerPerksComponent* CachedAIPerksComponent; // 0x8B0(0x8)
		UFortAICombatTokenConsumerComponent* CachedTokenConsumerComponent; // 0x8B8(0x8)
		TScriptInterface<Class> CachedAIAimingInterface; // 0x8C0(0x10)
		unsigned char UnknownData10_6[0x8]; // 0x8D0(0x8) UNKNOWN PROPERTY
		TArray<FBotDelayedStimulus> DelayedStimulus; // 0x8D8(0x10)
		unsigned char UnknownData11_6[0x18]; // 0x8E8(0x18) UNKNOWN PROPERTY
		TArray<FFortBotThreatActorInfo> ObjectsThreatList; // 0x900(0x10)
		TArray<FFortBotThreatActorInfo> TrapsThreatList; // 0x910(0x10)
		EAlertLevel CurrentAlertLevel; // 0x920(0x1)
		unsigned char UnknownData12_6[0x7]; // 0x921(0x7) UNKNOWN PROPERTY
		FAlertLevelInfo DefaultAlertLevelInfo; // 0x928(0x10)
		FMulticastInlineDelegate OnAlertLevelChangedEventDelegate; // 0x938(0x10)
		FMulticastInlineDelegate OnStealthMeterChangedEventDelegate; // 0x948(0x10)
		unsigned char UnknownData13_6[0x8]; // 0x958(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAgentDBNOStatusChangedEventDelegate; // 0x960(0x10)
		FMulticastInlineDelegate OnAgentDiedEventDelegate; // 0x970(0x10)
		FMulticastInlineDelegate OnAgentGameOver; // 0x980(0x10)
		unsigned char UnknownData14_6[0x48]; // 0x990(0x48) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPlayerPawnKilledByBot; // 0x9D8(0x10)
		FMulticastInlineDelegate OnAIPawnKilledByBot; // 0x9E8(0x10)
		FMulticastInlineDelegate OnCurrentTargetChangedDelegate; // 0x9F8(0x10)
		unsigned char UnknownData15_6[0x30]; // 0xA08(0x30) UNKNOWN PROPERTY
		TScriptInterface<Class> Inventory; // 0xA38(0x10)
		UFortControllerComponent_InventorySwitcher* InventorySwitcherComponent; // 0xA48(0x8)
		float Skill; // 0xA50(0x4)
		bool bAllowUnsupportedItemsInDefaultInventory : 1; // 0xA54:0(0x1)
		bool bMultiplyEffectivenessOfWeaponWithSurfaceDamageToFindBestWeapon : 1; // 0xA54:1(0x1)
		unsigned char UnknownData16_5[0x3]; // 0xA55(0x3) UNKNOWN PROPERTY
		TArray<UClass*> BotSkillSetClasses; // 0xA58(0x10)
		unsigned char UnknownData17_6[0x20]; // 0xA68(0x20) UNKNOWN PROPERTY
		UFortAthenaAIBotInventoryItems* StartupInventory; // 0xA88(0x8)
		FFortAthenaLoadout CosmeticLoadoutBC; // 0xA90(0x130)
		TArray<UCustomCharacterPart*> CustomCharacterPartOverridesBC; // 0xBC0(0x10)
		UFortBotNameSettings* NameSettingsBC; // 0xBD0(0x8)
		FScalableFloat SpectateOnDeathMinTime; // 0xBD8(0x28)
		FScalableFloat SpectateOnDeathMaxTime; // 0xC00(0x28)
		FScalableFloat EmotesMaxCount; // 0xC28(0x28)
		FVector LeashGameplayVolumeProjectExtent; // 0xC50(0x18)
		UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet; // 0xC68(0x8)
		UFortAthenaAIBotHarvestDigestedSkillSet* CacheHarvestDigestedSkillSet; // 0xC70(0x8)
		UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementSkillSet; // 0xC78(0x8)
		UFortAthenaAIBotLootingDigestedSkillSet* CacheLootingSkillSet; // 0xC80(0x8)
		UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingSkillSet; // 0xC88(0x8)
		UFortAthenaAIBotPlayStyleDigestedSkillSet* CachePlayStyleSkillSet; // 0xC90(0x8)
		UFortAthenaAIBotUnstuckDigestedSkillSet* CacheUnstuckSkillSet; // 0xC98(0x8)
		UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackSkillSet; // 0xCA0(0x8)
		UFortAthenaAIBotVehicleDigestedSkillSet* CacheVehicleSkillSet; // 0xCA8(0x8)
		unsigned char UnknownData18_6[0x60]; // 0xCB0(0x60) UNKNOWN PROPERTY
		UFortInteractContextInfo* InteractContextInfo; // 0xD10(0x8)
		unsigned char UnknownData19_6[0x78]; // 0xD18(0x78) UNKNOWN PROPERTY
		UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet; // 0xD90(0x8)
		unsigned char UnknownData20_6[0x4]; // 0xD98(0x4) UNKNOWN PROPERTY
		unsigned char UnknownBit21 : 1; // 0xD9C:0(0x1) UNKNOWN PROPERTY
		bool bCanBeDestroyedOnDeath : 1; // 0xD9C:1(0x1)
		unsigned char UnknownData22_5[0xB]; // 0xD9D(0xB) UNKNOWN PROPERTY
		FVector LastDeathLocation; // 0xDA8(0x18)
		FRotator LastDeathRotation; // 0xDC0(0x18)
		UFortWorldItem* CachedWorldItem; // 0xDD8(0x8)
		unsigned char UnknownData23_6[0x8]; // 0xDE0(0x8) UNKNOWN PROPERTY
		AFortWeapon* CacheWeaponUsedToCalculateType; // 0xDE8(0x8)
		bool bCachedIsUsingArcedProjectileWeapon; // 0xDF0(0x1)
		unsigned char UnknownData24_6[0x3]; // 0xDF1(0x3) UNKNOWN PROPERTY
		float CachedProjectileGravityScale; // 0xDF4(0x4)
		AFortWeapon* CachedWeaponUsedToCalculateProjectileData; // 0xDF8(0x8)
		UStatManager* StatManager; // 0xE00(0x8)
		TArray<FBuildingWeakSpotData> ActiveWeakSpots; // 0xE08(0x10)
		unsigned char UnknownData25_6[0x28]; // 0xE18(0x28) UNKNOWN PROPERTY
		UClass* CacheBotPawnClass; // 0xE40(0x8)
		unsigned char UnknownData26_6[0x8]; // 0xE48(0x8) UNKNOWN PROPERTY
		AActor* CurrentLootActor; // 0xE50(0x8)
		UAthenaMarkerComponent* MarkerComponent; // 0xE58(0x8)
		FString BotPlayerName; // 0xE60(0x10)
		FString BotIDSuffix; // 0xE70(0x10)
		FString BotPlayerNameWithSkillRating; // 0xE80(0x10)
		unsigned char UnknownData27_6[0x18]; // 0xE90(0x18) UNKNOWN PROPERTY
		UFortAthenaMutator_SpawningPolicyData* PolicyDataSpawner; // 0xEA8(0x8)
		FBotPerceivedSound PerceivedSounds; // 0xEB0(0xC8)
		unsigned char UnknownData28_6[0x60]; // 0xF78(0x60) UNKNOWN PROPERTY
		UFortControllerComponent_Telemetry* FortControllerComponent_Telemetry; // 0xFD8(0x8)
		bool bForceUsingBuildingTool; // 0xFE0(0x1)
		bool bForceHolsterWeapon; // 0xFE1(0x1)
		unsigned char UnknownData29_6[0x6]; // 0xFE2(0x6) UNKNOWN PROPERTY
		UFortWorldItem* PendingEquipWeapon; // 0xFE8(0x8)
		unsigned char UnknownData30_6[0x50]; // 0xFF0(0x50) UNKNOWN PROPERTY
		APawn* PlayerToSpectateOnDeath; // 0x1040(0x8)
		FMulticastInlineDelegate OnPlayerPawnAISpawnedDelegate; // 0x1048(0x10)
		FMulticastInlineDelegate OnPawnAISpawnedDelegate; // 0x1058(0x10)
		unsigned char UnknownData31_6[0x108]; // 0x1068(0x108) UNKNOWN PROPERTY
		UAISenseConfig_Sight* AISenseConfig_SightRuntime; // 0x1170(0x8)
		UAISenseConfig_Hearing* AISenseConfig_HearingRuntime; // 0x1178(0x8)
		unsigned char UnknownData32_6[0x10]; // 0x1180(0x10) UNKNOWN PROPERTY
		AActor* BotOwner; // 0x1190(0x8)
		int32_t BotControllerUID; // 0x1198(0x4)
		unsigned char UnknownData33_6[0x4]; // 0x119C(0x4) UNKNOWN PROPERTY
		AFortPlayerPawnAthena* ReviveTarget; // 0x11A0(0x8)
		unsigned char UnknownData34_6[0x90]; // 0x11A8(0x90) UNKNOWN PROPERTY
		UFortAthenaAIBotCustomizationData* BotData; // 0x1238(0x8)
		FDebugMinimapData DebugMinimapData; // 0x1240(0x190)
		AFortPlayerPawnAthena* RevivePlayerPawnToken; // 0x13D0(0x8)
		unsigned char UnknownData35_6[0x18]; // 0x13D8(0x18) UNKNOWN PROPERTY
		AActor* LeashActorToFollow; // 0x13F0(0x8)
		FVector LeashActorToFollowLocalOffset; // 0x13F8(0x18)
		AFortAthenaAILeashVolume* LeashVolume; // 0x1410(0x8)
		TWeakObjectPtr<AGameplayVolume*> LeashGameplayVolume; // 0x1418(0x8)
		UFortGameStateComponent_AffiliationManager* CachedAffiliationManager; // 0x1420(0x8)
		UFortActorComponent_Affiliation* CachedAffiliationComponent; // 0x1428(0x8)
		bool bIsAffectedByMutatorHealthAndShieldModifiers; // 0x1430(0x1)
		unsigned char UnknownData36_6[0x7]; // 0x1431(0x7) UNKNOWN PROPERTY
		bool bHasChangedPawnCullDistanceToAggroMode; // 0x1438(0x1)
		unsigned char UnknownData37_6[0x7]; // 0x1439(0x7) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_AIBotRespawn* RespawnRuntimeParameters; // 0x1440(0x8)
		TWeakObjectPtr<AActor*> CurrentBlockingObstacle; // 0x1448(0x8)
		TWeakObjectPtr<AFortAthenaVehicle*> CurrentTargetVehicle; // 0x1450(0x8)
		unsigned char UnknownData38_6[0x10]; // 0x1458(0x10) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> NoSmashActors; // 0x1468(0x10)
		unsigned char UnknownData39_6[0x8]; // 0x1478(0x8) UNKNOWN PROPERTY
		APawn* FinisherPawn; // 0x1480(0x8)
		unsigned char UnknownData40_6[0x54]; // 0x1488(0x54) UNKNOWN PROPERTY
		EFortPawnStasisMode PreviousStasisMode; // 0x14DC(0x1)
		bool bPostponeGiveWeaponCheat; // 0x14DD(0x1)
		bool bPostponeGiveMaterialsCheat; // 0x14DE(0x1)
		unsigned char UnknownData41_6[0x1]; // 0x14DF(0x1) UNKNOWN PROPERTY
		float StartSpectatingTime; // 0x14E0(0x4)
		unsigned char UnknownData42_6[0xB4]; // 0x14E4(0xB4) UNKNOWN PROPERTY
		UAthenaDanceItemDefinition* RequestedEmoteAsset; // 0x1598(0x8)
		unsigned char UnknownData43_6[0x8]; // 0x15A0(0x8) UNKNOWN PROPERTY
		UBehaviorTree* BTAssetToRunOnPawnAISpawned; // 0x15A8(0x8)
		FGameplayTag DescriptorTag; // 0x15B0(0x4)
		unsigned char UnknownData44_7[0x134]; // 0x15B4(0x134) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotController");
			return ret;
		}

		void UpdateLeashActorToFollowLocation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F9BE358(relative to base address)
		void ThankBusDriver(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F9BE344(relative to base address)
		void SwitchTeam(char TeamIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BE1D8(relative to base address)
		void StopSecondaryFire(bool bFireWhenStopping); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BE158(relative to base address)
		void StopFire(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BE144(relative to base address)
		void StopEmote(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BE130(relative to base address)
		void StartSecondaryFire(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BE11C(relative to base address)
		void StartFire(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BE108(relative to base address)
		void SetSkillSet(UClass* SkillSetClass); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BE018(relative to base address)
		void SetRadialLeashOuterRadius(float OuterRadius); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BDF98(relative to base address)
		void SetRadialLeashLocation(FVector& Location); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9BDED4(relative to base address)
		void SetRadialLeashInnerRadius(float InnerRadius); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BDE54(relative to base address)
		void SetRadialLeashAlertLevelOverride(FLeashInfoOverride& LeashInfoOverride, EAlertLevel AlertLevel); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9BDCD8(relative to base address)
		void SetPatrollingEnable(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BDC58(relative to base address)
		void SetLeashVolume(AFortAthenaAILeashVolume* InLeashVolume); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BDBD8(relative to base address)
		void SetLeashReturnLocationMode(ELeashReturnLocationMode ReturnMode); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BDB58(relative to base address)
		void SetLeashGameplayVolume(AGameplayVolume* InLeashGameplayVolume); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BDAD8(relative to base address)
		void SetLeashActorToFollow(AActor* ActorToFollow, float LeashLocationUpdateRate, FVector LocalOffset); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9BD948(relative to base address)
		void SetForcedBestWeapon(UFortWorldItem* BestWeapon); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BD8BC(relative to base address)
		void SetBotOwner(AActor* InBotOwner); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BD830(relative to base address)
		void SetAllowPropagatedTarget(bool bAllow); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BD7A4(relative to base address)
		void SetAllowModifySensesEnabled(bool bAllow); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BD718(relative to base address)
		void SetAlertLevel(EAlertLevel NewAlertLevel, EBlackboardUpdateType BlackboardUpdateType, bool bForceUpdate); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BD61C(relative to base address)
		void SetAIFocalPoint(AActor* FocusTarget, FVector FocalPoint, bool bUseAttackingPriority); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9BD3E4(relative to base address)
		void ResetPerceptionAndTargets(EBlackboardUpdateType BlackboardUpdateType); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BD30C(relative to base address)
		void RequestMoveAwayFromBox(FBox& MoveAwayBox); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9BD1C0(relative to base address)
		void RequestEmote(FPrimaryAssetId& EmotePrimaryAssetId, float InfiniteEmoteMaxDuration); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9BD064(relative to base address)
		void RemoveSkillSet(UClass* SkillSetClass); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BCEF8(relative to base address)
		void RemoveEmoteRequest(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BCEE4(relative to base address)
		void ReleaseBuildTool(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F9BCED0(relative to base address)
		void QueueStim(AActor* SourceActor, FVector& SourceLocation, FVector& SourceDirection, EStimType NewStimType, float StimStrength, FName StimTag); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9BCB98(relative to base address)
		void PlayEmote(FPrimaryAssetId& EmotePrimaryAssetId); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9BCB0C(relative to base address)
		void OverrideSkill(float NewSkill); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BCA8C(relative to base address)
		void OverrideAggressivenessPlayStyle(bool bInIsAggressive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BCA00(relative to base address)
		void OnVehicleModDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF74F9BC59C(relative to base address)
		void OnTargetTagChanged(FGameplayTag UpdatedTag, int32_t TagCount); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F9BC3C8(relative to base address)
		void OnTargetPawnDestroyed(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F9BC3B4(relative to base address)
		void OnTargetPawnDead(AFortPawn* FortPawn); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F9BC334(relative to base address)
		void OnTargetPawnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74F9BBF20(relative to base address)
		void OnTargetInVehicleDamaged(AActor* DamageCauser, AController* EventInstigator, float Damage, FVector& EventLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults, Memory Exec: 0x7FF74F9BBD9C(relative to base address)
		void OnTargetBuildingDestroyed(ABuildingActor* Building, AAthenaAIController* AIController); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F9BBCD8(relative to base address)
		void OnTargetActorDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F9BBC58(relative to base address)
		void OnServerMarkerAdded(FFortWorldMarkerData& MarkerData); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74F9BBBB4(relative to base address)
		void OnPossessedPawnReceiveDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74F9BB750(relative to base address)
		void OnPossesedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74F9BB330(relative to base address)
		void OnPerceptionSensed(AActor* SourceActor, FAIStimulus Stim); // Flags: Native|Public, Memory Exec: 0x7FF74F9BB1B4(relative to base address)
		void OnPawnWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* OldWeapon); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F9BB0F0(relative to base address)
		void OnPawnDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74F9BAC8C(relative to base address)
		void OnMovementModeChange(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F9BAB64(relative to base address)
		void OnKnockbacked(FGameplayTag KnockbackTypeTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BAA54(relative to base address)
		void OnEquipFinished(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9BAA40(relative to base address)
		void OnEndSpectating(AFortPlayerStateZone* Spectator); // Flags: Final|Native|Public, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnCurrentHarvestableDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF74F9BA61C(relative to base address)
		void OnCharacterLaunched(UFortMovementComp_Character* MovementComp, FVector& LaunchVelocity); // Flags: Final|Native|Public|HasOutParms|HasDefaults, Memory Exec: 0x7FF74F9BA514(relative to base address)
		void OnBeginSpectating(AFortPlayerStateZone* Spectator); // Flags: Final|Native|Public, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnAlertLevelChanged(EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAgentDBNO(AFortPawn* InPlayer, bool bInIsDBNO); // Flags: Final|Native|Public, Memory Exec: 0x7FF74F9BA44C(relative to base address)
		void NotifyPickupsSpawnedOnDeath(TArray<AFortPickup*>& SpawnedPickups, int32_t SpawnRequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9BA2CC(relative to base address)
		bool IsLocationInsideLeash(FVector& Location, bool bUseInnerRadius); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9BA168(relative to base address)
		bool IsAnAthenaGameParticipant(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B9DC8(relative to base address)
		void HandlePawnEnteredVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* OtherPawn, int32_t SeatIndex); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74F9B9B34(relative to base address)
		UFortWorldItem GetSlotItemByTagQuery(FGameplayTagQuery& TagQuery); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B9A34(relative to base address)
		UFortWorldItem GetSlotItemByTag(FGameplayTag& TagToCheck); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B999C(relative to base address)
		UFortWorldItem GetSlotItemByItemDefinition(UFortItemDefinition* ItemDefinition); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B98D4(relative to base address)
		FVector GetPawnLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B9874(relative to base address)
		UAthenaMarkerComponent GetMarkerComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B985C(relative to base address)
		AActor GetCurrentThreat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B978C(relative to base address)
		FVector GetCurrentTargetingPosition(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B9724(relative to base address)
		AActor GetCurrentTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B96E8(relative to base address)
		AActor GetBotOwner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9B96D0(relative to base address)
		AFortWeapon EquipWeaponByTag(FGameplayTag& WeaponTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9B9638(relative to base address)
		AFortWeapon EquipWeapon(UFortWorldItem* Weapon, bool bUpdateBB); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9B956C(relative to base address)
		AFortWeapon EquipMeleeWeapon(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9B94D8(relative to base address)
		AFortWeapon EquipBestWeapon(bool bUpdateBB); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9B9448(relative to base address)
		void ClearAIFocalPoint(bool bUseAttackingPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9B9270(relative to base address)
		void Cheat_ForceAthenaCosmeticItemInSlot(UAthenaCosmeticItemDefinition* CosmeticItem, EAthenaCustomizationCategory Slot, int32_t Index); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74F9B914C(relative to base address)
		void Cheat_ClearForcedCosmeticItems(); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate, Memory Exec: 0x7FF74F9B9100(relative to base address)
		void ChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9B8F00(relative to base address)
		void BlueprintOnBehaviorTreeStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTargetInfos(TArray<AActor*>& Targets, EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74F9B8CCC(relative to base address)
		void AddTargetInfo(AActor* Target, bool bForceTarget, EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9B8B34(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotNameDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortAthenaAIBotNameDataAsset : public UDataAsset	
	{
	public:
		TWeakObjectPtr<UDataTable*> DefaultNameDataTable; // 0x30(0x20)
		TWeakObjectPtr<UDataTable*> ChinaNameDataTable; // 0x50(0x20)
		TArray<FFortAthenaAIBotNameRegionData> RegionData; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotNameDataAsset");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaTrackableAIObjectComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UFortAthenaTrackableAIObjectComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0xB0(0x20)
		unsigned char UnknownData01_6[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		UClass* CustomRegistrationClass; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaTrackableAIObjectComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaTrackableAIObjectVehicleComponent
	// Inherited from UFortAthenaTrackableAIObjectComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UFortAthenaTrackableAIObjectVehicleComponent : public UFortAthenaTrackableAIObjectComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaTrackableAIObjectVehicleComponent");
			return ret;
		}

		void HandleSleepStateChanged(bool bIsAwake); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F9EFCF4(relative to base address)
	};


	// Class FortniteAI.FortBlackboardComponent
	// Inherited from UBlackboardComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UFortBlackboardComponent : public UBlackboardComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBlackboardComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortBTDecorator_QueryGameplayAbility
	// Inherited from UBTDecorator -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x100 (0x168 - 0x68)
	class UFortBTDecorator_QueryGameplayAbility : public UBTDecorator	
	{
	public:
		FValueOrBBKey_GameplayTagContainer GameplayAbilityTagContainer; // 0x68(0x28)
		FValueOrBBKey_Object TargetValue; // 0x90(0x18)
		FValueOrBBKey_GameplayTagContainer ActiveAbilityTagsToSkipTestingValue; // 0xA8(0x28)
		bool bUseTarget; // 0xD0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayAbilityTag; // 0xD8(0x20)
		FBlackboardKeySelector GameplayAbilityTagBlackboardKey; // 0xF8(0x28)
		FBlackboardKeySelector Target; // 0x120(0x28)
		FGameplayTagContainer ActiveAbilityTagsToSkipTesting; // 0x148(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBTDecorator_QueryGameplayAbility");
			return ret;
		}
	};


	// Class FortniteAI.FortBTTask_TriggerVOEvent
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x30 (0xA0 - 0x70)
	class UFortBTTask_TriggerVOEvent : public UBTTaskNode	
	{
	public:
		bool bUseFeedbackBank : 1; // 0x70:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		FString CustomEventName; // 0x78(0x10)
		FString SelectedEvent; // 0x88(0x10)
		UFortFeedbackBank* FeedbackBank; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBTTask_TriggerVOEvent");
			return ret;
		}
	};


	// Class FortniteAI.FortCreativeCreatureManagerInfoComponent
	// Inherited from UFortMinigameLogicComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x218 - 0x168)
	class UFortCreativeCreatureManagerInfoComponent : public UFortMinigameLogicComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x168(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> CreatureBlueprintClass; // 0x180(0x20)
		int32_t MaxHealth; // 0x1A0(0x4)
		float HearingAggroRange; // 0x1A4(0x4)
		int32_t ScorePoints; // 0x1A8(0x4)
		float DamageCaused; // 0x1AC(0x4)
		float EnvironmentalDamageOverride; // 0x1B0(0x4)
		float MovementSpeedMultiplier; // 0x1B4(0x4)
		bool bImmuneToWeaponKnockback; // 0x1B8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1B9(0x7) UNKNOWN PROPERTY
		UFortCreativeCreatureManagerComponent* CreatureManagerComponent; // 0x1C0(0x8)
		UClass* DamageOverrideEffect; // 0x1C8(0x8)
		UClass* EnvironmentalDamageOverrideEffect; // 0x1D0(0x8)
		UClass* MovementSpeedOverrideEffect; // 0x1D8(0x8)
		UClass* WeaponKnockbackImmunityEffect; // 0x1E0(0x8)
		UClass* MaxHealthOverrideEffect; // 0x1E8(0x8)
		EScoreDistributionType ScoreDistribution; // 0x1F0(0x1)
		ECreatureManagerAffectedTargets AffectedTargetsType; // 0x1F1(0x1)
		unsigned char UnknownData02_7[0x26]; // 0x1F2(0x26) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCreativeCreatureManagerInfoComponent");
			return ret;
		}

		void SetWeaponKnockbackImmunityEffect(UClass* Effect); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F1500(relative to base address)
		void SetWeaponKnockbackImmunity(bool InImmuneToWeaponKnockback); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F1480(relative to base address)
		void SetScorePoints(int32_t InScorePoints); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F1404(relative to base address)
		void SetScoreDistribution(EScoreDistributionType InScoreDistribution); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F1388(relative to base address)
		void SetOverrideDamage(float InOverrideDamage); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F1308(relative to base address)
		void SetMovementSpeedOverrideEffect(UClass* Effect); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F1270(relative to base address)
		void SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F11F0(relative to base address)
		void SetMovementOverrideTag(FGameplayTag Tag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F10E4(relative to base address)
		void SetMaxHealthOverrideTag(FGameplayTag Tag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0F58(relative to base address)
		void SetMaxHealthOverrideEffect(UClass* Effect); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0EC0(relative to base address)
		void SetMaxHealth(int32_t InMaxHealth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0E44(relative to base address)
		void SetHearingAggroRange(float InHearingAggroRange); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0DC4(relative to base address)
		void SetEnvironmentalDamageOverrideEffect(UClass* Effect); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0D2C(relative to base address)
		void SetEnvironmentalDamageOverride(float InOverrideDamage); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0CAC(relative to base address)
		void SetDamageOverrideTag(FGameplayTag Tag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0BA0(relative to base address)
		void SetDamageOverrideEffect(UClass* Effect); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0B08(relative to base address)
		void SetCreatureManagerComponent(UFortCreativeCreatureManagerComponent* InCreatureManagerComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F09E4(relative to base address)
		void SetCreatureBlueprintClass(TWeakObjectPtr<UClass*> InCreatureBlueprintClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F08E8(relative to base address)
		void SetAffectedTargetsType(ECreatureManagerAffectedTargets InAffectedTargetsType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F07EC(relative to base address)
		void ResetWeaponKnockbackImmunity(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F07D4(relative to base address)
		void ResetScorePoints(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F07BC(relative to base address)
		void ResetScoreDistribution(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F07A4(relative to base address)
		void ResetOverrideDamage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F078C(relative to base address)
		void ResetMovementSpeedMultiplier(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0774(relative to base address)
		void ResetMaxHealth(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0744(relative to base address)
		void ResetHearingAggroRange(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F072C(relative to base address)
		void ResetEnvironmentalDamageOverride(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0714(relative to base address)
		void OnCreatureClassLoaded(UClass* LoadedCreatureClass); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F9F0364(relative to base address)
		bool GetWeaponKnockbackImmunity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EAE4FD4(relative to base address)
		int32_t GetScorePoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F16D8C0(relative to base address)
		EScoreDistributionType GetScoreDistribution(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9EFBF8(relative to base address)
		float GetOverrideDamage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C4C66CC(relative to base address)
		float GetMovementSpeedMultiplier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9EFBA8(relative to base address)
		int32_t GetMaxHealth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3343C0(relative to base address)
		int32_t GetInvalidInt32(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C5F0A74(relative to base address)
		float GetInvalidFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F9EFB90(relative to base address)
		float GetHearingAggroRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3330F0(relative to base address)
		float GetEnvironmentalDamageOverride(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C4C66E4(relative to base address)
		UFortCreativeCreatureManagerComponent GetCreatureManagerComponent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9EFB78(relative to base address)
		TWeakObjectPtr GetCreatureBlueprintClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9EFB30(relative to base address)
		ECreatureManagerAffectedTargets GetAffectedTargetsType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9EFB18(relative to base address)
	};


	// Class FortniteAI.FortCreativeCreatureManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UFortCreativeCreatureManagerComponent : public UActorComponent	
	{
	public:
		TArray<UFortCreativeCreatureManagerInfoComponent*> CreatureManagerInfos; // 0xA0(0x10)
		TMap<TWeakObjectPtr, UFortCreativeCreatureManagerInfoComponent*> EnabledCreatureManagerInfos; // 0xB0(0x50)
		unsigned char UnknownData00_7[0x60]; // 0x100(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCreativeCreatureManagerComponent");
			return ret;
		}

		void OnInfoComponentRemoved(UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F04B8(relative to base address)
		void OnInfoComponentAdded(UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F03E4(relative to base address)
		void OnAIPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74F9EFF00(relative to base address)
	};


	// Class FortniteAI.FortCrowdManager
	// Inherited from UCrowdManager -> UCrowdManagerBase -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UFortCrowdManager : public UCrowdManager	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCrowdManager");
			return ret;
		}
	};


	// Class FortniteAI.FortEnemySpawn
	// Inherited from ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0x730 - 0x728)
	class AFortEnemySpawn : public ABuildingActor	
	{
	public:
		float ClusterRadius; // 0x728(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x72C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortEnemySpawn");
			return ret;
		}
	};


	// Class FortniteAI.FortEnvQueryManager
	// Inherited from UEnvQueryManager -> UAISubsystem -> UObject
	// Size: 0x60 (0x1B8 - 0x158)
	class UFortEnvQueryManager : public UEnvQueryManager	
	{
	public:
		TArray<FEnvQueryManagerConfig> EnvManagerConfigPerGamePhase; // 0x158(0x10)
		FEnvQueryManagerConfig EnvManagerConfigSTW; // 0x168(0x30)
		unsigned char UnknownData00_7[0x20]; // 0x198(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortEnvQueryManager");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryContext_WorldLocationParam
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortQueryContext_WorldLocationParam : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryContext_WorldLocationParam");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryItemType_Goal
	// Inherited from UEnvQueryItemType_ActorBase -> UEnvQueryItemType_VectorBase -> UEnvQueryItemType -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortQueryItemType_Goal : public UEnvQueryItemType_ActorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryItemType_Goal");
			return ret;
		}
	};


	// Class FortniteAI.FortQueryTwoPointSolver
	// Inherited from UObject
	// Size: 0x118 (0x140 - 0x28)
	class UFortQueryTwoPointSolver : public UObject	
	{
	public:
		UEnvQuery* QueryPointA; // 0x28(0x8)
		UEnvQuery* QueryPointB; // 0x30(0x8)
		TArray<FEnvNamedValue> QueryParamsA; // 0x38(0x10)
		TArray<FEnvNamedValue> QueryParamsB; // 0x48(0x10)
		FMulticastInlineDelegate OnFinished; // 0x58(0x10)
		FMulticastInlineDelegate OnFailed; // 0x68(0x10)
		ETwoPointSolverRotationA RotationMode; // 0x78(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FRotator MinRotationOffset; // 0x80(0x18)
		FRotator MaxRotationOffset; // 0x98(0x18)
		bool bUseNegativeAngleOffsets : 1; // 0xB0:0(0x1)
		bool bUsePositiveAngleOffsets : 1; // 0xB0:1(0x1)
		unsigned char UnknownData01_5[0x7F]; // 0xB1(0x7F) UNKNOWN PROPERTY
		UFortAISystem* AISys; // 0x130(0x8)
		UObject* CachedQuerier; // 0x138(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryTwoPointSolver");
			return ret;
		}

		void Start(UObject* Querier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F15B0(relative to base address)
		void SkipToNextPointA(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F1598(relative to base address)
		void SetCustomRotationA(FRotator& Rotation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F9F0A70(relative to base address)
		void OnCustomRotationMode(FVector& InPointA, FVector Querier); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FRotator GetRandomRotationOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9EFBC0(relative to base address)
		void AddNamedFloatParamB(FName ParamName, float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9EF8EC(relative to base address)
		void AddNamedFloatParamA(FName ParamName, float Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9EF828(relative to base address)
	};


	// Class FortniteAI.FortForcedLODZone
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AFortForcedLODZone : public AActor	
	{
	public:
		EFortAILODLevel ForcedLODLevel; // 0x290(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x291(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortForcedLODZone");
			return ret;
		}
	};


	// Class FortniteAI.FortGameplayAbility_TeleportToActor
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x38 (0xB78 - 0xB40)
	class UFortGameplayAbility_TeleportToActor : public UFortGameplayAbility	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xB40(0x4) UNKNOWN PROPERTY
		bool bCheckPlayerLOSWhenTeleporting; // 0xB44(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xB45(0x3) UNKNOWN PROPERTY
		float MaxDistanceToConsiderLOS; // 0xB48(0x4)
		float PlayerFOV; // 0xB4C(0x4)
		float TeleportDelay; // 0xB50(0x4)
		int32_t TeleportRetries; // 0xB54(0x4)
		float RetryDelay; // 0xB58(0x4)
		unsigned char UnknownData02_6[0xC]; // 0xB5C(0xC) UNKNOWN PROPERTY
		UEnvQuery* FindTeleportSpotEQSQuery; // 0xB68(0x8)
		unsigned char UnknownData03_7[0x8]; // 0xB70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortGameplayAbility_TeleportToActor");
			return ret;
		}

		void PreTeleportPawn(AFortPawn* TeleportedPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PostTeleportedPawn(AFortPawn* TeleportedPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAI.FortGameplayInteractionSmartObjectBehaviorDefinition
	// Inherited from UGameplayInteractionSmartObjectBehaviorDefinition -> USmartObjectBehaviorDefinition -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortGameplayInteractionSmartObjectBehaviorDefinition : public UGameplayInteractionSmartObjectBehaviorDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortGameplayInteractionSmartObjectBehaviorDefinition");
			return ret;
		}

		bool CanBeUsedBy(AActor* User, AActor* SmartObjectActor); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74C870110(relative to base address)
	};


	// Class FortniteAI.FortIntensityCurveSequence
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortIntensityCurveSequence : public UDataAsset	
	{
	public:
		TArray<FDataTableRowHandle> IntensityCurves; // 0x30(0x10)
		TEnumAsByte<EFortIntensityCurveSequenceType> SequenceType; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortIntensityCurveSequence");
			return ret;
		}
	};


	// Class FortniteAI.FortIntensityCurveSequenceProgression
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortIntensityCurveSequenceProgression : public UDataAsset	
	{
	public:
		TArray<FFortInstensityCurveSequenceProgression> IntensityCurveSequences; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortIntensityCurveSequenceProgression");
			return ret;
		}
	};


	// Class FortniteAI.FortJumpDownLink
	// Inherited from ANavLinkProxy -> AActor -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class AFortJumpDownLink : public ANavLinkProxy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortJumpDownLink");
			return ret;
		}
	};


	// Class FortniteAI.FortNavGraphGoal
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AFortNavGraphGoal : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		float GraphRadius; // 0x298(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x29C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavGraphGoal");
			return ret;
		}
	};


	// Class FortniteAI.FortNavLinkBlockerComponent
	// Inherited from UBoxComponent -> UShapeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x500 - 0x500)
	class UFortNavLinkBlockerComponent : public UBoxComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavLinkBlockerComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortNavLinkContainer
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AFortNavLinkContainer : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavLinkContainer");
			return ret;
		}
	};


	// Class FortniteAI.FortNavLinkDefinition
	// Inherited from UNavLinkDefinition -> UObject
	// Size: 0x30 (0x80 - 0x50)
	class UFortNavLinkDefinition : public UNavLinkDefinition	
	{
	public:
		FFortNavLinkPattern Pattern; // 0x50(0x8)
		TArray<FFortNavLinkPattern> AdditionalPatterns; // 0x58(0x10)
		TArray<TEnumAsByte> StairsRailing; // 0x68(0x10)
		EBuildingFloorRailing FloorRailing; // 0x78(0x1)
		TEnumAsByte<EFortNavLinkPattern> PatternType; // 0x79(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x7A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavLinkDefinition");
			return ret;
		}
	};


	// Class FortniteAI.FortNavMesh
	// Inherited from ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x8 (0x6D0 - 0x6C8)
	class AFortNavMesh : public ARecastNavMesh	
	{
	public:
		UFortAIHotSpotManager* HotSpotManager; // 0x6C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavMesh");
			return ret;
		}
	};


	// Class FortniteAI.FortNavObstacleComponent
	// Inherited from UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UFortNavObstacleComponent : public UNavRelevantComponent	
	{
	public:
		UClass* ObstacleAreaClass; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavObstacleComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortNavSystem
	// Inherited from UNavigationSystemV1 -> UNavigationSystemBase -> UObject
	// Size: 0x240 (0x17F0 - 0x15B0)
	class UFortNavSystem : public UNavigationSystemV1	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x15B0(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> DefaultSmashableArea; // 0x15C0(0x20)
		TWeakObjectPtr<UClass*> JumpDownArea; // 0x15E0(0x20)
		unsigned char UnknownData01_6[0x20]; // 0x1600(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> JumpDownSmashableArea2; // 0x1620(0x20)
		TWeakObjectPtr<UClass*> JumpDownSmashableArea3; // 0x1640(0x20)
		TArray<UFortCustomNavLinkGlobalProxy*> LinkGlobalProxies; // 0x1660(0x10)
		TArray<ARecastNavMesh*> NamedNavmeshes; // 0x1670(0x10)
		TArray<UFortNavLinkBlockerComponent*> NavLinkBlockers; // 0x1680(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x1690(0x10) UNKNOWN PROPERTY
		TArray<UFortPathCostEstimator*> PathEstimators; // 0x16A0(0x10)
		TArray<UFortInescapableZoneTracker*> InescapableZones; // 0x16B0(0x10)
		bool bAllowAutoRebuild : 1; // 0x16C0:0(0x1)
		bool bRebuildOnInitialUnlock : 1; // 0x16C0:1(0x1)
		bool bUsesStreamedInNavLevel : 1; // 0x16C0:2(0x1)
		bool bUseStaticMeshLinks : 1; // 0x16C0:3(0x1)
		bool bUseStaticWorldLinksDown : 1; // 0x16C0:4(0x1)
		bool bUseStaticWorldLinksUp : 1; // 0x16C0:5(0x1)
		bool bUseJumpLinkActors : 1; // 0x16C0:6(0x1)
		bool bGenerateWallClimbLinks : 1; // 0x16C0:7(0x1)
		bool bGenerateClamberLinks : 1; // 0x16C1:0(0x1)
		bool bGenerateHurdleLinks : 1; // 0x16C1:1(0x1)
		unsigned char UnknownData03_5[0x2]; // 0x16C2(0x2) UNKNOWN PROPERTY
		int32_t UndermineHorizontalTileLimit; // 0x16C4(0x4)
		int32_t UndermineVerticalTileLimit; // 0x16C8(0x4)
		float DirtyAreasUpdateFreqInactive; // 0x16CC(0x4)
		unsigned char UnknownData04_6[0xD8]; // 0x16D0(0xD8) UNKNOWN PROPERTY
		AFortNavigationGraph* NavGraphData; // 0x17A8(0x8)
		TArray<TWeakObjectPtr> CompositePathGoals; // 0x17B0(0x10)
		TArray<FBox> AtlasCells; // 0x17C0(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x17D0(0x10) UNKNOWN PROPERTY
		TArray<FMetaNavCachedEntry> MetaNavCachedAreas; // 0x17E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavSystem");
			return ret;
		}

		void OnNavDataRegistered(ANavigationData* NavData); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74F9F0564(relative to base address)
		bool IsNavmeshInRadiusInitialized(UObject* WorldContext, FVector& TestLocation, float TestRadius); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74F9EFD74(relative to base address)
	};


	// Class FortniteAI.FortNavSystemConfig
	// Inherited from UNavigationSystemModuleConfig -> UNavigationSystemConfig -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UFortNavSystemConfig : public UNavigationSystemModuleConfig	
	{
	public:
		bool bAllowAutoRebuild : 1; // 0x58:0(0x1)
		bool bRebuildOnInitialUnlock : 1; // 0x58:1(0x1)
		bool bUsesStreamedInNavLevel : 1; // 0x58:2(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavSystemConfig");
			return ret;
		}
	};


	// Class FortniteAI.FortPatrolWardInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortPatrolWardInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPatrolWardInterface");
			return ret;
		}

		EWardAffectType GetAffectingType(); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetAffectingDistance(); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAI.FortPlacedPawnMarker
	// Inherited from ANavigationObjectBase -> AActor -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class AFortPlacedPawnMarker : public ANavigationObjectBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPlacedPawnMarker");
			return ret;
		}
	};


	// Class FortniteAI.FortRiftBlockerComponent
	// Inherited from UBoxComponent -> UShapeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x510 - 0x500)
	class UFortRiftBlockerComponent : public UBoxComponent	
	{
	public:
		bool bStartActive : 1; // 0x500:0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x501(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortRiftBlockerComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortStaticMeshLinkComponent
	// Inherited from UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x138 - 0xF0)
	class UFortStaticMeshLinkComponent : public UNavRelevantComponent	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0xF0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortStaticMeshLinkComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortThreatVisualsManager
	// Inherited from AActor -> UObject
	// Size: 0x2B8 (0x548 - 0x290)
	class AFortThreatVisualsManager : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UClass* CloudBlueprint; // 0x298(0x8)
		float CloudRadius; // 0x2A0(0x4)
		float ThreatBoxVolumeTopPadding; // 0x2A4(0x4)
		float ThreatBoxVolumeBottomPadding; // 0x2A8(0x4)
		bool bUseLocalPlayersOnlyForCloudMinimumHeight; // 0x2AC(0x1)
		bool bHideClouds; // 0x2AD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2AE(0x2) UNKNOWN PROPERTY
		float CloudMinimumHeightAbovePlayers; // 0x2B0(0x4)
		float CloudMinimumHeightAboveGround; // 0x2B4(0x4)
		float CloudMinimumAltitude; // 0x2B8(0x4)
		float CloudMaxVerticalDelta; // 0x2BC(0x4)
		float CloudMinSpeed; // 0x2C0(0x4)
		float CloudMaxSpeed; // 0x2C4(0x4)
		float StormWindCloudRadius; // 0x2C8(0x4)
		float StormWindGoalRadius; // 0x2CC(0x4)
		float StormWindFalloffRadius; // 0x2D0(0x4)
		float StormWindInactiveMagnitude; // 0x2D4(0x4)
		float StormWindActiveMagnitude; // 0x2D8(0x4)
		float StormWindDesiredDeltaBlendTime; // 0x2DC(0x4)
		float StormWindDirectionAdditionalAngle; // 0x2E0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FThreatLocationArray ThreatLocations; // 0x2E8(0x118)
		FStormWindArray StormWindArray; // 0x400(0x118)
		TArray<FVector> GoalActorLocations; // 0x518(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x528(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortThreatVisualsManager");
			return ret;
		}

		bool StormsExist(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9F1630(relative to base address)
		void SetMinimumCloudAltitude(float NewMinimumAltitude); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F1064(relative to base address)
		void SetCloudsAreHidden(bool bHide); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F0868(relative to base address)
		void ResetMinimumCloudAltitude(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F9F075C(relative to base address)
		void OnWorldReady(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnThreatCloudsChanged(TArray<FThreatLocationInfo>& ThreatLocationInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ThreatLocations(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C388930(relative to base address)
		void OnRep_StormWinds(); // Flags: Final|Native|Private, Memory Exec: 0x7FF749066BE0(relative to base address)
		void OnRep_HideClouds(); // Flags: Final|Native|Private, Memory Exec: 0x7FF747E38E94(relative to base address)
		void OnRep_GoalActorLocations(); // Flags: Final|Native|Private, Memory Exec: 0x7FF747E38800(relative to base address)
		void OnBeginThreatVisualsPrecursor(AActor* SourceActor, FVector& EndLocation); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetThreatClouds(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9EFCB8(relative to base address)
		AThreatCloud GetThreatCloud(FThreatLocationInfo& ThreatLocInfo); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F9EFC10(relative to base address)
		bool GetCloudsAreHidden(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EDD2940(relative to base address)
		void BeginThreatVisualsPrecursor(AActor* SourceActor, FVector ThreatLocation); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults, Memory Exec: 0x7FF74F9EF9B0(relative to base address)
	};


	// Class FortniteAI.AIGoalComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UAIGoalComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNewGoalActorDelegate; // 0xD0(0x10)
		unsigned char UnknownData01_7[0x20]; // 0xE0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIGoalComponent");
			return ret;
		}

		void SetGoalActor(AActor* InActor, bool bLocationAlwaysKnown); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F304(relative to base address)
		void OnBuildingActorGoalDestroyed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FA1EBB4(relative to base address)
		void OnActorGoalDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FA1EB34(relative to base address)
		AActor GetGoalActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA1E1C8(relative to base address)
		UAIGoalComponent GetAIGoalComponent(AActor* Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1E11C(relative to base address)
		void ClearCurrentGoalAndAssignment(bool bClearPerception); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1DE68(relative to base address)
	};


	// Class FortniteAI.FortAIGoalComponent
	// Inherited from UAIGoalComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x150 - 0x100)
	class UFortAIGoalComponent : public UAIGoalComponent	
	{
	public:
		TMap<EFortAILODLevel, FScalableFloat> AssignmentUpdatePeriods; // 0x100(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIGoalComponent");
			return ret;
		}

		void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FA1F0CC(relative to base address)
	};


	// Class FortniteAI.FortAIGoalComponent_Manual
	// Inherited from UFortAIGoalComponent -> UAIGoalComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x150 - 0x150)
	class UFortAIGoalComponent_Manual : public UFortAIGoalComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIGoalComponent_Manual");
			return ret;
		}
	};


	// Class FortniteAI.FortAIGoalProvider
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortAIGoalProvider : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UWorld* World; // 0x30(0x8)
		UFortAIAssignment* AssignmentOwner; // 0x38(0x8)
		UFortAIEncounterInfo* EncounterInfo; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIGoalProvider");
			return ret;
		}

		void UpdateGoals(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C349660(relative to base address)
		bool InitializeGoalProvider(UWorld* ContextWorld, UFortAIAssignment* Assignment); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C870110(relative to base address)
		UFortAIEncounterInfo GetEncounterInfo(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA1E19C(relative to base address)
	};


	// Class FortniteAI.FortAIGoalProvider_EnvQuery
	// Inherited from UFortAIGoalProvider -> UObject
	// Size: 0x88 (0xD0 - 0x48)
	class UFortAIGoalProvider_EnvQuery : public UFortAIGoalProvider	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		UEnvQuery* GoalQuery; // 0x50(0x8)
		float AutomaticUpdatePeriodInSeconds; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FFortAIAssignmentIdentifier SpecificAssignmentContext; // 0x60(0x30)
		TWeakObjectPtr<UClass*> AIPawnContext; // 0x90(0x20)
		unsigned char UnknownData02_7[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIGoalProvider_EnvQuery");
			return ret;
		}
	};


	// Class FortniteAI.FortAIEncounterGoalSelectionTable
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAIEncounterGoalSelectionTable : public UDataAsset	
	{
	public:
		TArray<FEncounterGoalSelectionTableEntry> EncounterGoalSelectionCriteria; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterGoalSelectionTable");
			return ret;
		}
	};


	// Class FortniteAI.AIHotSpotConfig
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UAIHotSpotConfig : public UDataAsset	
	{
	public:
		TArray<FAIHotSpotSlotConfig> Slots; // 0x30(0x10)
		bool bDetectUnreachableSlots : 1; // 0x40:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		UAIHotSpotSlotGenerator* SlotGenerator; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpotConfig");
			return ret;
		}
	};


	// Class FortniteAI.AIHotSpotSlotGenerator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAIHotSpotSlotGenerator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpotSlotGenerator");
			return ret;
		}

		AAIHotSpot GetHotSpot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92E840(relative to base address)
		void GenerateSlots(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF746F37328(relative to base address)
		UAIHotSpotSlot AddSlot(FVector& RelativeLocation, FRotator& RelativeRotation, UClass* CustomSlotClass, bool bEnabled); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA1DBE8(relative to base address)
	};


	// Class FortniteAI.AIHotSpotSlotGenerator_OnBoundingBox
	// Inherited from UAIHotSpotSlotGenerator -> UObject
	// Size: 0x70 (0x98 - 0x28)
	class UAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator	
	{
	public:
		UClass* SlotClass; // 0x28(0x8)
		FVector MaxExtent; // 0x30(0x18)
		float ExpandBy; // 0x48(0x4)
		float OffsetFromEdge; // 0x4C(0x4)
		float Spacing; // 0x50(0x4)
		bool bLimitMaxExtent : 1; // 0x54:0(0x1)
		bool bMustHitFocusActor : 1; // 0x54:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		EBoundingBoxSlotDirectionCalculation SlotDirectionCalculation; // 0x58(0x1)
		unsigned char UnknownData01_7[0x3F]; // 0x59(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpotSlotGenerator_OnBoundingBox");
			return ret;
		}
	};


	// Class FortniteAI.BuildingActorHotSpotConfig
	// Inherited from UDataAsset -> UObject
	// Size: 0x128 (0x158 - 0x30)
	class UBuildingActorHotSpotConfig : public UDataAsset	
	{
	public:
		FBuildingActorHotSpotDirection DirectionSetup; // 0x30(0xF0)
		FBuildingActorHotSpotDirection DefaultSetup; // 0x120(0x28)
		UAIHotSpotConfig* ExtraTypeConfig; // 0x148(0x8)
		bool bHasDirectionalSetup : 1; // 0x150:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x151(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.BuildingActorHotSpotConfig");
			return ret;
		}
	};


	// Class FortniteAI.BuildingActorHotSpotRenderingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x520 - 0x518)
	class UBuildingActorHotSpotRenderingComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.BuildingActorHotSpotRenderingComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpot
	// Inherited from AAIHotSpot -> AActor -> UObject
	// Size: 0x28 (0x468 - 0x440)
	class AFortAIHotSpot : public AAIHotSpot	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x440(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpot");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpotManager
	// Inherited from UAIHotSpotManagerProxy -> UAIHotSpotManager -> UObject
	// Size: 0x140 (0x1C0 - 0x80)
	class UFortAIHotSpotManager : public UAIHotSpotManagerProxy	
	{
	public:
		TWeakObjectPtr<UBuildingActorHotSpotConfig*> FallbackHotspotConfig; // 0x80(0x20)
		unsigned char UnknownData00_6[0xF0]; // 0xA0(0xF0) UNKNOWN PROPERTY
		TArray<FAutoAcquireSlot> AutoAcquireSlots; // 0x190(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x1A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpotManager");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpotSlot
	// Inherited from UAIHotSpotSlot -> UObject
	// Size: 0x10 (0x130 - 0x120)
	class UFortAIHotSpotSlot : public UAIHotSpotSlot	
	{
	public:
		EFortHotSpotSlot SlotType; // 0x120(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
		bool bHasProjectedLocation : 1; // 0x124:0(0x1)
		bool bProjectedOnLowArea : 1; // 0x124:1(0x1)
		bool bIsAutoGenerated : 1; // 0x124:2(0x1)
		bool bCanDuplicateOnProjection : 1; // 0x124:3(0x1)
		bool bCanProjectUp : 1; // 0x124:4(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x125(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpotSlot");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpotSlotGenerator_FromConfig
	// Inherited from UAIHotSpotSlotGenerator -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UFortAIHotSpotSlotGenerator_FromConfig : public UAIHotSpotSlotGenerator	
	{
	public:
		UAIHotSpotConfig* BuildingConfig; // 0x28(0x8)
		FVector Offset; // 0x30(0x18)
		bool bMirrorX : 1; // 0x48:0(0x1)
		bool bMirrorY : 1; // 0x48:1(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpotSlotGenerator_FromConfig");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpotSlotGenerator_OnBoundingBox
	// Inherited from UAIHotSpotSlotGenerator_OnBoundingBox -> UAIHotSpotSlotGenerator -> UObject
	// Size: 0x8 (0xA0 - 0x98)
	class UFortAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator_OnBoundingBox	
	{
	public:
		float DistanceForRangedSlots; // 0x98(0x4)
		float DistanceForHugeSlots; // 0x9C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpotSlotGenerator_OnBoundingBox");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpotSlotGenerator_RampTrace
	// Inherited from UAIHotSpotSlotGenerator -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UFortAIHotSpotSlotGenerator_RampTrace : public UAIHotSpotSlotGenerator	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpotSlotGenerator_RampTrace");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpot_Building
	// Inherited from AFortAIHotSpot -> AAIHotSpot -> AActor -> UObject
	// Size: 0xE8 (0x550 - 0x468)
	class AFortAIHotSpot_Building : public AFortAIHotSpot	
	{
	public:
		UAIHotSpotConfig* ExtraTypeConfig; // 0x468(0x8)
		unsigned char UnknownData00_7[0xE0]; // 0x470(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpot_Building");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpot_FakeBuilding
	// Inherited from AFortAIHotSpot -> AAIHotSpot -> AActor -> UObject
	// Size: 0x0 (0x468 - 0x468)
	class AFortAIHotSpot_FakeBuilding : public AFortAIHotSpot	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpot_FakeBuilding");
			return ret;
		}
	};


	// Class FortniteAI.FortAIHotSpot_Shooting
	// Inherited from AFortAIHotSpot -> AAIHotSpot -> AActor -> UObject
	// Size: 0x0 (0x468 - 0x468)
	class AFortAIHotSpot_Shooting : public AFortAIHotSpot	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIHotSpot_Shooting");
			return ret;
		}
	};


	// Class FortniteAI.FortInfluenceMap
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class UFortInfluenceMap : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0xB8]; // 0x28(0xB8) UNKNOWN PROPERTY
		AFortNavigationGraph* GraphData; // 0xE0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortInfluenceMap");
			return ret;
		}

		void K2_GetInfluenceSourcePositions(UObject* WorldContext, TArray<FVector>& InfluenceSourcePositions); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA1E628(relative to base address)
		void K2_AddInfluenceSource(UObject* WorldContext, FVector& Position, FString SourceName, float Strength); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FA1E408(relative to base address)
	};


	// Class FortniteAI.IrwinAIController
	// Inherited from AAthenaAIController -> AFortAIController -> AAIController -> AController -> AActor -> UObject
	// Size: 0x0 (0x608 - 0x608)
	class AIrwinAIController : public AAthenaAIController	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.IrwinAIController");
			return ret;
		}
	};


	// Class FortniteAI.LevelTestingActorBase
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class ALevelTestingActorBase : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.LevelTestingActorBase");
			return ret;
		}
	};


	// Class FortniteAI.FortBotController
	// Inherited from AFortAIController -> AAIController -> AController -> AActor -> UObject
	// Size: 0x8 (0x580 - 0x578)
	class AFortBotController : public AFortAIController	
	{
	public:
		UFortBotMissionLogic* CurrentMissionLogic; // 0x578(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBotController");
			return ret;
		}
	};


	// Class FortniteAI.FortBotMissionLogic
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UFortBotMissionLogic : public UObject	
	{
	public:
		AFortMission* Mission; // 0x28(0x8)
		TArray<AActor*> Goals; // 0x30(0x10)
		TArray<AFortBotStructureBuilder*> Builders; // 0x40(0x10)
		UBehaviorTree* CurrentBehaviorAsset; // 0x50(0x8)
		TArray<AFortBotController*> AssignedAI; // 0x58(0x10)
		TArray<char> GoalHasLocator; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBotMissionLogic");
			return ret;
		}

		AFortBotStructureBuilder SpawnStructureBuilder(AActor* MissionGoal, UFortBuildingInstructions* BuildingInstructions); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F4D0(relative to base address)
		void SetGoalsInvulnerable(bool bGodMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F3D0(relative to base address)
		void SetCurrentBehavior(UBehaviorTree* Behavior); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F284(relative to base address)
		void ResetBehavior(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F25C(relative to base address)
		void OnMissionStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMissionFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMissionActivated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool OnInteractWithMissionGoal(AFortAIController* BotAI, AActor* MissionGoal); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool OnCanStartOtherMission(AFortAIController* BotAI, AFortMission* OtherMission); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAssignedBehavior(AFortAIController* BotAI); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MarkSingleLocator(AActor* LocatorActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1E770(relative to base address)
		void MarkAllLocated(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1E724(relative to base address)
		void ClearAllLocated(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1DE38(relative to base address)
	};


	// Class FortniteAI.FortBotMissionManager
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UFortBotMissionManager : public UObject	
	{
	public:
		TWeakObjectPtr<UClass*> BotPawnClass; // 0x28(0x20)
		TArray<AFortPawn*> BotPawns; // 0x48(0x10)
		TArray<UFortBotMissionLogic*> ActiveMissionsLogicData; // 0x58(0x10)
		UFortBotMissionLogic* PrimaryMissionLogicData; // 0x68(0x8)
		unsigned char UnknownData00_7[0x58]; // 0x70(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBotMissionManager");
			return ret;
		}
	};


	// Class FortniteAI.FortBotStructureBuilder
	// Inherited from AActor -> UObject
	// Size: 0x38 (0x2C8 - 0x290)
	class AFortBotStructureBuilder : public AActor	
	{
	public:
		UFortBuildingInstructions* BuildingInstructions; // 0x290(0x8)
		TArray<ABuildingActor*> BuiltActors; // 0x298(0x10)
		AActor* CachedGoal; // 0x2A8(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x2B0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBotStructureBuilder");
			return ret;
		}

		void RunDeconstructor(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F270(relative to base address)
		void OnBuildingDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF74FA1EBC8(relative to base address)
		void BuildAll(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1DE24(relative to base address)
	};


	// Class FortniteAI.FortMetaNavArea_Obstacles
	// Inherited from UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UFortMetaNavArea_Obstacles : public UNavAreaMeta	
	{
	public:
		int32_t HealthThreshold; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortMetaNavArea_Obstacles");
			return ret;
		}
	};


	// Class FortniteAI.FortNavAgentCostData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortNavAgentCostData : public UPrimaryDataAsset	
	{
	public:
		FName NavAgentName; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<UClass*> NavAreaStrengthBuckets; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavAgentCostData");
			return ret;
		}
	};


	// Class FortniteAI.FortNavAreaAutomatic
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x18 (0x68 - 0x50)
	class UFortNavAreaAutomatic : public UFortNavArea	
	{
	public:
		FCurveTableRowHandle NavCostCurveHandle; // 0x50(0x10)
		int32_t NavAreaStrength; // 0x60(0x4)
		float AutomaticNavCost; // 0x64(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavAreaAutomatic");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_BigMovingPawn
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_BigMovingPawn : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_BigMovingPawn");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_CheapObstacle
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_CheapObstacle : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_CheapObstacle");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_Clamber
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_Clamber : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_Clamber");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_ClosedDoors
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_ClosedDoors : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_ClosedDoors");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_Danger
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_Danger : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_Danger");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_DefenderNull
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_DefenderNull : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_DefenderNull");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_Hurdle
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_Hurdle : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_Hurdle");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_HuskNull
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_HuskNull : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_HuskNull");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_LowJump
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_LowJump : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_LowJump");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_LowSmashable
	// Inherited from UFortNavArea_DefaultSmashable -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_LowSmashable : public UFortNavArea_DefaultSmashable	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_LowSmashable");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_Obstacle
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_Obstacle : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_Obstacle");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_PortalOrSmash
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_PortalOrSmash : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_PortalOrSmash");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_SmashableJump
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UFortNavArea_SmashableJump : public UFortNavArea	
	{
	public:
		int32_t Strength; // 0x50(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_SmashableJump");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_Stairs
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_Stairs : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_Stairs");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_StarlightCheapObstacle
	// Inherited from UFortNavArea_CheapObstacle -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_StarlightCheapObstacle : public UFortNavArea_CheapObstacle	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_StarlightCheapObstacle");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_StarlightObstacle
	// Inherited from UFortNavArea_Obstacle -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_StarlightObstacle : public UFortNavArea_Obstacle	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_StarlightObstacle");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_StoneWall
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_StoneWall : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_StoneWall");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_TakerOnly
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_TakerOnly : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_TakerOnly");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_TraceSmashable
	// Inherited from UFortNavArea_DefaultSmashable -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_TraceSmashable : public UFortNavArea_DefaultSmashable	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_TraceSmashable");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_TrainTracks
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_TrainTracks : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_TrainTracks");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_Unwalkable
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_Unwalkable : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_Unwalkable");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_WalkOverWall
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_WalkOverWall : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_WalkOverWall");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_WallCorner
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_WallCorner : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_WallCorner");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_Zipline
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_Zipline : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_Zipline");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAvoidanceManager
	// Inherited from UAvoidanceManager -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UAthenaAvoidanceManager : public UAvoidanceManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAvoidanceManager");
			return ret;
		}
	};


	// Class FortniteAI.AthenaNavInvokerBox
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AAthenaNavInvokerBox : public AActor	
	{
	public:
		float GenerationRange; // 0x290(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		UNavigationInvokerComponent* InvokerComp; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavInvokerBox");
			return ret;
		}

		void SetInvokerEnabled(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F450(relative to base address)
	};


	// Class FortniteAI.AthenaNavMesh
	// Inherited from AFortNavMesh -> ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x100 (0x7D0 - 0x6D0)
	class AAthenaNavMesh : public AFortNavMesh	
	{
	public:
		int32_t HotSpotPathfindingMaxSearchNodes; // 0x6D0(0x4)
		float ShallowWaterTraceStartOffsetZ; // 0x6D4(0x4)
		float ShallowWaterTraceEndOffsetZ; // 0x6D8(0x4)
		int32_t MaximumTilesToProcessForWaterPerFrame; // 0x6DC(0x4)
		bool bSuspendNavmeshWhenNoAIUsersAlive; // 0x6E0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x6E1(0x7) UNKNOWN PROPERTY
		TArray<FBox> SerializedDirtyAreas; // 0x6E8(0x10)
		unsigned char UnknownData01_7[0xD8]; // 0x6F8(0xD8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavMesh");
			return ret;
		}

		void MoveTiles(FBox& SourceBox, FIntPoint& TileOffset, float RotationDeg, FVector2D& FillerTilePosition); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FA1E968(relative to base address)
		void ComputeOffsetForMoveTiles(FVector& StartPosition, FVector& DesiredPosition, FVector& OutEndPosition, FIntPoint& OutTileOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FA1DEE8(relative to base address)
	};


	// Class FortniteAI.AthenaNavMeshRenderingComponent
	// Inherited from UNavMeshRenderingComponent -> UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x530 - 0x530)
	class UAthenaNavMeshRenderingComponent : public UNavMeshRenderingComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavMeshRenderingComponent");
			return ret;
		}
	};


	// Class FortniteAI.AthenaNavMesh_Big
	// Inherited from AAthenaNavMesh -> AFortNavMesh -> ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x8 (0x7D8 - 0x7D0)
	class AAthenaNavMesh_Big : public AAthenaNavMesh	
	{
	public:
		float MaximumDistanceToWaterForShallow; // 0x7D0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x7D4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavMesh_Big");
			return ret;
		}
	};


	// Class FortniteAI.AthenaNavOctTreeInclusionBounds
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x0 (0x2C8 - 0x2C8)
	class AAthenaNavOctTreeInclusionBounds : public AVolume	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavOctTreeInclusionBounds");
			return ret;
		}
	};


	// Class FortniteAI.AthenaNavPresenceDetectorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UAthenaNavPresenceDetectorComponent : public UActorComponent	
	{
	public:
		bool bDisableUponNavMeshPresence; // 0xA0(0x1)
		bool bHasValidNavMesh; // 0xA1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xA2(0x2) UNKNOWN PROPERTY
		FName NavMeshNameToUse; // 0xA4(0x4)
		TArray<FNavMeshDetectedInfo> NavMeshesInfo; // 0xA8(0x10)
		FMulticastInlineDelegate NavMeshPresenceDetected; // 0xB8(0x10)
		FMulticastInlineDelegate NavMeshPresenceUndetected; // 0xC8(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavPresenceDetectorComponent");
			return ret;
		}

		void OnNavMeshTilesUpdated(FUpdatedNavMeshTiles& UpdatedNavMeshTiles); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74FA1F02C(relative to base address)
		bool HasValidNavMeshLocation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA1E310(relative to base address)
	};


	// Class FortniteAI.AthenaNavRelevantActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAthenaNavRelevantActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavRelevantActorInterface");
			return ret;
		}
	};


	// Class FortniteAI.AthenaNavSystem
	// Inherited from UFortNavSystem -> UNavigationSystemV1 -> UNavigationSystemBase -> UObject
	// Size: 0x220 (0x1A10 - 0x17F0)
	class UAthenaNavSystem : public UFortNavSystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x17F0(0x8) UNKNOWN PROPERTY
		TArray<FNavDataSetVariantSettings> NavDataSetVariants; // 0x17F8(0x10)
		bool bUseNavDataSetVariants : 1; // 0x1808:0(0x1)
		bool bMarkBuildingFoundationDirty : 1; // 0x1808:1(0x1)
		bool bSupportRuntimeNavmeshDisabling : 1; // 0x1808:2(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x1809(0x3) UNKNOWN PROPERTY
		float NavGenerationObserverCheckInterval; // 0x180C(0x4)
		unsigned char UnknownData02_6[0x20]; // 0x1810(0x20) UNKNOWN PROPERTY
		bool bAllowStaticNavigationInvokerBoxes : 1; // 0x1830:0(0x1)
		unsigned char UnknownData03_5[0x7]; // 0x1831(0x7) UNKNOWN PROPERTY
		TArray<FBoxNavInvoker> BoxInvokers; // 0x1838(0x10)
		unsigned char UnknownData04_6[0x190]; // 0x1848(0x190) UNKNOWN PROPERTY
		TArray<FBox> NavOctTreeInclusionBounds; // 0x19D8(0x10)
		unsigned char UnknownData05_6[0xC]; // 0x19E8(0xC) UNKNOWN PROPERTY
		ENavigationSupport NavMeshSupportOverride; // 0x19F4(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x19F5(0x3) UNKNOWN PROPERTY
		TArray<FName> ExperienceSupportedAgents; // 0x19F8(0x10)
		unsigned char UnknownData07_7[0x8]; // 0x1A08(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavSystem");
			return ret;
		}

		void UnregisterNavGenerationObserver(USceneComponent* Component); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F8DC(relative to base address)
		bool SupportNavigationSeedComponents(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1E3F0(relative to base address)
		void RegisterNavGenerationObserver(USceneComponent* Component, FDelegateProperty Event); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1F190(relative to base address)
		bool IsUGCNavMeshOnDemandEnabled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA1E3F0(relative to base address)
		bool IsInitialNavigationLockActive(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74FA1E334(relative to base address)
		bool HasDirtyAreasInBound(UObject* WorldContextObject, FBox& BoundingBox); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FA1E1FC(relative to base address)
	};


	// Class FortniteAI.AthenaNavSystemConfig
	// Inherited from UFortNavSystemConfig -> UNavigationSystemModuleConfig -> UNavigationSystemConfig -> UObject
	// Size: 0x58 (0xB8 - 0x60)
	class UAthenaNavSystemConfig : public UFortNavSystemConfig	
	{
	public:
		TArray<FNavDataSetVariantSettings> NavDataSetVariants; // 0x60(0x10)
		bool bUseNavDataSetVariants : 1; // 0x70:0(0x1)
		bool bDiscardNavDataFromSublevels : 1; // 0x70:1(0x1)
		bool bUseNavigationInvokers : 1; // 0x70:2(0x1)
		bool bAllowStaticNavigationInvokerBoxes : 1; // 0x70:3(0x1)
		bool bLazyOctree : 1; // 0x70:4(0x1)
		bool bUseNavOctTreeInclusionBounds : 1; // 0x70:5(0x1)
		bool bPrioritizeNavigationAroundSpawners : 1; // 0x70:6(0x1)
		bool bResetDirtyAreasOnInitialBuildingRelease : 1; // 0x70:7(0x1)
		bool bSupportRuntimeNavmeshDisabling : 1; // 0x71:0(0x1)
		bool bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData : 1; // 0x71:1(0x1)
		bool bConfigureDirtyAreaWarningSizeThreshold : 1; // 0x71:2(0x1)
		bool bUseDirtyAreaFilterFunction : 1; // 0x71:3(0x1)
		unsigned char UnknownData00_5[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
		double InvokersMaximumDistanceFromSeed; // 0x78(0x8)
		float DirtyAreaWarningSizeThreshold; // 0x80(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		TArray<FOverriddenSupportedAgentsByReleaseVersion> OverriddenSupportedAgentsByReleaseVersion; // 0x88(0x10)
		bool bSuspendNavmeshWhenNoPossibleUsers; // 0x98(0x1)
		bool bConfigureNavigationFromWorldSettings; // 0x99(0x1)
		bool bRemoveNavmeshWhenNotUsedInExperience; // 0x9A(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x9B(0x5) UNKNOWN PROPERTY
		TArray<FName> AllowedNavBoundsUniqueActorTags; // 0xA0(0x10)
		FNavAgentSelector EnableAutoNavConfigForAgent; // 0xB0(0x4)
		FNavAgentSelector AgentsSupportingAutoNavMeshDetection; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavSystemConfig");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_MetaReplacement
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_MetaReplacement : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_MetaReplacement");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_WallCornerReplacement
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_WallCornerReplacement : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_WallCornerReplacement");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_ObstacleReplacement
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortNavArea_ObstacleReplacement : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_ObstacleReplacement");
			return ret;
		}
	};


	// Class FortniteAI.FortNavArea_TempWallReplacement
	// Inherited from UFortNavAreaAutomatic -> UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UFortNavArea_TempWallReplacement : public UFortNavAreaAutomatic	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavArea_TempWallReplacement");
			return ret;
		}
	};


	// Class FortniteAI.EdgeNavLinks
	// Inherited from ANavLinkProxy -> AActor -> UObject
	// Size: 0x50 (0x330 - 0x2E0)
	class AEdgeNavLinks : public ANavLinkProxy	
	{
	public:
		float DistanceBetweenLinks; // 0x2E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FVector Start; // 0x2E8(0x18)
		FVector End; // 0x300(0x18)
		float SnapRadius; // 0x318(0x4)
		float SnapHeight; // 0x31C(0x4)
		float LinkProjectionHeight; // 0x320(0x4)
		float RightLinkForwardOffset; // 0x324(0x4)
		TEnumAsByte<ECollisionChannel> CollisionChannel; // 0x328(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x329(0x3) UNKNOWN PROPERTY
		bool bManualAdjustment : 1; // 0x32C:0(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x32D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.EdgeNavLinks");
			return ret;
		}
	};


	// Class FortniteAI.EdgeNavLinksRenderingComponent
	// Inherited from UNavLinkRenderingComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x4D0 - 0x4D0)
	class UEdgeNavLinksRenderingComponent : public UNavLinkRenderingComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.EdgeNavLinksRenderingComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortCustomNavLinkGlobalProxy
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortCustomNavLinkGlobalProxy : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FNavLinkId LinkId; // 0x30(0x8)
		UObject* Owner; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCustomNavLinkGlobalProxy");
			return ret;
		}
	};


	// Class FortniteAI.FortClamberLinkGlobalProxy
	// Inherited from UFortCustomNavLinkGlobalProxy -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFortClamberLinkGlobalProxy : public UFortCustomNavLinkGlobalProxy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortClamberLinkGlobalProxy");
			return ret;
		}
	};


	// Class FortniteAI.FortDoorLinkComponent
	// Inherited from UNavLinkCustomComponent -> UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UFortDoorLinkComponent : public UNavLinkCustomComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortDoorLinkComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortHurdleLinkGlobalProxy
	// Inherited from UFortCustomNavLinkGlobalProxy -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UFortHurdleLinkGlobalProxy : public UFortCustomNavLinkGlobalProxy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortHurdleLinkGlobalProxy");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationFilter
	// Inherited from UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UFortNavigationFilter : public UNavigationQueryFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationFilter");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationMetaFilter
	// Inherited from UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UFortNavigationMetaFilter : public UNavigationQueryFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationMetaFilter");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationFilter_Hunting
	// Inherited from UFortNavigationMetaFilter -> UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UFortNavigationFilter_Hunting : public UFortNavigationMetaFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationFilter_Hunting");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationFilter_IgnoreSmashingCost
	// Inherited from UFortNavigationFilter -> UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UFortNavigationFilter_IgnoreSmashingCost : public UFortNavigationFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationFilter_IgnoreSmashingCost");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationFilter_Leash
	// Inherited from UFortNavigationFilter -> UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UFortNavigationFilter_Leash : public UFortNavigationFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationFilter_Leash");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationFilter_NoSmashing
	// Inherited from UFortNavigationFilter -> UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UFortNavigationFilter_NoSmashing : public UFortNavigationFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationFilter_NoSmashing");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationFilter_NoSmashingIncludeLow
	// Inherited from UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UFortNavigationFilter_NoSmashingIncludeLow : public UNavigationQueryFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationFilter_NoSmashingIncludeLow");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationFilter_TetherZone
	// Inherited from UFortNavigationFilter -> UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UFortNavigationFilter_TetherZone : public UFortNavigationFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationFilter_TetherZone");
			return ret;
		}
	};


	// Class FortniteAI.FortNavigationGraph
	// Inherited from ANavigationData -> AActor -> UObject
	// Size: 0x158 (0x5E8 - 0x490)
	class AFortNavigationGraph : public ANavigationData	
	{
	public:
		unsigned char UnknownData00_1[0x158]; // 0x490(0x158) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavigationGraph");
			return ret;
		}
	};


	// Class FortniteAI.FortNavModifierVolume
	// Inherited from ANavModifierVolume -> AVolume -> ABrush -> AActor -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class AFortNavModifierVolume : public ANavModifierVolume	
	{
	public:
		TArray<UClass*> EnableOnlyForNavmeshClasses; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavModifierVolume");
			return ret;
		}
	};


	// Class FortniteAI.FortNavPathRendererInfoInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortNavPathRendererInfoInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavPathRendererInfoInterface");
			return ret;
		}
	};


	// Class FortniteAI.FortNavPathRendererComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UFortNavPathRendererComponent : public UActorComponent	
	{
	public:
		UNiagaraSystem* PathVFX; // 0xA0(0x8)
		FVector PathVFXOffset; // 0xA8(0x18)
		TArray<FColor> PathColors; // 0xC0(0x10)
		UNiagaraComponent* PathVFXComponent; // 0xD0(0x8)
		TArray<FPathRendererInfo> PathRendererList; // 0xD8(0x10)
		TArray<FVector4f> AllPathsPoints; // 0xE8(0x10)
		TArray<FVector> NavPathPoints; // 0xF8(0x10)
		TArray<int32_t> NavPathPointsStatus; // 0x108(0x10)
		EPatrollingMode PathMode; // 0x118(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		int32_t CurrentPathColorIndex; // 0x11C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavPathRendererComponent");
			return ret;
		}

		void UpdatePathsVisualOnClient(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA404C4(relative to base address)
		void OnRep_PathPointsUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FA402A0(relative to base address)
		void OnRep_PathModeUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FA4028C(relative to base address)
		void OnRep_ColorIndexUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FA4028C(relative to base address)
		void DeactivateFX(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA40278(relative to base address)
	};


	// Class FortniteAI.FortZiplineLinkComponent
	// Inherited from UNavLinkCustomComponent -> UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0x40 (0x220 - 0x1E0)
	class UFortZiplineLinkComponent : public UNavLinkCustomComponent	
	{
	public:
		FVector LinkOffsetFromSplineStart; // 0x1E0(0x18)
		FVector LinkOffsetFromSplineEnd; // 0x1F8(0x18)
		bool bOverrideSnapRadius; // 0x210(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x211(0x3) UNKNOWN PROPERTY
		float SnapRadiusOverride; // 0x214(0x4)
		bool bOverrideSnapHeight; // 0x218(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x219(0x3) UNKNOWN PROPERTY
		float SnapHeightOverride; // 0x21C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortZiplineLinkComponent");
			return ret;
		}

		void OnZiplineStateChanged(bool bIsZiplining, AFortPlayerPawn* FortPlayerPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FA40380(relative to base address)
	};


	// Class FortniteAI.NavigationHeightMapData
	// Inherited from ANavigationData -> AActor -> UObject
	// Size: 0x168 (0x5F8 - 0x490)
	class ANavigationHeightMapData : public ANavigationData	
	{
	public:
		FVector OriginOffset; // 0x490(0x18)
		bool bIsWorldPartitioned : 1; // 0x4A8:0(0x1)
		bool bDoFullyAsyncNavDataGathering : 1; // 0x4A8:1(0x1)
		bool bFixedTilePoolSize : 1; // 0x4A8:2(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x4A9(0x3) UNKNOWN PROPERTY
		int32_t TilePoolSize; // 0x4AC(0x4)
		float TileSizeUU; // 0x4B0(0x4)
		FNavMeshResolutionParam NavMeshResolutionParams; // 0x4B4(0x24)
		float AgentRadius; // 0x4D8(0x4)
		float AgentHeight; // 0x4DC(0x4)
		float DrawOffset; // 0x4E0(0x4)
		uint32_t DefaultMaxSearchNodes; // 0x4E4(0x4)
		float HeuristicScale; // 0x4E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4EC(0x4) UNKNOWN PROPERTY
		double TimeSliceLongDurationDebug; // 0x4F0(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x4F8(0x4) UNKNOWN PROPERTY
		bool bUseVirtualGeometryFilteringAndDirtying : 1; // 0x4FC:0(0x1)
		bool bUseExtraTopCellWhenMarkingAreas : 1; // 0x4FC:1(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x4FD(0x3) UNKNOWN PROPERTY
		uint32_t InvokerTilePriorityBumpDistanceThresholdInTileUnits; // 0x500(0x4)
		char InvokerTilePriorityBumpIncrease; // 0x504(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x505(0x3) UNKNOWN PROPERTY
		int32_t MaxSimultaneousTileGenerationJobsCount; // 0x508(0x4)
		FRecastNavMeshTileGenerationDebug TileGenerationDebug; // 0x50C(0x24)
		unsigned char UnknownData05_7[0xC8]; // 0x530(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.NavigationHeightMapData");
			return ret;
		}
	};


	// Class FortniteAI.FortNavHeightMapData
	// Inherited from ANavigationHeightMapData -> ANavigationData -> AActor -> UObject
	// Size: 0x0 (0x5F8 - 0x5F8)
	class AFortNavHeightMapData : public ANavigationHeightMapData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavHeightMapData");
			return ret;
		}
	};


	// Class FortniteAI.NavigationHeightMapRenderingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x530 - 0x518)
	class UNavigationHeightMapRenderingComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x518(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.NavigationHeightMapRenderingComponent");
			return ret;
		}
	};


	// Class FortniteAI.JLargeNavMesh
	// Inherited from AAthenaNavMesh -> AFortNavMesh -> ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x0 (0x7D0 - 0x7D0)
	class AJLargeNavMesh : public AAthenaNavMesh	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.JLargeNavMesh");
			return ret;
		}
	};


	// Class FortniteAI.JMediumLargeNavMesh
	// Inherited from AAthenaNavMesh -> AFortNavMesh -> ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x0 (0x7D0 - 0x7D0)
	class AJMediumLargeNavMesh : public AAthenaNavMesh	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.JMediumLargeNavMesh");
			return ret;
		}
	};


	// Class FortniteAI.JMediumNavMesh
	// Inherited from AAthenaNavMesh -> AFortNavMesh -> ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x0 (0x7D0 - 0x7D0)
	class AJMediumNavMesh : public AAthenaNavMesh	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.JMediumNavMesh");
			return ret;
		}
	};


	// Class FortniteAI.JSmallNavMesh
	// Inherited from AAthenaNavMesh -> AFortNavMesh -> ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x0 (0x7D0 - 0x7D0)
	class AJSmallNavMesh : public AAthenaNavMesh	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.JSmallNavMesh");
			return ret;
		}
	};


	// Class FortniteAI.NavigationSeedComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UNavigationSeedComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.NavigationSeedComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortInescapableZoneTracker
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UFortInescapableZoneTracker : public UObject	
	{
	public:
		AFortNavigationGraph* NavGraph; // 0x28(0x8)
		unsigned char UnknownData00_7[0x60]; // 0x30(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortInescapableZoneTracker");
			return ret;
		}
	};


	// Class FortniteAI.FortPathCostEstimator
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UFortPathCostEstimator : public UObject	
	{
	public:
		TWeakObjectPtr<AActor*> GoalActorWeak; // 0x28(0x8)
		AFortNavigationGraph* NavGraph; // 0x30(0x8)
		unsigned char UnknownData00_7[0x70]; // 0x38(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPathCostEstimator");
			return ret;
		}
	};


	// Class FortniteAI.NavGraphDebugActor
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class ANavGraphDebugActor : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.NavGraphDebugActor");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAISense_Hearing
	// Inherited from UAISense_Hearing -> UAISense -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UAthenaAISense_Hearing : public UAISense_Hearing	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAISense_Hearing");
			return ret;
		}
	};


	// Class FortniteAI.FortAIControllerPerksComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UFortAIControllerPerksComponent : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAssignedPerksChangedEvent; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIControllerPerksComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAIPerkBase
	// Inherited from UObject
	// Size: 0x140 (0x168 - 0x28)
	class UFortAIPerkBase : public UObject	
	{
	public:
		FScalableFloat CooldownDuration; // 0x28(0x28)
		FScalableFloat CooldownDurationRandomDeviation; // 0x50(0x28)
		FScalableFloat ActivationCountBeforeCooldown; // 0x78(0x28)
		FScalableFloat ActivationDuration; // 0xA0(0x28)
		FScalableFloat ActivationDurationRandomDeviation; // 0xC8(0x28)
		FScalableFloat OddsToActivate; // 0xF0(0x28)
		FScalableFloat FailedActivationCooldownDuration; // 0x118(0x28)
		FScalableFloat FailedActivationCooldownDurationRandomDeviation; // 0x140(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIPerkBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAIStateTreeSchema
	// Inherited from UStateTreeSchema -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortAIStateTreeSchema : public UStateTreeSchema	
	{
	public:
		UClass* ControllerClass; // 0x28(0x8)
		UClass* PawnClass; // 0x30(0x8)
		TArray<FStateTreeExternalDataDesc> ContextDataDescs; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIStateTreeSchema");
			return ret;
		}
	};


	// Class FortniteAI.FortAIInjectedStateTreeSchema
	// Inherited from UFortAIStateTreeSchema -> UStateTreeSchema -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UFortAIInjectedStateTreeSchema : public UFortAIStateTreeSchema	
	{
	public:
		UClass* InjectedItemClass; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIInjectedStateTreeSchema");
			return ret;
		}
	};


	// Class FortniteAI.FortAIInjectedDecisionStateTreeSchema
	// Inherited from UFortAIInjectedStateTreeSchema -> UFortAIStateTreeSchema -> UStateTreeSchema -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortAIInjectedDecisionStateTreeSchema : public UFortAIInjectedStateTreeSchema	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIInjectedDecisionStateTreeSchema");
			return ret;
		}
	};


	// Class FortniteAI.FortAIInjectedActionStateTreeSchema
	// Inherited from UFortAIInjectedStateTreeSchema -> UFortAIStateTreeSchema -> UStateTreeSchema -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortAIInjectedActionStateTreeSchema : public UFortAIInjectedStateTreeSchema	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIInjectedActionStateTreeSchema");
			return ret;
		}
	};


	// Class FortniteAI.AITask_ExecuteAbility
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UAITask_ExecuteAbility : public UAITask	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x68(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AITask_ExecuteAbility");
			return ret;
		}
	};


	// Class FortniteAI.FortAITask_AdjustToSlot
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class UFortAITask_AdjustToSlot : public UAITask	
	{
	public:
		FVector SlotLocation; // 0x68(0x18)
		FVector SlotDirection; // 0x80(0x18)
		unsigned char UnknownData00_7[0x28]; // 0x98(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_AdjustToSlot");
			return ret;
		}
	};


	// Class FortniteAI.FortAITask_ExecuteAbility
	// Inherited from UAITask_ExecuteAbility -> UAITask -> UGameplayTask -> UObject
	// Size: 0x28 (0xB8 - 0x90)
	class UFortAITask_ExecuteAbility : public UAITask_ExecuteAbility	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x90(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_ExecuteAbility");
			return ret;
		}

		void OnInjectedHitResultDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF74FA70E24(relative to base address)
	};


	// Class FortniteAI.FortAITask_FuzzyQueue
	// Inherited from UAITask_MoveTo -> UAITask -> UGameplayTask -> UObject
	// Size: 0x20 (0x138 - 0x118)
	class UFortAITask_FuzzyQueue : public UAITask_MoveTo	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x118(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_FuzzyQueue");
			return ret;
		}
	};


	// Class FortniteAI.FortAITask_MoveTo
	// Inherited from UAITask_MoveTo -> UAITask -> UGameplayTask -> UObject
	// Size: 0x20 (0x138 - 0x118)
	class UFortAITask_MoveTo : public UAITask_MoveTo	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x118(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_MoveTo");
			return ret;
		}
	};


	// Class FortniteAI.FortAITask_NavmeshWait
	// Inherited from UAITask -> UGameplayTask -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UFortAITask_NavmeshWait : public UAITask	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x68(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_NavmeshWait");
			return ret;
		}
	};


	// Class FortniteAI.FortAITask_StepAside
	// Inherited from UFortAITask_Move -> UAITask_MoveTo -> UAITask -> UGameplayTask -> UObject
	// Size: 0x48 (0x1A8 - 0x160)
	class UFortAITask_StepAside : public UFortAITask_Move	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x160(0x18) UNKNOWN PROPERTY
		AActor* GoalActor; // 0x178(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x180(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_StepAside");
			return ret;
		}
	};


	// Class FortniteAI.FortAICloudVortex
	// Inherited from AActor -> UObject
	// Size: 0x98 (0x328 - 0x290)
	class AFortAICloudVortex : public AActor	
	{
	public:
		TArray<USplineMeshComponent*> SplineMeshesBody; // 0x290(0x10)
		UParticleSystemComponent* VortexBase; // 0x2A0(0x8)
		UParticleSystemComponent* VortexRing; // 0x2A8(0x8)
		TArray<FVector> SplinePointsA; // 0x2B0(0x10)
		TArray<FVector> SplinePointsB; // 0x2C0(0x10)
		TArray<FVector> SplineTangentsA; // 0x2D0(0x10)
		TArray<FVector> SplineTangentsB; // 0x2E0(0x10)
		TArray<double> TimeRandomArray; // 0x2F0(0x10)
		float TwistOverTime; // 0x300(0x4)
		int32_t NumberOfSplinePoints; // 0x304(0x4)
		bool bEnableVortexBaseParticleSystem; // 0x308(0x1)
		bool bEnableVortexRingParticleSystem; // 0x309(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x30A(0x6) UNKNOWN PROPERTY
		FVector BasePSOffset; // 0x310(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAICloudVortex");
			return ret;
		}

		void CalculateTwisterWiggle(double TickDelta); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6EABC(relative to base address)
	};


	// Class FortniteAI.ThreatCloud
	// Inherited from AActor -> UObject
	// Size: 0x220 (0x4B0 - 0x290)
	class AThreatCloud : public AActor	
	{
	public:
		TArray<UBoxComponent*> LightningSourceAreas; // 0x290(0x10)
		FSlateBrush MiniMapIconBrush; // 0x2A0(0xB0)
		float MiniMapIconPercent; // 0x350(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x354(0xC) UNKNOWN PROPERTY
		FSlateBrush MiniMapFarOffIconBrush; // 0x360(0xB0)
		FLinearColor ActiveTint; // 0x410(0x10)
		FLinearColor InActiveTint; // 0x420(0x10)
		float ActiveTransitionTime; // 0x430(0x4)
		float DeathTimerDuration; // 0x434(0x4)
		float CloudMiniMapTickInterval; // 0x438(0x4)
		unsigned char UnknownData01_6[0x14]; // 0x43C(0x14) UNKNOWN PROPERTY
		float MiniMapFarOffIconDegreesOfArc; // 0x450(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x454(0xC) UNKNOWN PROPERTY
		FBox ThreatBoxVolume; // 0x460(0x38)
		float GroundLevelUnderCloud; // 0x498(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x49C(0x4) UNKNOWN PROPERTY
		TArray<FVector> GoalActorLocations; // 0x4A0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.ThreatCloud");
			return ret;
		}

		void OnThreatVolumeChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLightningStrike(FVector& StartLocation, FVector& EndLocation, ABuildingRift* Rift, bool bLightningStruckRift); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCloudStart(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCloudHiddenChange(bool bCloudsAreHidden); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCloudDeactivated(EFortThreatDeactivationType DeactivationType); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCloudActivated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBeginDeath(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ManualLightningFlash(); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FBox GetThreatVolume(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6F88C(relative to base address)
	};


	// Class FortniteAI.AthenaAIBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAthenaAIBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIBlueprintLibrary");
			return ret;
		}

		void PushBehaviorControl(AFortAthenaAIBotController* BotController, int32_t BehaviorControl); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA720E8(relative to base address)
		void PopBehaviorControl(AFortAthenaAIBotController* BotController); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA71FB0(relative to base address)
		void MakeBotGroupsTakeEachOtherAsTargets(TArray<AActor*>& GroupA, TArray<AActor*>& GroupB, EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA70794(relative to base address)
		void KillBots(UObject* WorldContextObject, bool bKillPlayers, bool bKillNoneParticipants, char TeamIndex, AActor* BotOwner); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA702C4(relative to base address)
		void JoinTeam(UObject* WorldContextObject, AController* SourceTeamController, AController* DestinationTeamController); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA7017C(relative to base address)
		bool IsWeaponSupported(UObject* WorldContextObject, AFortWeapon* FortWeapon); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6FFEC(relative to base address)
		bool IsItemDefinitionSupported(UObject* WorldContextObject, UItemDefinitionBase* FortItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6FBBC(relative to base address)
		float GetNPCWidgetOffset(UObject* WorldContextObject, AFortPlayerController* LocalPlayerController, AActor* NPC, float DistRangeMin, float DistRangeMax, float YMin, float YMax); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6F514(relative to base address)
		UAthenaAIServicePlayerBots GetAIServicePlayerBots(UObject* WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6F32C(relative to base address)
		UAthenaAIServiceLoot GetAIServiceLoot(UObject* WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6F294(relative to base address)
		UAthenaAIServiceCreativePlayerBots GetAIServiceCreativePlayerBots(UObject* WorldContextObject); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6F214(relative to base address)
		UAthenaAIPopulationTracker GetAIPopulationTracker(UObject* WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6F17C(relative to base address)
		APawn AthenaSpawnAIFromClass(UObject* WorldContextObject, UClass* PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FA6E634(relative to base address)
		bool AIPawnFromGAHasLuringPickupAsGoal(FGameplayAbilityActorInfo& ActorInfo, FGameplayTag GameplayTag, float MaxLifetime, EFortPickupSpawnSource RequiredPickupSpawnSource); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA6E198(relative to base address)
	};


	// Class FortniteAI.FortAICombatTokenConsumerComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UFortAICombatTokenConsumerComponent : public UFortPawnComponent	
	{
	public:
		float TokenHoldMinDuration; // 0xA8(0x4)
		float TokenHoldMaxDuration; // 0xAC(0x4)
		TArray<FOwnedTokenData> CurrentTokens; // 0xB0(0x10)
		unsigned char UnknownData00_7[0x30]; // 0xC0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAICombatTokenConsumerComponent");
			return ret;
		}
	};


	// Class FortniteAI.TokenHintPosition
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ATokenHintPosition : public AActor	
	{
	public:
		UFortSnapOnSurfaceComponent* SnapOnSurfaceComp; // 0x290(0x8)
		UFortAthenaTrackableAIObjectComponent* TrackableAIComp; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.TokenHintPosition");
			return ret;
		}
	};


	// Class FortniteAI.FortAICombatTokenProviderComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class UFortAICombatTokenProviderComponent : public UActorComponent	
	{
	public:
		TArray<FTokenType> TokenTypes; // 0xA0(0x10)
		TArray<FTokenProviderPositioningData> PositioningDatas; // 0xB0(0x10)
		bool bRunningTokenAssignment; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x57]; // 0xC1(0x57) UNKNOWN PROPERTY
		FTimerHandle AssignTokensHandle; // 0x118(0x8)
		FScalableFloat AssignTokensUpdateFrequency; // 0x120(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAICombatTokenProviderComponent");
			return ret;
		}

		bool HasRunEQS(FGameplayTagQuery& GameplayTagQuery); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6FA78(relative to base address)
		void ForceRunQuery(FGameplayTagQuery& TagQuery); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA6EEE0(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotBuildingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UFortAthenaAIBotBuildingComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0xA0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotBuildingComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAlertStateComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortAthenaAlertStateComponent : public UActorComponent	
	{
	public:
		float StealthMeterTarget; // 0xA0(0x4)
		float StealthMeterTargetTime; // 0xA4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAlertStateComponent");
			return ret;
		}

		void SetStealthMeterTargetTime(float InStealthMeterTargetTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72508(relative to base address)
		void SetStealthMeterTarget(float InStealthMeterTarget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72488(relative to base address)
		void OnStealthMeterChanged(AFortAthenaAIBotController* BotController, float StealthMeterTarget, float StealthMeterTargetTime); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF74FA71980(relative to base address)
		float GetStealthMeterTargetTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6F874(relative to base address)
		float GetStealthMeterTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFEA96C(relative to base address)
	};


	// Class FortniteAI.FortAthenaNPCLoopStateComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortAthenaNPCLoopStateComponent : public UActorComponent	
	{
	public:
		bool bSpawnOutsideTheLoop : 1; // 0xA0:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_AIBotLoopSettings* RuntimeLoopSettings; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNPCLoopStateComponent");
			return ret;
		}

		void OnOwnerPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF74FA71224(relative to base address)
		void InitLoopState(AFortPawn* PawnOwner); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FortniteAI.FortPawnComponent_PingCommand
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C8 - 0xA8)
	class UFortPawnComponent_PingCommand : public UFortPawnComponent	
	{
	public:
		FFortPingInfo PingInfo; // 0xA8(0x108)
		unsigned char UnknownData00_7[0x18]; // 0x1B0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_PingCommand");
			return ret;
		}
	};


	// Class FortniteAI.FortPawnComponent_AIBotPingCommand
	// Inherited from UFortPawnComponent_PingCommand -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x1D0 - 0x1C8)
	class UFortPawnComponent_AIBotPingCommand : public UFortPawnComponent_PingCommand	
	{
	public:
		AAIController* CachedOwnerController; // 0x1C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIBotPingCommand");
			return ret;
		}

		void OnServerMarkerRemoved(FMarkerID MarkerID); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FA71868(relative to base address)
		void OnServerMarkerAdded(FFortWorldMarkerData& MarkerData); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74FA717C4(relative to base address)
		void OnOwnerPawnUnpossessed(APawn* Pawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FA716C4(relative to base address)
		void OnOwnerPawnPossessed(APawn* Pawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FA71644(relative to base address)
		void OnAIPingCommand(AFortPlayerPawn* PlayerPawn, PingCommandType CommandType); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnNPCUnconvertEvent(AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FA6F99C(relative to base address)
		void HandleOnNPCConvertEvent(AFortPawn* InstigatorPawn, AFortPawn* ConvertedPawn); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FA6F8CC(relative to base address)
	};


	// Class FortniteAI.FortPawnComponent_AIEnergy
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x108 - 0xA8)
	class UFortPawnComponent_AIEnergy : public UFortPawnComponent	
	{
	public:
		FScalableFloat MaxEnergy; // 0xA8(0x28)
		float CurrentEnergy; // 0xD0(0x4)
		float CurrentMaxEnergy; // 0xD4(0x4)
		TArray<FAIEnergyOverTimeData> EnergyOverTimeArray; // 0xD8(0x10)
		FMulticastInlineDelegate OnEnergyDepleted; // 0xE8(0x10)
		FMulticastInlineDelegate OnEnergyNoLongerDepleted; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIEnergy");
			return ret;
		}

		void UseEnergy(float EnergyToUse); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72B34(relative to base address)
		void StopUsingEnergy(FGameplayTag& EnergyUseIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA72A8C(relative to base address)
		void StopAddingEnergy(FGameplayTag& EnergyUseIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA72A8C(relative to base address)
		void StartUsingEnergy(float EnergyToUsePerSecond, FGameplayTag& EnergyUseIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA729BC(relative to base address)
		void StartAddingEnergy(float EnergyToAddPerSecond, FGameplayTag& EnergyUseIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA728EC(relative to base address)
		void SetMaxEnergy(float InMaxEnergy); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72388(relative to base address)
		void SetEnergy(float InEnergy); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72308(relative to base address)
		void OnRep_CurrentEnergy(float OldValue); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FA71744(relative to base address)
		bool IsFull(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6FB98(relative to base address)
		bool IsEmpty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6FB78(relative to base address)
		float GetMaxEnergy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F86403C(relative to base address)
		float GetEnergyPercentage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6F3FC(relative to base address)
		float GetEnergyCurrentlyAppliedPerSecond(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6F3C4(relative to base address)
		float GetEnergy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E8277E0(relative to base address)
		void AddEnergy(float EnergyToAdd); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6E474(relative to base address)
	};


	// Class FortniteAI.FortPawnComponent_AIFormation
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UFortPawnComponent_AIFormation : public UFortPawnComponent	
	{
	public:
		TArray<FVector> Slots; // 0xA8(0x10)
		float MaxDistanceFromSlotToSprint; // 0xB8(0x4)
		float MaxDistanceFromSlotToStopFollowing; // 0xBC(0x4)
		float MaxDistanceForLeaderToWait; // 0xC0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		TArray<FFortAthenaAIFormationSlotRuntime> RuntimeSlots; // 0xC8(0x10)
		float MaxDistanceFromSlotToSprintSqr; // 0xD8(0x4)
		float MaxDistanceFromSlotToStopFollowingTransient; // 0xDC(0x4)
		float MaxDistanceForLeaderToWaitSqr; // 0xE0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIFormation");
			return ret;
		}

		void OnUserDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74FA71A78(relative to base address)
	};


	// Class FortniteAI.FortPawnComponent_AIGroup
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortPawnComponent_AIGroup : public UFortPawnComponent	
	{
	public:
		bool bCanBeGroupLeader; // 0xA8(0x1)
		bool bCanFollowGroupLeader; // 0xA9(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		int32_t GroupId; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIGroup");
			return ret;
		}

		void RemoveFromCurrentGroup(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72224(relative to base address)
		void OnGroupMemberDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74FA70A24(relative to base address)
		void GetGroupTags(FGameplayTagContainer& OutGroupTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6F440(relative to base address)
		UFortPawnComponent_AIGroup GetGroupLeader(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6F41C(relative to base address)
		int32_t GetGroupID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE60(relative to base address)
		void AddToGroupByID(int32_t InGroupID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6E5B4(relative to base address)
		void AddToGroup(FGameplayTagContainer& InGroupTags); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA6E4FC(relative to base address)
	};


	// Class FortniteAI.FortAthenaPatrolPath
	// Inherited from AActor -> UObject
	// Size: 0x1E0 (0x470 - 0x290)
	class AFortAthenaPatrolPath : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		EPatrollingMode Mode; // 0x2A8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2A9(0x7) UNKNOWN PROPERTY
		TArray<AFortAthenaPatrolPoint*> PatrolPoints; // 0x2B0(0x10)
		bool bUseRandomStartupPatrolPoint; // 0x2C0(0x1)
		bool bUseRandomStartupDirection; // 0x2C1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2C2(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x2C8(0x20)
		AActor* RadialLeashLocationActorOverride; // 0x2E8(0x8)
		float RadialLeashInnerRadiusOverride; // 0x2F0(0x4)
		float RadialLeashOuterRadiusOverride; // 0x2F4(0x4)
		TArray<FPatrolPathLeash> PathLeashArray; // 0x2F8(0x10)
		bool bUsePathLeashWhenPatrollingIsDisabled; // 0x308(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x309(0x7) UNKNOWN PROPERTY
		FScalableFloat WaterLevelIndexMax; // 0x310(0x28)
		FScalableFloat WaterLevelIndexMin; // 0x338(0x28)
		FMulticastInlineDelegate OnNextPatrolPointFailedToReach; // 0x360(0x10)
		FMulticastInlineDelegate OnPatrolPointFailedToReach; // 0x370(0x10)
		FMulticastInlineDelegate OnPatrolPointReached; // 0x380(0x10)
		FMulticastInlineDelegate OnPatrolPathStarted; // 0x390(0x10)
		FMulticastInlineDelegate OnPatrolPathStopped; // 0x3A0(0x10)
		FMulticastInlineDelegate OnPatrolPathActivationStatusChanged; // 0x3B0(0x10)
		FScalableFloat MaxConcurrentUsage; // 0x3C0(0x28)
		int32_t CurrentConcurrentUsage; // 0x3E8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3EC(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxLifetimeUsage; // 0x3F0(0x28)
		float DebugLinkWidthSelected; // 0x418(0x4)
		float DebugLinkWidthNotSelected; // 0x41C(0x4)
		FLinearColor DebugNotSelectedColor; // 0x420(0x10)
		unsigned char UnknownBit05 : 1; // 0x430:0(0x1) UNKNOWN PROPERTY
		bool bIsPatrolPathEnabled : 1; // 0x430:1(0x1)
		bool bSyncWithPointProvider : 1; // 0x430:2(0x1)
		unsigned char UnknownData06_7[0x3F]; // 0x431(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaPatrolPath");
			return ret;
		}

		void SetPatrolPathEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAD00CC(relative to base address)
		void PatrolPointReached(AFortAthenaPatrolPoint* PathPoint, AAIController* AIInstigator, bool bReachedBackward); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74FACF29C(relative to base address)
		void PatrolPointFailedToReach(AFortAthenaPatrolPoint* PathPoint, AAIController* AIInstigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74FACF1D8(relative to base address)
		void PatrolPathStopped(AAIController* AIInstigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74FACF158(relative to base address)
		void PatrolPathStarted(AAIController* AIInstigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74FACF0D8(relative to base address)
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74FACE658(relative to base address)
		void NextPatrolPointFailedToReach(AFortAthenaPatrolPoint* PathPoint, AAIController* AIInstigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74FACE2AC(relative to base address)
		bool IsEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACE1A4(relative to base address)
		int32_t GetPatrolPointsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749FCCC20(relative to base address)
		void GetPatrolPoints(TArray<AFortAthenaPatrolPoint*>& OutPatrolPoints); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD778(relative to base address)
		AFortAthenaPatrolPoint GetPatrolPoint(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD6EC(relative to base address)
		bool CanBeUsed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACC68C(relative to base address)
	};


	// Class FortniteAI.FortCreativePatrolPath
	// Inherited from AFortAthenaPatrolPath -> AActor -> UObject
	// Size: 0x28 (0x498 - 0x470)
	class AFortCreativePatrolPath : public AFortAthenaPatrolPath	
	{
	public:
		TArray<AFortCreativeDeviceProp*> CreativePatrolPoints; // 0x470(0x10)
		EFortCreativePatrolPathGroup PatrolPathGroup; // 0x480(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x481(0x7) UNKNOWN PROPERTY
		ABuildingActor* CreativePathRenderer; // 0x488(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x490(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCreativePatrolPath");
			return ret;
		}

		void SetPatrolHasValidNavMesh(bool bValidNavMesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72408(relative to base address)
		bool HasPatrolValidNavMesh(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6FA60(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotAimingDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x770 (0x7A0 - 0x30)
	class UFortAthenaAIBotAimingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		FDigestedFocusSetting DefaultFocusSetting; // 0x30(0x68)
		TArray<FDigestedFocusSetting> FocusSettings; // 0x98(0x10)
		FLookAtDigestedSetting LookAtSettings; // 0xA8(0x40)
		bool bAllowScanAroundWhileSwimming; // 0xE8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xE9(0x3) UNKNOWN PROPERTY
		float TrackingReactionTime; // 0xEC(0x4)
		float InAirTrackingReactionTimeMultiplier; // 0xF0(0x4)
		float TrackingInterpTime; // 0xF4(0x4)
		float TrackingInterpTimeMultForGroundVehicles; // 0xF8(0x4)
		float TrackingInterpTimeMultForFlyingVehicles; // 0xFC(0x4)
		float MaxTrackingPredictionError; // 0x100(0x4)
		float MaxTrackingOffsetErrorMultiplier; // 0x104(0x4)
		float AdjustedTrackingOffsetErrorMultiplierAgainstAIs; // 0x108(0x4)
		float TrackingErrorUpdateInterval; // 0x10C(0x4)
		float TrackingInAirVelocityThreshold; // 0x110(0x4)
		float TrackingInAirHeightDeltaThreshold; // 0x114(0x4)
		float TargetAcquisitionRate; // 0x118(0x4)
		float TimeToHitMultiplier; // 0x11C(0x4)
		float MaxTimeToHitAddedCausedByTargetSpeed; // 0x120(0x4)
		float MaxTimeToHitAddedCausedByTargetInAir; // 0x124(0x4)
		float TimeToHitDelayMultiplierWhenTargetInAir; // 0x128(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FScalableFloat TimeToHitDelayMultiplierCurveBasedOnSpeed; // 0x130(0x28)
		bool bAimingCircleEnabled; // 0x158(0x1)
		bool bTargetIdleDetectionEnabled; // 0x159(0x1)
		bool bTargetIdleUseAgainstNPC; // 0x15A(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x15B(0x1) UNKNOWN PROPERTY
		float TargetIdleLookBackTime; // 0x15C(0x4)
		float TargetIdleUnsuspectingCosAngle; // 0x160(0x4)
		float TargetIdleUnsuspectingDistance; // 0x164(0x4)
		float TargetIdleUnsuspectingDamageDuration; // 0x168(0x4)
		float TargetIdleUnsuspectingTimeMultiplier; // 0x16C(0x4)
		float TargetIdleVerticalSpeedThreshold; // 0x170(0x4)
		float TargetIdleLateralSpeedThreshold; // 0x174(0x4)
		float TargetIdleFrontalSpeedThreshold; // 0x178(0x4)
		float TargetIdleRevivedGracePeriodDuration; // 0x17C(0x4)
		float MaxDistanceEvaluationErrorRatio; // 0x180(0x4)
		float TargetingUpdateInterval; // 0x184(0x4)
		float TargetingUpdateIntervalMaxDeviation; // 0x188(0x4)
		float ReachLeashLimitToleranceDistance; // 0x18C(0x4)
		bool bShootFloorTrapOnlyWhenHigherThanTrap; // 0x190(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x191(0x3) UNKNOWN PROPERTY
		float TargetingRotationSpeedLimit; // 0x194(0x4)
		float TargetingRotationSnapThreshold; // 0x198(0x4)
		float BaseClampingDistance; // 0x19C(0x4)
		bool bForceViewLocationAsTargetingSource; // 0x1A0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1A1(0x7) UNKNOWN PROPERTY
		FDigestedWeaponAccuracy NoWeaponAccuracy; // 0x1A8(0x330)
		TArray<FDigestedWeaponAccuracyCategory> WeaponAccuracies; // 0x4D8(0x10)
		TArray<FDigestedTargetBasedAccuracyCategory> DigestedTargetBasedAccuracies; // 0x4E8(0x10)
		FDigestedTrackingOffsetModifiers TrackingOffsetModifiers; // 0x4F8(0x120)
		FDigestedAimingCircleSettings DefaultAimingCircleSettings; // 0x618(0x168)
		TWeakObjectPtr<AFortWeapon*> CachedWeaponUsedToCalculateAccuracy; // 0x780(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x788(0x8) UNKNOWN PROPERTY
		TArray<FDigestedWeaponAimOffset> WeaponAimOffsets; // 0x790(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotAimingDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotAimingSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x1690 (0x16C0 - 0x30)
	class UFortAthenaAIBotAimingSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FFocusSetting DefaultFocusSetting; // 0x30(0x140)
		TArray<FFocusSetting> FocusSettings; // 0x170(0x10)
		FLookAtSetting LookAtSettings; // 0x180(0x280)
		FScalableFloat AllowScanAroundWhileSwimming; // 0x400(0x28)
		FScalableFloat TrackingReactionTime; // 0x428(0x28)
		FScalableFloat InAirTrackingReactionTimeMultiplier; // 0x450(0x28)
		FScalableFloat TrackingInterpTime; // 0x478(0x28)
		FScalableFloat TrackingInterpTimeMultForGroundVehicles; // 0x4A0(0x28)
		FScalableFloat TrackingInterpTimeMultForFlyingVehicles; // 0x4C8(0x28)
		FScalableFloat MaxTrackingPredictionError; // 0x4F0(0x28)
		FScalableFloat MaxTrackingOffsetErrorMultiplier; // 0x518(0x28)
		FScalableFloat AdjustedTrackingOffsetErrorMultiplierAgainstAIs; // 0x540(0x28)
		FScalableFloat TrackingErrorUpdateInterval; // 0x568(0x28)
		FScalableFloat TrackingInAirVelocityThreshold; // 0x590(0x28)
		FScalableFloat TrackingInAirHeightDeltaThreshold; // 0x5B8(0x28)
		FScalableFloat TargetAcquisitionRate; // 0x5E0(0x28)
		FScalableFloat TimeToHitMultiplier; // 0x608(0x28)
		FScalableFloat MaxTimeToHitAddedCausedByTargetSpeed; // 0x630(0x28)
		FScalableFloat MaxTimeToHitAddedCausedByTargetInAir; // 0x658(0x28)
		FScalableFloat TimeToHitDelayMultiplierWhenTargetInAir; // 0x680(0x28)
		FScalableFloat TimeToHitDelayMultiplierCurveBasedOnSpeed; // 0x6A8(0x28)
		FScalableFloat AimingCircleEnabled; // 0x6D0(0x28)
		FScalableFloat TargetIdleDetectionEnabled; // 0x6F8(0x28)
		FScalableFloat TargetIdleUseAgainstNPC; // 0x720(0x28)
		FScalableFloat TargetIdleLookBackTime; // 0x748(0x28)
		FScalableFloat TargetIdleUnsuspectingAngle; // 0x770(0x28)
		FScalableFloat TargetIdleUnsuspectingDistance; // 0x798(0x28)
		FScalableFloat TargetIdleUnsuspectingDamageDuration; // 0x7C0(0x28)
		FScalableFloat TargetIdleUnsuspectingTimeMultiplier; // 0x7E8(0x28)
		FScalableFloat TargetIdleVerticalSpeedThreshold; // 0x810(0x28)
		FScalableFloat TargetIdleLateralSpeedThreshold; // 0x838(0x28)
		FScalableFloat TargetIdleFrontalSpeedThreshold; // 0x860(0x28)
		FScalableFloat TargetIdleRevivedGracePeriodDuration; // 0x888(0x28)
		FScalableFloat MaxDistanceEvaluationErrorRatio; // 0x8B0(0x28)
		FScalableFloat TargetingUpdateInterval; // 0x8D8(0x28)
		FScalableFloat TargetingUpdateIntervalMaxDeviation; // 0x900(0x28)
		FScalableFloat ReachLeashLimitToleranceDistance; // 0x928(0x28)
		FScalableFloat ShootFloorTrapOnlyWhenHigherThanTrap; // 0x950(0x28)
		FScalableFloat TargetingRotationSpeedLimit; // 0x978(0x28)
		FScalableFloat TargetingRotationSnapThreshold; // 0x9A0(0x28)
		FScalableFloat BaseClampingDistance; // 0x9C8(0x28)
		FScalableFloat ForceViewLocationAsTargetingSource; // 0x9F0(0x28)
		FWeaponAccuracy NoWeaponAccuracy; // 0xA18(0x800)
		TArray<FWeaponAccuracyCategory> WeaponAccuracies; // 0x1218(0x10)
		TArray<FTargetBasedAccuracyCategory> TargetBasedAccuracies; // 0x1228(0x10)
		bool bDigestTrackingOffsetModifiersWithAvgMatchMMR : 1; // 0x1238:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x1239(0x7) UNKNOWN PROPERTY
		TArray<FTrackingOffsetModifierInfo> TrackingOffsetModifiers; // 0x1240(0x10)
		FAimingCircleSettings DefaultAimingCircleSettings; // 0x1250(0x460)
		TArray<FWeaponAimOffset> AimOffsetSettings; // 0x16B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotAimingSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.AISenseScalableConfig
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAISenseScalableConfig : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AISenseScalableConfig");
			return ret;
		}
	};


	// Class FortniteAI.AISenseScalableConfig_Sight
	// Inherited from UAISenseScalableConfig -> UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UAISenseScalableConfig_Sight : public UAISenseScalableConfig	
	{
	public:
		FScalableFloat SightRadius; // 0x28(0x28)
		FScalableFloat LoseSightRadius; // 0x50(0x28)
		FScalableFloat PeripheralVisionAngleDegrees; // 0x78(0x28)
		FScalableFloat PointOfViewBackwardOffset; // 0xA0(0x28)
		FScalableFloat NearClippingRadius; // 0xC8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AISenseScalableConfig_Sight");
			return ret;
		}
	};


	// Class FortniteAI.AISenseScalableConfig_Hearing
	// Inherited from UAISenseScalableConfig -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UAISenseScalableConfig_Hearing : public UAISenseScalableConfig	
	{
	public:
		FScalableFloat HearingRange; // 0x28(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AISenseScalableConfig_Hearing");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotAlertLevelConfig
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortAthenaAIBotAlertLevelConfig : public UObject	
	{
	public:
		int32_t AlertLevels; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UAISenseScalableConfig* ScalableSenseConfig; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotAlertLevelConfig");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotAttackingDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x180 (0x1B0 - 0x30)
	class UFortAthenaAIBotAttackingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		TArray<FDigestedMeleeWeaponSkillCategory> MeleeWeaponCategorySkills; // 0x40(0x10)
		float MaxDistanceToThrowMeleeAttackSq; // 0x50(0x4)
		float ExcludeReachingTargetInMeleeTime; // 0x54(0x4)
		float ExcludeReachingTargetMoveDistanceSquared; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery ContinousMeleeAttackTagQuery; // 0x60(0x48)
		bool bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon; // 0xA8(0x1)
		bool bOnlyUsePickaxeAgainstGameParticipants; // 0xA9(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		float MaxDistanceToConsiderAsAnAlternateTargetSq; // 0xAC(0x4)
		bool bEnableAlternateTargetRequiredTags; // 0xB0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer AlternateTargetRequiredTags; // 0xB8(0x20)
		bool bEnableWTFBehavior; // 0xD8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
		float MinCooldownDelayBetweenMeleeAttackAttempts; // 0xDC(0x4)
		float MaxCooldownDelayBetweenMeleeAttackAttempts; // 0xE0(0x4)
		float MaxHeightDifferenceExtentMultiplierToAttemptMeleeAttack; // 0xE4(0x4)
		FGameplayTagContainer ThrowableGameplayTags; // 0xE8(0x20)
		FGameplayTagQuery CombatMeleeTagQuery; // 0x108(0x48)
		int32_t MinThrowableCount; // 0x150(0x4)
		int32_t MaxThrowableCount; // 0x154(0x4)
		float ThrowableCooldownMin; // 0x158(0x4)
		float ThrowableCooldownMax; // 0x15C(0x4)
		bool bKeepThrowableEquippedDuringCooldown; // 0x160(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x161(0x3) UNKNOWN PROPERTY
		float ThrowableMinimumRangeSquared; // 0x164(0x4)
		float ThrowableMaxRangeSquared; // 0x168(0x4)
		bool bThrowableHasMaxRange; // 0x16C(0x1)
		bool bThrowableEvaluatorActive; // 0x16D(0x1)
		bool bThrowablePreventedOnFlyingTargets; // 0x16E(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x16F(0x1) UNKNOWN PROPERTY
		float RetreatMinHealthRange; // 0x170(0x4)
		float RetreatMaxHealthRange; // 0x174(0x4)
		float RetreatProbability; // 0x178(0x4)
		float RetreatRangeMinSquared; // 0x17C(0x4)
		float RetreatRangeMaxSquared; // 0x180(0x4)
		float RetreatMaxDuration; // 0x184(0x4)
		FVector RetreatPositionBoxExtent; // 0x188(0x18)
		bool CautiousInvestigationEnabled; // 0x1A0(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		float TimeSinceLastStimToBeCautious; // 0x1A4(0x4)
		float CautiousInvestigationTimeMax; // 0x1A8(0x4)
		unsigned char UnknownData08_7[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotAttackingDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotAttackingSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x5A8 (0x5D8 - 0x30)
	class UFortAthenaAIBotAttackingSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		TArray<FMeleeWeaponSkillCategory> MeleeWeaponSkills; // 0x30(0x10)
		FScalableFloat MaxDistanceToThrowMeleeAttack; // 0x40(0x28)
		FGameplayTagQuery ContinousMeleeAttackTagQuery; // 0x68(0x48)
		FScalableFloat OnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon; // 0xB0(0x28)
		FScalableFloat OnlyUsePickaxeAgainstGameParticipants; // 0xD8(0x28)
		FScalableFloat EnableWTFBehavior; // 0x100(0x28)
		FScalableFloat MinCooldownDelayBetweenMeleeAttackAttempts; // 0x128(0x28)
		FScalableFloat MaxCooldownDelayBetweenMeleeAttackAttempts; // 0x150(0x28)
		FScalableFloat MaxHeightDifferenceExtentMultiplierToAttemptMeleeAttack; // 0x178(0x28)
		FGameplayTagQuery CombatMeleeTagQuery; // 0x1A0(0x48)
		FScalableFloat ExcludeReachingTargetInMeleeTime; // 0x1E8(0x28)
		FScalableFloat ExcludeReachingTargetMoveDistance; // 0x210(0x28)
		FScalableFloat MaxDistanceToConsiderAsAnAlternateTarget; // 0x238(0x28)
		FScalableFloat EnableAlternateTargetRequiredTags; // 0x260(0x28)
		FGameplayTagContainer AlternateTargetRequiredTags; // 0x288(0x20)
		FGameplayTagContainer ThrowableGameplayTags; // 0x2A8(0x20)
		FScalableFloat MinThrowableCount; // 0x2C8(0x28)
		FScalableFloat MaxThrowableCount; // 0x2F0(0x28)
		FScalableFloat ThrowableCooldownMin; // 0x318(0x28)
		FScalableFloat ThrowableCooldownMax; // 0x340(0x28)
		FScalableFloat KeepThrowableEquippedDuringCooldown; // 0x368(0x28)
		FScalableFloat ThrowableMinimumRange; // 0x390(0x28)
		FScalableFloat ThrowableMaxRange; // 0x3B8(0x28)
		FScalableFloat ThrowableHasMaxRange; // 0x3E0(0x28)
		FScalableFloat ThrowableEvaluatorActive; // 0x408(0x28)
		FScalableFloat ThrowablePreventedOnFlyingTargets; // 0x430(0x28)
		FScalableFloat RetreatMinHealthRange; // 0x458(0x28)
		FScalableFloat RetreatMaxHealthRange; // 0x480(0x28)
		FScalableFloat RetreatProbability; // 0x4A8(0x28)
		FScalableFloat RetreatRangeMin; // 0x4D0(0x28)
		FScalableFloat RetreatRangeMax; // 0x4F8(0x28)
		FScalableFloat RetreatMaxDuration; // 0x520(0x28)
		FVector RetreatPositionBoxExtent; // 0x548(0x18)
		FScalableFloat CautiousInvestigationEnabled; // 0x560(0x28)
		FScalableFloat TimeSinceLastStimToBeCautious; // 0x588(0x28)
		FScalableFloat CautiousInvestigationTimeMax; // 0x5B0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotAttackingSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotBuildingDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UFortAthenaAIBotBuildingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float DefensiveBuildingDelayBetweenBuilds; // 0x30(0x4)
		float DefensiveBuildingDelayDeviationBetweenBuilds; // 0x34(0x4)
		float DelayBetweenBuildPieces; // 0x38(0x4)
		float ForceEquipBuildToolDuration; // 0x3C(0x4)
		float StealWallTurboBuildDetectionTime; // 0x40(0x4)
		int32_t StealWallAfterNumberOfTurboBuiltWall; // 0x44(0x4)
		float StealWallEfficiency; // 0x48(0x4)
		float StealWallBuildingTemplateWeights; // 0x4C(0x14)
		TArray<FAthenaFortAIBotDigestedWeightedBuildingList> WeightedBuildingLists; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotBuildingDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotBuildingSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x1F0 (0x220 - 0x30)
	class UFortAthenaAIBotBuildingSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat DefensiveBuildingDelayBetweenBuilds; // 0x30(0x28)
		FScalableFloat DefensiveBuildingDelayDeviationBetweenBuilds; // 0x58(0x28)
		FScalableFloat DelayBetweenBuildPieces; // 0x80(0x28)
		FScalableFloat ForceEquipBuildToolDuration; // 0xA8(0x28)
		TArray<FAthenaFortAIBotWeightedBuildingList> WeightedBuildingLists; // 0xD0(0x10)
		FScalableFloat StealWallTurboBuildDetectionTime; // 0xE0(0x28)
		FScalableFloat StealWallAfterNumberOfTurboBuiltWall; // 0x108(0x28)
		FScalableFloat StealWallEfficiency; // 0x130(0x28)
		FScalableFloat StealWallBuildingTemplateWeights; // 0x158(0xC8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotBuildingSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotCosmeticData
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAthenaAIBotCosmeticData : public UDataAsset	
	{
	public:
		TArray<TWeakObjectPtr> CosmeticLibraries; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotCosmeticData");
			return ret;
		}

		TWeakObjectPtr FindLibraryDataFromName(FString PartialName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6EE1C(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotCosmeticLibraryData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x190 (0x1C0 - 0x30)
	class UFortAthenaAIBotCosmeticLibraryData : public UPrimaryDataAsset	
	{
	public:
		TWeakObjectPtr<UDataTable*> PredefineSetsDataTable; // 0x30(0x20)
		TWeakObjectPtr<UDataTable*> CharactersDataTable; // 0x50(0x20)
		TWeakObjectPtr<UDataTable*> GlidersDataTable; // 0x70(0x20)
		TWeakObjectPtr<UDataTable*> SkyDiveContrailsDataTable; // 0x90(0x20)
		TWeakObjectPtr<UDataTable*> BackpacksDataTable; // 0xB0(0x20)
		TWeakObjectPtr<UDataTable*> PickaxesDataTable; // 0xD0(0x20)
		TWeakObjectPtr<UDataTable*> FallbackCharactersDataTable; // 0xF0(0x20)
		TWeakObjectPtr<UDataTable*> EmotesDataTable; // 0x110(0x20)
		TWeakObjectPtr<UDataTable*> BannerIconDataTable; // 0x130(0x20)
		TWeakObjectPtr<UDataTable*> BannerColorDataTable; // 0x150(0x20)
		FScalableFloat OddsToUseSameSetCosmeticItems; // 0x170(0x28)
		FScalableFloat OddsToUseRandomItemWhenNoneFromSetAvailable; // 0x198(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotCosmeticLibraryData");
			return ret;
		}

		TArray RetrieveDataTables(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA72238(relative to base address)
		UDataTable FindDataTableFromAssetType(FString AssetType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6ED7C(relative to base address)
		bool FillDataTableValuesFromSourceLibrary(UFortAthenaAIBotCosmeticLibraryData* SourceLibrary); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6EBEC(relative to base address)
	};


	// Class FortniteAI.BotCosmeticBlueprintHelperLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBotCosmeticBlueprintHelperLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.BotCosmeticBlueprintHelperLibrary");
			return ret;
		}

		bool SplitDataArrayByType(TArray<FString>& InAssetNames, TArray<FString>& InAssetTypes, TArray<int32_t>& InAssetUsageCounts, TArray<int32_t>& InAssetTypeSplitIndices, int32_t CurrentSplitIndex, FString& OutAssetType, TArray<FString>& OutAssetNames, TArray<int32_t>& OutAssetUsageCounts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA72588(relative to base address)
		TArray OpenCSVFileDialog(FString TitleDetails, bool bAllowMultipleFiles); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA71E94(relative to base address)
		bool LoadDataFromCSV(FString FilePath, TArray<FString>& ForbiddenAssetNames, TArray<FString>& ForbiddenAssetPrefix, TArray<FString>& AssetNames, TArray<FString>& AssetTypes, TArray<int32_t>& AssetUsageCounts, TArray<int32_t>& AssetTypeSplitIndices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA70480(relative to base address)
		bool GenerateWeightedCSV(FString AssetTypeName, TArray<FString>& AssetNames, TArray<int32_t>& AssetWeight, FString& CSV); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FA6EFD0(relative to base address)
		bool ExportDataTableToSourceCSV(UDataTable* DataTable, bool bCanCheckOutFile); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74FA6EB40(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotCustomizationData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x150 (0x180 - 0x30)
	class UFortAthenaAIBotCustomizationData : public UPrimaryDataAsset	
	{
	public:
		UClass* PawnClass; // 0x30(0x8)
		bool bRequiresUniqueNetId : 1; // 0x38:0(0x1)
		bool bHasCustomSquadId : 1; // 0x38:1(0x1)
		char CustomSquadId; // 0x39(0x1)
		bool bOverrideCanRespawnOnDeath : 1; // 0x3A:0(0x1)
		bool bCanRespawnOnDeath : 1; // 0x3A:1(0x1)
		bool bOverrideBehaviorTree : 1; // 0x3A:2(0x1)
		bool bOverrideCharacterCustomization : 1; // 0x3A:3(0x1)
		bool bOverrideDBNOPlayStyle : 1; // 0x3A:4(0x1)
		bool bOverrideSkillLevel : 1; // 0x3A:5(0x1)
		bool bUseMatchMMRToOverrideSkillLevel : 1; // 0x3A:6(0x1)
		bool bOverrideSkillSets : 1; // 0x3A:7(0x1)
		bool bOverrideStartupInventory : 1; // 0x3B:0(0x1)
		bool bOverrideBotNameSettings : 1; // 0x3B:1(0x1)
		bool bOverrideBotIDAnalyticsSuffix : 1; // 0x3B:2(0x1)
		bool bOverrideConstructionBuildingInfo : 1; // 0x3B:3(0x1)
		unsigned char UnknownData00_5[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UDataTable*> OverrideSkillLevelMMRTable; // 0x40(0x20)
		UBehaviorTree* BehaviorTree; // 0x60(0x8)
		BotDataOverrideCosmeticMode OverrideCosmeticMode; // 0x68(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		UFortAthenaAIBotCharacterCustomization* CharacterCustomization; // 0x70(0x8)
		TWeakObjectPtr<UFortAthenaAIBotCosmeticLibraryData*> CosmeticCustomizationLibrary; // 0x78(0x20)
		EDBNOPlayStyle DBNOPlayStyle; // 0x98(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		float SkillLevel; // 0x9C(0x4)
		unsigned char UnknownData03_6[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TArray<UClass*> SkillSetOverrideClasses; // 0xA8(0x10)
		UFortAthenaAIBotInventoryItems* StartupInventory; // 0xB8(0x8)
		UFortBotNameSettings* BotNameSettings; // 0xC0(0x8)
		FString BotAnalyticsSuffix; // 0xC8(0x10)
		float SpawnTracePadding; // 0xD8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FConstructionBuildingInfo OverrideConstructionBuildingInfo; // 0xE0(0x90)
		UClass* AILODSettingsContainer; // 0x170(0x8)
		UFortAthenaAILODSettingsContainer* AILODSettingsContainerLoaded; // 0x178(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotCustomizationData");
			return ret;
		}

		void SetCharacterCustomizationFromPlayerPawn(AFortPlayerPawn* InFortPawn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA72278(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotDBNODigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortAthenaAIBotDBNODigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float MaxDBNOCrawlingResponseTime; // 0x30(0x4)
		float MaxDBNOCrawlingResponseTimeDeviation; // 0x34(0x4)
		float AllyEvaluationTime; // 0x38(0x4)
		float AllyEvaluationTimeDeviation; // 0x3C(0x4)
		float AllyEvaluationMaxDistance; // 0x40(0x4)
		float OddsToLookForCover; // 0x44(0x4)
		float CoverEvaluationTime; // 0x48(0x4)
		float CoverEvaluationTimeDeviation; // 0x4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotDBNODigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotDBNOSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x140 (0x170 - 0x30)
	class UFortAthenaAIBotDBNOSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat MaxDBNOCrawlingResponseTime; // 0x30(0x28)
		FScalableFloat MaxDBNOCrawlingResponseTimeDeviation; // 0x58(0x28)
		FScalableFloat AllyEvaluationTime; // 0x80(0x28)
		FScalableFloat AllyEvaluationTimeDeviation; // 0xA8(0x28)
		FScalableFloat AllyEvaluationMaxDistance; // 0xD0(0x28)
		FScalableFloat OddsToLookForCover; // 0xF8(0x28)
		FScalableFloat CoverEvaluationTime; // 0x120(0x28)
		FScalableFloat CoverEvaluationTimeDeviation; // 0x148(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotDBNOSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotEmoteDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortAthenaAIBotEmoteDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float InfiniteEmoteMinDuration; // 0x30(0x4)
		float InfiniteEmoteMaxDuration; // 0x34(0x4)
		int32_t EmotesMaxCount; // 0x38(0x4)
		float DanceOnKillMaxDistanceFromKillSqr; // 0x3C(0x4)
		float DanceOnKillMaxTimeFromKill; // 0x40(0x4)
		float DanceOnKillMinTimeFromLastTry; // 0x44(0x4)
		float DanceOnKillChanceToDanceOnBots; // 0x48(0x4)
		float DanceOnKillChanceToDanceOnPlayers; // 0x4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotEmoteDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotEmoteSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x118 (0x148 - 0x30)
	class UFortAthenaAIBotEmoteSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat InfiniteEmoteMinDuration; // 0x30(0x28)
		FScalableFloat InfiniteEmoteMaxDuration; // 0x58(0x28)
		FScalableFloat DanceOnKillMaxDistanceFromKill; // 0x80(0x28)
		FScalableFloat DanceOnKillMaxTimeFromKill; // 0xA8(0x28)
		FScalableFloat DanceOnKillMinTimeFromLastTry; // 0xD0(0x28)
		FScalableFloat DanceOnKillChanceToDanceOnBots; // 0xF8(0x28)
		FScalableFloat DanceOnKillChanceToDanceOnPlayers; // 0x120(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotEmoteSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIEvaluator
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UFortAthenaAIEvaluator : public UObject	
	{
	public:
		UBehaviorTreeComponent* CachedOwnerComp; // 0x28(0x8)
		AAIController* CachedAIController; // 0x30(0x8)
		UClass* OverrideNavigationFilterClass; // 0x38(0x8)
		unsigned char UnknownData00_6[0x18]; // 0x40(0x18) UNKNOWN PROPERTY
		FName ExecutionStatusName; // 0x58(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x5C(0xC) UNKNOWN PROPERTY
		TScriptInterface<Class> CachedLODSettingsInterface; // 0x68(0x10)
		UBlackboardKeyAccessValidator* KeyAccessValidator; // 0x78(0x8)
		unsigned char UnknownData02_7[0x20]; // 0x80(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIEvaluator");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotEvaluator
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortAthenaAIBotEvaluator : public UFortAthenaAIEvaluator	
	{
	public:
		AFortAthenaAIBotController* CachedBotController; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotEvaluator");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIEvaluator_Movement
	// Inherited from UFortAthenaAIEvaluator -> UObject
	// Size: 0xE8 (0x188 - 0xA0)
	class UFortAthenaAIEvaluator_Movement : public UFortAthenaAIEvaluator	
	{
	public:
		FName MovementStateKeyName; // 0xA0(0x4)
		FName MovementDestinationKeyName; // 0xA4(0x4)
		FName LastPartialPathTimeKeyName; // 0xA8(0x4)
		FName LastPartialPathCountKeyName; // 0xAC(0x4)
		FName LastBlockedPathCountKeyName; // 0xB0(0x4)
		FName UnstuckInWaterExecutionStatusName; // 0xB4(0x4)
		FName UnstuckLastBlockedByActorKeyName; // 0xB8(0x4)
		FName UnstuckExecutionStatusKeyName; // 0xBC(0x4)
		FName TeleportExecutionStatusKeyName; // 0xC0(0x4)
		FName UndermineExecutionStatusKeyName; // 0xC4(0x4)
		FName UndermineTargetKeyName; // 0xC8(0x4)
		FName UndermineLocationImpactName; // 0xCC(0x4)
		FName UnstuckSteerExecutionStatusKeyName; // 0xD0(0x4)
		FName UnstuckSteerDirectionKeyName; // 0xD4(0x4)
		UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet; // 0xD8(0x8)
		unsigned char UnknownData00_7[0xA8]; // 0xE0(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIEvaluator_Movement");
			return ret;
		}

		void OnCurrentUnstuckSteeringAttemptFinished(EUnstuckSteeringReason UnstuckSteeringReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FAA0D14(relative to base address)
		void EvaluateIsolatedIslandSteering(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FAA0164(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotEvaluator_Movement
	// Inherited from UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x18 (0x1A0 - 0x188)
	class UFortAthenaAIBotEvaluator_Movement : public UFortAthenaAIEvaluator_Movement	
	{
	public:
		AFortAthenaAIBotController* CachedBotController; // 0x188(0x8)
		UAthenaAIServicePlayerBots* CachedAIServicePlayerBots; // 0x190(0x8)
		UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementDigestedSkillSet; // 0x198(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotEvaluator_Movement");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotEvaluator_Loot
	// Inherited from UFortAthenaAIBotEvaluator_Movement -> UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x1C0 (0x360 - 0x1A0)
	class UFortAthenaAIBotEvaluator_Loot : public UFortAthenaAIBotEvaluator_Movement	
	{
	public:
		UAthenaAIServiceLoot* CachedAIServiceLoot; // 0x1A0(0x8)
		UFortAthenaAIBotLootingDigestedSkillSet* LootingSkillSet; // 0x1A8(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x1B0(0x10) UNKNOWN PROPERTY
		FName LootDestinationKeyName; // 0x1C0(0x4)
		FName LootObjectKeyName; // 0x1C4(0x4)
		FName LootTypeKeyName; // 0x1C8(0x4)
		FName POINavigationExecutionStatusKeyName; // 0x1CC(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x1D0(0x8) UNKNOWN PROPERTY
		EExecutionStatus POINavigationExecutionStatus; // 0x1D8(0x1)
		unsigned char UnknownData02_6[0x177]; // 0x1D9(0x177) UNKNOWN PROPERTY
		uint32_t CurrentLootOctreeElementId; // 0x350(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x354(0x4) UNKNOWN PROPERTY
		AFortTeamInfoAthena* CachedTeamInfo; // 0x358(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotEvaluator_Loot");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotEvasiveManeuversDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x118 (0x148 - 0x30)
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FDigestedEvasiveManeuverSkillSettings DefaultEvasiveManeuverSkillSettings; // 0x38(0x58)
		TArray<FDigestedEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations; // 0x90(0x10)
		float JetpackStrafeDelay; // 0xA0(0x4)
		float JetpackStrafeRandomDeviationDelay; // 0xA4(0x4)
		float JetpackStrafeOverlayWeight; // 0xA8(0x4)
		float JetpackStrafeDistanceMax; // 0xAC(0x4)
		float JetpackStrafeDistanceMin; // 0xB0(0x4)
		float JetpackStrafeActivationTime; // 0xB4(0x4)
		float JetpackStrafeActivationTimeRandomDeviation; // 0xB8(0x4)
		float JetpackStrafeTime; // 0xBC(0x4)
		float JetpackStrafeTimeRandomDeviation; // 0xC0(0x4)
		float DodgeMaxDistanceSquared; // 0xC4(0x4)
		float CrouchMaxDistanceSquared; // 0xC8(0x4)
		float JumpMaxDistanceSquared; // 0xCC(0x4)
		float JetpackStrafeMaxDistanceSquared; // 0xD0(0x4)
		float AvoidProjectilesReactionDistanceSqr; // 0xD4(0x4)
		float AvoidProjectilesReactionTimeMin; // 0xD8(0x4)
		float AvoidProjectilesReactionTimeMax; // 0xDC(0x4)
		float AvoidProjectilesEvasiveDistanceMin; // 0xE0(0x4)
		float AvoidProjectilesEvasiveDistanceMax; // 0xE4(0x4)
		float AvoidPhysicsObjectsReactionDistanceMin; // 0xE8(0x4)
		float AvoidPhysicsObjectsReactionDistanceMax; // 0xEC(0x4)
		float AvoidPhysicsObjectsSpeedMin; // 0xF0(0x4)
		float AvoidPhysicsObjectsSpeedMax; // 0xF4(0x4)
		FGameplayTagQuery CanUseEvasiveManeuversTagQuery; // 0xF8(0x48)
		bool bCanCrouchInUrgentMovement; // 0x140(0x1)
		bool bCanDodgeInUrgentMovement; // 0x141(0x1)
		bool bCanJumpInUrgentMovement; // 0x142(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x143(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotEvasiveManeuversDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotEvasiveManeuversSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x698 (0x6C8 - 0x30)
	class UFortAthenaAIBotEvasiveManeuversSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FEvasiveManeuverSkillSettings DefaultEvasiveManeuverSkillSettings; // 0x30(0x258)
		TArray<FEvasiveManeuverSkillSettingsSpecialization> EvasiveManeuverSkillSettingsSpecializations; // 0x288(0x10)
		FScalableFloat JetpackStrafeOverlayWeight; // 0x298(0x28)
		FScalableFloat JetpackStrafeDelay; // 0x2C0(0x28)
		FScalableFloat JetpackStrafeRandomDeviationDelay; // 0x2E8(0x28)
		FScalableFloat JetpackStrafeDistanceMax; // 0x310(0x28)
		FScalableFloat JetpackStrafeDistanceMin; // 0x338(0x28)
		FScalableFloat JetpackStrafeActivationTime; // 0x360(0x28)
		FScalableFloat JetpackStrafeActivationTimeRandomDeviation; // 0x388(0x28)
		FScalableFloat JetpackStrafeTime; // 0x3B0(0x28)
		FScalableFloat JetpackStrafeTimeRandomDeviation; // 0x3D8(0x28)
		FScalableFloat DodgeMaxDistance; // 0x400(0x28)
		FScalableFloat CanDodgeInUrgentMovement; // 0x428(0x28)
		FScalableFloat CrouchMaxDistance; // 0x450(0x28)
		FScalableFloat CanCrouchInUrgentMovement; // 0x478(0x28)
		FScalableFloat JumpMaxDistance; // 0x4A0(0x28)
		FScalableFloat CanJumpInUrgentMovement; // 0x4C8(0x28)
		FScalableFloat JetpackStrafeMaxDistance; // 0x4F0(0x28)
		FScalableFloat AvoidProjectilesReactionDistanceMax; // 0x518(0x28)
		FScalableFloat AvoidProjectilesReactionTimeMin; // 0x540(0x28)
		FScalableFloat AvoidProjectilesReactionTimeMax; // 0x568(0x28)
		FScalableFloat AvoidProjectilesEvasiveDistanceMin; // 0x590(0x28)
		FScalableFloat AvoidProjectilesEvasiveDistanceMax; // 0x5B8(0x28)
		FScalableFloat AvoidPhysicsObjectsReactionDistanceMin; // 0x5E0(0x28)
		FScalableFloat AvoidPhysicsObjectsReactionDistanceMax; // 0x608(0x28)
		FScalableFloat AvoidPhysicsObjectsSpeedMin; // 0x630(0x28)
		FScalableFloat AvoidPhysicsObjectsSpeedMax; // 0x658(0x28)
		FGameplayTagQuery CanUseEvasiveManeuversTagQuery; // 0x680(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotEvasiveManeuversSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotHarvestDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAthenaAIBotHarvestDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float DelayBetweenHarvest; // 0x30(0x4)
		float DeviationTimeBetweenHarvest; // 0x34(0x4)
		float HarvestingMaxDistanceSquared; // 0x38(0x4)
		float WeakSpotHitProbability; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotHarvestDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotHarvestSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UFortAthenaAIBotHarvestSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat DelayBetweenHarvest; // 0x30(0x28)
		FScalableFloat DeviationTimeBetweenHarvest; // 0x58(0x28)
		FScalableFloat HarvestingMaxDistance; // 0x80(0x28)
		FScalableFloat WeakSpotHitProbability; // 0xA8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotHarvestSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotHealingDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UFortAthenaAIBotHealingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		FFortBotDigestedHealingItemsList HealthItemsList; // 0x30(0x10)
		TArray<FFortBotDigestedHealingItemsSpec> HealthItemsSpecializations; // 0x40(0x10)
		FFortBotDigestedHealingItemsList ShieldItemsList; // 0x50(0x10)
		TArray<FFortBotDigestedHealingItemsSpec> ShieldItemsSpecializations; // 0x60(0x10)
		unsigned char UnknownData00_7[0x48]; // 0x70(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotHealingDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotHealingSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UFortAthenaAIBotHealingSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FFortBotHealingItemsList HealthItemsList; // 0x30(0x10)
		TArray<FFortBotHealingItemsSpec> HealthItemsSpecializations; // 0x40(0x10)
		FFortBotHealingItemsList ShieldItemsList; // 0x50(0x10)
		TArray<FFortBotHealingItemsSpec> ShieldItemsSpecializations; // 0x60(0x10)
		FGameplayTagQuery MobileConsumableTagQuery; // 0x70(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotHealingSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotInventoryDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x170 (0x1A0 - 0x30)
	class UFortAthenaAIBotInventoryDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float DefaultWeaponSelectionDistance; // 0x30(0x4)
		float DefaultWeaponSelectionDistanceDeviation; // 0x34(0x4)
		bool bHasInfiniteResources; // 0x38(0x1)
		bool bHasInfiniteAmmoForAllWeapons; // 0x39(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer InventorySlotPreference; // 0x40(0xC0)
		TArray<FDigestedBotEquipWeaponInfo> EquipWeaponInfo; // 0x100(0x10)
		bool bShouldPrioritizeRangedWeaponWithoutTarget; // 0x110(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer InfiniteAmmoCheats; // 0x118(0x20)
		TArray<FItemAndCount> MaterialItems; // 0x138(0x10)
		float GiveMaterialsToBotFrequency; // 0x148(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer CheckLoadedAmmoForInfiniteAmmoCheats; // 0x150(0x20)
		float NoWeaponGiveWeaponAfterTime; // 0x170(0x4)
		float NoWeaponNoPlayerConeDistance; // 0x174(0x4)
		float NoWeaponNoPlayerConeFOV; // 0x178(0x4)
		FName NoWeaponLootTierGroup; // 0x17C(0x4)
		FGameplayTagContainer IgnoredAsWeaponTags; // 0x180(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotInventoryDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotInventorySkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x280 (0x2B0 - 0x30)
	class UFortAthenaAIBotInventorySkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat DefaultWeaponSelectionDistance; // 0x30(0x28)
		FScalableFloat DefaultWeaponSelectionDistanceDeviation; // 0x58(0x28)
		FScalableFloat HasInfiniteResources; // 0x80(0x28)
		FGameplayTagContainer InventorySlotPreference; // 0xA8(0xC0)
		TArray<FBotEquipWeaponInfo> EquipWeaponInfo; // 0x168(0x10)
		FScalableFloat ShouldPrioritizeRangedWeaponWithoutTarget; // 0x178(0x28)
		FScalableFloat HasInfiniteAmmoForAllWeapons; // 0x1A0(0x28)
		TArray<FWeaponAmmoCheat> AmmoCheats; // 0x1C8(0x10)
		TArray<FItemAndCount> MaterialItems; // 0x1D8(0x10)
		FScalableFloat GiveMaterialsToBotFrequency; // 0x1E8(0x28)
		FScalableFloat NoWeaponGiveWeaponAfterTime; // 0x210(0x28)
		FScalableFloat NoWeaponNoPlayerConeDistance; // 0x238(0x28)
		FScalableFloat NoWeaponNoPlayerConeFOV; // 0x260(0x28)
		FName NoWeaponLootTierGroup; // 0x288(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x28C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer IgnoredAsWeaponTags; // 0x290(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotInventorySkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotLootingDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UFortAthenaAIBotLootingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float ThresholdDistanceToSwitchLootItem; // 0x30(0x4)
		float ThresholdDistanceSquaredToRescanForBetterLoot; // 0x34(0x4)
		float ThresholdTimeToRescanForBetterLoot; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector OctreeBoxHalfExtent; // 0x40(0x18)
		float LootStateEvaluationRadiusSq; // 0x58(0x4)
		bool bShouldHastyFillInventory; // 0x5C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		float MinLootDurationPerPOI; // 0x60(0x4)
		float MaxLootDurationPerPOI; // 0x64(0x4)
		float LootPickupInteractionTime; // 0x68(0x4)
		float LootPickupInteractionDeviationTime; // 0x6C(0x4)
		float Distance2DScore; // 0x70(0x4)
		float HeightScore; // 0x74(0x4)
		float ThreatMaxScore; // 0x78(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		FScalableFloat ThreatProximityScoreTable; // 0x80(0x28)
		float HealthItemScore; // 0xA8(0x4)
		float PrioritizeWeaponScore; // 0xAC(0x4)
		float PoiSelectionDistanceScore; // 0xB0(0x4)
		float PoiSelectionBotPresenceScore; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotLootingDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotLootingSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x2C0 (0x2F0 - 0x30)
	class UFortAthenaAIBotLootingSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat ThresholdDistanceToSwitchLootItem; // 0x30(0x28)
		FScalableFloat ThresholdDistanceToRescanForBetterLoot; // 0x58(0x28)
		FScalableFloat ThresholdTimeToRescanForBetterLoot; // 0x80(0x28)
		FVector OctreeBoxExtent; // 0xA8(0x18)
		FScalableFloat LootStateEvaluationRadius; // 0xC0(0x28)
		FScalableFloat ShouldHastilyFillInventory; // 0xE8(0x28)
		FScalableFloat MinLootDurationPerPOI; // 0x110(0x28)
		FScalableFloat MaxLootDurationPerPOI; // 0x138(0x28)
		FScalableFloat LootPickupInteractionTime; // 0x160(0x28)
		FScalableFloat LootPickupInteractionDeviationTime; // 0x188(0x28)
		FScalableFloat Distance2DScore; // 0x1B0(0x28)
		FScalableFloat HeightScore; // 0x1D8(0x28)
		FScalableFloat ThreatMaxScore; // 0x200(0x28)
		FScalableFloat ThreatProximityScoreTable; // 0x228(0x28)
		FScalableFloat PrioritizeWeaponScore; // 0x250(0x28)
		FScalableFloat HealthItemScore; // 0x278(0x28)
		FScalableFloat PoiSelectionDistanceScore; // 0x2A0(0x28)
		FScalableFloat PoiSelectionBotPresenceScore; // 0x2C8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotLootingSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotMovementDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x290 (0x2C0 - 0x30)
	class UFortAthenaAIBotMovementDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float SlowDownDistanceSquared; // 0x30(0x4)
		float TraversalSpeedEstimation; // 0x34(0x4)
		float TraversalSpeedEstimationWithThreat; // 0x38(0x4)
		bool bOffPathDetectionEnabled; // 0x3C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float OffPathDistanceThresholdSquared; // 0x40(0x4)
		float GliderDeployMinAngle; // 0x44(0x4)
		float GliderDeployMaxAngle; // 0x48(0x4)
		float GliderNoiseMinDistance; // 0x4C(0x4)
		float GliderNoiseMaxDistance; // 0x50(0x4)
		float GliderNoiseMinDelay; // 0x54(0x4)
		float GliderNoiseMaxDelay; // 0x58(0x4)
		float GliderNoiseDistanceTreshold; // 0x5C(0x4)
		float GliderStopRotationDistance; // 0x60(0x4)
		float GliderLandingDistance; // 0x64(0x4)
		float GliderRotationLerpDuration; // 0x68(0x4)
		bool GliderBehaviorEnableFlag; // 0x6C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float GliderBehaviorMinInterval; // 0x70(0x4)
		float GliderBehaviorMaxInterval; // 0x74(0x4)
		float GliderBehaviorMinRadius; // 0x78(0x4)
		float GliderBehaviorMaxRadius; // 0x7C(0x4)
		float GliderBehaviorSurveyProbability; // 0x80(0x4)
		bool GliderMovementTypeEnableFlag; // 0x84(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		float GliderLinearProbability; // 0x88(0x4)
		float GliderSpiralMinRadius; // 0x8C(0x4)
		float GliderSpiralMaxRadius; // 0x90(0x4)
		float GliderSpiralMinAngle; // 0x94(0x4)
		float GliderSpiralMaxAngle; // 0x98(0x4)
		float GliderSpiralMinInterval; // 0x9C(0x4)
		float GliderSpiralMaxInterval; // 0xA0(0x4)
		float GliderSpiralProbability; // 0xA4(0x4)
		float GliderSerpentineMinAngle; // 0xA8(0x4)
		float GliderSerpentineMaxAngle; // 0xAC(0x4)
		float GliderSerpentineMinRadius; // 0xB0(0x4)
		float GliderSerpentineMaxRadius; // 0xB4(0x4)
		float GliderSerpentineMinInterval; // 0xB8(0x4)
		float GliderSerpentineMaxInterval; // 0xBC(0x4)
		float GliderSerpentineMinPeriod; // 0xC0(0x4)
		float GliderSerpentineMaxPeriod; // 0xC4(0x4)
		float GliderSerpentineProbability; // 0xC8(0x4)
		float JumpOffMinAngle; // 0xCC(0x4)
		float JumpOffMaxAngle; // 0xD0(0x4)
		float MinPatrolDistance; // 0xD4(0x4)
		float MaxPatrolDistance; // 0xD8(0x4)
		float MaxPatrolDistanceRandomDeviation; // 0xDC(0x4)
		float WobbleProbability; // 0xE0(0x4)
		float MaxDelayBetweenWobblingMovement; // 0xE4(0x4)
		float MaxDelayBetweenWobblingMovementRandomDeviation; // 0xE8(0x4)
		bool bAllowSwimWobble; // 0xEC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		float MaxWobblingDuration; // 0xF0(0x4)
		float MaxWobblingDurationRandomDeviation; // 0xF4(0x4)
		float MaxWobblingIntensity; // 0xF8(0x4)
		float WobblingIntensityDeviation; // 0xFC(0x4)
		float MaxWobblingFrequency; // 0x100(0x4)
		float WobblingFrequencyDeviation; // 0x104(0x4)
		float WobblingStickToPathCorridorStrength; // 0x108(0x4)
		float MaxAfterLaunchedPauseTime; // 0x10C(0x4)
		float MaxAfterLaunchedFromVortexPauseTime; // 0x110(0x4)
		float AfterLaunchedPauseTimeDeviation; // 0x114(0x4)
		bool bSteerMovementWhenLaunched; // 0x118(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		float SteerMovementWhenLaunchedDirectionUpdateTime; // 0x11C(0x4)
		float MaxReactionTimeToDangerZone; // 0x120(0x4)
		float MaxReactionTimeToDangerZoneDeviation; // 0x124(0x4)
		float PathOffsetDistanceFromCorners; // 0x128(0x4)
		bool bLimitBlockingObstacleAngle; // 0x12C(0x1)
		bool bShouldAutoJumpOverBlockingObstacles; // 0x12D(0x1)
		bool bShouldAutoJumpOverBlockingObstaclesWhenSwimming; // 0x12E(0x1)
		bool bShouldTargetBuildingActorWhenBlocked; // 0x12F(0x1)
		bool bShouldTargetPlayerBuiltBuildingActorWhenBlocked; // 0x130(0x1)
		bool bShouldTargetVehicleActorWhenBlocked; // 0x131(0x1)
		bool bEnableSwimSprintJump; // 0x132(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x133(0x1) UNKNOWN PROPERTY
		float SwimSprintJumpDelay; // 0x134(0x4)
		float SwimSprintJumpDelayDeviation; // 0x138(0x4)
		float SwimUnblockJumpHeightThreshold; // 0x13C(0x4)
		bool bSwimSprintJumpNav2D; // 0x140(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x141(0x3) UNKNOWN PROPERTY
		float TacticalSprintEvaluationMinTime; // 0x144(0x4)
		float TacticalSprintEvaluationMaxTime; // 0x148(0x4)
		float TacticalSprintMinTriggerChance; // 0x14C(0x4)
		float TacticalSprintMaxTriggerChance; // 0x150(0x4)
		float TacticalSprintMinTriggerChanceInUrgentMovement; // 0x154(0x4)
		float TacticalSprintMaxTriggerChanceInUrgentMovement; // 0x158(0x4)
		float TacticalSprintMaxSlopeAngle; // 0x15C(0x4)
		float TacticalSprintMinPathTargetDistance; // 0x160(0x4)
		float TacticalSprintMaxPathAlignmentAngle; // 0x164(0x4)
		float TacticalSprintMaxPathConeAngle; // 0x168(0x4)
		float TacticalSprintPathConeRearOffset; // 0x16C(0x4)
		bool TacticalSprintUsageEnabled; // 0x170(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x171(0x3) UNKNOWN PROPERTY
		float TacticalSprintJumpTriggerChance; // 0x174(0x4)
		float TacticalSprintJumpDelay; // 0x178(0x4)
		float TacticalSprintJumpDelayDeviation; // 0x17C(0x4)
		float TacticalSprintJumpDelayInitialRatio; // 0x180(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x184(0x4) UNKNOWN PROPERTY
		FVector SlidingBoxExtent; // 0x188(0x18)
		float SlidingEnabled; // 0x1A0(0x10)
		float SlidingEvaluationMinTime; // 0x1B0(0x4)
		float SlidingEvaluationMaxTime; // 0x1B4(0x4)
		float SlidingTriggerChanceStyleMalus; // 0x1B8(0x4)
		float SlidingTriggerChanceStyleMalusRandomDeviation; // 0x1BC(0x4)
		float SlidingTriggerChanceFlat; // 0x1C0(0x4)
		float SlidingTriggerChanceLittleSlope; // 0x1C4(0x4)
		float SlidingTriggerChanceSteepSlope; // 0x1C8(0x4)
		float SlidingDuringUrgentMovementTriggerChanceFlat; // 0x1CC(0x4)
		float SlidingDuringUrgentMovementTriggerChanceLittleSlope; // 0x1D0(0x4)
		float SlidingDuringUrgentMovementTriggerChanceSteepSlope; // 0x1D4(0x4)
		float MinSlidingDuration; // 0x1D8(0x4)
		float SlidingCooldownMinTime; // 0x1DC(0x4)
		float SlidingCooldownMaxTime; // 0x1E0(0x4)
		float SlidingStopMinDelay; // 0x1E4(0x4)
		float SlidingStopMaxDelay; // 0x1E8(0x4)
		float SlidingMaxPathConeAngle; // 0x1EC(0x4)
		float SlidingMinPathTargetDistance; // 0x1F0(0x4)
		float SlidingAllowResumeFocusOnTargetTriggerChance; // 0x1F4(0x4)
		float MoveToRangeAttackMinOffset; // 0x1F8(0x4)
		float MoveToRangeAttackMaxOffset; // 0x1FC(0x4)
		float LKPMinOffset; // 0x200(0x4)
		float LKPMaxOffset; // 0x204(0x4)
		bool bInvestigateAllowSearch; // 0x208(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x209(0x3) UNKNOWN PROPERTY
		float InvestigateWaitMinTime; // 0x20C(0x4)
		float InvestigateWaitMaxTime; // 0x210(0x4)
		float InvestigateSearchMinDistance; // 0x214(0x4)
		float InvestigateSearchMaxDistance; // 0x218(0x4)
		float SandTunnelJumpMinTime; // 0x21C(0x4)
		float SandTunnelJumpMaxTime; // 0x220(0x4)
		float SandTunnelBurrowedAndHiddenChance; // 0x224(0x4)
		float SandTunnelBurrowedAndHiddenMinTime; // 0x228(0x4)
		float SandTunnelBurrowedAndHiddenMaxTime; // 0x22C(0x4)
		FVector ZiplineOctreeBoxExtent; // 0x230(0x18)
		float ThresholdDistanceToRescanForZiplines; // 0x248(0x4)
		float CooldownBetweenZiplineUsages; // 0x24C(0x4)
		float DistanceToAddToZiplineStartPosition; // 0x250(0x4)
		float RadiusFromZiplineEnterPointToLookAtExit; // 0x254(0x4)
		bool ZiplineUsageEnabled; // 0x258(0x1)
		bool bCanOpenDoors; // 0x259(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x25A(0x6) UNKNOWN PROPERTY
		FDigestedBotKnockbackSettings DefaultKnockbackSettings; // 0x260(0x50)
		TArray<FDigestedBotKnockbackSettings> KnockbackSettingsSpecializations; // 0x2B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotMovementDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotMovementSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x14E0 (0x1510 - 0x30)
	class UFortAthenaAIBotMovementSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat SlowDownDistance; // 0x30(0x28)
		FScalableFloat TraversalSpeedEstimation; // 0x58(0x28)
		FScalableFloat TraversalSpeedEstimationWithThreat; // 0x80(0x28)
		FScalableFloat OffPathDetectionEnabled; // 0xA8(0x28)
		FScalableFloat OffPathDistanceThreshold; // 0xD0(0x28)
		FScalableFloat GliderDeployMinAngle; // 0xF8(0x28)
		FScalableFloat GliderDeployMaxAngle; // 0x120(0x28)
		FScalableFloat GliderNoiseMinDistance; // 0x148(0x28)
		FScalableFloat GliderNoiseMaxDistance; // 0x170(0x28)
		FScalableFloat GliderNoiseMinDelay; // 0x198(0x28)
		FScalableFloat GliderNoiseMaxDelay; // 0x1C0(0x28)
		FScalableFloat GliderNoiseDistanceTreshold; // 0x1E8(0x28)
		FScalableFloat GliderStopRotationDistance; // 0x210(0x28)
		FScalableFloat GliderLandingDistance; // 0x238(0x28)
		FScalableFloat GliderRotationLerpDuration; // 0x260(0x28)
		FScalableFloat GliderBehaviorEnableFlag; // 0x288(0x28)
		FScalableFloat GliderBehaviorMinInterval; // 0x2B0(0x28)
		FScalableFloat GliderBehaviorMaxInterval; // 0x2D8(0x28)
		FScalableFloat GliderBehaviorMinRadius; // 0x300(0x28)
		FScalableFloat GliderBehaviorMaxRadius; // 0x328(0x28)
		FScalableFloat GliderBehaviorSurveyProbability; // 0x350(0x28)
		FScalableFloat GliderMovementTypeEnableFlag; // 0x378(0x28)
		FScalableFloat GliderLinearProbability; // 0x3A0(0x28)
		FScalableFloat GliderSpiralMinRadius; // 0x3C8(0x28)
		FScalableFloat GliderSpiralMaxRadius; // 0x3F0(0x28)
		FScalableFloat GliderSpiralMinAngle; // 0x418(0x28)
		FScalableFloat GliderSpiralMaxAngle; // 0x440(0x28)
		FScalableFloat GliderSpiralMinInterval; // 0x468(0x28)
		FScalableFloat GliderSpiralMaxInterval; // 0x490(0x28)
		FScalableFloat GliderSpiralProbability; // 0x4B8(0x28)
		FScalableFloat GliderSerpentineMinAngle; // 0x4E0(0x28)
		FScalableFloat GliderSerpentineMaxAngle; // 0x508(0x28)
		FScalableFloat GliderSerpentineMinRadius; // 0x530(0x28)
		FScalableFloat GliderSerpentineMaxRadius; // 0x558(0x28)
		FScalableFloat GliderSerpentineMinInterval; // 0x580(0x28)
		FScalableFloat GliderSerpentineMaxInterval; // 0x5A8(0x28)
		FScalableFloat GliderSerpentineMinPeriod; // 0x5D0(0x28)
		FScalableFloat GliderSerpentineMaxPeriod; // 0x5F8(0x28)
		FScalableFloat GliderSerpentineProbability; // 0x620(0x28)
		FScalableFloat JumpOffMinAngle; // 0x648(0x28)
		FScalableFloat JumpOffMaxAngle; // 0x670(0x28)
		FScalableFloat MinPatrolDistance; // 0x698(0x28)
		FScalableFloat MaxPatrolDistance; // 0x6C0(0x28)
		FScalableFloat MaxPatrolDistanceRandomDeviation; // 0x6E8(0x28)
		FScalableFloat MoveToRangeAttackMinOffset; // 0x710(0x28)
		FScalableFloat MoveToRangeAttackMaxOffset; // 0x738(0x28)
		FScalableFloat LKPMinOffset; // 0x760(0x28)
		FScalableFloat LKPMaxOffset; // 0x788(0x28)
		FScalableFloat bInvestigateAllowSearch; // 0x7B0(0x28)
		FScalableFloat InvestigateWaitMinTime; // 0x7D8(0x28)
		FScalableFloat InvestigateWaitMaxTime; // 0x800(0x28)
		FScalableFloat InvestigateSearchMinDistance; // 0x828(0x28)
		FScalableFloat InvestigateSearchMaxDistance; // 0x850(0x28)
		FScalableFloat SandTunnelJumpMinTime; // 0x878(0x28)
		FScalableFloat SandTunnelJumpMaxTime; // 0x8A0(0x28)
		FScalableFloat SandTunnelBurrowedAndHiddenChance; // 0x8C8(0x28)
		FScalableFloat SandTunnelBurrowedAndHiddenMinTime; // 0x8F0(0x28)
		FScalableFloat SandTunnelBurrowedAndHiddenMaxTime; // 0x918(0x28)
		FScalableFloat WobblingProbability; // 0x940(0x28)
		FScalableFloat MaxDelayBetweenWobblingMovement; // 0x968(0x28)
		FScalableFloat MaxDelayBetweenWobblingMovementRandomDeviation; // 0x990(0x28)
		FScalableFloat MaxWobblingDuration; // 0x9B8(0x28)
		FScalableFloat MaxWobblingDurationRandomDeviation; // 0x9E0(0x28)
		FScalableFloat MaxWobblingIntensity; // 0xA08(0x28)
		FScalableFloat WobblingIntensityDeviation; // 0xA30(0x28)
		FScalableFloat MaxWobblingFrequency; // 0xA58(0x28)
		FScalableFloat WobblingFrequencyDeviation; // 0xA80(0x28)
		FScalableFloat WobblingStickToPathCorridorStrength; // 0xAA8(0x28)
		FScalableFloat PathOffsetDistanceFromCorners; // 0xAD0(0x28)
		FScalableFloat LimitBlockingObstacleAngle; // 0xAF8(0x28)
		FScalableFloat AutoJumpOverBlockingObstacles; // 0xB20(0x28)
		FScalableFloat AutoJumpOverBlockingObstaclesWhenSwimming; // 0xB48(0x28)
		FScalableFloat TargetBuildingActorWhenBlocked; // 0xB70(0x28)
		FScalableFloat TargetPlayerBuiltBuildingActorWhenBlocked; // 0xB98(0x28)
		FScalableFloat TargetVehicleActorWhenBlocked; // 0xBC0(0x28)
		FScalableFloat MaxAfterLaunchedPauseTime; // 0xBE8(0x28)
		FScalableFloat MaxAfterLaunchedFromVortexPauseTime; // 0xC10(0x28)
		FScalableFloat AfterLaunchedPauseTimeDeviation; // 0xC38(0x28)
		FScalableFloat SteerMovementWhenLaunched; // 0xC60(0x28)
		FScalableFloat SteerMovementWhenLaunchedDirectionUpdateTime; // 0xC88(0x28)
		FScalableFloat MaxReactionTimeToDangerZone; // 0xCB0(0x28)
		FScalableFloat MaxReactionTimeToDangerZoneDeviation; // 0xCD8(0x28)
		FScalableFloat AllowSwimWobble; // 0xD00(0x28)
		FScalableFloat EnableSwimSprintJump; // 0xD28(0x28)
		FScalableFloat SwimSprintJumpDelay; // 0xD50(0x28)
		FScalableFloat SwimSprintJumpDelayDeviation; // 0xD78(0x28)
		FScalableFloat SwimUnblockJumpHeightThreshold; // 0xDA0(0x28)
		FScalableFloat SwimSprintJumpNav2D; // 0xDC8(0x28)
		FScalableFloat TacticalSprintEvaluationMinTime; // 0xDF0(0x28)
		FScalableFloat TacticalSprintEvaluationMaxTime; // 0xE18(0x28)
		FScalableFloat TacticalSprintMinTriggerChance; // 0xE40(0x28)
		FScalableFloat TacticalSprintMaxTriggerChance; // 0xE68(0x28)
		FScalableFloat TacticalSprintMinTriggerChanceInUrgentMovement; // 0xE90(0x28)
		FScalableFloat TacticalSprintMaxTriggerChanceInUrgentMovement; // 0xEB8(0x28)
		FScalableFloat TacticalSprintMaxSlopeAngle; // 0xEE0(0x28)
		FScalableFloat TacticalSprintMinPathTargetDistance; // 0xF08(0x28)
		FScalableFloat TacticalSprintMaxPathAlignmentAngle; // 0xF30(0x28)
		FScalableFloat TacticalSprintMaxPathConeAngle; // 0xF58(0x28)
		FScalableFloat TacticalSprintPathConeRearOffset; // 0xF80(0x28)
		FScalableFloat TacticalSprintUsageEnabled; // 0xFA8(0x28)
		FScalableFloat TacticalSprintJumpTriggerChance; // 0xFD0(0x28)
		FScalableFloat TacticalSprintJumpDelay; // 0xFF8(0x28)
		FScalableFloat TacticalSprintJumpDelayDeviation; // 0x1020(0x28)
		FScalableFloat TacticalSprintJumpDelayInitialRatio; // 0x1048(0x28)
		FVector SlidingBoxExtent; // 0x1070(0x18)
		FScalableFloat SlidingEnabled; // 0x1088(0xA0)
		FScalableFloat SlidingEvaluationMinTime; // 0x1128(0x28)
		FScalableFloat SlidingEvaluationMaxTime; // 0x1150(0x28)
		FScalableFloat SlidingTriggerChanceStyleMalus; // 0x1178(0x28)
		FScalableFloat SlidingTriggerChanceStyleMalusRandomDeviation; // 0x11A0(0x28)
		FScalableFloat SlidingTriggerChanceFlat; // 0x11C8(0x28)
		FScalableFloat SlidingTriggerChanceLittleSlope; // 0x11F0(0x28)
		FScalableFloat SlidingTriggerChanceSteepSlope; // 0x1218(0x28)
		FScalableFloat SlidingDuringUrgentMovementTriggerChanceFlat; // 0x1240(0x28)
		FScalableFloat SlidingDuringUrgentMovementTriggerChanceLittleSlope; // 0x1268(0x28)
		FScalableFloat SlidingDuringUrgentMovementTriggerChanceSteepSlope; // 0x1290(0x28)
		FScalableFloat MinSlidingDuration; // 0x12B8(0x28)
		FScalableFloat SlidingCooldownMinTime; // 0x12E0(0x28)
		FScalableFloat SlidingCooldownMaxTime; // 0x1308(0x28)
		FScalableFloat SlidingStopMinDelay; // 0x1330(0x28)
		FScalableFloat SlidingStopMaxDelay; // 0x1358(0x28)
		FScalableFloat SlidingMaxPathConeAngle; // 0x1380(0x28)
		FScalableFloat SlidingMinPathTargetDistance; // 0x13A8(0x28)
		FScalableFloat SlidingAllowResumeFocusOnTargetTriggerChance; // 0x13D0(0x28)
		FVector ZiplineOctreeBoxExtent; // 0x13F8(0x18)
		FScalableFloat ThresholdDistanceToRescanForZiplines; // 0x1410(0x28)
		FScalableFloat CooldownBetweenZiplineUsages; // 0x1438(0x28)
		FScalableFloat DistanceToAddToZiplineStartPosition; // 0x1460(0x28)
		FScalableFloat RadiusFromZiplineEnterPointToLookAtExit; // 0x1488(0x28)
		FScalableFloat ZiplineUsageEnabled; // 0x14B0(0x28)
		FScalableFloat CanOpenDoors; // 0x14D8(0x28)
		TArray<FBotKnockbackSettings> KnockbackSettings; // 0x1500(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotMovementSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotPathFollowingComponent
	// Inherited from UFortPathFollowingComponentBase -> UCrowdFollowingComponent -> UPathFollowingComponent -> UActorComponent -> UObject
	// Size: 0x290 (0x608 - 0x378)
	class UFortAthenaAIBotPathFollowingComponent : public UFortPathFollowingComponentBase	
	{
	public:
		AFortAthenaAIBotController* BotController; // 0x378(0x8)
		ABuildingActor* HitBuilding; // 0x380(0x8)
		UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet; // 0x388(0x8)
		UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet; // 0x390(0x8)
		UFortAthenaAIBotVehicleDigestedSkillSet* CachedVehicleSkillSet; // 0x398(0x8)
		unsigned char UnknownData00_7[0x268]; // 0x3A0(0x268) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotPathFollowingComponent");
			return ret;
		}

		void HandlePawnTeleported(AFortPawn* TeleportedPawn); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FAA0B74(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIBotPerceptionDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x348 (0x378 - 0x30)
	class UFortAthenaAIBotPerceptionDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float SightReactionTime; // 0x30(0x4)
		float SightRandomDeviation; // 0x34(0x4)
		unsigned char UnknownData00_6[0x28]; // 0x38(0x28) UNKNOWN PROPERTY
		TArray<FDigestedSightReactionSpecialization> SightReactionSpecializations; // 0x60(0x10)
		float LoseSightTime; // 0x70(0x4)
		float LoseSightRandomDeviation; // 0x74(0x4)
		float DecayToLKPALevelTime; // 0x78(0x4)
		float DecayToLKPALevelTimeRandomDeviation; // 0x7C(0x4)
		float SightSuspicionTime; // 0x80(0x4)
		float SightSuspicionRandomDeviation; // 0x84(0x4)
		float EnemyMarkedReactionTime; // 0x88(0x4)
		float EnemyMarkedReactionRandomDeviation; // 0x8C(0x4)
		float ChancesToHelpOnMarkedEnemy; // 0x90(0x4)
		float DamageReactionTime; // 0x94(0x4)
		float DamageRandomDeviation; // 0x98(0x4)
		float HearingReactionTime; // 0x9C(0x4)
		float HearingRandomDeviation; // 0xA0(0x4)
		float MaxHearingLocationError; // 0xA4(0x4)
		float ObstacleDistanceOverrideTargetingSq; // 0xA8(0x4)
		float ObstacleForgetDistanceSq; // 0xAC(0x4)
		float ObstacleMinimumBlockingTime; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FFortAthenaAIBotDigestedTargetHeuristicSettings DefaultTargetHeuristicSettings; // 0xB8(0x1A0)
		TArray<FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization> TargetHeuristicsSettingsSpecializations; // 0x258(0x10)
		FSoundPerceptionDigestedSetting SoundSettings; // 0x268(0x60)
		float AlertedAccumulatedLoudnessLimit; // 0x2C8(0x4)
		float AlertedAccumulatedDamageLimit; // 0x2CC(0x4)
		float LKPAccumulatedLoudnessLimit; // 0x2D0(0x4)
		float EnemyMarkingDelay; // 0x2D4(0x4)
		float EnemyMarkingDelayRandomDeviation; // 0x2D8(0x4)
		float AdditionalMarkedEnemyLKPForgetTime; // 0x2DC(0x4)
		float AdditionalMarkedEnemyLKPForgetDistance; // 0x2E0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FAlertLevelInfo AlertLevelInfos; // 0x2E8(0x40)
		float ProjectileThreatForgetTime; // 0x328(0x4)
		FTrapPerceptionSettings TrapPerceptionSettings; // 0x32C(0x14)
		bool bStealthMeterEnable; // 0x340(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x341(0x3) UNKNOWN PROPERTY
		float StealthMeterThreshold; // 0x344(0x4)
		FScalableFloat StealthMeterIncreaseSpeed; // 0x348(0x28)
		float StealthMeterDecreaseSpeed; // 0x370(0x4)
		bool bStealthMeterAllowSharedTarget; // 0x374(0x1)
		bool bStealthMeterForceLKPWhenDamagedAndThreatened; // 0x375(0x1)
		unsigned char UnknownData04_7[0x2]; // 0x376(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotPerceptionDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotPerceptionSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0xD88 (0xDB8 - 0x30)
	class UFortAthenaAIBotPerceptionSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat SightReactionTime; // 0x30(0x28)
		FScalableFloat SightRandomDeviation; // 0x58(0x28)
		FScalableFloat SightRandomAddition; // 0x80(0x28)
		TArray<FSightReactionSpecialization> SightReactionSpecializations; // 0xA8(0x10)
		FScalableFloat LoseSightTime; // 0xB8(0x28)
		FScalableFloat LoseSightRandomDeviation; // 0xE0(0x28)
		FScalableFloat DecayToLKPALevelTime; // 0x108(0x28)
		FScalableFloat DecayToLKPALevelTimeRandomDeviation; // 0x130(0x28)
		FScalableFloat SightSuspicionTime; // 0x158(0x28)
		FScalableFloat SightSuspicionRandomDeviation; // 0x180(0x28)
		FScalableFloat EnemyMarkedReactionTime; // 0x1A8(0x28)
		FScalableFloat EnemyMarkedReactionRandomDeviation; // 0x1D0(0x28)
		FScalableFloat ChancesToHelpOnMarkedEnemy; // 0x1F8(0x28)
		FScalableFloat DamageReactionTime; // 0x220(0x28)
		FScalableFloat DamageRandomDeviation; // 0x248(0x28)
		FScalableFloat HearingReactionTime; // 0x270(0x28)
		FScalableFloat HearingRandomDeviation; // 0x298(0x28)
		FScalableFloat MaxHearingLocationError; // 0x2C0(0x28)
		FFortAthenaAIBotTargetHeuristicSettings DefaultTargetHeuristicSettings; // 0x2E8(0x358)
		TArray<FFortAthenaAIBotTargetHeuristicSettingsSpecialization> TargetHeuristicSettingsSpecializations; // 0x640(0x10)
		FScalableFloat ObstacleDistanceOverrideTargeting; // 0x650(0x28)
		FScalableFloat ObstacleForgetDistance; // 0x678(0x28)
		FScalableFloat ObstacleMinimumBlockingTime; // 0x6A0(0x28)
		FSoundPerceptionSetting SoundSettings; // 0x6C8(0x3C0)
		FScalableFloat AlertedAccumulatedLoudnessLimit; // 0xA88(0x28)
		FScalableFloat AlertedAccumulatedDamageLimit; // 0xAB0(0x28)
		FScalableFloat LKPAccumulatedLoudnessLimit; // 0xAD8(0x28)
		FScalableFloat EnemyMarkingDelay; // 0xB00(0x28)
		FScalableFloat EnemyMarkingDelayRandomDeviation; // 0xB28(0x28)
		FScalableFloat AdditionalMarkedEnemyLKPForgetTime; // 0xB50(0x28)
		FScalableFloat AdditionalMarkedEnemyLKPForgetDistance; // 0xB78(0x28)
		TArray<UFortAthenaAIBotAlertLevelConfig*> AlertLevelConfigs; // 0xBA0(0x10)
		FScalableFloat ProjectileThreatForgetTime; // 0xBB0(0x28)
		FScalableFloat TrapDetectionDistanceMax; // 0xBD8(0x28)
		FScalableFloat TrapDetectionDistanceMaxDeviation; // 0xC00(0x28)
		FScalableFloat TrapDetectionChanceWhenPerpendicular; // 0xC28(0x28)
		FScalableFloat TrapDetectionChanceWhenParallel; // 0xC50(0x28)
		FScalableFloat TrapDetectionEvaluationAngleThreshold; // 0xC78(0x28)
		FScalableFloat TrapDetectionAutomaticIfWithinCreationTime; // 0xCA0(0x28)
		FScalableFloat StealthMeterEnable; // 0xCC8(0x28)
		FScalableFloat StealthMeterThreshold; // 0xCF0(0x28)
		FScalableFloat StealthMeterIncreaseSpeed; // 0xD18(0x28)
		FScalableFloat StealthMeterDecreaseSpeed; // 0xD40(0x28)
		FScalableFloat StealthMeterAllowSharedTarget; // 0xD68(0x28)
		FScalableFloat bStealthMeterForceLKPWhenDamagedAndThreatened; // 0xD90(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotPerceptionSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotPlayStyleDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UFortAthenaAIBotPlayStyleDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		FScalableFloat AggressiveTowardsThreatWeight; // 0x30(0x28)
		FScalableFloat DefensiveTowardsThreatWeight; // 0x58(0x28)
		EDBNOPlayStyle DBNOPlayStyle; // 0x80(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		TArray<FPlaystyleSwitchToAggressiveDataDigested> ChangeToAggressiveData; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotPlayStyleDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotPlayStyleSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UFortAthenaAIBotPlayStyleSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat AggressiveTowardsThreatWeight; // 0x30(0x28)
		FScalableFloat DefensiveTowardsThreatWeight; // 0x58(0x28)
		FScalableFloat PassiveDBNOPlayStyle; // 0x80(0x28)
		FScalableFloat ThirstyDBNOPlayStyle; // 0xA8(0x28)
		FScalableFloat PassiveOnHumansDBNOPlayStyle; // 0xD0(0x28)
		TArray<FPlaystyleSwitchToAggressiveData> ChangeToAggressiveData; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotPlayStyleSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotPropagateAwarenessDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float PropagationMaxDistanceSQ; // 0x30(0x4)
		float CosineFOV; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotPropagateAwarenessDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotPropagateAwarenessSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortAthenaAIBotPropagateAwarenessSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat PropagationMaxDistance; // 0x30(0x28)
		FScalableFloat FOV; // 0x58(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotPropagateAwarenessSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotRangeAttackDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x120 (0x150 - 0x30)
	class UFortAthenaAIBotRangeAttackDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		TWeakObjectPtr<AFortWeapon*> CachedWeaponUsedToCalculateSkillSet; // 0x30(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		TArray<FDigestedRangedWeaponSkillCategory> RangedWeaponCategorySkills; // 0x40(0x10)
		float ChangeWeaponDelay; // 0x50(0x4)
		float ChangeWeaponDelayDeviation; // 0x54(0x4)
		float SwapInsteadOfReloadOdds; // 0x58(0x4)
		float SwapInsteadOfReloadRangeMax; // 0x5C(0x4)
		FGameplayTagContainer SwapInsteadOfReloadIgnoredWeaponTags; // 0x60(0x20)
		float InterruptReloadToShootOdds; // 0x80(0x4)
		float ReloadPartiallyEmptyWeaponsOdds; // 0x84(0x4)
		float UseCoverOdds; // 0x88(0x4)
		float CoverDistanceMin; // 0x8C(0x4)
		FScalableFloat CoverDistanceMaxCurve; // 0x90(0x28)
		float CoverDistanceToTargetMin; // 0xB8(0x4)
		float MinimumDistanceToTargetWhileMovingToCover; // 0xBC(0x4)
		float CoverSearchCooldown; // 0xC0(0x4)
		float MaximumPathDetourFactor; // 0xC4(0x4)
		float PostCoverCooldownMin; // 0xC8(0x4)
		float PostCoverCooldownMax; // 0xCC(0x4)
		bool bCanFindShootingPositionAround; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		float PositioningMaxSearchRadius; // 0xD4(0x4)
		float PositioningQueryCooldown; // 0xD8(0x4)
		float PositioningQueryCooldownDeviation; // 0xDC(0x4)
		int32_t CoverPeekCountMin; // 0xE0(0x4)
		int32_t CoverPeekCountMax; // 0xE4(0x4)
		float ShotDelayAfterTargetRevived; // 0xE8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		TArray<FDigestedFiringPattern> DefaultTargetInAirFiringPatterns; // 0xF0(0x10)
		bool bStepBackEnabled; // 0x100(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x101(0x3) UNKNOWN PROPERTY
		float StepBackCooldown; // 0x104(0x4)
		float StepBackPercentageChance; // 0x108(0x4)
		float StepBackDistanceBetweenAIPawnAndTargetMin; // 0x10C(0x4)
		float StepBackDistanceBetweenAIPawnAndTargetMax; // 0x110(0x4)
		float StepBackDistanceBetweenCoverAndTargetMin; // 0x114(0x4)
		float StepBackDistanceBetweenCoverAndTargetMax; // 0x118(0x4)
		float StepBackDistanceBetweenAIPawnAndCoverMin; // 0x11C(0x4)
		float StepBackDistanceBetweenAIPawnAndCoverMax; // 0x120(0x4)
		bool bFlankingEnabled; // 0x124(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x125(0x3) UNKNOWN PROPERTY
		float FlankingCooldown; // 0x128(0x4)
		float FlankingPercentageChance; // 0x12C(0x4)
		float FlankingInnerRadius; // 0x130(0x4)
		float FlankingOuterRadius; // 0x134(0x4)
		int32_t FlankingLayersCount; // 0x138(0x4)
		int32_t FlankingPointsPerLayerCount; // 0x13C(0x4)
		float FlankingMaxAngleRad; // 0x140(0x4)
		float FlankingScorePawnDetectionRadius; // 0x144(0x4)
		float LoFMaxDistanceToTest; // 0x148(0x4)
		float LoFForceCrouchVehicleSeatZOffset; // 0x14C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotRangeAttackDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotRangeAttackSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x6D0 (0x700 - 0x30)
	class UFortAthenaAIBotRangeAttackSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		TArray<FRangedWeaponSkillCategory> RangedWeaponSkills; // 0x30(0x10)
		FScalableFloat ChangeWeaponDelay; // 0x40(0x28)
		FScalableFloat ChangeWeaponDelayDeviation; // 0x68(0x28)
		FScalableFloat SwapInsteadOfReloadOdds; // 0x90(0x28)
		FScalableFloat SwapInsteadOfReloadRangeMax; // 0xB8(0x28)
		FGameplayTagContainer SwapInsteadOfReloadIgnoredWeaponTags; // 0xE0(0x20)
		FScalableFloat InterruptReloadToShootOdds; // 0x100(0x28)
		FScalableFloat ReloadPartiallyEmptyWeaponsOdds; // 0x128(0x28)
		FScalableFloat UseCoverOdds; // 0x150(0x28)
		FScalableFloat CoverDistanceMin; // 0x178(0x28)
		FScalableFloat CoverDistanceMaxCurve; // 0x1A0(0x28)
		FScalableFloat CoverDistanceToTargetMin; // 0x1C8(0x28)
		FScalableFloat MinimumDistanceToTargetWhileMovingToCover; // 0x1F0(0x28)
		FScalableFloat CoverSearchCooldown; // 0x218(0x28)
		FScalableFloat MaximumPathDetourFactor; // 0x240(0x28)
		FScalableFloat PostCoverCooldownMin; // 0x268(0x28)
		FScalableFloat PostCoverCooldownMax; // 0x290(0x28)
		FScalableFloat CanFindShootingPositionAround; // 0x2B8(0x28)
		FScalableFloat PositioningMaxSearchRadius; // 0x2E0(0x28)
		FScalableFloat PositioningQueryCooldown; // 0x308(0x28)
		FScalableFloat PositioningQueryCooldownDeviation; // 0x330(0x28)
		FScalableFloat CoverPeekCountMin; // 0x358(0x28)
		FScalableFloat CoverPeekCountMax; // 0x380(0x28)
		FScalableFloat ShotDelayAfterTargetRevived; // 0x3A8(0x28)
		TArray<FFiringPattern> DefaultTargetInAirFiringPatterns; // 0x3D0(0x10)
		FScalableFloat StepBackEnabled; // 0x3E0(0x28)
		FScalableFloat StepBackCooldown; // 0x408(0x28)
		FScalableFloat StepBackPercentageChance; // 0x430(0x28)
		FScalableFloat StepBackDistanceBetweenAIPawnAndTargetMin; // 0x458(0x28)
		FScalableFloat StepBackDistanceBetweenAIPawnAndTargetMax; // 0x480(0x28)
		FScalableFloat StepBackDistanceBetweenCoverAndTargetMin; // 0x4A8(0x28)
		FScalableFloat StepBackDistanceBetweenCoverAndTargetMax; // 0x4D0(0x28)
		FScalableFloat StepBackDistanceBetweenAIPawnAndCoverMin; // 0x4F8(0x28)
		FScalableFloat StepBackDistanceBetweenAIPawnAndCoverMax; // 0x520(0x28)
		FScalableFloat FlankingEnabled; // 0x548(0x28)
		FScalableFloat FlankingCooldown; // 0x570(0x28)
		FScalableFloat FlankingPercentageChance; // 0x598(0x28)
		FScalableFloat FlankingInnerRadius; // 0x5C0(0x28)
		FScalableFloat FlankingOuterRadius; // 0x5E8(0x28)
		FScalableFloat FlankingLayersCount; // 0x610(0x28)
		FScalableFloat FlankingPointsPerLayerCount; // 0x638(0x28)
		FScalableFloat FlankingMaxAngle; // 0x660(0x28)
		FScalableFloat FlankingScorePawnDetectionRadius; // 0x688(0x28)
		FScalableFloat LoFMaxDistanceToTest; // 0x6B0(0x28)
		FScalableFloat LoFForceCrouchVehicleSeatZOffset; // 0x6D8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotRangeAttackSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotReviveDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAthenaAIBotReviveDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float AllyEvaluationTime; // 0x30(0x4)
		float AllyEvaluationTimeDeviation; // 0x34(0x4)
		float CooldownOnCancel; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotReviveDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotReviveSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UFortAthenaAIBotReviveSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat AllyEvaluationTime; // 0x30(0x28)
		FScalableFloat AllyEvaluationTimeDeviation; // 0x58(0x28)
		FScalableFloat CooldownOnCancel; // 0x80(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotReviveSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotUnstuckDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UFortAthenaAIBotUnstuckDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		bool bCanUndermineWhenStuck; // 0x30(0x1)
		bool bCanTeleportWhenStuck; // 0x31(0x1)
		bool bAvoidsTeleportLocationsUnderTheLandscape; // 0x32(0x1)
		bool bCanTeleportWhenStuckWithPlayerAround; // 0x33(0x1)
		float MaxDistanceSqToPlayerToTeleport; // 0x34(0x4)
		float PlayerToPhoebeAngleVisibilityConeToTeleport; // 0x38(0x4)
		float TimeBetweenPartialPathToConsiderPathStuck; // 0x3C(0x4)
		int32_t ConsecutivePartialPathCountToConsiderPathStuck; // 0x40(0x4)
		float DistanceSqBetweenBlockedPathToConsiderPathStuck; // 0x44(0x4)
		float DistanceBetweenSampleToConsiderPathStuckInWater; // 0x48(0x4)
		float TimeBetweenSampleToConsiderPathStuckInWater; // 0x4C(0x4)
		float DistanceBetweenSampleToConsiderPathStuckOnGround; // 0x50(0x4)
		float TimeBetweenSampleToConsiderPathStuckOnGround; // 0x54(0x4)
		int32_t ConsecutiveBlockedPathCountToConsiderPathStuck; // 0x58(0x4)
		int32_t MaxSafeZoneIndexToAllowTeleport; // 0x5C(0x4)
		float TimeToBreakBlockingDoor; // 0x60(0x4)
		float TimeToCloseBlockingDoor; // 0x64(0x4)
		float RiverbedObstacleCollisionNormalThreshold; // 0x68(0x4)
		bool bCanUseSteeringWhenStuckOnIsolatedIsland; // 0x6C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		int32_t MaxSteeringDirectionAttempts; // 0x70(0x4)
		float SteeringAttemptDuration; // 0x74(0x4)
		float EvaluateIsolatedIslandSteeringTime; // 0x78(0x4)
		bool bCanSlideWhenBlocked; // 0x7C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		float SlidingDurationSeconds; // 0x80(0x4)
		float SlidingStartIntensity; // 0x84(0x4)
		float SlidingIntensityPerSeconds; // 0x88(0x4)
		float SlidingMaxIntensity; // 0x8C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotUnstuckDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotUnstuckSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x438 (0x468 - 0x30)
	class UFortAthenaAIBotUnstuckSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat CanUndermineWhenStuck; // 0x30(0x28)
		FScalableFloat CanTeleportWhenStuck; // 0x58(0x28)
		FScalableFloat AvoidsTeleportLocationsUnderTheLandscape; // 0x80(0x28)
		FScalableFloat CanTeleportWhenStuckWithPlayerAround; // 0xA8(0x28)
		FScalableFloat MaxDistanceToPlayerToTeleport; // 0xD0(0x28)
		FScalableFloat PlayerToPhoebeAngleVisibilityConeToTeleport; // 0xF8(0x28)
		FScalableFloat MaxSafeZoneIndexToAllowTeleport; // 0x120(0x28)
		FScalableFloat TimeToCloseBlockingDoor; // 0x148(0x28)
		FScalableFloat TimeToBreakBlockingDoor; // 0x170(0x28)
		FScalableFloat RiverbedObstacleCollisionNormalThreshold; // 0x198(0x28)
		FScalableFloat CanUseSteeringWhenStuckOnIsolatedIsland; // 0x1C0(0x28)
		FScalableFloat MaxSteeringDirectionAttempts; // 0x1E8(0x28)
		FScalableFloat SteeringAttemptDuration; // 0x210(0x28)
		FScalableFloat EvaluateIsolatedIslandSteeringTime; // 0x238(0x28)
		FScalableFloat TimeBetweenPartialPathToConsiderPathStuck; // 0x260(0x28)
		FScalableFloat ConsecutivePartialPathCountToConsiderPathStuck; // 0x288(0x28)
		FScalableFloat DistanceBetweenSampleToConsiderPathStuckInWater; // 0x2B0(0x28)
		FScalableFloat TimeBetweenSampleToConsiderPathStuckInWater; // 0x2D8(0x28)
		FScalableFloat DistanceBetweenSampleToConsiderPathStuckOnGround; // 0x300(0x28)
		FScalableFloat TimeBetweenSampleToConsiderPathStuckOnGround; // 0x328(0x28)
		FScalableFloat DistanceBetweenBlockedPathToConsiderPathStuck; // 0x350(0x28)
		FScalableFloat ConsecutiveBlockedPathCountToConsiderPathStuck; // 0x378(0x28)
		FScalableFloat bCanSlideWhenBlocked; // 0x3A0(0x28)
		FScalableFloat SlidingDurationSeconds; // 0x3C8(0x28)
		FScalableFloat SlidingStartIntensity; // 0x3F0(0x28)
		FScalableFloat SlidingIntensityPerSeconds; // 0x418(0x28)
		FScalableFloat SlidingMaxIntensity; // 0x440(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotUnstuckSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotVehicleDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0xC8 (0xF8 - 0x30)
	class UFortAthenaAIBotVehicleDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		FDigestedVehicleDriving NoMatchingVehicleDriving; // 0x30(0xB8)
		TArray<FDigestedVehicleDrivingCategory> VehicleDrivingArray; // 0xE8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotVehicleDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotVehicleSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x338 (0x368 - 0x30)
	class UFortAthenaAIBotVehicleSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FVehicleDriving NoMatchingVehicleDriving; // 0x30(0x328)
		TArray<FVehicleDrivingCategory> VehicleDrivingArray; // 0x358(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotVehicleSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotWarmupDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAthenaAIBotWarmupDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float WarmupPlayEmoteBehaviorWeight; // 0x30(0x4)
		float WarmupLootAndShootBehaviorWeight; // 0x34(0x4)
		float WarmupIdleBehaviorWeight; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotWarmupDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotWarmupSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UFortAthenaAIBotWarmupSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FScalableFloat WarmupPlayEmoteBehaviorWeight; // 0x30(0x28)
		FScalableFloat WarmupLootAndShootBehaviorWeight; // 0x58(0x28)
		FScalableFloat WarmupIdleBehaviorWeight; // 0x80(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotWarmupSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBot_EQSQueryContext_CurrentTarget
	// Inherited from UEnvQueryContext -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaAIBot_EQSQueryContext_CurrentTarget : public UEnvQueryContext	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBot_EQSQueryContext_CurrentTarget");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAICoverComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UFortAthenaAICoverComponent : public UControllerComponent	
	{
	public:
		UClass* CoverPositionFilterClass; // 0xA0(0x8)
		FVector CoverBoxExtent; // 0xA8(0x18)
		float CoverOffset; // 0xC0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		AAIController* CachedController; // 0xC8(0x8)
		TWeakObjectPtr<ABuildingActor*> LastBuildingActorUsedForCover; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAICoverComponent");
			return ret;
		}
	};


	// Class FortniteAI.BlackboardKeyAccessValidator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBlackboardKeyAccessValidator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.BlackboardKeyAccessValidator");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIEvaluatorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortAthenaAIEvaluatorComponent : public UActorComponent	
	{
	public:
		TArray<UFortAthenaAIEvaluator*> AIEvaluators; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIEvaluatorComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAILeashVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x20 (0x2E8 - 0x2C8)
	class AFortAthenaAILeashVolume : public AVolume	
	{
	public:
		FVector ProjectExtent; // 0x2C8(0x18)
		float IsInsideTolerance; // 0x2E0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILeashVolume");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAILODSettingsContainer
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UFortAthenaAILODSettingsContainer : public UObject	
	{
	public:
		TMap<UClass*, TScriptInterface> ClassToSettings; // 0x28(0x50)
		TArray<UClass*> LODSettings_AIEvaluators; // 0x78(0x10)
		TArray<UClass*> LODSettings_CharacterMovement; // 0x88(0x10)
		TArray<UClass*> LODSettings_FortWeaponRanged; // 0x98(0x10)
		TArray<UClass*> LODSettings_GenericTickingObject; // 0xA8(0x10)
		UClass* FortAIDirectorLODConfig; // 0xB8(0x8)
		UFortAIDirectorLODAIConfig* FortAIDirectorObjectLODConfig; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILODSettingsContainer");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAILODComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UFortAthenaAILODComponent : public UActorComponent	
	{
	public:
		EFortAILODLevel CurrentFortAILODLevel; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xA1(0x2) UNKNOWN PROPERTY
		unsigned char UnknownBit01 : 1; // 0xA3:0(0x1) UNKNOWN PROPERTY
		bool bCouldBeVisibleToPlayers : 1; // 0xA3:1(0x1)
		unsigned char UnknownData02_5[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		AFortPawn* CachedFortPawn; // 0xA8(0x8)
		UFortAthenaAILODSettingsContainer* AILODSettingsContainer; // 0xB0(0x8)
		unsigned char UnknownData03_7[0x30]; // 0xB8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILODComponent");
			return ret;
		}

		void OnRep_CurrentFortAILODLevel(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FAA0D94(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIObjectTracker
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UFortAthenaAIObjectTracker : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x78]; // 0x30(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIObjectTracker");
			return ret;
		}

		FFortAthenaAIObjectTrackerQuery BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified(FFortAthenaAIObjectTrackerQuerySimplified& SimplifiedQuery, AActor* OptionalQuerier); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74FA9FB90(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIRuntimeParametersProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaAIRuntimeParametersProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParametersProvider");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParametersComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UFortAthenaAIRuntimeParametersComponent : public UActorComponent	
	{
	public:
		TMap<UClass*, TScriptInterface> RegisteredParametersProviders; // 0xA0(0x50)
		TMap<UClass*, UFortAthenaAIRuntimeParameters*> ExtractedRuntimeParameters; // 0xF0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParametersComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAthenaAIRuntimeParameters_SmartObjectBase : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bEnabled : 1; // 0x30:0(0x1)
		bool bChooseClosestSmartObject : 1; // 0x30:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float UnreachableBanDuration; // 0x34(0x4)
		float SelectedSmartObjectExpirationDelay; // 0x38(0x4)
		float GlobalSmartObjectCooldownOnFinished; // 0x3C(0x4)
		float GlobalSmartObjectCooldownOnInterrupted; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase");
			return ret;
		}

		void SetChooseClosestSmartObject(bool bInChooseClosestSmartObject); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA0FB8(relative to base address)
		bool GetChooseClosestSmartObject(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA02C0(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISmartObjectActivity
	// Inherited from UObject
	// Size: 0x130 (0x158 - 0x28)
	class UFortAthenaAISmartObjectActivity : public UObject	
	{
	public:
		FScalableFloat Enabled; // 0x28(0x28)
		FFortAthenaAISmartObjectActivityCondition SmartObjectActivityCondition; // 0x50(0x48)
		FFortAthenaAISmartObjectActivityConfig SmartObjectActivityConfig; // 0x98(0xC0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISmartObjectActivity");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponentList
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UFortAthenaAISpawnerDataComponentList : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x78]; // 0x28(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponentList");
			return ret;
		}

		UFortAthenaAISpawnerDataComponentList OverrideComponentClass(UClass* NewComponentSubClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA0E38(relative to base address)
		UFortAthenaAISpawnerDataComponentList OverrideComponent(UFortAthenaAISpawnerDataComponent* NewComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA0DA8(relative to base address)
		FTransform GetSpawnTransform(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA08C0(relative to base address)
		UFortAthenaAISpawnerDataComponent GetOrCreateComponentClassForModification(UObject* ComponentOuter, UClass* ClassToClone); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA070C(relative to base address)
		TArray GetList(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA067C(relative to base address)
		APawn GetDefaultPawn(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0480(relative to base address)
		UFortAthenaAISpawnerDataComponent GetComponentClassForModification(UClass* ClassToGet); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA02D8(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AffiliationBase
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAthenaAIRuntimeParameters_AffiliationBase : public UFortAthenaAIRuntimeParameters	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x30(0x4) UNKNOWN PROPERTY
		bool bFullTeamAwarenessPropagation : 1; // 0x34:0(0x1)
		bool bAwarenessPropagationIsBasedOnAlertLevel : 1; // 0x34:1(0x1)
		bool bTurnHostileOnDamageIfNeutral : 1; // 0x34:2(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		float TurnHostileWhenBlockedTime; // 0x38(0x4)
		bool bPropagateHostilityOnDamaged : 1; // 0x3C:0(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AffiliationBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x128 (0x158 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AffiliationBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		FGameplayTagContainer FactionTags; // 0x30(0x20)
		FScalableFloat TurnHostileOnDamageIfNeutral; // 0x50(0x28)
		FScalableFloat TurnHostileWhenBlockedTime; // 0x78(0x28)
		FScalableFloat PropagateHostilityOnDamaged; // 0xA0(0x28)
		TArray<FSpawnerDataComponentAffiliationSharedBBConfiguration> FactionSharedBBConfigurations; // 0xC8(0x10)
		FScalableFloat bFullTeamAwarenessPropagation; // 0xD8(0x28)
		FScalableFloat bAwarenessPropagationIsBasedOnAlertLevel; // 0x100(0x28)
		FScalableFloat FullTeamAwarenessMaxDistance; // 0x128(0x28)
		bool bAddGameParticipantFactionAutomatically; // 0x150(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x151(0x3) UNKNOWN PROPERTY
		int32_t OverrideTeamIndex; // 0x154(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase");
			return ret;
		}

		void SetOverrideTeamIndex(int32_t InOverrideTeamIdx); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA1240(relative to base address)
		void SetFullTeamAwarenessPropagationDistance(float InFullTeamAwarenessMaxDistance); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA11AC(relative to base address)
		void SetFullTeamAwarenessPropagation(bool bInFullTeamAwarenessPropagation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA10FC(relative to base address)
		void SetFactionTags(FGameplayTagContainer& NewTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FAA1040(relative to base address)
		void SetAwarenessPropagationIsBasedOnAlertLevel(bool bInAwarenessPropagationIsBasedOnAlertLevel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA0F08(relative to base address)
		bool GetTeamID(int32_t& OutTeamId); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0A2C(relative to base address)
		bool GetFullTeamAwarenessPropagation(float Level); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0558(relative to base address)
		float GetFullTeamAwarenessMaxDistance(float Level); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA04C0(relative to base address)
		FGameplayTagContainer GetFactionTag(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA04A4(relative to base address)
		bool GetAwarenessPropagationIsBasedOnAlertLevel(float Level); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA01E4(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Analytic
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortAthenaAIRuntimeParameters_Analytic : public UFortAthenaAIRuntimeParameters	
	{
	public:
		FGameplayTagContainer OnDeathGameplayTags; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Analytic");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AIAnalytic
	// Inherited from UFortAthenaAIRuntimeParameters_Analytic -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x28 (0x78 - 0x50)
	class UFortAthenaAIRuntimeParameters_AIAnalytic : public UFortAthenaAIRuntimeParameters_Analytic	
	{
	public:
		FString AnalyticUniqueID; // 0x50(0x10)
		FString AIType; // 0x60(0x10)
		bool bShouldSendSpawnEvents : 1; // 0x70:0(0x1)
		bool bShouldRecordGrabbedPickups : 1; // 0x70:1(0x1)
		bool bShouldRecordDroppedPickups : 1; // 0x70:2(0x1)
		bool bShouldRecordDeathInstigator : 1; // 0x70:3(0x1)
		bool bShouldRecordRegularDowns : 1; // 0x70:4(0x1)
		bool bShouldRecordTetheredDowns : 1; // 0x70:5(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AIAnalytic");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AnalyticBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AnalyticBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		FGameplayTagContainer OnDeathGameplayTags; // 0x30(0x20)
		unsigned char UnknownData00_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AnalyticBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIAnalytic
	// Inherited from UFortAthenaAISpawnerDataComponent_AnalyticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x100 (0x160 - 0x60)
	class UFortAthenaAISpawnerDataComponent_AIAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase	
	{
	public:
		FString AIType; // 0x60(0x10)
		FScalableFloat ShouldSendSpawnEvents; // 0x70(0x28)
		FScalableFloat ShouldRecordGrabbedPickups; // 0x98(0x28)
		FScalableFloat ShouldRecordDroppedPickups; // 0xC0(0x28)
		FScalableFloat ShouldRecordDeathInstigator; // 0xE8(0x28)
		FScalableFloat ShouldRecordRegularDowns; // 0x110(0x28)
		FScalableFloat ShouldRecordTetheredDowns; // 0x138(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIAnalytic");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Marker
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAIRuntimeParameters_Marker : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bSupportsMarkerWithFaction : 1; // 0x30:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float MarkerPropagationMaxDistanceSQ; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Marker");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotDisguise
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UFortAthenaAIRuntimeParameters_AIBotDisguise : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bShouldApplyDisguise; // 0x30(0x1)
		bool bRevealDisguiseOnDamage; // 0x31(0x1)
		bool bRevealOnDamageExcludeAIPawnDamage; // 0x32(0x1)
		bool bRevealDisguiseOnPlayerProximity; // 0x33(0x1)
		float RevealPlayerProximityDistanceSqr; // 0x34(0x4)
		float RevealPlayerProximityMinDuration; // 0x38(0x4)
		float RevealPlayerProximityMaxDuration; // 0x3C(0x4)
		UFortBotNameSettings* NameSettingsAfterReveal; // 0x40(0x8)
		FGameplayTagContainer DisguisedFactionsBeforeReveal; // 0x48(0x20)
		FGameplayTagContainer DisguisedFactionsAfterReveal; // 0x68(0x20)
		TArray<UClass*> DisguiseGameplayEffectBeforeReveal; // 0x88(0x10)
		TArray<UClass*> DisguiseGameplayEffectAfterReveal; // 0x98(0x10)
		TArray<FItemAndCount> DisguiseInventory; // 0xA8(0x10)
		FDataTableRowHandle DisguiseLootInfo; // 0xB8(0x10)
		UClass* DisguiseConversationComponentOverride; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotDisguise");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Collection
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAIRuntimeParameters_Collection : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bForceAddToCollectionOnDamage; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Collection");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation
	// Inherited from UFortAthenaAISpawnerDataComponent_AffiliationBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x200 (0x358 - 0x158)
	class UFortAthenaAISpawnerDataComponent_AIBotAffiliation : public UFortAthenaAISpawnerDataComponent_AffiliationBase	
	{
	public:
		bool bForceAddToCollectionOnDamage; // 0x158(0x1)
		bool bOverrideIsAnAthenaGameParticipant : 1; // 0x159:0(0x1)
		bool bIsAnAthenaGameParticipant : 1; // 0x159:1(0x1)
		unsigned char UnknownData00_5[0x6]; // 0x15A(0x6) UNKNOWN PROPERTY
		FScalableFloat SupportsMarkerWithFaction; // 0x160(0x28)
		FScalableFloat MarkerPropagationMaxDistance; // 0x188(0x28)
		FScalableFloat DisguiseProbability; // 0x1B0(0x28)
		FScalableFloat RevealDisguiseOnDamage; // 0x1D8(0x28)
		FScalableFloat RevealOnDamageExcludeAIPawnDamage; // 0x200(0x28)
		FScalableFloat RevealDisguiseOnPlayerProximity; // 0x228(0x28)
		FScalableFloat RevealPlayerProximityDistance; // 0x250(0x28)
		FScalableFloat RevealPlayerProximityMinDuration; // 0x278(0x28)
		FScalableFloat RevealPlayerProximityMaxDuration; // 0x2A0(0x28)
		UFortBotNameSettings* NameSettingsAfterReveal; // 0x2C8(0x8)
		FGameplayTagContainer DisguisedFactionsBeforeReveal; // 0x2D0(0x20)
		FGameplayTagContainer DisguisedFactionsAfterReveal; // 0x2F0(0x20)
		TArray<UClass*> DisguiseGameplayEffectBeforeReveal; // 0x310(0x10)
		TArray<UClass*> DisguiseGameplayEffectAfterReveal; // 0x320(0x10)
		TArray<FItemAndCount> DisguiseInventory; // 0x330(0x10)
		FDataTableRowHandle DisguiseLootInfo; // 0x340(0x10)
		UClass* DisguiseConversationComponent; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation");
			return ret;
		}

		bool GetSquadID(int32_t& OutSquadId); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0950(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAnalytic
	// Inherited from UFortAthenaAISpawnerDataComponent_AnalyticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x38 (0x98 - 0x60)
	class UFortAthenaAISpawnerDataComponent_AIBotAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase	
	{
	public:
		bool bUseDescriptorTagSuffix : 1; // 0x60:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FString BotIDSuffix; // 0x68(0x10)
		TArray<FScalableFloat> IdleDetectionBucketsCutoffs; // 0x78(0x10)
		TArray<FScalableFloat> DamageDistanceBuckets; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAnalytic");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortAthenaAIRuntimeParameters_BehaviorTreeControl : public UFortAthenaAIRuntimeParameters	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		uint32_t BehaviorTreeControls; // 0x48(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x4C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl");
			return ret;
		}

		bool IsBehaviorTreeBranchActive(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0BF4(relative to base address)
		void EnableBehaviorTreeBranch(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA0058(relative to base address)
		void DisableBehaviorTreeBranch(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA9FF48(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_ReviveBehavior
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAthenaAIRuntimeParameters_ReviveBehavior : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bAllowReviveSquadmates : 1; // 0x30:0(0x1)
		bool bAllowReviveSameFactionNPCs : 1; // 0x30:1(0x1)
		bool bAllowReviveConverter : 1; // 0x30:2(0x1)
		bool bAllowReviveConverterSquadmates : 1; // 0x30:3(0x1)
		bool bUseReviveToken : 1; // 0x30:4(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float MaxDistanceToRevive; // 0x34(0x4)
		float MaxDistanceToReviveHumanPlayer; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_ReviveBehavior");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_DBNOBehavior
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UFortAthenaAIRuntimeParameters_DBNOBehavior : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bDieWhenAllAlliesAreDBNO : 1; // 0x30:0(0x1)
		bool bIsAllowedToMoveInDBNO : 1; // 0x30:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float AliveAlliesMaxRangeSqr; // 0x34(0x4)
		float SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat; // 0x38(0x4)
		bool bIsAllowedToGiveUpWhenRespawnEnabled : 1; // 0x3C:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float GiveUpMinTimer; // 0x40(0x4)
		float GiveUpMaxTimer; // 0x44(0x4)
		float GiveUpThreatenedAllyMaxDistanceSqr; // 0x48(0x4)
		float GiveUpThreatenedAllyRandomChance; // 0x4C(0x4)
		float GiveUpUnawareAllyMaxDistanceSqr; // 0x50(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_DBNOBehavior");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_EscalateBehavior
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortAthenaAIRuntimeParameters_EscalateBehavior : public UFortAthenaAIRuntimeParameters	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		FGameplayTag EscalateDefaultSpeechTag; // 0x58(0x4)
		FGameplayTag EscalateAimingSpeechTag; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_EscalateBehavior");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_PatrolBehavior
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UFortAthenaAIRuntimeParameters_PatrolBehavior : public UFortAthenaAIRuntimeParameters	
	{
	public:
		TWeakObjectPtr<UAthenaDanceItemDefinition*> PatrolEmote; // 0x30(0x20)
		unsigned char UnknownData00_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_PatrolBehavior");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_NPCBehavior
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAIRuntimeParameters_NPCBehavior : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bSupportsHolsteredWeapon : 1; // 0x30:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_NPCBehavior");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Behavior
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAIRuntimeParameters_Behavior : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bSurfaceTypeCheckEnabled : 1; // 0x30:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Behavior");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior
	// Inherited from UFortAthenaAISpawnerDataComponent_Behavior -> UFortAthenaAISpawnerDataComponent_BehaviorBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x518 (0x550 - 0x38)
	class UFortAthenaAISpawnerDataComponent_AIBotBehavior : public UFortAthenaAISpawnerDataComponent_Behavior	
	{
	public:
		uint32_t BehaviorTreeControls; // 0x38(0x4)
		bool bCanUseFallbackPatrolAround : 1; // 0x3C:0(0x1)
		bool bAllowReviveSquadmates : 1; // 0x3C:1(0x1)
		bool bAllowReviveSameFactionNPCs : 1; // 0x3C:2(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		FScalableFloat AllowReviveConverter; // 0x40(0x28)
		FScalableFloat AllowReviveConverterSquadmates; // 0x68(0x28)
		bool bUseReviveToken : 1; // 0x90:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FScalableFloat MaxDistanceToRevive; // 0x98(0x28)
		FScalableFloat MaxDistanceToReviveHumanPlayer; // 0xC0(0x28)
		FScalableFloat DieWhenAllAlliesAreDBNO; // 0xE8(0x28)
		bool bIsAllowedToMoveInDBNO : 1; // 0x110:0(0x1)
		unsigned char UnknownData02_5[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FScalableFloat AliveAlliesMaxRange; // 0x118(0x28)
		FScalableFloat SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat; // 0x140(0x28)
		FScalableFloat IsAllowedToGiveUpWhenRespawnEnabled; // 0x168(0x28)
		FScalableFloat GiveUpMinTimer; // 0x190(0x28)
		FScalableFloat GiveUpMaxTimer; // 0x1B8(0x28)
		FScalableFloat GiveUpThreatenedAllyMaxDistance; // 0x1E0(0x28)
		FScalableFloat GiveUpThreatenedAllyRandomChance; // 0x208(0x28)
		FScalableFloat GiveUpUnawareAllyMaxDistance; // 0x230(0x28)
		FScalableFloat SupportsHolsteredWeapon; // 0x258(0x28)
		FScalableFloat SurfaceTypeCheckEnabled; // 0x280(0x28)
		FScalableFloat bShouldResetAggressivePlayStyleOnUnaware; // 0x2A8(0x28)
		FScalableFloat TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle; // 0x2D0(0x28)
		FScalableFloat TimeToIgnoreDamagingActorsWhenBeingControlled; // 0x2F8(0x28)
		FScalableFloat PauseBehaviorOnSpawnDuration; // 0x320(0x28)
		FScalableFloat bShouldBeInvulnerableDuringPause; // 0x348(0x28)
		FEscalateBehaviorSettings EscalateBehaviorSettings; // 0x370(0x198)
		FPatrolBehaviorSettings PatrolBehaviorSettings; // 0x508(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior");
			return ret;
		}

		bool IsBehaviorTreeBranchActive(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA0C84(relative to base address)
		void EnableBehaviorTreeBranch(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA00E4(relative to base address)
		void DisableBehaviorTreeBranch(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FA9FFD4(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotChanceEncounter
	// Inherited from UFortAthenaAISpawnerDataComponent_ChanceEncounterBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter : public UFortAthenaAISpawnerDataComponent_ChanceEncounterBase	
	{
	public:
		FScalableFloat PassiveHealerEnable; // 0x30(0x28)
		UClass* PassiveHealerComponentClass; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotChanceEncounter");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotLoopSettings
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAIRuntimeParameters_AIBotLoopSettings : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bSpawnOutsideTheLoop : 1; // 0x30:0(0x1)
		bool bRespawnOustideTheLoop : 1; // 0x30:1(0x1)
		bool bRespawnAtOriginalSpawnLocation : 1; // 0x30:2(0x1)
		bool bRemoveInvulnerabilityOutsideSafeZone : 1; // 0x30:3(0x1)
		bool bDisableSpecialActorComponentUntilRespawn : 1; // 0x30:4(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotLoopSettings");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Conversation
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortAthenaAIRuntimeParameters_Conversation : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bEnterBTTaskConversationIfPlayerAround : 1; // 0x30:0(0x1)
		bool bCanConverseWhenConverted : 1; // 0x30:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float EnterBTTaskConversationIfPlayerAroundDistSqr; // 0x34(0x4)
		float WaitTimeWhileNotInConversationState; // 0x38(0x4)
		float SecondsToDenyActorToWaitForConversation; // 0x3C(0x4)
		TArray<UAthenaDanceItemDefinition*> GreetingEmotes; // 0x40(0x10)
		float GreetingEmoteMaxDuration; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UFortTandemCharacterData* CharacterData; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Conversation");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConversation
	// Inherited from UFortAthenaAISpawnerDataComponent_ConversationBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x238 (0x268 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotConversation : public UFortAthenaAISpawnerDataComponent_ConversationBase	
	{
	public:
		UClass* ConversationComponentClass; // 0x30(0x8)
		FGameplayTag ConversationEntryTag; // 0x38(0x4)
		FGameplayTag InteractorParticipantTag; // 0x3C(0x4)
		FGameplayTag SelfParticipantTag; // 0x40(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FScalableFloat EnterBTTaskConversationIfPlayerAround; // 0x48(0x28)
		FScalableFloat EnterBTTaskConversationIfPlayerAroundDist; // 0x70(0x28)
		FScalableFloat WaitTimeWhileNotInConversationState; // 0x98(0x28)
		FScalableFloat SecondsToDenyActorToWaitForConversation; // 0xC0(0x28)
		TArray<UAthenaDanceItemDefinition*> GreetingEmotes; // 0xE8(0x10)
		FScalableFloat GreetingEmoteMaxDuration; // 0xF8(0x28)
		UFortTandemCharacterData* CharacterData; // 0x120(0x8)
		FName ConversationInteractionCollisionProfile; // 0x128(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FVector ConversationInteractionBoxExtent; // 0x130(0x18)
		FVector ConversationInteractionBoxOffset; // 0x148(0x18)
		FScalableFloat SpawnOutOfTheLoop; // 0x160(0x28)
		FScalableFloat RespawnOutsideTheLoop; // 0x188(0x28)
		FScalableFloat RespawnAtOriginalSpawnLocation; // 0x1B0(0x28)
		FScalableFloat RemoveInvulnerabilityOutsideSafeZone; // 0x1D8(0x28)
		UClass* NPCLoopStateComponentClass; // 0x200(0x8)
		FScalableFloat UseSpecialActorComponent; // 0x208(0x28)
		UClass* SpecialActorComponentClass; // 0x230(0x8)
		FScalableFloat BlockSpecialActorUntilOutsideTheLoop; // 0x238(0x28)
		bool bCanConverseWhenConverted; // 0x260(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x261(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConversation");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_CosmeticBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase");
			return ret;
		}

		void GetFallbackTag(FGameplayTag& OutFallbackTag); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACD2CC(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
	// Inherited from UFortAthenaAISpawnerDataComponent_CosmeticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase	
	{
	public:
		TArray<UAthenaCosmeticItemDefinition*> CosmeticOverrideList; // 0x30(0x10)
		UFortAIPawnCustomizationDefinition* CustomizationDefinition; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase");
			return ret;
		}

		void GetLoadout(FFortAthenaLoadout& OutLoadout); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACD5A8(relative to base address)
		void GetDances(TArray<UAthenaDanceItemDefinition*>& Dances, AFortAthenaAIBotController* BotController); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACD148(relative to base address)
		void GetCustomCharacterParts(TArray<UCustomCharacterPart*>& OutCustomCharacterParts); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACD0A8(relative to base address)
		void GetAnimBPOverride(UClass* OutAnimBPOverride, int32_t& OutPriority); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACCD04(relative to base address)
		void GetAllLoadouts(TArray<FFortAthenaLoadout>& OutLoadouts); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACCBA8(relative to base address)
		void AddCosmeticOverrideItemDef(UAthenaCosmeticItemDefinition* InCosmeticItemToPreview); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACC5F8(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotDebug
	// Inherited from UFortAthenaAISpawnerDataComponent_DebugBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x1A0 (0x1D0 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotDebug : public UFortAthenaAISpawnerDataComponent_DebugBase	
	{
	public:
		FDebugMinimapData DebugMinimapData; // 0x30(0x190)
		TArray<FString> EditorConsoleCommands; // 0x1C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotDebug");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AIConvert
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0xE8 (0x118 - 0x30)
	class UFortAthenaAIRuntimeParameters_AIConvert : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bCanBeConverted; // 0x30(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float OddsOfBeingConvertibleFromDBNO; // 0x34(0x4)
		bool bForceKillWhenUnconverted; // 0x38(0x1)
		bool bForceKillWhenConverterDies; // 0x39(0x1)
		bool bCopyConverterSpecificRelations; // 0x3A(0x1)
		bool bRemoveFromAllFactions; // 0x3B(0x1)
		bool bAddConverterFactions; // 0x3C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float ReleaseDistanceSq; // 0x40(0x4)
		float CheckReleaseConditionsTimeInterval; // 0x44(0x4)
		FGameplayTagContainer AddToFactions; // 0x48(0x20)
		FGameplayTagContainer RemoveFromFactions; // 0x68(0x20)
		char PreConversionTeamIndex; // 0x88(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer PreConversionFactions; // 0x90(0x20)
		TArray<UFortAbilitySet*> AbilitySetsForConverted; // 0xB0(0x10)
		FTeleportSettings TeleportSettings; // 0xC0(0x38)
		bool bEnableDBNO; // 0xF8(0x1)
		TEnumAsByte<TInteractionType> DBNOInteractionType; // 0xF9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xFA(0x2) UNKNOWN PROPERTY
		float DBNOInteractionDuration; // 0xFC(0x4)
		TArray<FPickupTagConvertInfo> PickupTagConvertInfos; // 0x100(0x10)
		FGameplayTag ConvertIdentifierTag; // 0x110(0x4)
		unsigned char UnknownData04_7[0x4]; // 0x114(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert");
			return ret;
		}

		void SetOddsOfBeingConvertibleFromDBNO(float InOddsOfBeingConvertibleFromDBNO); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACFED4(relative to base address)
		void SetForceKillWhenUnconverted(bool bInForceKillWhenUnconverted); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF788(relative to base address)
		void SetForceKillWhenConverterDies(bool bInForceKillWhenConverterDies); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF70C(relative to base address)
		void SetCanBeConvertedFromDBNO(bool bInCanBeConvertedFromDBNO); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF58C(relative to base address)
		void SetCanBeConverted(bool bInCanBeConverted); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EE8ADD0(relative to base address)
		TArray GetPickupTagConvertInfos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD8A4(relative to base address)
		float GetOddsOfBeingConvertibleFromDBNO(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748BA07FC(relative to base address)
		bool GetForceKillWhenUnconverted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E2731EC(relative to base address)
		bool GetForceKillWhenConverterDies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD35C(relative to base address)
		bool GetCanBeConvertedFromDBNO(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACCF08(relative to base address)
		bool GetCanBeConverted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EE883E4(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotConvert
	// Inherited from UFortAthenaAIRuntimeParameters_AIConvert -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0xB0 (0x1C8 - 0x118)
	class UFortAthenaAIRuntimeParameters_AIBotConvert : public UFortAthenaAIRuntimeParameters_AIConvert	
	{
	public:
		bool bShouldLeashFollowConverter : 1; // 0x118:0(0x1)
		bool bShouldScanAroundWhenWaiting : 1; // 0x118:1(0x1)
		bool bFollowingBehaviorEnabled : 1; // 0x118:2(0x1)
		bool bFollowerCanUseDBNO : 1; // 0x118:3(0x1)
		bool bMimicBehaviorEnabled : 1; // 0x118:4(0x1)
		bool bShouldTeleportTowardsConverter : 1; // 0x118:5(0x1)
		bool bCanDanceWithConverter : 1; // 0x118:6(0x1)
		bool bTargetPawnConverterDamaged : 1; // 0x118:7(0x1)
		bool bCanHolsterWeaponWhileConverted : 1; // 0x119:0(0x1)
		unsigned char UnknownData00_5[0x2]; // 0x11A(0x2) UNKNOWN PROPERTY
		float SkillLevelOverride; // 0x11C(0x4)
		float PreConversionSkillLevel; // 0x120(0x4)
		float InnerLeashRadius; // 0x124(0x4)
		float OuterLeashRadius; // 0x128(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_Leash* PreConversionLeashParams; // 0x130(0x8)
		float LeashFollowActorUpdateRate; // 0x138(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
		FVector LeashFollowActorLocalOffset; // 0x140(0x18)
		float FollowingBehaviorRadiusSqr; // 0x158(0x4)
		float FollowingBehaviorRadius; // 0x15C(0x4)
		float FollowingBehaviorUrgenceRadiusSqr; // 0x160(0x4)
		float FollowingBehaviorUrgenceRadius; // 0x164(0x4)
		float FollowingBehaviorBlockedSightAngleRad; // 0x168(0x4)
		float FollowingBehaviorBlockedSightExitAngleRad; // 0x16C(0x4)
		float FollowingBehaviorBlockedSightExitDistMin; // 0x170(0x4)
		float MimicBehaviorRadiusSqr; // 0x174(0x4)
		float MimicBehaviorRadius; // 0x178(0x4)
		float TeleportTowardsConverterDistanceSq; // 0x17C(0x4)
		float TeleportTowardsConverterInCombatDistanceSq; // 0x180(0x4)
		float TeleportTowardsConverterWhenNotVisibleDistanceSq; // 0x184(0x4)
		float TeleportTowardsConverterInCombatWhenNotVisibleDistanceSq; // 0x188(0x4)
		float MinDistanceFromConverterWhenTeleported; // 0x18C(0x4)
		float MaxDistanceFromConverterWhenTeleported; // 0x190(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		TArray<UClass*> ConvertedSkillSetClasses; // 0x198(0x10)
		TArray<UClass*> PreConversionSkillSetClasses; // 0x1A8(0x10)
		unsigned char UnknownData04_7[0x10]; // 0x1B8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotConvert");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Leash
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UFortAthenaAIRuntimeParameters_Leash : public UFortAthenaAIRuntimeParameters	
	{
	public:
		FVector LeashLocation; // 0x30(0x18)
		float LeashInnerRadius; // 0x48(0x4)
		float LeashOuterRadius; // 0x4C(0x4)
		float LeashTeleportRadius; // 0x50(0x4)
		bool bCheckForReachabilityOnRandomLocationGeneration; // 0x54(0x1)
		ELeashReturnLocationMode LeashReturnLocationMode; // 0x55(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
		FLeashInfoOverride DefaultLeashInfo; // 0x58(0x8)
		TMap<EAlertLevel, FLeashInfoOverride> AlertLevelLeashOverride; // 0x60(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Leash");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotRespawn
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UFortAthenaAIRuntimeParameters_AIBotRespawn : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bCanRespawnOnDeath : 1; // 0x30:0(0x1)
		bool bRespawnOnDeathLocation : 1; // 0x30:1(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float RespawnTime; // 0x34(0x4)
		FVector RespawnLocationOverride; // 0x38(0x18)
		UFortAthenaAISpawnerDataComponentList* AISpawnerDataComponentList; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotRespawn");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x318 (0x348 - 0x30)
	class UFortAthenaAISpawnerDataComponent_GameplayBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		bool bOverrideGlobalSpeedMultiplier; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FScalableFloat GlobalSpeedMultiplier; // 0x38(0x28)
		FScalableFloat CanBeConverted; // 0x60(0x28)
		FScalableFloat CanBeConvertedFromDBNO; // 0x88(0x28)
		FScalableFloat ForceKillWhenUnconverted; // 0xB0(0x28)
		FScalableFloat ForceKillWhenConverterDies; // 0xD8(0x28)
		FScalableFloat CopyConverterSpecificRelations; // 0x100(0x28)
		FScalableFloat RemoveFromAllFactions; // 0x128(0x28)
		FScalableFloat AddConverterFactions; // 0x150(0x28)
		FScalableFloat ReleaseDistance; // 0x178(0x28)
		FScalableFloat CheckReleaseConditionsTimeInterval; // 0x1A0(0x28)
		FGameplayTagContainer AddToFactions; // 0x1C8(0x20)
		FGameplayTagContainer RemoveFromFactions; // 0x1E8(0x20)
		FScalableFloat PawnCullDistance; // 0x208(0x28)
		TArray<UFortAbilitySet*> AbilitySetsForConverted; // 0x230(0x10)
		FTeleportSettings TeleportSettings; // 0x240(0x38)
		bool bApplyTaggedNavFilters; // 0x278(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x279(0x7) UNKNOWN PROPERTY
		FFortAITaggedNavFilterData NavFilterData; // 0x280(0x60)
		bool bEnableDBNO; // 0x2E0(0x1)
		TEnumAsByte<TInteractionType> DBNOInteractionType; // 0x2E1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2E2(0x2) UNKNOWN PROPERTY
		float DBNOInteractionDuration; // 0x2E4(0x4)
		bool bOnlyLeaderInteraction; // 0x2E8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x2E9(0x3) UNKNOWN PROPERTY
		FGameplayTag ConvertIdentifierTag; // 0x2EC(0x4)
		bool bCanSleep; // 0x2F0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery SleepForTheseGoalActors; // 0x2F8(0x48)
		unsigned char UnknownData05_7[0x8]; // 0x340(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase");
			return ret;
		}

		bool ShouldOverrideGlobalSpeedMultiplier(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74C3A036C(relative to base address)
		void SetCopyConverterSpecificRelations(bool bInCopyConverterSpecificRelations); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAA0F08(relative to base address)
		void SetCanBeConverted(bool bInCanBeConverted); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF4E0(relative to base address)
		void PostOnSpawnedBP(APawn* PawnAI); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetGlobalSpeedMultiplier(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD370(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay
	// Inherited from UFortAthenaAISpawnerDataComponent_GameplayBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x5B0 (0x8F8 - 0x348)
	class UFortAthenaAISpawnerDataComponent_AIBotGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase	
	{
	public:
		UFortBotNameSettings* NameSettings; // 0x348(0x8)
		bool bRequiresUniqueNetId : 1; // 0x350:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FScalableFloat CanRespawnOnDeath; // 0x358(0x28)
		FScalableFloat RespawnOnDeathLocation; // 0x380(0x28)
		FScalableFloat RespawnTime; // 0x3A8(0x28)
		float PawnCullDistanceAfterPlayerAggroMode; // 0x3D0(0x4)
		EReachLocationValidationMode ReachLocationValidationMode; // 0x3D4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x3D5(0x3) UNKNOWN PROPERTY
		FVector LeashLocation; // 0x3D8(0x18)
		FScalableFloat LeashInnerRadius; // 0x3F0(0x28)
		FScalableFloat LeashOuterRadius; // 0x418(0x28)
		FScalableFloat LeashTeleportRadius; // 0x440(0x28)
		bool bCheckForReachabilityOnRandomLocationGeneration; // 0x468(0x1)
		ELeashReturnLocationMode LeashReturnLocationMode; // 0x469(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x46A(0x6) UNKNOWN PROPERTY
		TMap<EAlertLevel, FLeashInfoOverride> AlertLevelLeashOverride; // 0x470(0x50)
		AFortAthenaPatrolPath* AssociatedPatrolPath; // 0x4C0(0x8)
		FQueryableTagContainer PatrolPathTagsConversionTable; // 0x4C8(0x10)
		bool bCanInvestigateWithMeleeWeapon; // 0x4D8(0x1)
		bool bApplyMutatorsHealthAndShieldModifiers; // 0x4D9(0x1)
		bool bSupportsTethering; // 0x4DA(0x1)
		bool bEnableRenderCustomDepth; // 0x4DB(0x1)
		bool bShowMarkerIcon; // 0x4DC(0x1)
		bool bDisableGiveWeaponCheat; // 0x4DD(0x1)
		bool bDisableGiveMaterialsCheat; // 0x4DE(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x4DF(0x1) UNKNOWN PROPERTY
		FScalableFloat InnerLeashRadius; // 0x4E0(0x28)
		FScalableFloat OuterLeashRadius; // 0x508(0x28)
		FScalableFloat ShouldLeashFollowConverter; // 0x530(0x28)
		FScalableFloat LeashFollowActorUpdateRate; // 0x558(0x28)
		FVector LeashFollowActorLocalOffset; // 0x580(0x18)
		FScalableFloat SkillLevelOverride; // 0x598(0x28)
		FScalableFloat ShouldScanAroundWhenWaiting; // 0x5C0(0x28)
		FScalableFloat ShouldTeleportTowardsConverter; // 0x5E8(0x28)
		FScalableFloat FollowingBehaviorEnabled; // 0x610(0x28)
		FScalableFloat FollowerCanUseDBNO; // 0x638(0x28)
		FScalableFloat FollowingBehaviorRadius; // 0x660(0x28)
		FScalableFloat FollowingBehaviorUrgenceRadius; // 0x688(0x28)
		FScalableFloat FollowingBehaviorBlockedSightAngle; // 0x6B0(0x28)
		FScalableFloat FollowingBehaviorBlockedSightExitAngle; // 0x6D8(0x28)
		FScalableFloat FollowingBehaviorBlockedSightExitDistMin; // 0x700(0x28)
		FScalableFloat MimicBehaviorEnabled; // 0x728(0x28)
		FScalableFloat MimicBehaviorRadius; // 0x750(0x28)
		FScalableFloat CanDanceWithConverter; // 0x778(0x28)
		FScalableFloat TeleportTowardsConverterDistance; // 0x7A0(0x28)
		FScalableFloat TeleportTowardsConverterInCombatDistance; // 0x7C8(0x28)
		FScalableFloat TeleportTowardsConverterWhenNotVisibleDistance; // 0x7F0(0x28)
		FScalableFloat TeleportTowardsConverterInCombatWhenNotVisibleDistance; // 0x818(0x28)
		FScalableFloat MinDistanceFromConverterWhenTeleported; // 0x840(0x28)
		FScalableFloat MaxDistanceFromConverterWhenTeleported; // 0x868(0x28)
		TArray<UClass*> ConvertedSkillSetClasses; // 0x890(0x10)
		UClass* PingCommandComponentClass; // 0x8A0(0x8)
		FScalableFloat TargetPawnConverterDamaged; // 0x8A8(0x28)
		FScalableFloat CanHolsterWeaponWhileConverted; // 0x8D0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay");
			return ret;
		}

		void SetNameSettings(TEnumAsByte<EBotNamingMode> InNamingMode, FString InName, bool bInAddPlayerIDSuffix); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACFDB0(relative to base address)
		void SetLeashOuterRadius(float InLeashOuterRadius); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACFBD4(relative to base address)
		void SetLeashLocation(FVector InLeashLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FACFABC(relative to base address)
		void SetLeashInnerRadius(float InLeashInnerRadius); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACFA1C(relative to base address)
		void SetAssociatedPatrolPath(AFortAthenaPatrolPath* InAssociatedPatrolPath); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF454(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		TArray<FInitialGameplayEffectInfo> InitialGameplayEffect; // 0x30(0x10)
		TArray<UFortAbilitySet*> InitialGameplayAbilitiesSet; // 0x40(0x10)
		FGameplayTagContainer LooseTagsToApplyToPawn; // 0x50(0x20)
		FGameplayTagContainer ReplicatedTagsToApplyToPawn; // 0x70(0x20)
		bool bApplySpawnerDescriptorTagToPawnAsLooseTag; // 0x90(0x1)
		bool bApplySpawnerDescriptorTagToPawnAsReplicatedTag; // 0x91(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x92(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer AbilityToPlayOnSpawnTags; // 0x98(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase");
			return ret;
		}

		void SetReplicatedTagsToApplyToPawn(FGameplayTagContainer& InGameplayTagContainer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FAD014C(relative to base address)
		void SetLooseTagsToApplyToPawn(FGameplayTagContainer& InGameplayTagContainer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FACFCF4(relative to base address)
		void HandleAIFullySpawned(AAIController* Controller, AFortPawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FACDA20(relative to base address)
		FGameplayTagContainer GetReplicatedTagsToApplyToPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD900(relative to base address)
		FGameplayTagContainer GetLooseTagsToApplyToPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD670(relative to base address)
		void GetInitialGameplayEffects(TArray<FInitialGameplayEffectInfo>& OutGEs); // Flags: Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD4AC(relative to base address)
		void GetInitialGameplayAbilities(TArray<UFortAbilitySet*>& OutGASets); // Flags: Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD40C(relative to base address)
		bool GetApplySpawnerDescriptorTagToPawnAsReplicatedTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748D1BA14(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase
	// Inherited from UFortAthenaAISpawnerDataComponent_GameplayAbilityBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0xB8 - 0xB8)
	class UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase : public UFortAthenaAISpawnerDataComponent_GameplayAbilityBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Inventory
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortAthenaAIRuntimeParameters_Inventory : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bShouldDropCurrencyOnDeath : 1; // 0x30:0(0x1)
		bool bDefaultInventoryIgnoresRestrictions : 1; // 0x30:1(0x1)
		bool bSkipInventoryInitialization : 1; // 0x30:2(0x1)
		bool bAddStartingItemsToInventory : 1; // 0x30:3(0x1)
		bool bRemoveAllItemsOnInitialization : 1; // 0x30:4(0x1)
		bool bIgnoreItemSupportRestrictions : 1; // 0x30:5(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FName CurrencyPayoutRowName; // 0x34(0x4)
		bool bDeathTagsCanBlockLootDrop : 1; // 0x38:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle LootInfo; // 0x40(0x10)
		TArray<FItemAndCount> InitialItemList; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Inventory");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotInventory
	// Inherited from UFortAthenaAIRuntimeParameters_Inventory -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x8 (0x68 - 0x60)
	class UFortAthenaAIRuntimeParameters_AIBotInventory : public UFortAthenaAIRuntimeParameters_Inventory	
	{
	public:
		bool bGrantPickAxe : 1; // 0x60:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotInventory");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0xE0 (0x110 - 0x30)
	class UFortAthenaAISpawnerDataComponent_InventoryBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		TArray<FItemAndCount> Items; // 0x30(0x10)
		FDataTableRowHandle LootInfo; // 0x40(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x50(0x18) UNKNOWN PROPERTY
		FScalableFloat ShouldDropCurrencyOnDeath; // 0x68(0x28)
		FScalableFloat DefaultInventoryIgnoresRestrictions; // 0x90(0x28)
		FScalableFloat IgnoreItemSupportRestrictions; // 0xB8(0x28)
		FName CurrencyPayoutRowName; // 0xE0(0x4)
		bool bDeathTagsCanBlockLootDrop; // 0xE4(0x1)
		bool bAddStartingItemsToInventory; // 0xE5(0x1)
		bool bRemoveAllItemsOnInitialization; // 0xE6(0x1)
		bool bUseDefenderInventoryManagement; // 0xE7(0x1)
		bool bApplyAutoModToItems; // 0xE8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		FFortAILoadoutInfo LoadoutInfo; // 0xF0(0x18)
		UDataTable* LoadoutTable; // 0x108(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase");
			return ret;
		}

		void SetInventoryItems(TArray<FItemAndCount>& InItems); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FACF884(relative to base address)
		void SetAddStartingItemsToInventory(bool bInAddStartingItemsToInventory); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF3D4(relative to base address)
		void InjectItems(TArray<FItemAndCount>& InItems); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FACE09C(relative to base address)
		void InjectItem(FItemAndCount& Item); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FACDFC4(relative to base address)
		void GetAllPossibleItems(TArray<FItemAndCount>& OutItems); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FACCC44(relative to base address)
		bool GetAddStartingItemsToInventory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACCB90(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory
	// Inherited from UFortAthenaAISpawnerDataComponent_InventoryBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x20 (0x130 - 0x110)
	class UFortAthenaAISpawnerDataComponent_AIBotInventory : public UFortAthenaAISpawnerDataComponent_InventoryBase	
	{
	public:
		bool bItemsToGiveInEditorWhenCustomizationIsEnabled : 1; // 0x110:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		TArray<FItemAndCount> EditorOnlyItems; // 0x118(0x10)
		bool bGrantPickAxe; // 0x128(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x129(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory");
			return ret;
		}

		void SetGrantPickAxe(bool bInGrantPickAxe); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF804(relative to base address)
		bool GetGrantPickAxe(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD39C(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UFortAthenaAISpawnerDataComponent_PerceptionBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		bool bOverrideVisibilityRange; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer OverrideVisibilityRangeConditionTag; // 0x38(0x20)
		float SightRadius; // 0x58(0x4)
		float LoseSightRadius; // 0x5C(0x4)
		bool bRestrictSightOverrideToUnaware; // 0x60(0x1)
		bool bOverrideHearingRange; // 0x61(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x62(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer OverrideHearingRangeConditionTag; // 0x68(0x20)
		float HearingRadius; // 0x88(0x4)
		bool bRestrictHearingOverrideToUnaware; // 0x8C(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x8D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase");
			return ret;
		}

		void SetVisibilityRange(float InSightRadius, float LoseSightRadius, bool bInRestrictOverrideToUnaware); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAD03B0(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception
	// Inherited from UFortAthenaAISpawnerDataComponent_PerceptionBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UFortAthenaAISpawnerDataComponent_AIBotPerception : public UFortAthenaAISpawnerDataComponent_PerceptionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_SkillsetBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase");
			return ret;
		}

		bool ShouldUseMatchMMRToOverrideSkillLevel(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74C3A036C(relative to base address)
		TArray GetSkillSets(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACD944(relative to base address)
		float GetSkill(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FACD3E0(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset
	// Inherited from UFortAthenaAISpawnerDataComponent_SkillsetBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0xF0 (0x120 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotSkillset : public UFortAthenaAISpawnerDataComponent_SkillsetBase	
	{
	public:
		UClass* AimingSkillSet; // 0x30(0x8)
		UClass* AttackingSkillSet; // 0x38(0x8)
		UClass* BuildingSkillSet; // 0x40(0x8)
		UClass* DBNOSkillSet; // 0x48(0x8)
		UClass* EmoteSkillSet; // 0x50(0x8)
		UClass* EvasiveManeuversSkillSet; // 0x58(0x8)
		UClass* HarvestSkillSet; // 0x60(0x8)
		UClass* HealingSkillSet; // 0x68(0x8)
		UClass* InventorySkillSet; // 0x70(0x8)
		UClass* LootingSkillSet; // 0x78(0x8)
		UClass* MovementSkillSet; // 0x80(0x8)
		UClass* PerceptionSkillSet; // 0x88(0x8)
		UClass* PlayStyleSkillSet; // 0x90(0x8)
		UClass* PropagateAwarenessSkillSet; // 0x98(0x8)
		UClass* RangeAttackSkillSet; // 0xA0(0x8)
		UClass* ReviveSkillSet; // 0xA8(0x8)
		UClass* UnstuckSkillSet; // 0xB0(0x8)
		UClass* VehicleSkillSet; // 0xB8(0x8)
		UClass* ReactToVerbSkillSet; // 0xC0(0x8)
		bool bUseMatchMMRToOverrideSkillLevel : 1; // 0xC8:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UDataTable*> OverrideSkillLevelMMRTable; // 0xD0(0x20)
		FScalableFloat Skill; // 0xF0(0x28)
		float SkillOverride; // 0x118(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x11C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset");
			return ret;
		}

		void SetSkill(float InSKill); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAD0208(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_PlayerBotSkillset
	// Inherited from UFortAthenaAISpawnerDataComponent_AIBotSkillset -> UFortAthenaAISpawnerDataComponent_SkillsetBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x8 (0x128 - 0x120)
	class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset : public UFortAthenaAISpawnerDataComponent_AIBotSkillset	
	{
	public:
		UClass* WarmUpSkillSet; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_PlayerBotSkillset");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIGameplay
	// Inherited from UFortAthenaAISpawnerDataComponent_GameplayBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x60 (0x3A8 - 0x348)
	class UFortAthenaAISpawnerDataComponent_AIGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase	
	{
	public:
		float MoveSoundStimulusBroadcastInterval; // 0x348(0x4)
		float MaxMoveSoundRange; // 0x34C(0x4)
		bool bGenerateSoundInAllMovementModes : 1; // 0x350:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FScalableFloat DefaultLifespanAfterDeath; // 0x358(0x28)
		FText OverrideName; // 0x380(0x10)
		EFortAthenaAISpawnerDataComponentTriBool IsAlwaysGameplayRelevantOverride; // 0x390(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x391(0x7) UNKNOWN PROPERTY
		TArray<FPickupTagConvertInfo> PickupTagConvertInfos; // 0x398(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIGameplay");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
	// Inherited from UFortAthenaAISpawnerDataComponent_CosmeticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization
	// Inherited from UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase -> UFortAthenaAISpawnerDataComponent_CosmeticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization : public UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase	
	{
	public:
		FGameplayTag FallbackTag; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UFortAIPawnCustomizationDefinition* CustomizationDefinition; // 0x38(0x8)
		bool bCanUnloadCustomization; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_OptimBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_OptimBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_OptimBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnOptim
	// Inherited from UFortAthenaAISpawnerDataComponent_OptimBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIPawnOptim : public UFortAthenaAISpawnerDataComponent_OptimBase	
	{
	public:
		bool bRegisterToAIDropper : 1; // 0x30:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnOptim");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AnimationBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AnimationBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		UProxyTable* ProxyTable; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AnimationBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AssembledMesh
	// Inherited from UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase -> UFortAthenaAISpawnerDataComponent_CosmeticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x50 (0x98 - 0x48)
	class UFortAthenaAISpawnerDataComponent_AssembledMesh : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase	
	{
	public:
		TWeakObjectPtr<UAssembledMeshSchema*> AssembledMeshSchema; // 0x48(0x20)
		TArray<TWeakObjectPtr> RandomAssembledMeshSchemas; // 0x68(0x10)
		TWeakObjectPtr<USkeletalMesh*> PreviewMesh; // 0x78(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AssembledMesh");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary
	// Inherited from UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase -> UFortAthenaAISpawnerDataComponent_CosmeticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0xB8 (0x100 - 0x48)
	class UFortAthenaAISpawnerDataComponent_CosmeticLibrary : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase	
	{
	public:
		TArray<TWeakObjectPtr> CosmeticLibraries; // 0x48(0x10)
		FScalableFloat DefaultCosmeticLibraryWeight; // 0x58(0x28)
		FGameplayTag PredefinedCosmeticSetTag; // 0x80(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FScalableFloat EmotesMaxCount; // 0x88(0x28)
		FScalableFloat bUseFixedSeed; // 0xB0(0x28)
		FScalableFloat FixedSeed; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary");
			return ret;
		}

		int32_t GetAICosmeticLibraryDataIndex(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74C5A3320(relative to base address)
		UFortAthenaAIBotCosmeticLibraryData GetAICosmeticLibraryData(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74C382C24(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLoadout
	// Inherited from UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase -> UFortAthenaAISpawnerDataComponent_CosmeticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x168 (0x1B0 - 0x48)
	class UFortAthenaAISpawnerDataComponent_CosmeticLoadout : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase	
	{
	public:
		FFortAthenaLoadout CosmeticLoadout; // 0x48(0x130)
		TArray<FFortAthenaAIWeightedCosmeticLoadout> WeightedLoadouts; // 0x178(0x10)
		TArray<UCustomCharacterPart*> CustomCharacterParts; // 0x188(0x10)
		bool bCanShowDefaultSkin; // 0x198(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		FGameplayTag FallbackTag; // 0x19C(0x4)
		UClass* AnimBPOverride; // 0x1A0(0x8)
		int32_t AnimBPOverridePriority; // 0x1A8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLoadout");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_CoverBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UFortAthenaAISpawnerDataComponent_CoverBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		UClass* CoverPositionFilterClass; // 0x30(0x8)
		FVector CoverBoxExtent; // 0x38(0x18)
		float CoverOffset; // 0x50(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_CoverBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_GroupBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x128 (0x158 - 0x30)
	class UFortAthenaAISpawnerDataComponent_GroupBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		FScalableFloat EnableGroupComponent; // 0x30(0x28)
		FScalableFloat CanBeGroupLeader; // 0x58(0x28)
		FScalableFloat CanFollowGroupLeader; // 0x80(0x28)
		FScalableFloat EnableFormationComponent; // 0xA8(0x28)
		TArray<FVector> FormationSlots; // 0xD0(0x10)
		FScalableFloat MaxDistanceFromSlotToSprint; // 0xE0(0x28)
		FScalableFloat MaxDistanceFromSlotToStopFollowing; // 0x108(0x28)
		FScalableFloat MaxDistanceForLeaderToWait; // 0x130(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_GroupBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Hearing
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortAthenaAIRuntimeParameters_Hearing : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bOverrideHearingRange; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer OverrideHearingRangeConditionTag; // 0x38(0x20)
		float HearingRadius; // 0x58(0x4)
		bool bRestrictOverrideToUnaware; // 0x5C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Hearing");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_Sight
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UFortAthenaAIRuntimeParameters_Sight : public UFortAthenaAIRuntimeParameters	
	{
	public:
		bool bOverrideVisibilityRange; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer OverrideVisibilityRangeConditionTag; // 0x38(0x20)
		float SightRadius; // 0x58(0x4)
		float LoseSightRadius; // 0x5C(0x4)
		bool bRestrictOverrideToUnaware; // 0x60(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_Sight");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerksBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAthenaAISpawnerDataComponent_PerksBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		TArray<FPerkAvailabilityContainer> PerksContainers; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_PerksBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_RandomInventory
	// Inherited from UFortAthenaAISpawnerDataComponent_AIBotInventory -> UFortAthenaAISpawnerDataComponent_InventoryBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x10 (0x140 - 0x130)
	class UFortAthenaAISpawnerDataComponent_RandomInventory : public UFortAthenaAISpawnerDataComponent_AIBotInventory	
	{
	public:
		TArray<FWeightedAIInventoryLoadout> Loadouts; // 0x130(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_RandomInventory");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_ScriptBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortAthenaAISpawnerDataComponent_ScriptBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_ScriptBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBaseClass
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x130 (0x160 - 0x30)
	class UFortAthenaAISpawnerDataComponent_SmartObjectBaseClass : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		UClass* SmartObjectUserComponentClass; // 0x30(0x8)
		TArray<UClass*> SmartObjectActivitiesCombined; // 0x38(0x10)
		TArray<UClass*> SmartObjectActivitiesToAdd; // 0x48(0x10)
		TArray<UClass*> SmartObjectActivitiesToRemove; // 0x58(0x10)
		UDataTable* AnimConfigTable; // 0x68(0x8)
		FScalableFloat Enabled; // 0x70(0x28)
		FScalableFloat ChooseClosestSmartObject; // 0x98(0x28)
		FScalableFloat UnreachableBanDuration; // 0xC0(0x28)
		FScalableFloat SelectedSmartObjectExpirationDelay; // 0xE8(0x28)
		FScalableFloat GlobalSmartObjectCooldownOnFinished; // 0x110(0x28)
		FScalableFloat GlobalSmartObjectCooldownOnInterrupted; // 0x138(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBaseClass");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectAIPawn
	// Inherited from UFortAthenaAISpawnerDataComponent_SmartObjectBaseClass -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x160 - 0x160)
	class UFortAthenaAISpawnerDataComponent_SmartObjectAIPawn : public UFortAthenaAISpawnerDataComponent_SmartObjectBaseClass	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectAIPawn");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBot
	// Inherited from UFortAthenaAISpawnerDataComponent_SmartObjectBaseClass -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x0 (0x160 - 0x160)
	class UFortAthenaAISpawnerDataComponent_SmartObjectBot : public UFortAthenaAISpawnerDataComponent_SmartObjectBaseClass	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBot");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UFortAthenaAISpawnerDataComponent_SpawnParamsBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		FTransform SpawnTransform; // 0x30(0x60)
		ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride; // 0x90(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase");
			return ret;
		}

		bool ShouldSpawnInAir(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74C68EFBC(relative to base address)
		bool ShouldCheckForOverlaps(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FAD04B4(relative to base address)
		void SetSpawnTransform(FTransform& InSpawnTransform); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FAD0288(relative to base address)
		float GetSpawnTracePadding(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD9B4(relative to base address)
		TArray GetSpawnerDataSpawnedAsChildren(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD9E0(relative to base address)
		FDataTableRowHandle GetPawnStatHandle(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD86C(relative to base address)
		UClass GetPawnClass(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD834(relative to base address)
		float GetInAirSpawnTraceStartHeight(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD3E0(relative to base address)
		float GetInAirSpawnTraceSphereRadius(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD370(relative to base address)
		float GetInAirSpawnTraceEndHeight(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACD3B4(relative to base address)
		UClass GetAIControllerClass(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74FACCA08(relative to base address)
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParams
	// Inherited from UFortAthenaAISpawnerDataComponent_SpawnParamsBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x48 (0xE0 - 0x98)
	class UFortAthenaAISpawnerDataComponent_SpawnParams : public UFortAthenaAISpawnerDataComponent_SpawnParamsBase	
	{
	public:
		UClass* PawnClass; // 0x98(0x8)
		UClass* AIControllerClass; // 0xA0(0x8)
		FDataTableRowHandle PawnStatHandle; // 0xA8(0x10)
		TArray<UClass*> SpawnerDataSpawnedAsChildren; // 0xB8(0x10)
		FCollisionProfileName GroundTraceCollisionProfile; // 0xC8(0x4)
		float InAirSpawnTraceStartHeight; // 0xCC(0x4)
		float InAirSpawnTraceEndHeight; // 0xD0(0x4)
		float InAirSpawnTraceSphereRadius; // 0xD4(0x4)
		float SpawnTracePadding; // 0xD8(0x4)
		bool bCheckForOverlaps : 1; // 0xDC:0(0x1)
		bool bAddPOILocationTagsOnSpawn : 1; // 0xDC:1(0x1)
		bool bSpawnInAir : 1; // 0xDC:2(0x1)
		bool bSetSkyDivingFromBus : 1; // 0xDC:3(0x1)
		bool bSetPlayerPawnAttributesWithThisStatHandle : 1; // 0xDC:4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParams");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_TokenBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0xC8 (0xF8 - 0x30)
	class UFortAthenaAISpawnerDataComponent_TokenBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		FScalableFloat EnableTokenProviderComponent; // 0x30(0x28)
		FScalableFloat TokenMaxCount; // 0x58(0x28)
		FScalableFloat EnableTokenConsumerComponent; // 0x80(0x28)
		FScalableFloat TokenHoldMinDuration; // 0xA8(0x28)
		FScalableFloat TokenHoldMaxDuration; // 0xD0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_TokenBase");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_Vehicle
	// Inherited from UFortAthenaAISpawnerDataComponent_VehicleBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortAthenaAISpawnerDataComponent_Vehicle : public UFortAthenaAISpawnerDataComponent_VehicleBase	
	{
	public:
		UClass* VehicleToSpawnAndEnter; // 0x30(0x8)
		bool bSetInfiniteFuel : 1; // 0x38:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TArray<UClass*> VehicleSkillSets; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_Vehicle");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_Voice
	// Inherited from UFortAthenaAISpawnerDataComponent_VoiceBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UFortAthenaAISpawnerDataComponent_Voice : public UFortAthenaAISpawnerDataComponent_VoiceBase	
	{
	public:
		UClass* VoiceComponentClass; // 0x30(0x8)
		UFortTaggedSoundBank* SoundBank; // 0x38(0x8)
		UFortTaggedSoundBank* MaleSoundBankOverride; // 0x40(0x8)
		UFortTaggedSoundBank* FemaleSoundBankOverride; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_Voice");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaBeaconComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UFortAthenaBeaconComponent : public UActorComponent	
	{
	public:
		int32_t MaxAttractedBots; // 0xA0(0x4)
		float AttractionRadius; // 0xA4(0x4)
		TArray<AActor*> RegisteredActors; // 0xA8(0x10)
		FMulticastInlineDelegate OnConsumeEvent; // 0xB8(0x10)
		bool bIsConsumed; // 0xC8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaBeaconComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaBTTask_DynamicBlueprint
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UFortAthenaBTTask_DynamicBlueprint : public UBTTaskNode	
	{
	public:
		FName DynamicBlueprintStatusKeyName; // 0x70(0x4)
		FName DynamicBlueprintActorKeyName; // 0x74(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaBTTask_DynamicBlueprint");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaLeashComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UFortAthenaLeashComponent : public UActorComponent	
	{
	public:
		FScalableFloat LeashRadius; // 0xA0(0x28)
		FVector LeashCenter; // 0xC8(0x18)
		float LeashRadiusSqr; // 0xE0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaLeashComponent");
			return ret;
		}

		void SetLeashRadius(float NewRadius); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACFC74(relative to base address)
		void SetLeashCenter(FVector& NewCenter); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FACF948(relative to base address)
		bool IsInsideLeash(FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACE1C0(relative to base address)
		float GetLeashRadius(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD574(relative to base address)
		FVector GetLeashCenter(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD54C(relative to base address)
	};


	// Class FortniteAI.FortAthenaLocalGameplayBehavior
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AFortAthenaLocalGameplayBehavior : public AActor	
	{
	public:
		bool bNeedToAwakeDuringExecution; // 0x290(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		UFortAthenaBTTask_DynamicBlueprint* CachedTask; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaLocalGameplayBehavior");
			return ret;
		}

		void OnExecute(AActor* Activator); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAbort(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishExecute(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACC984(relative to base address)
	};


	// Class FortniteAI.FortAthenaNavArea_ShallowWater
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortAthenaNavArea_ShallowWater : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNavArea_ShallowWater");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaNavArea_Water
	// Inherited from UFortNavArea -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UFortAthenaNavArea_Water : public UFortNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNavArea_Water");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaNPCEditorLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaNPCEditorLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNPCEditorLibrary");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaNpcGalileoComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UFortAthenaNpcGalileoComponent : public UActorComponent	
	{
	public:
		AFortAthenaAIBotController* CachedBotController; // 0xA0(0x8)
		AFortPawn* PossessedPawn; // 0xA8(0x8)
		TArray<FVector> PatrolPath; // 0xB0(0x10)
		TArray<AFortAthenaAIBotController*> CommunicationGroup; // 0xC0(0x10)
		FMulticastInlineDelegate OnPatrollingStart; // 0xD0(0x10)
		FMulticastInlineDelegate OnPatrollingStop; // 0xE0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNpcGalileoComponent");
			return ret;
		}

		void SetPatrolPath(TArray<FVector>& NewPatrolPath); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FACFF64(relative to base address)
		void SetCommunicationGroup(TArray<AFortAthenaAIBotController*>& AIBotControllerList); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FACF614(relative to base address)
		void OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74FACEC54(relative to base address)
		TArray GetPatrolPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD6D0(relative to base address)
		TArray GetCommunicationGroup(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACCF88(relative to base address)
	};


	// Class FortniteAI.FortAthenaNpcPatrollingComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class UFortAthenaNpcPatrollingComponent : public UFortControllerComponent	
	{
	public:
		AAIController* CachedAIController; // 0xA8(0x8)
		AFortAthenaPatrolPath* PatrolPath; // 0xB0(0x8)
		FMulticastInlineDelegate OnPathAssigned; // 0xB8(0x10)
		FMulticastInlineDelegate OnStartPatrollingEvent; // 0xC8(0x10)
		FMulticastInlineDelegate OnStopPatrollingEvent; // 0xD8(0x10)
		FMulticastInlineDelegate OnPatrolPointReachedEvent; // 0xE8(0x10)
		unsigned char UnknownData00_7[0x60]; // 0xF8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNpcPatrollingComponent");
			return ret;
		}

		void UpdateCurrentDestinationToNearestNextPoint(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAD04DC(relative to base address)
		void SetPatrolPath(AFortAthenaPatrolPath* NewPatrolPath, bool bOrientationAlreadyRandomized); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAD0004(relative to base address)
		void SelectNextPatrolPoint(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF3C0(relative to base address)
		void RemovePatrolPath(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACF398(relative to base address)
		void OnPatrolPathStatusChanged(bool bEnableState); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74E8019A4(relative to base address)
		void K2_NewFuturePatrolPath(AFortAthenaPatrolPath* NewPatrolPath); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPatrollingEnable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACE294(relative to base address)
		bool IsCurrentPatrolPointAnEndPoint(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACE160(relative to base address)
		AFortAthenaPatrolPoint GetPreviousPatrolPoint(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD8C0(relative to base address)
		int32_t GetPatrolPointsCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD814(relative to base address)
		AFortAthenaPatrolPath GetPatrolPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7491595E0(relative to base address)
		AFortAthenaPatrolPoint GetCurrentPatrolPoint(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD084(relative to base address)
		bool FindAndSetDynamicPatrolPath(FFortAthenaAIObjectTrackerQuery& FindQuery, bool bOrientationAlreadyRandomized, bool bExcludeCurrentlyUsedPatrolPath); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FACC738(relative to base address)
	};


	// Class FortniteAI.PatrolPathRenderingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class UPatrolPathRenderingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.PatrolPathRenderingComponent");
			return ret;
		}
	};


	// Class FortniteAI.PatrolPointRenderingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class UPatrolPointRenderingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.PatrolPointRenderingComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaPatrolPoint
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AFortAthenaPatrolPoint : public AActor	
	{
	public:
		AFortAthenaLocalGameplayBehavior* LocalGameplayBehavior; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaPatrolPoint");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaTrackableAIObjectInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortAthenaTrackableAIObjectInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaTrackableAIObjectInterface");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIPerceptionStimuliSourceComponent
	// Inherited from UAIPerceptionStimuliSourceComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xC0 - 0xB8)
	class UAthenaAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent	
	{
	public:
		bool bIsConsideredAsThreateningObjectForBots; // 0xB8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIPerceptionStimuliSourceComponent");
			return ret;
		}

		void OnOwnerTeamIndexChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FACEC40(relative to base address)
	};


	// Class FortniteAI.AthenaPhysicsAIPerceptionStimuliSourceComponent
	// Inherited from UAthenaAIPerceptionStimuliSourceComponent -> UAIPerceptionStimuliSourceComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UAthenaPhysicsAIPerceptionStimuliSourceComponent : public UAthenaAIPerceptionStimuliSourceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaPhysicsAIPerceptionStimuliSourceComponent");
			return ret;
		}
	};


	// Class FortniteAI.AthenaTrapAIPerceptionStimuliSourceComponent
	// Inherited from UAIPerceptionStimuliSourceComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x110 - 0xB8)
	class UAthenaTrapAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent	
	{
	public:
		TMap<AActor*, FTrapDetectionState> TrapDiscoverabilityMap; // 0xB8(0x50)
		bool bEnablePerceptionSystemOnTrap : 1; // 0x108:0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaTrapAIPerceptionStimuliSourceComponent");
			return ret;
		}
	};


	// Class FortniteAI.FortCollisionResponseSwapperComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UFortCollisionResponseSwapperComponent : public UActorComponent	
	{
	public:
		UPrimitiveComponent* CollisionPrimitiveComponent; // 0xA0(0x8)
		UPrimitiveComponent* OverlapPrimitiveComponent; // 0xA8(0x8)
		unsigned char UnknownData00_6[0x28]; // 0xB0(0x28) UNKNOWN PROPERTY
		TArray<AFortPawn*> PawnsListenedTo; // 0xD8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
		FScalableFloat VisibilityModifiedTime; // 0xF0(0x28)
		TEnumAsByte<ECollisionResponse> NewCollisionResponse; // 0x118(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x119(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCollisionResponseSwapperComponent");
			return ret;
		}

		void UnregisterCallbacksForOverlap(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF748F9EBC8(relative to base address)
		void RestoreCollisionResponses(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FACF3AC(relative to base address)
		void RegisterCallbacksForOverlap(UPrimitiveComponent* InCollisionPrimitiveComponent, UPrimitiveComponent* InOverlapPrimitiveComponent); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF748D7CEF0(relative to base address)
		void HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FACDD60(relative to base address)
		void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74FACDAE4(relative to base address)
	};


	// Class FortniteAI.FortAthenaAIPerk_Ambush
	// Inherited from UFortAIPerkBase -> UObject
	// Size: 0x0 (0x168 - 0x168)
	class UFortAthenaAIPerk_Ambush : public UFortAIPerkBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIPerk_Ambush");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIPerk_Bunker
	// Inherited from UFortAIPerkBase -> UObject
	// Size: 0x168 (0x2D0 - 0x168)
	class UFortAthenaAIPerk_Bunker : public UFortAIPerkBase	
	{
	public:
		FScalableFloat OddsToBeUsedAgainstUnknownThreat; // 0x168(0x28)
		FScalableFloat OddsToUseRoofBuilding; // 0x190(0x28)
		FScalableFloat OddsToBuildForwardRamp; // 0x1B8(0x28)
		FScalableFloat InitialBuildDelay; // 0x1E0(0x28)
		FScalableFloat SamePieceBuildDelay; // 0x208(0x28)
		FScalableFloat SamePieceBuildDelayRandomDeviation; // 0x230(0x28)
		FScalableFloat DifferentPieceBuildDelay; // 0x258(0x28)
		FScalableFloat DifferentPieceBuildDelayRandomDeviation; // 0x280(0x28)
		FScalableFloat OddsToSelectRandomMaterial; // 0x2A8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIPerk_Bunker");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIPerk_EvasiveManeuvers
	// Inherited from UFortAIPerkBase -> UObject
	// Size: 0x2F0 (0x458 - 0x168)
	class UFortAthenaAIPerk_EvasiveManeuvers : public UFortAIPerkBase	
	{
	public:
		FEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings; // 0x168(0x258)
		FScalableFloat DistanceMin; // 0x3C0(0x28)
		FScalableFloat DistanceMax; // 0x3E8(0x28)
		FGameplayTagQuery WeaponTagQuery; // 0x410(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIPerk_EvasiveManeuvers");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIBotDebugMiniMapIndicator
	// Inherited from UFortMiniMapIndicator -> UFortIndicator -> UObject
	// Size: 0x120 (0x260 - 0x140)
	class UAthenaAIBotDebugMiniMapIndicator : public UFortMiniMapIndicator	
	{
	public:
		TArray<FBotDebugInfo> BotDebugInfoList; // 0x140(0x10)
		FSlateBrush DebugMinimapIconBrush; // 0x150(0xB0)
		unsigned char UnknownData00_7[0x60]; // 0x200(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIBotDebugMiniMapIndicator");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIBotPOIDebugMiniMapIndicator
	// Inherited from UFortMiniMapIndicator -> UFortIndicator -> UObject
	// Size: 0x48 (0x188 - 0x140)
	class UAthenaAIBotPOIDebugMiniMapIndicator : public UFortMiniMapIndicator	
	{
	public:
		TArray<FBotPOIDebugInfo> BotPOIDebugInfoList; // 0x140(0x10)
		TArray<FBotPOIExcludedZonesDebugInfo> BotPOIExcludedZonesDebugInfoList; // 0x150(0x10)
		TArray<FVector> ClusteredLootLocationsDebug; // 0x160(0x10)
		TArray<FString> ClusteredLootNamesDebug; // 0x170(0x10)
		int32_t ClusteredLootDrawDebugLevel; // 0x180(0x4)
		int32_t DynamicPOIDrawDebugLevel; // 0x184(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIBotPOIDebugMiniMapIndicator");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIPopulationTracker
	// Inherited from UAISubsystem -> UObject
	// Size: 0x1E8 (0x220 - 0x38)
	class UAthenaAIPopulationTracker : public UAISubsystem	
	{
	public:
		FMulticastInlineDelegate OnAIPawnDied; // 0x38(0x10)
		FMulticastInlineDelegate OnAIPawnDestroyed; // 0x48(0x10)
		FMulticastInlineDelegate OnAIPawnSpawned; // 0x58(0x10)
		FMulticastInlineDelegate OnClientAIPawnSpawned; // 0x68(0x10)
		unsigned char UnknownData00_6[0x60]; // 0x78(0x60) UNKNOWN PROPERTY
		TArray<AController*> AIList; // 0xD8(0x10)
		AFortGameModeAthena* CachedGameMode; // 0xE8(0x8)
		unsigned char UnknownData01_7[0x130]; // 0xF0(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIPopulationTracker");
			return ret;
		}

		void OnFortPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF74FACE7DC(relative to base address)
		void OnFortPawnDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FACE75C(relative to base address)
		void OnAISpawned(APawn* Pawn, int32_t RequestID); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FACE384(relative to base address)
		void OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn, AController* Instigator); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FACE534(relative to base address)
		void HandlePlayerStateAdded(APlayerState* PlayerState); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FACDF14(relative to base address)
		int32_t GetNumTotalBots(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACD6B4(relative to base address)
		int32_t GetNumPlayerBots(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2428(relative to base address)
		int32_t GetNumNonAthenaParticipantBots(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2458(relative to base address)
		int32_t GetNumAIPawn(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2440(relative to base address)
		FAIPopulationCountSnapshot GetAIPopulationTrackerCount(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACCB5C(relative to base address)
		TArray GetAIMatchingQuery(FGameplayTagQuery& TagQuery); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FACCA40(relative to base address)
		void EnableClientAISpawnTracking(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACC6B8(relative to base address)
	};


	// Class FortniteAI.AthenaAIService
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAthenaAIService : public UObject	
	{
	public:
		AFortGameModeAthena* CachedGameMode; // 0x28(0x8)
		AFortGameStateAthena* CachedGameState; // 0x30(0x8)
		unsigned char UnknownData00_6[0x30]; // 0x38(0x30) UNKNOWN PROPERTY
		UAthenaAIServiceManager* AIServiceManager; // 0x68(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIService");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIServiceCover
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x38 (0xB0 - 0x78)
	class UAthenaAIServiceCover : public UAthenaAIService	
	{
	public:
		UClass* CoverPositionFilterClass; // 0x78(0x8)
		unsigned char UnknownData00_6[0x28]; // 0x80(0x28) UNKNOWN PROPERTY
		UTimeSlicedExecutor* TimeSlicedExecutor; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceCover");
			return ret;
		}

		UAthenaAIServiceCover GetAthenaAIServiceCover(UObject* WorldContextObject, bool bWarnIfNull); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74FACCE20(relative to base address)
	};


	// Class FortniteAI.AthenaAIServicePlayerBots
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x1278 (0x12F0 - 0x78)
	class UAthenaAIServicePlayerBots : public UAthenaAIService	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		FAthenaAIBehaviorInjectionManager BehaviorInjectionManager; // 0x80(0xB0)
		UFortAthenaAISpawnerDataComponentList* DefaultAISpawnerDataComponentList; // 0x130(0x8)
		UFortAthenaAISpawnerDataComponent_SpawnParamsBase* DefaultAISpawnComponent; // 0x138(0x8)
		TArray<FFortServerBotInfo> DeadBots; // 0x140(0x10)
		TArray<FFortServerBotInfo> PlayerBotsRestartLeft; // 0x150(0x10)
		FVector ZiplineOctreeCenter; // 0x160(0x18)
		FScalableFloat ZiplineOctreeRadius; // 0x178(0x28)
		FScalableFloat UseZiplines; // 0x1A0(0x28)
		unsigned char UnknownData01_6[0x138]; // 0x1C8(0x138) UNKNOWN PROPERTY
		FDebugMinimapData DebugMinimapData; // 0x300(0x190)
		FName MarkPlayerBotsAggressiveStencilName; // 0x490(0x4)
		FName MarkPlayerBotsDefensiveStencilName; // 0x494(0x4)
		bool bBotHostileToHumanPlayersOnly; // 0x498(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x499(0x7) UNKNOWN PROPERTY
		FScalableFloat UseAllBattleBusPOIsSquadRatio; // 0x4A0(0x28)
		UCurveFloat* TagQueryWeightChance; // 0x4C8(0x8)
		TWeakObjectPtr<UEnvQuery*> FindLocationsAroundPOIQuery; // 0x4D0(0x20)
		TArray<FBattleBusPOI> BattleBusTagQueryPOIList; // 0x4F0(0x10)
		TArray<FBattleBusPOI> SecondaryBattleBusTagQueryPOIList; // 0x500(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x510(0x8) UNKNOWN PROPERTY
		TArray<FNavigationPOI> OnGroundTagQueryPOIList; // 0x518(0x10)
		FConstructionBuildingInfo ConstructionBuildingInfo; // 0x528(0x90)
		FScalableFloat UseCustomSupportedItemList; // 0x5B8(0x28)
		UDataTable* BotItemDataTable; // 0x5E0(0x8)
		FName AugmentsRegistryName; // 0x5E8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x5EC(0x4) UNKNOWN PROPERTY
		UDataRegistry* VisibilitySettingsRegistry; // 0x5F0(0x8)
		FGameplayTagContainer PerceivedActorTagsToAdd; // 0x5F8(0x20)
		FScalableFloat UseRegionalNameList; // 0x618(0x28)
		FScalableFloat MaxAnonymousBotCount; // 0x640(0x28)
		TWeakObjectPtr<UFortAthenaAIBotNameDataAsset*> BotNameDataAsset; // 0x668(0x20)
		FScalableFloat CosmeticVariationCount; // 0x688(0x28)
		FScalableFloat ThankBusDriverProbability; // 0x6B0(0x28)
		FScalableFloat ThankBusDriverMinTime; // 0x6D8(0x28)
		FScalableFloat ThankBusDriverMaxTime; // 0x700(0x28)
		FScalableFloat TriggerEndGameBehaviorMinTime; // 0x728(0x28)
		FScalableFloat TriggerEndGameBehaviorMaxTime; // 0x750(0x28)
		FScalableFloat ShowSeasonLevelProbability; // 0x778(0x28)
		FScalableFloat SpectateOthersOnDeath; // 0x7A0(0x28)
		FScalableFloat MaxNumberOfBotsToSpawnAroundPlayer; // 0x7C8(0x28)
		float MaxAroundBotDistanceToSearchPOIToLand; // 0x7F0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x7F4(0x4) UNKNOWN PROPERTY
		FScalableFloat BackfillEnabled; // 0x7F8(0x28)
		FScalableFloat UsePlayerCosmeticForBackfill; // 0x820(0x28)
		FScalableFloat UsePlayerInventoryForBackfill; // 0x848(0x28)
		FScalableFloat OnlyUseBackfillDuringSafezones; // 0x870(0x28)
		TWeakObjectPtr<UClass*> BackfillSpawnerData; // 0x898(0x20)
		FGameplayTagContainer SupportedItemTags; // 0x8B8(0x20)
		TArray<FCachedPOIVolumeLocations> CachedValidPOIVolumeLocations; // 0x8D8(0x10)
		TArray<ABuildingFoundation*> CachedBuildingFoundations; // 0x8E8(0x10)
		TArray<FFortBotAugmentsDataTableRow> CachedSupportedAugments; // 0x8F8(0x10)
		unsigned char UnknownData06_6[0x10]; // 0x908(0x10) UNKNOWN PROPERTY
		TScriptInterface<Class> CachedAIAimingManager; // 0x918(0x10)
		unsigned char UnknownData07_6[0x150]; // 0x928(0x150) UNKNOWN PROPERTY
		AFortPlayerStartWarmup* LastTeamPlayerStart; // 0xA78(0x8)
		unsigned char UnknownData08_6[0x8]; // 0xA80(0x8) UNKNOWN PROPERTY
		TMap<int32_t, UCacheSafeZoneLocation*> CacheSafeZoneLocationsMap; // 0xA88(0x50)
		bool bCleanupBotsRegardlessOfRemainingSquadMembers; // 0xAD8(0x1)
		unsigned char UnknownData09_6[0x3]; // 0xAD9(0x3) UNKNOWN PROPERTY
		float DeadBotCleanupMinDelay; // 0xADC(0x4)
		unsigned char UnknownData10_6[0x8]; // 0xAE0(0x8) UNKNOWN PROPERTY
		TSet<FString> ReservedPlayerNames; // 0xAE8(0x50)
		unsigned char UnknownData11_6[0x8]; // 0xB38(0x8) UNKNOWN PROPERTY
		TArray<int32_t> LocationsInSafeZoneFreeIndices; // 0xB40(0x10)
		unsigned char UnknownData12_6[0x68]; // 0xB50(0x68) UNKNOWN PROPERTY
		AFortTeamInfoAthena* CurrentFillingTeam; // 0xBB8(0x8)
		unsigned char UnknownData13_6[0x58]; // 0xBC0(0x58) UNKNOWN PROPERTY
		FScalableFloat BotsUniqueIDUseValidAccountID; // 0xC18(0x28)
		int32_t CurrentBotControllerUID; // 0xC40(0x4)
		unsigned char UnknownData14_6[0x4]; // 0xC44(0x4) UNKNOWN PROPERTY
		TArray<UFortAthenaBeaconComponent*> BeaconList; // 0xC48(0x10)
		unsigned char UnknownBit15 : 1; // 0xC58:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit16 : 1; // 0xC58:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit17 : 1; // 0xC58:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit18 : 1; // 0xC58:3(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit19 : 1; // 0xC58:4(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit20 : 1; // 0xC58:5(0x1) UNKNOWN PROPERTY
		bool bWaitForNavmeshToBeLoaded : 1; // 0xC58:6(0x1)
		bool bDoSpawnBotFlow : 1; // 0xC58:7(0x1)
		bool bDoMapSampling : 1; // 0xC59:0(0x1)
		EAthenaGamePhase GamePhaseToStartSpawning; // 0xC5A(0x1)
		unsigned char UnknownData21_6[0x5]; // 0xC5B(0x5) UNKNOWN PROPERTY
		UClass* DefaultBotAISpawnerData; // 0xC60(0x8)
		unsigned char UnknownData22_6[0x10]; // 0xC68(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<UEnvQuery*> EQSMapSampling; // 0xC78(0x20)
		unsigned char UnknownData23_6[0x30]; // 0xC98(0x30) UNKNOWN PROPERTY
		FScalableFloat CanReviveDownedSquad; // 0xCC8(0x28)
		UAthenaAIPopulationTracker* CachedAIPopulationTracker; // 0xCF0(0x8)
		TArray<FFortServerBotInfo> PlayerBots; // 0xCF8(0x10)
		TArray<FFortServerBotInfo> NonAthenaParticipantBots; // 0xD08(0x10)
		unsigned char UnknownData24_6[0x88]; // 0xD18(0x88) UNKNOWN PROPERTY
		TWeakObjectPtr<UDataTable*> MMRSpawnTable; // 0xDA0(0x20)
		TArray<TWeakObjectPtr> MMRSpawnTableOverrides; // 0xDC0(0x10)
		FMMRSpawningPlayerBotsRuntimeInfo CachedMMRSpawningInfo; // 0xDD0(0x38)
		unsigned char UnknownData25_6[0x20]; // 0xE08(0x20) UNKNOWN PROPERTY
		FScalableFloat OverridePOISpreadingSquadCount; // 0xE28(0x28)
		unsigned char UnknownData26_6[0x68]; // 0xE50(0x68) UNKNOWN PROPERTY
		FScalableFloat OnlyPickPOIsInSafeZone; // 0xEB8(0x28)
		FVector KillVolumeOverlapCheckHalfExtent; // 0xEE0(0x18)
		FScalableFloat DynamicBotPOIEnabled; // 0xEF8(0x28)
		TWeakObjectPtr<UEnvQuery*> BotPOIEQS; // 0xF20(0x20)
		FScalableFloat BotPOIMinimumWeightForSquadMembers; // 0xF40(0x28)
		FScalableFloat BotPOINextPOIDurationSecondByWeight; // 0xF68(0x28)
		FScalableFloat BotPOINextPOIMinDuration; // 0xF90(0x28)
		FScalableFloat BotPOINextPOIMaxDuration; // 0xFB8(0x28)
		UDataRegistry* BotPOIExcludedZonesDataRegistry; // 0xFE0(0x8)
		FGameplayTagContainer DynamicPOIPointProviderTags; // 0xFE8(0x20)
		FScalableFloat JumpOffBusWithDynamicPOIEnabled; // 0x1008(0x28)
		FScalableFloat BotPOIJumpMainPOICountMax; // 0x1030(0x28)
		FScalableFloat BotPOISquadJumpOnMainPOICountMax; // 0x1058(0x28)
		FScalableFloat DenyJumpBusBotPOIByProximityEnabled; // 0x1080(0x28)
		FScalableFloat DenyJumpBusBotPOIDistance; // 0x10A8(0x28)
		FScalableFloat NavigationWithDynamicPOIEnabled; // 0x10D0(0x28)
		FScalableFloat FailToReachBotPOICountMax; // 0x10F8(0x28)
		FScalableFloat BotPOIScoringWeightFactor; // 0x1120(0x28)
		FScalableFloat BotPOIScoringDistanceFactor; // 0x1148(0x28)
		FScalableFloat BotPOIScoringOccupancyFactor; // 0x1170(0x28)
		FScalableFloat BotPOIScoringVisitedFactor; // 0x1198(0x28)
		FScalableFloat ChanceToUseNextSafeZone; // 0x11C0(0x28)
		int32_t BotPOIIdCount; // 0x11E8(0x4)
		int32_t BotPOISquadJumpedOnMainPOICount; // 0x11EC(0x4)
		TArray<int32_t> StartupPOIPendingEQSRequestIDList; // 0x11F0(0x10)
		TArray<FBotPOI> BotPOIList; // 0x1200(0x10)
		TArray<FBotPOI> CachedMainJumpBotPOIList; // 0x1210(0x10)
		TArray<FBotPOI> CachedSecondaryJumpBotPOIList; // 0x1220(0x10)
		TArray<FBotPOIExcludedZone> CachedBotPOIExcludedZonesList; // 0x1230(0x10)
		bool bIsBotPOIJumpListSplit; // 0x1240(0x1)
		bool bIsExcludedZoneGenerated; // 0x1241(0x1)
		unsigned char UnknownData27_6[0x6]; // 0x1242(0x6) UNKNOWN PROPERTY
		AFortAIBotPOIDebugActor* BotPOIDebugDebugActor; // 0x1248(0x8)
		bool bCheatBotPOIDebugMiniMapEnabled; // 0x1250(0x1)
		unsigned char UnknownData28_6[0x7]; // 0x1251(0x7) UNKNOWN PROPERTY
		AFortAIBotDebugActor* BotDebugDebugActor; // 0x1258(0x8)
		bool bCheatBotDebugMiniMapEnabled; // 0x1260(0x1)
		unsigned char UnknownData29_6[0x7]; // 0x1261(0x7) UNKNOWN PROPERTY
		UFortGameStateComponent_BattleRoyaleGamePhaseLogic* CachedGamePhaseLogic; // 0x1268(0x8)
		unsigned char UnknownData30_6[0x58]; // 0x1270(0x58) UNKNOWN PROPERTY
		UDataRegistry* WeaponModRegistry; // 0x12C8(0x8)
		TArray<FFortAIWeaponModDataTableRow> WeaponModSettings; // 0x12D0(0x10)
		UTimeSlicedExecutor* TimeSlicedExecutor; // 0x12E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServicePlayerBots");
			return ret;
		}

		APawn SpawnAI(FVector& InSpawnLocation, FRotator& InSpawnRotation, UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FAF9CA0(relative to base address)
		void OnServerGameMemberRemoved(char InSquadId, char InTeamIndex, AFortPlayerStateAthena* ChangedPS); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FAF93A0(relative to base address)
		void OnSafeZoneUpdated(FFortSafeZonePhaseUpdatedEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74FAF9310(relative to base address)
		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74FAF91E0(relative to base address)
		void OnGamePhaseLogicReady(FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event); // Flags: RequiredAPI|Native|Protected|HasOutParms, Memory Exec: 0x7FF74FAF9088(relative to base address)
		void OnGamePhaseChanged(FFortGamePhaseUpdatedEvent& Event); // Flags: RequiredAPI|Native|Protected|HasOutParms, Memory Exec: 0x7FF74FAF8FF8(relative to base address)
		void OnAIPawnSpawned(AController* SpawnedController, bool bIsABot, AFortPawn* FortAIPawn, AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FAF89EC(relative to base address)
		void OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn, AController* Instigator); // Flags: RequiredAPI|Native|Protected, Memory Exec: 0x7FF74FAF8CCC(relative to base address)
		void KillBots(bool bKillPlayers, bool bKillNPCs, char TeamIndex, AActor* BotOwner); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF889C(relative to base address)
		void JoinTeam(AController* SourceTeamController, AController* DestinationTeamController); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF85F0(relative to base address)
		bool IsWeaponSupported(AFortWeapon* FortWeapon); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF84C8(relative to base address)
		int32_t FetchNextCustomBotCosmeticVariantID(AFortPlayerPawnAthena* BotPawn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF8128(relative to base address)
		void AddPOIVolume(AFortPoiVolume* POIVolume, TEnumAsByte<EAthenaAIServicePOIList> POIList); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74FAF7AA0(relative to base address)
	};


	// Class FortniteAI.AthenaAIServiceCreativePlayerBots
	// Inherited from UAthenaAIServicePlayerBots -> UAthenaAIService -> UObject
	// Size: 0x88 (0x1370 - 0x12E8)
	class UAthenaAIServiceCreativePlayerBots : public UAthenaAIServicePlayerBots	
	{
	public:
		FMulticastInlineDelegate OnMinigameBotsReady; // 0x12E8(0x10)
		TWeakObjectPtr<AFortMinigame*> CachedMinigame; // 0x12F8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x1300(0x8) UNKNOWN PROPERTY
		TMap<AActor*, APlayerController*> HiringHistory; // 0x1308(0x50)
		unsigned char UnknownData01_7[0x18]; // 0x1358(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceCreativePlayerBots");
			return ret;
		}

		void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState); // Flags: RequiredAPI|Native|Public, Memory Exec: 0x7FF74FAF9118(relative to base address)
		void OnFinishedAddingMinigamePlayer(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FAF8DC8(relative to base address)
		bool IsMinigameBotSpawningRequired(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAF84A0(relative to base address)
		APlayerController GetLastHiringPlayer(AActor* HiredOwner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAF81D8(relative to base address)
		void ClearHiringHistory(AActor* HiredOwner); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF8080(relative to base address)
		void AddHiringHistory(AActor* HiredOwner, APlayerController* HiringPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF79DC(relative to base address)
	};


	// Class FortniteAI.AthenaAIServiceGroup
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UAthenaAIServiceGroup : public UAthenaAIService	
	{
	public:
		int32_t GroupIndexCount; // 0x78(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		TArray<FAthenaAIServiceGroupInfo> GroupList; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceGroup");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIServiceLoot
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x558 (0x5D0 - 0x78)
	class UAthenaAIServiceLoot : public UAthenaAIService	
	{
	public:
		FVector LootOctreeCenter; // 0x78(0x18)
		FScalableFloat LootOctreeRadius; // 0x90(0x28)
		FScalableFloat SupplyDropStatusUpdateRate; // 0xB8(0x28)
		FScalableFloat RemoveInvalidChestFromOctreeProbability; // 0xE0(0x28)
		FScalableFloat MovingLootTrackingEnabled; // 0x108(0x28)
		FScalableFloat MovingLootUpdateRate; // 0x130(0x28)
		FScalableFloat MovingLootOctreeUpdateDistanceThreshold; // 0x158(0x28)
		TArray<UClass*> HarvestableActorClassList; // 0x180(0x10)
		FScalableFloat LootClusteringEnabled; // 0x190(0x28)
		FScalableFloat LootClusteringNeighborDistanceMax; // 0x1B8(0x28)
		FScalableFloat LootClusteringNeighborhoodCountMin; // 0x1E0(0x28)
		UDataRegistry* LootClusteringItemWeightDataRegistry; // 0x208(0x8)
		FScalableFloat LootClusteringDefaultWeight; // 0x210(0x28)
		FScalableFloat LootClusteringExpandByBoxX; // 0x238(0x28)
		FScalableFloat LootClusteringExpandByBoxY; // 0x260(0x28)
		FScalableFloat LootClusteringExpandByBoxZ; // 0x288(0x28)
		unsigned char UnknownData00_6[0x210]; // 0x2B0(0x210) UNKNOWN PROPERTY
		TMap<TWeakObjectPtr, FMovingLootInfo> MovingLoots; // 0x4C0(0x50)
		unsigned char UnknownData01_6[0x8]; // 0x510(0x8) UNKNOWN PROPERTY
		TArray<FCachedSupplyDrop> CachedSupplyDrops; // 0x518(0x10)
		UFortWorldItem* CachedWorldItem; // 0x528(0x8)
		UDataTable* BotBuildingContainerExcludeListDataTable; // 0x530(0x8)
		EAthenaGamePhaseStep LootClusterCalculationGamePhase; // 0x538(0x1)
		unsigned char UnknownData02_6[0x5F]; // 0x539(0x5F) UNKNOWN PROPERTY
		TArray<FFortBotClusterLootWeightDataTableRow> CachedLootClusteringItemWeightTable; // 0x598(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x5A8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceLoot");
			return ret;
		}

		void UpdateSupplyDropStatus(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FAFA0A4(relative to base address)
		void UpdateMovingLoots(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FAFA090(relative to base address)
		void K2_RemoveGameplayTagFromLoot(AActor* LootActor, FGameplayTag& GameplayTag); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FAF87CC(relative to base address)
		void K2_AddGameplayTagToLoot(AActor* LootActor, FGameplayTag& GameplayTag); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74FAF86FC(relative to base address)
	};


	// Class FortniteAI.AthenaAIServiceManager
	// Inherited from UAISubsystem -> UObject
	// Size: 0x48 (0x80 - 0x38)
	class UAthenaAIServiceManager : public UAISubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x38(0x18) UNKNOWN PROPERTY
		TArray<UAthenaAIService*> AIServices; // 0x50(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceManager");
			return ret;
		}
	};


	// Class FortniteAI.CacheSafeZoneLocation
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UCacheSafeZoneLocation : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.CacheSafeZoneLocation");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIServiceVehicle
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x50 (0xC8 - 0x78)
	class UAthenaAIServiceVehicle : public UAthenaAIService	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x78(0x48) UNKNOWN PROPERTY
		float TimeToRefreshTree; // 0xC0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceVehicle");
			return ret;
		}
	};


	// Class FortniteAI.AthenaAIServiceZoneManager
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x10 (0x88 - 0x78)
	class UAthenaAIServiceZoneManager : public UAthenaAIService	
	{
	public:
		TArray<FAthenaAITrackedZone> TrackedZones; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceZoneManager");
			return ret;
		}

		void UnregisterOccluder(AActor* OccluderActor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF9F3C(relative to base address)
		void UnregisterDangerZone(AActor* Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF9DEC(relative to base address)
		void RegisterOccluder(AActor* OccluderActor, float SphereRadius); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF97F8(relative to base address)
		void RegisterDangerZone(AActor* Actor, float Radius); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF9628(relative to base address)
		void OnZoneDestroyed(AActor* Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74FAF9498(relative to base address)
		bool IsLOFOccluded(FVector& StartLocation, FVector& EndLocation); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAF833C(relative to base address)
		bool IsInDangerZone(FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAF8268(relative to base address)
		UAthenaAIServiceZoneManager GetAthenaAIServiceZoneManager(UObject* WorldContextObject, bool bWarnIfNull); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748DBB2B0(relative to base address)
	};


	// Class FortniteAI.AthenaAISpawner
	// Inherited from UAISubsystem -> UObject
	// Size: 0xD0 (0x108 - 0x38)
	class UAthenaAISpawner : public UAISubsystem	
	{
	public:
		FMulticastInlineDelegate OnPawnPreFinishSpawningEvent; // 0x38(0x10)
		FMulticastInlineDelegate OnPawnSpawnedEvent; // 0x48(0x10)
		unsigned char UnknownData00_7[0xB0]; // 0x58(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAISpawner");
			return ret;
		}

		int32_t RequestSpawn(UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, FTransform& SpawnTransform, bool bUrgentRequest); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74FAF99C8(relative to base address)
		void QueueForDespawn(AActor* ActorToDespawn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF95A8(relative to base address)
		bool CancelRequest(int32_t RequestID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAF7FF4(relative to base address)
	};


	// Class FortniteAI.AthenaAIVehicleAvoidanceManager
	// Inherited from UAISubsystem -> UObject
	// Size: 0x50 (0x88 - 0x38)
	class UAthenaAIVehicleAvoidanceManager : public UAISubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x4C]; // 0x38(0x4C) UNKNOWN PROPERTY
		float TimeToRefreshTree; // 0x84(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIVehicleAvoidanceManager");
			return ret;
		}
	};


	// Class FortniteAI.FortPlayerStateComponent_ClientAITracker
	// Inherited from UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortPlayerStateComponent_ClientAITracker : public UFortPlayerStateComponent	
	{
	public:
		UAthenaAIPopulationTracker* AIPopTracker; // 0xA0(0x8)
		bool bEnableReplication; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPlayerStateComponent_ClientAITracker");
			return ret;
		}

		void ServerOnAISpawned(AFortPawn* NewAI, APlayerController* LocalPC); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF74FAF9BB4(relative to base address)
	};


	// Class FortniteAI.DespawnExpiredPawnComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UDespawnExpiredPawnComponent : public UFortPawnComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.DespawnExpiredPawnComponent");
			return ret;
		}

		TArray GetDespawnRifts(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAFA9D0(relative to base address)
		void DespawnExpired(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
		void AddDespawnRift(ABuildingRift* NewRift); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FAFA8E4(relative to base address)
	};

}
