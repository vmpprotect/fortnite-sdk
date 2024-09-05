#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActorEntity
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ActorEntity.ActorEntityComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x1A0 (0x240 - 0xA0)
	class UActorEntityComponent : public UActorComponent	
	{
	public:
		FActorEntityMappingArray EntityMappingArray; // 0xA0(0x130)
		unsigned char UnknownData01_7[0x70]; // 0x1D0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ActorEntity.ActorEntityComponent");
			return ret;
		}
	};


	// Class ActorEntity.ActorEntitySubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UActorEntitySubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0x30(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ActorEntity.ActorEntitySubsystem");
			return ret;
		}
	};


	// Class ActorEntity.PhysicsComponentBridgeHelper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPhysicsComponentBridgeHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ActorEntity.PhysicsComponentBridgeHelper");
			return ret;
		}

		void HandleActorComponentHit(UPrimitiveComponent PrimitiveComponent, AActor OtherActor, UPrimitiveComponent OtherComponent, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms|HasDefaults 0x7FF41460E6B8
	};

}
