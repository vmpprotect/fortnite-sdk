#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SpecialEventGameplayUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SpecialEventGameplayUI.FortGameplayCinematicHostWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x350 - 0x318)
	class UFortGameplayCinematicHostWidget : public UFortHUDElementWidget	
	{
	public:
		FName IntroWidgetEntryName; // 0x318(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x31C(0x4) UNKNOWN PROPERTY
		TArray<FCinematicWidgetData> WidgetEntries; // 0x320(0x10)
		UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition; // 0x330(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x338(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.FortGameplayCinematicHostWidget");
			return ret;
		}
	};


	// Class SpecialEventGameplayUI.FortGameplayCinematicWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x410 - 0x3F0)
	class UFortGameplayCinematicWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		bool bSkipCinematics; // 0x3F8(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x3F9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.FortGameplayCinematicWidget");
			return ret;
		}

		void OnStartCinematic(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCinematicFinished(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751559774(relative to base address)
	};


	// Class SpecialEventGameplayUI.FortGameplayIntroPanelWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x410 - 0x3F0)
	class UFortGameplayIntroPanelWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x3F0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.FortGameplayIntroPanelWidget");
			return ret;
		}

		void OnWaitingForReadyForGameplay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWaitingForPawn(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWaitingForMinTime(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartIntro(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIntroFinished(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751559B60(relative to base address)
	};


	// Class SpecialEventGameplayUI.SpecialEventCursorWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D0 - 0x2B0)
	class USpecialEventCursorWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		bool bAutomaticallyChangeVisibility; // 0x2B8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2B9(0x7) UNKNOWN PROPERTY
		USpecialEventCursorPawnComponent* CursorPawnComponent; // 0x2C0(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.SpecialEventCursorWidget");
			return ret;
		}

		void OnViewportLocationChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FVector2D& NormalizedLocation, FVector2D& ViewportLocation); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF751559B74(relative to base address)
		void OnDesiredVisibilityChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751559948(relative to base address)
		void OnCursorModeChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751559788(relative to base address)
		FGameplayTagContainer GetCursorModeTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751559610(relative to base address)
		void BP_OnDesiredVisibilityChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCursorModeChanged(USpecialEventCursorPawnComponent* InCursorPawnComponent, FGameplayTag& NewCursorModeTag, FGameplayTag& OldCursorModeTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SpecialEventGameplayUI.SpecialEventPlayerInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x338 - 0x318)
	class USpecialEventPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRepresentedPlayerStateChanged; // 0x320(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x330(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SpecialEventGameplayUI.SpecialEventPlayerInfoWidget");
			return ret;
		}

		AFortPlayerStateAthena GetRepresentedPlayerState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75155964C(relative to base address)
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

		void HideFrontEndStateWidget(UObject* WorldContextObject, bool bNewlyHidden); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751559674(relative to base address)
	};

}
