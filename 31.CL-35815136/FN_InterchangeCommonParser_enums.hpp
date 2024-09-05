#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeCommonParser
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/InterchangeCommonParser.EInterchangeCurveInterpMode
	enum EInterchangeCurveInterpMode
	{
		EInterchangeCurveInterpMode__Linear = 0,
		EInterchangeCurveInterpMode__Constant = 1,
		EInterchangeCurveInterpMode__Cubic = 2,
		EInterchangeCurveInterpMode__None = 3,
	};


	// Enum /Script/InterchangeCommonParser.EInterchangeCurveTangentMode
	enum EInterchangeCurveTangentMode
	{
		EInterchangeCurveTangentMode__Auto = 0,
		EInterchangeCurveTangentMode__User = 1,
		EInterchangeCurveTangentMode__Break = 2,
		EInterchangeCurveTangentMode__None = 3,
	};


	// Enum /Script/InterchangeCommonParser.EInterchangeCurveTangentWeightMode
	enum EInterchangeCurveTangentWeightMode
	{
		EInterchangeCurveTangentWeightMode__WeightedNone = 0,
		EInterchangeCurveTangentWeightMode__WeightedArrive = 1,
		EInterchangeCurveTangentWeightMode__WeightedLeave = 2,
		EInterchangeCurveTangentWeightMode__WeightedBoth = 3,
	};

}
