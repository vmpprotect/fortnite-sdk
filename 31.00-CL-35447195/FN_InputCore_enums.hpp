#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InputCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/InputCore.ETouchIndex
	enum ETouchIndex
	{
		ETouchIndex__Touch1 = 0,
		ETouchIndex__Touch2 = 1,
		ETouchIndex__Touch3 = 2,
		ETouchIndex__Touch4 = 3,
		ETouchIndex__Touch5 = 4,
		ETouchIndex__Touch6 = 5,
		ETouchIndex__Touch7 = 6,
		ETouchIndex__Touch8 = 7,
		ETouchIndex__Touch9 = 8,
		ETouchIndex__Touch10 = 9,
		ETouchIndex__CursorPointerIndex = A,
		ETouchIndex__MAX_TOUCHES = B,
	};


	// Enum /Script/InputCore.EControllerHand
	enum EControllerHand
	{
		EControllerHand__Left = 0,
		EControllerHand__Right = 1,
		EControllerHand__AnyHand = 2,
		EControllerHand__Pad = 3,
		EControllerHand__ExternalCamera = 4,
		EControllerHand__Gun = 5,
		EControllerHand__HMD = 6,
		EControllerHand__Chest = 7,
		EControllerHand__LeftShoulder = 8,
		EControllerHand__RightShoulder = 9,
		EControllerHand__LeftElbow = A,
		EControllerHand__RightElbow = B,
		EControllerHand__Waist = C,
		EControllerHand__LeftKnee = D,
		EControllerHand__RightKnee = E,
		EControllerHand__LeftFoot = F,
		EControllerHand__RightFoot = 10,
		EControllerHand__Special = 11,
		EControllerHand__ControllerHand_Count = 12,
	};


	// Enum /Script/InputCore.EConsoleForGamepadLabels
	enum EConsoleForGamepadLabels
	{
		EConsoleForGamepadLabels__None = 0,
		EConsoleForGamepadLabels__XBoxOne = 1,
		EConsoleForGamepadLabels__PS4 = 2,
	};


	// Enum /Script/InputCore.ETouchType
	enum ETouchType
	{
		ETouchType__Began = 0,
		ETouchType__Moved = 1,
		ETouchType__Stationary = 2,
		ETouchType__ForceChanged = 3,
		ETouchType__FirstMove = 4,
		ETouchType__Ended = 5,
		ETouchType__NumTypes = 6,
	};

}
