#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassLOD
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MassLOD.EMassLOD
	enum EMassLOD
	{
		EMassLOD__High = 0,
		EMassLOD__Medium = 1,
		EMassLOD__Low = 2,
		EMassLOD__Off = 3,
		EMassLOD__Max = 4,
	};


	// Enum /Script/MassLOD.EMassVisibility
	enum EMassVisibility
	{
		EMassVisibility__CanBeSeen = 0,
		EMassVisibility__CulledByFrustum = 1,
		EMassVisibility__CulledByDistance = 2,
		EMassVisibility__Max = 3,
	};

}
