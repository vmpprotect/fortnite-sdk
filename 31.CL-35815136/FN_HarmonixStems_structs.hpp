#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixStems
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct HarmonixStems.StemConfigurationAudioBus
	// Size: 0x10 (0x10 - 0x0)
	struct FStemConfigurationAudioBus	
	{
	public:
		FName StemName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UAudioBus* AudioBus; // 0x8(0x8)
	};


	// Struct HarmonixStems.MusicAssetStemChannel
	// Size: 0x8 (0x8 - 0x0)
	struct FMusicAssetStemChannel	
	{
	public:
		int32_t SourceIndex; // 0x0(0x4)
		float LevelInDecibels; // 0x4(0x4)
	};


	// Struct HarmonixStems.WavesAssetStem
	// Size: 0x20 (0x20 - 0x0)
	struct FWavesAssetStem	
	{
	public:
		FName StemName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		USoundWave* SoundWave; // 0x8(0x8)
		TArray<float> ChannelLevelsInDecibels; // 0x10(0x10)
	};


	// Struct HarmonixStems.MediaStreamAssetStem
	// Size: 0x18 (0x18 - 0x0)
	struct FMediaStreamAssetStem	
	{
	public:
		FName StemName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FMusicAssetStemChannel> Channels; // 0x8(0x10)
	};

}
