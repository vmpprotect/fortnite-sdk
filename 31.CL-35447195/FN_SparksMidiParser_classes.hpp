#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksMidiParser
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksMidiParser.AsyncAction_ListenForMidiEventBase
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UAsyncAction_ListenForMidiEventBase : public UCancellableAsyncAction	
	{
	public:
		FMulticastInlineDelegate OnFinished; // 0x30(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.AsyncAction_ListenForMidiEventBase");
			return ret;
		}

		void OnFinished__DelegateSignature(bool bCanceled); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140357D0
	};


	// Class SparksMidiParser.AsyncAction_ListenForMidiNoteEvent
	// Inherited from UAsyncAction_ListenForMidiEventBase -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class UAsyncAction_ListenForMidiNoteEvent : public UAsyncAction_ListenForMidiEventBase	
	{
	public:
		FMulticastInlineDelegate OnMidiEventStart; // 0x60(0x10)
		FMulticastInlineDelegate OnMidiEventEnd; // 0x70(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x80(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent");
			return ret;
		}

		void OnMidiNoteEventDelegate__DelegateSignature(char MidiEventNote, FParsedMidiNoteEvent& MidiEventData); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF414035D38
		UAsyncAction_ListenForMidiNoteEvent ListenForMidiNoteEvents_WithParams(TScriptInterface MidiEventDriver, FMidiNoteEventListenerParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414035AD8
		UAsyncAction_ListenForMidiNoteEvent ListenForMidiNoteEvents(TScriptInterface MidiEventDriver, FName MidiTrackName, TArray EventNotes, float SecondsBeforeEventStart, float SecondsBeforeEventEnd, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140359F8
		UAsyncAction_ListenForMidiNoteEvent ListenForMidiNoteEvent(TScriptInterface MidiEventDriver, FName MidiTrackName, char EventNote, float SecondsBeforeEventStart, float SecondsBeforeEventEnd, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4140358B0
	};


	// Class SparksMidiParser.AsyncAction_ListenForMidiTextEvent
	// Inherited from UAsyncAction_ListenForMidiEventBase -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x30 (0x90 - 0x60)
	class UAsyncAction_ListenForMidiTextEvent : public UAsyncAction_ListenForMidiEventBase	
	{
	public:
		FMulticastInlineDelegate OnMidiEventStart; // 0x60(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x70(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent");
			return ret;
		}

		void OnMidiTextEventDelegate__DelegateSignature(FString MidiEventText, FParsedMidiTextEvent& MidiEventData); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140367F8
		UAsyncAction_ListenForMidiTextEvent ListenForMidiTextEvents_WithParams(TScriptInterface MidiEventDriver, FMidiTextEventListenerParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414036658
		UAsyncAction_ListenForMidiTextEvent ListenForMidiTextEvents(TScriptInterface MidiEventDriver, FName MidiTrackName, TArray& EventStrings, float SecondsBeforeEventStart, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414036578
		UAsyncAction_ListenForMidiTextEvent ListenForMidiTextEvent(TScriptInterface MidiEventDriver, FName MidiTrackName, FString EventString, float SecondsBeforeEventStart, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414036498
	};


	// Class SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools
	// Inherited from UAsyncAction_ListenForMidiEventBase -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x48 (0xA8 - 0x60)
	class UAsyncAction_ListenForMidiNoteEventPools : public UAsyncAction_ListenForMidiEventBase	
	{
	public:
		FMulticastInlineDelegate OnMidiNoteStart; // 0x60(0x10)
		unsigned char UnknownData01_7[0x38]; // 0x70(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools");
			return ret;
		}

		void OnMidiNotePoolEventDelegate__DelegateSignature(char MidiNote, FParsedMidiNoteEvent& MidiNoteData, FName WaitPoolID, float ActualDelay, float MaxDelayShortenedBy); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4140363B8
		UAsyncAction_ListenForMidiNoteEventPools ListenForMidiNoteEventsPools_WithParams(TScriptInterface MidiEventDriver, FMidiNotePoolEventListenerParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414036218
		UAsyncAction_ListenForMidiNoteEventPools ListenForMidiNoteEventsPools(TScriptInterface MidiEventDriver, FName MidiTrackName, TArray& EventNotes, TArray& WatchNotes, TArray& DelayPools, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414036138
		UAsyncAction_ListenForMidiNoteEventPools ListenForMidiNoteEventPools(TScriptInterface MidiEventDriver, FName MidiTrackName, char EventNote, TArray& WatchNotes, TArray& DelayPools, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414035F98
	};


	// Class SparksMidiParser.MidiEventDriverInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMidiEventDriverInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.MidiEventDriverInterface");
			return ret;
		}

		float TickToSeconds(int32_t Tick); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C115F8
		int32_t SecondsToTick(float Seconds); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11518
		bool IsPlaybackEnded(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11438
		ESparksInstrumentType GetSparksInstrumentFromMidiTrackName(FName TrackName); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11358
		UParsedMidiEventData GetParsedMidiEventData(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11278
		FName GetMidiTrackNameFromSparksInstrument(ESparksInstrumentType InstrumentType); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11198
		FMidiPlaybackState GetMidiPlaybackState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C110B8
		int32_t GetCurrentMidiTick(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10FD8
		float GetCurrentMidiSeconds(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10EF8
	};


	// Class SparksMidiParser.MidiEventListenerSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMidiEventListenerSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.MidiEventListenerSubsystem");
			return ret;
		}

		bool IsListenerActive(FMidiEventListenerHandle& Handle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C11898
		void CancelListener(FMidiEventListenerHandle& Handle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C117B8
		void CancelAllListenersForDriver(TScriptInterface& Driver); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C116D8
	};


	// Class SparksMidiParser.ParsedMidiEventData
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UParsedMidiEventData : public UObject	
	{
	public:
		TMap MidiNoteEvents; // 0x28(0x50)
		TMap MidiTextEvents; // 0x78(0x50)
		UMidiFile MidiFilePtr; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.ParsedMidiEventData");
			return ret;
		}

		bool GetRecentOrFirstMidiTextEvent(FName TrackName, TArray& MidiEventStrings, int32_t UpToMidiTick, FParsedMidiTextEvent& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C12238
		bool GetRecentOrFirstMidiNoteEvent(FName TrackName, TArray& MidiEventInts, int32_t UpToMidiTick, FParsedMidiNoteEvent& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C12158
		void GetPreviousMidiTextEventsWithStrings(FName TrackName, TArray& MidiEventStrings, int32_t UpToMidiTick, TArray& OutResults); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C12078
		void GetPreviousMidiNoteEventsWithInts(FName TrackName, TArray& MidiEventInts, int32_t UpToMidiTick, TArray& OutResults); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C11F98
		void GetMidiTextEventsWithStrings(FName TrackName, TArray& MidiEventStrings, TArray& OutArray); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C11EB8
		TArray GetMidiTextEvents(FName TrackName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11DD8
		void GetMidiNoteEventsWithInts(FName TrackName, TArray& MidiEventInts, TArray& OutArray); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C11CF8
		TArray GetMidiNoteEvents(FName TrackName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11C18
		UMidiFile GetMidiFile(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11B38
		TMap GetAllMidiTextEvents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11A58
		TMap GetAllMidiNoteEvents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C11978
	};

}
