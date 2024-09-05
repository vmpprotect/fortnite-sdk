#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ModelViewViewModel
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/ModelViewViewModel.EMVVMExecutionMode
	enum EMVVMExecutionMode
	{
		EMVVMExecutionMode__Immediate = 0,
		EMVVMExecutionMode__Delayed = 1,
		EMVVMExecutionMode__Tick = 2,
		EMVVMExecutionMode__DelayedWhenSharedElseImmediate = 3,
	};


	// Enum /Script/ModelViewViewModel.EMVVMBindingMode
	enum EMVVMBindingMode
	{
		EMVVMBindingMode__OneTimeToDestination = 0,
		EMVVMBindingMode__OneWayToDestination = 1,
		EMVVMBindingMode__TwoWay = 2,
		EMVVMBindingMode__OneTimeToSource = 3,
		EMVVMBindingMode__OneWayToSource = 4,
	};

}
