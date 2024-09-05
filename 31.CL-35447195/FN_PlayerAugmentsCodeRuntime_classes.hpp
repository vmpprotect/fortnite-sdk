#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PlayerAugmentsCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

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
		UInputComponent SelectionInputComponent; // 0xB40(0x8)
		FScalableFloat InputPriority; // 0xB48(0x28)
		int32_t NumChoices; // 0xB70(0x4)
		int32_t HighlightedChoiceIndex; // 0xB74(0x4)
		unsigned char UnknownData02_6[0x10]; // 0xB78(0x10) UNKNOWN PROPERTY
		FScalableFloat RerollHoldInputSeconds; // 0xB88(0x28)
		unsigned char UnknownData03_7[0x8]; // 0xBB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility");
			return ret;
		}

		void SetHighlightedChoiceIndex(int32_t NewChoiceIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BD5FB8
		void OnSelectedChoiceIndex(int32_t ChoiceIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD5ED8
		void OnRerollPressedAndCannotAfford(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD5DF8
		void OnHoldRerollInputChanged(bool bIsPressed, bool bCompletedHold); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD5D18
		void OnHighlightSelectionUpdated(int32_t NewHighlightedChoiceIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414BD5C38
	};


	// Class PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x148 - 0xA8)
	class UFortBattleRoyalePlayerAugmentSystem : public UFortControllerComponent	
	{
	public:
		float ServerGrantingStartedTimestamp; // 0xA8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMatchAugmentsResetEvent; // 0xB0(0x10)
		bool bEnableAugmentCollectionUnlocking; // 0xC0(0x1)
		unsigned char UnknownData03_6[0xF]; // 0xC1(0xF) UNKNOWN PROPERTY
		FScalableFloat NumRollsForUnlock; // 0xD0(0x28)
		FScalableFloat EnableUnlocking; // 0xF8(0x28)
		FScalableFloat EnableBRAugmentSystem; // 0x120(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem");
			return ret;
		}

		void TryIncrementUnlockRollCount(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41402AA60
		FFortAugmentPassiveUnlockResult TryClaimUnlock(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41402A980
		void ResetMatchAugments(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41402A8A0
		void OnServerAugmentGrantTimestampReplicated(float ServerGrantStartTimestamp); // Flags: Event|Protected|BlueprintEvent 0x7FF41402A7C0
		void OnRep_ServerGrantingStartedTimestamp(); // Flags: Final|Native|Private 0x7FF41402A6E0
		void OnPossedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Event|Protected|BlueprintEvent 0x7FF41402A600
		void OnMatchAugmentsReset(); // Flags: Event|Protected|BlueprintEvent 0x7FF41402A520
		void OnBattleRoyaleMatchAugmentResetDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402A440
		bool IsBRAugmentSystemEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41402A360
		void HandlePossessedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Protected 0x7FF41402A280
		float GetServerGrantingStartedTimestamp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41402A1A0
		UFortBattleRoyalePlayerAugmentSystem Get(AController Controller); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF41402A0C0
		FFortAugmentPassiveUnlockResult ChooseUnlockFromList(TArray& LockedList); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414029E60
		void BP_GetAugmentPlayerPawn(EFortBRAugmentSystemCastResult& OutExec, AFortPlayerPawn& OutFortPlayerPawn); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414029D80
		void BP_GetAugmentController(EFortBRAugmentSystemCastResult& OutExec, AController& OutController); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414029C38
		void BlueprintAugmentLog(FString Message, EBattleRoyaleBPAugmentLogVerbosity Verbosity, bool bAutonomousProxyOnly); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414029AF0
		void AuthoritySetServerGrantingStartedTimestamp(float ServerTimestamp); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414029A10
	};


	// Class PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment
	// Inherited from UFortCollectionDataEntry -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortCollectionDataEntryPlayerAugment : public UFortCollectionDataEntry	
	{
	public:
		UFortPlayerAugmentItemDefinition PlayerAugmentItemDefinition; // 0x30(0x8)
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

		void HandleBindCompletionTrigger(AFortPlayerControllerZone FortPCZone); // Flags: Final|Native|Protected 0x7FF414BD6338
		void HandleBindActivationTrigger(AFortPlayerControllerZone FortPCZone); // Flags: Final|Native|Protected 0x7FF414BD6258
		void CompletionEventCallback(bool bIsOpened, bool bViewingAugmentInventory); // Flags: Final|Native|Protected 0x7FF414BD6178
		void ActivationEventCallback(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Protected 0x7FF414BD6098
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
		unsigned char UnknownData06_6[0x20]; // 0xF8(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnReplicateNumPendingAugmentsToGrant; // 0x118(0x10)
		UFortWeaponItemDefinition AugmentSelectionModeItem; // 0x128(0x8)
		TWeakObjectPtr CachedResourceCurrencyOverride; // 0x130(0x8)
		UFortWorldItem SelectionModeWorldItem; // 0x138(0x8)
		FScalableFloat Enabled; // 0x140(0x28)
		unsigned char UnknownData07_6[0x1]; // 0x168(0x1) UNKNOWN PROPERTY
		int8_t ReplicatedNumPendingAugmentsToGrant; // 0x169(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x16A(0x6) UNKNOWN PROPERTY
		TArray ReplicatedAugmentChoices; // 0x170(0x10)
		int8_t NumFreeRerolls; // 0x180(0x1)
		int8_t NumLockedSelectionChoices; // 0x181(0x1)
		unsigned char UnknownData09_6[0x6]; // 0x182(0x6) UNKNOWN PROPERTY
		UInputComponent PrimaryInputComponentWeaponMode; // 0x188(0x8)
		UInputComponent PrimaryInputComponentBuildMode; // 0x190(0x8)
		UInputComponent TemporaryInputComponent; // 0x198(0x8)
		FScalableFloat AugmentSelectInputPriority; // 0x1A0(0x28)
		FGameplayTagContainer SelectionBlockedPlayerTags; // 0x1C8(0x20)
		FGameplayTagContainer AugmentSelectInputDisablePlayerTags; // 0x1E8(0x20)
		unsigned char UnknownData10_6[0x28]; // 0x208(0x28) UNKNOWN PROPERTY
		TArray RerollCosts; // 0x230(0x10)
		FFortItemEntry SelectorItemEntry; // 0x240(0x1A8)
		FFortItemEntry LocalCachedPreviousWeapon; // 0x3E8(0x1A8)
		unsigned char UnknownData11_7[0x58]; // 0x590(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem");
			return ret;
		}

		void ServerRequestReroll(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF41402CB80
		void ServerGrantAugment(UFortPlayerAugmentItemDefinition ChosenAugmentDef); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer 0x7FF41402CAA0
		void OnSelectedAugmentForGrantDelegate__DelegateSignature(UFortPlayerAugmentItemDefinition SelectedAugment); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402C9C0
		void OnReplicateNumPendingAugmentsToGrantDelegate__DelegateSignature(int8_t NumPendingAugmentsToGrant); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402C8E0
		void OnRep_SelectorItemEntry(); // Flags: Final|Native|Private 0x7FF41402C800
		void OnRep_ReplicatedNumPendingAugmentsToGrant(); // Flags: Final|Native|Private 0x7FF41402C720
		void OnRep_ReplicatedAugmentChoices(); // Flags: Final|Native|Private 0x7FF41402C640
		void OnRep_NumLockedSelectionChoices(); // Flags: Final|Native|Private 0x7FF41402C560
		void OnRep_NumFreeRerolls(); // Flags: Final|Native|Private 0x7FF41402C480
		void OnNumLockedSelectionChoicesUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402C3A0
		void OnMinigameStarted(); // Flags: Final|Native|Protected 0x7FF41402C2C0
		void OnLocalUnequipAugmentSelectionPressed(); // Flags: Event|Protected|BlueprintEvent 0x7FF41402C1E0
		void OnLocalRerollDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402C100
		void OnLocalEquipAugmentSelectionPressed(); // Flags: Event|Protected|BlueprintEvent 0x7FF41402C020
		void OnFreeRerollsUpdatedDelegate__DelegateSignature(int32_t NewNumFreeRerolls); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402BF40
		void OnAvailableAugmentsForGrantingUpdatedDelegate__DelegateSignature(UFortControllerComponent_AugmentGrantingSystem GrantingComponent); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402BE60
		void OnAuthorityRequestAugmentChoicesDelegate__DelegateSignature(TArray& IgnoreInRoll); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF41402BD80
		bool IsSelectionItemEquipped(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41402BCA0
		bool IsSelectionChoicesLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41402BBC0
		void HandleUnHolsteredEvent(); // Flags: Final|Native|Protected 0x7FF41402BAE0
		void HandleToggleFullscreenMap(bool bVisible); // Flags: Final|Native|Private 0x7FF41402BA00
		void HandlePossessedPawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Private 0x7FF41402B920
		void HandleHolsteredEvent(); // Flags: Final|Native|Protected 0x7FF41402B840
		void HandleChangedBuildMode(bool bEnteredBuildMode); // Flags: Final|Native|Protected 0x7FF41402B760
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41402B680
		int32_t GetNumFreeRerolls(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41402B5A0
		TArray GetAvailableAugmentsToGrant(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41402B4C0
		UFortControllerComponent_AugmentGrantingSystem GetAugmentGrantingComponentFromController(AController Controller); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF41402B3E0
		void ClientSelectAvailableAugmentToGrant(UFortPlayerAugmentItemDefinition ChosenAugmentDef); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41402B300
		void CanSelectAugmentChangedDelegate__DelegateSignature(bool bCanSelectAugment); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402B220
		bool CanReroll(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41402B140
		void AuthoritySetAvailableAugmentChoices(TArray& AvailableAugmentsToGrant); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF41402AFA0
		void AuthorityResetAugmentData(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41402AEC0
		void AuthorityRequestSelectionToolItemGrant(UObject Instigator); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41402ADE0
		void AuthorityIncrementLockedSelectionChoices(int32_t NumLocksToAdd); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41402AD00
		void AuthorityGrantNewAugment(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41402AC20
		void AuthorityGrantFreeReroll(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF41402AB40
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

		UFortWorldItem GiveAugmentWithPreventDropping(UFortPlayerAugmentItemDefinition ChosenAugmentDef, TScriptInterface InventoryOwner); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BD6418
	};


	// Class PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB8 (0x160 - 0xA8)
	class UFortControllerComponent_AugmentUIEvents : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData03_3[0x20]; // 0xA8(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAugmentSelectorHighlightedChoice; // 0xC8(0x10)
		FMulticastInlineDelegate OnAugmentStartedSelectionOfChoice; // 0xD8(0x10)
		FMulticastInlineDelegate OnAugmentSelectedByPointerEvent; // 0xE8(0x10)
		FMulticastInlineDelegate OnAugmentGrantingTimersFinishedForMatch; // 0xF8(0x10)
		FMulticastInlineDelegate OnAugmentGrantingTimersResetForMatch; // 0x108(0x10)
		FMulticastInlineDelegate AugmentHoldInputRerollChanged; // 0x118(0x10)
		FMulticastInlineDelegate OnAugmentToolViewSwap; // 0x128(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x138(0x18) UNKNOWN PROPERTY
		int32_t NumAugmentGrantRoundsForPlaylist; // 0x150(0x4)
		unsigned char UnknownData05_7[0xC]; // 0x154(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents");
			return ret;
		}

		void UpdatedTimerProgress(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41402D8E8
		void SetNumGrantableAugmentsForPlaylist(int32_t NewNumRounds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41402D808
		void OnGrantTimerProgressUpdatedDelegate__DelegateSignature(float TimeRemaining, float TimePercentage); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402D728
		void OnAugmentToolViewSwapDelegate__DelegateSignature(bool ViewingInventoryAugments); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402D648
		void OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature(int32_t ChoiceIndex); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402D568
		void OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature(bool bIsOpened, bool bViewingInventory); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402D488
		void OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature(int32_t ChoiceIndex); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402D3A8
		void OnAugmentSelectedByPointerEvent__DelegateSignature(int32_t ChoiceIndex); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402D2C8
		void OnAugmentGrantingTimersResetForMatchDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402D1E8
		void OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402D108
		void NotifyGrantingTimersReset(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41402D028
		void NotifyGrantingTimersFinished(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41402CF48
		void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41402CE68
		void AugmentHoldInputRerollChangedDelegate__DelegateSignature(EAugmentHoldInputRerollState HoldState, float HoldDurationSeconds); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402CD20
	};


	// Class PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x118 (0x1C0 - 0xA8)
	class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent	
	{
	public:
		FScalableFloat Enabled; // 0xA8(0x28)
		FScalableFloat LockMissingCollectionAugmentsEnabled; // 0xD0(0x28)
		AFortPlayerControllerAthena PlayerController; // 0xF8(0x8)
		UFortCollectionDataPlayerAugment CollectionData; // 0x100(0x8)
		FPlayerAugmentsPersistenceData LivePlayerAugmentsPersistenceData; // 0x108(0x18)
		TSet AugmentsCollectedThisMatch; // 0x120(0x50)
		TArray ReplicatedSharedPlayerAugments; // 0x170(0x10)
		unsigned char UnknownData01_7[0x40]; // 0x180(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence");
			return ret;
		}

		void HandleMcpProfilesInitialized(); // Flags: Final|Native|Private 0x7FF414BD6DB8
		void HandleCollectionDataTableLoaded(TWeakObjectPtr CollectionsDataTableSoftPtr); // Flags: Final|Native|Private 0x7FF414BD6CD8
		void HandleCollectionDataLoaded(TWeakObjectPtr BaseCollectionDataSoftPtr); // Flags: Final|Native|Private 0x7FF414BD6BF8
		int32_t GetRollCountSinceLastRandomUnlock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BD6B18
		void GetLockStatusForAll(TArray& OutLockStatusArray); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BD6A38
		FPlayerAugmentLockStatus GetLockStatus(UFortPlayerAugmentItemDefinition PlayerAugmentItemDefinition); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BD6958
		void GetLockedList(TArray& OutLockedList, bool bIncludeSharedAugments); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BD6878
		void GetCarryOverPlayerAugments(TArray& OutCarryOverPlayerAugments); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414BD6798
		void AuthorityUnlockPlayerAugment(UFortPlayerAugmentItemDefinition PlayerAugmentToUnlock); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BD66B8
		void AuthoritySetRollCountSinceLastRandomUnlock(int32_t NewRollCount); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414BD65D8
		void AuthoritySetCarryOverPlayerAugments(TArray& NewCarryOverPlayerAugments); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BD64F8
	};


	// Class PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager
	// Inherited from UFortGamestateComponent_DynamicRollTableManager -> UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x328 - 0x2D8)
	class UFortGamestateComponent_AugmentTableManager : public UFortGamestateComponent_DynamicRollTableManager	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x2D8(0x50) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x10]; // 0x98(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment");
			return ret;
		}

		void MarkSeenForPlayer(AFortPlayerController PlayerController, FGameplayTag VariantTag); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BD6F78
		void AddToPlayerCollection(AFortPlayerController PlayerController, FGameplayTag PlayerAugmentVariantTag); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BD6E98
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

		void StartAugmentGrantingFlow(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD7C98
		void SetPlayerAugmentRollCountSinceLastUnlock(int32_t RollCount); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD7BB8
		void ServerLogDynamicWeightsForPlayer(bool bVeryDetailedReport); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD7AD8
		void ResetAugmentGrantingToSeed(int32_t Seed); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD79F8
		void RemoveAugmentCount(FString AugmentName, int32_t RemoveCount); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD7918
		void RemoveAugment(FString AugmentName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD7838
		void RemoveAllAugmentsFromBots(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD7758
		void RemoveAllAugments(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD7678
		void LogPlayerAugmentsLockStatus(); // Flags: Final|Exec|Native|Public|BlueprintCallable 0x7FF414BD7598
		void GiveAugmentToBots(FString AugmentName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD74B8
		void GiveAugmentCount(FString AugmentName, int32_t AddCount); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD73D8
		void GiveAugment(FString AugmentName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD72F8
		void ForceSelectionAugments(FString AugmentNameFirst, FString AugmentNameSecond); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414BD7218
		void CollectPlayerAugment(FString TagMatch); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 0x7FF414BD7138
		void CollectAllPlayerAugments(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public|Const 0x7FF414BD7058
	};


	// Class PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
	// Inherited from UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAugmentListUpdated; // 0xB8(0x10)
		FScalableFloat EnableAugmentsFeature; // 0xC8(0x28)
		UClass DynamicTagGEClass; // 0xF0(0x8)
		TMap AugmentToRuntimeDataMap; // 0xF8(0x50)
		TArray ActiveAugments; // 0x148(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		TArray SquadAugments; // 0x160(0x10)
		TMap RuntimeAugmentMatchDataCacheFloat; // 0x170(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem");
			return ret;
		}

		void SetAugmentMatchDataCacheFloat(FGameplayTag TargetAugmentCacheTag, double InData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41402E2F0
		void OnRep_SquadAugments(); // Flags: Final|Native|Private 0x7FF41402E210
		void OnRep_ActiveAugments(); // Flags: Final|Native|Private 0x7FF41402E130
		void OnAugmentListUpdatedEventDispatcher__DelegateSignature(UFortPlayerStateComponent_PlayerAugmentSystem AugmentComponent); // Flags: MulticastDelegate|Public|Delegate 0x7FF41402E050
		void HandlePlayerPawnSpawned(); // Flags: Final|Native|Private 0x7FF41402DF70
		void HandleBotPlayerPawnSpawned(AAIController Controller, AFortPawn Pawn); // Flags: Final|Native|Private 0x7FF41402DE90
		double GetAugmentMatchDataCacheFloat(EAugmentExecResult& OutExec, FGameplayTag TargetAugmentCacheTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41402DDB0
		UFortPlayerStateComponent_PlayerAugmentSystem GetAugmentComponentValidated(EAugmentExecResult& OutExec, AActor PlayerContextActor); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF41402DC68
		UFortPlayerStateComponent_PlayerAugmentSystem GetAugmentComponent(AActor PlayerContextActor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF41402DB88
		TArray GetActiveAugments(AActor Actor); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF41402DAA8
		void ClientClearMatchAugmentDataCache(); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF41402D9C8
	};

}
