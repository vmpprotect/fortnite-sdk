#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EntityLevel
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EntityLevel.EntityLevel
	// Inherited from AActor -> UObject
	// Size: 0x28 (0x2B8 - 0x290)
	class AEntityLevel : public AActor	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UObject LevelEntity; // 0x298(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x2A0(0x8) UNKNOWN PROPERTY
		UClass SavedEntityClass; // 0x2A8(0x8)
		UClass SavedEntityComponentClass; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityLevel.EntityLevel");
			return ret;
		}
	};


	// Class EntityLevel.EntitySceneComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x4E0 - 0x4C8)
	class UEntitySceneComponent : public UPrimitiveComponent	
	{
	public:
		AEntityLevel EntityLevel; // 0x4C8(0x8)
		bool bIgnoreAttachmentUponPaste; // 0x4D0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x4D1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityLevel.EntitySceneComponent");
			return ret;
		}
	};


	// Class EntityLevel.EntityProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x40 (0x2D0 - 0x290)
	class AEntityProxyActor : public AActor	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UObject Entity; // 0x298(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x2A0(0x8) UNKNOWN PROPERTY
		AEntityLevel EntityLevel; // 0x2A8(0x8)
		UObject TransformComponent; // 0x2B0(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x2B8(0x10) UNKNOWN PROPERTY
		UObject DuplicatedEntity; // 0x2C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityLevel.EntityProxyActor");
			return ret;
		}
	};


	// Class EntityLevel.EntityProxyActorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UEntityProxyActorComponent : public UActorComponent	
	{
	public:
		UObject Entity; // 0xA0(0x8)
		UObject EntityComponent; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityLevel.EntityProxyActorComponent");
			return ret;
		}
	};

}
