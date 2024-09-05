#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CraftingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CraftingRuntime.CraftingObjectBGA
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x68 (0x9F0 - 0x988)
	class ACraftingObjectBGA : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x988(0x8) UNKNOWN PROPERTY
		AFortInventory* Inventory; // 0x990(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x998(0x18) UNKNOWN PROPERTY
		USphereComponent* SphereComponent_InteractionRange; // 0x9B0(0x8)
		TWeakObjectPtr<UClass*> MenuWidget; // 0x9B8(0x20)
		UWidgetComponent* WidgetComponent_PotContents; // 0x9D8(0x8)
		bool bShowCraftingUI; // 0x9E0(0x1)
		bool bSendEventMessageOnLocalInteract; // 0x9E1(0x1)
		bool bRunServerInteractionWhenSendingEventMessage; // 0x9E2(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x9E3(0x5) UNKNOWN PROPERTY
		UStaticMeshComponent* CraftingObjectMesh; // 0x9E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.CraftingObjectBGA");
			return ret;
		}

		void HandleInteractionRangeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: Native|Public, Memory Exec: 0x7FF74EC5802C(relative to base address)
		void HandleInteractionRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF74EC57DDC(relative to base address)
	};


	// Class CraftingRuntime.CraftingCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCraftingCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.CraftingCheatManager");
			return ret;
		}

		void ToggleFreeCrafting(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void StartSelfCrafting(FName FormulaName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74DBCEC98(relative to base address)
	};


	// Class CraftingRuntime.CraftingObjectComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x438 (0x4D8 - 0xA0)
	class UCraftingObjectComponent : public UGameFrameworkComponent	
	{
	public:
		FMulticastInlineDelegate CraftingObjectStateChanged; // 0xA0(0x10)
		FMulticastInlineDelegate OnFormulaCraftableChanged; // 0xB0(0x10)
		FMulticastInlineDelegate OnCraftingSuccess; // 0xC0(0x10)
		FDelegateProperty OnCraftingAdditionalValidationCheck; // 0xD0(0xC)
		unsigned char UnknownData00_6[0x1C]; // 0xDC(0x1C) UNKNOWN PROPERTY
		FCraftingObjectRepStateData CraftingObjectRepStateData; // 0xF8(0x18)
		TMap<FCraftingMultiKey, FCraftingObjectServerStateData> CraftingObjectServerStateData; // 0x110(0x50)
		FName LastCraftedItemFormulaRow; // 0x160(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		FString LastIngredientStringForAnalytics; // 0x168(0x10)
		FString LastFormulaStringForAnalytics; // 0x178(0x10)
		FString LastResultsStringForAnalytics; // 0x188(0x10)
		FGameplayAbilitySpecHandle WhileCraftingAbilitySpecHandle; // 0x198(0x4)
		FGameplayAbilitySpecHandle OwnerCraftingAbilitySpecHandle; // 0x19C(0x4)
		FGameplayTag CraftingObjectTag; // 0x1A0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer CraftingObjectTags; // 0x1A8(0x20)
		FScalableFloat CraftingTimeLength; // 0x1C8(0x28)
		FScalableFloat ReadyTimeLength; // 0x1F0(0x28)
		FScalableFloat OverCraftingTimeLength; // 0x218(0x28)
		FScalableFloat ResettingTimeLength; // 0x240(0x28)
		FScalableFloat DefaultCraftingSpeedMultiplier; // 0x268(0x28)
		FName OverCraftingLootTierKey; // 0x290(0x4)
		bool bTakeItemsAtCraftingStart : 1; // 0x294:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x295(0x3) UNKNOWN PROPERTY
		float DecayRate; // 0x298(0x4)
		bool bGiveIngredientsToCraftingObject : 1; // 0x29C:0(0x1)
		bool bGiveIngredientsToInstigator : 1; // 0x29C:1(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x29D(0x3) UNKNOWN PROPERTY
		FVector IngredientSpawnOffset; // 0x2A0(0x18)
		bool bGiveToCraftingObject : 1; // 0x2B8:0(0x1)
		bool bGiveResultToInstigator : 1; // 0x2B8:1(0x1)
		unsigned char UnknownData05_5[0x7]; // 0x2B9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> OwnerCraftingAbility; // 0x2C0(0x20)
		TWeakObjectPtr<UClass*> WhileCraftingAbility; // 0x2E0(0x20)
		TWeakObjectPtr<UClass*> InstigatorWhileCraftingAbility; // 0x300(0x20)
		bool bScaleMultiCraftingTime; // 0x320(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x321(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer CraftingFailedTags; // 0x328(0x20)
		unsigned char UnknownData07_6[0x118]; // 0x348(0x118) UNKNOWN PROPERTY
		FGameplayTagContainer IngredientsInventoryGroupTag; // 0x460(0x20)
		unsigned char UnknownData08_6[0x50]; // 0x480(0x50) UNKNOWN PROPERTY
		bool FreeCraftingEnabled; // 0x4D0(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x4D1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.CraftingObjectComponent");
			return ret;
		}

		void OnRep_CraftingObjectTags(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7507CAE10(relative to base address)
		void OnRep_CraftingObjectRepStateData(FCraftingObjectRepStateData& OldValue); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7507CAD6C(relative to base address)
		void HandlePickupCraftingItemPickedUp(AFortPickup* Pickup, AFortPawn* InteractingPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7507CA57C(relative to base address)
		void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(FName& FormulaRowName, bool bIsCraftable); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnCraftingSuccess; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents");
			return ret;
		}

		void ServerStartCrafting(AActor* CraftingObject, FName CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key, float OverriddenObjectStateLength); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF7507CC094(relative to base address)
		void ServerResumeCrafting(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF7507CBF1C(relative to base address)
		void ServerReportCraftingSuccess(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF7507CBDA4(relative to base address)
		void ServerPickupItemAndStartCrafting(AActor* CraftingObject, AFortPickup* Pickup, FName CraftingFormulaName, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF7507CBBB0(relative to base address)
		void ServerPauseCrafting(AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF7507CB9F8(relative to base address)
		void ServerEjectItems(AActor* CraftingObject); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF7507CB958(relative to base address)
		void ServerClaimCraftingResults(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF7507CB7E0(relative to base address)
		void ServerCancelCrafting(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate, Memory Exec: 0x7FF7507CB668(relative to base address)
		void NotifyCraftingSuccess(AActor* CraftingObject, FName& FormulaRowName, TArray<FFortItemEntry>& ConsumedIngredients, FCraftingMultiKey Key); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7507CA9B0(relative to base address)
		void ClientNotifyCraftingSuccess(AActor* CraftingObject, FName FormulaRowName, TArray<FFortItemEntry> ConsumedIngredients, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF7507C7FF8(relative to base address)
		void ClientNotifyCraftingFailed(AActor* CraftingObject, FGameplayTagContainer FailedReason, FCraftingMultiKey Key); // Flags: Net|Native|Event|Public|NetClient, Memory Exec: 0x7FF7507C7DB8(relative to base address)
	};


	// Class CraftingRuntime.FortGameStateComponent_Crafting
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1B0 (0x250 - 0xA0)
	class UFortGameStateComponent_Crafting : public UFortGameStateComponent	
	{
	public:
		FDataRegistryType CraftingFormulaRegistryType; // 0xA0(0x4)
		FDataRegistryType CraftingIngredientsUIDataRegistryType; // 0xA4(0x4)
		unsigned char UnknownData00_6[0x148]; // 0xA8(0x148) UNKNOWN PROPERTY
		TArray<FCraftingResult> CraftingResultsList; // 0x1F0(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x200(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.FortGameStateComponent_Crafting");
			return ret;
		}

		void OnRep_CraftingResultsList(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7507CAE64(relative to base address)
		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: RequiredAPI|Native|Protected|HasOutParms, Memory Exec: 0x7FF7507CAC38(relative to base address)
	};


	// Class CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
	// Inherited from UFortPickupInteractOverrideComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xE0 - 0xC0)
	class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent	
	{
	public:
		UItemDefinitionBase* LastPickupItemDef; // 0xC0(0x8)
		UItemDefinitionBase* LastFocusedItemDef; // 0xC8(0x8)
		FName LastTargetFormulaName; // 0xD0(0x4)
		float ContextualCraftingInteractDuration; // 0xD4(0x4)
		TEnumAsByte<TInteractionType> CachedInteractionType; // 0xD8(0x1)
		TEnumAsByte<EInteractionBeingAttempted> CachedInteractionBeingAttempted; // 0xD9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.FortPickupInteractOverrideComponent_Crafting");
			return ret;
		}
	};


	// Class CraftingRuntime.FortContextualTutorial_CraftingComplete
	// Inherited from UFortContextualTutorial -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UFortContextualTutorial_CraftingComplete : public UFortContextualTutorial	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.FortContextualTutorial_CraftingComplete");
			return ret;
		}

		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7507CAB90(relative to base address)
	};


	// Class CraftingRuntime.FortContextualTutorial_CraftingReady
	// Inherited from UFortContextualTutorial -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UFortContextualTutorial_CraftingReady : public UFortContextualTutorial	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.FortContextualTutorial_CraftingReady");
			return ret;
		}

		void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7507CA2EC(relative to base address)
	};


	// Class CraftingRuntime.FortContextualTutorial_CraftingTabOpen
	// Inherited from UFortContextualTutorial -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen");
			return ret;
		}

		void HandleInventoryTabChanged(FName InventoryTabNameId); // Flags: Final|Native|Private, Memory Exec: 0x7FF7507CA4FC(relative to base address)
		void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7507CA3FC(relative to base address)
	};


	// Class CraftingRuntime.CraftingLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCraftingLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.CraftingLibrary");
			return ret;
		}

		void StartCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, FName& CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key, float OverriddenCraftingLength); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CC364(relative to base address)
		void ResumeCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507CB4B0(relative to base address)
		void ReportCraftingSuccess(AFortPlayerController* Instigator, AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507CB2F8(relative to base address)
		void PickupItemAndStartCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, AFortPickup* Pickup, FName& CraftingFormulaName, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507CB084(relative to base address)
		void PauseCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507CAE78(relative to base address)
		bool IsValidIngredient(AFortPlayerController* FortPC, AActor* CraftingObject, UItemDefinitionBase* ItemDef); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507CA6D0(relative to base address)
		bool IsFreeCraftingEnabled(AActor* CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7507CA640(relative to base address)
		void GiveItemToCraftingObject(AFortPlayerController* Instigator, AActor* CraftingObject, FFortItemEntry& ItemEntryToGrant); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7507CA0D4(relative to base address)
		void GetValidIngredientsInInventory(AFortPlayerController* FortPC, AActor* CraftingObject, TArray<UFortWorldItem*>& OutIngredients); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C9D94(relative to base address)
		void GetUIDataForCraftingIngredientTags(UObject* WorldContextObject, FGameplayTagContainer& IngredientTags, TArray<TWeakObjectPtr>& OutItemDefs, TArray<TWeakObjectPtr>& OutIcons); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C9B90(relative to base address)
		float GetTimeToCraftRecipe(AActor* CraftingObject, FName& CraftingFormulaName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C9AC0(relative to base address)
		FName GetLastCraftedItemFormulaName(AActor* CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C9A30(relative to base address)
		void GetKnownCraftingFormulas(AFortPlayerController* FortPC, AActor* CraftingObject, TArray<FName>& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C9878(relative to base address)
		TArray GetIngredientsInCraftingObject(AActor* CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C978C(relative to base address)
		void GetCraftingResultsForRowName(UObject* WorldContextObject, FName& CraftingFormulaRow, TArray<FItemAndCount>& OutResults, int32_t NumToCraft); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C957C(relative to base address)
		FGameplayTagContainer GetCraftingObjectTags(AActor* CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7507C94E4(relative to base address)
		float GetCraftingObjectPausedTime(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C937C(relative to base address)
		float GetCraftingObjectCurrentCraftingStateTimeLeft(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C9214(relative to base address)
		float GetCraftingObjectCurrentCraftingStateStartTime(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C90C0(relative to base address)
		float GetCraftingObjectCurrentCraftingStateEndTime(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C8F58(relative to base address)
		ECraftingObjectState GetCraftingObjectCraftingState(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7507C8E04(relative to base address)
		UCraftingObjectComponent GetCraftingObjectComponent(AActor* CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7507C8D78(relative to base address)
		TArray GetCraftingIngredients_TempItems(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C8C10(relative to base address)
		void GetCraftingFormulasForCraftingObject(AActor* CraftingObject, TArray<FName>& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C8AF4(relative to base address)
		FName GetCraftingFormulaNameBeingCrafted(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C89A8(relative to base address)
		bool GetCraftingFormulaIngredientRequirements(UObject* WorldContextObject, FName& CraftingFormulaRow, TArray<FCraftingIngredientRequirement>& OutIngredientRequirements); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C8854(relative to base address)
		TArray GetCraftedResults_TempItems(AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C86EC(relative to base address)
		void GetAllValidIngredients(AFortPlayerController* FortPC, AActor* CraftingObject, TArray<FGameplayTagContainer>& OutIngredients); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C8578(relative to base address)
		void GetAllCraftingFormulas(AFortPlayerController* FortPC, AActor* CraftingObject, TArray<FName>& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C8418(relative to base address)
		void GetAllCraftableFormulas(AFortPlayerController* FortPC, AActor* CraftingObject, TArray<FName>& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C82C0(relative to base address)
		void EjectItems(AFortPlayerController* Instigator, AActor* CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C81C4(relative to base address)
		void ClaimCraftingResults(AFortPlayerController* Instigator, AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C7C00(relative to base address)
		bool CanCraftFormulaWithAdditionalItems(AFortPlayerController* FortPC, AActor* CraftingObject, FName CraftingFormulaRow, TArray<FItemAndCount>& AdditionalItems, TArray<FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft, FGameplayTagContainer& InInventoryGroups); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C7760(relative to base address)
		bool CanCraftFormula(AFortPlayerController* FortPC, AActor* CraftingObject, FName CraftingFormulaRow, TArray<FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft, FGameplayTagContainer& InInventoryGroups); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507C7504(relative to base address)
		void CancelCrafting(AFortPlayerController* Instigator, AActor* CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7507C7A4C(relative to base address)
		void CancelAllCrafting(AActor* CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
	};

}
