#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixMidi
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HarmonixMidi.MidiFile
	// Inherited from UObject
	// Size: 0x110 (0x138 - 0x28)
	class UMidiFile : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMidiFileData TheMidiData; // 0x30(0xF8)
		unsigned char UnknownData01_7[0x10]; // 0x128(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMidi.MidiFile");
			return ret;
		}
	};


	// Class HarmonixMidi.MidiNoteFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMidiNoteFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMidi.MidiNoteFunctionLibrary");
			return ret;
		}

		int32_t MidiNoteToInt(FMidiNote& InMidiNote); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F42148(relative to base address)
		char MidiNoteToByte(FMidiNote& InMidiNote); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F420C0(relative to base address)
		FMidiNote MakeLiteralMidiNote(FMidiNote Value); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41FB8(relative to base address)
		FMidiNote IntToMidiNote(int32_t inInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41F34(relative to base address)
		char GetMinNoteVelocity(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748CDD424(relative to base address)
		char GetMinNoteNumber(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748CDD424(relative to base address)
		FMidiNote GetMinMidiNote(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748CDD424(relative to base address)
		int32_t GetMaxNumNotes(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41ED4(relative to base address)
		char GetMaxNoteVelocity(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41EC0(relative to base address)
		char GetMaxNoteNumber(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41EC0(relative to base address)
		FMidiNote GetMaxMidiNote(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41EC0(relative to base address)
		FMidiNote ByteToMidiNote(char InByte); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74EE2287C(relative to base address)
	};


	// Class HarmonixMidi.MusicalTickFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMusicalTickFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixMidi.MusicalTickFunctionLibrary");
			return ret;
		}

		float TickToQuarterNote(float InTick); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F42254(relative to base address)
		float QuarterNoteToTick(float InQuarterNote); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F421D0(relative to base address)
		int32_t GetTicksPerQuarterNoteInt(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41F1C(relative to base address)
		float GetTicksPerQuarterNote(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41F04(relative to base address)
		float GetQuarterNotesPerTick(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F41EEC(relative to base address)
	};

}
