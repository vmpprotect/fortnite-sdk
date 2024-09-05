#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VkPersistence
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VkPersistence.VkPersistence
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UVkPersistence : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VkPersistence.VkPersistence");
			return ret;
		}
	};


	// Class VkPersistence.VkPersistenceManager
	// Inherited from UObject
	// Size: 0x1A0 (0x1C8 - 0x28)
	class UVkPersistenceManager : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x1A0]; // 0x28(0x1A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VkPersistence.VkPersistenceManager");
			return ret;
		}
	};

}
