#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixMetasound
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HarmonixMetasound.MetasoundOfflinePlayerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UMetasoundOfflinePlayerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		UMetaSoundSource* MetaSoundSource; // 0xB0(0x8)
		unsigned char UnknownData01_7[0x30]; // 0xB8(0x30) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

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

		bool IsNoteOn(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8FF0C(relative to base address)
		bool IsNoteOff(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8FE74(relative to base address)
		bool IsNote(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8FDE0(relative to base address)
		bool IsMidiEventInfo(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8FCA8(relative to base address)
		int32_t GetVelocity(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F978(relative to base address)
		int32_t GetNoteNumber(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F7A4(relative to base address)
		FMidiEventInfo GetMidiEventInfo(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F168(relative to base address)
		int32_t GetChannel(FMidiEventInfo& Event); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F0C4(relative to base address)
	};


	// Class HarmonixMetasound.MidiStepSequence
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UMidiStepSequence : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		int32_t Pages; // 0x30(0x4)
		int32_t Rows; // 0x34(0x4)
		int32_t Columns; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FStepSequenceTable StepTable; // 0x40(0x28)
		unsigned char UnknownData02_7[0x10]; // 0x68(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MidiStepSequence");
			return ret;
		}

		FStepSequenceCell ToggleCellOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F9113C(relative to base address)
		FStepSequenceCell ToggleCell(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F91068(relative to base address)
		void SetStepTable(FStepSequenceTable& NewStepTable); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F90FC4(relative to base address)
		bool SetStepSkipIndex(int32_t StepIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F90F38(relative to base address)
		bool SetRowVelocity(int32_t RowIndex, int32_t MidiVelocoty); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F90E50(relative to base address)
		bool SetRowNoteNumber(int32_t RowIndex, int32_t MidiNoteNumber); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F90D90(relative to base address)
		void SetNumRows(int32_t Count); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F90D10(relative to base address)
		void SetNumPages(int32_t Count); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F90C90(relative to base address)
		void SetNumColumns(int32_t Count); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F90C10(relative to base address)
		FStepSequenceCell SetCellOnPage(int32_t Page, int32_t Row, int32_t Column, bool State); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F903A0(relative to base address)
		FStepSequenceCell SetCellContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F90258(relative to base address)
		FStepSequenceCell SetCellContinuation(int32_t Row, int32_t Column, bool bState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F9014C(relative to base address)
		FStepSequenceCell SetCell(int32_t Row, int32_t Column, bool State); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F90040(relative to base address)
		FStepSequenceTable GetStepTable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F8F840(relative to base address)
		FStepSequenceCell GetCellOnPage(int32_t Page, int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F8EFC0(relative to base address)
		FStepSequenceCell GetCell(int32_t Row, int32_t Column); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F8EEEC(relative to base address)
		void DisableRowsAbove(int32_t FirstDisabledRow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F8EE6C(relative to base address)
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

		void SetMusicTimestamp(UMetasoundParameterPack* Target, FName ParameterName, FMusicTimestamp& Value, ESetParamResult& Result, bool OnlyIfExists); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F909D0(relative to base address)
		void SetMusicSeekRequest(UMetasoundParameterPack* Target, FName ParameterName, FMusicSeekRequest& Value, ESetParamResult& Result, bool OnlyIfExists); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F9075C(relative to base address)
		void SetMusicLoopConfiguration(UMetasoundParameterPack* Target, FName ParameterName, FMusicLoopConfiguration& Value, ESetParamResult& Result, bool OnlyIfExists); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F904E8(relative to base address)
		bool HasMusicTimestamp(UMetasoundParameterPack* Target, FName Name); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF750F8FBD0(relative to base address)
		bool HasMusicSeekRequest(UMetasoundParameterPack* Target, FName Name); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF750F8FAF8(relative to base address)
		bool HasMusicLoopConfiguration(UMetasoundParameterPack* Target, FName Name); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF750F8FA20(relative to base address)
		FMusicTimestamp GetMusicTimestamp(UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F53C(relative to base address)
		FMusicSeekRequest GetMusicSeekRequest(UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F3E4(relative to base address)
		FMusicLoopConfiguration GetMusicLoopConfiguration(UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F28C(relative to base address)
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

		bool IsMusicTimestamp(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8FD44(relative to base address)
		FMusicTimestamp GetMusicTimestamp(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F680(relative to base address)
	};


	// Class HarmonixMetasound.HarmonixPeakTamer
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UHarmonixPeakTamer : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.HarmonixPeakTamer");
			return ret;
		}

		void Update(float InputValue, float DeltaTimeSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F91240(relative to base address)
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496973C8(relative to base address)
		float GetPeak(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7495769CC(relative to base address)
		UHarmonixPeakTamer CreateHarmonixPeakTamer(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750F8EE40(relative to base address)
		void Configure(FHarmonixPeakTamerSettings& Settings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8ED94(relative to base address)
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

		bool IsTimeSignature(FMetaSoundOutput& Output); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8FFA4(relative to base address)
		FTimeSignature GetTimeSignature(FMetaSoundOutput& Output, bool& Success); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F8F85C(relative to base address)
	};


	// Class HarmonixMetasound.MusicClockComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x3F8 (0x498 - 0xA0)
	class UMusicClockComponent : public UActorComponent	
	{
	public:
		EMusicClockDriveMethod DriveMethod; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FName MetasoundOutputName; // 0xA4(0x4)
		UAudioComponent* MetasoundsAudioComponent; // 0xA8(0x8)
		UMidiFile* TempoMap; // 0xB0(0x8)
		float Tempo; // 0xB8(0x4)
		int32_t TimeSignatureNum; // 0xBC(0x4)
		int32_t TimeSignatureDenom; // 0xC0(0x4)
		float CurrentBeatDurationSec; // 0xC4(0x4)
		float CurrentBarDurationSec; // 0xC8(0x4)
		float CurrentClockAdvanceRate; // 0xCC(0x4)
		bool RunPastMusicEnd; // 0xD0(0x1)
		ECalibratedMusicTimebase TimebaseForBarAndBeatEvents; // 0xD1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY
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
		unsigned char UnknownData02_7[0x230]; // 0x268(0x230) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MusicClockComponent");
			return ret;
		}

		float TickToMs(float Tick); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103D460(relative to base address)
		void Stop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103D44C(relative to base address)
		void Start(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103D438(relative to base address)
		bool SeekedThisFrame(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103D190(relative to base address)
		void Pause(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103D13C(relative to base address)
		float MeasureSpanProgress(FMusicalTimeSpan& Span, ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CFB8(relative to base address)
		bool LoopedThisFrame(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CF08(relative to base address)
		EMusicClockState GetState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C5A4C2C(relative to base address)
		TArray GetSongSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CDE8(relative to base address)
		float GetSongRemainingMs(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CD58(relative to base address)
		FMidiSongPos GetSongPos(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CC84(relative to base address)
		float GetSongLengthMs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CC5C(relative to base address)
		float GetSongLengthBeats(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CC24(relative to base address)
		float GetSongLengthBars(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CBF4(relative to base address)
		float GetSectionStartMsAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CB50(relative to base address)
		FString GetSectionNameAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CA98(relative to base address)
		float GetSectionLengthMsAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CA08(relative to base address)
		float GetSectionEndMsAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C964(relative to base address)
		float GetSecondsIncludingCountIn(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C89C(relative to base address)
		float GetSecondsFromBarOne(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C7D4(relative to base address)
		FMidiSongPos GetPreviousVideoRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C788(relative to base address)
		FMidiSongPos GetPreviousSongPos(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C6F0(relative to base address)
		FMidiSongPos GetPreviousSmoothedAudioRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C6A4(relative to base address)
		FMidiSongPos GetPreviousPlayerExperiencedSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C658(relative to base address)
		int32_t GetNumSections(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C628(relative to base address)
		float GetNumBeatsInBarAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C598(relative to base address)
		float GetMsPerBeatAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C508(relative to base address)
		float GetMsPerBarAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C478(relative to base address)
		float GetDistanceToNextBeat(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C398(relative to base address)
		float GetDistanceToNextBar(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C308(relative to base address)
		float GetDistanceToClosestBeat(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C278(relative to base address)
		float GetDistanceToClosestBar(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C1E8(relative to base address)
		float GetDistanceFromCurrentBeat(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C158(relative to base address)
		float GetDistanceFromCurrentBar(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C0C8(relative to base address)
		float GetDeltaBeat(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C038(relative to base address)
		float GetDeltaBar(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BFA8(relative to base address)
		FMidiSongPos GetCurrentVideoRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BF68(relative to base address)
		FMusicTimestamp GetCurrentTimestamp(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BEE0(relative to base address)
		FMidiSongPos GetCurrentSmoothedAudioRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BEA0(relative to base address)
		float GetCurrentSectionStartMs(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BE10(relative to base address)
		FString GetCurrentSectionName(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BD64(relative to base address)
		float GetCurrentSectionLengthMs(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BCD4(relative to base address)
		int32_t GetCurrentSectionIndex(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BC24(relative to base address)
		FMidiSongPos GetCurrentRawAudioRenderSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BBD8(relative to base address)
		FMidiSongPos GetCurrentPlayerExperiencedSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BB8C(relative to base address)
		float GetCountInSeconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BB5C(relative to base address)
		float GetBeatsIncludingCountIn(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BA1C(relative to base address)
		float GetBeatInBarAtMs(float Ms); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103B93C(relative to base address)
		float GetBarsIncludingCountIn(ECalibratedMusicTimebase Timebase); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103B874(relative to base address)
		UMusicClockComponent CreateWallClockDrivenMusicClock(UObject* WorldContextObject, UMidiFile* WithTempoMap, bool Start); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75103B6E0(relative to base address)
		UMusicClockComponent CreateMetasoundDrivenMusicClock(UObject* WorldContextObject, UAudioComponent* InAudioComponent, FName MetasoundOuputPinName, bool Start); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF75103B5A4(relative to base address)
		void Continue(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103B550(relative to base address)
		void ConnectToWallClockForMidi(UMidiFile* InTempoMap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103B4D0(relative to base address)
		bool ConnectToMetasoundOnAudioComponent(UAudioComponent* InAudioComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103B440(relative to base address)
		float BeatToMs(float Beat); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103B3B0(relative to base address)
		float BarToMs(float Bar); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103B320(relative to base address)
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
		unsigned char UnknownData00_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FMidiSongPos SongPos; // 0xD0(0x40)
		unsigned char UnknownData01_6[0x30]; // 0x110(0x30) UNKNOWN PROPERTY
		UMusicClockComponent* MusicClock; // 0x140(0x8)
		UMaterialParameterCollection* MaterialParameterCollection; // 0x148(0x8)
		UMaterialParameterCollectionInstance* MaterialParameterCollectionInstance; // 0x150(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMetasound.MusicTempometerComponent");
			return ret;
		}

		void SetMaterialParameterCollection(UMaterialParameterCollection* InMaterialParameterCollection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103D394(relative to base address)
		void SetClockFromActor(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103D2E8(relative to base address)
		void SetClock(UMusicClockComponent* InClockComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75103D240(relative to base address)
		FMusicTimestamp GetTimeStamp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CED0(relative to base address)
		float GetTimeSignatureNumerator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CE94(relative to base address)
		float GetTimeSignatureDenominator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CE58(relative to base address)
		float GetTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CE20(relative to base address)
		FMidiSongPos GetSongPos(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103CD1C(relative to base address)
		float GetSecondsIncludingCountIn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C92C(relative to base address)
		float GetSecondsFromBarOne(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C864(relative to base address)
		UMaterialParameterCollection GetMaterialParameterCollection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103C428(relative to base address)
		UMusicClockComponent GetClockNoMutex(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BB38(relative to base address)
		UMusicClockComponent GetClock(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BAE4(relative to base address)
		float GetBeatsIncludingCountIn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103BAAC(relative to base address)
		float GetBeatProgress(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103B9CC(relative to base address)
		float GetBarsIncludingCountIn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103B904(relative to base address)
		float GetBarProgress(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75103B824(relative to base address)
	};

}
