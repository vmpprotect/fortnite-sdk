#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BlastBerryUIRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BlastBerryUIRuntime.FortMobileActionButtonBehaviorExtension_Reboot
	// Inherited from UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UFortMobileActionButtonBehaviorExtension_Reboot : public UFortMobileActionButtonBehaviorExtension	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryUIRuntime.FortMobileActionButtonBehaviorExtension_Reboot");
			return ret;
		}

		void EnableVisibility(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512595CC(relative to base address)
		void DisableVisibility(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512595B8(relative to base address)
	};


	// Class BlastBerryUIRuntime.BlastBerryInstantRebootWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x368 - 0x318)
	class UBlastBerryInstantRebootWidget : public UFortHUDElementWidget	
	{
	public:
		float HoldDuration; // 0x318(0x4)
		float InvulnerabilityRespawnDisplayDelay; // 0x31C(0x4)
		FGameplayTag InvulnerabilityGameplayTag; // 0x320(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x324(0x4) UNKNOWN PROPERTY
		UFortKeybindWidget* KeybindWidget; // 0x328(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x330(0x18) UNKNOWN PROPERTY
		UInputComponent* BlastBerryInstantRebootInputComponent; // 0x348(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x350(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UAbilitySystemComponent*> OwnerASC; // 0x354(0x8)
		unsigned char UnknownData03_7[0xC]; // 0x35C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryUIRuntime.BlastBerryInstantRebootWidget");
			return ret;
		}

		void UpdateKeybindings(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512596D0(relative to base address)
		void OnWidgetActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRespawnEventsStopped(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRespawnEventsStopped(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751259604(relative to base address)
	};


	// Class BlastBerryUIRuntime.BlastBerryPlayerInfoRespawn
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x340 - 0x318)
	class UBlastBerryPlayerInfoRespawn : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortPlayerStateAthena*> WeakPlayerStateAthena_RepresentedPlayer; // 0x320(0x8)
		UCommonTextBlock* Text_Time; // 0x328(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x330(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BlastBerryUIRuntime.BlastBerryPlayerInfoRespawn");
			return ret;
		}

		void OnTimerCancelled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTimeEnded(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTickDown(float TimeRemaining); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRespawnTimeReplicated(AFortPlayerStateAthena* PlayerState, float TimeRemaining); // Flags: Final|Native|Private, Memory Exec: 0x7FF751259618(relative to base address)
		float GetTimeOfDeath(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512595E0(relative to base address)
	};

}
