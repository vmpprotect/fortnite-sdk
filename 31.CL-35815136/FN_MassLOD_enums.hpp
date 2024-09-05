#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassLOD
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
