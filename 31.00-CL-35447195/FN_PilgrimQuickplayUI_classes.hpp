#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PilgrimQuickplayUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PilgrimQuickplayUI.FestivalPassTrackingWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFestivalPassTrackingWidget : public UCommonUserWidget	
	{
	public:
		int32_t CurrentProgress; // 0x2E0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		UFortPersistentResourceItemDefinition TrackedItem; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.FestivalPassTrackingWidget");
			return ret;
		}

		void OnProgressUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DFC440
		void HandleMCPInventoryChanged(TSet& ItemChangeFlags, int64_t ProfileRevision); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DFC360
	};


	// Class PilgrimQuickplayUI.PilgrimDynamicUIDirector
	// Inherited from ASparksDynamicUIDirector -> ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
	class APilgrimDynamicUIDirector : public ASparksDynamicUIDirector	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimDynamicUIDirector");
			return ret;
		}
	};


	// Class PilgrimQuickplayUI.PilgrimHUDBase
	// Inherited from UFortNullHUD -> UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x470 - 0x450)
	class UPilgrimHUDBase : public UFortNullHUD	
	{
	public:
		TWeakObjectPtr EmotePickerClass; // 0x450(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimHUDBase");
			return ret;
		}

		void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept); // Flags: Final|Native|Private 0x7FF414DFC600
		void ForceCloseSettingsMenu(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414DFC520
	};


	// Class PilgrimQuickplayUI.PilgrimPostGameQuestList
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x340 - 0x2E0)
	class UPilgrimPostGameQuestList : public UCommonUserWidget	
	{
	public:
		UDynamicEntryBox EntryBox_Quests; // 0x2E0(0x8)
		TMap QuestWidgetMap; // 0x2E8(0x50)
		bool bShowCompletedQuests; // 0x338(0x1)
		bool bShowUpdatedQuests; // 0x339(0x1)
		bool bShowUnchangedQuests; // 0x33A(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x33B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimPostGameQuestList");
			return ret;
		}

		void SetShowQuests(bool bNewShowCompleted, bool bNewShowUpdated, bool bNewShowUnchanged); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414DFC6E0
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplayInfoModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x420 - 0x3F8)
	class UPilgrimQuickplayInfoModal : public UCommonActivatableWidget	
	{
	public:
		UVerticalBox Vbox_Panels; // 0x3F8(0x8)
		UCommonButtonBase Button_Close; // 0x400(0x8)
		UCommonButtonBase Button_Close_Alt; // 0x408(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x410(0x8)
		UAthenaScrollBox ScrollBox_Panels; // 0x418(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplayInfoModal");
			return ret;
		}

		void BP_OnScrollCompleted(bool bScrolledDown); // Flags: Event|Protected|BlueprintEvent 0x7FF414DFC7C0
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplaySpotlightList
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UPilgrimQuickplaySpotlightList : public UCommonUserWidget	
	{
	public:
		TArray SpotlightCompetitions; // 0x2E0(0x10)
		int32_t MaxSpotlights; // 0x2F0(0x4)
		int32_t SelectedIndex; // 0x2F4(0x4)
		UDynamicEntryBox EntryBox_SpotlightCompetitions; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList");
			return ret;
		}

		void UpdateSpotlightList(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFCEC0
		void SetSelectedIndex(int32_t NewSelectedIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFCDE0
		void SetMaxSpotlights(int32_t NewMaxSpotlights); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFCD00
		void SelectPrevIndex(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFCC20
		void SelectNextIndex(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFCB40
		void PopulateSpotlightCompetitionList(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFCA60
		void OnSpotlightListUpdated(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414DFC980
		int32_t GetSelectedIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFC8A0
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplay_UIResultBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x400 - 0x3F8)
	class UPilgrimQuickplay_UIResultBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplay_UIResultBase");
			return ret;
		}
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplay_UISpectatorBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x408 - 0x3F8)
	class UPilgrimQuickplay_UISpectatorBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplay_UISpectatorBase");
			return ret;
		}

		void OnSpectatorTargetChanged(AFortPlayerState NewSpectatorPlayerState); // Flags: Event|Public|BlueprintEvent 0x7FF414DFD240
		void OnPawnSetForSpectatedPlayer(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Protected 0x7FF414DFD160
		AFortPlayerState GetCurrentSpectatorTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DFD080
		AFortPlayerState ChangeFollowedPlayer(EPlayerControllerFollow PlayerToFollow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFCFA0
	};


	// Class PilgrimQuickplayUI.PilgrimQuestNotificationEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x310 - 0x2E0)
	class UPilgrimQuestNotificationEntry : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock Text_Description; // 0x2E0(0x8)
		UCommonTextBlock Text_CategoryDisplay; // 0x2E8(0x8)
		UCommonTextBlock Text_FlavorText; // 0x2F0(0x8)
		URichTextBlock RichText_ObjectivesCompleted; // 0x2F8(0x8)
		UImage Image_Completion; // 0x300(0x8)
		UAthenaChallengeRewards UserWidget_Rewards; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuestNotificationEntry");
			return ret;
		}

		void InitializeQuestNotification(TScriptInterface InQuest); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFD320
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x388 - 0x2E0)
	class UPilgrimQuickplaySpotlightEntry : public UCommonUserWidget	
	{
	public:
		bool bEmptySpotlight : 1; // 0x2E0:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x2E1(0x7) UNKNOWN PROPERTY
		UFortLazyImage Image_SongArt; // 0x2E8(0x8)
		UCommonTextBlock Text_SongTitle; // 0x2F0(0x8)
		UCommonTextBlock Text_SongArtist; // 0x2F8(0x8)
		UCommonTextBlock Text_Constraints; // 0x300(0x8)
		FPilgrimSpotlightCompetition SpotlightData; // 0x308(0x70)
		TArray SpotlightSongMetadatas; // 0x378(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry");
			return ret;
		}

		void SpotlightEntryUpdated(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFD5C0
		void SetEmptySpotlight(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DFD4E0
		void OnSpotlightInitialized(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DFD400
	};

}
