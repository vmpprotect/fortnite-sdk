#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonInput
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/CommonInput.ECommonInputType
	enum ECommonInputType
	{
		ECommonInputType__MouseAndKeyboard = 0,
		ECommonInputType__Gamepad = 1,
		ECommonInputType__Touch = 2,
		ECommonInputType__Count = 3,
	};


	// Enum /Script/CommonInput.ECommonInputMode
	enum ECommonInputMode
	{
		ECommonInputMode__Menu = 0,
		ECommonInputMode__Game = 1,
		ECommonInputMode__All = 2,
	};


	// Enum /Script/CommonInput.ECommonInputEventFlowBehavior
	enum ECommonInputEventFlowBehavior
	{
		ECommonInputEventFlowBehavior__BlockIfActive = 0,
		ECommonInputEventFlowBehavior__BlockIfHandled = 1,
		ECommonInputEventFlowBehavior__NeverBlock = 2,
	};

}
