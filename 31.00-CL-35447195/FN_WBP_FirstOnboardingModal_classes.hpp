#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_FirstOnboardingModal
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /VoiceRep/WBP_FirstOnboardingModal.WBP_FirstOnboardingModal_C
	// Inherited from UFortVoiceReportIntroModal -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x4F0 - 0x408)
	class UWBP_FirstOnboardingModal_C : public UFortVoiceReportIntroModal	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x8)
		UImage Avatar_A; // 0x410(0x8)
		UImage Avatar_B; // 0x418(0x8)
		UImage Avatar_C; // 0x420(0x8)
		UWBP_UIKit_Button_Regular_C Button_OpenFAQ; // 0x428(0x8)
		UWBP_UIKit_Button_Regular_C Button_TurnChatOff; // 0x430(0x8)
		UWBP_UIKit_Button_Regular_C Button_TurnChatOn; // 0x438(0x8)
		UCommonActivatableWidgetSwitcher CommonActivatableWidgetSwitcher; // 0x440(0x8)
		UImage Containment; // 0x448(0x8)
		UFortMobileImage ExpandDirectionTick; // 0x450(0x8)
		UImage Image; // 0x458(0x8)
		UImage Image; // 0x460(0x8)
		UImage Image; // 0x468(0x8)
		UImage Image_BackgroundBottomBar; // 0x470(0x8)
		UImage Image_Right; // 0x478(0x8)
		UImage Lightbox_HitTestBlocker; // 0x480(0x8)
		USizeBox SB_EntryContent; // 0x488(0x8)
		UCommonRichTextBlock Text_ChannelTitle; // 0x490(0x8)
		UCommonTextBlock Text_VoiceReporting_On; // 0x498(0x8)
		UFortMobileImage Transmitting; // 0x4A0(0x8)
		UFortMobileImage Transmitting; // 0x4A8(0x8)
		UFortMobileImage Transmitting; // 0x4B0(0x8)
		UVerticalBox VB_FreshAccount; // 0x4B8(0x8)
		UVerticalBox VB_Over18_Chat_Disabled; // 0x4C0(0x8)
		UVerticalBox VB_Over18_Chat_Enabled; // 0x4C8(0x8)
		UVerticalBox VB_Under18; // 0x4D0(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x4D8(0x8)
		UWBP_UIKit_Scrim_C WBP_UIKit_Scrim; // 0x4E0(0x8)
		UWrapBox WrapBox_Header_Status; // 0x4E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VoiceRep/WBP_FirstOnboardingModal.WBP_FirstOnboardingModal_C");
			return ret;
		}

		void BndEvt__WBP_VoiceReport_OnboardingModal_Button_OpenFAQ_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D8664BD00
		void BndEvt__WBP_FirstOnboardingModal_Button_TurnOn_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D8664BE00
		void BndEvt__WBP_FirstOnboardingModal_Button_TurnOff_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D8664BF00
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D8664BB00
		void UpdateVisuals(UFortVoiceReportIntroModalType DescriptionType); // Flags: Event|Protected|BlueprintEvent 0x15D8664BA00
		void ExecuteUbergraph_WBP_FirstOnboardingModal(int32_t EntryPoint); // Flags: Final 0x15D8664BC00
	};

}