#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MatchmakingPortalUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UFortControllerComponent_CreativeMatchmaking : public UFortControllerComponent	
	{
	public:
		UFortGameActivity CachedGameActivity; // 0xA8(0x8)
		UClass CreativeMatchmakingFeedbackClass; // 0xB0(0x8)
		UClass IslandModal; // 0xB8(0x8)
		UFortCreativeMatchmakingFeedback CreativeMatchmakingFeedbackWidget; // 0xC0(0x8)
		UFortActivityDetailsModal MatchmakingPortalModalWidget; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking");
			return ret;
		}

		void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus); // Flags: Final|Native|Protected 0x7FF414DE1160
	};


	// Class MatchmakingPortalUI.FortCreativeMatchmakingFeedback
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x480 - 0x3F8)
	class UFortCreativeMatchmakingFeedback : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY
		UInputComponent ReadyAndCancelInputComponent; // 0x408(0x8)
		UFortActivityScalingTextBlock Text_IslandName; // 0x410(0x8)
		UFortActivityScalingTextBlock Text_MatchmakingStatus; // 0x418(0x8)
		unsigned char UnknownData05_6[0x14]; // 0x420(0x14) UNKNOWN PROPERTY
		bool bIsCancelingMatchmaking; // 0x434(0x1)
		bool bIsLocalPartyMemberReady; // 0x435(0x1)
		bool bHasPushedInputComponent; // 0x436(0x1)
		unsigned char UnknownData06_6[0x19]; // 0x437(0x19) UNKNOWN PROPERTY
		UFortGameActivity CachedGameActivity; // 0x450(0x8)
		bool bHasError; // 0x458(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x459(0x7) UNKNOWN PROPERTY
		FText MatchmakingStatusText; // 0x460(0x10)
		UFortKeybindWidget Action_HoldKeybindWidget; // 0x470(0x8)
		UFortCTAButton Action_MobileButton; // 0x478(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback");
			return ret;
		}

		void PushInputComponent(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE22E0
		void PopInputComponent(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE2200
		void PlayOutro(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE2120
		void PlayIntro(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE2040
		void OnUserStartedHoldActionNotification(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE1F60
		void OnTakeActionNotification(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE1E80
		void OnOutroFinished(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE1DA0
		void OnMatchmakingStatusTextUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE1CC0
		void OnLockStateChanged(bool bLockState); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE1BE0
		void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus); // Flags: Final|Native|Protected 0x7FF414DE1B00
		void OnCancelNotification(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE1A20
		bool IsPartyLeader(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DE1940
		bool IsLocalPlayerReady(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DE1860
		void HoldReleased(); // Flags: Final|Native|Protected 0x7FF414DE1780
		void HoldPressed(); // Flags: Final|Native|Protected 0x7FF414DE16A0
		void HoldAction(); // Flags: Final|Native|Protected 0x7FF414DE15C0
		void HandleCancelMatchmaking(); // Flags: Final|Native|Protected 0x7FF414DE14E0
		float GetTimeToDisplayMessageBeforeFadeOut(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DE1400
		bool CanCancelMatchmaking(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DE1320
		void BP_OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE1240
	};


	// Class MatchmakingPortalUI.FortMatchmakingPortalCountdown
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x428 - 0x3F8)
	class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UInputComponent MatchmakingPortalInputComponent; // 0x400(0x8)
		UFortActivityScalingTextBlock Text_IslandName; // 0x408(0x8)
		float CountdownTime; // 0x410(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x414(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFinishedCountdown; // 0x418(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown");
			return ret;
		}

		void StartCountdown(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DE2580
		void HandleCancelClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE24A0
		void FinishTimer(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414DE23C0
	};


	// Class MatchmakingPortalUI.FortMatchmakingPortalPopup
	// Inherited from UFortPortalHUDDetails -> UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x188 (0x590 - 0x408)
	class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x408(0x10) UNKNOWN PROPERTY
		FVector WorldPointerLocation; // 0x418(0x18)
		FText CreatorNameTextFormat; // 0x430(0x10)
		TWeakObjectPtr CachedHUDComponent; // 0x440(0x8)
		UClass IslandModal; // 0x448(0x8)
		FMatchmakingPortalPopupData CachedIslandData; // 0x450(0x48)
		FText InvalidLinkCodeWarningText; // 0x498(0x10)
		float MatchmakingFeedbackDelayTime; // 0x4A8(0x4)
		bool bIsWithinPortalRange : 1; // 0x4AC:0(0x1)
		unsigned char UnknownData05_5[0x3]; // 0x4AD(0x3) UNKNOWN PROPERTY
		UCommonRichTextBlock RichText_CreatorName; // 0x4B0(0x8)
		UCommonTextBlock Text_IslandName; // 0x4B8(0x8)
		UDynamicEntryBox EntryBox_ActivityTags; // 0x4C0(0x8)
		UFortKeybindWidget GlobalActionKeybindWidget; // 0x4C8(0x8)
		UClass CreatorPublishedIslandsPageClass; // 0x4D0(0x8)
		UClass PlayerPageViewClass; // 0x4D8(0x8)
		UClass AttributionsModalClass; // 0x4E0(0x8)
		UFortGameActivity CachedGameActivity; // 0x4E8(0x8)
		unsigned char UnknownData06_6[0x10]; // 0x4F0(0x10) UNKNOWN PROPERTY
		FText InteractionMessage; // 0x500(0x10)
		FText InteractionMessage_Cancel; // 0x510(0x10)
		FText InteractionMessage_Disabled; // 0x520(0x10)
		FText InteractionMessage_PartyLeadOnly; // 0x530(0x10)
		unsigned char UnknownData07_7[0x50]; // 0x540(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortMatchmakingPortalPopup");
			return ret;
		}

		void UpdateVisuals(UHeaderDescriptionHUDComponent HUDComponent); // Flags: Event|Public|BlueprintEvent 0x7FF414DE31C0
		void OnShowPortalPopup(bool bShow, bool bAnimate); // Flags: Event|Public|BlueprintEvent 0x7FF414DE30E0
		void OnPlayerCanInteractChanged(bool bPlayerCanInteract, FText& Message); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414DE3000
		void OnLockStateChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE2F20
		bool IsInteractingDeviceAMatchmakingPortal(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE2E40
		bool HasActivityToShow(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE2D60
		void HandleWidgetUpdate(); // Flags: Final|Native|Public 0x7FF414DE2C80
		void HandleStartedRespawn(AFortPlayerControllerZone PlayerController); // Flags: Final|Native|Public 0x7FF414DE2BA0
		void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414DE2AC0
		void HandleLoadScreenChanged(AFortPlayerControllerAthena PlayerController, bool bLoadScreenEnabled, FText HUDReason); // Flags: Final|Native|Public 0x7FF414DE29E0
		void HandleHUDShow(bool bShow, bool bShouldAnimate); // Flags: Final|Native|Public 0x7FF414DE2900
		UFortAthenaCreativeMatchmakingWidget GetMatchmakingFeedbackWidget(UCommonActivatableWidget MatchmakingFeedbackContainer); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414DE2820
		bool GetIslandData(FMatchmakingPortalPopupData& OutIslandData, UHeaderDescriptionHUDComponent HUDComponent); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DE2740
		void BindOverlapEvents(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE2660
	};


	// Class MatchmakingPortalUI.FortModalBackground
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x430 - 0x3F8)
	class UFortModalBackground : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x20]; // 0x3F8(0x20) UNKNOWN PROPERTY
		UCommonButtonBase Button_Back; // 0x418(0x8)
		UCommonButtonBase Button_BackBoard; // 0x420(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x428(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortModalBackground");
			return ret;
		}

		void OnPreviewImageChanged(bool bIsLoading, UTexture InTexture); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE32A0
	};


	// Class MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr SoftPortalHUDDetailsClass; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails");
			return ret;
		}
	};

}
