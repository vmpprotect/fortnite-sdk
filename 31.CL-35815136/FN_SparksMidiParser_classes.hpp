#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksMidiParser
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksMidiParser.AsyncAction_ListenForMidiEventBase
	// Inherited from UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UAsyncAction_ListenForMidiEventBase : public UCancellableAsyncAction	
	{
	public:
		FMulticastInlineDelegate OnFinished; // 0x30(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x40(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.AsyncAction_ListenForMidiEventBase");
			return ret;
		}

		void OnFinished__DelegateSignature(bool bCanceled); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SparksMidiParser.AsyncAction_ListenForMidiNoteEvent
	// Inherited from UAsyncAction_ListenForMidiEventBase -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x40 (0xA0 - 0x60)
	class UAsyncAction_ListenForMidiNoteEvent : public UAsyncAction_ListenForMidiEventBase	
	{
	public:
		FMulticastInlineDelegate OnMidiEventStart; // 0x60(0x10)
		FMulticastInlineDelegate OnMidiEventEnd; // 0x70(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x80(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent");
			return ret;
		}

		void OnMidiNoteEventDelegate__DelegateSignature(char MidiEventNote, FParsedMidiNoteEvent& MidiEventData); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UAsyncAction_ListenForMidiNoteEvent ListenForMidiNoteEvents_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiNoteEventListenerParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75105F314(relative to base address)
		UAsyncAction_ListenForMidiNoteEvent ListenForMidiNoteEvents(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<char> EventNotes, float SecondsBeforeEventStart, float SecondsBeforeEventEnd, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75105E868(relative to base address)
		UAsyncAction_ListenForMidiNoteEvent ListenForMidiNoteEvent(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, char EventNote, float SecondsBeforeEventStart, float SecondsBeforeEventEnd, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75105DF60(relative to base address)
	};


	// Class SparksMidiParser.AsyncAction_ListenForMidiTextEvent
	// Inherited from UAsyncAction_ListenForMidiEventBase -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x30 (0x90 - 0x60)
	class UAsyncAction_ListenForMidiTextEvent : public UAsyncAction_ListenForMidiEventBase	
	{
	public:
		FMulticastInlineDelegate OnMidiEventStart; // 0x60(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x70(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent");
			return ret;
		}

		void OnMidiTextEventDelegate__DelegateSignature(FString MidiEventText, FParsedMidiTextEvent& MidiEventData); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UAsyncAction_ListenForMidiTextEvent ListenForMidiTextEvents_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiTextEventListenerParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75105FCD4(relative to base address)
		UAsyncAction_ListenForMidiTextEvent ListenForMidiTextEvents(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<FString>& EventStrings, float SecondsBeforeEventStart, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75105F8E0(relative to base address)
		UAsyncAction_ListenForMidiTextEvent ListenForMidiTextEvent(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, FString EventString, float SecondsBeforeEventStart, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75105F4B4(relative to base address)
	};


	// Class SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools
	// Inherited from UAsyncAction_ListenForMidiEventBase -> UCancellableAsyncAction -> UBlueprintAsyncActionBase -> UObject
	// Size: 0x48 (0xA8 - 0x60)
	class UAsyncAction_ListenForMidiNoteEventPools : public UAsyncAction_ListenForMidiEventBase	
	{
	public:
		FMulticastInlineDelegate OnMidiNoteStart; // 0x60(0x10)
		unsigned char UnknownData00_7[0x38]; // 0x70(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools");
			return ret;
		}

		void OnMidiNotePoolEventDelegate__DelegateSignature(char MidiNote, FParsedMidiNoteEvent& MidiNoteData, FName WaitPoolID, float ActualDelay, float MaxDelayShortenedBy); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UAsyncAction_ListenForMidiNoteEventPools ListenForMidiNoteEventsPools_WithParams(TScriptInterface<Class> MidiEventDriver, FMidiNotePoolEventListenerParams& Params); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75105F16C(relative to base address)
		UAsyncAction_ListenForMidiNoteEventPools ListenForMidiNoteEventsPools(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, TArray<char>& EventNotes, TArray<char>& WatchNotes, TArray<FMidiNoteEvent_DelayPool>& DelayPools, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75105EDA4(relative to base address)
		UAsyncAction_ListenForMidiNoteEventPools ListenForMidiNoteEventPools(TScriptInterface<Class> MidiEventDriver, FName MidiTrackName, char EventNote, TArray<char>& WatchNotes, TArray<FMidiNoteEvent_DelayPool>& DelayPools, EMidiEventListenerInitBroadcast InitBroadcast); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75105E450(relative to base address)
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

		float TickToSeconds(int32_t Tick); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105FF28(relative to base address)
		int32_t SecondsToTick(float Seconds); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105FE94(relative to base address)
		bool IsPlaybackEnded(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C68DD74(relative to base address)
		ESparksInstrumentType GetSparksInstrumentFromMidiTrackName(FName TrackName); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105DE10(relative to base address)
		UParsedMidiEventData GetParsedMidiEventData(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C45C190(relative to base address)
		FName GetMidiTrackNameFromSparksInstrument(ESparksInstrumentType InstrumentType); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D5A4(relative to base address)
		FMidiPlaybackState GetMidiPlaybackState(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D374(relative to base address)
		int32_t GetCurrentMidiTick(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D150(relative to base address)
		float GetCurrentMidiSeconds(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750DCC888(relative to base address)
	};


	// Class SparksMidiParser.MidiEventListenerSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0x58 - 0x40)
	class UMidiEventListenerSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x40(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.MidiEventListenerSubsystem");
			return ret;
		}

		bool IsListenerActive(FMidiEventListenerHandle& Handle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75105DEA0(relative to base address)
		void CancelListener(FMidiEventListenerHandle& Handle); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75105CFA0(relative to base address)
		void CancelAllListenersForDriver(TScriptInterface<Class>& Driver); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75105CF10(relative to base address)
	};


	// Class SparksMidiParser.ParsedMidiEventData
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UParsedMidiEventData : public UObject	
	{
	public:
		TMap<FName, FMidiNoteEventList> MidiNoteEvents; // 0x28(0x50)
		TMap<FName, FMidiTextEventList> MidiTextEvents; // 0x78(0x50)
		UMidiFile* MidiFilePtr; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMidiParser.ParsedMidiEventData");
			return ret;
		}

		bool GetRecentOrFirstMidiTextEvent(FName TrackName, TArray<FString>& MidiEventStrings, int32_t UpToMidiTick, FParsedMidiTextEvent& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105DBF8(relative to base address)
		bool GetRecentOrFirstMidiNoteEvent(FName TrackName, TArray<char>& MidiEventInts, int32_t UpToMidiTick, FParsedMidiNoteEvent& OutResult); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105DA1C(relative to base address)
		void GetPreviousMidiTextEventsWithStrings(FName TrackName, TArray<FString>& MidiEventStrings, int32_t UpToMidiTick, TArray<FMidiTextEventList>& OutResults); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D814(relative to base address)
		void GetPreviousMidiNoteEventsWithInts(FName TrackName, TArray<char>& MidiEventInts, int32_t UpToMidiTick, TArray<FMidiNoteEventList>& OutResults); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D630(relative to base address)
		void GetMidiTextEventsWithStrings(FName TrackName, TArray<FString>& MidiEventStrings, TArray<FParsedMidiTextEvent>& OutArray); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D440(relative to base address)
		TArray GetMidiTextEvents(FName TrackName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D3AC(relative to base address)
		void GetMidiNoteEventsWithInts(FName TrackName, TArray<char>& MidiEventInts, TArray<FParsedMidiNoteEvent>& OutArray); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D22C(relative to base address)
		TArray GetMidiNoteEvents(FName TrackName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D198(relative to base address)
		UMidiFile GetMidiFile(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D174(relative to base address)
		TMap GetAllMidiTextEvents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D0C0(relative to base address)
		TMap GetAllMidiNoteEvents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75105D030(relative to base address)
	};

}
