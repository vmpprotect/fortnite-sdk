#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksMidiParser
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SparksMidiParser.MidiEventListenerParams
	// Size: 0x8 (0x8 - 0x0)
	struct FMidiEventListenerParams	
	{
	public:
		FName TrackName; // 0x0(0x4)
		EMidiEventListenerInitBroadcast InitBroadcast; // 0x4(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct SparksMidiParser.MidiNoteEventListenerParams
	// Inherited from FMidiEventListenerParams
	// Size: 0x18 (0x20 - 0x8)
	struct FMidiNoteEventListenerParams : public FMidiEventListenerParams	
	{
	public:
		TArray EventNotes; // 0x8(0x10)
		float SecondsBeforeStartTick; // 0x18(0x4)
		float SecondsBeforeEndTick; // 0x1C(0x4)
	};


	// Struct SparksMidiParser.ParsedMidiEventBase
	// Size: 0x8 (0x8 - 0x0)
	struct FParsedMidiEventBase	
	{
	public:
		int32_t AtMidiTick; // 0x0(0x4)
		int32_t EndsAtMidiTick; // 0x4(0x4)
	};


	// Struct SparksMidiParser.ParsedMidiNoteEvent
	// Inherited from FParsedMidiEventBase
	// Size: 0x4 (0xC - 0x8)
	struct FParsedMidiNoteEvent : public FParsedMidiEventBase	
	{
	public:
		char EventNote; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct SparksMidiParser.MidiNoteEvent_DelayPool
	// Size: 0xC (0xC - 0x0)
	struct FMidiNoteEvent_DelayPool	
	{
	public:
		FName ID; // 0x0(0x4)
		float MaxSecondsBefore; // 0x4(0x4)
		float MinSecondsBefore; // 0x8(0x4)
	};


	// Struct SparksMidiParser.MidiNotePoolEventListenerParams
	// Inherited from FMidiEventListenerParams
	// Size: 0x30 (0x38 - 0x8)
	struct FMidiNotePoolEventListenerParams : public FMidiEventListenerParams	
	{
	public:
		TArray EventNotes; // 0x8(0x10)
		TArray WatchNotes; // 0x18(0x10)
		TArray DelayPools; // 0x28(0x10)
	};


	// Struct SparksMidiParser.MidiTextEventListenerParams
	// Inherited from FMidiEventListenerParams
	// Size: 0x18 (0x20 - 0x8)
	struct FMidiTextEventListenerParams : public FMidiEventListenerParams	
	{
	public:
		TArray EventStrings; // 0x8(0x10)
		float SecondsBeforeStartTick; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct SparksMidiParser.ParsedMidiTextEvent
	// Inherited from FParsedMidiEventBase
	// Size: 0x20 (0x28 - 0x8)
	struct FParsedMidiTextEvent : public FParsedMidiEventBase	
	{
	public:
		FString EventString; // 0x8(0x10)
		TArray EventPayload; // 0x18(0x10)
	};


	// Struct SparksMidiParser.MidiEventListenerHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FMidiEventListenerHandle	
	{
	public:
		uint64_t ID; // 0x0(0x8)
		TWeakObjectPtr WeakDriver; // 0x8(0x8)
	};


	// Struct SparksMidiParser.MidiPlaybackState
	// Size: 0xC (0xC - 0x0)
	struct FMidiPlaybackState	
	{
	public:
		int32_t CurrentTimeTick; // 0x0(0x4)
		float CurrentTimeSeconds; // 0x4(0x4)
		bool bIsPlaybackEnded; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct SparksMidiParser.MidiNoteEventList
	// Size: 0x10 (0x10 - 0x0)
	struct FMidiNoteEventList	
	{
	public:
		TArray Events; // 0x0(0x10)
	};


	// Struct SparksMidiParser.MidiTextEventList
	// Size: 0x10 (0x10 - 0x0)
	struct FMidiTextEventList	
	{
	public:
		TArray Events; // 0x0(0x10)
	};

}
