#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SrirachaRanchUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SrirachaRanchUI.RadioStation
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class URadioStation : public UObject	
	{
	public:
		FMulticastInlineDelegate OnStationImageIsLoaded; // 0x28(0x10)
		UEpicCMSImage StationCMSImage; // 0x38(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchUI.RadioStation");
			return ret;
		}

		void OnLoadingImageComplete(); // Flags: Final|Native|Private 0x7FF414BED558
	};


	// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x10 (0x140 - 0x130)
	class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior	
	{
	public:
		UPaperSprite ToggleRadioOffSprite; // 0x130(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x138(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio");
			return ret;
		}

		void HandleRadioStopped(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& Source); // Flags: Final|Native|Private|HasOutParms 0x7FF414BED718
		void HandleRadioPlaying(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& Source); // Flags: Final|Native|Private|HasOutParms 0x7FF414BED638
	};


	// Class SrirachaRanchUI.RadioMenuPicker
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x4A8 - 0x3F8)
	class URadioMenuPicker : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UFortPickerOverlay PickerOverlay_RadioMenu; // 0x400(0x8)
		float DelayedSelectionTime; // 0x408(0x4)
		int32_t DelayedSelectionRetryMax; // 0x40C(0x4)
		bool bShowBackgroundBlur; // 0x410(0x1)
		bool bShowBackgroundGlow; // 0x411(0x1)
		bool bShowInputHintsBottomBar; // 0x412(0x1)
		bool bShowRadioStationDetailsPanel; // 0x413(0x1)
		FPrimaryContentSetup PrimaryContentSetup; // 0x414(0x3)
		unsigned char UnknownData04_6[0x1]; // 0x417(0x1) UNKNOWN PROPERTY
		UCommonTextBlock Text_RadioStationName; // 0x418(0x8)
		UCommonTextBlock Text_RadioStationCurrentSong; // 0x420(0x8)
		UCommonTextBlock Text_RadioStationCurrentArtist; // 0x428(0x8)
		UFortKeybindWidget Keybind_Confirm; // 0x430(0x8)
		UCommonButtonLegacy Button_Cancel; // 0x438(0x8)
		TArray RadioStations; // 0x440(0x10)
		TArray QuickSelectBindings; // 0x450(0x10)
		UStreamingRadioPlayerComponent CachedRadioPlayerComponent; // 0x460(0x8)
		unsigned char UnknownData05_7[0x40]; // 0x468(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchUI.RadioMenuPicker");
			return ret;
		}

		void OnLoadingStationImageComplete(URadioStation RadioMenuStation); // Flags: Final|Native|Private 0x7FF414BEDA98
		void HandleRadioStopped(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& Source); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BED9B8
		void HandleRadioStarted(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& Source); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BED8D8
		void HandleMetadataChanged(FFortMediaInBandMetadata& MediaMetadata); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BED7F8
	};


	// Class SrirachaRanchUI.RadioPlayerWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x488 - 0x3F8)
	class URadioPlayerWidgetBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData04_3[0x40]; // 0x3F8(0x40) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PriorityData; // 0x438(0x2)
		unsigned char UnknownData05_6[0x6]; // 0x43A(0x6) UNKNOWN PROPERTY
		FDataTableRowHandle PressedObjectInputAction; // 0x440(0x10)
		unsigned char UnknownData06_6[0x8]; // 0x450(0x8) UNKNOWN PROPERTY
		UClass RadioMenuPickerClass; // 0x458(0x8)
		UCommonActivatableWidget RadioMenuPickerWidget; // 0x460(0x8)
		UOverlay Overlay_Keybind; // 0x468(0x8)
		UCommonActionWidget ToggleActionWidget; // 0x470(0x8)
		UStreamingRadioPlayerComponent LastValidComp; // 0x478(0x8)
		bool bPickerOpen; // 0x480(0x1)
		unsigned char UnknownData07_7[0x7]; // 0x481(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchUI.RadioPlayerWidgetBase");
			return ret;
		}

		void SetControllable(bool bCanControl); // Flags: Event|Protected|BlueprintEvent 0x7FF414BEE7B8
		void OnSourcePlaying(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& Source); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEE6D8
		void OnSourceFinished(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& Source); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEE5F8
		void OnRadioStopped(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& LastSource); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEE518
		void OnPickerDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BEE438
		void OnPickerActivated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BEE358
		void OnMetadataChanged(FFortMediaInBandMetadata& MediaMetadata); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEE278
		void OnLoadingNewSource(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& Source); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEE198
		void OnFailedToOpenSource(UStreamingRadioPlayerComponent Radio, FAthenaRadioStation& Source); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEE0B8
		void OnControllerGainedNewFortPawn(AFortPawn FortPawn); // Flags: Final|Native|Protected 0x7FF414BEDFD8
		void NativeExitedVehicle(); // Flags: Final|Native|Protected 0x7FF414BEDEF8
		void NativeEnteredVehicle(); // Flags: Final|Native|Protected 0x7FF414BEDE18
		void NativeChangedSeatVehicle(int32_t SeatIndex); // Flags: Final|Native|Protected 0x7FF414BEDD38
		bool IsMetadataEmpty(FFortMediaInBandMetadata& MediaMetadata); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BEDC58
		float GetRadioStatusOnScreenTime(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF414BEDB78
	};

}
