#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioCapture
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioCapture.AudioCapture
	// Inherited from UAudioGenerator -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UAudioCapture : public UAudioGenerator	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioCapture.AudioCapture");
			return ret;
		}

		void StopCapturingAudio(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE76D8
		void StartCapturingAudio(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE75F8
		bool IsCapturingAudio(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE7518
		bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE7438
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

		UAudioCapture CreateAudioCapture(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414BE77B8
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

		void GetAvailableAudioInputDevices(UObject WorldContextObject, FDelegateProperty& OnObtainDevicesEvent); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BE7978
		FString Conv_AudioInputDeviceInfoToString(FAudioInputDeviceInfo& Info); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414BE7898
	};


	// Class AudioCapture.AudioCaptureComponent
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x940 - 0x880)
	class UAudioCaptureComponent : public USynthComponent	
	{
	public:
		int32_t JitterLatencyFrames; // 0x880(0x4)
		unsigned char UnknownData01_7[0xBC]; // 0x884(0xBC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioCapture.AudioCaptureComponent");
			return ret;
		}
	};

}
