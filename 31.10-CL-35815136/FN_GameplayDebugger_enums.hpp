#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayDebugger
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/GameplayDebugger.EGameplayDebuggerOverrideMode
	enum EGameplayDebuggerOverrideMode
	{
		EGameplayDebuggerOverrideMode__Enable = 0,
		EGameplayDebuggerOverrideMode__Disable = 1,
		EGameplayDebuggerOverrideMode__UseDefault = 2,
	};


	// Enum /Script/GameplayDebugger.EGameplayDebuggerShape
	enum EGameplayDebuggerShape
	{
		EGameplayDebuggerShape__Invalid = 0,
		EGameplayDebuggerShape__Point = 1,
		EGameplayDebuggerShape__Segment = 2,
		EGameplayDebuggerShape__Box = 3,
		EGameplayDebuggerShape__Cone = 4,
		EGameplayDebuggerShape__Cylinder = 5,
		EGameplayDebuggerShape__Circle = 6,
		EGameplayDebuggerShape__Rectangle = 7,
		EGameplayDebuggerShape__Capsule = 8,
		EGameplayDebuggerShape__Polygon = 9,
		EGameplayDebuggerShape__Polyline = A,
		EGameplayDebuggerShape__Arrow = B,
	};

}
