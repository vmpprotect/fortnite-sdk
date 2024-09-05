#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamPlayspaceRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FMJamPlayspaceRuntime.JamAnalytics
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x148 - 0xA8)
	class UJamAnalytics : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0xA8(0x40) UNKNOWN PROPERTY
		FScalableFloat MinLoopLength; // 0xE8(0x28)
		float LoopStartTime; // 0x110(0x4)
		float LoopLength; // 0x114(0x4)
		FName LoopShortName; // 0x118(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x11C(0x4) UNKNOWN PROPERTY
		FString LoopType; // 0x120(0x10)
		FString LoopID; // 0x130(0x10)
		AJamPlayspace* JamPlayspace; // 0x140(0x8)

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UJamMusicSlot*> WeakOwningMusicSlotPtr; // 0x30(0x8)
		UParsedMidiEventData* ParsedMidiEventData; // 0x38(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x18]; // 0x750(0x18) UNKNOWN PROPERTY
		UJamPlayspaceComponent_MusicManager* MusicManager; // 0x768(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x770(0x18) UNKNOWN PROPERTY
		UJamPlayspaceComponent_LipSyncAssetManager* JamLipSyncManager; // 0x788(0x8)
		UJamPlayspaceComponent_ReactiveFX* ReactiveFXComponent; // 0x790(0x8)
		FGuid JamSessionGuid; // 0x798(0x10)
		unsigned char UnknownData02_7[0x50]; // 0x7A8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspace");
			return ret;
		}

		void StopLoopForPlayer(APlayerState* PlayerState, bool bStopAutoJammers); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE708(relative to base address)
		void StopLoopByInstanceId(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE688(relative to base address)
		void StopAutoJammersForPlayer(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE608(relative to base address)
		void StopAllLoopsWithTag(FGameplayTag Tag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE4F8(relative to base address)
		void StopAllLoopsForLoopType(EFMJamLoopType LoopType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE478(relative to base address)
		void StopAllLoops(bool bStopAutoJammers); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE3F8(relative to base address)
		UJamMusicSlot PlayLoop(APlayerState* PlayerState, FName SongShortName, EFMJamLoopType LoopType, bool bForceAudioState, bool bIsAutoJammer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE098(relative to base address)
		void OnJamAudioSourceActiveStateChange(UAudioComponent* JamAudioSource, bool bNewActiveState); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsJamFull(bool bCountAutoJammers); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD860(relative to base address)
		TArray GetMusicSlotsSortedByLoopType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD338(relative to base address)
		TArray GetMusicSlotsInUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD2B8(relative to base address)
		TArray GetMusicSlotsForLoopType(EFMJamLoopType LoopType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD134(relative to base address)
		TArray GetMusicSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD0F4(relative to base address)
		UJamMusicSlot GetMusicSlotForPlayer(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF747CE194C(relative to base address)
		FGuid GetJamSessionGuid(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCCC8(relative to base address)
		AJamPlayspaceVolume GetJamPlayspaceVolume(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCCA4(relative to base address)
		TArray GetJammers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCCE4(relative to base address)
		UAudioComponent GetJamAudioSource(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7510CCC1C(relative to base address)
		TWeakObjectPtr GetAutoJammerProfilPic(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC80C(relative to base address)
		void GetAllowGlobalControlAccess(bool& OutAllowGlobalControlAccess, FGameplayTagContainer& OutRestrictionReason); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC6D4(relative to base address)
		bool DoAnyOtherJammersHaveGameplayTag(APlayerState* LocalPlayerState, FGameplayTag GlobalControlsTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC348(relative to base address)
		int32_t CountActiveLoops(bool bCountAutoJammers); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC228(relative to base address)
		void ConvertPlayerToAutoJammer(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CC0C0(relative to base address)
		void BeginShutdownJam(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceComponent_JamCompanion
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class UJamPlayspaceComponent_JamCompanion : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		bool bOverrideShouldPlaySongAlone; // 0xB8(0x1)
		bool bForceShouldPlaySongAlone; // 0xB9(0x1)
		unsigned char UnknownData01_7[0x6E]; // 0xBA(0x6E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_JamCompanion");
			return ret;
		}

		bool GetShouldPlaySongAlone(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD3C8(relative to base address)
		UJamPlayspaceComponent_MusicManager GetMusicManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCD6C(relative to base address)
		AJamPlayspace GetJamPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCC5C(relative to base address)
		FGameplayTag GetJamCompanionSlotTag(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510CCC44(relative to base address)
		UGameplayEventRouterComponent GetEventRouter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCBF8(relative to base address)
		void BP_OnJamLoopStopped(FJamEvent_JamLoopStopped& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnJamLoopStarted(FJamEvent_JamLoopStarted& Payload); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceComponent_LipSyncAssetManager
	// Inherited from UPlayspaceComponent_LipSyncAssetManager -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x110 - 0xC8)
	class UJamPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0xC8(0x48) UNKNOWN PROPERTY

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
		UMidiFile* CurrentMidiFile; // 0x48(0x8)
		UFusionPatch* CurrentFusionPatch; // 0x50(0x8)
		USparksJamEmoteItemDefinition* CurrentItemDef; // 0x58(0x8)
		UJamMidiEventDriver* MidiEventDriver; // 0x60(0x8)
		bool bAttemptingResolveAndLoad; // 0x68(0x1)
		unsigned char UnknownData00_6[0x27]; // 0x69(0x27) UNKNOWN PROPERTY
		FJamPlayParams CurrentPlayParams; // 0x90(0x28)
		UJamPlayspaceComponent_MusicManager* JamMusicManager; // 0xB8(0x8)
		int32_t NthSlot; // 0xC0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer OwnedGameplayTags; // 0xC8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamMusicSlot");
			return ret;
		}

		bool RemoveGameplayTag(FGameplayTag Tag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE240(relative to base address)
		void RemoveAllGameplayTags(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE22C(relative to base address)
		void OnTerminatingLinkCode(UJamContentResolver* Sender, FString LinkCode); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510CDFC0(relative to base address)
		void OnScanForSongsCompleted(UFMJamSongCatalog* Sender, TArray<UFMJamSong*> AddedSongs); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510CDEB0(relative to base address)
		void OnRep_CurrentPlayParams(FJamPlayParams& OldPlayParams); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7489EDC24(relative to base address)
		void OnJamResolverComplete(UJamContentResolver* Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510CDB70(relative to base address)
		void OnJamLoadRequestComplete(FJamLoadResult LoadResult); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510CD9B8(relative to base address)
		void OnCMSCatalogRequestFinished(UFMJamSongCatalog* Sender, bool bSuccess); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510CD8F0(relative to base address)
		bool IsInUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74997A888(relative to base address)
		bool HasGameplayTag(FGameplayTag Tag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD5A4(relative to base address)
		FJamPlayParams GetPlayParams(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD394(relative to base address)
		FJamEvent_JamLoopStarted GetParamsAsJamEvent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7489EE2D4(relative to base address)
		UJamPlayspaceComponent_MusicManager GetMusicManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EF53020(relative to base address)
		bool GetIsAutoJammer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CC681C(relative to base address)
		int32_t GetCurrentTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCB04(relative to base address)
		FName GetCurrentSongShortName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EA60(relative to base address)
		FString GetCurrentSongLinkCode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCAC4(relative to base address)
		UFMJamSong GetCurrentSong(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCAA0(relative to base address)
		APlayerState GetCurrentPlayerState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCA7C(relative to base address)
		EMusicKeyMode GetCurrentMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCA34(relative to base address)
		EFMJamLoopType GetCurrentLoopType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC617F4(relative to base address)
		int32_t GetCurrentLoopInstanceId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFEA96C(relative to base address)
		UFMJamLoop GetCurrentLoop(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC964(relative to base address)
		EMusicKey GetCurrentKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC91C(relative to base address)
		UCatalogData GetCurrentCatalogEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC8F8(relative to base address)
		void AddGameplayTag(FGameplayTag Tag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CBFB0(relative to base address)
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UJamPlayspaceComponent_MusicManager : public UPlayspaceComponent	
	{
	public:
		FMulticastInlineDelegate OnLoopStarted; // 0xA0(0x10)
		FMulticastInlineDelegate OnLoopStopped; // 0xB0(0x10)
		TArray<UJamMusicSlot*> MusicSlots; // 0xC0(0x10)
		FGameplayEventListenerHandle KeyChangedEventHandle; // 0xD0(0x1C)
		FGameplayEventListenerHandle ModeChangedEventHandle; // 0xEC(0x1C)
		FGameplayEventListenerHandle TempoChangedEventHandle; // 0x108(0x1C)
		unsigned char UnknownData00_6[0x24]; // 0x124(0x24) UNKNOWN PROPERTY
		float LocalPlayerGainParam; // 0x148(0x4)
		float StandardGainParam; // 0x14C(0x4)
		unsigned char UnknownData01_7[0x28]; // 0x150(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager");
			return ret;
		}

		void UpdateAllMetasounds(APlayerState* PlayerToIgnore); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CE860(relative to base address)
		float TickToSeconds(int32_t Tick); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CE7D0(relative to base address)
		bool ShouldPlayLocalSound(APlayerState* PlayerToIgnore); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7494567C0(relative to base address)
		int32_t SecondsToTick(float Seconds); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CE368(relative to base address)
		void OnRep_MusicSlots(TArray<UJamMusicSlot*>& PreviousMusicSlots); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF747F96BC4(relative to base address)
		void OnPlayspaceUserRemoved(FPlayspaceUser& RemovedUser); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7510CDDD0(relative to base address)
		void OnPlayspaceUserAdded(FPlayspaceUser& AddedUser); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7510CDCF0(relative to base address)
		void OnLicensedAudioTreatmentChanged(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7510CDCDC(relative to base address)
		bool IsAllowedToJamInSplitscreen(APlayerState* PlayerStateToCheck); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF7510CD708(relative to base address)
		void HandleTempoChangedEvent(FSparksPlayspaceEvent_TempoChanged& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7510CD518(relative to base address)
		void HandleOnLoopStopped(FJamPlayParams& PlayParams, bool bChangedLoop); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7489EDB04(relative to base address)
		void HandleOnLoopStarted(FJamPlayParams& PlayParams, bool bChangedLoop); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7489ED9E4(relative to base address)
		void HandleModeChangedEvent(FSparksPlayspaceEvent_KeyModeChanged& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7510CD48C(relative to base address)
		void HandleKeyChangedEvent(FSparksPlayspaceEvent_KeyChanged& Payload); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7510CD400(relative to base address)
		float GetStandardGainValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD3E8(relative to base address)
		TArray GetMusicSlotsInUse(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD2F8(relative to base address)
		TArray GetMusicSlotsForLoopType(EFMJamLoopType LoopType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD214(relative to base address)
		int32_t GetMusicSlotIndexForPlayer(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CD018(relative to base address)
		int32_t GetMusicSlotIndexForLoopInstanceId(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCF8C(relative to base address)
		UJamMusicSlot GetMusicSlotForPlayer(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCEC0(relative to base address)
		UJamMusicSlot GetMusicSlotBySlotIndex(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCE1C(relative to base address)
		UJamMusicSlot GetMusicSlotByLoopInstanceId(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCD90(relative to base address)
		UAudioComponent GetMetasoundPlayer(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCD48(relative to base address)
		float GetLocalPlayerGainValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FED84E4(relative to base address)
		USparksInstrumentAnimations GetLoadedAnimations(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCD24(relative to base address)
		AJamPlayspace GetJamPlayspace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCC80(relative to base address)
		float GetDesiredGain(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCB3C(relative to base address)
		int32_t GetCurrentTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7499B6AC8(relative to base address)
		EMusicKeyMode GetCurrentMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CCA58(relative to base address)
		int32_t GetCurrentMidiTick(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC9B0(relative to base address)
		float GetCurrentMidiSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC988(relative to base address)
		EMusicKey GetCurrentKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC940(relative to base address)
		TArray GetAutoJammersForPlayer(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC854(relative to base address)
		TArray GetAllSlotsWithTag(FGameplayTag Tag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC5A0(relative to base address)
		TArray GetAllMusicSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF747F96C58(relative to base address)
		TArray GetAllJammers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC560(relative to base address)
		void FireGlobalControlsAnalytics(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510CC498(relative to base address)
		int32_t CountActiveSlots(bool bCountAutoJammers); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510CC2B8(relative to base address)
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x110 (0x1B0 - 0xA0)
	class UJamPlayspaceComponent_ReactiveFX : public UPlayspaceComponent	
	{
	public:
		FJamReactiveFXState ReactiveFXState; // 0xA0(0x28)
		bool bSetReactivityUpdateRateToTargetFPS; // 0xC8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float ReactivityUpdateRate; // 0xCC(0x4)
		float PeakTamerValueReleaseTimeSec; // 0xD0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		TMap<int32_t, FJamLoopReactiveFX> LoopReactiveFX; // 0xD8(0x50)
		unsigned char UnknownData02_7[0x88]; // 0x128(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX");
			return ret;
		}

		bool RemoveReactiveNiagaraEffect(int32_t LoopInstanceId, UNiagaraComponent* NiagaraComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510DABE8(relative to base address)
		bool HasReactiveEffectsForLoop(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510DAAEC(relative to base address)
		TArray GetReactiveNiagaraEffects(int32_t LoopInstanceId); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510DAA48(relative to base address)
		void ClearReactiveEffectsForLoop(int32_t LoopInstanceId, bool bStopEffectsImmediately); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74948A508(relative to base address)
		void ClearReactiveEffects(bool bStopEffectsImmediately); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748DF6B08(relative to base address)
		void AddReactiveNiagaraEffect(int32_t LoopInstanceId, UNiagaraComponent* NiagaraComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510DA984(relative to base address)
	};


	// Class FMJamPlayspaceRuntime.JamPlayspaceVolume
	// Inherited from AGameplayVolume -> AActor -> UObject
	// Size: 0x38 (0x368 - 0x330)
	class AJamPlayspaceVolume : public AGameplayVolume	
	{
	public:
		TArray<EFMJamLoopType> PriorityFillOrder; // 0x330(0x10)
		TWeakObjectPtr<UTexture2D*> AutoJammerProfilePic; // 0x340(0x20)
		FName JamCompanionSong; // 0x360(0x4)
		bool bShouldJamCompanionStaggerAutoJammers; // 0x364(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x365(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamPlayspaceRuntime.JamPlayspaceVolume");
			return ret;
		}

		void BP_UpdateReactiveFX(float JamAmplitude); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPlayspaceSet(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
