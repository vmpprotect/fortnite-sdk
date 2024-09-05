#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: KoalaUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class KoalaUI.FortGameSettingRegistryExtension_Koala
	// Inherited from UFortGameSettingRegistryExtension -> UFortGameSettingRegistryExtensionBase -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UFortGameSettingRegistryExtension_Koala : public UFortGameSettingRegistryExtension	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FFortSettingNameExtensions SettingExtensions; // 0x30(0x18)
		unsigned char UnknownData03_7[0x20]; // 0x48(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.FortGameSettingRegistryExtension_Koala");
			return ret;
		}
	};


	// Class KoalaUI.FortSidebarPanelKoala
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x430 - 0x3F8)
	class UFortSidebarPanelKoala : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		UCommonButtonBase Button_KoalaDummy; // 0x410(0x8)
		UFortLazyImage QrCodeImage; // 0x418(0x8)
		FString QRCodeURL; // 0x420(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.FortSidebarPanelKoala");
			return ret;
		}

		void OnConnectionChanged(bool bConnected); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFC898
	};


	// Class KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
	// Inherited from UFortUIGameFeatureAction_PostFrontendFlowActions -> UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class UFortUIGameFeatureAction_AttemptKoalaModal : public UFortUIGameFeatureAction_PostFrontendFlowActions	
	{
	public:
		TWeakObjectPtr KoalaGraphicsModalClass; // 0x30(0x20)
		unsigned char UnknownData01_7[0x18]; // 0x50(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal");
			return ret;
		}
	};


	// Class KoalaUI.KoalaGraphicsModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x420 - 0x3F8)
	class UKoalaGraphicsModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		UCommonButtonBase Button_KeepEnabled; // 0x410(0x8)
		UCommonButtonBase Button_Disable; // 0x418(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.KoalaGraphicsModal");
			return ret;
		}
	};


	// Class KoalaUI.KoalaHUDWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x550 - 0x3F8)
	class UKoalaHUDWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData07_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		float ClipDebounceTime; // 0x400(0x4)
		float PlayerKilledPlayerReminderTime; // 0x404(0x4)
		float MatchEndedReminderTime; // 0x408(0x4)
		float ClipReminderCooldownTime; // 0x40C(0x4)
		float EliminationClipReminderDelayTime; // 0x410(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x414(0x4) UNKNOWN PROPERTY
		USoundSubmix ClipAudioSubmix; // 0x418(0x8)
		UCommonActionWidget ClipActionWidget; // 0x420(0x8)
		FDataTableRowHandle ClipObjectInputAction; // 0x428(0x10)
		unsigned char UnknownData09_6[0x8]; // 0x438(0x8) UNKNOWN PROPERTY
		TMap ClipTracker; // 0x440(0x50)
		unsigned char UnknownData10_6[0x8]; // 0x490(0x8) UNKNOWN PROPERTY
		int32_t LastClipID; // 0x498(0x4)
		unsigned char UnknownData11_6[0x16]; // 0x49C(0x16) UNKNOWN PROPERTY
		EKoalaMockClipMode MockClipMode; // 0x4B2(0x1)
		unsigned char UnknownData12_6[0x1]; // 0x4B3(0x1) UNKNOWN PROPERTY
		int32_t MockClipUploadShortTime; // 0x4B4(0x4)
		int32_t MockClipUploadLongTime; // 0x4B8(0x4)
		int32_t MockClipCreateShortTime; // 0x4BC(0x4)
		int32_t MockClipCreateLongTime; // 0x4C0(0x4)
		unsigned char UnknownData13_7[0x8C]; // 0x4C4(0x8C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.KoalaHUDWidget");
			return ret;
		}

		void UnregisterClipButtonInput(); // Flags: Final|Native|Private 0x7FF414CFD698
		void RegisterClipButtonInput(); // Flags: Final|Native|Private 0x7FF414CFD5B8
		void OnTouchAreaMouseDown(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFD4D8
		void OnReminderTimerStarted(float Time); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFD3F8
		void OnReminderEnded(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFD318
		void OnRecordingStatusChanged(EKoalaRecording InRecordingStatus); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFD238
		void OnInputProgress(float Progress); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFD158
		void OnInputComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFD078
		void OnConnectionChanged(EKoalaConnectionStatus InStatus); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFCF98
		void OnClipStatusChanged(int32_t InClipID, EKoalaClipStatus InClipStatus, float InUploadProgress); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFCEB8
		void OnAvailabilityChanged(EKoalaAvailability Availability); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFCDD8
		void HandlePlayerPawnEmoteStopped(UFortItemDefinition MontageItemDef, AFortPawn PawnEmoting); // Flags: Final|Native|Private 0x7FF414CFCCF8
		void HandlePlayerMatchWon(); // Flags: Final|Native|Private 0x7FF414CFCC18
		void HandleLocalPlayerKilledPlayer(AFortPlayerStateAthena Player); // Flags: Final|Native|Private 0x7FF414CFCB38
		int32_t GetUploadingClipCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CFCA58
		int32_t GetTrackedClipCount(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CFC978
	};


	// Class KoalaUI.KoalaMainMenuButton
	// Inherited from UFortMainMenuButtonExtension -> UFortMainMenuButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1500 - 0x14F0)
	class UKoalaMainMenuButton : public UFortMainMenuButtonExtension	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x14F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.KoalaMainMenuButton");
			return ret;
		}
	};


	// Class KoalaUI.KoalaSettingDetailExtension
	// Inherited from UFortSettingDetailExtension -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C8 - 0x2C0)
	class UKoalaSettingDetailExtension : public UFortSettingDetailExtension	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2C0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KoalaUI.KoalaSettingDetailExtension");
			return ret;
		}

		void OnConnectionChanged(bool bConnected); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFD858
		void OnAvailabilityChanged(bool bAvailable); // Flags: Event|Protected|BlueprintEvent 0x7FF414CFD778
	};

}
