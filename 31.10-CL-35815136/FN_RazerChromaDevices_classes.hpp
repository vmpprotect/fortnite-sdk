#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: RazerChromaDevices
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class RazerChromaDevices.RazerChromaAnimationAsset
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class URazerChromaAnimationAsset : public UObject	
	{
	public:
		FString AnimationName; // 0x28(0x10)
		TArray<char> RawData; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RazerChromaDevices.RazerChromaAnimationAsset");
			return ret;
		}
	};


	// Class RazerChromaDevices.RazerChromaPlayAnimationFile
	// Inherited from UInputDeviceProperty -> UObject
	// Size: 0x38 (0x68 - 0x30)
	class URazerChromaPlayAnimationFile : public UInputDeviceProperty	
	{
	public:
		URazerChromaAnimationAsset* AnimAsset; // 0x30(0x8)
		bool bLooping; // 0x38(0x1)
		unsigned char UnknownData00_7[0x2F]; // 0x39(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RazerChromaDevices.RazerChromaPlayAnimationFile");
			return ret;
		}
	};


	// Class RazerChromaDevices.RazerChromaDevicesDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class URazerChromaDevicesDeveloperSettings : public UDeveloperSettings	
	{
	public:
		bool bIsRazerChromaEnabled; // 0x30(0x1)
		bool bCreateRazerChromaInputDevice; // 0x31(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		URazerChromaAnimationAsset* IdleAnimationAsset; // 0x38(0x8)
		bool bUseChromaAppInfoForInit; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FRazerChromaAppInfo AppInfo; // 0x48(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RazerChromaDevices.RazerChromaDevicesDeveloperSettings");
			return ret;
		}
	};


	// Class RazerChromaDevices.RazerChromaFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URazerChromaFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/RazerChromaDevices.RazerChromaFunctionLibrary");
			return ret;
		}

		void UseForwardChromaEvents(bool bToggle); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A46F4(relative to base address)
		void StopChromaAnimation(URazerChromaAnimationAsset* AnimToStop); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A4684(relative to base address)
		void StopAllChromaAnimations(); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A465C(relative to base address)
		void SetUseIdleAnimation(bool bUseIdleAnimation); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A45DC(relative to base address)
		void SetIdleAnimation(URazerChromaAnimationAsset* NewIdleAnimation); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A456C(relative to base address)
		int32_t SetEventName(FString Name); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A44C0(relative to base address)
		void SetAllDevicesStaticColor(FColor& ColorToSet, int32_t DeviceTypes); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7520A436C(relative to base address)
		void ResumeChromaAnimation(URazerChromaAnimationAsset* AnimToResume, bool bLoop); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A42B8(relative to base address)
		bool PlayChromaAnimation(URazerChromaAnimationAsset* AnimToPlay, bool bLooping); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF748FA3828(relative to base address)
		void PauseChromaAnimation(URazerChromaAnimationAsset* AnimToPause); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A4248(relative to base address)
		bool IsChromaRuntimeAvailable(); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A4224(relative to base address)
		bool IsChromaAnimationPaused(URazerChromaAnimationAsset* Anim); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A41A4(relative to base address)
		bool IsAnimationPlaying(URazerChromaAnimationAsset* Anim); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A4124(relative to base address)
		float GetTotalDuration(URazerChromaAnimationAsset* Anim); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7520A40A4(relative to base address)
		FString Conv_RazerChromaDeviceTypesToString(int32_t DeviceTypes); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7520A4010(relative to base address)
	};

}
