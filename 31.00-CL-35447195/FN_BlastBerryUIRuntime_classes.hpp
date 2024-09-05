#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BlastBerryUIRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BlastBerryUIRuntime.FortMobileActionButtonBehaviorExtension_Reboot
	// Inherited from UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UFortMobileActionButtonBehaviorExtension_Reboot : public UFortMobileActionButtonBehaviorExtension	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryUIRuntime.FortMobileActionButtonBehaviorExtension_Reboot");
			return ret;
		}

		void EnableVisibility(); // Flags: Final|Native|Private 0x7FF414CD03D8
		void DisableVisibility(); // Flags: Final|Native|Private 0x7FF414CD02F8
	};


	// Class BlastBerryUIRuntime.BlastBerryInstantRebootWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x370 - 0x320)
	class UBlastBerryInstantRebootWidget : public UFortHUDElementWidget	
	{
	public:
		float HoldDuration; // 0x320(0x4)
		float InvulnerabilityRespawnDisplayDelay; // 0x324(0x4)
		FGameplayTag InvulnerabilityGameplayTag; // 0x328(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY
		UFortKeybindWidget KeybindWidget; // 0x330(0x8)
		unsigned char UnknownData05_6[0x18]; // 0x338(0x18) UNKNOWN PROPERTY
		UInputComponent BlastBerryInstantRebootInputComponent; // 0x350(0x8)
		unsigned char UnknownData06_6[0x4]; // 0x358(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr OwnerASC; // 0x35C(0x8)
		unsigned char UnknownData07_7[0xC]; // 0x364(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryUIRuntime.BlastBerryInstantRebootWidget");
			return ret;
		}

		void UpdateKeybindings(); // Flags: Final|Native|Protected 0x7FF414CD0758
		void OnWidgetActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414CD0678
		void OnRespawnEventsStopped(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD0598
		void HandleRespawnEventsStopped(); // Flags: Final|Native|Private 0x7FF414CD04B8
	};


	// Class BlastBerryUIRuntime.BlastBerryPlayerInfoRespawn
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x348 - 0x320)
	class UBlastBerryPlayerInfoRespawn : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x320(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr WeakPlayerStateAthena_RepresentedPlayer; // 0x328(0x8)
		UCommonTextBlock Text_Time; // 0x330(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x338(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryUIRuntime.BlastBerryPlayerInfoRespawn");
			return ret;
		}

		void OnTimerCancelled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD0BB8
		void OnTimeEnded(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD0AD8
		void OnTickDown(float TimeRemaining); // Flags: Event|Protected|BlueprintEvent 0x7FF414CD09F8
		void HandleRespawnTimeReplicated(AFortPlayerStateAthena PlayerState, float TimeRemaining); // Flags: Final|Native|Private 0x7FF414CD0918
		float GetTimeOfDeath(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CD0838
	};

}
