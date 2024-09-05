#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Creative
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
	// Inherited from UGAT_TriggeredAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x1B (0xB68 - 0xB4D)
	class UGAT_Creative_TriggeredAbility_C : public UGAT_TriggeredAbility_C	
	{
	public:
		unsigned char UnknownData01_3[0x3]; // 0xB4D(0x3) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0xB50(0x8)
		TArray OverriddenPropertyNames; // 0xB58(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C");
			return ret;
		}

		void IsPropertyOverridden(FName PropertyName, bool& bResult); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D66803400
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D66803300
		void SetupAbilityFailsafeTimer(double duration); // Flags: BlueprintCallable|BlueprintEvent 0x15D66803200
		void AbilityTimeout(); // Flags: BlueprintCallable|BlueprintEvent 0x15D66803600
		void ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66803500
	};


	// Class /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
	// Inherited from UGAT_Creative_TriggeredAbility_C -> UGAT_TriggeredAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB78 - 0xB68)
	class UGAT_Creative_TriggeredAbility_Pawn_C : public UGAT_Creative_TriggeredAbility_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB68(0x8)
		AFortPawn AbilityOwner; // 0xB70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C");
			return ret;
		}

		void SetupPawnActorAbility(AFortPawn& FortPawn); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D66807700
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D66807800
		void ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66807900
	};


	// Class /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
	// Inherited from UGAT_Creative_TriggeredAbility_Pawn_C -> UGAT_Creative_TriggeredAbility_C -> UGAT_TriggeredAbility_C -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x44 (0xBBC - 0xB78)
	class UGA_Creative_OnKillSiphon_C : public UGAT_Creative_TriggeredAbility_Pawn_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB78(0x8)
		AFortGameStateAthena GameState; // 0xB80(0x8)
		bool IsCreativeOrPlayground; // 0xB88(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xB89(0x7) UNKNOWN PROPERTY
		UClass GE_HealPlayer; // 0xB90(0x8)
		bool bShouldConvertExcessHealthToShields; // 0xB98(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xB99(0x7) UNKNOWN PROPERTY
		UClass ShieldGE; // 0xBA0(0x8)
		FGameplayTag ConsumedCue; // 0xBA8(0x4)
		bool bDebugBypasLocalMapEnable; // 0xBAC(0x1)
		bool bAttemptHealthRestore; // 0xBAD(0x1)
		bool bAttemptMatsRestore; // 0xBAE(0x1)
		unsigned char UnknownData05_6[0x1]; // 0xBAF(0x1) UNKNOWN PROPERTY
		FName NameGrantWood; // 0xBB0(0x4)
		FName NameGrantStone; // 0xBB4(0x4)
		FName NameGrantMetal; // 0xBB8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C");
			return ret;
		}

		void GiveResourcesToPlayer(bool bShouldGrant, int32_t GiveAmount, TEnumAsByte GiveType, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66807000
		void CalculateResources(TEnumAsByte ResourceGrantType, bool& bSuccess, int32_t& ResourceToGive, TEnumAsByte& ResourceType); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66807300
		void AttemptMats(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66807400
		void AttemptHeal(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D66807500
		void SetupRestoreModes(bool& ShouldContinue); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66806C00
		void DetermineHealthDelta(double HealingAmount, double& MaxHealth, double& CurrentHealth, double& HealthDelta, double& ExcessHealh); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D66807200
		void AddShields(bool bShouldConvertExcessHealthToShields, double ShieldToAdd, bool& bAddedShields, double& ShieldAdded); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D66807600
		void RestoreHealth(bool& Success, double& InitialHealAmount, double& ActualAppliedHeal, double& ExcessHealing); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D66806D00
		bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D66806E00
		void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x15D66806F00
		void ExecuteUbergraph_GA_Creative_OnKillSiphon(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D66807100
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
		TArray TeamLightColors; // 0x220(0x10)
		TArray TeamSelectorColors; // 0x230(0x10)
		TArray TeamBoldColors; // 0x240(0x10)

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

		void Current Material Matches Base(UStaticMeshComponent Static Mesh Component, int32_t MatID, UObject __WorldContext, bool& Material Matches, UMaterialInterface& Base Material); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41FAE300
		void GenerateUniqueMaterialName(UPrimitiveComponent PrimitiveComponent, FString Name, UObject __WorldContext, FName& UniqueName); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D41FAE200
		void IsInEditor(UObject __WorldContext, bool& TRUE); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD400
		void Get Team Color For Team Option(AActor ContextActor, FCreativeTeamOption TeamOption, UObject __WorldContext, FLinearColor& Base Color, FLinearColor& Light Color, FLinearColor& Bold Color); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FADE00
		void Apply Vent Recently Launched Tag or Abort Launch(AActor Actor To Launch, AActor Vent Actor, UObject __WorldContext, bool& ShouldLaunch); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41FAE600
		void Simple Apply Gameplay Effect to Actor(UClass GameplayEffect, AActor Actor, UObject __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41FACB00
		void Give Ammo To Inventory Owner(TScriptInterface Inventory Owner, UFortWorldItemDefinition World Item Definition, int32_t Pickup Instigator Handle, TMap& AmmoToGiveItemDefinitionMap, int32_t DefaultAmmoToGive, bool SpareWeaponAmmo_Override, int32_t SpareWeaponAmmo, UObject __WorldContext); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41FAD900
		void MatchesTagReturnMatch(FGameplayTagContainer TagContainer, FGameplayTag tag, bool ExactMatch, UObject __WorldContext, bool& TagFound, FGameplayTag& FirstMatchingTag); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FACE00
		void Get PlayerState from NetID(FUniqueNetIdRepl& Unique Net Id, UObject __WorldContext, AFortPlayerState& Fort Player State); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FADF00
		void Is Matching Channel ID(UFortGameplayMessageComponentBase A, UFortGameplayMessageComponentBase B, UObject __WorldContext, bool& Matches); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD700
		void Bool to Bool with Unset(bool Input, UObject __WorldContext, TEnumAsByte& Output); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAE400
		void Reattach or Create MID(UPrimitiveComponent Mesh, UMaterialInstanceDynamic& Target MID, int32_t MatID, UObject __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D41FACD00
		void Wrapping Modulo(int32_t A, int32_t B, UObject __WorldContext, int32_t& Out); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAC800
		void Animate Float Curve(double Delta Time, double& Current Time, UCurveFloat FCurve, double Animation Time, bool Invert Time, UObject __WorldContext, double& Value, bool& bIsComplete); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D41FAE700
		void TeamToIndex(char Team, UObject __WorldContext, int32_t& Index); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FACA00
		void IndexToTeam(int32_t Index, UObject __WorldContext, char& Team); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD800
		void IsLogicInPlayMode(UFortMinigameLogicComponent& Logic, UObject __WorldContext, bool& Play Mode); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD100
		void Get Dynamic Team Color(AActor Actor, AFortMinigame Minigame, TEnumAsByte Color Type, UObject __WorldContext, int32_t& Array Index); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAE000
		void Get Team Color Index from Tag(AActor Actor with Tag, AFortMinigame Minigame, UObject __WorldContext, int32_t& Array Index, TEnumAsByte& Color Type Out); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FADD00
		int32_t Get Team Color Index or Team Index(UFortMinigameLogicComponent Minigame Logic, int32_t Team Index, UObject __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FADC00
		void IsLocalPawn(AActor Actor, UObject __WorldContext, bool& IsLocalPawn); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD200
		void IsInPlayMode(AActor& Actor, UObject __WorldContext, bool& Play Mode); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD300
		void Get Driver or Pawn Controller(AActor Actor To Check, UObject __WorldContext, bool& Valid Controller, AController& Controller); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAE100
		void GetMID_FromMaterial(UPrimitiveComponent Target, int32_t Index, UMaterialInterface SourceMaterial, UObject __WorldContext, UMaterialInstanceDynamic& Mid); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FADA00
		void Refresh Team Change Binding(UFortMinigameLogicComponent Minigame Logic, bool Unbind, FDelegateProperty& Event, UObject __WorldContext); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D41FACC00
		void Update Team Color(UFortMinigameLogicComponent Minigame Logic, UPrimitiveComponent Mesh, int32_t Team, UObject __WorldContext); // Flags: Static|Public|BlueprintCallable|BlueprintEvent 0x15D41FAC900
		void GetMID(UPrimitiveComponent Target, UObject __WorldContext, UMaterialInstanceDynamic& Mid); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FADB00
		void ActorCanTrigger(AActor Actor To Check, UPrimitiveComponent Overlap Component, UObject __WorldContext, bool& CanTrigger, AController& Controller); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAA600
		void IsActivatedOnPhase(EFortMinigameState State, int32_t PhaseIndex, AActor Actor, UObject __WorldContext, bool& Enabled); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD600
		void IsEnabledPhaseMatch(EFortMinigameState State, int32_t PhaseIndex, AActor Actor, UObject __WorldContext, bool& Enabled); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD500
		void IsValidTeam(int32_t Team to Check, AActor Actor To Check, UObject __WorldContext, bool& Valid); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FACF00
		void AwardScore(AActor Actor, int32_t Score, TEnumAsByte Type, AController Controller, UFortMinigameLogicComponent Minigame Logic, FGameplayTagContainer TargetTags, UObject __WorldContext); // Flags: Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D41FAE500
		void IsOnUnpublishedIsland(AActor Actor, UObject __WorldContext, bool& Edit Mode); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D41FAD000
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

		void CanInteract(AFortPawn InteractingPawn, TEnumAsByte InteractionBeingAttempted, TEnumAsByte InteractionType, bool& bCanInteract); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15DB608A900
		void GetSpawnedPickups(TArray& SpawnedPickups); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB608A600
		void IsEnabled(bool& bEnabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15DB6144200
		void Get Device Color(FLinearColor& Color); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB608A800
		void IsHoldingItemForPawn(FItemVariantHandle Item, APawn Pawn, bool& TRUE); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6144100
		void Get Instigating Controller(AController& Instigator); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB608A700
		void Set Trigger Collision(bool On, bool&  ); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6144000
		void Activate From Other Device(AController Instigator, TEnumAsByte Requester, bool&  ); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB608AA00
	};

}
