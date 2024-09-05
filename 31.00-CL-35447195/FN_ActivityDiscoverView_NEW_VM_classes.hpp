#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityDiscoverView_NEW_VM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityDiscoverView_NEW_VM.ActivityDiscoverView_NEW_VM_C
	// Inherited from UFortActivityDiscoverViewV2 -> UFortActivityBrowserRowView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x148 (0x958 - 0x810)
	class UActivityDiscoverView_NEW_VM_C : public UFortActivityDiscoverViewV2	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x810(0x8)
		UWidgetAnimation Anim_DiscoverFullscreenOffsetItemPadding; // 0x818(0x8)
		UWidgetAnimation ShowAndHideRowLoadingSpinner; // 0x820(0x8)
		UWidgetAnimation Intro; // 0x828(0x8)
		UOverlay Overlay_ClippingBoundary; // 0x830(0x8)
		UOverlay Overlay_Nav; // 0x838(0x8)
		UWBP_UIKit_Throbber_C WBP_UIKit_Throbber; // 0x840(0x8)
		UTexture NextImage; // 0x848(0x8)
		FName KeyArtParameter; // 0x850(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x854(0x4) UNKNOWN PROPERTY
		UTexture DefaultImage; // 0x858(0x8)
		FMulticastInlineDelegate OnPlayIntro; // 0x860(0x10)
		bool HasIntroPlayed; // 0x870(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x871(0x7) UNKNOWN PROPERTY
		double DetailsMaxHeight; // 0x878(0x8)
		double DetailsMaxHeightMobile; // 0x880(0x8)
		double KeyArtMaxWidth; // 0x888(0x8)
		double KeyArtMaxWidthMobile; // 0x890(0x8)
		TArray KeyArt_ImageWidgets; // 0x898(0x10)
		bool IsPromotedContentDisplayed; // 0x8A8(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x8A9(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRowUpdated; // 0x8B0(0x10)
		bool IsImageLoadingSpinnerActive; // 0x8C0(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x8C1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnListScrolled; // 0x8C8(0x10)
		FMulticastInlineDelegate OnHomeBarUpdated; // 0x8D8(0x10)
		int32_t RowIndex; // 0x8E8(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x8EC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate BroadcastToHomespaceTileClicked; // 0x8F0(0x10)
		USoundBase AmbientBackgroundLoop; // 0x900(0x8)
		UAudioComponent BackgroundAmbience; // 0x908(0x8)
		USoundSubmix MusicSubmix; // 0x910(0x8)
		USubmixEffectDynamicReverbPreset ReverbSubmixEffect; // 0x918(0x8)
		USoundControlBusMix ControlBusMix; // 0x920(0x8)
		UAthenaLobbyBase Athena_Lobby; // 0x928(0x8)
		FMulticastInlineDelegate OnOverSwipeUp; // 0x930(0x10)
		bool IsFullscreen; // 0x940(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x941(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSwipeDownWhenCollapsed; // 0x948(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityDiscoverView_NEW_VM.ActivityDiscoverView_NEW_VM_C");
			return ret;
		}

		void AllowMouseWheelScrolling(bool AllowMouseWheelScrolling); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6501500
		void GetIndexOfCurrentActivity(int32_t& TileIndex); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6500D00
		void GetHasIntroPlayed(bool& IsFinishedLoading); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6500E00
		void SnapToEndOfAnimation(UWidgetAnimation InAnimation, TEnumAsByte PlayMode); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6504100
		void ResetScreenState(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6504200
		void Finished_D6F6433E42FC8CEA7FE92DAE4F5C3129(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6500F00
		void BndEvt__ActivityDiscoverView_NEW_VM_BrowserList_Activities_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15DB6501400
		void BndEvt__ActivityDiscoverView_NEW_VM_BrowserList_Activities_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15DB6501300
		void OnReceivedTileClickFromHomebarRow(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6500500
		void OnTransitionDiscoverFullscreen(bool IsDiscoverFullscreen); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6500100
		void OnQueryActivitiesFinished(); // Flags: Event|Public|BlueprintEvent 0x15DB6500600
		void OnActivityUpdated(); // Flags: Event|Public|BlueprintEvent 0x15DB6500C00
		void OnListViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: Event|Public|BlueprintEvent 0x15DB6500900
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6501100
		void OnRowChanged(int32_t NewCategoryIndex); // Flags: Event|Public|BlueprintEvent 0x15DB6500400
		void ExecuteUbergraph_ActivityDiscoverView_NEW_VM(int32_t EntryPoint); // Flags: Final 0x15DB6501000
		void OnSwipeDownWhenCollapsed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6500200
		void OnOverSwipeUp__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6500800
		void BroadcastToHomespaceTileClicked__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6501200
		void OnHomeBarUpdated__DelegateSignature(bool IsFirstRow); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6500B00
		void OnListScrolled__DelegateSignature(double ItemOffset, double DistanceRemaining); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6500A00
		void OnRowUpdated__DelegateSignature(bool IsPromoted, bool IsFirstRow); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6500300
		void OnPlayIntro__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6500700
	};

}
