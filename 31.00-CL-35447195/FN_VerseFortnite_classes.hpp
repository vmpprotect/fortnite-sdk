#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseFortnite
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseFortnite.FortActorEntitySubsystem
	// Inherited from UActorEntitySubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x28 (0xC0 - 0x98)
	class UFortActorEntitySubsystem : public UActorEntitySubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray ActorEntityRules; // 0xA0(0x10)
		TArray ActorEntityRules_BR; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.FortActorEntitySubsystem");
			return ret;
		}
	};


	// Class VerseFortnite.FortCharacterComponentBridgeHelper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortCharacterComponentBridgeHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.FortCharacterComponentBridgeHelper");
			return ret;
		}

		void HandlePawnControllerChanged(APawn Pawn, AController OldController, AController NewController); // Flags: Final|Native|Private 0x7FF414BA1B38
	};


	// Class VerseFortnite.FortGameComponent_Implementation
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFortGameComponent_Implementation : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.FortGameComponent_Implementation");
			return ret;
		}

		void NotifyRoundEnd(); // Flags: Final|Native|Private 0x7FF414BA1CF8
		void NotifyRoundBegin(); // Flags: Final|Native|Private 0x7FF414BA1C18
	};


	// Class VerseFortnite.FortPawnAbilityComponentBridgeHelper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortPawnAbilityComponentBridgeHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.FortPawnAbilityComponentBridgeHelper");
			return ret;
		}

		void HandlePreInvalidateAbilitySystem(); // Flags: Final|Native|Private 0x7FF414BA1EB8
		void HandleAbilitySystemInitialized(UFortAbilitySystemComponent AbilitySystemComponent, AFortPlayerPawn AffectedPawn); // Flags: Final|Native|Private 0x7FF414BA1DD8
	};


	// Class VerseFortnite.VerseActorPayloadWrapper
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AVerseActorPayloadWrapper : public AActor	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x290(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseActorPayloadWrapper");
			return ret;
		}
	};


	// Class VerseFortnite.GameplayAbility_PlayAnim
	// Inherited from UGameplayAbility -> UObject
	// Size: 0x8 (0x3B8 - 0x3B0)
	class UGameplayAbility_PlayAnim : public UGameplayAbility	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x3B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.GameplayAbility_PlayAnim");
			return ret;
		}

		void OnInterrupted(); // Flags: Final|Native|Public 0x7FF414BA2318
		void OnCompleted(); // Flags: Final|Native|Public 0x7FF414BA2238
		void OnCancelled(); // Flags: Final|Native|Public 0x7FF414BA2158
		void OnBlendOut(); // Flags: Final|Native|Public 0x7FF414BA2078
		void OnBlendIn(); // Flags: Final|Native|Public 0x7FF414BA1F98
	};


	// Class VerseFortnite.NPCCharacterModifier
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNPCCharacterModifier : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier");
			return ret;
		}

		UNPCCharacterDefinition GetCharacterDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BA2938
		void BP_OnSpawned(AFortPawn Pawn); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BA2858
		void BP_OnPreSpawned(AFortPawn Pawn); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BA2778
		void BP_OnPostSpawned(AFortPawn Pawn); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BA2698
		void BP_ModifySpawnComponentList(UFortAthenaAISpawnerDataComponentList OutList, UObject ComponentOuter); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BA25B8
		bool BP_IsNeededForPreview(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414BA24D8
		EDataValidationResult BP_IsDataValid(TArray& OutErrorMessages); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414BA23F8
	};


	// Class VerseFortnite.NPCCharacterModifier_Verse
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNPCCharacterModifier_Verse : public UNPCCharacterModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Verse");
			return ret;
		}
	};


	// Class VerseFortnite.AIComponentData
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAIComponentData : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.AIComponentData");
			return ret;
		}
	};


	// Class VerseFortnite.AIPerceptionComponentData
	// Inherited from UAIComponentData -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UAIPerceptionComponentData : public UAIComponentData	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.AIPerceptionComponentData");
			return ret;
		}

		void NotifyTargetPerceptionUpdated(AActor Actor, FAIStimulus Stimulus); // Flags: Final|Native|Private 0x7FF414BA2AF8
		void NotifyTargetPerceptionForgotten(AActor Actor); // Flags: Final|Native|Private 0x7FF414BA2A18
	};


	// Class VerseFortnite.AIAnimationComponentData
	// Inherited from UAIComponentData -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UAIAnimationComponentData : public UAIComponentData	
	{
	public:
		UClass PlayAnimGameplayAbility; // 0x28(0x8)
		FName DefaultSlot; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.AIAnimationComponentData");
			return ret;
		}
	};


	// Class VerseFortnite.PlayAnimationGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlayAnimationGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.PlayAnimationGlobals");
			return ret;
		}
	};


	// Class VerseFortnite.PlayAnimationPlayPayload
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UPlayAnimationPlayPayload : public UObject	
	{
	public:
		UAnimSequence Animation; // 0x28(0x8)
		float PlayRate; // 0x30(0x4)
		float StartPosition; // 0x34(0x4)
		float BlendInTime; // 0x38(0x4)
		float BlendOutTime; // 0x3C(0x4)
		FName Slot; // 0x40(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.PlayAnimationPlayPayload");
			return ret;
		}
	};


	// Class VerseFortnite.AIActionTaskInterfaceProxy
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UAIActionTaskInterfaceProxy : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.AIActionTaskInterfaceProxy");
			return ret;
		}
	};


	// Class VerseFortnite.VerseFortniteBRTeamCollection
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UVerseFortniteBRTeamCollection : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0x28(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseFortniteBRTeamCollection");
			return ret;
		}

		void OnActiveTeamArrayBuilt(); // Flags: Final|Native|Private 0x7FF414BA2BD8
	};


	// Class VerseFortnite.VerseFortniteMinigameTeamCollection
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UVerseFortniteMinigameTeamCollection : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x80]; // 0x28(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseFortniteMinigameTeamCollection");
			return ret;
		}

		void OnMinigameSetup(AFortMinigame InMinigame); // Flags: Final|Native|Private 0x7FF414BA2D98
		void OnMinigameDestroyed(AActor DestroyedMinigame); // Flags: Final|Native|Private 0x7FF414BA2CB8
	};


	// Class VerseFortnite.TeamProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class ATeamProxyActor : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		USceneComponent ActorRootComponent; // 0x298(0x8)
		FMulticastInlineDelegate OnTeamIndexChanged; // 0x2A0(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.TeamProxyActor");
			return ret;
		}
	};


	// Class VerseFortnite.BuildingDamageComponentBridgeHelper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UBuildingDamageComponentBridgeHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.BuildingDamageComponentBridgeHelper");
			return ret;
		}

		void HandleActorDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414BA2E78
	};


	// Class VerseFortnite.AIActionsHandlerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UAIActionsHandlerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0xA0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.AIActionsHandlerComponent");
			return ret;
		}
	};


	// Class VerseFortnite.FortAthenaAISpawnerDataComponent_Verse
	// Inherited from UFortAthenaAISpawnerDataComponent_ScriptBase -> UFortAthenaAISpawnerDataComponent -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase	
	{
	public:
		TArray AIComponentSettings; // 0x30(0x10)
		UNPCBehaviorScript NPCBehaviorScriptInstance; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse");
			return ret;
		}

		void SetNPCBehaviorScript(UNPCBehaviorScript InAIBehaviorScript); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA2F58
	};


	// Class VerseFortnite.GuardPerceptionComponentData
	// Inherited from UAIPerceptionComponentData -> UAIComponentData -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UGuardPerceptionComponentData : public UAIPerceptionComponentData	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.GuardPerceptionComponentData");
			return ret;
		}

		void OnBotControllerAlertLevelChanged(AFortAthenaAIBotController BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel); // Flags: Final|Native|Private 0x7FF414BA3038
	};


	// Class VerseFortnite.NPCBehaviorScript
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNPCBehaviorScript : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCBehaviorScript");
			return ret;
		}
	};


	// Class VerseFortnite.NPCBehaviorScriptComponent
	// Inherited from UFortUserOptionContainerComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x128 - 0x120)
	class UNPCBehaviorScriptComponent : public UFortUserOptionContainerComponent	
	{
	public:
		UNPCBehaviorScript NPCBehaviorScript; // 0x120(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCBehaviorScriptComponent");
			return ret;
		}

		UNPCBehaviorScript GetBehaviorScript(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA3118
	};


	// Class VerseFortnite.VerseAIPerceptionStimuliSourceComponent
	// Inherited from UAthenaAIPerceptionStimuliSourceComponent -> UAIPerceptionStimuliSourceComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UVerseAIPerceptionStimuliSourceComponent : public UAthenaAIPerceptionStimuliSourceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseAIPerceptionStimuliSourceComponent");
			return ret;
		}
	};


	// Class VerseFortnite.LoadNPCCharacterDefinitionAsyncBase
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class ULoadNPCCharacterDefinitionAsyncBase : public UBlueprintAsyncActionBase	
	{
	public:
		TWeakObjectPtr LoadedCharacterDefinition; // 0x30(0x8)
		TWeakObjectPtr ContextObject; // 0x38(0x8)
		TArray StoredAdditionalModifiers; // 0x40(0x10)
		TWeakObjectPtr StoredCharacterDefinition; // 0x50(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.LoadNPCCharacterDefinitionAsyncBase");
			return ret;
		}
	};


	// Class VerseFortnite.LoadNPCCharacterDefinitionAsync
	// Inherited from ULoadNPCCharacterDefinitionAsyncBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class ULoadNPCCharacterDefinitionAsync : public ULoadNPCCharacterDefinitionAsyncBase	
	{
	public:
		FMulticastInlineDelegate OnLoaded; // 0x70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.LoadNPCCharacterDefinitionAsync");
			return ret;
		}

		ULoadNPCCharacterDefinitionAsync LoadCharacterDefinitionAsync(UObject ContextObj, TWeakObjectPtr CharacterDefinition, TArray& AdditionalModifiers); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA31F8
	};


	// Class VerseFortnite.LoadAndCreateComponentListAsync
	// Inherited from ULoadNPCCharacterDefinitionAsyncBase -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class ULoadAndCreateComponentListAsync : public ULoadNPCCharacterDefinitionAsyncBase	
	{
	public:
		FMulticastInlineDelegate OnFinished; // 0x70(0x10)
		TWeakObjectPtr ComponentsList; // 0x80(0x8)
		bool bStoredForPreview; // 0x88(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.LoadAndCreateComponentListAsync");
			return ret;
		}

		ULoadAndCreateComponentListAsync LoadAndCreateComponentListAsync(UObject ContextObj, TWeakObjectPtr CharacterDefinition, TArray& AdditionalModifiers, bool bForPreview); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BA32D8
	};


	// Class VerseFortnite.NPCCharacterDefinition
	// Inherited from UFortAIPawnCustomizationDefinition -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x40 (0x178 - 0x138)
	class UNPCCharacterDefinition : public UFortAIPawnCustomizationDefinition	
	{
	public:
		FMulticastInlineDelegate OnCharacterModifierModified; // 0x138(0x10)
		FMulticastInlineDelegate OnCharacterTypeModified; // 0x148(0x10)
		UNPCCharacterType Type; // 0x158(0x8)
		UNPCCharacterModifier_Behavior Behavior; // 0x160(0x8)
		TArray Modifiers; // 0x168(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterDefinition");
			return ret;
		}

		void GetRequiredAssets(TArray& OutAssets); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BA3738
		void GetPreviewMesh(UObject Outer, TArray& AdditionalModifiers, TArray& OutCharacterPreviewMeshes, APawn& OutDefaultPawn); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BA3658
		UAthenaCharacterItemDefinition GetCharacterCID(UObject Outer, TArray& AdditionalModifiers); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BA3578
		UClass GetCharacterBlueprint(TArray& AdditionalModifiers); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BA3498
		UFortAthenaAISpawnerDataComponentList CreateComponentList(UObject Outer, TArray& AdditionalModifiers, bool bForPreview); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BA33B8
	};


	// Class VerseFortnite.NPCCharacterDefinitionComponent
	// Inherited from UFortUserOptionContainerComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x170 - 0x120)
	class UNPCCharacterDefinitionComponent : public UFortUserOptionContainerComponent	
	{
	public:
		TWeakObjectPtr NPCCharacterDefinition; // 0x120(0x20)
		TWeakObjectPtr DefaultNPCCharacterDefinition; // 0x140(0x20)
		TArray NPCCharacterModifiers; // 0x160(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterDefinitionComponent");
			return ret;
		}

		void SetNPCCharacterDefinition(TWeakObjectPtr Definition); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BA3AB8
		void OnNPCCharacterTypeChanged(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA39D8
		TArray GetNPCCharacterModifiers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BA38F8
		TWeakObjectPtr GetNPCCharacterDefinition(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BA3818
	};


	// Class VerseFortnite.FortGameFeatureAction_SetDefaultCharacterDefinition
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UFortGameFeatureAction_SetDefaultCharacterDefinition : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr DefaultNPCCharacterDefinition; // 0x28(0x20)
		TWeakObjectPtr PreviousNPCCharacterDefinition; // 0x48(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.FortGameFeatureAction_SetDefaultCharacterDefinition");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_Behavior
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNPCCharacterModifier_Behavior : public UNPCCharacterModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Behavior");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_CosmeticSpawn
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UNPCCharacterModifier_CosmeticSpawn : public UNPCCharacterModifier	
	{
	public:
		ECharacterLook CharacterLook; // 0x28(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr CharacterCosmetic; // 0x30(0x20)
		FString CharacterCosmeticAssetId; // 0x50(0x10)
		TWeakObjectPtr CharacterBlueprint; // 0x60(0x20)
		ENPCCharacterMovement CharacterMovement; // 0x80(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr AnimPreset; // 0x88(0x20)
		TWeakObjectPtr IKRetargeter; // 0xA8(0x20)
		bool bSupportAnimPreset : 1; // 0xC8:0(0x1)
		bool bSupportCharacterMovement : 1; // 0xC8:1(0x1)
		unsigned char UnknownData05_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_CosmeticSpawn");
			return ret;
		}

		TWeakObjectPtr GetCharacterCosmetic(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BA3B98
	};


	// Class VerseFortnite.NPCCharacterModifier_Effects
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNPCCharacterModifier_Effects : public UNPCCharacterModifier	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Effects");
			return ret;
		}

		TArray GetCustomEffects(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414BA3C78
	};


	// Class VerseFortnite.NPCCharacterModifier_Emotes
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNPCCharacterModifier_Emotes : public UNPCCharacterModifier	
	{
	public:
		TArray Emotes; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Emotes");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_Inventory
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UNPCCharacterModifier_Inventory : public UNPCCharacterModifier	
	{
	public:
		TArray Items; // 0x28(0x10)
		FGameplayTagContainer SupportedItemTags; // 0x38(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Inventory");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_Movement
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNPCCharacterModifier_Movement : public UNPCCharacterModifier	
	{
	public:
		float WalkSpeed; // 0x28(0x4)
		float RunSpeed; // 0x2C(0x4)
		float Acceleration; // 0x30(0x4)
		float Deceleration; // 0x34(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Movement");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_Navigation
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UNPCCharacterModifier_Navigation : public UNPCCharacterModifier	
	{
	public:
		bool bOverrideGenerationRadii; // 0x28(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float GenerationRadius; // 0x2C(0x4)
		float GenerationRemovalRadius; // 0x30(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Navigation");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_PatrolPath
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNPCCharacterModifier_PatrolPath : public UNPCCharacterModifier	
	{
	public:
		EFortCreativePatrolPathGroup PatrolPathGroup; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_PatrolPath");
			return ret;
		}

		AFortAthenaPatrolPath GetPatrolPathToAssign(AActor ModifierOwner); // Flags: Event|Public|BlueprintEvent 0x7FF414BA3D58
	};


	// Class VerseFortnite.NPCCharacterModifier_Perception
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UNPCCharacterModifier_Perception : public UNPCCharacterModifier	
	{
	public:
		bool bOverrideSightSettings : 1; // 0x28:0(0x1)
		bool bEnableSight : 1; // 0x28:1(0x1)
		bool bOverrideHearingSettings : 1; // 0x28:2(0x1)
		bool bEnableHearing : 1; // 0x28:3(0x1)
		bool bOverrideTouchSettings : 1; // 0x28:4(0x1)
		bool bEnableTouch : 1; // 0x28:5(0x1)
		bool bOverrideDamageSettings : 1; // 0x28:6(0x1)
		bool bEnableDamage : 1; // 0x28:7(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UAISenseConfig_Sight SightPerceptionSettings; // 0x30(0x8)
		UAISenseConfig_Hearing HearingPerceptionSettings; // 0x38(0x8)
		UAISenseConfig_Touch TouchPerceptionSettings; // 0x40(0x8)
		UAISenseConfig_Damage DamagePerceptionSettings; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Perception");
			return ret;
		}
	};


	// Class VerseFortnite.CharacterModifier_GuardPerception
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UCharacterModifier_GuardPerception : public UNPCCharacterModifier	
	{
	public:
		bool bOverrideSightSettings : 1; // 0x28:0(0x1)
		bool bEnableSight : 1; // 0x28:1(0x1)
		bool bOverrideHearingSettings : 1; // 0x28:2(0x1)
		bool bEnableHearing : 1; // 0x28:3(0x1)
		bool bOverrideTouchSettings : 1; // 0x28:4(0x1)
		bool bEnableTouch : 1; // 0x28:5(0x1)
		bool bOverrideDamageSettings : 1; // 0x28:6(0x1)
		bool bEnableDamage : 1; // 0x28:7(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UAISenseConfig_Sight SightPerceptionSettings; // 0x30(0x20)
		UAISenseConfig_Hearing HearingPerceptionSettings; // 0x50(0x20)
		UAISenseConfig_Touch TouchPerceptionSettings; // 0x70(0x20)
		UAISenseConfig_Damage DamagePerceptionSettings; // 0x90(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.CharacterModifier_GuardPerception");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_Team
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNPCCharacterModifier_Team : public UNPCCharacterModifier	
	{
	public:
		ETeamOption TeamOption; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		uint32_t TeamIndex; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_Team");
			return ret;
		}
	};


	// Class VerseFortnite.NPCIndicatorComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UNPCIndicatorComponent : public UPlayerStateComponent	
	{
	public:
		EPlayerIndicatorFlags AllyIndicators; // 0xA0(0x1)
		EPlayerIndicatorFlags HostileIndicators; // 0xA1(0x1)
		EPlayerIndicatorFlags NeutralIndicators; // 0xA2(0x1)
		unsigned char UnknownData01_7[0x5]; // 0xA3(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCIndicatorComponent");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_UI
	// Inherited from UNPCCharacterModifier -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UNPCCharacterModifier_UI : public UNPCCharacterModifier	
	{
	public:
		FText DisplayName; // 0x28(0x10)
		ENPCIndicatorCondition ShowNamePlate; // 0x38(0x1)
		ENPCIndicatorCondition ShowArrow; // 0x39(0x1)
		ENPCIndicatorCondition ShowIconMinimap; // 0x3A(0x1)
		bool bSupportModifyIndicators : 1; // 0x3B:0(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_UI");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterModifier_VerseBehavior
	// Inherited from UNPCCharacterModifier_Behavior -> UNPCCharacterModifier -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UNPCCharacterModifier_VerseBehavior : public UNPCCharacterModifier_Behavior	
	{
	public:
		UNPCBehaviorScript NPCBehaviorScript; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterModifier_VerseBehavior");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterType
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UNPCCharacterType : public UObject	
	{
	public:
		FGameplayTag CharacterDefinitionTag; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TArray SupportedModifiers; // 0x30(0x10)
		TArray UnsupportedAdditionalModifiers; // 0x40(0x10)
		TArray DefaultModifiers; // 0x50(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterType");
			return ret;
		}

		bool IsPlayerCharacterRequired(ECharacterLook CharacterLook); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414BA3E38
	};


	// Class VerseFortnite.NPCCharacterType_Custom
	// Inherited from UNPCCharacterType -> UObject
	// Size: 0x60 (0xC0 - 0x60)
	class UNPCCharacterType_Custom : public UNPCCharacterType	
	{
	public:
		TWeakObjectPtr DefaultCosmetics; // 0x60(0x20)
		TWeakObjectPtr AISpawnerData; // 0x80(0x20)
		TWeakObjectPtr PlayerSpawnerData; // 0xA0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterType_Custom");
			return ret;
		}
	};


	// Class VerseFortnite.NPCCharacterType_FromPreset
	// Inherited from UNPCCharacterType -> UObject
	// Size: 0x60 (0xC0 - 0x60)
	class UNPCCharacterType_FromPreset : public UNPCCharacterType	
	{
	public:
		FString SelectedAI; // 0x60(0x10)
		FCharacterTypePreset SelectedPreset; // 0x70(0x40)
		TArray Presets; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.NPCCharacterType_FromPreset");
			return ret;
		}

		TArray GetAvailableAIs(); // Flags: Final|Native|Protected|Const 0x7FF414BA3FF8
		TWeakObjectPtr GetAIToSpawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BA3F18
	};


	// Class VerseFortnite.VerseFortniteUtilitiesComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UVerseFortniteUtilitiesComponent : public UControllerComponent	
	{
	public:
		EPreferredRenderingMode PreferredRenderingMode; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseFortniteUtilitiesComponent");
			return ret;
		}

		void UnSetMaximizeResolution(); // Flags: Final|Native|Private 0x7FF414BA4298
		void SetPreferredRenderingMode(EPreferredRenderingMode InPreferredRenderingMode); // Flags: Final|Native|Public 0x7FF414BA41B8
		void OnRep_PreferredRenderingMode(); // Flags: Final|Native|Private 0x7FF414BA40D8
	};


	// Class VerseFortnite.FortVerseCameraController
	// Inherited from AFortCustomCameraController -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x3E8 - 0x3E8)
	class AFortVerseCameraController : public AFortCustomCameraController	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.FortVerseCameraController");
			return ret;
		}
	};


	// Class VerseFortnite.VerseFortniteActorWrapper
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UVerseFortniteActorWrapper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseFortniteActorWrapper");
			return ret;
		}

		void OnActorDestroyed(AActor DestroyedActor); // Flags: Final|Native|Private 0x7FF414BA4378
	};


	// Class VerseFortnite.VerseFortniteCharacter
	// Inherited from UVerseFortniteActorWrapper -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UVerseFortniteCharacter : public UVerseFortniteActorWrapper	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseFortniteCharacter");
			return ret;
		}

		void HandlePossessedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Private 0x7FF414BA4538
		void HandlePawnDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Native|Protected|HasDefaults 0x7FF414BA4458
	};


	// Class VerseFortnite.TaggedObjectQueryWorldSubsystem
	// Inherited from UTaggedObjectQueryWorldSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UTaggedObjectQueryWorldSubsystem : public UTaggedObjectQueryWorldSubsystemBase	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.TaggedObjectQueryWorldSubsystem");
			return ret;
		}
	};


	// Class VerseFortnite.VerseFortnitePlayspace
	// Inherited from UVerseFortniteActorWrapper -> UObject
	// Size: 0x70 (0xB8 - 0x48)
	class UVerseFortnitePlayspace : public UVerseFortniteActorWrapper	
	{
	public:
		unsigned char UnknownData01_3[0x60]; // 0x48(0x60) UNKNOWN PROPERTY
		TArray Extensions; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseFortnitePlayspace");
			return ret;
		}

		void OnMinigameSetup(AFortMinigame Minigame); // Flags: Final|Native|Private 0x7FF414BA46F8
		void OnMinigamePlayerAdded(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer); // Flags: Final|Native|Private 0x7FF414BA4618
	};


	// Class VerseFortnite.VerseFortnitePlayspaceExtensionBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseFortnitePlayspaceExtensionBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseFortnitePlayspaceExtensionBase");
			return ret;
		}
	};


	// Class VerseFortnite.VerseFortniteSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UVerseFortniteSubsystem : public UWorldSubsystem	
	{
	public:
		TMap ActorToWrapperMap; // 0x30(0x50)
		unsigned char UnknownData01_7[0x50]; // 0x80(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseFortnite.VerseFortniteSubsystem");
			return ret;
		}

		void HandleMinigameStateChanged(AFortMinigame Minigame, EFortMinigameState NewMinigameState); // Flags: Final|Native|Private 0x7FF414BA47D8
	};

}
