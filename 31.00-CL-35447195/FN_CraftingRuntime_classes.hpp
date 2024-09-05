#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CraftingRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CraftingRuntime.CraftingObjectBGA
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x68 (0x9F0 - 0x988)
	class ACraftingObjectBGA : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x988(0x8) UNKNOWN PROPERTY
		AFortInventory Inventory; // 0x990(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x998(0x18) UNKNOWN PROPERTY
		USphereComponent SphereComponent_InteractionRange; // 0x9B0(0x8)
		TWeakObjectPtr MenuWidget; // 0x9B8(0x20)
		UWidgetComponent WidgetComponent_PotContents; // 0x9D8(0x8)
		bool bShowCraftingUI; // 0x9E0(0x1)
		bool bSendEventMessageOnLocalInteract; // 0x9E1(0x1)
		bool bRunServerInteractionWhenSendingEventMessage; // 0x9E2(0x1)
		unsigned char UnknownData05_6[0x5]; // 0x9E3(0x5) UNKNOWN PROPERTY
		UStaticMeshComponent CraftingObjectMesh; // 0x9E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.CraftingObjectBGA");
			return ret;
		}

		void HandleInteractionRangeEndOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Flags: Native|Public 0x7FF414BFC898
		void HandleInteractionRangeBeginOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Native|Public|HasOutParms 0x7FF414BFC7B8
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

		void ToggleFreeCrafting(); // Flags: Final|Exec|Native|Public 0x7FF414BFCA58
		void StartSelfCrafting(FName FormulaName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BFC978
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
		unsigned char UnknownData10_6[0x1C]; // 0xDC(0x1C) UNKNOWN PROPERTY
		FCraftingObjectRepStateData CraftingObjectRepStateData; // 0xF8(0x18)
		TMap CraftingObjectServerStateData; // 0x110(0x50)
		FName LastCraftedItemFormulaRow; // 0x160(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		FString LastIngredientStringForAnalytics; // 0x168(0x10)
		FString LastFormulaStringForAnalytics; // 0x178(0x10)
		FString LastResultsStringForAnalytics; // 0x188(0x10)
		FGameplayAbilitySpecHandle WhileCraftingAbilitySpecHandle; // 0x198(0x4)
		FGameplayAbilitySpecHandle OwnerCraftingAbilitySpecHandle; // 0x19C(0x4)
		FGameplayTag CraftingObjectTag; // 0x1A0(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer CraftingObjectTags; // 0x1A8(0x20)
		FScalableFloat CraftingTimeLength; // 0x1C8(0x28)
		FScalableFloat ReadyTimeLength; // 0x1F0(0x28)
		FScalableFloat OverCraftingTimeLength; // 0x218(0x28)
		FScalableFloat ResettingTimeLength; // 0x240(0x28)
		FScalableFloat DefaultCraftingSpeedMultiplier; // 0x268(0x28)
		FName OverCraftingLootTierKey; // 0x290(0x4)
		bool bTakeItemsAtCraftingStart : 1; // 0x294:0(0x1)
		unsigned char UnknownData13_5[0x3]; // 0x295(0x3) UNKNOWN PROPERTY
		float DecayRate; // 0x298(0x4)
		bool bGiveIngredientsToCraftingObject : 1; // 0x29C:0(0x1)
		bool bGiveIngredientsToInstigator : 1; // 0x29C:1(0x1)
		unsigned char UnknownData14_5[0x3]; // 0x29D(0x3) UNKNOWN PROPERTY
		FVector IngredientSpawnOffset; // 0x2A0(0x18)
		bool bGiveToCraftingObject : 1; // 0x2B8:0(0x1)
		bool bGiveResultToInstigator : 1; // 0x2B8:1(0x1)
		unsigned char UnknownData15_5[0x7]; // 0x2B9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr OwnerCraftingAbility; // 0x2C0(0x20)
		TWeakObjectPtr WhileCraftingAbility; // 0x2E0(0x20)
		TWeakObjectPtr InstigatorWhileCraftingAbility; // 0x300(0x20)
		bool bScaleMultiCraftingTime; // 0x320(0x1)
		unsigned char UnknownData16_6[0x7]; // 0x321(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer CraftingFailedTags; // 0x328(0x20)
		unsigned char UnknownData17_6[0x118]; // 0x348(0x118) UNKNOWN PROPERTY
		FGameplayTagContainer IngredientsInventoryGroupTag; // 0x460(0x20)
		unsigned char UnknownData18_6[0x50]; // 0x480(0x50) UNKNOWN PROPERTY
		bool FreeCraftingEnabled; // 0x4D0(0x1)
		unsigned char UnknownData19_7[0x7]; // 0x4D1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.CraftingObjectComponent");
			return ret;
		}

		void OnRep_CraftingObjectTags(); // Flags: Final|Native|Private 0x7FF414031CF0
		void OnRep_CraftingObjectRepStateData(FCraftingObjectRepStateData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414031A90
		void HandlePickupCraftingItemPickedUp(AFortPickup Pickup, AFortPawn InteractingPawn); // Flags: Final|Native|Private 0x7FF4140319B0
		void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(FName& FormulaRowName, bool bIsCraftable); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140318D0
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

		void ServerStartCrafting(AActor CraftingObject, FName CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key, float OverriddenObjectStateLength); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414BFD3F8
		void ServerResumeCrafting(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414BFD318
		void ServerReportCraftingSuccess(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414BFD238
		void ServerPickupItemAndStartCrafting(AActor CraftingObject, AFortPickup Pickup, FName CraftingFormulaName, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414BFD158
		void ServerPauseCrafting(AActor CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414BFD078
		void ServerEjectItems(AActor CraftingObject); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414BFCF98
		void ServerClaimCraftingResults(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414BFCEB8
		void ServerCancelCrafting(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 0x7FF414BFCDD8
		void NotifyCraftingSuccess(AActor CraftingObject, FName& FormulaRowName, TArray& ConsumedIngredients, FCraftingMultiKey Key); // Flags: Final|Native|Public|HasOutParms 0x7FF414BFCCF8
		void ClientNotifyCraftingSuccess(AActor CraftingObject, FName FormulaRowName, TArray ConsumedIngredients, FCraftingMultiKey Key); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414BFCC18
		void ClientNotifyCraftingFailed(AActor CraftingObject, FGameplayTagContainer FailedReason, FCraftingMultiKey Key); // Flags: Net|Native|Event|Public|NetClient 0x7FF414BFCB38
	};


	// Class CraftingRuntime.FortGameStateComponent_Crafting
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1B0 (0x250 - 0xA0)
	class UFortGameStateComponent_Crafting : public UFortGameStateComponent	
	{
	public:
		FDataRegistryType CraftingFormulaRegistryType; // 0xA0(0x4)
		FDataRegistryType CraftingIngredientsUIDataRegistryType; // 0xA4(0x4)
		unsigned char UnknownData01_7[0x1A8]; // 0xA8(0x1A8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.FortGameStateComponent_Crafting");
			return ret;
		}

		void OnRep_CraftingResultsList(); // Flags: Final|Native|Protected 0x7FF414BFD5B8
		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: RequiredAPI|Native|Protected|HasOutParms 0x7FF414BFD4D8
	};


	// Class CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
	// Inherited from UFortPickupInteractOverrideComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xE0 - 0xC0)
	class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent	
	{
	public:
		UItemDefinitionBase LastPickupItemDef; // 0xC0(0x8)
		UItemDefinitionBase LastFocusedItemDef; // 0xC8(0x8)
		FName LastTargetFormulaName; // 0xD0(0x4)
		float ContextualCraftingInteractDuration; // 0xD4(0x4)
		TEnumAsByte CachedInteractionType; // 0xD8(0x1)
		TEnumAsByte CachedInteractionBeingAttempted; // 0xD9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY

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

		void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event); // Flags: Final|Native|Private|HasOutParms 0x7FF414BFD698
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

		void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable); // Flags: Final|Native|Private|HasOutParms 0x7FF414BFD778
	};


	// Class CraftingRuntime.FortContextualTutorial_CraftingTabOpen
	// Inherited from UFortContextualTutorial -> UObject
	// Size: 0x8 (0xF8 - 0xF0)
	class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen");
			return ret;
		}

		void HandleInventoryTabChanged(FName InventoryTabNameId); // Flags: Final|Native|Private 0x7FF414BFD938
		void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable); // Flags: Final|Native|Private|HasOutParms 0x7FF414BFD858
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

		void StartCrafting(AFortPlayerController Instigator, AActor CraftingObject, FName& CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key, float OverriddenCraftingLength); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFF8B8
		void ResumeCrafting(AFortPlayerController Instigator, AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFF7D8
		void ReportCraftingSuccess(AFortPlayerController Instigator, AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFF6F8
		void PickupItemAndStartCrafting(AFortPlayerController Instigator, AActor CraftingObject, AFortPickup Pickup, FName& CraftingFormulaName, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFF618
		void PauseCrafting(AFortPlayerController Instigator, AActor CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFF538
		bool IsValidIngredient(AFortPlayerController FortPC, AActor CraftingObject, UItemDefinitionBase ItemDef); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFF458
		bool IsFreeCraftingEnabled(AActor CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BFF378
		void GiveItemToCraftingObject(AFortPlayerController Instigator, AActor CraftingObject, FFortItemEntry& ItemEntryToGrant); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BFF298
		void GetValidIngredientsInInventory(AFortPlayerController FortPC, AActor CraftingObject, TArray& OutIngredients); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFF1B8
		void GetUIDataForCraftingIngredientTags(UObject WorldContextObject, FGameplayTagContainer& IngredientTags, TArray& OutItemDefs, TArray& OutIcons); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFF0D8
		float GetTimeToCraftRecipe(AActor CraftingObject, FName& CraftingFormulaName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFEFF8
		FName GetLastCraftedItemFormulaName(AActor CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFEF18
		void GetKnownCraftingFormulas(AFortPlayerController FortPC, AActor CraftingObject, TArray& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFEE38
		TArray GetIngredientsInCraftingObject(AActor CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFED58
		void GetCraftingResultsForRowName(UObject WorldContextObject, FName& CraftingFormulaRow, TArray& OutResults, int32_t NumToCraft); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFEC78
		FGameplayTagContainer GetCraftingObjectTags(AActor CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BFEB98
		float GetCraftingObjectPausedTime(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFEAB8
		float GetCraftingObjectCurrentCraftingStateTimeLeft(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFE9D8
		float GetCraftingObjectCurrentCraftingStateStartTime(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFE8F8
		float GetCraftingObjectCurrentCraftingStateEndTime(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFE818
		ECraftingObjectState GetCraftingObjectCraftingState(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BFE738
		UCraftingObjectComponent GetCraftingObjectComponent(AActor CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414BFE658
		TArray GetCraftingIngredients_TempItems(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFE578
		void GetCraftingFormulasForCraftingObject(AActor CraftingObject, TArray& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFE498
		FName GetCraftingFormulaNameBeingCrafted(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFE3B8
		bool GetCraftingFormulaIngredientRequirements(UObject WorldContextObject, FName& CraftingFormulaRow, TArray& OutIngredientRequirements); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFE2D8
		TArray GetCraftedResults_TempItems(AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFE1F8
		void GetAllValidIngredients(AFortPlayerController FortPC, AActor CraftingObject, TArray& OutIngredients); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFE118
		void GetAllCraftingFormulas(AFortPlayerController FortPC, AActor CraftingObject, TArray& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFE038
		void GetAllCraftableFormulas(AFortPlayerController FortPC, AActor CraftingObject, TArray& OutFormulas); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFDF58
		void EjectItems(AFortPlayerController Instigator, AActor CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFDE78
		void ClaimCraftingResults(AFortPlayerController Instigator, AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFDD98
		bool CanCraftFormulaWithAdditionalItems(AFortPlayerController FortPC, AActor CraftingObject, FName CraftingFormulaRow, TArray& AdditionalItems, TArray& OutIngredientStates, int32_t NumberToCraft, FGameplayTagContainer& InInventoryGroups); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFDCB8
		void CanCraftFormula(AFortPlayerController FortPC, AActor CraftingObject, FName CraftingFormulaRow); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BFDBD8
		void CancelCrafting(AFortPlayerController Instigator, AActor CraftingObject, FCraftingMultiKey Key); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFDAF8
		void CancelAllCrafting(AActor CraftingObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BFDA18
	};

}
