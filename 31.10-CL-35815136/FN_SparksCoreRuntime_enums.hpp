#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCoreRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/SparksCoreRuntime.EFMJamLoopType
	enum EFMJamLoopType
	{
		EFMJamLoopType__Lead = 0,
		EFMJamLoopType__Misc = 1,
		EFMJamLoopType__Bass = 2,
		EFMJamLoopType__Beat = 3,
		EFMJamLoopType__Num = 4,
	};


	// Enum /Script/SparksCoreRuntime.ESparksInstrumentType
	enum ESparksInstrumentType
	{
		ESparksInstrumentType__Guitar = 0,
		ESparksInstrumentType__Bass = 1,
		ESparksInstrumentType__Vocals = 2,
		ESparksInstrumentType__Drum = 3,
		ESparksInstrumentType__Keyboard = 4,
		ESparksInstrumentType__None = 5,
		ESparksInstrumentType__NumInstrumentTypes = 5,
	};


	// Enum /Script/SparksCoreRuntime.ESparksAccountItemSubtype
	enum ESparksAccountItemSubtype
	{
		ESparksAccountItemSubtype__Aura = 0,
		ESparksAccountItemSubtype__Guitar = 1,
		ESparksAccountItemSubtype__Bass = 2,
		ESparksAccountItemSubtype__Keyboard = 3,
		ESparksAccountItemSubtype__Microphone = 4,
		ESparksAccountItemSubtype__Drums = 5,
		ESparksAccountItemSubtype__SpotlightAnim = 6,
		ESparksAccountItemSubtype__Song = 7,
		ESparksAccountItemSubtype__None = 8,
		ESparksAccountItemSubtype__NumAccountItemTypes = 8,
	};


	// Enum /Script/SparksCoreRuntime.EBassMidiNoteEvent
	enum EBassMidiNoteEvent
	{
		EBassMidiNoteEvent__None = 0,
		EBassMidiNoteEvent__FretPosition1 = 1,
		EBassMidiNoteEvent__FretPosition2 = 2,
		EBassMidiNoteEvent__FretPosition3 = 3,
		EBassMidiNoteEvent__FretPosition4 = 4,
		EBassMidiNoteEvent__FretPosition5 = 5,
		EBassMidiNoteEvent__FretPosition6 = 6,
		EBassMidiNoteEvent__FretPosition7 = 7,
		EBassMidiNoteEvent__FretPosition8 = 8,
		EBassMidiNoteEvent__FretPosition9 = 9,
		EBassMidiNoteEvent__FretPosition10 = A,
		EBassMidiNoteEvent__FretPosition11 = B,
		EBassMidiNoteEvent__FretPosition12 = C,
		EBassMidiNoteEvent__FretPosition13 = D,
		EBassMidiNoteEvent__FretPosition14 = E,
		EBassMidiNoteEvent__FretPosition15 = F,
		EBassMidiNoteEvent__FretPosition16 = 10,
		EBassMidiNoteEvent__FretPosition17 = 11,
		EBassMidiNoteEvent__FretPosition18 = 12,
		EBassMidiNoteEvent__FretPosition19 = 13,
		EBassMidiNoteEvent__FretPosition20 = 14,
		EBassMidiNoteEvent__StrumDown = 15,
		EBassMidiNoteEvent__StrumUp = 16,
		EBassMidiNoteEvent__ChordShape = 17,
	};


	// Enum /Script/SparksCoreRuntime.EBassMidiTextEvent
	enum EBassMidiTextEvent
	{
		EBassMidiTextEvent__None = 0,
		EBassMidiTextEvent__PlayingMellow = 1,
		EBassMidiTextEvent__PlayingStandard = 2,
		EBassMidiTextEvent__PlayingIntense = 3,
		EBassMidiTextEvent__IdleRhythmMellow = 4,
		EBassMidiTextEvent__IdleRhythmStandard = 5,
		EBassMidiTextEvent__IdleRhythmIntense = 6,
		EBassMidiTextEvent__IdleRealtime = 7,
		EBassMidiTextEvent__Pickup = 8,
	};


	// Enum /Script/SparksCoreRuntime.EDrumMidiNoteEvent
	enum EDrumMidiNoteEvent
	{
		EDrumMidiNoteEvent__None = 0,
		EDrumMidiNoteEvent__KickHit_RightFoot = 1,
		EDrumMidiNoteEvent__HiHatPedalUp_LeftFoot = 2,
		EDrumMidiNoteEvent__SnareHit_LeftHand = 3,
		EDrumMidiNoteEvent__SnareHit_RightHand = 4,
		EDrumMidiNoteEvent__HiHatHit_LeftHand = 5,
		EDrumMidiNoteEvent__HiHatHit_RightHand = 6,
		EDrumMidiNoteEvent__Percussion_RightHand = 7,
		EDrumMidiNoteEvent__Crash1HardHit_LeftHand = 8,
		EDrumMidiNoteEvent__Crash1SoftHit_LeftHand = 9,
		EDrumMidiNoteEvent__Crash1Hardhit_RightHand = A,
		EDrumMidiNoteEvent__Crash1SoftHit_RightHand = B,
		EDrumMidiNoteEvent__Crash2HardHit_RightHand = C,
		EDrumMidiNoteEvent__Crash2SoftHit_RightHand = D,
		EDrumMidiNoteEvent__Crash1Choke = E,
		EDrumMidiNoteEvent__Crash2Choke = F,
		EDrumMidiNoteEvent__RideCymbalHit_RightHand = 10,
		EDrumMidiNoteEvent__RideCymbalHit_LeftHand = 11,
		EDrumMidiNoteEvent__Crash2Hit_LeftHand = 12,
		EDrumMidiNoteEvent__Crash2SoftHit_LeftHand = 13,
		EDrumMidiNoteEvent__Tom1Hit_LeftHand = 14,
		EDrumMidiNoteEvent__Tom1Hit_RightHand = 15,
		EDrumMidiNoteEvent__Tom2Hit_LeftHand = 16,
		EDrumMidiNoteEvent__Tom2Hit_RightHand = 17,
		EDrumMidiNoteEvent__FloorTomHit_LeftHand = 18,
		EDrumMidiNoteEvent__FloorTomHit_RightHand = 19,
		EDrumMidiNoteEvent__SticksHeld = 1A,
		EDrumMidiNoteEvent__SnareHit_LeftHand_Soft = 1B,
		EDrumMidiNoteEvent__SnareHit_RightHand_Soft = 1C,
	};


	// Enum /Script/SparksCoreRuntime.EDrumMidiTextEvent
	enum EDrumMidiTextEvent
	{
		EDrumMidiTextEvent__None = 0,
		EDrumMidiTextEvent__PlayingMellow = 1,
		EDrumMidiTextEvent__PlayingStandard = 2,
		EDrumMidiTextEvent__PlayingIntense = 3,
		EDrumMidiTextEvent__IdleRhythmMellow = 4,
		EDrumMidiTextEvent__IdleRhythmStandard = 5,
		EDrumMidiTextEvent__IdleRhythmIntense = 6,
		EDrumMidiTextEvent__IdleRealtime = 7,
		EDrumMidiTextEvent__Pickup = 8,
	};


	// Enum /Script/SparksCoreRuntime.EGuitarMidiNoteEvent
	enum EGuitarMidiNoteEvent
	{
		EGuitarMidiNoteEvent__None = 0,
		EGuitarMidiNoteEvent__FretPosition1 = 1,
		EGuitarMidiNoteEvent__FretPosition2 = 2,
		EGuitarMidiNoteEvent__FretPosition3 = 3,
		EGuitarMidiNoteEvent__FretPosition4 = 4,
		EGuitarMidiNoteEvent__FretPosition5 = 5,
		EGuitarMidiNoteEvent__FretPosition6 = 6,
		EGuitarMidiNoteEvent__FretPosition7 = 7,
		EGuitarMidiNoteEvent__FretPosition8 = 8,
		EGuitarMidiNoteEvent__FretPosition9 = 9,
		EGuitarMidiNoteEvent__FretPosition10 = A,
		EGuitarMidiNoteEvent__FretPosition11 = B,
		EGuitarMidiNoteEvent__FretPosition12 = C,
		EGuitarMidiNoteEvent__FretPosition13 = D,
		EGuitarMidiNoteEvent__FretPosition14 = E,
		EGuitarMidiNoteEvent__FretPosition15 = F,
		EGuitarMidiNoteEvent__FretPosition16 = 10,
		EGuitarMidiNoteEvent__FretPosition17 = 11,
		EGuitarMidiNoteEvent__FretPosition18 = 12,
		EGuitarMidiNoteEvent__FretPosition19 = 13,
		EGuitarMidiNoteEvent__FretPosition20 = 14,
		EGuitarMidiNoteEvent__StrumDown = 15,
		EGuitarMidiNoteEvent__StrumUp = 16,
		EGuitarMidiNoteEvent__ChordShape = 17,
	};


	// Enum /Script/SparksCoreRuntime.EGuitarMidiTextEvent
	enum EGuitarMidiTextEvent
	{
		EGuitarMidiTextEvent__None = 0,
		EGuitarMidiTextEvent__PlayingMellow = 1,
		EGuitarMidiTextEvent__PlayingStandard = 2,
		EGuitarMidiTextEvent__PlayingIntense = 3,
		EGuitarMidiTextEvent__IdleRhythmMellow = 4,
		EGuitarMidiTextEvent__IdleRhythmStandard = 5,
		EGuitarMidiTextEvent__IdleRhythmIntense = 6,
		EGuitarMidiTextEvent__IdleRealtime = 7,
		EGuitarMidiTextEvent__UsingInstrumentGuitar = 8,
		EGuitarMidiTextEvent__UsingInstrumentKeytar = 9,
		EGuitarMidiTextEvent__Pickup = A,
	};


	// Enum /Script/SparksCoreRuntime.EVocalsMidiNoteEvent
	enum EVocalsMidiNoteEvent
	{
		EVocalsMidiNoteEvent__None = 0,
	};


	// Enum /Script/SparksCoreRuntime.EVocalsMidiTextEvent
	enum EVocalsMidiTextEvent
	{
		EVocalsMidiTextEvent__None = 0,
		EVocalsMidiTextEvent__PlayingMellow = 1,
		EVocalsMidiTextEvent__PlayingStandard = 2,
		EVocalsMidiTextEvent__PlayingIntense = 3,
		EVocalsMidiTextEvent__IdleRhythmMellow = 4,
		EVocalsMidiTextEvent__IdleRhythmStandard = 5,
		EVocalsMidiTextEvent__IdleRhythmIntense = 6,
		EVocalsMidiTextEvent__IdleRealtime = 7,
		EVocalsMidiTextEvent__Pickup = 8,
	};

}
