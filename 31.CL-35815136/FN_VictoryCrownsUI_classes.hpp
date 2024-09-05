#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VictoryCrownsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class UFortUIManagerComponent_VictoryCrowns : public UFortControllerComponent	
	{
	public:
		UClass* VictoryCrownsIndicatorClass; // 0xA8(0x8)
		FUserWidgetPool IndicatorPool; // 0xB0(0x88)
		unsigned char UnknownData00_7[0x20]; // 0x138(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns");
			return ret;
		}

		void RebuildBearerIndicators(TArray<AFortPlayerStateAthena*>& CrownBearerList); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75159817C(relative to base address)
	};


	// Class VictoryCrownsUI.VictoryCrownsBearerInfoBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UVictoryCrownsBearerInfoBase : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<AFortPlayerStateAthena*> WeakPSA; // 0x2D8(0x8)
		UCommonTextBlock* Text_PlayerName; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase");
			return ret;
		}

		void SetPlayerState(AFortPlayerStateAthena* InPlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515982C8(relative to base address)
		void OnSetPlayerState(AFortPlayerStateAthena* PSA); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VictoryCrownsUI.VictoryCrownsIndicator
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x3E8 - 0x3C0)
	class UVictoryCrownsIndicator : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x3C0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsIndicator");
			return ret;
		}

		void OnScreenClampChanged(bool bIsClamped); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDistanceChanged(int32_t Distance); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		AFortPlayerStateAthena GetIndicatedPlayerStateAthena(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515980A0(relative to base address)
	};


	// Class VictoryCrownsUI.PlacementOverlayCondition_VictoryCrowns
	// Inherited from UPlacementOverlayCondition -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPlacementOverlayCondition_VictoryCrowns : public UPlacementOverlayCondition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.PlacementOverlayCondition_VictoryCrowns");
			return ret;
		}
	};


	// Class VictoryCrownsUI.VictoryCrownsPlacementOverlay
	// Inherited from UPostGamePlacementOverlay -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x4B0 - 0x4B0)
	class UVictoryCrownsPlacementOverlay : public UPostGamePlacementOverlay	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsPlacementOverlay");
			return ret;
		}
	};


	// Class VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x328 - 0x318)
	class UVictoryCrownsPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x318(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget");
			return ret;
		}

		void OnPlayerVictoryCrownStatusChanged(bool bHasCrown); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCrownBearerListChanged(TArray<AFortPlayerStateAthena*>& CrownBearerList); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7515980C4(relative to base address)
	};


	// Class VictoryCrownsUI.VictoryCrownsPreGameWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x440 - 0x3F0)
	class UVictoryCrownsPreGameWidget : public UCommonActivatableWidget	
	{
	public:
		UDynamicEntryBox* EntryBox_BearerList; // 0x3F0(0x8)
		UCommonActionWidget* TipActionWidget; // 0x3F8(0x8)
		FDataTableRowHandle CloseObjectInputAction; // 0x400(0x10)
		unsigned char UnknownData00_7[0x30]; // 0x410(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsPreGameWidget");
			return ret;
		}

		void UnregisterCloseButtonInput(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751598348(relative to base address)
		void StartFadeOut(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RegisterCloseButtonInput(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515982B4(relative to base address)
		void RebuildBearerList(TArray<AFortPlayerStateAthena*>& CrownBearerList); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751598218(relative to base address)
		void OnInputMethodChanged(ECommonInputType CurrentInput); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCloseActionsComplete(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751598160(relative to base address)
		void OnButtonCloseProgress(float Progress); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnButtonClose(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FadeOutTimerFinished(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75159808C(relative to base address)
	};

}
