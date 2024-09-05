#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/CommonUI.ERotatorDirection
	enum ERotatorDirection
	{
		ERotatorDirection__Right = 0,
		ERotatorDirection__Left = 1,
	};


	// Enum /Script/CommonUI.ECommonNumericType
	enum ECommonNumericType
	{
		ECommonNumericType__Number = 0,
		ECommonNumericType__Percentage = 1,
		ECommonNumericType__Seconds = 2,
		ECommonNumericType__Distance = 3,
	};


	// Enum /Script/CommonUI.ERichTextInlineIconDisplayMode
	enum ERichTextInlineIconDisplayMode
	{
		ERichTextInlineIconDisplayMode__IconOnly = 0,
		ERichTextInlineIconDisplayMode__TextOnly = 1,
		ERichTextInlineIconDisplayMode__IconAndText = 2,
	};


	// Enum /Script/CommonUI.EInputActionState
	enum EInputActionState
	{
		EInputActionState__Enabled = 0,
		EInputActionState__Disabled = 1,
		EInputActionState__Hidden = 2,
		EInputActionState__HiddenAndDisabled = 3,
	};


	// Enum /Script/CommonUI.ECommonSwitcherTransition
	enum ECommonSwitcherTransition
	{
		ECommonSwitcherTransition__FadeOnly = 0,
		ECommonSwitcherTransition__Horizontal = 1,
		ECommonSwitcherTransition__Vertical = 2,
		ECommonSwitcherTransition__Zoom = 3,
	};


	// Enum /Script/CommonUI.ETransitionCurve
	enum ETransitionCurve
	{
		ETransitionCurve__Linear = 0,
		ETransitionCurve__QuadIn = 1,
		ETransitionCurve__QuadOut = 2,
		ETransitionCurve__QuadInOut = 3,
		ETransitionCurve__CubicIn = 4,
		ETransitionCurve__CubicOut = 5,
		ETransitionCurve__CubicInOut = 6,
	};


	// Enum /Script/CommonUI.ECommonSwitcherTransitionFallbackStrategy
	enum ECommonSwitcherTransitionFallbackStrategy
	{
		ECommonSwitcherTransitionFallbackStrategy__None = 0,
		ECommonSwitcherTransitionFallbackStrategy__Previous = 1,
		ECommonSwitcherTransitionFallbackStrategy__Next = 2,
		ECommonSwitcherTransitionFallbackStrategy__First = 3,
		ECommonSwitcherTransitionFallbackStrategy__Last = 4,
	};

}
