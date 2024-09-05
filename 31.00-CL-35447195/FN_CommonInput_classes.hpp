#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CommonInput
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CommonInput.CommonInputActionDomain
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UCommonInputActionDomain : public UDataAsset	
	{
	public:
		ECommonInputEventFlowBehavior Behavior; // 0x30(0x4)
		ECommonInputEventFlowBehavior InnerBehavior; // 0x34(0x4)
		bool bUseActionDomainDesiredInputConfig; // 0x38(0x1)
		ECommonInputMode InputMode; // 0x39(0x1)
		EMouseCaptureMode MouseCaptureMode; // 0x3A(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x3B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonInput.CommonInputActionDomain");
			return ret;
		}
	};


	// Class CommonInput.CommonInputActionDomainTable
	// Inherited from UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UCommonInputActionDomainTable : public UDataAsset	
	{
	public:
		TArray ActionDomains; // 0x30(0x10)
		ECommonInputMode InputMode; // 0x40(0x1)
		EMouseCaptureMode MouseCaptureMode; // 0x41(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x42(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonInput.CommonInputActionDomainTable");
			return ret;
		}
	};


	// Class CommonInput.CommonUIInputData
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UCommonUIInputData : public UObject	
	{
	public:
		FDataTableRowHandle DefaultClickAction; // 0x28(0x10)
		FDataTableRowHandle DefaultBackAction; // 0x38(0x10)
		TWeakObjectPtr DefaultHoldData; // 0x48(0x20)
		UInputAction EnhancedInputClickAction; // 0x68(0x8)
		UInputAction EnhancedInputBackAction; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonInput.CommonUIInputData");
			return ret;
		}
	};


	// Class CommonInput.CommonUIHoldData
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UCommonUIHoldData : public UObject	
	{
	public:
		FInputHoldData KeyboardAndMouse; // 0x28(0x8)
		FInputHoldData Gamepad; // 0x30(0x8)
		FInputHoldData Touch; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonInput.CommonUIHoldData");
			return ret;
		}
	};


	// Class CommonInput.CommonInputBaseControllerData
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UCommonInputBaseControllerData : public UObject	
	{
	public:
		ECommonInputType InputType; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FName GamepadName; // 0x2C(0x4)
		FText GamepadDisplayName; // 0x30(0x10)
		FText GamepadCategory; // 0x40(0x10)
		FText GamepadPlatformName; // 0x50(0x10)
		TArray GamepadHardwareIdMapping; // 0x60(0x10)
		TWeakObjectPtr ControllerTexture; // 0x70(0x20)
		TWeakObjectPtr ControllerButtonMaskTexture; // 0x90(0x20)
		TArray InputBrushDataMap; // 0xB0(0x10)
		TArray InputBrushKeySets; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonInput.CommonInputBaseControllerData");
			return ret;
		}

		TArray GetRegisteredGamepads(); // Flags: Final|Native|Static|Public 0x7FF4145B4498
	};


	// Class CommonInput.CommonInputPlatformSettings
	// Inherited from UPlatformSettings -> UObject
	// Size: 0x30 (0x70 - 0x40)
	class UCommonInputPlatformSettings : public UPlatformSettings	
	{
	public:
		ECommonInputType DefaultInputType; // 0x40(0x1)
		bool bSupportsMouseAndKeyboard; // 0x41(0x1)
		bool bSupportsTouch; // 0x42(0x1)
		bool bSupportsGamepad; // 0x43(0x1)
		FName DefaultGamepadName; // 0x44(0x4)
		bool bCanChangeGamepadType; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		TArray ControllerData; // 0x50(0x10)
		TArray ControllerDataClasses; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonInput.CommonInputPlatformSettings");
			return ret;
		}
	};


	// Class CommonInput.CommonInputSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UCommonInputSettings : public UDeveloperSettings	
	{
	public:
		TWeakObjectPtr InputData; // 0x30(0x20)
		FPerPlatformSettings PlatformInput; // 0x50(0x10)
		TMap CommonInputPlatformData; // 0x60(0x50)
		bool bEnableInputMethodThrashingProtection; // 0xB0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xB1(0x3) UNKNOWN PROPERTY
		int32_t InputMethodThrashingLimit; // 0xB4(0x4)
		double InputMethodThrashingWindowInSeconds; // 0xB8(0x8)
		double InputMethodThrashingCooldownInSeconds; // 0xC0(0x8)
		bool bAllowOutOfFocusDeviceInput; // 0xC8(0x1)
		bool bEnableDefaultInputConfig; // 0xC9(0x1)
		bool bEnableEnhancedInputSupport; // 0xCA(0x1)
		bool bEnableAutomaticGamepadTypeDetection; // 0xCB(0x1)
		unsigned char UnknownData04_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr ActionDomainTable; // 0xD0(0x20)
		unsigned char UnknownData05_6[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		UClass InputDataClass; // 0xF8(0x8)
		UCommonInputActionDomainTable ActionDomainTablePtr; // 0x100(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonInput.CommonInputSettings");
			return ret;
		}

		bool IsEnhancedInputSupportEnabled(); // Flags: Final|Native|Static|Public 0x7FF4145B4578
	};


	// Class CommonInput.CommonInputSubsystem
	// Inherited from ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UCommonInputSubsystem : public ULocalPlayerSubsystem	
	{
	public:
		unsigned char UnknownData05_3[0x38]; // 0x30(0x38) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnInputMethodChanged; // 0x68(0x10)
		int32_t NumberOfInputMethodChangesRecently; // 0x78(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		double LastInputMethodChangeTime; // 0x80(0x8)
		double LastTimeInputMethodThrashingBegan; // 0x88(0x8)
		ECommonInputType LastInputType; // 0x90(0x1)
		ECommonInputType CurrentInputType; // 0x91(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x92(0x2) UNKNOWN PROPERTY
		FName GamepadInputType; // 0x94(0x4)
		TMap CurrentInputLocks; // 0x98(0x50)
		unsigned char UnknownData08_6[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
		UCommonInputActionDomainTable ActionDomainTable; // 0xF0(0x8)
		bool bIsGamepadSimulatedClick; // 0xF8(0x1)
		unsigned char UnknownData09_7[0xF]; // 0xF9(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonInput.CommonInputSubsystem");
			return ret;
		}

		bool ShouldShowInputKeys(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B4D58
		void SetGamepadInputType(FName InGamepadInputType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B4C78
		void SetCurrentInputType(ECommonInputType NewInputType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B4B98
		bool IsUsingPointerInput(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B4AB8
		bool IsInputMethodActive(ECommonInputType InputMethod); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B49D8
		ECommonInputType GetDefaultInputType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B48F8
		ECommonInputType GetCurrentInputType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B4818
		FName GetCurrentGamepadName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B4738
		void BroadcastInputMethodChanged(); // Flags: Final|Native|Protected 0x7FF4145B4658
	};

}
