#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CraftingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
