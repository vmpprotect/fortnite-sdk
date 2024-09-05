#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActorEntity
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ActorEntity.ActorEntityComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x1A0 (0x240 - 0xA0)
	class UActorEntityComponent : public UActorComponent	
	{
	public:
		FActorEntityMappingArray EntityMappingArray; // 0xA0(0x130)
		unsigned char UnknownData00_7[0x70]; // 0x1D0(0x70) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x68]; // 0x30(0x68) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ActorEntity.PhysicsComponentBridgeHelper");
			return ret;
		}

		void HandleActorComponentHit(UPrimitiveComponent* PrimitiveComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF74D6C8884(relative to base address)
	};

}
