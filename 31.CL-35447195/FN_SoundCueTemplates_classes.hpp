#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SoundCueTemplates
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SoundCueTemplates.SoundCueTemplate
	// Inherited from USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class USoundCueTemplate : public USoundCue	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundCueTemplates.SoundCueTemplate");
			return ret;
		}
	};


	// Class SoundCueTemplates.SoundCueContainer
	// Inherited from USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class USoundCueContainer : public USoundCueTemplate	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundCueTemplates.SoundCueContainer");
			return ret;
		}
	};


	// Class SoundCueTemplates.SoundCueDistanceCrossfade
	// Inherited from USoundCueTemplate -> USoundCue -> USoundBase -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class USoundCueDistanceCrossfade : public USoundCueTemplate	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundCueTemplates.SoundCueDistanceCrossfade");
			return ret;
		}
	};


	// Class SoundCueTemplates.SoundCueTemplateSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class USoundCueTemplateSettings : public UDeveloperSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SoundCueTemplates.SoundCueTemplateSettings");
			return ret;
		}
	};

}
