#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VkPersistence
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VkPersistence.VkPersistence
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UVkPersistence : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x1A0]; // 0x28(0x1A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VkPersistence.VkPersistenceManager");
			return ret;
		}
	};

}
