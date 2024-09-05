#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: XpEverywhereUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class XpEverywhereUI.XpEverywhereAccoladesWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x3A0 - 0x320)
	class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x70]; // 0x320(0x70) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x390(0x2)
		unsigned char UnknownData03_7[0xE]; // 0x392(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereAccoladesWidget");
			return ret;
		}

		void OpenWidget(UFortAccoladeItemDefinition AccoladeDef, int32_t XpValue, FText& DisplayName, TWeakObjectPtr& AccoladeLargePreviewImageOverride, FText& SimulatedName, FText& SimulatedText, EFortSimulatedXPSize SimulatedXpSize); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD8020
		void OnStompedByOtherWidget(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD7F40
		void OnEventAdded(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD7E60
		bool HasMoreXPEvents(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DD7D80
		void CloseWidget(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD7CA0
		void AccoladeTriggered(int32_t XpValue, FText& SimulatedName, FText& SimulatedText, TWeakObjectPtr& PreviewImage, EFortSimulatedXPSize SimulatedXpSize, EFortAccoladeType AccoladeType, TWeakObjectPtr& SoundCue, EFortAccoladeTierType AccoladeTier); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD7BC0
	};


	// Class XpEverywhereUI.XpEverywhereBar
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x338 - 0x2E0)
	class UXpEverywhereBar : public UCommonUserWidget	
	{
	public:
		bool bXpBarAlwaysActive; // 0x2E0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2E1(0x7) UNKNOWN PROPERTY
		UFortSocialAvatarIcon SocialAvatarIcon; // 0x2E8(0x8)
		unsigned char UnknownData03_7[0x48]; // 0x2F0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereBar");
			return ret;
		}

		void OnXpBarUpdated(int32_t ShownXP, int32_t ShownLevel, int32_t NewDesiredXP, int32_t NewDesiredLevel, int32_t NewRemainingRestXP); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD83A0
		void OnXpBarInitialized(int32_t CurrentXP, int32_t CurrentLevel, int32_t CurrentRemainingRestXP); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD82C0
		int32_t GetTotalXpRequiredForLevel(int32_t InLevel); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DD81E0
		void DoneUpdatingXpBar(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD8100
	};


	// Class XpEverywhereUI.XpEverywhereLevelUpWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UXpEverywhereLevelUpWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereLevelUpWidget");
			return ret;
		}

		void OnShowWidget(int32_t NewLevel); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD8640
		void DoneLevelingUp(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD8560
		void DisplayLevelUpRewards(); // Flags: Final|Native|Protected|BlueprintCallable|Const 0x7FF414DD8480
	};


	// Class XpEverywhereUI.XpEverywhereReticleWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x338 - 0x320)
	class UXpEverywhereReticleWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x320(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereReticleWidget");
			return ret;
		}

		void UpdateXPSource(FText& NewSourceText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DD8AA0
		void UpdateXPAmount(int32_t NewAmount, USoundCue Cue, EFortSimulatedXPSize SimulatedXpSize); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD89C0
		void UpdateRestXP(int32_t RestXpRemaining); // Flags: Event|Protected|BlueprintEvent 0x7FF414DD88E0
		void HandleProfileUpdated(); // Flags: Final|Native|Protected 0x7FF414DD8800
		void ForwardEvents(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DD8720
	};


	// Class XpEverywhereUI.XpEverywhereRewardWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x3B0 - 0x320)
	class UXpEverywhereRewardWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData03_3[0x48]; // 0x320(0x48) UNKNOWN PROPERTY
		UClass DefaultEntryClass; // 0x368(0x8)
		bool bHasPrioritizedWidgetFocus; // 0x370(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x371(0x7) UNKNOWN PROPERTY
		UFortNotificationEntry ActiveWidget; // 0x378(0x8)
		TArray WidgetQueue; // 0x380(0x10)
		UVerticalBox NotificationUpdatesBox; // 0x390(0x8)
		TArray NotificationClassPoolData; // 0x398(0x10)
		FFortPrioritizedWidgetData PrioritizationData; // 0x3A8(0x2)
		unsigned char UnknownData05_7[0x6]; // 0x3AA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereRewardWidget");
			return ret;
		}

		void HandleNotificationUpdateFinished(); // Flags: Final|Native|Protected 0x7FF414DD8B80
	};


	// Class XpEverywhereUI.XpEverywhereUIComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UXpEverywhereUIComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0xA8]; // 0xA0(0xA8) UNKNOWN PROPERTY
		FGameplayTagContainer XpEverywhereHiddenElementTags; // 0x148(0x20)
		unsigned char UnknownData03_7[0x10]; // 0x168(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereUIComponent");
			return ret;
		}

		void HandleControllerComponentAdded(AFortPlayerController OwnerController, UFortControllerComponent AttachedComponent); // Flags: Final|Native|Private 0x7FF414DD8C60
	};

}
