#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineSubsystemMcp
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class OnlineSubsystemMcp.IARCLocaleMappingUtil
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UIARCLocaleMappingUtil : public UObject	
	{
	public:
		TArray LocaleMappings; // 0x28(0x10)
		FString DefaultLocale; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemMcp.IARCLocaleMappingUtil");
			return ret;
		}
	};


	// Class OnlineSubsystemMcp.OnlineISOConversionUtil
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UOnlineISOConversionUtil : public UObject	
	{
	public:
		TArray Languages; // 0x28(0x10)
		TArray Regions; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemMcp.OnlineISOConversionUtil");
			return ret;
		}
	};

}
