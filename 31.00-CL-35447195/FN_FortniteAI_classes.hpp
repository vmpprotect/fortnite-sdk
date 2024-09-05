#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortniteAI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortniteAI.FortAITask_Move
	// Inherited from UAITask_MoveTo -> UAITask -> UGameplayTask -> UObject
	// Size: 0x48 (0x160 - 0x118)
	class UFortAITask_Move : public UAITask_MoveTo	
	{
	public:
		FFortMoveConfig MoveConfig; // 0x118(0x38)
		unsigned char UnknownData01_7[0x10]; // 0x150(0x10) UNKNOWN PROPERTY

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
		AActor FocusTarget; // 0x68(0x8)
		FVector FocalPoint; // 0x70(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_5[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		float ExtrapolationMultiplierForFailsafeExtent; // 0x1A4(0x4)
		TArray DisableForNavmeshClasses; // 0x1A8(0x10)
		UPrimitiveComponent PrimCompAffectingNavMesh; // 0x1B8(0x8)
		unsigned char UnknownData03_7[0x70]; // 0x1C0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavModifierComponent");
			return ret;
		}

		void SetComponentAffectingNavMesh(UPrimitiveComponent InComponentAffectingNavMesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41497F318
	};


	// Class FortniteAI.FortPhysicsObjectNavigationComponent
	// Inherited from UFortNavModifierComponent -> UNavModifierComponent -> UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x240 - 0x230)
	class UFortPhysicsObjectNavigationComponent : public UFortNavModifierComponent	
	{
	public:
		UFortPhysicsObjectComponent PhysicsObjectComponent; // 0x230(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x238(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPhysicsObjectNavigationComponent");
			return ret;
		}

		void OnSleepStateChanged(UPrimitiveComponent SimulatingComponent, bool bIsAwake); // Flags: RequiredAPI|Native|Protected 0x7FF41497F3F8
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

		void GetAimingRotation(FRotator& OutRotation); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414996A78
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

		void ComputeAimingRotations(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414996B58
	};


	// Class FortniteAI.FortAISmartObjectUserComponent
	// Inherited from UFortSmartObjectUserComponent -> USmartObjectUserComponent -> UActorComponent -> UObject
	// Size: 0x1C8 (0x2E8 - 0x120)
	class UFortAISmartObjectUserComponent : public UFortSmartObjectUserComponent	
	{
	public:
		float BaseRunningEvaluationTickInterval; // 0x120(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		UDataTable AnimConfigTable; // 0x128(0x8)
		bool bLoadingAnimConfigAssets; // 0x130(0x1)
		unsigned char UnknownData07_6[0x17]; // 0x131(0x17) UNKNOWN PROPERTY
		FFortAISmartObjectEvaluationRequestInternalData RunningQueryInternalData; // 0x148(0xC0)
		TMap ResultsPerEvaluationTag; // 0x208(0x50)
		TArray SmartObjectsBannedList; // 0x258(0x10)
		float GlobalDelayToDisableSmartObjectUsage; // 0x268(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x26C(0x4) UNKNOWN PROPERTY
		TArray SmartObjectsMostRecentlyUsed; // 0x270(0x10)
		TArray SmartObjectActivities; // 0x280(0x10)
		int32_t ActivitiesIDCount; // 0x290(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		AAIController CachedController; // 0x298(0x8)
		AFortPawn CachedPawn; // 0x2A0(0x8)
		FFortAIActiveCommandSOUsageData ActiveCommandSOUsageData; // 0x2A8(0x10)
		unsigned char UnknownData10_6[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr RunningSmartObjectComponent; // 0x2C0(0x8)
		unsigned char UnknownData11_6[0x10]; // 0x2C8(0x10) UNKNOWN PROPERTY
		TScriptInterface CachedLODSettingsManager; // 0x2D8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISmartObjectUserComponent");
			return ret;
		}

		UContextualAnimSceneAsset FindSmartObjectAnimSceneByTag(FGameplayTagContainer& Tags, AActor SmartObjectActor); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414996DF8
		UAnimMontage FindSmartObjectAnimMontageByTag(FGameplayTagContainer& Tags, AActor SmartObjectActor); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414996D18
		bool CommandAIToUseSO(FFortAICommandSOUsageData& CommandSOUsageData); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414996C38
	};


	// Class FortniteAI.FortAIBotSmartObjectUserComponent
	// Inherited from UFortAISmartObjectUserComponent -> UFortSmartObjectUserComponent -> USmartObjectUserComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x340 - 0x2E8)
	class UFortAIBotSmartObjectUserComponent : public UFortAISmartObjectUserComponent	
	{
	public:
		AFortAthenaAIBotController CachedBotController; // 0x2E8(0x8)
		UFortAthenaAIRuntimeParameters_AIBotConvert CachedAIBotConvertParameters; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x2F8(0x48) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery IgnoreVisibilityCollisionTagQuery; // 0xA8(0x48)
		double TileProcessingStartDelay; // 0xF0(0x8)
		double CoverPositionUpdateCooldown; // 0xF8(0x8)
		double CoverPositionUpdateTileDelay; // 0x100(0x8)
		FMulticastInlineDelegate CoverPositionsUpdatedDelegate; // 0x108(0x10)
		unsigned char UnknownData03_7[0xB8]; // 0x118(0xB8) UNKNOWN PROPERTY

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

		FBox GetDangerSourceBounds(); // Flags: Native|Event|Public|HasDefaults|BlueprintEvent|Const 0x7FF414997098
		bool GetDangerSourceActive(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414996FB8
		float GetDangerAtLocation(FVector& Location); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 0x7FF414996ED8
	};


	// Class FortniteAI.FortAIInjectedBehaviorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UFortAIInjectedBehaviorComponent : public UActorComponent	
	{
	public:
		TMap InjectorsRuntimeData; // 0xA0(0x50)
		TArray InstanceInjectedBehaviors; // 0xF0(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x100(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIInjectedBehaviorComponent");
			return ret;
		}

		void RemoveInjectedBehavior(FFortInstancedInjectedBehavior& InjectedBehavior); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414997258
		void AddInjectedBehavior(FFortInstancedInjectedBehavior& InjectedBehavior); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414997178
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
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

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
		UWorld World; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAsyncAction_IsInitialNavSystemBuildLockCompleted");
			return ret;
		}

		void InitialNavSystemBuildLockCompleted__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF413ABDE50
		UFortAsyncAction_IsInitialNavSystemBuildLockCompleted InitialNavSystemBuildLockCompleted(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF413A9DD70
		void HandleInitialNavigationLockReleased(); // Flags: Final|Native|Protected 0x7FF413A9DC90
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
		TArray Items; // 0x28(0x10)

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
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray SystemClasses; // 0x30(0x10)
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
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray SystemClasses; // 0x30(0x10)
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
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray SystemClasses; // 0x30(0x10)
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
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray SystemClasses; // 0x30(0x10)
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
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

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

		bool GetConstructionBuildingInfo(FConstructionBuildingList& OutConstructionInfoList); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414997338
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

		UBehaviorTree GetBehaviorTree(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414997418
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_Behavior
	// Inherited from UFortAthenaAISpawnerDataComponent_BehaviorBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortAthenaAISpawnerDataComponent_Behavior : public UFortAthenaAISpawnerDataComponent_BehaviorBase	
	{
	public:
		UBehaviorTree BehaviorTree; // 0x30(0x8)

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

		FClientAILODSettings GetClientAILODSettings(); // Flags: RequiredAPI|Native|Event|Public|BlueprintEvent|Const 0x7FF4149975D8
		UFortAthenaAILODSettingsContainer GetAILODSettingsContainer(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF4149974F8
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_LOD
	// Inherited from UFortAthenaAISpawnerDataComponent_LODBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x2F8 (0x328 - 0x30)
	class UFortAthenaAISpawnerDataComponent_LOD : public UFortAthenaAISpawnerDataComponent_LODBase	
	{
	public:
		UClass LODSettings; // 0x30(0x8)
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
		TArray ClassComponentList; // 0x48(0x10)
		UClass InventoryComponent; // 0x58(0x8)
		UClass SpawnParamsComponent; // 0x60(0x8)
		UClass BehaviorComponent; // 0x68(0x8)
		UClass AffiliationComponent; // 0x70(0x8)
		UClass LODComponent; // 0x78(0x8)
		UClass DebugComponent; // 0x80(0x8)
		UClass AnalyticComponent; // 0x88(0x8)
		UClass GameplayComponent; // 0x90(0x8)
		UClass ConversationComponent; // 0x98(0x8)
		UClass VoiceComponent; // 0xA0(0x8)
		UClass CosmeticComponent; // 0xA8(0x8)
		UClass ChanceEncounterComponent; // 0xB0(0x8)
		UClass OptimizationComponent; // 0xB8(0x8)
		UClass GameplayAbilityComponent; // 0xC0(0x8)
		UClass PerceptionComponent; // 0xC8(0x8)
		UClass SmartObjectComponent; // 0xD0(0x8)
		UClass GroupComponent; // 0xD8(0x8)
		UClass ScriptComponent; // 0xE0(0x8)
		UClass TokenComponent; // 0xE8(0x8)
		UClass AnimationComponent; // 0xF0(0x8)
		FScalableFloat SpawnIntervalOverride; // 0xF8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerData");
			return ret;
		}

		UFortAthenaAISpawnerDataComponent_VoiceBase GetVoiceComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998918
		UFortAthenaAISpawnerDataComponent_TokenBase GetTokenComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998838
		UFortAthenaAISpawnerDataComponent_SpawnParamsBase GetSpawnParamsComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998758
		UFortAthenaAISpawnerDataComponent_SmartObjectBaseClass GetSmartObjectComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998678
		UFortAthenaAISpawnerDataComponent_ScriptBase GetScriptComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998598
		UFortAthenaAISpawnerDataComponent_PerceptionBase GetPerceptionComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149984B8
		UFortAthenaAISpawnerDataComponent_OptimBase GetOptimizationComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149983D8
		UFortAthenaAISpawnerDataComponent_InventoryBase GetInventoryComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149982F8
		UFortAthenaAISpawnerDataComponent_GroupBase GetGroupComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998218
		UFortAthenaAISpawnerDataComponent_GameplayBase GetGameplayComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998138
		UFortAthenaAISpawnerDataComponent_GameplayAbilityBase GetGameplayAbilityComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998058
		UFortAthenaAISpawnerDataComponent_DebugBase GetDebugComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997F78
		UFortAthenaAISpawnerDataComponent_CosmeticBase GetCosmeticComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997E98
		UFortAthenaAISpawnerDataComponent_ConversationBase GetConversationComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997DB8
		UFortAthenaAISpawnerDataComponent_ChanceEncounterBase GetChanceEncounterComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997CD8
		UFortAthenaAISpawnerDataComponent_BehaviorBase GetBehaviorComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997BF8
		UFortAthenaAISpawnerDataComponent_AnimationBase GetAnimationComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997B18
		UFortAthenaAISpawnerDataComponent_AnalyticBase GetAnalyticComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997A38
		UFortAthenaAISpawnerDataComponent_LODBase GetAILODComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997958
		UFortAthenaAISpawnerDataComponent_AffiliationBase GetAffiliationComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414997878
		UFortAthenaAISpawnerDataComponentList CreateComponentListFromClass(UClass AISpawnerDataClass, UObject OuterObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414997798
		UFortAthenaAISpawnerDataComponentList CreateComponentList(UObject OuterObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149976B8
	};


	// Class FortniteAI.FortAthenaAIBotSpawnerData
	// Inherited from UFortAthenaAISpawnerData -> UFortAthenaSpawnerDataBase -> UObject
	// Size: 0x28 (0x148 - 0x120)
	class UFortAthenaAIBotSpawnerData : public UFortAthenaAISpawnerData	
	{
	public:
		UClass SkillSetComponent; // 0x120(0x8)
		UClass ConstructionComponent; // 0x128(0x8)
		UClass VehicleComponent; // 0x130(0x8)
		UClass CoverComponent; // 0x138(0x8)
		UClass PerksComponent; // 0x140(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotSpawnerData");
			return ret;
		}

		UFortAthenaAISpawnerDataComponent_VehicleBase GetVehicleComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998D78
		UFortAthenaAISpawnerDataComponent_SkillsetBase GetSkillSetComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998C98
		UFortAthenaAISpawnerDataComponent_PerksBase GetPerksComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998BB8
		UFortAthenaAISpawnerDataComponent_CoverBase GetCoverComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414998AD8
		UFortAthenaAISpawnerDataComponent_ConstructionBase GetConstructionComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149989F8
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
		TEnumAsByte NamingMode; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FText OverrideName; // 0x30(0x10)
		bool bAddPlayerIDSuffix; // 0x40(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

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
		UClass CustomNavLinkProcessor; // 0x28(0x8)

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
		UClass AIEvaluator; // 0x28(0x8)
		UClass AIService; // 0x30(0x8)
		FStateTreeReference DecisionStateTree; // 0x38(0x28)
		float Interval; // 0x60(0x4)
		float RandomDeviation; // 0x64(0x4)
		UBehaviorTree InjectedBehaviorTree; // 0x68(0x8)
		FStateTreeReference ActionStateTree; // 0x70(0x28)
		float ActionInterval; // 0x98(0x4)
		float ActionRandomDeviation; // 0x9C(0x4)
		FFortBlackboardParameterManager BlackboardParameterManager; // 0xA0(0x68)
		uint32_t Priority; // 0x108(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY

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
		TArray AgentData; // 0x48(0x10)

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
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

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
		UMovieSceneSequencePlayer BoundSceneSequencePlayer; // 0xA8(0x8)
		FMovieSceneObjectBindingID BoundSceneSequenceBindingID; // 0xB0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AISequencer");
			return ret;
		}

		void OnPawnDestroyed(); // Flags: Final|Native|Public 0x7FF4149991D8
		void BoundSequenceOnStopped(); // Flags: Final|Native|Private 0x7FF4149990F8
		void BoundSequenceOnPlay(); // Flags: Final|Native|Private 0x7FF414999018
		void BoundSequenceOnPause(); // Flags: Final|Native|Private 0x7FF414998F38
		void BoundSequenceOnFinished(); // Flags: Final|Native|Private 0x7FF414998E58
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
		TArray SpawnPointsPercentageCurves; // 0x30(0x10)
		TEnumAsByte SequenceType; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData04_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TArray UserSlots; // 0x298(0x10)
		UAIHotSpotSlotGenerator SlotGenerator; // 0x2A8(0x8)
		TArray Slots; // 0x2B0(0x10)
		AActor FocusActor; // 0x2C0(0x8)
		UClass FilterClass; // 0x2C8(0x8)
		FVector CustomNavmeshSearchExtent; // 0x2D0(0x18)
		bool bStartEnabled : 1; // 0x2E8:0(0x1)
		bool bAllowSlotlessAssignment : 1; // 0x2E8:1(0x1)
		bool bAllowClaimingMultipleSlots : 1; // 0x2E8:2(0x1)
		bool bTrackOverlappingSlots : 1; // 0x2E8:3(0x1)
		bool bProjectSlotsOnNavmesh : 1; // 0x2E8:4(0x1)
		bool bCustomNavmeshSearchExtent : 1; // 0x2E8:5(0x1)
		bool bIsEnabled : 1; // 0x2E8:6(0x1)
		unsigned char UnknownData05_5[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		TArray NoSlotAssignees; // 0x2F0(0x10)
		unsigned char UnknownData06_6[0x128]; // 0x300(0x128) UNKNOWN PROPERTY
		UPrimitiveComponent RenderingComponent; // 0x428(0x8)
		UBillboardComponent SpriteComponent; // 0x430(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x438(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpot");
			return ret;
		}

		void SetEnabled(bool bEnabled); // Flags: Native|Public|BlueprintCallable 0x7FF41499B698
		int32_t RemoveGroupFromHotspot(TArray GroupOfAI); // Flags: Native|Public|BlueprintCallable 0x7FF41499B5B8
		bool RemoveFromHotspot(AAIController AI, bool bAssignFromWaitingList); // Flags: Native|Public|BlueprintCallable 0x7FF41499B4D8
		void OnSlotOccupied(AAIController AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499B3F8
		void OnSlotFreed(AAIController AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499B318
		void OnSlotEnabled(int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499B238
		void OnSlotDisabled(int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499B158
		void OnSlotClaimed(AAIController AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499B078
		void OnSlotBlocked(AAIController AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499AF98
		void OnRemovedSlotlessBehavior(AAIController AI, bool bIsClamingSlot); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499AEB8
		void OnRemovedBehavior(AAIController AI, int32_t Index, int32_t UserId, EAIHotSpotSlot PrevState, bool bWasOnWaitingList); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499ADD8
		void OnMoveToSlotFinished(AAIController AI, int32_t Index, int32_t UserId, bool bResult); // Flags: BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent 0x7FF41499ACF8
		void OnHotSpotEnabled(); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499AC18
		void OnHotSpotDisabled(); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499AB38
		bool OnAssignedSlotlessBehavior(AAIController AI); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499AA58
		bool OnAssignedOccupiedBehavior(AAIController AI, int32_t Index, int32_t UserId); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499A978
		bool OnAssignedClaimedBehavior(AAIController AI, int32_t Index, int32_t UserId, bool bWasOnWaitingList); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent 0x7FF41499A898
		bool OccupySlotByIndex(int32_t Index); // Flags: Native|Public|BlueprintCallable 0x7FF41499A7B8
		bool IsSlotlessAssignmentAllowed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499A6D8
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499A5F8
		bool IsAIAllowed(AAIController AI); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const 0x7FF41499A518
		bool HasEnabledSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499A438
		bool HasAssignedAI(AAIController AI, EAIHotSpotAssignmentFilter Filter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499A358
		int32_t GetSlotUserIdByIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499A278
		EAIHotSpotSlot GetSlotStateByOwner(AAIController AIOwner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499A198
		EAIHotSpotSlot GetSlotStateByIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499A0B8
		FRotator GetSlotRotationByIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414999FD8
		AAIController GetSlotOwnerByIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414999EF8
		FVector GetSlotLocationByIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414999E18
		int32_t GetSlotIndexByOwner(AAIController AIOwner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414999D38
		int32_t GetSlotCount(EAIHotSpotSlotFilter Filter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414999C58
		UAIHotSpotSlot GetSlotByOwner(AAIController AIOwner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414999B78
		UAIHotSpotSlot GetSlotByIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414999A98
		int32_t GetAssignedAICount(EAIHotSpotAssignmentFilter Filter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149999B8
		TArray GetAssignedAI(EAIHotSpotAssignmentFilter Filter); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149998D8
		TArray FindBestSlotIndices(TArray AI); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149997F8
		int32_t FindBestSlotIndex(AAIController AI); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414999718
		bool CanUseSlotByIndex(AAIController AI, int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414999638
		bool AssignToSlotByIndex(AAIController AI, int32_t Index); // Flags: Native|Public|BlueprintCallable 0x7FF414999558
		bool AssignToHotspot(AAIController AI); // Flags: Native|Public|BlueprintCallable 0x7FF414999478
		int32_t AssignGroupToHotspot(TArray GroupOfAI); // Flags: Native|Public|BlueprintCallable 0x7FF414999398
		void AssignFromWaitingList(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149992B8
	};


	// Class FortniteAI.AIHotSpotManagerProxy
	// Inherited from UAIHotSpotManager -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UAIHotSpotManagerProxy : public UAIHotSpotManager	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData04_5[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		AAIController Owner; // 0xA8(0x8)
		int32_t SlotIndex; // 0xB0(0x4)
		EAIHotSpotSlot SlotState; // 0xB4(0x1)
		unsigned char UnknownData05_7[0x6B]; // 0xB5(0x6B) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIHotSpotSlot");
			return ret;
		}

		void SetSlotState(EAIHotSpotSlot NewState); // Flags: Native|Public|BlueprintCallable 0x7FF41499C658
		void SetSlotOwnerAndState(AAIController NewOwner, EAIHotSpotSlot NewState); // Flags: Native|Public|BlueprintCallable 0x7FF41499C578
		void SetSlotEnabled(bool bNewEnabled); // Flags: Native|Public|BlueprintCallable 0x7FF41499C498
		void OnStateChanged(AAIController SlotOwner, EAIHotSpotSlot NewState); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF41499C3B8
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499C2D8
		bool IsAIAllowed(AAIController AI); // Flags: BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const 0x7FF41499C1F8
		bool HasUserId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499C118
		int32_t GetSlotUserId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499C038
		EAIHotSpotSlot GetSlotState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499BF58
		FRotator GetSlotRotation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41499BE78
		float GetSlotRadius(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499BD98
		AAIController GetSlotOwner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499BCB8
		FVector GetSlotLocation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41499BBD8
		int32_t GetSlotIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499BAF8
		float GetSlotHeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499BA18
		FBox GetSlotBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41499B938
		AAIHotSpot GetHotSpot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499B858
		void ClearSlot(); // Flags: Native|Public|BlueprintCallable 0x7FF41499B778
	};


	// Class FortniteAI.AthenaAIBudgetManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x248 (0x278 - 0x30)
	class UAthenaAIBudgetManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x30(0x30) UNKNOWN PROPERTY
		TMap StaticallyRegisteredPawns; // 0x60(0x50)
		unsigned char UnknownData03_7[0x1C8]; // 0xB0(0x1C8) UNKNOWN PROPERTY

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
		unsigned char UnknownData17_3[0x28]; // 0x3B8(0x28) UNKNOWN PROPERTY
		bool bUsingNavMesh : 1; // 0x3E0:0(0x1)
		bool bAlwaysNotifyBumpWall : 1; // 0x3E0:1(0x1)
		bool bInstantRotation : 1; // 0x3E0:2(0x1)
		bool bTurnTransitionsEnabled : 1; // 0x3E0:3(0x1)
		unsigned char UnknownBit18 : 1; // 0x3E0:4(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit19 : 1; // 0x3E0:5(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit20 : 1; // 0x3E0:6(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit21 : 1; // 0x3E0:7(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit22 : 1; // 0x3E1:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit23 : 1; // 0x3E1:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit24 : 1; // 0x3E1:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit25 : 1; // 0x3E1:3(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit26 : 1; // 0x3E1:4(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit27 : 1; // 0x3E1:5(0x1) UNKNOWN PROPERTY
		bool bIgnoreAllActorsThatAreNotPawnsOrBuildings : 1; // 0x3E1:6(0x1)
		bool bAllowHotspotAbilityLooping : 1; // 0x3E1:7(0x1)
		unsigned char UnknownData28_5[0x6]; // 0x3E2(0x6) UNKNOWN PROPERTY
		UFortPathFollowingComponent FortPathFollowingComp; // 0x3E8(0x8)
		FAIHotSpotUseInfo CurrentHotSpot; // 0x3F0(0x18)
		UFortAthenaAIRuntimeParametersComponent CachedAIRuntimeParametersComponent; // 0x408(0x8)
		float GoalInfoUpdateRate; // 0x410(0x4)
		float GoalVisibilityPersistanceTime; // 0x414(0x4)
		unsigned char UnknownData29_6[0xB0]; // 0x418(0xB0) UNKNOWN PROPERTY
		AFortPawn MyFortPawn; // 0x4C8(0x8)
		AFortAIPawn MyFortAIPawn; // 0x4D0(0x8)
		FMulticastInlineDelegate OnTeamSetDelegate; // 0x4D8(0x10)
		FMulticastInlineDelegate OnControllerComponentAttachedEvent; // 0x4E8(0x10)
		unsigned char UnknownData30_6[0x18]; // 0x4F8(0x18) UNKNOWN PROPERTY
		UAIGoalComponent AIGoalComponent; // 0x510(0x8)
		UFortPawnComponent_Sleep PawnSleepComponent; // 0x518(0x8)
		FMulticastInlineDelegate OnPawnKilledEvent; // 0x520(0x10)
		unsigned char UnknownData31_6[0x20]; // 0x530(0x20) UNKNOWN PROPERTY
		UBehaviorTree BTAssetToRunOnPawnAISpawned; // 0x550(0x8)
		FGameplayTag DescriptorTag; // 0x558(0x4)
		unsigned char UnknownData32_6[0x4]; // 0x55C(0x4) UNKNOWN PROPERTY
		UFortGameStateComponent_AffiliationManager CachedAffiliationManager; // 0x560(0x8)
		unsigned char UnknownData33_7[0x10]; // 0x568(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIController");
			return ret;
		}

		void WakeUp(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499D538
		void UnlockMovementResource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41499D458
		void UnlockBehaviorResource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41499D378
		void SetupCustomVIM(UClass VIM); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499D298
		void SetTeamInt(char InTeam); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41499D1B8
		void SetTeam(TEnumAsByte InTeam); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499D0D8
		void SetFullPeripheralVision(bool bNewFullPeripheralVision); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499CFF8
		void SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499CF18
		void OnGoalActorChanged(AActor OldGoalActor, AActor NewGoalActor); // Flags: RequiredAPI|Native|Protected 0x7FF41499CE38
		void LockMovementResource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41499CD58
		void LockBehaviorResource(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41499CC78
		bool IsIgnoringProximity(AFortAIController FortAIController); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41499CB98
		bool IsAllowedToSleep(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499CAB8
		void IgnoreProximityForDuration(float DurationToIgnore); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF41499C9D8
		UFortAIEncounterInfo GetEncounterInfo(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499C8F8
		bool CreateBuildingActor(UClass BuildingClass, FVector BuildLoc, FRotator BuildRot, bool bMirrored); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41499C818
		void ClearAllFocalPoints(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499C738
	};


	// Class FortniteAI.AthenaAIController
	// Inherited from AFortAIController -> AAIController -> AController -> AActor -> UObject
	// Size: 0x90 (0x608 - 0x578)
	class AAthenaAIController : public AFortAIController	
	{
	public:
		unsigned char UnknownData06_3[0x20]; // 0x578(0x20) UNKNOWN PROPERTY
		UFortGameplayAbility PrimaryMeleeAttackAbilityInstance; // 0x598(0x8)
		UFortGameplayAbility PrimaryRangedAttackAbilityInstance; // 0x5A0(0x8)
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
		unsigned char UnknownBit07 : 1; // 0x5E8:6(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit08 : 1; // 0x5E8:7(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit09 : 1; // 0x5E9:0(0x1) UNKNOWN PROPERTY
		bool bRegisterToAthenaAIDropper : 1; // 0x5E9:1(0x1)
		unsigned char UnknownData10_5[0x6]; // 0x5EA(0x6) UNKNOWN PROPERTY
		AActor SecondaryGoalActor; // 0x5F0(0x8)
		unsigned char UnknownData11_6[0x8]; // 0x5F8(0x8) UNKNOWN PROPERTY
		UAthenaPathFollowingComponent AthenaPFC; // 0x600(0x8)

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
		unsigned char UnknownData01_7[0xC]; // 0x18C(0xC) UNKNOWN PROPERTY

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
		TWeakObjectPtr CachedAIRuntimeParametersComponent; // 0x198(0x8)

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
		unsigned char UnknownData01_1[0x30]; // 0x298(0x30) UNKNOWN PROPERTY

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
		unsigned char UnknownData27_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		FCurveTableRowHandle MaxAliveCurve; // 0x2A0(0x10)
		FCurveTableRowHandle MinAliveCurve; // 0x2B0(0x10)
		FIntensityData IntensityInfo; // 0x2C0(0x30)
		FFortAIEncounterPIDController AIDirectorPIDController; // 0x2F0(0x68)
		FFortAIEncounterPIDControllerSettings PIDControllerSettings; // 0x358(0x30)
		FUtilityData UtilityContributionData; // 0x388(0x400)
		float UnreachableLocationPathCost; // 0x788(0x4)
		unsigned char UnknownData28_6[0x4]; // 0x78C(0x4) UNKNOWN PROPERTY
		FFortPlayerPerformanceEstimateSettings PlayerPerformanceEstimateSettings; // 0x790(0x40)
		bool bUsePrototypeEnemies : 1; // 0x7D0:0(0x1)
		unsigned char UnknownData29_5[0x3]; // 0x7D1(0x3) UNKNOWN PROPERTY
		bool bForceByPassNavMeshForAISpawning; // 0x7D4(0x1)
		unsigned char UnknownData30_6[0x3]; // 0x7D5(0x3) UNKNOWN PROPERTY
		TArray DebugEncounterDirections; // 0x7D8(0x10)
		EDespawnAIType DespawnAIType; // 0x7E8(0x1)
		unsigned char UnknownData31_6[0x3]; // 0x7E9(0x3) UNKNOWN PROPERTY
		float DespawnDistance; // 0x7EC(0x4)
		float DespawnInterval; // 0x7F0(0x4)
		unsigned char UnknownData32_6[0x4]; // 0x7F4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer DebugSpawnAIGroupTags; // 0x7F8(0x20)
		FGameplayTagContainer DebugEncounterTags; // 0x818(0x20)
		float BurstSpawnThreatVisualsEndDelay; // 0x838(0x4)
		unsigned char UnknownData33_6[0x4]; // 0x83C(0x4) UNKNOWN PROPERTY
		TArray EncounterSpawnGroupCapSettings; // 0x840(0x10)
		TArray EncounterSpawnPointsSettings; // 0x850(0x10)
		TArray EncounterPawnDifficultyLevelModifiers; // 0x860(0x10)
		TArray SpawnGroupUpgrades; // 0x870(0x10)
		float GuaranteedUpgradeGroupUtilityBonus; // 0x880(0x4)
		float DiscreteEncounterUtilityDesireMappings; // 0x884(0x10)
		TEnumAsByte InitialDynamicUtilities; // 0x894(0x4)
		FEncounterEnvironmentQueryInfo SpawnLocationPlacementQueries; // 0x898(0xA0)
		FEncounterEnvironmentQueryInfo SpawnLocationActorSearchQueries; // 0x938(0xA0)
		UFortAIDirectorDataTrackingSettings DataTrackingSettings; // 0x9D8(0x8)
		TArray BaseLootDropData; // 0x9E0(0x10)
		TArray LootDropModifiers; // 0x9F0(0x10)
		FGameplayTagQuery LootDropDenialQuery; // 0xA00(0x48)
		bool bDebugEncounterQueries : 1; // 0xA48:0(0x1)
		unsigned char UnknownData34_5[0x17]; // 0xA49(0x17) UNKNOWN PROPERTY
		TArray PlayerControllersForBVTree; // 0xA60(0x10)
		TArray PlayerPawnsForBVTree; // 0xA70(0x10)
		unsigned char UnknownData35_6[0x30]; // 0xA80(0x30) UNKNOWN PROPERTY
		TArray AIControllersForBVTree; // 0xAB0(0x10)
		TArray AIPawnsForBVTree; // 0xAC0(0x10)
		unsigned char UnknownData36_6[0x30]; // 0xAD0(0x30) UNKNOWN PROPERTY
		TArray AIPlayerBotControllersForBVTree; // 0xB00(0x10)
		TArray AIPlayerBotPawnsForBVTree; // 0xB10(0x10)
		unsigned char UnknownData37_6[0x30]; // 0xB20(0x30) UNKNOWN PROPERTY
		TArray AINonPlayerBotControllersForBVTree; // 0xB50(0x10)
		TArray AINonPlayerBotPawnsForBVTree; // 0xB60(0x10)
		unsigned char UnknownData38_6[0x30]; // 0xB70(0x30) UNKNOWN PROPERTY
		TArray NonPlayerBotPawns; // 0xBA0(0x10)
		TArray PlayerBotPawns; // 0xBB0(0x10)
		TArray PlayerPawns; // 0xBC0(0x10)
		TArray FortAIPawns; // 0xBD0(0x10)
		unsigned char UnknownData39_6[0x100]; // 0xBE0(0x100) UNKNOWN PROPERTY
		bool bUseLODSettings; // 0xCE0(0x1)
		unsigned char UnknownData40_6[0x6F]; // 0xCE1(0x6F) UNKNOWN PROPERTY
		TScriptInterface CachedLODSettingsManager; // 0xD50(0x10)
		bool bAsyncProcessUpdateAliveAIs; // 0xD60(0x1)
		bool bAllowProcessPlayerTargeting; // 0xD61(0x1)
		unsigned char UnknownData41_6[0x2]; // 0xD62(0x2) UNKNOWN PROPERTY
		int32_t MaxNumLODAIProcessPerFrame; // 0xD64(0x4)
		FFortEncounterPawnNumberCaps DefaultEncounterPawnCaps; // 0xD68(0x18)
		unsigned char UnknownData42_6[0x8]; // 0xD80(0x8) UNKNOWN PROPERTY
		UReporterGraph IntensityGraph; // 0xD88(0x8)
		UReporterGraph UtilitiesGraph; // 0xD90(0x8)
		UReporterGraph PIDValuesGraph; // 0xD98(0x8)
		UReporterGraph PIDContributionsGraph; // 0xDA0(0x8)
		bool bNightActive : 1; // 0xDA8:0(0x1)
		bool bAIDisabled : 1; // 0xDA8:1(0x1)
		bool bRegisteredForDayPhaseChange : 1; // 0xDA8:2(0x1)
		bool bUseSpawnCap : 1; // 0xDA8:3(0x1)
		unsigned char UnknownData43_5[0x3]; // 0xDA9(0x3) UNKNOWN PROPERTY
		int32_t NightCount; // 0xDAC(0x4)
		float NightEncounterFailureBreatherTime; // 0xDB0(0x4)
		float EncounterPawnSpawnInterval; // 0xDB4(0x4)
		UClass DefaultNightEncounter; // 0xDB8(0x8)
		UClass DummyDebugEncounter; // 0xDC0(0x8)
		UClass BaseEncounterClass; // 0xDC8(0x8)
		int32_t MaxActiveAlive; // 0xDD0(0x4)
		int32_t NumActiveAlive; // 0xDD4(0x4)
		int32_t NumPendingCapRelevantAI; // 0xDD8(0x4)
		unsigned char UnknownData44_6[0x54]; // 0xDDC(0x54) UNKNOWN PROPERTY
		TArray PendingSpawns; // 0xE30(0x10)
		int32_t MaxAISpawnedPerFrame; // 0xE40(0x4)
		int32_t MaxAIDespawnedPerFrame; // 0xE44(0x4)
		int32_t DespawnAllAIMaxAIDespawnedPerFrame; // 0xE48(0x4)
		unsigned char UnknownData45_6[0x4]; // 0xE4C(0x4) UNKNOWN PROPERTY
		TArray PendingDespawns; // 0xE50(0x10)
		unsigned char UnknownData46_6[0x8]; // 0xE60(0x8) UNKNOWN PROPERTY
		int32_t NumWorldSubdivides; // 0xE68(0x4)
		float MinAISpawnDistanceFromPlayers; // 0xE6C(0x4)
		FGameplayTagContainer AmbientThreatPreferredPlacementActorTags; // 0xE70(0x20)
		FGameplayTagContainer AmbientThreatRequiredPlacementActorTags; // 0xE90(0x20)
		TArray ActiveEncounters; // 0xEB0(0x10)
		TArray InactiveEncounters; // 0xEC0(0x10)
		TArray PendingStoppedEncounters; // 0xED0(0x10)
		UFortAIEncounterInfo ActiveDefaultEncounter; // 0xEE0(0x8)
		UFortAIEncounterInfo ActiveDummyDebugEncounter; // 0xEE8(0x8)
		TArray EncounterSequences; // 0xEF0(0x10)
		UEQSRenderingComponent EQSRenderingComp; // 0xF00(0x8)
		int32_t DebugGraphUpdateFrequency; // 0xF08(0x4)
		float MaxNormalLODDistanceToPlayer; // 0xF0C(0x4)
		float AIRelevantDistanceToPlayer; // 0xF10(0x4)
		float EncounterRelevantDistanceToPlayer; // 0xF14(0x4)
		float EncounterRelevantDistanceToDefender; // 0xF18(0x4)
		unsigned char UnknownData47_6[0x4]; // 0xF1C(0x4) UNKNOWN PROPERTY
		TArray PatrolWards; // 0xF20(0x10)
		unsigned char UnknownData48_6[0x4]; // 0xF30(0x4) UNKNOWN PROPERTY
		int32_t MaxTotalActiveAliveAI; // 0xF34(0x4)
		int32_t MaxEncounterActiveAliveAI; // 0xF38(0x4)
		int32_t MaxSPUsed; // 0xF3C(0x4)
		unsigned char UnknownData49_6[0x8]; // 0xF40(0x8) UNKNOWN PROPERTY
		TArray DebugEncounterTopUtilityPercentages; // 0xF48(0x10)
		TArray DebugEncounterSpawnPointsCurves; // 0xF58(0x10)
		bool bDebugAllowEncounterModifierTags : 1; // 0xF68:0(0x1)
		unsigned char UnknownData50_5[0x3]; // 0xF69(0x3) UNKNOWN PROPERTY
		int32_t SimulatedNumberOfPlayersForAIEncounters; // 0xF6C(0x4)
		unsigned char UnknownData51_6[0x78]; // 0xF70(0x78) UNKNOWN PROPERTY
		int32_t MaxNumberOfEncounterGroups; // 0xFE8(0x4)
		unsigned char UnknownData52_6[0x4]; // 0xFEC(0x4) UNKNOWN PROPERTY
		TArray RegisteredAISpawners; // 0xFF0(0x10)
		unsigned char UnknownData53_7[0x8]; // 0x1000(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDirector");
			return ret;
		}

		void UnregisterPatrolWard(TScriptInterface PatrolWard); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499EF78
		UFortAIEncounterInfo StartEncounter(FString& EncounterInstigator, UFortDifficultyEncounterSettings DifficultyEncounterSettings, FFortAIEncounterQueryData OptionalQueryData); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41499EE98
		void RegisterPatrolWard(TScriptInterface PatrolWard); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499EDB8
		void ReceivePawnSpawned(AFortPawn SpawnedPawn); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF41499ECD8
		void PostDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF41499EBF8
		void OnRestStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF41499EB18
		void OnRampStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF41499EA38
		void OnPlayerSpawn(AFortPlayerPawn PlayerPawn); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF41499E958
		void OnPlayerDied(AFortPlayerPawn PlayerPawn); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF41499E878
		void OnPeakStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF41499E798
		void OnPawnDied(AFortAIPawn KilledPawn); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF41499E6B8
		void OnFadeStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF41499E5D8
		void OnDirectorDeactivated(); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF41499E4F8
		void OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation); // Flags: Native|Public 0x7FF41499E418
		bool IsPointTooCloseToPatrolWards(FVector& Point, EWardAffectType WardEffectTypeFilter); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41499E338
		bool IsLineTooCloseToPatrolWards(FVector& LineStart, FVector& LineEnd); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41499E258
		bool IsAnyEncounterGoalWithinDistanceOfPoint(FVector& Point, float Distance, bool bOnlyActiveEncounters); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41499E178
		bool IsAnyAIRelevantToPlayer(AFortPlayerPawn Player); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499E098
		bool IsAnyActiveEncounterRelevantToPlayer(AFortPlayerPawn Player); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499DFB8
		bool IsAnyActiveEncounterRelevantToDefender(AFortAIPawn Defender); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499DED8
		FVector GetVectorFromEncounterDirection(TEnumAsByte Direction); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41499DDF8
		TArray GetRiftsFromClosestActiveEncounterTo(AActor Target); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499DD18
		int32_t GetPlayerPawnsInRange(FVector& Origin, float Radius, TArray& OutPawns); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41499DC38
		int32_t GetNumPlayers(); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499DB58
		int32_t GetNumActiveEncounters(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41499DA78
		TEnumAsByte GetEncounterDirectionFromVector(FVector DirectionVector); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41499D998
		void GetAmbientThreatEncounterSpawnLocations(TArray& AmbientThreatEncounterSpawnLocations); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF41499D8B8
		void Deactivate(); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41499D7D8
		TArray ConvertInvalidDirectionsToValidDirections(TArray InvalidDirections); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41499D6F8
		void Activate(); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41499D618
	};


	// Class FortniteAI.AthenaAIDirector
	// Inherited from AFortAIDirector -> AActor -> UObject
	// Size: 0x8 (0x1010 - 0x1008)
	class AAthenaAIDirector : public AFortAIDirector	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x1008(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIDirector");
			return ret;
		}

		void AggroOnActor(AAthenaAIController AIController, AActor Target); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF41499F058
	};


	// Class FortniteAI.AthenaAIDropper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAthenaAIDropper : public UObject	
	{
	public:
		TArray InactiveAgents; // 0x28(0x10)

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
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

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
		TArray PlayerLODViewConeConfigs; // 0x30(0x10)
		FPlayerLODViewConeHysteresisConfig PlayerLODViewConeHysteresisConfig; // 0x40(0x50)
		FScalableFloat CouldBeVisibleViewConeAngleDegrees; // 0x90(0x28)
		FScalableFloat CouldBeVisibleMaxDistance; // 0xB8(0x28)
		FScalableFloat LODSortHysteresisDistance; // 0xE0(0x28)
		TArray FortAIDirectorLODConfigs; // 0x108(0x10)

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
		unsigned char UnknownData02_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData03_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		UClass NavigationSystemConfig; // 0x60(0x8)
		UClass StaticNavigationSystemConfig; // 0x68(0x8)
		TWeakObjectPtr AIDIrectorLOD; // 0x70(0x20)
		TArray AIServices; // 0x90(0x10)

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
		TArray TwoPointSolvers; // 0x178(0x10)
		UFortInfluenceMap InfluenceMap; // 0x188(0x8)
		UFortBotMissionManager BotManager; // 0x190(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x198(0x10) UNKNOWN PROPERTY
		TArray ActiveRiftBlockers; // 0x1A8(0x10)
		unsigned char UnknownData03_6[0x50]; // 0x1B8(0x50) UNKNOWN PROPERTY
		UAthenaAISpawner AISpawner; // 0x208(0x8)
		UAthenaAIServiceManager AIServiceManager; // 0x210(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISystem");
			return ret;
		}

		bool IsInCone2D(FVector ConeOrigin, FVector ConeDirection, float HalfAngle, FVector LocationToCheck); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF41499F138
	};


	// Class FortniteAI.AthenaAISystem
	// Inherited from UFortAISystem -> UAISystem -> UAISystemBase -> UObject
	// Size: 0x78 (0x290 - 0x218)
	class UAthenaAISystem : public UFortAISystem	
	{
	public:
		UAthenaAIPerceptionManager PerceptionManager; // 0x218(0x8)
		UAthenaAIDropper AIDropper; // 0x220(0x8)
		UAthenaAIPopulationTracker AIPopulationTracker; // 0x228(0x8)
		UAthenaAIVehicleAvoidanceManager AIVehicleAvoidanceManager; // 0x230(0x8)
		TArray AIControllers; // 0x238(0x10)
		TArray PathFollowingComponents; // 0x248(0x10)
		TArray RegisteredAISpawners; // 0x258(0x10)
		bool bUnlimitedAIHealth : 1; // 0x268:0(0x1)
		bool bNavigationReady : 1; // 0x268:1(0x1)
		unsigned char UnknownData01_7[0x27]; // 0x269(0x27) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAISystem");
			return ret;
		}

		void OnAIPawnSpawned(AController SpawnedController, bool bIsABot, AFortPawn FortAIPawn, AFortPlayerPawn PlayerPawn); // Flags: Final|Native|Protected 0x7FF41499F678
		void OnAIPawnDied(AController KilledController, bool bIsABot, AFortPawn KilledAIPawn, AFortPlayerPawn KilledPlayerPawn, AController KillerController); // Flags: Final|Native|Protected 0x7FF41499F598
		void OnAIPawnDestroyed(AFortPawn DestroyedPawn); // Flags: Final|Native|Protected 0x7FF41499F4B8
		void HandlePlayerExitAircraft(AController ExitingController); // Flags: Final|Native|Protected 0x7FF41499F3D8
		void AIProfiling_OnSafeZoneUpdated(FFortSafeZonePhaseUpdatedEvent& Event); // Flags: Final|Native|Public|HasOutParms 0x7FF41499F2F8
		void AIProfiling_OnGamePhaseChanged(FFortGamePhaseUpdatedEvent& Event); // Flags: Final|Native|Public|HasOutParms 0x7FF41499F218
	};


	// Class FortniteAI.AthenaCreativeRift
	// Inherited from ABuildingRift -> ABuildingActor -> AActor -> UObject
	// Size: 0xF8 (0xC10 - 0xB18)
	class AAthenaCreativeRift : public ABuildingRift	
	{
	public:
		USphereComponent DespawnSphereComponent; // 0xB18(0x8)
		ABuildingProp_AISpawner ParentTrap; // 0xB20(0x8)
		FFortEncounterSettings OverrideEncounterSettings; // 0xB28(0xC0)
		bool bHasLoadedSettings; // 0xBE8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xBE9(0x7) UNKNOWN PROPERTY
		TArray DespawnPlayerOverlaps; // 0xBF0(0x10)
		unsigned char UnknownData03_6[0x8]; // 0xC00(0x8) UNKNOWN PROPERTY
		UFortAIManagerMinigameComponent CachedAIMinigamecomponent; // 0xC08(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaCreativeRift");
			return ret;
		}

		void NotifyActorDespawnEndOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Public 0x7FF41499F838
		void BlueprintShowRift(); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF41499F758
	};


	// Class FortniteAI.FortPathFollowingComponentBase
	// Inherited from UCrowdFollowingComponent -> UPathFollowingComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x378 - 0x340)
	class UFortPathFollowingComponentBase : public UCrowdFollowingComponent	
	{
	public:
		AAIController AIController; // 0x340(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x348(0x30) UNKNOWN PROPERTY

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
		AFortAIController MyAI; // 0x378(0x8)
		unsigned char UnknownData02_6[0x20]; // 0x380(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAIMoveBlockedEvent; // 0x3A0(0x10)
		float MovementBlockFrustrationCooldownSpeed; // 0x3B0(0x4)
		unsigned char UnknownData03_7[0xC4]; // 0x3B4(0xC4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPathFollowingComponent");
			return ret;
		}

		void OnPossessedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Protected 0x7FF413AFE470
		void OnAIMoveBlocked__DelegateSignature(FHitResult& HitResult); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF413AFE390
	};


	// Class FortniteAI.AthenaPathFollowingComponent
	// Inherited from UFortPathFollowingComponent -> UFortPathFollowingComponentBase -> UCrowdFollowingComponent -> UPathFollowingComponent -> UActorComponent -> UObject
	// Size: 0x40 (0x4B8 - 0x478)
	class UAthenaPathFollowingComponent : public UFortPathFollowingComponent	
	{
	public:
		EAthenaPathFollowingFocus FocusDirectionMethod; // 0x478(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x479(0x3) UNKNOWN PROPERTY
		float OffsetPathFromCornersDistance; // 0x47C(0x4)
		unsigned char UnknownData04_6[0x18]; // 0x480(0x18) UNKNOWN PROPERTY
		AAthenaAIController AthenaAIController; // 0x498(0x8)
		unsigned char UnknownData05_7[0x18]; // 0x4A0(0x18) UNKNOWN PROPERTY

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
		UProxyTable ProxyTable; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIComponent_Animation");
			return ret;
		}

		UAnimMontage GetAnimMontage(UProxyAsset ProxyAsset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499F918
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

		UFortAthenaAITelemetryData GetOrCreateAITelemetryData(AActor Owner, UClass TelemetryDataClass); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Private|BlueprintCallable 0x7FF41499F9F8
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
		AFortAIPawn PossessedPawn; // 0xA0(0x8)
		AAthenaAIController CachedAIController; // 0xA8(0x8)
		AController DeathInstigator; // 0xB0(0x8)
		TArray GrabbedPickups; // 0xB8(0x10)
		TArray DroppedPickups; // 0xC8(0x10)
		UFortAthenaAIRuntimeParameters_AIAnalytic AnalyticRuntimeParameters; // 0xD8(0x8)
		TArray TelemetryData; // 0xE0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xF0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIComponent_Telemetry");
			return ret;
		}

		void OnTetheredFollowerChanged(AFortPawn NewFollower, AFortPawn OldFollower); // Flags: Final|Native|Private 0x7FF41499FD78
		void OnPawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF41499FC98
		void OnDidDamage(); // Flags: Final|Native|Private|HasDefaults 0x7FF41499FBB8
		UFortAthenaAITelemetryData GetOrCreateTelemetryData(UClass TelemetryDataClass); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41499FAD8
	};


	// Class FortniteAI.FortAIComponent_Voice
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortAIComponent_Voice : public UActorComponent	
	{
	public:
		UFortTaggedSoundBank VoiceSoundBank; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIComponent_Voice");
			return ret;
		}

		void SetVoiceSoundBank(UFortTaggedSoundBank InSoundBank); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41499FF38
		UFortTaggedSoundBank GetVoiceSoundBank(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41499FE58
	};


	// Class FortniteAI.FortAIManagerMinigameComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UFortAIManagerMinigameComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_3[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY
		TArray SpawnableAITypeTags; // 0x100(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIManagerMinigameComponent");
			return ret;
		}

		void OnPawnSpawned(APawn Pawn, int32_t RequestID); // Flags: Final|Native|Public 0x7FF4149A02B8
		void OnPawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149A01D8
		void HandleMinigameStarted(); // Flags: Final|Native|Public 0x7FF4149A00F8
		FGameplayTag GetSpawnTagFromPawnObject(UObject PawnObject); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4149A0018
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
		unsigned char UnknownData01_7[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAINavInvokerComponent");
			return ret;
		}

		void SetInvokerRadii(float GenerationRadius, float RemovalRadius); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149A0558
		void RevertRadiiToDefault(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A0478
		void GetCharacterCollisionComponent(TArray& OutCollisionComponents); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF4149A0398
	};


	// Class FortniteAI.FortAISpawnerUtilityComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x90 (0x130 - 0xA0)
	class UFortAISpawnerUtilityComponent : public UActorComponent	
	{
	public:
		FGameplayTag AIPawnSpawnTypeTag; // 0xA0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		UEnvQuery EnvironmentQuery; // 0xA8(0x8)
		TArray QueryParams; // 0xB0(0x10)
		float QueryRadius; // 0xC0(0x4)
		float QueryMinDistance; // 0xC4(0x4)
		FMulticastInlineDelegate OnEnvironmentQueryFinishedDelegate; // 0xC8(0x10)
		FMulticastInlineDelegate OnUnownedPawnDiedDelegate; // 0xD8(0x10)
		unsigned char UnknownData04_6[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY
		TArray FreeSpawnSlots; // 0xF8(0x10)
		unsigned char UnknownData05_6[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		TScriptInterface CachedFortSpatialGameplay; // 0x120(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnerUtilityComponent");
			return ret;
		}

		void StartEnvironmentQuery(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149A0C58
		void SetQueryRadius(float Radius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A0B78
		void SetMinigame(AFortMinigame Minigame); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149A0A98
		void SetEQSQuery(TWeakObjectPtr SelectedEQSQuery); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149A09B8
		int32_t RequestSpawn(UFortAthenaAISpawnerDataComponentList AISpawnerComponentList, FTransform& SpawnTransform); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149A08D8
		void OnUnownedPawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF4149A07F8
		bool IsSpawnCountCapped(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A0718
		void HandleUnownedPawnSpawned(AFortPawn FortPawn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A0638
	};


	// Class FortniteAI.FortControllerComponent_AIRandomTargeter
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x118 - 0xA8)
	class UFortControllerComponent_AIRandomTargeter : public UFortControllerComponent	
	{
	public:
		FScalableFloat ChangeTargetTimeMin; // 0xA8(0x28)
		FScalableFloat ChangeTargetTimeMax; // 0xD0(0x28)
		unsigned char UnknownData01_7[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY

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
		TArray CustomEffects; // 0xA0(0x10)
		TArray TrackedFXComponent; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AICustomEffects");
			return ret;
		}

		void SetCustomEffects(TArray& CustomEffectList); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A0FD8
		void PlayCustomEffect(UNiagaraSystem Effect, FTransform& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149A0EF8
		FNPCCustomEffect GetCustomEffect(FGameplayTag& CustomEffectTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149A0E18
		void AddCustomEffect(FGameplayTag& CustomEffectTag, FNPCCustomEffect& InEffect); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A0D38
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
		unsigned char UnknownData02_6[0x1C]; // 0xAC(0x1C) UNKNOWN PROPERTY
		UFortItemDefinition CurrentTraversalEmote; // 0xC8(0x8)
		bool bIsPatrolling; // 0xD0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIPatrol");
			return ret;
		}

		void StopPatrolling(); // Flags: Final|Native|Public 0x7FF4149A16D8
		void StartPatrolling(); // Flags: Final|Native|Public 0x7FF4149A15F8
		void OnRep_IsPatrolling(); // Flags: Final|Native|Private 0x7FF4149A1518
		void HandleRequestedEmote(UAthenaDanceItemDefinition RequestedEmote); // Flags: Final|Native|Private 0x7FF4149A1438
		void HandlePatrolStateTagCountChanged(FGameplayTag tag, int32_t Count); // Flags: Final|Native|Private 0x7FF4149A1358
		void HandleEmoteFinished(FAbilityEndedData& AbilityData); // Flags: Final|Native|Private|HasOutParms 0x7FF4149A1278
		void HandleAbilitySystemComponentInvalidated(); // Flags: Final|Native|Private 0x7FF4149A1198
		void HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent FortAbilitySystemComponent, AFortPlayerPawn FortPlayerPawn); // Flags: Final|Native|Private 0x7FF4149A10B8
	};


	// Class FortniteAI.FortPawnComponent_Sleep
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x148 - 0xA8)
	class UFortPawnComponent_Sleep : public UFortPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnBeginSleepEffects; // 0xA8(0x10)
		FMulticastInlineDelegate OnEndSleepEffects; // 0xB8(0x10)
		unsigned char UnknownData02_6[0x30]; // 0xC8(0x30) UNKNOWN PROPERTY
		bool bCanSleep : 1; // 0xF8:0(0x1)
		bool bIsSleeping : 1; // 0xF8:1(0x1)
		bool bShouldStartSleeping : 1; // 0xF8:2(0x1)
		unsigned char UnknownData03_5[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery SleepForTheseGoalActorsQuery; // 0x100(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_Sleep");
			return ret;
		}

		bool ShouldStartSleeping(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A1F98
		void SetSleepForGoalActorsQuery(FGameplayTagQuery& InQuery); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A1EB8
		void SetShouldStartSleeping(bool bHintStartSleeping); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149A1DD8
		void SetCanSleep(bool bInCanSleep); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149A1CF8
		void OnRep_bIsSleeping(); // Flags: Final|Native|Protected 0x7FF4149A1C18
		bool IsSleeping(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A1B38
		FGameplayTagQuery GetSleepForGoalActorsQuery(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A1A58
		UFortPawnComponent_Sleep GetSleepComponent(AActor Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4149A1978
		bool CanSleepForActor(AActor Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A1898
		bool CanSleep(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A17B8
	};


	// Class FortniteAI.FortPawnComponent_StepAside
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UFortPawnComponent_StepAside : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_StepAside");
			return ret;
		}

		void HandlePawnUnpossessed(APawn Pawn); // Flags: Final|Native|Protected 0x7FF4149A2238
		void HandlePawnPossessed(APawn Pawn); // Flags: Final|Native|Protected 0x7FF4149A2158
		void HandleOnDBNOChanged(AFortPawn Pawn, bool bIsDBNO); // Flags: Final|Native|Protected 0x7FF4149A2078
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
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

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
		TArray PendingRequests; // 0x28(0x10)
		TArray AssetsLoaded; // 0x38(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

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
		UFortAIAssignmentSettings AssignmentSettings; // 0x58(0x8)
		UFortAIGoalProvider GoalProvider; // 0x60(0x8)
		TArray GoalComponentsOnAssignment; // 0x68(0x10)
		unsigned char UnknownData01_6[0x50]; // 0x78(0x50) UNKNOWN PROPERTY
		TArray Goals; // 0xC8(0x10)

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
		TArray GoalSelectionQueryInfos; // 0x30(0x10)
		bool bGoalLocationsAlwaysKnown; // 0x40(0x1)
		bool bIsEnemyAssignment; // 0x41(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
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
		UAthenaAIBotDebugMiniMapIndicator BotDebugMiniMapIndicator; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIBotDebugActor");
			return ret;
		}

		void OnRep_BotDebugMiniMapIndicator(UAthenaAIBotDebugMiniMapIndicator OldBotDebugMiniMap); // Flags: Final|Native|Private 0x7FF4149A2318
	};


	// Class FortniteAI.FortAIBotPOIDebugActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AFortAIBotPOIDebugActor : public AActor	
	{
	public:
		UAthenaAIBotPOIDebugMiniMapIndicator BotPOIDebugMiniMapIndicator; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIBotPOIDebugActor");
			return ret;
		}

		void OnRep_PlayerBotsDebugMiniMap(UAthenaAIBotPOIDebugMiniMapIndicator OldPlayerBotsDebugMiniMap); // Flags: Final|Native|Private 0x7FF4149A23F8
	};


	// Class FortniteAI.FortAICustomTargetingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UFortAICustomTargetingComponent : public UActorComponent	
	{
	public:
		TArray Configurations; // 0xA0(0x10)
		unsigned char UnknownData01_7[0x50]; // 0xB0(0x50) UNKNOWN PROPERTY

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
		UObject OwnerObject; // 0x290(0x8)
		TArray EventsToTrack; // 0x298(0x10)
		TArray FactorsToTrack; // 0x2A8(0x10)
		unsigned char UnknownData02_6[0xA0]; // 0x2B8(0xA0) UNKNOWN PROPERTY
		TArray FactorsBeingTracked; // 0x358(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x368(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIDirectorDataManager");
			return ret;
		}

		void TriggerEvent(FFortAIDirectorEvent& TriggeredEvent); // Flags: Native|Public|HasOutParms 0x7FF4149A25B8
		float GetAIDirectorFactorValue(EFortAIDirectorFactor AIDirectorFactor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A24D8
	};


	// Class FortniteAI.FortAIDirectorDataTrackingSettings
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAIDirectorDataTrackingSettings : public UDataAsset	
	{
	public:
		UClass PlayerDataManager; // 0x30(0x8)
		UClass EncounterDataManager; // 0x38(0x8)

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
		unsigned char UnknownData01_1[0x50]; // 0x290(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData33_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UFortAISpawnGroupProgressionInfo SpawnGroupProgressionInfo; // 0x38(0x8)
		FFortSpawnPointsPercentageCurveSequenceInstanceInfo SpawnPointsPercentageCurveSequence; // 0x40(0x10)
		FFortIntensityCurveSequenceInstanceInfo IntensityCurveSequence; // 0x50(0x10)
		float BurstSpawnPointsPercentage; // 0x60(0x4)
		float SpawnPointsMultiplier; // 0x64(0x4)
		bool bUseBreathers; // 0x68(0x1)
		unsigned char UnknownData34_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FCurveTableRowHandle LowPlayerPerformanceBreatherTimeSecondsCurve; // 0x70(0x10)
		FCurveTableRowHandle NormalPlayerPerformanceBreatherTimeSecondsCurve; // 0x80(0x10)
		FCurveTableRowHandle HighPlayerPerformanceBreatherTimeSecondsCurve; // 0x90(0x10)
		float EncounterTimeSeconds; // 0xA0(0x4)
		unsigned char UnknownData35_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TArray LockedUtilityValues; // 0xA8(0x10)
		int32_t NumFreeUtilities; // 0xB8(0x4)
		float UtilityAdjustmentPeriodSeconds; // 0xBC(0x4)
		float MinSpawnDistance; // 0xC0(0x4)
		float MaxSpawnDistance; // 0xC4(0x4)
		int32_t NumDirections; // 0xC8(0x4)
		bool bChangeDirectionsOnRest; // 0xCC(0x1)
		unsigned char UnknownData36_6[0x3]; // 0xCD(0x3) UNKNOWN PROPERTY
		float SpawnPointsPercentageLimit; // 0xD0(0x4)
		int32_t PawnNumberLimit; // 0xD4(0x4)
		FFortEncounterPawnNumberCaps PawnNumberCaps; // 0xD8(0x18)
		float SpawningIntervalSeconds; // 0xF0(0x4)
		float PreSpawnRequeryTime; // 0xF4(0x4)
		FFortEncounterSettingsFixedPace EncounterSettingsFixed; // 0xF8(0x14)
		unsigned char UnknownData37_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnEncounterSpawnDirectionsChosen; // 0x110(0x10)
		float NextRiftReplacementTime; // 0x120(0x4)
		float NextSpawningTime; // 0x124(0x4)
		FFortAIEncounterSpawnGroupCapsProfile EncounterSpawnGroupCapsProfile; // 0x128(0x30)
		TArray AdditionalSpawnGroupCapsCategories; // 0x158(0x10)
		FFortAIEncounterSpawnPointsProfile EncounterSpawnPointsProfile; // 0x168(0x40)
		TArray AvailableUpgrades; // 0x1A8(0x10)
		TArray PawnDifficultyLevelModifiers; // 0x1B8(0x10)
		TArray BaseLootDropRows; // 0x1C8(0x10)
		TArray LootDropModifierRows; // 0x1D8(0x10)
		bool bRequiresReinitializationFromProfile; // 0x1E8(0x1)
		unsigned char UnknownData38_6[0x7]; // 0x1E9(0x7) UNKNOWN PROPERTY
		FCurveTableRowHandle DesiredHostilityCurve; // 0x1F0(0x10)
		UFortIntensityCurveSequenceProgression IntensitySequenceProgression; // 0x200(0x8)
		unsigned char UnknownData39_6[0x70]; // 0x208(0x70) UNKNOWN PROPERTY
		float AliveMultiplier; // 0x278(0x4)
		TEnumAsByte SpawnLimitType; // 0x27C(0x1)
		unsigned char UnknownData40_6[0x3]; // 0x27D(0x3) UNKNOWN PROPERTY
		int32_t SpawnLimit; // 0x280(0x4)
		int32_t PawnNumberLimitProgress; // 0x284(0x4)
		int32_t SpawnPointsLimitProgress; // 0x288(0x4)
		bool bSpawnLimitReached; // 0x28C(0x1)
		bool bHasSpawnedAllBurstSpawnAI; // 0x28D(0x1)
		bool bOverrideAliveCounts; // 0x28E(0x1)
		unsigned char UnknownData41_6[0x1]; // 0x28F(0x1) UNKNOWN PROPERTY
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
		unsigned char UnknownData42_6[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnEncounterAllEnemiesKilled; // 0x2C0(0x10)
		FMulticastInlineDelegate OnEncounterEnemySpawned; // 0x2D0(0x10)
		FMulticastInlineDelegate OnEncounterEnemySpawnFailed; // 0x2E0(0x10)
		FMulticastInlineDelegate OnEncounterAllBurstEnemiesSpawned; // 0x2F0(0x10)
		FMulticastInlineDelegate OnEncounterCompleted; // 0x300(0x10)
		FMulticastInlineDelegate OnEncounterPawnDied; // 0x310(0x10)
		FMulticastInlineDelegate OnEncounterSpawnedFinalEnemy; // 0x320(0x10)
		FMulticastInlineDelegate OnEncounterRiftSpawned; // 0x330(0x10)
		FMulticastInlineDelegate OnBuildingRiftBlockedShouldDie; // 0x340(0x10)
		unsigned char UnknownData43_6[0x3]; // 0x350(0x3) UNKNOWN PROPERTY
		bool bDisplayThreatVisuals; // 0x353(0x1)
		float BaseDesiredUtilities; // 0x354(0x40)
		unsigned char UnknownData44_6[0x4]; // 0x394(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer UtilitiesRequiredTags; // 0x398(0x200)
		FGameplayTagContainer InjectedTagForUtilityCheck; // 0x598(0x20)
		unsigned char UnknownData45_6[0x4]; // 0x5B8(0x4) UNKNOWN PROPERTY
		float MaxLargeSpawnGroupDiscountInterval; // 0x5BC(0x4)
		float MaxSelectionToSpawningDelay; // 0x5C0(0x4)
		unsigned char UnknownData46_6[0x54]; // 0x5C4(0x54) UNKNOWN PROPERTY
		TArray CurrentDesiredUtilities; // 0x618(0x10)
		float UtilityRecentSelectionPenalties; // 0x628(0x40)
		float UtilityEffectivenessMeasurements; // 0x668(0x40)
		FCurveTableRowHandle UtilityEffectivenessMultiplierCurve; // 0x6A8(0x10)
		float UtilityEffectivenessInfluenceCap; // 0x6B8(0x4)
		unsigned char UnknownData47_6[0x4]; // 0x6BC(0x4) UNKNOWN PROPERTY
		TArray CurrentTopUtilityPercentages; // 0x6C0(0x10)
		TArray UsedTopUtilities; // 0x6D0(0x10)
		TArray CurrentlySelectedFreeUtilities; // 0x6E0(0x10)
		int32_t NumUtilitiesConsidered; // 0x6F0(0x4)
		float ReactivityPercentage; // 0x6F4(0x4)
		bool bAdjustUtilitiesDuringRest; // 0x6F8(0x1)
		bool bDespawnAIsDuringRest; // 0x6F9(0x1)
		unsigned char UnknownData48_6[0x2]; // 0x6FA(0x2) UNKNOWN PROPERTY
		float LastPlayerCombatFactorUpdateTime; // 0x6FC(0x4)
		float LastUtilityAdjustTime; // 0x700(0x4)
		float LastSpawnPointAdjustmentTime; // 0x704(0x4)
		float LastLargeGroupSpawnTime; // 0x708(0x4)
		unsigned char UnknownData49_6[0x4]; // 0x70C(0x4) UNKNOWN PROPERTY
		TArray EnemySpawnData; // 0x710(0x10)
		FFortAIEncounterPIDController EncounterPIDController; // 0x720(0x68)
		int32_t CurrentSpawnPointsCap; // 0x788(0x4)
		int32_t CurrentSpawnPointsUsed; // 0x78C(0x4)
		unsigned char UnknownData50_6[0x8]; // 0x790(0x8) UNKNOWN PROPERTY
		int32_t FailSafeMinSpawnPoints; // 0x798(0x4)
		unsigned char UnknownData51_6[0x4]; // 0x79C(0x4) UNKNOWN PROPERTY
		TArray ActiveSpawnGroups; // 0x7A0(0x10)
		float EncounterEngagementDistance; // 0x7B0(0x4)
		float MinRelevantBuildingDamagedDistance; // 0x7B4(0x4)
		float MaxRelevantBuildingDamagedDistance; // 0x7B8(0x4)
		unsigned char UnknownData52_6[0x14]; // 0x7BC(0x14) UNKNOWN PROPERTY
		AActor CurrentGroupSpawnPoint; // 0x7D0(0x8)
		TEnumAsByte EncounterState; // 0x7D8(0x1)
		TEnumAsByte PacingState; // 0x7D9(0x1)
		unsigned char UnknownData53_6[0x2]; // 0x7DA(0x2) UNKNOWN PROPERTY
		float LastPacingStateTransitionTime; // 0x7DC(0x4)
		FFortAIEncounterWaveProgressEstimation WaveProgressEstimate; // 0x7E0(0x1C)
		float DesiredDifficultyLevel; // 0x7FC(0x4)
		float DifficultyLevelOverride; // 0x800(0x4)
		unsigned char UnknownData54_6[0x4]; // 0x804(0x4) UNKNOWN PROPERTY
		AFortAIDirector MyAIDirector; // 0x808(0x8)
		TArray DataManagers; // 0x810(0x10)
		AActor TargetObjective; // 0x820(0x8)
		bool bOnlyActiveAtNight; // 0x828(0x1)
		unsigned char UnknownData55_6[0x3]; // 0x829(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData56_6[0x1]; // 0x9A3(0x1) UNKNOWN PROPERTY
		int32_t ActiveEnemyCap; // 0x9A4(0x4)
		unsigned char UnknownData57_6[0x8]; // 0x9A8(0x8) UNKNOWN PROPERTY
		float CurrentHostilityLevel; // 0x9B0(0x4)
		unsigned char UnknownData58_6[0x4]; // 0x9B4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnEncounterRampStarted; // 0x9B8(0x10)
		FMulticastInlineDelegate OnEncounterPeakStarted; // 0x9C8(0x10)
		FMulticastInlineDelegate OnEncounterFadeStarted; // 0x9D8(0x10)
		FMulticastInlineDelegate OnEncounterRestStarted; // 0x9E8(0x10)
		FMulticastInlineDelegate OnEncounterCombatParticipation; // 0x9F8(0x10)
		FMulticastInlineDelegate OnEncounterOptionsChanged; // 0xA08(0x10)
		UClass RiftClassTemplate; // 0xA18(0x8)
		unsigned char UnknownData59_6[0x20]; // 0xA20(0x20) UNKNOWN PROPERTY
		TMap ExternalAISpawners; // 0xA40(0x50)
		FFortAIEncounterQueryData EncounterQueryData; // 0xA90(0x20)
		UFortAIEncounterRiftManager RiftManager; // 0xAB0(0x8)
		FString AssociatedMissionName; // 0xAB8(0x10)
		TEnumAsByte AssociatedMissionType; // 0xAC8(0x1)
		unsigned char UnknownData60_6[0x3]; // 0xAC9(0x3) UNKNOWN PROPERTY
		bool bCanBeActive : 1; // 0xACC:0(0x1)
		unsigned char UnknownData61_5[0x3]; // 0xACD(0x3) UNKNOWN PROPERTY
		TArray EncounterAssignments; // 0xAD0(0x10)
		UFortAIAssignmentSettings DefaultEncounterAssignmentSettings; // 0xAE0(0x8)
		unsigned char UnknownData62_6[0x30]; // 0xAE8(0x30) UNKNOWN PROPERTY
		int32_t MaxActiveAlive; // 0xB18(0x4)
		int32_t MaxSpawnPointsUsed; // 0xB1C(0x4)
		UCurveFloat OverrideSpawnPointsCurve; // 0xB20(0x8)
		unsigned char UnknownData63_6[0x1F8]; // 0xB28(0x1F8) UNKNOWN PROPERTY
		bool bSendFullAnalyticsReport; // 0xD20(0x1)
		bool bUseAILifespans; // 0xD21(0x1)
		bool bTrackCombatParticipation; // 0xD22(0x1)
		unsigned char UnknownData64_6[0x5]; // 0xD23(0x5) UNKNOWN PROPERTY
		FGameplayTagContainer ModifierTags; // 0xD28(0x20)
		TArray TimedModifierTags; // 0xD48(0x10)
		FGameplayTagContainer GameContextTags; // 0xD58(0x20)
		AFortGameplayMutator_AILevelVariance AILevelMutator; // 0xD78(0x8)
		TArray EncounterModifierTagsMutators; // 0xD80(0x10)
		unsigned char UnknownData65_7[0x8]; // 0xD90(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterInfo");
			return ret;
		}

		void UnRegisterAISpawner(AActor InAISpawner); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A3E38
		void SpawnTestAIGroup(UFortAISpawnGroup SpawnGroupToSpawn, FVector SpawnLocation, FRotator SpawnRotation, AActor SpawnSource, TArray AbilitySetsToGrantOnSpawn, FFortAISpawnGroupUpgradeData UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF4149A3D58
		AFortAIPawn SpawnAIPawnReservedForEnemySpawner(AActor EnemySpawner, FVector SpawnLocation, FRotator SpawnRotation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4149A3C78
		void SetPawnNumberLimit(int32_t InPawnNumberLimit); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A3B98
		void SetNukeWavesAtEncounterEnd(bool bNuke); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A3AB8
		void SetEncounterActivationState(bool bEncounterActivityState); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A39D8
		void RequestActivation(int32_t ActivationDelay); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A38F8
		void RegisterAISpawner(AActor InAISpawner); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A3818
		void OnRestStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF4149A3738
		void OnRampStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF4149A3658
		void OnPeakStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF4149A3578
		void OnGoalTakeDamage(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149A3498
		void OnGameDifficultyChanged(); // Flags: Final|Native|Private 0x7FF4149A33B8
		void OnFadeStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF4149A32D8
		void OnEncounterPawnDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF4149A31F8
		void NotifyRiftDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149A3118
		bool GroupHasAIRemainingToSpawn(FFortAISpawnerData& FortAISpawnerData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A3038
		int32_t GetPawnNumberLimit(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A2F58
		float GetEncounterTimeSeconds(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A2E78
		void GetEncounterRifts(TArray& OutRifts); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149A2D98
		AActor GetEncounterQueryActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A2CB8
		void GetEncounterGameplayTags(FGameplayTagContainer& OutEncounterTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149A2BD8
		AFortAIDirectorDataManager GetEncounterDataManager(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4149A2AF8
		void GetEncounterAssignmentGoalActors(TArray& OutGoalActors); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149A2A18
		bool GetCurrentSpawnAreaDirections(TArray& OutDirections); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149A2938
		bool EncounterHasReservedSpawnRequestForEnemySpawner(AActor EnemySpawner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A2858
		void DespawnPendingAndCurrentAI(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A2778
		UFortAIAssignment CreateEncounterAssignment(UFortAIAssignmentSettings AssignmentSettings, AActor GoalActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A2698
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

		UFortAIEncounterInfo GetEncounterInfo(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A3F18
	};


	// Class FortniteAI.FortAIEncounterRiftManager
	// Inherited from UObject
	// Size: 0x288 (0x2B0 - 0x28)
	class UFortAIEncounterRiftManager : public UObject	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UFortAIEncounterInfo MyEncounter; // 0x38(0x8)
		AFortAIDirector AIDirector; // 0x40(0x8)
		FFortAIEncounterSpawnArea CurrentSpawnArea; // 0x48(0x58)
		FFortAIEncounterSpawnArea FutureSpawnArea; // 0xA0(0x58)
		float UpdateIntervalTimeSeconds; // 0xF8(0x4)
		int32_t NumRiftsToUse; // 0xFC(0x4)
		int32_t MinRiftsToUse; // 0x100(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FFortEncounterSettings EncounterSettings; // 0x108(0xC0)
		float ExtraSpawnLocationPercentage; // 0x1C8(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo; // 0x1D0(0x28)
		FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo; // 0x1F8(0x28)
		FFortAIEncounterQueryDirectionTracker EncounterQueryDirectionTracker; // 0x220(0x48)
		UClass RiftClassTemplate; // 0x268(0x8)
		float LastObjectiveBatchPathCostUpdateTime; // 0x270(0x4)
		float LastPlayerBatchPathCostUpdateTime; // 0x274(0x4)
		unsigned char UnknownData07_7[0x38]; // 0x278(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterRiftManager");
			return ret;
		}

		void OnRiftDestroyed(AActor Rift); // Flags: Final|Native|Public 0x7FF4149A40D8
		AFortMission GetAssociatedMission(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A3FF8
	};


	// Class FortniteAI.FortAIEncounterSequence
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UFortAIEncounterSequence : public UObject	
	{
	public:
		FFortGeneratedEncounterSequence GeneratedEncounterSequence; // 0x28(0x30)
		int32_t CurrentEncounterIndexInSequence; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		UFortAIEncounterInfo CurrentEncounter; // 0x60(0x8)
		AFortAIDirector AssociatedAIDirector; // 0x68(0x8)
		AFortMission AssociatedMission; // 0x70(0x8)
		TArray TargetActors; // 0x78(0x10)
		UFortAIAssignmentSettings AssignmentSettings; // 0x88(0x8)
		FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo; // 0x90(0x28)
		AActor OptionalQueryActor; // 0xB8(0x8)
		FGameplayTagContainer InjectedTags; // 0xC0(0x20)
		FFortEncounterSettings EncounterSettings; // 0xE0(0xC0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIEncounterSequence");
			return ret;
		}

		void StopCurrentEncounter(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A4C38
		UFortAIEncounterInfo StartCurrentEncounterWithSavedData(EFortEncounterSequenceResult& OutRequestResult, int32_t ActivationDelay); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A4B58
		UFortAIEncounterInfo StartCurrentEncounter(EFortEncounterSequenceResult& OutRequestResult, TArray& InTargetActors, UFortAIAssignmentSettings InAssignmentSettings, FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, AActor InOptionalQueryActor, FGameplayTagContainer InInjectedTags, FFortEncounterSettings InEncounterSettings, int32_t ActivationDelay); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A4A78
		void SetEncounterStartingData(TArray& InTargetActors, UFortAIAssignmentSettings InAssignmentSettings, FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, AActor InOptionalQueryActor, FGameplayTagContainer InInjectedTags, FFortEncounterSettings InEncounterSettings); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A4998
		EFortEncounterSequenceResult Previous(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A48B8
		EFortEncounterSequenceResult Next(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A47D8
		EFortEncounterSequenceResult Last(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A46F8
		bool IsOnFinalIndexInSequence(); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A4618
		bool HasEncounter(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A4538
		int32_t GetNumEncountersInSequence(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A4458
		int32_t GetEncounterIndexInSequence(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A4378
		UFortAIEncounterInfo GetCurrentEncounter(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A4298
		bool EncounterBelongsToSequence(UFortAIEncounterInfo InEncounter); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A41B8
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

		bool IsFloatingTarget(); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF4149A4DF8
		float GetObjectiveCompletionPercentage(); // Flags: Event|Public|BlueprintEvent 0x7FF4149A4D18
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

		bool TeleportAIPawn(AFortAIPawn AIPawn, FVector DestLocation, FRotator DestRotation, bool bIgnoreCollision); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4149A54F8
		void SetHearingRange(AActor AIAgent, float Range); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149A5418
		void RequestNavUpdateForBuilding(ABuildingActor BuildingActor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4149A5338
		void MakeNoiseEventAtLocation(AActor NoiseMaker, float MaxRange, FVector& NoiseLocation, FName NoiseTag); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149A5258
		void MakeNoiseEvent(AActor NoiseMaker, float MaxRange, FName NoiseTag); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149A5178
		bool IsConcealedByPerceptionModifiers(UObject WorldContextObject, FVector ObserverLocation, FVector TargetLocation, float& OutConcealment); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149A5098
		UFortAthenaAIRuntimeParameters GetOrCreateAIRuntimeParameters(AAIController AIController, UClass ParametersClass); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149A4FB8
		UAthenaAISpawner GetAISpawner(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4149A4ED8
	};


	// Class FortniteAI.FortAIGoalManager
	// Inherited from AActor -> UObject
	// Size: 0x170 (0x400 - 0x290)
	class AFortAIGoalManager : public AActor	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		TArray WorldAssignments; // 0x298(0x10)
		TArray WorldEnemyAssignments; // 0x2A8(0x10)
		UFortAIAssignment DefaultAttackPlayersAssignment; // 0x2B8(0x8)
		unsigned char UnknownData05_6[0x60]; // 0x2C0(0x60) UNKNOWN PROPERTY
		TArray CombinedQueries; // 0x320(0x10)
		unsigned char UnknownData06_6[0x50]; // 0x330(0x50) UNKNOWN PROPERTY
		UFortAIAssignmentSettings DefaultEncounterAssignmentSettings; // 0x380(0x8)
		UFortAIAssignmentSettings DefaultEnemyAssignmentSettings; // 0x388(0x8)
		TArray PawnGoalSelectionTable; // 0x390(0x10)
		unsigned char UnknownData07_7[0x60]; // 0x3A0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIGoalManager");
			return ret;
		}

		void SetCurrentGoalDiscouragement(UObject WorldContext, AFortAIController AI); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4149A63D8
		void RemoveWorldAssignment(UObject WorldContextObject, FFortAIAssignmentIdentifier AssignmentIdentifier); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4149A62F8
		void RemoveGoalsFromWorldAssignment(UObject WorldContextObject, FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray& GoalInfos); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A6218
		void RemoveGoalFromWorldAssignment(UObject WorldContextObject, FFortAIAssignmentIdentifier& AssignmentIdentifier, FFortAIGoalInfo& GoalInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A6138
		void MakeGoalsFromLocationsAndActor(TArray& Goals, UObject WorldContextObject, TArray& GoalLocations, AActor GoalActor); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A6058
		void MakeGoalsFromLocations(TArray& Goals, UObject WorldContextObject, TArray& GoalLocations); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A5F78
		void MakeGoalsFromActors(TArray& Goals, UObject WorldContextObject, TArray& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A5E98
		void MakeGoalFromLocation(FFortAIGoalInfo& Goal, UObject WorldContextObject, FVector& GoalLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149A5DB8
		void MakeGoalFromActor(FFortAIGoalInfo& Goal, UObject WorldContextObject, AActor GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A5CD8
		bool IsDiscouragedFromActor(AFortAIController AI, AActor Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149A5BF8
		void CreateWorldAssignment(UObject WorldContextObject, FFortAIAssignmentIdentifier WorldAssignmentIdentifier, UFortAIAssignmentSettings AssignmentSettings, UClass GoalProvider, FFortAIAssignmentIdentifier& AssignmentIdentifier, EAssignmentCreationResult& CreationResult); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A5B18
		void ClearGoalDiscouragementFromActor(AFortAIController AI, AActor Actor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149A5A38
		UFortAIAssignment AddWorldAssignment(UFortAIAssignmentSettings AssignmentSettings, AActor GoalActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A5958
		void AddGoalToWorldAssignment(UObject WorldContextObject, FFortAIAssignmentIdentifier& AssignmentIdentifier, FFortAIGoalInfo& GoalInfo); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A5878
		void AddGoalsToWorldAssignment(UObject WorldContextObject, FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray& GoalInfos); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A5798
		void AddGoalActorToAssignment(UFortAIAssignment Assignment, AActor GoalActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A56B8
		void AddGoal(AActor GoalActor, UFortAIAssignmentSettings GoalSettings); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A55D8
	};


	// Class FortniteAI.FortAINearbyActorsPerceptionComponent
	// Inherited from UFortNearbyActorsPerceptionComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xE0 - 0xC8)
	class UFortAINearbyActorsPerceptionComponent : public UFortNearbyActorsPerceptionComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		TScriptInterface CachedLODSettingsManager; // 0xD0(0x10)

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
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr SkeletalMesh; // 0x38(0x20)
		TWeakObjectPtr AssembledMeshSchema; // 0x58(0x20)
		TWeakObjectPtr CharacterBlueprint; // 0x78(0x20)
		TWeakObjectPtr AnimPreset; // 0x98(0x20)
		TWeakObjectPtr IKRetargeter; // 0xB8(0x20)
		TArray OverrideMaterials; // 0xD8(0x10)
		TWeakObjectPtr AnimationBP; // 0xE8(0x20)
		TArray CharacterParts; // 0x108(0x10)
		TWeakObjectPtr MarkerIconOverride; // 0x118(0x20)

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
		TArray PawnClasses; // 0x28(0x10)
		TArray PawnVariantDefinitions; // 0x38(0x10)
		int32_t MinPlayersToSpawnVariant; // 0x48(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle SpawnPointValueHandle; // 0x50(0x10)
		int32_t CachedSpawnPointValue; // 0x60(0x4)
		float EncounterExpectedLifespan; // 0x64(0x4)
		int32_t VersionNum; // 0x68(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

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

		FFortAIAssignmentIdentifier GetRootAssignmentIdentifier(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A64B8
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

		bool OnReceiveSpawnGroup(); // Flags: Event|Public|BlueprintEvent 0x7FF4149A6678
		bool IsReadyToReceiveNewSpawnGroup(); // Flags: Event|Public|BlueprintEvent 0x7FF4149A6598
	};


	// Class FortniteAI.FortAISpawnGroup
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x160 (0x190 - 0x30)
	class UFortAISpawnGroup : public UPrimaryDataAsset	
	{
	public:
		float EnemyUtilities; // 0x30(0x40)
		TArray EnemiesToSpawn; // 0x70(0x10)
		bool bIsPrototype; // 0x80(0x1)
		bool bIsValidForEnemySpawners; // 0x81(0x1)
		bool bIsLargeSpawnGroup; // 0x82(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x83(0x1) UNKNOWN PROPERTY
		float MaxDiscountRatio; // 0x84(0x4)
		bool bUseWeightSystem; // 0x88(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		FScalableFloat Weight; // 0x90(0x28)
		FScalableFloat MinNumber; // 0xB8(0x28)
		FScalableFloat MaxNumber; // 0xE0(0x28)
		FCurveTableRowHandle MaxGroupCategoryPopulationDensityCurve; // 0x108(0x10)
		TArray EncounterTypeData; // 0x118(0x10)
		FGameplayTagContainer SpawnGroupGameplayTags; // 0x128(0x20)
		FGameplayTagQuery RequiredTagQuery; // 0x148(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAISpawnGroup");
			return ret;
		}

		bool IsValidForEnemySpawners(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A6AD8
		bool IsPrototype(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A69F8
		bool IsLargeSpawnGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A6918
		int32_t GetNumberOfEnemies(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A6838
		UClass GetEnemy(int32_t EnemyIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A6758
	};


	// Class FortniteAI.FortAISpawnGroupCapsCategorySet
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortAISpawnGroupCapsCategorySet : public UObject	
	{
	public:
		TArray SpawnGroupCapsCategories; // 0x28(0x10)

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
		TArray SpawnGroups; // 0x30(0x10)

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
		TArray BasePawnUpgrades; // 0x90(0x10)
		FName AdditionalModifiersLootTierGroup; // 0xA0(0x4)
		bool bInvalidForEnemySpawners; // 0xA4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY
		float SpawnGroupDiscountPercentage; // 0xA8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray UpgradeProbabilities; // 0x30(0x10)

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

		float GetTetheredBoxBoundsWidth(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF4149A6F38
		float GetTetheredBoxBoundsHeight(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF4149A6E58
		float GetTetheredBoxBoundsEQSSpaceBetween(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF4149A6D78
		float GetTetheredBoxBoundsEQSGridSize(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|BlueprintEvent 0x7FF4149A6C98
		FVector GetTetheredBoxBoundsCenter(); // Flags: RequiredAPI|BlueprintAuthorityOnly|Event|Public|HasDefaults|BlueprintEvent 0x7FF4149A6BB8
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
		unsigned char UnknownData01_7[0x10]; // 0x278(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings");
			return ret;
		}

		UFortAsyncAction_MakeTieredWaveEncounterSettings CreateAsyncAction_MakeTieredWaveEncounterSettings(FTieredWaveSetData& WaveData, FFortEncounterSettings& InEncounterSettings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149A7018
	};


	// Class FortniteAI.FortAthenaAIBotController
	// Inherited from AAIController -> AController -> AActor -> UObject
	// Size: 0x1338 (0x16F0 - 0x3B8)
	class AFortAthenaAIBotController : public AAIController	
	{
	public:
		unsigned char UnknownData45_3[0x48]; // 0x3B8(0x48) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTeamSetDelegate; // 0x400(0x10)
		AActor PreviousVehicle; // 0x410(0x8)
		FMulticastInlineDelegate OnPickupCreated; // 0x418(0x10)
		unsigned char UnknownData46_6[0x10]; // 0x428(0x10) UNKNOWN PROPERTY
		TMap AppliedInGameModifierAbilitySetHandles; // 0x438(0x50)
		TSet GadgetTrackedAttributeItemInstanceIds; // 0x488(0x50)
		unsigned char UnknownData47_6[0x50]; // 0x4D8(0x50) UNKNOWN PROPERTY
		FFortBotTargetHandler TargetHandler; // 0x528(0x40)
		unsigned char UnknownData48_6[0x1]; // 0x568(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit49 : 1; // 0x569:0(0x1) UNKNOWN PROPERTY
		bool bIsAnAthenaGameParticipant : 1; // 0x569:1(0x1)
		unsigned char UnknownBit50 : 1; // 0x569:2(0x1) UNKNOWN PROPERTY
		bool bEnableBotPerception : 1; // 0x569:3(0x1)
		unsigned char UnknownData51_5[0x12]; // 0x56A(0x12) UNKNOWN PROPERTY
		EReachLocationValidationMode ReachLocationValidationMode; // 0x57C(0x1)
		unsigned char UnknownData52_6[0x3]; // 0x57D(0x3) UNKNOWN PROPERTY
		UBehaviorTree BehaviorTree; // 0x580(0x8)
		FFortBotInventoryInfo SlotItems; // 0x588(0x270)
		TArray LootItemsToDropOnDeath; // 0x7F8(0x10)
		UFortWorldItem ForcedBestWeapon; // 0x808(0x8)
		unsigned char UnknownData53_6[0x48]; // 0x810(0x48) UNKNOWN PROPERTY
		UFortAthenaAIBotInventoryDigestedSkillSet CacheInventoryDigestedSkillSet; // 0x858(0x8)
		UFortAthenaAIBotHealingDigestedSkillSet CacheHealingDigestedSkillSet; // 0x860(0x8)
		unsigned char UnknownData54_6[0x8]; // 0x868(0x8) UNKNOWN PROPERTY
		AFortPlayerPawnAthena PlayerBotPawn; // 0x870(0x8)
		UAthenaAIServicePlayerBots CachedAIServicePlayerBots; // 0x878(0x8)
		AFortGameModeAthena CachedGameMode; // 0x880(0x8)
		UFortAthenaAIRuntimeParametersComponent CachedAIRuntimeParametersComponent; // 0x888(0x8)
		UFortAthenaAIRuntimeParameters_Leash CachedLeashRuntimeParameters; // 0x890(0x8)
		UFortAthenaAIRuntimeParameters_AffiliationBase CachedAffiliationRuntimeParameters; // 0x898(0x8)
		UFortAthenaAIRuntimeParameters_AIBotInventory CachedInventoryRuntimeParameters; // 0x8A0(0x8)
		UFortAthenaNpcPatrollingComponent CachedPatrollingComponent; // 0x8A8(0x8)
		UFortAIControllerPerksComponent CachedAIPerksComponent; // 0x8B0(0x8)
		UFortAICombatTokenConsumerComponent CachedTokenConsumerComponent; // 0x8B8(0x8)
		TScriptInterface CachedAIAimingInterface; // 0x8C0(0x10)
		unsigned char UnknownData55_6[0x8]; // 0x8D0(0x8) UNKNOWN PROPERTY
		TArray DelayedStimulus; // 0x8D8(0x10)
		unsigned char UnknownData56_6[0x18]; // 0x8E8(0x18) UNKNOWN PROPERTY
		TArray ObjectsThreatList; // 0x900(0x10)
		TArray TrapsThreatList; // 0x910(0x10)
		EAlertLevel CurrentAlertLevel; // 0x920(0x1)
		unsigned char UnknownData57_6[0x7]; // 0x921(0x7) UNKNOWN PROPERTY
		FAlertLevelInfo DefaultAlertLevelInfo; // 0x928(0x10)
		FMulticastInlineDelegate OnAlertLevelChangedEventDelegate; // 0x938(0x10)
		FMulticastInlineDelegate OnStealthMeterChangedEventDelegate; // 0x948(0x10)
		unsigned char UnknownData58_6[0x8]; // 0x958(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAgentDBNOStatusChangedEventDelegate; // 0x960(0x10)
		FMulticastInlineDelegate OnAgentDiedEventDelegate; // 0x970(0x10)
		FMulticastInlineDelegate OnAgentGameOver; // 0x980(0x10)
		unsigned char UnknownData59_6[0x48]; // 0x990(0x48) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPlayerPawnKilledByBot; // 0x9D8(0x10)
		FMulticastInlineDelegate OnAIPawnKilledByBot; // 0x9E8(0x10)
		FMulticastInlineDelegate OnCurrentTargetChangedDelegate; // 0x9F8(0x10)
		unsigned char UnknownData60_6[0x30]; // 0xA08(0x30) UNKNOWN PROPERTY
		TScriptInterface Inventory; // 0xA38(0x10)
		UFortControllerComponent_InventorySwitcher InventorySwitcherComponent; // 0xA48(0x8)
		float Skill; // 0xA50(0x4)
		bool bAllowUnsupportedItemsInDefaultInventory : 1; // 0xA54:0(0x1)
		bool bMultiplyEffectivenessOfWeaponWithSurfaceDamageToFindBestWeapon : 1; // 0xA54:1(0x1)
		unsigned char UnknownData61_5[0x3]; // 0xA55(0x3) UNKNOWN PROPERTY
		TArray BotSkillSetClasses; // 0xA58(0x10)
		unsigned char UnknownData62_6[0x20]; // 0xA68(0x20) UNKNOWN PROPERTY
		UFortAthenaAIBotInventoryItems StartupInventory; // 0xA88(0x8)
		FFortAthenaLoadout CosmeticLoadoutBC; // 0xA90(0x130)
		TArray CustomCharacterPartOverridesBC; // 0xBC0(0x10)
		UFortBotNameSettings NameSettingsBC; // 0xBD0(0x8)
		FScalableFloat SpectateOnDeathMinTime; // 0xBD8(0x28)
		FScalableFloat SpectateOnDeathMaxTime; // 0xC00(0x28)
		FScalableFloat EmotesMaxCount; // 0xC28(0x28)
		FVector LeashGameplayVolumeProjectExtent; // 0xC50(0x18)
		UFortAthenaAIBotPerceptionDigestedSkillSet CachePerceptionDigestedSkillSet; // 0xC68(0x8)
		UFortAthenaAIBotHarvestDigestedSkillSet CacheHarvestDigestedSkillSet; // 0xC70(0x8)
		UFortAthenaAIBotMovementDigestedSkillSet CacheMovementSkillSet; // 0xC78(0x8)
		UFortAthenaAIBotLootingDigestedSkillSet CacheLootingSkillSet; // 0xC80(0x8)
		UFortAthenaAIBotAttackingDigestedSkillSet CacheAttackingSkillSet; // 0xC88(0x8)
		UFortAthenaAIBotPlayStyleDigestedSkillSet CachePlayStyleSkillSet; // 0xC90(0x8)
		UFortAthenaAIBotUnstuckDigestedSkillSet CacheUnstuckSkillSet; // 0xC98(0x8)
		UFortAthenaAIBotRangeAttackDigestedSkillSet CacheRangeAttackSkillSet; // 0xCA0(0x8)
		UFortAthenaAIBotVehicleDigestedSkillSet CacheVehicleSkillSet; // 0xCA8(0x8)
		unsigned char UnknownData63_6[0x60]; // 0xCB0(0x60) UNKNOWN PROPERTY
		UFortInteractContextInfo InteractContextInfo; // 0xD10(0x8)
		unsigned char UnknownData64_6[0x78]; // 0xD18(0x78) UNKNOWN PROPERTY
		UFortAthenaAIBotAimingDigestedSkillSet CacheAimingDigestedSkillSet; // 0xD90(0x8)
		unsigned char UnknownData65_6[0x4]; // 0xD98(0x4) UNKNOWN PROPERTY
		unsigned char UnknownBit66 : 1; // 0xD9C:0(0x1) UNKNOWN PROPERTY
		bool bCanBeDestroyedOnDeath : 1; // 0xD9C:1(0x1)
		unsigned char UnknownData67_5[0xB]; // 0xD9D(0xB) UNKNOWN PROPERTY
		FVector LastDeathLocation; // 0xDA8(0x18)
		FRotator LastDeathRotation; // 0xDC0(0x18)
		UFortWorldItem CachedWorldItem; // 0xDD8(0x8)
		unsigned char UnknownData68_6[0x8]; // 0xDE0(0x8) UNKNOWN PROPERTY
		AFortWeapon CacheWeaponUsedToCalculateType; // 0xDE8(0x8)
		bool bCachedIsUsingArcedProjectileWeapon; // 0xDF0(0x1)
		unsigned char UnknownData69_6[0x3]; // 0xDF1(0x3) UNKNOWN PROPERTY
		float CachedProjectileGravityScale; // 0xDF4(0x4)
		AFortWeapon CachedWeaponUsedToCalculateProjectileData; // 0xDF8(0x8)
		UStatManager StatManager; // 0xE00(0x8)
		TArray ActiveWeakSpots; // 0xE08(0x10)
		unsigned char UnknownData70_6[0x28]; // 0xE18(0x28) UNKNOWN PROPERTY
		UClass CacheBotPawnClass; // 0xE40(0x8)
		unsigned char UnknownData71_6[0x8]; // 0xE48(0x8) UNKNOWN PROPERTY
		AActor CurrentLootActor; // 0xE50(0x8)
		UAthenaMarkerComponent MarkerComponent; // 0xE58(0x8)
		FString BotPlayerName; // 0xE60(0x10)
		FString BotIDSuffix; // 0xE70(0x10)
		FString BotPlayerNameWithSkillRating; // 0xE80(0x10)
		unsigned char UnknownData72_6[0x18]; // 0xE90(0x18) UNKNOWN PROPERTY
		UFortAthenaMutator_SpawningPolicyData PolicyDataSpawner; // 0xEA8(0x8)
		FBotPerceivedSound PerceivedSounds; // 0xEB0(0xC8)
		unsigned char UnknownData73_6[0x60]; // 0xF78(0x60) UNKNOWN PROPERTY
		UFortControllerComponent_Telemetry FortControllerComponent_Telemetry; // 0xFD8(0x8)
		bool bForceUsingBuildingTool; // 0xFE0(0x1)
		bool bForceHolsterWeapon; // 0xFE1(0x1)
		unsigned char UnknownData74_6[0x6]; // 0xFE2(0x6) UNKNOWN PROPERTY
		UFortWorldItem PendingEquipWeapon; // 0xFE8(0x8)
		unsigned char UnknownData75_6[0x50]; // 0xFF0(0x50) UNKNOWN PROPERTY
		APawn PlayerToSpectateOnDeath; // 0x1040(0x8)
		FMulticastInlineDelegate OnPlayerPawnAISpawnedDelegate; // 0x1048(0x10)
		FMulticastInlineDelegate OnPawnAISpawnedDelegate; // 0x1058(0x10)
		unsigned char UnknownData76_6[0x108]; // 0x1068(0x108) UNKNOWN PROPERTY
		UAISenseConfig_Sight AISenseConfig_SightRuntime; // 0x1170(0x8)
		UAISenseConfig_Hearing AISenseConfig_HearingRuntime; // 0x1178(0x8)
		unsigned char UnknownData77_6[0x10]; // 0x1180(0x10) UNKNOWN PROPERTY
		AActor BotOwner; // 0x1190(0x8)
		int32_t BotControllerUID; // 0x1198(0x4)
		unsigned char UnknownData78_6[0x4]; // 0x119C(0x4) UNKNOWN PROPERTY
		AFortPlayerPawnAthena ReviveTarget; // 0x11A0(0x8)
		unsigned char UnknownData79_6[0x90]; // 0x11A8(0x90) UNKNOWN PROPERTY
		UFortAthenaAIBotCustomizationData BotData; // 0x1238(0x8)
		FDebugMinimapData DebugMinimapData; // 0x1240(0x190)
		AFortPlayerPawnAthena RevivePlayerPawnToken; // 0x13D0(0x8)
		unsigned char UnknownData80_6[0x18]; // 0x13D8(0x18) UNKNOWN PROPERTY
		AActor LeashActorToFollow; // 0x13F0(0x8)
		FVector LeashActorToFollowLocalOffset; // 0x13F8(0x18)
		AFortAthenaAILeashVolume LeashVolume; // 0x1410(0x8)
		TWeakObjectPtr LeashGameplayVolume; // 0x1418(0x8)
		UFortGameStateComponent_AffiliationManager CachedAffiliationManager; // 0x1420(0x8)
		UFortActorComponent_Affiliation CachedAffiliationComponent; // 0x1428(0x8)
		bool bIsAffectedByMutatorHealthAndShieldModifiers; // 0x1430(0x1)
		unsigned char UnknownData81_6[0x7]; // 0x1431(0x7) UNKNOWN PROPERTY
		bool bHasChangedPawnCullDistanceToAggroMode; // 0x1438(0x1)
		unsigned char UnknownData82_6[0x7]; // 0x1439(0x7) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_AIBotRespawn RespawnRuntimeParameters; // 0x1440(0x8)
		TWeakObjectPtr CurrentBlockingObstacle; // 0x1448(0x8)
		TWeakObjectPtr CurrentTargetVehicle; // 0x1450(0x8)
		unsigned char UnknownData83_6[0x10]; // 0x1458(0x10) UNKNOWN PROPERTY
		TArray NoSmashActors; // 0x1468(0x10)
		unsigned char UnknownData84_6[0x8]; // 0x1478(0x8) UNKNOWN PROPERTY
		APawn FinisherPawn; // 0x1480(0x8)
		unsigned char UnknownData85_6[0x54]; // 0x1488(0x54) UNKNOWN PROPERTY
		EFortPawnStasisMode PreviousStasisMode; // 0x14DC(0x1)
		bool bPostponeGiveWeaponCheat; // 0x14DD(0x1)
		bool bPostponeGiveMaterialsCheat; // 0x14DE(0x1)
		unsigned char UnknownData86_6[0x1]; // 0x14DF(0x1) UNKNOWN PROPERTY
		float StartSpectatingTime; // 0x14E0(0x4)
		unsigned char UnknownData87_6[0xB4]; // 0x14E4(0xB4) UNKNOWN PROPERTY
		UAthenaDanceItemDefinition RequestedEmoteAsset; // 0x1598(0x8)
		unsigned char UnknownData88_6[0x8]; // 0x15A0(0x8) UNKNOWN PROPERTY
		UBehaviorTree BTAssetToRunOnPawnAISpawned; // 0x15A8(0x8)
		FGameplayTag DescriptorTag; // 0x15B0(0x4)
		unsigned char UnknownData89_7[0x134]; // 0x15B4(0x134) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotController");
			return ret;
		}

		void UpdateLeashActorToFollowLocation(); // Flags: Final|Native|Protected 0x7FF4149AB618
		void ThankBusDriver(); // Flags: Final|Native|Protected 0x7FF4149AB538
		void SwitchTeam(char TeamIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AB458
		void StopSecondaryFire(bool bFireWhenStopping); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AB378
		void StopFire(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AB298
		void StopEmote(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AB1B8
		void StartSecondaryFire(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AB0D8
		void StartFire(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AAFF8
		void SetSkillSet(UClass SkillSetClass); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AAF18
		void SetRadialLeashOuterRadius(float OuterRadius); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AAE38
		void SetRadialLeashLocation(FVector& Location); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149AAD58
		void SetRadialLeashInnerRadius(float InnerRadius); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AAC78
		void SetRadialLeashAlertLevelOverride(FLeashInfoOverride& LeashInfoOverride, EAlertLevel AlertLevel); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149AAB98
		void SetPatrollingEnable(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AAAB8
		void SetLeashVolume(AFortAthenaAILeashVolume InLeashVolume); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AA9D8
		void SetLeashReturnLocationMode(ELeashReturnLocationMode ReturnMode); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AA8F8
		void SetLeashGameplayVolume(AGameplayVolume InLeashGameplayVolume); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AA818
		void SetLeashActorToFollow(AActor ActorToFollow, float LeashLocationUpdateRate, FVector LocalOffset); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 0x7FF4149AA738
		void SetForcedBestWeapon(UFortWorldItem BestWeapon); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AA658
		void SetBotOwner(AActor InBotOwner); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AA578
		void SetAllowPropagatedTarget(bool bAllow); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AA498
		void SetAllowModifySensesEnabled(bool bAllow); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AA3B8
		void SetAlertLevel(EAlertLevel NewAlertLevel, EBlackboardUpdateType BlackboardUpdateType, bool bForceUpdate); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AA2D8
		void SetAIFocalPoint(AActor FocusTarget, FVector FocalPoint, bool bUseAttackingPriority); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4149AA1F8
		void ResetPerceptionAndTargets(EBlackboardUpdateType BlackboardUpdateType); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AA118
		void RequestMoveAwayFromBox(FBox& MoveAwayBox); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149AA038
		void RequestEmote(FPrimaryAssetId& EmotePrimaryAssetId, float InfiniteEmoteMaxDuration); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149A9F58
		void RemoveSkillSet(UClass SkillSetClass); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A9E78
		void RemoveEmoteRequest(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A9D98
		void ReleaseBuildTool(); // Flags: Final|Native|Protected 0x7FF4149A9CB8
		void QueueStim(AActor SourceActor, FVector& SourceLocation, FVector& SourceDirection, EStimType NewStimType, float StimStrength, FName StimTag); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149A9BD8
		void PlayEmote(FPrimaryAssetId& EmotePrimaryAssetId); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149A9AF8
		void OverrideSkill(float NewSkill); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A9A18
		void OverrideAggressivenessPlayStyle(bool bInIsAggressive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A9938
		void OnVehicleModDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF4149A9858
		void OnTargetTagChanged(FGameplayTag UpdatedTag, int32_t TagCount); // Flags: Final|Native|Public 0x7FF4149A9778
		void OnTargetPawnDestroyed(); // Flags: Final|Native|Public 0x7FF4149A9698
		void OnTargetPawnDead(AFortPawn FortPawn); // Flags: Final|Native|Public 0x7FF4149A95B8
		void OnTargetPawnDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149A94D8
		void OnTargetInVehicleDamaged(AActor DamageCauser, AController EventInstigator, float Damage, FVector& EventLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults 0x7FF4149A93F8
		void OnTargetBuildingDestroyed(ABuildingActor Building, AAthenaAIController AIController); // Flags: Final|Native|Public 0x7FF4149A9318
		void OnTargetActorDestroyed(AActor DestroyedActor); // Flags: Final|Native|Public 0x7FF4149A9238
		void OnServerMarkerAdded(FFortWorldMarkerData& MarkerData); // Flags: Final|Native|Public|HasOutParms 0x7FF4149A9158
		void OnPossessedPawnReceiveDamage(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149A9078
		void OnPossesedPawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149A8F98
		void OnPerceptionSensed(AActor SourceActor, FAIStimulus Stim); // Flags: Native|Public 0x7FF4149A8EB8
		void OnPawnWeaponChanged(AFortWeapon NewWeapon, AFortWeapon OldWeapon); // Flags: Final|Native|Public 0x7FF4149A8DD8
		void OnPawnDidDamage(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent HitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149A8CF8
		void OnMovementModeChange(ACharacter InCharacter, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Public 0x7FF4149A8C18
		void OnKnockbacked(FGameplayTag KnockbackTypeTag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A8B38
		void OnEquipFinished(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A8A58
		void OnEndSpectating(AFortPlayerStateZone Spectator); // Flags: Final|Native|Public 0x7FF4149A8978
		void OnCurrentHarvestableDestroyed(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF4149A8898
		void OnCharacterLaunched(UFortMovementComp_Character MovementComp, FVector& LaunchVelocity); // Flags: Final|Native|Public|HasOutParms|HasDefaults 0x7FF4149A87B8
		void OnBeginSpectating(AFortPlayerStateZone Spectator); // Flags: Final|Native|Public 0x7FF4149A86D8
		void OnAlertLevelChanged(EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel); // Flags: Event|Public|BlueprintEvent 0x7FF4149A85F8
		void OnAgentDBNO(AFortPawn InPlayer, bool bInIsDBNO); // Flags: Final|Native|Public 0x7FF4149A8518
		void NotifyPickupsSpawnedOnDeath(TArray& SpawnedPickups, int32_t SpawnRequestID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A8438
		bool IsLocationInsideLeash(FVector& Location, bool bUseInnerRadius); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149A8358
		bool IsAnAthenaGameParticipant(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A8278
		void HandlePawnEnteredVehicle(TScriptInterface& Vehicle, AFortPawn OtherPawn, int32_t SeatIndex); // Flags: Final|Native|Public|HasOutParms 0x7FF4149A8198
		UFortWorldItem GetSlotItemByTagQuery(FGameplayTagQuery& TagQuery); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149A80B8
		UFortWorldItem GetSlotItemByTag(FGameplayTag& TagToCheck); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149A7FD8
		UFortWorldItem GetSlotItemByItemDefinition(UFortItemDefinition ItemDefinition); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A7EF8
		FVector GetPawnLocation(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149A7E18
		UAthenaMarkerComponent GetMarkerComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A7D38
		AActor GetCurrentThreat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A7C58
		AActor GetCurrentTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A7B78
		AActor GetBotOwner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149A7A98
		AFortWeapon EquipWeaponByTag(FGameplayTag& WeaponTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A79B8
		AFortWeapon EquipWeapon(UFortWorldItem Weapon, bool bUpdateBB); // Flags: Native|Public|BlueprintCallable 0x7FF4149A78D8
		AFortWeapon EquipMeleeWeapon(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A77F8
		AFortWeapon EquipBestWeapon(bool bUpdateBB); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A7718
		void ClearAIFocalPoint(bool bUseAttackingPriority); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149A7638
		void Cheat_ForceAthenaCosmeticItemInSlot(UAthenaCosmeticItemDefinition CosmeticItem, EAthenaCustomizationCategory Slot, int32_t Index); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF4149A7558
		void Cheat_ClearForcedCosmeticItems(); // Flags: Net|NetReliableNative|Event|Public|NetServer|NetValidate 0x7FF4149A7478
		void ChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A7398
		void BlueprintOnBehaviorTreeStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF4149A72B8
		void AddTargetInfos(TArray& Targets, EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149A71D8
		void AddTargetInfo(AActor Target, bool bForceTarget, EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149A70F8
	};


	// Class FortniteAI.FortAthenaAIBotNameDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortAthenaAIBotNameDataAsset : public UDataAsset	
	{
	public:
		TWeakObjectPtr DefaultNameDataTable; // 0x30(0x20)
		TWeakObjectPtr ChinaNameDataTable; // 0x50(0x20)
		TArray RegionData; // 0x70(0x10)

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
		unsigned char UnknownData02_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0xB0(0x20)
		unsigned char UnknownData03_6[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		UClass CustomRegistrationClass; // 0xD8(0x8)

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

		void HandleSleepStateChanged(bool bIsAwake); // Flags: Final|Native|Private 0x7FF4149AB6F8
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
		unsigned char UnknownData01_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_5[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		FString CustomEventName; // 0x78(0x10)
		FString SelectedEvent; // 0x88(0x10)
		UFortFeedbackBank FeedbackBank; // 0x98(0x8)

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
		unsigned char UnknownData03_3[0x18]; // 0x168(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr CreatureBlueprintClass; // 0x180(0x20)
		int32_t MaxHealth; // 0x1A0(0x4)
		float HearingAggroRange; // 0x1A4(0x4)
		int32_t ScorePoints; // 0x1A8(0x4)
		float DamageCaused; // 0x1AC(0x4)
		float EnvironmentalDamageOverride; // 0x1B0(0x4)
		float MovementSpeedMultiplier; // 0x1B4(0x4)
		bool bImmuneToWeaponKnockback; // 0x1B8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1B9(0x7) UNKNOWN PROPERTY
		UFortCreativeCreatureManagerComponent CreatureManagerComponent; // 0x1C0(0x8)
		UClass DamageOverrideEffect; // 0x1C8(0x8)
		UClass EnvironmentalDamageOverrideEffect; // 0x1D0(0x8)
		UClass MovementSpeedOverrideEffect; // 0x1D8(0x8)
		UClass WeaponKnockbackImmunityEffect; // 0x1E0(0x8)
		UClass MaxHealthOverrideEffect; // 0x1E8(0x8)
		EScoreDistributionType ScoreDistribution; // 0x1F0(0x1)
		ECreatureManagerAffectedTargets AffectedTargetsType; // 0x1F1(0x1)
		unsigned char UnknownData05_7[0x26]; // 0x1F2(0x26) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCreativeCreatureManagerInfoComponent");
			return ret;
		}

		void SetWeaponKnockbackImmunityEffect(UClass Effect); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD9F8
		void SetWeaponKnockbackImmunity(bool InImmuneToWeaponKnockback); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD918
		void SetScorePoints(int32_t InScorePoints); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD838
		void SetScoreDistribution(EScoreDistributionType InScoreDistribution); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD758
		void SetOverrideDamage(float InOverrideDamage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD678
		void SetMovementSpeedOverrideEffect(UClass Effect); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD598
		void SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD4B8
		void SetMovementOverrideTag(FGameplayTag tag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD3D8
		void SetMaxHealthOverrideTag(FGameplayTag tag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD2F8
		void SetMaxHealthOverrideEffect(UClass Effect); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD218
		void SetMaxHealth(int32_t InMaxHealth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD138
		void SetHearingAggroRange(float InHearingAggroRange); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AD058
		void SetEnvironmentalDamageOverrideEffect(UClass Effect); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ACF78
		void SetEnvironmentalDamageOverride(float InOverrideDamage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ACE98
		void SetDamageOverrideTag(FGameplayTag tag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ACDB8
		void SetDamageOverrideEffect(UClass Effect); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ACCD8
		void SetCreatureManagerComponent(UFortCreativeCreatureManagerComponent InCreatureManagerComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ACBF8
		void SetCreatureBlueprintClass(TWeakObjectPtr InCreatureBlueprintClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ACB18
		void SetAffectedTargetsType(ECreatureManagerAffectedTargets InAffectedTargetsType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ACA38
		void ResetWeaponKnockbackImmunity(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AC958
		void ResetScorePoints(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AC878
		void ResetScoreDistribution(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AC798
		void ResetOverrideDamage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AC6B8
		void ResetMovementSpeedMultiplier(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AC5D8
		void ResetMaxHealth(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AC4F8
		void ResetHearingAggroRange(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AC418
		void ResetEnvironmentalDamageOverride(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AC338
		bool GetWeaponKnockbackImmunity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AC258
		int32_t GetScorePoints(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AC178
		EScoreDistributionType GetScoreDistribution(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AC098
		float GetOverrideDamage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149ABFB8
		float GetMovementSpeedMultiplier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149ABED8
		int32_t GetMaxHealth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149ABDF8
		int32_t GetInvalidInt32(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4149ABD18
		float GetInvalidFloat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4149ABC38
		float GetHearingAggroRange(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149ABB58
		float GetEnvironmentalDamageOverride(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149ABA78
		UFortCreativeCreatureManagerComponent GetCreatureManagerComponent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AB998
		TWeakObjectPtr GetCreatureBlueprintClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AB8B8
		ECreatureManagerAffectedTargets GetAffectedTargetsType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AB7D8
	};


	// Class FortniteAI.FortCreativeCreatureManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UFortCreativeCreatureManagerComponent : public UActorComponent	
	{
	public:
		TArray CreatureManagerInfos; // 0xA0(0x10)
		TMap EnabledCreatureManagerInfos; // 0xB0(0x50)
		unsigned char UnknownData01_7[0x60]; // 0x100(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCreativeCreatureManagerComponent");
			return ret;
		}

		void OnInfoComponentRemoved(UFortCreativeCreatureManagerInfoComponent CreatureManagerInfoComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149ADC98
		void OnInfoComponentAdded(UFortCreativeCreatureManagerInfoComponent CreatureManagerInfoComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149ADBB8
		void OnAIPawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149ADAD8
	};


	// Class FortniteAI.FortCrowdManager
	// Inherited from UCrowdManager -> UCrowdManagerBase -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UFortCrowdManager : public UCrowdManager	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x72C(0x4) UNKNOWN PROPERTY

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
		TArray EnvManagerConfigPerGamePhase; // 0x158(0x10)
		FEnvQueryManagerConfig EnvManagerConfigSTW; // 0x168(0x30)
		unsigned char UnknownData01_7[0x20]; // 0x198(0x20) UNKNOWN PROPERTY

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
		UEnvQuery QueryPointA; // 0x28(0x8)
		UEnvQuery QueryPointB; // 0x30(0x8)
		TArray QueryParamsA; // 0x38(0x10)
		TArray QueryParamsB; // 0x48(0x10)
		FMulticastInlineDelegate OnFinished; // 0x58(0x10)
		FMulticastInlineDelegate OnFailed; // 0x68(0x10)
		ETwoPointSolverRotationA RotationMode; // 0x78(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FRotator MinRotationOffset; // 0x80(0x18)
		FRotator MaxRotationOffset; // 0x98(0x18)
		bool bUseNegativeAngleOffsets : 1; // 0xB0:0(0x1)
		bool bUsePositiveAngleOffsets : 1; // 0xB0:1(0x1)
		unsigned char UnknownData03_5[0x7F]; // 0xB1(0x7F) UNKNOWN PROPERTY
		UFortAISystem AISys; // 0x130(0x8)
		UObject CachedQuerier; // 0x138(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortQueryTwoPointSolver");
			return ret;
		}

		void Start(UObject Querier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AE2B8
		void SkipToNextPointA(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AE1D8
		void SetCustomRotationA(FRotator& Rotation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149AE0F8
		void OnCustomRotationMode(FVector& InPointA, FVector Querier); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF4149AE018
		FRotator GetRandomRotationOffset(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149ADF38
		void AddNamedFloatParamB(FName ParamName, float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ADE58
		void AddNamedFloatParamA(FName ParamName, float Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149ADD78
	};


	// Class FortniteAI.FortForcedLODZone
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AFortForcedLODZone : public AActor	
	{
	public:
		EFortAILODLevel ForcedLODLevel; // 0x290(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x291(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData04_3[0x4]; // 0xB40(0x4) UNKNOWN PROPERTY
		bool bCheckPlayerLOSWhenTeleporting; // 0xB44(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xB45(0x3) UNKNOWN PROPERTY
		float MaxDistanceToConsiderLOS; // 0xB48(0x4)
		float PlayerFOV; // 0xB4C(0x4)
		float TeleportDelay; // 0xB50(0x4)
		int32_t TeleportRetries; // 0xB54(0x4)
		float RetryDelay; // 0xB58(0x4)
		unsigned char UnknownData06_6[0xC]; // 0xB5C(0xC) UNKNOWN PROPERTY
		UEnvQuery FindTeleportSpotEQSQuery; // 0xB68(0x8)
		unsigned char UnknownData07_7[0x8]; // 0xB70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortGameplayAbility_TeleportToActor");
			return ret;
		}

		void PreTeleportPawn(AFortPawn TeleportedPawn); // Flags: Event|Public|BlueprintEvent 0x7FF4149AE478
		void PostTeleportedPawn(AFortPawn TeleportedPawn); // Flags: Event|Public|BlueprintEvent 0x7FF4149AE398
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

		bool CanBeUsedBy(AActor User, AActor SmartObjectActor); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149AE558
	};


	// Class FortniteAI.FortIntensityCurveSequence
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortIntensityCurveSequence : public UDataAsset	
	{
	public:
		TArray IntensityCurves; // 0x30(0x10)
		TEnumAsByte SequenceType; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

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
		TArray IntensityCurveSequences; // 0x30(0x10)

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
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		float GraphRadius; // 0x298(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x29C(0x4) UNKNOWN PROPERTY

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
		TArray AdditionalPatterns; // 0x58(0x10)
		TArray StairsRailing; // 0x68(0x10)
		EBuildingFloorRailing FloorRailing; // 0x78(0x1)
		TEnumAsByte PatternType; // 0x79(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x7A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavLinkDefinition");
			return ret;
		}
	};


	// Class FortniteAI.FortNavMesh
	// Inherited from ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x8 (0x6E0 - 0x6D8)
	class AFortNavMesh : public ARecastNavMesh	
	{
	public:
		UFortAIHotSpotManager HotSpotManager; // 0x6D8(0x8)

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
		UClass ObstacleAreaClass; // 0xF0(0x8)

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
		unsigned char UnknownData06_3[0x10]; // 0x15B0(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr DefaultSmashableArea; // 0x15C0(0x20)
		TWeakObjectPtr JumpDownArea; // 0x15E0(0x20)
		unsigned char UnknownData07_6[0x20]; // 0x1600(0x20) UNKNOWN PROPERTY
		TWeakObjectPtr JumpDownSmashableArea2; // 0x1620(0x20)
		TWeakObjectPtr JumpDownSmashableArea3; // 0x1640(0x20)
		TArray LinkGlobalProxies; // 0x1660(0x10)
		TArray NamedNavmeshes; // 0x1670(0x10)
		TArray NavLinkBlockers; // 0x1680(0x10)
		unsigned char UnknownData08_6[0x10]; // 0x1690(0x10) UNKNOWN PROPERTY
		TArray PathEstimators; // 0x16A0(0x10)
		TArray InescapableZones; // 0x16B0(0x10)
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
		unsigned char UnknownData09_5[0x2]; // 0x16C2(0x2) UNKNOWN PROPERTY
		int32_t UndermineHorizontalTileLimit; // 0x16C4(0x4)
		int32_t UndermineVerticalTileLimit; // 0x16C8(0x4)
		float DirtyAreasUpdateFreqInactive; // 0x16CC(0x4)
		unsigned char UnknownData10_6[0xD8]; // 0x16D0(0xD8) UNKNOWN PROPERTY
		AFortNavigationGraph NavGraphData; // 0x17A8(0x8)
		TArray CompositePathGoals; // 0x17B0(0x10)
		TArray AtlasCells; // 0x17C0(0x10)
		unsigned char UnknownData11_6[0x10]; // 0x17D0(0x10) UNKNOWN PROPERTY
		TArray MetaNavCachedAreas; // 0x17E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavSystem");
			return ret;
		}

		void OnNavDataRegistered(ANavigationData NavData); // Flags: Final|Native|Protected 0x7FF4149AE718
		bool IsNavmeshInRadiusInitialized(UObject WorldContext, FVector& TestLocation, float TestRadius); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4149AE638
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
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY

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

		EWardAffectType GetAffectingType(); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent|Const 0x7FF4149AE8D8
		float GetAffectingDistance(); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent|Const 0x7FF4149AE7F8
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
		unsigned char UnknownData01_7[0xF]; // 0x501(0xF) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x48]; // 0xF0(0x48) UNKNOWN PROPERTY

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
		unsigned char UnknownData04_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UClass CloudBlueprint; // 0x298(0x8)
		float CloudRadius; // 0x2A0(0x4)
		float ThreatBoxVolumeTopPadding; // 0x2A4(0x4)
		float ThreatBoxVolumeBottomPadding; // 0x2A8(0x4)
		bool bUseLocalPlayersOnlyForCloudMinimumHeight; // 0x2AC(0x1)
		bool bHideClouds; // 0x2AD(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x2AE(0x2) UNKNOWN PROPERTY
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
		unsigned char UnknownData06_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FThreatLocationArray ThreatLocations; // 0x2E8(0x118)
		FStormWindArray StormWindArray; // 0x400(0x118)
		TArray GoalActorLocations; // 0x518(0x10)
		unsigned char UnknownData07_7[0x20]; // 0x528(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortThreatVisualsManager");
			return ret;
		}

		bool StormsExist(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AF5F8
		void SetMinimumCloudAltitude(float NewMinimumAltitude); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AF518
		void SetCloudsAreHidden(bool bHide); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149AF438
		void ResetMinimumCloudAltitude(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149AF358
		void OnWorldReady(); // Flags: Event|Protected|BlueprintEvent 0x7FF4149AF278
		void OnThreatCloudsChanged(TArray& ThreatLocationInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4149AF198
		void OnRep_ThreatLocations(); // Flags: Final|Native|Private 0x7FF4149AF0B8
		void OnRep_StormWinds(); // Flags: Final|Native|Private 0x7FF4149AEFD8
		void OnRep_HideClouds(); // Flags: Final|Native|Private 0x7FF4149AEEF8
		void OnRep_GoalActorLocations(); // Flags: Final|Native|Private 0x7FF4149AEE18
		void OnBeginThreatVisualsPrecursor(AActor SourceActor, FVector& EndLocation); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF4149AED38
		TArray GetThreatClouds(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AEC58
		AThreatCloud GetThreatCloud(FThreatLocationInfo& ThreatLocInfo); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149AEB78
		bool GetCloudsAreHidden(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AEA98
		void BeginThreatVisualsPrecursor(AActor SourceActor, FVector ThreatLocation); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults 0x7FF4149AE9B8
	};


	// Class FortniteAI.AIGoalComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UAIGoalComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNewGoalActorDelegate; // 0xD0(0x10)
		unsigned char UnknownData03_7[0x20]; // 0xE0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AIGoalComponent");
			return ret;
		}

		void SetGoalActor(AActor InActor, bool bLocationAlwaysKnown); // Flags: Native|Public|BlueprintCallable 0x7FF4149AFB38
		void OnBuildingActorGoalDestroyed(); // Flags: Final|Native|Protected 0x7FF4149AFA58
		void OnActorGoalDestroyed(AActor DestroyedActor); // Flags: Final|Native|Protected 0x7FF4149AF978
		AActor GetGoalActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AF898
		UAIGoalComponent GetAIGoalComponent(AActor Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4149AF7B8
		void ClearCurrentGoalAndAssignment(bool bClearPerception); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149AF6D8
	};


	// Class FortniteAI.FortAIGoalComponent
	// Inherited from UAIGoalComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x150 - 0x100)
	class UFortAIGoalComponent : public UAIGoalComponent	
	{
	public:
		TMap AssignmentUpdatePeriods; // 0x100(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIGoalComponent");
			return ret;
		}

		void OnPossessedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Protected 0x7FF4149AFC18
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
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UWorld World; // 0x30(0x8)
		UFortAIAssignment AssignmentOwner; // 0x38(0x8)
		UFortAIEncounterInfo EncounterInfo; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAIGoalProvider");
			return ret;
		}

		void UpdateGoals(); // Flags: Native|Public|BlueprintCallable 0x7FF4149AFEB8
		bool InitializeGoalProvider(UWorld ContextWorld, UFortAIAssignment Assignment); // Flags: Native|Public|BlueprintCallable 0x7FF4149AFDD8
		UFortAIEncounterInfo GetEncounterInfo(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149AFCF8
	};


	// Class FortniteAI.FortAIGoalProvider_EnvQuery
	// Inherited from UFortAIGoalProvider -> UObject
	// Size: 0x88 (0xD0 - 0x48)
	class UFortAIGoalProvider_EnvQuery : public UFortAIGoalProvider	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		UEnvQuery GoalQuery; // 0x50(0x8)
		float AutomaticUpdatePeriodInSeconds; // 0x58(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FFortAIAssignmentIdentifier SpecificAssignmentContext; // 0x60(0x30)
		TWeakObjectPtr AIPawnContext; // 0x90(0x20)
		unsigned char UnknownData05_7[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY

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
		TArray EncounterGoalSelectionCriteria; // 0x30(0x10)

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
		TArray Slots; // 0x30(0x10)
		bool bDetectUnreachableSlots : 1; // 0x40:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		UAIHotSpotSlotGenerator SlotGenerator; // 0x48(0x8)

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

		AAIHotSpot GetHotSpot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B0158
		void GenerateSlots(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF4149B0078
		UAIHotSpotSlot AddSlot(FVector& RelativeLocation, FRotator& RelativeRotation, UClass CustomSlotClass, bool bEnabled); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149AFF98
	};


	// Class FortniteAI.AIHotSpotSlotGenerator_OnBoundingBox
	// Inherited from UAIHotSpotSlotGenerator -> UObject
	// Size: 0x70 (0x98 - 0x28)
	class UAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator	
	{
	public:
		UClass SlotClass; // 0x28(0x8)
		FVector MaxExtent; // 0x30(0x18)
		float ExpandBy; // 0x48(0x4)
		float OffsetFromEdge; // 0x4C(0x4)
		float Spacing; // 0x50(0x4)
		bool bLimitMaxExtent : 1; // 0x54:0(0x1)
		bool bMustHitFocusActor : 1; // 0x54:1(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		EBoundingBoxSlotDirectionCalculation SlotDirectionCalculation; // 0x58(0x1)
		unsigned char UnknownData03_7[0x3F]; // 0x59(0x3F) UNKNOWN PROPERTY

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
		UAIHotSpotConfig ExtraTypeConfig; // 0x148(0x8)
		bool bHasDirectionalSetup : 1; // 0x150:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x151(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x28]; // 0x440(0x28) UNKNOWN PROPERTY

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
		TWeakObjectPtr FallbackHotspotConfig; // 0x80(0x20)
		unsigned char UnknownData02_6[0xF0]; // 0xA0(0xF0) UNKNOWN PROPERTY
		TArray AutoAcquireSlots; // 0x190(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x1A0(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x3]; // 0x121(0x3) UNKNOWN PROPERTY
		bool bHasProjectedLocation : 1; // 0x124:0(0x1)
		bool bProjectedOnLowArea : 1; // 0x124:1(0x1)
		bool bIsAutoGenerated : 1; // 0x124:2(0x1)
		bool bCanDuplicateOnProjection : 1; // 0x124:3(0x1)
		bool bCanProjectUp : 1; // 0x124:4(0x1)
		unsigned char UnknownData03_7[0xB]; // 0x125(0xB) UNKNOWN PROPERTY

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
		UAIHotSpotConfig BuildingConfig; // 0x28(0x8)
		FVector Offset; // 0x30(0x18)
		bool bMirrorX : 1; // 0x48:0(0x1)
		bool bMirrorY : 1; // 0x48:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

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
		UAIHotSpotConfig ExtraTypeConfig; // 0x468(0x8)
		unsigned char UnknownData01_7[0xE0]; // 0x470(0xE0) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0xB8]; // 0x28(0xB8) UNKNOWN PROPERTY
		AFortNavigationGraph GraphData; // 0xE0(0x8)
		unsigned char UnknownData03_7[0x10]; // 0xE8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortInfluenceMap");
			return ret;
		}

		void K2_GetInfluenceSourcePositions(UObject WorldContext, TArray& InfluenceSourcePositions); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149B0318
		void K2_AddInfluenceSource(UObject WorldContext, FVector& Position, FString SourceName, float Strength); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149B0238
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
		UFortBotMissionLogic CurrentMissionLogic; // 0x578(0x8)

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
		AFortMission Mission; // 0x28(0x8)
		TArray Goals; // 0x30(0x10)
		TArray Builders; // 0x40(0x10)
		UBehaviorTree CurrentBehaviorAsset; // 0x50(0x8)
		TArray AssignedAI; // 0x58(0x10)
		TArray GoalHasLocator; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBotMissionLogic");
			return ret;
		}

		AFortBotStructureBuilder SpawnStructureBuilder(AActor MissionGoal, UFortBuildingInstructions BuildingInstructions); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B0E78
		void SetGoalsInvulnerable(bool bGodMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B0D98
		void SetCurrentBehavior(UBehaviorTree Behavior); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B0CB8
		void ResetBehavior(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B0BD8
		void OnMissionStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF4149B0AF8
		void OnMissionFinished(); // Flags: Event|Public|BlueprintEvent 0x7FF4149B0A18
		void OnMissionActivated(); // Flags: Event|Public|BlueprintEvent 0x7FF4149B0938
		bool OnInteractWithMissionGoal(AFortAIController BotAI, AActor MissionGoal); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF4149B0858
		bool OnCanStartOtherMission(AFortAIController BotAI, AFortMission OtherMission); // Flags: Event|Public|BlueprintEvent 0x7FF4149B0778
		void OnAssignedBehavior(AFortAIController BotAI); // Flags: Event|Public|BlueprintEvent 0x7FF4149B0698
		void MarkSingleLocator(AActor LocatorActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B05B8
		void MarkAllLocated(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B04D8
		void ClearAllLocated(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B03F8
	};


	// Class FortniteAI.FortBotMissionManager
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UFortBotMissionManager : public UObject	
	{
	public:
		TWeakObjectPtr BotPawnClass; // 0x28(0x20)
		TArray BotPawns; // 0x48(0x10)
		TArray ActiveMissionsLogicData; // 0x58(0x10)
		UFortBotMissionLogic PrimaryMissionLogicData; // 0x68(0x8)
		unsigned char UnknownData01_7[0x58]; // 0x70(0x58) UNKNOWN PROPERTY

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
		UFortBuildingInstructions BuildingInstructions; // 0x290(0x8)
		TArray BuiltActors; // 0x298(0x10)
		AActor CachedGoal; // 0x2A8(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x2B0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortBotStructureBuilder");
			return ret;
		}

		void RunDeconstructor(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B1118
		void OnBuildingDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF4149B1038
		void BuildAll(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B0F58
	};


	// Class FortniteAI.FortMetaNavArea_Obstacles
	// Inherited from UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UFortMetaNavArea_Obstacles : public UNavAreaMeta	
	{
	public:
		int32_t HealthThreshold; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray NavAreaStrengthBuckets; // 0x38(0x10)

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
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x4]; // 0x294(0x4) UNKNOWN PROPERTY
		UNavigationInvokerComponent InvokerComp; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavInvokerBox");
			return ret;
		}

		void SetInvokerEnabled(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149B11F8
	};


	// Class FortniteAI.AthenaNavMesh
	// Inherited from AFortNavMesh -> ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x100 (0x7E0 - 0x6E0)
	class AAthenaNavMesh : public AFortNavMesh	
	{
	public:
		int32_t HotSpotPathfindingMaxSearchNodes; // 0x6E0(0x4)
		float ShallowWaterTraceStartOffsetZ; // 0x6E4(0x4)
		float ShallowWaterTraceEndOffsetZ; // 0x6E8(0x4)
		int32_t MaximumTilesToProcessForWaterPerFrame; // 0x6EC(0x4)
		bool bSuspendNavmeshWhenNoAIUsersAlive; // 0x6F0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x6F1(0x7) UNKNOWN PROPERTY
		TArray SerializedDirtyAreas; // 0x6F8(0x10)
		unsigned char UnknownData03_7[0xD8]; // 0x708(0xD8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavMesh");
			return ret;
		}

		void MoveTiles(FBox& SourceBox, FIntPoint& TileOffset, float RotationDeg, FVector2D& FillerTilePosition); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149B13B8
		void ComputeOffsetForMoveTiles(FVector& StartPosition, FVector& DesiredPosition, FVector& OutEndPosition, FIntPoint& OutTileOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149B12D8
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
	// Size: 0x8 (0x7E8 - 0x7E0)
	class AAthenaNavMesh_Big : public AAthenaNavMesh	
	{
	public:
		float MaximumDistanceToWaterForShallow; // 0x7E0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7E4(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x2]; // 0xA2(0x2) UNKNOWN PROPERTY
		FName NavMeshNameToUse; // 0xA4(0x4)
		TArray NavMeshesInfo; // 0xA8(0x10)
		FMulticastInlineDelegate NavMeshPresenceDetected; // 0xB8(0x10)
		FMulticastInlineDelegate NavMeshPresenceUndetected; // 0xC8(0x10)
		unsigned char UnknownData03_7[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavPresenceDetectorComponent");
			return ret;
		}

		void OnNavMeshTilesUpdated(FUpdatedNavMeshTiles& UpdatedNavMeshTiles); // Flags: Final|Native|Protected|HasOutParms 0x7FF4149B1578
		bool HasValidNavMeshLocation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B1498
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
	// Size: 0x210 (0x1A00 - 0x17F0)
	class UAthenaNavSystem : public UFortNavSystem	
	{
	public:
		unsigned char UnknownData08_3[0x8]; // 0x17F0(0x8) UNKNOWN PROPERTY
		TArray NavDataSetVariants; // 0x17F8(0x10)
		bool bUseNavDataSetVariants : 1; // 0x1808:0(0x1)
		bool bMarkBuildingFoundationDirty : 1; // 0x1808:1(0x1)
		bool bSupportRuntimeNavmeshDisabling : 1; // 0x1808:2(0x1)
		unsigned char UnknownData09_5[0x3]; // 0x1809(0x3) UNKNOWN PROPERTY
		float NavGenerationObserverCheckInterval; // 0x180C(0x4)
		unsigned char UnknownData10_6[0x20]; // 0x1810(0x20) UNKNOWN PROPERTY
		bool bAllowStaticNavigationInvokerBoxes : 1; // 0x1830:0(0x1)
		unsigned char UnknownData11_5[0x7]; // 0x1831(0x7) UNKNOWN PROPERTY
		TArray BoxInvokers; // 0x1838(0x10)
		unsigned char UnknownData12_6[0x180]; // 0x1848(0x180) UNKNOWN PROPERTY
		TArray NavOctTreeInclusionBounds; // 0x19C8(0x10)
		unsigned char UnknownData13_6[0xC]; // 0x19D8(0xC) UNKNOWN PROPERTY
		ENavigationSupport NavMeshSupportOverride; // 0x19E4(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x19E5(0x3) UNKNOWN PROPERTY
		TArray ExperienceSupportedAgents; // 0x19E8(0x10)
		unsigned char UnknownData15_7[0x8]; // 0x19F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaNavSystem");
			return ret;
		}

		void UnregisterNavGenerationObserver(USceneComponent Component); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4149B19D8
		void RegisterNavGenerationObserver(USceneComponent Component, FDelegateProperty Event); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4149B18F8
		bool IsUGCNavMeshOnDemandEnabled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4149B1818
		bool IsInitialNavigationLockActive(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4149B1738
		bool HasDirtyAreasInBound(UObject WorldContextObject, FBox& BoundingBox); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149B1658
	};


	// Class FortniteAI.AthenaNavSystemConfig
	// Inherited from UFortNavSystemConfig -> UNavigationSystemModuleConfig -> UNavigationSystemConfig -> UObject
	// Size: 0x58 (0xB8 - 0x60)
	class UAthenaNavSystemConfig : public UFortNavSystemConfig	
	{
	public:
		TArray NavDataSetVariants; // 0x60(0x10)
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
		unsigned char UnknownData03_5[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
		double InvokersMaximumDistanceFromSeed; // 0x78(0x8)
		float DirtyAreaWarningSizeThreshold; // 0x80(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		TArray OverriddenSupportedAgentsByReleaseVersion; // 0x88(0x10)
		unsigned char UnknownData05_7[0x20]; // 0x98(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FVector Start; // 0x2E8(0x18)
		FVector End; // 0x300(0x18)
		float SnapRadius; // 0x318(0x4)
		float SnapHeight; // 0x31C(0x4)
		float LinkProjectionHeight; // 0x320(0x4)
		float RightLinkForwardOffset; // 0x324(0x4)
		TEnumAsByte CollisionChannel; // 0x328(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x329(0x3) UNKNOWN PROPERTY
		bool bManualAdjustment : 1; // 0x32C:0(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x32D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FNavLinkId LinkId; // 0x30(0x8)
		UObject Owner; // 0x38(0x8)

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
		unsigned char UnknownData01_1[0x158]; // 0x490(0x158) UNKNOWN PROPERTY

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
		TArray EnableOnlyForNavmeshClasses; // 0x2E0(0x10)

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
		UNiagaraSystem PathVFX; // 0xA0(0x8)
		FVector PathVFXOffset; // 0xA8(0x18)
		TArray PathColors; // 0xC0(0x10)
		UNiagaraComponent PathVFXComponent; // 0xD0(0x8)
		TArray PathRendererList; // 0xD8(0x10)
		TArray AllPathsPoints; // 0xE8(0x10)
		TArray NavPathPoints; // 0xF8(0x10)
		TArray NavPathPointsStatus; // 0x108(0x10)
		EPatrollingMode PathMode; // 0x118(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		int32_t CurrentPathColorIndex; // 0x11C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortNavPathRendererComponent");
			return ret;
		}

		void UpdatePathsVisualOnClient(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149B1E38
		void OnRep_PathPointsUpdated(); // Flags: Final|Native|Private 0x7FF4149B1D58
		void OnRep_PathModeUpdated(); // Flags: Final|Native|Private 0x7FF4149B1C78
		void OnRep_ColorIndexUpdated(); // Flags: Final|Native|Private 0x7FF4149B1B98
		void DeactivateFX(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149B1AB8
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
		unsigned char UnknownData02_6[0x3]; // 0x211(0x3) UNKNOWN PROPERTY
		float SnapRadiusOverride; // 0x214(0x4)
		bool bOverrideSnapHeight; // 0x218(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x219(0x3) UNKNOWN PROPERTY
		float SnapHeightOverride; // 0x21C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortZiplineLinkComponent");
			return ret;
		}

		void OnZiplineStateChanged(bool bIsZiplining, AFortPlayerPawn FortPlayerPawn); // Flags: Final|Native|Protected 0x7FF4149B1F18
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
		unsigned char UnknownData06_5[0x3]; // 0x4A9(0x3) UNKNOWN PROPERTY
		int32_t TilePoolSize; // 0x4AC(0x4)
		float TileSizeUU; // 0x4B0(0x4)
		FNavMeshResolutionParam NavMeshResolutionParams; // 0x4B4(0x24)
		float AgentRadius; // 0x4D8(0x4)
		float AgentHeight; // 0x4DC(0x4)
		float DrawOffset; // 0x4E0(0x4)
		uint32_t DefaultMaxSearchNodes; // 0x4E4(0x4)
		float HeuristicScale; // 0x4E8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x4EC(0x4) UNKNOWN PROPERTY
		double TimeSliceLongDurationDebug; // 0x4F0(0x8)
		unsigned char UnknownData08_6[0x4]; // 0x4F8(0x4) UNKNOWN PROPERTY
		bool bUseVirtualGeometryFilteringAndDirtying : 1; // 0x4FC:0(0x1)
		bool bUseExtraTopCellWhenMarkingAreas : 1; // 0x4FC:1(0x1)
		unsigned char UnknownData09_5[0x3]; // 0x4FD(0x3) UNKNOWN PROPERTY
		uint32_t InvokerTilePriorityBumpDistanceThresholdInTileUnits; // 0x500(0x4)
		char InvokerTilePriorityBumpIncrease; // 0x504(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x505(0x3) UNKNOWN PROPERTY
		int32_t MaxSimultaneousTileGenerationJobsCount; // 0x508(0x4)
		FRecastNavMeshTileGenerationDebug TileGenerationDebug; // 0x50C(0x24)
		unsigned char UnknownData11_7[0xC8]; // 0x530(0xC8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x18]; // 0x518(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.NavigationHeightMapRenderingComponent");
			return ret;
		}
	};


	// Class FortniteAI.JLargeNavMesh
	// Inherited from AAthenaNavMesh -> AFortNavMesh -> ARecastNavMesh -> ANavigationData -> AActor -> UObject
	// Size: 0x0 (0x7E0 - 0x7E0)
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
	// Size: 0x0 (0x7E0 - 0x7E0)
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
	// Size: 0x0 (0x7E0 - 0x7E0)
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
	// Size: 0x0 (0x7E0 - 0x7E0)
	class AJSmallNavMesh : public AAthenaNavMesh	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.JSmallNavMesh");
			return ret;
		}
	};


	// Class FortniteAI.FortInescapableZoneTracker
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UFortInescapableZoneTracker : public UObject	
	{
	public:
		AFortNavigationGraph NavGraph; // 0x28(0x8)
		unsigned char UnknownData01_7[0x60]; // 0x30(0x60) UNKNOWN PROPERTY

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
		TWeakObjectPtr GoalActorWeak; // 0x28(0x8)
		AFortNavigationGraph NavGraph; // 0x30(0x8)
		unsigned char UnknownData01_7[0x70]; // 0x38(0x70) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY
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
		UClass ControllerClass; // 0x28(0x8)
		UClass PawnClass; // 0x30(0x8)
		TArray ContextDataDescs; // 0x38(0x10)

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
		UClass InjectedItemClass; // 0x48(0x8)

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
		unsigned char UnknownData01_1[0x28]; // 0x68(0x28) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x28]; // 0x98(0x28) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x28]; // 0x90(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAITask_ExecuteAbility");
			return ret;
		}

		void OnInjectedHitResultDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF4149B1FF8
	};


	// Class FortniteAI.FortAITask_FuzzyQueue
	// Inherited from UAITask_MoveTo -> UAITask -> UGameplayTask -> UObject
	// Size: 0x20 (0x138 - 0x118)
	class UFortAITask_FuzzyQueue : public UAITask_MoveTo	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x118(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x20]; // 0x118(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0x68(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x18]; // 0x160(0x18) UNKNOWN PROPERTY
		AActor GoalActor; // 0x178(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x180(0x28) UNKNOWN PROPERTY

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
		TArray SplineMeshesBody; // 0x290(0x10)
		UParticleSystemComponent VortexBase; // 0x2A0(0x8)
		UParticleSystemComponent VortexRing; // 0x2A8(0x8)
		TArray SplinePointsA; // 0x2B0(0x10)
		TArray SplinePointsB; // 0x2C0(0x10)
		TArray SplineTangentsA; // 0x2D0(0x10)
		TArray SplineTangentsB; // 0x2E0(0x10)
		TArray TimeRandomArray; // 0x2F0(0x10)
		float TwistOverTime; // 0x300(0x4)
		int32_t NumberOfSplinePoints; // 0x304(0x4)
		bool bEnableVortexBaseParticleSystem; // 0x308(0x1)
		bool bEnableVortexRingParticleSystem; // 0x309(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x30A(0x6) UNKNOWN PROPERTY
		FVector BasePSOffset; // 0x310(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAICloudVortex");
			return ret;
		}

		void CalculateTwisterWiggle(double TickDelta); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B20D8
	};


	// Class FortniteAI.ThreatCloud
	// Inherited from AActor -> UObject
	// Size: 0x220 (0x4B0 - 0x290)
	class AThreatCloud : public AActor	
	{
	public:
		TArray LightningSourceAreas; // 0x290(0x10)
		FSlateBrush MiniMapIconBrush; // 0x2A0(0xB0)
		float MiniMapIconPercent; // 0x350(0x4)
		unsigned char UnknownData04_6[0xC]; // 0x354(0xC) UNKNOWN PROPERTY
		FSlateBrush MiniMapFarOffIconBrush; // 0x360(0xB0)
		FLinearColor ActiveTint; // 0x410(0x10)
		FLinearColor InActiveTint; // 0x420(0x10)
		float ActiveTransitionTime; // 0x430(0x4)
		float DeathTimerDuration; // 0x434(0x4)
		float CloudMiniMapTickInterval; // 0x438(0x4)
		unsigned char UnknownData05_6[0x14]; // 0x43C(0x14) UNKNOWN PROPERTY
		float MiniMapFarOffIconDegreesOfArc; // 0x450(0x4)
		unsigned char UnknownData06_6[0xC]; // 0x454(0xC) UNKNOWN PROPERTY
		FBox ThreatBoxVolume; // 0x460(0x38)
		float GroundLevelUnderCloud; // 0x498(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x49C(0x4) UNKNOWN PROPERTY
		TArray GoalActorLocations; // 0x4A0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.ThreatCloud");
			return ret;
		}

		void OnThreatVolumeChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF4149B28B8
		void OnLightningStrike(FVector& StartLocation, FVector& EndLocation, ABuildingRift Rift, bool bLightningStruckRift); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF4149B27D8
		void OnCloudStart(); // Flags: Event|Public|BlueprintEvent 0x7FF4149B26F8
		void OnCloudHiddenChange(bool bCloudsAreHidden); // Flags: Event|Public|BlueprintEvent 0x7FF4149B2618
		void OnCloudDeactivated(EFortThreatDeactivationType DeactivationType); // Flags: Event|Public|BlueprintEvent 0x7FF4149B2538
		void OnCloudActivated(); // Flags: Event|Public|BlueprintEvent 0x7FF4149B2458
		void OnBeginDeath(); // Flags: Event|Protected|BlueprintEvent 0x7FF4149B2378
		void ManualLightningFlash(); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF4149B2298
		FBox GetThreatVolume(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149B21B8
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

		void PushBehaviorControl(AFortAthenaAIBotController BotController, int32_t BehaviorControl); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4149B3418
		void PopBehaviorControl(AFortAthenaAIBotController BotController); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4149B3338
		void MakeBotGroupsTakeEachOtherAsTargets(TArray& GroupA, TArray& GroupB, EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149B3258
		void KillBots(UObject WorldContextObject, bool bKillPlayers, bool bKillNoneParticipants, char TeamIndex, AActor BotOwner); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149B3178
		void JoinTeam(UObject WorldContextObject, AController SourceTeamController, AController DestinationTeamController); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149B3098
		bool IsWeaponSupported(UObject WorldContextObject, AFortWeapon FortWeapon); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149B2FB8
		bool IsItemDefinitionSupported(UObject WorldContextObject, UItemDefinitionBase FortItemDef); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4149B2ED8
		UAthenaAIServicePlayerBots GetAIServicePlayerBots(UObject WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149B2DF8
		UAthenaAIServiceLoot GetAIServiceLoot(UObject WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149B2D18
		UAthenaAIServiceCreativePlayerBots GetAIServiceCreativePlayerBots(UObject WorldContextObject); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149B2C38
		UAthenaAIPopulationTracker GetAIPopulationTracker(UObject WorldContextObject); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF4149B2B58
		APawn AthenaSpawnAIFromClass(UObject WorldContextObject, UClass PawnClass, UBehaviorTree BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor Owner); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4149B2A78
		bool AIPawnFromGAHasLuringPickupAsGoal(FGameplayAbilityActorInfo& ActorInfo, FGameplayTag GameplayTag, float MaxLifetime, EFortPickupSpawnSource RequiredPickupSpawnSource); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149B2998
	};


	// Class FortniteAI.FortAICombatTokenConsumerComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UFortAICombatTokenConsumerComponent : public UFortPawnComponent	
	{
	public:
		float TokenHoldMinDuration; // 0xA8(0x4)
		float TokenHoldMaxDuration; // 0xAC(0x4)
		TArray CurrentTokens; // 0xB0(0x10)
		unsigned char UnknownData01_7[0x30]; // 0xC0(0x30) UNKNOWN PROPERTY

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
		UFortSnapOnSurfaceComponent SnapOnSurfaceComp; // 0x290(0x8)
		UFortAthenaTrackableAIObjectComponent TrackableAIComp; // 0x298(0x8)

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
		TArray TokenTypes; // 0xA0(0x10)
		TArray PositioningDatas; // 0xB0(0x10)
		bool bRunningTokenAssignment; // 0xC0(0x1)
		unsigned char UnknownData01_6[0x57]; // 0xC1(0x57) UNKNOWN PROPERTY
		FTimerHandle AssignTokensHandle; // 0x118(0x8)
		FScalableFloat AssignTokensUpdateFrequency; // 0x120(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAICombatTokenProviderComponent");
			return ret;
		}

		bool HasRunEQS(FGameplayTagQuery& GameplayTagQuery); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149B35D8
		void ForceRunQuery(FGameplayTagQuery& TagQuery); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF4149B34F8
	};


	// Class FortniteAI.FortAthenaAIBotBuildingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UFortAthenaAIBotBuildingComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0xA0(0x38) UNKNOWN PROPERTY

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

		void SetStealthMeterTargetTime(float InStealthMeterTargetTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B3A38
		void SetStealthMeterTarget(float InStealthMeterTarget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B3958
		void OnStealthMeterChanged(AFortAthenaAIBotController BotController, float StealthMeterTarget, float StealthMeterTargetTime); // Flags: Final|RequiredAPI|Native|Public 0x7FF4149B3878
		float GetStealthMeterTargetTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B3798
		float GetStealthMeterTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B36B8
	};


	// Class FortniteAI.FortAthenaNPCLoopStateComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortAthenaNPCLoopStateComponent : public UActorComponent	
	{
	public:
		bool bSpawnOutsideTheLoop : 1; // 0xA0:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_AIBotLoopSettings RuntimeLoopSettings; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNPCLoopStateComponent");
			return ret;
		}

		void OnOwnerPawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults 0x7FF4149B3BF8
		void InitLoopState(AFortPawn PawnOwner); // Flags: Event|Protected|BlueprintEvent 0x7FF4149B3B18
	};


	// Class FortniteAI.FortPawnComponent_PingCommand
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C8 - 0xA8)
	class UFortPawnComponent_PingCommand : public UFortPawnComponent	
	{
	public:
		FFortPingInfo PingInfo; // 0xA8(0x108)
		unsigned char UnknownData01_7[0x18]; // 0x1B0(0x18) UNKNOWN PROPERTY

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
		AAIController CachedOwnerController; // 0x1C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIBotPingCommand");
			return ret;
		}

		void OnServerMarkerRemoved(FMarkerID MarkerID); // Flags: Final|Native|Public 0x7FF4149B4218
		void OnServerMarkerAdded(FFortWorldMarkerData& MarkerData); // Flags: Final|Native|Public|HasOutParms 0x7FF4149B4138
		void OnOwnerPawnUnpossessed(APawn Pawn); // Flags: Final|Native|Private 0x7FF4149B4058
		void OnOwnerPawnPossessed(APawn Pawn); // Flags: Final|Native|Private 0x7FF4149B3F78
		void OnAIPingCommand(AFortPlayerPawn PlayerPawn, PingCommandType CommandType); // Flags: Event|Public|BlueprintEvent 0x7FF4149B3E98
		void HandleOnNPCUnconvertEvent(AFortPawn UnconvertedFortPawn, EUnconvertReason UnconvertReason); // Flags: Final|Native|Public 0x7FF4149B3DB8
		void HandleOnNPCConvertEvent(AFortPawn InstigatorPawn, AFortPawn ConvertedPawn); // Flags: Final|Native|Public 0x7FF4149B3CD8
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
		TArray EnergyOverTimeArray; // 0xD8(0x10)
		FMulticastInlineDelegate OnEnergyDepleted; // 0xE8(0x10)
		FMulticastInlineDelegate OnEnergyNoLongerDepleted; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIEnergy");
			return ret;
		}

		void UseEnergy(float EnergyToUse); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149B4F38
		void StopUsingEnergy(FGameplayTag& EnergyUseIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149B4E58
		void StopAddingEnergy(FGameplayTag& EnergyUseIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149B4D78
		void StartUsingEnergy(float EnergyToUsePerSecond, FGameplayTag& EnergyUseIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149B4C98
		void StartAddingEnergy(float EnergyToAddPerSecond, FGameplayTag& EnergyUseIdentifier); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149B4BB8
		void SetMaxEnergy(float InMaxEnergy); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149B4AD8
		void SetEnergy(float InEnergy); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149B49F8
		void OnRep_CurrentEnergy(float OldValue); // Flags: Final|Native|Private 0x7FF4149B4918
		bool IsFull(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B4838
		bool IsEmpty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B4758
		float GetMaxEnergy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B4678
		float GetEnergyPercentage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B4598
		float GetEnergyCurrentlyAppliedPerSecond(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B44B8
		float GetEnergy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B43D8
		void AddEnergy(float EnergyToAdd); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149B42F8
	};


	// Class FortniteAI.FortPawnComponent_AIFormation
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xE8 - 0xA8)
	class UFortPawnComponent_AIFormation : public UFortPawnComponent	
	{
	public:
		TArray Slots; // 0xA8(0x10)
		float MaxDistanceFromSlotToSprint; // 0xB8(0x4)
		float MaxDistanceFromSlotToStopFollowing; // 0xBC(0x4)
		float MaxDistanceForLeaderToWait; // 0xC0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		TArray RuntimeSlots; // 0xC8(0x10)
		float MaxDistanceFromSlotToSprintSqr; // 0xD8(0x4)
		float MaxDistanceFromSlotToStopFollowingTransient; // 0xDC(0x4)
		float MaxDistanceForLeaderToWaitSqr; // 0xE0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIFormation");
			return ret;
		}

		void OnUserDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF4149B5018
	};


	// Class FortniteAI.FortPawnComponent_AIGroup
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortPawnComponent_AIGroup : public UFortPawnComponent	
	{
	public:
		bool bCanBeGroupLeader; // 0xA8(0x1)
		bool bCanFollowGroupLeader; // 0xA9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		int32_t GroupId; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPawnComponent_AIGroup");
			return ret;
		}

		void RemoveFromCurrentGroup(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149B5638
		void OnGroupMemberDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF4149B5558
		void GetGroupTags(FGameplayTagContainer& OutGroupTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149B5478
		UFortPawnComponent_AIGroup GetGroupLeader(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B5398
		int32_t GetGroupID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B52B8
		void AddToGroupByID(int32_t InGroupID); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149B51D8
		void AddToGroup(FGameplayTagContainer& InGroupTags); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149B50F8
	};


	// Class FortniteAI.FortAthenaPatrolPath
	// Inherited from AActor -> UObject
	// Size: 0x1E0 (0x470 - 0x290)
	class AFortAthenaPatrolPath : public AActor	
	{
	public:
		unsigned char UnknownData07_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		EPatrollingMode Mode; // 0x2A8(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x2A9(0x7) UNKNOWN PROPERTY
		TArray PatrolPoints; // 0x2B0(0x10)
		bool bUseRandomStartupPatrolPoint; // 0x2C0(0x1)
		bool bUseRandomStartupDirection; // 0x2C1(0x1)
		unsigned char UnknownData09_6[0x6]; // 0x2C2(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x2C8(0x20)
		AActor RadialLeashLocationActorOverride; // 0x2E8(0x8)
		float RadialLeashInnerRadiusOverride; // 0x2F0(0x4)
		float RadialLeashOuterRadiusOverride; // 0x2F4(0x4)
		TArray PathLeashArray; // 0x2F8(0x10)
		bool bUsePathLeashWhenPatrollingIsDisabled; // 0x308(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x309(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData11_6[0x4]; // 0x3EC(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxLifetimeUsage; // 0x3F0(0x28)
		float DebugLinkWidthSelected; // 0x418(0x4)
		float DebugLinkWidthNotSelected; // 0x41C(0x4)
		FLinearColor DebugNotSelectedColor; // 0x420(0x10)
		unsigned char UnknownBit12 : 1; // 0x430:0(0x1) UNKNOWN PROPERTY
		bool bIsPatrolPathEnabled : 1; // 0x430:1(0x1)
		bool bSyncWithPointProvider : 1; // 0x430:2(0x1)
		unsigned char UnknownData13_7[0x3F]; // 0x431(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaPatrolPath");
			return ret;
		}

		void SetPatrolPathEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149B60B8
		void PatrolPointReached(AFortAthenaPatrolPoint PathPoint, AAIController AIInstigator, bool bReachedBackward); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF4149B5FD8
		void PatrolPointFailedToReach(AFortAthenaPatrolPoint PathPoint, AAIController AIInstigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF4149B5EF8
		void PatrolPathStopped(AAIController AIInstigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF4149B5E18
		void PatrolPathStarted(AAIController AIInstigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF4149B5D38
		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF4149B5C58
		void NextPatrolPointFailedToReach(AFortAthenaPatrolPoint PathPoint, AAIController AIInstigator); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF4149B5B78
		bool IsEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B5A98
		int32_t GetPatrolPointsCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B59B8
		void GetPatrolPoints(TArray& OutPatrolPoints); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149B58D8
		AFortAthenaPatrolPoint GetPatrolPoint(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B57F8
		bool CanBeUsed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B5718
	};


	// Class FortniteAI.FortCreativePatrolPath
	// Inherited from AFortAthenaPatrolPath -> AActor -> UObject
	// Size: 0x28 (0x498 - 0x470)
	class AFortCreativePatrolPath : public AFortAthenaPatrolPath	
	{
	public:
		TArray CreativePatrolPoints; // 0x470(0x10)
		EFortCreativePatrolPathGroup PatrolPathGroup; // 0x480(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x481(0x7) UNKNOWN PROPERTY
		ABuildingActor CreativePathRenderer; // 0x488(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x490(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCreativePatrolPath");
			return ret;
		}

		void SetPatrolHasValidNavMesh(bool bValidNavMesh); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149B6278
		bool HasPatrolValidNavMesh(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B6198
	};


	// Class FortniteAI.FortAthenaAIBotAimingDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x768 (0x798 - 0x30)
	class UFortAthenaAIBotAimingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		FDigestedFocusSetting DefaultFocusSetting; // 0x30(0x68)
		TArray FocusSettings; // 0x98(0x10)
		FLookAtDigestedSetting LookAtSettings; // 0xA8(0x40)
		bool bAllowScanAroundWhileSwimming; // 0xE8(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xE9(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData06_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FScalableFloat TimeToHitDelayMultiplierCurveBasedOnSpeed; // 0x130(0x28)
		bool bAimingCircleEnabled; // 0x158(0x1)
		bool bTargetIdleDetectionEnabled; // 0x159(0x1)
		bool bTargetIdleUseAgainstNPC; // 0x15A(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x15B(0x1) UNKNOWN PROPERTY
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
		unsigned char UnknownData08_6[0x3]; // 0x191(0x3) UNKNOWN PROPERTY
		float TargetingRotationSpeedLimit; // 0x194(0x4)
		float TargetingRotationSnapThreshold; // 0x198(0x4)
		float BaseClampingDistance; // 0x19C(0x4)
		FDigestedWeaponAccuracy NoWeaponAccuracy; // 0x1A0(0x330)
		TArray WeaponAccuracies; // 0x4D0(0x10)
		TArray DigestedTargetBasedAccuracies; // 0x4E0(0x10)
		FDigestedTrackingOffsetModifiers TrackingOffsetModifiers; // 0x4F0(0x120)
		FDigestedAimingCircleSettings DefaultAimingCircleSettings; // 0x610(0x168)
		TWeakObjectPtr CachedWeaponUsedToCalculateAccuracy; // 0x778(0x8)
		unsigned char UnknownData09_6[0x8]; // 0x780(0x8) UNKNOWN PROPERTY
		TArray WeaponAimOffsets; // 0x788(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotAimingDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotAimingSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x1640 (0x1670 - 0x30)
	class UFortAthenaAIBotAimingSkillSet : public UFortAthenaAIBotSkillSet	
	{
	public:
		FFocusSetting DefaultFocusSetting; // 0x30(0x140)
		TArray FocusSettings; // 0x170(0x10)
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
		FWeaponAccuracy NoWeaponAccuracy; // 0x9F0(0x7D8)
		TArray WeaponAccuracies; // 0x11C8(0x10)
		TArray TargetBasedAccuracies; // 0x11D8(0x10)
		bool bDigestTrackingOffsetModifiersWithAvgMatchMMR : 1; // 0x11E8:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x11E9(0x7) UNKNOWN PROPERTY
		TArray TrackingOffsetModifiers; // 0x11F0(0x10)
		FAimingCircleSettings DefaultAimingCircleSettings; // 0x1200(0x460)
		TArray AimOffsetSettings; // 0x1660(0x10)

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
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UAISenseScalableConfig ScalableSenseConfig; // 0x30(0x8)

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
		unsigned char UnknownData09_3[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		TArray MeleeWeaponCategorySkills; // 0x40(0x10)
		float MaxDistanceToThrowMeleeAttackSq; // 0x50(0x4)
		float ExcludeReachingTargetInMeleeTime; // 0x54(0x4)
		float ExcludeReachingTargetMoveDistanceSquared; // 0x58(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery ContinousMeleeAttackTagQuery; // 0x60(0x48)
		bool bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon; // 0xA8(0x1)
		bool bOnlyUsePickaxeAgainstGameParticipants; // 0xA9(0x1)
		unsigned char UnknownData11_6[0x2]; // 0xAA(0x2) UNKNOWN PROPERTY
		float MaxDistanceToConsiderAsAnAlternateTargetSq; // 0xAC(0x4)
		bool bEnableAlternateTargetRequiredTags; // 0xB0(0x1)
		unsigned char UnknownData12_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer AlternateTargetRequiredTags; // 0xB8(0x20)
		bool bEnableWTFBehavior; // 0xD8(0x1)
		unsigned char UnknownData13_6[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData14_6[0x3]; // 0x161(0x3) UNKNOWN PROPERTY
		float ThrowableMinimumRangeSquared; // 0x164(0x4)
		float ThrowableMaxRangeSquared; // 0x168(0x4)
		bool bThrowableHasMaxRange; // 0x16C(0x1)
		bool bThrowableEvaluatorActive; // 0x16D(0x1)
		bool bThrowablePreventedOnFlyingTargets; // 0x16E(0x1)
		unsigned char UnknownData15_6[0x1]; // 0x16F(0x1) UNKNOWN PROPERTY
		float RetreatMinHealthRange; // 0x170(0x4)
		float RetreatMaxHealthRange; // 0x174(0x4)
		float RetreatProbability; // 0x178(0x4)
		float RetreatRangeMinSquared; // 0x17C(0x4)
		float RetreatRangeMaxSquared; // 0x180(0x4)
		float RetreatMaxDuration; // 0x184(0x4)
		FVector RetreatPositionBoxExtent; // 0x188(0x18)
		bool CautiousInvestigationEnabled; // 0x1A0(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		float TimeSinceLastStimToBeCautious; // 0x1A4(0x4)
		float CautiousInvestigationTimeMax; // 0x1A8(0x4)
		unsigned char UnknownData17_7[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY

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
		TArray MeleeWeaponSkills; // 0x30(0x10)
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
		TArray WeightedBuildingLists; // 0x60(0x10)

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
		TArray WeightedBuildingLists; // 0xD0(0x10)
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
		TArray CosmeticLibraries; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotCosmeticData");
			return ret;
		}

		TWeakObjectPtr FindLibraryDataFromName(FString PartialName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B6358
	};


	// Class FortniteAI.FortAthenaAIBotCosmeticLibraryData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x190 (0x1C0 - 0x30)
	class UFortAthenaAIBotCosmeticLibraryData : public UPrimaryDataAsset	
	{
	public:
		TWeakObjectPtr PredefineSetsDataTable; // 0x30(0x20)
		TWeakObjectPtr CharactersDataTable; // 0x50(0x20)
		TWeakObjectPtr GlidersDataTable; // 0x70(0x20)
		TWeakObjectPtr SkyDiveContrailsDataTable; // 0x90(0x20)
		TWeakObjectPtr BackpacksDataTable; // 0xB0(0x20)
		TWeakObjectPtr PickaxesDataTable; // 0xD0(0x20)
		TWeakObjectPtr FallbackCharactersDataTable; // 0xF0(0x20)
		TWeakObjectPtr EmotesDataTable; // 0x110(0x20)
		TWeakObjectPtr BannerIconDataTable; // 0x130(0x20)
		TWeakObjectPtr BannerColorDataTable; // 0x150(0x20)
		FScalableFloat OddsToUseSameSetCosmeticItems; // 0x170(0x28)
		FScalableFloat OddsToUseRandomItemWhenNoneFromSetAvailable; // 0x198(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotCosmeticLibraryData");
			return ret;
		}

		TArray RetrieveDataTables(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B65F8
		UDataTable FindDataTableFromAssetType(FString AssetType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B6518
		bool FillDataTableValuesFromSourceLibrary(UFortAthenaAIBotCosmeticLibraryData SourceLibrary); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B6438
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

		bool SplitDataArrayByType(TArray& InAssetNames, TArray& InAssetTypes, TArray& InAssetUsageCounts, TArray& InAssetTypeSplitIndices, int32_t CurrentSplitIndex, FString& OutAssetType, TArray& OutAssetNames, TArray& OutAssetUsageCounts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149B6A58
		TArray OpenCSVFileDialog(FString TitleDetails, bool bAllowMultipleFiles); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4149B6978
		bool LoadDataFromCSV(FString FilePath, TArray& ForbiddenAssetNames, TArray& ForbiddenAssetPrefix, TArray& AssetNames, TArray& AssetTypes, TArray& AssetUsageCounts, TArray& AssetTypeSplitIndices); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149B6898
		bool GenerateWeightedCSV(FString AssetTypeName, TArray& AssetNames, TArray& AssetWeight, FString& CSV); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4149B67B8
		bool ExportDataTableToSourceCSV(UDataTable DataTable, bool bCanCheckOutFile); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4149B66D8
	};


	// Class FortniteAI.FortAthenaAIBotCustomizationData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x150 (0x180 - 0x30)
	class UFortAthenaAIBotCustomizationData : public UPrimaryDataAsset	
	{
	public:
		UClass PawnClass; // 0x30(0x8)
		unsigned char UnknownData01_7[0x148]; // 0x38(0x148) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotCustomizationData");
			return ret;
		}

		void SetCharacterCustomizationFromPlayerPawn(AFortPlayerPawn InFortPawn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B6B38
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
		UBehaviorTreeComponent CachedOwnerComp; // 0x28(0x8)
		AAIController CachedAIController; // 0x30(0x8)
		UClass OverrideNavigationFilterClass; // 0x38(0x8)
		unsigned char UnknownData03_6[0x18]; // 0x40(0x18) UNKNOWN PROPERTY
		FName ExecutionStatusName; // 0x58(0x4)
		unsigned char UnknownData04_6[0xC]; // 0x5C(0xC) UNKNOWN PROPERTY
		TScriptInterface CachedLODSettingsInterface; // 0x68(0x10)
		UBlackboardKeyAccessValidator KeyAccessValidator; // 0x78(0x8)
		unsigned char UnknownData05_7[0x20]; // 0x80(0x20) UNKNOWN PROPERTY

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
		AFortAthenaAIBotController CachedBotController; // 0xA0(0x8)

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
		UFortAthenaAIBotUnstuckDigestedSkillSet UnstuckSkillSet; // 0xD8(0x8)
		unsigned char UnknownData01_7[0xA8]; // 0xE0(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIEvaluator_Movement");
			return ret;
		}

		void OnCurrentUnstuckSteeringAttemptFinished(EUnstuckSteeringReason UnstuckSteeringReason); // Flags: Final|Native|Private 0x7FF4149B6CF8
		void EvaluateIsolatedIslandSteering(); // Flags: Final|Native|Private 0x7FF4149B6C18
	};


	// Class FortniteAI.FortAthenaAIBotEvaluator_Movement
	// Inherited from UFortAthenaAIEvaluator_Movement -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x18 (0x1A0 - 0x188)
	class UFortAthenaAIBotEvaluator_Movement : public UFortAthenaAIEvaluator_Movement	
	{
	public:
		AFortAthenaAIBotController CachedBotController; // 0x188(0x8)
		UAthenaAIServicePlayerBots CachedAIServicePlayerBots; // 0x190(0x8)
		UFortAthenaAIBotMovementDigestedSkillSet CachedMovementDigestedSkillSet; // 0x198(0x8)

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
		UAthenaAIServiceLoot CachedAIServiceLoot; // 0x1A0(0x8)
		UFortAthenaAIBotLootingDigestedSkillSet LootingSkillSet; // 0x1A8(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x1B0(0x10) UNKNOWN PROPERTY
		FName LootDestinationKeyName; // 0x1C0(0x4)
		FName LootObjectKeyName; // 0x1C4(0x4)
		FName LootTypeKeyName; // 0x1C8(0x4)
		FName POINavigationExecutionStatusKeyName; // 0x1CC(0x4)
		unsigned char UnknownData05_6[0x8]; // 0x1D0(0x8) UNKNOWN PROPERTY
		EExecutionStatus POINavigationExecutionStatus; // 0x1D8(0x1)
		unsigned char UnknownData06_6[0x177]; // 0x1D9(0x177) UNKNOWN PROPERTY
		uint32_t CurrentLootOctreeElementId; // 0x350(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x354(0x4) UNKNOWN PROPERTY
		AFortTeamInfoAthena CachedTeamInfo; // 0x358(0x8)

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
		unsigned char UnknownData02_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FDigestedEvasiveManeuverSkillSettings DefaultEvasiveManeuverSkillSettings; // 0x38(0x58)
		TArray EvasiveManeuverSkillSettingsSpecializations; // 0x90(0x10)
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
		unsigned char UnknownData03_7[0x5]; // 0x143(0x5) UNKNOWN PROPERTY

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
		TArray EvasiveManeuverSkillSettingsSpecializations; // 0x288(0x10)
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
		TArray HealthItemsSpecializations; // 0x40(0x10)
		FFortBotDigestedHealingItemsList ShieldItemsList; // 0x50(0x10)
		TArray ShieldItemsSpecializations; // 0x60(0x10)
		unsigned char UnknownData01_7[0x48]; // 0x70(0x48) UNKNOWN PROPERTY

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
		TArray HealthItemsSpecializations; // 0x40(0x10)
		FFortBotHealingItemsList ShieldItemsList; // 0x50(0x10)
		TArray ShieldItemsSpecializations; // 0x60(0x10)
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
		unsigned char UnknownData03_6[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer InventorySlotPreference; // 0x40(0xC0)
		TArray EquipWeaponInfo; // 0x100(0x10)
		bool bShouldPrioritizeRangedWeaponWithoutTarget; // 0x110(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer InfiniteAmmoCheats; // 0x118(0x20)
		TArray MaterialItems; // 0x138(0x10)
		float GiveMaterialsToBotFrequency; // 0x148(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
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
		TArray EquipWeaponInfo; // 0x168(0x10)
		FScalableFloat ShouldPrioritizeRangedWeaponWithoutTarget; // 0x178(0x28)
		FScalableFloat HasInfiniteAmmoForAllWeapons; // 0x1A0(0x28)
		TArray AmmoCheats; // 0x1C8(0x10)
		TArray MaterialItems; // 0x1D8(0x10)
		FScalableFloat GiveMaterialsToBotFrequency; // 0x1E8(0x28)
		FScalableFloat NoWeaponGiveWeaponAfterTime; // 0x210(0x28)
		FScalableFloat NoWeaponNoPlayerConeDistance; // 0x238(0x28)
		FScalableFloat NoWeaponNoPlayerConeFOV; // 0x260(0x28)
		FName NoWeaponLootTierGroup; // 0x288(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x28C(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData03_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector OctreeBoxHalfExtent; // 0x40(0x18)
		float LootStateEvaluationRadiusSq; // 0x58(0x4)
		bool bShouldHastyFillInventory; // 0x5C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
		float MinLootDurationPerPOI; // 0x60(0x4)
		float MaxLootDurationPerPOI; // 0x64(0x4)
		float LootPickupInteractionTime; // 0x68(0x4)
		float LootPickupInteractionDeviationTime; // 0x6C(0x4)
		float Distance2DScore; // 0x70(0x4)
		float HeightScore; // 0x74(0x4)
		float ThreatMaxScore; // 0x78(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData11_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData12_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float GliderBehaviorMinInterval; // 0x70(0x4)
		float GliderBehaviorMaxInterval; // 0x74(0x4)
		float GliderBehaviorMinRadius; // 0x78(0x4)
		float GliderBehaviorMaxRadius; // 0x7C(0x4)
		float GliderBehaviorSurveyProbability; // 0x80(0x4)
		bool GliderMovementTypeEnableFlag; // 0x84(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData14_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData15_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		float SteerMovementWhenLaunchedDirectionUpdateTime; // 0x11C(0x4)
		float MaxReactionTimeToDangerZone; // 0x120(0x4)
		float MaxReactionTimeToDangerZoneDeviation; // 0x124(0x4)
		float PathOffsetDistanceFromCorners; // 0x128(0x4)
		bool bLimitBlockingObstacleAngle; // 0x12C(0x1)
		bool bShouldAutoJumpOverBlockingObstacles; // 0x12D(0x1)
		bool bShouldAutoJumpOverBlockingObstaclesWhenSwimming; // 0x12E(0x1)
		bool bShouldTargetBuildingActorWhenBlocked; // 0x12F(0x1)
		bool bShouldTargetPlayerBuiltBuildingActorWhenBlocked; // 0x130(0x1)
		bool bEnableSwimSprintJump; // 0x131(0x1)
		unsigned char UnknownData16_6[0x2]; // 0x132(0x2) UNKNOWN PROPERTY
		float SwimSprintJumpDelay; // 0x134(0x4)
		float SwimSprintJumpDelayDeviation; // 0x138(0x4)
		float SwimUnblockJumpHeightThreshold; // 0x13C(0x4)
		bool bSwimSprintJumpNav2D; // 0x140(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x141(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData18_6[0x3]; // 0x171(0x3) UNKNOWN PROPERTY
		float TacticalSprintJumpTriggerChance; // 0x174(0x4)
		float TacticalSprintJumpDelay; // 0x178(0x4)
		float TacticalSprintJumpDelayDeviation; // 0x17C(0x4)
		float TacticalSprintJumpDelayInitialRatio; // 0x180(0x4)
		unsigned char UnknownData19_6[0x4]; // 0x184(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData20_6[0x3]; // 0x209(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData21_6[0x6]; // 0x25A(0x6) UNKNOWN PROPERTY
		FDigestedBotKnockbackSettings DefaultKnockbackSettings; // 0x260(0x50)
		TArray KnockbackSettingsSpecializations; // 0x2B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotMovementDigestedSkillSet");
			return ret;
		}
	};


	// Class FortniteAI.FortAthenaAIBotMovementSkillSet
	// Inherited from UFortAthenaAIBotSkillSet -> UObject
	// Size: 0x14B8 (0x14E8 - 0x30)
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
		FScalableFloat MaxAfterLaunchedPauseTime; // 0xBC0(0x28)
		FScalableFloat MaxAfterLaunchedFromVortexPauseTime; // 0xBE8(0x28)
		FScalableFloat AfterLaunchedPauseTimeDeviation; // 0xC10(0x28)
		FScalableFloat SteerMovementWhenLaunched; // 0xC38(0x28)
		FScalableFloat SteerMovementWhenLaunchedDirectionUpdateTime; // 0xC60(0x28)
		FScalableFloat MaxReactionTimeToDangerZone; // 0xC88(0x28)
		FScalableFloat MaxReactionTimeToDangerZoneDeviation; // 0xCB0(0x28)
		FScalableFloat AllowSwimWobble; // 0xCD8(0x28)
		FScalableFloat EnableSwimSprintJump; // 0xD00(0x28)
		FScalableFloat SwimSprintJumpDelay; // 0xD28(0x28)
		FScalableFloat SwimSprintJumpDelayDeviation; // 0xD50(0x28)
		FScalableFloat SwimUnblockJumpHeightThreshold; // 0xD78(0x28)
		FScalableFloat SwimSprintJumpNav2D; // 0xDA0(0x28)
		FScalableFloat TacticalSprintEvaluationMinTime; // 0xDC8(0x28)
		FScalableFloat TacticalSprintEvaluationMaxTime; // 0xDF0(0x28)
		FScalableFloat TacticalSprintMinTriggerChance; // 0xE18(0x28)
		FScalableFloat TacticalSprintMaxTriggerChance; // 0xE40(0x28)
		FScalableFloat TacticalSprintMinTriggerChanceInUrgentMovement; // 0xE68(0x28)
		FScalableFloat TacticalSprintMaxTriggerChanceInUrgentMovement; // 0xE90(0x28)
		FScalableFloat TacticalSprintMaxSlopeAngle; // 0xEB8(0x28)
		FScalableFloat TacticalSprintMinPathTargetDistance; // 0xEE0(0x28)
		FScalableFloat TacticalSprintMaxPathAlignmentAngle; // 0xF08(0x28)
		FScalableFloat TacticalSprintMaxPathConeAngle; // 0xF30(0x28)
		FScalableFloat TacticalSprintPathConeRearOffset; // 0xF58(0x28)
		FScalableFloat TacticalSprintUsageEnabled; // 0xF80(0x28)
		FScalableFloat TacticalSprintJumpTriggerChance; // 0xFA8(0x28)
		FScalableFloat TacticalSprintJumpDelay; // 0xFD0(0x28)
		FScalableFloat TacticalSprintJumpDelayDeviation; // 0xFF8(0x28)
		FScalableFloat TacticalSprintJumpDelayInitialRatio; // 0x1020(0x28)
		FVector SlidingBoxExtent; // 0x1048(0x18)
		FScalableFloat SlidingEnabled; // 0x1060(0xA0)
		FScalableFloat SlidingEvaluationMinTime; // 0x1100(0x28)
		FScalableFloat SlidingEvaluationMaxTime; // 0x1128(0x28)
		FScalableFloat SlidingTriggerChanceStyleMalus; // 0x1150(0x28)
		FScalableFloat SlidingTriggerChanceStyleMalusRandomDeviation; // 0x1178(0x28)
		FScalableFloat SlidingTriggerChanceFlat; // 0x11A0(0x28)
		FScalableFloat SlidingTriggerChanceLittleSlope; // 0x11C8(0x28)
		FScalableFloat SlidingTriggerChanceSteepSlope; // 0x11F0(0x28)
		FScalableFloat SlidingDuringUrgentMovementTriggerChanceFlat; // 0x1218(0x28)
		FScalableFloat SlidingDuringUrgentMovementTriggerChanceLittleSlope; // 0x1240(0x28)
		FScalableFloat SlidingDuringUrgentMovementTriggerChanceSteepSlope; // 0x1268(0x28)
		FScalableFloat MinSlidingDuration; // 0x1290(0x28)
		FScalableFloat SlidingCooldownMinTime; // 0x12B8(0x28)
		FScalableFloat SlidingCooldownMaxTime; // 0x12E0(0x28)
		FScalableFloat SlidingStopMinDelay; // 0x1308(0x28)
		FScalableFloat SlidingStopMaxDelay; // 0x1330(0x28)
		FScalableFloat SlidingMaxPathConeAngle; // 0x1358(0x28)
		FScalableFloat SlidingMinPathTargetDistance; // 0x1380(0x28)
		FScalableFloat SlidingAllowResumeFocusOnTargetTriggerChance; // 0x13A8(0x28)
		FVector ZiplineOctreeBoxExtent; // 0x13D0(0x18)
		FScalableFloat ThresholdDistanceToRescanForZiplines; // 0x13E8(0x28)
		FScalableFloat CooldownBetweenZiplineUsages; // 0x1410(0x28)
		FScalableFloat DistanceToAddToZiplineStartPosition; // 0x1438(0x28)
		FScalableFloat RadiusFromZiplineEnterPointToLookAtExit; // 0x1460(0x28)
		FScalableFloat ZiplineUsageEnabled; // 0x1488(0x28)
		FScalableFloat CanOpenDoors; // 0x14B0(0x28)
		TArray KnockbackSettings; // 0x14D8(0x10)

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
		AFortAthenaAIBotController BotController; // 0x378(0x8)
		ABuildingActor HitBuilding; // 0x380(0x8)
		UFortAthenaAIBotUnstuckDigestedSkillSet CachedUnstuckSkillSet; // 0x388(0x8)
		UFortAthenaAIBotMovementDigestedSkillSet CachedMovementSkillSet; // 0x390(0x8)
		UFortAthenaAIBotVehicleDigestedSkillSet CachedVehicleSkillSet; // 0x398(0x8)
		unsigned char UnknownData01_7[0x268]; // 0x3A0(0x268) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIBotPathFollowingComponent");
			return ret;
		}

		void HandlePawnTeleported(AFortPawn TeleportedPawn); // Flags: Final|Native|Public 0x7FF4149B6DD8
	};


	// Class FortniteAI.FortAthenaAIBotPerceptionDigestedSkillSet
	// Inherited from UFortAthenaAIBotDigestedSkillSet -> UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x348 (0x378 - 0x30)
	class UFortAthenaAIBotPerceptionDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet	
	{
	public:
		float SightReactionTime; // 0x30(0x4)
		float SightRandomDeviation; // 0x34(0x4)
		unsigned char UnknownData05_6[0x28]; // 0x38(0x28) UNKNOWN PROPERTY
		TArray SightReactionSpecializations; // 0x60(0x10)
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
		unsigned char UnknownData06_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FFortAthenaAIBotDigestedTargetHeuristicSettings DefaultTargetHeuristicSettings; // 0xB8(0x1A0)
		TArray TargetHeuristicsSettingsSpecializations; // 0x258(0x10)
		FSoundPerceptionDigestedSetting SoundSettings; // 0x268(0x60)
		float AlertedAccumulatedLoudnessLimit; // 0x2C8(0x4)
		float AlertedAccumulatedDamageLimit; // 0x2CC(0x4)
		float LKPAccumulatedLoudnessLimit; // 0x2D0(0x4)
		float EnemyMarkingDelay; // 0x2D4(0x4)
		float EnemyMarkingDelayRandomDeviation; // 0x2D8(0x4)
		float AdditionalMarkedEnemyLKPForgetTime; // 0x2DC(0x4)
		float AdditionalMarkedEnemyLKPForgetDistance; // 0x2E0(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FAlertLevelInfo AlertLevelInfos; // 0x2E8(0x40)
		float ProjectileThreatForgetTime; // 0x328(0x4)
		FTrapPerceptionSettings TrapPerceptionSettings; // 0x32C(0x14)
		bool bStealthMeterEnable; // 0x340(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x341(0x3) UNKNOWN PROPERTY
		float StealthMeterThreshold; // 0x344(0x4)
		FScalableFloat StealthMeterIncreaseSpeed; // 0x348(0x28)
		float StealthMeterDecreaseSpeed; // 0x370(0x4)
		bool bStealthMeterAllowSharedTarget; // 0x374(0x1)
		bool bStealthMeterForceLKPWhenDamagedAndThreatened; // 0x375(0x1)
		unsigned char UnknownData09_7[0x2]; // 0x376(0x2) UNKNOWN PROPERTY

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
		TArray SightReactionSpecializations; // 0xA8(0x10)
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
		TArray TargetHeuristicSettingsSpecializations; // 0x640(0x10)
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
		TArray AlertLevelConfigs; // 0xBA0(0x10)
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
		unsigned char UnknownData01_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		TArray ChangeToAggressiveData; // 0x88(0x10)

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
		TArray ChangeToAggressiveData; // 0xF8(0x10)

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
		TWeakObjectPtr CachedWeaponUsedToCalculateSkillSet; // 0x30(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		TArray RangedWeaponCategorySkills; // 0x40(0x10)
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
		unsigned char UnknownData06_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		float PositioningMaxSearchRadius; // 0xD4(0x4)
		float PositioningQueryCooldown; // 0xD8(0x4)
		float PositioningQueryCooldownDeviation; // 0xDC(0x4)
		int32_t CoverPeekCountMin; // 0xE0(0x4)
		int32_t CoverPeekCountMax; // 0xE4(0x4)
		float ShotDelayAfterTargetRevived; // 0xE8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
		TArray DefaultTargetInAirFiringPatterns; // 0xF0(0x10)
		bool bStepBackEnabled; // 0x100(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x101(0x3) UNKNOWN PROPERTY
		float StepBackCooldown; // 0x104(0x4)
		float StepBackPercentageChance; // 0x108(0x4)
		float StepBackDistanceBetweenAIPawnAndTargetMin; // 0x10C(0x4)
		float StepBackDistanceBetweenAIPawnAndTargetMax; // 0x110(0x4)
		float StepBackDistanceBetweenCoverAndTargetMin; // 0x114(0x4)
		float StepBackDistanceBetweenCoverAndTargetMax; // 0x118(0x4)
		unsigned char UnknownData09_7[0x34]; // 0x11C(0x34) UNKNOWN PROPERTY

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
		TArray RangedWeaponSkills; // 0x30(0x10)
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
		TArray DefaultTargetInAirFiringPatterns; // 0x3D0(0x10)
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
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		int32_t MaxSteeringDirectionAttempts; // 0x70(0x4)
		float SteeringAttemptDuration; // 0x74(0x4)
		float EvaluateIsolatedIslandSteeringTime; // 0x78(0x4)
		bool bCanSlideWhenBlocked; // 0x7C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
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
		TArray VehicleDrivingArray; // 0xE8(0x10)

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
		TArray VehicleDrivingArray; // 0x358(0x10)

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
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		UClass CoverPositionFilterClass; // 0xA0(0x8)
		FVector CoverBoxExtent; // 0xA8(0x18)
		float CoverOffset; // 0xC0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		AAIController CachedController; // 0xC8(0x8)
		TWeakObjectPtr LastBuildingActorUsedForCover; // 0xD0(0x8)

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
		TArray AIEvaluators; // 0xA0(0x10)

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
		unsigned char UnknownData01_7[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY

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
		TMap ClassToSettings; // 0x28(0x50)
		TArray LODSettings_AIEvaluators; // 0x78(0x10)
		TArray LODSettings_CharacterMovement; // 0x88(0x10)
		TArray LODSettings_FortWeaponRanged; // 0x98(0x10)
		TArray LODSettings_GenericTickingObject; // 0xA8(0x10)
		UClass FortAIDirectorLODConfig; // 0xB8(0x8)
		UFortAIDirectorLODAIConfig FortAIDirectorObjectLODConfig; // 0xC0(0x8)

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
		unsigned char UnknownData04_6[0x2]; // 0xA1(0x2) UNKNOWN PROPERTY
		unsigned char UnknownBit05 : 1; // 0xA3:0(0x1) UNKNOWN PROPERTY
		bool bCouldBeVisibleToPlayers : 1; // 0xA3:1(0x1)
		unsigned char UnknownData06_5[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		AFortPawn CachedFortPawn; // 0xA8(0x8)
		UFortAthenaAILODSettingsContainer AILODSettingsContainer; // 0xB0(0x8)
		unsigned char UnknownData07_7[0x30]; // 0xB8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAILODComponent");
			return ret;
		}

		void OnRep_CurrentFortAILODLevel(); // Flags: Final|Native|Private 0x7FF4149B6EB8
	};


	// Class FortniteAI.FortAthenaAIObjectTracker
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UFortAthenaAIObjectTracker : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0x30(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIObjectTracker");
			return ret;
		}

		FFortAthenaAIObjectTrackerQuery BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified(FFortAthenaAIObjectTrackerQuerySimplified& SimplifiedQuery, AActor OptionalQuerier); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4149B6F98
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
		TMap RegisteredParametersProviders; // 0xA0(0x50)
		TMap ExtractedRuntimeParameters; // 0xF0(0x50)

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
		unsigned char UnknownData02_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float UnreachableBanDuration; // 0x34(0x4)
		float SelectedSmartObjectExpirationDelay; // 0x38(0x4)
		float GlobalSmartObjectCooldownOnFinished; // 0x3C(0x4)
		float GlobalSmartObjectCooldownOnInterrupted; // 0x40(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase");
			return ret;
		}

		void SetChooseClosestSmartObject(bool bInChooseClosestSmartObject); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149B7158
		bool GetChooseClosestSmartObject(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B7078
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
		unsigned char UnknownData01_1[0x78]; // 0x28(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponentList");
			return ret;
		}

		UFortAthenaAISpawnerDataComponentList OverrideComponentClass(UClass NewComponentSubClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B7778
		UFortAthenaAISpawnerDataComponentList OverrideComponent(UFortAthenaAISpawnerDataComponent NewComponent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149B7698
		FTransform GetSpawnTransform(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149B75B8
		UFortAthenaAISpawnerDataComponent GetOrCreateComponentClassForModification(UObject ComponentOuter, UClass ClassToClone); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B74D8
		TArray GetList(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B73F8
		APawn GetDefaultPawn(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B7318
		UFortAthenaAISpawnerDataComponent GetComponentClassForModification(UClass ClassToGet); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149B7238
	};


	// Class FortniteAI.FortAthenaAIRuntimeParameters_AffiliationBase
	// Inherited from UFortAthenaAIRuntimeParameters -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UFortAthenaAIRuntimeParameters_AffiliationBase : public UFortAthenaAIRuntimeParameters	
	{
	public:
		unsigned char UnknownData03_3[0x4]; // 0x30(0x4) UNKNOWN PROPERTY
		bool bFullTeamAwarenessPropagation : 1; // 0x34:0(0x1)
		bool bAwarenessPropagationIsBasedOnAlertLevel : 1; // 0x34:1(0x1)
		bool bTurnHostileOnDamageIfNeutral : 1; // 0x34:2(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		float TurnHostileWhenBlockedTime; // 0x38(0x4)
		bool bPropagateHostilityOnDamaged : 1; // 0x3C:0(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY

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
		TArray FactionSharedBBConfigurations; // 0xC8(0x10)
		FScalableFloat bFullTeamAwarenessPropagation; // 0xD8(0x28)
		FScalableFloat bAwarenessPropagationIsBasedOnAlertLevel; // 0x100(0x28)
		FScalableFloat FullTeamAwarenessMaxDistance; // 0x128(0x28)
		bool bAddGameParticipantFactionAutomatically; // 0x150(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x151(0x3) UNKNOWN PROPERTY
		int32_t OverrideTeamIndex; // 0x154(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase");
			return ret;
		}

		void SetOverrideTeamIndex(int32_t InOverrideTeamIdx); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149B8038
		void SetFullTeamAwarenessPropagationDistance(float InFullTeamAwarenessMaxDistance); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B7F58
		void SetFullTeamAwarenessPropagation(bool bInFullTeamAwarenessPropagation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B7E78
		void SetFactionTags(FGameplayTagContainer& NewTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149B7D98
		void SetAwarenessPropagationIsBasedOnAlertLevel(bool bInAwarenessPropagationIsBasedOnAlertLevel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B7CB8
		bool GetTeamID(int32_t& OutTeamId); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149B7BD8
		bool GetFullTeamAwarenessPropagation(float Level); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B7AF8
		float GetFullTeamAwarenessMaxDistance(float Level); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B7A18
		FGameplayTagContainer GetFactionTag(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B7938
		bool GetAwarenessPropagationIsBasedOnAlertLevel(float Level); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B7858
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
		unsigned char UnknownData01_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
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
		UFortBotNameSettings NameSettingsAfterReveal; // 0x40(0x8)
		FGameplayTagContainer DisguisedFactionsBeforeReveal; // 0x48(0x20)
		FGameplayTagContainer DisguisedFactionsAfterReveal; // 0x68(0x20)
		TArray DisguiseGameplayEffectBeforeReveal; // 0x88(0x10)
		TArray DisguiseGameplayEffectAfterReveal; // 0x98(0x10)
		TArray DisguiseInventory; // 0xA8(0x10)
		FDataTableRowHandle DisguiseLootInfo; // 0xB8(0x10)
		UClass DisguiseConversationComponentOverride; // 0xC8(0x8)

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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_5[0x6]; // 0x15A(0x6) UNKNOWN PROPERTY
		FScalableFloat SupportsMarkerWithFaction; // 0x160(0x28)
		FScalableFloat MarkerPropagationMaxDistance; // 0x188(0x28)
		FScalableFloat DisguiseProbability; // 0x1B0(0x28)
		FScalableFloat RevealDisguiseOnDamage; // 0x1D8(0x28)
		FScalableFloat RevealOnDamageExcludeAIPawnDamage; // 0x200(0x28)
		FScalableFloat RevealDisguiseOnPlayerProximity; // 0x228(0x28)
		FScalableFloat RevealPlayerProximityDistance; // 0x250(0x28)
		FScalableFloat RevealPlayerProximityMinDuration; // 0x278(0x28)
		FScalableFloat RevealPlayerProximityMaxDuration; // 0x2A0(0x28)
		UFortBotNameSettings NameSettingsAfterReveal; // 0x2C8(0x8)
		FGameplayTagContainer DisguisedFactionsBeforeReveal; // 0x2D0(0x20)
		FGameplayTagContainer DisguisedFactionsAfterReveal; // 0x2F0(0x20)
		TArray DisguiseGameplayEffectBeforeReveal; // 0x310(0x10)
		TArray DisguiseGameplayEffectAfterReveal; // 0x320(0x10)
		TArray DisguiseInventory; // 0x330(0x10)
		FDataTableRowHandle DisguiseLootInfo; // 0x340(0x10)
		UClass DisguiseConversationComponent; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation");
			return ret;
		}

		bool GetSquadID(int32_t& OutSquadId); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149B8118
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAnalytic
	// Inherited from UFortAthenaAISpawnerDataComponent_AnalyticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x38 (0x98 - 0x60)
	class UFortAthenaAISpawnerDataComponent_AIBotAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase	
	{
	public:
		bool bUseDescriptorTagSuffix : 1; // 0x60:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		FString BotIDSuffix; // 0x68(0x10)
		TArray IdleDetectionBucketsCutoffs; // 0x78(0x10)
		TArray DamageDistanceBuckets; // 0x88(0x10)

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
		unsigned char UnknownData02_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		uint32_t BehaviorTreeControls; // 0x48(0x4)
		unsigned char UnknownData03_7[0x14]; // 0x4C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl");
			return ret;
		}

		bool IsBehaviorTreeBranchActive(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B83B8
		void EnableBehaviorTreeBranch(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B82D8
		void DisableBehaviorTreeBranch(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B81F8
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
		unsigned char UnknownData02_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float MaxDistanceToRevive; // 0x34(0x4)
		float MaxDistanceToReviveHumanPlayer; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float AliveAlliesMaxRangeSqr; // 0x34(0x4)
		float SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat; // 0x38(0x4)
		bool bIsAllowedToGiveUpWhenRespawnEnabled : 1; // 0x3C:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float GiveUpMinTimer; // 0x40(0x4)
		float GiveUpMaxTimer; // 0x44(0x4)
		float GiveUpThreatenedAllyMaxDistanceSqr; // 0x48(0x4)
		float GiveUpThreatenedAllyRandomChance; // 0x4C(0x4)
		float GiveUpUnawareAllyMaxDistanceSqr; // 0x50(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
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
		TWeakObjectPtr PatrolEmote; // 0x30(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_5[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		FScalableFloat AllowReviveConverter; // 0x40(0x28)
		FScalableFloat AllowReviveConverterSquadmates; // 0x68(0x28)
		bool bUseReviveToken : 1; // 0x90:0(0x1)
		unsigned char UnknownData04_5[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FScalableFloat MaxDistanceToRevive; // 0x98(0x28)
		FScalableFloat MaxDistanceToReviveHumanPlayer; // 0xC0(0x28)
		FScalableFloat DieWhenAllAlliesAreDBNO; // 0xE8(0x28)
		bool bIsAllowedToMoveInDBNO : 1; // 0x110:0(0x1)
		unsigned char UnknownData05_5[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
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

		bool IsBehaviorTreeBranchActive(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B8658
		void EnableBehaviorTreeBranch(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B8578
		void DisableBehaviorTreeBranch(EBehaviorTreeBranches Behavior); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B8498
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotChanceEncounter
	// Inherited from UFortAthenaAISpawnerDataComponent_ChanceEncounterBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter : public UFortAthenaAISpawnerDataComponent_ChanceEncounterBase	
	{
	public:
		FScalableFloat PassiveHealerEnable; // 0x30(0x28)
		UClass PassiveHealerComponentClass; // 0x58(0x8)

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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float EnterBTTaskConversationIfPlayerAroundDistSqr; // 0x34(0x4)
		float WaitTimeWhileNotInConversationState; // 0x38(0x4)
		float SecondsToDenyActorToWaitForConversation; // 0x3C(0x4)
		TArray GreetingEmotes; // 0x40(0x10)
		float GreetingEmoteMaxDuration; // 0x50(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UFortTandemCharacterData CharacterData; // 0x58(0x8)

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
		UClass ConversationComponentClass; // 0x30(0x8)
		FGameplayTag ConversationEntryTag; // 0x38(0x4)
		FGameplayTag InteractorParticipantTag; // 0x3C(0x4)
		FGameplayTag SelfParticipantTag; // 0x40(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FScalableFloat EnterBTTaskConversationIfPlayerAround; // 0x48(0x28)
		FScalableFloat EnterBTTaskConversationIfPlayerAroundDist; // 0x70(0x28)
		FScalableFloat WaitTimeWhileNotInConversationState; // 0x98(0x28)
		FScalableFloat SecondsToDenyActorToWaitForConversation; // 0xC0(0x28)
		TArray GreetingEmotes; // 0xE8(0x10)
		FScalableFloat GreetingEmoteMaxDuration; // 0xF8(0x28)
		UFortTandemCharacterData CharacterData; // 0x120(0x8)
		FName ConversationInteractionCollisionProfile; // 0x128(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FVector ConversationInteractionBoxExtent; // 0x130(0x18)
		FVector ConversationInteractionBoxOffset; // 0x148(0x18)
		FScalableFloat SpawnOutOfTheLoop; // 0x160(0x28)
		FScalableFloat RespawnOutsideTheLoop; // 0x188(0x28)
		FScalableFloat RespawnAtOriginalSpawnLocation; // 0x1B0(0x28)
		FScalableFloat RemoveInvulnerabilityOutsideSafeZone; // 0x1D8(0x28)
		UClass NPCLoopStateComponentClass; // 0x200(0x8)
		FScalableFloat UseSpecialActorComponent; // 0x208(0x28)
		UClass SpecialActorComponentClass; // 0x230(0x8)
		FScalableFloat BlockSpecialActorUntilOutsideTheLoop; // 0x238(0x28)
		bool bCanConverseWhenConverted; // 0x260(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x261(0x7) UNKNOWN PROPERTY

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

		void GetFallbackTag(FGameplayTag& OutFallbackTag); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF4149B8738
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
	// Inherited from UFortAthenaAISpawnerDataComponent_CosmeticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase	
	{
	public:
		TArray CosmeticOverrideList; // 0x30(0x10)
		UFortAIPawnCustomizationDefinition CustomizationDefinition; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase");
			return ret;
		}

		void GetLoadout(FFortAthenaLoadout& OutLoadout); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF4149B8C78
		void GetDances(TArray& Dances, AFortAthenaAIBotController BotController); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF4149B8B98
		void GetCustomCharacterParts(TArray& OutCustomCharacterParts); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF4149B8AB8
		void GetAnimBPOverride(UClass& OutAnimBPOverride, int32_t& OutPriority); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF4149B89D8
		void GetAllLoadouts(TArray& OutLoadouts); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF4149B88F8
		void AddCosmeticOverrideItemDef(UAthenaCosmeticItemDefinition InCosmeticItemToPreview); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B8818
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotDebug
	// Inherited from UFortAthenaAISpawnerDataComponent_DebugBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x1A0 (0x1D0 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotDebug : public UFortAthenaAISpawnerDataComponent_DebugBase	
	{
	public:
		FDebugMinimapData DebugMinimapData; // 0x30(0x190)
		TArray EditorConsoleCommands; // 0x1C0(0x10)

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
		unsigned char UnknownData05_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float OddsOfBeingConvertibleFromDBNO; // 0x34(0x4)
		bool bForceKillWhenUnconverted; // 0x38(0x1)
		bool bForceKillWhenConverterDies; // 0x39(0x1)
		bool bCopyConverterSpecificRelations; // 0x3A(0x1)
		bool bRemoveFromAllFactions; // 0x3B(0x1)
		bool bAddConverterFactions; // 0x3C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		float ReleaseDistanceSq; // 0x40(0x4)
		float CheckReleaseConditionsTimeInterval; // 0x44(0x4)
		FGameplayTagContainer AddToFactions; // 0x48(0x20)
		FGameplayTagContainer RemoveFromFactions; // 0x68(0x20)
		char PreConversionTeamIndex; // 0x88(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer PreConversionFactions; // 0x90(0x20)
		TArray AbilitySetsForConverted; // 0xB0(0x10)
		FTeleportSettings TeleportSettings; // 0xC0(0x38)
		bool bEnableDBNO; // 0xF8(0x1)
		TEnumAsByte DBNOInteractionType; // 0xF9(0x1)
		unsigned char UnknownData08_6[0x2]; // 0xFA(0x2) UNKNOWN PROPERTY
		float DBNOInteractionDuration; // 0xFC(0x4)
		TArray PickupTagConvertInfos; // 0x100(0x10)
		FGameplayTag ConvertIdentifierTag; // 0x110(0x4)
		unsigned char UnknownData09_7[0x4]; // 0x114(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert");
			return ret;
		}

		void SetOddsOfBeingConvertibleFromDBNO(float InOddsOfBeingConvertibleFromDBNO); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9618
		void SetForceKillWhenUnconverted(bool bInForceKillWhenUnconverted); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9538
		void SetForceKillWhenConverterDies(bool bInForceKillWhenConverterDies); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9458
		void SetCanBeConvertedFromDBNO(bool bInCanBeConvertedFromDBNO); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9378
		void SetCanBeConverted(bool bInCanBeConverted); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9298
		TArray GetPickupTagConvertInfos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B91B8
		float GetOddsOfBeingConvertibleFromDBNO(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B90D8
		bool GetForceKillWhenUnconverted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B8FF8
		bool GetForceKillWhenConverterDies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B8F18
		bool GetCanBeConvertedFromDBNO(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B8E38
		bool GetCanBeConverted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B8D58
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
		unsigned char UnknownData05_5[0x2]; // 0x11A(0x2) UNKNOWN PROPERTY
		float SkillLevelOverride; // 0x11C(0x4)
		float PreConversionSkillLevel; // 0x120(0x4)
		float InnerLeashRadius; // 0x124(0x4)
		float OuterLeashRadius; // 0x128(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		UFortAthenaAIRuntimeParameters_Leash PreConversionLeashParams; // 0x130(0x8)
		float LeashFollowActorUpdateRate; // 0x138(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData08_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		TArray ConvertedSkillSetClasses; // 0x198(0x10)
		TArray PreConversionSkillSetClasses; // 0x1A8(0x10)
		unsigned char UnknownData09_7[0x10]; // 0x1B8(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_6[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
		FLeashInfoOverride DefaultLeashInfo; // 0x58(0x8)
		TMap AlertLevelLeashOverride; // 0x60(0x50)

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
		unsigned char UnknownData01_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float RespawnTime; // 0x34(0x4)
		FVector RespawnLocationOverride; // 0x38(0x18)
		UFortAthenaAISpawnerDataComponentList AISpawnerDataComponentList; // 0x50(0x8)

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
		unsigned char UnknownData06_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
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
		TArray AbilitySetsForConverted; // 0x230(0x10)
		FTeleportSettings TeleportSettings; // 0x240(0x38)
		bool bApplyTaggedNavFilters; // 0x278(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x279(0x7) UNKNOWN PROPERTY
		FFortAITaggedNavFilterData NavFilterData; // 0x280(0x60)
		bool bEnableDBNO; // 0x2E0(0x1)
		TEnumAsByte DBNOInteractionType; // 0x2E1(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x2E2(0x2) UNKNOWN PROPERTY
		float DBNOInteractionDuration; // 0x2E4(0x4)
		bool bOnlyLeaderInteraction; // 0x2E8(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x2E9(0x3) UNKNOWN PROPERTY
		FGameplayTag ConvertIdentifierTag; // 0x2EC(0x4)
		bool bCanSleep; // 0x2F0(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery SleepForTheseGoalActors; // 0x2F8(0x48)
		unsigned char UnknownData11_7[0x8]; // 0x340(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase");
			return ret;
		}

		bool ShouldOverrideGlobalSpeedMultiplier(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149B9A78
		void SetCopyConverterSpecificRelations(bool bInCopyConverterSpecificRelations); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9998
		void SetCanBeConverted(bool bInCanBeConverted); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B98B8
		void PostOnSpawnedBP(APawn PawnAI); // Flags: Event|Public|BlueprintEvent|Const 0x7FF4149B97D8
		float GetGlobalSpeedMultiplier(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149B96F8
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay
	// Inherited from UFortAthenaAISpawnerDataComponent_GameplayBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x5B0 (0x8F8 - 0x348)
	class UFortAthenaAISpawnerDataComponent_AIBotGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase	
	{
	public:
		UFortBotNameSettings NameSettings; // 0x348(0x8)
		bool bRequiresUniqueNetId : 1; // 0x350:0(0x1)
		unsigned char UnknownData04_5[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FScalableFloat CanRespawnOnDeath; // 0x358(0x28)
		FScalableFloat RespawnOnDeathLocation; // 0x380(0x28)
		FScalableFloat RespawnTime; // 0x3A8(0x28)
		float PawnCullDistanceAfterPlayerAggroMode; // 0x3D0(0x4)
		EReachLocationValidationMode ReachLocationValidationMode; // 0x3D4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x3D5(0x3) UNKNOWN PROPERTY
		FVector LeashLocation; // 0x3D8(0x18)
		FScalableFloat LeashInnerRadius; // 0x3F0(0x28)
		FScalableFloat LeashOuterRadius; // 0x418(0x28)
		FScalableFloat LeashTeleportRadius; // 0x440(0x28)
		bool bCheckForReachabilityOnRandomLocationGeneration; // 0x468(0x1)
		ELeashReturnLocationMode LeashReturnLocationMode; // 0x469(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x46A(0x6) UNKNOWN PROPERTY
		TMap AlertLevelLeashOverride; // 0x470(0x50)
		AFortAthenaPatrolPath AssociatedPatrolPath; // 0x4C0(0x8)
		FQueryableTagContainer PatrolPathTagsConversionTable; // 0x4C8(0x10)
		bool bCanInvestigateWithMeleeWeapon; // 0x4D8(0x1)
		bool bApplyMutatorsHealthAndShieldModifiers; // 0x4D9(0x1)
		bool bSupportsTethering; // 0x4DA(0x1)
		bool bEnableRenderCustomDepth; // 0x4DB(0x1)
		bool bShowMarkerIcon; // 0x4DC(0x1)
		bool bDisableGiveWeaponCheat; // 0x4DD(0x1)
		bool bDisableGiveMaterialsCheat; // 0x4DE(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x4DF(0x1) UNKNOWN PROPERTY
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
		TArray ConvertedSkillSetClasses; // 0x890(0x10)
		UClass PingCommandComponentClass; // 0x8A0(0x8)
		FScalableFloat TargetPawnConverterDamaged; // 0x8A8(0x28)
		FScalableFloat CanHolsterWeaponWhileConverted; // 0x8D0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay");
			return ret;
		}

		void SetNameSettings(TEnumAsByte InNamingMode, FString InName, bool bInAddPlayerIDSuffix); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9ED8
		void SetLeashOuterRadius(float InLeashOuterRadius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9DF8
		void SetLeashLocation(FVector InLeashLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4149B9D18
		void SetLeashInnerRadius(float InLeashInnerRadius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9C38
		void SetAssociatedPatrolPath(AFortAthenaPatrolPath InAssociatedPatrolPath); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149B9B58
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		TArray InitialGameplayEffect; // 0x30(0x10)
		TArray InitialGameplayAbilitiesSet; // 0x40(0x10)
		FGameplayTagContainer LooseTagsToApplyToPawn; // 0x50(0x20)
		FGameplayTagContainer ReplicatedTagsToApplyToPawn; // 0x70(0x20)
		bool bApplySpawnerDescriptorTagToPawnAsLooseTag; // 0x90(0x1)
		bool bApplySpawnerDescriptorTagToPawnAsReplicatedTag; // 0x91(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x92(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer AbilityToPlayOnSpawnTags; // 0x98(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase");
			return ret;
		}

		void SetReplicatedTagsToApplyToPawn(FGameplayTagContainer& InGameplayTagContainer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BA5D8
		void SetLooseTagsToApplyToPawn(FGameplayTagContainer& InGameplayTagContainer); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BA4F8
		void HandleAIFullySpawned(AAIController Controller, AFortPawn Pawn); // Flags: Final|Native|Protected 0x7FF4149BA418
		FGameplayTagContainer GetReplicatedTagsToApplyToPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BA338
		FGameplayTagContainer GetLooseTagsToApplyToPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BA258
		void GetInitialGameplayEffects(TArray& OutGEs); // Flags: Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BA178
		void GetInitialGameplayAbilities(TArray& OutGASets); // Flags: Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BA098
		bool GetApplySpawnerDescriptorTagToPawnAsReplicatedTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149B9FB8
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
		unsigned char UnknownData02_5[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FName CurrencyPayoutRowName; // 0x34(0x4)
		bool bDeathTagsCanBlockLootDrop : 1; // 0x38:0(0x1)
		unsigned char UnknownData03_5[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FDataTableRowHandle LootInfo; // 0x40(0x10)
		TArray InitialItemList; // 0x50(0x10)

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
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

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
		TArray Items; // 0x30(0x10)
		FDataTableRowHandle LootInfo; // 0x40(0x10)
		unsigned char UnknownData01_7[0xC0]; // 0x50(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase");
			return ret;
		}

		void SetInventoryItems(TArray& InItems); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BAB18
		void SetAddStartingItemsToInventory(bool bInAddStartingItemsToInventory); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BAA38
		void InjectItems(TArray& InItems); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BA958
		void InjectItem(FItemAndCount& Item); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BA878
		void GetAllPossibleItems(TArray& OutItems); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BA798
		bool GetAddStartingItemsToInventory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BA6B8
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory
	// Inherited from UFortAthenaAISpawnerDataComponent_InventoryBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x20 (0x130 - 0x110)
	class UFortAthenaAISpawnerDataComponent_AIBotInventory : public UFortAthenaAISpawnerDataComponent_InventoryBase	
	{
	public:
		bool bItemsToGiveInEditorWhenCustomizationIsEnabled : 1; // 0x110:0(0x1)
		unsigned char UnknownData02_5[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		TArray EditorOnlyItems; // 0x118(0x10)
		bool bGrantPickAxe; // 0x128(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x129(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory");
			return ret;
		}

		void SetGrantPickAxe(bool bInGrantPickAxe); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149BACD8
		bool GetGrantPickAxe(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BABF8
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase
	// Inherited from UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UFortAthenaAISpawnerDataComponent_PerceptionBase : public UFortAthenaAISpawnerDataComponent	
	{
	public:
		bool bOverrideVisibilityRange; // 0x30(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer OverrideVisibilityRangeConditionTag; // 0x38(0x20)
		float SightRadius; // 0x58(0x4)
		float LoseSightRadius; // 0x5C(0x4)
		bool bRestrictSightOverrideToUnaware; // 0x60(0x1)
		bool bOverrideHearingRange; // 0x61(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x62(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer OverrideHearingRangeConditionTag; // 0x68(0x20)
		float HearingRadius; // 0x88(0x4)
		bool bRestrictHearingOverrideToUnaware; // 0x8C(0x1)
		unsigned char UnknownData05_7[0x3]; // 0x8D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase");
			return ret;
		}

		void SetVisibilityRange(float InSightRadius, float LoseSightRadius, bool bInRestrictOverrideToUnaware); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BADB8
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

		bool ShouldUseMatchMMRToOverrideSkillLevel(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4149BB058
		TArray GetSkillSets(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4149BAF78
		float GetSkill(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4149BAE98
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset
	// Inherited from UFortAthenaAISpawnerDataComponent_SkillsetBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0xF0 (0x120 - 0x30)
	class UFortAthenaAISpawnerDataComponent_AIBotSkillset : public UFortAthenaAISpawnerDataComponent_SkillsetBase	
	{
	public:
		UClass AimingSkillSet; // 0x30(0x8)
		UClass AttackingSkillSet; // 0x38(0x8)
		UClass BuildingSkillSet; // 0x40(0x8)
		UClass DBNOSkillSet; // 0x48(0x8)
		UClass EmoteSkillSet; // 0x50(0x8)
		UClass EvasiveManeuversSkillSet; // 0x58(0x8)
		UClass HarvestSkillSet; // 0x60(0x8)
		UClass HealingSkillSet; // 0x68(0x8)
		UClass InventorySkillSet; // 0x70(0x8)
		UClass LootingSkillSet; // 0x78(0x8)
		UClass MovementSkillSet; // 0x80(0x8)
		UClass PerceptionSkillSet; // 0x88(0x8)
		UClass PlayStyleSkillSet; // 0x90(0x8)
		UClass PropagateAwarenessSkillSet; // 0x98(0x8)
		UClass RangeAttackSkillSet; // 0xA0(0x8)
		UClass ReviveSkillSet; // 0xA8(0x8)
		UClass UnstuckSkillSet; // 0xB0(0x8)
		UClass VehicleSkillSet; // 0xB8(0x8)
		UClass ReactToVerbSkillSet; // 0xC0(0x8)
		bool bUseMatchMMRToOverrideSkillLevel : 1; // 0xC8:0(0x1)
		unsigned char UnknownData02_5[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr OverrideSkillLevelMMRTable; // 0xD0(0x20)
		FScalableFloat Skill; // 0xF0(0x28)
		float SkillOverride; // 0x118(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x11C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset");
			return ret;
		}

		void SetSkill(float InSKill); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BB138
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_PlayerBotSkillset
	// Inherited from UFortAthenaAISpawnerDataComponent_AIBotSkillset -> UFortAthenaAISpawnerDataComponent_SkillsetBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x8 (0x128 - 0x120)
	class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset : public UFortAthenaAISpawnerDataComponent_AIBotSkillset	
	{
	public:
		UClass WarmUpSkillSet; // 0x120(0x8)

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
		unsigned char UnknownData02_5[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		FScalableFloat DefaultLifespanAfterDeath; // 0x358(0x28)
		FText OverrideName; // 0x380(0x10)
		EFortAthenaAISpawnerDataComponentTriBool IsAlwaysGameplayRelevantOverride; // 0x390(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x391(0x7) UNKNOWN PROPERTY
		TArray PickupTagConvertInfos; // 0x398(0x10)

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
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UFortAIPawnCustomizationDefinition CustomizationDefinition; // 0x38(0x8)
		bool bCanUnloadCustomization; // 0x40(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		UProxyTable ProxyTable; // 0x30(0x8)

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
		TWeakObjectPtr AssembledMeshSchema; // 0x48(0x20)
		TArray RandomAssembledMeshSchemas; // 0x68(0x10)
		TWeakObjectPtr PreviewMesh; // 0x78(0x20)

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
		TArray CosmeticLibraries; // 0x48(0x10)
		FScalableFloat DefaultCosmeticLibraryWeight; // 0x58(0x28)
		FGameplayTag PredefinedCosmeticSetTag; // 0x80(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FScalableFloat EmotesMaxCount; // 0x88(0x28)
		FScalableFloat bUseFixedSeed; // 0xB0(0x28)
		FScalableFloat FixedSeed; // 0xD8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary");
			return ret;
		}

		int32_t GetAICosmeticLibraryDataIndex(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB2F8
		UFortAthenaAIBotCosmeticLibraryData GetAICosmeticLibraryData(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB218
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLoadout
	// Inherited from UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase -> UFortAthenaAISpawnerDataComponent_CosmeticBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x168 (0x1B0 - 0x48)
	class UFortAthenaAISpawnerDataComponent_CosmeticLoadout : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase	
	{
	public:
		FFortAthenaLoadout CosmeticLoadout; // 0x48(0x130)
		TArray WeightedLoadouts; // 0x178(0x10)
		TArray CustomCharacterParts; // 0x188(0x10)
		bool bCanShowDefaultSkin; // 0x198(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		FGameplayTag FallbackTag; // 0x19C(0x4)
		UClass AnimBPOverride; // 0x1A0(0x8)
		int32_t AnimBPOverridePriority; // 0x1A8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY

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
		UClass CoverPositionFilterClass; // 0x30(0x8)
		FVector CoverBoxExtent; // 0x38(0x18)
		float CoverOffset; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

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
		TArray FormationSlots; // 0xD0(0x10)
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
		unsigned char UnknownData02_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer OverrideHearingRangeConditionTag; // 0x38(0x20)
		float HearingRadius; // 0x58(0x4)
		bool bRestrictOverrideToUnaware; // 0x5C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer OverrideVisibilityRangeConditionTag; // 0x38(0x20)
		float SightRadius; // 0x58(0x4)
		float LoseSightRadius; // 0x5C(0x4)
		bool bRestrictOverrideToUnaware; // 0x60(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY

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
		TArray PerksContainers; // 0x30(0x10)

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
		TArray Loadouts; // 0x130(0x10)

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
		UClass SmartObjectUserComponentClass; // 0x30(0x8)
		TArray SmartObjectActivitiesCombined; // 0x38(0x10)
		TArray SmartObjectActivitiesToAdd; // 0x48(0x10)
		TArray SmartObjectActivitiesToRemove; // 0x58(0x10)
		UDataTable AnimConfigTable; // 0x68(0x8)
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
		unsigned char UnknownData01_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase");
			return ret;
		}

		bool ShouldSpawnInAir(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BBC98
		bool ShouldCheckForOverlaps(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BBBB8
		void SetSpawnTransform(FTransform& InSpawnTransform); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149BBAD8
		float GetSpawnTracePadding(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB9F8
		TArray GetSpawnerDataSpawnedAsChildren(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB918
		FDataTableRowHandle GetPawnStatHandle(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB838
		UClass GetPawnClass(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB758
		float GetInAirSpawnTraceStartHeight(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB678
		float GetInAirSpawnTraceSphereRadius(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB598
		float GetInAirSpawnTraceEndHeight(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB4B8
		UClass GetAIControllerClass(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF4149BB3D8
	};


	// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParams
	// Inherited from UFortAthenaAISpawnerDataComponent_SpawnParamsBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x48 (0xE0 - 0x98)
	class UFortAthenaAISpawnerDataComponent_SpawnParams : public UFortAthenaAISpawnerDataComponent_SpawnParamsBase	
	{
	public:
		UClass PawnClass; // 0x98(0x8)
		UClass AIControllerClass; // 0xA0(0x8)
		FDataTableRowHandle PawnStatHandle; // 0xA8(0x10)
		TArray SpawnerDataSpawnedAsChildren; // 0xB8(0x10)
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
		unsigned char UnknownData01_7[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY

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
		UClass VehicleToSpawnAndEnter; // 0x30(0x8)
		bool bSetInfiniteFuel : 1; // 0x38:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TArray VehicleSkillSets; // 0x40(0x10)

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
		UClass VoiceComponentClass; // 0x30(0x8)
		UFortTaggedSoundBank SoundBank; // 0x38(0x8)
		UFortTaggedSoundBank MaleSoundBankOverride; // 0x40(0x8)
		UFortTaggedSoundBank FemaleSoundBankOverride; // 0x48(0x8)

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
		TArray RegisteredActors; // 0xA8(0x10)
		FMulticastInlineDelegate OnConsumeEvent; // 0xB8(0x10)
		bool bIsConsumed; // 0xC8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaLeashComponent");
			return ret;
		}

		void SetLeashRadius(float NewRadius); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149BC0F8
		void SetLeashCenter(FVector& NewCenter); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149BC018
		bool IsInsideLeash(FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149BBF38
		float GetLeashRadius(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BBE58
		FVector GetLeashCenter(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149BBD78
	};


	// Class FortniteAI.FortAthenaLocalGameplayBehavior
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AFortAthenaLocalGameplayBehavior : public AActor	
	{
	public:
		bool bNeedToAwakeDuringExecution; // 0x290(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		UFortAthenaBTTask_DynamicBlueprint CachedTask; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaLocalGameplayBehavior");
			return ret;
		}

		void OnExecute(AActor Activator); // Flags: Event|Public|BlueprintEvent 0x7FF4149BC398
		void OnAbort(); // Flags: Event|Public|BlueprintEvent 0x7FF4149BC2B8
		void FinishExecute(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BC1D8
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
		AFortAthenaAIBotController CachedBotController; // 0xA0(0x8)
		AFortPawn PossessedPawn; // 0xA8(0x8)
		TArray PatrolPath; // 0xB0(0x10)
		TArray CommunicationGroup; // 0xC0(0x10)
		FMulticastInlineDelegate OnPatrollingStart; // 0xD0(0x10)
		FMulticastInlineDelegate OnPatrollingStop; // 0xE0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNpcGalileoComponent");
			return ret;
		}

		void SetPatrolPath(TArray& NewPatrolPath); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BC7F8
		void SetCommunicationGroup(TArray& AIBotControllerList); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BC718
		void OnPawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149BC638
		TArray GetPatrolPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BC558
		TArray GetCommunicationGroup(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BC478
	};


	// Class FortniteAI.FortAthenaNpcPatrollingComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class UFortAthenaNpcPatrollingComponent : public UFortControllerComponent	
	{
	public:
		AAIController CachedAIController; // 0xA8(0x8)
		AFortAthenaPatrolPath PatrolPath; // 0xB0(0x8)
		FMulticastInlineDelegate OnPathAssigned; // 0xB8(0x10)
		FMulticastInlineDelegate OnStartPatrollingEvent; // 0xC8(0x10)
		FMulticastInlineDelegate OnStopPatrollingEvent; // 0xD8(0x10)
		FMulticastInlineDelegate OnPatrolPointReachedEvent; // 0xE8(0x10)
		unsigned char UnknownData01_7[0x60]; // 0xF8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortAthenaNpcPatrollingComponent");
			return ret;
		}

		void UpdateCurrentDestinationToNearestNextPoint(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149BD358
		void SetPatrolPath(AFortAthenaPatrolPath NewPatrolPath, bool bOrientationAlreadyRandomized); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149BD278
		void SelectNextPatrolPoint(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149BD198
		void RemovePatrolPath(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149BD0B8
		void OnPatrolPathStatusChanged(bool bEnableState); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF4149BCFD8
		void K2_NewFuturePatrolPath(AFortAthenaPatrolPath NewPatrolPath); // Flags: Event|Protected|BlueprintEvent 0x7FF4149BCEF8
		bool IsPatrollingEnable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BCE18
		bool IsCurrentPatrolPointAnEndPoint(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BCD38
		AFortAthenaPatrolPoint GetPreviousPatrolPoint(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BCC58
		int32_t GetPatrolPointsCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BCB78
		AFortAthenaPatrolPath GetPatrolPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BCA98
		AFortAthenaPatrolPoint GetCurrentPatrolPoint(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BC9B8
		bool FindAndSetDynamicPatrolPath(FFortAthenaAIObjectTrackerQuery& FindQuery, bool bOrientationAlreadyRandomized, bool bExcludeCurrentlyUsedPatrolPath); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BC8D8
	};


	// Class FortniteAI.PatrolPathRenderingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class UPatrolPathRenderingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

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
		AFortAthenaLocalGameplayBehavior LocalGameplayBehavior; // 0x290(0x8)

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
		unsigned char UnknownData01_7[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIPerceptionStimuliSourceComponent");
			return ret;
		}

		void OnOwnerTeamIndexChanged(); // Flags: Final|Native|Protected 0x7FF4149BD438
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
		TMap TrapDiscoverabilityMap; // 0xB8(0x50)
		bool bEnablePerceptionSystemOnTrap : 1; // 0x108:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY

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
		UPrimitiveComponent CollisionPrimitiveComponent; // 0xA0(0x8)
		UPrimitiveComponent OverlapPrimitiveComponent; // 0xA8(0x8)
		unsigned char UnknownData03_6[0x28]; // 0xB0(0x28) UNKNOWN PROPERTY
		TArray PawnsListenedTo; // 0xD8(0x10)
		unsigned char UnknownData04_6[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
		FScalableFloat VisibilityModifiedTime; // 0xF0(0x28)
		TEnumAsByte NewCollisionResponse; // 0x118(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x119(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortCollisionResponseSwapperComponent");
			return ret;
		}

		void UnregisterCallbacksForOverlap(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4149BD898
		void RestoreCollisionResponses(); // Flags: Final|Native|Protected 0x7FF4149BD7B8
		void RegisterCallbacksForOverlap(UPrimitiveComponent InCollisionPrimitiveComponent, UPrimitiveComponent InOverlapPrimitiveComponent); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4149BD6D8
		void HandleEndOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Protected 0x7FF4149BD5F8
		void HandleBeginOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms 0x7FF4149BD518
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
		TArray BotDebugInfoList; // 0x140(0x10)
		FSlateBrush DebugMinimapIconBrush; // 0x150(0xB0)
		unsigned char UnknownData01_7[0x60]; // 0x200(0x60) UNKNOWN PROPERTY

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
		TArray BotPOIDebugInfoList; // 0x140(0x10)
		TArray BotPOIExcludedZonesDebugInfoList; // 0x150(0x10)
		TArray ClusteredLootLocationsDebug; // 0x160(0x10)
		TArray ClusteredLootNamesDebug; // 0x170(0x10)
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
		unsigned char UnknownData02_6[0x60]; // 0x78(0x60) UNKNOWN PROPERTY
		TArray AIList; // 0xD8(0x10)
		AFortGameModeAthena CachedGameMode; // 0xE8(0x8)
		unsigned char UnknownData03_7[0x130]; // 0xF0(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIPopulationTracker");
			return ret;
		}

		void OnFortPawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Public|HasDefaults 0x7FF4149BE318
		void OnFortPawnDestroyed(AActor DestroyedActor); // Flags: Final|Native|Public 0x7FF4149BE238
		void OnAISpawned(APawn Pawn, int32_t RequestID); // Flags: Final|Native|Private 0x7FF4149BE158
		void OnAgentGameOver(AFortAthenaAIBotController AIBotController, AFortPawn Pawn, AController Instigator); // Flags: Final|Native|Private 0x7FF4149BE078
		void HandlePlayerStateAdded(APlayerState PlayerState); // Flags: Final|Native|Public 0x7FF4149BDF98
		int32_t GetNumTotalBots(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BDEB8
		int32_t GetNumPlayerBots(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BDDD8
		int32_t GetNumNonAthenaParticipantBots(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BDCF8
		int32_t GetNumAIPawn(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BDC18
		FAIPopulationCountSnapshot GetAIPopulationTrackerCount(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BDB38
		TArray GetAIMatchingQuery(FGameplayTagQuery& TagQuery); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4149BDA58
		void EnableClientAISpawnTracking(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BD978
	};


	// Class FortniteAI.AthenaAIService
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAthenaAIService : public UObject	
	{
	public:
		AFortGameModeAthena CachedGameMode; // 0x28(0x8)
		AFortGameStateAthena CachedGameState; // 0x30(0x8)
		unsigned char UnknownData02_6[0x30]; // 0x38(0x30) UNKNOWN PROPERTY
		UAthenaAIServiceManager AIServiceManager; // 0x68(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

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
		UClass CoverPositionFilterClass; // 0x78(0x8)
		unsigned char UnknownData01_6[0x28]; // 0x80(0x28) UNKNOWN PROPERTY
		UTimeSlicedExecutor TimeSlicedExecutor; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceCover");
			return ret;
		}

		UAthenaAIServiceCover GetAthenaAIServiceCover(UObject WorldContextObject, bool bWarnIfNull); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4149BE3F8
	};


	// Class FortniteAI.AthenaAIServicePlayerBots
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x1278 (0x12F0 - 0x78)
	class UAthenaAIServicePlayerBots : public UAthenaAIService	
	{
	public:
		unsigned char UnknownData31_3[0x8]; // 0x78(0x8) UNKNOWN PROPERTY
		FAthenaAIBehaviorInjectionManager BehaviorInjectionManager; // 0x80(0xB0)
		UFortAthenaAISpawnerDataComponentList DefaultAISpawnerDataComponentList; // 0x130(0x8)
		UFortAthenaAISpawnerDataComponent_SpawnParamsBase DefaultAISpawnComponent; // 0x138(0x8)
		TArray DeadBots; // 0x140(0x10)
		TArray PlayerBotsRestartLeft; // 0x150(0x10)
		FVector ZiplineOctreeCenter; // 0x160(0x18)
		FScalableFloat ZiplineOctreeRadius; // 0x178(0x28)
		FScalableFloat UseZiplines; // 0x1A0(0x28)
		unsigned char UnknownData32_6[0x138]; // 0x1C8(0x138) UNKNOWN PROPERTY
		FDebugMinimapData DebugMinimapData; // 0x300(0x190)
		FName MarkPlayerBotsAggressiveStencilName; // 0x490(0x4)
		FName MarkPlayerBotsDefensiveStencilName; // 0x494(0x4)
		bool bBotHostileToHumanPlayersOnly; // 0x498(0x1)
		unsigned char UnknownData33_6[0x7]; // 0x499(0x7) UNKNOWN PROPERTY
		FScalableFloat UseAllBattleBusPOIsSquadRatio; // 0x4A0(0x28)
		UCurveFloat TagQueryWeightChance; // 0x4C8(0x8)
		TWeakObjectPtr FindLocationsAroundPOIQuery; // 0x4D0(0x20)
		TArray BattleBusTagQueryPOIList; // 0x4F0(0x10)
		TArray SecondaryBattleBusTagQueryPOIList; // 0x500(0x10)
		unsigned char UnknownData34_6[0x8]; // 0x510(0x8) UNKNOWN PROPERTY
		TArray OnGroundTagQueryPOIList; // 0x518(0x10)
		FConstructionBuildingInfo ConstructionBuildingInfo; // 0x528(0x90)
		FScalableFloat UseCustomSupportedItemList; // 0x5B8(0x28)
		UDataTable BotItemDataTable; // 0x5E0(0x8)
		FName AugmentsRegistryName; // 0x5E8(0x4)
		unsigned char UnknownData35_6[0x4]; // 0x5EC(0x4) UNKNOWN PROPERTY
		UDataRegistry VisibilitySettingsRegistry; // 0x5F0(0x8)
		FGameplayTagContainer PerceivedActorTagsToAdd; // 0x5F8(0x20)
		FScalableFloat UseRegionalNameList; // 0x618(0x28)
		FScalableFloat MaxAnonymousBotCount; // 0x640(0x28)
		TWeakObjectPtr BotNameDataAsset; // 0x668(0x20)
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
		unsigned char UnknownData36_6[0x4]; // 0x7F4(0x4) UNKNOWN PROPERTY
		FScalableFloat BackfillEnabled; // 0x7F8(0x28)
		FScalableFloat UsePlayerCosmeticForBackfill; // 0x820(0x28)
		FScalableFloat UsePlayerInventoryForBackfill; // 0x848(0x28)
		FScalableFloat OnlyUseBackfillDuringSafezones; // 0x870(0x28)
		TWeakObjectPtr BackfillSpawnerData; // 0x898(0x20)
		FGameplayTagContainer SupportedItemTags; // 0x8B8(0x20)
		TArray CachedValidPOIVolumeLocations; // 0x8D8(0x10)
		TArray CachedBuildingFoundations; // 0x8E8(0x10)
		TArray CachedSupportedAugments; // 0x8F8(0x10)
		unsigned char UnknownData37_6[0x10]; // 0x908(0x10) UNKNOWN PROPERTY
		TScriptInterface CachedAIAimingManager; // 0x918(0x10)
		unsigned char UnknownData38_6[0x150]; // 0x928(0x150) UNKNOWN PROPERTY
		AFortPlayerStartWarmup LastTeamPlayerStart; // 0xA78(0x8)
		unsigned char UnknownData39_6[0x8]; // 0xA80(0x8) UNKNOWN PROPERTY
		TMap CacheSafeZoneLocationsMap; // 0xA88(0x50)
		bool bCleanupBotsRegardlessOfRemainingSquadMembers; // 0xAD8(0x1)
		unsigned char UnknownData40_6[0x3]; // 0xAD9(0x3) UNKNOWN PROPERTY
		float DeadBotCleanupMinDelay; // 0xADC(0x4)
		unsigned char UnknownData41_6[0x8]; // 0xAE0(0x8) UNKNOWN PROPERTY
		TSet ReservedPlayerNames; // 0xAE8(0x50)
		unsigned char UnknownData42_6[0x8]; // 0xB38(0x8) UNKNOWN PROPERTY
		TArray LocationsInSafeZoneFreeIndices; // 0xB40(0x10)
		unsigned char UnknownData43_6[0x68]; // 0xB50(0x68) UNKNOWN PROPERTY
		AFortTeamInfoAthena CurrentFillingTeam; // 0xBB8(0x8)
		unsigned char UnknownData44_6[0x58]; // 0xBC0(0x58) UNKNOWN PROPERTY
		FScalableFloat BotsUniqueIDUseValidAccountID; // 0xC18(0x28)
		int32_t CurrentBotControllerUID; // 0xC40(0x4)
		unsigned char UnknownData45_6[0x4]; // 0xC44(0x4) UNKNOWN PROPERTY
		TArray BeaconList; // 0xC48(0x10)
		unsigned char UnknownBit46 : 1; // 0xC58:0(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit47 : 1; // 0xC58:1(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit48 : 1; // 0xC58:2(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit49 : 1; // 0xC58:3(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit50 : 1; // 0xC58:4(0x1) UNKNOWN PROPERTY
		unsigned char UnknownBit51 : 1; // 0xC58:5(0x1) UNKNOWN PROPERTY
		bool bWaitForNavmeshToBeLoaded : 1; // 0xC58:6(0x1)
		bool bDoSpawnBotFlow : 1; // 0xC58:7(0x1)
		bool bDoMapSampling : 1; // 0xC59:0(0x1)
		EAthenaGamePhase GamePhaseToStartSpawning; // 0xC5A(0x1)
		unsigned char UnknownData52_6[0x5]; // 0xC5B(0x5) UNKNOWN PROPERTY
		UClass DefaultBotAISpawnerData; // 0xC60(0x8)
		unsigned char UnknownData53_6[0x10]; // 0xC68(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr EQSMapSampling; // 0xC78(0x20)
		unsigned char UnknownData54_6[0x30]; // 0xC98(0x30) UNKNOWN PROPERTY
		FScalableFloat CanReviveDownedSquad; // 0xCC8(0x28)
		UAthenaAIPopulationTracker CachedAIPopulationTracker; // 0xCF0(0x8)
		TArray PlayerBots; // 0xCF8(0x10)
		TArray NonAthenaParticipantBots; // 0xD08(0x10)
		unsigned char UnknownData55_6[0x88]; // 0xD18(0x88) UNKNOWN PROPERTY
		TWeakObjectPtr MMRSpawnTable; // 0xDA0(0x20)
		TArray MMRSpawnTableOverrides; // 0xDC0(0x10)
		FMMRSpawningPlayerBotsRuntimeInfo CachedMMRSpawningInfo; // 0xDD0(0x38)
		unsigned char UnknownData56_6[0x20]; // 0xE08(0x20) UNKNOWN PROPERTY
		FScalableFloat OverridePOISpreadingSquadCount; // 0xE28(0x28)
		unsigned char UnknownData57_6[0x68]; // 0xE50(0x68) UNKNOWN PROPERTY
		FScalableFloat OnlyPickPOIsInSafeZone; // 0xEB8(0x28)
		FVector KillVolumeOverlapCheckHalfExtent; // 0xEE0(0x18)
		FScalableFloat DynamicBotPOIEnabled; // 0xEF8(0x28)
		TWeakObjectPtr BotPOIEQS; // 0xF20(0x20)
		FScalableFloat BotPOIMinimumWeightForSquadMembers; // 0xF40(0x28)
		FScalableFloat BotPOINextPOIDurationSecondByWeight; // 0xF68(0x28)
		FScalableFloat BotPOINextPOIMinDuration; // 0xF90(0x28)
		FScalableFloat BotPOINextPOIMaxDuration; // 0xFB8(0x28)
		UDataRegistry BotPOIExcludedZonesDataRegistry; // 0xFE0(0x8)
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
		TArray StartupPOIPendingEQSRequestIDList; // 0x11F0(0x10)
		TArray BotPOIList; // 0x1200(0x10)
		TArray CachedMainJumpBotPOIList; // 0x1210(0x10)
		TArray CachedSecondaryJumpBotPOIList; // 0x1220(0x10)
		TArray CachedBotPOIExcludedZonesList; // 0x1230(0x10)
		bool bIsBotPOIJumpListSplit; // 0x1240(0x1)
		bool bIsExcludedZoneGenerated; // 0x1241(0x1)
		unsigned char UnknownData58_6[0x6]; // 0x1242(0x6) UNKNOWN PROPERTY
		AFortAIBotPOIDebugActor BotPOIDebugDebugActor; // 0x1248(0x8)
		bool bCheatBotPOIDebugMiniMapEnabled; // 0x1250(0x1)
		unsigned char UnknownData59_6[0x7]; // 0x1251(0x7) UNKNOWN PROPERTY
		AFortAIBotDebugActor BotDebugDebugActor; // 0x1258(0x8)
		bool bCheatBotDebugMiniMapEnabled; // 0x1260(0x1)
		unsigned char UnknownData60_6[0x7]; // 0x1261(0x7) UNKNOWN PROPERTY
		UFortGameStateComponent_BattleRoyaleGamePhaseLogic CachedGamePhaseLogic; // 0x1268(0x8)
		unsigned char UnknownData61_6[0x58]; // 0x1270(0x58) UNKNOWN PROPERTY
		UDataRegistry WeaponModRegistry; // 0x12C8(0x8)
		TArray WeaponModSettings; // 0x12D0(0x10)
		UTimeSlicedExecutor TimeSlicedExecutor; // 0x12E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServicePlayerBots");
			return ret;
		}

		APawn SpawnAI(FVector& InSpawnLocation, FRotator& InSpawnRotation, UFortAthenaAISpawnerDataComponentList AISpawnerComponentList); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149BEF58
		void OnServerGameMemberRemoved(char InSquadId, char InTeamIndex, AFortPlayerStateAthena ChangedPS); // Flags: Final|Native|Private 0x7FF4149BEE78
		void OnSafeZoneUpdated(FFortSafeZonePhaseUpdatedEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF4149BED98
		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF4149BECB8
		void OnGamePhaseLogicReady(FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event); // Flags: RequiredAPI|Native|Protected|HasOutParms 0x7FF4149BEBD8
		void OnGamePhaseChanged(FFortGamePhaseUpdatedEvent& Event); // Flags: RequiredAPI|Native|Protected|HasOutParms 0x7FF4149BEAF8
		void OnAIPawnSpawned(AController SpawnedController, bool bIsABot, AFortPawn FortAIPawn, AFortPlayerPawn PlayerPawn); // Flags: Final|Native|Private 0x7FF4149BEA18
		void OnAgentGameOver(AFortAthenaAIBotController AIBotController, AFortPawn Pawn, AController Instigator); // Flags: RequiredAPI|Native|Protected 0x7FF4149BE938
		void KillBots(bool bKillPlayers, bool bKillNPCs, char TeamIndex, AActor BotOwner); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149BE858
		void JoinTeam(AController SourceTeamController, AController DestinationTeamController); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BE778
		bool IsWeaponSupported(AFortWeapon FortWeapon); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149BE698
		int32_t FetchNextCustomBotCosmeticVariantID(AFortPlayerPawnAthena BotPawn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BE5B8
		void AddPOIVolume(AFortPoiVolume POIVolume, TEnumAsByte POIList); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4149BE4D8
	};


	// Class FortniteAI.AthenaAIServiceCreativePlayerBots
	// Inherited from UAthenaAIServicePlayerBots -> UAthenaAIService -> UObject
	// Size: 0x88 (0x1370 - 0x12E8)
	class UAthenaAIServiceCreativePlayerBots : public UAthenaAIServicePlayerBots	
	{
	public:
		FMulticastInlineDelegate OnMinigameBotsReady; // 0x12E8(0x10)
		TWeakObjectPtr CachedMinigame; // 0x12F8(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x1300(0x8) UNKNOWN PROPERTY
		TMap HiringHistory; // 0x1308(0x50)
		unsigned char UnknownData03_7[0x18]; // 0x1358(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceCreativePlayerBots");
			return ret;
		}

		void OnMinigameStateChanged(AFortMinigame Minigame, EFortMinigameState MinigameState); // Flags: RequiredAPI|Native|Public 0x7FF4149BF498
		void OnFinishedAddingMinigamePlayer(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer); // Flags: Final|Native|Protected 0x7FF4149BF3B8
		bool IsMinigameBotSpawningRequired(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BF2D8
		APlayerController GetLastHiringPlayer(AActor HiredOwner); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4149BF1F8
		void ClearHiringHistory(AActor HiredOwner); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149BF118
		void AddHiringHistory(AActor HiredOwner, APlayerController HiringPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149BF038
	};


	// Class FortniteAI.AthenaAIServiceGroup
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x18 (0x90 - 0x78)
	class UAthenaAIServiceGroup : public UAthenaAIService	
	{
	public:
		int32_t GroupIndexCount; // 0x78(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		TArray GroupList; // 0x80(0x10)

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
		TArray HarvestableActorClassList; // 0x180(0x10)
		FScalableFloat LootClusteringEnabled; // 0x190(0x28)
		FScalableFloat LootClusteringNeighborDistanceMax; // 0x1B8(0x28)
		FScalableFloat LootClusteringNeighborhoodCountMin; // 0x1E0(0x28)
		UDataRegistry LootClusteringItemWeightDataRegistry; // 0x208(0x8)
		FScalableFloat LootClusteringDefaultWeight; // 0x210(0x28)
		FScalableFloat LootClusteringExpandByBoxX; // 0x238(0x28)
		FScalableFloat LootClusteringExpandByBoxY; // 0x260(0x28)
		FScalableFloat LootClusteringExpandByBoxZ; // 0x288(0x28)
		unsigned char UnknownData04_6[0x210]; // 0x2B0(0x210) UNKNOWN PROPERTY
		TMap MovingLoots; // 0x4C0(0x50)
		unsigned char UnknownData05_6[0x8]; // 0x510(0x8) UNKNOWN PROPERTY
		TArray CachedSupplyDrops; // 0x518(0x10)
		UFortWorldItem CachedWorldItem; // 0x528(0x8)
		UDataTable BotBuildingContainerExcludeListDataTable; // 0x530(0x8)
		EAthenaGamePhaseStep LootClusterCalculationGamePhase; // 0x538(0x1)
		unsigned char UnknownData06_6[0x5F]; // 0x539(0x5F) UNKNOWN PROPERTY
		TArray CachedLootClusteringItemWeightTable; // 0x598(0x10)
		unsigned char UnknownData07_7[0x28]; // 0x5A8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceLoot");
			return ret;
		}

		void UpdateSupplyDropStatus(); // Flags: Final|Native|Private 0x7FF4149BF818
		void UpdateMovingLoots(); // Flags: Final|Native|Private 0x7FF4149BF738
		void K2_RemoveGameplayTagFromLoot(AActor LootActor, FGameplayTag& GameplayTag); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BF658
		void K2_AddGameplayTagToLoot(AActor LootActor, FGameplayTag& GameplayTag); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF4149BF578
	};


	// Class FortniteAI.AthenaAIServiceManager
	// Inherited from UAISubsystem -> UObject
	// Size: 0x48 (0x80 - 0x38)
	class UAthenaAIServiceManager : public UAISubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x38(0x18) UNKNOWN PROPERTY
		TArray AIServices; // 0x50(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x60(0x20) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x48]; // 0x78(0x48) UNKNOWN PROPERTY
		float TimeToRefreshTree; // 0xC0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

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
		TArray TrackedZones; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAIServiceZoneManager");
			return ret;
		}

		void UnregisterOccluder(AActor OccluderActor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149BFF18
		void UnregisterDangerZone(AActor Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149BFE38
		void RegisterOccluder(AActor OccluderActor, float SphereRadius); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149BFD58
		void RegisterDangerZone(AActor Actor, float Radius); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF4149BFC78
		void OnZoneDestroyed(AActor Actor); // Flags: Final|BlueprintAuthorityOnly|Native|Private|BlueprintCallable 0x7FF4149BFB98
		bool IsLOFOccluded(FVector& StartLocation, FVector& EndLocation); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149BFAB8
		bool IsInDangerZone(FVector& Location); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4149BF9D8
		UAthenaAIServiceZoneManager GetAthenaAIServiceZoneManager(UObject WorldContextObject, bool bWarnIfNull); // Flags: Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4149BF8F8
	};


	// Class FortniteAI.AthenaAISpawner
	// Inherited from UAISubsystem -> UObject
	// Size: 0xD0 (0x108 - 0x38)
	class UAthenaAISpawner : public UAISubsystem	
	{
	public:
		FMulticastInlineDelegate OnPawnPreFinishSpawningEvent; // 0x38(0x10)
		FMulticastInlineDelegate OnPawnSpawnedEvent; // 0x48(0x10)
		unsigned char UnknownData01_7[0xB0]; // 0x58(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.AthenaAISpawner");
			return ret;
		}

		int32_t RequestSpawn(UFortAthenaAISpawnerDataComponentList AISpawnerComponentList, FTransform& SpawnTransform, bool bUrgentRequest); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4149C01B8
		void QueueForDespawn(AActor ActorToDespawn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149C00D8
		bool CancelRequest(int32_t RequestID); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4149BFFF8
	};


	// Class FortniteAI.AthenaAIVehicleAvoidanceManager
	// Inherited from UAISubsystem -> UObject
	// Size: 0x50 (0x88 - 0x38)
	class UAthenaAIVehicleAvoidanceManager : public UAISubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x4C]; // 0x38(0x4C) UNKNOWN PROPERTY
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
		UAthenaAIPopulationTracker AIPopTracker; // 0xA0(0x8)
		bool bEnableReplication; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortniteAI.FortPlayerStateComponent_ClientAITracker");
			return ret;
		}

		void ServerOnAISpawned(AFortPawn NewAI, APlayerController LocalPC); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF4149C0298
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

		TArray GetDespawnRifts(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C0538
		void DespawnExpired(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4149C0458
		void AddDespawnRift(ABuildingRift NewRift); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C0378
	};

}
