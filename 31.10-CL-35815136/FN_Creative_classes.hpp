#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Creative
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
	// Inherited from UGAT_TriggeredAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x1B (0xB68 - 0xB4D)
	class UGAT_Creative_TriggeredAbility_C : public UGAT_TriggeredAbility_C	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0xB4D(0x3) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0xB50(0x8)
		TArray<FName> OverriddenPropertyNames; // 0xB58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C");
			return ret;
		}

		void IsPropertyOverridden(FName PropertyName, bool& bResult); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupAbilityFailsafeTimer(double duration); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AbilityTimeout(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
	// Inherited from UGAT_Creative_TriggeredAbility_C -> UGAT_TriggeredAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB78 - 0xB68)
	class UGAT_Creative_TriggeredAbility_Pawn_C : public UGAT_Creative_TriggeredAbility_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB68(0x8)
		AFortPawn* AbilityOwner; // 0xB70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C");
			return ret;
		}

		void SetupPawnActorAbility(AFortPawn* FortPawn); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
	// Inherited from UGAT_Creative_TriggeredAbility_Pawn_C -> UGAT_Creative_TriggeredAbility_C -> UGAT_TriggeredAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x44 (0xBBC - 0xB78)
	class UGA_Creative_OnKillSiphon_C : public UGAT_Creative_TriggeredAbility_Pawn_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB78(0x8)
		AFortGameStateAthena* GameState; // 0xB80(0x8)
		bool IsCreativeOrPlayground; // 0xB88(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB89(0x7) UNKNOWN PROPERTY
		UClass* GE_HealPlayer; // 0xB90(0x8)
		bool bShouldConvertExcessHealthToShields; // 0xB98(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB99(0x7) UNKNOWN PROPERTY
		UClass* ShieldGE; // 0xBA0(0x8)
		FGameplayTag ConsumedCue; // 0xBA8(0x4)
		bool bDebugBypasLocalMapEnable; // 0xBAC(0x1)
		bool bAttemptHealthRestore; // 0xBAD(0x1)
		bool bAttemptMatsRestore; // 0xBAE(0x1)
		unsigned char UnknownData02_6[0x1]; // 0xBAF(0x1) UNKNOWN PROPERTY
		FName NameGrantWood; // 0xBB0(0x4)
		FName NameGrantStone; // 0xBB4(0x4)
		FName NameGrantMetal; // 0xBB8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C");
			return ret;
		}

		void GiveResourcesToPlayer(bool bShouldGrant, int32_t GiveAmount, TEnumAsByte<EFortResourceType> GiveType, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CalculateResources(TEnumAsByte<EFortResourceType> ResourceGrantType, bool& bSuccess, int32_t& ResourceToGive, TEnumAsByte<EFortResourceType>& ResourceType); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AttemptMats(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AttemptHeal(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupRestoreModes(bool& ShouldContinue); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DetermineHealthDelta(double HealingAmount, double& MaxHealth, double& CurrentHealth, double& HealthDelta, double& ExcessHealh); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddShields(bool bShouldConvertExcessHealthToShields, double ShieldToAdd, bool& bAddedShields, double& ShieldAdded); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestoreHealth(bool& Success, double& InitialHealAmount, double& ActualAppliedHeal, double& ExcessHealing); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_Creative_OnKillSiphon(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/BuildingActors/GameplayActors/GE_LaunchedByVent.GE_LaunchedByVent_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_LaunchedByVent_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/BuildingActors/GameplayActors/GE_LaunchedByVent.GE_LaunchedByVent_C");
			return ret;
		}
	};


	// Class /Game/Creative/Sets/MilitaryBase/Props/CreativeTeamColors.CreativeTeamColors_C
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x250 - 0x220)
	class UCreativeTeamColors_C : public USceneComponent	
	{
	public:
		TArray<FLinearColor> TeamLightColors; // 0x220(0x10)
		TArray<FLinearColor> TeamSelectorColors; // 0x230(0x10)
		TArray<FLinearColor> TeamBoldColors; // 0x240(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Sets/MilitaryBase/Props/CreativeTeamColors.CreativeTeamColors_C");
			return ret;
		}
	};


	// Class /Game/Creative/Devices/Common/Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreative_CommonDeviceFunctionLibrary_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Devices/Common/Creative_CommonDeviceFunctionLibrary.Creative_CommonDeviceFunctionLibrary_C");
			return ret;
		}

		void Current Material Matches Base(UStaticMeshComponent* Static Mesh Component, int32_t MatID, UObject* __WorldContext, bool& Material Matches, UMaterialInterface* Base Material); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GenerateUniqueMaterialName(UPrimitiveComponent* PrimitiveComponent, FString Name, UObject* __WorldContext, FName& UniqueName); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsInEditor(UObject* __WorldContext, bool& TRUE); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Team Color For Team Option(AActor* ContextActor, FCreativeTeamOption TeamOption, UObject* __WorldContext, FLinearColor& Base Color, FLinearColor& Light Color, FLinearColor& Bold Color); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Apply Vent Recently Launched Tag or Abort Launch(AActor* Actor To Launch, AActor* Vent Actor, UObject* __WorldContext, bool& ShouldLaunch); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Simple Apply Gameplay Effect to Actor(UClass* GameplayEffect, AActor* Actor, UObject* __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Give Ammo To Inventory Owner(TScriptInterface<Class> Inventory Owner, UFortWorldItemDefinition* World Item Definition, int32_t Pickup Instigator Handle, TMap<TWeakObjectPtr, int32_t>& AmmoToGiveItemDefinitionMap, int32_t DefaultAmmoToGive, bool SpareWeaponAmmo_Override, int32_t SpareWeaponAmmo, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MatchesTagReturnMatch(FGameplayTagContainer TagContainer, FGameplayTag Tag, bool ExactMatch, UObject* __WorldContext, bool& TagFound, FGameplayTag& FirstMatchingTag); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get PlayerState from NetID(FUniqueNetIdRepl& Unique Net Id, UObject* __WorldContext, AFortPlayerState* Fort Player State); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Matching Channel ID(UFortGameplayMessageComponentBase* A, UFortGameplayMessageComponentBase* B, UObject* __WorldContext, bool& Matches); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Bool to Bool with Unset(bool Input, UObject* __WorldContext, TEnumAsByte<EBoolWithUnset>& Output); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Reattach or Create MID(UPrimitiveComponent* Mesh, UMaterialInstanceDynamic* Target MID, int32_t MatID, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Wrapping Modulo(int32_t A, int32_t B, UObject* __WorldContext, int32_t& Out); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Animate Float Curve(double Delta Time, double& Current Time, UCurveFloat* FCurve, double Animation Time, bool Invert Time, UObject* __WorldContext, double& Value, bool& bIsComplete); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TeamToIndex(char Team, UObject* __WorldContext, int32_t& Index); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IndexToTeam(int32_t Index, UObject* __WorldContext, char& Team); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsLogicInPlayMode(UFortMinigameLogicComponent* Logic, UObject* __WorldContext, bool& Play Mode); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Dynamic Team Color(AActor* Actor, AFortMinigame* Minigame, TEnumAsByte<ECreativeColorSetType> Color Type, UObject* __WorldContext, int32_t& Array Index); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Team Color Index from Tag(AActor* Actor with Tag, AFortMinigame* Minigame, UObject* __WorldContext, int32_t& Array Index, TEnumAsByte<ECreativeColorSetType>& Color Type Out); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t Get Team Color Index or Team Index(UFortMinigameLogicComponent* Minigame Logic, int32_t Team Index, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsLocalPawn(AActor* Actor, UObject* __WorldContext, bool& IsLocalPawn); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsInPlayMode(AActor* Actor, UObject* __WorldContext, bool& Play Mode); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Driver or Pawn Controller(AActor* Actor To Check, UObject* __WorldContext, bool& Valid Controller, AController* Controller); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMID_FromMaterial(UPrimitiveComponent* Target, int32_t Index, UMaterialInterface* SourceMaterial, UObject* __WorldContext, UMaterialInstanceDynamic* Mid); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Refresh Team Change Binding(UFortMinigameLogicComponent* Minigame Logic, bool Unbind, FDelegateProperty& Event, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Team Color(UFortMinigameLogicComponent* Minigame Logic, UPrimitiveComponent* Mesh, int32_t Team, UObject* __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMID(UPrimitiveComponent* Target, UObject* __WorldContext, UMaterialInstanceDynamic* Mid); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActorCanTrigger(AActor* Actor To Check, UPrimitiveComponent* Overlap Component, UObject* __WorldContext, bool& CanTrigger, AController* Controller); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsActivatedOnPhase(EFortMinigameState State, int32_t PhaseIndex, AActor* Actor, UObject* __WorldContext, bool& Enabled); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsEnabledPhaseMatch(EFortMinigameState State, int32_t PhaseIndex, AActor* Actor, UObject* __WorldContext, bool& Enabled); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsValidTeam(int32_t Team to Check, AActor* Actor To Check, UObject* __WorldContext, bool& Valid); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AwardScore(AActor* Actor, int32_t Score, TEnumAsByte<EAwardScoreType> Type, AController* Controller, UFortMinigameLogicComponent* Minigame Logic, FGameplayTagContainer TargetTags, UObject* __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsOnUnpublishedIsland(AActor* Actor, UObject* __WorldContext, bool& Edit Mode); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Devices/Common/Components/Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C
	// Inherited from UCreative_DeviceComponent_Parent_C -> UActorComponent -> UObject
	// Size: 0xB8 (0x160 - 0xA8)
	class UCreative_VisibleInGame_Component_C : public UCreative_DeviceComponent_Parent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA8(0x8)
		FMulticastInlineDelegate On_Visibility_Changed; // 0xB0(0x10)
		bool UseSimplifiedActorVisibilityAndCollision; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		TArray<USceneComponent*> VisibleSceneComponents; // 0xC8(0x10)
		bool bEnableCollisionUpdates; // 0xD8(0x1)
		TEnumAsByte<ECollisionEnabled> Default_Collision_Enabled_State; // 0xD9(0x1)
		TEnumAsByte<ECollisionEnabled> Collision_Disabled_State; // 0xDA(0x1)
		TEnumAsByte<EVisibleInGameState> VisibleDuringPhase; // 0xDB(0x1)
		bool bResetOnComponentActivation; // 0xDC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		FTimerHandle RetryBindMiniGameEventsTimer; // 0xE0(0x8)
		TMap<USceneComponent*, TEnumAsByte> Visibility_Components_with_Collision; // 0xE8(0x50)
		TEnumAsByte<Enum_ForcedValueDuringGame> ForcedVisibilityDuringGame; // 0x138(0x1)
		bool Update_Foliage_on_Visibility_Change; // 0x139(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortMinigame*> CachedMinigame; // 0x140(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Devices/Common/Components/Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C");
			return ret;
		}

		void Should Be Visible (Non Editor)(bool& Visible); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Minigame Event Binds(bool Bind, AFortMinigame* Minigame, bool& Bind Success); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Initialize with Scene Components(TArray<USceneComponent*>& Visibility Components, TMap<USceneComponent*, TEnumAsByte> Components with Collision, TEnumAsByte<EVisibleInGameState> Visible During Phase); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateActorVisibility(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Foliage(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ForcedVisibilityDuringGame(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetForcedVisibilityDuringGame(TEnumAsByte<Enum_ForcedValueDuringGame> NewForcedVisibilityDuringGame); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Array Visibility(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Visibility Components with Collision(TMap<USceneComponent*, TEnumAsByte> Collision Overrides, bool Update Visibility); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Should Be Visible(bool& Visible); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_VisibleDuringPhase(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Visibility Components(TArray<USceneComponent*>& Scene Components, bool Update Visibility); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Is In Play Mode(); // Flags: Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateActivationBasedOnVisibility(UActorComponent* Component, bool Visible); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldUpdateActivationBasedOnVisibility(UActorComponent* Component, bool& ShouldUpdateActivation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Audio Component(UAudioComponent* Audio Component, bool Visible); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Primitive Component Collision(UPrimitiveComponent* Primitive Component, bool Visible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Component Visibility(USceneComponent* Component, bool Visible); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Visiblity During Phase(TEnumAsByte<EVisibleInGameState> New Visible During Phase, bool& Visibility Changed); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Visibility(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Visibility Components(TArray<USceneComponent*>& Components); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Initialize Component(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Attempt Bind Minigame Events(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayModeChangedDelegate(AFortMinigame* Minigame, bool bIsInPlayMode); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOwnerAddedToMinigame(AFortMinigame* Minigame); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Retry Bind Events on Timer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Creative_VisibleInGame_Component(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Visibility Changed__DelegateSignature(bool Visible); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Devices/Common/Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x98 (0xC80 - 0xBE8)
	class ACreative_Device_Prop_Parent_C : public AFortCreativeDeviceProp	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xBE8(0x8)
		UCreative_VisibleInGame_Component_C* VisibleInGameComponent; // 0xBF0(0x8)
		UCreative_Enabled_Component_C* EnabledComponent; // 0xBF8(0x8)
		UFortMinigameProgressComponent* FortMinigameProgress; // 0xC00(0x8)
		UToyOptionsComponent_C* ToyOptionsComponent; // 0xC08(0x8)
		int32_t ActivateOnGamePhase; // 0xC10(0x4)
		int32_t EnabledIndex; // 0xC14(0x4)
		FMulticastInlineDelegate On_Device_Activated; // 0xC18(0x10)
		AController* Instigating_Controller; // 0xC28(0x8)
		bool bIsVisible; // 0xC30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC31(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate On_Device_Initialized; // 0xC38(0x10)
		FMulticastInlineDelegate On_Play_Mode_Changed; // 0xC48(0x10)
		bool Update_on_Minigame_State_Change; // 0xC58(0x1)
		bool Update_on_Play_Mode_Changed; // 0xC59(0x1)
		bool Initialize_during_Preview; // 0xC5A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xC5B(0x5) UNKNOWN PROPERTY
		double MaxHealth; // 0xC60(0x8)
		FActiveGameplayEffectHandle MaxHealthEffectHandler; // 0xC68(0x8)
		bool Initialize_for_Editor; // 0xC70(0x1)
		bool bMigratedEnabledIndex; // 0xC71(0x1)
		bool bMigratedActivateOnPhase; // 0xC72(0x1)
		unsigned char UnknownData02_6[0x5]; // 0xC73(0x5) UNKNOWN PROPERTY
		USoundBase* DevicePlacedSound; // 0xC78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Devices/Common/Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C");
			return ret;
		}

		void GetMaxHealthOptionValue(double& MaxHealth); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Activated State as Index(int32_t& EnabledIndex); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Enabled State as Index(int32_t& EnabledIndex); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MigrateLegacyActivateOnGamePhase(TEnumAsByte<EActivateOnPhase>& ActivateOnPhaseValue, TEnumAsByte<EActivateOnPhase> ClassDefault, bool& MigratedProperties); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MigrateLegacyEnabledIndex(TEnumAsByte<EEnabledOnPhase>& EnabledOnPhaseValue, TEnumAsByte<EEnabledOnPhase> ClassDefault, bool& MigratedProperties); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LegacyIntToEnabledPhaseEnum(int32_t LegacyInteger, TEnumAsByte<EEnabledOnPhase>& EnabledPhase); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnabledPhaseEnumToLegacyInt(char EnabledPhase, int32_t& LegacyInteger); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetHealthIfSet(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMoveToolPreviewComponents(TArray<USceneComponent*>& ForceHideInPreview, TArray<USceneComponent*>& ForceShowInPreview); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Preview Only Visibility(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetVisibilityComponentsWithCollisionOverrides(TMap<USceneComponent*, TEnumAsByte>& VisibilityComponents); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetVisibilityComponents(TArray<USceneComponent*>& VisibilityComponents); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Visibility in Game(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Is Visible In Game(bool& Visible); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsInPlayMode(bool& bIsInPlayMode); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float BlueprintModifyIncomingDamage(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Activate Device Failed(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Attempt Activate Device(AController* Instigating Controller, bool Additional Requirements); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Initialize Device(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintOnLocalInteract(AFortPlayerPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintCanInteract(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Activate Device(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Activate on Phase(EFortMinigameState State, bool Allow Game Progress); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Play Mode Changed(AFortMinigame* Minigame, bool bIsInPlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature(AFortMinigame* Minigame); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature(AFortMinigame* Minigame); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Mingame State Changed(AFortMinigame* Minigame, EFortMinigameState MinigameState); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWorldReady(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMinigameStarted(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMinigameEnded(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__Creative_Device_Prop_Parent_FortMinigameProgress_K2Node_ComponentBoundEvent_6_SimpleDynamicMulticastDelegate__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDevicePlaced(bool bIsPreview); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetVisibility(bool bVisible); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Creative_Device_Prop_Parent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Play Mode Changed__DelegateSignature(bool New Play Mode); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Device Initialized__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Device Activated__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Devices/Common/Components/Creative_Enabled_Component.Creative_Enabled_Component_C
	// Inherited from UCreative_DeviceComponent_Parent_C -> UActorComponent -> UObject
	// Size: 0xD1 (0x179 - 0xA8)
	class UCreative_Enabled_Component_C : public UCreative_DeviceComponent_Parent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA8(0x8)
		FCreative_EnabledState EnabledState; // 0xB0(0x8)
		FMulticastInlineDelegate On_Enabled_State_Changed; // 0xB8(0x10)
		bool EnabledDuringPlayMode; // 0xC8(0x1)
		bool EnabledDuringEditMode; // 0xC9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xCA(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate On_Reset_Complete; // 0xD0(0x10)
		FTimerHandle Reset_Timer; // 0xE0(0x8)
		TSet<EFortMinigameState> IgnorePhases; // 0xE8(0x50)
		double ResetDelay; // 0x138(0x8)
		int32_t Enabled_Index; // 0x140(0x4)
		bool Can_be_Enabled_During_Edit_Mode; // 0x144(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x145(0x3) UNKNOWN PROPERTY
		UFortMinigameLogicComponent* Logic_Component; // 0x148(0x8)
		bool Switch_On_Phase_Change; // 0x150(0x1)
		bool Switch_On_Play_Change; // 0x151(0x1)
		bool CanBeEnabledDuringPreview; // 0x152(0x1)
		bool Check_Phase_Change_During_Play_Switch; // 0x153(0x1)
		bool Show_Debug; // 0x154(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x155(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortMinigame*> CachedMinigame; // 0x158(0x20)
		bool bRequiresInitializeToEnable; // 0x178(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Devices/Common/Components/Creative_Enabled_Component.Creative_Enabled_Component_C");
			return ret;
		}

		void IsMinigameTheSameAsCachedMinigame(AFortMinigame* Minigame, bool& Same); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnbindMinigameEvents(AFortMinigame* Minigame); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Can be Enabled(bool& TRUE); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_EIsEnabled(); // Flags: HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsResetting(bool& TRUE, double& Remaining Time); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Reset Delay Start(double Delay); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Reset Delay Complete(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Enabled on Play Mode(bool Play Mode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Enabled(bool bEnabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsEnabled(bool& Enabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Enabled on Phase(EFortMinigameState State, int32_t EnabledIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Initialize Component(UFortMinigameLogicComponent* Logic Component, int32_t Enabled Index); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Added to Minigame(AFortMinigame* Minigame); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Minigame State Changed(AFortMinigame* Minigame, EFortMinigameState MinigameState); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Minigame Play Mode Changed(AFortMinigame* Minigame, bool bIsInPlayMode); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Initialize(UFortMinigameLogicComponent* Logic Component, TEnumAsByte<EEnabledOnPhase> Enabled Phases); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnbindAndResetCachedMinigame(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Creative_Enabled_Component(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Reset Complete__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Enabled State Changed__DelegateSignature(bool Enabled); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Devices/Common/Components/Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UCreative_DeviceComponent_Parent_C : public UActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Devices/Common/Components/Creative_DeviceComponent_Parent.Creative_DeviceComponent_Parent_C");
			return ret;
		}

		void Owning Actor Activated(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Owning Actor Initialized(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Creative_DeviceComponent_Parent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Devices/Common/GameplayEffects/GE_Devices_Common_SetMaxHealth.GE_Devices_Common_SetMaxHealth_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_Devices_Common_SetMaxHealth_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Devices/Common/GameplayEffects/GE_Devices_Common_SetMaxHealth.GE_Devices_Common_SetMaxHealth_C");
			return ret;
		}
	};


	// Class /Game/Creative/Sets/MilitaryBase/BuildingPieces/MilitaryBase_Door_01.MilitaryBase_Door_01_C
	// Inherited from AParent_BuildingWall_C -> ABuildingWall -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x90 (0xDE8 - 0xD58)
	class AMilitaryBase_Door_01_C : public AParent_BuildingWall_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xD58(0x8)
		UBoxComponent* DoorSlideOverlapVolume; // 0xD60(0x8)
		UStaticMeshComponent* DoorStaticMesh1; // 0xD68(0x8)
		float Timeline_0_EmissiveColorLerp_75727DFA4F9CA24A009D23ADC967876F; // 0xD70(0x4)
		float Timeline_0_SlideAnimation_75727DFA4F9CA24A009D23ADC967876F; // 0xD74(0x4)
		TEnumAsByte<ETimelineDirection> Timeline_0__Direction_75727DFA4F9CA24A009D23ADC967876F; // 0xD78(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xD79(0x7) UNKNOWN PROPERTY
		UTimelineComponent* Timeline; // 0xD80(0x8)
		int32_t NumberOfPawnsWithinVolume; // 0xD88(0x4)
		bool DoorOpen; // 0xD8C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD8D(0x3) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* DoorMID; // 0xD90(0x8)
		FLinearColor DefaultDoorEmissiveValue; // 0xD98(0x10)
		FLinearColor ActiveDoorEmissiveValue; // 0xDA8(0x10)
		UMaterialInterface* DoorBaseMaterial; // 0xDB8(0x8)
		UMaterialInterface* Door_Source_Materials; // 0xDC0(0x8)
		USoundBase* SlidingDoorClose_Sound; // 0xDC8(0x8)
		USoundBase* SlidingDoorOpen_Sound; // 0xDD0(0x8)
		FMulticastInlineDelegate OnDoorOpened; // 0xDD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Sets/MilitaryBase/BuildingPieces/MilitaryBase_Door_01.MilitaryBase_Door_01_C");
			return ret;
		}

		bool IsOpen(); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetComponentToLock(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_DoorOpen(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDoorMID(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__FinishedFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Timeline_0__UpdateFunc(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OpenDoor(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseDoor(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Open(AController* ControllerInstigator, bool bRequestFastOpen); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Close(AController* ControllerInstigator); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUnLocked(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLocked(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_MilitaryBase_Door_01(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDoorOpened__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Devices/Common/Creative_DeviceInterface.Creative_DeviceInterface_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCreative_DeviceInterface_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Devices/Common/Creative_DeviceInterface.Creative_DeviceInterface_C");
			return ret;
		}

		void CanInteract(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType, bool& bCanInteract); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSpawnedPickups(TArray<AFortPickup*>& SpawnedPickups); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsEnabled(bool& bEnabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Device Color(FLinearColor& Color); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsHoldingItemForPawn(FItemVariantHandle Item, APawn* Pawn, bool& TRUE); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Instigating Controller(AController* Instigator); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Trigger Collision(bool On, bool&  ); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Activate From Other Device(AController* Instigator, TEnumAsByte<ERequesterType> Requester, bool&  ); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Items/FishingBarrel/B_Creative_FloppingRabbit_Loot.B_Creative_FloppingRabbit_Loot_C
	// Inherited from AB_FloppingRabbit_Weap_Athena_C -> AB_UtilityItem_Generic_Athena_C -> AB_UtilityItem_Generic_C -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1622 - 0x1622)
	class AB_Creative_FloppingRabbit_Loot_C : public AB_FloppingRabbit_Weap_Athena_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Items/FishingBarrel/B_Creative_FloppingRabbit_Loot.B_Creative_FloppingRabbit_Loot_C");
			return ret;
		}
	};


	// Class /Game/Creative/Items/FishingBarrel/B_Creative_FloppingRabbit_Prj_Loot.B_Creative_FloppingRabbit_Prj_Loot_C
	// Inherited from APrj_Athena_FloppingRabbit_C -> AB_Prj_ThrownConsumable_C -> AB_Prj_ThrownConsumable_Parent_C -> AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x8B (0x10E0 - 0x1055)
	class AB_Creative_FloppingRabbit_Prj_Loot_C : public APrj_Athena_FloppingRabbit_C	
	{
	public:
		unsigned char UnknownData00_3[0x3]; // 0x1055(0x3) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0x1058(0x8)
		AActor* OverlappedActor; // 0x1060(0x8)
		FScalableFloat EnabledRow; // 0x1068(0x28)
		TSet<AActor*> PotentialSpawns; // 0x1090(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Items/FishingBarrel/B_Creative_FloppingRabbit_Prj_Loot.B_Creative_FloppingRabbit_Prj_Loot_C");
			return ret;
		}

		void FishingEnabled(bool& Fishing Enabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Creative_FloppingRabbit_Prj_Loot(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /Game/Creative/Items/FishingBarrel/GA_Creative_FloppingRabbit_Loot.GA_Creative_FloppingRabbit_Loot_C
	// Inherited from UGA_Athena_FloppingRabbit_C -> UGA_Athena_Consumable_Throw_Parent_C -> UFortGameplayAbility_ConsumableThrowParent -> UFortGameplayAbility_ThrowTrajectory -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0x1028 - 0x1028)
	class UGA_Creative_FloppingRabbit_Loot_C : public UGA_Athena_FloppingRabbit_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Items/FishingBarrel/GA_Creative_FloppingRabbit_Loot.GA_Creative_FloppingRabbit_Loot_C");
			return ret;
		}
	};


	// Class /Game/Creative/Items/FishingBarrel/B_Creative_FloppingRabbit_HT_Loot1.B_Creative_FloppingRabbit_HT_Loot1_C
	// Inherited from AB_Creative_FloppingRabbit_Loot_C -> AB_FloppingRabbit_Weap_Athena_C -> AB_UtilityItem_Generic_Athena_C -> AB_UtilityItem_Generic_C -> AFortWeapon -> AActor -> UObject
	// Size: 0x0 (0x1622 - 0x1622)
	class AB_Creative_FloppingRabbit_HT_Loot1_C : public AB_Creative_FloppingRabbit_Loot_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Items/FishingBarrel/B_Creative_FloppingRabbit_HT_Loot1.B_Creative_FloppingRabbit_HT_Loot1_C");
			return ret;
		}
	};


	// Class /Game/Creative/Items/FishingBarrel/B_Creative_FloppingRabbit_HT_Prj_Loot.B_Creative_FloppingRabbit_HT_Prj_Loot_C
	// Inherited from AB_Creative_FloppingRabbit_Prj_Loot_C -> APrj_Athena_FloppingRabbit_C -> AB_Prj_ThrownConsumable_C -> AB_Prj_ThrownConsumable_Parent_C -> AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x0 (0x10E0 - 0x10E0)
	class AB_Creative_FloppingRabbit_HT_Prj_Loot_C : public AB_Creative_FloppingRabbit_Prj_Loot_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Items/FishingBarrel/B_Creative_FloppingRabbit_HT_Prj_Loot.B_Creative_FloppingRabbit_HT_Prj_Loot_C");
			return ret;
		}
	};


	// Class /Game/Creative/Items/FishingBarrel/GA_Creative_FloppingRabbit_HighTier_Loot.GA_Creative_FloppingRabbit_HighTier_Loot_C
	// Inherited from UGA_Athena_FloppingRabbit_HighTier_C -> UGA_Athena_FloppingRabbit_C -> UGA_Athena_Consumable_Throw_Parent_C -> UFortGameplayAbility_ConsumableThrowParent -> UFortGameplayAbility_ThrowTrajectory -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x0 (0x1028 - 0x1028)
	class UGA_Creative_FloppingRabbit_HighTier_Loot_C : public UGA_Athena_FloppingRabbit_HighTier_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Items/FishingBarrel/GA_Creative_FloppingRabbit_HighTier_Loot.GA_Creative_FloppingRabbit_HighTier_Loot_C");
			return ret;
		}
	};

}
