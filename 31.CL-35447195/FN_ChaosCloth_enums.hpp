#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosCloth
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ChaosCloth.EChaosWeightMapTarget
	enum EChaosWeightMapTarget
	{
		EChaosWeightMapTarget__None = 0,
		EChaosWeightMapTarget__MaxDistance = 1,
		EChaosWeightMapTarget__BackstopDistance = 2,
		EChaosWeightMapTarget__BackstopRadius = 3,
		EChaosWeightMapTarget__AnimDriveStiffness = 4,
		EChaosWeightMapTarget__AnimDriveDamping = 5,
		EChaosWeightMapTarget__TetherStiffness = 6,
		EChaosWeightMapTarget__TetherScale = 7,
		EChaosWeightMapTarget__Drag = 8,
		EChaosWeightMapTarget__Lift = 9,
		EChaosWeightMapTarget__EdgeStiffness = A,
		EChaosWeightMapTarget__BendingStiffness = B,
		EChaosWeightMapTarget__AreaStiffness = C,
		EChaosWeightMapTarget__BucklingStiffness = D,
		EChaosWeightMapTarget__Pressure = E,
	};


	// Enum /Script/ChaosCloth.EChaosClothTetherMode
	enum EChaosClothTetherMode
	{
		EChaosClothTetherMode__FastTetherFastLength = 0,
		EChaosClothTetherMode__AccurateTetherFastLength = 1,
		EChaosClothTetherMode__AccurateTetherAccurateLength = 2,
		EChaosClothTetherMode__MaxChaosClothTetherMode = 3,
	};

}
