#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MIDIDevice
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MIDIDevice.EMIDIEventType
	enum EMIDIEventType
	{
		EMIDIEventType__Unknown = 0,
		EMIDIEventType__NoteOff = 8,
		EMIDIEventType__NoteOn = 9,
		EMIDIEventType__NoteAfterTouch = A,
		EMIDIEventType__ControlChange = B,
		EMIDIEventType__ProgramChange = C,
		EMIDIEventType__ChannelAfterTouch = D,
		EMIDIEventType__PitchBend = E,
	};

}
