#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixMetasound
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/HarmonixMetasound.EMusicTimeDiscontinuityType
	enum EMusicTimeDiscontinuityType
	{
		EMusicTimeDiscontinuityType__Loop = 0,
		EMusicTimeDiscontinuityType__Seek = 1,
	};


	// Enum /Script/HarmonixMetasound.EMusicClockState
	enum EMusicClockState
	{
		EMusicClockState__Stopped = 0,
		EMusicClockState__Paused = 1,
		EMusicClockState__Running = 2,
	};


	// Enum /Script/HarmonixMetasound.EStdMidiControllerID
	enum EStdMidiControllerID
	{
		EStdMidiControllerID__BankSelection = 0,
		EStdMidiControllerID__ModWheel = 1,
		EStdMidiControllerID__Breath = 2,
		EStdMidiControllerID__Undefined3 = 3,
		EStdMidiControllerID__FootController = 4,
		EStdMidiControllerID__PortamentoTime = 5,
		EStdMidiControllerID__DataCoarse = 6,
		EStdMidiControllerID__Volume = 7,
		EStdMidiControllerID__Balance = 8,
		EStdMidiControllerID__Undefined9 = 9,
		EStdMidiControllerID__Pan = A,
		EStdMidiControllerID__Expression = B,
		EStdMidiControllerID__EffectControl1 = C,
		EStdMidiControllerID__EffectControl2 = D,
		EStdMidiControllerID__Undefined14 = E,
		EStdMidiControllerID__Undefined15 = F,
		EStdMidiControllerID__GeneralPurposeController1 = 10,
		EStdMidiControllerID__GeneralPurposeController2 = 11,
		EStdMidiControllerID__GeneralPurposeController3 = 12,
		EStdMidiControllerID__GeneralPurposeController4 = 13,
		EStdMidiControllerID__Undefined20 = 14,
		EStdMidiControllerID__Undefined21 = 15,
		EStdMidiControllerID__Undefined22 = 16,
		EStdMidiControllerID__Undefined23 = 17,
		EStdMidiControllerID__Undefined24 = 18,
		EStdMidiControllerID__Undefined25 = 19,
		EStdMidiControllerID__Undefined26 = 1A,
		EStdMidiControllerID__Undefined27 = 1B,
		EStdMidiControllerID__Undefined28 = 1C,
		EStdMidiControllerID__Undefined29 = 1D,
		EStdMidiControllerID__Undefined30 = 1E,
		EStdMidiControllerID__Undefined31 = 1F,
		EStdMidiControllerID__LSBControl0 = 20,
		EStdMidiControllerID__LSBControl1 = 21,
		EStdMidiControllerID__LSBControl2 = 22,
		EStdMidiControllerID__LSBControl3 = 23,
		EStdMidiControllerID__LSBControl4 = 24,
		EStdMidiControllerID__LSBControl5 = 25,
		EStdMidiControllerID__LSBControl6 = 26,
		EStdMidiControllerID__LSBControl7 = 27,
		EStdMidiControllerID__LSBControl8 = 28,
		EStdMidiControllerID__LSBControl9 = 29,
		EStdMidiControllerID__LSBControl10 = 2A,
		EStdMidiControllerID__LSBControl11 = 2B,
		EStdMidiControllerID__LSBControl12 = 2C,
		EStdMidiControllerID__LSBControl13 = 2D,
		EStdMidiControllerID__LSBControl14 = 2E,
		EStdMidiControllerID__LSBControl15 = 2F,
		EStdMidiControllerID__LSBControl16 = 30,
		EStdMidiControllerID__LSBControl17 = 31,
		EStdMidiControllerID__LSBControl18 = 32,
		EStdMidiControllerID__LSBControl19 = 33,
		EStdMidiControllerID__LSBControl20 = 34,
		EStdMidiControllerID__LSBControl21 = 35,
		EStdMidiControllerID__LSBControl22 = 36,
		EStdMidiControllerID__LSBControl23 = 37,
		EStdMidiControllerID__LSBControl24 = 38,
		EStdMidiControllerID__LSBControl25 = 39,
		EStdMidiControllerID__LSBControl26 = 3A,
		EStdMidiControllerID__LSBControl27 = 3B,
		EStdMidiControllerID__LSBControl28 = 3C,
		EStdMidiControllerID__LSBControl29 = 3D,
		EStdMidiControllerID__LSBControl30 = 3E,
		EStdMidiControllerID__LSBControl31 = 3F,
		EStdMidiControllerID__Hold = 40,
		EStdMidiControllerID__PortamentoSwitch = 41,
		EStdMidiControllerID__Sustenuto = 42,
		EStdMidiControllerID__SoftPedal = 43,
		EStdMidiControllerID__Legato = 44,
		EStdMidiControllerID__Hold2 = 45,
		EStdMidiControllerID__SoundController1 = 46,
		EStdMidiControllerID__SoundController2 = 47,
		EStdMidiControllerID__SoundController3 = 48,
		EStdMidiControllerID__SoundController4 = 49,
		EStdMidiControllerID__SoundController5 = 4A,
		EStdMidiControllerID__SoundController6 = 4B,
		EStdMidiControllerID__SoundController7 = 4C,
		EStdMidiControllerID__SoundController8 = 4D,
		EStdMidiControllerID__SoundController9 = 4E,
		EStdMidiControllerID__SoundController10 = 4F,
		EStdMidiControllerID__GeneralPurposeController5 = 50,
		EStdMidiControllerID__GeneralPurposeController6 = 51,
		EStdMidiControllerID__GeneralPurposeController7 = 52,
		EStdMidiControllerID__GeneralPurposeController8 = 53,
		EStdMidiControllerID__PortamentoControl = 54,
		EStdMidiControllerID__Undefined85 = 55,
		EStdMidiControllerID__Undefined86 = 56,
		EStdMidiControllerID__Undefined87 = 57,
		EStdMidiControllerID__HighResolutionVelocityPrefix = 58,
		EStdMidiControllerID__Undefined89 = 59,
		EStdMidiControllerID__Undefined90 = 5A,
		EStdMidiControllerID__Effects1Depth = 5B,
		EStdMidiControllerID__Effects2Depth = 5C,
		EStdMidiControllerID__Effects3Depth = 5D,
		EStdMidiControllerID__Effects4Depth = 5E,
		EStdMidiControllerID__Effects5Depth = 5F,
		EStdMidiControllerID__DataIncrement = 60,
		EStdMidiControllerID__DataDecrement = 61,
		EStdMidiControllerID__NRPNFine = 62,
		EStdMidiControllerID__NRPNCoarse = 63,
		EStdMidiControllerID__RPNFine = 64,
		EStdMidiControllerID__RPNCoarse = 65,
		EStdMidiControllerID__Undefined102 = 66,
		EStdMidiControllerID__Undefined103 = 67,
		EStdMidiControllerID__Undefined104 = 68,
		EStdMidiControllerID__Undefined105 = 69,
		EStdMidiControllerID__Undefined106 = 6A,
		EStdMidiControllerID__Undefined107 = 6B,
		EStdMidiControllerID__Undefined108 = 6C,
		EStdMidiControllerID__Undefined109 = 6D,
		EStdMidiControllerID__Undefined110 = 6E,
		EStdMidiControllerID__Undefined111 = 6F,
		EStdMidiControllerID__Undefined112 = 70,
		EStdMidiControllerID__Undefined113 = 71,
		EStdMidiControllerID__Undefined114 = 72,
		EStdMidiControllerID__Undefined115 = 73,
		EStdMidiControllerID__Undefined116 = 74,
		EStdMidiControllerID__Undefined117 = 75,
		EStdMidiControllerID__Undefined118 = 76,
		EStdMidiControllerID__Undefined119 = 77,
		EStdMidiControllerID__AllSoundOff = 78,
		EStdMidiControllerID__Reset = 79,
		EStdMidiControllerID__LocalKeyboardSwitch = 7A,
		EStdMidiControllerID__AllNotesOff = 7B,
		EStdMidiControllerID__OmniModeOff = 7C,
		EStdMidiControllerID__OmniModeOn = 7D,
		EStdMidiControllerID__MonoMode = 7E,
		EStdMidiControllerID__PolyMode = 7F,
		EStdMidiControllerID__NUM = 80,
	};


	// Enum /Script/HarmonixMetasound.ESeekPointType
	enum ESeekPointType
	{
		ESeekPointType__BarBeat = 0,
		ESeekPointType__Millisecond = 1,
	};


	// Enum /Script/HarmonixMetasound.EMusicClockDriveMethod
	enum EMusicClockDriveMethod
	{
		EMusicClockDriveMethod__WallClock = 0,
		EMusicClockDriveMethod__MetaSound = 1,
	};

}
