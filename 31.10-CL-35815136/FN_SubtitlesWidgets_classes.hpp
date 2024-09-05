#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SubtitlesWidgets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0xE0(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.SubtitleDisplayOptions");
			return ret;
		}
	};


	// Class SubtitlesWidgets.SubtitleDisplay
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x3C8 (0x520 - 0x158)
	class USubtitleDisplay : public UWidget	
	{
	public:
		FSubtitleFormat Format; // 0x158(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x15C(0x4) UNKNOWN PROPERTY
		USubtitleDisplayOptions* Options; // 0x160(0x8)
		float WrapTextAt; // 0x168(0x4)
		bool bPreviewMode; // 0x16C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x16D(0x3) UNKNOWN PROPERTY
		FText PreviewText; // 0x170(0x10)
		FTextBlockStyle GeneratedStyle; // 0x180(0x2E0)
		FSlateBrush GeneratedBackgroundBorder; // 0x460(0xB0)
		unsigned char UnknownData02_7[0x10]; // 0x510(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.SubtitleDisplay");
			return ret;
		}

		bool HasSubtitles(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DF7AA5C(relative to base address)
	};


	// Class SubtitlesWidgets.SubtitleDisplayNative
	// Inherited from UObject
	// Size: 0x3B8 (0x3E0 - 0x28)
	class USubtitleDisplayNative : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		USubtitleDisplayOptions* Options; // 0x30(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FTextBlockStyle GeneratedStyle; // 0x40(0x2E0)
		FSlateBrush GeneratedBackgroundBorder; // 0x320(0xB0)
		unsigned char UnknownData02_7[0x10]; // 0x3D0(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UOverlays* SourceSubtitles; // 0x30(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x38(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.FortMediaSubtitlesPlayer");
			return ret;
		}

		void Stop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF7AB48(relative to base address)
		void SetSubtitles(UOverlays* Subtitles); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF7AAC0(relative to base address)
		void Play(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF7AAAC(relative to base address)
		void BindToMediaPlayer(UMediaPlayer* InMediaPlayer); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DF7A968(relative to base address)
	};


	// Class SubtitlesWidgets.SubtitleDisplaySubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class USubtitleDisplaySubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		FSubtitleFormat SubtitleFormat; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SubtitlesWidgets.SubtitleDisplaySubsystem");
			return ret;
		}
	};

}
