#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineFrameworkSavedWorld
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class OnlineFrameworkSavedWorld.SavedWorldGameInstanceSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class USavedWorldGameInstanceSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

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
