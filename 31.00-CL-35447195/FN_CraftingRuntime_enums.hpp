#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CraftingRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/CraftingRuntime.ECraftingObjectState
	enum ECraftingObjectState
	{
		ECraftingObjectState__Invalid = 0,
		ECraftingObjectState__Idle = 1,
		ECraftingObjectState__Crafting = 2,
		ECraftingObjectState__CraftingPaused = 3,
		ECraftingObjectState__CraftingPausedDecaying = 4,
		ECraftingObjectState__Ready = 5,
		ECraftingObjectState__OverCrafting = 6,
		ECraftingObjectState__Resetting = 7,
		ECraftingObjectState__TotalStates = 8,
	};


	// Enum /Script/CraftingRuntime.ECraftingIngredientReqError
	enum ECraftingIngredientReqError
	{
		ECraftingIngredientReqError__None = 0,
		ECraftingIngredientReqError__NoItem = 1,
		ECraftingIngredientReqError__NotEnough = 2,
	};

}
