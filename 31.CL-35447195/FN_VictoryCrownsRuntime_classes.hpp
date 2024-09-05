#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VictoryCrownsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TArray IntroFXUpdateFrequencies; // 0xA28(0x10)
		UCurveVector IntroFXCurve; // 0xA38(0x8)
		UTimelineComponent IntroFXTimeline; // 0xA40(0x8)
		UFXSystemComponent CrownParticleComponent; // 0xA48(0x8)
		unsigned char UnknownData01_7[0x18]; // 0xA50(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear");
			return ret;
		}

		void RemoveCrownWear(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D52C98
		void OnIntroFXTimelineTick(FVector CurveValue); // Flags: Final|Native|Protected|HasDefaults 0x7FF414D52BB8
		void ApplyCrownWear(TArray& ParticleComponents); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414D52AD8
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
		unsigned char UnknownData01_6[0x2]; // 0x6E(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr BoundVictoryCrownsComponent; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortVictoryCrownViewModel");
			return ret;
		}

		void HandleOnHasWonRoyalRoyale(); // Flags: Final|Native|Private 0x7FF414D52E58
		void HandleOnHasWonCrownInMatch(); // Flags: Final|Native|Private 0x7FF414D52D78
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

		void VictoryCrownsGrantCrown(int32_t CrownLevel); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D52F38
	};


	// Class VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1D0 (0x278 - 0xA8)
	class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVictoryCrownStatusChanged; // 0xB0(0x10)
		FMulticastInlineDelegate OnHasWonCrownInMatch; // 0xC0(0x10)
		FMulticastInlineDelegate OnHasWonRoyalRoyale; // 0xD0(0x10)
		unsigned char UnknownData07_6[0x30]; // 0xE0(0x30) UNKNOWN PROPERTY
		TWeakObjectPtr CrownInventoryItemClass; // 0x110(0x20)
		bool bWonCrownInMatch; // 0x130(0x1)
		bool bWonRoyalRoyale; // 0x131(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x132(0x6) UNKNOWN PROPERTY
		UFortVictoryCrownAccountItemDefinition VictoryCrownAccountItemDefinition; // 0x138(0x8)
		TWeakObjectPtr RoyalRoyaleEmoteItemDefinition; // 0x140(0x20)
		UDataTable VictoryCrownPlaylistData; // 0x160(0x8)
		FGameplayTagContainer SourceTagsForRoyalRoyale; // 0x168(0x20)
		FVictoryCrownAccountData VictoryCrownAccountData; // 0x188(0x14)
		unsigned char UnknownData09_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FScalableFloat InitialGrantDelay; // 0x1A0(0x28)
		unsigned char UnknownData10_6[0xA8]; // 0x1C8(0xA8) UNKNOWN PROPERTY
		bool bKillFeedBroadcastReady; // 0x270(0x1)
		unsigned char UnknownData11_7[0x7]; // 0x271(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns");
			return ret;
		}

		void OnRep_WonRoyalRoyale(); // Flags: Final|Native|Private 0x7FF414D54278
		void OnRep_WonCrownInMatch(); // Flags: Final|Native|Private 0x7FF414D54198
		void OnRep_VictoryCrownAccountData(); // Flags: Final|Native|Private 0x7FF414D540B8
		void OnEnterAircraft(AController EnteringController); // Flags: Final|Native|Protected 0x7FF414D53FD8
		void OnAthenaProfileInitialized(); // Flags: Final|Native|Private 0x7FF414D53EF8
		bool IsCrownInPlayerInventory(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D53E18
		bool HasWonRoyalRoyale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D53D38
		bool HasWonCrownInMatch(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D53C58
		void HandlePawnChanged(APawn OldPawn, APawn NewPawn); // Flags: Final|Native|Protected 0x7FF414D53B78
		void HandleExitAircraft(AController ExitingController); // Flags: Final|Native|Protected 0x7FF414D53A98
		void HandleEnterAircraft(); // Flags: Final|Native|Protected 0x7FF414D539B8
		int32_t GetVictoryCrownsBestowedCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D538D8
		int32_t GetVictoryCrownLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D537F8
		int32_t GetRoyalRoyaleAchievedCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D53718
		UFortWorldItem GetCrownInPlayerInventory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D53638
		void DebugForceSetRoyalRoyaleAchievedCount(int32_t NewRoyalRoyaleCount); // Flags: Final|Exec|Native|Public 0x7FF414D53558
		void CacheAccountItemData(); // Flags: Final|Native|Private 0x7FF414D53478
		bool AuthoritySquadHasSeenCrownItem(UFortItem CrownItem, bool bDropped); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 0x7FF414D53398
		bool AuthorityHasSquadHeldCrownItem(UFortItem CrownItem); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 0x7FF414D532B8
		bool AuthorityHasSquadDroppedCrownItem(UFortItem CrownItem); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 0x7FF414D531D8
		bool AuthorityHasHeldCrownItem(UFortItem CrownItem); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 0x7FF414D530F8
		bool AuthorityHasDroppedCrownItem(UFortItem CrownItem); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 0x7FF414D53018
	};


	// Class VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
	// Inherited from UFortGameStateComponent -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent	
	{
	public:
		TArray CrownBearerPlayerStates; // 0xA0(0x10)
		unsigned char UnknownData02_6[0x50]; // 0xB0(0x50) UNKNOWN PROPERTY
		FText KillFeedFormat_Dropped; // 0x100(0x10)
		FText KillFeedFormat_PickedUp; // 0x110(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x120(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns");
			return ret;
		}

		void OnRep_CrownBearerPlayerStates(); // Flags: Final|Native|Protected 0x7FF414D546D8
		bool IsCrownBearer(AFortPlayerStateAthena FortPSA); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D545F8
		void HandleCrownStatusChanged(AFortPlayerControllerAthena FortPlayerControllerAthena, UFortItem CrownItem); // Flags: Final|Native|Protected 0x7FF414D54518
		bool GetVictoryCrownLevelFromItemTrackerGuid(int32_t& OutVictoryCrownLevel, FGuid& VictoryCrownItemTrackerGuid); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414D54438
		void ClientKillFeedMessage(AFortPlayerStateAthena FortPSA, bool bAdded); // Flags: Net|NetReliableNative|Event|NetMulticast|Public 0x7FF414D54358
	};


	// Class VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent	
	{
	public:
		UDataTable VictoryCrownPlaylistData; // 0xA8(0x8)
		bool bInitializeSuccess; // 0xB0(0x1)
		bool bSelectedPlaylistSupportCrown; // 0xB1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xB2(0x6) UNKNOWN PROPERTY
		UFortSocialParty PersistentParty; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd");
			return ret;
		}

		void PlaylistChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D547B8
	};


	// Class VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
	// Inherited from UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent	
	{
	public:
		bool bHasWonRoyalRoyale; // 0xA0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns");
			return ret;
		}

		bool GetWonRoyalRoyale(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D54898
	};

}
