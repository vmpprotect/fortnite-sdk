#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMJamUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
	// Size: 0x0 (0x3F0 - 0x3F0)
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
	// Size: 0x20 (0x468 - 0x448)
	class UJamHUDBase : public UFortNullHUD	
	{
	public:
		TWeakObjectPtr<UClass*> EmotePickerClass; // 0x448(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamUI.JamHUDBase");
			return ret;
		}

		void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept); // Flags: Final|Native|Private, Memory Exec: 0x7FF7510E6538(relative to base address)
	};


	// Class FMJamUI.JamUIManagerComponent_SongIndicators
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x90 (0x138 - 0xA8)
	class UJamUIManagerComponent_SongIndicators : public UFortControllerComponent	
	{
	public:
		UClass* JamSongIndicatorClass; // 0xA8(0x8)
		FUserWidgetPool IndicatorPool; // 0xB0(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamUI.JamUIManagerComponent_SongIndicators");
			return ret;
		}

		void RebuildJamSongIndicatorsForPlayspace(AJamPlayspace* Playspace); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510E6630(relative to base address)
		void ClearJamIndicators(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510E64B8(relative to base address)
	};


	// Class FMJamUI.JamSongIndicator
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x3E8 - 0x3C0)
	class UJamSongIndicator : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x3C0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMJamUI.JamSongIndicator");
			return ret;
		}

		void OnScreenClampChanged(bool bIsClamped); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitInfo(UCatalogData* Song, EFMJamLoopType Type); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDistanceChanged(int32_t Distance); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		AFortPlayerStateAthena GetIndicatedPlayerStateAthena(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510E64CC(relative to base address)
	};

}
