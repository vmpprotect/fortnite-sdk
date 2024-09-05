#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ClothingSystemRuntimeCommon
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
	enum EClothingWindMethod_Legacy
	{
		EClothingWindMethod_Legacy__Legacy = 0,
		EClothingWindMethod_Legacy__Accurate = 1,
	};


	// Enum /Script/ClothingSystemRuntimeCommon.EWeightMapTargetCommon
	enum EWeightMapTargetCommon
	{
		EWeightMapTargetCommon__None = 0,
		EWeightMapTargetCommon__MaxDistance = 1,
		EWeightMapTargetCommon__BackstopDistance = 2,
		EWeightMapTargetCommon__BackstopRadius = 3,
		EWeightMapTargetCommon__AnimDriveStiffness = 4,
		EWeightMapTargetCommon__AnimDriveDamping_DEPRECATED = 5,
	};


	// Enum /Script/ClothingSystemRuntimeCommon.EClothMassMode
	enum EClothMassMode
	{
		EClothMassMode__UniformMass = 0,
		EClothMassMode__TotalMass = 1,
		EClothMassMode__Density = 2,
		EClothMassMode__MaxClothMassMode = 3,
	};

}
