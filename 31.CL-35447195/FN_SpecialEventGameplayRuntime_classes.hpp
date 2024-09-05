#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpecialEventGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x40 (0x378 - 0x338)
	class AFortAthenaMutator_SpecialEventTODM : public AFortAthenaMutator	
	{
	public:
		TArray PhaseDataArray; // 0x338(0x10)
		ASpecialEventScript SpecialEventScript; // 0x348(0x8)
		int32_t PhaseIndexInProgress; // 0x350(0x4)
		int32_t SubphaseIndexInProgress; // 0x354(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x358(0x8) UNKNOWN PROPERTY
		TScriptInterface SpawnedTODM; // 0x360(0x10)
		bool bDebug; // 0x370(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x371(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM");
			return ret;
		}

		void OnPhaseActivated(ASpecialEventScript InSpecialEventScript, ASpecialEventPhase InSpecialEventPhase); // Flags: Final|Native|Private 0x7FF414D1C6B8
	};


	// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEventTODM
	// Inherited from UFortCheatManager_Coupled -> UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UFortCheatManager_SpecialEventTODM : public UFortCheatManager_Coupled	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEventTODM");
			return ret;
		}

		void SpecialEventTODM_ToggleDebug(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D1C798
	};


	// Class SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
	// Inherited from UFortCheatManager_Coupled -> UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UFortCheatManager_DestroyActorsAndComponents : public UFortCheatManager_Coupled	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents");
			return ret;
		}

		void DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(FString TagString, bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D1C958
		void DestroyActorsAndComponentsMutator_ListActorComponents(FString InActorName); // Flags: Final|Exec|Native|Public|Const 0x7FF414D1C878
	};


	// Class SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x30 (0x368 - 0x338)
	class AFortAthenaMutator_DestroyActorsAndComponents : public AFortAthenaMutator	
	{
	public:
		TArray ActorDefinitions; // 0x338(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x348(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents");
			return ret;
		}

		void SetActorDefinitionsEnabled(FGameplayTagContainer& InTags, bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D1CDB8
		void PermanentlyDisableActorDefinitions(FGameplayTagContainer& InTags); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D1CCD8
		void OnTrackedActorDestroyed(AActor DestroyedActor); // Flags: Final|Native|Private 0x7FF414D1CBF8
		void OnRep_ActorDefinitions(TArray& OldActorDefinitions); // Flags: Final|Native|Private|HasOutParms 0x7FF414D1CB18
		void OnActorSpawned(AActor Actor); // Flags: Final|Native|Private 0x7FF414D1CA38
	};


	// Class SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
	// Inherited from UFortCheatManager_Coupled -> UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy");
			return ret;
		}

		void FakeKillRelevancyTestAlgorithm(int32_t NumPlayers, FString MaxPlayersRemainingAfterPhases, int32_t MinSquadSize, int32_t MaxSquadSize, int32_t Iterations, int32_t LogVerbosity); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D1D218
		void FakeKillRelevancyStartNextWave(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D1D138
		void FakeKillRelevancySetUpPhase(int32_t MaxPlayersRemaining, FString ReasonGameplayTagString, int32_t NumWaves, float RelevancyDelay); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D1D058
		void FakeKillRelevancyReset(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D1CF78
		void FakeKillRelevancyDebug(float TextScale); // Flags: Final|Exec|Native|Public 0x7FF414D1CE98
	};


	// Class SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x188 (0x230 - 0xA8)
	class UFortControllerComponent_FakeKillRelevancy : public UFortControllerComponent	
	{
	public:
		FFakeKillRelevancyPlayerDataArray PlayerDataArray; // 0xA8(0x120)
		TMap ClientPlayerStateKillStepMap; // 0x1C8(0x50)
		char ResetCounter; // 0x218(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x219(0x7) UNKNOWN PROPERTY
		TArray DebugSupergroupPlayerStates; // 0x220(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy");
			return ret;
		}

		void ResetRelevancy(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected 0x7FF414D1D838
		void PlayKillEffects(FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D1D758
		void OnRep_ResetCounter(); // Flags: Final|Native|Private 0x7FF414D1D678
		void OnKillEffectsPlayed(AFortPlayerStateAthena PlayerState); // Flags: Final|BlueprintCosmetic|Native|Protected|BlueprintCallable 0x7FF414D1D598
		FVector GetDeathLocation(AFortPlayerStateAthena PlayerState); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D1D4B8
		void CancelKillEffectsOnServer(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 0x7FF414D1D3D8
		void CancelKillEffectsOnClient(TArray& PlayerStates); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D1D2F8
	};


	// Class SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
	// Inherited from AFortAthenaMutator_SpecialRelevancy -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x60 (0x5F0 - 0x590)
	class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy	
	{
	public:
		UClass FakeKillControllerComponentClass; // 0x590(0x8)
		TArray RelevancyPhaseDataArray; // 0x598(0x10)
		int32_t PhaseNum; // 0x5A8(0x4)
		unsigned char UnknownData01_7[0x44]; // 0x5AC(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy");
			return ret;
		}

		void StartNextKillWave(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D1DBB8
		void SetUpKillPhase(int32_t MaxPlayersRemaining, FGameplayTag& Reason, int32_t NumWaves, float RelevancyDelay); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D1DAD8
		void ResetRelevancy(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D1D9F8
		void EndWave(int32_t EndPhaseNum, int32_t WaveNum); // Flags: Final|Native|Private 0x7FF414D1D918
	};


	// Class SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x348 - 0x338)
	class AFortAthenaMutator_LoadGameFeature : public AFortAthenaMutator	
	{
	public:
		FString GameFeatureToLoad; // 0x338(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature");
			return ret;
		}

		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D1DC98
	};


	// Class SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x348 - 0x338)
	class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator	
	{
	public:
		TArray AllowedGameFeatures; // 0x338(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures");
			return ret;
		}

		void OnPlaylistDataReady(AFortGameStateAthena GameState, UFortPlaylist Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D1DD78
	};


	// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
	// Inherited from UFortCheatManager_Coupled -> UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x38 - 0x38)
	class UFortCheatManager_SpecialEvent : public UFortCheatManager_Coupled	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent");
			return ret;
		}

		void UnloadTerrainMaps(FName MapTag); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1F358
		void ToggleDisableParachutes(bool bIsDisabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1F278
		void TeleportAllPlayers(int32_t SafeZoneIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1F198
		void StartEventScript(int32_t InStartingIndex, float SequenceTimeOffset); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1F0B8
		void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z); // Flags: Final|Exec|Native|Protected 0x7FF414D1EFD8
		void SpecialEventGameUserSettings_ClearDataForAllPlayers(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1EEF8
		void SpecialEventClearAdditionalViewpoint(); // Flags: Final|Exec|Native|Protected 0x7FF414D1EE18
		void ShrinkSafeZone(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1ED38
		void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1EC58
		void SetMatchTime(int32_t NewMatchTime); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1EB78
		void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1EA98
		void SetIsSimulatingDamage(bool bIsSimulating); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E9B8
		void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E8D8
		void SendToNightNight(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E7F8
		void ResumeWinCondition(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E718
		void ResetWinConditionProgressToZero(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E638
		void ResetWinCondition(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E558
		void ResetSpecialEventAircraft(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E478
		void ResetMatchTimeToPrevious(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E398
		void PlacePlayersInAircraft(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E2B8
		void PauseWinCondition(bool bLockScores); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E1D8
		void CloseParachutes(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E0F8
		void ChangeWinCondition(float NewGoalScore); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1E018
		void AutobalanceTargetScore(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1DF38
		void AddCSVEvent(FString CSVEventName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected 0x7FF414D1DE58
	};


	// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x470 (0x7A8 - 0x338)
	class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator	
	{
	public:
		FMulticastInlineDelegate TeleportAllPlayersFinished; // 0x338(0x10)
		FMulticastInlineDelegate OnPawnLoaded; // 0x348(0x10)
		FMulticastInlineDelegate OnInitController; // 0x358(0x10)
		FMulticastInlineDelegate OnResumeGame; // 0x368(0x10)
		FMulticastInlineDelegate OnSpecialClientEvent; // 0x378(0x10)
		FMulticastInlineDelegate OnHandleLogout; // 0x388(0x10)
		FMulticastInlineDelegate OnClientInitialLoadingFinished; // 0x398(0x10)
		unsigned char UnknownData21_6[0x68]; // 0x3A8(0x68) UNKNOWN PROPERTY
		bool bPlayersAreInvincible; // 0x410(0x1)
		unsigned char UnknownData22_6[0x27]; // 0x411(0x27) UNKNOWN PROPERTY
		int32_t MinimumScoreBumpForAutomadeGoal; // 0x438(0x4)
		unsigned char UnknownData23_6[0x4]; // 0x43C(0x4) UNKNOWN PROPERTY
		TArray ScoreBrackets; // 0x440(0x10)
		bool bEnforceInfiniteSafeZonePhase; // 0x450(0x1)
		unsigned char UnknownData24_6[0x3]; // 0x451(0x3) UNKNOWN PROPERTY
		FName WarmupIslandPlayerStartTag; // 0x454(0x4)
		bool bAllowInventoryOpen; // 0x458(0x1)
		unsigned char UnknownData25_6[0x7]; // 0x459(0x7) UNKNOWN PROPERTY
		FScalableFloat bAllowFullScreenMap; // 0x460(0x28)
		bool bShouldClearFrontEndMapMarkers; // 0x488(0x1)
		bool bBlockTeamIndicators; // 0x489(0x1)
		unsigned char UnknownData26_6[0x2]; // 0x48A(0x2) UNKNOWN PROPERTY
		int32_t ForceDisplaySquadInfoDuringGamePhases; // 0x48C(0x4)
		bool bAllowSquadListLocalPlayerInSplitscreen; // 0x490(0x1)
		unsigned char UnknownData27_6[0x7]; // 0x491(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer UIToHideDuringSpecialEvent; // 0x498(0x20)
		FGameplayTagContainer UIToHideWhenInInfiniteWarmup; // 0x4B8(0x20)
		FGameplayTagContainer ClientEventsThatUnhideHiddenWhileLoadingHUDElements; // 0x4D8(0x20)
		bool bSkipPostGameScreens; // 0x4F8(0x1)
		bool bForceGarbageCollectionAfterUnloadOnServer; // 0x4F9(0x1)
		bool bForceGarbageCollectionAfterUnloadOnClient; // 0x4FA(0x1)
		bool bFullPurgeGC; // 0x4FB(0x1)
		unsigned char UnknownData28_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		AFortAthenaAircraft EventAircraft; // 0x500(0x8)
		FAircraftFlightInfo EventAircraftInfo; // 0x508(0x48)
		UClass EventAircraftClass; // 0x550(0x8)
		bool bDisableHUD; // 0x558(0x1)
		char GameResumed; // 0x559(0x1)
		unsigned char UnknownData29_6[0x6]; // 0x55A(0x6) UNKNOWN PROPERTY
		FVector AdditionalViewpoint; // 0x560(0x18)
		bool bParachutesDisabled; // 0x578(0x1)
		unsigned char UnknownData30_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		FString LastCSVEventName; // 0x580(0x10)
		bool bCanStreamBuildingFoundationsIn; // 0x590(0x1)
		unsigned char UnknownData31_6[0x3]; // 0x591(0x3) UNKNOWN PROPERTY
		int32_t AllPlayerTeleportedCount; // 0x594(0x4)
		FFortDelayRTMMData DelayPlayersFromReturningToLobbyData; // 0x598(0x10)
		FName NamedWeightForContainerLootRoll; // 0x5A8(0x4)
		float WeightForContainerLootRoll; // 0x5AC(0x4)
		unsigned char UnknownData32_6[0x30]; // 0x5B0(0x30) UNKNOWN PROPERTY
		TArray SpecialEventEmoteData; // 0x5E0(0x10)
		FGameplayTagContainer BlockedNativeActions; // 0x5F0(0x20)
		EFortItemType DesiredQuickbarItemTypeAfterRemove; // 0x610(0x1)
		unsigned char UnknownData33_6[0x7]; // 0x611(0x7) UNKNOWN PROPERTY
		UInputComponent SpecialEventsInputComponent; // 0x618(0x8)
		bool bLockingOnFocalPoint; // 0x620(0x1)
		unsigned char UnknownData34_6[0x7]; // 0x621(0x7) UNKNOWN PROPERTY
		TArray SpecialEventOverrideParts; // 0x628(0x10)
		FFortSpecialEventGEData GameplayEffectToApplyOnSwapToDefault; // 0x638(0x10)
		TMap OverridePartsArrayIndexMap; // 0x648(0x50)
		TArray GameplayEffectsToApplyOnLogin; // 0x698(0x10)
		UClass ControllerComponentClassOverride; // 0x6A8(0x8)
		TArray TerrainMapsToUnload; // 0x6B0(0x10)
		unsigned char UnknownData35_6[0x10]; // 0x6C0(0x10) UNKNOWN PROPERTY
		TArray UnhandledPlayerControllers; // 0x6D0(0x10)
		TArray HLODActorsToHideNames; // 0x6E0(0x10)
		bool bForceAllowCloth; // 0x6F0(0x1)
		unsigned char UnknownData36_6[0x1]; // 0x6F1(0x1) UNKNOWN PROPERTY
		bool bManageBackfill; // 0x6F2(0x1)
		unsigned char UnknownData37_6[0x1]; // 0x6F3(0x1) UNKNOWN PROPERTY
		int32_t PlayerCountToTriggerBackfill; // 0x6F4(0x4)
		bool bWaitForPlayerCountToTriggerBackfill; // 0x6F8(0x1)
		unsigned char UnknownData38_6[0x3]; // 0x6F9(0x3) UNKNOWN PROPERTY
		float UpdateBackfillStatusTime; // 0x6FC(0x4)
		unsigned char UnknownData39_6[0x10]; // 0x700(0x10) UNKNOWN PROPERTY
		bool bServerHasBackfillActive; // 0x710(0x1)
		bool bCanToggleCursorModeInStasis; // 0x711(0x1)
		unsigned char UnknownData40_6[0x6]; // 0x712(0x6) UNKNOWN PROPERTY
		FScalableFloat MannequinRecentlyRenderedCheckToleranceValue; // 0x718(0x28)
		TArray SpecialEventMannequins; // 0x740(0x10)
		TArray ActorSpawnDelegateClasses; // 0x750(0x10)
		unsigned char UnknownData41_7[0x48]; // 0x760(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent");
			return ret;
		}

		void WarmUpIslandUpdated(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D22ED8
		void UpdateBackfillStatus(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414D22DF8
		void UnloadTerrainMaps(FGameplayTag& MapTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D22D18
		void ToggleHUDs(bool bHide); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D22C38
		void ToggleDisableWeapons(bool bDisableWeapons); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D22B58
		void ToggleDisableParachutes(bool bDisable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D22A78
		void ToggleAllPlayersInvincibility(bool bInvincible); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D22998
		void TeleportAllPlayers(FGameplayTagContainer EventTags, int32_t TeleportsPerFrame, int32_t SafeZoneIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D228B8
		void SwapBodyParts(int32_t ArrayIndex, AFortPlayerController FortPC); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D227D8
		void StartSafeZoneOverrideForEvent(int32_t SafeZoneIndexForEvent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D226F8
		void ShrinkSafeZone(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D22618
		void SetWeightForContainerLootRoll(float Weight); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D22538
		void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D22458
		void SetNamedWeightForContainerLootRoll(FName WeightName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D22378
		void SetMatchTime(int32_t NewMatchTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D22298
		void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D221B8
		void SetIsSimulatingDamage(bool bIsSimulating); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D220D8
		void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D21FF8
		void SetCanStreamBuildingFoundationsIn(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D21F18
		void SetAdditionalViewpoint(FVector WorldLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D21E38
		void SendToNightNight(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D21D58
		void ResumeWinCondition(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D21C78
		void ResetWinConditionProgressToZero(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D21B98
		void ResetWinCondition(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D21AB8
		void ResetSpecialEventAircraft(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D219D8
		void ResetSafeZoneOverrideAfterEvent(int32_t MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D218F8
		void ResetMatchTimeToPrevious(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D21818
		void RemoveFromBlockedNativeActions(FGameplayTagContainer& Actions); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D21738
		void PushSpecialEventEmoteInputComponent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D21658
		void PopSpecialEventEmoteInputComponent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D21578
		void PlacePlayersInAircraft(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D21498
		void PauseWinCondition(bool bLockScores); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D213B8
		void PauseSupplyDrops(bool bPause); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D212D8
		void PauseStormProgression(bool bPause); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D211F8
		void PauseStormDamage(bool bPause); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D21118
		void OnWarmUpTeleportComplete(AFortPlayerPawn PlayerPawn); // Flags: Final|Native|Protected 0x7FF414D21038
		void OnRep_TerrainMapsToUnload(); // Flags: Final|Native|Protected 0x7FF414D20F58
		void OnRep_LastCSVEventName(); // Flags: Final|Native|Protected 0x7FF414D20E78
		void OnRep_GameResumed(); // Flags: Final|Native|Protected 0x7FF414D20D98
		void OnRep_DelayPlayersFromReturningToLobbyData(); // Flags: Final|Native|Protected 0x7FF414D20CB8
		void OnRep_bPlayersAreInvincible(); // Flags: Final|Native|Protected 0x7FF414D20BD8
		void OnRep_bLockingOnFocalPoint(); // Flags: Final|Native|Protected 0x7FF414D20AF8
		void OnRep_bDisableHUD(); // Flags: Final|Native|Protected 0x7FF414D20A18
		void OnRep_bCanStreamBuildingFoundationsIn(); // Flags: Final|Native|Protected 0x7FF414D20938
		void OnRep_AllPlayerTeleportedCount(); // Flags: Final|Native|Protected 0x7FF414D20858
		void OnRep_Aircraft(); // Flags: Final|Native|Protected 0x7FF414D20778
		void OnRep_AdditionalViewpoint(); // Flags: Final|Native|Protected 0x7FF414D20698
		void OnGameViewportActivationChanged(bool bHasFocus); // Flags: Final|Native|Public 0x7FF414D205B8
		void OnAircraftFlightEnded(AFortAthenaAircraft FortAthenaAircraft); // Flags: Final|Native|Protected 0x7FF414D204D8
		void OnAircraftExitedDropZone(AFortAthenaAircraft FortAthenaAircraft); // Flags: Final|Native|Protected 0x7FF414D203F8
		void OnAircraftEnteredDropZone(AFortAthenaAircraft FortAthenaAircraft); // Flags: Final|Native|Protected 0x7FF414D20318
		void OnActorSpawned(AActor Actor); // Flags: Event|Protected|BlueprintEvent 0x7FF414D20238
		void OnActorPreSpawnInitialization(AActor Actor); // Flags: Event|Protected|BlueprintEvent 0x7FF414D20158
		void NotifyClientsGameResumed(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D20078
		void NetMulticast_CheatClearSpecialEventGameUserSettings(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public 0x7FF414D1FF98
		void JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D1FEB8
		void HandleSpecialEventMannequinDestroyed(AActor MannequinActor); // Flags: Final|Native|Protected 0x7FF414D1FDD8
		bool GetHasInfiniteSafeZonePhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D1FCF8
		void ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D1FC18
		void FlushUnhandledPlayerControllers(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D1FB38
		void CloseParachutes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D1FA58
		void ClearBlockedNativeActions(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D1F978
		void ClearAdditionalViewpoint(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D1F898
		void ChangeWinCondition(float NewGoalScore); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D1F7B8
		void AutobalanceTargetScore(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D1F6D8
		void AddToBlockedNativeActions(FGameplayTagContainer& Actions, bool bCancelAbilities); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D1F5F8
		void AddCSVEvent(FString CSVEventName, bool bShouldRepToClient); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D1F518
		void AddClientCSVEvent(FString CSVEventName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D1F438
	};


	// Class SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
	// Inherited from UFortCameraMode_FocalPoint -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x8 (0x1D10 - 0x1D08)
	class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint	
	{
	public:
		float OverrideTransitionTime; // 0x1D08(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1D0C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint");
			return ret;
		}

		void UpdateCameraBP(AActor ViewTarget, float DeltaTime, FTViewTarget& OutVT); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D23258
		void SetOverrideTransitionTime(float InTransitionTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D23178
		void OnBecomeInactiveBP(AActor ViewTarget); // Flags: Event|Protected|BlueprintEvent 0x7FF414D23098
		void OnBecomeActiveBP(AActor ViewTarget); // Flags: Event|Protected|BlueprintEvent 0x7FF414D22FB8
	};


	// Class SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x880 (0x920 - 0xA0)
	class UFortCharacterMovementMutatorComponent : public UActorComponent	
	{
	public:
		ACharacter CharacterOwner; // 0xA0(0x8)
		UFortMovementComp_CharacterAthena MovementComponent; // 0xA8(0x8)
		UFortMovementComp_CharacterAthena CDOMovementComponent; // 0xB0(0x8)
		unsigned char UnknownData06_6[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
		FScalableFloat BuffetBubblesMoveToBoxSpeed; // 0xC8(0x28)
		FScalableFloat BuffetBubblesRelativeVelocityInterpSpeed; // 0xF0(0x28)
		FScalableFloat BuffetBubblesLocationInterpSpeed; // 0x118(0x28)
		FScalableFloat BuffetBubblesRotationInterpSpeed; // 0x140(0x28)
		FScalableFloat BuffetBubblesMinRelativeX; // 0x168(0x28)
		FScalableFloat BuffetBubblesMaxRelativeX; // 0x190(0x28)
		FScalableFloat BuffetBubblesMinRelativeY; // 0x1B8(0x28)
		FScalableFloat BuffetBubblesMaxRelativeY; // 0x1E0(0x28)
		FScalableFloat BuffetBubblesMinRelativeZ; // 0x208(0x28)
		FScalableFloat BuffetBubblesMaxRelativeZ; // 0x230(0x28)
		FRotator BuffetBubblesRotationRate; // 0x258(0x18)
		FScalableFloat BuffetBubblesMaxAcceleration; // 0x270(0x28)
		FScalableFloat BuffetBubblesMaxRelativeSpeed; // 0x298(0x28)
		FScalableFloat BuffetBubblesRelativeDeceleration; // 0x2C0(0x28)
		FScalableFloat BuffetBubblesSphereRadius; // 0x2E8(0x28)
		AActor BuffetBubblesFollowActor; // 0x310(0x8)
		FVector BuffetBubblesInitialFollowBoxOffsetPercent; // 0x318(0x18)
		unsigned char UnknownData07_6[0xE0]; // 0x330(0xE0) UNKNOWN PROPERTY
		FBuffetBubblesReplicatedData BuffetBubblesReplicatedData; // 0x410(0x80)
		unsigned char UnknownData08_6[0x280]; // 0x490(0x280) UNKNOWN PROPERTY
		FScalableFloat BuffetBubblesIntroSpeed; // 0x710(0x28)
		unsigned char UnknownData09_6[0x8]; // 0x738(0x8) UNKNOWN PROPERTY
		FTransform BuffetBubblesIntroTargetTransform; // 0x740(0x60)
		FScalableFloat BuffetFlyingMaxPitchDegrees; // 0x7A0(0x28)
		FScalableFloat BuffetFlyingMaxSpeed; // 0x7C8(0x28)
		FScalableFloat BuffetFlyingVelocityDirectionInterpSpeed; // 0x7F0(0x28)
		FRotator BuffetFlyingRotationRate; // 0x818(0x18)
		float BuffetFlyingMaxSpeedOverride; // 0x830(0x4)
		float BuffetFlyingMaxSpeedInterpSpeed; // 0x834(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x838(0x4) UNKNOWN PROPERTY
		float BuffetFlyingVelocityDirectionInterpSpeedOverride; // 0x83C(0x4)
		FScalableFloat BuffetFlyingRicochetSphereSize; // 0x840(0x28)
		FScalableFloat BuffetFlyingRicochetRotationDuration; // 0x868(0x28)
		FScalableFloat BuffetFlyingRicochetControlRotationInterpSpeed; // 0x890(0x28)
		unsigned char UnknownData11_6[0x48]; // 0x8B8(0x48) UNKNOWN PROPERTY
		FBuffetFlyingRicochetReplicatedData BuffetFlyingRicochetReplicatedData; // 0x900(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent");
			return ret;
		}

		void SetBuffetBubblesIntroTargetTransform(FTransform& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D23958
		void SetBuffetBubblesInitialFollowBoxOffsetPercent(FVector BoxOffsetPercent); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable 0x7FF414D23878
		void SetBuffetBubblesFollowActor(AActor Actor); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D23798
		void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D236B8
		void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D235D8
		void OnRep_BuffetFlyingRicochetReplicatedData(); // Flags: Final|Native|Private 0x7FF414D234F8
		void OnRep_BuffetBubblesFollowActor(); // Flags: Final|Native|Protected 0x7FF414D23418
		void OnMovementModeChanged(ACharacter Character, TEnumAsByte PreviousMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private 0x7FF414D23338
	};


	// Class SpecialEventGameplayRuntime.FortCharacterMovementMutator
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x340 - 0x338)
	class AFortCharacterMovementMutator : public AFortAthenaMutator	
	{
	public:
		UClass MovementMutatorComponentClass; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator");
			return ret;
		}

		void OnFortPawnChanged(AFortPawn NewPawn); // Flags: Final|Native|Protected 0x7FF414D23A38
	};


	// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnStartGameplayOutro; // 0xD8(0x10)
		FMulticastInlineDelegate BP_OnGameplayIntroFinished; // 0xE8(0x10)
		bool bIsReadyForGameplay; // 0xF8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic");
			return ret;
		}

		void ShowCinematicWidget(FName WidgetName); // Flags: Final|BlueprintCosmetic|Exec|Native|Public|BlueprintCallable 0x7FF414D23E98
		void SetReadyForGameplay(bool bIsReady); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D23DB8
		void ServerOnGameplayIntroFinished(); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414D23CD8
		void OnRep_bIsReadyForGameplay(); // Flags: Final|Native|Protected 0x7FF414D23BF8
		void HideHUDElementsForLoadingScreen(bool bHideElements); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D23B18
	};


	// Class SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UFortControllerComponent_SpecialEvent : public UFortControllerComponent	
	{
	public:
		bool bForceBuildModeInputComponentToNotConsumeInputs; // 0xA8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr SpecialEventMutator; // 0xAC(0x8)
		unsigned char UnknownData03_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent");
			return ret;
		}

		void ServerHandleSpecialClientEvent(FGameplayTag EventTag, int32_t Count); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414D24058
		void SendSpecialClientEvent(FGameplayTag EventTag, int32_t Count); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D23F78
	};


	// Class SpecialEventGameplayRuntime.FortCustomTickComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x100 (0x1A0 - 0xA0)
	class UFortCustomTickComponent : public UActorComponent	
	{
	public:
		EFortCustomTickComponentCondition Condition; // 0xA0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FGameplayTag AuthorityQualitySettingsTag; // 0xA4(0x4)
		FGameplayTag DefaultClientQualitySettingsTag; // 0xA8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TMap ClientPlatformQualitySettingsTagMap; // 0xB0(0x50)
		TMap QualitySettingsMap; // 0x100(0x50)
		float WasRecentlyRenderedTolerance; // 0x150(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCustomTick; // 0x158(0x10)
		unsigned char UnknownData07_7[0x38]; // 0x168(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCustomTickComponent");
			return ret;
		}
	};


	// Class SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
	// Inherited from AFortActorSpawner -> AActor -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class AFortSpecialRelevancyActorSpawner : public AFortActorSpawner	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner");
			return ret;
		}

		void BP_OnActorSpawnedPerRelevancyGroup(TArray& InSpawnedActors); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D24138
	};


	// Class SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class USpecialEventAudioAnalysisBaseComponent : public UActorComponent	
	{
	public:
		float CurrentTime; // 0xA0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		ULoudnessNRT LoudnessNRT; // 0xA8(0x8)
		UOnsetNRT OnsetNRT; // 0xB0(0x8)
		UConstantQNRT ConstantQNRT; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent");
			return ret;
		}

		void UpdateTime(float NewTime); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D44838
		void UpdateOnset(float Time); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D44758
		void UpdateLoudness(float Time); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D44678
		void UpdateConstantQ(float Time); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D44598
		UOnsetNRT GetOnsetNRT(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D444B8
		ULoudnessNRT GetLoudnessNRT(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D443D8
		float GetCurrentNormalizedLoudness(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D442F8
		UConstantQNRT GetConstantQNRT(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D44218
	};


	// Class SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
	// Inherited from USpecialEventAudioAnalysisBaseComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xE8 - 0xC0)
	class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent	
	{
	public:
		TArray HapticsActions; // 0xC0(0x10)
		bool bStartHapticsOnBeginPlay; // 0xD0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		float IntensityMultiplier; // 0xD4(0x4)
		unsigned char UnknownData03_7[0x10]; // 0xD8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent");
			return ret;
		}

		void StopHaptics(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D44AD8
		void StartHaptics(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D449F8
		bool AreHapticsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D44918
	};


	// Class SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
	// Inherited from UFortCinematicCamera -> UFortCameraMode -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class USpecialEventCinematicCameraMode : public UFortCinematicCamera	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode");
			return ret;
		}
	};


	// Class SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USpecialEventCursorInstigatorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface");
			return ret;
		}

		bool SpecialEventCursorTrace(FHitResult& OutHitResult, USpecialEventCursorPawnComponent CursorPawnComponent, FGameplayTag& CursorModeTag, UCameraComponent CameraComponent, FVector& CursorWorldDirection); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D44BB8
	};


	// Class SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x338 (0x3D8 - 0xA0)
	class USpecialEventCursorPawnComponent : public UPawnComponent	
	{
	public:
		unsigned char UnknownData13_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDesiredVisibilityChanged; // 0xA8(0x10)
		bool bAllowOnNonOwningClients; // 0xB8(0x1)
		unsigned char UnknownData14_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		APawn OwningPawn; // 0xC0(0x8)
		AFortPlayerController OwningController; // 0xC8(0x8)
		unsigned char UnknownData15_6[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCursorModeChanged; // 0xE0(0x10)
		FGameplayTag DefaultCursorModeTag; // 0xF0(0x4)
		bool bDefaultCursorModeAutoActivate; // 0xF4(0x1)
		unsigned char UnknownData16_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		TMap CursorModes; // 0xF8(0x50)
		TArray CursorStack; // 0x148(0x10)
		FSpecialEventCursorStackEntry ReplicatedCursorStackEntry; // 0x158(0xC)
		unsigned char UnknownData17_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		UClass InputHelperClass; // 0x168(0x8)
		bool bUseGamepadLookInput; // 0x170(0x1)
		bool bUseGamepadMoveInput; // 0x171(0x1)
		bool bUseGyroInput; // 0x172(0x1)
		bool bObeyInvertedPitchUserSetting; // 0x173(0x1)
		unsigned char UnknownData18_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		UCommonInputSubsystem CommonInputSubsystem; // 0x178(0x8)
		USpecialEventInputHelperComponent InputHelperComponent; // 0x180(0x8)
		unsigned char UnknownData19_6[0x40]; // 0x188(0x40) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnViewportLocationChanged; // 0x1C8(0x10)
		FScalableFloat NonOwningInterpSpeed; // 0x1D8(0x28)
		FScalableFloat MinDeltaToSendWorldLocationToServer; // 0x200(0x28)
		unsigned char UnknownData20_6[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
		FVector ReplicatedWorldLocation; // 0x230(0x18)
		unsigned char UnknownData21_6[0x60]; // 0x248(0x60) UNKNOWN PROPERTY
		TArray Widgets; // 0x2A8(0x10)
		unsigned char UnknownData22_6[0x101]; // 0x2B8(0x101) UNKNOWN PROPERTY
		bool bAdditiveRotationAllowedByDefault; // 0x3B9(0x1)
		unsigned char UnknownData23_6[0x1]; // 0x3BA(0x1) UNKNOWN PROPERTY
		bool bZoomAllowedByDefault; // 0x3BB(0x1)
		FName ZoomActionName; // 0x3BC(0x4)
		unsigned char UnknownData24_6[0x8]; // 0x3C0(0x8) UNKNOWN PROPERTY
		UCameraComponent AdditiveOffsetCameraComponent; // 0x3C8(0x8)
		unsigned char UnknownData25_7[0x8]; // 0x3D0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent");
			return ret;
		}

		void SetZoomAllowed(bool bInZoomAllowed); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D46F98
		void SetAllowOnNonOwningClients(bool bAllow); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D46EB8
		void SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D46DD8
		void ServerOnWorldLocationChanged(FVector WorldLocation); // Flags: Final|Net|Native|Event|Private|NetServer|HasDefaults 0x7FF414D46CF8
		void PushCursor(FGameplayTag& CursorModeTag, UObject InstigatingObject, bool bActivate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D46C18
		void PopCursor(FGameplayTag& CursorModeTag, UObject InstigatingObject, bool bDeactivateIfStackEmpty); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D46B38
		void PopAllCursorsForObject(UObject InstigatingObject, bool bDeactivateIfStackEmpty); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D46A58
		void OnRep_ReplicatedWorldLocation(); // Flags: Final|Native|Private 0x7FF414D46978
		void OnRep_ReplicatedCursorStackEntry(FSpecialEventCursorStackEntry& OldCursorStackEntry); // Flags: Final|Native|Private|HasOutParms 0x7FF414D46898
		void OnRep_bAllowOnNonOwningClients(); // Flags: Final|Native|Private 0x7FF414D467B8
		void OnLocallyControlledCursorVisibilityChanged(USpecialEventCursorPawnComponent CursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Flags: Final|Native|Private|HasOutParms 0x7FF414D466D8
		void OnInputMethodChanged(ECommonInputType InputType); // Flags: Final|Native|Private 0x7FF414D465F8
		void OnHUDPostRender(AHUD HUD, UCanvas Canvas); // Flags: Final|Native|Private 0x7FF414D46518
		void MoveInputUpdate(FVector& InInputVector); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414D46438
		void LookInputUpdate(FVector& InInputVector); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414D46358
		bool IsZoomAllowed(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D46278
		bool IsLocallyControlled(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D46198
		bool IsAdditiveRotationAllowed(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D460B8
		void InputPressed(FName& ActionName, bool bPressed); // Flags: Final|Native|Private|HasOutParms 0x7FF414D45FD8
		void GyroInputUpdate(FVector& InInputVector); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414D45EF8
		bool GetWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D45E18
		bool GetViewportSize(FVector2D& OutViewportSize); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D45D38
		bool GetViewportLocation(FVector2D& OutViewportLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D45C58
		bool GetViewportCenter(FVector2D& OutViewportCenter); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D45B78
		USpecialEventCursorPawnComponent GetSpecialEventCursorPawnComponent(APawn Pawn, FGameplayTag& CursorModeTag, bool bMustBeActive); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414D45A98
		FVector2D GetNormalizedLocation(); // Flags: Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D459B8
		APlayerController GetLocalController(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D458D8
		ECommonInputType GetInputType(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D457F8
		FGameplayTagContainer GetCursorModeTagsForWidget(UUserWidget Widget); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D45718
		UUserWidget GetCurrentWidget(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D45638
		bool GetCurrentHitResult(FHitResult& OutHitResult); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D45558
		FGameplayTag GetCurrentCursorModeTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D45478
		FVector2D GetCenteredWidgetLocation(UUserWidget Widget, FVector2D& ViewportLocation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D45398
		UCameraComponent GetCameraComponent(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D452B8
		bool ConvertWorldToViewportLocation(FVector2D& OutViewportLocation, FVector& WorldLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D451D8
		bool ConvertWorldToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector& WorldLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D450F8
		bool ConvertViewportToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& ViewportLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D45018
		bool ConvertViewportToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector2D& ViewportLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D44F38
		bool ConvertNormalizedToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& NormalizedLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D44E58
		bool ConvertNormalizedToViewportLocation(FVector2D& OutViewportLocation, FVector2D& NormalizedLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D44D78
		bool CanBeVisible(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D44C98
	};


	// Class SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
	// Inherited from UFortWeaponComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class USpecialEventCursorWeaponComponent : public UFortWeaponComponent	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCursorPawnComponentSet; // 0xA8(0x10)
		UClass CursorPawnComponentClass; // 0xB8(0x8)
		FGameplayTag CursorModeTag; // 0xC0(0x4)
		bool bAlignFXToCursor; // 0xC4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xC5(0x3) UNKNOWN PROPERTY
		AFortWeapon OwningWeapon; // 0xC8(0x8)
		AFortPlayerPawn Pawn; // 0xD0(0x8)
		USpecialEventCursorPawnComponent CursorPawnComponent; // 0xD8(0x8)
		unsigned char UnknownData05_7[0x58]; // 0xE0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent");
			return ret;
		}

		void OnUnEquip(AFortWeapon Weapon); // Flags: Final|Native|Private 0x7FF414D47938
		void OnRep_CursorPawnComponent(); // Flags: Final|Native|Protected 0x7FF414D47858
		void OnPlayImpactFX(AFortWeapon Weapon, FHitResult& HitResult, UFXSystemComponent FXSystemComponent); // Flags: Final|Native|Private|HasOutParms 0x7FF414D47778
		void OnGetAimRotOverride(AFortWeapon Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverride, bool& bOutExecutionResult); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414D47698
		void OnEquip(AFortWeapon Weapon); // Flags: Final|Native|Private 0x7FF414D475B8
		void OnBeamFired(AFortWeapon Weapon, bool bUsePersistentBeam, UFXSystemComponent PSC, FVector& BeamOrigin, FVector& HitLocation); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF414D474D8
		USpecialEventCursorPawnComponent GetSpecialEventCursorPawnComponentForWeapon(AFortWeapon Weapon); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D473F8
		USpecialEventCursorPawnComponent GetSpecialEventCursorPawnComponentForCurrentWeapon(AFortPlayerPawn Pawn); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D47318
		USpecialEventCursorPawnComponent GetCursorPawnComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D47238
		USpecialEventCursorWeaponComponent GetCurrentSpecialEventCursorWeaponComponent(AFortPlayerPawn Pawn); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D47158
		bool GetCurrentHitResult(FHitResult& OutHitResult); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414D47078
	};


	// Class SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USpecialEventGameplayGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventGameplayGlobals");
			return ret;
		}
	};


	// Class SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary");
			return ret;
		}

		void StreamOutAllBuildingFoundations(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D489D8
		void SetNextLoadingScreen(UObject WorldContextObject, UAthenaLoadingScreenItemDefinition LoadingScreenDefinition, bool bCanShowLoadingBar); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414D488F8
		void SetLODOnLandscapProxies(UObject WorldContextObject, bool bForced, int32_t InLODValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D48818
		void HideSkydivingShadowProxy(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D48738
		FString GetSpecialEventPlayerDisplayName(AFortPlayerControllerAthena LocalController, AFortPlayerStateAthena PlayerState); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414D48658
		AFortAthenaMutator_SpecialEvent GetSpecialEventMutator(UObject WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D48578
		bool GetHasInfiniteSafeZonePhase(UObject WorldContextObject); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D48498
		FString GetActorRoleString(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D483B8
		FString GetActorNetModeString(AActor Actor); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D482D8
		void ForceUpdateGrass(UObject WorldContextObject, FVector Location); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414D481F8
		void ForceDestroyComponents(TArray& Components, bool bPromoteChildren, FString LogContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414D48118
		UFortControllerComponent_SpecialEvent FindSpecialEventComponent(AController Controller); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D48038
		UFortControllerComponent_GameplayCinematic FindGameplayCinematicComponent(AController Controller); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D47F58
		bool DetachPawnFromComponent(AFortPawn Pawn, USceneComponent Component, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414D47E78
		bool DetachPawn(AFortPawn Pawn, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414D47D98
		void CreateSpecialEventPlayerEliminationWorldMarker(AFortPlayerControllerAthena LocalController, AFortPlayerStateAthena VictimPlayerState, FVector& DeathLocation); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D47CB8
		bool AttachPawnToComponent(AFortPawn Pawn, USceneComponent Component, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 0x7FF414D47BD8
		void AddSpecialEventRecentElimination(FVector& Location, AFortPlayerStateAthena PlayerState); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D47AF8
		void AddSpecialEventKillFeedEntry(UObject WorldContextObject, AFortPlayerStateAthena VictimPlayerState, AFortPlayerStateAthena KillerPlayerState, FText NonPlayerVictimName, FText NonPlayerKillerName, FGameplayTag& DeathCauseTag, EDeathCauseReason DeathCauseReason, float Distance); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414D47A18
	};


	// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnReady; // 0x30(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady");
			return ret;
		}

		UFortAsyncAction_GameplayCinematicComponentReady FindGameplayCinematicComponentAsync(AController Conroller); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D48AB8
	};


	// Class SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class USpecialEventGameUserSettingsControllerComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnLoaded; // 0xA0(0x10)
		FString Version; // 0xB0(0x10)
		float MinTimeBetweenSaves; // 0xC0(0x4)
		unsigned char UnknownData01_7[0x24]; // 0xC4(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent");
			return ret;
		}

		void SpecialEventGameUserSettings_ToggleDebug(); // Flags: Final|BlueprintCosmetic|Exec|Native|Public 0x7FF414D49298
		void SpecialEventGameUserSettings_SetData(FString Data); // Flags: Final|BlueprintCosmetic|Exec|Native|Public 0x7FF414D491B8
		void SpecialEventGameUserSettings_LogData(); // Flags: Final|BlueprintCosmetic|Exec|Native|Public|Const 0x7FF414D490D8
		void SpecialEventGameUserSettings_ClearData(); // Flags: Final|BlueprintCosmetic|Exec|Native|Public 0x7FF414D48FF8
		void SetSavingBlocked(bool bBlocked); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D48F18
		void SetData(FString Data, bool bAllowSave, bool bSaveNow); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D48E38
		void ParseLoadedData(FString Data); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF414D48D58
		USpecialEventGameUserSettingsControllerComponent GetSpecialEventGameUserSettingsControllerComponent(UObject WorldContextObject); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414D48C78
		void GetData(ESpecialEventGameUserSettingsResult& OutResult, FString& OutData); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const 0x7FF414D48B98
	};


	// Class SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAsyncAction_SpecialEventGameUserSettingsReady : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnReady; // 0x30(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady");
			return ret;
		}

		UFortAsyncAction_SpecialEventGameUserSettingsReady SpecialEventGameUserSettingsReadyAsync(UObject WorldContextObject); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414D49378
	};


	// Class SpecialEventGameplayRuntime.SpecialEventPhase
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class ASpecialEventPhase : public AActor	
	{
	public:
		unsigned char UnknownData04_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		FGameplayTag PhaseTag; // 0x2A8(0x4)
		float LevelSequenceTime; // 0x2AC(0x4)
		bool bApplyGameplayEffects; // 0x2B0(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		TArray GameplayEffectsToApply; // 0x2B8(0x10)
		TArray ControllerComponentsToApplyInfoList; // 0x2C8(0x10)
		TArray PawnComponentsToApplyInfoList; // 0x2D8(0x10)
		UClass CameraModifierToApply; // 0x2E8(0x8)
		bool bRemoveModifierOnPhaseDeactivation; // 0x2F0(0x1)
		bool bRemoveGameplayEffects; // 0x2F1(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x2F2(0x6) UNKNOWN PROPERTY
		TArray GameplayEffectsToRemove; // 0x2F8(0x10)
		TArray ControllerComponentsToRemoveInfoList; // 0x308(0x10)
		TArray PawnComponentsToRemoveInfoList; // 0x318(0x10)
		UCameraModifier AppliedCameraModifier; // 0x328(0x8)
		TWeakObjectPtr SpecialEventScript; // 0x330(0x8)
		ESpecialEventPhaseState PhaseState; // 0x338(0x1)
		unsigned char UnknownData07_7[0x7]; // 0x339(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventPhase");
			return ret;
		}

		void SetHUDElementVisibility(FGameplayTagContainer& HUDElementTags, bool bHideElements); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414D49D18
		void PrePhaseActivation_Server(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D49C38
		void OnRep_PhaseState(); // Flags: Final|Native|Protected 0x7FF414D49B58
		void OnPhaseFinished(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D49A78
		void OnPhaseDeactivation_Server(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D49998
		void OnPhaseDeactivation_Client(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D498B8
		void OnPhaseActivation_Server(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D497D8
		void OnPhaseActivation_Client(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D496F8
		FGameplayTag GetPhaseTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D49618
		AReplicatedLevelSequenceActor GetLevelSequenceActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D49538
		void DebugActivatePhase(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D49458
	};


	// Class SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
	// Inherited from AFortPlayerMannequin -> ASkeletalMeshActor -> AActor -> UObject
	// Size: 0xA0 (0x6A8 - 0x608)
	class ASpecialEventPlayerMannequin : public AFortPlayerMannequin	
	{
	public:
		bool bDisableCollisionOnBeginPlay : 1; // 0x608:0(0x1)
		bool bDisableComponentsTickOnServer : 1; // 0x608:1(0x1)
		bool bRegisterWithSpecialEventMutatorOnClient : 1; // 0x608:2(0x1)
		bool bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization : 1; // 0x608:3(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x609(0x3) UNKNOWN PROPERTY
		int32_t PlayerIndex; // 0x60C(0x4)
		FScalableFloat bUpdateLoadoutByPlayerIndexAtStartup; // 0x610(0x28)
		FScalableFloat bHideUntilPlayerIndexLoadoutApplied; // 0x638(0x28)
		TArray DefaultLoadouts; // 0x660(0x10)
		TArray OverrideLoadouts; // 0x670(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x680(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin");
			return ret;
		}

		void UpdateLoadoutByPlayerIndex(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D4A418
		void SetPlayerIndex(int32_t NewPlayerIndex, bool bUpdate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D4A338
		void RegisterWithSpecialEventMutator(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D4A258
		void HandleOnMutatorAdded(AFortGameplayMutator NewMutator); // Flags: Final|Native|Protected 0x7FF414D4A178
		void HandleCurrentPawnChanged(); // Flags: Final|Native|Protected 0x7FF414D4A098
		int32_t GetRelevancyGroupIndex(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D49FB8
		FString GetLogString(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D49ED8
		void DestroyUnusedSkeletalMeshComponents(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414D49DF8
	};


	// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class USpecialEventRewindComponent : public UActorComponent	
	{
	public:
		float MaxRecordingDuration; // 0xA0(0x4)
		float LocalRecordingFPS; // 0xA4(0x4)
		float ReplicatedRecordingFPS; // 0xA8(0x4)
		bool bAutoStartRecording; // 0xAC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float RewindLerpTime; // 0xB0(0x4)
		float DefaultRewindDuration; // 0xB4(0x4)
		float DefaultRewindPlaybackSpeed; // 0xB8(0x4)
		FSpecialEventRewindComponentStateData StateData; // 0xBC(0x8)
		float ReplicatedRewindDuration; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent");
			return ret;
		}

		bool TryStartRewinding(float duration, float PlaybackSpeed); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D4A5D8
		void OnRep_StateData(FSpecialEventRewindComponentStateData& OldStateData); // Flags: Final|Native|Private|HasOutParms 0x7FF414D4A4F8
	};


	// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
	// Inherited from USpecialEventRewindComponent -> UActorComponent -> UObject
	// Size: 0x2C0 (0x388 - 0xC8)
	class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent	
	{
	public:
		bool bStartServerRecordingOnLastGroundFrame; // 0xC8(0x1)
		unsigned char UnknownData03_6[0x27]; // 0xC9(0x27) UNKNOWN PROPERTY
		FSpecialEventRewindComponentRecording_PlayerPawn ReplicatedRecording; // 0xF0(0x20)
		unsigned char UnknownData04_6[0x118]; // 0x110(0x118) UNKNOWN PROPERTY
		FSpecialEventRewindComponentRecordingFastArray_PlayerPawn ReplicatedRecordingFastArray; // 0x228(0x118)
		unsigned char UnknownData05_7[0x48]; // 0x340(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn");
			return ret;
		}

		void OnServerLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms 0x7FF414D4A6B8
	};


	// Class SpecialEventGameplayRuntime.SpecialEventScript
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x260 (0x4F0 - 0x290)
	class ASpecialEventScript : public AInfo	
	{
	public:
		FMulticastInlineDelegate OnSpecialEventPhaseActivated; // 0x290(0x10)
		FMulticastInlineDelegate OnSpecialEventPhaseDeactivated; // 0x2A0(0x10)
		TArray PhaseInfoArray; // 0x2B0(0x10)
		FScalableFloat DropDeadWindowSizeInSeconds; // 0x2C0(0x28)
		FScalableFloat DelayAfterConentLoad; // 0x2E8(0x28)
		FScalableFloat bWaitForSEMutator; // 0x310(0x28)
		FScalableFloat bWaitForWarmupToEnd; // 0x338(0x28)
		FScalableFloat DelayAfterWarmup; // 0x360(0x28)
		FScalableFloat ForceReturnToMainMenuTime; // 0x388(0x28)
		FScalableFloat ForceReturnToMainMenuTimeRandomness; // 0x3B0(0x28)
		FScalableFloat MinDelayReturnToMainMenu; // 0x3D8(0x28)
		FScalableFloat MaxDelayReturnToMainMenu; // 0x400(0x28)
		FScalableFloat bPreloadAllLevelsOnServer; // 0x428(0x28)
		FScalableFloat bAllowGarbageCollectionAfterUnload; // 0x450(0x28)
		FScalableFloat bFullPurgeGC; // 0x478(0x28)
		FScalableFloat bEnableEndOfEventTimer; // 0x4A0(0x28)
		int32_t ReplicatedActivePhaseIndex; // 0x4C8(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x4CC(0xC) UNKNOWN PROPERTY
		UMeshNetworkComponent MeshNetworkComponent; // 0x4D8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x4E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventScript");
			return ret;
		}

		void StartEventAtIndex(int32_t InStartingIndex, float SequenceTimeOffset); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D4AE98
		void SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF414D4ADB8
		void OnRep_ReplicatedActivePhaseIndex(); // Flags: Final|Native|Protected 0x7FF414D4ACD8
		int32_t GetActivePhaseIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4ABF8
		ASpecialEventScript Get(UObject WorldContextObject, bool bErrorIfNull); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D4AB18
		void BP_OnScriptReady(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4AA38
		void BP_OnScriptFinished(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4A958
		void AttemptStartNextPhase(FGameplayTag CurrentPhaseTag); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D4A878
		void AttemptFinishPhase(FGameplayTag PhaseTag); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414D4A798
	};


	// Class SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class ASpecialEventScriptMeshActor : public AInfo	
	{
	public:
		FDateTime RootStartTime; // 0x290(0x8)
		FString CalendarEventName; // 0x298(0x10)
		float CalenderEventOffsetInSeconds; // 0x2A8(0x4)
		float EncryptionKeyDeliveryTimeOffset; // 0x2AC(0x4)
		unsigned char UnknownData01_6[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		UMeshNetworkComponent MeshNetworkComponent; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor");
			return ret;
		}

		void OnRep_RootStartTime(); // Flags: Final|Native|Protected 0x7FF414D4B4B8
		void MeshRootStartEvent(); // Flags: Final|Exec|Native|Public 0x7FF414D4B3D8
		void MeshRootStartCalendarTimerOnly(); // Flags: Final|Exec|Native|Public 0x7FF414D4B2F8
		void MeshRootStartCalendarTimer(); // Flags: Final|Exec|Native|Public 0x7FF414D4B218
		void MeshRootResetEvent(); // Flags: Final|Exec|Native|Public 0x7FF414D4B138
		void MeshRootLogCalendarTimer(); // Flags: Final|Exec|Native|Public 0x7FF414D4B058
		void MeshRootClearCalendarTimer(); // Flags: Final|Exec|Native|Public 0x7FF414D4AF78
	};


	// Class SpecialEventGameplayRuntime.SpecialEventStatComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class USpecialEventStatComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnValueChangedDelegate; // 0xA0(0x10)
		TArray StatDefinitions; // 0xB0(0x10)
		FSpecialEventStatArray StatFastArray; // 0xC0(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventStatComponent");
			return ret;
		}

		FSpecialEventStatArrayEntry GetStat(bool& bOutValid, FGameplayTag LookupTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D4B838
		FSpecialEventStatArrayEntry GetSpecialEventStat(bool& bOutValid, AActor Actor, FGameplayTag LookupTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414D4B758
		bool AdjustStat(FGameplayTag LookupTag, float Adjustment, bool bLogError); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D4B678
		void AdjustSpecialEventStat(AActor Actor, FGameplayTag LookupTag, float Adjustment); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D4B598
	};


	// Class SpecialEventGameplayRuntime.DamageRecordEntry
	// Inherited from UObject
	// Size: 0x120 (0x148 - 0x28)
	class UDamageRecordEntry : public UObject	
	{
	public:
		float DamageTotal; // 0x28(0x4)
		float EndReplicationTime; // 0x2C(0x4)
		FGameplayTagContainer DamageTags; // 0x30(0x20)
		FGameplayEffectContextHandle EffectContext; // 0x50(0x18)
		FGameplayCueParameters GameplayCueParams; // 0x68(0xD0)
		unsigned char UnknownData01_7[0x10]; // 0x138(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.DamageRecordEntry");
			return ret;
		}

		void OnRep_DamageTotal(); // Flags: Final|Native|Public 0x7FF414D4B918
	};


	// Class SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
	// Inherited from USpecialRelevancyComponentBase -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase	
	{
	public:
		FScalableFloat RelevancyDeathTimeLength; // 0xA0(0x28)
		bool bSetLifespanOnLastRelevancyDeath; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float OwnerMaxHealthCached; // 0xCC(0x4)
		TArray ReplicatedDamageRecords; // 0xD0(0x10)
		FMulticastInlineDelegate OnSpecialRelevancyDeath; // 0xE0(0x10)
		FMulticastInlineDelegate OnSpecialRelevancyDamage; // 0xF0(0x10)
		AFortAthenaMutator_SpecialRelevancy CachedMutator; // 0x100(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent");
			return ret;
		}

		void OnKilled(AFortPlayerState KillingPlayerState, int32_t RelevancyGroupIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4C018
		void OnDamaged(AFortPlayerState DamagingPlayerState, int32_t RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4BF38
		float GetHealthPercentFromRelevancyIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4BE58
		float GetHealthPercent(AActor RelevancyActor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4BD78
		float GetHealthFromRelevancyIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4BC98
		float GetHealth(AActor RelevancyActor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4BBB8
		float ClientGetHealthPercent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4BAD8
		float ClientGetHealth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4B9F8
	};

}
