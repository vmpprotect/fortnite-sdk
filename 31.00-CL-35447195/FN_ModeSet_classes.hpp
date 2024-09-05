#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ModeSet
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ModeSet/ActivityBrowserModeSetListEntry_PadRight.ActivityBrowserModeSetListEntry_PadRight_C
	// Inherited from UActivityBrowserModeSetListEntry_C -> UFortActivityBrowserModeSetListEntry -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x143F - 0x143F)
	class UActivityBrowserModeSetListEntry_PadRight_C : public UActivityBrowserModeSetListEntry_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ModeSet/ActivityBrowserModeSetListEntry_PadRight.ActivityBrowserModeSetListEntry_PadRight_C");
			return ret;
		}
	};


	// Class /DiscoveryBrowser/ModeSet/ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C
	// Inherited from UFortActivityModeSetSelectionModal -> UFortActivityModeSetSelectionModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x4F0 - 0x478)
	class UActivityModeSetSelectionModal_C : public UFortActivityModeSetSelectionModal	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x8)
		UWidgetAnimation OnImageLoaded; // 0x480(0x8)
		UHorizontalBox HorizontalBox_ModeSelection; // 0x488(0x8)
		UImage Image_Background; // 0x490(0x8)
		UOverlay Overlay; // 0x498(0x8)
		UImage OverlayDim; // 0x4A0(0x8)
		USafeZone SafeZone; // 0x4A8(0x8)
		USafeZone SafeZone_BackButton; // 0x4B0(0x8)
		USizeBox SizeBox_Thumbnail; // 0x4B8(0x8)
		UImage Thumbnail; // 0x4C0(0x8)
		FName ThumbnailParameter; // 0x4C8(0x4)
		FName ThumbnailOpacityParameter; // 0x4CC(0x4)
		double CloseDelay; // 0x4D0(0x8)
		FTimerHandle CloseDelayTimer; // 0x4D8(0x8)
		bool bIsPanelVisible; // 0x4E0(0x1)
		bool IsHabaneroMode; // 0x4E1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4E2(0x6) UNKNOWN PROPERTY
		USoundBase WhooshSound; // 0x4E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ModeSet/ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C");
			return ret;
		}

		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D5B0ADC00
		void OnPreviewImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x15D5B0AD700
		void BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature(bool IsAvailable); // Flags: BlueprintEvent 0x15D5B0ADD00
		void OnSubModeSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0AD600
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0ADB00
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D5B0ADA00
		void CloseModal(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5B0AD900
		void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists); // Flags: Event|Protected|BlueprintEvent 0x15D5B0AD500
		void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable); // Flags: Event|Protected|BlueprintEvent 0x15D5B0AD400
		void ExecuteUbergraph_ActivityModeSetSelectionModal(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5B0AD800
	};

}
