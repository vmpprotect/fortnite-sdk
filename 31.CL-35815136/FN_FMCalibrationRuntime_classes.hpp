#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FMCalibrationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCalibrationRuntime.BeatmatchCalibrationHelper");
			return ret;
		}

		void CalcCalibrationResult(TArray<float>& Samples, TArray<float>& SamplesDeltaTimes, float BPS, ECalibrationState& ResultingState, float& ResultMs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751A8EA94(relative to base address)
	};


	// Class FMCalibrationRuntime.FMCalibrationControllerComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x198 - 0xA0)
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
		FMulticastInlineDelegate OnCalibrometerDisplay; // 0x120(0x10)
		FMulticastInlineDelegate OnHasTalkedWithRoadie; // 0x130(0x10)
		FMulticastInlineDelegate OnCalibrationRequestOpenModal; // 0x140(0x10)
		FMulticastInlineDelegate OnCalibrationRegisterPreamble; // 0x150(0x10)
		FVector2D AudioLatencyMsMinMax; // 0x160(0x10)
		FVector2D VideoLatencyMsMinMax; // 0x170(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x180(0x10) UNKNOWN PROPERTY
		UFMCalibrationSaveData* CalibrationSaveData; // 0x190(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCalibrationRuntime.FMCalibrationControllerComponent");
			return ret;
		}

		void SetVideoLatencyMs(float LatencyMs); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F548(relative to base address)
		void SetIsPreambleDisabled(bool bPreambleDisabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F4D8(relative to base address)
		void SetIsCalibrationDebugEnabled(bool bCalibrationDebugEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F468(relative to base address)
		void SetIsCalibrated(bool bCalibrated); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F3F8(relative to base address)
		void SetIsAutolaunchDisabled(bool bAutolaunchDisabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F388(relative to base address)
		void SetHasTalkedWithRoadie(bool bHasTalkedWithRoadie); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F318(relative to base address)
		void SetCalibrometerDisplay(bool bCalibrometerDisplay); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F2A8(relative to base address)
		void SetAudioLatencyMs(float LatencyMs); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F238(relative to base address)
		void SendToggleModalMessage(AActor* ContextActor, bool UsePreamble, bool bIsAutoLaunch); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8F108(relative to base address)
		void SendCalibrationAnalytics(AFortPlayerController* AuthoritativePlayer); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751A8EF08(relative to base address)
		void SaveCalibrationLocalToDevice(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8EEF4(relative to base address)
		void OnLatencyMsUpdated__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, float LatencyMs); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsPreambleDisabledUpdated__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsPreambleDisabled); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsCalibrationDebugEnabled__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsCalibrationDebugEnabled); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsCalibratedUpdated__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsCalibrated); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsAutolaunchDisabledUpdated__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, bool IsAutolaunchDisabled); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHasTalkedWithRoadie__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, bool HasTalkedWithRoadie); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalibrometerDisplay__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, bool CalibrometerDisplay); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalibrationRequestOpenModal__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, bool UsePreamble); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalibrationRegisterPreamble__DelegateSignature(UFMCalibrationControllerComponent* CalibrationControllerComponent, FGameplayTag PreambleGameplayTag); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalibrationDataSaved__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalibrationDataLoaded__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LoadCalibrationLocalToDevice(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751A8EEE0(relative to base address)
		bool IsCalibrationDataOnLatestVersion(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8EEC4(relative to base address)
		bool IsCalibrationDataLoaded(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75154E7D0(relative to base address)
		float GetVideoLatencyMs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8EE9C(relative to base address)
		bool GetIsPreambleDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8EE78(relative to base address)
		bool GetIsCalibrationDebugEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8EE54(relative to base address)
		bool GetIsCalibrated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8EE30(relative to base address)
		bool GetIsAutolaunchDisabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8EE0C(relative to base address)
		bool GetHasTalkedWithRoadie(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8EDE8(relative to base address)
		bool GetCalibrometerDisplay(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8EDC4(relative to base address)
		float GetAudioLatencyMs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751A8ED9C(relative to base address)
		void DisplayCalibrationWidget(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		bool CalibrometerDisplay; // 0x34(0x1)
		bool HasTalkedWithRoadie; // 0x35(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		int32_t SaveVersion; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FMCalibrationRuntime.FMCalibrationSaveData");
			return ret;
		}
	};

}
