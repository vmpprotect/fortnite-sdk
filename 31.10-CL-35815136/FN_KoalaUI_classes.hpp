#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: KoalaUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class KoalaUI.FortGameSettingRegistryExtension_Koala
	// Inherited from UFortGameSettingRegistryExtension -> UFortGameSettingRegistryExtensionBase -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UFortGameSettingRegistryExtension_Koala : public UFortGameSettingRegistryExtension	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FFortSettingNameExtensions SettingExtensions; // 0x30(0x18)
		unsigned char UnknownData01_7[0x20]; // 0x48(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.FortGameSettingRegistryExtension_Koala");
			return ret;
		}
	};


	// Class KoalaUI.FortSidebarPanelKoala
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x428 - 0x3F0)
	class UFortSidebarPanelKoala : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY
		UCommonButtonBase* Button_KoalaDummy; // 0x408(0x8)
		UFortLazyImage* QrCodeImage; // 0x410(0x8)
		FString QRCodeURL; // 0x418(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.FortSidebarPanelKoala");
			return ret;
		}

		void OnConnectionChanged(bool bConnected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
	// Inherited from UFortUIGameFeatureAction_PostFrontendFlowActions -> UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UFortUIGameFeatureAction_AttemptKoalaModal : public UFortUIGameFeatureAction_PostFrontendFlowActions	
	{
	public:
		TWeakObjectPtr<UClass*> KoalaGraphicsModalClass; // 0x30(0x20)
		unsigned char UnknownData00_7[0x18]; // 0x50(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal");
			return ret;
		}
	};


	// Class KoalaUI.KoalaGraphicsModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x418 - 0x3F0)
	class UKoalaGraphicsModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY
		UCommonButtonBase* Button_KeepEnabled; // 0x408(0x8)
		UCommonButtonBase* Button_Disable; // 0x410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.KoalaGraphicsModal");
			return ret;
		}
	};


	// Class KoalaUI.KoalaHUDWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x548 - 0x3F0)
	class UKoalaHUDWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		float ClipDebounceTime; // 0x3F8(0x4)
		float PlayerKilledPlayerReminderTime; // 0x3FC(0x4)
		float MatchEndedReminderTime; // 0x400(0x4)
		float ClipReminderCooldownTime; // 0x404(0x4)
		float EliminationClipReminderDelayTime; // 0x408(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x40C(0x4) UNKNOWN PROPERTY
		USoundSubmix* ClipAudioSubmix; // 0x410(0x8)
		UCommonActionWidget* ClipActionWidget; // 0x418(0x8)
		FDataTableRowHandle ClipObjectInputAction; // 0x420(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x430(0x8) UNKNOWN PROPERTY
		TMap<int32_t, FKoalaClipInfo> ClipTracker; // 0x438(0x50)
		unsigned char UnknownData03_6[0x8]; // 0x488(0x8) UNKNOWN PROPERTY
		int32_t LastClipID; // 0x490(0x4)
		unsigned char UnknownData04_6[0x16]; // 0x494(0x16) UNKNOWN PROPERTY
		EKoalaMockClipMode MockClipMode; // 0x4AA(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x4AB(0x1) UNKNOWN PROPERTY
		int32_t MockClipUploadShortTime; // 0x4AC(0x4)
		int32_t MockClipUploadLongTime; // 0x4B0(0x4)
		int32_t MockClipCreateShortTime; // 0x4B4(0x4)
		int32_t MockClipCreateLongTime; // 0x4B8(0x4)
		unsigned char UnknownData06_7[0x8C]; // 0x4BC(0x8C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.KoalaHUDWidget");
			return ret;
		}

		void UnregisterClipButtonInput(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751398624(relative to base address)
		void RegisterClipButtonInput(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751398610(relative to base address)
		void OnTouchAreaMouseDown(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513985FC(relative to base address)
		void OnReminderTimerStarted(float Time); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReminderEnded(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7513985E4(relative to base address)
		void OnRecordingStatusChanged(EKoalaRecording InRecordingStatus); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputProgress(float Progress); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnConnectionChanged(EKoalaConnectionStatus InStatus); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClipStatusChanged(int32_t InClipID, EKoalaClipStatus InClipStatus, float InUploadProgress); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAvailabilityChanged(EKoalaAvailability Availability); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePlayerPawnEmoteStopped(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting); // Flags: Final|Native|Private, Memory Exec: 0x7FF751398478(relative to base address)
		void HandlePlayerMatchWon(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751398464(relative to base address)
		void HandleLocalPlayerKilledPlayer(AFortPlayerStateAthena* Player); // Flags: Final|Native|Private, Memory Exec: 0x7FF7513983E4(relative to base address)
		int32_t GetUploadingClipCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513983C0(relative to base address)
		int32_t GetTrackedClipCount(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74FF25C90(relative to base address)
	};


	// Class KoalaUI.KoalaMainMenuButton
	// Inherited from UFortMainMenuButtonExtension -> UFortMainMenuButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1500 - 0x14F0)
	class UKoalaMainMenuButton : public UFortMainMenuButtonExtension	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x14F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.KoalaMainMenuButton");
			return ret;
		}
	};


	// Class KoalaUI.KoalaSettingDetailExtension
	// Inherited from UFortSettingDetailExtension -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UKoalaSettingDetailExtension : public UFortSettingDetailExtension	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.KoalaSettingDetailExtension");
			return ret;
		}

		void OnConnectionChanged(bool bConnected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAvailabilityChanged(bool bAvailable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
