#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VictoryCrownsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0xB8 (0xA68 - 0x9B0)
	class AFortGameplayCueNotify_CrownWear : public AFortGameplayCueNotify_Loop	
	{
	public:
		FScalableFloat IntroFXVisualVolume; // 0x9B0(0x28)
		FScalableFloat IntroFXTimelineRate; // 0x9D8(0x28)
		FScalableFloat IntroFXUpdatePrecision; // 0xA00(0x28)
		TArray<FScalableFloat> IntroFXUpdateFrequencies; // 0xA28(0x10)
		UCurveVector* IntroFXCurve; // 0xA38(0x8)
		UTimelineComponent* IntroFXTimeline; // 0xA40(0x8)
		UFXSystemComponent* CrownParticleComponent; // 0xA48(0x8)
		unsigned char UnknownData00_7[0x18]; // 0xA50(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear");
			return ret;
		}

		void RemoveCrownWear(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF748171028(relative to base address)
		void OnIntroFXTimelineTick(FVector CurveValue); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF7489FB1A0(relative to base address)
		void ApplyCrownWear(TArray<UFXSystemComponent*>& ParticleComponents); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748B01FA4(relative to base address)
	};


	// Class VictoryCrownsRuntime.FortVictoryCrownViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UFortVictoryCrownViewModel : public UMVVMViewModelBase	
	{
	public:
		int32_t BestowedCount; // 0x68(0x4)
		bool bHasWonCrownInMatch; // 0x6C(0x1)
		bool bHasWonRoyalRoyale; // 0x6D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortControllerComponent_VictoryCrowns*> BoundVictoryCrownsComponent; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortVictoryCrownViewModel");
			return ret;
		}

		void HandleOnHasWonRoyalRoyale(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751595324(relative to base address)
		void HandleOnHasWonCrownInMatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751595310(relative to base address)
	};


	// Class VictoryCrownsRuntime.FortCheatManager_VictoryCrowns
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCheatManager_VictoryCrowns : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortCheatManager_VictoryCrowns");
			return ret;
		}

		void VictoryCrownsGrantCrown(int32_t CrownLevel); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF74C6284F8(relative to base address)
	};


	// Class VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1D0 (0x278 - 0xA8)
	class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVictoryCrownStatusChanged; // 0xB0(0x10)
		FMulticastInlineDelegate OnHasWonCrownInMatch; // 0xC0(0x10)
		FMulticastInlineDelegate OnHasWonRoyalRoyale; // 0xD0(0x10)
		unsigned char UnknownData01_6[0x30]; // 0xE0(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortWorldItemDefinition*> CrownInventoryItemClass; // 0x110(0x20)
		bool bWonCrownInMatch; // 0x130(0x1)
		bool bWonRoyalRoyale; // 0x131(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x132(0x6) UNKNOWN PROPERTY
		UFortVictoryCrownAccountItemDefinition* VictoryCrownAccountItemDefinition; // 0x138(0x8)
		TWeakObjectPtr<UFortMontageItemDefinitionBase*> RoyalRoyaleEmoteItemDefinition; // 0x140(0x20)
		UDataTable* VictoryCrownPlaylistData; // 0x160(0x8)
		FGameplayTagContainer SourceTagsForRoyalRoyale; // 0x168(0x20)
		FVictoryCrownAccountData VictoryCrownAccountData; // 0x188(0x14)
		unsigned char UnknownData03_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FScalableFloat InitialGrantDelay; // 0x1A0(0x28)
		unsigned char UnknownData04_6[0xA8]; // 0x1C8(0xA8) UNKNOWN PROPERTY
		bool bKillFeedBroadcastReady; // 0x270(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x271(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns");
			return ret;
		}

		void OnRep_WonRoyalRoyale(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515955A0(relative to base address)
		void OnRep_WonCrownInMatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159556C(relative to base address)
		void OnRep_VictoryCrownAccountData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751595550(relative to base address)
		void OnEnterAircraft(AController* EnteringController); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515954D4(relative to base address)
		void OnAthenaProfileInitialized(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		bool IsCrownInPlayerInventory(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515954B0(relative to base address)
		bool HasWonRoyalRoyale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C262AF8(relative to base address)
		bool HasWonCrownInMatch(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F7116B8(relative to base address)
		void HandlePawnChanged(APawn* OldPawn, APawn* NewPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751595338(relative to base address)
		void HandleExitAircraft(AController* ExitingController); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751595284(relative to base address)
		void HandleEnterAircraft(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751595270(relative to base address)
		int32_t GetVictoryCrownsBestowedCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751595070(relative to base address)
		int32_t GetVictoryCrownLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E41E1B8(relative to base address)
		int32_t GetRoyalRoyaleAchievedCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F0F7580(relative to base address)
		UFortWorldItem GetCrownInPlayerInventory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751594F50(relative to base address)
		void DebugForceSetRoyalRoyaleAchievedCount(int32_t NewRoyalRoyaleCount); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void CacheAccountItemData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		bool AuthoritySquadHasSeenCrownItem(UFortItem* CrownItem, bool bDropped); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751594E8C(relative to base address)
		bool AuthorityHasSquadHeldCrownItem(UFortItem* CrownItem); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751594DFC(relative to base address)
		bool AuthorityHasSquadDroppedCrownItem(UFortItem* CrownItem); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751594D6C(relative to base address)
		bool AuthorityHasHeldCrownItem(UFortItem* CrownItem); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751594CDC(relative to base address)
		bool AuthorityHasDroppedCrownItem(UFortItem* CrownItem); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751594C4C(relative to base address)
	};


	// Class VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent	
	{
	public:
		TArray<AFortPlayerStateAthena*> CrownBearerPlayerStates; // 0xA0(0x10)
		unsigned char UnknownData00_6[0x50]; // 0xB0(0x50) UNKNOWN PROPERTY
		FText KillFeedFormat_Dropped; // 0x100(0x10)
		FText KillFeedFormat_PickedUp; // 0x110(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x120(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns");
			return ret;
		}

		void OnRep_CrownBearerPlayerStates(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF749238DFC(relative to base address)
		bool IsCrownBearer(AFortPlayerStateAthena* FortPSA); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7491D9568(relative to base address)
		void HandleCrownStatusChanged(AFortPlayerControllerAthena* FortPlayerControllerAthena, UFortItem* CrownItem); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751595088(relative to base address)
		bool GetVictoryCrownLevelFromItemTrackerGuid(int32_t& OutVictoryCrownLevel, FGuid& VictoryCrownItemTrackerGuid); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751594F74(relative to base address)
		void ClientKillFeedMessage(AFortPlayerStateAthena* FortPSA, bool bAdded); // Flags: Net|NetReliableNative|Event|NetMulticast|Public, Memory Exec: 0x7FF7487BB460(relative to base address)
	};


	// Class VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent	
	{
	public:
		UDataTable* VictoryCrownPlaylistData; // 0xA8(0x8)
		bool bInitializeSuccess; // 0xB0(0x1)
		bool bSelectedPlaylistSupportCrown; // 0xB1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY
		UFortSocialParty* PersistentParty; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd");
			return ret;
		}

		void PlaylistChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
	// Inherited from UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent	
	{
	public:
		bool bHasWonRoyalRoyale; // 0xA0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns");
			return ret;
		}

		bool GetWonRoyalRoyale(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E228C6C(relative to base address)
	};

}
