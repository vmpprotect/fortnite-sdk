#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		ESparksAccountItemSubtype InstrumentTypeToCosmeticSubtype(ESparksInstrumentType Instrument); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D848(relative to base address)
		TArray GetVocalsMidiTextStringsFromEnums(TArray<EVocalsMidiTextEvent>& MidiTextEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D790(relative to base address)
		FString GetVocalsMidiTextStringFromEnum(EVocalsMidiTextEvent MidiTextEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D6F4(relative to base address)
		TArray GetVocalsMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D614(relative to base address)
		EVocalsMidiTextEvent GetVocalsMidiTextEnumFromString(FString MidiTextEventString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D584(relative to base address)
		TArray GetVocalsMidiNoteIntegersFromEnums(TArray<EVocalsMidiNoteEvent>& MidiNoteEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D4C8(relative to base address)
		char GetVocalsMidiNoteIntegerFromEnum(EVocalsMidiNoteEvent MidiNoteEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D440(relative to base address)
		TArray GetVocalsMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D388(relative to base address)
		EVocalsMidiNoteEvent GetVocalsMidiNoteEnumFromInteger(char MidiNoteEventInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D300(relative to base address)
		ESparksInstrumentType GetInstrumentTypeFromSwapString(FString InstrumentSwapString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D270(relative to base address)
		FString GetInstrumentSwapStringFromType(ESparksInstrumentType InstrumentType); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D1E8(relative to base address)
		TArray GetGuitarMidiTextStringsFromEnums(TArray<EGuitarMidiTextEvent>& MidiTextEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D130(relative to base address)
		FString GetGuitarMidiTextStringFromEnum(EGuitarMidiTextEvent MidiTextEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4D094(relative to base address)
		TArray GetGuitarMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CFB4(relative to base address)
		EGuitarMidiTextEvent GetGuitarMidiTextEnumFromString(FString MidiTextEventString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CF24(relative to base address)
		TArray GetGuitarMidiNoteIntegersFromEnums(TArray<EGuitarMidiNoteEvent>& MidiNoteEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CE68(relative to base address)
		char GetGuitarMidiNoteIntegerFromEnum(EGuitarMidiNoteEvent MidiNoteEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CDE0(relative to base address)
		TArray GetGuitarMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CD28(relative to base address)
		EGuitarMidiNoteEvent GetGuitarMidiNoteEnumFromInteger(char MidiNoteEventInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CCA0(relative to base address)
		TArray GetDrumMidiTextStringsFromEnums(TArray<EDrumMidiTextEvent>& MidiTextEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CBE8(relative to base address)
		FString GetDrumMidiTextStringFromEnum(EDrumMidiTextEvent MidiTextEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CB4C(relative to base address)
		TArray GetDrumMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4CA6C(relative to base address)
		EDrumMidiTextEvent GetDrumMidiTextEnumFromString(FString MidiTextEventString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C9DC(relative to base address)
		TArray GetDrumMidiNoteIntegersFromEnums(TArray<EDrumMidiNoteEvent>& MidiNoteEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C920(relative to base address)
		char GetDrumMidiNoteIntegerFromEnum(EDrumMidiNoteEvent MidiNoteEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C898(relative to base address)
		TArray GetDrumMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C7E0(relative to base address)
		EDrumMidiNoteEvent GetDrumMidiNoteEnumFromInteger(char MidiNoteEventInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C758(relative to base address)
		TArray GetBassMidiTextStringsFromEnums(TArray<EBassMidiTextEvent>& MidiTextEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C6A0(relative to base address)
		FString GetBassMidiTextStringFromEnum(EBassMidiTextEvent MidiTextEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C604(relative to base address)
		TArray GetBassMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C524(relative to base address)
		EBassMidiTextEvent GetBassMidiTextEnumFromString(FString MidiTextEventString); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C494(relative to base address)
		TArray GetBassMidiNoteIntegersFromEnums(TArray<EBassMidiNoteEvent>& MidiNoteEvents); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C3D8(relative to base address)
		char GetBassMidiNoteIntegerFromEnum(EBassMidiNoteEvent MidiNoteEvent); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C350(relative to base address)
		TArray GetBassMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C298(relative to base address)
		EBassMidiNoteEvent GetBassMidiNoteEnumFromInteger(char MidiNoteEventInt); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C210(relative to base address)
		TArray GetAllVocalsMidiTextStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C16C(relative to base address)
		TArray GetAllVocalsMidiTextEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C0F8(relative to base address)
		TArray GetAllVocalsMidiNoteIntegers(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C084(relative to base address)
		TArray GetAllVocalsMidiNoteEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4C010(relative to base address)
		TArray GetAllInstrumentSwapEventStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BFE4(relative to base address)
		TArray GetAllGuitarMidiTextStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BF40(relative to base address)
		TArray GetAllGuitarMidiTextEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BECC(relative to base address)
		TArray GetAllGuitarMidiNoteIntegers(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BE58(relative to base address)
		TArray GetAllGuitarMidiNoteEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BDE4(relative to base address)
		TArray GetAllDrumMidiTextStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BD40(relative to base address)
		TArray GetAllDrumMidiTextEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BCCC(relative to base address)
		TArray GetAllDrumMidiNoteIntegers(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BC58(relative to base address)
		TArray GetAllDrumMidiNoteEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BBE4(relative to base address)
		TArray GetAllBassMidiTextStrings(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BB40(relative to base address)
		TArray GetAllBassMidiTextEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BACC(relative to base address)
		TArray GetAllBassMidiNoteIntegers(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4BA58(relative to base address)
		TArray GetAllBassMidiNoteEnums(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4B9E4(relative to base address)
		ESparksInstrumentType CosmeticSubtypeToInstrumentType(ESparksAccountItemSubtype Subtype); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F4B93C(relative to base address)
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

		void Bind_Tom2_Hit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E260D9C(relative to base address)
		void Bind_Tom1_Hit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E260808(relative to base address)
		void Bind_SnareHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF750F4B898(relative to base address)
		void Bind_RideHardHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E260CF8(relative to base address)
		void Bind_KickHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FC58CE4(relative to base address)
		void Bind_HiHatPedalUp(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF750F4B7F4(relative to base address)
		void Bind_HiHatHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF750F4B750(relative to base address)
		void Bind_FloorTomHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E2608AC(relative to base address)
		void Bind_Crash2_SoftHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E27A07C(relative to base address)
		void Bind_Crash2_HardHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E27A3C8(relative to base address)
		void Bind_Crash2_Choke(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF750F4B6AC(relative to base address)
		void Bind_Crash1_SoftHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E27A280(relative to base address)
		void Bind_Crash1_HardHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E279FD8(relative to base address)
		void Bind_Crash1_Choke(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E279F34(relative to base address)
		void Bind_CowbellHit(FDelegateProperty& Callback); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74E27A324(relative to base address)
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
