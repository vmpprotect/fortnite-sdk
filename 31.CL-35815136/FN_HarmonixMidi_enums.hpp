#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixMidi
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/HarmonixMidi.EMusicalBeatType
	enum EMusicalBeatType
	{
		EMusicalBeatType__Downbeat = 0,
		EMusicalBeatType__Strong = 1,
		EMusicalBeatType__Normal = 2,
	};


	// Enum /Script/HarmonixMidi.EMusicTimeSpanOffsetUnits
	enum EMusicTimeSpanOffsetUnits
	{
		EMusicTimeSpanOffsetUnits__Ms = 0,
		EMusicTimeSpanOffsetUnits__Bars = 1,
		EMusicTimeSpanOffsetUnits__Beats = 2,
		EMusicTimeSpanOffsetUnits__ThirtySecondNotes = 3,
		EMusicTimeSpanOffsetUnits__SixteenthNotes = 4,
		EMusicTimeSpanOffsetUnits__EighthNotes = 5,
		EMusicTimeSpanOffsetUnits__QuarterNotes = 6,
		EMusicTimeSpanOffsetUnits__HalfNotes = 7,
		EMusicTimeSpanOffsetUnits__WholeNotes = 8,
		EMusicTimeSpanOffsetUnits__DottedSixteenthNotes = 9,
		EMusicTimeSpanOffsetUnits__DottedEighthNotes = A,
		EMusicTimeSpanOffsetUnits__DottedQuarterNotes = B,
		EMusicTimeSpanOffsetUnits__DottedHalfNotes = C,
		EMusicTimeSpanOffsetUnits__DottedWholeNotes = D,
		EMusicTimeSpanOffsetUnits__SixteenthNoteTriplets = E,
		EMusicTimeSpanOffsetUnits__EighthNoteTriplets = F,
		EMusicTimeSpanOffsetUnits__QuarterNoteTriplets = 10,
		EMusicTimeSpanOffsetUnits__HalfNoteTriplets = 11,
	};


	// Enum /Script/HarmonixMidi.EMusicTimeSpanLengthUnits
	enum EMusicTimeSpanLengthUnits
	{
		EMusicTimeSpanLengthUnits__Bars = 0,
		EMusicTimeSpanLengthUnits__Beats = 1,
		EMusicTimeSpanLengthUnits__ThirtySecondNotes = 2,
		EMusicTimeSpanLengthUnits__SixteenthNotes = 3,
		EMusicTimeSpanLengthUnits__EighthNotes = 4,
		EMusicTimeSpanLengthUnits__QuarterNotes = 5,
		EMusicTimeSpanLengthUnits__HalfNotes = 6,
		EMusicTimeSpanLengthUnits__WholeNotes = 7,
		EMusicTimeSpanLengthUnits__DottedSixteenthNotes = 8,
		EMusicTimeSpanLengthUnits__DottedEighthNotes = 9,
		EMusicTimeSpanLengthUnits__DottedQuarterNotes = A,
		EMusicTimeSpanLengthUnits__DottedHalfNotes = B,
		EMusicTimeSpanLengthUnits__DottedWholeNotes = C,
		EMusicTimeSpanLengthUnits__SixteenthNoteTriplets = D,
		EMusicTimeSpanLengthUnits__EighthNoteTriplets = E,
		EMusicTimeSpanLengthUnits__QuarterNoteTriplets = F,
		EMusicTimeSpanLengthUnits__HalfNoteTriplets = 10,
	};


	// Enum /Script/HarmonixMidi.EMidiFileQuantizeDirection
	enum EMidiFileQuantizeDirection
	{
		EMidiFileQuantizeDirection__Nearest = 0,
		EMidiFileQuantizeDirection__Up = 1,
		EMidiFileQuantizeDirection__Down = 2,
	};


	// Enum /Script/HarmonixMidi.EMidiClockSubdivisionQuantization
	enum EMidiClockSubdivisionQuantization
	{
		EMidiClockSubdivisionQuantization__Bar = 0,
		EMidiClockSubdivisionQuantization__Beat = 1,
		EMidiClockSubdivisionQuantization__ThirtySecondNote = 2,
		EMidiClockSubdivisionQuantization__SixteenthNote = 3,
		EMidiClockSubdivisionQuantization__EighthNote = 4,
		EMidiClockSubdivisionQuantization__QuarterNote = 5,
		EMidiClockSubdivisionQuantization__HalfNote = 6,
		EMidiClockSubdivisionQuantization__WholeNote = 7,
		EMidiClockSubdivisionQuantization__DottedSixteenthNote = 8,
		EMidiClockSubdivisionQuantization__DottedEighthNote = 9,
		EMidiClockSubdivisionQuantization__DottedQuarterNote = A,
		EMidiClockSubdivisionQuantization__DottedHalfNote = B,
		EMidiClockSubdivisionQuantization__DottedWholeNote = C,
		EMidiClockSubdivisionQuantization__SixteenthNoteTriplet = D,
		EMidiClockSubdivisionQuantization__EighthNoteTriplet = E,
		EMidiClockSubdivisionQuantization__QuarterNoteTriplet = F,
		EMidiClockSubdivisionQuantization__HalfNoteTriplet = 10,
		EMidiClockSubdivisionQuantization__None = 13,
	};

}
