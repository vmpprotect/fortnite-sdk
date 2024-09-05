#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMJamPlayspaceRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMJamPlayspaceRuntime.JamAnalytics
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x148 - 0xA8)
	class UJamAnalytics : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData02_3[0x40]; // 0xA8(0x40) UNKNOWN PROPERTY
		FScalableFloat MinLoopLength; // 0xE8(0x28)
		float LoopStartTime; // 0x110(0x4)
		float LoopLength; // 0x114(0x4)
		FName LoopShortName; // 0x118(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x11C(0x4) UNKNOWN PROPERTY
		FString LoopType; // 0x120(0x10)
		FString LoopID; // 0x130(0x10)
		AJamPlayspace JamPlayspace; // 0x140(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamAnalytics");
			return ret;
		}
	};


	// Class FMJamPlayspaceRuntime.JamMidiEventDriver
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UJamMidiEventDriver : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr WeakOwningMusicSlotPtr; // 0x30(0x8)
		UParsedMidiEventData ParsedMidiEventData; // 0x38(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamMidiEventDriver");
			return ret;
		}
	};


	// Class FMJamPlayspaceRuntime.JamPlayspace
	// Inherited from ASparksMusicPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0xA8 (0x7F8 - 0x750)
	class AJamPlayspace : public ASparksMusicPlayspace	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x750(0x18) UNKNOWN PROPERTY
		UJamPlayspaceComponent_MusicManager MusicManager; // 0x768(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x770(0x18) UNKNOWN PROPERTY
		UJamPlayspaceComponent_LipSyncAssetManager JamLipSyncManager; // 0x788(0x8)
		UJamPlayspaceComponent_ReactiveFX ReactiveFXComponent; // 0x790(0x8)
		FGuid JamSessionGuid; // 0x798(0x10)
		unsigned char UnknownData05_7[0x50]; // 0x7A8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspace");
			return ret;
		}

		void StopLoopForPlayer(APlayerState PlayerState, bool bStopAutoJammers); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C21118
		void StopLoopByInstanceId(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C21038
		void StopAutoJammersForPlayer(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C20F58
		void StopAllLoopsWithTag(FGameplayTag tag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C20E78
		void StopAllLoopsForLoopType(EFMJamLoopType LoopType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C20D98
		void StopAllLoops(bool bStopAutoJammers); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C20CB8
		UJamMusicSlot PlayLoop(APlayerState PlayerState, FName SongShortName, EFMJamLoopType LoopType, bool bForceAudioState, bool bIsAutoJammer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C20BD8
		void OnJamAudioSourceActiveStateChange(UAudioComponent JamAudioSource, bool bNewActiveState); // Flags: Event|Public|BlueprintEvent 0x7FF414C20AF8
		bool IsJamFull(bool bCountAutoJammers); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C20A18
		TArray GetMusicSlotsSortedByLoopType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C20938
		TArray GetMusicSlotsInUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C20858
		TArray GetMusicSlotsForLoopType(EFMJamLoopType LoopType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C20778
		TArray GetMusicSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C20698
		UJamMusicSlot GetMusicSlotForPlayer(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C205B8
		FGuid GetJamSessionGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414C204D8
		AJamPlayspaceVolume GetJamPlayspaceVolume(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C203F8
		TArray GetJammers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C20318
		UAudioComponent GetJamAudioSource(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C20238
		TWeakObjectPtr GetAutoJammerProfilPic(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C20158
		void GetAllowGlobalControlAccess(bool& OutAllowGlobalControlAccess, FGameplayTagContainer& OutRestrictionReason); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C20078
		bool DoAnyOtherJammersHaveGameplayTag(APlayerState LocalPlayerState, FGameplayTag GlobalControlsTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1FF98
		int32_t CountActiveLoops(bool bCountAutoJammers); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1FEB8
		void ConvertPlayerToAutoJammer(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1FDD8
		void BeginShutdownJam(); // Flags: Event|Public|BlueprintEvent 0x7FF414C1FCF8
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceComponent_JamCompanion
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class UJamPlayspaceComponent_JamCompanion : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		bool bOverrideShouldPlaySongAlone; // 0xB8(0x1)
		bool bForceShouldPlaySongAlone; // 0xB9(0x1)
		unsigned char UnknownData03_7[0x6E]; // 0xBA(0x6E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_JamCompanion");
			return ret;
		}

		bool GetShouldPlaySongAlone(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21738
		UJamPlayspaceComponent_MusicManager GetMusicManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21658
		AJamPlayspace GetJamPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21578
		FGameplayTag GetJamCompanionSlotTag(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C21498
		UGameplayEventRouterComponent GetEventRouter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C213B8
		void BP_OnJamLoopStopped(FJamEvent_JamLoopStopped& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C212D8
		void BP_OnJamLoopStarted(FJamEvent_JamLoopStarted& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C211F8
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceComponent_LipSyncAssetManager
	// Inherited from UPlayspaceComponent_LipSyncAssetManager -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x30 (0xF8 - 0xC8)
	class UJamPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0xC8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_LipSyncAssetManager");
			return ret;
		}
	};


	// Class FMJamPlayspaceRuntime.JamMusicSlot
	// Inherited from UObject
	// Size: 0xC0 (0xE8 - 0x28)
	class UJamMusicSlot : public UObject	
	{
	public:
		FMulticastInlineDelegate OnLoopStarted; // 0x28(0x10)
		FMulticastInlineDelegate OnLoopStopped; // 0x38(0x10)
		UMidiFile CurrentMidiFile; // 0x48(0x8)
		UFusionPatch CurrentFusionPatch; // 0x50(0x8)
		USparksJamEmoteItemDefinition CurrentItemDef; // 0x58(0x8)
		UJamMidiEventDriver MidiEventDriver; // 0x60(0x8)
		bool bAttemptingResolveAndLoad; // 0x68(0x1)
		unsigned char UnknownData02_6[0x27]; // 0x69(0x27) UNKNOWN PROPERTY
		FJamPlayParams CurrentPlayParams; // 0x90(0x28)
		UJamPlayspaceComponent_MusicManager JamMusicManager; // 0xB8(0x8)
		int32_t NthSlot; // 0xC0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer OwnedGameplayTags; // 0xC8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamMusicSlot");
			return ret;
		}

		bool RemoveGameplayTag(FGameplayTag tag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C22DF8
		void RemoveAllGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C22D18
		void OnTerminatingLinkCode(UJamContentResolver Sender, FString LinkCode); // Flags: Final|Native|Protected 0x7FF414C22C38
		void OnScanForSongsCompleted(UFMJamSongCatalog Sender, TArray AddedSongs); // Flags: Final|Native|Protected 0x7FF414C22B58
		void OnRep_CurrentPlayParams(FJamPlayParams& OldPlayParams); // Flags: Final|Native|Public|HasOutParms 0x7FF414C22A78
		void OnJamResolverComplete(UJamContentResolver Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded); // Flags: Final|Native|Protected 0x7FF414C22998
		void OnJamLoadRequestComplete(FJamLoadResult LoadResult); // Flags: Final|Native|Protected 0x7FF414C228B8
		void OnCMSCatalogRequestFinished(UFMJamSongCatalog Sender, bool bSuccess); // Flags: Final|Native|Protected 0x7FF414C227D8
		bool IsInUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C226F8
		bool HasGameplayTag(FGameplayTag tag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C22618
		FJamPlayParams GetPlayParams(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C22538
		FJamEvent_JamLoopStarted GetParamsAsJamEvent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C22458
		UJamPlayspaceComponent_MusicManager GetMusicManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C22378
		bool GetIsAutoJammer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C22298
		int32_t GetCurrentTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C221B8
		FName GetCurrentSongShortName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C220D8
		FString GetCurrentSongLinkCode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21FF8
		UFMJamSong GetCurrentSong(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21F18
		APlayerState GetCurrentPlayerState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21E38
		EMusicKeyMode GetCurrentMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21D58
		EFMJamLoopType GetCurrentLoopType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21C78
		int32_t GetCurrentLoopInstanceId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21B98
		UFMJamLoop GetCurrentLoop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C21AB8
		EMusicKey GetCurrentKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C219D8
		UCatalogData GetCurrentCatalogEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C218F8
		void AddGameplayTag(FGameplayTag tag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C21818
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UJamPlayspaceComponent_MusicManager : public UPlayspaceComponent	
	{
	public:
		FMulticastInlineDelegate OnLoopStarted; // 0xA0(0x10)
		FMulticastInlineDelegate OnLoopStopped; // 0xB0(0x10)
		TArray MusicSlots; // 0xC0(0x10)
		FGameplayEventListenerHandle KeyChangedEventHandle; // 0xD0(0x1C)
		FGameplayEventListenerHandle ModeChangedEventHandle; // 0xEC(0x1C)
		FGameplayEventListenerHandle TempoChangedEventHandle; // 0x108(0x1C)
		unsigned char UnknownData02_6[0x24]; // 0x124(0x24) UNKNOWN PROPERTY
		float LocalPlayerGainParam; // 0x148(0x4)
		float StandardGainParam; // 0x14C(0x4)
		unsigned char UnknownData03_7[0x28]; // 0x150(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager");
			return ret;
		}

		void UpdateAllMetasounds(APlayerState PlayerToIgnore); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C24F38
		float TickToSeconds(int32_t Tick); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C24E58
		bool ShouldPlayLocalSound(APlayerState PlayerToIgnore); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C24D78
		int32_t SecondsToTick(float Seconds); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C24C98
		void OnRep_MusicSlots(TArray& PreviousMusicSlots); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C24BB8
		void OnPlayspaceUserRemoved(FPlayspaceUser& RemovedUser); // Flags: Final|Native|Public|HasOutParms 0x7FF414C24AD8
		void OnPlayspaceUserAdded(FPlayspaceUser& AddedUser); // Flags: Final|Native|Public|HasOutParms 0x7FF414C249F8
		void OnLicensedAudioTreatmentChanged(); // Flags: Final|Native|Public 0x7FF414C24918
		bool IsAllowedToJamInSplitscreen(APlayerState PlayerStateToCheck); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF414C24838
		void HandleTempoChangedEvent(FSparksPlayspaceEvent_TempoChanged& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C24758
		void HandleOnLoopStopped(FJamPlayParams& PlayParams, bool bChangedLoop); // Flags: Final|Native|Public|HasOutParms 0x7FF414C24678
		void HandleOnLoopStarted(FJamPlayParams& PlayParams, bool bChangedLoop); // Flags: Final|Native|Public|HasOutParms 0x7FF414C24598
		void HandleModeChangedEvent(FSparksPlayspaceEvent_KeyModeChanged& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C244B8
		void HandleKeyChangedEvent(FSparksPlayspaceEvent_KeyChanged& Payload); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C243D8
		float GetStandardGainValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C242F8
		TArray GetMusicSlotsInUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C24218
		TArray GetMusicSlotsForLoopType(EFMJamLoopType LoopType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C24138
		int32_t GetMusicSlotIndexForPlayer(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C24058
		int32_t GetMusicSlotIndexForLoopInstanceId(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23F78
		UJamMusicSlot GetMusicSlotForPlayer(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23E98
		UJamMusicSlot GetMusicSlotBySlotIndex(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23DB8
		UJamMusicSlot GetMusicSlotByLoopInstanceId(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23CD8
		UAudioComponent GetMetasoundPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23BF8
		float GetLocalPlayerGainValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23B18
		USparksInstrumentAnimations GetLoadedAnimations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23A38
		AJamPlayspace GetJamPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23958
		float GetDesiredGain(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23878
		int32_t GetCurrentTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23798
		EMusicKeyMode GetCurrentMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C236B8
		int32_t GetCurrentMidiTick(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C235D8
		float GetCurrentMidiSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C234F8
		EMusicKey GetCurrentKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23418
		TArray GetAutoJammersForPlayer(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23338
		TArray GetAllSlotsWithTag(FGameplayTag tag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23258
		TArray GetAllMusicSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23178
		TArray GetAllJammers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C23098
		void FireGlobalControlsAnalytics(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C22FB8
		int32_t CountActiveSlots(bool bCountAutoJammers); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C22ED8
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x1B0 - 0xA0)
	class UJamPlayspaceComponent_ReactiveFX : public UPlayspaceComponent	
	{
	public:
		FJamReactiveFXState ReactiveFXState; // 0xA0(0x28)
		bool bSetReactivityUpdateRateToTargetFPS; // 0xC8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float ReactivityUpdateRate; // 0xCC(0x4)
		float PeakTamerValueReleaseTimeSec; // 0xD0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		TMap LoopReactiveFX; // 0xD8(0x50)
		unsigned char UnknownData05_7[0x88]; // 0x128(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX");
			return ret;
		}

		bool RemoveReactiveNiagaraEffect(int32_t LoopInstanceId, UNiagaraComponent NiagaraComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C25478
		bool HasReactiveEffectsForLoop(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C25398
		TArray GetReactiveNiagaraEffects(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C252B8
		void ClearReactiveEffectsForLoop(int32_t LoopInstanceId, bool bStopEffectsImmediately); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C251D8
		void ClearReactiveEffects(bool bStopEffectsImmediately); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C250F8
		void AddReactiveNiagaraEffect(int32_t LoopInstanceId, UNiagaraComponent NiagaraComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C25018
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceVolume
	// Inherited from AGameplayVolume -> AActor -> UObject
	// Size: 0x38 (0x368 - 0x330)
	class AJamPlayspaceVolume : public AGameplayVolume	
	{
	public:
		TArray PriorityFillOrder; // 0x330(0x10)
		TWeakObjectPtr AutoJammerProfilePic; // 0x340(0x20)
		FName JamCompanionSong; // 0x360(0x4)
		bool bShouldJamCompanionStaggerAutoJammers; // 0x364(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x365(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceVolume");
			return ret;
		}

		void BP_UpdateReactiveFX(float JamAmplitude); // Flags: Event|Public|BlueprintEvent 0x7FF414C25638
		void BP_OnPlayspaceSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF414C25558
	};


	// Class FMJamPlayspaceRuntime.JamQuickplayPlayerSpawningComponent
	// Inherited from UPlayspaceComponent_PlayerSpawning -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xD0 - 0xB0)
	class UJamQuickplayPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning	
	{
	public:
		FGameplayTagContainer PregameSpawnTags; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamQuickplayPlayerSpawningComponent");
			return ret;
		}
	};

}
