#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VoiceRep
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VoiceRep.FortVoiceReportIntroModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x400 - 0x3F0)
	class UFortVoiceReportIntroModal : public UCommonActivatableWidget	
	{
	public:
		UCommonTextBlock* Text_VoiceReportingTitle; // 0x3F0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VoiceRep.FortVoiceReportIntroModal");
			return ret;
		}

		void UpdateVisuals(UFortVoiceReportIntroModalType DescriptionType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTurnOnClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7520C9DE0(relative to base address)
		void HandleTurnOffClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7520C9DCC(relative to base address)
		void HandleLearnMore(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7520C9DB8(relative to base address)
	};


	// Class VoiceRep.VoiceRepTooltipBase
	// Inherited from UFortSidebarOnboardTooltipWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x458 - 0x450)
	class UVoiceRepTooltipBase : public UFortSidebarOnboardTooltipWidget	
	{
	public:
		int32_t AutoDismissTimerInterval; // 0x450(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x454(0x4) UNKNOWN PROPERTY

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
		UClass* VoiceChatTooltipWidgetClass; // 0x30(0x8)
		UClass* FirstOnboardingWidgetClass; // 0x38(0x8)
		UClass* SecondOnboardingWidgetClass; // 0x40(0x8)
		UClass* ReportVoiceWidgetClass; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VoiceRep.VoiceRepDataAsset");
			return ret;
		}
	};

}
