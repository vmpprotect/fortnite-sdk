#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarCore.DelMarPlayerStateComponent
	// Inherited from UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarPlayerStateComponent : public UPlayerStateComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerStateComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayerPreferencesComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UDelMarPlayerPreferencesComponent : public UDelMarPlayerStateComponent	
	{
	public:
		FMulticastInlineDelegate OnUseToggleOnExpandableHudWidgetChanged; // 0xA0(0x10)
		FMulticastInlineDelegate OnUseIconOnlyPlayerNameplatesChanged; // 0xB0(0x10)
		FMulticastInlineDelegate OnTouchControlsLayoutChanged; // 0xC0(0x10)
		EDelMarInvertSteerMethod InvertSteerMethod; // 0xD0(0x1)
		bool bPitchInverted; // 0xD1(0x1)
		bool bVerticalKickflipInverted; // 0xD2(0x1)
		bool bAerialPitchActivationEnabled; // 0xD3(0x1)
		bool bUseToggleOnExpandableHudWidget; // 0xD4(0x1)
		bool bUseIconOnlyPlayerNameplates; // 0xD5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xD6(0x2) UNKNOWN PROPERTY
		FGameplayTag TouchControlsLayout; // 0xD8(0x4)
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0xDC(0x8)
		TWeakObjectPtr<UFortClientSettingsRecord*> FortSettings; // 0xE4(0x8)
		unsigned char UnknownData01_7[0xC]; // 0xEC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerPreferencesComponent");
			return ret;
		}

		void TryGetFortClientSettings(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E7708(relative to base address)
		void ServerUpdateVerticalKickflipInverted(bool bInVerticalKickflipInverted); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF75077F0AC(relative to base address)
		void ServerUpdatePitchInverted(bool bInPitchInverted); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74E2450F4(relative to base address)
		void ServerUpdateAerialPitchActivation(bool bInAerialPitchActivationEnabled); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74FC65590(relative to base address)
		void ServerSetInvertSteerMethod(EDelMarInvertSteerMethod InInvertSteerMethod); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74D0993C0(relative to base address)
		void HandleVerticalKickflipInvertedSettingChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5D20(relative to base address)
		void HandleTouchControlsSettingsChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5BB8(relative to base address)
		void HandleLocalFortInputSettingsChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5BA4(relative to base address)
		void HandleInvertSteerSettingChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5A3C(relative to base address)
		void HandleIconOnlyNameplatesSettingChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5A14(relative to base address)
		void HandleAerialPitchActivationSettingChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5948(relative to base address)
		bool GetUseToggleOnExpandableHudWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517E58A0(relative to base address)
		bool GetUseIconOnlyPlayerNameplates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517E5888(relative to base address)
		FGameplayTag GetTouchControlsLayout(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C8DFC24(relative to base address)
	};


	// Class DelMarCore.DelMarRaceManager
	// Inherited from AActor -> UObject
	// Size: 0x220 (0x4B0 - 0x290)
	class ADelMarRaceManager : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x90]; // 0x290(0x90) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRaceFinished; // 0x320(0x10)
		FMulticastInlineDelegate OnRaceStarted; // 0x330(0x10)
		FMulticastInlineDelegate OnRaceCountdownStarted; // 0x340(0x10)
		FMulticastInlineDelegate OnRaceReset; // 0x350(0x10)
		FMulticastInlineDelegate OnPlayerFinishedRace; // 0x360(0x10)
		FMulticastInlineDelegate OnPlayerLapComplete; // 0x370(0x10)
		FMulticastInlineDelegate OnPlayerResetRun; // 0x380(0x10)
		bool bRaceStarted; // 0x390(0x1)
		bool bRaceFinished; // 0x391(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x392(0x6) UNKNOWN PROPERTY
		TArray<AFortPlayerState*> SpectatorPlayerStates; // 0x398(0x10)
		TArray<AFortPlayerState*> ActiveRacerPlayerStates; // 0x3A8(0x10)
		UDelMarRaceConfigComponent* RaceConfig; // 0x3B8(0x8)
		TWeakObjectPtr<ADelMarRaceLevelConfig*> ActiveRaceLevelConfig; // 0x3C0(0x8)
		UDelMarTimeManagerComponent* TimeManager; // 0x3C8(0x8)
		UDelMarRespawnManagerComponent* RespawnManager; // 0x3D0(0x8)
		UDelMarCheckpointManagerComponent* CheckpointManager; // 0x3D8(0x8)
		UDelMarRubberbandingManagerComponent* RubberbandingManager; // 0x3E0(0x8)
		UDelMarGameplayModifierComponent* GameplayModifierComponent; // 0x3E8(0x8)
		UDelMarPositionalTrackerComponent* PositionalTracker; // 0x3F0(0x8)
		UDelMarEliminationRaceManagerComponent* EliminationManager; // 0x3F8(0x8)
		UDelMarGlobalInputDisabler* InputDisablerComponent; // 0x400(0x8)
		UDelMarMatchEventSystemComponent* MatchEventSystemComponent; // 0x408(0x8)
		TSet<AFortPlayerState*> ManagedPlayerStates; // 0x410(0x50)
		TSet<TWeakObjectPtr> InactivePlayerStates; // 0x460(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRaceManager");
			return ret;
		}

		void UnregisterPlayerState(AFortPlayerState* InPlayerState, bool bSetAsInactive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518344B8(relative to base address)
		void UnregisterPlayerController(AController* InController, bool bSetAsInactive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518343F0(relative to base address)
		void UnregisterAllPlayers(bool bSetAsInactive); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751834370(relative to base address)
		void SetSpectatorAsPlayer(AFortPlayerState* PlayerState); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F0ABB50(relative to base address)
		void SetPlayerAsSpectator(AFortPlayerState* PlayerState); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518342D8(relative to base address)
		void SetActiveRaceLevelConfig(ADelMarRaceLevelConfig* InRaceLevelConfig); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F0AA3D0(relative to base address)
		void ResetRun(AFortPlayerState* PlayerState, bool bPlayerTriggered); // Flags: BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751833ACC(relative to base address)
		void ResetRace(bool bIsRoundReset); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751833A48(relative to base address)
		void RequestStartRace(bool bSkipCountdown); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518338B8(relative to base address)
		void RequestCountdownForPlayer(AFortPlayerState* PlayerState); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C5A4708(relative to base address)
		void RegisterPlayerState(AFortPlayerState* InPlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751833624(relative to base address)
		void RegisterPlayerController(AController* InController); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518335A4(relative to base address)
		void OnRep_ActiveRaceLevelConfig(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751833360(relative to base address)
		void NetMulticast_ResetRun(AFortPlayerState* InPlayerState, bool bPlayerTriggered); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF751833294(relative to base address)
		void NetMulticast_ResetRace(bool bNextRound); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF751833210(relative to base address)
		void NetMulticast_FinishRace(double RaceFinishedTime); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF74DDFDFC4(relative to base address)
		bool IsSpectator(AFortPlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751833170(relative to base address)
		bool IsActiveRacer(AFortPlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518330E4(relative to base address)
		void HandleRegisteredPlayerPawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751832F60(relative to base address)
		UDelMarTimeManagerComponent GetTimeManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751780F94(relative to base address)
		TArray GetSpectators(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832E2C(relative to base address)
		UDelMarRubberbandingManagerComponent GetRubberbandingManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832E14(relative to base address)
		UDelMarRespawnManagerComponent GetRespawnManagerComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751780FAC(relative to base address)
		UDelMarRaceConfigComponent GetRaceConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097C10(relative to base address)
		UDelMarPositionalTrackerComponent GetPositionalTracker(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832DFC(relative to base address)
		int32_t GetNumInactiveRacers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832D2C(relative to base address)
		int32_t GetNumberOfLapsForRace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832D4C(relative to base address)
		TArray GetManagedPlayerStatesArray(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832CF0(relative to base address)
		UDelMarGameplayModifierComponent GetGameplayModifierComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832CD8(relative to base address)
		UDelMarEliminationRaceManagerComponent GetEliminationManagerComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832CC0(relative to base address)
		EDelMarRaceSpawnMode GetCurrentSpawnMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832C34(relative to base address)
		EDelMarRaceMode GetCurrentRaceMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832C10(relative to base address)
		TArray GetActiveRacers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832AB8(relative to base address)
		ADelMarRaceLevelConfig GetActiveRaceLevelConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832A94(relative to base address)
		void FinishRace(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74917265C(relative to base address)
		void FinalizeRegisteredPlayerInitialization(AFortPlayerState* PlayerState); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751832A10(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x178 (0x1A8 - 0x30)
	class UDelMarVehicleManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x178]; // 0x30(0x178) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleManager");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* InController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Public, Memory Exec: 0x7FF751761468(relative to base address)
		void HandlePawnPlayerStateSet(AFortPlayerPawn* Pawn); // Flags: Final|Native|Public, Memory Exec: 0x7FF751760F28(relative to base address)
		void HandlePawnExitedVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* Pawn, int32_t SeatIndex); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF751760D0C(relative to base address)
		void HandlePawnEnteredVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* Pawn, int32_t SeatIndex); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF751760AF0(relative to base address)
		void BP_GetVehiclesInRange(FVector& SourcePosition, float Range, bool bDo2DCheck, TArray<ADelMarVehicle*>& OutVehicles); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751760418(relative to base address)
		void BP_GetAllVehicles(TArray<ADelMarVehicle*>& OutVehicles); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75176037C(relative to base address)
	};


	// Class DelMarCore.DelMarPreRaceControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UDelMarPreRaceControllerComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		UInputAction* NavigateAction; // 0xB8(0x8)
		UInputAction* ReadyUpAction; // 0xC0(0x8)
		FViewTargetTransitionParams ViewTargetTransitionParams; // 0xC8(0x10)
		float NavigateInputDeadzone; // 0xD8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		UClass* InputManagerClass; // 0xE0(0x8)
		TWeakObjectPtr<UDelMarPlayerInputManagerComponent*> InputManager; // 0xE8(0x8)
		TWeakObjectPtr<UEnhancedInputComponent*> InputComponent; // 0xF0(0x8)
		TWeakObjectPtr<UDelMarPositionalTrackerComponent*> PositionTracker; // 0xF8(0x8)
		TWeakObjectPtr<AFortPlayerState*> CurrentViewTarget; // 0x100(0x8)
		float CellDistThreshold; // 0x108(0x4)
		float MaxGridDim; // 0x10C(0x4)
		unsigned char UnknownData02_7[0x8]; // 0x110(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPreRaceControllerComponent");
			return ret;
		}

		void ServerSetViewTarget(AFortPlayerState* PlayerState); // Flags: Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable, Memory Exec: 0x7FF74DC86EF4(relative to base address)
	};


	// Class DelMarCore.DelMarPlayspace
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x148 (0x7E8 - 0x6A0)
	class ADelMarPlayspace : public AFortPlayspace	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x6A0(0x48) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortPlaylistAthena*> MRSPlaylistData; // 0x6E8(0x8)
		FString MRSLinkId; // 0x6F0(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x700(0x10) UNKNOWN PROPERTY
		UDelMarGameStateMachine* PrimaryStateMachine; // 0x710(0x8)
		bool bShouldShowLoadingScreen; // 0x718(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x719(0x7) UNKNOWN PROPERTY
		TMap<EDelMarRaceMode, TWeakObjectPtr> DefaultRaceLevelConfigs; // 0x720(0x50)
		TWeakObjectPtr<ADelMarRaceManager*> ActiveRaceManager; // 0x770(0x8)
		TWeakObjectPtr<UFortPlaylistAthena*> PlaylistData; // 0x778(0x8)
		TWeakObjectPtr<UDelMarLevelManagerComponent*> LevelManager; // 0x780(0x8)
		UFortLevelStreamComponent* LevelStreamComponent; // 0x788(0x8)
		FDelMarMapSet MapSet; // 0x790(0x18)
		FGameplayTagContainer PlaylistDefinedMapTags; // 0x7A8(0x20)
		unsigned char UnknownData03_7[0x20]; // 0x7C8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayspace");
			return ret;
		}

		bool ShouldShowLoadingScreen(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751834358(relative to base address)
		void SetLoadingScreenVisibiliy(bool bInShouldShowLoadingScreen); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751834258(relative to base address)
		void ServerReturnToSetupWithLinkCode(FOnlineLinkId OptionalMapToForceLoad); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF7518340A4(relative to base address)
		void ServerReturnToSetup(FGameplayTagContainer OptionalMapToForceLoad); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751833F50(relative to base address)
		void ServerRequestLoadingLevelWithLinkCode(FOnlineLinkId DesiredMap); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751833E20(relative to base address)
		void ServerRequestLoadingLevel(FGameplayTagContainer DesiredMap); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751833CDC(relative to base address)
		void RequestNextMapFromMapSet(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74D5CE4C4(relative to base address)
		void OnRep_MRSLinkId(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751833428(relative to base address)
		void OnRep_ActiveRaceManagerUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751833374(relative to base address)
	};


	// Class DelMarCore.DelMarEvent_FinalFirstPlaceChanged
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarEvent_FinalFirstPlaceChanged : public UObject	
	{
	public:
		TWeakObjectPtr<AFortPlayerState*> NewFirstPlace; // 0x28(0x8)
		TWeakObjectPtr<AFortPlayerState*> PrevFirstPlace; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_FinalFirstPlaceChanged");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCheckpoint
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x1A8 (0xD90 - 0xBE8)
	class ADelMarCheckpoint : public AFortCreativeDeviceProp	
	{
	public:
		FMulticastInlineDelegate OnCheckpointTirggeredEvent; // 0xBE8(0x10)
		bool bIsFinishLine : 1; // 0xBF8:0(0x1)
		bool bIsStartingLine : 1; // 0xBF8:1(0x1)
		bool bIsTimeTrialSectionEnd : 1; // 0xBF8:2(0x1)
		bool bIsTeleportEnabled : 1; // 0xBF8:3(0x1)
		unsigned char UnknownData00_5[0x7]; // 0xBF9(0x7) UNKNOWN PROPERTY
		TSet<ADelMarCheckpoint*> NextCheckpoints; // 0xC00(0x50)
		float DynamicSpawnOffset; // 0xC50(0x4)
		float SpawnDistanceBeforeOrAfterSplineLocation; // 0xC54(0x4)
		float BaseRadius; // 0xC58(0x4)
		int32_t CheckpointId; // 0xC5C(0x4)
		int32_t SplinePointIndex; // 0xC60(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC64(0x4) UNKNOWN PROPERTY
		ADelMarPlayerStart* SpawnPoint; // 0xC68(0x8)
		UDelMarTrackSnapToComponent* SnapToComponent; // 0xC70(0x8)
		TSet<ADelMarCheckpoint*> PreviousCheckpoints; // 0xC78(0x50)
		FCheckpointTrackDistance NearestTrack; // 0xCC8(0x18)
		TArray<FCheckpointTrackDistance> AssociatedTracks; // 0xCE0(0x10)
		int32_t ComputedCheckpointIndex; // 0xCF0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xCF4(0x4) UNKNOWN PROPERTY
		UStaticMeshComponent* ColliderVolume; // 0xCF8(0x8)
		UDelMarCheckpointTheme* CheckpointTheme; // 0xD00(0x8)
		unsigned char UnknownData03_6[0x78]; // 0xD08(0x78) UNKNOWN PROPERTY
		ADelMarCheckpoint* CheckpointToTeleportTo; // 0xD80(0x8)
		unsigned char UnknownData04_7[0x8]; // 0xD88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCheckpoint");
			return ret;
		}

		void UpdateCheckpointTheme(UDelMarCheckpointTheme* Theme); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCheckpointMesh(EDelMarCheckpointMeshType MeshType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTriggered(ADelMarVehicle* InDelMarVehicle); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E910C04(relative to base address)
		bool IsAssociatedWithTrack(ADelMarTrackBase* InTrack); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A4F64(relative to base address)
		void HandlePawnEnteredVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* Pawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7517A4D34(relative to base address)
		FCheckpointTrackDistance GetTrackDistanceDataForTrack(ADelMarTrackBase* InTrack, bool bEnsureAssociated); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A4AD8(relative to base address)
		FTransform GetSpawnTransform(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A4818(relative to base address)
		FCheckpointTrackDistance GetNearestTrackData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A45A0(relative to base address)
		FCheckpointTrackDistance GetFurthestBehindTrackDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A4528(relative to base address)
		FCheckpointTrackDistance GetFurthestAheadTrackDistance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A44F8(relative to base address)
		EDelMarCheckpointMeshType GetCheckpointMeshType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A4288(relative to base address)
		void ClientSetCheckpointInactive(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClientSetCheckpointActive(int32_t CurrentLap, int32_t TotalLaps); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_RaceReset(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_RaceFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_LapFinished(int32_t CompletedLap, int32_t CurrentLap, int32_t TotalLaps); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_FirstPlaceChanged(bool bValidPrevFirstPlace); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_DeactivateRift(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_ActivateRift(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarCore.DelMarPlayerStart
	// Inherited from AFortPlayerStart -> APlayerStart -> ANavigationObjectBase -> AActor -> UObject
	// Size: 0x10 (0x310 - 0x300)
	class ADelMarPlayerStart : public AFortPlayerStart	
	{
	public:
		int32_t StartlinePriority; // 0x300(0x4)
		float IsClaimedZDistanceCheck; // 0x304(0x4)
		TWeakObjectPtr<ADelMarRaceManager*> DelMarRaceManager; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerStart");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayerRaceDataComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1B0 (0x250 - 0xA0)
	class UDelMarPlayerRaceDataComponent : public UDelMarPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		TSet<int32_t> VisitedCheckpoints; // 0xD0(0x50)
		TSet<ADelMarCheckpoint*> VisitedCheckpoints_ParallelPath; // 0x120(0x50)
		double RunStartTime; // 0x170(0x8)
		double RunFinishTime; // 0x178(0x8)
		double CheckpointStartTime; // 0x180(0x8)
		double LapStartTime; // 0x188(0x8)
		float DistanceToFinishLine; // 0x190(0x4)
		float LapDistance; // 0x194(0x4)
		float PrimaryTrackDistance; // 0x198(0x4)
		int32_t LapsCompleted; // 0x19C(0x4)
		bool bHasStartedFirstLap; // 0x1A0(0x1)
		bool bFinishedRace; // 0x1A1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1A2(0x2) UNKNOWN PROPERTY
		int32_t Points; // 0x1A4(0x4)
		TArray<APlayerState*> ViewingSpectators; // 0x1A8(0x10)
		ADelMarCheckpoint* MostRecentlyVisitedCheckpoint; // 0x1B8(0x8)
		TWeakObjectPtr<UDelMarCheckpointManagerComponent*> CachedCheckpointManager; // 0x1C0(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0x1C8(0x8)
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0x1D0(0x8)
		TWeakObjectPtr<UDelMarPositionalTrackerComponent*> CachedPositionalTracker; // 0x1D8(0x8)
		TWeakObjectPtr<UDelMarTrackPositionComponent*> CachedLapTracker; // 0x1E0(0x8)
		TSet<ADelMarCheckpoint*> CheckpointsVisitedThisLap; // 0x1E8(0x50)
		int32_t TimeTrialSectionIndex; // 0x238(0x4)
		int32_t CheckPointIndex; // 0x23C(0x4)
		UDelMarEvent_PlayerPointsChanged* PointsUpdatedEvent; // 0x240(0x8)
		UDelMarEvent_PlayerFinishRace* FinishRaceEvent; // 0x248(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerRaceDataComponent");
			return ret;
		}

		void OnRep_ViewingSpectators(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E6CA4(relative to base address)
		void OnRep_Points(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E6C6C(relative to base address)
		void NetMulticast_TeleportEntered(FDelMarEvent_TeleportEnteredEvent InCheckpointTeleportingEvent); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E6A04(relative to base address)
		void NetMulticast_SectionCompleted_ParallelPath(FDelMarEvent_SectionComplete_ParallelPath InSectionEvent); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E6778(relative to base address)
		void NetMulticast_RaceCompleted(double RunTime, bool bValidRun); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E6548(relative to base address)
		void NetMulticast_LapCompleted(FDelMarEvent_LapComplete InLapEvent); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E62DC(relative to base address)
		void NetMulticast_CheckpointPassedOutOfOrder_ParallelPath(FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath InCheckpointPassedOutOfOrderEvent); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E60B0(relative to base address)
		void NetMulticast_CheckpointPassed_ParallelPath(FDelMarEvent_CheckpointPassed_ParallelPath CheckpointEvent); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E61C4(relative to base address)
		TArray GetViewingSpectators(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E58B8(relative to base address)
		int32_t GetNumViewingSpectator(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4C66E4(relative to base address)
	};


	// Class DelMarCore.DelMarEvent_PlayerPointsChanged
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarEvent_PlayerPointsChanged : public UObject	
	{
	public:
		int32_t PreviousPoints; // 0x28(0x4)
		int32_t CurrentPoints; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_PlayerPointsChanged");
			return ret;
		}
	};


	// Class DelMarCore.DelMarEvent_AttachmentChanged
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarEvent_AttachmentChanged : public UObject	
	{
	public:
		TWeakObjectPtr<AFortPlayerState*> PlayerAttachedTo; // 0x28(0x8)
		TWeakObjectPtr<AFortPlayerState*> PrevPlayerAttachedTo; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_AttachmentChanged");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicle
	// Inherited from AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x1B30 (0x3C40 - 0x2110)
	class ADelMarVehicle : public AFortAthenaSKVehicle	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x2110(0x50) UNKNOWN PROPERTY
		UClass* DefaultCameraMode; // 0x2160(0x8)
		TArray<UClass*> SeatIndexCameraModes; // 0x2168(0x10)
		bool bLocalDriverHasReplicatedVehicle; // 0x2178(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x2179(0xF) UNKNOWN PROPERTY
		FFortAthenaVehicleInputState PendingDriverInputState; // 0x2188(0x40)
		ECommonInputType CurrentInputType; // 0x21C8(0x1)
		unsigned char UnknownData02_6[0x1F]; // 0x21C9(0x1F) UNKNOWN PROPERTY
		float DistanceToPack; // 0x21E8(0x4)
		float DistanceFromTrackFinish; // 0x21EC(0x4)
		float RaceStatusSpeedModifier; // 0x21F0(0x4)
		bool ATTR_bVehicleThrottleDisabled; // 0x21F4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x21F5(0x3) UNKNOWN PROPERTY
		FDelMarInputAction ThrottleAction; // 0x21F8(0x10)
		FDelMarInputAction BrakeAction; // 0x2208(0x10)
		FDelMarInputAction SteerAction; // 0x2218(0x10)
		FDelMarInputAction SteerLeftAction; // 0x2228(0x10)
		FDelMarInputAction SteerRightAction; // 0x2238(0x10)
		FDelMarInputAction PitchAction; // 0x2248(0x10)
		FDelMarInputAction PitchUpAction; // 0x2258(0x10)
		FDelMarInputAction PitchDownAction; // 0x2268(0x10)
		FDelMarInputAction RollAction; // 0x2278(0x10)
		FDelMarInputAction YawAction; // 0x2288(0x10)
		FDelMarInputAction DriftAction; // 0x2298(0x10)
		FDelMarInputAction JumpAction; // 0x22A8(0x10)
		FDelMarInputAction KickFlipAction; // 0x22B8(0x10)
		FDelMarInputAction UnderthrustAction; // 0x22C8(0x10)
		FDelMarInputAction TurboAction; // 0x22D8(0x10)
		FDelMarInputAction DelMarExitAction; // 0x22E8(0x10)
		FDelMarInputAction ResetRunAction; // 0x22F8(0x10)
		FDelMarInputAction AirFreestyleAction; // 0x2308(0x10)
		FDelMarInputAction StrafeAction; // 0x2318(0x10)
		FDelMarInputAction AerialPitchAction; // 0x2328(0x10)
		FDelMarInputAction DemolishAction; // 0x2338(0x10)
		UClass* InputManagerClass; // 0x2348(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x2350(0x18) UNKNOWN PROPERTY
		float IdleVelocityLengthThreshold; // 0x2368(0x4)
		float IdleInputSecondsThreshold; // 0x236C(0x4)
		bool bIdleFromNoInput; // 0x2370(0x1)
		unsigned char UnknownData05_6[0x47]; // 0x2371(0x47) UNKNOWN PROPERTY
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0x23B8(0x8)
		UDelMarVehicleNetworkPhysicsComponent* NetworkPhysicsComponent; // 0x23C0(0x8)
		UDelMarVehicleCosmeticComponent* CosmeticComponent; // 0x23C8(0x8)
		UDelMarVehicleMovementSet* DelMarVehicleMovementSet; // 0x23D0(0x8)
		UFortClientSettingsRecord* FortSettings; // 0x23D8(0x8)
		UClass* TrackPositionComponentClass; // 0x23E0(0x8)
		UDelMarTrackPositionComponent* TrackPositionComponent; // 0x23E8(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x23F0(0x8) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> WheelSkeletalMeshComps; // 0x23F8(0x10)
		TMap<TWeakObjectPtr, UDelMarEvent_PlayerInVehicle*> PlayerInVehicleEvents; // 0x2408(0x50)
		TArray<FDelMarVehicleCachedContact> CachedContacts; // 0x2458(0x10)
		float NearbyTrackDistanceThreshold; // 0x2468(0x4)
		unsigned char UnknownData07_6[0x14]; // 0x246C(0x14) UNKNOWN PROPERTY
		float MaxStableSpeedToUpdateWheels; // 0x2480(0x4)
		float SecondsUntilVehicleHitVelocityClears; // 0x2484(0x4)
		bool bOverrideDamageFromInstigator; // 0x2488(0x1)
		unsigned char UnknownData08_6[0x5F]; // 0x2489(0x5F) UNKNOWN PROPERTY
		FDelMarVehicleConfigOverrides ConfigOverrides; // 0x24E8(0x98)
		unsigned char UnknownData09_6[0xC10]; // 0x2580(0xC10) UNKNOWN PROPERTY
		float VisualSteerAngleInterpRate; // 0x3190(0x4)
		float DriftVisualSteerAngleInterpRate; // 0x3194(0x4)
		bool bOverrideVisualSteeringAngle; // 0x3198(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x3199(0x3) UNKNOWN PROPERTY
		float DrivingVisualSteeringDegrees; // 0x319C(0x4)
		FDelMarScaledCurve DriftSteeringDegreesCurve; // 0x31A0(0x90)
		bool bShowVisualSteerAngleInAir; // 0x3230(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x3231(0x7) UNKNOWN PROPERTY
		UDelMarVehicleBodySetup* BodySetup; // 0x3238(0x8)
		unsigned char UnknownData12_6[0x18]; // 0x3240(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<UDelMarRaceConfigComponent*> ActiveRaceConfig; // 0x3258(0x8)
		TWeakObjectPtr<UDelMarTimeManagerComponent*> RaceTimeManager; // 0x3260(0x8)
		TWeakObjectPtr<UDelMarGlobalInputDisabler*> GlobalInputDisabler; // 0x3268(0x8)
		unsigned char UnknownData13_6[0x10]; // 0x3270(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVehicleWheelsLeftGround; // 0x3280(0x10)
		FMulticastInlineDelegate OnSpeedometerSpeedChanged; // 0x3290(0x10)
		float MinNoThrottleSpeed; // 0x32A0(0x4)
		float SpeedSlowdownSpeedometerSeconds; // 0x32A4(0x4)
		TArray<FGameplayTag> SpeedSlowdownTags; // 0x32A8(0x10)
		EDelMarInvertSteerMethod InvertSteerMethod; // 0x32B8(0x1)
		bool bPitchInverted; // 0x32B9(0x1)
		bool bVerticalKickflipInverted; // 0x32BA(0x1)
		bool bAerialPitchActivationEnabled; // 0x32BB(0x1)
		unsigned char UnknownData14_6[0x34]; // 0x32BC(0x34) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnBonusSpeedActivated; // 0x32F0(0x10)
		FMulticastInlineDelegate OnBonusSpeedDeactivated; // 0x3300(0x10)
		FMulticastInlineDelegate OnBonusSpeedChanged; // 0x3310(0x10)
		FMulticastInlineDelegate OnAnyWheelsOnGroundChanged; // 0x3320(0x10)
		FMulticastInlineDelegate OnWheelsOnGroundChanged; // 0x3330(0x10)
		FMulticastInlineDelegate OnVehicleForwardStateChanged; // 0x3340(0x10)
		unsigned char UnknownData15_6[0xC0]; // 0x3350(0xC0) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDelMarVehicleHitWall; // 0x3410(0x10)
		FMulticastInlineDelegate OnDelMarVehicleHitVehicle; // 0x3420(0x10)
		FMulticastInlineDelegate OnDelMarVehicleHitByVehicle; // 0x3430(0x10)
		FMulticastInlineDelegate OnVehicleLanded; // 0x3440(0x10)
		unsigned char UnknownData16_6[0x10]; // 0x3450(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWorldBonusSpeedStackGained; // 0x3460(0x10)
		FMulticastInlineDelegate OnWorldBonusSpeedStackLost; // 0x3470(0x10)
		unsigned char UnknownData17_6[0x70]; // 0x3480(0x70) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVehicleStartedSkydiving; // 0x34F0(0x10)
		FMulticastInlineDelegate OnVehicleStoppedSkydiving; // 0x3500(0x10)
		unsigned char UnknownData18_6[0x10]; // 0x3510(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDriftActivated; // 0x3520(0x10)
		FMulticastInlineDelegate OnDriftDeactivated; // 0x3530(0x10)
		FMulticastInlineDelegate OnDriftSlipAngleRatioChanged; // 0x3540(0x10)
		FMulticastInlineDelegate OnDriftKickActivated; // 0x3550(0x10)
		FMulticastInlineDelegate OnDriftKickDeactivated; // 0x3560(0x10)
		FMulticastInlineDelegate OnDriftControlChanged; // 0x3570(0x10)
		FMulticastInlineDelegate OnDriftDurationChanged; // 0x3580(0x10)
		unsigned char UnknownData19_6[0x50]; // 0x3590(0x50) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnEnteredDriftBoostRange; // 0x35E0(0x10)
		FMulticastInlineDelegate OnExitedDriftBoostRange; // 0x35F0(0x10)
		FMulticastInlineDelegate OnStartedLosingAppliedDriftBoost; // 0x3600(0x10)
		FMulticastInlineDelegate OnDriftBoostActivated; // 0x3610(0x10)
		FMulticastInlineDelegate OnDriftBoostDeactivated; // 0x3620(0x10)
		FMulticastInlineDelegate OnMaxPotentialReached; // 0x3630(0x10)
		FMulticastInlineDelegate OnMaxPotentialLost; // 0x3640(0x10)
		FMulticastInlineDelegate OnAllPotentialLost; // 0x3650(0x10)
		FMulticastInlineDelegate OnEarnedDriftBoost; // 0x3660(0x10)
		FMulticastInlineDelegate OnPotentialDriftBoostChanged; // 0x3670(0x10)
		unsigned char UnknownData20_6[0x38]; // 0x3680(0x38) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDraftActivated; // 0x36B8(0x10)
		FMulticastInlineDelegate OnDraftDeactivated; // 0x36C8(0x10)
		FMulticastInlineDelegate OnDraftStateChanged; // 0x36D8(0x10)
		FMulticastInlineDelegate OnReachedMaxBonusSpeed; // 0x36E8(0x10)
		unsigned char UnknownData21_6[0x34]; // 0x36F8(0x34) UNKNOWN PROPERTY
		FDelMarRubberbandingConfig RubberbandingConfig; // 0x372C(0x28)
		unsigned char UnknownData22_6[0x34]; // 0x3754(0x34) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStartlineBoostActivated; // 0x3788(0x10)
		FMulticastInlineDelegate OnStartlineBoostDeactivated; // 0x3798(0x10)
		FMulticastInlineDelegate OnStartlineBoostFailed; // 0x37A8(0x10)
		FDelMarStartlineBoostData StartlineBoostData; // 0x37B8(0x14)
		unsigned char UnknownData23_6[0x1C]; // 0x37CC(0x1C) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStrafeActivated; // 0x37E8(0x10)
		FMulticastInlineDelegate OnStrafeDeactivated; // 0x37F8(0x10)
		FMulticastInlineDelegate OnStrafeCooldownChanged; // 0x3808(0x10)
		FMulticastInlineDelegate OnStrafeUsabilityChanged; // 0x3818(0x10)
		FMulticastInlineDelegate OnStrafeDisabledChanged; // 0x3828(0x10)
		unsigned char UnknownData24_6[0x20]; // 0x3838(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTurboActivated; // 0x3858(0x10)
		FMulticastInlineDelegate OnTurboDeactivated; // 0x3868(0x10)
		FMulticastInlineDelegate OnTurboChargesUpdated; // 0x3878(0x10)
		FMulticastInlineDelegate OnTurboBonusZoneStateChanged; // 0x3888(0x10)
		FMulticastInlineDelegate OnTurboChargeUsed; // 0x3898(0x10)
		float TurboCharges; // 0x38A8(0x4)
		unsigned char UnknownData25_6[0x44]; // 0x38AC(0x44) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnKickflipActivated; // 0x38F0(0x10)
		FMulticastInlineDelegate OnKickflipDeactivated; // 0x3900(0x10)
		FMulticastInlineDelegate OnKickflipSuctionActivated; // 0x3910(0x10)
		FMulticastInlineDelegate OnKickflipSuctionDeactivated; // 0x3920(0x10)
		FMulticastInlineDelegate OnKickflipDistanceToSuctionSurfaceChanged; // 0x3930(0x10)
		FMulticastInlineDelegate OnKickflipDurationChanged; // 0x3940(0x10)
		FMulticastInlineDelegate OnKickflipActivationChargesChanged; // 0x3950(0x10)
		unsigned char UnknownData26_6[0x88]; // 0x3960(0x88) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnReattachmentActivated; // 0x39E8(0x10)
		FMulticastInlineDelegate OnReattachmentDeactivated; // 0x39F8(0x10)
		FVector ForcedReattachmentDirection; // 0x3A08(0x18)
		unsigned char UnknownData27_6[0x28]; // 0x3A20(0x28) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnUnderthrustActivated; // 0x3A48(0x10)
		FMulticastInlineDelegate OnUnderthrustDeactivated; // 0x3A58(0x10)
		FMulticastInlineDelegate OnUnderthrustPercentChanged; // 0x3A68(0x10)
		FMulticastInlineDelegate OnUnderthrustExhausted; // 0x3A78(0x10)
		unsigned char UnknownData28_6[0x18]; // 0x3A88(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJumpActivated; // 0x3AA0(0x10)
		FMulticastInlineDelegate OnJumpDeactivated; // 0x3AB0(0x10)
		unsigned char UnknownData29_6[0x8]; // 0x3AC0(0x8) UNKNOWN PROPERTY
		float DemolitionRespawnSeconds; // 0x3AC8(0x4)
		unsigned char UnknownData30_6[0x4]; // 0x3ACC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVehicleDemolished; // 0x3AD0(0x10)
		FMulticastInlineDelegate OnDemolishPressDurationUpdated; // 0x3AE0(0x10)
		float HealthOverride; // 0x3AF0(0x4)
		unsigned char UnknownData31_6[0x1C]; // 0x3AF4(0x1C) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHazardHit; // 0x3B10(0x10)
		FMulticastInlineDelegate OnInvulnerabilityActivated; // 0x3B20(0x10)
		FMulticastInlineDelegate OnInvulnerabilityDeactivated; // 0x3B30(0x10)
		unsigned char UnknownData32_6[0x4]; // 0x3B40(0x4) UNKNOWN PROPERTY
		float MaxSpawnBroadcastSeconds; // 0x3B44(0x4)
		FDelMarVehicleSpawnInfo SpawnInfo; // 0x3B48(0x10)
		FMulticastInlineDelegate OnDelMarVehicleSpawned; // 0x3B58(0x10)
		bool bAllowExitingVehicle; // 0x3B68(0x1)
		unsigned char UnknownData33_6[0x7]; // 0x3B69(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVehicleTeleportEntered; // 0x3B70(0x10)
		FMulticastInlineDelegate OnVehicleTeleportExit; // 0x3B80(0x10)
		FMulticastInlineDelegate OnVehicleAppliedTeleportRotation; // 0x3B90(0x10)
		FMulticastInlineDelegate OnVehicleAppliedTeleportLocation; // 0x3BA0(0x10)
		FMulticastInlineDelegate OnEnvironmentEffectCueActivated; // 0x3BB0(0x10)
		FMulticastInlineDelegate OnEnvironmentEffectCueRemoved; // 0x3BC0(0x10)
		FMulticastInlineDelegate OnAirFreestyleActivated; // 0x3BD0(0x10)
		FMulticastInlineDelegate OnAirFreestyleDeactivated; // 0x3BE0(0x10)
		unsigned char UnknownData34_6[0x8]; // 0x3BF0(0x8) UNKNOWN PROPERTY
		ADelMarAudioController* CachedVehicleAudioController; // 0x3BF8(0x8)
		bool bVehicleCollisionsEnabled; // 0x3C00(0x1)
		bool bPawnCollisionsEnabled; // 0x3C01(0x1)
		unsigned char UnknownData35_6[0xE]; // 0x3C02(0xE) UNKNOWN PROPERTY
		bool bUsePredictiveInterpolation; // 0x3C10(0x1)
		unsigned char UnknownData36_6[0x7]; // 0x3C11(0x7) UNKNOWN PROPERTY
		UPostProcessComponent* PostProcessComp; // 0x3C18(0x8)
		unsigned char UnknownData37_7[0x20]; // 0x3C20(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicle");
			return ret;
		}

		bool VehicleHasTag(FGameplayTag InTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75187188C(relative to base address)
		void TryGetFortClientSettings(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751871878(relative to base address)
		void TeleportVehicleExited(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF74E5180B4(relative to base address)
		void TeleportVehicleEntered(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF7505D895C(relative to base address)
		void SetVehicleMesh(USkeletalMesh* NewMesh, UPhysicsAsset* PhysicsAsset); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518717AC(relative to base address)
		void SetConfigOverrides(FDelMarVehicleConfigOverrides InConfigOverrides); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751871628(relative to base address)
		void ServerTeleportVehicleExited(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74F4FC9E4(relative to base address)
		void ServerTeleportVehicleEntered(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74F509734(relative to base address)
		void ServerSetLocalDriverHasReplicatedTheVehicle(bool bNewValue); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF7518715A4(relative to base address)
		void ServerRemoveReplicatedGameplayTags(FGameplayTagContainer InTags); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751871460(relative to base address)
		void ServerRemoveReplicatedGameplayTag(FGameplayTag InTag); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF75187134C(relative to base address)
		void ServerOnClientTeleport(); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF7505D7ABC(relative to base address)
		void ServerNotifyTurboActivated(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751871334(relative to base address)
		void ServerDemolishVehicle(FGameplayTag InCausedByTag); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF751871220(relative to base address)
		void ServerAddReplicatedGameplayTags(FGameplayTagContainer InTags); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF7518710DC(relative to base address)
		void ServerAddReplicatedGameplayTag(FGameplayTag InTag); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751870FC8(relative to base address)
		void ResetTrackPosition(ADelMarTrackBase* Track, int32_t TrackSegment); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF74E7C63F0(relative to base address)
		void ResetRunPressed(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751870FB0(relative to base address)
		void OnRep_TurboCharges(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7518708FC(relative to base address)
		void OnRep_StartlineBoostData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7518708E4(relative to base address)
		void OnRep_SpawnInfo(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7518708D0(relative to base address)
		void OnRep_ConfigOverrides(); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF75187083C(relative to base address)
		void OnRep_bVehicleCollisionsEnabled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870A30(relative to base address)
		void OnRep_bPawnCollisionsEnabled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870A18(relative to base address)
		void OnApplyOverlapFilter(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF751870484(relative to base address)
		bool IsWheelOnGround(EDelMarVehicleWheelIndex WheelIndex); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518703F0(relative to base address)
		bool IsRespawnEffectSignificant(); // Flags: Final|Native|Private|BlueprintCallable|Const, Memory Exec: 0x7FF7518703BC(relative to base address)
		bool IsInvulnerabilityActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75187038C(relative to base address)
		void HandleThrottleToggleChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870378(relative to base address)
		void HandleThrottleDeadzoneChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870364(relative to base address)
		void HandleSteerDeadzoneChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870350(relative to base address)
		void HandlePitchDeadzoneChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75187033C(relative to base address)
		void HandleOnVehicleCosmeticsFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870328(relative to base address)
		void HandleNewPlayerState(AFortPlayerPawn* Pawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518702A8(relative to base address)
		void HandleFinishedCharacterCustomization(AFortPlayerPawn* PlayerPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518700D8(relative to base address)
		void HandleAerialThrottleBrakeChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518700C4(relative to base address)
		UDelMarTrackPositionComponent GetTrackPositionComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751870094(relative to base address)
		ADelMarRaceManager GetRaceManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75187006C(relative to base address)
		UDelMarVehicleCosmeticComponent GetCosmeticComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75187003C(relative to base address)
		void DemolishVehicle(FGameplayTag InCausedByTag); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF75186FD20(relative to base address)
		void ClearConfigOverrides(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75186FD0C(relative to base address)
		void AddWorldBonusSpeedStack(FDelMarWorldBonusSpeedStack& BonusSpeedStack); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75186FC54(relative to base address)
		void AddTargetSpeedAdjustment(FName Source, float Value); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF75186FB8C(relative to base address)
	};


	// Class DelMarCore.DelMarUIInputControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UDelMarUIInputControllerComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x68]; // 0xA0(0x68) UNKNOWN PROPERTY
		UInputAction* HudWidgetExpandAction; // 0x108(0x8)
		UInputAction* ToggleQuestListAction; // 0x110(0x8)
		UClass* InputManagerClass; // 0x118(0x8)
		TWeakObjectPtr<UEnhancedInputComponent*> InputComponent; // 0x120(0x8)
		TWeakObjectPtr<AFortPlayerState*> PlayerState; // 0x128(0x8)
		TWeakObjectPtr<AFortPlayerController*> PlayerController; // 0x130(0x8)
		TWeakObjectPtr<UDelMarPlayerPreferencesComponent*> PlayerPreferences; // 0x138(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarUIInputControllerComponent");
			return ret;
		}

		void HandleToggleQuestList(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void HandleHudWidgetExpandTriggered(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B620(relative to base address)
		void HandleHudWidgetExpandCompleted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B60C(relative to base address)
	};


	// Class DelMarCore.DelMarEvent_PlayerInVehicle
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarEvent_PlayerInVehicle : public UObject	
	{
	public:
		TWeakObjectPtr<ADelMarVehicle*> DelMarVehicle; // 0x28(0x8)
		int32_t SeatIndex; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_PlayerInVehicle");
			return ret;
		}
	};


	// Class DelMarCore.DelMarEvent_GlobalLeaderboardPersonalBestRetrieved
	// Inherited from UObject
	// Size: 0x40 (0x68 - 0x28)
	class UDelMarEvent_GlobalLeaderboardPersonalBestRetrieved : public UObject	
	{
	public:
		FDelMarGlobalLeaderboardEntry PersonalBest; // 0x28(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_GlobalLeaderboardPersonalBestRetrieved");
			return ret;
		}
	};


	// Class DelMarCore.DelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayerIdleComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UDelMarPlayerIdleComponent : public UDelMarPlayerStateComponent	
	{
	public:
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xA0(0x8)
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0xA8(0x8)
		unsigned char UnknownData00_7[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerIdleComponent");
			return ret;
		}

		void OnPlayerDisconnected(AFortPlayerStateAthena* PlayerState, bool bIsDisconnected); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751759400(relative to base address)
	};


	// Class DelMarCore.DelMarEvent_VehicleDemolish
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarEvent_VehicleDemolish : public UObject	
	{
	public:
		FGameplayTag DemolishReason; // 0x28(0x4)
		TWeakObjectPtr<ADelMarVehicle*> Vehicle; // 0x2C(0x8)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_VehicleDemolish");
			return ret;
		}
	};


	// Class DelMarCore.DelMarEvent_PlayerFinishRace
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarEvent_PlayerFinishRace : public UObject	
	{
	public:
		double RunTime; // 0x28(0x8)
		bool bValidRun; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_PlayerFinishRace");
			return ret;
		}
	};


	// Class DelMarCore.DelMarActorMover
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x40 (0xC28 - 0xBE8)
	class ADelMarActorMover : public AFortCreativeDeviceProp	
	{
	public:
		UClass* ActorClass; // 0xBE8(0x8)
		USplineComponent* MovementSpline; // 0xBF0(0x8)
		EDelMarSplineMovementType MovementType; // 0xBF8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xBF9(0x7) UNKNOWN PROPERTY
		AActor* ManagedActor; // 0xC00(0x8)
		UDelMarSplineActorMovementComponent* SplineMovementComponent; // 0xC08(0x8)
		unsigned char UnknownData01_6[0x10]; // 0xC10(0x10) UNKNOWN PROPERTY
		float ServerMovementStartTime; // 0xC20(0x4)
		unsigned char UnknownData02_7[0x4]; // 0xC24(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarActorMover");
			return ret;
		}

		void OnRep_ServerStartTime(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75174FD38(relative to base address)
		void InitializeMovement(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75174FD24(relative to base address)
	};


	// Class DelMarCore.DelMarAIController
	// Inherited from AAIController -> AController -> AActor -> UObject
	// Size: 0x1F8 (0x5B0 - 0x3B8)
	class ADelMarAIController : public AAIController	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x3B8(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLoadoutChanged; // 0x3D8(0x10)
		FGameplayTag DescriptorTag; // 0x3E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3EC(0x4) UNKNOWN PROPERTY
		FFortAthenaLoadout CosmeticLoadoutBC; // 0x3F0(0x130)
		FCosmeticLoadout VehicleCosmeticLoadout; // 0x520(0x10)
		FGameplayTag VehicleArchetype; // 0x530(0x4)
		EDelMarInvertSteerMethod BotSteerMethod; // 0x534(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x535(0x3) UNKNOWN PROPERTY
		UBehaviorTree* BTAssetToRunOnPawnAISpawned; // 0x538(0x8)
		TArray<UBehaviorTree*> SkillLevelBehaviorTrees; // 0x540(0x10)
		int32_t MinSkillLevelForRubberbanding; // 0x550(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x554(0x4) UNKNOWN PROPERTY
		UClass* OobTubePositionRenderingComponentClass; // 0x558(0x8)
		TWeakObjectPtr<ADelMarVehicle*> DelMarVehicle; // 0x560(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x568(0x10) UNKNOWN PROPERTY
		int32_t DelMarBotControllerUID; // 0x578(0x4)
		int32_t DelMarBotSkillLevel; // 0x57C(0x4)
		FString DelMarBotPlayerName; // 0x580(0x10)
		UDelMarAIService* DelMarAIService; // 0x590(0x8)
		AFortPlayerPawn* PlayerBotPawn; // 0x598(0x8)
		unsigned char UnknownData05_7[0x10]; // 0x5A0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarAIController");
			return ret;
		}

		void HandleGroundedStateChanged(TScriptInterface<Class>& VehicleRef, bool bValue); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75174F488(relative to base address)
	};


	// Class DelMarCore.DelMarAIService
	// Inherited from UAthenaAIService -> UObject
	// Size: 0x110 (0x188 - 0x78)
	class UDelMarAIService : public UAthenaAIService	
	{
	public:
		UClass* CosmeticComponentClass; // 0x78(0x8)
		TWeakObjectPtr<UDelMarAIVehicleCosmeticLibraryData*> VehicleCosmeticLibrary; // 0x80(0x20)
		bool bBotsUniqueIDUseValidAccountID; // 0xA0(0x1)
		bool bUseRegionalNameList; // 0xA1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xA2(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortAthenaAIBotNameDataAsset*> BotNameDataAsset; // 0xA8(0x20)
		UClass* AIControllerClass; // 0xC8(0x8)
		TWeakObjectPtr<UDataTable*> MMRSpawnTablePtr; // 0xD0(0x20)
		int32_t MaxBotFillRandomDeviation; // 0xF0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		TArray<ADelMarAIController*> DelMarAIControllers; // 0xF8(0x10)
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0x108(0x8)
		TWeakObjectPtr<UDelMarRespawnManagerComponent*> RespawnManagerComponent; // 0x110(0x8)
		TWeakObjectPtr<UDelMarTrackManager*> TrackManager; // 0x118(0x8)
		TArray<TWeakObjectPtr> SortedSecondaryTracksAlongPrimary; // 0x120(0x10)
		TSet<FString> ReservedPlayerNames; // 0x130(0x50)
		unsigned char UnknownData02_7[0x8]; // 0x180(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarAIService");
			return ret;
		}

		void HandlePlayerUnregistered(AFortPlayerState* UnregisteredPlayerState, bool bSetAsInactive); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75174F7C4(relative to base address)
		void HandlePlayerRegistered(AFortPlayerState* RegisteredPlayerState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75174F674(relative to base address)
		TArray GetRegisteredAIBotControllers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C21AF14(relative to base address)
		int32_t GetMaxNumberOfPlayers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097E04(relative to base address)
	};


	// Class DelMarCore.DelMarAIVehicleCosmeticLibraryData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UDelMarAIVehicleCosmeticLibraryData : public UPrimaryDataAsset	
	{
	public:
		TWeakObjectPtr<UDataTable*> PredefineVehiclCosmeticSetsDataTable; // 0x30(0x20)
		FGameplayTag CachedArchetypeTag; // 0x50(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarAIVehicleCosmeticLibraryData");
			return ret;
		}
	};


	// Class DelMarCore.DelMarBTService_VehicleBase
	// Inherited from UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0xA0 - 0x70)
	class UDelMarBTService_VehicleBase : public UBTService	
	{
	public:
		FBlackboardKeySelector VehicleKey; // 0x70(0x28)
		TWeakObjectPtr<ADelMarVehicle*> DelMarVehicle; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarBTService_VehicleBase");
			return ret;
		}
	};


	// Class DelMarCore.DelMarBTService_ChooseNextTrack
	// Inherited from UDelMarBTService_VehicleBase -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x198 (0x238 - 0xA0)
	class UDelMarBTService_ChooseNextTrack : public UDelMarBTService_VehicleBase	
	{
	public:
		FBlackboardKeySelector TargetTrackDecisionKey; // 0xA0(0x28)
		FBlackboardKeySelector IsOffRoadDriveGoalKey; // 0xC8(0x28)
		FBlackboardKeySelector IsJumpDriveGoalKey; // 0xF0(0x28)
		FBlackboardKeySelector IsFullyBlockedCollisionKey; // 0x118(0x28)
		float TrackDecisionMaxTrackDistanceOffset; // 0x140(0x4)
		float TrackDecisionMinTrackDistanceOffset; // 0x144(0x4)
		float TrackEndCheckTrackDistanceOffset; // 0x148(0x4)
		float BotReachedNewTrackDistanceOffset; // 0x14C(0x4)
		float SplineResetAvailableTrackIndexThreshold; // 0x150(0x4)
		float AddKickflipWeightDegreeThreshold; // 0x154(0x4)
		float TrackDecisionWeightMaxDistanceFromBot; // 0x158(0x4)
		float TrackDecisionWeightMaxHeightFromBot; // 0x15C(0x4)
		float TrackDecisionWeightDesirableHeightFromBot; // 0x160(0x4)
		float MinDecisionDelaySecondsAfterChangingTracks; // 0x164(0x4)
		float MaxDecisionDelaySecondsAfterChangingTracks; // 0x168(0x4)
		float ShortcutWeightLookAheadTrackDistance; // 0x16C(0x4)
		float PrimaryTrackGapMinDistanceThreshold; // 0x170(0x4)
		float ForceNewTrackDecisionAfterSecondsIfFullyBlocked; // 0x174(0x4)
		float SwitchTrackMaxDistanceThreshold; // 0x178(0x4)
		float SwitchTrackMinDistanceThreshold; // 0x17C(0x4)
		float TrackLengthRemainingPartitionAmount; // 0x180(0x4)
		float TrackLengthRemainingCap; // 0x184(0x4)
		float ValidRaycastDistanceThreshold; // 0x188(0x4)
		float OffRoadSurfaceMaxNormalToTrackAngleThreshold; // 0x18C(0x4)
		float RaycastVehicleForwardOffset; // 0x190(0x4)
		float RaycastEndTrackForwardOffset; // 0x194(0x4)
		TEnumAsByte<ECollisionChannel> RaycastCollisionChannel; // 0x198(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		float TrackLengthWeightPercentage; // 0x19C(0x4)
		float DistanceFromBotWeightPercentage; // 0x1A0(0x4)
		float HeightFromBotWeightPercentage; // 0x1A4(0x4)
		float TrackOrientationWeightPercentage; // 0x1A8(0x4)
		float ShortcutWeightMultiplier; // 0x1AC(0x4)
		float MaxRandomWeight; // 0x1B0(0x4)
		float PrimaryTrackGapStaticWeightDeduction; // 0x1B4(0x4)
		TWeakObjectPtr<UBlackboardComponent*> BlackboardComponent; // 0x1B8(0x8)
		TWeakObjectPtr<ADelMarTrack*> TargetTrackDecision; // 0x1C0(0x8)
		TWeakObjectPtr<ADelMarTrack*> NextTrackDecision; // 0x1C8(0x8)
		TArray<FDelMarAITrackDecision> AvailableTrackDecisions; // 0x1D0(0x10)
		TWeakObjectPtr<UDelMarAIService*> AIService; // 0x1E0(0x8)
		TWeakObjectPtr<UDelMarTrackPositionComponent*> TrackPositionComponent; // 0x1E8(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x1F0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarBTService_ChooseNextTrack");
			return ret;
		}

		void HandleVehicleAnyWheelsOnGroundStateChanged(TScriptInterface<Class>& VehicleRef, bool bAnyWheelsOnGround); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75174F8D4(relative to base address)
	};


	// Class DelMarCore.DriveHazardInfo
	// Inherited from UObject
	// Size: 0xD8 (0x100 - 0x28)
	class UDriveHazardInfo : public UObject	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x28(0x8)
		TWeakObjectPtr<UDelMarTrackSplineComponent*> HazardTrackSplineComponent; // 0x30(0x8)
		unsigned char UnknownData00_7[0xC8]; // 0x38(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DriveHazardInfo");
			return ret;
		}
	};


	// Class DelMarCore.DelMarBTService_FindDriveGoal
	// Inherited from UDelMarBTService_VehicleBase -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x620 (0x6C0 - 0xA0)
	class UDelMarBTService_FindDriveGoal : public UDelMarBTService_VehicleBase	
	{
	public:
		FBlackboardKeySelector TargetTrackDecisionKey; // 0xA0(0x28)
		FBlackboardKeySelector DriveGoalLocationKey; // 0xC8(0x28)
		FBlackboardKeySelector DriveGoalRotationKey; // 0xF0(0x28)
		FBlackboardKeySelector IsJumpDriveGoalKey; // 0x118(0x28)
		FBlackboardKeySelector IsOffRoadDriveGoalKey; // 0x140(0x28)
		FBlackboardKeySelector IsKickflipDriveGoalKey; // 0x168(0x28)
		FBlackboardKeySelector KickflipDirectionKey; // 0x190(0x28)
		FBlackboardKeySelector HasUpcomingCollisionKey; // 0x1B8(0x28)
		FBlackboardKeySelector IsFullyBlockedCollisionKey; // 0x1E0(0x28)
		float GroundedDriveGoalVehicleForwardOffset; // 0x208(0x4)
		float TrackGapDriveGoalVehicleForwardOffset; // 0x20C(0x4)
		float AirDriveGoalVehicleForwardOffset; // 0x210(0x4)
		float PathNoiseAmplitude; // 0x214(0x4)
		float PathNoiseFrequency; // 0x218(0x4)
		int32_t MaxNumberOfCheckedTrackSegments; // 0x21C(0x4)
		float GroundedOffroadRaycastDistance; // 0x220(0x4)
		float GroundedOffRoadRaycastTrackForwardOffset; // 0x224(0x4)
		float TrackGapCheckForwardOffset; // 0x228(0x4)
		float ReturnToTrackRaycastForwardOffset; // 0x22C(0x4)
		float ReturnToTrackRaycastDepthPadding; // 0x230(0x4)
		float ReturnToTrackMaintainVehicleOffsetDegreeThreshold; // 0x234(0x4)
		float ReturnToTrackRaycastMinAngleDifference; // 0x238(0x4)
		float UnsafeLandingDesiredUnderthrustHeightFactor; // 0x23C(0x4)
		float UnsafeLandingJumpGoalTrackOffsetReductionFactor; // 0x240(0x4)
		float OffRoadSurfaceMaxNormalToTrackAngleThreshold; // 0x244(0x4)
		float MaxVehicleAirRollAngleToReturnToTrackFromBelow; // 0x248(0x4)
		int32_t NumberOfSideAvoidanceRaycasts; // 0x24C(0x4)
		float DegreesBetweenRaycasts; // 0x250(0x4)
		float TrackInclineMaxRaycastDirectionRotationDegrees; // 0x254(0x4)
		float DriftPrimaryTraceRotationFactor; // 0x258(0x4)
		float NonJumpableHazardMinHitNormalDegrees; // 0x25C(0x4)
		float AvoidanceTraceVerticalSpread; // 0x260(0x4)
		TEnumAsByte<ECollisionChannel> RaycastCollisionChannel; // 0x264(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x265(0x3) UNKNOWN PROPERTY
		TArray<UClass*> IgnoredActorClasses; // 0x268(0x10)
		FDelMarScaledCurve RaycastDistanceCurve; // 0x278(0x90)
		FDelMarScaledCurve RayCastDistanceContributionCurve; // 0x308(0x90)
		FDelMarScaledCurve VehicleDistanceAvoidanceCurve; // 0x398(0x90)
		float DriveGoalOffsetCancelPadding; // 0x428(0x4)
		float DriveHazardOffsetCancelPadding; // 0x42C(0x4)
		float VehicleTrackOffsetCancelPadding; // 0x430(0x4)
		float DriveGoalOffsetMinTrackDepth; // 0x434(0x4)
		float DriveHazardMaxJumpDistanceFactor; // 0x438(0x4)
		float DriveHazardMinJumpDistanceFactor; // 0x43C(0x4)
		float HazardJumpGoalMaxHeightOffset; // 0x440(0x4)
		float HazardJumpGoalMinHeightOffset; // 0x444(0x4)
		float BlockedJumpTracePadding; // 0x448(0x4)
		float TrackGapJumpHeightThreshold; // 0x44C(0x4)
		float TrackGapDriveGoalHeightOffset; // 0x450(0x4)
		float VerticalTrackTransitionVehicleExtentMultiplier; // 0x454(0x4)
		TArray<UClass*> JumpableActorClasses; // 0x458(0x10)
		float SideKickflipSurfaceNormalDegreeThreshold; // 0x468(0x4)
		float UpwardKickflipMinNormalDegreesToWorldUp; // 0x46C(0x4)
		float KickflipDriveGoalTrackHeightOffset; // 0x470(0x4)
		float KickflipDriveGoalForwardDistanceThreshold; // 0x474(0x4)
		float UnderKickflipSurfaceForwardDistanceThreshold; // 0x478(0x4)
		float KickflipTraceHeightOffset; // 0x47C(0x4)
		float KickflipTraceMaximumHeightFromTrack; // 0x480(0x4)
		float KickflipMinimumDownwardDistanceFromTrack; // 0x484(0x4)
		float PercentChanceToAllowDownKickflip; // 0x488(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x48C(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve PercentChanceToExecuteDownKickflipCurve; // 0x490(0x90)
		float SwitchTrackJumpHeightThreshold; // 0x520(0x4)
		float SwitchTrackToPipeHeightOffsetFactor; // 0x524(0x4)
		float PercentChanceToIgnoreDriveHazard; // 0x528(0x4)
		float PercentChanceToNotCheckForSafeLanding; // 0x52C(0x4)
		TWeakObjectPtr<UBlackboardComponent*> BlackboardComponent; // 0x530(0x8)
		TWeakObjectPtr<UDelMarTrackPositionComponent*> TrackPositionComponent; // 0x538(0x8)
		TWeakObjectPtr<ADelMarTrack*> TargetTrack; // 0x540(0x8)
		TWeakObjectPtr<UDelMarTrackSplineComponent*> TargetTrackSplineComponent; // 0x548(0x8)
		TWeakObjectPtr<ADelMarTrack*> ActiveTrack; // 0x550(0x8)
		TWeakObjectPtr<UDelMarTrackSplineComponent*> ActiveTrackSplineComponent; // 0x558(0x8)
		TWeakObjectPtr<UDelMarTrackOobTubePositionalRenderingComponent*> OobTubePositionalRenderingComponent; // 0x560(0x8)
		TMap<TWeakObjectPtr, UDriveHazardInfo*> PrevFrameDriveHazardInfoMap; // 0x568(0x50)
		TWeakObjectPtr<AActor*> OffRoadDriveActor; // 0x5B8(0x8)
		UDriveHazardInfo* CurrentJumpHazard; // 0x5C0(0x8)
		TWeakObjectPtr<ADelMarTrack*> KickflipTrack; // 0x5C8(0x8)
		unsigned char UnknownData02_7[0xF0]; // 0x5D0(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarBTService_FindDriveGoal");
			return ret;
		}

		void HandleVehicleAnyWheelsOnGroundStateChanged(TScriptInterface<Class>& VehicleRef, bool bAnyWheelsOnGround); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75174FA44(relative to base address)
		void HandleKickflipActivated(bool bLeft); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75174F5F8(relative to base address)
	};


	// Class DelMarCore.DelMarBTService_ResetVehicle
	// Inherited from UDelMarBTService_VehicleBase -> UBTService -> UBTAuxiliaryNode -> UBTNode -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UDelMarBTService_ResetVehicle : public UDelMarBTService_VehicleBase	
	{
	public:
		float CancelResetMinRequiredDistance; // 0xA0(0x4)
		float CancelResetMaxRequiredDistance; // 0xA4(0x4)
		TWeakObjectPtr<UDelMarPlayerRaceDataComponent*> PlayerRaceDataComponent; // 0xA8(0x8)
		TWeakObjectPtr<UDelMarTrackPositionComponent*> TrackPositionComponent; // 0xB0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarBTService_ResetVehicle");
			return ret;
		}
	};


	// Class DelMarCore.DelMarBTTask_VehicleBase
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x30 (0xA0 - 0x70)
	class UDelMarBTTask_VehicleBase : public UBTTaskNode	
	{
	public:
		FBlackboardKeySelector VehicleKey; // 0x70(0x28)
		TWeakObjectPtr<ADelMarVehicle*> DelMarVehicle; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarBTTask_VehicleBase");
			return ret;
		}
	};


	// Class DelMarCore.DelMarBTTask_DriveTrack
	// Inherited from UDelMarBTTask_VehicleBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x9C0 (0xA60 - 0xA0)
	class UDelMarBTTask_DriveTrack : public UDelMarBTTask_VehicleBase	
	{
	public:
		FBlackboardKeySelector TargetTrackDecisionKey; // 0xA0(0x28)
		FBlackboardKeySelector DriveGoalLocationKey; // 0xC8(0x28)
		FBlackboardKeySelector DriveGoalRotationKey; // 0xF0(0x28)
		FBlackboardKeySelector IsJumpDriveGoalKey; // 0x118(0x28)
		FBlackboardKeySelector IsOffRoadDriveGoalKey; // 0x140(0x28)
		FBlackboardKeySelector IsKickflipDriveGoalKey; // 0x168(0x28)
		FBlackboardKeySelector KickflipDirectionKey; // 0x190(0x28)
		FBlackboardKeySelector HasUpcomingCollisionKey; // 0x1B8(0x28)
		FDelMarScaledCurve GroundedTrackHorizontalOffsetSteerCurve; // 0x1E0(0x90)
		FDelMarScaledCurve AirTrackHorizontalOffsetSteerCurve; // 0x270(0x90)
		FDelMarScaledCurve CollisionAvoidanceHorizontalOffsetSteerCurve; // 0x300(0x90)
		FDelMarScaledCurve AirCollisionAvoidanceHorizontalSteerDecisionCurve; // 0x390(0x90)
		FDelMarScaledCurve GroundedTurnDegreesSteerDecisionCurve; // 0x420(0x90)
		FDelMarScaledCurve AirTurnDegreesSteerDecisionCurve; // 0x4B0(0x90)
		FDelMarScaledCurve CollisionTurnDegreesSteerDecisionCurve; // 0x540(0x90)
		float DriveThrottle; // 0x5D0(0x4)
		bool bCanKickDrift; // 0x5D4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5D5(0x3) UNKNOWN PROPERTY
		int32_t NumberOfDriftCheckSamples; // 0x5D8(0x4)
		float MinDriftSampleDistanceScaleFactor; // 0x5DC(0x4)
		float MaxDriftSampleDistanceScaleFactor; // 0x5E0(0x4)
		float MinExitDriftSampleDistanceFromVehicle; // 0x5E4(0x4)
		float MaxExitDriftSampleDistanceFromVehicle; // 0x5E8(0x4)
		float MinRequiredDriftDegrees; // 0x5EC(0x4)
		float MaxRequiredDriftDegrees; // 0x5F0(0x4)
		float MinRequiredKickDriftDegrees; // 0x5F4(0x4)
		float MaxRequiredKickDriftDegrees; // 0x5F8(0x4)
		float MinSecondsToUpdateRandomDriftConfigValues; // 0x5FC(0x4)
		FDelMarScaledCurve PercentChanceToKickDriftCurve; // 0x600(0x90)
		float MinDriftSlipRatioForExitKickDrift; // 0x690(0x4)
		float MinDriftSpeed; // 0x694(0x4)
		float DriftKickUnderSteerDegreesThreshold; // 0x698(0x4)
		float DriftKickOverSteerDegreesThreshold; // 0x69C(0x4)
		float DriftTapUnderSteerDegreesThreshold; // 0x6A0(0x4)
		float DriftTapOverSteerDegreesThreshold; // 0x6A4(0x4)
		float DriftCounterSteerDegreesThreshold; // 0x6A8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x6AC(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve MinDriftSlipRatioCurve; // 0x6B0(0x90)
		FDelMarScaledCurve DistanceBetweenDriftSamplesCurve; // 0x740(0x90)
		FDelMarScaledCurve DriftSampleDistanceFromVehicleCurve; // 0x7D0(0x90)
		FDelMarScaledCurve DriveGoalJumpHeightThresholdCurve; // 0x860(0x90)
		float JumpGoalTrackAngleDistanceOffset; // 0x8F0(0x4)
		float JumpMinSpeed; // 0x8F4(0x4)
		float MinimumUnderthrustPitch; // 0x8F8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x8FC(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve AirPitchAdjustmentCurve; // 0x900(0x90)
		float AirPitchAdjustmentMaxVerticalDegrees; // 0x990(0x4)
		float MinNumTurboChargesNeededToTurbo; // 0x994(0x4)
		float MaxTurboTrackCutoffAngleInDegrees; // 0x998(0x4)
		float TurboActivationBaseChance; // 0x99C(0x4)
		float SecondaryTurboBoostChance; // 0x9A0(0x4)
		float MinTimeBetweenTurboCheck; // 0x9A4(0x4)
		float MaxTimeBetweenTurboCheck; // 0x9A8(0x4)
		TWeakObjectPtr<UDelMarTrackPositionComponent*> TrackPositionComponent; // 0x9AC(0x8)
		TWeakObjectPtr<ADelMarTrack*> TargetTrack; // 0x9B4(0x8)
		TWeakObjectPtr<UDelMarTrackSplineComponent*> TargetTrackSplineComponent; // 0x9BC(0x8)
		TWeakObjectPtr<UBlackboardComponent*> BlackboardComponent; // 0x9C4(0x8)
		unsigned char UnknownData03_7[0x94]; // 0x9CC(0x94) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarBTTask_DriveTrack");
			return ret;
		}

		void TurboBonusZoneStateChanged(EDelMarTurboZoneState NewState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75174FD50(relative to base address)
		void HandleVehicleAnyWheelsOnGroundStateChanged(TScriptInterface<Class>& VehicleRef, bool bAnyWheelsOnGround); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75174FBB4(relative to base address)
		void HandleTurboActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75174F8C0(relative to base address)
	};


	// Class DelMarCore.DelMarBTTask_RaceCountdown
	// Inherited from UDelMarBTTask_VehicleBase -> UBTTaskNode -> UBTNode -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UDelMarBTTask_RaceCountdown : public UDelMarBTTask_VehicleBase	
	{
	public:
		float MaxReactionTime; // 0xA0(0x4)
		float MinReactionTime; // 0xA4(0x4)
		unsigned char UnknownData00_7[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarBTTask_RaceCountdown");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCameraModeOverrideComponent
	// Inherited from UFortCameraModeOverrideComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UDelMarCameraModeOverrideComponent : public UFortCameraModeOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCameraModeOverrideComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarChallengeGhostSystemControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UDelMarChallengeGhostSystemControllerComponent : public UControllerComponent	
	{
	public:
		UClass* GhostPlaybackSessionComponentClass; // 0xA0(0x8)
		UClass* GhostRecordingSessionComponentClass; // 0xA8(0x8)
		double BestRunTime; // 0xB0(0x8)
		TWeakObjectPtr<UDelMarGhostPlaybackSessionComponent*> CachedPlaybackSession; // 0xB8(0x8)
		TWeakObjectPtr<UDelMarGhostRecordingSessionComponent*> CachedRecordingSession; // 0xC0(0x8)
		TWeakObjectPtr<ADelMarChallengeRaceManager*> CachedRaceManager; // 0xC8(0x8)
		TWeakObjectPtr<AFortPlayerState*> CachedLocalPlayerState; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarChallengeGhostSystemControllerComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarChallengeRaceManager
	// Inherited from ADelMarRaceManager -> AActor -> UObject
	// Size: 0x10 (0x4C0 - 0x4B0)
	class ADelMarChallengeRaceManager : public ADelMarRaceManager	
	{
	public:
		bool bIsOvertime; // 0x4B0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x4B1(0x7) UNKNOWN PROPERTY
		FTimerHandle OvertimeTimer; // 0x4B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarChallengeRaceManager");
			return ret;
		}

		void NetMulticast_StartOvertime(double RaceFinishTimestamp); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF751751FF4(relative to base address)
	};


	// Class DelMarCore.DelMarStateMachine
	// Inherited from UActorComponent -> UObject
	// Size: 0x108 (0x1A8 - 0xA0)
	class UDelMarStateMachine : public UActorComponent	
	{
	public:
		TArray<FDelMarStateOverride> StateOverrides; // 0xA0(0x10)
		TMap<FGameplayTag, UClass*> StateMappings; // 0xB0(0x50)
		FGameplayTag RequestedStateTag; // 0x100(0x4)
		FGameplayTag CurrentStateTag; // 0x104(0x4)
		FGameplayTag DefaultStateTag; // 0x108(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		TArray<UDelMarState*> ActiveStates; // 0x110(0x10)
		TArray<UDelMarState*> ReplicatedStates; // 0x120(0x10)
		FGameplayTag WaitingForStateReplicationTag; // 0x130(0x4)
		unsigned char UnknownData01_7[0x74]; // 0x134(0x74) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarStateMachine");
			return ret;
		}

		void RequestState(FGameplayTag StateTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751833938(relative to base address)
		void OnRep_RequestedStateTag(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518334A4(relative to base address)
		FGameplayTag GetRequestedStateTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1E1D5C(relative to base address)
		FGameplayTag GetCurrentStateTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832CA8(relative to base address)
		UDelMarState GetCurrentState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832C54(relative to base address)
		UDelMarState GetActiveStateByTag(FGameplayTag GameplayTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832AF4(relative to base address)
	};


	// Class DelMarCore.DelMarState
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarState : public UObject	
	{
	public:
		FGameplayTag StateTag; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState");
			return ret;
		}
	};


	// Class DelMarCore.DelMarRacerState
	// Inherited from UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarRacerState : public UDelMarState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRacerState");
			return ret;
		}
	};


	// Class DelMarCore.DelMarRacerState_WithSpectatorTransitionBase
	// Inherited from UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarRacerState_WithSpectatorTransitionBase : public UDelMarRacerState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRacerState_WithSpectatorTransitionBase");
			return ret;
		}
	};


	// Class DelMarCore.DelMarChallengeRacerState_RunActive
	// Inherited from UDelMarRacerState_WithSpectatorTransitionBase -> UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarChallengeRacerState_RunActive : public UDelMarRacerState_WithSpectatorTransitionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarChallengeRacerState_RunActive");
			return ret;
		}
	};


	// Class DelMarCore.DelMarRacerStateMachineComponent
	// Inherited from UDelMarStateMachine -> UActorComponent -> UObject
	// Size: 0x30 (0x1D8 - 0x1A8)
	class UDelMarRacerStateMachineComponent : public UDelMarStateMachine	
	{
	public:
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0x1A8(0x8)
		FGameplayTag PreviousStateTag; // 0x1B0(0x4)
		unsigned char UnknownData00_7[0x24]; // 0x1B4(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRacerStateMachineComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarChallengeRacerStateMachineComponent
	// Inherited from UDelMarRacerStateMachineComponent -> UDelMarStateMachine -> UActorComponent -> UObject
	// Size: 0x0 (0x1D8 - 0x1D8)
	class UDelMarChallengeRacerStateMachineComponent : public UDelMarRacerStateMachineComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarChallengeRacerStateMachineComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarSpectatorControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UDelMarSpectatorControllerComponent : public UControllerComponent	
	{
	public:
		UInputAction* SpectateNextPlayerAction; // 0xA0(0x8)
		UInputAction* SpectatePrevPlayerAction; // 0xA8(0x8)
		UInputAction* ExitSpectateAction; // 0xB0(0x8)
		UClass* InputManagerClass; // 0xB8(0x8)
		TWeakObjectPtr<UEnhancedInputComponent*> InputComponent; // 0xC0(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xC8(0x8)
		TWeakObjectPtr<UDelMarRequestComponent*> SpectatorRequestComponent; // 0xD0(0x8)
		TWeakObjectPtr<AFortPlayerState*> CurrentViewTarget; // 0xD8(0x8)
		TWeakObjectPtr<AFortPlayerState*> PrevValidViewTarget; // 0xE0(0x8)
		TWeakObjectPtr<AFortPlayerState*> SpectatorPlayerState; // 0xE8(0x8)
		TWeakObjectPtr<AFortPlayerControllerZone*> SpectatorController; // 0xF0(0x8)
		bool bIsLateJoinSpectator; // 0xF8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xF9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarSpectatorControllerComponent");
			return ret;
		}

		void SpectatePrevPlayer(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E76F4(relative to base address)
		void SpectateNextPlayer(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E76E0(relative to base address)
		void SetSpectatorTarget(AFortPlayerState* PlayerState); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E94BB5C(relative to base address)
		void SetIsLateJoinSpectator(bool bNewLateJoinSpectator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E75E0(relative to base address)
		void ServerSetSpectatorTarget(AFortPlayerState* PlayerState); // Flags: Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable, Memory Exec: 0x7FF74DC86EF4(relative to base address)
		void NetMulticast_FinishSpectating(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void NetMulticast_BeginSpectating(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable, Memory Exec: 0x7FF74F0F9DB4(relative to base address)
		bool IsLateJoinSpectator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7491C7738(relative to base address)
		void ExitSpectate(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5850(relative to base address)
	};


	// Class DelMarCore.DelMarChallengeSpectatorControllerComponent
	// Inherited from UDelMarSpectatorControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x100 - 0x100)
	class UDelMarChallengeSpectatorControllerComponent : public UDelMarSpectatorControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarChallengeSpectatorControllerComponent");
			return ret;
		}

		void ClientUpdateFinishedSpectatorTarget(); // Flags: Net|NetReliableNative|Event|Protected|NetClient|BlueprintCallable, Memory Exec: 0x7FF74E94B630(relative to base address)
	};


	// Class DelMarCore.DelMarRaceManagerComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarRaceManagerComponent : public UGameFrameworkComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRaceManagerComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarTimeManagerComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UDelMarTimeManagerComponent : public UDelMarRaceManagerComponent	
	{
	public:
		FMulticastInlineDelegate OnPlayerCountdownStarted; // 0xA0(0x10)
		double ServerCountdownStartTime; // 0xB0(0x8)
		double ServerRaceStartTime; // 0xB8(0x8)
		double ServerRaceFinishTime; // 0xC0(0x8)
		double ServerCountdownIntervalTime; // 0xC8(0x8)
		TWeakObjectPtr<UDelMarRaceConfigComponent*> RaceConfig; // 0xD0(0x8)
		TWeakObjectPtr<ADelMarRaceLevelConfig*> RaceLevelConfig; // 0xD8(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xE0(0x8)
		TMap<TWeakObjectPtr, double> ActiveCountdownRunStartTimeMap; // 0xE8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarTimeManagerComponent");
			return ret;
		}

		void StartCountdownForRace(double InServerCountdownStartTime, double InServerRaceStartTime, double InServerCountdownIntervalTime); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF751759744(relative to base address)
		void StartCountdownForPlayer(AFortPlayerState* InPlayerState, double InServerCountdownStartTime, double InServerRunStartTime); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF751759634(relative to base address)
		void ResetClocks(); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF7474A9F44(relative to base address)
		double GetServerRaceStartTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EF53020(relative to base address)
		double GetServerRaceFinishTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C75D448(relative to base address)
		double GetServerCountdownIntervalTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ED765BC(relative to base address)
		double GetSecondsSinceRaceStart(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517584E0(relative to base address)
		double GetSecondsRemainingTillRaceStart(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517584B8(relative to base address)
		double GetRaceTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751758490(relative to base address)
	};


	// Class DelMarCore.DelMarChallengeTimeManagerComponent
	// Inherited from UDelMarTimeManagerComponent -> UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x188 - 0x138)
	class UDelMarChallengeTimeManagerComponent : public UDelMarTimeManagerComponent	
	{
	public:
		TSet<TWeakObjectPtr> SubsequentRunStartSet; // 0x138(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarChallengeTimeManagerComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCheckpointTheme
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UDelMarCheckpointTheme : public UPrimaryDataAsset	
	{
	public:
		UStaticMesh* RimMesh; // 0x30(0x8)
		UStaticMesh* DefaultTentMesh; // 0x38(0x8)
		UStaticMesh* DefaultHoloMesh; // 0x40(0x8)
		UStaticMesh* StartLineTentMesh; // 0x48(0x8)
		UStaticMesh* StartLineHoloMesh; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCheckpointTheme");
			return ret;
		}
	};


	// Class DelMarCore.DelMarClientReplayRecordingComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarClientReplayRecordingComponent : public UControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarClientReplayRecordingComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCompetitiveRaceManager
	// Inherited from ADelMarRaceManager -> AActor -> UObject
	// Size: 0x18 (0x4C8 - 0x4B0)
	class ADelMarCompetitiveRaceManager : public ADelMarRaceManager	
	{
	public:
		float FinishRaceAfterFirstPlayerFinishedSeconds; // 0x4B0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x4B4(0xC) UNKNOWN PROPERTY
		double FirstPlayerFinishedTimestamp; // 0x4C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCompetitiveRaceManager");
			return ret;
		}

		void OnRep_FirstPlayerFinishedTimestamp(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517529C4(relative to base address)
		void HandleFinalRacePositionsUpdated(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarEvent_RunRecorded& RecordedRun); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751751B44(relative to base address)
	};


	// Class DelMarCore.DelMarCompetitiveRacerState_RunActive
	// Inherited from UDelMarRacerState_WithSpectatorTransitionBase -> UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarCompetitiveRacerState_RunActive : public UDelMarRacerState_WithSpectatorTransitionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCompetitiveRacerState_RunActive");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCompetitiveRacerState_RunFinished
	// Inherited from UDelMarRacerState_WithSpectatorTransitionBase -> UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarCompetitiveRacerState_RunFinished : public UDelMarRacerState_WithSpectatorTransitionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCompetitiveRacerState_RunFinished");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCompetitiveRacerStateMachineComponent
	// Inherited from UDelMarRacerStateMachineComponent -> UDelMarStateMachine -> UActorComponent -> UObject
	// Size: 0x0 (0x1D8 - 0x1D8)
	class UDelMarCompetitiveRacerStateMachineComponent : public UDelMarRacerStateMachineComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCompetitiveRacerStateMachineComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarConnectedHintComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UDelMarConnectedHintComponent : public UActorComponent	
	{
	public:
		bool bShouldShowHint; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UClass* VehicleActionClass; // 0xA8(0x8)
		bool bAcceptMultipleTags; // 0xB0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer MultipleTagContainer; // 0xB8(0x20)
		TWeakObjectPtr<ADelMarVehicle*> CachedVehicle; // 0xD8(0x8)
		UDelMarVehicleAction* VehicleAction; // 0xE0(0x8)
		unsigned char UnknownData02_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarConnectedHintComponent");
			return ret;
		}

		void PassNuxHintTypeToConnectedHintComponent(FGameplayTag HintTypeTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751752A6C(relative to base address)
		void HandleVehicleActionPerformed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751751C8C(relative to base address)
		void HandleActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF751751968(relative to base address)
		void HandleActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Public, Memory Exec: 0x7FF75175183C(relative to base address)
		void BeginPlay(); // Flags: Native|Public, Memory Exec: 0x7FF751751610(relative to base address)
	};


	// Class DelMarCore.DelMarCoreOobTubePositionalRenderingComponent
	// Inherited from UDelMarTrackOobTubePositionalRenderingComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x118 - 0x110)
	class UDelMarCoreOobTubePositionalRenderingComponent : public UDelMarTrackOobTubePositionalRenderingComponent	
	{
	public:
		TWeakObjectPtr<APlayerState*> ViewTargetPlayerState; // 0x110(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCoreOobTubePositionalRenderingComponent");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* FortPC, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Private, Memory Exec: 0x7FF751751CA4(relative to base address)
		void HandleAIPawnSpawned(AAIController* BotController, AFortPawn* BotPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF751751778(relative to base address)
	};


	// Class DelMarCore.DelMarCoreSplineMeshComponent
	// Inherited from USplineMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x6C0 - 0x6C0)
	class UDelMarCoreSplineMeshComponent : public USplineMeshComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCoreSplineMeshComponent");
			return ret;
		}

		void OnBeginActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75175207C(relative to base address)
	};


	// Class DelMarCore.DelMarCosmeticsDatabase
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UDelMarCosmeticsDatabase : public UPrimaryDataAsset	
	{
	public:
		TArray<UDelMarCosmeticItemDefinition*> Items; // 0x30(0x10)
		TArray<FDelMarCosmeticSlotInfo> SlotInfos; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCosmeticsDatabase");
			return ret;
		}

		TArray GetSlotInfos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175175C(relative to base address)
		TArray GetItemsForSlot(FGameplayTag Slot); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751751628(relative to base address)
	};


	// Class DelMarCore.DelMarDeathRacerState_ActiveRace
	// Inherited from UDelMarRacerState_WithSpectatorTransitionBase -> UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UDelMarDeathRacerState_ActiveRace : public UDelMarRacerState_WithSpectatorTransitionBase	
	{
	public:
		TWeakObjectPtr<ADelMarDeathRaceManager*> DeathRaceManager; // 0x30(0x8)
		bool bFinishedRound; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarDeathRacerState_ActiveRace");
			return ret;
		}
	};


	// Class DelMarCore.DelMarDeathRacerState_FinishedRace
	// Inherited from UDelMarRacerState_WithSpectatorTransitionBase -> UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarDeathRacerState_FinishedRace : public UDelMarRacerState_WithSpectatorTransitionBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarDeathRacerState_FinishedRace");
			return ret;
		}
	};


	// Class DelMarCore.DelMarDeathRacerStateMachineComponent
	// Inherited from UDelMarRacerStateMachineComponent -> UDelMarStateMachine -> UActorComponent -> UObject
	// Size: 0x0 (0x1D8 - 0x1D8)
	class UDelMarDeathRacerStateMachineComponent : public UDelMarRacerStateMachineComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarDeathRacerStateMachineComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarDoubleTapInputTrigger
	// Inherited from UInputTrigger -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UDelMarDoubleTapInputTrigger : public UInputTrigger	
	{
	public:
		float Delay; // 0x50(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x54(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarDoubleTapInputTrigger");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPhysMatAttribute
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarPhysMatAttribute : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPhysMatAttribute");
			return ret;
		}
	};


	// Class DelMarCore.DelMarDriveParticlesPhysMatAttribute
	// Inherited from UDelMarPhysMatAttribute -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarDriveParticlesPhysMatAttribute : public UDelMarPhysMatAttribute	
	{
	public:
		UNiagaraSystem* DriveParticles; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarDriveParticlesPhysMatAttribute");
			return ret;
		}
	};


	// Class DelMarCore.DelMarDriverInteractionComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UDelMarDriverInteractionComponent : public UControllerComponent	
	{
	public:
		AFortPlayerState* ViewPlayerState; // 0xA0(0x8)
		ADelMarVehicle* ViewVehicle; // 0xA8(0x8)
		unsigned char UnknownData00_6[0x30]; // 0xB0(0x30) UNKNOWN PROPERTY
		float PassEventSquareDistThreshold; // 0xE0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		UDelMarPlayerRaceDataComponent* RaceData; // 0xE8(0x8)
		unsigned char UnknownData02_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarDriverInteractionComponent");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* InController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751751E10(relative to base address)
	};


	// Class DelMarCore.DelMarEnvironmentEffectCueNotify_Actor
	// Inherited from AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x20 (0x318 - 0x2F8)
	class ADelMarEnvironmentEffectCueNotify_Actor : public AGameplayCueNotify_Actor	
	{
	public:
		FDelMarEnvironmentVFX Effects; // 0x2F8(0x18)
		bool bShowOnAllClients; // 0x310(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x311(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEnvironmentEffectCueNotify_Actor");
			return ret;
		}
	};


	// Class DelMarCore.DelMarEnvironmentEffectsVolume
	// Inherited from AActor -> UObject
	// Size: 0x60 (0x2F0 - 0x290)
	class ADelMarEnvironmentEffectsVolume : public AActor	
	{
	public:
		UClass* AppliedEffect; // 0x290(0x8)
		UBoxComponent* BoxCollider; // 0x298(0x8)
		unsigned char UnknownData00_7[0x50]; // 0x2A0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEnvironmentEffectsVolume");
			return ret;
		}

		void RemoveGameplayEffect(AActor* Actor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751752B78(relative to base address)
		void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175270C(relative to base address)
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7517522F0(relative to base address)
	};


	// Class DelMarCore.DelMarEvent_GlobalLeaderboardActive
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDelMarEvent_GlobalLeaderboardActive : public UObject	
	{
	public:
		FString LeaderboardEventId; // 0x28(0x10)
		FString LeaderboardWindowId; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEvent_GlobalLeaderboardActive");
			return ret;
		}
	};


	// Class DelMarCore.DelMarFlowAnalyticsControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UDelMarFlowAnalyticsControllerComponent : public UControllerComponent	
	{
	public:
		FString FlowAnalyicsEventName; // 0xA0(0x10)
		TWeakObjectPtr<AFortPlayerController*> PlayerController; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarFlowAnalyticsControllerComponent");
			return ret;
		}

		void TutorialReplay(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751754D3C(relative to base address)
		void TutorialKeepTraining(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751754D28(relative to base address)
		void TutorialGoRace(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751754D14(relative to base address)
		void TutorialComplete(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751754D00(relative to base address)
	};


	// Class DelMarCore.DelMarGameplayState
	// Inherited from UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarGameplayState : public UDelMarState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayState");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGameUserSettings
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UDelMarGameUserSettings : public UObject	
	{
	public:
		int32_t NuxLastViewedVideoVersion; // 0x28(0x4)
		bool bNuxHasPromptedToPlayTutorial; // 0x2C(0x1)
		bool bHasPromptedToPlaySpeedRun; // 0x2D(0x1)
		bool bNuxHasShownDefaultMode; // 0x2E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x2F(0x1) UNKNOWN PROPERTY
		FString LastPlayedDelMarMnemonic; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameUserSettings");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGhostSessionComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDelMarGhostSessionComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGhostSessionComponent");
			return ret;
		}

		void StopSession(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void StartSession(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A9F44(relative to base address)
		bool IsSessionActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFB9D68(relative to base address)
	};


	// Class DelMarCore.DelMarGhostPlaybackSessionComponent
	// Inherited from UDelMarGhostSessionComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xF8 - 0xB0)
	class UDelMarGhostPlaybackSessionComponent : public UDelMarGhostSessionComponent	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0xB0(0x20) UNKNOWN PROPERTY
		ETeleportType TeleportSetting; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		UClass* PlaybackActorClass; // 0xD8(0x8)
		int32_t CurrentFrame; // 0xE0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		UDelMarGhostReplayLog* PlaybackLog; // 0xE8(0x8)
		AFortPhysicsPawn* PlaybackActor; // 0xF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGhostPlaybackSessionComponent");
			return ret;
		}

		void SetPlaybackLog(UDelMarGhostReplayLog* InLog); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751754BB4(relative to base address)
	};


	// Class DelMarCore.DelMarGhostPlaybackTrigger
	// Inherited from AActor -> UObject
	// Size: 0x30 (0x2C0 - 0x290)
	class ADelMarGhostPlaybackTrigger : public AActor	
	{
	public:
		int32_t PreviewFrame; // 0x290(0x4)
		int32_t StartFrame; // 0x294(0x4)
		int32_t EndFrame; // 0x298(0x4)
		int32_t MaxFrame; // 0x29C(0x4)
		UDelMarGhostReplayLog* PlaybackLog; // 0x2A0(0x8)
		UBoxComponent* BoxCollider; // 0x2A8(0x8)
		UClass* PlaybackSessionClassOverride; // 0x2B0(0x8)
		UDelMarGhostPlaybackSessionComponent* PlaybackSession; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGhostPlaybackTrigger");
			return ret;
		}

		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751753FB0(relative to base address)
		void HandlePlaybackCompleted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751753E90(relative to base address)
		void BP_HandlePlaybackCompleted(FVector Location); // Flags: Event|Protected|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarCore.DelMarGhostRecordingSessionComponent
	// Inherited from UDelMarGhostSessionComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0x100 - 0xB0)
	class UDelMarGhostRecordingSessionComponent : public UDelMarGhostSessionComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xB0(0x18) UNKNOWN PROPERTY
		UDelMarGhostReplayLog* RecordLog; // 0xC8(0x8)
		bool bRecordOffPhysicsDelegate; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x23]; // 0xD1(0x23) UNKNOWN PROPERTY
		int32_t CurrentFrame; // 0xF4(0x4)
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0xF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGhostRecordingSessionComponent");
			return ret;
		}

		void SetRecordOffPhysicsDelegate(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751754C34(relative to base address)
	};


	// Class DelMarCore.DelMarGhostReplayLog
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UDelMarGhostReplayLog : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<FGhostReplayFrame> Frames; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGhostReplayLog");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGlobalLeaderboardControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UDelMarGlobalLeaderboardControllerComponent : public UControllerComponent	
	{
	public:
		bool bIsLeaderboardEnabled; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TArray<FDelMarGlobalLeaderboardEntry> TopLeaderboardEntries; // 0xA8(0x10)
		TArray<FDelMarGlobalLeaderboardEntry> FocusedLeaderboardEntries; // 0xB8(0x10)
		TArray<FDelMarGlobalLeaderboardEntry> FriendLeaderboardEntries; // 0xC8(0x10)
		bool bHasRequestedLeaderboards; // 0xD8(0x1)
		bool bHasPersonalBest; // 0xD9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xDA(0x6) UNKNOWN PROPERTY
		FDelMarGlobalLeaderboardEntry PersonalBest; // 0xE0(0x40)
		unsigned char UnknownData02_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		UDelMarEvent_GlobalLeaderboardActive* GlobalLeaderboardActiveEvent; // 0x128(0x8)
		FDelMarLeaderboardSettings LeaderboardSettings; // 0x130(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent");
			return ret;
		}

		void ServerNewPersonalBest(FDelMarEvent_GlobalLeaderboardNewPersonalBest PersonalBestRetrievedEvent); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF751754A90(relative to base address)
		void OnRep_LeaderboardSettings(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751754A7C(relative to base address)
		void ClientUpdateLeaderboards(); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void ClientNewPersonalBest(FDelMarEvent_GlobalLeaderboardNewPersonalBest PersonalBestEvent); // Flags: Net|NetReliableNative|Event|Protected|NetClient, Memory Exec: 0x7FF751753D6C(relative to base address)
	};


	// Class DelMarCore.GuidedZoneRequirement
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_Drift
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_Drift : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_Drift");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_DriftKick
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_DriftKick : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_DriftKick");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_Kickflip
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_Kickflip : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_Kickflip");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_Turbo
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_Turbo : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_Turbo");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_TurboBonusZone
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_TurboBonusZone : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_TurboBonusZone");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_Underthrust
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_Underthrust : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_Underthrust");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_Jump
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_Jump : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_Jump");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_JumpOrUnderthrust
	// Inherited from UGuidedZoneRequirement_Jump -> UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_JumpOrUnderthrust : public UGuidedZoneRequirement_Jump	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_JumpOrUnderthrust");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_DriftActive
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_DriftActive : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_DriftActive");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_DriftBoostActive
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGuidedZoneRequirement_DriftBoostActive : public UGuidedZoneRequirement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_DriftBoostActive");
			return ret;
		}
	};


	// Class DelMarCore.GuidedZoneRequirement_MidTutorial
	// Inherited from UGuidedZoneRequirement -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGuidedZoneRequirement_MidTutorial : public UGuidedZoneRequirement	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GuidedZoneRequirement_MidTutorial");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGuidedTutorialZoneActor
	// Inherited from AActor -> UObject
	// Size: 0x118 (0x3A8 - 0x290)
	class ADelMarGuidedTutorialZoneActor : public AActor	
	{
	public:
		UBoxComponent* BoxCollider; // 0x290(0x8)
		float FinalTimeDilation; // 0x298(0x4)
		float TransitionSeconds; // 0x29C(0x4)
		float MaxTimeDilationSeconds; // 0x2A0(0x4)
		bool bDemoVehicleOnFail; // 0x2A4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2A5(0x3) UNKNOWN PROPERTY
		FDelMarEvent_SetTutorialAnnouncement ScreenMessage; // 0x2A8(0x40)
		float HintDelaySeconds; // 0x2E8(0x4)
		float HintRemovalDelaySeconds; // 0x2EC(0x4)
		UClass* ZoneRequirementClass; // 0x2F0(0x8)
		FGameplayTagContainer InputTagsToRemoveOnZoneStart; // 0x2F8(0x20)
		FGameplayTagContainer InputTagsToAddOnZoneStart; // 0x318(0x20)
		FGameplayTagContainer InputTagsToRemoveOnZoneEnd; // 0x338(0x20)
		FGameplayTagContainer InputTagsToAddOnZoneEnd; // 0x358(0x20)
		UGuidedZoneRequirement* ZoneRequirement; // 0x378(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0x380(0x8)
		TWeakObjectPtr<ADelMarVehicle*> ActiveVehicle; // 0x388(0x8)
		TWeakObjectPtr<AFortPlayerController*> ActivePlayerController; // 0x390(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x398(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGuidedTutorialZoneActor");
			return ret;
		}

		void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751754940(relative to base address)
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7517541B4(relative to base address)
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751753EA4(relative to base address)
		void BP_OnTutorialZoneStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTutorialZoneFailed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTutorialZoneComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarCore.DelMarInputModifierHazard
	// Inherited from AActor -> UObject
	// Size: 0x40 (0x2D0 - 0x290)
	class ADelMarInputModifierHazard : public AActor	
	{
	public:
		TArray<FDelMarActivatedInputFrame> ActivatedInputSequence; // 0x290(0x10)
		TArray<FDelMarDisabledInputData> DisabledEffects; // 0x2A0(0x10)
		UBoxComponent* BoxCollider; // 0x2B0(0x8)
		APlayerController* LocalController; // 0x2B8(0x8)
		UEnhancedPlayerInput* LocalPlayerInput; // 0x2C0(0x8)
		float StartOverlapTime; // 0x2C8(0x4)
		float TotalActivationSequenceTime; // 0x2CC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarInputModifierHazard");
			return ret;
		}

		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751754538(relative to base address)
	};


	// Class DelMarCore.DelMarLevelDataAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UDelMarLevelDataAsset : public UPrimaryDataAsset	
	{
	public:
		FText DisplayName; // 0x30(0x10)
		FText LevelDescription; // 0x40(0x10)
		TWeakObjectPtr<UTexture2D*> LevelBackgroundImage; // 0x50(0x20)
		TArray<TWeakObjectPtr> Levels; // 0x70(0x10)
		FGameplayTagContainer LevelDescriptionTags; // 0x80(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarLevelDataAsset");
			return ret;
		}
	};


	// Class DelMarCore.DelMarLoadoutSave
	// Inherited from USaveGame -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UDelMarLoadoutSave : public USaveGame	
	{
	public:
		TMap<FGameplayTag, TWeakObjectPtr> EquippedLoadout; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarLoadoutSave");
			return ret;
		}
	};


	// Class DelMarCore.DelMarMatchEventSystemComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UDelMarMatchEventSystemComponent : public UDelMarRaceManagerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		TSet<FGameplayTag> EnabledMatchEventTags; // 0xB8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarMatchEventSystemComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarMatchmakingGracefulUpgrader
	// Inherited from UGracefulUpgradeOverrider -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarMatchmakingGracefulUpgrader : public UGracefulUpgradeOverrider	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarMatchmakingGracefulUpgrader");
			return ret;
		}
	};


	// Class DelMarCore.DelMarNetModelSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UDelMarNetModelSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarNetModelSubsystem");
			return ret;
		}
	};


	// Class DelMarCore.DelMarMutator
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x340 - 0x338)
	class ADelMarMutator : public AFortAthenaMutator	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x338(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarMutator");
			return ret;
		}
	};


	// Class DelMarCore.DelMarNetworkPredictionMutator
	// Inherited from ADelMarMutator -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x18 (0x358 - 0x340)
	class ADelMarNetworkPredictionMutator : public ADelMarMutator	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x340(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarNetworkPredictionMutator");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessorBase
	// Inherited from UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessorBase : public UFortObjectiveProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessorBase");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_BeatPlayers
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_BeatPlayers : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_BeatPlayers");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_BonusTurboActivated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_BonusTurboActivated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_BonusTurboActivated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_BoostPadBonusSpeedEnded
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_BoostPadBonusSpeedEnded : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_BoostPadBonusSpeedEnded");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_BoostPadHit
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_BoostPadHit : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_BoostPadHit");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_DistanceTraveled
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_DistanceTraveled : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_DistanceTraveled");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_DraftActivated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_DraftActivated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_DraftActivated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_DriftBoostActivated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_DriftBoostActivated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_DriftBoostActivated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_DriftBoostDeactivated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_DriftBoostDeactivated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_DriftBoostDeactivated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_DriftComplete
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_DriftComplete : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_DriftComplete");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_HighestSpeedUpdated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_HighestSpeedUpdated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_HighestSpeedUpdated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_InitialTurboActivated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_InitialTurboActivated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_InitialTurboActivated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_Kickflipped
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_Kickflipped : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_Kickflipped");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_LapComplete
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_LapComplete : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_LapComplete");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_PlacementUpdated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_PlacementUpdated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_PlacementUpdated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_PlayedDelMarExperience
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_PlayedDelMarExperience : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_PlayedDelMarExperience");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_RaceFinished
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_RaceFinished : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_RaceFinished");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_RankAchieved
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_RankAchieved : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_RankAchieved");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_RunComplete
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_RunComplete : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_RunComplete");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_StartlineBoostActivated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_StartlineBoostActivated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_StartlineBoostActivated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_StartlineBoostPercentEarned
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_StartlineBoostPercentEarned : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_StartlineBoostPercentEarned");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_UnderthrustDeactivated
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_UnderthrustDeactivated : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_UnderthrustDeactivated");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_UnderthrustPercentUsed
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_UnderthrustPercentUsed : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_UnderthrustPercentUsed");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_VehicleJumped
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_VehicleJumped : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_VehicleJumped");
			return ret;
		}
	};


	// Class DelMarCore.DelMarObjectiveProcessor_VehicleLanded
	// Inherited from UDelMarObjectiveProcessorBase -> UFortObjectiveProcessor -> UObjectiveProcessor -> UObjectiveProcessorBase -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarObjectiveProcessor_VehicleLanded : public UDelMarObjectiveProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarObjectiveProcessor_VehicleLanded");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPedestrianComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UDelMarPedestrianComponent : public UDelMarPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0xB8(0x8)
		TWeakObjectPtr<UDelMarPreRaceControllerComponent*> PreRaceControllerComponent; // 0xC0(0x8)
		bool bAllowExitVehicle; // 0xC8(0x1)
		bool bPlayerIsPedestrian; // 0xC9(0x1)
		unsigned char UnknownData01_7[0xE]; // 0xCA(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPedestrianComponent");
			return ret;
		}

		void OnRep_bPlayerIsPedestrian(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751756728(relative to base address)
		void HandleExitVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751756090(relative to base address)
		void HandleEnterVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175607C(relative to base address)
	};


	// Class DelMarCore.DelMarPhysicsRateDevice
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x50 (0xC38 - 0xBE8)
	class ADelMarPhysicsRateDevice : public AFortCreativeDeviceProp	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0xBE8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPhysicsRateDevice");
			return ret;
		}

		void SetPhysicsRate(EDelMarPhysicsRate PhysicsRate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75175681C(relative to base address)
	};


	// Class DelMarCore.DelMarPhysMatAttribute_SoundTag
	// Inherited from UDelMarPhysMatAttribute -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarPhysMatAttribute_SoundTag : public UDelMarPhysMatAttribute	
	{
	public:
		FName SoundTag; // 0x28(0x4)
		int32_t Priority; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPhysMatAttribute_SoundTag");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPhysMatAttribute_Terrain
	// Inherited from UDelMarPhysMatAttribute -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UDelMarPhysMatAttribute_Terrain : public UDelMarPhysMatAttribute	
	{
	public:
		FDelMarTerrainData TerrainData; // 0x28(0x18)
		bool bDriveableSurface; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPhysMatAttribute_Terrain");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayerActiveRaceManagerComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UDelMarPlayerActiveRaceManagerComponent : public UDelMarPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		ADelMarRaceManager* ActiveRaceManager; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent");
			return ret;
		}

		void SetActiveRaceManager(ADelMarRaceManager* RaceManager); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75175679C(relative to base address)
		void OnRep_ActiveRaceManager(ADelMarRaceManager* PreviousRaceManager); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517566A8(relative to base address)
		ADelMarRaceManager GetActiveRaceManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EF53020(relative to base address)
	};


	// Class DelMarCore.DelMarPlayerAnalyticsComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE0 (0x180 - 0xA0)
	class UDelMarPlayerAnalyticsComponent : public UDelMarPlayerStateComponent	
	{
	public:
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xA0(0x8)
		TWeakObjectPtr<AFortPlayerController*> CachedPlayerController; // 0xA8(0x8)
		TWeakObjectPtr<ADelMarVehicle*> CachedVehicle; // 0xB0(0x8)
		TWeakObjectPtr<UDelMarPlayerRaceDataComponent*> CachedPlayerRaceData; // 0xB8(0x8)
		TWeakObjectPtr<UDelMarRaceInfoComponent*> CachedRaceInfo; // 0xC0(0x8)
		TWeakObjectPtr<UDelMarPositionalTrackerComponent*> CachedPositionalTracker; // 0xC8(0x8)
		TWeakObjectPtr<UDelmarCompetitiveMatchmakeRatingComponent*> MatchmakeRatingComponent; // 0xD0(0x8)
		FDelMarAnalyticsPlayerRaceData CurrentRaceData; // 0xD8(0x40)
		FDelMarAnalyticsPlayerRaceData CurrentRunData; // 0x118(0x40)
		unsigned char UnknownData00_7[0x28]; // 0x158(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerAnalyticsComponent");
			return ret;
		}

		void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517564D4(relative to base address)
		void HandleVehicleHitHazard(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517564C0(relative to base address)
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517563B0(relative to base address)
		void HandleUnderthrustPercentChanged(float PercentageUnderthrustRemaining); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751756330(relative to base address)
		void HandleUnderthrustDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175631C(relative to base address)
		void HandleUnderthrustActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751756308(relative to base address)
		void HandleTurboChargeUsed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517562F4(relative to base address)
		void HandleTurboBonusZoneChanged(EDelMarTurboZoneState BonusZoneState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175625C(relative to base address)
		void HandleRaceStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751756248(relative to base address)
		void HandleRaceFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751756234(relative to base address)
		void HandlePotentialDriftBoostChanged(float Percent); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517561B4(relative to base address)
		void HandlePlayerResetRun(AFortPlayerState* PlayerState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751756124(relative to base address)
		void HandleKickflipActivated(bool bLeft); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517560A4(relative to base address)
		void HandleDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751755FB8(relative to base address)
		void HandleDriftBoostDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751755FA0(relative to base address)
		void HandleDraftActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751755F8C(relative to base address)
	};


	// Class DelMarCore.DelMarPlayerChallengeRaceDataComponent
	// Inherited from UDelMarPlayerRaceDataComponent -> UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x250 - 0x250)
	class UDelMarPlayerChallengeRaceDataComponent : public UDelMarPlayerRaceDataComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerChallengeRaceDataComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayerQuestDistanceTraveledComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UDelMarPlayerQuestDistanceTraveledComponent : public UDelMarPlayerStateComponent	
	{
	public:
		TWeakObjectPtr<ADelMarVehicle*> CachedVehicle; // 0xA0(0x8)
		TWeakObjectPtr<AFortPlayerState*> CachedPlayerState; // 0xA8(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xB0(0x8)
		FTimerHandle DistanceTraveledTimer; // 0xB8(0x8)
		unsigned char UnknownData00_6[0x28]; // 0xC0(0x28) UNKNOWN PROPERTY
		TWeakObjectPtr<UDelMarObjectiveProcessor_DistanceTraveled*> DistanceTravelledObjectiveProcessor; // 0xE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerQuestDistanceTraveledComponent");
			return ret;
		}

		void HandleVehicleTeleportExited(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758D18(relative to base address)
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758ADC(relative to base address)
	};


	// Class DelMarCore.DelMarPlayerQuestMatchInfoComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UDelMarPlayerQuestMatchInfoComponent : public UDelMarPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xA0(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<ADelMarVehicle*> CachedVehicle; // 0xA4(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xAC(0x8)
		TWeakObjectPtr<AFortPlayerState*> CachedPlayerState; // 0xB4(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent");
			return ret;
		}

		void HandleVehicleHitHazard(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758D00(relative to base address)
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758BEC(relative to base address)
		void HandleRaceStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758A84(relative to base address)
	};


	// Class DelMarCore.DelMarPlayerWrongwayComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class UDelMarPlayerWrongwayComponent : public UDelMarPlayerStateComponent	
	{
	public:
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0xA0(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xA8(0x8)
		TWeakObjectPtr<UDelMarTrackPositionComponent*> CachedTrackPositionComp; // 0xB0(0x8)
		TWeakObjectPtr<UDelMarPlayerRaceDataComponent*> CachedRaceData; // 0xB8(0x8)
		TWeakObjectPtr<UDelMarCheckpointManagerComponent*> CachedCheckpointManager; // 0xC0(0x8)
		TWeakObjectPtr<UDelMarTrackManager*> CachedTrackManager; // 0xC8(0x8)
		unsigned char UnknownData00_7[0x50]; // 0xD0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerWrongwayComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayspaceComponent_ServerExpiration
	// Inherited from UPlayspaceComponent_ServerExpiration -> UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1B8 - 0x1B8)
	class UDelMarPlayspaceComponent_ServerExpiration : public UPlayspaceComponent_ServerExpiration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayspaceComponent_ServerExpiration");
			return ret;
		}
	};


	// Class DelMarCore.DelMarProxyGhostVisualComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UDelMarProxyGhostVisualComponent : public UDelMarPlayerStateComponent	
	{
	public:
		TWeakObjectPtr<AFortAthenaVehicle*> CachedVehicle; // 0xA0(0x8)
		TWeakObjectPtr<UVehicleCosmeticsAssembledMeshUserComponent*> CachedVCAMUC; // 0xA8(0x8)
		UMaterialInterface* ProxyGhostMaterial; // 0xB0(0x8)
		TMap<FGameplayTag, FDelMarProxyMeshMaterialInfo> VehicleMaterialInfoMap; // 0xB8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarProxyGhostVisualComponent");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* InController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758D2C(relative to base address)
		void HandleVehicleCosmeticsFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758AC8(relative to base address)
		void HandlePartCustomizationUpdated(int32_t MeshPartIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517588B0(relative to base address)
	};


	// Class DelMarCore.DelMarRaceInfoComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDelMarRaceInfoComponent : public UDelMarRaceManagerComponent	
	{
	public:
		FString RaceGUID; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRaceInfoComponent");
			return ret;
		}

		void HandleRaceStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758AA0(relative to base address)
	};


	// Class DelMarCore.DelMarRaceLevelConfig
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x98 (0xC80 - 0xBE8)
	class ADelMarRaceLevelConfig : public AFortCreativeDeviceProp	
	{
	public:
		EDelMarRaceMode RaceMode; // 0xBE8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xBE9(0x3) UNKNOWN PROPERTY
		int32_t DefaultNumRequiredLaps; // 0xBEC(0x4)
		float ZKillOffsetDistanceFromLowestSplinePoint; // 0xBF0(0x4)
		bool bShouldRunAsADelMarExperience; // 0xBF4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xBF5(0x3) UNKNOWN PROPERTY
		int32_t MatchTimeLimitSeconds; // 0xBF8(0x4)
		int32_t OvertimeSeconds; // 0xBFC(0x4)
		bool bOverrideTurboChargeRegenRateSeconds; // 0xC00(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xC01(0x3) UNKNOWN PROPERTY
		float TurboChargeRegenRateSeconds; // 0xC04(0x4)
		bool bOverrideTurboRaceStartCharges; // 0xC08(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xC09(0x3) UNKNOWN PROPERTY
		float TurboRaceStartCharges; // 0xC0C(0x4)
		bool bOverrideTurboLapCompleteCharges; // 0xC10(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xC11(0x3) UNKNOWN PROPERTY
		float TurboLapCompleteCharges; // 0xC14(0x4)
		bool bNonTrackVelocityRedirectEnabled; // 0xC18(0x1)
		unsigned char UnknownData05_6[0x7]; // 0xC19(0x7) UNKNOWN PROPERTY
		TMap<EDelMarRaceMode, UClass*> RaceManagerClassMap; // 0xC20(0x50)
		TArray<FDelMarRaceCVar> RaceCVars; // 0xC70(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRaceLevelConfig");
			return ret;
		}

		ADelMarRaceManager SpawnRaceManager(bool bFireInitializationEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517595A4(relative to base address)
		FGameplayTag GetRaceModeTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751758464(relative to base address)
		UClass GetRaceManagerClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751758430(relative to base address)
	};


	// Class DelMarCore.DelMarRaceManagerVerbComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UDelMarRaceManagerVerbComponent : public UDelMarRaceManagerComponent	
	{
	public:
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xA0(0x8)
		TWeakObjectPtr<UDelMarPositionalTrackerComponent*> PositionalTracker; // 0xA8(0x8)
		TArray<AFortPlayerState*> PrevRacePositions; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRaceManagerVerbComponent");
			return ret;
		}

		void HandleRaceStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758AB4(relative to base address)
		void HandleRaceFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758A70(relative to base address)
		void HandlePlayerPositionsChanged(TArray<AFortPlayerState*>& RacePositions); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7517589D4(relative to base address)
		void HandlePlayerLapCompleted(FDelMarEvent_LapComplete& LapCompleteEvent); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751758930(relative to base address)
		void HandleFinalRacePositionsChanged(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarEvent_RunRecorded& RecordedRun); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751758768(relative to base address)
		void HandleCountdownStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751758754(relative to base address)
	};


	// Class DelMarCore.DelMarRaceMusicPlaylist
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UDelMarRaceMusicPlaylist : public UPrimaryDataAsset	
	{
	public:
		TArray<FDelMarMusicTrack> Tracks; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRaceMusicPlaylist");
			return ret;
		}
	};


	// Class DelMarCore.DelMarRaceMusicPlaylistComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarRaceMusicPlaylistComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRaceMusicPlaylistComponent");
			return ret;
		}

		void SetMusicPlaylist(UDelMarRaceMusicPlaylist* SetPlaylist, bool bEnableMusic); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7517594D8(relative to base address)
	};


	// Class DelMarCore.DelMarRacerState_Spectator
	// Inherited from UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarRacerState_Spectator : public UDelMarRacerState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRacerState_Spectator");
			return ret;
		}
	};


	// Class DelMarCore.DelMarRacerState_Countdown
	// Inherited from UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UDelMarRacerState_Countdown : public UDelMarRacerState	
	{
	public:
		TWeakObjectPtr<ADelMarVehicle*> Vehicle; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRacerState_Countdown");
			return ret;
		}
	};


	// Class DelMarCore.DelMarRacerState_RunFinished
	// Inherited from UDelMarRacerState_WithSpectatorTransitionBase -> UDelMarRacerState -> UDelMarState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UDelMarRacerState_RunFinished : public UDelMarRacerState_WithSpectatorTransitionBase	
	{
	public:
		TWeakObjectPtr<ADelMarVehicle*> Vehicle; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRacerState_RunFinished");
			return ret;
		}
	};


	// Class DelMarCore.DelMarSpeedUpDevice
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xF8 (0xCE0 - 0xBE8)
	class ADelMarSpeedUpDevice : public AFortCreativeDeviceProp	
	{
	public:
		float SpeedAmount; // 0xBE8(0x4)
		float SpeedEffectDuration; // 0xBEC(0x4)
		float TurboChargesGained; // 0xBF0(0x4)
		unsigned char UnknownData00_6[0x1C]; // 0xBF4(0x1C) UNKNOWN PROPERTY
		float MinDotProductAngleValue; // 0xC10(0x4)
		FGameplayTag SpeedSourceTag; // 0xC14(0x4)
		bool bApplyForce; // 0xC18(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC19(0x3) UNKNOWN PROPERTY
		int32_t GroupId; // 0xC1C(0x4)
		FDelMarScaledCurve PowerIntensityScalarCurve; // 0xC20(0x90)
		float MaxLifetimePowerIntensitySeconds; // 0xCB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xCB4(0x4) UNKNOWN PROPERTY
		UStaticMeshComponent* Collider; // 0xCB8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0xCC0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarSpeedUpDevice");
			return ret;
		}

		bool ShouldGrantSpeedEffect(AActor* OtherActor); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF750E065FC(relative to base address)
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751758E88(relative to base address)
		void BP_HandleSpeedEffectGranted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarCore.DelMarSplineActorMovementComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDelMarSplineActorMovementComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr<USplineComponent*> MovementSpline; // 0xA0(0x8)
		float MovementSpeed; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarSplineActorMovementComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarStartLineActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ADelMarStartLineActor : public AActor	
	{
	public:
		ADelMarCheckpoint* Checkpoint; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarStartLineActor");
			return ret;
		}
	};


	// Class DelMarCore.DelMarTutorialConfigComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDelMarTutorialConfigComponent : public UActorComponent	
	{
	public:
		TArray<FDelMarTutorialSection> Sections; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarTutorialConfigComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarTutorialInteractableSpline
	// Inherited from AActor -> UObject
	// Size: 0x60 (0x2F0 - 0x290)
	class ADelMarTutorialInteractableSpline : public AActor	
	{
	public:
		bool bMustTriggerInOrder; // 0x290(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		FVector ChildActorScaleMultiplier; // 0x298(0x18)
		EDelMarSplineGenerationMode SplineGenerationMode; // 0x2B0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2B1(0x3) UNKNOWN PROPERTY
		int32_t ChildActorCount; // 0x2B4(0x4)
		bool bUseSplineRotationForActors; // 0x2B8(0x1)
		bool bShowDebugNumbers; // 0x2B9(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2BA(0x2) UNKNOWN PROPERTY
		float DebugTextZOffset; // 0x2BC(0x4)
		float DebugTextSize; // 0x2C0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY
		UMaterial* DebugTextMaterial; // 0x2C8(0x8)
		USplineComponent* SplineComponent; // 0x2D0(0x8)
		UClass* ChildActorClass; // 0x2D8(0x8)
		TArray<UChildActorComponent*> ChildActorComponents; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarTutorialInteractableSpline");
			return ret;
		}

		void ResetTriggers(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517594C4(relative to base address)
		void HandleColliderOverlap(ADelMarTutorialTriggerActor* InTrigger); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517586D4(relative to base address)
		float GetTriggerIndexAsRatio(ADelMarTutorialTriggerActor* InTrigger); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517585D0(relative to base address)
		int32_t GetTriggerIndex(ADelMarTutorialTriggerActor* InTrigger); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751758508(relative to base address)
		bool GetHaveAllTriggersCompleted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175840C(relative to base address)
		void BP_HandleAllSplineTriggersCompleted(AActor* FinalCompletedTrigger); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarCore.DelMarTutorialRaceManager
	// Inherited from ADelMarRaceManager -> AActor -> UObject
	// Size: 0x18 (0x4C8 - 0x4B0)
	class ADelMarTutorialRaceManager : public ADelMarRaceManager	
	{
	public:
		FDelMarVehicleAbilityConfig InitialVehicleAbilityConfig; // 0x4B0(0x11)
		unsigned char UnknownData00_7[0x7]; // 0x4C1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarTutorialRaceManager");
			return ret;
		}
	};


	// Class DelMarCore.DelMarTutorialTriggerActor
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class ADelMarTutorialTriggerActor : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UBoxComponent* BoxCollider; // 0x298(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x2A0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarTutorialTriggerActor");
			return ret;
		}

		void ResetTrigger(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75175BE50(relative to base address)
		void HandleColliderOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75175B2E4(relative to base address)
		bool CanTriggerActor(AActor* OtherActor); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75175A9FC(relative to base address)
		void BP_HandleColliderTriggered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleColliderReset(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BP_CanTriggerActor(AActor* OtherActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleAction
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UDelMarVehicleAction : public UObject	
	{
	public:
		FMulticastInlineDelegate OnActionPerformed; // 0x28(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleAction");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleAction_Jump
	// Inherited from UDelMarVehicleAction -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDelMarVehicleAction_Jump : public UDelMarVehicleAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleAction_Jump");
			return ret;
		}

		void HandleJump(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75175B5F4(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleAction_Drift
	// Inherited from UDelMarVehicleAction -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDelMarVehicleAction_Drift : public UDelMarVehicleAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleAction_Drift");
			return ret;
		}

		void HandleDrift(float DriftDirection, EDelMarVehicleDriftState DriftState); // Flags: Final|Native|Public, Memory Exec: 0x7FF75175B538(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleAction_HazardHit
	// Inherited from UDelMarVehicleAction -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDelMarVehicleAction_HazardHit : public UDelMarVehicleAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleAction_HazardHit");
			return ret;
		}

		void HandleHazardHit(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75175B5F4(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleAction_KickFlip
	// Inherited from UDelMarVehicleAction -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDelMarVehicleAction_KickFlip : public UDelMarVehicleAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleAction_KickFlip");
			return ret;
		}

		void HandleKickflip(bool bLeftSide); // Flags: Final|Native|Public, Memory Exec: 0x7FF75175B634(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleAction_Turbo
	// Inherited from UDelMarVehicleAction -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDelMarVehicleAction_Turbo : public UDelMarVehicleAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleAction_Turbo");
			return ret;
		}

		void HandleTurbo(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75175B5F4(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleAction_Underthrust
	// Inherited from UDelMarVehicleAction -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UDelMarVehicleAction_Underthrust : public UDelMarVehicleAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleAction_Underthrust");
			return ret;
		}

		void HandleUnderthrust(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75175B5F4(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleAutoInputComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UDelMarVehicleAutoInputComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleAutoInputComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleBodySetup
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UDelMarVehicleBodySetup : public UDataAsset	
	{
	public:
		FDelMarVehicleAxleConfig FrontAxle; // 0x30(0x28)
		FDelMarVehicleAxleConfig BackAxle; // 0x58(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleBodySetup");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleBodySetupMap
	// Inherited from UDataAsset -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UDelMarVehicleBodySetupMap : public UDataAsset	
	{
	public:
		TMap<FName, UDelMarVehicleBodySetup*> BodySetupNameMap; // 0x30(0x50)
		TMap<FGameplayTag, UDelMarVehicleBodySetup*> BodySetupArchetypeMap; // 0x80(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleBodySetupMap");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleCameraMode_V2
	// Inherited from UFortCameraMode -> UObject
	// Size: 0x3310 (0x3370 - 0x60)
	class UDelMarVehicleCameraMode_V2 : public UFortCameraMode	
	{
	public:
		UClass* CameraInputControllerComponentClass; // 0x60(0x8)
		TMap<FGameplayTag, FDelMarDefaultCameraValues> VehicleArchetypeDefaults; // 0x68(0x50)
		float DefaultInterpLambda; // 0xB8(0x4)
		float FOV; // 0xBC(0x4)
		float TotalFOVInterpLambda; // 0xC0(0x4)
		FFloatRange TotalFOVClamp; // 0xC4(0x10)
		float Distance; // 0xD4(0x4)
		float TotalDistanceInterpLambda; // 0xD8(0x4)
		FFloatRange TotalDistanceClamp; // 0xDC(0x10)
		float Height; // 0xEC(0x4)
		float TotalHeightInterpLambda; // 0xF0(0x4)
		float HeightOffsetInterpLambda; // 0xF4(0x4)
		FFloatRange TotalHeightClamp; // 0xF8(0x10)
		float AngleToOriginDegrees; // 0x108(0x4)
		float AngleToOriginInterpLambda; // 0x10C(0x4)
		FFloatRange TotalAngleToOriginClamp; // 0x110(0x10)
		float SwivelInterpLambda; // 0x120(0x4)
		float SwivelPitchMax; // 0x124(0x4)
		float SwivelYawMax; // 0x128(0x4)
		float GroundNormalInterpLambda; // 0x12C(0x4)
		float ForwardInterpLambda; // 0x130(0x4)
		float CarPitchInterpLambda; // 0x134(0x4)
		float AerialCarPitchInterpLambda; // 0x138(0x4)
		float MaxAerialCarPitch; // 0x13C(0x4)
		float PitchRotationAxisInterpLambda; // 0x140(0x4)
		float VerticalDriftDegreeThreshold; // 0x144(0x4)
		float MinDegreesVehicleWorldUpThreshold; // 0x148(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve MaxUpRotationPerSecondCurve; // 0x150(0x90)
		float MaxUpRotationPerSecondStatic; // 0x1E0(0x4)
		float WorldUpInterpRate; // 0x1E4(0x4)
		bool bPreventPenetration; // 0x1E8(0x1)
		bool bDoPredictiveAvoidance; // 0x1E9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1EA(0x2) UNKNOWN PROPERTY
		float CollisionPushOutDistance; // 0x1EC(0x4)
		float PenetrationBlendOutTime; // 0x1F0(0x4)
		float PenetrationBlendInTime; // 0x1F4(0x4)
		TEnumAsByte<ECollisionChannel> PenetrationTraceChannel; // 0x1F8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
		TArray<FPenetrationAvoidanceFeeler> PenetrationAvoidanceFeelers; // 0x200(0x10)
		FDelMarScaledCurve ForwardAirInterpLambdaCurve; // 0x210(0x90)
		FRuntimeFloatCurve ForwardAirBlendCurve; // 0x2A0(0x88)
		float MinForwardSpeedForAerialBlend; // 0x328(0x4)
		float MinTimeInAirBeforeUsingVehicleUp; // 0x32C(0x4)
		FDelMarScaledCurve GroundNormalAirInterpLambdaCurve; // 0x330(0x90)
		float AirFreestyleDeactivationExtendedSeconds; // 0x3C0(0x4)
		float AirFreestyleDeactivationLambdaSeconds; // 0x3C4(0x4)
		float AirFreestyleDeactivationForwardLambda; // 0x3C8(0x4)
		float AirFreestyleDeactivationNormalLambda; // 0x3CC(0x4)
		FRuntimeFloatCurve DriftForwardBlendCurve; // 0x3D0(0x88)
		FRuntimeFloatCurve AerialDriftForwardBlendCurve; // 0x458(0x88)
		FRuntimeFloatCurve DriftForwardInterpLambdaCurve; // 0x4E0(0x88)
		FRuntimeFloatCurve DriftOriginOffsetCurve; // 0x568(0x88)
		FDelMarScaledCurve DriftOriginOffsetInterpLambdaCurve; // 0x5F0(0x90)
		float DriftOriginOffsetInactiveLambda; // 0x680(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x684(0x4) UNKNOWN PROPERTY
		FDelMarCameraFloatBlendedProperty DriftKickOffsetDistance; // 0x688(0x1D0)
		float DriftKickOffsetLambda; // 0x858(0x4)
		float DriftKickOffsetInactiveLambda; // 0x85C(0x4)
		bool bDeactivateKickOffsetOnKickEnd; // 0x860(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x861(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve DriftRollDegreesCurve; // 0x868(0x88)
		FDelMarScaledCurve DriftRollDegreesInterpLambdaCurve; // 0x8F0(0x90)
		FDelMarScaledCurve DriftScalarCurveCurve; // 0x980(0x90)
		float GroundMaxPitchForNormalBlend; // 0xA10(0x4)
		float GroundExtraPitchForNormalBlend; // 0xA14(0x4)
		FDelMarCameraFloatProperty StableSpeedDistance; // 0xA18(0xB0)
		FDelMarCameraFloatProperty StableSpeedFOV; // 0xAC8(0xB0)
		FDelMarCameraFloatProperty StableSpeedHeight; // 0xB78(0xB0)
		FDelMarCameraFloatProperty StableSpeedAngleToOrigin; // 0xC28(0xB0)
		FDelMarCameraFloatProperty AccelerationDistance; // 0xCD8(0xB0)
		FDelMarCameraFloatProperty AccelerationFOV; // 0xD88(0xB0)
		FDelMarCameraFloatProperty AccelerationHeight; // 0xE38(0xB0)
		FDelMarCameraFloatProperty AccelerationAngleToOrigin; // 0xEE8(0xB0)
		FDelMarCameraFloatProperty BaseSpeedDistance; // 0xF98(0xB0)
		FDelMarCameraFloatProperty BaseSpeedFOV; // 0x1048(0xB0)
		FDelMarCameraFloatProperty BaseSpeedHeight; // 0x10F8(0xB0)
		FDelMarCameraFloatProperty BaseSpeedAngleToOrigin; // 0x11A8(0xB0)
		FDelMarCameraFloatProperty BaseAccelerationDistance; // 0x1258(0xB0)
		FDelMarCameraFloatProperty BaseAccelerationFOV; // 0x1308(0xB0)
		FDelMarCameraFloatProperty BaseAccelerationHeight; // 0x13B8(0xB0)
		FDelMarCameraFloatProperty BaseAccelerationAngleToOrigin; // 0x1468(0xB0)
		FDelMarCameraFloatBlendedProperty TurboDistance; // 0x1518(0x1D0)
		FDelMarCameraFloatBlendedProperty TurboFOV; // 0x16E8(0x1D0)
		FDelMarCameraFloatBlendedProperty TurboBonusZoneSuccessDistance; // 0x18B8(0x1D0)
		FDelMarCameraFloatBlendedProperty TurboBonusZoneSuccessFOV; // 0x1A88(0x1D0)
		FDelMarCameraFloatBlendedProperty DriftBonusDistance; // 0x1C58(0x1D0)
		FDelMarCameraFloatBlendedProperty DriftBonusFOV; // 0x1E28(0x1D0)
		FDelMarCameraFloatBlendedProperty StartlineDistance; // 0x1FF8(0x1D0)
		FDelMarCameraFloatBlendedProperty StartlineFOV; // 0x21C8(0x1D0)
		FDelMarCameraFloatProperty DraftDistance; // 0x2398(0xB0)
		FDelMarCameraFloatProperty DraftFOV; // 0x2448(0xB0)
		FDelMarCameraFloatBlendedProperty WorldBonusSpeedDistance; // 0x24F8(0x1D0)
		FDelMarCameraFloatBlendedProperty WorldBonusSpeedFOV; // 0x26C8(0x1D0)
		FDelMarCameraFloatProperty AerialDivingBonusSpeedDistance; // 0x2898(0xB0)
		float NonSkydivingDistanceScalar; // 0x2948(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x294C(0x4) UNKNOWN PROPERTY
		FDelMarCameraFloatProperty AerialDivingBonusSpeedFOV; // 0x2950(0xB0)
		float NonSkydivingFOVScalar; // 0x2A00(0x4)
		TWeakObjectPtr<ADelMarVehicle*> VehicleTarget; // 0x2A04(0x8)
		TWeakObjectPtr<UDelMarCameraInputControllerComponent*> CameraInputControllerComponent; // 0x2A0C(0x8)
		unsigned char UnknownData06_7[0x95C]; // 0x2A14(0x95C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleCameraMode_V2");
			return ret;
		}

		void OnWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175BC80(relative to base address)
		void OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175BAAC(relative to base address)
		void OnTurboDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175BA7C(relative to base address)
		void OnTurboBonusZoneStateChanged(EDelMarTurboZoneState ZoneState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B9C4(relative to base address)
		void OnTurboActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B9B0(relative to base address)
		void OnStartlineBoostDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B990(relative to base address)
		void OnStartlineBoostActivated(float StartlineBoostPerc); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B910(relative to base address)
		void OnDriftKickDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B8EC(relative to base address)
		void OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B828(relative to base address)
		void OnDriftBonusDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B808(relative to base address)
		void OnDriftBonusActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B7F4(relative to base address)
		void OnAppliedTeleportRotation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B7E0(relative to base address)
		void OnAirFreestyleDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75175B7C8(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleInteractionOverrideComponent
	// Inherited from UFortVehicleInteractionOverrideComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UDelMarVehicleInteractionOverrideComponent : public UFortVehicleInteractionOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleInteractionOverrideComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleInterface
	// Inherited from UVehicleCosmeticsInterface -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarVehicleInterface : public UVehicleCosmeticsInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleInterface");
			return ret;
		}

		bool WheelsOnGround(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175BE64(relative to base address)
		bool IsStrafeLeft(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B7A0(relative to base address)
		bool IsStrafeDisabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFD4030(relative to base address)
		bool IsStrafeActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C870558(relative to base address)
		bool IsSkyDiving(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BC77954(relative to base address)
		bool IsReattaching(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFD0F14(relative to base address)
		bool IsLosingAppliedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B778(relative to base address)
		bool IsKickingWheels(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B750(relative to base address)
		bool IsKickflipSuctionActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B728(relative to base address)
		bool IsInvulnerabilityActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75074F4B0(relative to base address)
		bool IsDriftControlled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEF6704(relative to base address)
		bool IsBraking(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EE1AB2C(relative to base address)
		bool IsAllVehicleInputDisabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B700(relative to base address)
		bool IsAirFreestyling(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEF8ECC(relative to base address)
		bool IsAccelerating(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B6D8(relative to base address)
		bool InDriftBoostRange(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B6B0(relative to base address)
		bool HasValidDraftingTarget(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5A4E20(relative to base address)
		float GetWorldAppliedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B2B8(relative to base address)
		FVector GetVelocity(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B27C(relative to base address)
		EDelMarVehicleForwardState GetVehicleForwardState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B254(relative to base address)
		float GetUnderthrustPercentageTankRemaining(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B228(relative to base address)
		float GetUnderthrustActiveDuration(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E2F1F14(relative to base address)
		float GetTurboBonusZoneBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B1FC(relative to base address)
		float GetTurboAppliedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B1D0(relative to base address)
		float GetTurboAdditionalActiveSeconds(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B1A4(relative to base address)
		UDelMarTrackPositionComponent GetTrackPositionComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749C648A0(relative to base address)
		float GetTotalTimeSkydiving(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B178(relative to base address)
		float GetThrottle(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B14C(relative to base address)
		float GetTargetSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B120(relative to base address)
		float GetTargetDriftSide(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B0F4(relative to base address)
		float GetStrafeCooldownPercentage(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B0C8(relative to base address)
		float GetSteeringAngle(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B09C(relative to base address)
		float GetSteering(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B070(relative to base address)
		float GetStartlinePercentageMaxBonusSpeedEarned(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B044(relative to base address)
		float GetStartlineMaxEarnedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175B018(relative to base address)
		float GetStartlineAppliedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AFEC(relative to base address)
		float GetStableSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AFC0(relative to base address)
		float GetSpeedometerSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AF94(relative to base address)
		USkeletalMeshComponent GetSkeletalMeshComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AF6C(relative to base address)
		float GetSideSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AF40(relative to base address)
		float GetRemainingTurboActiveSeconds(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AF14(relative to base address)
		FVector GetReattachmentDirection(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AED8(relative to base address)
		float GetQueuedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AEAC(relative to base address)
		float GetPotentialDriftBoostPercentage(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AE80(relative to base address)
		UPostProcessComponent GetPostProcessComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AE58(relative to base address)
		float GetPercentageTurboActiveTimeRemaining(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3C12DC(relative to base address)
		float GetOversteerAccumulationPercentage(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AE2C(relative to base address)
		float GetNormalizedForwardSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AE00(relative to base address)
		float GetNormalizedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175ADD4(relative to base address)
		float GetMaxNumTurboCharges(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175ADA8(relative to base address)
		FDelMarVehicleLandingData GetLandingData(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AD70(relative to base address)
		float GetKickflipDuration(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AD44(relative to base address)
		float GetKickflipDistanceToSuctionSurface(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AD18(relative to base address)
		int32_t GetKickflipActivationCharges(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175ACF0(relative to base address)
		float GetForwardSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175ACC4(relative to base address)
		float GetDriftSlipAngleRatio(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AC98(relative to base address)
		float GetDriftDuration(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AC6C(relative to base address)
		float GetDriftBoostAppliedBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C40917C(relative to base address)
		float GetDriftAngle(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AC40(relative to base address)
		float GetDraftingTargetDegrees(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1850(relative to base address)
		EDelmarDraftingState GetDraftingState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C316748(relative to base address)
		float GetDraftingMaxBonusSpeedPercentage(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AC14(relative to base address)
		float GetDraftingCurrentBonusSpeedPercentage(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5D1AF8(relative to base address)
		EDelMarTurboZoneState GetCurrentTurboBonusZoneState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748FE5E24(relative to base address)
		float GetCurrentNumTurboCharges(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175ABE8(relative to base address)
		float GetCurrentFastestSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175ABBC(relative to base address)
		UDelMarVehicleCosmeticComponent GetCosmeticComponent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AB94(relative to base address)
		float GetBonusSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AB68(relative to base address)
		float GetBaseTargetSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AB3C(relative to base address)
		float GetBaseForwardSpeed(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AB10(relative to base address)
		float GetAcceleration(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175AAE4(relative to base address)
		bool CanStrafeBeActivated(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75175A9D4(relative to base address)
		bool AnyWheelsOnGround(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEF6128(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleLoadoutSetup
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UDelMarVehicleLoadoutSetup : public UPrimaryDataAsset	
	{
	public:
		FDelMarLoadout Loadout; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleLoadoutSetup");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleNetworkPhysicsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x540 (0x5E0 - 0xA0)
	class UDelMarVehicleNetworkPhysicsComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		FDelMarVehicleReplicatedState ReplicatedState; // 0xB0(0x290)
		unsigned char UnknownData01_7[0x2A0]; // 0x340(0x2A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleNetworkPhysicsComponent");
			return ret;
		}

		void OnRep_ReplicatedState(FDelMarVehicleReplicatedState& PrevReplicatedState); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751761F7C(relative to base address)
		void OnPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751761EB8(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleStateTagManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDelMarVehicleStateTagManagerComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr<ADelMarVehicle*> CachedVehicle; // 0xA0(0x8)
		TWeakObjectPtr<UAbilitySystemComponent*> CachedASC; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleStateTagManagerComponent");
			return ret;
		}

		void HandleWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751761B10(relative to base address)
		void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751761768(relative to base address)
		void HandleTurboDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517612F8(relative to base address)
		void HandleTurboChargeUsed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517612D0(relative to base address)
		void HandleDriftDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517609A8(relative to base address)
		void HandleDriftBoostDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760980(relative to base address)
		void HandleDriftBoostActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760958(relative to base address)
		void HandleDriftActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760944(relative to base address)
		void HandleDraftDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760930(relative to base address)
		void HandleDraftActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760908(relative to base address)
		void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& Vehicle, bool bWheelsOnGround); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751760628(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleVerbComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UDelMarVehicleVerbComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleVerbComponent");
			return ret;
		}

		void HandleWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751761CE4(relative to base address)
		void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75176193C(relative to base address)
		void HandleVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517613A0(relative to base address)
		void HandleUnderthrustPercentChanged(float PercentageUnderthrustRemaining); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751761320(relative to base address)
		void HandleUnderthrustDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75176130C(relative to base address)
		void HandleTurboChargeUsed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517612E4(relative to base address)
		void HandleTurboBonusZoneChanged(EDelMarTurboZoneState BonusZoneState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751761134(relative to base address)
		void HandleStartlineBoostActivated(float BoostPercent); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517610B4(relative to base address)
		void HandleSpeedometerSpeedChanged(float UpdatedSpeedometerSpeed); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751761034(relative to base address)
		void HandlePotentialDriftBoostChanged(float Percent); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760FA8(relative to base address)
		void HandleKickflipped(bool bLeft); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760A70(relative to base address)
		void HandleJumpActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760A5C(relative to base address)
		void HandleDriftDurationChanged(float duration); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517609D0(relative to base address)
		void HandleDriftDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517609BC(relative to base address)
		void HandleDriftBoostDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751760994(relative to base address)
		void HandleDriftBoostActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75176096C(relative to base address)
		void HandleDraftActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75176091C(relative to base address)
		void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& Vehicle, bool bWheelsOnGround); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751760798(relative to base address)
	};


	// Class DelMarCore.GameFeatureAction_MergeRankedDisplayData
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameFeatureAction_MergeRankedDisplayData : public UGameFeatureAction	
	{
	public:
		UFortHabaneroDisplayData* MergeSource; // 0x28(0x8)
		UFortHabaneroDisplayData* MergeDestination; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GameFeatureAction_MergeRankedDisplayData");
			return ret;
		}
	};


	// Class DelMarCore.GameFeatureAction_OverrideGameModeAISettings
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_OverrideGameModeAISettings : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UAthenaAISettings*> AISettings; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.GameFeatureAction_OverrideGameModeAISettings");
			return ret;
		}
	};


	// Class DelMarCore.UDelMarPlayerSuspendComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UUDelMarPlayerSuspendComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xA8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.UDelMarPlayerSuspendComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarAudioComponentGroup
	// Inherited from UAudioComponentGroup -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x3E0 - 0x3C8)
	class UDelMarAudioComponentGroup : public UAudioComponentGroup	
	{
	public:
		UDelMarAudioMixModifierExtension* MixModifierExtension; // 0x3C8(0x8)
		UDelMarSubmixSendExtension* SubmixSendExtension; // 0x3D0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x3D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarAudioComponentGroup");
			return ret;
		}

		UDelMarSubmixSendExtension GetSubmixSends(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751780FAC(relative to base address)
		UDelMarAudioMixModifierExtension GetMixModifiers(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751780F94(relative to base address)
	};


	// Class DelMarCore.DelMarAudioController
	// Inherited from AVehicleCosmeticsAudioController -> AFortVehicleAudioController -> AActor -> UObject
	// Size: 0xF0 (0x508 - 0x418)
	class ADelMarAudioController : public AVehicleCosmeticsAudioController	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x418(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnBigAirStarted; // 0x430(0x10)
		FMulticastInlineDelegate OnBigAirStopped; // 0x440(0x10)
		UDelMarAudioComponentGroup* ComponentGroup; // 0x450(0x8)
		bool bIsLocal; // 0x458(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x459(0x3) UNKNOWN PROPERTY
		float FinishLineDistanceThreshold; // 0x45C(0x4)
		float ApproachingFinishLineMinTime; // 0x460(0x4)
		float BigAirLandingDistanceThreshold; // 0x464(0x4)
		float BigAirTimeThreshold; // 0x468(0x4)
		float BigAirDownSpeedThreshold; // 0x46C(0x4)
		float NonLocalVelocityInterpSpeed; // 0x470(0x4)
		float MaxAcceleration; // 0x474(0x4)
		bool bInBigAir; // 0x478(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x479(0x7) UNKNOWN PROPERTY
		ADelMarVehicle* CachedVehicle; // 0x480(0x8)
		bool bCanShift; // 0x488(0x1)
		unsigned char UnknownData03_7[0x7F]; // 0x489(0x7F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarAudioController");
			return ret;
		}

		UAudioComponent PlaySound(USoundBase* Sound, float InFadeInTime, float InTargetVolume, bool bDisableAttenuation, EAudioFaderCurve InFadeCurve); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517810F4(relative to base address)
		bool IsVirtualized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517810D4(relative to base address)
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Public, Memory Exec: 0x7FF751780FC4(relative to base address)
		UDelMarAudioComponentGroup GetComponentGroup(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E8B7148(relative to base address)
	};


	// Class DelMarCore.DelMarAudioMixModifierExtension
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UDelMarAudioMixModifierExtension : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarAudioMixModifierExtension");
			return ret;
		}

		void RemoveMixGroupByName(FName InName); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517814C4(relative to base address)
		void RemoveMixGroup(FAudioMixModifierGroup& InMixModifier); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751781424(relative to base address)
		void AddMixGroup(FAudioMixModifierGroup& InMixModifier); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751780D90(relative to base address)
	};


	// Class DelMarCore.DelMarAudioReverbComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x288 (0x328 - 0xA0)
	class UDelMarAudioReverbComponent : public UActorComponent	
	{
	public:
		USoundSubmixBase* ReverbSend; // 0xA0(0x8)
		USoundSubmixBase* EarlyReflectionSend; // 0xA8(0x8)
		FRuntimeFloatCurve EnclosureReverbBlendCurve; // 0xB0(0x88)
		FRuntimeFloatCurve WallDistanceBlendCurve; // 0x138(0x88)
		FRuntimeFloatCurve EnclosureSendLevelCurve; // 0x1C0(0x88)
		FRuntimeFloatCurve WallDistanceSendLevelCurve; // 0x248(0x88)
		int32_t NumPoints; // 0x2D0(0x4)
		float TraceRadius; // 0x2D4(0x4)
		FVector TraceOrigin; // 0x2D8(0x18)
		int32_t NumTracesPerFrame; // 0x2F0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		ADelMarVehicle* CachedVehicleOwner; // 0x2F8(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x300(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarAudioReverbComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarSubmixSendExtension
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UDelMarSubmixSendExtension : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		float SendInterpTime; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x14]; // 0xAC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarSubmixSendExtension");
			return ret;
		}

		void SetSend(USoundSubmixBase* InSubmix, float InLevel, bool bTrackCount); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751781604(relative to base address)
		void RemoveSend(USoundSubmixBase* InSubmix); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751781548(relative to base address)
	};


	// Class DelMarCore.DelMarNuxBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarNuxBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarNuxBlueprintFunctionLibrary");
			return ret;
		}

		FDelMarRankedInfo GetCurrentRankedInfoForVehicle(ADelMarVehicle* Vehicle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751780EF4(relative to base address)
		int32_t GetCurrentLapNumber(ADelMarVehicle* Vehicle); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751780E2C(relative to base address)
	};


	// Class DelMarCore.FortClientPilot_QuickSmokeDelMar
	// Inherited from UFortClientPilot_GameplayBase -> UFortClientPilot_Base -> UClientPilotComponent -> UObject
	// Size: 0x10 (0x320 - 0x310)
	class UFortClientPilot_QuickSmokeDelMar : public UFortClientPilot_GameplayBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x310(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.FortClientPilot_QuickSmokeDelMar");
			return ret;
		}
	};


	// Class DelMarCore.DelMarBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarBlueprintLibrary");
			return ret;
		}

		void SetDelMarTutorialHint(APlayerController* PlayerController, FDelMarEvent_SetTutorialHint& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7517A5308(relative to base address)
		void SetDelMarControlsText(APlayerController* PlayerController, FDelMarEvent_SetControlsText& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7517A51D0(relative to base address)
		bool IsPlaylistNameARotationPlaylist(FString PlaylistName); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A5118(relative to base address)
		bool IsDelMarPlaylist(UObject* ContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A5098(relative to base address)
		bool IsDelMarGFSActive(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A5074(relative to base address)
		bool IsDelMarExperience(bool bEnableCaching); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A4FF4(relative to base address)
		double GetTimerDeltaFromServerTime(double TimestampSeconds, EDelMarTimerDirection Direction, bool bCapAtZero, bool& bIsPositive, UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A48F8(relative to base address)
		AFortPlayerState GetPrimaryPlayerState(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7517A4798(relative to base address)
		AFortPlayerController GetPrimaryPlayerController(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7517A46DC(relative to base address)
		EDelMarNetModel GetNetModel(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A45C8(relative to base address)
		ADelMarVehicle GetDelMarVehicle(APlayerController* PlayerController); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A43FC(relative to base address)
		ADelMarPlayspace GetDelMarPlayspace(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7517A4370(relative to base address)
		double GetClientWorldTimeSeconds(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A42A8(relative to base address)
		FText DelMarFormatTime(double TimeSeconds, bool bIncludeMilliseconds); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A3F84(relative to base address)
		bool BP_KillAndRespawnVehicle(AController* Controller, FGameplayTag CausedByTag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7517A3ACC(relative to base address)
		bool AreAllLeaderboardFiltersEnabled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517A3AA0(relative to base address)
	};


	// Class DelMarCore.DelMarCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarCheatManager : public UChildCheatManager	
	{
	public:
		TArray<FString> SafePlayerNames; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCheatManager");
			return ret;
		}

		void DelMarUsePredictiveInterpolation(bool bEnabled, bool bEveryOther); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74DA0C510(relative to base address)
		void DelMarTeleportToPreviousCheckpoint_ParallelPath(int32_t ParallelPathIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarTeleportToNextCheckpoint_ParallelPath(int32_t ParallelPathIndex); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarStartTrackScrubberWithViewTarget(bool bRunCsvProfilerDuringScrub); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarStartRace(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarStartQueuedAutoInput(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarStartFollowTrack(float Throttle); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSpectate(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarSpawnVehicleForSelf(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarSpawnBotsAtSkillLevel(int32_t NumberOfBotsToSpawn, int32_t SkillLevel); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C39C954(relative to base address)
		void DelMarSpawnBots(int32_t NumberOfBotsToSpawn); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarSkipWaitingForPlayers(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarSetVerticalKickflipInverted(bool InbVerticalKickflipInverted); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetVehicleCollisionsOverrideGlobal(EDelMarVehicleCollisionOverrideSetting NewValue); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74E2263E0(relative to base address)
		void DelMarSetVehicleCollisionsOverrideForSelf(EDelMarVehicleCollisionOverrideSetting NewValue); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74E2263E0(relative to base address)
		void DelMarSetupTetheredPlayers(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarSetupMode(FString ModeName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void DelMarSetTutorialSection(int32_t Index); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarSetTurboCharges(float Amount, bool bGrantToEveryone); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74F5AB878(relative to base address)
		void DelMarSetStrafeEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetStartlineBoostPotentialOverride(float PotentialOverride); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetStartlineBoostEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetSpawnMode(EDelMarRaceSpawnMode SpawnMode); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74E2263E0(relative to base address)
		void DelMarSetRubberbandingNumPlayersForPackDistance(int32_t InNumPlayersForPackDistance); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarSetRubberbandingMMR(int32_t InMMR); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarSetRubberbandingMinPackDistance(float InMinPackDistance); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRubberbandingMinDistanceFromPack(float InMinDistanceFromPack); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRubberbandingMaxPackDistanceLostPerSecond(float InMaxPackDistanceLostPerSecond); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRubberbandingMaxPackDistanceGainedPerSecond(float InMaxPackDistanceGainedPerSecond); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRubberbandingMaxPackDistance(float InMaxPackDistance); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRubberbandingMaxDistanceFromPack(float InMaxDistanceFromPack); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRubberbandingMaxBonusSpeedScalar(float InMaxBonusSpeedScalar); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRubberbandingEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetRespawnTracesEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetRespawnInvulnerabilitySeconds(float Seconds); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRespawnInvulnerabilityEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetRespawnCollisionProtectionSeconds(float Seconds); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarSetRespawnCollisionProtectionEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetReplicatedTagEnabledOnSelf(FString InputTag, bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74EA4C584(relative to base address)
		void DelMarSetLoadingScreenVisibility(bool bShouldBeVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7517A41C4(relative to base address)
		void DelMarSetLapTotal(int32_t NewTotal); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarSetLap(int32_t LapNum); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarSetInvertSteerMethod(EDelMarInvertSteerMethod InInvertSteerMethod); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74E2263E0(relative to base address)
		void DelMarSetInputMappingContextEnabled(FString InputTag, bool bEnableInput); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74EA4C584(relative to base address)
		void DelMarSetInfiniteUnderthrustEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetGlobalInputEnabled(FString InputTag, bool bEnableInput); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74EA4C584(relative to base address)
		void DelMarSetGameplayModifiersMode(FString ModeName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void DelMarSetGameplayModifiersEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetDraftingEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetDemoModeEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetCollisionDemosEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetAirFreestyleEnabled(bool bEnabled); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarSetAdditiveRechargeRateModifierSeconds(float Amount, bool bGrantToEveryone); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74F5AB878(relative to base address)
		void DelMarReturnToLobby(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarResumeAllBots(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarRespawnPointLocked(bool bLocked); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarRespawnAtLastCheckpoint_ParallelPath(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarRespawnAtLastCheckpoint(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarResetTutorialSplines(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarResetRace(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarResetPreRaceViewTarget(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarResetAttachments(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarRenamePlayers(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarRemoveNumberOfBots(int32_t NumberOfBotsToRemove); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarRemoveBotByName(FString& BotName); // Flags: Final|Exec|Native|Protected|HasOutParms, Memory Exec: 0x7FF74E6934CC(relative to base address)
		void DelMarRemoveAllBots(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarReadyUpSelf(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarQueueAutoInputThrottle(float Throttle, float duration); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74E226C38(relative to base address)
		void DelMarQueueAutoInputJump(int32_t Repeat, float Delay); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7514FE7AC(relative to base address)
		void DelMarQueueAutoInputDriveThenTurn(int32_t Repeat, float Throttle, float StraightDuration, float Steer, float TurnDuration); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7517A4068(relative to base address)
		void DelMarPrintQuestProgress(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarPrintLogsToDiagnoseSpinout(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarPrintInputDisableLogs(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarPrevTutorialSection(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarPauseAllBots(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarNextTutorialSection(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarInitiateReturnToTrackDemoCountdown(float SecondsUntilDemo); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarInitiateMissedCheckpointDemoCountdown(float SecondsUntilDemo); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void DelMarGrantTurboCharges(float Amount, bool bGrantToEveryone); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74F5AB878(relative to base address)
		void DelMarGrantQuestsInDir(FString Dir); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void DelMarGiveSelfSomeCompetitiveMMRStats(int32_t MyPosition, int32_t TotalNumberOfPlayers, int32_t NumberOfTimesToSendMMRUpdate); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74DC2D588(relative to base address)
		void DelMarGhostStopPlayerRecording(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarGhostStartPlayerRecording(FString SaveFileName, bool bSaveToFile); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74EA4C584(relative to base address)
		void DelMarGhostStartPlayerPlayback(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarGhostSetReplayEnabled(bool bEnabled); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarGhostSetRecordOffPhysics(bool bEnabled); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarGhostForcePlayAllTriggers(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarGhostClearPlaybackFile(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarForceLoadUEFNIsland(FString IslandCode); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void DelMarForceLoadLevel(FString LevelName); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void DelMarForceEveryoneToReadyUp(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarFinishRaceSelf(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarFinishRace(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarFetchGlobalLeaderboard(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7517A3F58(relative to base address)
		void DelMarFetchFriendsLeaderboard(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7517A3F2C(relative to base address)
		void DelMarFetchFocusedLeaderboard(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7517A3EEC(relative to base address)
		void DelMarExitVehicle(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarEndSpectate(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF7517A3ED8(relative to base address)
		void DelMarDetachSelf(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarDestroyTrackScrubbers(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarDemolishSelfWithTag(FString DemolishTagString); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void DelMarDemolishSelf(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarCreateTrackScrubberForProfiling(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarClearQueuedAutoInput(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarClearActiveAutoInput(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarCancelReturnToTrackDemoCountdown(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarCancelMissedCheckpointDemoCountdown(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarAttachToPlayer(FString PlayerName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void DelMarAttachToFirstPlayer(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarAttachPlayerToPlayer(FString PlayerName, FString OtherPlayerName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected, Memory Exec: 0x7FF74E56A5C4(relative to base address)
		void BugItGo(float X, float Y, float Z, float pitch, float Yaw, float Roll); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const, Memory Exec: 0x7FF7517A3D0C(relative to base address)
		void BugIt(FString BugName); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const, Memory Exec: 0x7FF7517A3C7C(relative to base address)
	};


	// Class DelMarCore.DelMarGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGlobals");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleCameraMode
	// Inherited from UFortCameraMode_AthenaVehicle -> UFortCameraMode_ThirdPerson -> UFortCameraMode -> UObject
	// Size: 0x628 (0x2470 - 0x1E48)
	class UDelMarVehicleCameraMode : public UFortCameraMode_AthenaVehicle	
	{
	public:
		FDelMarVehicleCameraSettings CameraSettings; // 0x1E48(0x1C)
		unsigned char UnknownData00_6[0x4]; // 0x1E64(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve VelocityViewDistance; // 0x1E68(0x88)
		FRuntimeFloatCurve VelocityFOV; // 0x1EF0(0x88)
		FRuntimeFloatCurve AerialViewDistance; // 0x1F78(0x88)
		FRuntimeFloatCurve AerialFocusOffset; // 0x2000(0x88)
		FRuntimeFloatCurve AerialPitch; // 0x2088(0x88)
		FRuntimeFloatCurve AccelViewDistance; // 0x2110(0x88)
		FRuntimeFloatCurve AccelPitch; // 0x2198(0x88)
		FRuntimeFloatCurve AirRotationInterpRate; // 0x2220(0x88)
		float DriftSwivelSpeed; // 0x22A8(0x4)
		float ViewDistanceInterpSpeed; // 0x22AC(0x4)
		float FOVInterpSpeed; // 0x22B0(0x4)
		float AccelerationViewDistanceDecayRate; // 0x22B4(0x4)
		float MaxAccumulatedAccelViewDistance; // 0x22B8(0x4)
		float MinAccumulatedAccelViewDistance; // 0x22BC(0x4)
		float AerialOffsetInterpSpeed; // 0x22C0(0x4)
		float MaximumDownwardAerialPitch; // 0x22C4(0x4)
		float MaximumUpwardAerialPitch; // 0x22C8(0x4)
		float AccelerationPitchDecayRate; // 0x22CC(0x4)
		float MaxAccumulatedAccelPitch; // 0x22D0(0x4)
		float MinAccumulatedAccelPitch; // 0x22D4(0x4)
		bool bPreventSpeedIncreaseInAir; // 0x22D8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x22D9(0x3) UNKNOWN PROPERTY
		float SpeedInputScalar; // 0x22DC(0x4)
		float SwivelPitchMax; // 0x22E0(0x4)
		float SwivelYawMax; // 0x22E4(0x4)
		float GroundPitchInterpRate; // 0x22E8(0x4)
		float GroundMaxPitchForNormalBlend; // 0x22EC(0x4)
		float GroundNormalInterpRate; // 0x22F0(0x4)
		float GroundNormalAirInterpRate; // 0x22F4(0x4)
		float GroundYawRateMin; // 0x22F8(0x4)
		float GroundYawRateMax; // 0x22FC(0x4)
		float WallYawRateMin; // 0x2300(0x4)
		float WallYawRateMax; // 0x2304(0x4)
		float InterpToGroundTime; // 0x2308(0x4)
		float InterpToAirTime; // 0x230C(0x4)
		float AverageVelocityInterpRate; // 0x2310(0x4)
		float FocusOffsetInterpRate; // 0x2314(0x4)
		float DistanceSpeedScale; // 0x2318(0x4)
		float DistanceOffsetMin; // 0x231C(0x4)
		float DistanceOffsetMax; // 0x2320(0x4)
		float DistanceInterpRate; // 0x2324(0x4)
		float MaxSpeedFOVOffset; // 0x2328(0x4)
		float SupersonicFOVOffset; // 0x232C(0x4)
		float FOVInterpRate; // 0x2330(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2334(0x4) UNKNOWN PROPERTY
		ADelMarVehicle* VehicleTarget; // 0x2338(0x8)
		unsigned char UnknownData03_7[0x130]; // 0x2340(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleCameraMode");
			return ret;
		}
	};


	// Class DelMarCore.DelMarEliminationRaceManagerComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UDelMarEliminationRaceManagerComponent : public UDelMarRaceManagerComponent	
	{
	public:
		TArray<FDelMarEliminationMMRCountPair> EliminationsConfig; // 0xA0(0x10)
		int32_t ParsedNumberOfPlayersToEliminate; // 0xB0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarEliminationRaceManagerComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarStateSequencerFXComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x128 (0x1C8 - 0xA0)
	class UDelMarStateSequencerFXComponent : public UActorComponent	
	{
	public:
		float FXSizeScalar; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TMap<FGameplayTag, UNiagaraSystem*> ParticleClassMap; // 0xA8(0x50)
		unsigned char UnknownData01_6[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY
		FFXSystemSpawnParameters SpawnParams; // 0x100(0x70)
		ADelMarTimeDelayedStateSequencer* ParentRef; // 0x170(0x8)
		TMap<FGameplayTag, UNiagaraComponent*> ParticleComponentMap; // 0x178(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarStateSequencerFXComponent");
			return ret;
		}

		void HandleEnabledChanged(bool bEnabled); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517A4CB4(relative to base address)
		void HandleCurrentStateChanged(FGameplayTag NewState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517A4BA4(relative to base address)
	};


	// Class DelMarCore.DelMarTimeDelayedStateSequencer
	// Inherited from AActor -> UObject
	// Size: 0x50 (0x2E0 - 0x290)
	class ADelMarTimeDelayedStateSequencer : public AActor	
	{
	public:
		FMulticastInlineDelegate OnCurrentStateChanged; // 0x290(0x10)
		FMulticastInlineDelegate OnEnabledChanged; // 0x2A0(0x10)
		bool bEnableOnSpawn; // 0x2B0(0x1)
		bool bLoopSpecificAmount; // 0x2B1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2B2(0x2) UNKNOWN PROPERTY
		int32_t TotalLoopCount; // 0x2B4(0x4)
		TArray<FDelMarTimeDelayedState> StateArray; // 0x2B8(0x10)
		unsigned char UnknownData01_6[0xC]; // 0x2C8(0xC) UNKNOWN PROPERTY
		bool bIsEnabled; // 0x2D4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2D5(0x3) UNKNOWN PROPERTY
		int32_t CurrentStateIndex; // 0x2D8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarTimeDelayedStateSequencer");
			return ret;
		}

		void SetEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517A5418(relative to base address)
		void OnRep_CurrentStateIndex(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517A51A8(relative to base address)
		void OnRep_bIsEnabled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517A51BC(relative to base address)
		FGameplayTag GetStateTagAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A4874(relative to base address)
		int32_t GetStateCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE48(relative to base address)
		FGameplayTag GetCurrentStateTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517A4348(relative to base address)
	};


	// Class DelMarCore.DelMarGhostVehicle
	// Inherited from AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x50 (0x20D0 - 0x2080)
	class ADelMarGhostVehicle : public AFortAthenaVehicle	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x2080(0x48) UNKNOWN PROPERTY
		UMaterial* GhostMaterial; // 0x20C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGhostVehicle");
			return ret;
		}

		void HandleVehicleCosmeticsFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517A4F50(relative to base address)
	};


	// Class DelMarCore.DelMarGlobalInputDisabler
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UDelMarGlobalInputDisabler : public UDelMarRaceManagerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FGameplayTagContainer DisabledInputTags; // 0xB8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGlobalInputDisabler");
			return ret;
		}

		void SetGlobalInputsEnabled(FGameplayTagContainer InputTags, bool bEnable); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E73C0(relative to base address)
	};


	// Class DelMarCore.DelMarCosmeticActorSpawnLogic
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarCosmeticActorSpawnLogic : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCosmeticActorSpawnLogic");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCosmeticActorSpawnLogic_AttachTo
	// Inherited from UDelMarCosmeticActorSpawnLogic -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarCosmeticActorSpawnLogic_AttachTo : public UDelMarCosmeticActorSpawnLogic	
	{
	public:
		FName AttachSocket; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCosmeticActorSpawnLogic_AttachTo");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCosmeticActorSpawnLogic_AttachToEach
	// Inherited from UDelMarCosmeticActorSpawnLogic -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarCosmeticActorSpawnLogic_AttachToEach : public UDelMarCosmeticActorSpawnLogic	
	{
	public:
		TArray<FName> AttachSockets; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCosmeticActorSpawnLogic_AttachToEach");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCosmeticActor
	// Inherited from AActor -> UObject
	// Size: 0x38 (0x2C8 - 0x290)
	class ADelMarCosmeticActor : public AActor	
	{
	public:
		UDelMarCosmeticActorSpawnLogic* SpawnLogic; // 0x290(0x8)
		TArray<UClass*> CosmeticDependencies; // 0x298(0x10)
		TScriptInterface<Class> Vehicle; // 0x2A8(0x10)
		UDelMarVehicleConfigs* VehicleConfig; // 0x2B8(0x8)
		UDelMarVehicleCosmeticComponent* VehicleCosmeticComponent; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCosmeticActor");
			return ret;
		}

		bool IsLocallyViewed(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517E5F2C(relative to base address)
		USkeletalMeshComponent GetBodyMeshComponent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7517E5864(relative to base address)
		void BP_OnWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleWheelsLeftGround(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleStoppedSkydiving(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleStartedSkydiving(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleLanded(float LandingForced, bool bLandedKickflip); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleForwardStateChanged(EDelMarVehicleForwardState NewForwardState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleDemolished(FGameplayTag CausedByTag); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnderthrustDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUnderthrustActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTurboDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTurboBonusStateChanged(EDelMarTurboZoneState NewState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTurboActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStrafeUsabilityChanged(bool bCanActivate); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStrafeDisabledChanged(bool bDisabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStrafeDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStrafeCooldownChanged(float CooldownPercentage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStrafeActivated(bool bLeftSide); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStartlineBoostFailed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStartlineBoostDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStartlineBoostActivated(float PercentageMaxBonusSpeedEarned); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReattachmentDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReattachmentActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReachedMaxDraftBonusSpeed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnKickflipSuctionDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnKickflipSuctionActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnKickflipDurationChanged(float duration); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnKickflipDistanceToSuctionSurfaceChanged(float Distance); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnKickflipDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnKickflipActivationChargesChanged(int32_t ActivationCharges); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnKickflipActivated(bool bLeftSide); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnJumpDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnJumpActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInvulnerabilityDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInvulnerabilityActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftKickDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftDurationChanged(float duration); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftControlChanged(bool bIsDriftingControlled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftBoostDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftBoostActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDriftActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDraftStateChanged(EDelmarDraftingState CurrentState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDelMarVehicleSpawned(bool bFirstVehicleForPlayer, bool bPrevVehicleDemolished); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDelMarTeleportExited(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDelMarTeleportEntered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDelMarAppliedTeleportRotation(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCosmeticApplied(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBonusSpeedDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBonusSpeedChanged(float BonusSpeed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnBonusSpeedActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnAnyWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyCosmetic(); // Flags: Native|Public, Memory Exec: 0x7FF747E38E94(relative to base address)
	};


	// Class DelMarCore.DelMarCosmeticItemDefinition
	// Inherited from UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x148 - 0x130)
	class UDelMarCosmeticItemDefinition : public UFortAccountItemDefinition	
	{
	public:
		FGameplayTag Slot; // 0x130(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> CosmeticActorClasses; // 0x138(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCosmeticItemDefinition");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleBodyItemDefinition
	// Inherited from UDelMarCosmeticItemDefinition -> UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x148 - 0x148)
	class UDelMarVehicleBodyItemDefinition : public UDelMarCosmeticItemDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleBodyItemDefinition");
			return ret;
		}
	};


	// Class DelMarCore.DelMarLeaderboardManager
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1C8 (0x268 - 0xA0)
	class UDelMarLeaderboardManager : public UDelMarRaceManagerComponent	
	{
	public:
		FString CurrentSeasonIdentifier; // 0xA0(0x10)
		UDelMarEvent_GlobalLeaderboardPersonalBestRetrieved* PersonalBestRetrievedEvent; // 0xB0(0x8)
		unsigned char UnknownData00_6[0x70]; // 0xB8(0x70) UNKNOWN PROPERTY
		FDelMarLeaderboardConfig LeaderboardConfig; // 0x128(0x20)
		unsigned char UnknownData01_7[0x120]; // 0x148(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarLeaderboardManager");
			return ret;
		}

		void OnRep_LeaderboardConfig(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7517E6C28(relative to base address)
	};


	// Class DelMarCore.DelMarMatchmakingComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarMatchmakingComponent : public UControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarMatchmakingComponent");
			return ret;
		}

		void ClientStartMatchmaking(FOnlineLinkId LinkId); // Flags: Net|NetReliableNative|Event|Public|NetClient, Memory Exec: 0x7FF7517E5730(relative to base address)
	};


	// Class DelMarCore.DelMarGameplayModifier
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class ADelMarGameplayModifier : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayModifier");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGameplayModifier_AttachmentManager
	// Inherited from ADelMarGameplayModifier -> AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ADelMarGameplayModifier_AttachmentManager : public ADelMarGameplayModifier	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x290(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayModifier_AttachmentManager");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGameplayModifier_CVarOverride
	// Inherited from ADelMarGameplayModifier -> AActor -> UObject
	// Size: 0x38 (0x2C8 - 0x290)
	class ADelMarGameplayModifier_CVarOverride : public ADelMarGameplayModifier	
	{
	public:
		FString VariableName; // 0x290(0x10)
		FString Value; // 0x2A0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x2B0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayModifier_CVarOverride");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGameplayModifier_FriendlyFire
	// Inherited from ADelMarGameplayModifier -> AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ADelMarGameplayModifier_FriendlyFire : public ADelMarGameplayModifier	
	{
	public:
		EFriendlyFireType FriendlyFireType; // 0x290(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x291(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayModifier_FriendlyFire");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGameplayModifier_PlacementSpawner
	// Inherited from ADelMarGameplayModifier -> AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class ADelMarGameplayModifier_PlacementSpawner : public ADelMarGameplayModifier	
	{
	public:
		UClass* ActorClassToSpawn; // 0x290(0x8)
		int32_t MaxPlacement; // 0x298(0x4)
		float SecondsBetweenSpawns; // 0x29C(0x4)
		float RaceStartDelaySeconds; // 0x2A0(0x4)
		float ActorLifespanSeconds; // 0x2A4(0x4)
		float ActorDisplacementUnits; // 0x2A8(0x4)
		int32_t MaxSpawnedActors; // 0x2AC(0x4)
		float MinSpeedForVelocityOrientation; // 0x2B0(0x4)
		int32_t SpawnPoints; // 0x2B4(0x4)
		int32_t TriggerPoints; // 0x2B8(0x4)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0x2BC(0x8)
		TWeakObjectPtr<UDelMarPositionalTrackerComponent*> CachedPositionComponent; // 0x2C4(0x8)
		unsigned char UnknownData00_7[0x1C]; // 0x2CC(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayModifier_PlacementSpawner");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGameplayModifier_VehicleClassOverride
	// Inherited from ADelMarGameplayModifier -> AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ADelMarGameplayModifier_VehicleClassOverride : public ADelMarGameplayModifier	
	{
	public:
		TWeakObjectPtr<UClass*> VehicleClassOverride; // 0x290(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayModifier_VehicleClassOverride");
			return ret;
		}
	};


	// Class DelMarCore.DelMarMutator_AllowSpectateOtherTeams
	// Inherited from AFortAthenaMutator_AllowSpectateOtherTeams -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x340 - 0x340)
	class ADelMarMutator_AllowSpectateOtherTeams : public AFortAthenaMutator_AllowSpectateOtherTeams	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarMutator_AllowSpectateOtherTeams");
			return ret;
		}
	};


	// Class DelMarCore.DelMarAsyncPhysicsTickMutator
	// Inherited from ADelMarMutator -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x350 - 0x340)
	class ADelMarAsyncPhysicsTickMutator : public ADelMarMutator	
	{
	public:
		float AsyncTickRate; // 0x340(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x344(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarAsyncPhysicsTickMutator");
			return ret;
		}

		void TryToApplySolverOverrides(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E771C(relative to base address)
	};


	// Class DelMarCore.DelMarConsoleVariableMutator
	// Inherited from ADelMarMutator -> AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x30 (0x370 - 0x340)
	class ADelMarConsoleVariableMutator : public ADelMarMutator	
	{
	public:
		FString VariableName; // 0x340(0x10)
		FString Value; // 0x350(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x360(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarConsoleVariableMutator");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPhysMatAttributeMap
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UDelMarPhysMatAttributeMap : public UDataAsset	
	{
	public:
		TMap<UPhysicalMaterial*, FPhysicalMaterialAttributes_X> MaterialAttributesMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPhysMatAttributeMap");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCameraComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UDelMarCameraComponent : public UControllerComponent	
	{
	public:
		TWeakObjectPtr<UDelMarVehicleManager*> VehicleManager; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCameraComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCameraInputControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UDelMarCameraInputControllerComponent : public UControllerComponent	
	{
	public:
		FDelMarInputAction TurnCameraAction; // 0xA0(0x10)
		FDelMarInputAction LookUpCameraAction; // 0xB0(0x10)
		FDelMarInputAction ReverseCameraAction; // 0xC0(0x10)
		UClass* InputManagerClass; // 0xD0(0x8)
		TWeakObjectPtr<UEnhancedInputComponent*> InputComponent; // 0xD8(0x8)
		TWeakObjectPtr<UFortClientSettingsRecord*> FortSettings; // 0xE0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0xE8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCameraInputControllerComponent");
			return ret;
		}

		void HandleInputSettingsChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5A28(relative to base address)
		void HandleCameraSwivelDeadzoneChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5970(relative to base address)
	};


	// Class DelMarCore.DelMarContextualHintComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
	class UDelMarContextualHintComponent : public UControllerComponent	
	{
	public:
		FDelMarEvent_SetTutorialHint HazardHitHint; // 0xA0(0x48)
		TMap<FGameplayTag, FDelMarEvent_SetTutorialHint> DemolishedByHints; // 0xE8(0x50)
		FDelMarEvent_SetTutorialHint SlowerTerrainHint; // 0x138(0x48)
		TWeakObjectPtr<ADelMarVehicle*> Vehicle; // 0x180(0x8)
		TWeakObjectPtr<APlayerController*> CachedPlayerController; // 0x188(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x190(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarContextualHintComponent");
			return ret;
		}

		void HandleVehicleHazardHit(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7517E5D0C(relative to base address)
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Private, Memory Exec: 0x7FF7517E5BFC(relative to base address)
	};


	// Class DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UDelMarLocalCheckpointVisibilityControllerComponent : public UControllerComponent	
	{
	public:
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xA0(0x8)
		TWeakObjectPtr<UDelMarCheckpointManagerComponent*> CachedCheckpointManager; // 0xA8(0x8)
		TWeakObjectPtr<AFortPlayerState*> ViewTargetPlayerState; // 0xB0(0x8)
		TWeakObjectPtr<AFortPlayerState*> CachedLocalPlayerState; // 0xB8(0x8)
		TSet<ADelMarCheckpoint*> CurrentlyActiveCheckpoints; // 0xC0(0x50)
		bool bVisitedStartingCheckpoint; // 0x110(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x111(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* PlayerController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5D34(relative to base address)
		void HandleLapComplete(FDelMarEvent_LapComplete& LapEvent); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7517E5A50(relative to base address)
		void HandleCheckpointPassed(FDelMarEvent_CheckpointPassed_ParallelPath& CheckpointEvent); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7517E5984(relative to base address)
	};


	// Class DelMarCore.DelMarNetworkInputComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x100 - 0xA0)
	class UDelMarNetworkInputComponent : public UControllerComponent	
	{
	public:
		unsigned char UnknownData00_1[0x60]; // 0xA0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarNetworkInputComponent");
			return ret;
		}

		void ServerSendInputs(FDelMarNetworkInputPacket InputPacket); // Flags: Final|Net|Native|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF7517E71CC(relative to base address)
	};


	// Class DelMarCore.DelMarPlayerAttachmentComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UDelMarPlayerAttachmentComponent : public UDelMarPlayerStateComponent	
	{
	public:
		TWeakObjectPtr<AFortPlayerState*> AttachedPlayer; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerAttachmentComponent");
			return ret;
		}

		void OnRep_AttachedPlayer(TWeakObjectPtr<AFortPlayerState*> PrevPlayer); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E6B18(relative to base address)
	};


	// Class DelMarCore.DelMarPlayerDeathRaceDataComponent
	// Inherited from UDelMarPlayerRaceDataComponent -> UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x258 - 0x250)
	class UDelMarPlayerDeathRaceDataComponent : public UDelMarPlayerRaceDataComponent	
	{
	public:
		int32_t Score; // 0x250(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x254(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerDeathRaceDataComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayerInputManagerComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UDelMarPlayerInputManagerComponent : public UDelMarPlayerStateComponent	
	{
	public:
		TMap<FGameplayTag, FDelMarInputMappingContextData> InputMappingContextMap; // 0xA0(0x50)
		UDelMarInputContextRedirectMap* PlatformDigitalRedirect; // 0xF0(0x8)
		TWeakObjectPtr<AFortPlayerController*> CachedController; // 0xF8(0x8)
		TWeakObjectPtr<ADelMarVehicle*> CachedVehicle; // 0x100(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0x108(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerInputManagerComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayerRespawnComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UDelMarPlayerRespawnComponent : public UDelMarPlayerStateComponent	
	{
	public:
		float TeleportEnterPhaseSeconds; // 0xA0(0x4)
		float RespawnBackwardsRangeDistance; // 0xA4(0x4)
		float RespawnForwardRangeDistance; // 0xA8(0x4)
		float RespawnHeightStartDistance; // 0xAC(0x4)
		float RespawnHeightPenetrationDistance; // 0xB0(0x4)
		float RespawnValidTrackRadius; // 0xB4(0x4)
		bool bCheckForObstacles; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		float OppositeSideThreshold; // 0xBC(0x4)
		FVector ObstacleAreaBounds; // 0xC0(0x18)
		TArray<UClass*> ObstacleActorClasses; // 0xD8(0x10)
		TArray<UClass*> ObstacleActorIgnoreClasses; // 0xE8(0x10)
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0xF8(0x8)
		TWeakObjectPtr<ADelMarVehicle*> DelMarVehicle; // 0x100(0x8)
		TWeakObjectPtr<UDelMarCheckpointManagerComponent*> CheckpointManager; // 0x108(0x8)
		TWeakObjectPtr<UDelMarPlayerRaceDataComponent*> PlayerRaceData; // 0x110(0x8)
		TWeakObjectPtr<UDelMarRaceConfigComponent*> RaceConfig; // 0x118(0x8)
		TWeakObjectPtr<ADelMarTrack*> LastActiveTrack; // 0x120(0x8)
		TWeakObjectPtr<UDelMarTrackPositionComponent*> TrackPosition; // 0x128(0x8)
		int32_t LastValidSegmentIndex; // 0x130(0x4)
		float LastValidDistanceAlongSpline; // 0x134(0x4)
		float LastValidPrimaryDistance; // 0x138(0x4)
		bool bSpawnOnOppositeSide; // 0x13C(0x1)
		bool bPreviousVehicleDemolished; // 0x13D(0x1)
		bool bFirstVehicleForPlayer; // 0x13E(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x13F(0x1) UNKNOWN PROPERTY
		ADelMarCheckpoint* CachedTeleportCheckpoint; // 0x140(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x148(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerRespawnComponent");
			return ret;
		}

		void HandleVehicleAppliedTeleportLocation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5BE8(relative to base address)
	};


	// Class DelMarCore.DelMarPlayerStartlineComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UDelMarPlayerStartlineComponent : public UDelMarPlayerStateComponent	
	{
	public:
		float FailBufferSeconds; // 0xA0(0x4)
		TWeakObjectPtr<ADelMarVehicle*> DelMarVehicle; // 0xA4(0x8)
		unsigned char UnknownData00_7[0x44]; // 0xAC(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerStartlineComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPlayerTurboManagerComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UDelMarPlayerTurboManagerComponent : public UDelMarPlayerStateComponent	
	{
	public:
		float TurboCharges; // 0xA0(0x4)
		float RechargeRateSeconds; // 0xA4(0x4)
		float AdditiveRechargeRateModifierSeconds; // 0xA8(0x4)
		float LapCompleteCharges; // 0xAC(0x4)
		float RaceStartCharges; // 0xB0(0x4)
		float MaxCharges; // 0xB4(0x4)
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0xB8(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xC0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPlayerTurboManagerComponent");
			return ret;
		}

		void SetTurboCharges(float TurboChargeAmount); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E7660(relative to base address)
		void SetAdditiveRechargeRateModifierSeconds(float InAdditionalRechargeRateSeconds); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E7338(relative to base address)
		void ModifyTurboCharges_Delayed(float TurboChargeAmount); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E6028(relative to base address)
		void ModifyTurboCharges(float TurboChargeAmount); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E5FA8(relative to base address)
		void HandleTurboChargeUsed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7517E5BCC(relative to base address)
	};


	// Class DelMarCore.DelMarRemoveAthenaMarkerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarRemoveAthenaMarkerComponent : public UControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRemoveAthenaMarkerComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarRequestComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class UDelMarRequestComponent : public UDelMarPlayerStateComponent	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0xA0(0x48) UNKNOWN PROPERTY
		FGameplayTagContainer MapChoice; // 0xE8(0x20)
		bool bIsReadyToStartRace; // 0x108(0x1)
		bool bIsReadyToJoinRace; // 0x109(0x1)
		EDelMarPostRaceVote PostRaceVote; // 0x10A(0x1)
		bool bVotedPostRace; // 0x10B(0x1)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0x10C(0x8)
		TWeakObjectPtr<UDelMarRespawnManagerComponent*> CachedRespawnManager; // 0x114(0x8)
		TWeakObjectPtr<AFortPlayerState*> PlayerState; // 0x11C(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x124(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRequestComponent");
			return ret;
		}

		void ServerSetPostRaceVote(EDelMarPostRaceVote NewVote); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF750052864(relative to base address)
		void ServerSetJoinNextRace(bool bInReadyToJoinRace); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74F49B104(relative to base address)
		void ServerRequestVehicleSpawn(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E94BA1C(relative to base address)
		void ServerRequestSpectatorBecomePlayer(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E94B630(relative to base address)
		void ServerRequestResetRun(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74D8BB7F8(relative to base address)
		void ServerRequestRacerCountdown(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E2551C0(relative to base address)
		void ServerRequestMapFromGameplay(FGameplayTagContainer InMapChoice); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF7517E7078(relative to base address)
		void ServerRequestMap(FGameplayTagContainer InMapChoice); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF7517E6F24(relative to base address)
		void ServerRequestIdleKickExtension(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74F0F9DB4(relative to base address)
		void ServerRequestFinalInitialization(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF7476407DC(relative to base address)
		void ServerRequestBecomeSpectator(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF749483DBC(relative to base address)
		void ServerReadyUp(bool bInReadyUp); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF7517E6EA0(relative to base address)
		void ServerPostRaceReturnToLobbySelected(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void ServerPostRaceNextRaceSelected(); // Flags: Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void PostRaceReturnToLobbySelected(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E6D00(relative to base address)
		void PostRaceNextRaceSelected(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517E6CEC(relative to base address)
		void OnRep_PostRaceVote(); // Flags: Final|Native|Protected|Const, Memory Exec: 0x7FF7517E6C80(relative to base address)
		void OnRep_bIsReadyToStartRace(); // Flags: Final|Native|Protected|Const, Memory Exec: 0x7FF7517E6CD8(relative to base address)
		void OnRep_bIsReadyToJoinRace(); // Flags: Final|Native|Protected|Const, Memory Exec: 0x7FF7517E6CC4(relative to base address)
		void HandleLoadoutsChangedOnServer(FCosmeticLoadout& CosmeticLoadout); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7517E5AF4(relative to base address)
		void HandleArchetypeChangedOnServer(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7517E595C(relative to base address)
	};


	// Class DelMarCore.DelMarRunRecordPlayerComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UDelMarRunRecordPlayerComponent : public UDelMarPlayerStateComponent	
	{
	public:
		FDelMarRunRecord CurrentRunRecord; // 0xA0(0x20)
		FDelMarRunRecord BestRunRecord; // 0xC0(0x20)
		FDelMarRunRecord BestSectionsRecord; // 0xE0(0x20)
		double BestSingleLapTime; // 0x100(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0x108(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRunRecordPlayerComponent");
			return ret;
		}

		void PrintRecords(FDelMarRunRecord& RunRecord, FString Name); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7517E6D14(relative to base address)
		void NetMulticast_SectionRecorded(FDelMarEvent_SectionRecorded InSectionRecordedEvent); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E68A0(relative to base address)
		void NetMulticast_RunRecorded(FDelMarEvent_RunRecorded InRunRecordedEvent); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E6618(relative to base address)
		void NetMulticast_LapRecorded(FDelMarEvent_LapRecorded InLapRecordedEvent); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF7517E6408(relative to base address)
	};


	// Class DelMarCore.DelMarTutorialRequestComponent
	// Inherited from UDelMarPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDelMarTutorialRequestComponent : public UDelMarPlayerStateComponent	
	{
	public:
		TWeakObjectPtr<AFortPlayerState*> PlayerState; // 0xA0(0x8)
		TWeakObjectPtr<ADelMarTutorialRaceManager*> TutorialRaceManager; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarTutorialRequestComponent");
			return ret;
		}

		void TutorialComplete(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751832E68(relative to base address)
		void Server_RequestStartRace(bool bSkipCountdown); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74FC65590(relative to base address)
		void Server_RequestSection(int32_t SectionIndex); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF7518341D4(relative to base address)
		void Server_RequestPrevSection(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF7476407DC(relative to base address)
		void Server_RequestNextSection(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable, Memory Exec: 0x7FF74E94BA1C(relative to base address)
		void Server_KeepTraining(); // Flags: Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|Const, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void Replay(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518336A4(relative to base address)
		void KeepTraining(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF7518331FC(relative to base address)
		void GoRace(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751832E68(relative to base address)
	};


	// Class DelMarCore.DelMarLevelManagerComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x150 - 0xA0)
	class UDelMarLevelManagerComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr<UDelMarLevelDataAsset*> CurrentLevelData; // 0xD0(0x8)
		FOnlineLinkId CurrentLevelLinkId; // 0xD8(0x18)
		FGameplayTagContainer DesiredMapDescription; // 0xF0(0x20)
		FOnlineLinkId DesiredLinkId; // 0x110(0x18)
		unsigned char UnknownData01_7[0x28]; // 0x128(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarLevelManagerComponent");
			return ret;
		}

		void ServerRequestLevel(FGameplayTagContainer DesiredMap); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF751833B98(relative to base address)
		void RequestLevelLoad(FGameplayTagContainer& DesiredMap); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7518336B8(relative to base address)
	};


	// Class DelMarCore.DelMarLoadingScreenMutator
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x10 (0x348 - 0x338)
	class ADelMarLoadingScreenMutator : public AFortAthenaMutator	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x338(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarLoadingScreenMutator");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCheckpointManagerComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x108 - 0xA0)
	class UDelMarCheckpointManagerComponent : public UDelMarRaceManagerComponent	
	{
	public:
		bool bPromptFirstPlaceEvent; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		ADelMarCheckpoint* StartingLineCheckpoint; // 0xA8(0x8)
		ADelMarCheckpoint* FinishLineCheckpoint; // 0xB0(0x8)
		TSet<ADelMarCheckpoint*> LevelCheckpoints; // 0xB8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCheckpointManagerComponent");
			return ret;
		}

		void HandleResetRace(FDelMarEvent_ResetRace& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751833058(relative to base address)
		void HandleRaceFinished(FDelMarEvent_RaceFinished& Event); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751832ED0(relative to base address)
	};


	// Class DelMarCore.DelMarDeathRaceManager
	// Inherited from ADelMarRaceManager -> AActor -> UObject
	// Size: 0x30 (0x4E0 - 0x4B0)
	class ADelMarDeathRaceManager : public ADelMarRaceManager	
	{
	public:
		float NextRoundSeconds; // 0x4B0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4B4(0x4) UNKNOWN PROPERTY
		FDelMarDeathRaceConfig DeathRaceConfigData; // 0x4B8(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x4D0(0x8) UNKNOWN PROPERTY
		int32_t NumPlayersFinished; // 0x4D8(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x4DC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarDeathRaceManager");
			return ret;
		}

		int32_t GetScoreThresholdToEndMatch(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E691490(relative to base address)
		int32_t GetPointsAwardForPlacement(int32_t InPlacement); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751832D70(relative to base address)
	};


	// Class DelMarCore.DelMarGameplayModifierMap
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UDelMarGameplayModifierMap : public UDataAsset	
	{
	public:
		TMap<FString, FDelMarGameplayModifierList> ModifierMap; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayModifierMap");
			return ret;
		}
	};


	// Class DelMarCore.DelMarGameplayModifierComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UDelMarGameplayModifierComponent : public UDelMarRaceManagerComponent	
	{
	public:
		bool bEnabled; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UDelMarGameplayModifierMap* ModifierModes; // 0xA8(0x8)
		FString ModeName; // 0xB0(0x10)
		TArray<ADelMarGameplayModifier*> SpawnedModifiers; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameplayModifierComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarMatchmakeRatingComponentBase
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UDelMarMatchmakeRatingComponentBase : public UDelMarRaceManagerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarMatchmakeRatingComponentBase");
			return ret;
		}
	};


	// Class DelMarCore.DelmarCompetitiveMatchmakeRatingComponent
	// Inherited from UDelMarMatchmakeRatingComponentBase -> UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x108 (0x1A8 - 0xA0)
	class UDelmarCompetitiveMatchmakeRatingComponent : public UDelMarMatchmakeRatingComponentBase	
	{
	public:
		TMap<AFortPlayerState*, int32_t> CachedPlayerRankMap; // 0xA0(0x50)
		TSet<FString> PlayerUniqueIdsGivenMMR; // 0xF0(0x50)
		TSet<FString> PlayerUniqueIds; // 0x140(0x50)
		unsigned char UnknownData00_7[0x18]; // 0x190(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelmarCompetitiveMatchmakeRatingComponent");
			return ret;
		}
	};


	// Class DelMarCore.DelMarPositionalTrackerComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB8 (0x158 - 0xA0)
	class UDelMarPositionalTrackerComponent : public UDelMarRaceManagerComponent	
	{
	public:
		float TargetUpdateRateInSeconds; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x34]; // 0xA4(0x34) UNKNOWN PROPERTY
		TMap<AFortPlayerState*, FDelMarPositionValue> SplinePositions; // 0xD8(0x50)
		TArray<AFortPlayerState*> RacePositions; // 0x128(0x10)
		TArray<FDelMarFinalRacePositionEntry> FinalRacePositions; // 0x138(0x10)
		float TimeSinceLastUpdate; // 0x148(0x4)
		int32_t NumLapsInRace; // 0x14C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x150(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarPositionalTrackerComponent");
			return ret;
		}

		void OnRep_FinalRacePositions(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518333A4(relative to base address)
	};


	// Class DelMarCore.DelMarRaceConfigComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x2B0 (0x350 - 0xA0)
	class UDelMarRaceConfigComponent : public UDelMarRaceManagerComponent	
	{
	public:
		bool bGhostReplayEnabled; // 0xA0(0x1)
		bool bAllowExitingVehicles; // 0xA1(0x1)
		bool bResetPlayerRunOnUnregister; // 0xA2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xA3(0x1) UNKNOWN PROPERTY
		float SecondsBeforeWrongwayWarning; // 0xA4(0x4)
		float SecondsBeforeDemoWarningsAppear; // 0xA8(0x4)
		float SecondsBeforeMissedCheckpointDemo; // 0xAC(0x4)
		float SecondsBeforeReturnToTrackDemo; // 0xB0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		double DistanceFromTrackBeforeDemoWarning; // 0xB8(0x8)
		double DistanceFromVehicleBeforeReset; // 0xC0(0x8)
		TWeakObjectPtr<UClass*> DefaultVehicleClass; // 0xC8(0x20)
		TArray<UClass*> ServerPlayerStateComponents; // 0xE8(0x10)
		TArray<UClass*> ClientPlayerStateComponents; // 0xF8(0x10)
		TArray<UClass*> ServerControllerComponents; // 0x108(0x10)
		TArray<UClass*> ClientControllerComponents; // 0x118(0x10)
		UClass* SpectatorControllerComponentClass; // 0x128(0x8)
		FDelMarBotRuntimeConfig BotRuntimeConfig; // 0x130(0x98)
		FDelMarMatchmakingConfig MatchmakingConfig; // 0x1C8(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x1DC(0x4) UNKNOWN PROPERTY
		FDelMarStartlineConfig StartlineConfig; // 0x1E0(0x28)
		FDelMarVehicleRuntimeConfig VehicleRuntimeConfig; // 0x208(0x14)
		FDelMarVehicleAbilityConfig VehicleAbilityConfig; // 0x21C(0x11)
		unsigned char UnknownData03_6[0x3]; // 0x22D(0x3) UNKNOWN PROPERTY
		FDelMarRespawnConfig RespawnConfig; // 0x230(0x10)
		FDelMarRubberbandingConfig DefaultRubberbandingConfig; // 0x240(0x28)
		TArray<FDelMarRubberbandingMMRConfig> RubberbandingMMRConfigs; // 0x268(0x10)
		TArray<FDelMarRubberbandingMMRConfig> RubberbandingMMROverrideConfigs; // 0x278(0x10)
		TMap<FString, FDelMarRubberbandingConfig> NonMMRRubberbandingConfigs; // 0x288(0x50)
		TMap<FString, FDelMarRubberbandingConfig> NonMMRRubberbandingOverrideConfigs; // 0x2D8(0x50)
		unsigned char UnknownData04_7[0x28]; // 0x328(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRaceConfigComponent");
			return ret;
		}

		void OnRep_VehicleAbilityConfig(FDelMarVehicleAbilityConfig& OldConfig); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751833508(relative to base address)
		void BroadcastVehicleAbilityConfigUpdated(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518329EC(relative to base address)
	};


	// Class DelMarCore.DelMarRequestTrackerComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UDelMarRequestTrackerComponent : public UDelMarRaceManagerComponent	
	{
	public:
		FDelMarEvent_TrackedPlayerReadyStates PlayerReadyStates; // 0xA0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRequestTrackerComponent");
			return ret;
		}

		void OnRep_PlayerReadyStates(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75183343C(relative to base address)
	};


	// Class DelMarCore.DelMarRespawnManagerComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UDelMarRespawnManagerComponent : public UDelMarRaceManagerComponent	
	{
	public:
		float RespawnRetrySeconds; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x14]; // 0xA4(0x14) UNKNOWN PROPERTY
		TWeakObjectPtr<UDelMarCheckpointManagerComponent*> CachedCheckpointManager; // 0xB8(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0xC0(0x8)
		TWeakObjectPtr<ADelMarPlayerStart*> CachedChallengeStartSpawnPoint; // 0xC8(0x8)
		TArray<TWeakObjectPtr> RespawnRetryQueue; // 0xD0(0x10)
		TMap<TWeakObjectPtr, TWeakObjectPtr> LastSpawnedVehicleMap; // 0xE0(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x130(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRespawnManagerComponent");
			return ret;
		}

		ADelMarVehicle RequestRespawnVehicleForPawn(AFortPlayerPawn* InPlayerPawn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751833828(relative to base address)
		ADelMarVehicle RequestRespawnPawnAndVehicle(AController* InController); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751833770(relative to base address)
	};


	// Class DelMarCore.DelMarRubberbandingManagerComponent
	// Inherited from UDelMarRaceManagerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UDelMarRubberbandingManagerComponent : public UDelMarRaceManagerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		float PackDistance; // 0xB8(0x4)
		FDelMarRubberbandingConfig RubberbandingConfig; // 0xBC(0x28)
		int32_t MMRUsed; // 0xE4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarRubberbandingManagerComponent");
			return ret;
		}

		void OnRep_RubberbandingConfig(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518334B8(relative to base address)
	};


	// Class DelMarCore.DelMarGameStateMachine
	// Inherited from UDelMarStateMachine -> UActorComponent -> UObject
	// Size: 0x0 (0x1A8 - 0x1A8)
	class UDelMarGameStateMachine : public UDelMarStateMachine	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarGameStateMachine");
			return ret;
		}
	};


	// Class DelMarCore.DelMarState_Gameplay
	// Inherited from UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarState_Gameplay : public UDelMarState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_Gameplay");
			return ret;
		}
	};


	// Class DelMarCore.DelMarState_Gameplay_ActiveRace
	// Inherited from UDelMarGameplayState -> UDelMarState -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDelMarState_Gameplay_ActiveRace : public UDelMarGameplayState	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_Gameplay_ActiveRace");
			return ret;
		}
	};


	// Class DelMarCore.DelMarState_Gameplay_Postrace
	// Inherited from UDelMarGameplayState -> UDelMarState -> UObject
	// Size: 0x280 (0x2B0 - 0x30)
	class UDelMarState_Gameplay_Postrace : public UDelMarGameplayState	
	{
	public:
		float PostRaceDuration; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		double PostRaceEndServerTime; // 0x38(0x8)
		TSet<TWeakObjectPtr> ReadyPlayers; // 0x40(0x50)
		TWeakObjectPtr<ADelMarPlayspace*> CachedPlayspace; // 0x90(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0x98(0x8)
		unsigned char UnknownData01_6[0x30]; // 0xA0(0x30) UNKNOWN PROPERTY
		FString EliminationList; // 0xD0(0x10)
		unsigned char UnknownData02_7[0x1D0]; // 0xE0(0x1D0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_Gameplay_Postrace");
			return ret;
		}

		void OnRep_PostRaceEndServerTime(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751833490(relative to base address)
		void OnRep_EliminationList(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751833388(relative to base address)
	};


	// Class DelMarCore.DelMarState_Gameplay_Prerace
	// Inherited from UDelMarGameplayState -> UDelMarState -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UDelMarState_Gameplay_Prerace : public UDelMarGameplayState	
	{
	public:
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0x30(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		double PreRaceCountdownFinishServerTime; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_Gameplay_Prerace");
			return ret;
		}

		void OnRep_PreRaceCountdownFinishServerTime(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7518708BC(relative to base address)
	};


	// Class DelMarCore.DelMarState_Gameplay_WaitingForPlayers
	// Inherited from UDelMarGameplayState -> UDelMarState -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UDelMarState_Gameplay_WaitingForPlayers : public UDelMarGameplayState	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x30(0x4) UNKNOWN PROPERTY
		int32_t MinPlayers; // 0x34(0x4)
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0x38(0x8)
		FDelMarEvent_LoadedPlayerStates LoadedPlayerStates; // 0x40(0x8)
		TWeakObjectPtr<AFortPartyBeaconHost*> FortPartyBeacon; // 0x48(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_Gameplay_WaitingForPlayers");
			return ret;
		}

		void OnRep_LoadedPlayerStates(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870858(relative to base address)
	};


	// Class DelMarCore.DelMarState_LevelSetup
	// Inherited from UDelMarGameplayState -> UDelMarState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UDelMarState_LevelSetup : public UDelMarGameplayState	
	{
	public:
		bool bVehiclesReady; // 0x30(0x1)
		bool bVehiclesSpawned; // 0x31(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_LevelSetup");
			return ret;
		}
	};


	// Class DelMarCore.DelMarState_Loading
	// Inherited from UDelMarGameplayState -> UDelMarState -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UDelMarState_Loading : public UDelMarGameplayState	
	{
	public:
		float DelayBeforeLoadingActuallyStarts; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer DesiredMap; // 0x38(0x20)
		unsigned char UnknownData01_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_Loading");
			return ret;
		}
	};


	// Class DelMarCore.DelMarState_Lobby
	// Inherited from UDelMarGameplayState -> UDelMarState -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UDelMarState_Lobby : public UDelMarGameplayState	
	{
	public:
		bool bLevelLoadRequested; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_Lobby");
			return ret;
		}
	};


	// Class DelMarCore.DelMarState_Setup
	// Inherited from UDelMarGameplayState -> UDelMarState -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UDelMarState_Setup : public UDelMarGameplayState	
	{
	public:
		bool bHasRequestedLink; // 0x30(0x1)
		bool bHasRecievedMatchAssignment; // 0x31(0x1)
		bool bRequiresMatchAssignmentToProceed; // 0x32(0x1)
		bool bCalledMapRotationService; // 0x33(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer DebugMapToLoad; // 0x38(0x20)
		FOnlineLinkId DebugIslandCodeToLoad; // 0x58(0x18)
		unsigned char UnknownData01_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarState_Setup");
			return ret;
		}
	};


	// Class DelMarCore.DelMarCameraShakeComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x4D0 (0x570 - 0xA0)
	class UDelMarCameraShakeComponent : public UControllerComponent	
	{
	public:
		TMap<EBrelmarCameraShake, float> ShakeIntensitySettingMap; // 0xA0(0x50)
		UClass* JumpShakeEffect; // 0xF0(0x8)
		UClass* HazardShakeEffect; // 0xF8(0x8)
		bool bUseVehicleLandedKickflipShake; // 0x100(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		UClass* VehicleLandedKickflipShake; // 0x108(0x8)
		FDelMarScaledCurve VehicleLandedKickflipShakeIntensityCurve; // 0x110(0x90)
		UClass* VehicleLandedCameraShakeEffect; // 0x1A0(0x8)
		FDelMarScaledCurve VehicleLandedShakeIntensityCurve; // 0x1A8(0x90)
		float MaxSecondsToDampenVehicleHit; // 0x238(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
		FDelMarScaledCurve VehicleHitShakeIntensityCurve; // 0x240(0x90)
		FDelMarDynamicCameraShakeEffect VehicleImpactShakeEffect; // 0x2D0(0xA0)
		FDelMarDynamicCameraShakeEffect WallImpactShakeEffect; // 0x370(0xA0)
		FDelMarDynamicCameraShakeEffect WallNoRedirectImpactShakeEffect; // 0x410(0xA0)
		FDelMarDynamicCameraShakeEffect BaseAccelerationShakeEffect; // 0x4B0(0xA0)
		TScriptInterface<Class> Vehicle; // 0x550(0x10)
		TWeakObjectPtr<AFortPlayerController*> CachedPlayerController; // 0x560(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x568(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarCameraShakeComponent");
			return ret;
		}

		void OnVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870E20(relative to base address)
		void OnVehicleHitWall(float Magnitude, FVector WorldLocation, float ForwardRotationDegrees); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF751870C00(relative to base address)
		void OnVehicleHitVehicle(float Magnitude, FVector WorldLocation); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF751870A98(relative to base address)
		void OnJumpActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870614(relative to base address)
		void OnHazardHit(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518705EC(relative to base address)
		void OnCameraShakeIntensitySettingsChanged(UFortClientSettingsRecord* Settings); // Flags: Final|Native|Private, Memory Exec: 0x7FF75187049C(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleConfigs
	// Inherited from UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x19F8 (0x2378 - 0x980)
	class UDelMarVehicleConfigs : public UFortPhysicsVehicleConfigs	
	{
	public:
		FDelMarVehicleCollisionConfig Collision; // 0x980(0x1F8)
		UDelMarVehicleBodySetup* DefaultBodySetup; // 0xB78(0x8)
		UDelMarVehicleBodySetupMap* BodySetupMap; // 0xB80(0x8)
		FDelMarVehicleDriveSetup DriveSetup; // 0xB88(0x370)
		UDelMarPhysMatAttributeMap* PhysMatAttributeMap; // 0xEF8(0x8)
		FDelMarVehicleRigidBodyConfig RigidBody; // 0xF00(0x38)
		FDelMarVehicleConfig_Terrain Terrain; // 0xF38(0x30)
		FDelMarVehicleConfig_WorldBonusSpeed WorldBonusSpeed; // 0xF68(0x28)
		FDelMarVehicleConfig_AutoAerialRotation AerialRotation; // 0xF90(0xA8)
		FDelMarVehicleConfig_AirControl AirControl; // 0x1038(0xD0)
		FDelMarVehicleConfig_AirFreestyle AirFreestyle; // 0x1108(0x30)
		FDelMarVehicleConfig_AirThrottle AirThrottle; // 0x1138(0xA0)
		FDelMarVehicleConfig_AutoUpright AutoUpright; // 0x11D8(0x24)
		unsigned char UnknownData00_6[0x4]; // 0x11FC(0x4) UNKNOWN PROPERTY
		FDelMarVehicleDraftingConfig Drafting; // 0x1200(0xC8)
		FDelMarVehicleDriftConfig Drift; // 0x12C8(0x718)
		FDelMarVehicleDriftBoostConfig DriftBoost; // 0x19E0(0x1D8)
		FDelMarVehicleConfig_Gravity Gravity; // 0x1BB8(0x20)
		FDelMarVehicleConfig_Jump Jump; // 0x1BD8(0x18)
		FDelMarVehicleConfig_Kickflip Kickflip; // 0x1BF0(0x158)
		FDelMarVehicleOversteerConfig Oversteer; // 0x1D48(0x138)
		FDelMarVehicleConfig_Reattachment Reattachment; // 0x1E80(0xA0)
		FDelMarVehicleConfig_Rubberbanding Rubberbanding; // 0x1F20(0x1B8)
		FDelMarVehicleConfig_StartlineBoost StartlineBoost; // 0x20D8(0xA8)
		FDelMarVehicleConfig_Strafe Strafe; // 0x2180(0x1C)
		unsigned char UnknownData01_6[0x4]; // 0x219C(0x4) UNKNOWN PROPERTY
		FDelMarVehicleTurboConfig Turbo; // 0x21A0(0x70)
		FDelMarVehicleConfig_Underthrust Underthrust; // 0x2210(0x168)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleConfigs");
			return ret;
		}
	};


	// Class DelMarCore.DelMarVehicleCosmeticComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UDelMarVehicleCosmeticComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnCosmeticActorSpawned; // 0xA0(0x10)
		FMulticastInlineDelegate OnAllCosmeticActorsSpawned; // 0xB0(0x10)
		TArray<TWeakObjectPtr> StaticCosmeticActorClasses; // 0xC0(0x10)
		TArray<UClass*> AllowedServerCosmeticActorClasses; // 0xD0(0x10)
		TArray<ADelMarCosmeticActor*> SpawnedCosmeticActors; // 0xE0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleCosmeticComponent");
			return ret;
		}

		TArray GetCosmeticActors(UClass* CosmeticClass, bool bLookForChildClasses); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75186FF20(relative to base address)
		ADelMarCosmeticActor GetCosmeticActor(UClass* CosmeticClass, bool bLookForChildClasses); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75186FE34(relative to base address)
		void DelMarOnCosmeticItemSpawned__DelegateSignature(ADelMarCosmeticActor* CosmeticActor); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DelMarOnAllCosmeticActorsSpawned__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleForceFeedbackComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x358 (0x3F8 - 0xA0)
	class UDelMarVehicleForceFeedbackComponent : public UControllerComponent	
	{
	public:
		FDelMarDynamicForceFeedbackEffect DrivingForceFeedback; // 0xA0(0x128)
		UForceFeedbackEffect* JumpForceFeedbackEffect; // 0x1C8(0x8)
		UForceFeedbackEffect* OversteerLeftForceFeedbackEffect; // 0x1D0(0x8)
		UForceFeedbackEffect* OversteerRightForceFeedbackEffect; // 0x1D8(0x8)
		TArray<UForceFeedbackEffect*> LandingForceFeedbackEffects; // 0x1E0(0x10)
		FRuntimeFloatCurve LandingForceLevelLookupCurve; // 0x1F0(0x88)
		UForceFeedbackEffect* TurboForceFeedbackEffect; // 0x278(0x8)
		FDelMarDynamicForceFeedbackEffect DriftForceFeedback; // 0x280(0x128)
		UForceFeedbackEffect* DriftUncontrolledForceFeedbackEffect; // 0x3A8(0x8)
		UForceFeedbackEffect* DriftBoostForceFeedbackEffect; // 0x3B0(0x8)
		UForceFeedbackEffect* DriftTractionForceFeedback; // 0x3B8(0x8)
		float MaxTractionDriftShakeAngle; // 0x3C0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C4(0x4) UNKNOWN PROPERTY
		UForceFeedbackEffect* HazardHitForceFeedback; // 0x3C8(0x8)
		TScriptInterface<Class> Vehicle; // 0x3D0(0x10)
		TWeakObjectPtr<APlayerController*> CachedPlayerController; // 0x3E0(0x8)
		TWeakObjectPtr<UForceFeedbackEffect*> CurrentOversteerForceFeedbackEffect; // 0x3E8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleForceFeedbackComponent");
			return ret;
		}

		void OnVehicleLanded(float LandingForce, bool bLandedKickflip); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870EE8(relative to base address)
		void OnUnderthrustDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870A84(relative to base address)
		void OnUnderthrustActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870A70(relative to base address)
		void OnTurboDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870A5C(relative to base address)
		void OnTurboActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870A48(relative to base address)
		void OnJumpActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870628(relative to base address)
		void OnHazardHit(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870600(relative to base address)
		void OnDriftDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518705D8(relative to base address)
		void OnDriftControlChanged(bool bIsDriftControlled); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870558(relative to base address)
		void OnDriftBoostDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870544(relative to base address)
		void OnDriftBoostActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870530(relative to base address)
		void OnDriftActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75187051C(relative to base address)
		void HandleLoadingScreenVisibilityChanged(bool bVisibility); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751870228(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleMovementSet
	// Inherited from UFortAttributeSet -> UAttributeSet -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UDelMarVehicleMovementSet : public UFortAttributeSet	
	{
	public:
		FFortGameplayAttributeData AccelMultiplier; // 0x30(0x28)
		FFortGameplayAttributeData bVehicleThrottleDisabled; // 0x58(0x28)
		FFortGameplayAttributeData BonusSpeed; // 0x80(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleMovementSet");
			return ret;
		}

		void OnRep_VehicleThrottleDisabled(FFortGameplayAttributeData& OldInputDisabled); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751870918(relative to base address)
		void OnRep_BonusSpeed(FFortGameplayAttributeData& OldBonusSpeed); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75187073C(relative to base address)
		void OnRep_AccelMultiplier(FFortGameplayAttributeData& OldSpeedMultiplier); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75187063C(relative to base address)
	};


	// Class DelMarCore.DelMarVehicleTurboManagerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UDelMarVehicleTurboManagerComponent : public UActorComponent	
	{
	public:
		float TurboCharges; // 0xA0(0x4)
		float RechargeRateSeconds; // 0xA4(0x4)
		float MaxCharges; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		ADelMarVehicle* OwnerVehicle; // 0xB0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarCore.DelMarVehicleTurboManagerComponent");
			return ret;
		}

		void SetTurboCharges(float TurboChargeAmount); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75189069C(relative to base address)
		void OnConfigOverridesSet(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751890688(relative to base address)
		void ModifyTurboCharges_Delayed(float TurboChargeAmount); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751890600(relative to base address)
		void ModifyTurboCharges(float TurboChargeAmount); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751890580(relative to base address)
		void HandleTurboChargeUsed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751890564(relative to base address)
	};

}
