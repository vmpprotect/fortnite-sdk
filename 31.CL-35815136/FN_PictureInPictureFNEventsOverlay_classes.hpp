#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PictureInPictureFNEventsOverlay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /PictureInPictureFNEvents/PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C
	// Inherited from UPictureInPicturePanelWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x2B1 (0x9C9 - 0x718)
	class UPictureInPictureFNEventsOverlay_C : public UPictureInPicturePanelWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x8)
		UWidgetAnimation* SlideVidDown; // 0x720(0x8)
		UWidgetAnimation* SlideVidUp; // 0x728(0x8)
		UWidgetAnimation* Intro; // 0x730(0x8)
		UBorder* ErrorMessage; // 0x738(0x8)
		UBorder* HideInstructions; // 0x740(0x8)
		UImage* Highlight; // 0x748(0x8)
		UImage* Shadow; // 0x750(0x8)
		UCommonRichTextBlock* Text_ErrorInstructions; // 0x758(0x8)
		UCommonRichTextBlock* Text_HideInstructions; // 0x760(0x8)
		FString LoginState; // 0x768(0x10)
		FGameplayTagContainer ShowForPiPTags; // 0x778(0x20)
		FGameplayTagContainer HideForPiPTags; // 0x798(0x20)
		FMargin FrontendPadding; // 0x7B8(0x10)
		FPiPPartnerSource ErrorSource; // 0x7C8(0x1F0)
		FText Text_BaseErrorMessage; // 0x9B8(0x10)
		bool InstructionsShown; // 0x9C8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PictureInPictureFNEvents/PictureInPictureFNEventsOverlay.PictureInPictureFNEventsOverlay_C");
			return ret;
		}

		void Set PIP Location(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowError(int32_t ErrorNumber, FString ErrorMessage); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowHideInstructions(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PictureInPictureFNEventsOverlay(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
