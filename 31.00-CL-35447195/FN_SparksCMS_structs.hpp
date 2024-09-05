#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCMS
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SparksCMS.SparksSongQuicksilverTrack
	// Size: 0x30 (0x30 - 0x0)
	struct FSparksSongQuicksilverTrack	
	{
	public:
		FString Part; // 0x0(0x10)
		TArray Channels; // 0x10(0x10)
		TArray Vols; // 0x20(0x10)
	};


	// Struct SparksCMS.SparksSongQuicksilverInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FSparksSongQuicksilverInfo	
	{
	public:
		FString SongID; // 0x0(0x10)
		FString PreviewID; // 0x10(0x10)
		TArray Tracks; // 0x20(0x10)
	};


	// Struct SparksCMS.SparksSongIntensityInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FSparksSongIntensityInfo	
	{
	public:
		int32_t Vocals; // 0x0(0x4)
		int32_t Guitar; // 0x4(0x4)
		int32_t Bass; // 0x8(0x4)
		int32_t Drums; // 0xC(0x4)
		int32_t PlasticGuitar; // 0x10(0x4)
		int32_t PlasticBass; // 0x14(0x4)
		int32_t PlasticDrums; // 0x18(0x4)
		int32_t Band; // 0x1C(0x4)
	};


	// Struct SparksCMS.SparksSongCatalogEntry
	// Size: 0x190 (0x190 - 0x0)
	struct FSparksSongCatalogEntry	
	{
	public:
		FString SongUID; // 0x0(0x10)
		FString ShortName; // 0x10(0x10)
		FString Title; // 0x20(0x10)
		FString Artist; // 0x30(0x10)
		FString Album; // 0x40(0x10)
		TArray Genre; // 0x50(0x10)
		int32_t duration; // 0x60(0x4)
		float CountInDuration; // 0x64(0x4)
		int32_t ReleaseYear; // 0x68(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		FDateTime NewUntilTime; // 0x70(0x8)
		ESparksSongAgeRating AgeRating; // 0x78(0x1)
		EMusicKey MusicKey; // 0x79(0x1)
		EMusicKeyMode MusicMode; // 0x7A(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x7B(0x1) UNKNOWN PROPERTY
		int32_t MusicTempo; // 0x7C(0x4)
		ESparksInstrumentType StartingInstrumentGuitar; // 0x80(0x1)
		ESparksInstrumentType StartingInstrumentBass; // 0x81(0x1)
		ESparksInstrumentType StartingInstrumentDrums; // 0x82(0x1)
		ESparksInstrumentType StartingInstrumentVocals; // 0x83(0x1)
		unsigned char UnknownData06_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		FString SanitizedSearchString; // 0x88(0x10)
		FString JamLinkCode; // 0x98(0x10)
		FString McpTemplateId; // 0xA8(0x10)
		FString AlbumArtUrl; // 0xB8(0x10)
		FString AlbumArtThumbnailUrl; // 0xC8(0x10)
		FString MidiUrl; // 0xD8(0x10)
		TArray MidiData; // 0xE8(0x10)
		FString LipSyncUrl; // 0xF8(0x10)
		TArray LipSyncData; // 0x108(0x10)
		FGameplayTagContainer GameplayTagContainer; // 0x118(0x20)
		FSparksSongQuicksilverInfo QuicksilverInfo; // 0x138(0x30)
		FSparksSongIntensityInfo Intensities; // 0x168(0x20)
		bool bValid; // 0x188(0x1)
		unsigned char UnknownData07_7[0x7]; // 0x189(0x7) UNKNOWN PROPERTY
	};

}
