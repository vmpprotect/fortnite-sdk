#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SpecialEventGameplayUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x358 - 0x320)
	class UFortGameplayCinematicHostWidget : public UFortHUDElementWidget	
	{
	public:
		FName IntroWidgetEntryName; // 0x320(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x324(0x4) UNKNOWN PROPERTY
		TArray WidgetEntries; // 0x328(0x10)
		UAthenaLoadingScreenItemDefinition LoadingScreenDefinition; // 0x338(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x340(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.FortGameplayCinematicHostWidget");
			return ret;
		}
	};


	// Class SpecialEventGameplayUI.FortGameplayCinematicWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x418 - 0x3F8)
	class UFortGameplayCinematicWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		bool bSkipCinematics; // 0x400(0x1)
		unsigned char UnknownData03_7[0x17]; // 0x401(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.FortGameplayCinematicWidget");
			return ret;
		}

		void OnStartCinematic(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4C1D8
		void OnCinematicFinished(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D4C0F8
	};


	// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x418 - 0x3F8)
	class UFortGameplayIntroPanelWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x3F8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget");
			return ret;
		}

		void OnWaitingForReadyForGameplay(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4C638
		void OnWaitingForPawn(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4C558
		void OnWaitingForMinTime(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4C478
		void OnStartIntro(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D4C398
		void OnIntroFinished(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D4C2B8
	};


	// Class SpecialEventGameplayUI.SpecialEventCursorWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D8 - 0x2B8)
	class USpecialEventCursorWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		bool bAutomaticallyChangeVisibility; // 0x2C0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		USpecialEventCursorPawnComponent CursorPawnComponent; // 0x2C8(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x2D0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.SpecialEventCursorWidget");
			return ret;
		}

		void OnViewportLocationChanged(USpecialEventCursorPawnComponent InCursorPawnComponent, FVector2D& NormalizedLocation, FVector2D& ViewportLocation); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414D4CB78
		void OnDesiredVisibilityChanged(USpecialEventCursorPawnComponent InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Flags: Final|Native|Private|HasOutParms 0x7FF414D4CA98
		void OnCursorModeChanged(USpecialEventCursorPawnComponent InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // Flags: Final|Native|Private|HasOutParms 0x7FF414D4C9B8
		FGameplayTagContainer GetCursorModeTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4C8D8
		void BP_OnDesiredVisibilityChanged(USpecialEventCursorPawnComponent InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D4C7F8
		void BP_OnCursorModeChanged(USpecialEventCursorPawnComponent InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D4C718
	};


	// Class SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x340 - 0x320)
	class USpecialEventPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x320(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRepresentedPlayerStateChanged; // 0x328(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x338(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget");
			return ret;
		}

		AFortPlayerStateAthena GetRepresentedPlayerState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D4CC58
	};


	// Class SpecialEventGameplayUI.SpecialEventUILibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USpecialEventUILibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.SpecialEventUILibrary");
			return ret;
		}

		void HideFrontEndStateWidget(UObject WorldContextObject, bool bNewlyHidden); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D4CD38
	};

}
