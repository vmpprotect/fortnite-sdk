#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PictureInPictureFNEventsOverlay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /PictureInPictureFNEvents/PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C
	// Inherited from UPictureInPicturePanelWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2B1 (0x9D1 - 0x720)
	class UPictureInPictureFNEventsOverlay_C : public UPictureInPicturePanelWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x8)
		UWidgetAnimation SlideVidDown; // 0x728(0x8)
		UWidgetAnimation SlideVidUp; // 0x730(0x8)
		UWidgetAnimation Intro; // 0x738(0x8)
		UBorder ErrorMessage; // 0x740(0x8)
		UBorder HideInstructions; // 0x748(0x8)
		UImage Highlight; // 0x750(0x8)
		UImage Shadow; // 0x758(0x8)
		UCommonRichTextBlock Text_ErrorInstructions; // 0x760(0x8)
		UCommonRichTextBlock Text_HideInstructions; // 0x768(0x8)
		FString LoginState; // 0x770(0x10)
		FGameplayTagContainer ShowForPiPTags; // 0x780(0x20)
		FGameplayTagContainer HideForPiPTags; // 0x7A0(0x20)
		FMargin FrontendPadding; // 0x7C0(0x10)
		FPiPPartnerSource ErrorSource; // 0x7D0(0x1F0)
		FText Text_BaseErrorMessage; // 0x9C0(0x10)
		bool InstructionsShown; // 0x9D0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPictureFNEvents/PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C");
			return ret;
		}

		void Set PIP Location(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608AF00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608B400
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15DB608B100
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15DB608B000
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608B200
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15DB608B600
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15DB608B500
		void ShowError(int32_t ErrorNumber, FString ErrorMessage); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608AE00
		void ShowHideInstructions(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608AD00
		void ExecuteUbergraph_PictureInPictureFNEventsOverlay(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB608B300
	};

}
