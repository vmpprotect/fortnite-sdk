#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoPlayspaceMigration
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoPlayspaceMigration.JunoPlayspaceMigrationComponent
	// Inherited from UJunoBasePlayspaceMigrationComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UJunoPlayspaceMigrationComponent : public UJunoBasePlayspaceMigrationComponent	
	{
	public:
		unsigned char UnknownData00_1[0x98]; // 0xA0(0x98) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoPlayspaceMigration.JunoPlayspaceMigrationComponent");
			return ret;
		}
	};


	// Class JunoPlayspaceMigration.JunoPlayspaceMigrationWorldSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x100 (0x140 - 0x40)
	class UJunoPlayspaceMigrationWorldSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x100]; // 0x40(0x100) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoPlayspaceMigration.JunoPlayspaceMigrationWorldSubsystem");
			return ret;
		}
	};

}
