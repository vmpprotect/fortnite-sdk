#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DelMarUI.DelMarReactiveWidgetAnimation
	// Size: 0x8 (0x8 - 0x0)
	struct FDelMarReactiveWidgetAnimation	
	{
	public:
		FName Intro; // 0x0(0x4)
		FName Outro; // 0x4(0x4)
	};


	// Struct DelMarUI.DelMarPlayerIndicatorData
	// Size: 0x28 (0x28 - 0x0)
	struct FDelMarPlayerIndicatorData	
	{
	public:
		TWeakObjectPtr<AFortPlayerState*> PlayerState; // 0x0(0x8)
		float LateralRatio; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector2D ScreenPosition; // 0x10(0x10)
		float SquareDistance; // 0x20(0x4)
		EDelMarRearAlertVerticalHint VerticalHint; // 0x24(0x1)
		bool bRearIndicator; // 0x25(0x1)
		bool bShow; // 0x26(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x27(0x1) UNKNOWN PROPERTY
	};


	// Struct DelMarUI.DelMarKeyPair
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarKeyPair	
	{
	public:
		FKey KBMKey; // 0x0(0x18)
		FKey GamepadKey; // 0x18(0x18)
	};


	// Struct DelMarUI.DelMarTouchActionButtonStateData
	// Size: 0x170 (0x170 - 0x0)
	struct FDelMarTouchActionButtonStateData	
	{
	public:
		FSlateBrush IconBrush; // 0x0(0xB0)
		FSlateBrush BackgroundBrush; // 0xB0(0xB0)
		ESlateVisibility ButtonVisibility; // 0x160(0x1)
		bool bCancelInputOnEnter; // 0x161(0x1)
		bool bCancelInputOnLeave; // 0x162(0x1)
		unsigned char UnknownData00_7[0xD]; // 0x163(0xD) UNKNOWN PROPERTY
	};


	// Struct DelMarUI.DelMarTouchInputDefinition
	// Size: 0x30 (0x30 - 0x0)
	struct FDelMarTouchInputDefinition	
	{
	public:
		UInputAction* InputAction; // 0x0(0x8)
		TArray<UInputModifier*> Modifiers; // 0x8(0x10)
		TArray<UInputTrigger*> Triggers; // 0x18(0x10)
		bool bUseYAxis; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct DelMarUI.DelMarSectionData
	// Size: 0x18 (0x18 - 0x0)
	struct FDelMarSectionData	
	{
	public:
		int32_t SectionIndex; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double LapDurationAtSection; // 0x8(0x8)
		double DeltaTime; // 0x10(0x8)
	};

}
