#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixMidi
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct HarmonixMidi.MidiSongPos
	// Size: 0x40 (0x40 - 0x0)
	struct FMidiSongPos	
	{
	public:
		float SecondsFromBarOne; // 0x0(0x4)
		float SecondsIncludingCountIn; // 0x4(0x4)
		int32_t TimeSigNumerator; // 0x8(0x4)
		int32_t TimeSigDenominator; // 0xC(0x4)
		float Tempo; // 0x10(0x4)
		float BarsIncludingCountIn; // 0x14(0x4)
		float BeatsIncludingCountIn; // 0x18(0x4)
		EMusicalBeatType BeatType; // 0x1C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FMusicTimestamp Timestamp; // 0x20(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
	};


	// Struct HarmonixMidi.MusicTimestamp
	// Size: 0x8 (0x8 - 0x0)
	struct FMusicTimestamp	
	{
	public:
		int32_t Bar; // 0x0(0x4)
		float Beat; // 0x4(0x4)
	};


	// Struct HarmonixMidi.TimeSignature
	// Size: 0x4 (0x4 - 0x0)
	struct FTimeSignature	
	{
	public:
		int16_t Numerator; // 0x0(0x2)
		int16_t Denominator; // 0x2(0x2)
	};


	// Struct HarmonixMidi.MusicMapTimespanBase
	// Size: 0x8 (0x8 - 0x0)
	struct FMusicMapTimespanBase	
	{
	public:
		int32_t StartTick; // 0x0(0x4)
		int32_t LengthTicks; // 0x4(0x4)
	};


	// Struct HarmonixMidi.TimeSignaturePoint
	// Inherited from FMusicMapTimespanBase
	// Size: 0xC (0x14 - 0x8)
	struct FTimeSignaturePoint : public FMusicMapTimespanBase	
	{
	public:
		int32_t BarIndex; // 0x8(0x4)
		int32_t BeatIndex; // 0xC(0x4)
		FTimeSignature TimeSignature; // 0x10(0x4)
	};


	// Struct HarmonixMidi.BarMap
	// Size: 0x18 (0x18 - 0x0)
	struct FBarMap	
	{
	public:
		int32_t StartBar; // 0x0(0x4)
		int32_t TicksPerQuarterNote; // 0x4(0x4)
		TArray<FTimeSignaturePoint> Points; // 0x8(0x10)
	};


	// Struct HarmonixMidi.BeatMapPoint
	// Inherited from FMusicMapTimespanBase
	// Size: 0x8 (0x10 - 0x8)
	struct FBeatMapPoint : public FMusicMapTimespanBase	
	{
	public:
		int32_t PulseBar; // 0x8(0x4)
		EMusicalBeatType Type; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct HarmonixMidi.PulseBar
	// Size: 0x10 (0x10 - 0x0)
	struct FPulseBar	
	{
	public:
		int32_t StartTick; // 0x0(0x4)
		int32_t LengthTicks; // 0x4(0x4)
		int32_t FirstIncludedBeatIndex; // 0x8(0x4)
		int32_t LastIncludedBeatIndex; // 0xC(0x4)
	};


	// Struct HarmonixMidi.BeatMap
	// Size: 0x28 (0x28 - 0x0)
	struct FBeatMap	
	{
	public:
		int32_t TicksPerQuarterNote; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FBeatMapPoint> Points; // 0x8(0x10)
		TArray<FPulseBar> Bars; // 0x18(0x10)
	};


	// Struct HarmonixMidi.ChordMapPoint
	// Inherited from FMusicMapTimespanBase
	// Size: 0x4 (0xC - 0x8)
	struct FChordMapPoint : public FMusicMapTimespanBase	
	{
	public:
		FName Name; // 0x8(0x4)
	};


	// Struct HarmonixMidi.ChordProgressionMap
	// Size: 0x20 (0x20 - 0x0)
	struct FChordProgressionMap	
	{
	public:
		int32_t TicksPerQuarterNote; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FChordMapPoint> Points; // 0x8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct HarmonixMidi.MidiEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FMidiEvent	
	{
	public:
		int32_t Tick; // 0x0(0x4)
		FMidiMsg Message; // 0x4(0x4)
	};


	// Struct HarmonixMidi.MidiMsg
	// Size: 0x4 (0x4 - 0x0)
	struct FMidiMsg	
	{
	public:
		unsigned char UnknownData00_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct HarmonixMidi.MidiFileData
	// Size: 0xF8 (0xF8 - 0x0)
	struct FMidiFileData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FString MidiFileName; // 0x8(0x10)
		int32_t TicksPerQuarterNote; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FSongMaps SongMaps; // 0x20(0xC8)
		TArray<FMidiTrack> Tracks; // 0xE8(0x10)
	};


	// Struct HarmonixMidi.MidiTrack
	// Size: 0x28 (0x28 - 0x0)
	struct FMidiTrack	
	{
	public:
		TArray<FMidiEvent> Events; // 0x0(0x10)
		bool Sorted; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t PrimaryMidiChannel; // 0x14(0x4)
		TArray<FString> Strings; // 0x18(0x10)
	};


	// Struct HarmonixMidi.SongMaps
	// Size: 0xC8 (0xC8 - 0x0)
	struct FSongMaps	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		int32_t TicksPerQuarterNote; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FTempoMap TempoMap; // 0x10(0x20)
		FBarMap BarMap; // 0x30(0x18)
		FBeatMap BeatMap; // 0x48(0x28)
		FSectionMap SectionMap; // 0x70(0x18)
		FChordProgressionMap ChordMap; // 0x88(0x20)
		TArray<FString> TrackNames; // 0xA8(0x10)
		FSongLengthData LengthData; // 0xB8(0xC)
		unsigned char UnknownData02_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY
	};


	// Struct HarmonixMidi.SongLengthData
	// Size: 0xC (0xC - 0x0)
	struct FSongLengthData	
	{
	public:
		int32_t LengthTicks; // 0x0(0x4)
		float LengthFractionalBars; // 0x4(0x4)
		int32_t LastTick; // 0x8(0x4)
	};


	// Struct HarmonixMidi.SectionMap
	// Size: 0x18 (0x18 - 0x0)
	struct FSectionMap	
	{
	public:
		int32_t TicksPerQuarterNote; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FSongSection> Points; // 0x8(0x10)
	};


	// Struct HarmonixMidi.SongSection
	// Inherited from FMusicMapTimespanBase
	// Size: 0x10 (0x18 - 0x8)
	struct FSongSection : public FMusicMapTimespanBase	
	{
	public:
		FString Name; // 0x8(0x10)
	};


	// Struct HarmonixMidi.TempoMap
	// Size: 0x20 (0x20 - 0x0)
	struct FTempoMap	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		int32_t TicksPerQuarterNote; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FTempoInfoPoint> Points; // 0x10(0x10)
	};


	// Struct HarmonixMidi.TempoInfoPoint
	// Inherited from FMusicMapTimespanBase
	// Size: 0x8 (0x10 - 0x8)
	struct FTempoInfoPoint : public FMusicMapTimespanBase	
	{
	public:
		float Ms; // 0x8(0x4)
		int32_t MidiTempo; // 0xC(0x4)
	};


	// Struct HarmonixMidi.MusicalTimeSpan
	// Size: 0x10 (0x10 - 0x0)
	struct FMusicalTimeSpan	
	{
	public:
		EMusicTimeSpanLengthUnits LengthUnits; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Length; // 0x4(0x4)
		EMusicTimeSpanOffsetUnits OffsetUnits; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t Offset; // 0xC(0x4)
	};


	// Struct HarmonixMidi.MidiNote
	// Size: 0x1 (0x1 - 0x0)
	struct FMidiNote	
	{
	public:
		char NoteNumber; // 0x0(0x1)
	};

}
