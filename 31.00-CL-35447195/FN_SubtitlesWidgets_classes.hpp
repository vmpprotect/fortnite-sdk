#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SubtitlesWidgets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SubtitlesWidgets.SubtitleDisplayOptions
	// Inherited from UDataAsset -> UObject
	// Size: 0x160 (0x190 - 0x30)
	class USubtitleDisplayOptions : public UDataAsset	
	{
	public:
		FSlateFontInfo Font; // 0x30(0x58)
		int32_t DisplayTextSizes; // 0x88(0x14)
		FLinearColor DisplayTextColors; // 0x9C(0x20)
		float DisplayBorderSize; // 0xBC(0xC)
		float DisplayBackgroundOpacity; // 0xC8(0x14)
		unsigned char UnknownData01_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0xE0(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.SubtitleDisplayOptions");
			return ret;
		}
	};


	// Class SubtitlesWidgets.SubtitleDisplay
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x3D0 (0x530 - 0x160)
	class USubtitleDisplay : public UWidget	
	{
	public:
		FSubtitleFormat Format; // 0x160(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		USubtitleDisplayOptions Options; // 0x168(0x8)
		float WrapTextAt; // 0x170(0x4)
		bool bPreviewMode; // 0x174(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x175(0x3) UNKNOWN PROPERTY
		FText PreviewText; // 0x178(0x10)
		unsigned char UnknownData06_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		FTextBlockStyle GeneratedStyle; // 0x190(0x2E0)
		FSlateBrush GeneratedBackgroundBorder; // 0x470(0xB0)
		unsigned char UnknownData07_7[0x10]; // 0x520(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.SubtitleDisplay");
			return ret;
		}

		bool HasSubtitles(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414660AB8
	};


	// Class SubtitlesWidgets.SubtitleDisplayNative
	// Inherited from UObject
	// Size: 0x3B8 (0x3E0 - 0x28)
	class USubtitleDisplayNative : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		USubtitleDisplayOptions Options; // 0x30(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FTextBlockStyle GeneratedStyle; // 0x40(0x2E0)
		FSlateBrush GeneratedBackgroundBorder; // 0x320(0xB0)
		unsigned char UnknownData05_7[0x10]; // 0x3D0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.SubtitleDisplayNative");
			return ret;
		}
	};


	// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UFortMediaSubtitlesPlayer : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UOverlays SourceSubtitles; // 0x30(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x38(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.FortMediaSubtitlesPlayer");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414660E38
		void SetSubtitles(UOverlays Subtitles); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414660D58
		void Play(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414660C78
		void BindToMediaPlayer(UMediaPlayer InMediaPlayer); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414660B98
	};


	// Class SubtitlesWidgets.SubtitleDisplaySubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class USubtitleDisplaySubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		FSubtitleFormat SubtitleFormat; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.SubtitleDisplaySubsystem");
			return ret;
		}
	};

}
