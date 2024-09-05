#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DaySequence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/DaySequence.EDayNightCycleMode
	enum EDayNightCycleMode
	{
		EDayNightCycleMode__Default = 0,
		EDayNightCycleMode__FixedTime = 1,
		EDayNightCycleMode__StartAtSpecifiedTime = 2,
		EDayNightCycleMode__RandomFixedTime = 3,
		EDayNightCycleMode__RandomStartTime = 4,
	};


	// Enum /Script/DaySequence.EDaySequenceModifierBlendMode
	enum EDaySequenceModifierBlendMode
	{
		EDaySequenceModifierBlendMode__None = 0,
		EDaySequenceModifierBlendMode__Distance = 1,
	};

}
