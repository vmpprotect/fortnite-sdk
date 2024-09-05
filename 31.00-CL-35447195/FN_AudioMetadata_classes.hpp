#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioMetadata
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioMetadata.AudioMetadataDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UAudioMetadataDeveloperSettings : public UDeveloperSettings	
	{
	public:
		FAudioMetadataModulationSettings ModulationSettings; // 0x30(0x10)
		FAudioMetadataSubmixSettings SubmixSettings; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMetadata.AudioMetadataDeveloperSettings");
			return ret;
		}
	};


	// Class AudioMetadata.AudioMetadataSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UAudioMetadataSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMetadata.AudioMetadataSubsystem");
			return ret;
		}

		bool HasTag(USoundBase InSound, FGameplayTag InTag, bool bExactMatch); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414664718
	};

}
