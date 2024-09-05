#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Harmonix
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void SetMeasuredVideoToAudioRenderOffsetMs(float Milliseconds); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C00DB8
		void SetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs(float Milliseconds); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C00CD8
		float GetMeasuredVideoToAudioRenderOffsetMs(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C00BF8
		float GetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C00B18
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
