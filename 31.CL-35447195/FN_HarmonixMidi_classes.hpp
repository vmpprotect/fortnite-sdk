#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HarmonixMidi
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HarmonixMidi.MidiFile
	// Inherited from UObject
	// Size: 0x110 (0x138 - 0x28)
	class UMidiFile : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMidiFileData TheMidiData; // 0x30(0xF8)
		unsigned char UnknownData03_7[0x10]; // 0x128(0x10) UNKNOWN PROPERTY

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

		int32_t MidiNoteToInt(FMidiNote& InMidiNote); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C01838
		char MidiNoteToByte(FMidiNote& InMidiNote); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C01758
		FMidiNote MakeLiteralMidiNote(FMidiNote Value); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01678
		FMidiNote IntToMidiNote(int32_t inInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01598
		char GetMinNoteVelocity(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C014B8
		char GetMinNoteNumber(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C013D8
		FMidiNote GetMinMidiNote(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C012F8
		int32_t GetMaxNumNotes(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01218
		char GetMaxNoteVelocity(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01138
		char GetMaxNoteNumber(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01058
		FMidiNote GetMaxMidiNote(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C00F78
		FMidiNote ByteToMidiNote(char InByte); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C00E98
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

		float TickToQuarterNote(float InTick); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01C98
		float QuarterNoteToTick(float InQuarterNote); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01BB8
		int32_t GetTicksPerQuarterNoteInt(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01AD8
		float GetTicksPerQuarterNote(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C019F8
		float GetQuarterNotesPerTick(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C01918
	};

}
