#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VoiceRep
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VoiceRep.FortVoiceReportIntroModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x408 - 0x3F8)
	class UFortVoiceReportIntroModal : public UCommonActivatableWidget	
	{
	public:
		UCommonTextBlock Text_VoiceReportingTitle; // 0x3F8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x400(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VoiceRep.FortVoiceReportIntroModal");
			return ret;
		}

		void UpdateVisuals(UFortVoiceReportIntroModalType DescriptionType); // Flags: Event|Protected|BlueprintEvent 0x7FF414EBA0A0
		void HandleTurnOnClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414EB9FC0
		void HandleTurnOffClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414EB9EE0
		void HandleLearnMore(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414EB9E00
	};


	// Class VoiceRep.VoiceRepTooltipBase
	// Inherited from UFortSidebarOnboardTooltipWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x460 - 0x458)
	class UVoiceRepTooltipBase : public UFortSidebarOnboardTooltipWidget	
	{
	public:
		int32_t AutoDismissTimerInterval; // 0x458(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x45C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VoiceRep.VoiceRepTooltipBase");
			return ret;
		}
	};


	// Class VoiceRep.VoiceRepDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UVoiceRepDataAsset : public UDataAsset	
	{
	public:
		UClass VoiceChatTooltipWidgetClass; // 0x30(0x8)
		UClass FirstOnboardingWidgetClass; // 0x38(0x8)
		UClass SecondOnboardingWidgetClass; // 0x40(0x8)
		UClass ReportVoiceWidgetClass; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VoiceRep.VoiceRepDataAsset");
			return ret;
		}
	};

}
