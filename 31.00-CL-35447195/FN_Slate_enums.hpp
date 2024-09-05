#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Slate
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Slate.EVirtualKeyboardTrigger
	enum EVirtualKeyboardTrigger
	{
		EVirtualKeyboardTrigger__OnFocusByPointer = 0,
		EVirtualKeyboardTrigger__OnAllFocusEvents = 1,
	};


	// Enum /Script/Slate.EVirtualKeyboardDismissAction
	enum EVirtualKeyboardDismissAction
	{
		EVirtualKeyboardDismissAction__TextChangeOnDismiss = 0,
		EVirtualKeyboardDismissAction__TextCommitOnAccept = 1,
		EVirtualKeyboardDismissAction__TextCommitOnDismiss = 2,
	};


	// Enum /Script/Slate.ESelectionMode
	enum ESelectionMode
	{
		ESelectionMode__None = 0,
		ESelectionMode__Single = 1,
		ESelectionMode__SingleToggle = 2,
		ESelectionMode__Multi = 3,
	};


	// Enum /Script/Slate.ETableViewMode
	enum ETableViewMode
	{
		ETableViewMode__List = 0,
		ETableViewMode__Tile = 1,
		ETableViewMode__Tree = 2,
	};


	// Enum /Script/Slate.EMultiBoxType
	enum EMultiBoxType
	{
		EMultiBoxType__MenuBar = 0,
		EMultiBoxType__ToolBar = 1,
		EMultiBoxType__VerticalToolBar = 2,
		EMultiBoxType__SlimHorizontalToolBar = 3,
		EMultiBoxType__UniformToolBar = 4,
		EMultiBoxType__Menu = 5,
		EMultiBoxType__ButtonRow = 6,
		EMultiBoxType__SlimHorizontalUniformToolBar = 7,
	};


	// Enum /Script/Slate.EMultiBlockType
	enum EMultiBlockType
	{
		EMultiBlockType__None = 0,
		EMultiBlockType__ButtonRow = 1,
		EMultiBlockType__EditableText = 2,
		EMultiBlockType__Heading = 3,
		EMultiBlockType__MenuEntry = 4,
		EMultiBlockType__Separator = 5,
		EMultiBlockType__ToolBarButton = 6,
		EMultiBlockType__ToolBarComboButton = 7,
		EMultiBlockType__Widget = 8,
	};


	// Enum /Script/Slate.EInputPreProcessorType
	enum EInputPreProcessorType
	{
		EInputPreProcessorType__Overlay = 0,
		EInputPreProcessorType__PreEngine = 1,
		EInputPreProcessorType__Engine = 2,
		EInputPreProcessorType__PreEditor = 3,
		EInputPreProcessorType__Editor = 4,
		EInputPreProcessorType__PreGame = 5,
		EInputPreProcessorType__Game = 6,
		EInputPreProcessorType__Count = 7,
	};


	// Enum /Script/Slate.EDescendantScrollDestination
	enum EDescendantScrollDestination
	{
		EDescendantScrollDestination__IntoView = 0,
		EDescendantScrollDestination__TopOrLeft = 1,
		EDescendantScrollDestination__Center = 2,
		EDescendantScrollDestination__BottomOrRight = 3,
	};


	// Enum /Script/Slate.EScrollWhenFocusChanges
	enum EScrollWhenFocusChanges
	{
		EScrollWhenFocusChanges__NoScroll = 0,
		EScrollWhenFocusChanges__InstantScroll = 1,
		EScrollWhenFocusChanges__AnimatedScroll = 2,
	};


	// Enum /Script/Slate.ECustomizedToolMenuVisibility
	enum ECustomizedToolMenuVisibility
	{
		ECustomizedToolMenuVisibility__None = 0,
		ECustomizedToolMenuVisibility__Visible = 1,
		ECustomizedToolMenuVisibility__Hidden = 2,
	};


	// Enum /Script/Slate.EUserInterfaceActionType
	enum EUserInterfaceActionType
	{
		EUserInterfaceActionType__None = 0,
		EUserInterfaceActionType__Button = 1,
		EUserInterfaceActionType__ToggleButton = 2,
		EUserInterfaceActionType__RadioButton = 3,
		EUserInterfaceActionType__Check = 4,
		EUserInterfaceActionType__CollapsedButton = 5,
	};


	// Enum /Script/Slate.EMultipleKeyBindingIndex
	enum EMultipleKeyBindingIndex
	{
		EMultipleKeyBindingIndex__Primary = 0,
		EMultipleKeyBindingIndex__Secondary = 1,
		EMultipleKeyBindingIndex__NumChords = 2,
	};


	// Enum /Script/Slate.ETextJustify
	enum ETextJustify
	{
		ETextJustify__Left = 0,
		ETextJustify__Center = 1,
		ETextJustify__Right = 2,
		ETextJustify__InvariantLeft = 3,
		ETextJustify__InvariantRight = 4,
	};


	// Enum /Script/Slate.ETextWrappingPolicy
	enum ETextWrappingPolicy
	{
		ETextWrappingPolicy__DefaultWrapping = 0,
		ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
	};


	// Enum /Script/Slate.ETextFlowDirection
	enum ETextFlowDirection
	{
		ETextFlowDirection__Auto = 0,
		ETextFlowDirection__LeftToRight = 1,
		ETextFlowDirection__RightToLeft = 2,
		ETextFlowDirection__Culture = 3,
	};


	// Enum /Script/Slate.EStretchDirection
	enum EStretchDirection
	{
		EStretchDirection__Both = 0,
		EStretchDirection__DownOnly = 1,
		EStretchDirection__UpOnly = 2,
	};


	// Enum /Script/Slate.EStretch
	enum EStretch
	{
		EStretch__None = 0,
		EStretch__Fill = 1,
		EStretch__ScaleToFit = 2,
		EStretch__ScaleToFitX = 3,
		EStretch__ScaleToFitY = 4,
		EStretch__ScaleToFill = 5,
		EStretch__ScaleBySafeZone = 6,
		EStretch__UserSpecified = 7,
		EStretch__UserSpecifiedWithClipping = 8,
	};


	// Enum /Script/Slate.EProgressBarFillType
	enum EProgressBarFillType
	{
		EProgressBarFillType__LeftToRight = 0,
		EProgressBarFillType__RightToLeft = 1,
		EProgressBarFillType__FillFromCenter = 2,
		EProgressBarFillType__FillFromCenterHorizontal = 3,
		EProgressBarFillType__FillFromCenterVertical = 4,
		EProgressBarFillType__TopToBottom = 5,
		EProgressBarFillType__BottomToTop = 6,
	};


	// Enum /Script/Slate.EProgressBarFillStyle
	enum EProgressBarFillStyle
	{
		EProgressBarFillStyle__Mask = 0,
		EProgressBarFillStyle__Scale = 1,
	};


	// Enum /Script/Slate.EListItemAlignment
	enum EListItemAlignment
	{
		EListItemAlignment__EvenlyDistributed = 0,
		EListItemAlignment__EvenlySize = 1,
		EListItemAlignment__EvenlyWide = 2,
		EListItemAlignment__LeftAligned = 3,
		EListItemAlignment__RightAligned = 4,
		EListItemAlignment__CenterAligned = 5,
		EListItemAlignment__Fill = 6,
	};


	// Enum /Script/Slate.EScrollIntoViewAlignment
	enum EScrollIntoViewAlignment
	{
		EScrollIntoViewAlignment__IntoView = 0,
		EScrollIntoViewAlignment__TopOrLeft = 1,
		EScrollIntoViewAlignment__CenterAligned = 2,
		EScrollIntoViewAlignment__BottomOrRight = 3,
	};

}
