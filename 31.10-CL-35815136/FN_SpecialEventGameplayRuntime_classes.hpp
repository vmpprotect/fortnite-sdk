#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SpecialEventGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x40 (0x378 - 0x338)
	class AFortAthenaMutator_SpecialEventTODM : public AFortAthenaMutator	
	{
	public:
		TArray<FSpecialEventTODMPhaseData> PhaseDataArray; // 0x338(0x10)
		ASpecialEventScript* SpecialEventScript; // 0x348(0x8)
		int32_t PhaseIndexInProgress; // 0x350(0x4)
		int32_t SubphaseIndexInProgress; // 0x354(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x358(0x8) UNKNOWN PROPERTY
		TScriptInterface<Class> SpawnedTODM; // 0x360(0x10)
		bool bDebug; // 0x370(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x371(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM");
			return ret;
		}

		void OnPhaseActivated(ASpecialEventScript* InSpecialEventScript, ASpecialEventPhase* InSpecialEventPhase); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514FCE68(relative to base address)
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

		void SpecialEventTODM_ToggleDebug(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
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

		void DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(FString TagString, bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74EA4C584(relative to base address)
		void DestroyActorsAndComponentsMutator_ListActorComponents(FString InActorName); // Flags: Final|Exec|Native|Public|Const, Memory Exec: 0x7FF74C7B3138(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x30 (0x368 - 0x338)
	class AFortAthenaMutator_DestroyActorsAndComponents : public AFortAthenaMutator	
	{
	public:
		TArray<FDestroyActorsAndComponentsMutator_ActorDefinition> ActorDefinitions; // 0x338(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x348(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents");
			return ret;
		}

		void SetActorDefinitionsEnabled(FGameplayTagContainer& InTags, bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7514FBBC8(relative to base address)
		void PermanentlyDisableActorDefinitions(FGameplayTagContainer& InTags); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E311514(relative to base address)
		void OnTrackedActorDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514FD460(relative to base address)
		void OnRep_ActorDefinitions(TArray<FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7514FD178(relative to base address)
		void OnActorSpawned(AActor* Actor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514FC7E0(relative to base address)
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

		void FakeKillRelevancyTestAlgorithm(int32_t NumPlayers, FString MaxPlayersRemainingAfterPhases, int32_t MinSquadSize, int32_t MaxSquadSize, int32_t Iterations, int32_t LogVerbosity); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7514FBED0(relative to base address)
		void FakeKillRelevancyStartNextWave(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void FakeKillRelevancySetUpPhase(int32_t MaxPlayersRemaining, FString ReasonGameplayTagString, int32_t NumWaves, float RelevancyDelay); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7514FBD9C(relative to base address)
		void FakeKillRelevancyReset(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void FakeKillRelevancyDebug(float TextScale); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C42CE74(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x188 (0x230 - 0xA8)
	class UFortControllerComponent_FakeKillRelevancy : public UFortControllerComponent	
	{
	public:
		FFakeKillRelevancyPlayerDataArray PlayerDataArray; // 0xA8(0x120)
		TMap<AFortPlayerStateAthena*, EFakeKillRelevancyPlayerKillStep> ClientPlayerStateKillStepMap; // 0x1C8(0x50)
		char ResetCounter; // 0x218(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x219(0x7) UNKNOWN PROPERTY
		TArray<AFortPlayerStateAthena*> DebugSupergroupPlayerStates; // 0x220(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy");
			return ret;
		}

		void ResetRelevancy(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void PlayKillEffects(FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_ResetCounter(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514FD394(relative to base address)
		void OnKillEffectsPlayed(AFortPlayerStateAthena* PlayerState); // Flags: Final|BlueprintCosmetic|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514FCA60(relative to base address)
		FVector GetDeathLocation(AFortPlayerStateAthena* PlayerState); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514FC3E8(relative to base address)
		void CancelKillEffectsOnServer(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CancelKillEffectsOnClient(TArray<AFortPlayerStateAthena*>& PlayerStates); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
	// Inherited from AFortAthenaMutator_SpecialRelevancy -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x60 (0x5F0 - 0x590)
	class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy	
	{
	public:
		UClass* FakeKillControllerComponentClass; // 0x590(0x8)
		TArray<FFakeKillRelevancyPhaseData> RelevancyPhaseDataArray; // 0x598(0x10)
		int32_t PhaseNum; // 0x5A8(0x4)
		unsigned char UnknownData00_7[0x44]; // 0x5AC(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy");
			return ret;
		}

		void StartNextKillWave(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetUpKillPhase(int32_t MaxPlayersRemaining, FGameplayTag& Reason, int32_t NumWaves, float RelevancyDelay); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7514FE530(relative to base address)
		void ResetRelevancy(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void EndWave(int32_t EndPhaseNum, int32_t WaveNum); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C39C954(relative to base address)
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

		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7514FCF2C(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x348 - 0x338)
	class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator	
	{
	public:
		TArray<FString> AllowedGameFeatures; // 0x338(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures");
			return ret;
		}

		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7514FD05C(relative to base address)
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

		void UnloadTerrainMaps(FName MapTag); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void ToggleDisableParachutes(bool bIsDisabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void TeleportAllPlayers(int32_t SafeZoneIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void StartEventScript(int32_t InStartingIndex, float SequenceTimeOffset); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF7514FE7AC(relative to base address)
		void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74EC58610(relative to base address)
		void SpecialEventGameUserSettings_ClearDataForAllPlayers(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SpecialEventClearAdditionalViewpoint(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ShrinkSafeZone(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74E226C38(relative to base address)
		void SetMatchTime(int32_t NewMatchTime); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void SetIsSimulatingDamage(bool bIsSimulating); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void SendToNightNight(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ResumeWinCondition(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ResetWinConditionProgressToZero(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ResetWinCondition(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ResetSpecialEventAircraft(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ResetMatchTimeToPrevious(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void PlacePlayersInAircraft(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void PauseWinCondition(bool bLockScores); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void CloseParachutes(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ChangeWinCondition(float NewGoalScore); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void AutobalanceTargetScore(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void AddCSVEvent(FString CSVEventName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74EC51B44(relative to base address)
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
		unsigned char UnknownData00_6[0x68]; // 0x3A8(0x68) UNKNOWN PROPERTY
		bool bPlayersAreInvincible; // 0x410(0x1)
		unsigned char UnknownData01_6[0x27]; // 0x411(0x27) UNKNOWN PROPERTY
		int32_t MinimumScoreBumpForAutomadeGoal; // 0x438(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x43C(0x4) UNKNOWN PROPERTY
		TArray<float> ScoreBrackets; // 0x440(0x10)
		bool bEnforceInfiniteSafeZonePhase; // 0x450(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x451(0x3) UNKNOWN PROPERTY
		FName WarmupIslandPlayerStartTag; // 0x454(0x4)
		bool bAllowInventoryOpen; // 0x458(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x459(0x7) UNKNOWN PROPERTY
		FScalableFloat bAllowFullScreenMap; // 0x460(0x28)
		bool bShouldClearFrontEndMapMarkers; // 0x488(0x1)
		bool bBlockTeamIndicators; // 0x489(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x48A(0x2) UNKNOWN PROPERTY
		int32_t ForceDisplaySquadInfoDuringGamePhases; // 0x48C(0x4)
		bool bAllowSquadListLocalPlayerInSplitscreen; // 0x490(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x491(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer UIToHideDuringSpecialEvent; // 0x498(0x20)
		FGameplayTagContainer UIToHideWhenInInfiniteWarmup; // 0x4B8(0x20)
		FGameplayTagContainer ClientEventsThatUnhideHiddenWhileLoadingHUDElements; // 0x4D8(0x20)
		bool bSkipPostGameScreens; // 0x4F8(0x1)
		bool bForceGarbageCollectionAfterUnloadOnServer; // 0x4F9(0x1)
		bool bForceGarbageCollectionAfterUnloadOnClient; // 0x4FA(0x1)
		bool bFullPurgeGC; // 0x4FB(0x1)
		unsigned char UnknownData07_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		AFortAthenaAircraft* EventAircraft; // 0x500(0x8)
		FAircraftFlightInfo EventAircraftInfo; // 0x508(0x48)
		UClass* EventAircraftClass; // 0x550(0x8)
		bool bDisableHUD; // 0x558(0x1)
		char GameResumed; // 0x559(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x55A(0x6) UNKNOWN PROPERTY
		FVector AdditionalViewpoint; // 0x560(0x18)
		bool bParachutesDisabled; // 0x578(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		FString LastCSVEventName; // 0x580(0x10)
		bool bCanStreamBuildingFoundationsIn; // 0x590(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x591(0x3) UNKNOWN PROPERTY
		int32_t AllPlayerTeleportedCount; // 0x594(0x4)
		FFortDelayRTMMData DelayPlayersFromReturningToLobbyData; // 0x598(0x10)
		FName NamedWeightForContainerLootRoll; // 0x5A8(0x4)
		float WeightForContainerLootRoll; // 0x5AC(0x4)
		unsigned char UnknownData11_6[0x30]; // 0x5B0(0x30) UNKNOWN PROPERTY
		TArray<FFortSpecialEventEmoteData> SpecialEventEmoteData; // 0x5E0(0x10)
		FGameplayTagContainer BlockedNativeActions; // 0x5F0(0x20)
		EFortItemType DesiredQuickbarItemTypeAfterRemove; // 0x610(0x1)
		unsigned char UnknownData12_6[0x7]; // 0x611(0x7) UNKNOWN PROPERTY
		UInputComponent* SpecialEventsInputComponent; // 0x618(0x8)
		bool bLockingOnFocalPoint; // 0x620(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x621(0x7) UNKNOWN PROPERTY
		TArray<FFortSpecialEventOverrideParts> SpecialEventOverrideParts; // 0x628(0x10)
		FFortSpecialEventGEData GameplayEffectToApplyOnSwapToDefault; // 0x638(0x10)
		TMap<FUniqueNetIdRepl, int32_t> OverridePartsArrayIndexMap; // 0x648(0x50)
		TArray<FFortSpecialEventGEData> GameplayEffectsToApplyOnLogin; // 0x698(0x10)
		UClass* ControllerComponentClassOverride; // 0x6A8(0x8)
		TArray<FSpecialEventMapData> TerrainMapsToUnload; // 0x6B0(0x10)
		unsigned char UnknownData14_6[0x10]; // 0x6C0(0x10) UNKNOWN PROPERTY
		TArray<AFortPlayerControllerAthena*> UnhandledPlayerControllers; // 0x6D0(0x10)
		TArray<FName> HLODActorsToHideNames; // 0x6E0(0x10)
		bool bForceAllowCloth; // 0x6F0(0x1)
		unsigned char UnknownData15_6[0x1]; // 0x6F1(0x1) UNKNOWN PROPERTY
		bool bManageBackfill; // 0x6F2(0x1)
		unsigned char UnknownData16_6[0x1]; // 0x6F3(0x1) UNKNOWN PROPERTY
		int32_t PlayerCountToTriggerBackfill; // 0x6F4(0x4)
		bool bWaitForPlayerCountToTriggerBackfill; // 0x6F8(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x6F9(0x3) UNKNOWN PROPERTY
		float UpdateBackfillStatusTime; // 0x6FC(0x4)
		unsigned char UnknownData18_6[0x10]; // 0x700(0x10) UNKNOWN PROPERTY
		bool bServerHasBackfillActive; // 0x710(0x1)
		bool bCanToggleCursorModeInStasis; // 0x711(0x1)
		unsigned char UnknownData19_6[0x6]; // 0x712(0x6) UNKNOWN PROPERTY
		FScalableFloat MannequinRecentlyRenderedCheckToleranceValue; // 0x718(0x28)
		TArray<ASpecialEventPlayerMannequin*> SpecialEventMannequins; // 0x740(0x10)
		TArray<UClass*> ActorSpawnDelegateClasses; // 0x750(0x10)
		unsigned char UnknownData20_7[0x48]; // 0x760(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent");
			return ret;
		}

		void WarmUpIslandUpdated(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FEF50(relative to base address)
		void UpdateBackfillStatus(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void UnloadTerrainMaps(FGameplayTag& MapTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7514FEEC4(relative to base address)
		void ToggleHUDs(bool bHide); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FEE44(relative to base address)
		void ToggleDisableWeapons(bool bDisableWeapons); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FED5C(relative to base address)
		void ToggleDisableParachutes(bool bDisable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FECDC(relative to base address)
		void ToggleAllPlayersInvincibility(bool bInvincible); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FEC5C(relative to base address)
		void TeleportAllPlayers(FGameplayTagContainer EventTags, int32_t TeleportsPerFrame, int32_t SafeZoneIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE994(relative to base address)
		void SwapBodyParts(int32_t ArrayIndex, AFortPlayerController* FortPC); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE8D0(relative to base address)
		void StartSafeZoneOverrideForEvent(int32_t SafeZoneIndexForEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE850(relative to base address)
		void ShrinkSafeZone(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE754(relative to base address)
		void SetWeightForContainerLootRoll(float Weight); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE6D4(relative to base address)
		void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE46C(relative to base address)
		void SetNamedWeightForContainerLootRoll(FName WeightName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE370(relative to base address)
		void SetMatchTime(int32_t NewMatchTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE2A0(relative to base address)
		void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE1D8(relative to base address)
		void SetIsSimulatingDamage(bool bIsSimulating); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE158(relative to base address)
		void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE09C(relative to base address)
		void SetCanStreamBuildingFoundationsIn(bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FDFD4(relative to base address)
		void SetAdditionalViewpoint(FVector WorldLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7514FDBB0(relative to base address)
		void SendToNightNight(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ResumeWinCondition(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FDB9C(relative to base address)
		void ResetWinConditionProgressToZero(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FDB88(relative to base address)
		void ResetWinCondition(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FDB74(relative to base address)
		void ResetSpecialEventAircraft(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FDB38(relative to base address)
		void ResetSafeZoneOverrideAfterEvent(int32_t MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FDA40(relative to base address)
		void ResetMatchTimeToPrevious(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FD9EC(relative to base address)
		void RemoveFromBlockedNativeActions(FGameplayTagContainer& Actions); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E311514(relative to base address)
		void PushSpecialEventEmoteInputComponent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FD9D8(relative to base address)
		void PopSpecialEventEmoteInputComponent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FD9C4(relative to base address)
		void PlacePlayersInAircraft(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FD9B0(relative to base address)
		void PauseWinCondition(bool bLockScores); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FD8D4(relative to base address)
		void PauseSupplyDrops(bool bPause); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FD7FC(relative to base address)
		void PauseStormProgression(bool bPause); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FD77C(relative to base address)
		void PauseStormDamage(bool bPause); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FD6B4(relative to base address)
		void OnWarmUpTeleportComplete(AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD524(relative to base address)
		void OnRep_TerrainMapsToUnload(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD3A8(relative to base address)
		void OnRep_LastCSVEventName(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD364(relative to base address)
		void OnRep_GameResumed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD350(relative to base address)
		void OnRep_DelayPlayersFromReturningToLobbyData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD2F8(relative to base address)
		void OnRep_bPlayersAreInvincible(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD44C(relative to base address)
		void OnRep_bLockingOnFocalPoint(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD438(relative to base address)
		void OnRep_bDisableHUD(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD424(relative to base address)
		void OnRep_bCanStreamBuildingFoundationsIn(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD410(relative to base address)
		void OnRep_AllPlayerTeleportedCount(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C62D000(relative to base address)
		void OnRep_Aircraft(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD224(relative to base address)
		void OnRep_AdditionalViewpoint(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD210(relative to base address)
		void OnGameViewportActivationChanged(bool bHasFocus); // Flags: Final|Native|Public, Memory Exec: 0x7FF7514FC9E0(relative to base address)
		void OnAircraftFlightEnded(AFortAthenaAircraft* FortAthenaAircraft); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FC960(relative to base address)
		void OnAircraftExitedDropZone(AFortAthenaAircraft* FortAthenaAircraft); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FC8E0(relative to base address)
		void OnAircraftEnteredDropZone(AFortAthenaAircraft* FortAthenaAircraft); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FC860(relative to base address)
		void OnActorSpawned(AActor* Actor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActorPreSpawnInitialization(AActor* Actor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyClientsGameResumed(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FC7A4(relative to base address)
		void NetMulticast_CheatClearSpecialEventGameUserSettings(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF74E7775F4(relative to base address)
		void JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7514FC508(relative to base address)
		void HandleSpecialEventMannequinDestroyed(AActor* MannequinActor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FC488(relative to base address)
		bool GetHasInfiniteSafeZonePhase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FD74350(relative to base address)
		void ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7514FC090(relative to base address)
		void FlushUnhandledPlayerControllers(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FC07C(relative to base address)
		void CloseParachutes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FBD88(relative to base address)
		void ClearBlockedNativeActions(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ClearAdditionalViewpoint(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FBD74(relative to base address)
		void ChangeWinCondition(float NewGoalScore); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FBCF4(relative to base address)
		void AutobalanceTargetScore(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FBCE0(relative to base address)
		void AddToBlockedNativeActions(FGameplayTagContainer& Actions, bool bCancelAbilities); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7514FBBC8(relative to base address)
		void AddCSVEvent(FString CSVEventName, bool bShouldRepToClient); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FBA44(relative to base address)
		void AddClientCSVEvent(FString CSVEventName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FBB38(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
	// Inherited from UFortCameraMode_FocalPoint -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x8 (0x1E40 - 0x1E38)
	class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint	
	{
	public:
		float OverrideTransitionTime; // 0x1E38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1E3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint");
			return ret;
		}

		void UpdateCameraBP(AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOverrideTransitionTime(float InTransitionTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514FE3EC(relative to base address)
		void OnBecomeInactiveBP(AActor* ViewTarget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBecomeActiveBP(AActor* ViewTarget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x880 (0x920 - 0xA0)
	class UFortCharacterMovementMutatorComponent : public UActorComponent	
	{
	public:
		ACharacter* CharacterOwner; // 0xA0(0x8)
		UFortMovementComp_CharacterAthena* MovementComponent; // 0xA8(0x8)
		UFortMovementComp_CharacterAthena* CDOMovementComponent; // 0xB0(0x8)
		unsigned char UnknownData00_6[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY
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
		AActor* BuffetBubblesFollowActor; // 0x310(0x8)
		FVector BuffetBubblesInitialFollowBoxOffsetPercent; // 0x318(0x18)
		unsigned char UnknownData01_6[0xE0]; // 0x330(0xE0) UNKNOWN PROPERTY
		FBuffetBubblesReplicatedData BuffetBubblesReplicatedData; // 0x410(0x80)
		unsigned char UnknownData02_6[0x280]; // 0x490(0x280) UNKNOWN PROPERTY
		FScalableFloat BuffetBubblesIntroSpeed; // 0x710(0x28)
		unsigned char UnknownData03_6[0x8]; // 0x738(0x8) UNKNOWN PROPERTY
		FTransform BuffetBubblesIntroTargetTransform; // 0x740(0x60)
		FScalableFloat BuffetFlyingMaxPitchDegrees; // 0x7A0(0x28)
		FScalableFloat BuffetFlyingMaxSpeed; // 0x7C8(0x28)
		FScalableFloat BuffetFlyingVelocityDirectionInterpSpeed; // 0x7F0(0x28)
		FRotator BuffetFlyingRotationRate; // 0x818(0x18)
		float BuffetFlyingMaxSpeedOverride; // 0x830(0x4)
		float BuffetFlyingMaxSpeedInterpSpeed; // 0x834(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x838(0x4) UNKNOWN PROPERTY
		float BuffetFlyingVelocityDirectionInterpSpeedOverride; // 0x83C(0x4)
		FScalableFloat BuffetFlyingRicochetSphereSize; // 0x840(0x28)
		FScalableFloat BuffetFlyingRicochetRotationDuration; // 0x868(0x28)
		FScalableFloat BuffetFlyingRicochetControlRotationInterpSpeed; // 0x890(0x28)
		unsigned char UnknownData05_6[0x48]; // 0x8B8(0x48) UNKNOWN PROPERTY
		FBuffetFlyingRicochetReplicatedData BuffetFlyingRicochetReplicatedData; // 0x900(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent");
			return ret;
		}

		void SetBuffetBubblesIntroTargetTransform(FTransform& Transform); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7514FDE9C(relative to base address)
		void SetBuffetBubblesInitialFollowBoxOffsetPercent(FVector BoxOffsetPercent); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7514FDD64(relative to base address)
		void SetBuffetBubblesFollowActor(AActor* Actor); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514FDCD0(relative to base address)
		void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74F5AB878(relative to base address)
		void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514FD5D0(relative to base address)
		void OnRep_BuffetFlyingRicochetReplicatedData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514FD290(relative to base address)
		void OnRep_BuffetBubblesFollowActor(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514FD27C(relative to base address)
		void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514FCAE0(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortCharacterMovementMutator
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x340 - 0x338)
	class AFortCharacterMovementMutator : public AFortAthenaMutator	
	{
	public:
		UClass* MovementMutatorComponentClass; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator");
			return ret;
		}

		void OnFortPawnChanged(AFortPawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C088608(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x100 - 0xA8)
	class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnStartGameplayOutro; // 0xD8(0x10)
		FMulticastInlineDelegate BP_OnGameplayIntroFinished; // 0xE8(0x10)
		bool bIsReadyForGameplay; // 0xF8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic");
			return ret;
		}

		void ShowCinematicWidget(FName WidgetName); // Flags: Final|BlueprintCosmetic|Exec|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751551538(relative to base address)
		void SetReadyForGameplay(bool bIsReady); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		void ServerOnGameplayIntroFinished(); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74E217D18(relative to base address)
		void OnRep_bIsReadyForGameplay(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515503CC(relative to base address)
		void HideHUDElementsForLoadingScreen(bool bHideElements); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75154F584(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UFortControllerComponent_SpecialEvent : public UFortControllerComponent	
	{
	public:
		bool bForceBuildModeInputComponentToNotConsumeInputs; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortAthenaMutator_SpecialEvent*> SpecialEventMutator; // 0xAC(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent");
			return ret;
		}

		void ServerHandleSpecialClientEvent(FGameplayTag EventTag, int32_t Count); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF751550B50(relative to base address)
		void SendSpecialClientEvent(FGameplayTag EventTag, int32_t Count); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75155097C(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortCustomTickComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x100 (0x1A0 - 0xA0)
	class UFortCustomTickComponent : public UActorComponent	
	{
	public:
		EFortCustomTickComponentCondition Condition; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FGameplayTag AuthorityQualitySettingsTag; // 0xA4(0x4)
		FGameplayTag DefaultClientQualitySettingsTag; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TMap<ECommonPlatformType, FGameplayTag> ClientPlatformQualitySettingsTagMap; // 0xB0(0x50)
		TMap<FGameplayTag, FCustomTickComonentQualitySettings> QualitySettingsMap; // 0x100(0x50)
		float WasRecentlyRenderedTolerance; // 0x150(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCustomTick; // 0x158(0x10)
		unsigned char UnknownData03_7[0x38]; // 0x168(0x38) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner");
			return ret;
		}

		void BP_OnActorSpawnedPerRelevancyGroup(TArray<AActor*>& InSpawnedActors); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class USpecialEventAudioAnalysisBaseComponent : public UActorComponent	
	{
	public:
		float CurrentTime; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		ULoudnessNRT* LoudnessNRT; // 0xA8(0x8)
		UOnsetNRT* OnsetNRT; // 0xB0(0x8)
		UConstantQNRT* ConstantQNRT; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent");
			return ret;
		}

		void UpdateTime(float NewTime); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751551B94(relative to base address)
		void UpdateOnset(float Time); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7505DEB90(relative to base address)
		void UpdateLoudness(float Time); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74CE00A98(relative to base address)
		void UpdateConstantQ(float Time); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74CE00C08(relative to base address)
		UOnsetNRT GetOnsetNRT(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7491595E0(relative to base address)
		ULoudnessNRT GetLoudnessNRT(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C333214(relative to base address)
		float GetCurrentNormalizedLoudness(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6F874(relative to base address)
		UConstantQNRT GetConstantQNRT(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EF53020(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
	// Inherited from USpecialEventAudioAnalysisBaseComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xE8 - 0xC0)
	class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent	
	{
	public:
		TArray<FSpecialEventAudioHapticsAction> HapticsActions; // 0xC0(0x10)
		bool bStartHapticsOnBeginPlay; // 0xD0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		float IntensityMultiplier; // 0xD4(0x4)
		unsigned char UnknownData01_7[0x10]; // 0xD8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent");
			return ret;
		}

		void StopHaptics(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751551A38(relative to base address)
		void StartHaptics(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751551A24(relative to base address)
		bool AreHapticsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F71118C(relative to base address)
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

		bool SpecialEventCursorTrace(FHitResult& OutHitResult, USpecialEventCursorPawnComponent* CursorPawnComponent, FGameplayTag& CursorModeTag, UCameraComponent* CameraComponent, FVector& CursorWorldDirection); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7515515B4(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x338 (0x3D8 - 0xA0)
	class USpecialEventCursorPawnComponent : public UPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDesiredVisibilityChanged; // 0xA8(0x10)
		bool bAllowOnNonOwningClients; // 0xB8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		APawn* OwningPawn; // 0xC0(0x8)
		AFortPlayerController* OwningController; // 0xC8(0x8)
		unsigned char UnknownData02_6[0x10]; // 0xD0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCursorModeChanged; // 0xE0(0x10)
		FGameplayTag DefaultCursorModeTag; // 0xF0(0x4)
		bool bDefaultCursorModeAutoActivate; // 0xF4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		TMap<FGameplayTag, FSpecialEventCursorMode> CursorModes; // 0xF8(0x50)
		TArray<FSpecialEventCursorStackEntry> CursorStack; // 0x148(0x10)
		FSpecialEventCursorStackEntry ReplicatedCursorStackEntry; // 0x158(0xC)
		unsigned char UnknownData04_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		UClass* InputHelperClass; // 0x168(0x8)
		bool bUseGamepadLookInput; // 0x170(0x1)
		bool bUseGamepadMoveInput; // 0x171(0x1)
		bool bUseGyroInput; // 0x172(0x1)
		bool bObeyInvertedPitchUserSetting; // 0x173(0x1)
		unsigned char UnknownData05_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		UCommonInputSubsystem* CommonInputSubsystem; // 0x178(0x8)
		USpecialEventInputHelperComponent* InputHelperComponent; // 0x180(0x8)
		unsigned char UnknownData06_6[0x40]; // 0x188(0x40) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnViewportLocationChanged; // 0x1C8(0x10)
		FScalableFloat NonOwningInterpSpeed; // 0x1D8(0x28)
		FScalableFloat MinDeltaToSendWorldLocationToServer; // 0x200(0x28)
		unsigned char UnknownData07_6[0x8]; // 0x228(0x8) UNKNOWN PROPERTY
		FVector ReplicatedWorldLocation; // 0x230(0x18)
		unsigned char UnknownData08_6[0x60]; // 0x248(0x60) UNKNOWN PROPERTY
		TArray<UUserWidget*> Widgets; // 0x2A8(0x10)
		unsigned char UnknownData09_6[0x101]; // 0x2B8(0x101) UNKNOWN PROPERTY
		bool bAdditiveRotationAllowedByDefault; // 0x3B9(0x1)
		unsigned char UnknownData10_6[0x1]; // 0x3BA(0x1) UNKNOWN PROPERTY
		bool bZoomAllowedByDefault; // 0x3BB(0x1)
		FName ZoomActionName; // 0x3BC(0x4)
		unsigned char UnknownData11_6[0x8]; // 0x3C0(0x8) UNKNOWN PROPERTY
		UCameraComponent* AdditiveOffsetCameraComponent; // 0x3C8(0x8)
		unsigned char UnknownData12_7[0x8]; // 0x3D0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent");
			return ret;
		}

		void SetZoomAllowed(bool bInZoomAllowed); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74ECD327C(relative to base address)
		void SetAllowOnNonOwningClients(bool bAllow); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751550EB8(relative to base address)
		void SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751550E38(relative to base address)
		void ServerOnWorldLocationChanged(FVector WorldLocation); // Flags: Final|Net|Native|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF751550D28(relative to base address)
		void PushCursor(FGameplayTag& CursorModeTag, UObject* InstigatingObject, bool bActivate); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7515507D0(relative to base address)
		void PopCursor(FGameplayTag& CursorModeTag, UObject* InstigatingObject, bool bDeactivateIfStackEmpty); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751550638(relative to base address)
		void PopAllCursorsForObject(UObject* InstigatingObject, bool bDeactivateIfStackEmpty); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751550570(relative to base address)
		void OnRep_ReplicatedWorldLocation(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75155028C(relative to base address)
		void OnRep_ReplicatedCursorStackEntry(FSpecialEventCursorStackEntry& OldCursorStackEntry); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7515501F0(relative to base address)
		void OnRep_bAllowOnNonOwningClients(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515503B8(relative to base address)
		void OnLocallyControlledCursorVisibilityChanged(USpecialEventCursorPawnComponent* CursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75154FEA4(relative to base address)
		void OnInputMethodChanged(ECommonInputType InputType); // Flags: Final|Native|Private, Memory Exec: 0x7FF75154FE24(relative to base address)
		void OnHUDPostRender(AHUD* HUD, UCanvas* Canvas); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void MoveInputUpdate(FVector& InInputVector); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF75154F960(relative to base address)
		void LookInputUpdate(FVector& InInputVector); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF75154F7B0(relative to base address)
		bool IsZoomAllowed(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE98F10(relative to base address)
		bool IsLocallyControlled(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F6A3958(relative to base address)
		bool IsAdditiveRotationAllowed(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154F798(relative to base address)
		void InputPressed(FName& ActionName, bool bPressed); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75154F674(relative to base address)
		void GyroInputUpdate(FVector& InInputVector); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF75154F42C(relative to base address)
		bool GetWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154F2C0(relative to base address)
		bool GetViewportSize(FVector2D& OutViewportSize); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154F22C(relative to base address)
		bool GetViewportLocation(FVector2D& OutViewportLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154F18C(relative to base address)
		bool GetViewportCenter(FVector2D& OutViewportCenter); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154F0C8(relative to base address)
		USpecialEventCursorPawnComponent GetSpecialEventCursorPawnComponent(APawn* Pawn, FGameplayTag& CursorModeTag, bool bMustBeActive); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75154E894(relative to base address)
		FVector2D GetNormalizedLocation(); // Flags: Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C39EDC0(relative to base address)
		APlayerController GetLocalController(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E80C(relative to base address)
		ECommonInputType GetInputType(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E7D0(relative to base address)
		FGameplayTagContainer GetCursorModeTagsForWidget(UUserWidget* Widget); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E59C(relative to base address)
		UUserWidget GetCurrentWidget(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E544(relative to base address)
		bool GetCurrentHitResult(FHitResult& OutHitResult); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75154E2FC(relative to base address)
		FGameplayTag GetCurrentCursorModeTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8550(relative to base address)
		FVector2D GetCenteredWidgetLocation(UUserWidget* Widget, FVector2D& ViewportLocation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E12C(relative to base address)
		UCameraComponent GetCameraComponent(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E108(relative to base address)
		bool ConvertWorldToViewportLocation(FVector2D& OutViewportLocation, FVector& WorldLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154D3A0(relative to base address)
		bool ConvertWorldToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector& WorldLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154D274(relative to base address)
		bool ConvertViewportToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& ViewportLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154D0C0(relative to base address)
		bool ConvertViewportToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector2D& ViewportLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154CFD0(relative to base address)
		bool ConvertNormalizedToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& NormalizedLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154CE1C(relative to base address)
		bool ConvertNormalizedToViewportLocation(FVector2D& OutViewportLocation, FVector2D& NormalizedLocation); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF75154CD2C(relative to base address)
		bool CanBeVisible(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154CD08(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
	// Inherited from UFortWeaponComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class USpecialEventCursorWeaponComponent : public UFortWeaponComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCursorPawnComponentSet; // 0xA8(0x10)
		UClass* CursorPawnComponentClass; // 0xB8(0x8)
		FGameplayTag CursorModeTag; // 0xC0(0x4)
		bool bAlignFXToCursor; // 0xC4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC5(0x3) UNKNOWN PROPERTY
		AFortWeapon* OwningWeapon; // 0xC8(0x8)
		AFortPlayerPawn* Pawn; // 0xD0(0x8)
		USpecialEventCursorPawnComponent* CursorPawnComponent; // 0xD8(0x8)
		unsigned char UnknownData02_7[0x58]; // 0xE0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent");
			return ret;
		}

		void OnUnEquip(AFortWeapon* Weapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515504F0(relative to base address)
		void OnRep_CursorPawnComponent(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751550198(relative to base address)
		void OnPlayImpactFX(AFortWeapon* Weapon, FHitResult& HitResult, UFXSystemComponent* FXSystemComponent); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75154FFF4(relative to base address)
		void OnGetAimRotOverride(AFortWeapon* Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverride, bool& bOutExecutionResult); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF75154FCC0(relative to base address)
		void OnEquip(AFortWeapon* Weapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF75154FC40(relative to base address)
		void OnBeamFired(AFortWeapon* Weapon, bool bUsePersistentBeam, UFXSystemComponent* PSC, FVector& BeamOrigin, FVector& HitLocation); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF75154FA24(relative to base address)
		USpecialEventCursorPawnComponent GetSpecialEventCursorPawnComponentForWeapon(AFortWeapon* Weapon); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154EA6C(relative to base address)
		USpecialEventCursorPawnComponent GetSpecialEventCursorPawnComponentForCurrentWeapon(AFortPlayerPawn* Pawn); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154E9DC(relative to base address)
		USpecialEventCursorPawnComponent GetCursorPawnComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D691680(relative to base address)
		USpecialEventCursorWeaponComponent GetCurrentSpecialEventCursorWeaponComponent(AFortPlayerPawn* Pawn); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154E4C4(relative to base address)
		bool GetCurrentHitResult(FHitResult& OutHitResult); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF75154E3E0(relative to base address)
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

		void StreamOutAllBuildingFoundations(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751551A4C(relative to base address)
		void SetNextLoadingScreen(UObject* WorldContextObject, UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7515512F8(relative to base address)
		void SetLODOnLandscapProxies(UObject* WorldContextObject, bool bForced, int32_t InLODValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751551198(relative to base address)
		void HideSkydivingShadowProxy(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154F604(relative to base address)
		FString GetSpecialEventPlayerDisplayName(AFortPlayerControllerAthena* LocalController, AFortPlayerStateAthena* PlayerState); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154EC9C(relative to base address)
		AFortAthenaMutator_SpecialEvent GetSpecialEventMutator(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75154EC1C(relative to base address)
		bool GetHasInfiniteSafeZonePhase(UObject* WorldContextObject); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75154E744(relative to base address)
		FString GetActorRoleString(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154E074(relative to base address)
		FString GetActorNetModeString(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154DFE0(relative to base address)
		void ForceUpdateGrass(UObject* WorldContextObject, FVector Location); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75154DDB0(relative to base address)
		void ForceDestroyComponents(TArray<UActorComponent*>& Components, bool bPromoteChildren, FString LogContext); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75154DB5C(relative to base address)
		UFortControllerComponent_SpecialEvent FindSpecialEventComponent(AController* Controller); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154DAA8(relative to base address)
		UFortControllerComponent_GameplayCinematic FindGameplayCinematicComponent(AController* Controller); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154D8D0(relative to base address)
		bool DetachPawnFromComponent(AFortPawn* Pawn, USceneComponent* Component, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154D754(relative to base address)
		bool DetachPawn(AFortPawn* Pawn, EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154D61C(relative to base address)
		void CreateSpecialEventPlayerEliminationWorldMarker(AFortPlayerControllerAthena* LocalController, AFortPlayerStateAthena* VictimPlayerState, FVector& DeathLocation); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75154D4CC(relative to base address)
		bool AttachPawnToComponent(AFortPawn* Pawn, USceneComponent* Component, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154C8E4(relative to base address)
		void AddSpecialEventRecentElimination(FVector& Location, AFortPlayerStateAthena* PlayerState); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75154C2C8(relative to base address)
		void AddSpecialEventKillFeedEntry(UObject* WorldContextObject, AFortPlayerStateAthena* VictimPlayerState, AFortPlayerStateAthena* KillerPlayerState, FText NonPlayerVictimName, FText NonPlayerKillerName, FGameplayTag& DeathCauseTag, EDeathCauseReason DeathCauseReason, float Distance); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75154BFA8(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnReady; // 0x30(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady");
			return ret;
		}

		UFortAsyncAction_GameplayCinematicComponentReady FindGameplayCinematicComponentAsync(AController* Conroller); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154D95C(relative to base address)
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
		unsigned char UnknownData00_7[0x24]; // 0xC4(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent");
			return ret;
		}

		void SpecialEventGameUserSettings_ToggleDebug(); // Flags: Final|BlueprintCosmetic|Exec|Native|Public, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SpecialEventGameUserSettings_SetData(FString Data); // Flags: Final|BlueprintCosmetic|Exec|Native|Public, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void SpecialEventGameUserSettings_LogData(); // Flags: Final|BlueprintCosmetic|Exec|Native|Public|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SpecialEventGameUserSettings_ClearData(); // Flags: Final|BlueprintCosmetic|Exec|Native|Public, Memory Exec: 0x7FF751551928(relative to base address)
		void SetSavingBlocked(bool bBlocked); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515514B8(relative to base address)
		void SetData(FString Data, bool bAllowSave, bool bSaveNow); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751550F38(relative to base address)
		void ParseLoadedData(FString Data); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		USpecialEventGameUserSettingsControllerComponent GetSpecialEventGameUserSettingsControllerComponent(UObject* WorldContextObject); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154EAEC(relative to base address)
		void GetData(ESpecialEventGameUserSettingsResult& OutResult, FString& OutData); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF75154E644(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAsyncAction_SpecialEventGameUserSettingsReady : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnReady; // 0x30(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady");
			return ret;
		}

		UFortAsyncAction_SpecialEventGameUserSettingsReady SpecialEventGameUserSettingsReadyAsync(UObject* WorldContextObject); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751551850(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialEventPhase
	// Inherited from AActor -> UObject
	// Size: 0xB0 (0x340 - 0x290)
	class ASpecialEventPhase : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x290(0x18) UNKNOWN PROPERTY
		FGameplayTag PhaseTag; // 0x2A8(0x4)
		float LevelSequenceTime; // 0x2AC(0x4)
		bool bApplyGameplayEffects; // 0x2B0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		TArray<UClass*> GameplayEffectsToApply; // 0x2B8(0x10)
		TArray<FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToApplyInfoList; // 0x2C8(0x10)
		TArray<FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToApplyInfoList; // 0x2D8(0x10)
		UClass* CameraModifierToApply; // 0x2E8(0x8)
		bool bRemoveModifierOnPhaseDeactivation; // 0x2F0(0x1)
		bool bRemoveGameplayEffects; // 0x2F1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2F2(0x6) UNKNOWN PROPERTY
		TArray<UClass*> GameplayEffectsToRemove; // 0x2F8(0x10)
		TArray<FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToRemoveInfoList; // 0x308(0x10)
		TArray<FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToRemoveInfoList; // 0x318(0x10)
		UCameraModifier* AppliedCameraModifier; // 0x328(0x8)
		TWeakObjectPtr<ASpecialEventScript*> SpecialEventScript; // 0x330(0x8)
		ESpecialEventPhaseState PhaseState; // 0x338(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x339(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventPhase");
			return ret;
		}

		void SetHUDElementVisibility(FGameplayTagContainer& HUDElementTags, bool bHideElements); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751551054(relative to base address)
		void PrePhaseActivation_Server(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_PhaseState(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515501AC(relative to base address)
		void OnPhaseFinished(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75154FFE0(relative to base address)
		void OnPhaseDeactivation_Server(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPhaseDeactivation_Client(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPhaseActivation_Server(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPhaseActivation_Client(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FGameplayTag GetPhaseTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CD8228(relative to base address)
		AReplicatedLevelSequenceActor GetLevelSequenceActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E7E8(relative to base address)
		void DebugActivatePhase(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
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
		unsigned char UnknownData00_5[0x3]; // 0x609(0x3) UNKNOWN PROPERTY
		int32_t PlayerIndex; // 0x60C(0x4)
		FScalableFloat bUpdateLoadoutByPlayerIndexAtStartup; // 0x610(0x28)
		FScalableFloat bHideUntilPlayerIndexLoadoutApplied; // 0x638(0x28)
		TArray<FFortAthenaLoadout> DefaultLoadouts; // 0x660(0x10)
		TArray<FFortAthenaLoadout> OverrideLoadouts; // 0x670(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x680(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin");
			return ret;
		}

		void UpdateLoadoutByPlayerIndex(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751551B80(relative to base address)
		void SetPlayerIndex(int32_t NewPlayerIndex, bool bUpdate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515513F4(relative to base address)
		void RegisterWithSpecialEventMutator(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751550968(relative to base address)
		void HandleOnMutatorAdded(AFortGameplayMutator* NewMutator); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75154F504(relative to base address)
		void HandleCurrentPawnChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75154F4F0(relative to base address)
		int32_t GetRelevancyGroupIndex(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E870(relative to base address)
		FString GetLogString(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E830(relative to base address)
		void DestroyUnusedSkeletalMeshComponents(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75154D608(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float RewindLerpTime; // 0xB0(0x4)
		float DefaultRewindDuration; // 0xB4(0x4)
		float DefaultRewindPlaybackSpeed; // 0xB8(0x4)
		FSpecialEventRewindComponentStateData StateData; // 0xBC(0x8)
		float ReplicatedRewindDuration; // 0xC4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent");
			return ret;
		}

		bool TryStartRewinding(float duration, float PlaybackSpeed); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751551ABC(relative to base address)
		void OnRep_StateData(FSpecialEventRewindComponentStateData& OldStateData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751550324(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
	// Inherited from USpecialEventRewindComponent -> UActorComponent -> UObject
	// Size: 0x2C0 (0x388 - 0xC8)
	class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent	
	{
	public:
		bool bStartServerRecordingOnLastGroundFrame; // 0xC8(0x1)
		unsigned char UnknownData00_6[0x27]; // 0xC9(0x27) UNKNOWN PROPERTY
		FSpecialEventRewindComponentRecording_PlayerPawn ReplicatedRecording; // 0xF0(0x20)
		unsigned char UnknownData01_6[0x118]; // 0x110(0x118) UNKNOWN PROPERTY
		FSpecialEventRewindComponentRecordingFastArray_PlayerPawn ReplicatedRecordingFastArray; // 0x228(0x118)
		unsigned char UnknownData02_7[0x48]; // 0x340(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn");
			return ret;
		}

		void OnServerLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75155041C(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialEventScript
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x240 (0x4D0 - 0x290)
	class ASpecialEventScript : public AInfo	
	{
	public:
		FMulticastInlineDelegate OnSpecialEventPhaseActivated; // 0x290(0x10)
		FMulticastInlineDelegate OnSpecialEventPhaseDeactivated; // 0x2A0(0x10)
		TArray<FPhaseInfo> PhaseInfoArray; // 0x2B0(0x10)
		FScalableFloat DropDeadWindowSizeInSeconds; // 0x2C0(0x28)
		FScalableFloat DelayAfterConentLoad; // 0x2E8(0x28)
		bool bWaitForSEMutator; // 0x310(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x311(0x7) UNKNOWN PROPERTY
		FScalableFloat bWaitForWarmupToEnd; // 0x318(0x28)
		FScalableFloat DelayAfterWarmup; // 0x340(0x28)
		FScalableFloat ForceReturnToMainMenuTime; // 0x368(0x28)
		FScalableFloat ForceReturnToMainMenuTimeRandomness; // 0x390(0x28)
		FScalableFloat MinDelayReturnToMainMenu; // 0x3B8(0x28)
		FScalableFloat MaxDelayReturnToMainMenu; // 0x3E0(0x28)
		FScalableFloat bPreloadAllLevelsOnServer; // 0x408(0x28)
		FScalableFloat bAllowGarbageCollectionAfterUnload; // 0x430(0x28)
		FScalableFloat bFullPurgeGC; // 0x458(0x28)
		FScalableFloat bEnableEndOfEventTimer; // 0x480(0x28)
		int32_t ReplicatedActivePhaseIndex; // 0x4A8(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x4AC(0xC) UNKNOWN PROPERTY
		UMeshNetworkComponent* MeshNetworkComponent; // 0x4B8(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x4C0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventScript");
			return ret;
		}

		void StartEventAtIndex(int32_t InStartingIndex, float SequenceTimeOffset); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751551960(relative to base address)
		void SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751551290(relative to base address)
		void OnRep_ReplicatedActivePhaseIndex(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515501D4(relative to base address)
		int32_t GetActivePhaseIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154DFC8(relative to base address)
		ASpecialEventScript Get(UObject* WorldContextObject, bool bErrorIfNull); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75154DF04(relative to base address)
		void BP_OnScriptReady(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnScriptFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AttemptStartNextPhase(FGameplayTag CurrentPhaseTag); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75154CBF8(relative to base address)
		void AttemptFinishPhase(FGameplayTag PhaseTag); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75154CAE8(relative to base address)
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
		unsigned char UnknownData00_6[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		UMeshNetworkComponent* MeshNetworkComponent; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor");
			return ret;
		}

		void OnRep_RootStartTime(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515502A4(relative to base address)
		void MeshRootStartEvent(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF75154F94C(relative to base address)
		void MeshRootStartCalendarTimerOnly(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF75154F8C4(relative to base address)
		void MeshRootStartCalendarTimer(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF75154F8B0(relative to base address)
		void MeshRootResetEvent(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF75154F89C(relative to base address)
		void MeshRootLogCalendarTimer(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF75154F888(relative to base address)
		void MeshRootClearCalendarTimer(); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF75154F874(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialEventStatComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class USpecialEventStatComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnValueChangedDelegate; // 0xA0(0x10)
		TArray<FSpecialEventStatDefinition> StatDefinitions; // 0xB0(0x10)
		FSpecialEventStatArray StatFastArray; // 0xC0(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialEventStatComponent");
			return ret;
		}

		FSpecialEventStatArrayEntry GetStat(bool& bOutValid, FGameplayTag LookupTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75154EF54(relative to base address)
		FSpecialEventStatArrayEntry GetSpecialEventStat(bool& bOutValid, AActor* Actor, FGameplayTag LookupTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75154ED74(relative to base address)
		bool AdjustStat(FGameplayTag LookupTag, float Adjustment, bool bLogError); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75154C648(relative to base address)
		void AdjustSpecialEventStat(AActor* Actor, FGameplayTag LookupTag, float Adjustment); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75154C448(relative to base address)
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
		unsigned char UnknownData00_7[0x10]; // 0x138(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.DamageRecordEntry");
			return ret;
		}

		void OnRep_DamageTotal(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75155638C(relative to base address)
	};


	// Class SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
	// Inherited from USpecialRelevancyComponentBase -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase	
	{
	public:
		FScalableFloat RelevancyDeathTimeLength; // 0xA0(0x28)
		bool bSetLifespanOnLastRelevancyDeath; // 0xC8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float OwnerMaxHealthCached; // 0xCC(0x4)
		TArray<UDamageRecordEntry*> ReplicatedDamageRecords; // 0xD0(0x10)
		FMulticastInlineDelegate OnSpecialRelevancyDeath; // 0xE0(0x10)
		FMulticastInlineDelegate OnSpecialRelevancyDamage; // 0xF0(0x10)
		AFortAthenaMutator_SpecialRelevancy* CachedMutator; // 0x100(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent");
			return ret;
		}

		void OnKilled(AFortPlayerState* KillingPlayerState, int32_t RelevancyGroupIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamaged(AFortPlayerState* DamagingPlayerState, int32_t RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetHealthPercentFromRelevancyIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515562FC(relative to base address)
		float GetHealthPercent(AActor* RelevancyActor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515561B4(relative to base address)
		float GetHealthFromRelevancyIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75155626C(relative to base address)
		float GetHealth(AActor* RelevancyActor); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515561B4(relative to base address)
		float ClientGetHealthPercent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75155618C(relative to base address)
		float ClientGetHealth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751556164(relative to base address)
	};

}
