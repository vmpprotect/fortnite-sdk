#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarUI.DelMarUserWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x358 - 0x2E0)
	class UDelMarUserWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x58]; // 0x2E0(0x58) UNKNOWN PROPERTY
		EWidgetTransitionerInitialStatus InitialTransitionStatus; // 0x338(0x1)
		ESlateVisibility HiddenVisibility; // 0x339(0x1)
		bool bAlwaysReverseInterruptedAnimations; // 0x33A(0x1)
		unsigned char UnknownData03_6[0x5]; // 0x33B(0x5) UNKNOWN PROPERTY
		UWidgetTransitioner WidgetTransitioner; // 0x340(0x8)
		UWidgetAnimation NormalTransitionIn; // 0x348(0x8)
		UWidgetAnimation NormalTransitionOut; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarUserWidget");
			return ret;
		}

		void SetDisplayEnabled(bool bEnabled, bool bSkipAnimation); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCDF20
		bool IsDisplayEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DCDE40
		void HandleWidgetTransitionerStatusChanged(UWidgetTransitioner InTransitioner, EWidgetTransitionerStatus InStatus); // Flags: Final|Native|Protected 0x7FF414DCDD60
		UWidgetTransitioner GetWidgetTransitioner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCDC80
		UUIStateChartManager GetUIStateChartManager(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCDBA0
		void BP_Show(bool bSkipAnimation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCDAC0
		void BP_Hide(bool bSkipAnimation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCD9E0
	};


	// Class DelMarUI.DelMarCountdownTimerWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x398 - 0x358)
	class UDelMarCountdownTimerWidget : public UDelMarUserWidget	
	{
	public:
		UTextBlock TextBlock_RemainingTime; // 0x358(0x8)
		double InitialCoundownTime; // 0x360(0x8)
		FMulticastInlineDelegate OnCountdownTimeChanged; // 0x368(0x10)
		FMulticastInlineDelegate OnCountdownTimeSet; // 0x378(0x10)
		FMulticastInlineDelegate OnCountdownTimeEnded; // 0x388(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCountdownTimerWidget");
			return ret;
		}

		void SetInitialCountdownTime(double InTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCE0E0
		double GetTimeRemainingSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCE000
	};


	// Class DelMarUI.DelMarCreativeUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class ADelMarCreativeUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		ADelMarVehicle CachedDelMarVehicle; // 0x2B0(0x8)
		UDynamicUIScene CreativeDelMarUI; // 0x2B8(0x8)
		FGameplayTag VehicleInAirTag; // 0x2C0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCreativeUIDirector");
			return ret;
		}

		void OnVehicleExit(); // Flags: Final|Native|Private 0x7FF414DCE380
		void OnVehicleEnter(); // Flags: Final|Native|Private 0x7FF414DCE2A0
		void OnVehicleAnyWheelsOnGroundChanged(TScriptInterface& VehicleRef, bool bAnyWheelsOnGround); // Flags: Final|Native|Private|HasOutParms 0x7FF414DCE1C0
	};


	// Class DelMarUI.DelMarDriverCameraWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x128 (0x480 - 0x358)
	class UDelMarDriverCameraWidget : public UDelMarUserWidget	
	{
	public:
		UWidgetAnimation DefaultIntercomAnimation; // 0x358(0x8)
		UWidgetAnimation ReactiveDriverCamera_Persistent; // 0x360(0x8)
		float ReactiveWidgetOutroDelay; // 0x368(0x4)
		float ReactiveWidgetMaxActiveTime; // 0x36C(0x4)
		TMap MainChannelAnimationTagTable; // 0x370(0x50)
		TMap ReactiveAnimationTable; // 0x3C0(0x50)
		TMap AnimationNameTable; // 0x410(0x50)
		UUMGSequencePlayer IntercomSequencePlayer; // 0x460(0x8)
		UUMGSequencePlayer ReactiveSequencePlayer; // 0x468(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x470(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDriverCameraWidget");
			return ret;
		}

		TArray GetAnimationNames(); // Flags: Final|Native|Protected|Const 0x7FF414DCE460
	};


	// Class DelMarUI.DelMarInputActionRichTextBlockDecorator
	// Inherited from URichTextBlockDecorator -> UObject
	// Size: 0x108 (0x130 - 0x28)
	class UDelMarInputActionRichTextBlockDecorator : public URichTextBlockDecorator	
	{
	public:
		UInputAction InputAction; // 0x28(0x8)
		FText DisplayName; // 0x30(0x10)
		FKey Key; // 0x40(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FSlateBrush Icon; // 0x60(0xB0)
		URichTextBlock OwnerWidget; // 0x110(0x8)
		TWeakObjectPtr OwningLocalPlayer; // 0x118(0x8)
		TWeakObjectPtr CommonInputSubsystem; // 0x120(0x8)
		TWeakObjectPtr EnhancedInputSubsystem; // 0x128(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarInputActionRichTextBlockDecorator");
			return ret;
		}
	};


	// Class DelMarUI.DelMarListView
	// Inherited from UCommonListView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0xB50 - 0xB30)
	class UDelMarListView : public UCommonListView	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xB30(0x10) UNKNOWN PROPERTY
		bool bTreatNavigationAsScrolling; // 0xB40(0x1)
		unsigned char UnknownData03_7[0xF]; // 0xB41(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarListView");
			return ret;
		}
	};


	// Class DelMarUI.DelMarListViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UDelMarListViewModel : public UMVVMViewModelBase	
	{
	public:
		TArray Elements; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarListViewModel");
			return ret;
		}

		TArray GetElements(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCE620
		UMVVMViewModelBase GetElementAt(int32_t InIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCE540
	};


	// Class DelMarUI.DelMarViewModelBase
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x0 (0x68 - 0x68)
	class UDelMarViewModelBase : public UMVVMViewModelBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarViewModelBase");
			return ret;
		}

		ULocalPlayer TryGetOwningLocalPlayer(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140B8450
	};


	// Class DelMarUI.DelMarMatchEventViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UDelMarMatchEventViewModel : public UDelMarViewModelBase	
	{
	public:
		FMulticastInlineDelegate OnMatchEventOccured; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarMatchEventViewModel");
			return ret;
		}

		void OnMatchEventOccured__DelegateSignature(AFortPlayerState PlayerState, FGameplayTag EventTag, FString Context); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B8530
	};


	// Class DelMarUI.DelMarPlayerIndicatorsContainer
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x4B0 - 0x358)
	class UDelMarPlayerIndicatorsContainer : public UDelMarUserWidget	
	{
	public:
		UCanvasPanel IndicatorCanvas; // 0x358(0x8)
		UClass IndicatorWidgetClass; // 0x360(0x8)
		FVector IndicatorOffset; // 0x368(0x18)
		float RearVerticalHintThreshold; // 0x380(0x4)
		float RearIndicatorMaxDistance; // 0x384(0x4)
		float RearIndicatorMinDistance; // 0x388(0x4)
		float RearIndicatorRangeWidth; // 0x38C(0x4)
		float RearIndicatorRangeDegree; // 0x390(0x4)
		float ForwardIndicatorMaxDistance; // 0x394(0x4)
		FAnchors IndicatorAnchors; // 0x398(0x20)
		FVector2D IndicatorAlignment; // 0x3B8(0x10)
		FVector2D RearIndicatorSize; // 0x3C8(0x10)
		UCurveFloat RearDistanceScaleCurve; // 0x3D8(0x8)
		UCurveFloat RearDistanceOpacityCurve; // 0x3E0(0x8)
		UCurveFloat ForwardDistanceScaleCurve; // 0x3E8(0x8)
		UCurveFloat ForwardDistanceOpacityCurve; // 0x3F0(0x8)
		int32_t MaxRearIndicators; // 0x3F8(0x4)
		int32_t MaxForwardIndicators; // 0x3FC(0x4)
		TWeakObjectPtr VehicleManager; // 0x400(0x8)
		TWeakObjectPtr ViewingVehicle; // 0x408(0x8)
		TWeakObjectPtr ViewingPlayerState; // 0x410(0x8)
		TArray IndicatorsData; // 0x418(0x10)
		TMap IndicatorWidgets; // 0x428(0x50)
		TArray IndicatorPool; // 0x478(0x10)
		TWeakObjectPtr PositionalTrackerComponent; // 0x488(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x490(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPlayerIndicatorsContainer");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController InController, AActor OldViewTarget, AActor NewViewTarget); // Flags: Final|Native|Protected 0x7FF414DCE8C0
		void HandleRacePlayersChanged(TMap& RacePlayers); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414DCE7E0
		void HandleIconOnlySettingChanged(bool bUseIconOnly); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCE700
	};


	// Class DelMarUI.DelMarPlayerIndicatorWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x310 - 0x2B8)
	class UDelMarPlayerIndicatorWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		USizeBox AvatarSizeBox; // 0x2C0(0x8)
		UFortLazyImage AvatarLazyImage; // 0x2C8(0x8)
		USizeBox PlayerNameSizeBox; // 0x2D0(0x8)
		UImage UpArrowImage; // 0x2D8(0x8)
		UImage DownArrowImage; // 0x2E0(0x8)
		UOverlay BackgroundOverlay; // 0x2E8(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x2F0(0x4) UNKNOWN PROPERTY
		float BehindAvatarSizeBoxWidth; // 0x2F4(0x4)
		float AheadAvatarSizeBoxWidth; // 0x2F8(0x4)
		bool bBehindAvatarImageIsExpanded; // 0x2FC(0x1)
		bool bAheadAvatarImageIsExpanded; // 0x2FD(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x2FE(0x2) UNKNOWN PROPERTY
		float BehindPlayerNameSizeBoxMaxWidth; // 0x300(0x4)
		float AheadPlayerNameSizeBoxMaxWidth; // 0x304(0x4)
		float BehindBackgroundOverlaySlotPadding; // 0x308(0x4)
		float AheadBackgroundOverlaySlotPadding; // 0x30C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPlayerIndicatorWidget");
			return ret;
		}

		void BP_UpdateIndicator(float Scale, float Opacity, bool bRearIndicator, EDelMarRearAlertVerticalHint VerticalHint); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414DCEB60
		void BP_SetViewModel(UDelMarPlayerViewModel ViewModel); // Flags: Event|Public|BlueprintEvent 0x7FF414DCEA80
		void BP_HideIndicator(); // Flags: Event|Public|BlueprintEvent 0x7FF414DCE9A0
	};


	// Class DelMarUI.DelMarExpandableHudWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x410 - 0x358)
	class UDelMarExpandableHudWidget : public UDelMarUserWidget	
	{
	public:
		UImage NavigateEntriesBindingImage; // 0x358(0x8)
		unsigned char UnknownData03_6[0x18]; // 0x360(0x18) UNKNOWN PROPERTY
		UClass ExpandableHudWidgetEntryClass; // 0x378(0x8)
		int32_t NumDesignerPreviewEntries; // 0x380(0x4)
		float EntrySpacing; // 0x384(0x4)
		bool bExpanded; // 0x388(0x1)
		bool bNavigationEnabled; // 0x389(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x38A(0x6) UNKNOWN PROPERTY
		UTexture2D NavigateEntriesGamepadTexture; // 0x390(0x8)
		UTexture2D NavigateEntriesPCTexture; // 0x398(0x8)
		UDelMarPlayerPreferencesComponent PlayerPreferences; // 0x3A0(0x8)
		UOverlay EntryOverlay; // 0x3A8(0x8)
		URetainerBox EdgeFadeRetainerBox; // 0x3B0(0x8)
		USizeBox ContentSizeBox; // 0x3B8(0x8)
		FMulticastInlineDelegate OnExpandToggled; // 0x3C0(0x10)
		FMulticastInlineDelegate OnNavigationEnabledChanged; // 0x3D0(0x10)
		FMulticastInlineDelegate OnExpandableChanged; // 0x3E0(0x10)
		TArray DisplayedHudWidgetEntries; // 0x3F0(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x400(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarExpandableHudWidget");
			return ret;
		}

		void SetTargetInterpTransformY(float InTargetInterpTransformY); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCEEE0
		void HandleToggleSettingChanged(bool bUseToggle); // Flags: Final|Native|Protected 0x7FF414DCEE00
		void HandleToggleAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCED20
		void BP_HandlePlayerPreferencesAdded(UDelMarPlayerPreferencesComponent InPlayerPreferences); // Flags: Event|Protected|BlueprintEvent 0x7FF414DCEC40
	};


	// Class DelMarUI.DelMarPositionalTrackerWidget
	// Inherited from UDelMarExpandableHudWidget -> UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x430 - 0x410)
	class UDelMarPositionalTrackerWidget : public UDelMarExpandableHudWidget	
	{
	public:
		int32_t MinPlayersToStart; // 0x410(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x414(0x4) UNKNOWN PROPERTY
		TArray DisplayedPlayers; // 0x418(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x428(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPositionalTrackerWidget");
			return ret;
		}

		void UpdatePlayerPositions(TArray InPlayers); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCF0A0
		void OnInputMethodChanged(ECommonInputType InputMethod); // Flags: Event|Protected|BlueprintEvent 0x7FF414DCEFC0
	};


	// Class DelMarUI.DelMarScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x478 - 0x3F8)
	class UDelMarScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x58]; // 0x3F8(0x58) UNKNOWN PROPERTY
		EWidgetTransitionerInitialStatus InitialTransitionStatus; // 0x450(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x451(0x7) UNKNOWN PROPERTY
		UWidgetTransitioner WidgetTransitioner; // 0x458(0x8)
		bool bActivateOnShow; // 0x460(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x461(0x7) UNKNOWN PROPERTY
		UWidgetAnimation NormalTransitionIn; // 0x468(0x8)
		UWidgetAnimation NormalTransitionOut; // 0x470(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarScreenBase");
			return ret;
		}

		void SetDisplayEnabled(bool bEnabled, bool bSkipAnimation); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCF6C0
		bool IsDisplayEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DCF5E0
		void HandleWidgetTransitionerStatusChanged(UWidgetTransitioner InTransitioner, EWidgetTransitionerStatus InStatus); // Flags: Final|Native|Protected 0x7FF414DCF500
		UWidgetTransitioner GetWidgetTransitioner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DCF420
		UUIStateChartManager GetUIStateChartManager(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCF340
		void BP_Show(bool bSkipAnimation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCF260
		void BP_Hide(bool bSkipAnimation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCF180
	};


	// Class DelMarUI.DelMarPostRaceLeaderboard
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x490 - 0x478)
	class UDelMarPostRaceLeaderboard : public UDelMarScreenBase	
	{
	public:
		FDataTableRowHandle FilterDataTableRow; // 0x478(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x488(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPostRaceLeaderboard");
			return ret;
		}

		void BP_UpdateLeaderboardFilter(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DCF7A0
	};


	// Class DelMarUI.DelMarPostRaceScreen
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x508 - 0x478)
	class UDelMarPostRaceScreen : public UDelMarScreenBase	
	{
	public:
		FDataTableRowHandle TabNavLeftDataTableRow; // 0x478(0x10)
		FDataTableRowHandle TabNavRightDataTableRow; // 0x488(0x10)
		FDataTableRowHandle ReadyUpDataTableRow; // 0x498(0x10)
		FDataTableRowHandle SpectateDataTableRow; // 0x4A8(0x10)
		FDataTableRowHandle ResetRunDataTableRow; // 0x4B8(0x10)
		FDataTableRowHandle ReturnToLobbyDataTableRow; // 0x4C8(0x10)
		UCommonButtonGroupBase ButtonGroup_PostMatchNavigation; // 0x4D8(0x8)
		TWeakObjectPtr CachedRaceManager; // 0x4E0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x4E8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPostRaceScreen");
			return ret;
		}

		void UpdateVote(EDelMarPostRaceVote NewVote); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCFB20
		void ResetRun(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCFA40
		void RequestCountdown(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DCF960
		void BP_OnReadyUpChanged(bool bReady); // Flags: Event|Protected|BlueprintEvent 0x7FF414DCF880
	};


	// Class DelMarUI.DelMarPostRaceVoteWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x358 - 0x358)
	class UDelMarPostRaceVoteWidget : public UDelMarUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPostRaceVoteWidget");
			return ret;
		}

		void UpdateVote(EDelMarPostRaceVote NewVote); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DCFCE0
		void BP_OnPostRaceVoteChanged(EDelMarPostRaceVote Vote); // Flags: Event|Public|BlueprintEvent 0x7FF414DCFC00
	};


	// Class DelMarUI.DelMarQuestScreenContainer
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x368 - 0x358)
	class UDelMarQuestScreenContainer : public UDelMarUserWidget	
	{
	public:
		FName QuestTabID; // 0x358(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x35C(0x4) UNKNOWN PROPERTY
		UAthenaMapScreenContainer AthenaScreenContainer; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarQuestScreenContainer");
			return ret;
		}

		void HandleToggleQuestList(); // Flags: Final|Native|Protected 0x7FF414DCFF80
		void HandleMapPanelExitButtonPressed(); // Flags: Final|Native|Protected 0x7FF414DCFEA0
		void HandleAthenaScreenDeactivated(); // Flags: Final|Native|Protected 0x7FF414DCFDC0
	};


	// Class DelMarUI.DelMarRichTextInputSwitcher
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x360 - 0x2B8)
	class UDelMarRichTextInputSwitcher : public UUserWidget	
	{
	public:
		bool bUseFormattedText; // 0x2B8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2B9(0x7) UNKNOWN PROPERTY
		FText TextFormat; // 0x2C0(0x10)
		TMap Args; // 0x2D0(0x50)
		FText TextKBM; // 0x320(0x10)
		FText TextGamepad; // 0x330(0x10)
		FText TextTouch; // 0x340(0x10)
		UCommonRichTextBlock Widget_RichText; // 0x350(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x358(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRichTextInputSwitcher");
			return ret;
		}

		void SetInputText(FText InTextKBM, FText InTextGamepad, FText InTextTouch); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD0060
	};


	// Class DelMarUI.DelMarSelectionListViewModel
	// Inherited from UDelMarListViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UDelMarSelectionListViewModel : public UDelMarListViewModel	
	{
	public:
		int32_t SelectedIndex; // 0x78(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x7C(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarSelectionListViewModel");
			return ret;
		}

		void SetSelectedIndex(int32_t InIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD0760
		void SetSelectedElement(UMVVMViewModelBase InSelectedElement); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD0680
		void SelectPreviousElement(bool bAllowWrap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD05A0
		void SelectNextElement(bool bAllowWrap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD04C0
		UMVVMViewModelBase SelectedElement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD03E0
		bool HasSelection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD0300
		int32_t GetSelectedIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD0220
		void ClearSelection(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD0140
	};


	// Class DelMarUI.DelMarTouchWidgetBase
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x380 - 0x358)
	class UDelMarTouchWidgetBase : public UDelMarUserWidget	
	{
	public:
		TArray InputActionsData; // 0x358(0x10)
		bool bTrackInputPastBounds; // 0x368(0x1)
		bool bTrackInputFromEnter; // 0x369(0x1)
		bool bIsInjectingInput; // 0x36A(0x1)
		EDelMarTouchInputTrackingState CurrentInputTrackingState; // 0x36B(0x1)
		ECommonInputMode RequiredInputMode; // 0x36C(0x1)
		unsigned char UnknownData01_7[0x13]; // 0x36D(0x13) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTouchWidgetBase");
			return ret;
		}

		bool ShouldTouchJoystickIgnoreContentScaleFactor(); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414DD12C0
		void OnTrackedInputUpdated(FPointerEvent& InGestureEvent); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD11E0
		void OnTrackedInputStarted(FPointerEvent& InGestureEvent); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD1100
		void OnTrackedInputEnded(FPointerEvent& InGestureEvent, bool bCancelled); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD1020
		void OnInputInjectionStarted(FPointerEvent& InGestureEvent, EDelMarInputInjectionState InInjectedState); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD0F40
		void OnInputInjectionEnded(FPointerEvent& InGestureEvent, EDelMarInputInjectionState InInjectedState); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD0E60
		void OnActiveInputModeChanged(ECommonInputMode NewInputMode); // Flags: Final|Native|Private 0x7FF414DD0D80
		bool IsGestureInsideHitbox(FPointerEvent& InGestureEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414DD0CA0
		float GetTouchJoystickInputValueMultiplier(); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414DD0BC0
		int32_t GetPixelsPerInch(); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414DD0AE0
		float GetMobileContentScaleFactor(); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure 0x7FF414DD0A00
		FGeometry GetHitboxGeometry(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DD0920
		void CancelInputTracking(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD0840
	};


	// Class DelMarUI.DelMarTouchActionButton
	// Inherited from UDelMarTouchWidgetBase -> UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x3F8 - 0x380)
	class UDelMarTouchActionButton : public UDelMarTouchWidgetBase	
	{
	public:
		EDelMarTouchActionButtonState State; // 0x380(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x381(0x7) UNKNOWN PROPERTY
		TMap ButtonStateData; // 0x388(0x50)
		bool bHighlightActive; // 0x3D8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x3D9(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHighlightChanged; // 0x3E0(0x10)
		bool bIsUpdatingState; // 0x3F0(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x3F1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTouchActionButton");
			return ret;
		}

		void SetIconBrush(FSlateBrush& Brush); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414DD18E0
		void SetHighlightActive(bool bValue); // Flags: BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DD1800
		bool SetButtonState(EDelMarTouchActionButtonState NewState); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414DD1720
		void SetBackgroundBrush(FSlateBrush& Brush); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414DD1640
		EDelMarTouchActionButtonState GetStateOnStopInputTracking(bool bInputCancelled); // Flags: BlueprintCosmetic|Native|Event|Protected|BlueprintEvent|Const 0x7FF414DD1560
		EDelMarTouchActionButtonState GetState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD1480
		bool CanSetState(EDelMarTouchActionButtonState NewState); // Flags: BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 0x7FF414DD13A0
	};


	// Class DelMarUI.DelMarTouchRegion
	// Inherited from UDelMarTouchWidgetBase -> UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x390 - 0x380)
	class UDelMarTouchRegion : public UDelMarTouchWidgetBase	
	{
	public:
		TArray TouchActionButtons; // 0x380(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTouchRegion");
			return ret;
		}

		void SetHighlightForInputAction(UInputAction InputAction); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414DD1AA0
		UDelMarTouchActionButton FindButtonByInputAction(UInputAction InputAction); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD19C0
	};


	// Class DelMarUI.DelMarUICheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UDelMarUICheatManager : public UChildCheatManager	
	{
	public:
		UDynamicUIScene DriverCameraHiddenScene; // 0x28(0x8)
		UDynamicUIScene PlayerIndicatorHiddenScene; // 0x30(0x8)
		UDynamicUIScene PointsDebugWidgetVisibleScene; // 0x38(0x8)
		UDynamicUIScene RubberbandingWidgetVisibleScene; // 0x40(0x8)
		UDynamicUIScene StaticVehicleMeterHiddenScene; // 0x48(0x8)
		UDynamicUIScene VehicleDebugVisibleScene; // 0x50(0x8)
		UDynamicUIScene VehicleHealthDebugVisibleScene; // 0x58(0x8)
		UDynamicUIScene CheckpointDebugWidgetScene; // 0x60(0x8)
		UDynamicUIScene MapNameDebugWidgetScene; // 0x68(0x8)
		UDynamicUIScene GameplayTrackList; // 0x70(0x8)
		bool bAttachedWidgetEnabled; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarUICheatManager");
			return ret;
		}

		void OnAddedToCheatManagerNative(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD2B40
		void DelMarVehicleHealthDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected 0x7FF414DD2A60
		void DelMarVehicleDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected 0x7FF414DD2980
		void DelMarUseToggleForExpandableHudWidget(bool bUseToggle); // Flags: Final|Exec|Native|Protected 0x7FF414DD28A0
		void DelMarUISetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected 0x7FF414DD27C0
		void DelMarTouchHUD(FString TouchHUDType); // Flags: Final|BlueprintCosmetic|Exec|Native|Protected 0x7FF414DD26E0
		void DelMarSetHint(FText HintText, float RemoveAfterDelay); // Flags: Final|Exec|Native|Protected 0x7FF414DD2600
		void DelMarRubberbandingWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected 0x7FF414DD2520
		void DelMarRequestDialogByTag(FGameplayTag tag); // Flags: Final|Exec|Native|Protected 0x7FF414DD2440
		void DelMarPointsDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected 0x7FF414DD2360
		void DelMarPlayerIndicatorsVisible(bool bVisible); // Flags: Final|Exec|Native|Protected 0x7FF414DD2280
		void DelMarOpenTrackList(); // Flags: Final|Exec|Native|Protected 0x7FF414DD21A0
		void DelMarMapNameDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected 0x7FF414DD20C0
		void DelMarDriverCameraSetReactiveType(int32_t Type); // Flags: Final|Exec|Native|Protected 0x7FF414DD1FE0
		void DelMarDriverCameraSetHidden(bool bHidden); // Flags: Final|Exec|Native|Protected 0x7FF414DD1F00
		void DelMarDismissDialog(); // Flags: Final|Exec|Native|Protected 0x7FF414DD1E20
		void DelMarCloseTrackList(); // Flags: Final|Exec|Native|Protected 0x7FF414DD1D40
		void DelMarCheckpointDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected 0x7FF414DD1C60
		void DelMarAttachedWidgetSetEnabled(bool bEnabled); // Flags: Final|Exec|Native|Protected 0x7FF414DD1B80
	};


	// Class DelMarUI.UIAnimationController
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UUIAnimationController : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.UIAnimationController");
			return ret;
		}

		void SwitchPlayDirection(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD3400
		void Stop(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD3320
		void Rewind(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD3240
		void PlayForward(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD3160
		void PlayBackward(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD3080
		void JumpToEnd(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD2FA0
		void JumpToBeginning(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD2EC0
		bool IsPlaying(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD2DE0
		float GetDuration(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD2D00
		void FastForward(); // Flags: Native|Public|BlueprintCallable 0x7FF414DD2C20
	};


	// Class DelMarUI.UITimelineAnimationController
	// Inherited from UUIAnimationController -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UUITimelineAnimationController : public UUIAnimationController	
	{
	public:
		UUserWidget WidgetTarget; // 0x38(0x8)
		UWidgetAnimation Animation; // 0x40(0x8)
		UUMGSequencePlayer ActivePlayer; // 0x48(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.UITimelineAnimationController");
			return ret;
		}

		UUITimelineAnimationController CreateInstance(UUserWidget WidgetTarget, UWidgetAnimation Animation); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414DD34E0
	};


	// Class DelMarUI.UIAnimationControllerEntry
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UUIAnimationControllerEntry : public UObject	
	{
	public:
		UUIAnimationController AnimationController; // 0x28(0x8)
		bool bIsInverted; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.UIAnimationControllerEntry");
			return ret;
		}
	};


	// Class DelMarUI.WidgetTransitioner
	// Inherited from UObject
	// Size: 0xE0 (0x108 - 0x28)
	class UWidgetTransitioner : public UObject	
	{
	public:
		FMulticastInlineDelegate OnTransitionerStatusChanged; // 0x28(0x10)
		UWidget TargetWidget; // 0x38(0x8)
		ESlateVisibility HiddenVisibility; // 0x40(0x1)
		ESlateVisibility ShownVisibility; // 0x41(0x1)
		EWidgetTransitionerStatus TransitionerStatus; // 0x42(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
		UUIAnimationControllerEntry NormalTransitionIn; // 0x48(0x8)
		UUIAnimationControllerEntry NormalTransitionOut; // 0x50(0x8)
		TMap HintedTransitionsIn; // 0x58(0x50)
		TMap HintedTransitionsOut; // 0xA8(0x50)
		UUIAnimationControllerEntry ActiveEntry; // 0xF8(0x8)
		bool bAlwaysReverseInterruptedAnimations; // 0x100(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x101(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.WidgetTransitioner");
			return ret;
		}

		void WidgetTransitionerStatusChange__DelegateSignature(UWidgetTransitioner Transitioner, EWidgetTransitionerStatus Status); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B9160
		void SetNormalTransitionPair(UUIAnimationController InAnimation, bool bIsTransitionIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B9080
		void SetNormalTransitionOut(UUIAnimationController InAnimationOut, bool bInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B8FA0
		void SetNormalTransitionIn(UUIAnimationController InAnimationIn, bool bInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B8EC0
		bool IsHidden(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B8DE0
		EWidgetTransitionerStatus GetTransitionerStatus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B8C98
		UWidgetTransitioner CreateInstance(UWidget TargetWidget, EWidgetTransitionerInitialStatus InitialStatus, ESlateVisibility HiddenVisibility, ESlateVisibility ShownVisibility, bool AlwaysReverseInterruptedAnimations); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4140B8BB8
		void BP_Show(bool bSkipAnimation, FGameplayTagContainer AnimationHints); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B8AD8
		UWidgetTransitioner BP_Initialize(UWidget TargetWidget, EWidgetTransitionerInitialStatus InitialStatus, ESlateVisibility HiddenVisibility, ESlateVisibility ShownVisibility, bool AlwaysReverseInterruptedAnimations); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B8990
		void BP_Hide(bool bSkipAnimation, FGameplayTagContainer AnimationHints); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B88B0
		void AddHintedTransitionPair(FGameplayTag InAnimationHint, UUIAnimationController InAnimation, bool bIsTransitionIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B87D0
		void AddHintedTransitionOut(FGameplayTag InAnimationHint, UUIAnimationController InAnimationOut, bool bInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B86F0
		void AddHintedTransitionIn(FGameplayTag InAnimationHint, UUIAnimationController InAnimationIn, bool bInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B8610
	};


	// Class DelMarUI.DelMarActionWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x2B0 (0x410 - 0x160)
	class UDelMarActionWidget : public UWidget	
	{
	public:
		FMulticastInlineDelegate OnInputMethodChanged; // 0x160(0x10)
		FSlateBrush ProgressMaterialBrush; // 0x170(0xB0)
		FName ProgressMaterialParam; // 0x220(0x4)
		unsigned char UnknownData03_6[0xC]; // 0x224(0xC) UNKNOWN PROPERTY
		FSlateBrush IconRimBrush; // 0x230(0xB0)
		TArray InputActions; // 0x2E0(0x10)
		UInputAction EnhancedInputAction; // 0x2F0(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		UMaterialInstanceDynamic ProgressDynamicMaterial; // 0x300(0x8)
		unsigned char UnknownData05_7[0x108]; // 0x308(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarActionWidget");
			return ret;
		}

		void UpdateActionWidget(); // Flags: Final|Native|Protected 0x7FF4140B8370
		void SetInputActions(TArray NewInputActions); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B8290
		void SetInputAction(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B81B0
		void SetIconRimBrush(FSlateBrush InIconRimBrush); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B80D0
		void SetEnhancedInputAction(UInputAction InInputAction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B7FF0
		void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B7F10
		bool IsHeldAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B7E30
		FSlateBrush GetIcon(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B7D50
		FText GetDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B7C70
	};


	// Class DelMarUI.DelMarDialogBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x410 - 0x3F8)
	class UDelMarDialogBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDialogBase");
			return ret;
		}

		void DismissDialog(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD35C0
	};


	// Class DelMarUI.DelMarDialogHelper
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UDelMarDialogHelper : public UObject	
	{
	public:
		TMap DialogMapping; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDialogHelper");
			return ret;
		}
	};


	// Class DelMarUI.DelMarInputConfigWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x400 - 0x3F8)
	class UDelMarInputConfigWidgetBase : public UCommonActivatableWidget	
	{
	public:
		FUIInputConfig DesiredInputConfig; // 0x3F8(0x6)
		bool bFlushPlayerInputWhenActivating; // 0x3FE(0x1)
		bool bFlushPlayerInputWhenDeactivating; // 0x3FF(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarInputConfigWidgetBase");
			return ret;
		}
	};


	// Class DelMarUI.DelMarLoadingScreenHelper
	// Inherited from UObject
	// Size: 0x100 (0x128 - 0x28)
	class UDelMarLoadingScreenHelper : public UObject	
	{
	public:
		FVector2D BackgroundDesiredSize; // 0x28(0x10)
		TWeakObjectPtr CustomLoadingWidget; // 0x38(0x20)
		FZoneLoadingScreenConfig ZoneConfig; // 0x58(0xD0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarLoadingScreenHelper");
			return ret;
		}

		void PrepareDelMarLoadingScreen(UObject WorldContextObject); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414DD36A0
	};


	// Class DelMarUI.DelMarUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class ADelMarUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		UClass DialogHelperClass; // 0x2B0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		UDelMarDialogHelper DialogHelper; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarUIDirector");
			return ret;
		}

		void SetLoadingScreenVisibiliy(bool bVisible); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD3780
	};


	// Class DelMarUI.DelMarUIGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarUIGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarUIGlobals");
			return ret;
		}
	};


	// Class DelMarUI.DelMarAttachedWidgetActor
	// Inherited from AActor -> UObject
	// Size: 0x58 (0x2E8 - 0x290)
	class ADelMarAttachedWidgetActor : public AActor	
	{
	public:
		float DriftFollowDampening; // 0x290(0x4)
		float WallFollowDampening; // 0x294(0x4)
		float RotateDampeningRate; // 0x298(0x4)
		TWeakObjectPtr ViewPlayerState; // 0x29C(0x8)
		TWeakObjectPtr AttachedTarget; // 0x2A4(0x8)
		TWeakObjectPtr AttachedVehicle; // 0x2AC(0x8)
		TWeakObjectPtr CameraManager; // 0x2B4(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY
		USceneComponent AttachmentBaseComponent; // 0x2C0(0x8)
		UDelMarWidgetComponent SpeedometerWidget; // 0x2C8(0x8)
		UDelMarWidgetComponent DriftBoostWidget; // 0x2D0(0x8)
		UDelMarWidgetComponent UnderthrustWidget; // 0x2D8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarAttachedWidgetActor");
			return ret;
		}
	};


	// Class DelMarUI.DelMarAttachedWidgetComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UDelMarAttachedWidgetComponent : public UControllerComponent	
	{
	public:
		TArray AttachedWidgetActorsClass; // 0xA0(0x10)
		TArray AttachedWidgetActors; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarAttachedWidgetComponent");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController InController, AActor OldViewTarget, AActor NewViewTarget); // Flags: Final|Native|Protected 0x7FF414DD3860
	};


	// Class DelMarUI.DelMarWidgetComponent
	// Inherited from UWidgetComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0x660 - 0x638)
	class UDelMarWidgetComponent : public UWidgetComponent	
	{
	public:
		FVector2D LeftTopPadding; // 0x638(0x10)
		FVector2D RightBottomPadding; // 0x648(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x658(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarWidgetComponent");
			return ret;
		}
	};


	// Class DelMarUI.DelMarDebugCountdown
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x4B8 - 0x478)
	class UDelMarDebugCountdown : public UDelMarScreenBase	
	{
	public:
		UCommonRichTextBlock CountdownText; // 0x478(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x480(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugCountdown");
			return ret;
		}
	};


	// Class DelMarUI.DelMarStartlineCountdownWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x398 - 0x358)
	class UDelMarStartlineCountdownWidget : public UDelMarUserWidget	
	{
	public:
		TWeakObjectPtr CachedDelMarVehicle; // 0x358(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x360(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarStartlineCountdownWidget");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController PC, AActor Old, AActor NewViewTarget); // Flags: Final|Native|Protected 0x7FF414DD3F60
		int32_t GetNumTotalIntervals(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DD3E80
		int32_t GetNumActiveIntervals(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DD3DA0
		void BP_OnStartlineBoostFailed(); // Flags: Event|Public|BlueprintEvent 0x7FF414DD3CC0
		void BP_OnStartlineBoostActivated(float PercentageMaxBonusSpeedEarned); // Flags: Event|Public|BlueprintEvent 0x7FF414DD3BE0
		void BP_OnRaceStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF414DD3B00
		void BP_OnCountdownStarted(int32_t TotalIntervals); // Flags: Event|Public|BlueprintEvent 0x7FF414DD3A20
		void BP_OnActiveIntervalsChanged(int32_t NumActiveIntervals); // Flags: Event|Public|BlueprintEvent 0x7FF414DD3940
	};


	// Class DelMarUI.DelMarCheckpointTrackerEntryWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x378 - 0x358)
	class UDelMarCheckpointTrackerEntryWidget : public UDelMarUserWidget	
	{
	public:
		UWidgetAnimation AnimTransitionIn; // 0x358(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x360(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCheckpointTrackerEntryWidget");
			return ret;
		}

		void BP_OnDisplayedCheckpointChanged(FDelMarSectionData& InSectionData, bool bNewEntry); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414DD4040
	};


	// Class DelMarUI.DelMarCheckpointTrackerWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x3A0 - 0x358)
	class UDelMarCheckpointTrackerWidget : public UDelMarUserWidget	
	{
	public:
		UClass CheckpointTrackerEntryClass; // 0x358(0x8)
		int32_t NumDesignerPreviewEntries; // 0x360(0x4)
		float EntrySpacing; // 0x364(0x4)
		int32_t MaxEntriesToDisplay; // 0x368(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x36C(0x4) UNKNOWN PROPERTY
		UOverlay CheckpointEntryOverlay; // 0x370(0x8)
		URetainerBox EdgeFadeRetainerBox; // 0x378(0x8)
		USizeBox TrackerSizeBox; // 0x380(0x8)
		TArray DisplayedCheckpointTrackerEntries; // 0x388(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x398(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCheckpointTrackerWidget");
			return ret;
		}

		void UpdateCheckpoints(TArray InCheckpoints); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD4120
	};


	// Class DelMarUI.DelMarBladeMenuContainer
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x488 - 0x478)
	class UDelMarBladeMenuContainer : public UDelMarScreenBase	
	{
	public:
		UFortDualBladeMenu DualBladeMenu; // 0x478(0x8)
		FGameplayTag CloseBladeMenuTriggerTag; // 0x480(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x484(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarBladeMenuContainer");
			return ret;
		}
	};


	// Class DelMarUI.DelMarCheckpointTimer
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x4A8 - 0x478)
	class UDelMarCheckpointTimer : public UDelMarScreenBase	
	{
	public:
		UCommonTextBlock Text_LapCount; // 0x478(0x8)
		UCommonTextBlock Text_CheckpointIndex; // 0x480(0x8)
		UCommonTextBlock Text_Timestamp; // 0x488(0x8)
		UCommonTextBlock Text_LapTimestamp; // 0x490(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x498(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCheckpointTimer");
			return ret;
		}
	};


	// Class DelMarUI.DelMarDebugPointWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x3B8 - 0x358)
	class UDelMarDebugPointWidget : public UDelMarUserWidget	
	{
	public:
		FString PlayerPointsString; // 0x358(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x368(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugPointWidget");
			return ret;
		}

		void BP_OnPointsUpdated(); // Flags: Event|Public|BlueprintEvent 0x7FF414DD4200
	};


	// Class DelMarUI.DelMarDebugRubberbandingWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x3A0 - 0x358)
	class UDelMarDebugRubberbandingWidget : public UDelMarUserWidget	
	{
	public:
		bool bRubberbandingEnabled; // 0x358(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x359(0x3) UNKNOWN PROPERTY
		float PackDistance; // 0x35C(0x4)
		float MinPackDistance; // 0x360(0x4)
		float MaxPackDistance; // 0x364(0x4)
		float DistanceToPack; // 0x368(0x4)
		float MinDistanceFromPack; // 0x36C(0x4)
		float MaxDistanceFromPack; // 0x370(0x4)
		float MinSpeed; // 0x374(0x4)
		float StableSpeed; // 0x378(0x4)
		float AppliedBonusSpeed; // 0x37C(0x4)
		float DistanceToPackRatio; // 0x380(0x4)
		float MaxBonusSpeedAtPosition; // 0x384(0x4)
		float MaxSpeedAtPosition; // 0x388(0x4)
		float MaxAllowedBonusSpeed; // 0x38C(0x4)
		float BonusSpeedGainedPerSecond; // 0x390(0x4)
		float BonusSpeedLostPerSecond; // 0x394(0x4)
		int32_t MMRUsed; // 0x398(0x4)
		float MaxBonusSpeedScalar; // 0x39C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugRubberbandingWidget");
			return ret;
		}

		void BP_OnRubberbandingUpdated(); // Flags: Event|Public|BlueprintEvent 0x7FF414DD42E0
	};


	// Class DelMarUI.DelMarDebugVehicleHealthWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x368 - 0x358)
	class UDelMarDebugVehicleHealthWidget : public UDelMarUserWidget	
	{
	public:
		float CurrentHealth; // 0x358(0x4)
		float MaxHealth; // 0x35C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x360(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugVehicleHealthWidget");
			return ret;
		}

		void HandleVehicleHealthChanged(); // Flags: Final|Native|Protected 0x7FF414DD44A0
		void BP_OnHealthUpdated(); // Flags: Event|Public|BlueprintEvent 0x7FF414DD43C0
	};


	// Class DelMarUI.DelMarDebugVehicleWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x418 - 0x358)
	class UDelMarDebugVehicleWidget : public UDelMarUserWidget	
	{
	public:
		float BaseTargetSpeed; // 0x358(0x4)
		float FinalTargetSpeed; // 0x35C(0x4)
		float OversteerPercentage; // 0x360(0x4)
		bool bHasValidDraftingTarget; // 0x364(0x1)
		EDelmarDraftingState DraftingState; // 0x365(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x366(0x2) UNKNOWN PROPERTY
		float DraftingBonusSpeed; // 0x368(0x4)
		float DraftingTargetDegrees; // 0x36C(0x4)
		float DraftingCurrentBonusSpeedPercentage; // 0x370(0x4)
		float DraftingMaxBonusSpeedPercentage; // 0x374(0x4)
		float SecondsInDrift; // 0x378(0x4)
		float AccumulatedWaitingPeriodSeconds; // 0x37C(0x4)
		float DriftBoostBonusSpeed; // 0x380(0x4)
		float DriftBoostDuration; // 0x384(0x4)
		float DriftBoostDurationSecondsLeft; // 0x388(0x4)
		float PotentialDriftBoostBonusSpeed; // 0x38C(0x4)
		float PotentialDriftBoostDuration; // 0x390(0x4)
		float QueuedDriftBoostBonusSpeed; // 0x394(0x4)
		float StartlineBonusSpeed; // 0x398(0x4)
		float TurboBonusSpeed; // 0x39C(0x4)
		float TurboZoneBonusSpeed; // 0x3A0(0x4)
		float TurboSecondsRemaining; // 0x3A4(0x4)
		float TurboCharges; // 0x3A8(0x4)
		float WorldBonusSpeed; // 0x3AC(0x4)
		float TotalBonusSpeed; // 0x3B0(0x4)
		FDelMarTerrainData TerrainData; // 0x3B4(0x18)
		int32_t NumWheelWorldContacts; // 0x3CC(0x4)
		FVector AverageWheelWorldContactNormal; // 0x3D0(0x18)
		float MinimumLandingSpeed; // 0x3E8(0x4)
		float BaseForwardSpeed; // 0x3EC(0x4)
		float StableSpeed; // 0x3F0(0x4)
		float UpwardSpeed; // 0x3F4(0x4)
		float VehicleSpeed; // 0x3F8(0x4)
		bool bInvertedSteeringActive; // 0x3FC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x3FD(0x3) UNKNOWN PROPERTY
		float MaxForwardSpeed; // 0x400(0x4)
		float SecondsSinceTerrainPenalty; // 0x404(0x4)
		int32_t KickflipActivationCharges; // 0x408(0x4)
		bool bStrafeDisabled; // 0x40C(0x1)
		bool bCanActivateStrafe; // 0x40D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x40E(0x2) UNKNOWN PROPERTY
		float StrafeCooldownSeconds; // 0x410(0x4)
		float StrafeCooldownPercentage; // 0x414(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugVehicleWidget");
			return ret;
		}

		void BP_OnVehicleUpdated(); // Flags: Event|Public|BlueprintEvent 0x7FF414DD4580
	};


	// Class DelMarUI.DelMarEmotePickerContainer
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x480 - 0x478)
	class UDelMarEmotePickerContainer : public UDelMarScreenBase	
	{
	public:
		FGameplayTag CloseEmotePickerTriggerTag; // 0x478(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x47C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarEmotePickerContainer");
			return ret;
		}

		void CloseEmotePickerContainer(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD4660
	};


	// Class DelMarUI.DelMarReadyUpWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UDelMarReadyUpWidget : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarReadyUpWidget");
			return ret;
		}

		void BP_ReadyUp(bool bReady); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD4820
		void BP_OnReadyUpChanged(bool bReady); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD4740
	};


	// Class DelMarUI.DelMarTurboBonusZoneWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x360 - 0x358)
	class UDelMarTurboBonusZoneWidget : public UDelMarUserWidget	
	{
	public:
		TWeakObjectPtr CachedDelMarVehicle; // 0x358(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTurboBonusZoneWidget");
			return ret;
		}

		void HandleTurboStateChange(EDelMarTurboZoneState NewState); // Flags: Final|Native|Protected 0x7FF414DD49E0
		void BP_OnTurboZoneStateChanged(EDelMarTurboZoneState NewState); // Flags: Event|Public|BlueprintEvent 0x7FF414DD4900
	};


	// Class DelMarUI.DelMarInteractionIndicatorContainer
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x328 - 0x320)
	class UDelMarInteractionIndicatorContainer : public UFortHUDElementWidget	
	{
	public:
		UFortActorCanvas VehicleIndicators; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarInteractionIndicatorContainer");
			return ret;
		}

		void OnTargetingChanged(bool bTargeting); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD4C80
		void OnTargetChangedNative(bool bTargeting); // Flags: Final|Native|Protected 0x7FF414DD4BA0
		void HandleIndicatorModeChanged(bool bIndicatorsEnabled); // Flags: Final|Native|Protected 0x7FF414DD4AC0
	};


	// Class DelMarUI.DelMarPositionalTrackerEntryWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x388 - 0x358)
	class UDelMarPositionalTrackerEntryWidget : public UDelMarUserWidget	
	{
	public:
		FMulticastInlineDelegate OnDisplayedPlayerSet; // 0x358(0x10)
		FMulticastInlineDelegate OnNavigationEnabledChanged; // 0x368(0x10)
		UWidgetAnimation AnimIsTargetPlayer; // 0x378(0x8)
		bool bTargetPlayer; // 0x380(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x381(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPositionalTrackerEntryWidget");
			return ret;
		}

		void SetDisplayedPlayer(UDelMarPlayerViewModel InPlayerModel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD4E40
		void RefreshPlayerInfo(bool IsTargetPlayer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD4D60
	};


	// Class DelMarUI.DelMarLoadingScreenWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F8 - 0x2E0)
	class UDelMarLoadingScreenWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		TArray LoadingScreenTips; // 0x2E8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarLoadingScreenWidget");
			return ret;
		}
	};


	// Class DelMarUI.DelMarPostRaceRankedRecap
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F8 - 0x3F8)
	class UDelMarPostRaceRankedRecap : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPostRaceRankedRecap");
			return ret;
		}

		float GetFailsafeDelayDuration(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DD4F20
	};


	// Class DelMarUI.DelMarDebugTrackEntry
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2D0 - 0x2B8)
	class UDelMarDebugTrackEntry : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		UCommonTextBlock TrackNameText; // 0x2C0(0x8)
		UDelMarLevelDataAsset LevelDataAsset; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugTrackEntry");
			return ret;
		}

		void BP_OnTrackButtonPressed(); // Flags: Native|Protected|BlueprintCallable 0x7FF414DD5000
	};


	// Class DelMarUI.DelMarDebugGameplayTrackEntry
	// Inherited from UDelMarDebugTrackEntry -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2D8 - 0x2D0)
	class UDelMarDebugGameplayTrackEntry : public UDelMarDebugTrackEntry	
	{
	public:
		UDynamicUIScene GameplayTrackListScene; // 0x2D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugGameplayTrackEntry");
			return ret;
		}
	};


	// Class DelMarUI.DelMarDebugTrackList
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x488 - 0x478)
	class UDelMarDebugTrackList : public UDelMarScreenBase	
	{
	public:
		UCommonListView TrackView; // 0x478(0x8)
		bool bOnlyReturnAllowedLevels; // 0x480(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x481(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugTrackList");
			return ret;
		}

		void BP_OnExitButtonPressed(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD50E0
	};


	// Class DelMarUI.DelMarBoundActionBar
	// Inherited from UCommonBoundActionBar -> UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x270 - 0x270)
	class UDelMarBoundActionBar : public UCommonBoundActionBar	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarBoundActionBar");
			return ret;
		}
	};


	// Class DelMarUI.DelMarBoundActionButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UDelMarBoundActionButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		FText Text; // 0x1398(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarBoundActionButton");
			return ret;
		}

		void BP_SetText(FText& ButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD5380
		void BP_OnInputActionUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD52A0
		void BP_OnActionProgress(float HoldPercentage); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD51C0
	};


	// Class DelMarUI.DelMarBladeMenuTriggerUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UDelMarBladeMenuTriggerUIStateComponent : public UUIStateComponent	
	{
	public:
		UDelMarBladeMenuTriggerUIStateComponentConfiguration Configuration; // 0x48(0x8)
		UFortHUDContext HUDContext; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponent");
			return ret;
		}

		void NativeHandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget CursorModeContentWidget); // Flags: Final|Native|Protected 0x7FF414DD5460
	};


	// Class DelMarUI.DelMarBladeMenuTriggerUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarBladeMenuTriggerUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		FGameplayTag BladeMenuTriggerTag; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class DelMarUI.DelMarEmotePickerTriggerUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UDelMarEmotePickerTriggerUIStateComponent : public UUIStateComponent	
	{
	public:
		UDelMarEmotePickerTriggerUIStateComponentConfiguration Configuration; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarEmotePickerTriggerUIStateComponent");
			return ret;
		}

		void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept); // Flags: Final|Native|Protected 0x7FF414DD5540
	};


	// Class DelMarUI.DelMarEmotePickerTriggerUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarEmotePickerTriggerUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		FGameplayTag EmotePickerOpenTriggerTag; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UFortPickerData PickerData; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarEmotePickerTriggerUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class DelMarUI.DelMarGameplayContextUpdaterUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x90 (0xD8 - 0x48)
	class UDelMarGameplayContextUpdaterUIStateComponent : public UUIStateComponent	
	{
	public:
		TMap GameStateToUITagMap; // 0x48(0x50)
		FGameplayTag CurrentRacerState; // 0x98(0x4)
		FGameplayTag CurrentGameState; // 0x9C(0x4)
		FGameplayTag CurrentRaceMode; // 0xA0(0x4)
		TWeakObjectPtr OwnerPlayerState; // 0xA4(0x8)
		TWeakObjectPtr SpectatedPlayerState; // 0xAC(0x8)
		TWeakObjectPtr OwnerPlayerController; // 0xB4(0x8)
		TWeakObjectPtr CachedPreferences; // 0xBC(0x8)
		TWeakObjectPtr LevelManager; // 0xC4(0x8)
		TWeakObjectPtr CachedVehicle; // 0xCC(0x8)
		unsigned char UnknownData01_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponent");
			return ret;
		}

		void HandleTouchControlsLayoutChanged(FGameplayTag Layout); // Flags: Final|Native|Protected 0x7FF414DD58C0
		void HandleSpectatorViewTargetChange(AFortPlayerController PlayerController, AActor OldViewTarget, AActor NewViewTarget); // Flags: Final|Native|Protected 0x7FF414DD57E0
		void HandleExitVehicle(); // Flags: Final|Native|Protected 0x7FF414DD5700
		void HandleEnterVehicle(); // Flags: Final|Native|Protected 0x7FF414DD5620
	};


	// Class DelMarUI.DelMarGameplayContextUpdaterUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarGameplayContextUpdaterUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class DelMarUI.DelMarIdleMonitorUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x20 (0x68 - 0x48)
	class UDelMarIdleMonitorUIStateComponent : public UUIStateComponent	
	{
	public:
		UDelMarIdleMonitorUIStateComponentConfiguration Configuration; // 0x48(0x8)
		UDelMarRequestComponent CachedRequestComponent; // 0x50(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarIdleMonitorUIStateComponent");
			return ret;
		}
	};


	// Class DelMarUI.DelMarIdleMonitorUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarIdleMonitorUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		float ActivityCheckPeriod; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarIdleMonitorUIStateComponentConfiguration");
			return ret;
		}
	};


	// Class DelMarUI.DelMarGlobalLeaderboardEntryViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x88 (0xF0 - 0x68)
	class UDelMarGlobalLeaderboardEntryViewModel : public UDelMarViewModelBase	
	{
	public:
		FString PlayerAccountId; // 0x68(0x10)
		FString PlayerName; // 0x78(0x10)
		double RunDuration; // 0x88(0x8)
		int64_t Rank; // 0x90(0x8)
		bool bIsLocalPlayer; // 0x98(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		FDelMarGlobalLeaderboardEntry GlobalLeaderboardEntry; // 0xA0(0x40)
		unsigned char UnknownData03_7[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarGlobalLeaderboardEntryViewModel");
			return ret;
		}
	};


	// Class DelMarUI.DelMarLoadingScreenViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x60 (0xC8 - 0x68)
	class UDelMarLoadingScreenViewModel : public UDelMarViewModelBase	
	{
	public:
		bool bHasValidTrackData; // 0x68(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FText MapName; // 0x70(0x10)
		FText MapCreator; // 0x80(0x10)
		FText MapDescription; // 0x90(0x10)
		FGameplayTag RaceMode; // 0xA0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr LoadingBackgroundImage; // 0xA8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarLoadingScreenViewModel");
			return ret;
		}
	};


	// Class DelMarUI.DelMarLocalPlayerSettingsViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UDelMarLocalPlayerSettingsViewModel : public UDelMarViewModelBase	
	{
	public:
		bool bUseIconOnlyPlayerNameplates; // 0x68(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr CachedPreferences; // 0x6C(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarLocalPlayerSettingsViewModel");
			return ret;
		}

		void HandleNameplatesSettingChanged(bool NewValue); // Flags: Final|Native|Protected 0x7FF414DD59A0
	};


	// Class DelMarUI.DelMarPlayerRaceStateViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0xA0 (0x108 - 0x68)
	class UDelMarPlayerRaceStateViewModel : public UDelMarViewModelBase	
	{
	public:
		bool bHasValidData; // 0x68(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		int32_t CurrentLap; // 0x6C(0x4)
		bool bHasCompletedRace; // 0x70(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		FTimespan RaceCompletionTime; // 0x78(0x8)
		int32_t SpectatorCount; // 0x80(0x4)
		int32_t CurrentPlacement; // 0x84(0x4)
		int32_t CurrentPlacementByBestRun; // 0x88(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		double CurrentRunStartTimestamp; // 0x90(0x8)
		int32_t LastCompletedSectionIndex; // 0x98(0x4)
		bool bIsNewBestRun; // 0x9C(0x1)
		bool bRunActive; // 0x9D(0x1)
		bool bIsSubsequentRun; // 0x9E(0x1)
		bool bIsPedestrian; // 0x9F(0x1)
		bool bIsSpectator; // 0xA0(0x1)
		unsigned char UnknownData08_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UDelMarRunRecordViewModel CurrentRunRecord; // 0xA8(0x8)
		UDelMarRunRecordViewModel BestRunRecord; // 0xB0(0x8)
		UDelMarRunRecordViewModel PreviousBestRunRecord; // 0xB8(0x8)
		TArray MatchRunRecords; // 0xC0(0x10)
		UDelMarGlobalLeaderboardEntryViewModel PersonalBestLeaderboardEntry; // 0xD0(0x8)
		UDelMarGlobalLeaderboardEntryViewModel NewPersonalBestLeaderboardEntry; // 0xD8(0x8)
		UDelMarVehicleViewModel Vehicle; // 0xE0(0x8)
		FGameplayTag PreviousRacerState; // 0xE8(0x4)
		TWeakObjectPtr RaceManager; // 0xEC(0x8)
		TWeakObjectPtr PlayerState; // 0xF4(0x8)
		TWeakObjectPtr PositionalTrackerComponent; // 0xFC(0x8)
		unsigned char UnknownData09_7[0x4]; // 0x104(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPlayerRaceStateViewModel");
			return ret;
		}

		void HandleRaceReset(); // Flags: Final|Native|Protected 0x7FF414DD5A80
	};


	// Class DelMarUI.DelMarPlayerViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x78 (0xE0 - 0x68)
	class UDelMarPlayerViewModel : public UDelMarViewModelBase	
	{
	public:
		FText DisplayName; // 0x68(0x10)
		TWeakObjectPtr AvatarLargeImage; // 0x78(0x20)
		TWeakObjectPtr AvatarSmallImage; // 0x98(0x20)
		FColor AvatarBackgroundColor; // 0xB8(0x4)
		FColor AvatarHighlightColor; // 0xBC(0x4)
		UTextureRenderTarget2D DriverCameraRT; // 0xC0(0x8)
		UDelMarPlayerRaceStateViewModel PlayerRaceState; // 0xC8(0x8)
		TWeakObjectPtr PlayerState; // 0xD0(0x8)
		TWeakObjectPtr RaceManager; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPlayerViewModel");
			return ret;
		}

		AFortPlayerState GetPlayerState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD5B60
	};


	// Class DelMarUI.DelMarRaceViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x1B8 (0x220 - 0x68)
	class UDelMarRaceViewModel : public UDelMarViewModelBase	
	{
	public:
		int32_t TotalLaps; // 0x68(0x4)
		int32_t TotalPlayers; // 0x6C(0x4)
		int32_t TotalReadyPlayers; // 0x70(0x4)
		int32_t TotalLoadedPlayers; // 0x74(0x4)
		int32_t TotalJoiningPlayers; // 0x78(0x4)
		int32_t TotalPlacements; // 0x7C(0x4)
		FText MapName; // 0x80(0x10)
		FText MapCreator; // 0x90(0x10)
		FText MapDescription; // 0xA0(0x10)
		FGameplayTag RaceMode; // 0xB0(0x4)
		FGameplayTag DelMarGameplayState; // 0xB4(0x4)
		TWeakObjectPtr LoadingBackgroundImage; // 0xB8(0x20)
		double TimeUntilRaceStart; // 0xD8(0x8)
		double RaceEndTimestamp; // 0xE0(0x8)
		int32_t MatchTimeLimitSeconds; // 0xE8(0x4)
		bool bIsOvertime; // 0xEC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		double TimeUntilTrackChange; // 0xF0(0x8)
		double FirstPlayerFinishedServerTimestamp; // 0xF8(0x8)
		double FirstPlayerFinishedRaceEndServerTimestamp; // 0x100(0x8)
		char CurrentMatchmakingState; // 0x108(0x1)
		unsigned char UnknownData03_7[0x117]; // 0x109(0x117) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRaceViewModel");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController PC, AActor Old, AActor NewViewTarget); // Flags: Final|Native|Protected 0x7FF414DD5D20
		void HandleFinalRacePositionsChanged(TArray& FinalRacePositions, FDelMarEvent_RunRecorded& RecordedRun); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DD5C40
	};


	// Class DelMarUI.DelMarRunRecordViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class UDelMarRunRecordViewModel : public UDelMarViewModelBase	
	{
	public:
		FDelMarRunRecord Record; // 0x68(0x20)
		TArray RunRecordSectionData; // 0x88(0x10)
		bool bHasValidData; // 0x98(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRunRecordViewModel");
			return ret;
		}
	};


	// Class DelMarUI.DelMarTrackInfoViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x60 (0xC8 - 0x68)
	class UDelMarTrackInfoViewModel : public UDelMarViewModelBase	
	{
	public:
		bool bHasValidTrackData; // 0x68(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FText TrackName; // 0x70(0x10)
		FText TrackDescription; // 0x80(0x10)
		TWeakObjectPtr LoadingBackgroundImage; // 0x90(0x20)
		FText CreatorName; // 0xB0(0x10)
		bool bIsEpicCreated; // 0xC0(0x1)
		bool bHasValidCreatorData; // 0xC1(0x1)
		unsigned char UnknownData03_7[0x6]; // 0xC2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTrackInfoViewModel");
			return ret;
		}
	};


	// Class DelMarUI.DelMarTutorialViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x40 (0xA8 - 0x68)
	class UDelMarTutorialViewModel : public UDelMarViewModelBase	
	{
	public:
		FText SectionTitle; // 0x68(0x10)
		int32_t CurrentSection; // 0x78(0x4)
		int32_t TotalSections; // 0x7C(0x4)
		TArray CurrentTutorialAnnouncementInputActions; // 0x80(0x10)
		TArray CurrentTutorialHintInputActions; // 0x90(0x10)
		FTimespan FinishTargetTime; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTutorialViewModel");
			return ret;
		}
	};


	// Class DelMarUI.DelMarVehicleViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x80 (0xE8 - 0x68)
	class UDelMarVehicleViewModel : public UDelMarViewModelBase	
	{
	public:
		bool bHasValidData; // 0x68(0x1)
		bool bIsTurboEnabled; // 0x69(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x6A(0x2) UNKNOWN PROPERTY
		bool bIsDrifting; // 0x6C(0x1)
		bool bIsDriftingRight; // 0x6D(0x1)
		bool bWheelsOnGround; // 0x6E(0x1)
		bool bAnyWheelsOnGround; // 0x6F(0x1)
		TArray DriftRanges; // 0x70(0x10)
		float DriftSlipAngleRatio; // 0x80(0x4)
		EDelMarDriftSteerState DriftSteerState; // 0x84(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		float PotentialDriftBoostPercent; // 0x88(0x4)
		float StartlineBoostBonus; // 0x8C(0x4)
		EDelMarSpeedometerState SpeedometerState; // 0x90(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x91(0x3) UNKNOWN PROPERTY
		float CurrentSpeed; // 0x94(0x4)
		float NumTurboMaxCharges; // 0x98(0x4)
		float NumTurboCurrentCharges; // 0x9C(0x4)
		EDelMarTurboZoneState TurboBonusZoneState; // 0xA0(0x1)
		unsigned char UnknownData11_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		float UnderthrustPercent; // 0xA4(0x4)
		double MissedCheckpointDemoTimestamp; // 0xA8(0x8)
		double ReturnToTrackDemoTimestamp; // 0xB0(0x8)
		bool bIsHeadingWrongWay; // 0xB8(0x1)
		bool bToggleThrottle; // 0xB9(0x1)
		unsigned char UnknownData12_6[0x2]; // 0xBA(0x2) UNKNOWN PROPERTY
		float ThrottleInputValue; // 0xBC(0x4)
		bool bDemolished; // 0xC0(0x1)
		unsigned char UnknownData13_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		float DemolishActionPressedPercent; // 0xC4(0x4)
		bool bDemolishActionEnabled; // 0xC8(0x1)
		unsigned char UnknownData14_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr PlayerState; // 0xCC(0x8)
		TWeakObjectPtr CurrentVehicle; // 0xD4(0x8)
		TWeakObjectPtr GlobalInputDisabler; // 0xDC(0x8)
		unsigned char UnknownData15_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarVehicleViewModel");
			return ret;
		}

		void Initialize(AFortPlayerState InPlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DD7060
		void HandleWrongwayIndication(FDelMarEvent_VehicleWrongwayStatus& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DD6F80
		void HandleVehicleWheelsLeftGround(); // Flags: Final|Native|Protected 0x7FF414DD6EA0
		void HandleUnderthrustPercentChanged(float InValue); // Flags: Final|Native|Protected 0x7FF414DD6DC0
		void HandleTurboChargesUpdated(); // Flags: Final|Native|Protected 0x7FF414DD6CE0
		void HandleTurboBonusZoneChanged(EDelMarTurboZoneState InTurboBonusZoneState); // Flags: Final|Native|Protected 0x7FF414DD6C00
		void HandleToggleThrottleSettingChanged(bool bValue); // Flags: Final|Native|Protected 0x7FF414DD6B20
		void HandleStartlineBoostFailed(); // Flags: Final|Native|Protected 0x7FF414DD6A40
		void HandleStartlineBoostActivated(float InValue); // Flags: Final|Native|Protected 0x7FF414DD6960
		void HandleSpeedometerSpeedChanged(float InValue); // Flags: Final|Native|Protected 0x7FF414DD6880
		void HandleReturnToTrackCountdownInitiated(FDelMarEvent_ReturnToTrackDemoCountdown& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DD67A0
		void HandleReturnToTrackCountdownCancelled(); // Flags: Final|Native|Protected 0x7FF414DD66C0
		void HandlePotentialDriftBoostChanged(float InValue); // Flags: Final|Native|Protected 0x7FF414DD65E0
		void HandleOnVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected 0x7FF414DD6500
		void HandleOnThrottleInput(float Value); // Flags: Final|Native|Protected 0x7FF414DD6420
		void HandleMissedCheckpointCountdownInitiated(FDelMarEvent_MissedCheckpointDemoCountdown& Event); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DD6340
		void HandleMissedCheckpointCountdownCancelled(); // Flags: Final|Native|Protected 0x7FF414DD6260
		void HandleDriftSlipAngleRatioChanged(float InValue); // Flags: Final|Native|Protected 0x7FF414DD6180
		void HandleDriftDeactivated(); // Flags: Final|Native|Protected 0x7FF414DD60A0
		void HandleDriftActivated(); // Flags: Final|Native|Protected 0x7FF414DD5FC0
		void HandleDemolishPressDurationUpdated(float PressedDurationPercentage); // Flags: Final|Native|Protected 0x7FF414DD5EE0
		void HandleAnyWheelsOnGroundChanged(TScriptInterface& VehicleRef, bool bValue); // Flags: Final|Native|Protected|HasOutParms 0x7FF414DD5E00
	};


	// Class DelMarUI.DelMarRankedPlacementChangeVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x18 (0x80 - 0x68)
	class UDelMarRankedPlacementChangeVM : public UMVVMViewModelBase	
	{
	public:
		UDelMarRankedPlacementVM InitialPlacement; // 0x68(0x8)
		UDelMarRankedPlacementVM CurrentPlacement; // 0x70(0x8)
		int32_t PositionDelta; // 0x78(0x4)
		bool bIsDataValid; // 0x7C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRankedPlacementChangeVM");
			return ret;
		}

		int32_t GetPositionDelta(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD73E0
		bool GetIsDataValid(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD7300
		UDelMarRankedPlacementVM GetInitialPlacement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD7220
		UDelMarRankedPlacementVM GetCurrentPlacement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD7140
	};


	// Class DelMarUI.DelMarRankedPlacementVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x118 (0x180 - 0x68)
	class UDelMarRankedPlacementVM : public UMVVMViewModelBase	
	{
	public:
		bool bIsUnranked; // 0x68(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		int32_t TierIndex; // 0x6C(0x4)
		int32_t PlayerPosition; // 0x70(0x4)
		float ProgressTowardNextTier; // 0x74(0x4)
		bool bIsDataValid; // 0x78(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		TArray TierList; // 0x80(0x10)
		UFortHabaneroDisplayData RankedDisplayData; // 0x90(0x8)
		unsigned char UnknownData05_7[0xE8]; // 0x98(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRankedPlacementVM");
			return ret;
		}

		FFortHabaneroTier TierDisplayData(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414DD7920
		int32_t GetTierIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD7840
		float GetProgressTowardNextTier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD7760
		int32_t GetPlayerPosition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD7680
		bool GetIsUnranked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD75A0
		bool GetIsDataValid(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DD74C0
	};


	// Class DelMarUI.DelMarRankedRecapVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x50 (0xB8 - 0x68)
	class UDelMarRankedRecapVM : public UMVVMViewModelBase	
	{
	public:
		UDelMarRankedPlacementChangeVM PlacementChange; // 0x68(0x8)
		EDelMarRankedProgressError ErrorState; // 0x70(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		FString OptionalErrorText; // 0x78(0x10)
		TWeakObjectPtr OwningLocalPlayer; // 0x88(0x8)
		TWeakObjectPtr OwningPlayerController; // 0x90(0x8)
		UFortHabaneroDisplayData RankedDisplayData; // 0x98(0x8)
		unsigned char UnknownData03_7[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRankedRecapVM");
			return ret;
		}

		void QueryProgress(); // Flags: Final|Native|Private 0x7FF414DD7AE0
		bool GetUnrankedTierData(FFortHabaneroTier& OutUnrankedTierData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DD7A00
	};


	// Class DelMarUI.DelMarRankedVMContextResolver
	// Inherited from UMVVMViewModelContextResolver -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UDelMarRankedVMContextResolver : public UMVVMViewModelContextResolver	
	{
	public:
		UFortHabaneroDisplayData RankedDisplayData; // 0x28(0x8)
		FString DevelopmentRankedKey; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRankedVMContextResolver");
			return ret;
		}
	};

}
