#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VictoryCrownsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class UFortUIManagerComponent_VictoryCrowns : public UFortControllerComponent	
	{
	public:
		UClass VictoryCrownsIndicatorClass; // 0xA8(0x8)
		FUserWidgetPool IndicatorPool; // 0xB0(0x88)
		unsigned char UnknownData01_7[0x20]; // 0x138(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns");
			return ret;
		}

		void RebuildBearerIndicators(TArray& CrownBearerList); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D54978
	};


	// Class VictoryCrownsUI.VictoryCrownsBearerInfoBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UVictoryCrownsBearerInfoBase : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr WeakPSA; // 0x2E0(0x8)
		UCommonTextBlock Text_PlayerName; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsBearerInfoBase");
			return ret;
		}

		void SetPlayerState(AFortPlayerStateAthena InPlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D54B38
		void OnSetPlayerState(AFortPlayerStateAthena PSA); // Flags: Event|Protected|BlueprintEvent 0x7FF414D54A58
	};


	// Class VictoryCrownsUI.VictoryCrownsIndicator
	// Inherited from UFortActorIndicatorWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x3F0 - 0x3C8)
	class UVictoryCrownsIndicator : public UFortActorIndicatorWidget	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x3C8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsIndicator");
			return ret;
		}

		void OnScreenClampChanged(bool bIsClamped); // Flags: Event|Protected|BlueprintEvent 0x7FF414D54DD8
		void OnDistanceChanged(int32_t Distance); // Flags: Event|Protected|BlueprintEvent 0x7FF414D54CF8
		AFortPlayerStateAthena GetIndicatedPlayerStateAthena(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D54C18
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
	// Size: 0x0 (0x4B8 - 0x4B8)
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
	// Size: 0x10 (0x330 - 0x320)
	class UVictoryCrownsPlayerInfoWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x320(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsPlayerInfoWidget");
			return ret;
		}

		void OnPlayerVictoryCrownStatusChanged(bool bHasCrown); // Flags: Event|Protected|BlueprintEvent 0x7FF414D54F98
		void HandleCrownBearerListChanged(TArray& CrownBearerList); // Flags: Final|Native|Protected|HasOutParms 0x7FF414D54EB8
	};


	// Class VictoryCrownsUI.VictoryCrownsPreGameWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x448 - 0x3F8)
	class UVictoryCrownsPreGameWidget : public UCommonActivatableWidget	
	{
	public:
		UDynamicEntryBox EntryBox_BearerList; // 0x3F8(0x8)
		UCommonActionWidget TipActionWidget; // 0x400(0x8)
		FDataTableRowHandle CloseObjectInputAction; // 0x408(0x10)
		unsigned char UnknownData01_7[0x30]; // 0x418(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VictoryCrownsUI.VictoryCrownsPreGameWidget");
			return ret;
		}

		void UnregisterCloseButtonInput(); // Flags: Final|Native|Private 0x7FF414D55778
		void StartFadeOut(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D55698
		void RegisterCloseButtonInput(); // Flags: Final|Native|Private 0x7FF414D555B8
		void RebuildBearerList(TArray& CrownBearerList); // Flags: Final|Native|Private|HasOutParms 0x7FF414D554D8
		void OnInputMethodChanged(ECommonInputType CurrentInput); // Flags: Event|Protected|BlueprintEvent 0x7FF414D553F8
		void OnCloseActionsComplete(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D55318
		void OnButtonCloseProgress(float Progress); // Flags: Event|Protected|BlueprintEvent 0x7FF414D55238
		void OnButtonClose(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414D55158
		void FadeOutTimerFinished(); // Flags: Final|Native|Private 0x7FF414D55078
	};

}
