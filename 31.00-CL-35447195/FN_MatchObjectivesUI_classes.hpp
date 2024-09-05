#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MatchObjectivesUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x10 (0x140 - 0x130)
	class UFortMobileButtonBehaviorComponent_MatchObjectivePicker : public UFortMobileActionButtonBehavior	
	{
	public:
		UFortControllerComponent_SkydiveFeedback SkydiveFeedbackComp; // 0x130(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x138(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker");
			return ret;
		}

		void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase); // Flags: Final|Native|Protected 0x7FF414D02FD8
	};


	// Class MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper
	// Inherited from UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x368 - 0x350)
	class UFortMobileHUDElement_ObjectiveSelectorWrapper : public UFortMobileHUDElement	
	{
	public:
		UFortPlayerStateComponent_MatchQuests MatchQuestsComponent; // 0x350(0x8)
		UOverlay Overlay_WrapperContents; // 0x358(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x360(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper");
			return ret;
		}

		void HandleSkydiveFromBusAndLandingCompleted(bool bSkydivedFromBusAndLanded); // Flags: Final|Native|Public 0x7FF414D030B8
	};


	// Class MatchObjectivesUI.MatchObjectivesBonusEntryWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C8 - 0x2B8)
	class UMatchObjectivesBonusEntryWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_Reward; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesBonusEntryWidget");
			return ret;
		}

		void UpdateBonusRewardCompleteState(bool GoalIsCompleted); // Flags: Event|Protected|BlueprintEvent 0x7FF414D03358
		void OnBonusRewardEntrySet(int32_t Quantity); // Flags: Event|Protected|BlueprintEvent 0x7FF414D03278
		bool HasBeenCompleted(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D03198
	};


	// Class MatchObjectivesUI.MatchObjectivesBonusPunchWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x358 - 0x2B8)
	class UMatchObjectivesBonusPunchWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x2B8(0x18) UNKNOWN PROPERTY
		FText TextExpiredQuest; // 0x2D0(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x2E0(0x18) UNKNOWN PROPERTY
		FGameplayTagContainer InclusiveFilterTags; // 0x2F8(0x20)
		FGameplayTagContainer ExclusiveFilterTags; // 0x318(0x20)
		UCommonDateTimeTextBlock Text_ResetTimer; // 0x338(0x8)
		UFortDynamicEntryBox DynamicEntryBox_DailyBonusPips; // 0x340(0x8)
		TArray WidgetsPips; // 0x348(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesBonusPunchWidget");
			return ret;
		}

		void UpdateTimerState(bool bIsTimerValid, EAthenaChallengeTimerState TimerState); // Flags: Event|Protected|BlueprintEvent 0x7FF414D035F8
		void OnWidgetPipsStateUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D03518
		bool CheckPunchcardsCompletion(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D03438
	};


	// Class MatchObjectivesUI.MatchObjectivesOptionEntryWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F8 - 0x2B8)
	class UMatchObjectivesOptionEntryWidget : public UUserWidget	
	{
	public:
		bool bIsOptionSelected; // 0x2B8(0x1)
		bool bIsOptionFocused; // 0x2B9(0x1)
		unsigned char UnknownData02_6[0x1E]; // 0x2BA(0x1E) UNKNOWN PROPERTY
		UCommonButtonBase Button_TapSelect; // 0x2D8(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x2E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget");
			return ret;
		}

		void OnTeammateSelectionUpdated(TArray& PlayersThatHaveSelectedThis); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414D03B38
		void OnOptionSelectedStateChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414D03A58
		void OnOptionFocusedStateChanged(bool bIsFocused); // Flags: Event|Protected|BlueprintEvent 0x7FF414D03978
		void OnMatchObjectiveEntrySetup(FUrgentQuestData& UrgentQuestData, FFortItemQuantityPair& VisibleReward, int32_t ObjectiveCount); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D03898
		void OnDailyObjectiveEntrySetup(UAthenaDailyQuestDefinition DailyQuestData, FFortItemQuantityPair& VisibleReward, int32_t ObjectiveCount, int32_t NumCompleted); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D037B8
		void OnDailyObjectiveCountUpdated(int32_t ObjectiveCount, int32_t NumCompleted); // Flags: Event|Protected|BlueprintEvent 0x7FF414D036D8
	};


	// Class MatchObjectivesUI.MatchObjectivesSocialAvatar
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UMatchObjectivesSocialAvatar : public UUserWidget	
	{
	public:
		UFortSocialAvatarIcon Icon_SocialAvatar; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesSocialAvatar");
			return ret;
		}

		void SetSocialAvatarTexture(TWeakObjectPtr& AvatarTexture); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414D03CF8
		void SetSocialAvatar(AFortPlayerState PlayerState); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D03C18
	};


	// Class MatchObjectivesUI.MatchObjectivesUIDirectorBase
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class AMatchObjectivesUIDirectorBase : public ADynamicUIDirectorBase	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x2B0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase");
			return ret;
		}

		void OnQuestOfferingAvailable(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D04078
		void OnFinishSkydiving(); // Flags: Event|Public|BlueprintEvent 0x7FF414D03F98
		void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase); // Flags: Final|Native|Public 0x7FF414D03EB8
		void CheckQuestOffering(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D03DD8
	};


	// Class MatchObjectivesUI.MatchObjectivesSelectorWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x368 - 0x320)
	class UMatchObjectivesSelectorWidget : public UFortHUDElementWidget	
	{
	public:
		UMatchObjectivesBonusPunchWidget Quests_BonusPunchcard; // 0x320(0x8)
		UDynamicEntryBox DynamicEntryBox_OptionEntries; // 0x328(0x8)
		TArray GroupMatches; // 0x330(0x10)
		EMatchQuestsSelectorState WidgetSelectorState; // 0x340(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x341(0x7) UNKNOWN PROPERTY
		UInputComponent MatchObjectivesInputComponent; // 0x348(0x8)
		UCommonButtonBase Button_MobileToggle_Header; // 0x350(0x8)
		UCommonButtonBase Button_MobileToggle_List; // 0x358(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x360(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesSelectorWidget");
			return ret;
		}

		void UpdateKeybindings(); // Flags: Final|Native|Protected 0x7FF414D04698
		void SetSelectorState(EMatchQuestsSelectorState State); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D045B8
		void OnSelectorOpenStateChanged(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414D044D8
		void OnQuestEntrySelected(UUserWidget SelectedEntry); // Flags: Event|Protected|BlueprintEvent 0x7FF414D043F8
		bool IsOpenByDefault(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D04318
		void GetDailyChallengesFromMCP(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D04238
		void BP_OnBonusPunchcardsLoaded(bool bAllPunchcardsCompleted); // Flags: Event|Protected|BlueprintEvent 0x7FF414D04158
	};

}
