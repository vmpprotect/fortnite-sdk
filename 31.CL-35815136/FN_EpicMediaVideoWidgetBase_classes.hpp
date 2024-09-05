#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaVideoWidgetBase
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_7[0x1]; // 0x4F(0x1) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetConfig");
			return ret;
		}
	};


	// Class EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x498 - 0x3F0)
	class UEpicMediaVideoWidgetBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY
		UEpicBaseStreamingVideo* BasePlayer; // 0x408(0x8)
		UEpicMediaVideoWidgetConfig* Config; // 0x410(0x8)
		FDataTableRowHandle PressToSkipAction; // 0x418(0x10)
		FDataTableRowHandle HoldToSkipAction; // 0x428(0x10)
		UCommonButtonBase* Button_Skip; // 0x438(0x8)
		UMediaTexture* MediaTexture; // 0x440(0x8)
		UImage* Image_Throbber; // 0x448(0x8)
		UMediaSoundComponent* SoundComponent; // 0x450(0x8)
		USoundMix* ActiveSoundMix; // 0x458(0x8)
		USoundSubmixBase* DefaultSubmix; // 0x460(0x8)
		USoundClass* SoundClass; // 0x468(0x8)
		USoundSubmixBase* LicensedSubmix; // 0x470(0x8)
		bool bAutoBroadcastRebuild; // 0x478(0x1)
		unsigned char UnknownData01_7[0x1F]; // 0x479(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaVideoWidgetBase.EpicMediaVideoWidgetBase");
			return ret;
		}

		void TerminalError(EBaseMediaTerminalErrorReason Reason); // Flags: Native|Protected, Memory Exec: 0x7FF74FBDF8F4(relative to base address)
		void Stop(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBAE4(relative to base address)
		bool SetConfig(UEpicMediaVideoWidgetConfig* InConfig); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBDF860(relative to base address)
		void Play(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BB7E0(relative to base address)
		void MetadataSuccess(); // Flags: Native|Protected, Memory Exec: 0x7FF74E4851A4(relative to base address)
		void MediaEnded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF749B1B2C4(relative to base address)
		bool Init(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E0ABD98(relative to base address)
		UEpicBaseStreamingVideo GetBasePlayer(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74FBDF848(relative to base address)
	};

}
