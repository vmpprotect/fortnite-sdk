#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HoagieRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/HoagieRuntime.EHoagieBoostState
	enum EHoagieBoostState
	{
		EHoagieBoostState__Unknown = 0,
		EHoagieBoostState__Ready = 1,
		EHoagieBoostState__Started = 2,
		EHoagieBoostState__Finished = 3,
		EHoagieBoostState__Failed = 4,
	};


	// Enum /Script/HoagieRuntime.EHoagieState
	enum EHoagieState
	{
		EHoagieState__STARTUP = 0,
		EHoagieState__STARTUP_LIFT = 1,
		EHoagieState__FLIGHT = 2,
		EHoagieState__AUTO_LANDING = 3,
		EHoagieState__SPIN_CRASHING = 4,
		EHoagieState__CRASHING_NO_SPIN = 5,
		EHoagieState__CRASH_LANDED = 6,
		EHoagieState__LANDED = 7,
		EHoagieState__EXPLODING = 8,
		EHoagieState__NONE = 9,
	};

}
