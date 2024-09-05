#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineFrameworkSavedWorld
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class OnlineFrameworkSavedWorld.SavedWorldGameInstanceSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class USavedWorldGameInstanceSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineFrameworkSavedWorld.SavedWorldGameInstanceSubsystem");
			return ret;
		}
	};


	// Class OnlineFrameworkSavedWorld.SavedWorldWorldSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class USavedWorldWorldSubsystem : public UWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineFrameworkSavedWorld.SavedWorldWorldSubsystem");
			return ret;
		}
	};

}
