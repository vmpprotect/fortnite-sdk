#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CustomizableObjectPopulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/CustomizableObjectPopulation.EPopulationConstraintType
	enum EPopulationConstraintType
	{
		EPopulationConstraintType__NONE = 0,
		EPopulationConstraintType__BOOL = 1,
		EPopulationConstraintType__DISCRETE = 2,
		EPopulationConstraintType__DISCRETE_FLOAT = 3,
		EPopulationConstraintType__DISCRETE_COLOR = 4,
		EPopulationConstraintType__TAG = 5,
		EPopulationConstraintType__RANGE = 6,
		EPopulationConstraintType__CURVE = 7,
		EPopulationConstraintType__CURVE_COLOR = 8,
	};


	// Enum /Script/CustomizableObjectPopulation.ECurveColor
	enum ECurveColor
	{
		ECurveColor__RED = 0,
		ECurveColor__GREEN = 1,
		ECurveColor__BLUE = 2,
		ECurveColor__ALPHA = 3,
	};

}
