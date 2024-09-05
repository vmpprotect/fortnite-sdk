#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaVideoWidgetBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EpicMediaVideoWidgetBase.EpicMediaVideoWidgetConfig
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UEpicMediaVideoWidgetConfig : public UObject	
	{
	public:
		FString MediaID; // 0x28(0x10)
		FString MediaName; // 0x38(0x10)
		char PerfControl; // 0x48(0x1)
		bool bAllowSkipping; // 0x49(0x1)
		bool bHoldToSkip; // 0x4A(0x1)
		bool bHideControls; // 0x4B(0x1)
		bool bAutoPlay; // 0x4C(0x1)
		bool bLoop; // 0x4D(0x1)
		bool bNoAudio; // 0x4E(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x4F(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetConfig");
			return ret;
		}
	};


	// Class EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x4A0 - 0x3F8)
	class UEpicMediaVideoWidgetBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		UEpicBaseStreamingVideo BasePlayer; // 0x410(0x8)
		UEpicMediaVideoWidgetConfig Config; // 0x418(0x8)
		FDataTableRowHandle PressToSkipAction; // 0x420(0x10)
		FDataTableRowHandle HoldToSkipAction; // 0x430(0x10)
		UCommonButtonBase Button_Skip; // 0x440(0x8)
		UMediaTexture MediaTexture; // 0x448(0x8)
		UImage Image_Throbber; // 0x450(0x8)
		UMediaSoundComponent SoundComponent; // 0x458(0x8)
		USoundMix ActiveSoundMix; // 0x460(0x8)
		USoundSubmixBase DefaultSubmix; // 0x468(0x8)
		USoundClass SoundClass; // 0x470(0x8)
		USoundSubmixBase LicensedSubmix; // 0x478(0x8)
		bool bAutoBroadcastRebuild; // 0x480(0x1)
		unsigned char UnknownData03_7[0x1F]; // 0x481(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase");
			return ret;
		}

		void TerminalError(EBaseMediaTerminalErrorReason Reason); // Flags: Native|Protected 0x7FF4149C5158
		void Stop(); // Flags: Native|Public|BlueprintCallable 0x7FF4149C5078
		bool SetConfig(UEpicMediaVideoWidgetConfig InConfig); // Flags: Native|Public|BlueprintCallable 0x7FF4149C4F98
		void Play(); // Flags: Native|Public|BlueprintCallable 0x7FF4149C4EB8
		void MetadataSuccess(); // Flags: Native|Protected 0x7FF4149C4DD8
		void MediaEnded(); // Flags: Final|Native|Private 0x7FF4149C4CF8
		bool Init(); // Flags: Native|Public|BlueprintCallable 0x7FF4149C4C18
		UEpicBaseStreamingVideo GetBasePlayer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4149C4B38
	};

}
