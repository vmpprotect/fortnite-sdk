#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarUI.DelMarUserWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x350 - 0x2D8)
	class UDelMarUserWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0x2D8(0x58) UNKNOWN PROPERTY
		EWidgetTransitionerInitialStatus InitialTransitionStatus; // 0x330(0x1)
		ESlateVisibility HiddenVisibility; // 0x331(0x1)
		bool bAlwaysReverseInterruptedAnimations; // 0x332(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x333(0x5) UNKNOWN PROPERTY
		UWidgetTransitioner* WidgetTransitioner; // 0x338(0x8)
		UWidgetAnimation* NormalTransitionIn; // 0x340(0x8)
		UWidgetAnimation* NormalTransitionOut; // 0x348(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarUserWidget");
			return ret;
		}

		void SetDisplayEnabled(bool bEnabled, bool bSkipAnimation); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518E8144(relative to base address)
		bool IsDisplayEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E773C(relative to base address)
		void HandleWidgetTransitionerStatusChanged(UWidgetTransitioner* InTransitioner, EWidgetTransitionerStatus InStatus); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E7660(relative to base address)
		UWidgetTransitioner GetWidgetTransitioner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493E4454(relative to base address)
		UUIStateChartManager GetUIStateChartManager(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E7044(relative to base address)
		void BP_Show(bool bSkipAnimation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E66A4(relative to base address)
		void BP_Hide(bool bSkipAnimation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E617C(relative to base address)
	};


	// Class DelMarUI.DelMarCountdownTimerWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x390 - 0x350)
	class UDelMarCountdownTimerWidget : public UDelMarUserWidget	
	{
	public:
		UTextBlock* TextBlock_RemainingTime; // 0x350(0x8)
		double InitialCoundownTime; // 0x358(0x8)
		FMulticastInlineDelegate OnCountdownTimeChanged; // 0x360(0x10)
		FMulticastInlineDelegate OnCountdownTimeSet; // 0x370(0x10)
		FMulticastInlineDelegate OnCountdownTimeEnded; // 0x380(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCountdownTimerWidget");
			return ret;
		}

		void SetInitialCountdownTime(double InTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C227C(relative to base address)
		double GetTimeRemainingSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518C1B80(relative to base address)
	};


	// Class DelMarUI.DelMarCreativeUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class ADelMarCreativeUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		ADelMarVehicle* CachedDelMarVehicle; // 0x2B0(0x8)
		UDynamicUIScene* CreativeDelMarUI; // 0x2B8(0x8)
		FGameplayTag VehicleInAirTag; // 0x2C0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCreativeUIDirector");
			return ret;
		}

		void OnVehicleExit(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7518C1FB0(relative to base address)
		void OnVehicleEnter(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7518C1F9C(relative to base address)
		void OnVehicleAnyWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bAnyWheelsOnGround); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7518C1E2C(relative to base address)
	};


	// Class DelMarUI.DelMarDriverCameraWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x128 (0x478 - 0x350)
	class UDelMarDriverCameraWidget : public UDelMarUserWidget	
	{
	public:
		UWidgetAnimation* DefaultIntercomAnimation; // 0x350(0x8)
		UWidgetAnimation* ReactiveDriverCamera_Persistent; // 0x358(0x8)
		float ReactiveWidgetOutroDelay; // 0x360(0x4)
		float ReactiveWidgetMaxActiveTime; // 0x364(0x4)
		TMap<FGameplayTag, FName> MainChannelAnimationTagTable; // 0x368(0x50)
		TMap<int32_t, FDelMarReactiveWidgetAnimation> ReactiveAnimationTable; // 0x3B8(0x50)
		TMap<FName, UWidgetAnimation*> AnimationNameTable; // 0x408(0x50)
		UUMGSequencePlayer* IntercomSequencePlayer; // 0x458(0x8)
		UUMGSequencePlayer* ReactiveSequencePlayer; // 0x460(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x468(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDriverCameraWidget");
			return ret;
		}

		TArray GetAnimationNames(); // Flags: Final|Native|Protected|Const, Memory Exec: 0x7FF7518C198C(relative to base address)
	};


	// Class DelMarUI.DelMarInputActionRichTextBlockDecorator
	// Inherited from URichTextBlockDecorator -> UObject
	// Size: 0x108 (0x130 - 0x28)
	class UDelMarInputActionRichTextBlockDecorator : public URichTextBlockDecorator	
	{
	public:
		UInputAction* InputAction; // 0x28(0x8)
		FText DisplayName; // 0x30(0x10)
		FKey Key; // 0x40(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FSlateBrush Icon; // 0x60(0xB0)
		URichTextBlock* OwnerWidget; // 0x110(0x8)
		TWeakObjectPtr<ULocalPlayer*> OwningLocalPlayer; // 0x118(0x8)
		TWeakObjectPtr<UCommonInputSubsystem*> CommonInputSubsystem; // 0x120(0x8)
		TWeakObjectPtr<UEnhancedInputLocalPlayerSubsystem*> EnhancedInputSubsystem; // 0x128(0x8)

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
		unsigned char UnknownData00_3[0x10]; // 0xB30(0x10) UNKNOWN PROPERTY
		bool bTreatNavigationAsScrolling; // 0xB40(0x1)
		unsigned char UnknownData01_7[0xF]; // 0xB41(0xF) UNKNOWN PROPERTY

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
		TArray<UMVVMViewModelBase*> Elements; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarListViewModel");
			return ret;
		}

		TArray GetElements(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518C1A58(relative to base address)
		UMVVMViewModelBase GetElementAt(int32_t InIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518C19CC(relative to base address)
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

		ULocalPlayer TryGetOwningLocalPlayer(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751912A10(relative to base address)
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

		void OnMatchEventOccured__DelegateSignature(AFortPlayerState* PlayerState, FGameplayTag EventTag, FString Context); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarPlayerIndicatorsContainer
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x4A8 - 0x350)
	class UDelMarPlayerIndicatorsContainer : public UDelMarUserWidget	
	{
	public:
		UCanvasPanel* IndicatorCanvas; // 0x350(0x8)
		UClass* IndicatorWidgetClass; // 0x358(0x8)
		FVector IndicatorOffset; // 0x360(0x18)
		float RearVerticalHintThreshold; // 0x378(0x4)
		float RearIndicatorMaxDistance; // 0x37C(0x4)
		float RearIndicatorMinDistance; // 0x380(0x4)
		float RearIndicatorRangeWidth; // 0x384(0x4)
		float RearIndicatorRangeDegree; // 0x388(0x4)
		float ForwardIndicatorMaxDistance; // 0x38C(0x4)
		FAnchors IndicatorAnchors; // 0x390(0x20)
		FVector2D IndicatorAlignment; // 0x3B0(0x10)
		FVector2D RearIndicatorSize; // 0x3C0(0x10)
		UCurveFloat* RearDistanceScaleCurve; // 0x3D0(0x8)
		UCurveFloat* RearDistanceOpacityCurve; // 0x3D8(0x8)
		UCurveFloat* ForwardDistanceScaleCurve; // 0x3E0(0x8)
		UCurveFloat* ForwardDistanceOpacityCurve; // 0x3E8(0x8)
		int32_t MaxRearIndicators; // 0x3F0(0x4)
		int32_t MaxForwardIndicators; // 0x3F4(0x4)
		TWeakObjectPtr<UDelMarVehicleManager*> VehicleManager; // 0x3F8(0x8)
		TWeakObjectPtr<ADelMarVehicle*> ViewingVehicle; // 0x400(0x8)
		TWeakObjectPtr<AFortPlayerState*> ViewingPlayerState; // 0x408(0x8)
		TArray<FDelMarPlayerIndicatorData> IndicatorsData; // 0x410(0x10)
		TMap<AFortPlayerState*, UDelMarPlayerIndicatorWidget*> IndicatorWidgets; // 0x420(0x50)
		TArray<UDelMarPlayerIndicatorWidget*> IndicatorPool; // 0x470(0x10)
		TWeakObjectPtr<UDelMarPositionalTrackerComponent*> PositionalTrackerComponent; // 0x480(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x488(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPlayerIndicatorsContainer");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* InController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518C1D34(relative to base address)
		void HandleRacePlayersChanged(TMap<int32_t, UDelMarPlayerViewModel*>& RacePlayers); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7518C1C50(relative to base address)
		void HandleIconOnlySettingChanged(bool bUseIconOnly); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518C1BBC(relative to base address)
	};


	// Class DelMarUI.DelMarPlayerIndicatorWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x308 - 0x2B0)
	class UDelMarPlayerIndicatorWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		USizeBox* AvatarSizeBox; // 0x2B8(0x8)
		UFortLazyImage* AvatarLazyImage; // 0x2C0(0x8)
		USizeBox* PlayerNameSizeBox; // 0x2C8(0x8)
		UImage* UpArrowImage; // 0x2D0(0x8)
		UImage* DownArrowImage; // 0x2D8(0x8)
		UOverlay* BackgroundOverlay; // 0x2E0(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x2E8(0x4) UNKNOWN PROPERTY
		float BehindAvatarSizeBoxWidth; // 0x2EC(0x4)
		float AheadAvatarSizeBoxWidth; // 0x2F0(0x4)
		bool bBehindAvatarImageIsExpanded; // 0x2F4(0x1)
		bool bAheadAvatarImageIsExpanded; // 0x2F5(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2F6(0x2) UNKNOWN PROPERTY
		float BehindPlayerNameSizeBoxMaxWidth; // 0x2F8(0x4)
		float AheadPlayerNameSizeBoxMaxWidth; // 0x2FC(0x4)
		float BehindBackgroundOverlaySlotPadding; // 0x300(0x4)
		float AheadBackgroundOverlaySlotPadding; // 0x304(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPlayerIndicatorWidget");
			return ret;
		}

		void BP_UpdateIndicator(float Scale, float Opacity, bool bRearIndicator, EDelMarRearAlertVerticalHint VerticalHint); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7518C16B0(relative to base address)
		void BP_SetViewModel(UDelMarPlayerViewModel* ViewModel); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HideIndicator(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarExpandableHudWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x408 - 0x350)
	class UDelMarExpandableHudWidget : public UDelMarUserWidget	
	{
	public:
		UImage* NavigateEntriesBindingImage; // 0x350(0x8)
		unsigned char UnknownData00_6[0x18]; // 0x358(0x18) UNKNOWN PROPERTY
		UClass* ExpandableHudWidgetEntryClass; // 0x370(0x8)
		int32_t NumDesignerPreviewEntries; // 0x378(0x4)
		float EntrySpacing; // 0x37C(0x4)
		bool bExpanded; // 0x380(0x1)
		bool bNavigationEnabled; // 0x381(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x382(0x6) UNKNOWN PROPERTY
		UTexture2D* NavigateEntriesGamepadTexture; // 0x388(0x8)
		UTexture2D* NavigateEntriesPCTexture; // 0x390(0x8)
		UDelMarPlayerPreferencesComponent* PlayerPreferences; // 0x398(0x8)
		UOverlay* EntryOverlay; // 0x3A0(0x8)
		URetainerBox* EdgeFadeRetainerBox; // 0x3A8(0x8)
		USizeBox* ContentSizeBox; // 0x3B0(0x8)
		FMulticastInlineDelegate OnExpandToggled; // 0x3B8(0x10)
		FMulticastInlineDelegate OnNavigationEnabledChanged; // 0x3C8(0x10)
		FMulticastInlineDelegate OnExpandableChanged; // 0x3D8(0x10)
		TArray<UDelMarUserWidget*> DisplayedHudWidgetEntries; // 0x3E8(0x10)
		unsigned char UnknownData02_7[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarExpandableHudWidget");
			return ret;
		}

		void SetTargetInterpTransformY(float InTargetInterpTransformY); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518E8968(relative to base address)
		void HandleToggleSettingChanged(bool bUseToggle); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E707C(relative to base address)
		void HandleToggleAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518E7068(relative to base address)
		void BP_HandlePlayerPreferencesAdded(UDelMarPlayerPreferencesComponent* InPlayerPreferences); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarPositionalTrackerWidget
	// Inherited from UDelMarExpandableHudWidget -> UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x428 - 0x408)
	class UDelMarPositionalTrackerWidget : public UDelMarExpandableHudWidget	
	{
	public:
		int32_t MinPlayersToStart; // 0x408(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x40C(0x4) UNKNOWN PROPERTY
		TArray<UDelMarPlayerViewModel*> DisplayedPlayers; // 0x410(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x420(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPositionalTrackerWidget");
			return ret;
		}

		void UpdatePlayerPositions(TArray<UDelMarPlayerViewModel*> InPlayers); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518C25F0(relative to base address)
		void OnInputMethodChanged(ECommonInputType InputMethod); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x470 - 0x3F0)
	class UDelMarScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0x3F0(0x58) UNKNOWN PROPERTY
		EWidgetTransitionerInitialStatus InitialTransitionStatus; // 0x448(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x449(0x7) UNKNOWN PROPERTY
		UWidgetTransitioner* WidgetTransitioner; // 0x450(0x8)
		bool bActivateOnShow; // 0x458(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x459(0x7) UNKNOWN PROPERTY
		UWidgetAnimation* NormalTransitionIn; // 0x460(0x8)
		UWidgetAnimation* NormalTransitionOut; // 0x468(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarScreenBase");
			return ret;
		}

		void SetDisplayEnabled(bool bEnabled, bool bSkipAnimation); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518E807C(relative to base address)
		bool IsDisplayEnabled(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E7724(relative to base address)
		void HandleWidgetTransitionerStatusChanged(UWidgetTransitioner* InTransitioner, EWidgetTransitionerStatus InStatus); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E759C(relative to base address)
		UWidgetTransitioner GetWidgetTransitioner(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E8B7148(relative to base address)
		UUIStateChartManager GetUIStateChartManager(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E7044(relative to base address)
		void BP_Show(bool bSkipAnimation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E6620(relative to base address)
		void BP_Hide(bool bSkipAnimation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E60FC(relative to base address)
	};


	// Class DelMarUI.DelMarPostRaceLeaderboard
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x488 - 0x470)
	class UDelMarPostRaceLeaderboard : public UDelMarScreenBase	
	{
	public:
		FDataTableRowHandle FilterDataTableRow; // 0x470(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x480(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPostRaceLeaderboard");
			return ret;
		}

		void BP_UpdateLeaderboardFilter(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarPostRaceScreen
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x500 - 0x470)
	class UDelMarPostRaceScreen : public UDelMarScreenBase	
	{
	public:
		FDataTableRowHandle TabNavLeftDataTableRow; // 0x470(0x10)
		FDataTableRowHandle TabNavRightDataTableRow; // 0x480(0x10)
		FDataTableRowHandle ReadyUpDataTableRow; // 0x490(0x10)
		FDataTableRowHandle SpectateDataTableRow; // 0x4A0(0x10)
		FDataTableRowHandle ResetRunDataTableRow; // 0x4B0(0x10)
		FDataTableRowHandle ReturnToLobbyDataTableRow; // 0x4C0(0x10)
		UCommonButtonGroupBase* ButtonGroup_PostMatchNavigation; // 0x4D0(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> CachedRaceManager; // 0x4D8(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x4E0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPostRaceScreen");
			return ret;
		}

		void UpdateVote(EDelMarPostRaceVote NewVote); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518C26C8(relative to base address)
		void ResetRun(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518C1FFC(relative to base address)
		void RequestCountdown(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518C1FC4(relative to base address)
		void BP_OnReadyUpChanged(bool bReady); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarPostRaceVoteWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x350 - 0x350)
	class UDelMarPostRaceVoteWidget : public UDelMarUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPostRaceVoteWidget");
			return ret;
		}

		void UpdateVote(EDelMarPostRaceVote NewVote); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C2748(relative to base address)
		void BP_OnPostRaceVoteChanged(EDelMarPostRaceVote Vote); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarQuestScreenContainer
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x360 - 0x350)
	class UDelMarQuestScreenContainer : public UDelMarUserWidget	
	{
	public:
		FName QuestTabID; // 0x350(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x354(0x4) UNKNOWN PROPERTY
		UAthenaMapScreenContainer* AthenaScreenContainer; // 0x358(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarQuestScreenContainer");
			return ret;
		}

		void HandleToggleQuestList(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518C1D20(relative to base address)
		void HandleMapPanelExitButtonPressed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518C1C3C(relative to base address)
		void HandleAthenaScreenDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518C1BA8(relative to base address)
	};


	// Class DelMarUI.DelMarRichTextInputSwitcher
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x358 - 0x2B0)
	class UDelMarRichTextInputSwitcher : public UUserWidget	
	{
	public:
		bool bUseFormattedText; // 0x2B0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		FText TextFormat; // 0x2B8(0x10)
		TMap<FString, FDelMarKeyPair> Args; // 0x2C8(0x50)
		FText TextKBM; // 0x318(0x10)
		FText TextGamepad; // 0x328(0x10)
		FText TextTouch; // 0x338(0x10)
		UCommonRichTextBlock* Widget_RichText; // 0x348(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x350(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRichTextInputSwitcher");
			return ret;
		}

		void SetInputText(FText InTextKBM, FText InTextGamepad, FText InTextTouch); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C2310(relative to base address)
	};


	// Class DelMarUI.DelMarSelectionListViewModel
	// Inherited from UDelMarListViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x98 - 0x78)
	class UDelMarSelectionListViewModel : public UDelMarListViewModel	
	{
	public:
		int32_t SelectedIndex; // 0x78(0x4)
		unsigned char UnknownData00_7[0x1C]; // 0x7C(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarSelectionListViewModel");
			return ret;
		}

		void SetSelectedIndex(int32_t InIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C2570(relative to base address)
		void SetSelectedElement(UMVVMViewModelBase* InSelectedElement); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C24BC(relative to base address)
		void SelectPreviousElement(bool bAllowWrap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C20AC(relative to base address)
		void SelectNextElement(bool bAllowWrap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C2010(relative to base address)
		UMVVMViewModelBase SelectedElement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518C2144(relative to base address)
		bool HasSelection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7503CAF84(relative to base address)
		int32_t GetSelectedIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2414(relative to base address)
		void ClearSelection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C1888(relative to base address)
	};


	// Class DelMarUI.DelMarTouchWidgetBase
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x378 - 0x350)
	class UDelMarTouchWidgetBase : public UDelMarUserWidget	
	{
	public:
		TArray<FDelMarTouchInputDefinition> InputActionsData; // 0x350(0x10)
		bool bTrackInputPastBounds; // 0x360(0x1)
		bool bTrackInputFromEnter; // 0x361(0x1)
		bool bIsInjectingInput; // 0x362(0x1)
		EDelMarTouchInputTrackingState CurrentInputTrackingState; // 0x363(0x1)
		ECommonInputMode RequiredInputMode; // 0x364(0x1)
		unsigned char UnknownData00_7[0x13]; // 0x365(0x13) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTouchWidgetBase");
			return ret;
		}

		bool ShouldTouchJoystickIgnoreContentScaleFactor(); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7518E89E8(relative to base address)
		void OnTrackedInputUpdated(FPointerEvent& InGestureEvent); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7518E7EB0(relative to base address)
		void OnTrackedInputStarted(FPointerEvent& InGestureEvent); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7518E7E08(relative to base address)
		void OnTrackedInputEnded(FPointerEvent& InGestureEvent, bool bCancelled); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7518E7C70(relative to base address)
		void OnInputInjectionStarted(FPointerEvent& InGestureEvent, EDelMarInputInjectionState InInjectedState); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7518E7A58(relative to base address)
		void OnInputInjectionEnded(FPointerEvent& InGestureEvent, EDelMarInputInjectionState InInjectedState); // Flags: BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7518E78C0(relative to base address)
		void OnActiveInputModeChanged(ECommonInputMode NewInputMode); // Flags: Final|Native|Private, Memory Exec: 0x7FF7518E7840(relative to base address)
		bool IsGestureInsideHitbox(FPointerEvent& InGestureEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E7754(relative to base address)
		float GetTouchJoystickInputValueMultiplier(); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7518E6FF0(relative to base address)
		int32_t GetPixelsPerInch(); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7518E6FB4(relative to base address)
		float GetMobileContentScaleFactor(); // Flags: Final|Native|Static|Private|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7518E6F48(relative to base address)
		FGeometry GetHitboxGeometry(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7518E6EAC(relative to base address)
		void CancelInputTracking(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518E68D0(relative to base address)
	};


	// Class DelMarUI.DelMarTouchActionButton
	// Inherited from UDelMarTouchWidgetBase -> UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x3F0 - 0x378)
	class UDelMarTouchActionButton : public UDelMarTouchWidgetBase	
	{
	public:
		EDelMarTouchActionButtonState State; // 0x378(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x379(0x7) UNKNOWN PROPERTY
		TMap<EDelMarTouchActionButtonState, FDelMarTouchActionButtonStateData> ButtonStateData; // 0x380(0x50)
		bool bHighlightActive; // 0x3D0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x3D1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHighlightChanged; // 0x3D8(0x10)
		bool bIsUpdatingState; // 0x3E8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x3E9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTouchActionButton");
			return ret;
		}

		void SetIconBrush(FSlateBrush& Brush); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHighlightActive(bool bValue); // Flags: BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7518C21F8(relative to base address)
		bool SetButtonState(EDelMarTouchActionButtonState NewState); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518C216C(relative to base address)
		void SetBackgroundBrush(FSlateBrush& Brush); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EDelMarTouchActionButtonState GetStateOnStopInputTracking(bool bInputCancelled); // Flags: BlueprintCosmetic|Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7518C1AE8(relative to base address)
		EDelMarTouchActionButtonState GetState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518C1AD0(relative to base address)
		bool CanSetState(EDelMarTouchActionButtonState NewState); // Flags: BlueprintCosmetic|Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7518C17F4(relative to base address)
	};


	// Class DelMarUI.DelMarTouchRegion
	// Inherited from UDelMarTouchWidgetBase -> UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x388 - 0x378)
	class UDelMarTouchRegion : public UDelMarTouchWidgetBase	
	{
	public:
		TArray<UDelMarTouchActionButton*> TouchActionButtons; // 0x378(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTouchRegion");
			return ret;
		}

		void SetHighlightForInputAction(UInputAction* InputAction); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UDelMarTouchActionButton FindButtonByInputAction(UInputAction* InputAction); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518C18A0(relative to base address)
	};


	// Class DelMarUI.DelMarUICheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UDelMarUICheatManager : public UChildCheatManager	
	{
	public:
		UDynamicUIScene* DriverCameraHiddenScene; // 0x28(0x8)
		UDynamicUIScene* PlayerIndicatorHiddenScene; // 0x30(0x8)
		UDynamicUIScene* PointsDebugWidgetVisibleScene; // 0x38(0x8)
		UDynamicUIScene* RubberbandingWidgetVisibleScene; // 0x40(0x8)
		UDynamicUIScene* StaticVehicleMeterHiddenScene; // 0x48(0x8)
		UDynamicUIScene* VehicleDebugVisibleScene; // 0x50(0x8)
		UDynamicUIScene* VehicleHealthDebugVisibleScene; // 0x58(0x8)
		UDynamicUIScene* CheckpointDebugWidgetScene; // 0x60(0x8)
		UDynamicUIScene* MapNameDebugWidgetScene; // 0x68(0x8)
		UDynamicUIScene* GameplayTrackList; // 0x70(0x8)
		bool bAttachedWidgetEnabled; // 0x78(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarUICheatManager");
			return ret;
		}

		void OnAddedToCheatManagerNative(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarVehicleHealthDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarVehicleDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarUseToggleForExpandableHudWidget(bool bUseToggle); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarUISetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarTouchHUD(FString TouchHUDType); // Flags: Final|BlueprintCosmetic|Exec|Native|Protected, Memory Exec: 0x7FF74C7B3138(relative to base address)
		void DelMarSetHint(FText HintText, float RemoveAfterDelay); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7518E6D30(relative to base address)
		void DelMarRubberbandingWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarRequestDialogByTag(FGameplayTag Tag); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7518E6C20(relative to base address)
		void DelMarPointsDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarPlayerIndicatorsVisible(bool bVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarOpenTrackList(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarMapNameDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarDriverCameraSetReactiveType(int32_t Type); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C6284F8(relative to base address)
		void DelMarDriverCameraSetHidden(bool bHidden); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarDismissDialog(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF7518E6BC8(relative to base address)
		void DelMarCloseTrackList(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarCheckpointDebugWidgetSetVisible(bool bVisible); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void DelMarAttachedWidgetSetEnabled(bool bEnabled); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
	};


	// Class DelMarUI.UIAnimationController
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UUIAnimationController : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.UIAnimationController");
			return ret;
		}

		void SwitchPlayDirection(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74802F76C(relative to base address)
		void Stop(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747B0DC80(relative to base address)
		void Rewind(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747E989FC(relative to base address)
		void PlayForward(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF746F37328(relative to base address)
		void PlayBackward(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C349660(relative to base address)
		void JumpToEnd(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF748333524(relative to base address)
		void JumpToBeginning(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
		bool IsPlaying(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAD04B4(relative to base address)
		float GetDuration(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FACD9B4(relative to base address)
		void FastForward(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4A1ED4(relative to base address)
	};


	// Class DelMarUI.UITimelineAnimationController
	// Inherited from UUIAnimationController -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UUITimelineAnimationController : public UUIAnimationController	
	{
	public:
		UUserWidget* WidgetTarget; // 0x38(0x8)
		UWidgetAnimation* Animation; // 0x40(0x8)
		UUMGSequencePlayer* ActivePlayer; // 0x48(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.UITimelineAnimationController");
			return ret;
		}

		UUITimelineAnimationController CreateInstance(UUserWidget* WidgetTarget, UWidgetAnimation* Animation); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7518E6920(relative to base address)
	};


	// Class DelMarUI.UIAnimationControllerEntry
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UUIAnimationControllerEntry : public UObject	
	{
	public:
		UUIAnimationController* AnimationController; // 0x28(0x8)
		bool bIsInverted; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		UWidget* TargetWidget; // 0x38(0x8)
		ESlateVisibility HiddenVisibility; // 0x40(0x1)
		ESlateVisibility ShownVisibility; // 0x41(0x1)
		EWidgetTransitionerStatus TransitionerStatus; // 0x42(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x43(0x5) UNKNOWN PROPERTY
		UUIAnimationControllerEntry* NormalTransitionIn; // 0x48(0x8)
		UUIAnimationControllerEntry* NormalTransitionOut; // 0x50(0x8)
		TMap<FGameplayTag, UUIAnimationControllerEntry*> HintedTransitionsIn; // 0x58(0x50)
		TMap<FGameplayTag, UUIAnimationControllerEntry*> HintedTransitionsOut; // 0xA8(0x50)
		UUIAnimationControllerEntry* ActiveEntry; // 0xF8(0x8)
		bool bAlwaysReverseInterruptedAnimations; // 0x100(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x101(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.WidgetTransitioner");
			return ret;
		}

		void WidgetTransitionerStatusChange__DelegateSignature(UWidgetTransitioner* Transitioner, EWidgetTransitionerStatus Status); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetNormalTransitionPair(UUIAnimationController* InAnimation, bool bIsTransitionIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E88A0(relative to base address)
		void SetNormalTransitionOut(UUIAnimationController* InAnimationOut, bool bInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E87D8(relative to base address)
		void SetNormalTransitionIn(UUIAnimationController* InAnimationIn, bool bInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E8710(relative to base address)
		bool IsHidden(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E7828(relative to base address)
		EWidgetTransitionerStatus GetTransitionerStatus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E7030(relative to base address)
		UWidgetTransitioner CreateInstance(UWidget* TargetWidget, EWidgetTransitionerInitialStatus InitialStatus, ESlateVisibility HiddenVisibility, ESlateVisibility ShownVisibility, bool AlwaysReverseInterruptedAnimations); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7518E69F4(relative to base address)
		void BP_Show(bool bSkipAnimation, FGameplayTagContainer AnimationHints); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E6728(relative to base address)
		UWidgetTransitioner BP_Initialize(UWidget* TargetWidget, EWidgetTransitionerInitialStatus InitialStatus, ESlateVisibility HiddenVisibility, ESlateVisibility ShownVisibility, bool AlwaysReverseInterruptedAnimations); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E63A4(relative to base address)
		void BP_Hide(bool bSkipAnimation, FGameplayTagContainer AnimationHints); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E61FC(relative to base address)
		void AddHintedTransitionPair(FGameplayTag InAnimationHint, UUIAnimationController* InAnimation, bool bIsTransitionIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E5E70(relative to base address)
		void AddHintedTransitionOut(FGameplayTag InAnimationHint, UUIAnimationController* InAnimationOut, bool bInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E5BE4(relative to base address)
		void AddHintedTransitionIn(FGameplayTag InAnimationHint, UUIAnimationController* InAnimationIn, bool bInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E5958(relative to base address)
	};


	// Class DelMarUI.DelMarActionWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x2B8 (0x410 - 0x158)
	class UDelMarActionWidget : public UWidget	
	{
	public:
		FMulticastInlineDelegate OnInputMethodChanged; // 0x158(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x168(0x8) UNKNOWN PROPERTY
		FSlateBrush ProgressMaterialBrush; // 0x170(0xB0)
		FName ProgressMaterialParam; // 0x220(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x224(0xC) UNKNOWN PROPERTY
		FSlateBrush IconRimBrush; // 0x230(0xB0)
		TArray<FDataTableRowHandle> InputActions; // 0x2E0(0x10)
		UInputAction* EnhancedInputAction; // 0x2F0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x300(0x8)
		unsigned char UnknownData03_7[0x108]; // 0x308(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarActionWidget");
			return ret;
		}

		void UpdateActionWidget(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E8A14(relative to base address)
		void SetInputActions(TArray<FDataTableRowHandle> NewInputActions); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E8594(relative to base address)
		void SetInputAction(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E8474(relative to base address)
		void SetIconRimBrush(FSlateBrush InIconRimBrush); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E832C(relative to base address)
		void SetEnhancedInputAction(UInputAction* InInputAction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E828C(relative to base address)
		void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsHeldAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E7804(relative to base address)
		FSlateBrush GetIcon(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E6F00(relative to base address)
		FText GetDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E6E54(relative to base address)
	};


	// Class DelMarUI.DelMarDialogBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x408 - 0x3F0)
	class UDelMarDialogBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDialogBase");
			return ret;
		}

		void DismissDialog(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E6E1C(relative to base address)
	};


	// Class DelMarUI.DelMarDialogHelper
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UDelMarDialogHelper : public UObject	
	{
	public:
		TMap<FGameplayTag, TWeakObjectPtr> DialogMapping; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDialogHelper");
			return ret;
		}
	};


	// Class DelMarUI.DelMarInputConfigWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UDelMarInputConfigWidgetBase : public UCommonActivatableWidget	
	{
	public:
		FUIInputConfig DesiredInputConfig; // 0x3F0(0x6)
		bool bFlushPlayerInputWhenActivating; // 0x3F6(0x1)
		bool bFlushPlayerInputWhenDeactivating; // 0x3F7(0x1)

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
		TWeakObjectPtr<UClass*> CustomLoadingWidget; // 0x38(0x20)
		FZoneLoadingScreenConfig ZoneConfig; // 0x58(0xD0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarLoadingScreenHelper");
			return ret;
		}

		void PrepareDelMarLoadingScreen(UObject* WorldContextObject); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E7F58(relative to base address)
	};


	// Class DelMarUI.DelMarUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class ADelMarUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		UClass* DialogHelperClass; // 0x2B0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		UDelMarDialogHelper* DialogHelper; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarUIDirector");
			return ret;
		}

		void SetLoadingScreenVisibiliy(bool bVisible); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E8668(relative to base address)
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
		TWeakObjectPtr<APlayerState*> ViewPlayerState; // 0x29C(0x8)
		TWeakObjectPtr<USceneComponent*> AttachedTarget; // 0x2A4(0x8)
		TWeakObjectPtr<ADelMarVehicle*> AttachedVehicle; // 0x2AC(0x8)
		TWeakObjectPtr<APlayerCameraManager*> CameraManager; // 0x2B4(0x8)
		unsigned char UnknownData00_6[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY
		USceneComponent* AttachmentBaseComponent; // 0x2C0(0x8)
		UDelMarWidgetComponent* SpeedometerWidget; // 0x2C8(0x8)
		UDelMarWidgetComponent* DriftBoostWidget; // 0x2D0(0x8)
		UDelMarWidgetComponent* UnderthrustWidget; // 0x2D8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

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
		TArray<UClass*> AttachedWidgetActorsClass; // 0xA0(0x10)
		TArray<ADelMarAttachedWidgetActor*> AttachedWidgetActors; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarAttachedWidgetComponent");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* InController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E7190(relative to base address)
	};


	// Class DelMarUI.DelMarWidgetComponent
	// Inherited from UWidgetComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x28 (0x660 - 0x638)
	class UDelMarWidgetComponent : public UWidgetComponent	
	{
	public:
		FVector2D LeftTopPadding; // 0x638(0x10)
		FVector2D RightBottomPadding; // 0x648(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x658(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarWidgetComponent");
			return ret;
		}
	};


	// Class DelMarUI.DelMarDebugCountdown
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x4B0 - 0x470)
	class UDelMarDebugCountdown : public UDelMarScreenBase	
	{
	public:
		UCommonRichTextBlock* CountdownText; // 0x470(0x8)
		unsigned char UnknownData00_7[0x38]; // 0x478(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugCountdown");
			return ret;
		}
	};


	// Class DelMarUI.DelMarStartlineCountdownWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x398 - 0x350)
	class UDelMarStartlineCountdownWidget : public UDelMarUserWidget	
	{
	public:
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0x350(0x8)
		TWeakObjectPtr<AActor*> CurrentViewTarget; // 0x358(0x8)
		unsigned char UnknownData00_7[0x38]; // 0x360(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarStartlineCountdownWidget");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* PC, AActor* Old, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E7288(relative to base address)
		int32_t GetNumTotalIntervals(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E6F94(relative to base address)
		int32_t GetNumActiveIntervals(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E6F70(relative to base address)
		void BP_OnStartlineBoostFailed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnStartlineBoostActivated(float PercentageMaxBonusSpeedEarned); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCountdownStarted(int32_t TotalIntervals); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActiveIntervalsChanged(int32_t NumActiveIntervals); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarCheckpointTrackerEntryWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x370 - 0x350)
	class UDelMarCheckpointTrackerEntryWidget : public UDelMarUserWidget	
	{
	public:
		UWidgetAnimation* AnimTransitionIn; // 0x350(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x358(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCheckpointTrackerEntryWidget");
			return ret;
		}

		void BP_OnDisplayedCheckpointChanged(FDelMarSectionData& InSectionData, bool bNewEntry); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarCheckpointTrackerWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x398 - 0x350)
	class UDelMarCheckpointTrackerWidget : public UDelMarUserWidget	
	{
	public:
		UClass* CheckpointTrackerEntryClass; // 0x350(0x8)
		int32_t NumDesignerPreviewEntries; // 0x358(0x4)
		float EntrySpacing; // 0x35C(0x4)
		int32_t MaxEntriesToDisplay; // 0x360(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x364(0x4) UNKNOWN PROPERTY
		UOverlay* CheckpointEntryOverlay; // 0x368(0x8)
		URetainerBox* EdgeFadeRetainerBox; // 0x370(0x8)
		USizeBox* TrackerSizeBox; // 0x378(0x8)
		TArray<UDelMarCheckpointTrackerEntryWidget*> DisplayedCheckpointTrackerEntries; // 0x380(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x390(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCheckpointTrackerWidget");
			return ret;
		}

		void UpdateCheckpoints(TArray<FDelMarSectionData> InCheckpoints); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518E8A28(relative to base address)
	};


	// Class DelMarUI.DelMarBladeMenuContainer
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x480 - 0x470)
	class UDelMarBladeMenuContainer : public UDelMarScreenBase	
	{
	public:
		UFortDualBladeMenu* DualBladeMenu; // 0x470(0x8)
		FGameplayTag CloseBladeMenuTriggerTag; // 0x478(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x47C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarBladeMenuContainer");
			return ret;
		}
	};


	// Class DelMarUI.DelMarCheckpointTimer
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x4A0 - 0x470)
	class UDelMarCheckpointTimer : public UDelMarScreenBase	
	{
	public:
		UCommonTextBlock* Text_LapCount; // 0x470(0x8)
		UCommonTextBlock* Text_CheckpointIndex; // 0x478(0x8)
		UCommonTextBlock* Text_Timestamp; // 0x480(0x8)
		UCommonTextBlock* Text_LapTimestamp; // 0x488(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x490(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarCheckpointTimer");
			return ret;
		}
	};


	// Class DelMarUI.DelMarDebugPointWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x3B0 - 0x350)
	class UDelMarDebugPointWidget : public UDelMarUserWidget	
	{
	public:
		FString PlayerPointsString; // 0x350(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x360(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugPointWidget");
			return ret;
		}

		void BP_OnPointsUpdated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarDebugRubberbandingWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x398 - 0x350)
	class UDelMarDebugRubberbandingWidget : public UDelMarUserWidget	
	{
	public:
		bool bRubberbandingEnabled; // 0x350(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x351(0x3) UNKNOWN PROPERTY
		float PackDistance; // 0x354(0x4)
		float MinPackDistance; // 0x358(0x4)
		float MaxPackDistance; // 0x35C(0x4)
		float DistanceToPack; // 0x360(0x4)
		float MinDistanceFromPack; // 0x364(0x4)
		float MaxDistanceFromPack; // 0x368(0x4)
		float MinSpeed; // 0x36C(0x4)
		float StableSpeed; // 0x370(0x4)
		float AppliedBonusSpeed; // 0x374(0x4)
		float DistanceToPackRatio; // 0x378(0x4)
		float MaxBonusSpeedAtPosition; // 0x37C(0x4)
		float MaxSpeedAtPosition; // 0x380(0x4)
		float MaxAllowedBonusSpeed; // 0x384(0x4)
		float BonusSpeedGainedPerSecond; // 0x388(0x4)
		float BonusSpeedLostPerSecond; // 0x38C(0x4)
		int32_t MMRUsed; // 0x390(0x4)
		float MaxBonusSpeedScalar; // 0x394(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugRubberbandingWidget");
			return ret;
		}

		void BP_OnRubberbandingUpdated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarDebugVehicleHealthWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x360 - 0x350)
	class UDelMarDebugVehicleHealthWidget : public UDelMarUserWidget	
	{
	public:
		float CurrentHealth; // 0x350(0x4)
		float MaxHealth; // 0x354(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x358(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugVehicleHealthWidget");
			return ret;
		}

		void HandleVehicleHealthChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E717C(relative to base address)
		void BP_OnHealthUpdated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarDebugVehicleWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x410 - 0x350)
	class UDelMarDebugVehicleWidget : public UDelMarUserWidget	
	{
	public:
		float BaseTargetSpeed; // 0x350(0x4)
		float FinalTargetSpeed; // 0x354(0x4)
		float OversteerPercentage; // 0x358(0x4)
		bool bHasValidDraftingTarget; // 0x35C(0x1)
		EDelmarDraftingState DraftingState; // 0x35D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x35E(0x2) UNKNOWN PROPERTY
		float DraftingBonusSpeed; // 0x360(0x4)
		float DraftingTargetDegrees; // 0x364(0x4)
		float DraftingCurrentBonusSpeedPercentage; // 0x368(0x4)
		float DraftingMaxBonusSpeedPercentage; // 0x36C(0x4)
		float SecondsInDrift; // 0x370(0x4)
		float AccumulatedWaitingPeriodSeconds; // 0x374(0x4)
		float DriftBoostBonusSpeed; // 0x378(0x4)
		float DriftBoostDuration; // 0x37C(0x4)
		float DriftBoostDurationSecondsLeft; // 0x380(0x4)
		float PotentialDriftBoostBonusSpeed; // 0x384(0x4)
		float PotentialDriftBoostDuration; // 0x388(0x4)
		float QueuedDriftBoostBonusSpeed; // 0x38C(0x4)
		float StartlineBonusSpeed; // 0x390(0x4)
		float TurboBonusSpeed; // 0x394(0x4)
		float TurboZoneBonusSpeed; // 0x398(0x4)
		float TurboSecondsRemaining; // 0x39C(0x4)
		float TurboCharges; // 0x3A0(0x4)
		float WorldBonusSpeed; // 0x3A4(0x4)
		float TotalBonusSpeed; // 0x3A8(0x4)
		FDelMarTerrainData TerrainData; // 0x3AC(0x18)
		int32_t NumWheelWorldContacts; // 0x3C4(0x4)
		FVector AverageWheelWorldContactNormal; // 0x3C8(0x18)
		float MinimumLandingSpeed; // 0x3E0(0x4)
		float BaseForwardSpeed; // 0x3E4(0x4)
		float StableSpeed; // 0x3E8(0x4)
		float UpwardSpeed; // 0x3EC(0x4)
		float VehicleSpeed; // 0x3F0(0x4)
		bool bInvertedSteeringActive; // 0x3F4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x3F5(0x3) UNKNOWN PROPERTY
		float MaxForwardSpeed; // 0x3F8(0x4)
		float SecondsSinceTerrainPenalty; // 0x3FC(0x4)
		int32_t KickflipActivationCharges; // 0x400(0x4)
		bool bStrafeDisabled; // 0x404(0x1)
		bool bCanActivateStrafe; // 0x405(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x406(0x2) UNKNOWN PROPERTY
		float StrafeCooldownSeconds; // 0x408(0x4)
		float StrafeCooldownPercentage; // 0x40C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugVehicleWidget");
			return ret;
		}

		void BP_OnVehicleUpdated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarEmotePickerContainer
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x478 - 0x470)
	class UDelMarEmotePickerContainer : public UDelMarScreenBase	
	{
	public:
		FGameplayTag CloseEmotePickerTriggerTag; // 0x470(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x474(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarEmotePickerContainer");
			return ret;
		}

		void CloseEmotePickerContainer(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518E68E4(relative to base address)
	};


	// Class DelMarUI.DelMarReadyUpWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UDelMarReadyUpWidget : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarReadyUpWidget");
			return ret;
		}

		void BP_ReadyUp(bool bReady); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E6580(relative to base address)
		void BP_OnReadyUpChanged(bool bReady); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarTurboBonusZoneWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x358 - 0x350)
	class UDelMarTurboBonusZoneWidget : public UDelMarUserWidget	
	{
	public:
		TWeakObjectPtr<ADelMarVehicle*> CachedDelMarVehicle; // 0x350(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarTurboBonusZoneWidget");
			return ret;
		}

		void HandleTurboStateChange(EDelMarTurboZoneState NewState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E70FC(relative to base address)
		void BP_OnTurboZoneStateChanged(EDelMarTurboZoneState NewState); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarInteractionIndicatorContainer
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x320 - 0x318)
	class UDelMarInteractionIndicatorContainer : public UFortHUDElementWidget	
	{
	public:
		UFortActorCanvas* VehicleIndicators; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarInteractionIndicatorContainer");
			return ret;
		}

		void OnTargetingChanged(bool bTargeting); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTargetChangedNative(bool bTargeting); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518E7BF0(relative to base address)
		void HandleIndicatorModeChanged(bool bIndicatorsEnabled); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74FC8CA08(relative to base address)
	};


	// Class DelMarUI.DelMarPositionalTrackerEntryWidget
	// Inherited from UDelMarUserWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x380 - 0x350)
	class UDelMarPositionalTrackerEntryWidget : public UDelMarUserWidget	
	{
	public:
		FMulticastInlineDelegate OnDisplayedPlayerSet; // 0x350(0x10)
		FMulticastInlineDelegate OnNavigationEnabledChanged; // 0x360(0x10)
		UWidgetAnimation* AnimIsTargetPlayer; // 0x370(0x8)
		bool bTargetPlayer; // 0x378(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x379(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPositionalTrackerEntryWidget");
			return ret;
		}

		void SetDisplayedPlayer(UDelMarPlayerViewModel* InPlayerModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E820C(relative to base address)
		void RefreshPlayerInfo(bool IsTargetPlayer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518E7FD8(relative to base address)
	};


	// Class DelMarUI.DelMarLoadingScreenWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UDelMarLoadingScreenWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		TArray<FText> LoadingScreenTips; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarLoadingScreenWidget");
			return ret;
		}
	};


	// Class DelMarUI.DelMarPostRaceRankedRecap
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F0 - 0x3F0)
	class UDelMarPostRaceRankedRecap : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPostRaceRankedRecap");
			return ret;
		}

		float GetFailsafeDelayDuration(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518E6E90(relative to base address)
	};


	// Class DelMarUI.DelMarDebugTrackEntry
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class UDelMarDebugTrackEntry : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* TrackNameText; // 0x2B8(0x8)
		UDelMarLevelDataAsset* LevelDataAsset; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugTrackEntry");
			return ret;
		}

		void BP_OnTrackButtonPressed(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7474A9F44(relative to base address)
	};


	// Class DelMarUI.DelMarDebugGameplayTrackEntry
	// Inherited from UDelMarDebugTrackEntry -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2D0 - 0x2C8)
	class UDelMarDebugGameplayTrackEntry : public UDelMarDebugTrackEntry	
	{
	public:
		UDynamicUIScene* GameplayTrackListScene; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugGameplayTrackEntry");
			return ret;
		}
	};


	// Class DelMarUI.DelMarDebugTrackList
	// Inherited from UDelMarScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x480 - 0x470)
	class UDelMarDebugTrackList : public UDelMarScreenBase	
	{
	public:
		UCommonListView* TrackView; // 0x470(0x8)
		bool bOnlyReturnAllowedLevels; // 0x478(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x479(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarDebugTrackList");
			return ret;
		}

		void BP_OnExitButtonPressed(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518E6554(relative to base address)
	};


	// Class DelMarUI.DelMarBoundActionBar
	// Inherited from UCommonBoundActionBar -> UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x268 - 0x268)
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
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		FText Text; // 0x1398(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarBoundActionButton");
			return ret;
		}

		void BP_SetText(FText& ButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputActionUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActionProgress(float HoldPercentage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarUI.DelMarBladeMenuTriggerUIStateComponent
	// Inherited from UUIStateComponent -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UDelMarBladeMenuTriggerUIStateComponent : public UUIStateComponent	
	{
	public:
		UDelMarBladeMenuTriggerUIStateComponentConfiguration* Configuration; // 0x48(0x8)
		UFortHUDContext* HUDContext; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarBladeMenuTriggerUIStateComponent");
			return ret;
		}

		void NativeHandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519128B0(relative to base address)
	};


	// Class DelMarUI.DelMarBladeMenuTriggerUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDelMarBladeMenuTriggerUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		FGameplayTag BladeMenuTriggerTag; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		UDelMarEmotePickerTriggerUIStateComponentConfiguration* Configuration; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarEmotePickerTriggerUIStateComponent");
			return ret;
		}

		void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911FB8(relative to base address)
	};


	// Class DelMarUI.DelMarEmotePickerTriggerUIStateComponentConfiguration
	// Inherited from UUIStateComponentConfiguration -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDelMarEmotePickerTriggerUIStateComponentConfiguration : public UUIStateComponentConfiguration	
	{
	public:
		FGameplayTag EmotePickerOpenTriggerTag; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UFortPickerData* PickerData; // 0x30(0x8)

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
		TMap<FGameplayTag, FString> GameStateToUITagMap; // 0x48(0x50)
		FGameplayTag CurrentRacerState; // 0x98(0x4)
		FGameplayTag CurrentGameState; // 0x9C(0x4)
		FGameplayTag CurrentRaceMode; // 0xA0(0x4)
		TWeakObjectPtr<AFortPlayerState*> OwnerPlayerState; // 0xA4(0x8)
		TWeakObjectPtr<AFortPlayerState*> SpectatedPlayerState; // 0xAC(0x8)
		TWeakObjectPtr<AFortPlayerController*> OwnerPlayerController; // 0xB4(0x8)
		TWeakObjectPtr<UDelMarPlayerPreferencesComponent*> CachedPreferences; // 0xBC(0x8)
		TWeakObjectPtr<UDelMarLevelManagerComponent*> LevelManager; // 0xC4(0x8)
		TWeakObjectPtr<ADelMarVehicle*> CachedVehicle; // 0xCC(0x8)
		unsigned char UnknownData00_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarGameplayContextUpdaterUIStateComponent");
			return ret;
		}

		void HandleTouchControlsLayoutChanged(FGameplayTag Layout); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751912474(relative to base address)
		void HandleSpectatorViewTargetChange(AFortPlayerController* PlayerController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519121E8(relative to base address)
		void HandleExitVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911BA8(relative to base address)
		void HandleEnterVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911B94(relative to base address)
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
		UDelMarIdleMonitorUIStateComponentConfiguration* Configuration; // 0x48(0x8)
		UDelMarRequestComponent* CachedRequestComponent; // 0x50(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		FDelMarGlobalLeaderboardEntry GlobalLeaderboardEntry; // 0xA0(0x40)
		unsigned char UnknownData01_7[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FText MapName; // 0x70(0x10)
		FText MapCreator; // 0x80(0x10)
		FText MapDescription; // 0x90(0x10)
		FGameplayTag RaceMode; // 0xA0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> LoadingBackgroundImage; // 0xA8(0x20)

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
		unsigned char UnknownData00_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UDelMarPlayerPreferencesComponent*> CachedPreferences; // 0x6C(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarLocalPlayerSettingsViewModel");
			return ret;
		}

		void HandleNameplatesSettingChanged(bool NewValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911DA8(relative to base address)
	};


	// Class DelMarUI.DelMarPlayerRaceStateViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0xA0 (0x108 - 0x68)
	class UDelMarPlayerRaceStateViewModel : public UDelMarViewModelBase	
	{
	public:
		bool bHasValidData; // 0x68(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		int32_t CurrentLap; // 0x6C(0x4)
		bool bHasCompletedRace; // 0x70(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		FTimespan RaceCompletionTime; // 0x78(0x8)
		int32_t SpectatorCount; // 0x80(0x4)
		int32_t CurrentPlacement; // 0x84(0x4)
		int32_t CurrentPlacementByBestRun; // 0x88(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		double CurrentRunStartTimestamp; // 0x90(0x8)
		int32_t LastCompletedSectionIndex; // 0x98(0x4)
		bool bIsNewBestRun; // 0x9C(0x1)
		bool bRunActive; // 0x9D(0x1)
		bool bIsSubsequentRun; // 0x9E(0x1)
		bool bIsPedestrian; // 0x9F(0x1)
		bool bIsSpectator; // 0xA0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		UDelMarRunRecordViewModel* CurrentRunRecord; // 0xA8(0x8)
		UDelMarRunRecordViewModel* BestRunRecord; // 0xB0(0x8)
		UDelMarRunRecordViewModel* PreviousBestRunRecord; // 0xB8(0x8)
		TArray<UDelMarRunRecordViewModel*> MatchRunRecords; // 0xC0(0x10)
		UDelMarGlobalLeaderboardEntryViewModel* PersonalBestLeaderboardEntry; // 0xD0(0x8)
		UDelMarGlobalLeaderboardEntryViewModel* NewPersonalBestLeaderboardEntry; // 0xD8(0x8)
		UDelMarVehicleViewModel* Vehicle; // 0xE0(0x8)
		FGameplayTag PreviousRacerState; // 0xE8(0x4)
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0xEC(0x8)
		TWeakObjectPtr<AFortPlayerState*> PlayerState; // 0xF4(0x8)
		TWeakObjectPtr<UDelMarPositionalTrackerComponent*> PositionalTrackerComponent; // 0xFC(0x8)
		unsigned char UnknownData04_7[0x4]; // 0x104(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPlayerRaceStateViewModel");
			return ret;
		}

		void HandleRaceReset(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751912130(relative to base address)
	};


	// Class DelMarUI.DelMarPlayerViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x78 (0xE0 - 0x68)
	class UDelMarPlayerViewModel : public UDelMarViewModelBase	
	{
	public:
		FText DisplayName; // 0x68(0x10)
		TWeakObjectPtr<UTexture2D*> AvatarLargeImage; // 0x78(0x20)
		TWeakObjectPtr<UTexture2D*> AvatarSmallImage; // 0x98(0x20)
		FColor AvatarBackgroundColor; // 0xB8(0x4)
		FColor AvatarHighlightColor; // 0xBC(0x4)
		UTextureRenderTarget2D* DriverCameraRT; // 0xC0(0x8)
		UDelMarPlayerRaceStateViewModel* PlayerRaceState; // 0xC8(0x8)
		TWeakObjectPtr<AFortPlayerState*> PlayerState; // 0xD0(0x8)
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarPlayerViewModel");
			return ret;
		}

		AFortPlayerState GetPlayerState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519117FC(relative to base address)
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
		TWeakObjectPtr<UTexture2D*> LoadingBackgroundImage; // 0xB8(0x20)
		double TimeUntilRaceStart; // 0xD8(0x8)
		double RaceEndTimestamp; // 0xE0(0x8)
		int32_t MatchTimeLimitSeconds; // 0xE8(0x4)
		bool bIsOvertime; // 0xEC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		double TimeUntilTrackChange; // 0xF0(0x8)
		double FirstPlayerFinishedServerTimestamp; // 0xF8(0x8)
		double FirstPlayerFinishedRaceEndServerTimestamp; // 0x100(0x8)
		char CurrentMatchmakingState; // 0x108(0x1)
		bool bIsRaceFinished; // 0x109(0x1)
		bool bIsRaceStarted; // 0x10A(0x1)
		bool bHasPreRaceSocial; // 0x10B(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		UDelMarMatchEventViewModel* MatchEventViewModel; // 0x110(0x8)
		UDelMarTrackInfoViewModel* TrackInfoViewModel; // 0x118(0x8)
		UDelMarPlayerViewModel* LocalPlayer; // 0x120(0x8)
		UDelMarPlayerViewModel* TargetPlayer; // 0x128(0x8)
		UDelMarPlayerViewModel* LastTargetPlayer; // 0x130(0x8)
		TArray<UDelMarPlayerViewModel*> PositionPlayers; // 0x138(0x10)
		TArray<UDelMarPlayerViewModel*> FinalPlacements; // 0x148(0x10)
		TMap<int32_t, UDelMarPlayerViewModel*> RacePlayers; // 0x158(0x50)
		TArray<UDelMarGlobalLeaderboardEntryViewModel*> TopLeaderboardEntries; // 0x1A8(0x10)
		TArray<UDelMarGlobalLeaderboardEntryViewModel*> FocusedLeaderboardEntries; // 0x1B8(0x10)
		TArray<UDelMarGlobalLeaderboardEntryViewModel*> FriendLeaderboardEntries; // 0x1C8(0x10)
		FString GameSessionId; // 0x1D8(0x10)
		FString IslandCode; // 0x1E8(0x10)
		TWeakObjectPtr<ADelMarRaceManager*> RaceManager; // 0x1F8(0x8)
		TWeakObjectPtr<AFortPlayerController*> LocalPlayerController; // 0x200(0x8)
		TWeakObjectPtr<AFortPlayerState*> ViewTargetPlayerState; // 0x208(0x8)
		TWeakObjectPtr<UDelMarPositionalTrackerComponent*> PositionalTrackerComponent; // 0x210(0x8)
		UDelMarPlayerViewModel* EmptyPlayerViewModel; // 0x218(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRaceViewModel");
			return ret;
		}

		void HandleViewTargetChanged(AFortPlayerController* PC, AActor* Old, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519126AC(relative to base address)
		void HandleFinalRacePositionsChanged(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarEvent_RunRecorded& RecordedRun); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751911BBC(relative to base address)
	};


	// Class DelMarUI.DelMarRunRecordViewModel
	// Inherited from UDelMarViewModelBase -> UMVVMViewModelBase -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class UDelMarRunRecordViewModel : public UDelMarViewModelBase	
	{
	public:
		FDelMarRunRecord Record; // 0x68(0x20)
		TArray<FDelMarSectionData> RunRecordSectionData; // 0x88(0x10)
		bool bHasValidData; // 0x98(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FText TrackName; // 0x70(0x10)
		FText TrackDescription; // 0x80(0x10)
		TWeakObjectPtr<UTexture2D*> LoadingBackgroundImage; // 0x90(0x20)
		FText CreatorName; // 0xB0(0x10)
		bool bIsEpicCreated; // 0xC0(0x1)
		bool bHasValidCreatorData; // 0xC1(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xC2(0x6) UNKNOWN PROPERTY

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
		TArray<UInputAction*> CurrentTutorialAnnouncementInputActions; // 0x80(0x10)
		TArray<UInputAction*> CurrentTutorialHintInputActions; // 0x90(0x10)
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
		unsigned char UnknownData00_6[0x2]; // 0x6A(0x2) UNKNOWN PROPERTY
		bool bIsDrifting; // 0x6C(0x1)
		bool bIsDriftingRight; // 0x6D(0x1)
		bool bWheelsOnGround; // 0x6E(0x1)
		bool bAnyWheelsOnGround; // 0x6F(0x1)
		TArray<double> DriftRanges; // 0x70(0x10)
		float DriftSlipAngleRatio; // 0x80(0x4)
		EDelMarDriftSteerState DriftSteerState; // 0x84(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		float PotentialDriftBoostPercent; // 0x88(0x4)
		float StartlineBoostBonus; // 0x8C(0x4)
		EDelMarSpeedometerState SpeedometerState; // 0x90(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x91(0x3) UNKNOWN PROPERTY
		float CurrentSpeed; // 0x94(0x4)
		float NumTurboMaxCharges; // 0x98(0x4)
		float NumTurboCurrentCharges; // 0x9C(0x4)
		EDelMarTurboZoneState TurboBonusZoneState; // 0xA0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		float UnderthrustPercent; // 0xA4(0x4)
		double MissedCheckpointDemoTimestamp; // 0xA8(0x8)
		double ReturnToTrackDemoTimestamp; // 0xB0(0x8)
		bool bIsHeadingWrongWay; // 0xB8(0x1)
		bool bToggleThrottle; // 0xB9(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xBA(0x2) UNKNOWN PROPERTY
		float ThrottleInputValue; // 0xBC(0x4)
		bool bDemolished; // 0xC0(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		float DemolishActionPressedPercent; // 0xC4(0x4)
		bool bDemolishActionEnabled; // 0xC8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortPlayerState*> PlayerState; // 0xCC(0x8)
		TWeakObjectPtr<ADelMarVehicle*> CurrentVehicle; // 0xD4(0x8)
		TWeakObjectPtr<UDelMarGlobalInputDisabler*> GlobalInputDisabler; // 0xDC(0x8)
		unsigned char UnknownData07_7[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarVehicleViewModel");
			return ret;
		}

		void Initialize(AFortPlayerState* InPlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751912830(relative to base address)
		void HandleWrongwayIndication(FDelMarEvent_VehicleWrongwayStatus& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7519127A4(relative to base address)
		void HandleVehicleWheelsLeftGround(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751912698(relative to base address)
		void HandleUnderthrustPercentChanged(float InValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751912618(relative to base address)
		void HandleTurboChargesUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751912604(relative to base address)
		void HandleTurboBonusZoneChanged(EDelMarTurboZoneState InTurboBonusZoneState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751912584(relative to base address)
		void HandleToggleThrottleSettingChanged(bool bValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519123F4(relative to base address)
		void HandleStartlineBoostFailed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519123E0(relative to base address)
		void HandleStartlineBoostActivated(float InValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751912360(relative to base address)
		void HandleSpeedometerSpeedChanged(float InValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519122E0(relative to base address)
		void HandleReturnToTrackCountdownInitiated(FDelMarEvent_ReturnToTrackDemoCountdown& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751912158(relative to base address)
		void HandleReturnToTrackCountdownCancelled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751912144(relative to base address)
		void HandlePotentialDriftBoostChanged(float InValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519120B0(relative to base address)
		void HandleOnVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911EA8(relative to base address)
		void HandleOnThrottleInput(float Value); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911E28(relative to base address)
		void HandleMissedCheckpointCountdownInitiated(FDelMarEvent_MissedCheckpointDemoCountdown& Event); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751911D18(relative to base address)
		void HandleMissedCheckpointCountdownCancelled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911D04(relative to base address)
		void HandleDriftSlipAngleRatioChanged(float InValue); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911B14(relative to base address)
		void HandleDriftDeactivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911B00(relative to base address)
		void HandleDriftActivated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911AEC(relative to base address)
		void HandleDemolishPressDurationUpdated(float PressedDurationPercentage); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751911A6C(relative to base address)
		void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7519118FC(relative to base address)
	};


	// Class DelMarUI.DelMarRankedPlacementChangeVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x18 (0x80 - 0x68)
	class UDelMarRankedPlacementChangeVM : public UMVVMViewModelBase	
	{
	public:
		UDelMarRankedPlacementVM* InitialPlacement; // 0x68(0x8)
		UDelMarRankedPlacementVM* CurrentPlacement; // 0x70(0x8)
		int32_t PositionDelta; // 0x78(0x4)
		bool bIsDataValid; // 0x7C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRankedPlacementChangeVM");
			return ret;
		}

		int32_t GetPositionDelta(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74BCA2414(relative to base address)
		bool GetIsDataValid(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC5E860(relative to base address)
		UDelMarRankedPlacementVM GetInitialPlacement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C3166C8(relative to base address)
		UDelMarRankedPlacementVM GetCurrentPlacement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C316624(relative to base address)
	};


	// Class DelMarUI.DelMarRankedPlacementVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x118 (0x180 - 0x68)
	class UDelMarRankedPlacementVM : public UMVVMViewModelBase	
	{
	public:
		bool bIsUnranked; // 0x68(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		int32_t TierIndex; // 0x6C(0x4)
		int32_t PlayerPosition; // 0x70(0x4)
		float ProgressTowardNextTier; // 0x74(0x4)
		bool bIsDataValid; // 0x78(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		TArray<FFortHabaneroTier> TierList; // 0x80(0x10)
		UFortHabaneroDisplayData* RankedDisplayData; // 0x90(0x8)
		unsigned char UnknownData02_7[0xE8]; // 0x98(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRankedPlacementVM");
			return ret;
		}

		FFortHabaneroTier TierDisplayData(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519129CC(relative to base address)
		int32_t GetTierIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751911838(relative to base address)
		float GetProgressTowardNextTier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751911824(relative to base address)
		int32_t GetPlayerPosition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519117E8(relative to base address)
		bool GetIsUnranked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519117D4(relative to base address)
		bool GetIsDataValid(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC65364(relative to base address)
	};


	// Class DelMarUI.DelMarRankedRecapVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x50 (0xB8 - 0x68)
	class UDelMarRankedRecapVM : public UMVVMViewModelBase	
	{
	public:
		UDelMarRankedPlacementChangeVM* PlacementChange; // 0x68(0x8)
		EDelMarRankedProgressError ErrorState; // 0x70(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		FString OptionalErrorText; // 0x78(0x10)
		TWeakObjectPtr<ULocalPlayer*> OwningLocalPlayer; // 0x88(0x8)
		TWeakObjectPtr<AFortPlayerControllerAthena*> OwningPlayerController; // 0x90(0x8)
		UFortHabaneroDisplayData* RankedDisplayData; // 0x98(0x8)
		unsigned char UnknownData01_7[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRankedRecapVM");
			return ret;
		}

		void QueryProgress(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7519129B8(relative to base address)
		bool GetUnrankedTierData(FFortHabaneroTier& OutUnrankedTierData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75191184C(relative to base address)
	};


	// Class DelMarUI.DelMarRankedVMContextResolver
	// Inherited from UMVVMViewModelContextResolver -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UDelMarRankedVMContextResolver : public UMVVMViewModelContextResolver	
	{
	public:
		UFortHabaneroDisplayData* RankedDisplayData; // 0x28(0x8)
		FString DevelopmentRankedKey; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarUI.DelMarRankedVMContextResolver");
			return ret;
		}
	};

}
