#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MatchObjectivesUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x10 (0x140 - 0x130)
	class UFortMobileButtonBehaviorComponent_MatchObjectivePicker : public UFortMobileActionButtonBehavior	
	{
	public:
		UFortControllerComponent_SkydiveFeedback* SkydiveFeedbackComp; // 0x130(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x138(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker");
			return ret;
		}

		void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7513EAB3C(relative to base address)
	};


	// Class MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper
	// Inherited from UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x360 - 0x348)
	class UFortMobileHUDElement_ObjectiveSelectorWrapper : public UFortMobileHUDElement	
	{
	public:
		UFortPlayerStateComponent_MatchQuests* MatchQuestsComponent; // 0x348(0x8)
		UOverlay* Overlay_WrapperContents; // 0x350(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x358(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper");
			return ret;
		}

		void HandleSkydiveFromBusAndLandingCompleted(bool bSkydivedFromBusAndLanded); // Flags: Final|Native|Public, Memory Exec: 0x7FF7513EAA3C(relative to base address)
	};


	// Class MatchObjectivesUI.MatchObjectivesBonusEntryWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UMatchObjectivesBonusEntryWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* Text_Reward; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesBonusEntryWidget");
			return ret;
		}

		void UpdateBonusRewardCompleteState(bool GoalIsCompleted); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBonusRewardEntrySet(int32_t Quantity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasBeenCompleted(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FC51498(relative to base address)
	};


	// Class MatchObjectivesUI.MatchObjectivesBonusPunchWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x350 - 0x2B0)
	class UMatchObjectivesBonusPunchWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x2B0(0x18) UNKNOWN PROPERTY
		FText TextExpiredQuest; // 0x2C8(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x2D8(0x18) UNKNOWN PROPERTY
		FGameplayTagContainer InclusiveFilterTags; // 0x2F0(0x20)
		FGameplayTagContainer ExclusiveFilterTags; // 0x310(0x20)
		UCommonDateTimeTextBlock* Text_ResetTimer; // 0x330(0x8)
		UFortDynamicEntryBox* DynamicEntryBox_DailyBonusPips; // 0x338(0x8)
		TArray<UMatchObjectivesBonusEntryWidget*> WidgetsPips; // 0x340(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesBonusPunchWidget");
			return ret;
		}

		void UpdateTimerState(bool bIsTimerValid, EAthenaChallengeTimerState TimerState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWidgetPipsStateUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CheckPunchcardsCompletion(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513EA9D0(relative to base address)
	};


	// Class MatchObjectivesUI.MatchObjectivesOptionEntryWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F0 - 0x2B0)
	class UMatchObjectivesOptionEntryWidget : public UUserWidget	
	{
	public:
		bool bIsOptionSelected; // 0x2B0(0x1)
		bool bIsOptionFocused; // 0x2B1(0x1)
		unsigned char UnknownData00_6[0x1E]; // 0x2B2(0x1E) UNKNOWN PROPERTY
		UCommonButtonBase* Button_TapSelect; // 0x2D0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x2D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget");
			return ret;
		}

		void OnTeammateSelectionUpdated(TArray<AFortPlayerState*>& PlayersThatHaveSelectedThis); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOptionSelectedStateChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOptionFocusedStateChanged(bool bIsFocused); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMatchObjectiveEntrySetup(FUrgentQuestData& UrgentQuestData, FFortItemQuantityPair& VisibleReward, int32_t ObjectiveCount); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDailyObjectiveEntrySetup(UAthenaDailyQuestDefinition* DailyQuestData, FFortItemQuantityPair& VisibleReward, int32_t ObjectiveCount, int32_t NumCompleted); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDailyObjectiveCountUpdated(int32_t ObjectiveCount, int32_t NumCompleted); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MatchObjectivesUI.MatchObjectivesSocialAvatar
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UMatchObjectivesSocialAvatar : public UUserWidget	
	{
	public:
		UFortSocialAvatarIcon* Icon_SocialAvatar; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesSocialAvatar");
			return ret;
		}

		void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*>& AvatarTexture); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513EAD0C(relative to base address)
		void SetSocialAvatar(AFortPlayerState* PlayerState); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513EAC84(relative to base address)
	};


	// Class MatchObjectivesUI.MatchObjectivesUIDirectorBase
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class AMatchObjectivesUIDirectorBase : public ADynamicUIDirectorBase	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x2B0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase");
			return ret;
		}

		void OnQuestOfferingAvailable(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFinishSkydiving(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase); // Flags: Final|Native|Public, Memory Exec: 0x7FF7513EAABC(relative to base address)
		void CheckQuestOffering(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513EA9F4(relative to base address)
	};


	// Class MatchObjectivesUI.MatchObjectivesSelectorWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x360 - 0x318)
	class UMatchObjectivesSelectorWidget : public UFortHUDElementWidget	
	{
	public:
		UMatchObjectivesBonusPunchWidget* Quests_BonusPunchcard; // 0x318(0x8)
		UDynamicEntryBox* DynamicEntryBox_OptionEntries; // 0x320(0x8)
		TArray<FString> GroupMatches; // 0x328(0x10)
		EMatchQuestsSelectorState WidgetSelectorState; // 0x338(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x339(0x7) UNKNOWN PROPERTY
		UInputComponent* MatchObjectivesInputComponent; // 0x340(0x8)
		UCommonButtonBase* Button_MobileToggle_Header; // 0x348(0x8)
		UCommonButtonBase* Button_MobileToggle_List; // 0x350(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x358(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MatchObjectivesUI.MatchObjectivesSelectorWidget");
			return ret;
		}

		void UpdateKeybindings(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7513EADB4(relative to base address)
		void SetSelectorState(EMatchQuestsSelectorState State); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513EAC04(relative to base address)
		void OnSelectorOpenStateChanged(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQuestEntrySelected(UUserWidget* SelectedEntry); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsOpenByDefault(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513EABBC(relative to base address)
		void GetDailyChallengesFromMCP(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513EAA28(relative to base address)
		void BP_OnBonusPunchcardsLoaded(bool bAllPunchcardsCompleted); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
