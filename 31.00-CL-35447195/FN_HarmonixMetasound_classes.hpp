#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HarmonixMetasound
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HarmonixMetasound.MetasoundOfflinePlayerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UMetasoundOfflinePlayerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		UMetaSoundSource MetaSoundSource; // 0xB0(0x8)
		unsigned char UnknownData03_7[0x30]; // 0xB8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MetasoundOfflinePlayerComponent");
			return ret;
		}
	};


	// Class HarmonixMetasound.MidiClockUpdateSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UMidiClockUpdateSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MidiClockUpdateSubsystem");
			return ret;
		}
	};


	// Class HarmonixMetasound.MidiEventInfoBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMidiEventInfoBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary");
			return ret;
		}

		bool IsNoteOn(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0AF98
		bool IsNoteOff(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0AEB8
		bool IsNote(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0ADD8
		bool IsMidiEventInfo(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0ACF8
		int32_t GetVelocity(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0AC18
		int32_t GetNoteNumber(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0AB38
		FMidiEventInfo GetMidiEventInfo(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0AA58
		int32_t GetChannel(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0A978
	};


	// Class HarmonixMetasound.MidiStepSequence
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UMidiStepSequence : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		int32_t Pages; // 0x30(0x4)
		int32_t Rows; // 0x34(0x4)
		int32_t Columns; // 0x38(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FStepSequenceTable StepTable; // 0x40(0x28)
		unsigned char UnknownData05_7[0x10]; // 0x68(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MidiStepSequence");
			return ret;
		}

		FStepSequenceCell ToggleCellOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0BE78
		FStepSequenceCell ToggleCell(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0BD98
		void SetStepTable(FStepSequenceTable& NewStepTable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C0BCB8
		bool SetStepSkipIndex(int32_t StepIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0BBD8
		bool SetRowVelocity(int32_t RowIndex, int32_t MidiVelocoty); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0BAF8
		bool SetRowNoteNumber(int32_t RowIndex, int32_t MidiNoteNumber); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0BA18
		void SetNumRows(int32_t Count); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B938
		void SetNumPages(int32_t Count); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B858
		void SetNumColumns(int32_t Count); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B778
		FStepSequenceCell SetCellOnPage(int32_t Page, int32_t Row, int32_t Column, bool State); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B698
		FStepSequenceCell SetCellContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B5B8
		FStepSequenceCell SetCellContinuation(int32_t Row, int32_t Column, bool bState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B4D8
		FStepSequenceCell SetCell(int32_t Row, int32_t Column, bool State); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B3F8
		FStepSequenceTable GetStepTable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0B318
		FStepSequenceCell GetCellOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B238
		FStepSequenceCell GetCell(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C0B158
		void DisableRowsAbove(int32_t FirstDisabledRow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0B078
	};


	// Class HarmonixMetasound.MusicParameterBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMusicParameterBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MusicParameterBlueprintLibrary");
			return ret;
		}

		void SetMusicTimestamp(UMetasoundParameterPack Target, FName ParameterName, FMusicTimestamp& Value, ESetParamResult& Result, bool OnlyIfExists); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0C658
		void SetMusicSeekRequest(UMetasoundParameterPack Target, FName ParameterName, FMusicSeekRequest& Value, ESetParamResult& Result, bool OnlyIfExists); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0C578
		void SetMusicLoopConfiguration(UMetasoundParameterPack Target, FName ParameterName, FMusicLoopConfiguration& Value, ESetParamResult& Result, bool OnlyIfExists); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0C498
		bool HasMusicTimestamp(UMetasoundParameterPack Target, FName Name); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414C0C3B8
		bool HasMusicSeekRequest(UMetasoundParameterPack Target, FName Name); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414C0C2D8
		bool HasMusicLoopConfiguration(UMetasoundParameterPack Target, FName Name); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414C0C1F8
		FMusicTimestamp GetMusicTimestamp(UMetasoundParameterPack Target, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414C0C118
		FMusicSeekRequest GetMusicSeekRequest(UMetasoundParameterPack Target, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414C0C038
		FMusicLoopConfiguration GetMusicLoopConfiguration(UMetasoundParameterPack Target, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414C0BF58
	};


	// Class HarmonixMetasound.MusicTimestampBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMusicTimestampBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MusicTimestampBlueprintLibrary");
			return ret;
		}

		bool IsMusicTimestamp(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0C818
		FMusicTimestamp GetMusicTimestamp(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0C738
	};


	// Class HarmonixMetasound.HarmonixPeakTamer
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UHarmonixPeakTamer : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.HarmonixPeakTamer");
			return ret;
		}

		void Update(float InputValue, float DeltaTimeSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0CC78
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0CB98
		float GetPeak(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0CAB8
		UHarmonixPeakTamer CreateHarmonixPeakTamer(); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C0C9D8
		void Configure(FHarmonixPeakTamerSettings& Settings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C0C8F8
	};


	// Class HarmonixMetasound.TimeSignatureBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTimeSignatureBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.TimeSignatureBlueprintLibrary");
			return ret;
		}

		bool IsTimeSignature(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0CE38
		FTimeSignature GetTimeSignature(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF414C0CD58
	};


	// Class HarmonixMetasound.MusicClockComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x3F8 (0x498 - 0xA0)
	class UMusicClockComponent : public UActorComponent	
	{
	public:
		EMusicClockDriveMethod DriveMethod; // 0xA0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FName MetasoundOutputName; // 0xA4(0x4)
		UAudioComponent MetasoundsAudioComponent; // 0xA8(0x8)
		UMidiFile TempoMap; // 0xB0(0x8)
		float Tempo; // 0xB8(0x4)
		int32_t TimeSignatureNum; // 0xBC(0x4)
		int32_t TimeSignatureDenom; // 0xC0(0x4)
		float CurrentBeatDurationSec; // 0xC4(0x4)
		float CurrentBarDurationSec; // 0xC8(0x4)
		float CurrentClockAdvanceRate; // 0xCC(0x4)
		bool RunPastMusicEnd; // 0xD0(0x1)
		ECalibratedMusicTimebase TimebaseForBarAndBeatEvents; // 0xD1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate PlayStateEvent; // 0xD8(0x10)
		FMulticastInlineDelegate BeatEvent; // 0xE8(0x10)
		FMulticastInlineDelegate BarEvent; // 0xF8(0x10)
		FMulticastInlineDelegate SectionEvent; // 0x108(0x10)
		FMulticastInlineDelegate MusicClockConnectedEvent; // 0x118(0x10)
		FMulticastInlineDelegate MusicClockDisconnectedEvent; // 0x128(0x10)
		FMulticastInlineDelegate AudioRenderMusicTimeDiscontinuityEvent; // 0x138(0x10)
		FMulticastInlineDelegate PlayerExperienceMusicTimeDiscontinuityEvent; // 0x148(0x10)
		FMulticastInlineDelegate VideoRenderMusicTimeDiscontinuityEvent; // 0x158(0x10)
		FMidiSongPos CurrentSmoothedAudioRenderSongPos; // 0x168(0x40)
		FMidiSongPos CurrentVideoRenderSongPos; // 0x1A8(0x40)
		FMidiSongPos CurrentPlayerExperiencedSongPos; // 0x1E8(0x40)
		FMidiSongPos CurrentRawAudioRenderSongPos; // 0x228(0x40)
		unsigned char UnknownData05_7[0x230]; // 0x268(0x230) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MusicClockComponent");
			return ret;
		}

		float TickToMs(float Tick); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0FF38
		void Stop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0FE58
		void Start(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0FD78
		bool SeekedThisFrame(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0FC98
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0FBB8
		float MeasureSpanProgress(FMusicalTimeSpan& Span, ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C0FAD8
		bool LoopedThisFrame(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F9F8
		EMusicClockState GetState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F918
		TArray GetSongSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F838
		float GetSongRemainingMs(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F758
		FMidiSongPos GetSongPos(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F678
		float GetSongLengthMs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F598
		float GetSongLengthBeats(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F4B8
		float GetSongLengthBars(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F3D8
		float GetSectionStartMsAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F2F8
		FString GetSectionNameAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F218
		float GetSectionLengthMsAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F138
		float GetSectionEndMsAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0F058
		float GetSecondsIncludingCountIn(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0EF78
		float GetSecondsFromBarOne(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0EE98
		FMidiSongPos GetPreviousVideoRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0EDB8
		FMidiSongPos GetPreviousSongPos(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0ECD8
		FMidiSongPos GetPreviousSmoothedAudioRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0EBF8
		FMidiSongPos GetPreviousPlayerExperiencedSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0EB18
		int32_t GetNumSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0EA38
		float GetNumBeatsInBarAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E958
		float GetMsPerBeatAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E878
		float GetMsPerBarAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E798
		float GetDistanceToNextBeat(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E6B8
		float GetDistanceToNextBar(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E5D8
		float GetDistanceToClosestBeat(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E4F8
		float GetDistanceToClosestBar(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E418
		float GetDistanceFromCurrentBeat(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E338
		float GetDistanceFromCurrentBar(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E258
		float GetDeltaBeat(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E178
		float GetDeltaBar(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0E098
		FMidiSongPos GetCurrentVideoRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0DFB8
		FMusicTimestamp GetCurrentTimestamp(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0DED8
		FMidiSongPos GetCurrentSmoothedAudioRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0DDF8
		float GetCurrentSectionStartMs(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0DD18
		FString GetCurrentSectionName(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0DC38
		float GetCurrentSectionLengthMs(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0DB58
		int32_t GetCurrentSectionIndex(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0DA78
		FMidiSongPos GetCurrentRawAudioRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0D998
		FMidiSongPos GetCurrentPlayerExperiencedSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0D8B8
		float GetCountInSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0D7D8
		float GetBeatsIncludingCountIn(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0D6F8
		float GetBeatInBarAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0D618
		float GetBarsIncludingCountIn(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0D538
		UMusicClockComponent CreateWallClockDrivenMusicClock(UObject WorldContextObject, UMidiFile WithTempoMap, bool Start); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C0D458
		UMusicClockComponent CreateMetasoundDrivenMusicClock(UObject WorldContextObject, UAudioComponent InAudioComponent, FName MetasoundOuputPinName, bool Start); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C0D378
		void Continue(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0D298
		void ConnectToWallClockForMidi(UMidiFile InTempoMap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0D1B8
		bool ConnectToMetasoundOnAudioComponent(UAudioComponent InAudioComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C0D0D8
		float BeatToMs(float Beat); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0CFF8
		float BarToMs(float Bar); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C0CF18
	};


	// Class HarmonixMetasound.MusicTempometerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xB8 (0x158 - 0xA0)
	class UMusicTempometerComponent : public UActorComponent	
	{
	public:
		FName SecondsIncludingCountInParameterName; // 0xA0(0x4)
		FName BarsIncludingCountInParameterName; // 0xA4(0x4)
		FName BeatsIncludingCountInParameterName; // 0xA8(0x4)
		FName SecondsFromBarOneParameterName; // 0xAC(0x4)
		FName TimestampBarParameterName; // 0xB0(0x4)
		FName TimestampBeatInBarParameterName; // 0xB4(0x4)
		FName BarProgressParameterName; // 0xB8(0x4)
		FName BeatProgressParameterName; // 0xBC(0x4)
		FName TimeSignatureNumeratorParameterName; // 0xC0(0x4)
		FName TimeSignatureDenominatorParameterName; // 0xC4(0x4)
		FName TempoParameterName; // 0xC8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FMidiSongPos SongPos; // 0xD0(0x40)
		unsigned char UnknownData03_6[0x30]; // 0x110(0x30) UNKNOWN PROPERTY
		UMusicClockComponent MusicClock; // 0x140(0x8)
		UMaterialParameterCollection MaterialParameterCollection; // 0x148(0x8)
		UMaterialParameterCollectionInstance MaterialParameterCollectionInstance; // 0x150(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MusicTempometerComponent");
			return ret;
		}

		void SetMaterialParameterCollection(UMaterialParameterCollection InMaterialParameterCollection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C10E18
		void SetClockFromActor(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C10D38
		void SetClock(UMusicClockComponent InClockComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C10C58
		FMusicTimestamp GetTimeStamp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10B78
		float GetTimeSignatureNumerator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10A98
		float GetTimeSignatureDenominator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C109B8
		float GetTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C108D8
		FMidiSongPos GetSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C107F8
		float GetSecondsIncludingCountIn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10718
		float GetSecondsFromBarOne(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10638
		UMaterialParameterCollection GetMaterialParameterCollection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10558
		UMusicClockComponent GetClockNoMutex(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF414C10478
		UMusicClockComponent GetClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10398
		float GetBeatsIncludingCountIn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C102B8
		float GetBeatProgress(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C101D8
		float GetBarsIncludingCountIn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C100F8
		void GetBarProgress(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C10018
	};

}
