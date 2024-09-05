#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MIDIDevice
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
