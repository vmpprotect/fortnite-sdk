#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCoreRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCoreRuntime.SparksCore_BPFL
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksCore_BPFL : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreRuntime.SparksCore_BPFL");
			return ret;
		}

		ESparksAccountItemSubtype InstrumentTypeToCosmeticSubtype(ESparksInstrumentType Instrument); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C05498
		TArray GetVocalsMidiTextStringsFromEnums(TArray& MidiTextEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C053B8
		FString GetVocalsMidiTextStringFromEnum(EVocalsMidiTextEvent MidiTextEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C052D8
		TArray GetVocalsMidiTextEnumsFromStrings(TArray& MidiTextEventStrings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C051F8
		EVocalsMidiTextEvent GetVocalsMidiTextEnumFromString(FString MidiTextEventString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C05118
		TArray GetVocalsMidiNoteIntegersFromEnums(TArray& MidiNoteEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C05038
		char GetVocalsMidiNoteIntegerFromEnum(EVocalsMidiNoteEvent MidiNoteEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04F58
		TArray GetVocalsMidiNoteEnumsFromIntegers(TArray& MidiNoteEventInts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C04E78
		EVocalsMidiNoteEvent GetVocalsMidiNoteEnumFromInteger(char MidiNoteEventInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04D98
		ESparksInstrumentType GetInstrumentTypeFromSwapString(FString InstrumentSwapString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04CB8
		FString GetInstrumentSwapStringFromType(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04BD8
		TArray GetGuitarMidiTextStringsFromEnums(TArray& MidiTextEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C04AF8
		FString GetGuitarMidiTextStringFromEnum(EGuitarMidiTextEvent MidiTextEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04A18
		TArray GetGuitarMidiTextEnumsFromStrings(TArray& MidiTextEventStrings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C04938
		EGuitarMidiTextEvent GetGuitarMidiTextEnumFromString(FString MidiTextEventString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04858
		TArray GetGuitarMidiNoteIntegersFromEnums(TArray& MidiNoteEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C04778
		char GetGuitarMidiNoteIntegerFromEnum(EGuitarMidiNoteEvent MidiNoteEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04698
		TArray GetGuitarMidiNoteEnumsFromIntegers(TArray& MidiNoteEventInts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C045B8
		EGuitarMidiNoteEvent GetGuitarMidiNoteEnumFromInteger(char MidiNoteEventInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C044D8
		TArray GetDrumMidiTextStringsFromEnums(TArray& MidiTextEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C043F8
		FString GetDrumMidiTextStringFromEnum(EDrumMidiTextEvent MidiTextEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04318
		TArray GetDrumMidiTextEnumsFromStrings(TArray& MidiTextEventStrings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C04238
		EDrumMidiTextEvent GetDrumMidiTextEnumFromString(FString MidiTextEventString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C04158
		TArray GetDrumMidiNoteIntegersFromEnums(TArray& MidiNoteEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C04078
		char GetDrumMidiNoteIntegerFromEnum(EDrumMidiNoteEvent MidiNoteEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03F98
		TArray GetDrumMidiNoteEnumsFromIntegers(TArray& MidiNoteEventInts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C03EB8
		EDrumMidiNoteEvent GetDrumMidiNoteEnumFromInteger(char MidiNoteEventInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03DD8
		TArray GetBassMidiTextStringsFromEnums(TArray& MidiTextEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C03CF8
		FString GetBassMidiTextStringFromEnum(EBassMidiTextEvent MidiTextEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03C18
		TArray GetBassMidiTextEnumsFromStrings(TArray& MidiTextEventStrings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C03B38
		EBassMidiTextEvent GetBassMidiTextEnumFromString(FString MidiTextEventString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03A58
		TArray GetBassMidiNoteIntegersFromEnums(TArray& MidiNoteEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C03978
		char GetBassMidiNoteIntegerFromEnum(EBassMidiNoteEvent MidiNoteEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03898
		TArray GetBassMidiNoteEnumsFromIntegers(TArray& MidiNoteEventInts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414C037B8
		EBassMidiNoteEvent GetBassMidiNoteEnumFromInteger(char MidiNoteEventInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C036D8
		TArray GetAllVocalsMidiTextStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C035F8
		TArray GetAllVocalsMidiTextEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03518
		TArray GetAllVocalsMidiNoteIntegers(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03438
		TArray GetAllVocalsMidiNoteEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03358
		TArray GetAllInstrumentSwapEventStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03278
		TArray GetAllGuitarMidiTextStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C03198
		TArray GetAllGuitarMidiTextEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C030B8
		TArray GetAllGuitarMidiNoteIntegers(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02FD8
		TArray GetAllGuitarMidiNoteEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02EF8
		TArray GetAllDrumMidiTextStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02E18
		TArray GetAllDrumMidiTextEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02D38
		TArray GetAllDrumMidiNoteIntegers(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02C58
		TArray GetAllDrumMidiNoteEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02B78
		TArray GetAllBassMidiTextStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02A98
		TArray GetAllBassMidiTextEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C029B8
		TArray GetAllBassMidiNoteIntegers(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C028D8
		TArray GetAllBassMidiNoteEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C027F8
		ESparksInstrumentType CosmeticSubtypeToInstrumentType(ESparksAccountItemSubtype Subtype); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414C02718
	};


	// Class SparksCoreRuntime.SparksDrumEventsInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksDrumEventsInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreRuntime.SparksDrumEventsInterface");
			return ret;
		}

		void Bind_Tom2_Hit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C061B8
		void Bind_Tom1_Hit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C060D8
		void Bind_SnareHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05FF8
		void Bind_RideHardHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05F18
		void Bind_KickHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05E38
		void Bind_HiHatPedalUp(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05D58
		void Bind_HiHatHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05C78
		void Bind_FloorTomHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05B98
		void Bind_Crash2_SoftHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05AB8
		void Bind_Crash2_HardHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C059D8
		void Bind_Crash2_Choke(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C058F8
		void Bind_Crash1_SoftHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05818
		void Bind_Crash1_HardHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05738
		void Bind_Crash1_Choke(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05658
		void Bind_CowbellHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414C05578
	};


	// Class SparksCoreRuntime.SparksGameUserSettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksGameUserSettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCoreRuntime.SparksGameUserSettings");
			return ret;
		}
	};

}
