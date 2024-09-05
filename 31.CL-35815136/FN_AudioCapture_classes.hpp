#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioCapture
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioCapture.AudioCapture
	// Inherited from UAudioGenerator -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UAudioCapture : public UAudioGenerator	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioCapture.AudioCapture");
			return ret;
		}

		void StopCapturingAudio(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75075C984(relative to base address)
		void StartCapturingAudio(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75075C950(relative to base address)
		bool IsCapturingAudio(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75075C918(relative to base address)
		bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75075C7A4(relative to base address)
	};


	// Class AudioCapture.AudioCaptureFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioCapture.AudioCaptureFunctionLibrary");
			return ret;
		}

		UAudioCapture CreateAudioCapture(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75075C740(relative to base address)
	};


	// Class AudioCapture.AudioCaptureBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioCapture.AudioCaptureBlueprintLibrary");
			return ret;
		}

		void GetAvailableAudioInputDevices(UObject* WorldContextObject, FDelegateProperty& OnObtainDevicesEvent); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75075C840(relative to base address)
		FString Conv_AudioInputDeviceInfoToString(FAudioInputDeviceInfo& Info); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75075C644(relative to base address)
	};


	// Class AudioCapture.AudioCaptureComponent
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x940 - 0x880)
	class UAudioCaptureComponent : public USynthComponent	
	{
	public:
		int32_t JitterLatencyFrames; // 0x880(0x4)
		unsigned char UnknownData00_7[0xBC]; // 0x884(0xBC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioCapture.AudioCaptureComponent");
			return ret;
		}
	};

}
