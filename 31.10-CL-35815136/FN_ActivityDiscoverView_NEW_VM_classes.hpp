#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityDiscoverView_NEW_VM
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityDiscoverView_NEW_VM.ActivityDiscoverView_NEW_VM_C
	// Inherited from UFortActivityDiscoverViewV2 -> UFortActivityBrowserRowView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x148 (0x948 - 0x800)
	class UActivityDiscoverView_NEW_VM_C : public UFortActivityDiscoverViewV2	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x800(0x8)
		UWidgetAnimation* Anim_DiscoverFullscreenOffsetItemPadding; // 0x808(0x8)
		UWidgetAnimation* ShowAndHideRowLoadingSpinner; // 0x810(0x8)
		UWidgetAnimation* Intro; // 0x818(0x8)
		UOverlay* Overlay_ClippingBoundary; // 0x820(0x8)
		UOverlay* Overlay_Nav; // 0x828(0x8)
		UWBP_UIKit_Throbber_C* WBP_UIKit_Throbber; // 0x830(0x8)
		UTexture* NextImage; // 0x838(0x8)
		FName KeyArtParameter; // 0x840(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x844(0x4) UNKNOWN PROPERTY
		UTexture* DefaultImage; // 0x848(0x8)
		FMulticastInlineDelegate OnPlayIntro; // 0x850(0x10)
		bool HasIntroPlayed; // 0x860(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x861(0x7) UNKNOWN PROPERTY
		double DetailsMaxHeight; // 0x868(0x8)
		double DetailsMaxHeightMobile; // 0x870(0x8)
		double KeyArtMaxWidth; // 0x878(0x8)
		double KeyArtMaxWidthMobile; // 0x880(0x8)
		TArray<UImage*> KeyArt_ImageWidgets; // 0x888(0x10)
		bool IsPromotedContentDisplayed; // 0x898(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x899(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRowUpdated; // 0x8A0(0x10)
		bool IsImageLoadingSpinnerActive; // 0x8B0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x8B1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnListScrolled; // 0x8B8(0x10)
		FMulticastInlineDelegate OnHomeBarUpdated; // 0x8C8(0x10)
		int32_t RowIndex; // 0x8D8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x8DC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate BroadcastToHomespaceTileClicked; // 0x8E0(0x10)
		USoundBase* AmbientBackgroundLoop; // 0x8F0(0x8)
		UAudioComponent* BackgroundAmbience; // 0x8F8(0x8)
		USoundSubmix* MusicSubmix; // 0x900(0x8)
		USubmixEffectDynamicReverbPreset* ReverbSubmixEffect; // 0x908(0x8)
		USoundControlBusMix* ControlBusMix; // 0x910(0x8)
		UAthenaLobbyBase* Athena_Lobby; // 0x918(0x8)
		FMulticastInlineDelegate OnOverSwipeUp; // 0x920(0x10)
		bool IsFullscreen; // 0x930(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x931(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSwipeDownWhenCollapsed; // 0x938(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityDiscoverView_NEW_VM.ActivityDiscoverView_NEW_VM_C");
			return ret;
		}

		void AllowMouseWheelScrolling(bool AllowMouseWheelScrolling); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIndexOfCurrentActivity(int32_t& TileIndex); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetHasIntroPlayed(bool& IsFinishedLoading); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SnapToEndOfAnimation(UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetScreenState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Finished_D6F6433E42FC8CEA7FE92DAE4F5C3129(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityDiscoverView_NEW_VM_BrowserList_Activities_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__ActivityDiscoverView_NEW_VM_BrowserList_Activities_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReceivedTileClickFromHomebarRow(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDiscoverFullscreen(bool IsDiscoverFullscreen); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryActivitiesFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivityUpdated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowChanged(int32_t NewCategoryIndex); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityDiscoverView_NEW_VM(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSwipeDownWhenCollapsed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOverSwipeUp__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BroadcastToHomespaceTileClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHomeBarUpdated__DelegateSignature(bool IsFirstRow); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListScrolled__DelegateSignature(double ItemOffset, double DistanceRemaining); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowUpdated__DelegateSignature(bool IsPromoted, bool IsFirstRow); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayIntro__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
