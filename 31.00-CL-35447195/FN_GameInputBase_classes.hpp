#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameInputBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameInputBase.GameInputPlatformSettings
	// Inherited from UPlatformSettings -> UObject
	// Size: 0x20 (0x60 - 0x40)
	class UGameInputPlatformSettings : public UPlatformSettings	
	{
	public:
		bool bProcessController; // 0x40(0x1)
		bool bProcessRawInput; // 0x41(0x1)
		bool bSpecialDevicesRequireExplicitDeviceConfiguration; // 0x42(0x1)
		bool bProcessGamepad; // 0x43(0x1)
		bool bProcessKeyboard; // 0x44(0x1)
		bool bProcessMouse; // 0x45(0x1)
		bool bProcessRacingWheel; // 0x46(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x47(0x1) UNKNOWN PROPERTY
		float RacingWheelDeadzone; // 0x48(0x4)
		bool bProcessArcadeStick; // 0x4C(0x1)
		bool bProcessFlightStick; // 0x4D(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY
		float FlightStickPitchDeadzone; // 0x50(0x4)
		float FlightStickRollDeadzone; // 0x54(0x4)
		float FlightStickThrottleDeadzone; // 0x58(0x4)
		float FlightStickYawDeadzone; // 0x5C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameInputBase.GameInputPlatformSettings");
			return ret;
		}
	};


	// Class GameInputBase.GameInputDeveloperSettings
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGameInputDeveloperSettings : public UObject	
	{
	public:
		TArray DeviceConfigurations; // 0x28(0x10)
		FPerPlatformSettings PlatformSpecificSettings; // 0x38(0x10)
		bool bDoNotProcessDuplicateCapabilitiesForSingleUser; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameInputBase.GameInputDeveloperSettings");
			return ret;
		}
	};

}
