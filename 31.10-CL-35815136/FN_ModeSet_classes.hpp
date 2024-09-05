#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ModeSet
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ModeSet/ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C
	// Inherited from UFortActivityModeSetSelectionModal -> UFortActivityModeSetSelectionModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x500 - 0x470)
	class UActivityModeSetSelectionModal_C : public UFortActivityModeSetSelectionModal	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x8)
		UFortLocalPlayerVM* FortLocalPlayerVM; // 0x478(0x8)
		UFortActivityViewModel* FortActivityViewModel; // 0x480(0x8)
		UWidgetAnimation* OnImageLoaded; // 0x488(0x8)
		UHorizontalBox* HorizontalBox_ModeSelection; // 0x490(0x8)
		UImage* Image_Background; // 0x498(0x8)
		UOverlay* Overlay; // 0x4A0(0x8)
		UImage* OverlayDim; // 0x4A8(0x8)
		USafeZone* SafeZone; // 0x4B0(0x8)
		USafeZone* SafeZone_BackButton; // 0x4B8(0x8)
		USizeBox* SizeBox_Thumbnail; // 0x4C0(0x8)
		UHorizontalBox* SplitscreenPrompt; // 0x4C8(0x8)
		UImage* Thumbnail; // 0x4D0(0x8)
		FName ThumbnailParameter; // 0x4D8(0x4)
		FName ThumbnailOpacityParameter; // 0x4DC(0x4)
		double CloseDelay; // 0x4E0(0x8)
		FTimerHandle CloseDelayTimer; // 0x4E8(0x8)
		bool bIsPanelVisible; // 0x4F0(0x1)
		bool IsHabaneroMode; // 0x4F1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x4F2(0x6) UNKNOWN PROPERTY
		USoundBase* WhooshSound; // 0x4F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ModeSet/ActivityModeSetSelectionModal.ActivityModeSetSelectionModal_C");
			return ret;
		}

		void __a4c38737-4b88-e376-445c-ce8b5135c7da_SourceToDest(ESlateVisibility& Visibility); // Flags: Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSplitscreenPromptVisibility(bool IsSplitScreenDisabled, int32_t NumLocalPlayers, int32_t MaxPlayers, ESlateVisibility& Visibility); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature(bool IsAvailable); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSubModeSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CloseModal(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityModeSetSelectionModal(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


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

}
