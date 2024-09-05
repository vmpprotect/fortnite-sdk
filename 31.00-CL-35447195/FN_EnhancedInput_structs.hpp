#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EnhancedInput
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EnhancedInput.InputActionValue
	// Size: 0x20 (0x20 - 0x0)
	struct FInputActionValue	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct EnhancedInput.InjectedInput
	// Size: 0x40 (0x40 - 0x0)
	struct FInjectedInput	
	{
	public:
		unsigned char UnknownData01_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		TArray Triggers; // 0x20(0x10)
		TArray Modifiers; // 0x30(0x10)
	};


	// Struct EnhancedInput.PlayerMappableKeyProfileCreationArgs
	// Size: 0x28 (0x28 - 0x0)
	struct FPlayerMappableKeyProfileCreationArgs	
	{
	public:
		UClass ProfileType; // 0x0(0x8)
		FGameplayTag ProfileIdentifier; // 0x8(0x4)
		FPlatformUserId UserId; // 0xC(0x4)
		FText DisplayName; // 0x10(0x10)
		bool bSetAsCurrentProfile : 1; // 0x20:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct EnhancedInput.PlayerKeyMapping
	// Size: 0x78 (0x78 - 0x0)
	struct FPlayerKeyMapping	
	{
	public:
		FName MappingName; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x8(0x10)
		FText DisplayCategory; // 0x18(0x10)
		EPlayerMappableKeySlot Slot; // 0x28(0x1)
		bool bIsDirty : 1; // 0x29:0(0x1)
		unsigned char UnknownData03_5[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		FKey DefaultKey; // 0x30(0x18)
		FKey CurrentKey; // 0x48(0x18)
		FHardwareDeviceIdentifier HardwareDeviceId; // 0x60(0x10)
		UInputAction AssociatedInputAction; // 0x70(0x8)
	};


	// Struct EnhancedInput.MapPlayerKeyArgs
	// Size: 0x30 (0x30 - 0x0)
	struct FMapPlayerKeyArgs	
	{
	public:
		FName MappingName; // 0x0(0x4)
		EPlayerMappableKeySlot Slot; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FKey NewKey; // 0x8(0x18)
		FName HardwareDeviceId; // 0x20(0x4)
		FGameplayTag ProfileId; // 0x24(0x4)
		bool bCreateMatchingSlotIfNeeded : 1; // 0x28:0(0x1)
		bool bDeferOnSettingsChangedBroadcast : 1; // 0x28:1(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct EnhancedInput.InputActionInstance
	// Size: 0x60 (0x60 - 0x0)
	struct FInputActionInstance	
	{
	public:
		UInputAction SourceAction; // 0x0(0x8)
		unsigned char UnknownData02_6[0xB]; // 0x8(0xB) UNKNOWN PROPERTY
		ETriggerEvent TriggerEvent; // 0x13(0x1)
		float LastTriggeredWorldTime; // 0x14(0x4)
		TArray Triggers; // 0x18(0x10)
		TArray Modifiers; // 0x28(0x10)
		unsigned char UnknownData03_6[0x20]; // 0x38(0x20) UNKNOWN PROPERTY
		float ElapsedProcessedTime; // 0x58(0x4)
		float ElapsedTriggeredTime; // 0x5C(0x4)
	};


	// Struct EnhancedInput.KeyMappingRow
	// Size: 0x50 (0x50 - 0x0)
	struct FKeyMappingRow	
	{
	public:
		TSet Mappings; // 0x0(0x50)
	};


	// Struct EnhancedInput.PlayerMappableKeyQueryOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FPlayerMappableKeyQueryOptions	
	{
	public:
		FName MappingName; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FKey KeyToMatch; // 0x8(0x18)
		EPlayerMappableKeySlot SlotToMatch; // 0x20(0x1)
		bool bMatchBasicKeyTypes : 1; // 0x21:0(0x1)
		bool bMatchKeyAxisType : 1; // 0x21:1(0x1)
		EHardwareDevicePrimaryType RequiredDeviceType; // 0x22(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x23(0x1) UNKNOWN PROPERTY
		int32_t RequiredDeviceFlags; // 0x24(0x4)
	};


	// Struct EnhancedInput.MappingQueryIssue
	// Size: 0x18 (0x18 - 0x0)
	struct FMappingQueryIssue	
	{
	public:
		EMappingQueryIssue Issue; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UInputMappingContext BlockingContext; // 0x8(0x8)
		UInputAction BlockingAction; // 0x10(0x8)
	};


	// Struct EnhancedInput.PlayerMappableKeySlot
	// Size: 0x4 (0x4 - 0x0)
	struct FPlayerMappableKeySlot	
	{
	public:
		int32_t SlotNumber; // 0x0(0x4)
	};


	// Struct EnhancedInput.PlayerMappableKeyOptions
	// Size: 0x30 (0x30 - 0x0)
	struct FPlayerMappableKeyOptions	
	{
	public:
		UObject MetaData; // 0x0(0x8)
		FName Name; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText DisplayName; // 0x10(0x10)
		FText DisplayCategory; // 0x20(0x10)
	};


	// Struct EnhancedInput.EnhancedActionKeyMapping
	// Size: 0x50 (0x50 - 0x0)
	struct FEnhancedActionKeyMapping	
	{
	public:
		TArray Triggers; // 0x0(0x10)
		TArray Modifiers; // 0x10(0x10)
		UInputAction Action; // 0x20(0x8)
		FKey Key; // 0x28(0x18)
		bool bShouldBeIgnored : 1; // 0x40:0(0x1)
		bool bHasAlwaysTickTrigger : 1; // 0x40:1(0x1)
		EPlayerMappableKeySettingBehaviors SettingBehavior; // 0x41(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
		UPlayerMappableKeySettings PlayerMappableKeySettings; // 0x48(0x8)
	};


	// Struct EnhancedInput.BlueprintEnhancedInputActionBinding
	// Size: 0x10 (0x10 - 0x0)
	struct FBlueprintEnhancedInputActionBinding	
	{
	public:
		UInputAction InputAction; // 0x0(0x8)
		ETriggerEvent TriggerEvent; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FName FunctionNameToBind; // 0xC(0x4)
	};


	// Struct EnhancedInput.DefaultContextSetting
	// Size: 0x28 (0x28 - 0x0)
	struct FDefaultContextSetting	
	{
	public:
		TWeakObjectPtr InputMappingContext; // 0x0(0x20)
		int32_t Priority; // 0x20(0x4)
		bool bAddImmediately; // 0x24(0x1)
		bool bRegisterWithUserSettings; // 0x25(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
	};


	// Struct EnhancedInput.ModifyContextOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FModifyContextOptions	
	{
	public:
		bool bIgnoreAllPressedKeysUntilRelease : 1; // 0x0:0(0x1)
		bool bForceImmediately : 1; // 0x0:1(0x1)
		bool bNotifyUserSettings : 1; // 0x0:2(0x1)
	};


	// Struct EnhancedInput.KeyConsumptionOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FKeyConsumptionOptions	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct EnhancedInput.InjectedInputArray
	// Size: 0x10 (0x10 - 0x0)
	struct FInjectedInputArray	
	{
	public:
		TArray Injected; // 0x0(0x10)
	};


	// Struct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
	// Size: 0x30 (0x30 - 0x0)
	struct FBlueprintInputDebugKeyDelegateBinding	
	{
	public:
		FInputChord InputChord; // 0x0(0x20)
		TEnumAsByte InputKeyEvent; // 0x20(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FName FunctionNameToBind; // 0x24(0x4)
		bool bExecuteWhenPaused; // 0x28(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct EnhancedInput.InputComboStepData
	// Size: 0x10 (0x10 - 0x0)
	struct FInputComboStepData	
	{
	public:
		UInputAction ComboStepAction; // 0x0(0x8)
		char ComboStepCompletionStates; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float TimeToPressKey; // 0xC(0x4)
	};


	// Struct EnhancedInput.InputCancelAction
	// Size: 0x10 (0x10 - 0x0)
	struct FInputCancelAction	
	{
	public:
		UInputAction CancelAction; // 0x0(0x8)
		char CancellationStates; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};

}
