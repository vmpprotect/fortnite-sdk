#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UMG
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/UMG.ESlateVisibility
	enum ESlateVisibility
	{
		ESlateVisibility__Visible = 0,
		ESlateVisibility__Collapsed = 1,
		ESlateVisibility__Hidden = 2,
		ESlateVisibility__HitTestInvisible = 3,
		ESlateVisibility__SelfHitTestInvisible = 4,
	};


	// Enum /Script/UMG.EVirtualKeyboardType
	enum EVirtualKeyboardType
	{
		EVirtualKeyboardType__Default = 0,
		EVirtualKeyboardType__Number = 1,
		EVirtualKeyboardType__Web = 2,
		EVirtualKeyboardType__Email = 3,
		EVirtualKeyboardType__Password = 4,
		EVirtualKeyboardType__AlphaNumeric = 5,
	};


	// Enum /Script/UMG.ESlateAccessibleBehavior
	enum ESlateAccessibleBehavior
	{
		ESlateAccessibleBehavior__NotAccessible = 0,
		ESlateAccessibleBehavior__Auto = 1,
		ESlateAccessibleBehavior__Summary = 2,
		ESlateAccessibleBehavior__Custom = 3,
		ESlateAccessibleBehavior__ToolTip = 4,
	};


	// Enum /Script/UMG.ESlateSizeRule
	enum ESlateSizeRule
	{
		ESlateSizeRule__Automatic = 0,
		ESlateSizeRule__Fill = 1,
	};


	// Enum /Script/UMG.EDynamicBoxType
	enum EDynamicBoxType
	{
		EDynamicBoxType__Horizontal = 0,
		EDynamicBoxType__Vertical = 1,
		EDynamicBoxType__Wrap = 2,
		EDynamicBoxType__VerticalWrap = 3,
		EDynamicBoxType__Radial = 4,
		EDynamicBoxType__Overlay = 5,
	};


	// Enum /Script/UMG.EWidgetDesignFlags
	enum EWidgetDesignFlags
	{
		EWidgetDesignFlags__None = 0,
		EWidgetDesignFlags__Designing = 1,
		EWidgetDesignFlags__ShowOutline = 2,
		EWidgetDesignFlags__ExecutePreConstruct = 4,
		EWidgetDesignFlags__Previewing = 8,
	};


	// Enum /Script/UMG.EWidgetSpace
	enum EWidgetSpace
	{
		EWidgetSpace__World = 0,
		EWidgetSpace__Screen = 1,
	};


	// Enum /Script/UMG.EWidgetTimingPolicy
	enum EWidgetTimingPolicy
	{
		EWidgetTimingPolicy__RealTime = 0,
		EWidgetTimingPolicy__GameTime = 1,
	};


	// Enum /Script/UMG.EWidgetBlendMode
	enum EWidgetBlendMode
	{
		EWidgetBlendMode__Opaque = 0,
		EWidgetBlendMode__Masked = 1,
		EWidgetBlendMode__Transparent = 2,
	};


	// Enum /Script/UMG.EWidgetGeometryMode
	enum EWidgetGeometryMode
	{
		EWidgetGeometryMode__Plane = 0,
		EWidgetGeometryMode__Cylinder = 1,
	};


	// Enum /Script/UMG.EWindowVisibility
	enum EWindowVisibility
	{
		EWindowVisibility__Visible = 0,
		EWindowVisibility__SelfHitTestInvisible = 1,
	};


	// Enum /Script/UMG.ETickMode
	enum ETickMode
	{
		ETickMode__Disabled = 0,
		ETickMode__Enabled = 1,
		ETickMode__Automatic = 2,
	};


	// Enum /Script/UMG.EWidgetInteractionSource
	enum EWidgetInteractionSource
	{
		EWidgetInteractionSource__World = 0,
		EWidgetInteractionSource__Mouse = 1,
		EWidgetInteractionSource__CenterScreen = 2,
		EWidgetInteractionSource__Custom = 3,
	};


	// Enum /Script/UMG.EDragPivot
	enum EDragPivot
	{
		EDragPivot__MouseDown = 0,
		EDragPivot__TopLeft = 1,
		EDragPivot__TopCenter = 2,
		EDragPivot__TopRight = 3,
		EDragPivot__CenterLeft = 4,
		EDragPivot__CenterCenter = 5,
		EDragPivot__CenterRight = 6,
		EDragPivot__BottomLeft = 7,
		EDragPivot__BottomCenter = 8,
		EDragPivot__BottomRight = 9,
	};


	// Enum /Script/UMG.EWidgetTickFrequency
	enum EWidgetTickFrequency
	{
		EWidgetTickFrequency__Never = 0,
		EWidgetTickFrequency__Auto = 1,
	};


	// Enum /Script/UMG.EWidgetAnimationEvent
	enum EWidgetAnimationEvent
	{
		EWidgetAnimationEvent__Started = 0,
		EWidgetAnimationEvent__Finished = 1,
	};


	// Enum /Script/UMG.EUMGSequencePlayMode
	enum EUMGSequencePlayMode
	{
		EUMGSequencePlayMode__Forward = 0,
		EUMGSequencePlayMode__Reverse = 1,
		EUMGSequencePlayMode__PingPong = 2,
	};


	// Enum /Script/UMG.EBindingKind
	enum EBindingKind
	{
		EBindingKind__Function = 0,
		EBindingKind__Property = 1,
	};

}
