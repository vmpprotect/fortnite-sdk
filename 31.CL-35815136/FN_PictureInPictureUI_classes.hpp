#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PictureInPictureUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPartnerListUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF748A71B0C(relative to base address)
		void HandlePiPLogoutSuccess(); // Flags: Final|Native|Public, Memory Exec: 0x7FF749B404EC(relative to base address)
		void HandlePiPLoginSuccess(); // Flags: Final|Native|Public, Memory Exec: 0x7FF749B404EC(relative to base address)
		void HandlePiPEnabled(bool Enabled); // Flags: Final|Native|Public, Memory Exec: 0x7FF751495DA8(relative to base address)
	};


	// Class PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class UPictureInPictureLoadingScreenOverlayAction : public UFortUIGameFeatureAction	
	{
	public:
		USubtitleDisplayNative* SubtitleDisplay; // 0x28(0x8)
		unsigned char UnknownData00_7[0x30]; // 0x30(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction");
			return ret;
		}
	};


	// Class PictureInPictureUI.PictureInPictureMetadataOverlay
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F0 - 0x3F0)
	class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPictureMetadataOverlay");
			return ret;
		}

		void OnMediaStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnPIPVideoStarted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514959A8(relative to base address)
		void HandleOnPIPVideoResumed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514959A8(relative to base address)
	};


	// Class PictureInPictureUI.PictureInPicturePanelWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x328 (0x718 - 0x3F0)
	class UPictureInPicturePanelWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		USizeBox* Video_Size_Box; // 0x3F8(0x8)
		FVector2D StandardVideoSize; // 0x400(0x10)
		FVector2D StandardVideoTranslation; // 0x410(0x10)
		FMargin FrontEndSubtitleMargin; // 0x420(0x10)
		FMargin GameSubtitleMargin; // 0x430(0x10)
		UImage* Image_Movie; // 0x440(0x8)
		UCommonLazyImage* Image_Thumbnail_Prev; // 0x448(0x8)
		UCommonLazyImage* Image_Thumbnail_Next; // 0x450(0x8)
		UNamedSlot* MetadataOverlaySlot; // 0x458(0x8)
		UOverlay* Overlay_Main; // 0x460(0x8)
		UOverlay* Overlay_Keybind; // 0x468(0x8)
		FDataTableRowHandle PressedObjectInputAction; // 0x470(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x480(0x8) UNKNOWN PROPERTY
		UPictureInPicturePartnerControls* CurrentPartner; // 0x488(0x8)
		bool bEnableUCPCheck; // 0x490(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x491(0x7) UNKNOWN PROPERTY
		UClass* SourcePickerClass; // 0x498(0x8)
		USoundSourceBus* SourceBus; // 0x4A0(0x8)
		UCommonActionWidget* ToggleActionWidget; // 0x4A8(0x8)
		UCommonActivatableWidget* SourcePickerWidget; // 0x4B0(0x8)
		UPictureInPicturePlayer* VideoWidget; // 0x4B8(0x8)
		unsigned char UnknownData03_6[0x50]; // 0x4C0(0x50) UNKNOWN PROPERTY
		UAudioComponent* PIPSoundComponent; // 0x510(0x8)
		FPiPPartnerSource CurrentSource; // 0x518(0x1F0)
		unsigned char UnknownData04_6[0x8]; // 0x708(0x8) UNKNOWN PROPERTY
		USubtitleDisplay* Subtitles; // 0x710(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPicturePanelWidget");
			return ret;
		}

		void ToggleFullScreenPiP(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751495F80(relative to base address)
		void ShowDebugInfo(bool bShow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupPIPSoundComponent(FFortMediaEventsStreamAssets& InStreamAssets); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751495EA4(relative to base address)
		void IntentionalDeactivate(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF749FC5504(relative to base address)
		void HandleToggleFullscreenMap(bool bFullscreenMapVisible); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751495E24(relative to base address)
		void HandleOnPartnerSourceChanged(FPiPPartnerSource& InSelectedSource); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751495C48(relative to base address)
		void HandleOnPartnerListUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF748A70E7C(relative to base address)
		void HandleOnPartnerChanged(UPictureInPicturePartnerControls* NewPartnerControls); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7514959BC(relative to base address)
		void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751495928(relative to base address)
		void FlipPIPAudioSubmix(bool bInDefault, FFortMediaEventsStreamAssets& InStreamAssets, bool bForce); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75149573C(relative to base address)
		void DestroyPIPSoundComponent(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751495728(relative to base address)
		void AutoEnableController(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751495714(relative to base address)
	};


	// Class PictureInPictureUI.PictureInPictureSourcePicker
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D0 (0x5C0 - 0x3F0)
	class UPictureInPictureSourcePicker : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FVector2D FullScreenTranslation; // 0x3F8(0x10)
		FVector2D StandardTranslation; // 0x408(0x10)
		UVerticalBox* VerticalBox_Main; // 0x418(0x8)
		FSlateBrush FullScreenActionBrush; // 0x420(0xB0)
		FSlateBrush StandardScreenActionBrush; // 0x4D0(0xB0)
		unsigned char UnknownData01_6[0x1]; // 0x580(0x1) UNKNOWN PROPERTY
		FPrimaryContentSetup PrimaryContentSetup; // 0x581(0x3)
		unsigned char UnknownData02_6[0x4]; // 0x584(0x4) UNKNOWN PROPERTY
		UCommonTextBlock* Text_ItemName; // 0x588(0x8)
		UFortPickerOverlay* PickerOverlay_MediaSource; // 0x590(0x8)
		UOverlay* Overlay_Main; // 0x598(0x8)
		UTexture2D* DefaultItemTexture; // 0x5A0(0x8)
		UPictureInPictureMediaController* CurrentPartner; // 0x5A8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x5B0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PictureInPictureUI.PictureInPictureSourcePicker");
			return ret;
		}

		void HandleOnPartnerSourceChanged(TArray<FPiPPartnerSource>& CurrentSources); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751495D0C(relative to base address)
		void HandleOnPartnerChanged(UPictureInPicturePartnerControls* NewPartner); // Flags: Final|Native|Private, Memory Exec: 0x7FF751495BC4(relative to base address)
	};

}
