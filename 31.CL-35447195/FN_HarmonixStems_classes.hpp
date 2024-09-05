#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HarmonixStems
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HarmonixStems.StemConfiguration
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UStemConfiguration : public UObject	
	{
	public:
		TArray Stems; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixStems.StemConfiguration");
			return ret;
		}
	};


	// Class HarmonixStems.StemmedMusicAsset
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UStemmedMusicAsset : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UMidiFile MidiFile; // 0x30(0x8)
		UStemConfiguration StemConfiguration; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixStems.StemmedMusicAsset");
			return ret;
		}
	};


	// Class HarmonixStems.StemmedWavesAsset
	// Inherited from UStemmedMusicAsset -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UStemmedWavesAsset : public UStemmedMusicAsset	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
		TArray WavesStems; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixStems.StemmedWavesAsset");
			return ret;
		}
	};


	// Class HarmonixStems.StemmedMediaStreamAsset
	// Inherited from UStemmedMusicAsset -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UStemmedMediaStreamAsset : public UStemmedMusicAsset	
	{
	public:
		UMediaPlayer MediaPlayer; // 0x40(0x8)
		TArray StreamStems; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixStems.StemmedMediaStreamAsset");
			return ret;
		}
	};

}
