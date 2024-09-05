#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EventModeUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EventModeUI.FocusButton
	// Inherited from UBacchusActionButton -> UBacchusButton -> UBacchusHUDElement -> UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x428 - 0x418)
	class UFocusButton : public UBacchusActionButton	
	{
	public:
		UPaperSprite* StartFocusingSprite; // 0x418(0x8)
		UPaperSprite* StopFocusingSprite; // 0x420(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeUI.FocusButton");
			return ret;
		}

		void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Flags: Final|Native|Private, Memory Exec: 0x7FF75133FE40(relative to base address)
		void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Flags: Final|Native|Private, Memory Exec: 0x7FF75133FDC4(relative to base address)
	};


	// Class EventModeUI.FortEventModeEmotesWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x3B0 - 0x318)
	class UFortEventModeEmotesWidget : public UFortHUDElementWidget	
	{
	public:
		TWeakObjectPtr<UFortMontageItemDefinitionBase*> Emote1; // 0x318(0x20)
		TWeakObjectPtr<UFortMontageItemDefinitionBase*> Emote2; // 0x338(0x20)
		TWeakObjectPtr<UFortMontageItemDefinitionBase*> Emote3; // 0x358(0x20)
		TArray<TWeakObjectPtr> RandomEmotes; // 0x378(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x388(0x8) UNKNOWN PROPERTY
		URichTextBlock* Text_Emote1; // 0x390(0x8)
		URichTextBlock* Text_Emote2; // 0x398(0x8)
		URichTextBlock* Text_Emote3; // 0x3A0(0x8)
		URichTextBlock* Text_EmoteRandom; // 0x3A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeUI.FortEventModeEmotesWidget");
			return ret;
		}

		void OnFocusStateChanged(bool bIsFocusing); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFocusAvailableChanged(bool bIsFocusAvailable); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventModeUI.FortMobileActionButtonBehavior_Focus
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x8 (0x138 - 0x130)
	class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior	
	{
	public:
		UPaperSprite* StopFocusingSprite; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeUI.FortMobileActionButtonBehavior_Focus");
			return ret;
		}

		void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FE33DDC(relative to base address)
		void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Flags: Final|Native|Private, Memory Exec: 0x7FF74FE33E5C(relative to base address)
	};

}
