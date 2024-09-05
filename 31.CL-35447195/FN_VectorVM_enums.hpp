#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VectorVM
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/VectorVM.EVectorVMBaseTypes
	enum EVectorVMBaseTypes
	{
		EVectorVMBaseTypes__Float = 0,
		EVectorVMBaseTypes__Int = 1,
		EVectorVMBaseTypes__Bool = 2,
		EVectorVMBaseTypes__Num = 3,
	};


	// Enum /Script/VectorVM.EVectorVMOperandLocation
	enum EVectorVMOperandLocation
	{
		EVectorVMOperandLocation__Register = 0,
		EVectorVMOperandLocation__Constant = 1,
		EVectorVMOperandLocation__Num = 2,
	};

}
