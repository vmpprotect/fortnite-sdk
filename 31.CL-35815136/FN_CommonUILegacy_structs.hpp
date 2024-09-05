#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonUILegacy
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CommonUILegacy.Operation
	// Size: 0x28 (0x28 - 0x0)
	struct FOperation	
	{
	public:
		EOperation Operation; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UCommonActivatablePanelLegacy* Panel; // 0x8(0x8)
		bool bIntroPanel; // 0x10(0x1)
		bool bActivatePanel; // 0x11(0x1)
		bool bOutroPanelBelow; // 0x12(0x1)
		unsigned char UnknownData01_7[0x15]; // 0x13(0x15) UNKNOWN PROPERTY
	};


	// Struct CommonUILegacy.CommonInputActionData
	// Inherited from FCommonInputActionDataBase -> FTableRowBase
	// Size: 0x590 (0x8B0 - 0x320)
	struct FCommonInputActionData : public FCommonInputActionDataBase	
	{
	public:
		TMap<ECommonGamepadType, FCommonInputTypeInfo> GamepadInputTypeInfoOverrides; // 0x320(0x50)
		FCommonInputTypeInfo GamepadInputTypeInfos; // 0x370(0x540)
	};

}
