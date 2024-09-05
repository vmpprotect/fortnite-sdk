#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PilgrimQuickplayUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PilgrimQuickplayUI.FestivalPassTrackingWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFestivalPassTrackingWidget : public UCommonUserWidget	
	{
	public:
		int32_t CurrentProgress; // 0x2D8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY
		UFortPersistentResourceItemDefinition* TrackedItem; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.FestivalPassTrackingWidget");
			return ret;
		}

		void OnProgressUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMCPInventoryChanged(TSet<FString>& ItemChangeFlags, int64_t ProfileRevision); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751AC3EBC(relative to base address)
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
	// Size: 0x20 (0x468 - 0x448)
	class UPilgrimHUDBase : public UFortNullHUD	
	{
	public:
		TWeakObjectPtr<UClass*> EmotePickerClass; // 0x448(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimHUDBase");
			return ret;
		}

		void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept); // Flags: Final|Native|Private, Memory Exec: 0x7FF751AC4064(relative to base address)
		void ForceCloseSettingsMenu(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751AC3D5C(relative to base address)
	};


	// Class PilgrimQuickplayUI.PilgrimPostGameQuestList
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x338 - 0x2D8)
	class UPilgrimPostGameQuestList : public UCommonUserWidget	
	{
	public:
		UDynamicEntryBox* EntryBox_Quests; // 0x2D8(0x8)
		TMap<FString, TWeakObjectPtr> QuestWidgetMap; // 0x2E0(0x50)
		bool bShowCompletedQuests; // 0x330(0x1)
		bool bShowUpdatedQuests; // 0x331(0x1)
		bool bShowUnchangedQuests; // 0x332(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x333(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimPostGameQuestList");
			return ret;
		}

		void SetShowQuests(bool bNewShowCompleted, bool bNewShowUpdated, bool bNewShowUnchanged); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751AC4524(relative to base address)
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplayInfoModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x418 - 0x3F0)
	class UPilgrimQuickplayInfoModal : public UCommonActivatableWidget	
	{
	public:
		UVerticalBox* Vbox_Panels; // 0x3F0(0x8)
		UCommonButtonBase* Button_Close; // 0x3F8(0x8)
		UCommonButtonBase* Button_Close_Alt; // 0x400(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x408(0x8)
		UAthenaScrollBox* ScrollBox_Panels; // 0x410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplayInfoModal");
			return ret;
		}

		void BP_OnScrollCompleted(bool bScrolledDown); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplaySpotlightList
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UPilgrimQuickplaySpotlightList : public UCommonUserWidget	
	{
	public:
		TArray<FPilgrimSpotlightCompetition> SpotlightCompetitions; // 0x2D8(0x10)
		int32_t MaxSpotlights; // 0x2E8(0x4)
		int32_t SelectedIndex; // 0x2EC(0x4)
		UDynamicEntryBox* EntryBox_SpotlightCompetitions; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightList");
			return ret;
		}

		void UpdateSpotlightList(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC4664(relative to base address)
		void SetSelectedIndex(int32_t NewSelectedIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC4488(relative to base address)
		void SetMaxSpotlights(int32_t NewMaxSpotlights); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC4404(relative to base address)
		void SelectPrevIndex(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC43C4(relative to base address)
		void SelectNextIndex(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC4394(relative to base address)
		void PopulateSpotlightCompetitionList(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC4380(relative to base address)
		void OnSpotlightListUpdated(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7474A9F44(relative to base address)
		int32_t GetSelectedIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AC3E04(relative to base address)
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplay_UIResultBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x450 - 0x3F0)
	class UPilgrimQuickplay_UIResultBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle ToggleQuestScreenAction; // 0x3F8(0x10)
		unsigned char UnknownData01_7[0x48]; // 0x408(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplay_UIResultBase");
			return ret;
		}

		EPilgrimTrackType GetTrackTypeForPlayer(AFortPlayerStateAthena* PlayerState); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AC3E38(relative to base address)
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplay_UISpectatorBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x400 - 0x3F0)
	class UPilgrimQuickplay_UISpectatorBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplay_UISpectatorBase");
			return ret;
		}

		void OnSpectatorTargetChanged(AFortPlayerState* NewSpectatorPlayerState); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnSetForSpectatedPlayer(APlayerState* Player, APawn* NewPawn, APawn* OldPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751AC4280(relative to base address)
		AFortPlayerState GetCurrentSpectatorTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751AC3DE0(relative to base address)
		AFortPlayerState ChangeFollowedPlayer(EPlayerControllerFollow PlayerToFollow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC3CCC(relative to base address)
	};


	// Class PilgrimQuickplayUI.PilgrimQuestNotificationEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x308 - 0x2D8)
	class UPilgrimQuestNotificationEntry : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock* Text_Description; // 0x2D8(0x8)
		UCommonTextBlock* Text_CategoryDisplay; // 0x2E0(0x8)
		UCommonTextBlock* Text_FlavorText; // 0x2E8(0x8)
		URichTextBlock* RichText_ObjectivesCompleted; // 0x2F0(0x8)
		UImage* Image_Completion; // 0x2F8(0x8)
		UAthenaChallengeRewards* UserWidget_Rewards; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuestNotificationEntry");
			return ret;
		}

		void InitializeQuestNotification(TScriptInterface<Class> InQuest); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC415C(relative to base address)
	};


	// Class PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x380 - 0x2D8)
	class UPilgrimQuickplaySpotlightEntry : public UCommonUserWidget	
	{
	public:
		bool bEmptySpotlight : 1; // 0x2D8:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY
		UFortLazyImage* Image_SongArt; // 0x2E0(0x8)
		UCommonTextBlock* Text_SongTitle; // 0x2E8(0x8)
		UCommonTextBlock* Text_SongArtist; // 0x2F0(0x8)
		UCommonTextBlock* Text_Constraints; // 0x2F8(0x8)
		FPilgrimSpotlightCompetition SpotlightData; // 0x300(0x70)
		TArray<UPilgrimSongMetadata*> SpotlightSongMetadatas; // 0x370(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PilgrimQuickplayUI.PilgrimQuickplaySpotlightEntry");
			return ret;
		}

		void SpotlightEntryUpdated(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC4650(relative to base address)
		void SetEmptySpotlight(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751AC43F0(relative to base address)
		void OnSpotlightInitialized(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7474A9F44(relative to base address)
	};

}
