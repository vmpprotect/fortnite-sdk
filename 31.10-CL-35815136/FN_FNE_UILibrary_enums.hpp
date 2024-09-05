#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FNE_UILibrary
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/FNE_UILibrary.EFNE_UIBlockVisualState
	enum EFNE_UIBlockVisualState
	{
		EFNE_UIBlockVisualState__Invalid = 0,
		EFNE_UIBlockVisualState__Hovered = 1,
		EFNE_UIBlockVisualState__Unhovered = 2,
		EFNE_UIBlockVisualState__Focused = 3,
		EFNE_UIBlockVisualState__Unfocused = 4,
		EFNE_UIBlockVisualState__Pressed = 5,
		EFNE_UIBlockVisualState__Released = 6,
		EFNE_UIBlockVisualState__Disabled = 7,
		EFNE_UIBlockVisualState__Enabled = 8,
		EFNE_UIBlockVisualState__Selected = 9,
		EFNE_UIBlockVisualState__DeselectedIdle = A,
		EFNE_UIBlockVisualState__DeselectedFocused = B,
	};


	// Enum /Script/FNE_UILibrary.EFNE_UIBlockInstantTransitionState
	enum EFNE_UIBlockInstantTransitionState
	{
		EFNE_UIBlockInstantTransitionState__Invalid = 0,
		EFNE_UIBlockInstantTransitionState__InstantEnabled = 1,
		EFNE_UIBlockInstantTransitionState__InstantDisabled = 2,
		EFNE_UIBlockInstantTransitionState__InstantSelected = 3,
		EFNE_UIBlockInstantTransitionState__InstantDeselected = 4,
		EFNE_UIBlockInstantTransitionState__InstantLocked = 5,
		EFNE_UIBlockInstantTransitionState__InstantUnlocked = 6,
	};

}
