#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMJamUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMJamUI.JamDynamicUIDirector
	// Inherited from ASparksDynamicUIDirector -> ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
	class AJamDynamicUIDirector : public ASparksDynamicUIDirector	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamUI.JamDynamicUIDirector");
			return ret;
		}
	};


	// Class FMJamUI.JamEmoteWheelOverlay
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F8 - 0x3F8)
	class UJamEmoteWheelOverlay : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamUI.JamEmoteWheelOverlay");
			return ret;
		}
	};


	// Class FMJamUI.JamHUDBase
	// Inherited from UFortNullHUD -> UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x470 - 0x450)
	class UJamHUDBase : public UFortNullHUD	
	{
	public:
		TWeakObjectPtr EmotePickerClass; // 0x450(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamUI.JamHUDBase");
			return ret;
		}

		void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept); // Flags: Final|Native|Private 0x7FF414C26B38
	};


	// Class FMJamUI.JamUIManagerComponent_SongIndicators
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x138 - 0xA8)
	class UJamUIManagerComponent_SongIndicators : public UFortControllerComponent	
	{
	public:
		UClass JamSongIndicatorClass; // 0xA8(0x8)
		FUserWidgetPool IndicatorPool; // 0xB0(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamUI.JamUIManagerComponent_SongIndicators");
			return ret;
		}

		void RebuildJamSongIndicatorsForPlayspace(AJamPlayspace Playspace); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C26CF8
		void ClearJamIndicators(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C26C18
	};


	// Class FMJamUI.JamSongIndicator
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x3F0 - 0x3C8)
	class UJamSongIndicator : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x3C8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamUI.JamSongIndicator");
			return ret;
		}

		void OnScreenClampChanged(bool bIsClamped); // Flags: Event|Protected|BlueprintEvent 0x7FF414C27078
		void OnInitInfo(UCatalogData Song, EFMJamLoopType Type); // Flags: Event|Protected|BlueprintEvent 0x7FF414C26F98
		void OnDistanceChanged(int32_t Distance); // Flags: Event|Protected|BlueprintEvent 0x7FF414C26EB8
		AFortPlayerStateAthena GetIndicatedPlayerStateAthena(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C26DD8
	};

}
