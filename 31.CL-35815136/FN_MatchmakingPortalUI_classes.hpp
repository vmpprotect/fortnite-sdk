#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MatchmakingPortalUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UFortControllerComponent_CreativeMatchmaking : public UFortControllerComponent	
	{
	public:
		UFortGameActivity* CachedGameActivity; // 0xA8(0x8)
		UClass* CreativeMatchmakingFeedbackClass; // 0xB0(0x8)
		UClass* IslandModal; // 0xB8(0x8)
		UFortCreativeMatchmakingFeedback* CreativeMatchmakingFeedbackWidget; // 0xC0(0x8)
		UFortActivityDetailsModal* MatchmakingPortalModalWidget; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortControllerComponent_CreativeMatchmaking");
			return ret;
		}

		void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751972578(relative to base address)
	};


	// Class MatchmakingPortalUI.FortCreativeMatchmakingFeedback
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x478 - 0x3F0)
	class UFortCreativeMatchmakingFeedback : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		UInputComponent* ReadyAndCancelInputComponent; // 0x400(0x8)
		UFortActivityScalingTextBlock* Text_IslandName; // 0x408(0x8)
		UFortActivityScalingTextBlock* Text_MatchmakingStatus; // 0x410(0x8)
		unsigned char UnknownData01_6[0x14]; // 0x418(0x14) UNKNOWN PROPERTY
		bool bIsCancelingMatchmaking; // 0x42C(0x1)
		bool bIsLocalPartyMemberReady; // 0x42D(0x1)
		bool bHasPushedInputComponent; // 0x42E(0x1)
		unsigned char UnknownData02_6[0x19]; // 0x42F(0x19) UNKNOWN PROPERTY
		UFortGameActivity* CachedGameActivity; // 0x448(0x8)
		bool bHasError; // 0x450(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x451(0x7) UNKNOWN PROPERTY
		FText MatchmakingStatusText; // 0x458(0x10)
		UFortKeybindWidget* Action_HoldKeybindWidget; // 0x468(0x8)
		UFortCTAButton* Action_MobileButton; // 0x470(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortCreativeMatchmakingFeedback");
			return ret;
		}

		void PushInputComponent(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75197268C(relative to base address)
		void PopInputComponent(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751972678(relative to base address)
		void PlayOutro(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayIntro(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUserStartedHoldActionNotification(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTakeActionNotification(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOutroFinished(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF749B1B2C4(relative to base address)
		void OnMatchmakingStatusTextUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLockStateChanged(bool bLockState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519725F8(relative to base address)
		void OnCancelNotification(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPartyLeader(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751972554(relative to base address)
		bool IsLocalPlayerReady(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751972500(relative to base address)
		void HoldReleased(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519724EC(relative to base address)
		void HoldPressed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519724D8(relative to base address)
		void HoldAction(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7519724C4(relative to base address)
		void HandleCancelMatchmaking(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751972218(relative to base address)
		float GetTimeToDisplayMessageBeforeFadeOut(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519721E8(relative to base address)
		bool CanCancelMatchmaking(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75197215C(relative to base address)
		void BP_OnCreativeReadyCheckStatusChanged(EInGameReadyCheckStatus InGameReadyCheckStatus); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MatchmakingPortalUI.FortMatchmakingPortalCountdown
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x420 - 0x3F0)
	class UFortMatchmakingPortalCountdown : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UInputComponent* MatchmakingPortalInputComponent; // 0x3F8(0x8)
		UFortActivityScalingTextBlock* Text_IslandName; // 0x400(0x8)
		float CountdownTime; // 0x408(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x40C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFinishedCountdown; // 0x410(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortMatchmakingPortalCountdown");
			return ret;
		}

		void StartCountdown(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCancelClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751972204(relative to base address)
		void FinishTimer(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MatchmakingPortalUI.FortMatchmakingPortalPopup
	// Inherited from UFortPortalHUDDetails -> UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x188 (0x588 - 0x400)
	class UFortMatchmakingPortalPopup : public UFortPortalHUDDetails	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x400(0x10) UNKNOWN PROPERTY
		FVector WorldPointerLocation; // 0x410(0x18)
		FText CreatorNameTextFormat; // 0x428(0x10)
		TWeakObjectPtr<UHeaderDescriptionHUDComponent*> CachedHUDComponent; // 0x438(0x8)
		UClass* IslandModal; // 0x440(0x8)
		FMatchmakingPortalPopupData CachedIslandData; // 0x448(0x48)
		FText InvalidLinkCodeWarningText; // 0x490(0x10)
		float MatchmakingFeedbackDelayTime; // 0x4A0(0x4)
		bool bIsWithinPortalRange : 1; // 0x4A4:0(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x4A5(0x3) UNKNOWN PROPERTY
		UCommonRichTextBlock* RichText_CreatorName; // 0x4A8(0x8)
		UCommonTextBlock* Text_IslandName; // 0x4B0(0x8)
		UDynamicEntryBox* EntryBox_ActivityTags; // 0x4B8(0x8)
		UFortKeybindWidget* GlobalActionKeybindWidget; // 0x4C0(0x8)
		UClass* CreatorPublishedIslandsPageClass; // 0x4C8(0x8)
		UClass* PlayerPageViewClass; // 0x4D0(0x8)
		UClass* AttributionsModalClass; // 0x4D8(0x8)
		UFortGameActivity* CachedGameActivity; // 0x4E0(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x4E8(0x10) UNKNOWN PROPERTY
		FText InteractionMessage; // 0x4F8(0x10)
		FText InteractionMessage_Cancel; // 0x508(0x10)
		FText InteractionMessage_Disabled; // 0x518(0x10)
		FText InteractionMessage_PartyLeadOnly; // 0x528(0x10)
		unsigned char UnknownData03_7[0x50]; // 0x538(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortMatchmakingPortalPopup");
			return ret;
		}

		void UpdateVisuals(UHeaderDescriptionHUDComponent* HUDComponent); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowPortalPopup(bool bShow, bool bAnimate); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerCanInteractChanged(bool bPlayerCanInteract, FText& Message); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLockStateChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsInteractingDeviceAMatchmakingPortal(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasActivityToShow(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519724A8(relative to base address)
		void HandleWidgetUpdate(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751972494(relative to base address)
		void HandleStartedRespawn(AFortPlayerControllerZone* PlayerController); // Flags: Final|Native|Public, Memory Exec: 0x7FF751972414(relative to base address)
		void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLoadScreenChanged(AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, FText HUDReason); // Flags: Final|Native|Public, Memory Exec: 0x7FF7519722F0(relative to base address)
		void HandleHUDShow(bool bShow, bool bShouldAnimate); // Flags: Final|Native|Public, Memory Exec: 0x7FF75197222C(relative to base address)
		UFortAthenaCreativeMatchmakingWidget GetMatchmakingFeedbackWidget(UCommonActivatableWidget* MatchmakingFeedbackContainer); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetIslandData(FMatchmakingPortalPopupData& OutIslandData, UHeaderDescriptionHUDComponent* HUDComponent); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BindOverlapEvents(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MatchmakingPortalUI.FortModalBackground
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x428 - 0x3F0)
	class UFortModalBackground : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x3F0(0x20) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Back; // 0x410(0x8)
		UCommonButtonBase* Button_BackBoard; // 0x418(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x420(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortModalBackground");
			return ret;
		}

		void OnPreviewImageChanged(bool bIsLoading, UTexture* InTexture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortUIGameFeatureAction_OverridePortalHUDDetails : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UClass*> SoftPortalHUDDetailsClass; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchmakingPortalUI.FortUIGameFeatureAction_OverridePortalHUDDetails");
			return ret;
		}
	};

}
