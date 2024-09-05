#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Harmonix
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Harmonix.HarmonixBlueprintUtil
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHarmonixBlueprintUtil : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Harmonix.HarmonixBlueprintUtil");
			return ret;
		}

		void SetMeasuredVideoToAudioRenderOffsetMs(float Milliseconds); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F34FA4(relative to base address)
		void SetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs(float Milliseconds); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F34F24(relative to base address)
		float GetMeasuredVideoToAudioRenderOffsetMs(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F34EFC(relative to base address)
		float GetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F34ED4(relative to base address)
	};


	// Class Harmonix.HarmonixDeveloperSettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UHarmonixDeveloperSettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Harmonix.HarmonixDeveloperSettings");
			return ret;
		}
	};


	// Class Harmonix.HarmonixPluginSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UHarmonixPluginSettings : public UDeveloperSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Harmonix.HarmonixPluginSettings");
			return ret;
		}
	};

}
