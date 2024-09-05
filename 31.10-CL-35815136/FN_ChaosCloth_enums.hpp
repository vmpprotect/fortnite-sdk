#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosCloth
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
