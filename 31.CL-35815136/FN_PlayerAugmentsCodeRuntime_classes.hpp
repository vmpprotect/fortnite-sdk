#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PlayerAugmentsCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PlayerAugmentsCodeRuntime.FortAthenaAIBotEvaluator_Augments
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UFortAthenaAIBotEvaluator_Augments : public UFortAthenaAIBotEvaluator	
	{
	public:
		FName AugmentStatusKeyName; // 0xA8(0x4)
		FName AugmentItemKeyName; // 0xAC(0x4)
		unsigned char UnknownData00_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortAthenaAIBotEvaluator_Augments");
			return ret;
		}
	};


	// Class PlayerAugmentsCodeRuntime.FortAthenaBTTask_Augments
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x18 (0x88 - 0x70)
	class UFortAthenaBTTask_Augments : public UBTTaskNode	
	{
	public:
		float MinSelectionTime; // 0x70(0x4)
		float MaxSelectionTime; // 0x74(0x4)
		FName AugmentStatusKeyName; // 0x78(0x4)
		FName AugmentItemKeyName; // 0x7C(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortAthenaBTTask_Augments");
			return ret;
		}
	};


	// Class PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x78 (0xBB8 - 0xB40)
	class UFortAugmentSelectionToolAbility : public UFortGameplayAbility	
	{
	public:
		UInputComponent* SelectionInputComponent; // 0xB40(0x8)
		FScalableFloat InputPriority; // 0xB48(0x28)
		int32_t NumChoices; // 0xB70(0x4)
		int32_t HighlightedChoiceIndex; // 0xB74(0x4)
		unsigned char UnknownData00_6[0x10]; // 0xB78(0x10) UNKNOWN PROPERTY
		FScalableFloat RerollHoldInputSeconds; // 0xB88(0x28)
		unsigned char UnknownData01_7[0x8]; // 0xBB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility");
			return ret;
		}

		void SetHighlightedChoiceIndex(int32_t NewChoiceIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506A2A88(relative to base address)
		void OnSelectedChoiceIndex(int32_t ChoiceIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRerollPressedAndCannotAfford(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHighlightSelectionUpdated(int32_t NewHighlightedChoiceIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x148 - 0xA8)
	class UFortBattleRoyalePlayerAugmentSystem : public UFortControllerComponent	
	{
	public:
		float ServerGrantingStartedTimestamp; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMatchAugmentsResetEvent; // 0xB0(0x10)
		bool bEnableAugmentCollectionUnlocking; // 0xC0(0x1)
		unsigned char UnknownData01_6[0xF]; // 0xC1(0xF) UNKNOWN PROPERTY
		FScalableFloat NumRollsForUnlock; // 0xD0(0x28)
		FScalableFloat EnableUnlocking; // 0xF8(0x28)
		FScalableFloat EnableBRAugmentSystem; // 0x120(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem");
			return ret;
		}

		void TryIncrementUnlockRollCount(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A2B3C(relative to base address)
		FFortAugmentPassiveUnlockResult TryClaimUnlock(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A2B08(relative to base address)
		void ResetMatchAugments(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A2878(relative to base address)
		void OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ServerGrantingStartedTimestamp(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A2818(relative to base address)
		void OnPossedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMatchAugmentsReset(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsBRAugmentSystemEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A2590(relative to base address)
		void HandlePossessedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A2374(relative to base address)
		float GetServerGrantingStartedTimestamp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE78(relative to base address)
		UFortBattleRoyalePlayerAugmentSystem Get(AController* Controller); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7506A1358(relative to base address)
		FFortAugmentPassiveUnlockResult ChooseUnlockFromList(TArray<FPlayerAugmentLockStatus>& LockedList); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7506A1158(relative to base address)
		void BP_GetAugmentPlayerPawn(EFortBRAugmentSystemCastResult& OutExec, AFortPlayerPawn* OutFortPlayerPawn); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A0F20(relative to base address)
		void BP_GetAugmentController(EFortBRAugmentSystemCastResult& OutExec, AController* OutController); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A0E28(relative to base address)
		void BlueprintAugmentLog(FString Message, EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506A1018(relative to base address)
		void AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A0D0C(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment
	// Inherited from UFortCollectionDataEntry -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortCollectionDataEntryPlayerAugment : public UFortCollectionDataEntry	
	{
	public:
		UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition; // 0x30(0x8)
		FText AdditionalDescription; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment");
			return ret;
		}
	};


	// Class PlayerAugmentsCodeRuntime.FortCollectionDataPlayerAugment
	// Inherited from UFortCollectionData -> UDataAsset -> UObject
	// Size: 0x0 (0x90 - 0x90)
	class UFortCollectionDataPlayerAugment : public UFortCollectionData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortCollectionDataPlayerAugment");
			return ret;
		}
	};


	// Class PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued
	// Inherited from UFortContextualTutorial -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UFortContextualTutorial_MultipleAugmentsQueued : public UFortContextualTutorial	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued");
			return ret;
		}

		void HandleBindCompletionTrigger(AFortPlayerControllerZone* FortPCZone); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A1F7C(relative to base address)
		void HandleBindActivationTrigger(AFortPlayerControllerZone* FortPCZone); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A1EFC(relative to base address)
		void CompletionEventCallback(bool bIsOpened, bool bViewingAugmentInventory); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A1294(relative to base address)
		void ActivationEventCallback(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A0784(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x540 (0x5E8 - 0xA8)
	class UFortControllerComponent_AugmentGrantingSystem : public UFortControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnCanSelectAugmentChanged; // 0xA8(0x10)
		FMulticastInlineDelegate OnSelectedAugmentForGrant; // 0xB8(0x10)
		FMulticastInlineDelegate OnAvailableAugmentsForGrantingUpdated; // 0xC8(0x10)
		FMulticastInlineDelegate OnAuthorityRequestAugmentChoices; // 0xD8(0x10)
		FMulticastInlineDelegate OnLocalReroll; // 0xE8(0x10)
		unsigned char UnknownData00_6[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnReplicateNumPendingAugmentsToGrant; // 0x118(0x10)
		UFortWeaponItemDefinition* AugmentSelectionModeItem; // 0x128(0x8)
		TWeakObjectPtr<UFortItemDefinition*> CachedResourceCurrencyOverride; // 0x130(0x8)
		UFortWorldItem* SelectionModeWorldItem; // 0x138(0x8)
		FScalableFloat Enabled; // 0x140(0x28)
		unsigned char UnknownData01_6[0x1]; // 0x168(0x1) UNKNOWN PROPERTY
		int8_t ReplicatedNumPendingAugmentsToGrant; // 0x169(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x16A(0x6) UNKNOWN PROPERTY
		TArray<FPlayerAugmentChoiceDatum> ReplicatedAugmentChoices; // 0x170(0x10)
		int8_t NumFreeRerolls; // 0x180(0x1)
		int8_t NumLockedSelectionChoices; // 0x181(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x182(0x6) UNKNOWN PROPERTY
		UInputComponent* PrimaryInputComponentWeaponMode; // 0x188(0x8)
		UInputComponent* PrimaryInputComponentBuildMode; // 0x190(0x8)
		UInputComponent* TemporaryInputComponent; // 0x198(0x8)
		FScalableFloat AugmentSelectInputPriority; // 0x1A0(0x28)
		FGameplayTagContainer SelectionBlockedPlayerTags; // 0x1C8(0x20)
		FGameplayTagContainer AugmentSelectInputDisablePlayerTags; // 0x1E8(0x20)
		unsigned char UnknownData04_6[0x28]; // 0x208(0x28) UNKNOWN PROPERTY
		TArray<FFortAugmentRerollCost> RerollCosts; // 0x230(0x10)
		FFortItemEntry SelectorItemEntry; // 0x240(0x1A8)
		FFortItemEntry LocalCachedPreviousWeapon; // 0x3E8(0x1A8)
		unsigned char UnknownData05_7[0x58]; // 0x590(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem");
			return ret;
		}

		void ServerRequestReroll(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E217D18(relative to base address)
		void ServerGrantAugment(UFortPlayerAugmentItemDefinition* ChosenAugmentDef); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E9C0428(relative to base address)
		void OnSelectedAugmentForGrantDelegate__DelegateSignature(UFortPlayerAugmentItemDefinition* SelectedAugment); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature(int8_t NumPendingAugmentsToGrant); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_SelectorItemEntry(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A2804(relative to base address)
		void OnRep_ReplicatedNumPendingAugmentsToGrant(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A27F0(relative to base address)
		void OnRep_ReplicatedAugmentChoices(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A27DC(relative to base address)
		void OnRep_NumLockedSelectionChoices(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A27C8(relative to base address)
		void OnRep_NumFreeRerolls(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A27B4(relative to base address)
		void OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMinigameStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A278C(relative to base address)
		void OnLocalUnequipAugmentSelectionPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLocalRerollDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLocalEquipAugmentSelectionPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFreeRerollsUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature(UFortControllerComponent_AugmentGrantingSystem* GrantingComponent); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature(TArray<UFortPlayerAugmentItemDefinition*>& IgnoreInRoll); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSelectionItemEquipped(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A25D0(relative to base address)
		bool IsSelectionChoicesLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A25B4(relative to base address)
		void HandleUnHolsteredEvent(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A257C(relative to base address)
		void HandleToggleFullscreenMap(bool bVisible); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A24FC(relative to base address)
		void HandlePossessedPawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A2438(relative to base address)
		void HandleHolsteredEvent(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A2338(relative to base address)
		void HandleChangedBuildMode(bool bEnteredBuildMode); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506A20C0(relative to base address)
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1CAC(relative to base address)
		int32_t GetNumFreeRerolls(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1C94(relative to base address)
		TArray GetAvailableAugmentsToGrant(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1880(relative to base address)
		UFortControllerComponent_AugmentGrantingSystem GetAugmentGrantingComponentFromController(AController* Controller); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7506A1688(relative to base address)
		void ClientSelectAvailableAugmentToGrant(UFortPlayerAugmentItemDefinition* ChosenAugmentDef); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A1214(relative to base address)
		void CanSelectAugmentChangedDelegate__DelegateSignature(bool bCanSelectAugment); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanReroll(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1134(relative to base address)
		void AuthoritySetAvailableAugmentChoices(TArray<FPlayerAugmentChoiceDatum>& AvailableAugmentsToGrant); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A0B58(relative to base address)
		void AuthorityResetAugmentData(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A0B44(relative to base address)
		void AuthorityRequestSelectionToolItemGrant(UObject* Instigator); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A0AD4(relative to base address)
		void AuthorityIncrementLockedSelectionChoices(int32_t NumLocksToAdd); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A0A44(relative to base address)
		void AuthorityGrantNewAugment(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A0A30(relative to base address)
		void AuthorityGrantFreeReroll(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A09FC(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.AugmentFuctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAugmentFuctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.AugmentFuctionLibrary");
			return ret;
		}

		UFortWorldItem GiveAugmentWithPreventDropping(UFortPlayerAugmentItemDefinition* ChosenAugmentDef, TScriptInterface<Class> InventoryOwner); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7506A1CDC(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB8 (0x160 - 0xA8)
	class UFortControllerComponent_AugmentUIEvents : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xA8(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAugmentSelectorHighlightedChoice; // 0xC8(0x10)
		FMulticastInlineDelegate OnAugmentStartedSelectionOfChoice; // 0xD8(0x10)
		FMulticastInlineDelegate OnAugmentSelectedByPointerEvent; // 0xE8(0x10)
		FMulticastInlineDelegate OnAugmentGrantingTimersFinishedForMatch; // 0xF8(0x10)
		FMulticastInlineDelegate OnAugmentGrantingTimersResetForMatch; // 0x108(0x10)
		FMulticastInlineDelegate AugmentHoldInputRerollChanged; // 0x118(0x10)
		FMulticastInlineDelegate OnAugmentToolViewSwap; // 0x128(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x138(0x18) UNKNOWN PROPERTY
		int32_t NumAugmentGrantRoundsForPlaylist; // 0x150(0x4)
		unsigned char UnknownData02_7[0xC]; // 0x154(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents");
			return ret;
		}

		void UpdatedTimerProgress(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A2B50(relative to base address)
		void SetNumGrantableAugmentsForPlaylist(int32_t NewNumRounds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void OnGrantTimerProgressUpdatedDelegate__DelegateSignature(float TimeRemaining, float TimePercentage); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentToolViewSwapDelegate__DelegateSignature(bool ViewingInventoryAugments); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature(int32_t ChoiceIndex); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature(bool bIsOpened, bool bViewingInventory); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature(int32_t ChoiceIndex); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentSelectedByPointerEvent__DelegateSignature(int32_t ChoiceIndex); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyGrantingTimersReset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A2778(relative to base address)
		void NotifyGrantingTimersFinished(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A2754(relative to base address)
		void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A1E38(relative to base address)
		void AugmentHoldInputRerollChangedDelegate__DelegateSignature(EAugmentHoldInputRerollState HoldState, float HoldDurationSeconds); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x118 (0x1C0 - 0xA8)
	class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent	
	{
	public:
		FScalableFloat Enabled; // 0xA8(0x28)
		FScalableFloat LockMissingCollectionAugmentsEnabled; // 0xD0(0x28)
		AFortPlayerControllerAthena* PlayerController; // 0xF8(0x8)
		UFortCollectionDataPlayerAugment* CollectionData; // 0x100(0x8)
		FPlayerAugmentsPersistenceData LivePlayerAugmentsPersistenceData; // 0x108(0x18)
		TSet<UFortPlayerAugmentItemDefinition*> AugmentsCollectedThisMatch; // 0x120(0x50)
		TArray<FReplicatedSharedPlayerAugment> ReplicatedSharedPlayerAugments; // 0x170(0x10)
		unsigned char UnknownData00_7[0x40]; // 0x180(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence");
			return ret;
		}

		void HandleMcpProfilesInitialized(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A234C(relative to base address)
		void HandleCollectionDataTableLoaded(TWeakObjectPtr<UFortCollectionsDataTable*> CollectionsDataTableSoftPtr); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A223C(relative to base address)
		void HandleCollectionDataLoaded(TWeakObjectPtr<UFortCollectionData*> BaseCollectionDataSoftPtr); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A2140(relative to base address)
		int32_t GetRollCountSinceLastRandomUnlock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1CC4(relative to base address)
		void GetLockStatusForAll(TArray<FPlayerAugmentLockStatus>& OutLockStatusArray); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1A74(relative to base address)
		FPlayerAugmentLockStatus GetLockStatus(UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A19BC(relative to base address)
		void GetLockedList(TArray<FPlayerAugmentLockStatus>& OutLockedList, bool bIncludeSharedAugments); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1B10(relative to base address)
		void GetCarryOverPlayerAugments(TArray<FCarryOverPlayerAugment>& OutCarryOverPlayerAugments); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506A1920(relative to base address)
		void AuthorityUnlockPlayerAugment(UFortPlayerAugmentItemDefinition* PlayerAugmentToUnlock); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A0DA8(relative to base address)
		void AuthoritySetRollCountSinceLastRandomUnlock(int32_t NewRollCount); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A0C8C(relative to base address)
		void AuthoritySetCarryOverPlayerAugments(TArray<FCarryOverPlayerAugment>& NewCarryOverPlayerAugments); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A0BF0(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager
	// Inherited from UFortGamestateComponent_DynamicRollTableManager -> UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x328 - 0x2D8)
	class UFortGamestateComponent_AugmentTableManager : public UFortGamestateComponent_DynamicRollTableManager	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x2D8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager");
			return ret;
		}
	};


	// Class PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentDynamicRollPlayerComponent
	// Inherited from UFortControllerComponent_DynamicRollPlayerComponent -> UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1A0 - 0x1A0)
	class UFortControllerComponent_AugmentDynamicRollPlayerComponent : public UFortControllerComponent_DynamicRollPlayerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentDynamicRollPlayerComponent");
			return ret;
		}
	};


	// Class PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment
	// Inherited from UFortMcpCollectionBase -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UFortMcpCollectionPlayerAugment : public UFortMcpCollectionBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment");
			return ret;
		}

		void MarkSeenForPlayer(AFortPlayerController* PlayerController, FGameplayTag VariantTag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7506A25F4(relative to base address)
		void AddToPlayerCollection(AFortPlayerController* PlayerController, FGameplayTag PlayerAugmentVariantTag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7506A0894(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortPlayerAugmentCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager");
			return ret;
		}

		void StartAugmentGrantingFlow(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetPlayerAugmentRollCountSinceLastUnlock(int32_t RollCount); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void ServerLogDynamicWeightsForPlayer(bool bVeryDetailedReport); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74C079284(relative to base address)
		void ResetAugmentGrantingToSeed(int32_t Seed); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void RemoveAugmentCount(FString AugmentName, int32_t RemoveCount); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74E56B058(relative to base address)
		void RemoveAugment(FString AugmentName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void RemoveAllAugmentsFromBots(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void RemoveAllAugments(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void LogPlayerAugmentsLockStatus(); // Flags: Final|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void GiveAugmentToBots(FString AugmentName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void GiveAugmentCount(FString AugmentName, int32_t AddCount); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74E56B058(relative to base address)
		void GiveAugment(FString AugmentName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void ForceSelectionAugments(FString AugmentNameFirst, FString AugmentNameSecond); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74E56A5C4(relative to base address)
		void CollectPlayerAugment(FString TagMatch); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|Const, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void CollectAllPlayerAugments(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
	// Inherited from UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAugmentListUpdated; // 0xB8(0x10)
		FScalableFloat EnableAugmentsFeature; // 0xC8(0x28)
		UClass* DynamicTagGEClass; // 0xF0(0x8)
		TMap<FPrimaryAssetId, FPlayerAugmentTrackedData> AugmentToRuntimeDataMap; // 0xF8(0x50)
		TArray<UFortPlayerAugmentItemDefinition*> ActiveAugments; // 0x148(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		TArray<FSquadMemberAugmentData> SquadAugments; // 0x160(0x10)
		TMap<FGameplayTag, double> RuntimeAugmentMatchDataCacheFloat; // 0x170(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem");
			return ret;
		}

		void SetAugmentMatchDataCacheFloat(FGameplayTag TargetAugmentCacheTag, double InData); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7506A288C(relative to base address)
		void OnRep_SquadAugments(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A2864(relative to base address)
		void OnRep_ActiveAugments(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A27A0(relative to base address)
		void OnAugmentListUpdatedEventDispatcher__DelegateSignature(UFortPlayerStateComponent_PlayerAugmentSystem* AugmentComponent); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePlayerPawnSpawned(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A2360(relative to base address)
		void HandleBotPlayerPawnSpawned(AAIController* Controller, AFortPawn* Pawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7506A1FFC(relative to base address)
		double GetAugmentMatchDataCacheFloat(EAugmentExecResult& OutExec, FGameplayTag TargetAugmentCacheTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A1714(relative to base address)
		UFortPlayerStateComponent_PlayerAugmentSystem GetAugmentComponentValidated(EAugmentExecResult& OutExec, AActor* PlayerContextActor); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506A151C(relative to base address)
		UFortPlayerStateComponent_PlayerAugmentSystem GetAugmentComponent(AActor* PlayerContextActor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7506A149C(relative to base address)
		TArray GetActiveAugments(AActor* Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7506A13E4(relative to base address)
		void ClientClearMatchAugmentDataCache(); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF7474A9F44(relative to base address)
	};

}
