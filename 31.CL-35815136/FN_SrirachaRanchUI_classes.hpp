#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SrirachaRanchUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SrirachaRanchUI.RadioStation
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class URadioStation : public UObject	
	{
	public:
		FMulticastInlineDelegate OnStationImageIsLoaded; // 0x28(0x10)
		UEpicCMSImage* StationCMSImage; // 0x38(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchUI.RadioStation");
			return ret;
		}

		void OnLoadingImageComplete(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750784884(relative to base address)
	};


	// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x10 (0x140 - 0x130)
	class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior	
	{
	public:
		UPaperSprite* ToggleRadioOffSprite; // 0x130(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x138(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio");
			return ret;
		}

		void HandleRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& Source); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750784448(relative to base address)
		void HandleRadioPlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& Source); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750784270(relative to base address)
	};


	// Class SrirachaRanchUI.RadioMenuPicker
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x4A0 - 0x3F0)
	class URadioMenuPicker : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UFortPickerOverlay* PickerOverlay_RadioMenu; // 0x3F8(0x8)
		float DelayedSelectionTime; // 0x400(0x4)
		int32_t DelayedSelectionRetryMax; // 0x404(0x4)
		bool bShowBackgroundBlur; // 0x408(0x1)
		bool bShowBackgroundGlow; // 0x409(0x1)
		bool bShowInputHintsBottomBar; // 0x40A(0x1)
		bool bShowRadioStationDetailsPanel; // 0x40B(0x1)
		FPrimaryContentSetup PrimaryContentSetup; // 0x40C(0x3)
		unsigned char UnknownData01_6[0x1]; // 0x40F(0x1) UNKNOWN PROPERTY
		UCommonTextBlock* Text_RadioStationName; // 0x410(0x8)
		UCommonTextBlock* Text_RadioStationCurrentSong; // 0x418(0x8)
		UCommonTextBlock* Text_RadioStationCurrentArtist; // 0x420(0x8)
		UFortKeybindWidget* Keybind_Confirm; // 0x428(0x8)
		UCommonButtonLegacy* Button_Cancel; // 0x430(0x8)
		TArray<URadioStation*> RadioStations; // 0x438(0x10)
		TArray<FDataTableRowHandle> QuickSelectBindings; // 0x448(0x10)
		UStreamingRadioPlayerComponent* CachedRadioPlayerComponent; // 0x458(0x8)
		unsigned char UnknownData02_7[0x40]; // 0x460(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchUI.RadioMenuPicker");
			return ret;
		}

		void OnLoadingStationImageComplete(URadioStation* RadioMenuStation); // Flags: Final|Native|Private, Memory Exec: 0x7FF750784898(relative to base address)
		void HandleRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& Source); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750784534(relative to base address)
		void HandleRadioStarted(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& Source); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75078435C(relative to base address)
		void HandleMetadataChanged(FFortMediaInBandMetadata& MediaMetadata); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF750784188(relative to base address)
	};


	// Class SrirachaRanchUI.RadioPlayerWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x480 - 0x3F0)
	class URadioPlayerWidgetBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x3F0(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PriorityData; // 0x430(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x432(0x6) UNKNOWN PROPERTY
		FDataTableRowHandle PressedObjectInputAction; // 0x438(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x448(0x8) UNKNOWN PROPERTY
		UClass* RadioMenuPickerClass; // 0x450(0x8)
		UCommonActivatableWidget* RadioMenuPickerWidget; // 0x458(0x8)
		UOverlay* Overlay_Keybind; // 0x460(0x8)
		UCommonActionWidget* ToggleActionWidget; // 0x468(0x8)
		UStreamingRadioPlayerComponent* LastValidComp; // 0x470(0x8)
		bool bPickerOpen; // 0x478(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x479(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchUI.RadioPlayerWidgetBase");
			return ret;
		}

		void SetControllable(bool bCanControl); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSourcePlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& Source); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSourceFinished(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& Source); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& LastSource); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPickerDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPickerActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMetadataChanged(FFortMediaInBandMetadata& MediaMetadata); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoadingNewSource(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& Source); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFailedToOpenSource(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation& Source); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnControllerGainedNewFortPawn(AFortPawn* FortPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7507847C0(relative to base address)
		void NativeExitedVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7507847AC(relative to base address)
		void NativeEnteredVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750784798(relative to base address)
		void NativeChangedSeatVehicle(int32_t SeatIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750784718(relative to base address)
		bool IsMetadataEmpty(FFortMediaInBandMetadata& MediaMetadata); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750784620(relative to base address)
		float GetRadioStatusOnScreenTime(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750784158(relative to base address)
	};

}
