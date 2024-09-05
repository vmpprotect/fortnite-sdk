#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WinDualShock
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class WinDualShock.DualShockExternalEndpointSettings
	// Inherited from UAudioEndpointSettingsBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase	
	{
	public:
		int32_t ControllerIndex; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WinDualShock.DualShockExternalEndpointSettings");
			return ret;
		}
	};


	// Class WinDualShock.DualShockSoundfieldEndpointSettings
	// Inherited from USoundfieldEndpointSettingsBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase	
	{
	public:
		int32_t ControllerIndex; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WinDualShock.DualShockSoundfieldEndpointSettings");
			return ret;
		}
	};


	// Class WinDualShock.DualShockSpatializationSettings
	// Inherited from USoundfieldEncodingSettingsBase -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase	
	{
	public:
		float Spread; // 0x28(0x4)
		int32_t Priority; // 0x2C(0x4)
		bool Passthrough; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WinDualShock.DualShockSpatializationSettings");
			return ret;
		}
	};

}
