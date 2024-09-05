#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RazerChromaDevices
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class RazerChromaDevices.RazerChromaAnimationAsset
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class URazerChromaAnimationAsset : public UObject	
	{
	public:
		FString AnimationName; // 0x28(0x10)
		TArray RawData; // 0x38(0x10)

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
		unsigned char UnknownData01_1[0x38]; // 0x30(0x38) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
		URazerChromaAnimationAsset IdleAnimationAsset; // 0x38(0x8)
		bool bUseChromaAppInfoForInit; // 0x40(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
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

		void UseForwardChromaEvents(bool bToggle); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB8660
		void StopChromaAnimation(URazerChromaAnimationAsset AnimToStop); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB8580
		void StopAllChromaAnimations(); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB84A0
		void SetUseIdleAnimation(bool bUseIdleAnimation); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB83C0
		void SetIdleAnimation(URazerChromaAnimationAsset NewIdleAnimation); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB82E0
		int32_t SetEventName(FString Name); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB8200
		void SetAllDevicesStaticColor(FColor& ColorToSet, int32_t DeviceTypes); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414EB8120
		void ResumeChromaAnimation(URazerChromaAnimationAsset AnimToResume, bool bLoop); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB8040
		bool PlayChromaAnimation(URazerChromaAnimationAsset AnimToPlay, bool bLooping); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB7F60
		void PauseChromaAnimation(URazerChromaAnimationAsset AnimToPause); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB7E80
		bool IsChromaRuntimeAvailable(); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB7DA0
		bool IsChromaAnimationPaused(URazerChromaAnimationAsset Anim); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB7CC0
		bool IsAnimationPlaying(URazerChromaAnimationAsset Anim); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB7BE0
		float GetTotalDuration(URazerChromaAnimationAsset Anim); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414EB7B00
		FString Conv_RazerChromaDeviceTypesToString(int32_t DeviceTypes); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414EB7A20
	};

}
