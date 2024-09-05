#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CommonUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CommonUI.CommonNumberFormattingOptions
	// Size: 0x14 (0x14 - 0x0)
	struct FCommonNumberFormattingOptions	
	{
	public:
		TEnumAsByte RoundingMode; // 0x0(0x1)
		bool UseGrouping; // 0x1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		int32_t MinimumIntegralDigits; // 0x4(0x4)
		int32_t MaximumIntegralDigits; // 0x8(0x4)
		int32_t MinimumFractionalDigits; // 0xC(0x4)
		int32_t MaximumFractionalDigits; // 0x10(0x4)
	};


	// Struct CommonUI.CommonRegisteredTabInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FCommonRegisteredTabInfo	
	{
	public:
		int32_t TabIndex; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UCommonButtonBase TabButton; // 0x8(0x8)
		UWidget ContentInstance; // 0x10(0x8)
	};


	// Struct CommonUI.UIInputConfig
	// Size: 0x6 (0x6 - 0x0)
	struct FUIInputConfig	
	{
	public:
		bool bIgnoreMoveInput; // 0x0(0x1)
		bool bIgnoreLookInput; // 0x1(0x1)
		ECommonInputMode InputMode; // 0x2(0x1)
		EMouseCaptureMode MouseCaptureMode; // 0x3(0x1)
		EMouseLockMode MouseLockMode; // 0x4(0x1)
		bool bHideCursorDuringViewportCapture; // 0x5(0x1)
	};


	// Struct CommonUI.CommonInputActionHandlerData
	// Size: 0x20 (0x20 - 0x0)
	struct FCommonInputActionHandlerData	
	{
	public:
		FDataTableRowHandle InputActionRow; // 0x0(0x10)
		EInputActionState State; // 0x10(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x11(0xF) UNKNOWN PROPERTY
	};


	// Struct CommonUI.UIActionBindingHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FUIActionBindingHandle	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct CommonUI.UITag
	// Inherited from FGameplayTag
	// Size: 0x0 (0x4 - 0x4)
	struct FUITag : public FGameplayTag	
	{
	public:
	};


	// Struct CommonUI.UIActionTag
	// Inherited from FUITag -> FGameplayTag
	// Size: 0x0 (0x4 - 0x4)
	struct FUIActionTag : public FUITag	
	{
	public:
	};


	// Struct CommonUI.CommonButtonStyleOptionalSlateSound
	// Size: 0x20 (0x20 - 0x0)
	struct FCommonButtonStyleOptionalSlateSound	
	{
	public:
		bool bHasSound; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FSlateSound Sound; // 0x8(0x18)
	};


	// Struct CommonUI.RichTextIconData
	// Inherited from FTableRowBase
	// Size: 0x40 (0x48 - 0x8)
	struct FRichTextIconData : public FTableRowBase	
	{
	public:
		FText DisplayName; // 0x8(0x10)
		TWeakObjectPtr ResourceObject; // 0x18(0x20)
		FVector2D ImageSize; // 0x38(0x10)
	};


	// Struct CommonUI.CommonInputTypeInfo
	// Size: 0xE0 (0xE0 - 0x0)
	struct FCommonInputTypeInfo	
	{
	public:
		FKey Key; // 0x0(0x18)
		EInputActionState OverrrideState; // 0x18(0x1)
		bool bActionRequiresHold; // 0x19(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		float HoldTime; // 0x1C(0x4)
		float HoldRollbackTime; // 0x20(0x4)
		unsigned char UnknownData03_6[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
		FSlateBrush OverrideBrush; // 0x30(0xB0)
	};


	// Struct CommonUI.CommonInputActionDataBase
	// Inherited from FTableRowBase
	// Size: 0x318 (0x320 - 0x8)
	struct FCommonInputActionDataBase : public FTableRowBase	
	{
	public:
		FText DisplayName; // 0x8(0x10)
		FText HoldDisplayName; // 0x18(0x10)
		int32_t NavBarPriority; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FCommonInputTypeInfo KeyboardInputTypeInfo; // 0x30(0xE0)
		FCommonInputTypeInfo DefaultGamepadInputTypeInfo; // 0x110(0xE0)
		TMap GamepadInputOverrides; // 0x1F0(0x50)
		FCommonInputTypeInfo TouchInputTypeInfo; // 0x240(0xE0)
	};


	// Struct CommonUI.UIActionKeyMapping
	// Size: 0x20 (0x20 - 0x0)
	struct FUIActionKeyMapping	
	{
	public:
		FKey Key; // 0x0(0x18)
		float HoldTime; // 0x18(0x4)
		float HoldRollbackTime; // 0x1C(0x4)
	};


	// Struct CommonUI.UIInputAction
	// Size: 0x28 (0x28 - 0x0)
	struct FUIInputAction	
	{
	public:
		FUIActionTag ActionTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText DefaultDisplayName; // 0x8(0x10)
		TArray KeyMappings; // 0x18(0x10)
	};


	// Struct CommonUI.CommonAnalogCursorSettings
	// Size: 0x2C (0x2C - 0x0)
	struct FCommonAnalogCursorSettings	
	{
	public:
		int32_t PreprocessorPriority; // 0x0(0x4)
		FInputPreprocessorRegistrationKey PreprocessorRegistrationInfo; // 0x4(0x8)
		bool bEnableCursorAcceleration; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float CursorAcceleration; // 0x10(0x4)
		float CursorMaxSpeed; // 0x14(0x4)
		float CursorDeadZone; // 0x18(0x4)
		float HoverSlowdownFactor; // 0x1C(0x4)
		float ScrollDeadZone; // 0x20(0x4)
		float ScrollUpdatePeriod; // 0x24(0x4)
		float ScrollMultiplier; // 0x28(0x4)
	};

}
