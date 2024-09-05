#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FMCalibrationRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FMCalibrationRuntime.BeatmatchCalibrationHelper
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UBeatmatchCalibrationHelper : public UActorComponent	
	{
	public:
		float TightCalWindowMs; // 0xA0(0x4)
		int32_t MinTightCalSamples; // 0xA4(0x4)
		float LooseCalWindowMs; // 0xA8(0x4)
		int32_t MinLooseCalSamples; // 0xAC(0x4)
		int32_t MaxSamplesBeforeFail; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCalibrationRuntime.BeatmatchCalibrationHelper");
			return ret;
		}

		void CalcCalibrationResult(TArray& Samples, TArray& SamplesDeltaTimes, float BPS, ECalibrationState& ResultingState, float& ResultMs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DF5520
	};


	// Class FMCalibrationRuntime.FMCalibrationControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE8 (0x188 - 0xA0)
	class UFMCalibrationControllerComponent : public UControllerComponent	
	{
	public:
		FMulticastInlineDelegate OnCalibrationDataLoaded; // 0xA0(0x10)
		FMulticastInlineDelegate OnCalibrationDataSaved; // 0xB0(0x10)
		FMulticastInlineDelegate OnAudioLatencyMsUpdated; // 0xC0(0x10)
		FMulticastInlineDelegate OnVideoLatencyMsUpdated; // 0xD0(0x10)
		FMulticastInlineDelegate OnIsCalibratedUpdated; // 0xE0(0x10)
		FMulticastInlineDelegate OnIsPreambleDisabledUpdated; // 0xF0(0x10)
		FMulticastInlineDelegate OnIsAutolaunchDisabledUpdated; // 0x100(0x10)
		FMulticastInlineDelegate OnIsCalibrationDebugEnabled; // 0x110(0x10)
		FMulticastInlineDelegate OnHasTalkedWithRoadie; // 0x120(0x10)
		FMulticastInlineDelegate OnCalibrationRequestOpenModal; // 0x130(0x10)
		FMulticastInlineDelegate OnCalibrationRegisterPreamble; // 0x140(0x10)
		FVector2D AudioLatencyMsMinMax; // 0x150(0x10)
		FVector2D VideoLatencyMsMinMax; // 0x160(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x170(0x10) UNKNOWN PROPERTY
		UFMCalibrationSaveData CalibrationSaveData; // 0x180(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCalibrationRuntime.FMCalibrationControllerComponent");
			return ret;
		}

		void SetVideoLatencyMs(float LatencyMs); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F19A0
		void SetIsPreambleDisabled(bool bPreambleDisabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F18C0
		void SetIsCalibrationDebugEnabled(bool bCalibrationDebugEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F17E0
		void SetIsCalibrated(bool bCalibrated); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F1700
		void SetIsAutolaunchDisabled(bool bAutolaunchDisabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F1620
		void SetHasTalkedWithRoadie(bool bHasTalkedWithRoadie); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F1540
		void SetAudioLatencyMs(float LatencyMs); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F1460
		void SendToggleModalMessage(AActor ContextActor, bool UsePreamble, bool bIsAutoLaunch); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F1380
		void SendCalibrationAnalytics(AFortPlayerController AuthoritativePlayer); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF4140F12A0
		void SaveCalibrationLocalToDevice(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4140F11C0
		void OnLatencyMsUpdated__DelegateSignature(UFMCalibrationControllerComponent CalibrationControllerComponent, float LatencyMs); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F10E0
		void OnIsPreambleDisabledUpdated__DelegateSignature(UFMCalibrationControllerComponent CalibrationControllerComponent, bool IsPreambleDisabled); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F1000
		void OnIsCalibrationDebugEnabled__DelegateSignature(UFMCalibrationControllerComponent CalibrationControllerComponent, bool IsCalibrationDebugEnabled); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F0F20
		void OnIsCalibratedUpdated__DelegateSignature(UFMCalibrationControllerComponent CalibrationControllerComponent, bool IsCalibrated); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F0E40
		void OnIsAutolaunchDisabledUpdated__DelegateSignature(UFMCalibrationControllerComponent CalibrationControllerComponent, bool IsAutolaunchDisabled); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F0D60
		void OnHasTalkedWithRoadie__DelegateSignature(UFMCalibrationControllerComponent CalibrationControllerComponent, bool HasTalkedWithRoadie); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F0C80
		void OnCalibrationRequestOpenModal__DelegateSignature(UFMCalibrationControllerComponent CalibrationControllerComponent, bool UsePreamble); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F0BA0
		void OnCalibrationRegisterPreamble__DelegateSignature(UFMCalibrationControllerComponent CalibrationControllerComponent, FGameplayTag PreambleGameplayTag); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F0AC0
		void OnCalibrationDataSaved__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F09E0
		void OnCalibrationDataLoaded__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140F0900
		void LoadCalibrationLocalToDevice(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140F0820
		bool IsCalibrationDataOnLatestVersion(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140F0740
		bool IsCalibrationDataLoaded(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140F0660
		float GetVideoLatencyMs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F0580
		bool GetIsPreambleDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F04A0
		bool GetIsCalibrationDebugEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F03C0
		bool GetIsCalibrated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F02E0
		bool GetIsAutolaunchDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F0200
		bool GetHasTalkedWithRoadie(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F0120
		float GetAudioLatencyMs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140F0040
		void DisplayCalibrationWidget(); // Flags: Event|Public|BlueprintEvent 0x7FF4140EFF60
	};


	// Class FMCalibrationRuntime.FMCalibrationSaveData
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFMCalibrationSaveData : public UObject	
	{
	public:
		float AudioLatencyMs; // 0x28(0x4)
		float VideoLatencyMs; // 0x2C(0x4)
		bool IsCalibrated; // 0x30(0x1)
		bool IsPreambleDisabled; // 0x31(0x1)
		bool IsAutolaunchDisabled; // 0x32(0x1)
		bool IsCalibrationDebugEnabled; // 0x33(0x1)
		bool HasTalkedWithRoadie; // 0x34(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		int32_t SaveVersion; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCalibrationRuntime.FMCalibrationSaveData");
			return ret;
		}
	};

}
