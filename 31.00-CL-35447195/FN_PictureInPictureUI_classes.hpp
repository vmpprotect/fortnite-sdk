#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PictureInPictureUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PictureInPictureUI.PictureInPictureBladeMenuButton
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x13E0 - 0x13E0)
	class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPictureBladeMenuButton");
			return ret;
		}

		void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled); // Flags: Event|Public|BlueprintEvent 0x7FF414D10A98
		void OnPartnerListUpdated(); // Flags: Final|Native|Private 0x7FF414D109B8
		void HandlePiPLogoutSuccess(); // Flags: Final|Native|Public 0x7FF414D108D8
		void HandlePiPLoginSuccess(); // Flags: Final|Native|Public 0x7FF414D107F8
		void HandlePiPEnabled(bool Enabled); // Flags: Final|Native|Public 0x7FF414D10718
	};


	// Class PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UPictureInPictureLoadingScreenOverlayAction : public UFortUIGameFeatureAction	
	{
	public:
		USubtitleDisplayNative SubtitleDisplay; // 0x28(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x30(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction");
			return ret;
		}
	};


	// Class PictureInPictureUI.PictureInPictureMetadataOverlay
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F8 - 0x3F8)
	class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPictureMetadataOverlay");
			return ret;
		}

		void OnMediaStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D10D38
		void HandleOnPIPVideoStarted(); // Flags: Final|Native|Protected 0x7FF414D10C58
		void HandleOnPIPVideoResumed(); // Flags: Final|Native|Protected 0x7FF414D10B78
	};


	// Class PictureInPictureUI.PictureInPicturePanelWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x328 (0x720 - 0x3F8)
	class UPictureInPicturePanelWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		USizeBox Video_Size_Box; // 0x400(0x8)
		FVector2D StandardVideoSize; // 0x408(0x10)
		FVector2D StandardVideoTranslation; // 0x418(0x10)
		FMargin FrontEndSubtitleMargin; // 0x428(0x10)
		FMargin GameSubtitleMargin; // 0x438(0x10)
		UImage Image_Movie; // 0x448(0x8)
		UCommonLazyImage Image_Thumbnail_Prev; // 0x450(0x8)
		UCommonLazyImage Image_Thumbnail_Next; // 0x458(0x8)
		UNamedSlot MetadataOverlaySlot; // 0x460(0x8)
		UOverlay Overlay_Main; // 0x468(0x8)
		UOverlay Overlay_Keybind; // 0x470(0x8)
		FDataTableRowHandle PressedObjectInputAction; // 0x478(0x10)
		unsigned char UnknownData06_6[0x8]; // 0x488(0x8) UNKNOWN PROPERTY
		UPictureInPicturePartnerControls CurrentPartner; // 0x490(0x8)
		bool bEnableUCPCheck; // 0x498(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x499(0x7) UNKNOWN PROPERTY
		UClass SourcePickerClass; // 0x4A0(0x8)
		USoundSourceBus SourceBus; // 0x4A8(0x8)
		UCommonActionWidget ToggleActionWidget; // 0x4B0(0x8)
		UCommonActivatableWidget SourcePickerWidget; // 0x4B8(0x8)
		UPictureInPicturePlayer VideoWidget; // 0x4C0(0x8)
		unsigned char UnknownData08_6[0x50]; // 0x4C8(0x50) UNKNOWN PROPERTY
		UAudioComponent PIPSoundComponent; // 0x518(0x8)
		FPiPPartnerSource CurrentSource; // 0x520(0x1F0)
		unsigned char UnknownData09_6[0x8]; // 0x710(0x8) UNKNOWN PROPERTY
		USubtitleDisplay Subtitles; // 0x718(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPicturePanelWidget");
			return ret;
		}

		void ToggleFullScreenPiP(); // Flags: Final|Native|Protected 0x7FF414D117B8
		void ShowDebugInfo(bool bShow); // Flags: Event|Protected|BlueprintEvent 0x7FF414D116D8
		void SetupPIPSoundComponent(FFortMediaEventsStreamAssets& InStreamAssets); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414D115F8
		void IntentionalDeactivate(); // Flags: Final|Native|Protected 0x7FF414D11518
		void HandleToggleFullscreenMap(bool bFullscreenMapVisible); // Flags: Final|Native|Protected 0x7FF414D11438
		void HandleOnPartnerSourceChanged(FPiPPartnerSource& InSelectedSource); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D11358
		void HandleOnPartnerListUpdated(); // Flags: Final|Native|Protected 0x7FF414D11278
		void HandleOnPartnerChanged(UPictureInPicturePartnerControls NewPartnerControls); // Flags: Final|Native|Protected 0x7FF414D11198
		void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled); // Flags: Final|Native|Protected 0x7FF414D110B8
		void FlipPIPAudioSubmix(bool bInDefault, FFortMediaEventsStreamAssets& InStreamAssets, bool bForce); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414D10FD8
		void DestroyPIPSoundComponent(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414D10EF8
		void AutoEnableController(); // Flags: Final|Native|Private 0x7FF414D10E18
	};


	// Class PictureInPictureUI.PictureInPictureSourcePicker
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x5D0 - 0x3F8)
	class UPictureInPictureSourcePicker : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FVector2D FullScreenTranslation; // 0x400(0x10)
		FVector2D StandardTranslation; // 0x410(0x10)
		UVerticalBox VerticalBox_Main; // 0x420(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
		FSlateBrush FullScreenActionBrush; // 0x430(0xB0)
		FSlateBrush StandardScreenActionBrush; // 0x4E0(0xB0)
		unsigned char UnknownData07_6[0x1]; // 0x590(0x1) UNKNOWN PROPERTY
		FPrimaryContentSetup PrimaryContentSetup; // 0x591(0x3)
		unsigned char UnknownData08_6[0x4]; // 0x594(0x4) UNKNOWN PROPERTY
		UCommonTextBlock Text_ItemName; // 0x598(0x8)
		UFortPickerOverlay PickerOverlay_MediaSource; // 0x5A0(0x8)
		UOverlay Overlay_Main; // 0x5A8(0x8)
		UTexture2D DefaultItemTexture; // 0x5B0(0x8)
		UPictureInPictureMediaController CurrentPartner; // 0x5B8(0x8)
		unsigned char UnknownData09_7[0x10]; // 0x5C0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPictureSourcePicker");
			return ret;
		}

		void HandleOnPartnerSourceChanged(TArray& CurrentSources); // Flags: Final|Native|Private|HasOutParms 0x7FF414D11978
		void HandleOnPartnerChanged(UPictureInPicturePartnerControls NewPartner); // Flags: Final|Native|Private 0x7FF414D11898
	};

}
