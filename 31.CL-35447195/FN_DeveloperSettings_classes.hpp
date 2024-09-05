#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DeveloperSettings
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DeveloperSettings.DeveloperSettings
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UDeveloperSettings : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeveloperSettings.DeveloperSettings");
			return ret;
		}
	};


	// Class DeveloperSettings.DeveloperSettingsBackedByCVars
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UDeveloperSettingsBackedByCVars : public UDeveloperSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeveloperSettings.DeveloperSettingsBackedByCVars");
			return ret;
		}
	};


	// Class DeveloperSettings.PlatformSettings
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UPlatformSettings : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeveloperSettings.PlatformSettings");
			return ret;
		}
	};


	// Class DeveloperSettings.PlatformSettingsManager
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UPlatformSettingsManager : public UObject	
	{
	public:
		TMap SettingsMap; // 0x28(0x50)
		unsigned char UnknownData01_7[0x8]; // 0x78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeveloperSettings.PlatformSettingsManager");
			return ret;
		}
	};

}
