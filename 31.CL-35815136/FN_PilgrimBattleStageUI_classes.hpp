#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PilgrimBattleStageUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PilgrimBattleStageUI.PilgrimBattleStage_PlacementDisplay
	// Inherited from UPilgrimGameWidgetBase -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x3B8 - 0x308)
	class UPilgrimBattleStage_PlacementDisplay : public UPilgrimGameWidgetBase	
	{
	public:
		float WarningMsDuration; // 0x308(0x4)
		float LocalPlayerScore; // 0x30C(0x4)
		float FromBelowCutoffScore; // 0x310(0x4)
		float FromAboveCutoffScore; // 0x314(0x4)
		int32_t NumBandsToAdvance; // 0x318(0x4)
		int32_t NumTotalBands; // 0x31C(0x4)
		int32_t LastCutoffMarkerBandsToAdvance; // 0x320(0x4)
		bool bSortUpdateNeeded; // 0x324(0x1)
		bool bHasReachedLastNote; // 0x325(0x1)
		bool bForceCondensedLayoutMobile; // 0x326(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x327(0x1) UNKNOWN PROPERTY
		TArray<UPilgrimBattleStage_TeamPlacementEntry*> BandPlacementWidgets; // 0x328(0x10)
		TArray<FBattleStageBandState> SortedBandStates; // 0x338(0x10)
		TArray<FBattleStageBandState> LastSortedBandStates; // 0x348(0x10)
		APilgrimQuickplayPlayspace* Playspace; // 0x358(0x8)
		UPilgrimBattleStageGameManagerComponent* GameManagerComp; // 0x360(0x8)
		UPilgrimQuickplayPlayspaceComponent_PlayerManager* BattleStagePlayerManagerComp; // 0x368(0x8)
		UMusicClockComponent* MusicClockComp; // 0x370(0x8)
		UImage* LeaderCrown; // 0x378(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x380(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageUI.PilgrimBattleStage_PlacementDisplay");
			return ret;
		}

		void UpdateCutoffMarker(float InCutoffScore); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetLocalPlayerScore(float CurrentScore); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshPlacementDisplay(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751ACE180(relative to base address)
		void PositionCutoffMarker(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBeatEvent(int32_t BeatNumber, int32_t BeatInBar); // Flags: Final|Native|Private, Memory Exec: 0x7FF751ACE0C8(relative to base address)
		void BandStatesUpdated(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751ACE0B4(relative to base address)
	};


	// Class PilgrimBattleStageUI.PilgrimBattleStage_TeamPlacementEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UPilgrimBattleStage_TeamPlacementEntry : public UCommonUserWidget	
	{
	public:
		char TeamID; // 0x2D8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimBattleStageUI.PilgrimBattleStage_TeamPlacementEntry");
			return ret;
		}

		void UpdateBackground(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Setup(FBattleStageBandState BandState, int32_t BandRank, bool bIsProgressing, bool bSongEndWarning); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAsPlayer(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAsPip(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAsFeatured(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAsCondensed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidgetAnimation GetFromBelowAnim(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidgetAnimation GetFromAboveAnim(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
