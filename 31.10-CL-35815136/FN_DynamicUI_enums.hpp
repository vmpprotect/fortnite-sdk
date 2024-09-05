#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DynamicUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/DynamicUI.EDynamicUIStrength
	enum EDynamicUIStrength
	{
		EDynamicUIStrength__Weak = 0,
		EDynamicUIStrength__Medium = 1,
		EDynamicUIStrength__Strong = 2,
		EDynamicUIStrength__Required = 3,
	};


	// Enum /Script/DynamicUI.EDynamicUIAnchor
	enum EDynamicUIAnchor
	{
		EDynamicUIAnchor__TopLeft = 0,
		EDynamicUIAnchor__TopCenter = 1,
		EDynamicUIAnchor__TopRight = 2,
		EDynamicUIAnchor__CenterLeft = 3,
		EDynamicUIAnchor__CenterCenter = 4,
		EDynamicUIAnchor__CenterRight = 5,
		EDynamicUIAnchor__BottomLeft = 6,
		EDynamicUIAnchor__BottomCenter = 7,
		EDynamicUIAnchor__BottomRight = 8,
	};


	// Enum /Script/DynamicUI.EDynamicUIAspectRatioType
	enum EDynamicUIAspectRatioType
	{
		EDynamicUIAspectRatioType__AspectRatio_1 = 0,
		EDynamicUIAspectRatioType__AspectRatio_4 = 1,
		EDynamicUIAspectRatioType__AspectRatio_5 = 2,
		EDynamicUIAspectRatioType__AspectRatio_16 = 3,
		EDynamicUIAspectRatioType__AspectRatio_16 = 4,
		EDynamicUIAspectRatioType__AspectRatio_21 = 5,
		EDynamicUIAspectRatioType__Custom = 6,
	};


	// Enum /Script/DynamicUI.EDynamicUISizeMatch
	enum EDynamicUISizeMatch
	{
		EDynamicUISizeMatch__Both = 0,
		EDynamicUISizeMatch__Width = 1,
		EDynamicUISizeMatch__Height = 2,
	};


	// Enum /Script/DynamicUI.EDynamicUIZOrder
	enum EDynamicUIZOrder
	{
		EDynamicUIZOrder__Back = 3E8,
		EDynamicUIZOrder__Middle = 7D0,
		EDynamicUIZOrder__Front = BB8,
		EDynamicUIZOrder__Custom = 9C4,
		EDynamicUIZOrder__CustomMin = 0,
		EDynamicUIZOrder__CustomMax = 1388,
		EDynamicUIZOrder__Loading = 7530,
		EDynamicUIZOrder__Top = C350,
	};


	// Enum /Script/DynamicUI.EDynamicUIUnallowedBehavior
	enum EDynamicUIUnallowedBehavior
	{
		EDynamicUIUnallowedBehavior__Hide = 0,
		EDynamicUIUnallowedBehavior__Collapse = 1,
		EDynamicUIUnallowedBehavior__Destroy = 2,
	};


	// Enum /Script/DynamicUI.EDynamicUIDebugDisplayMode
	enum EDynamicUIDebugDisplayMode
	{
		EDynamicUIDebugDisplayMode__Hide = 0,
		EDynamicUIDebugDisplayMode__ShowSelected = 1,
		EDynamicUIDebugDisplayMode__ShowAll = 2,
	};


	// Enum /Script/DynamicUI.EDynamicUIUnallowLayerComparison
	enum EDynamicUIUnallowLayerComparison
	{
		EDynamicUIUnallowLayerComparison__Equal = 0,
		EDynamicUIUnallowLayerComparison__NotEqual = 1,
		EDynamicUIUnallowLayerComparison__Less = 2,
		EDynamicUIUnallowLayerComparison__LessOrEqual = 3,
		EDynamicUIUnallowLayerComparison__Greater = 4,
		EDynamicUIUnallowLayerComparison__GreaterOrEqual = 5,
	};

}
