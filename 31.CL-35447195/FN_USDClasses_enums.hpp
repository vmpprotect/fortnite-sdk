#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: USDClasses
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/USDClasses.EUsdDrawMode
	enum EUsdDrawMode
	{
		EUsdDrawMode__Origin = 0,
		EUsdDrawMode__Bounds = 1,
		EUsdDrawMode__Cards = 2,
		EUsdDrawMode__Default = 3,
		EUsdDrawMode__Inherited = 4,
	};


	// Enum /Script/USDClasses.EUsdModelCardGeometry
	enum EUsdModelCardGeometry
	{
		EUsdModelCardGeometry__Cross = 0,
		EUsdModelCardGeometry__Box = 1,
		EUsdModelCardGeometry__FromTexture = 2,
	};


	// Enum /Script/USDClasses.EUsdModelCardFace
	enum EUsdModelCardFace
	{
		EUsdModelCardFace__None = 0,
		EUsdModelCardFace__XPos = 1,
		EUsdModelCardFace__YPos = 2,
		EUsdModelCardFace__ZPos = 4,
		EUsdModelCardFace__XNeg = 8,
		EUsdModelCardFace__YNeg = 10,
		EUsdModelCardFace__ZNeg = 20,
	};


	// Enum /Script/USDClasses.EUsdDuplicateType
	enum EUsdDuplicateType
	{
		EUsdDuplicateType__FlattenComposedPrim = 0,
		EUsdDuplicateType__SingleLayerSpecs = 1,
		EUsdDuplicateType__AllLocalLayerSpecs = 2,
	};


	// Enum /Script/USDClasses.EUsdSaveDialogBehavior
	enum EUsdSaveDialogBehavior
	{
		EUsdSaveDialogBehavior__NeverSave = 0,
		EUsdSaveDialogBehavior__AlwaysSave = 1,
		EUsdSaveDialogBehavior__ShowPrompt = 2,
	};


	// Enum /Script/USDClasses.EUsdEditInInstanceBehavior
	enum EUsdEditInInstanceBehavior
	{
		EUsdEditInInstanceBehavior__Ignore = 0,
		EUsdEditInInstanceBehavior__RemoveInstanceable = 1,
		EUsdEditInInstanceBehavior__ShowPrompt = 2,
	};


	// Enum /Script/USDClasses.EUsdUpAxis
	enum EUsdUpAxis
	{
		EUsdUpAxis__YAxis = 0,
		EUsdUpAxis__ZAxis = 1,
	};

}
