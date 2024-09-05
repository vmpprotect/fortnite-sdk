#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarFrontend
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarFrontend.DelMarFrontendCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarFrontendCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarFrontendCheatManager");
			return ret;
		}

		void DelMarResetNux(); // Flags: Final|Exec|Native|Protected 0x7FF414DE8B00
		void DelMarMarkTutorialPlayed(); // Flags: Final|Exec|Native|Protected 0x7FF414DE8A20
	};


	// Class DelMarFrontend.DelMarFrontendExperienceFlow
	// Inherited from UObject
	// Size: 0x160 (0x188 - 0x28)
	class UDelMarFrontendExperienceFlow : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		AFortPlayerController CachedPlayerController; // 0x30(0x8)
		TWeakObjectPtr VideoPlayerClass; // 0x38(0x20)
		UClass ConfirmationWindowClass; // 0x58(0x8)
		FText TutorialPromptTitle; // 0x60(0x10)
		FText TutorialPromptDescription; // 0x70(0x10)
		FText TutorialPromptConfirmButtonText; // 0x80(0x10)
		FText TutorialPromptDeclineButtonText; // 0x90(0x10)
		FText SpeedRunPromptTitle; // 0xA0(0x10)
		FText SpeedRunPromptDescription; // 0xB0(0x10)
		FText SpeedRunPromptConfirmButtonText; // 0xC0(0x10)
		FText SpeedRunPromptDeclineButtonText; // 0xD0(0x10)
		UDelMarGameUserSettings DelMarUserSettings; // 0xE0(0x8)
		unsigned char UnknownData04_6[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
		TMap NUXTrailerRating; // 0xF0(0x50)
		unsigned char UnknownData05_7[0x48]; // 0x140(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarFrontendExperienceFlow");
			return ret;
		}

		void HandleVideoTerminalError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Protected 0x7FF414DE8CC0
		void FinishTrailerStep(); // Flags: Final|Native|Protected 0x7FF414DE8BE0
	};


	// Class DelMarFrontend.DelMarFrontendSubsystem
	// Inherited from UFortLocalPlayerSubsystem -> ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0xC8 (0xF8 - 0x30)
	class UDelMarFrontendSubsystem : public UFortLocalPlayerSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		AVehicleCosmeticsPreviewVehicle PreviewVehicle; // 0x38(0x8)
		FFrontendLobbyActor LobbyVehicleActorData; // 0x40(0x70)
		FCosmeticLoadoutSlot LobbyVehicleDefaultBody; // 0xB0(0x20)
		unsigned char UnknownData03_7[0x28]; // 0xD0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarFrontendSubsystem");
			return ret;
		}
	};


	// Class DelMarFrontend.MatchmakingWidgetErrorVisualsForDelMar
	// Inherited from UMatchmakingWidgetErrorVisualsContainer -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UMatchmakingWidgetErrorVisualsForDelMar : public UMatchmakingWidgetErrorVisualsContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.MatchmakingWidgetErrorVisualsForDelMar");
			return ret;
		}
	};


	// Class DelMarFrontend.DelMarMatchmakingWidgetExtension
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UDelMarMatchmakingWidgetExtension : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FText ModeSetButtonPrimaryText; // 0x30(0x10)
		FText ModeSetButtonInvalidSelectionText; // 0x40(0x10)
		FText ModeSetButtonRankedText; // 0x50(0x10)
		UClass GameSelectionOverride; // 0x60(0x8)
		UClass ModeSetModificationModal; // 0x68(0x8)
		UClass TrackSelectScreen; // 0x70(0x8)
		bool bDisplayGameSelectionOnContentStack; // 0x78(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		UClass CustomHeadingWidget; // 0x80(0x8)
		UClass ProductModeUserFacingDataClass; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarMatchmakingWidgetExtension");
			return ret;
		}
	};


	// Class DelMarFrontend.DelMarModeSetModificationModal
	// Inherited from UFortActivityModeSetSelectionModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x458 - 0x410)
	class UDelMarModeSetModificationModal : public UFortActivityModeSetSelectionModalBase	
	{
	public:
		UClass TrackSelectScreenClass; // 0x410(0x8)
		UDelMarActivityVM DelMarActivityVM; // 0x418(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x420(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarModeSetModificationModal");
			return ret;
		}

		void OnActivityViewModelInitialized(UDelMarActivityVM ViewModel); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE8F60
		void HandleCloseButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE8E80
		void HandleBrowseTrackButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE8DA0
	};


	// Class DelMarFrontend.DelMarModeSetPreviewModal
	// Inherited from UFortActivityDetailsModalBase -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x5A8 - 0x578)
	class UDelMarModeSetPreviewModal : public UFortActivityDetailsModalBase	
	{
	public:
		UDelMarActivityVM DelMarActivityVM; // 0x578(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x580(0x8) UNKNOWN PROPERTY
		UClass RegularDetailsModalClass; // 0x588(0x8)
		UClass ActivityCreatorPageViewClass; // 0x590(0x8)
		UClass ActivityCampaignPurchaseScreenClass; // 0x598(0x8)
		UClass ActivityAttributionsClass; // 0x5A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarModeSetPreviewModal");
			return ret;
		}

		void OnActivityViewModelInitialized(UDelMarActivityVM ViewModel); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE93C0
		void HandleDetailsButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE92E0
		void HandleConfirmButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE9200
		void HandleCloseButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE9120
		void HandleBrowseTrackButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE9040
	};


	// Class DelMarFrontend.DelMarRankedWidgetExtension
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UDelMarRankedWidgetExtension : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr RankInfoModalOverride; // 0x30(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarRankedWidgetExtension");
			return ret;
		}
	};


	// Class DelMarFrontend.DelMarTrackSelectionViewModel
	// Inherited from UFortDiscoverSurfaceViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x38 (0x108 - 0xD0)
	class UDelMarTrackSelectionViewModel : public UFortDiscoverSurfaceViewModel	
	{
	public:
		UFortDiscoverPanelTreeViewModel IndexPanelTree; // 0xD0(0x8)
		UFortDiscoverProviderViewModel FrontPagePanel; // 0xD8(0x8)
		TArray Categories; // 0xE0(0x10)
		UFortDiscoverPanelTreeViewModel SelectedCategory; // 0xF0(0x8)
		TArray CurrentSubCategories; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarTrackSelectionViewModel");
			return ret;
		}
	};


	// Class DelMarFrontend.DelMarTrackSelectModal
	// Inherited from UFortActivityModeSetSelectionModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x450 - 0x410)
	class UDelMarTrackSelectModal : public UFortActivityModeSetSelectionModalBase	
	{
	public:
		UFortActivityPrivacyButton Button_ActivityPrivacy; // 0x410(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x418(0x8)
		UCommonButtonBase Button_Back; // 0x420(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x428(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarTrackSelectModal");
			return ret;
		}
	};


	// Class DelMarFrontend.DelMarTrackSelectScreen
	// Inherited from UFortActivityModeSetSelectionModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x438 - 0x410)
	class UDelMarTrackSelectScreen : public UFortActivityModeSetSelectionModalBase	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x410(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarTrackSelectScreen");
			return ret;
		}

		void HandleCloseButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE94A0
	};


	// Class DelMarFrontend.DelMarFrontendRuntimeOptions
	// Inherited from URuntimeOptionsBase -> UObject
	// Size: 0xD8 (0x110 - 0x38)
	class UDelMarFrontendRuntimeOptions : public URuntimeOptionsBase	
	{
	public:
		FString FrontendNuxVideoKey; // 0x38(0x10)
		FName FrontendNuxVideoName; // 0x48(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FString FrontendNuxVideoId; // 0x50(0x10)
		int32_t NuxVideoVersion; // 0x60(0x4)
		bool bAlwaysShowNuxVideo; // 0x64(0x1)
		bool bDisableFrontendNuxFlow; // 0x65(0x1)
		bool bDisableFrontendSpeedRunPrompt; // 0x66(0x1)
		bool bFrontendSpeedRunPromptUsesTwoButtons; // 0x67(0x1)
		FString DelMarTutorialLinkCode; // 0x68(0x10)
		FString DelMarSpeedRunLinkCode; // 0x78(0x10)
		FString DelMarDefaultLinkCode; // 0x88(0x10)
		bool bUseNewTrackSelectFlow; // 0x98(0x1)
		bool bUseTrackSelectGrids; // 0x99(0x1)
		bool bUsePreviewModal; // 0x9A(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x9B(0x5) UNKNOWN PROPERTY
		TMap DelMarSeasonImageUrls; // 0xA0(0x50)
		FString DelMarDefaultSeasonImageUrl; // 0xF0(0x10)
		TArray DelMarNewLinkCodes; // 0x100(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarFrontendRuntimeOptions");
			return ret;
		}

		bool IsNewTrack(FString LinkCode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE9660
		UDelMarFrontendRuntimeOptions GetDelMarFrontendRuntimeOptions(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DE9580
	};


	// Class DelMarFrontend.DelMarActivityVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class UDelMarActivityVM : public UMVVMViewModelBase	
	{
	public:
		TArray ProductModes; // 0x68(0x10)
		FString CurrentProductMode; // 0x78(0x10)
		UFortActivityViewModel FortActivityVM; // 0x88(0x8)
		bool bActivitySupportsPrivateMatch; // 0x90(0x1)
		bool bIsPreviewModal; // 0x91(0x1)
		unsigned char UnknownData01_7[0x1E]; // 0x92(0x1E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarFrontend.DelMarActivityVM");
			return ret;
		}

		void SetCurrentProductMode(FString SelectedProductMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE9740
	};

}
