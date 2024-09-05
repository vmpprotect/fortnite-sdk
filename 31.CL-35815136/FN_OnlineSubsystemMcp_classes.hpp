#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineSubsystemMcp
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class OnlineSubsystemMcp.IARCLocaleMappingUtil
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UIARCLocaleMappingUtil : public UObject	
	{
	public:
		TArray<FOnlineIARCLocaleMapping> LocaleMappings; // 0x28(0x10)
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
		TArray<FOnlineISOLanguageInfo> Languages; // 0x28(0x10)
		TArray<FOnlineISORegionInfo> Regions; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineSubsystemMcp.OnlineISOConversionUtil");
			return ret;
		}
	};

}
