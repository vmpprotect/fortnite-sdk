#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioMetadata
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMetadata.AudioMetadataSubsystem");
			return ret;
		}

		bool HasTag(USoundBase* InSound, FGameplayTag InTag, bool bExactMatch); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74E0482B8(relative to base address)
	};

}
