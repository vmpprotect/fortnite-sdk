#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: XpEverywhereUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class XpEverywhereUI.XpEverywhereAccoladesWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x3A0 - 0x318)
	class UXpEverywhereAccoladesWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x78]; // 0x318(0x78) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x390(0x2)
		unsigned char UnknownData01_7[0xE]; // 0x392(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereAccoladesWidget");
			return ret;
		}

		void OpenWidget(UFortAccoladeItemDefinition* AccoladeDef, int32_t XpValue, FText& DisplayName, TWeakObjectPtr<UTexture2D*>& AccoladeLargePreviewImageOverride, FText& SimulatedName, FText& SimulatedText, EFortSimulatedXPSize SimulatedXpSize); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStompedByOtherWidget(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventAdded(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasMoreXPEvents(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A16EC(relative to base address)
		void CloseWidget(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7519167A0(relative to base address)
		void AccoladeTriggered(int32_t XpValue, FText& SimulatedName, FText& SimulatedText, TWeakObjectPtr<UTexture2D*>& PreviewImage, EFortSimulatedXPSize SimulatedXpSize, EFortAccoladeType AccoladeType, TWeakObjectPtr<USoundCue*>& SoundCue, EFortAccoladeTierType AccoladeTier); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class XpEverywhereUI.XpEverywhereBar
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x330 - 0x2D8)
	class UXpEverywhereBar : public UCommonUserWidget	
	{
	public:
		bool bXpBarAlwaysActive; // 0x2D8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY
		UFortSocialAvatarIcon* SocialAvatarIcon; // 0x2E0(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x2E8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereBar");
			return ret;
		}

		void OnXpBarUpdated(int32_t ShownXP, int32_t ShownLevel, int32_t NewDesiredXP, int32_t NewDesiredLevel, int32_t NewRemainingRestXP); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnXpBarInitialized(int32_t CurrentXP, int32_t CurrentLevel, int32_t CurrentRemainingRestXP); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetTotalXpRequiredForLevel(int32_t InLevel); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751916868(relative to base address)
		void DoneUpdatingXpBar(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751916840(relative to base address)
	};


	// Class XpEverywhereUI.XpEverywhereLevelUpWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UXpEverywhereLevelUpWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereLevelUpWidget");
			return ret;
		}

		void OnShowWidget(int32_t NewLevel); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoneLevelingUp(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7519167FC(relative to base address)
		void DisplayLevelUpRewards(); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF7519167B4(relative to base address)
	};


	// Class XpEverywhereUI.XpEverywhereReticleWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x330 - 0x318)
	class UXpEverywhereReticleWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x318(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereReticleWidget");
			return ret;
		}

		void UpdateXPSource(FText& NewSourceText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateXPAmount(int32_t NewAmount, USoundCue* Cue, EFortSimulatedXPSize SimulatedXpSize); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRestXP(int32_t RestXpRemaining); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleProfileUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751916A1C(relative to base address)
		void ForwardEvents(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751916854(relative to base address)
	};


	// Class XpEverywhereUI.XpEverywhereRewardWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x3A8 - 0x318)
	class UXpEverywhereRewardWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x318(0x48) UNKNOWN PROPERTY
		UClass* DefaultEntryClass; // 0x360(0x8)
		bool bHasPrioritizedWidgetFocus; // 0x368(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x369(0x7) UNKNOWN PROPERTY
		UFortNotificationEntry* ActiveWidget; // 0x370(0x8)
		TArray<UFortNotificationEntry*> WidgetQueue; // 0x378(0x10)
		UVerticalBox* NotificationUpdatesBox; // 0x388(0x8)
		TArray<FXpEverywhereNotificationWidgetClass> NotificationClassPoolData; // 0x390(0x10)
		FFortPrioritizedWidgetData PrioritizationData; // 0x3A0(0x2)
		unsigned char UnknownData02_7[0x6]; // 0x3A2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereRewardWidget");
			return ret;
		}

		void HandleNotificationUpdateFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751916A08(relative to base address)
	};


	// Class XpEverywhereUI.XpEverywhereUIComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UXpEverywhereUIComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0xA8]; // 0xA0(0xA8) UNKNOWN PROPERTY
		FGameplayTagContainer XpEverywhereHiddenElementTags; // 0x148(0x20)
		unsigned char UnknownData01_7[0x10]; // 0x168(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/XpEverywhereUI.XpEverywhereUIComponent");
			return ret;
		}

		void HandleControllerComponentAdded(AFortPlayerController* OwnerController, UFortControllerComponent* AttachedComponent); // Flags: Final|Native|Private, Memory Exec: 0x7FF7519168F4(relative to base address)
	};

}
