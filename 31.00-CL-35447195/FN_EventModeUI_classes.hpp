#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EventModeUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EventModeUI.FocusButton
	// Inherited from UBacchusActionButton -> UBacchusButton -> UBacchusHUDElement -> UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x430 - 0x420)
	class UFocusButton : public UBacchusActionButton	
	{
	public:
		UPaperSprite StartFocusingSprite; // 0x420(0x8)
		UPaperSprite StopFocusingSprite; // 0x428(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeUI.FocusButton");
			return ret;
		}

		void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Flags: Final|Native|Private 0x7FF414CF08F8
		void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Flags: Final|Native|Private 0x7FF414CF0818
	};


	// Class EventModeUI.FortEventModeEmotesWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x3B8 - 0x320)
	class UFortEventModeEmotesWidget : public UFortHUDElementWidget	
	{
	public:
		TWeakObjectPtr Emote1; // 0x320(0x20)
		TWeakObjectPtr Emote2; // 0x340(0x20)
		TWeakObjectPtr Emote3; // 0x360(0x20)
		TArray RandomEmotes; // 0x380(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x390(0x8) UNKNOWN PROPERTY
		URichTextBlock Text_Emote1; // 0x398(0x8)
		URichTextBlock Text_Emote2; // 0x3A0(0x8)
		URichTextBlock Text_Emote3; // 0x3A8(0x8)
		URichTextBlock Text_EmoteRandom; // 0x3B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeUI.FortEventModeEmotesWidget");
			return ret;
		}

		void OnFocusStateChanged(bool bIsFocusing); // Flags: Event|Public|BlueprintEvent 0x7FF414CF0AB8
		void OnFocusAvailableChanged(bool bIsFocusAvailable); // Flags: Event|Public|BlueprintEvent 0x7FF414CF09D8
	};


	// Class EventModeUI.FortMobileActionButtonBehavior_Focus
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x8 (0x138 - 0x130)
	class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior	
	{
	public:
		UPaperSprite StopFocusingSprite; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventModeUI.FortMobileActionButtonBehavior_Focus");
			return ret;
		}

		void HandleEventModeFocusingChanged(bool bIsEventModeFocusing); // Flags: Final|Native|Private 0x7FF414CF0C78
		void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus); // Flags: Final|Native|Private 0x7FF414CF0B98
	};

}
