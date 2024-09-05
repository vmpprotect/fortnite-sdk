#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseQuery
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseQuery.CollisionComponent_Implementation
	// Inherited from UObject
	// Size: 0x180 (0x1A8 - 0x28)
	class UCollisionComponent_Implementation : public UObject	
	{
	public:
		FBodyInstance BodyInstance; // 0x28(0x170)
		unsigned char UnknownData00_7[0x10]; // 0x198(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseQuery.CollisionComponent_Implementation");
			return ret;
		}
	};


	// Class VerseQuery.CollisionComponentBridgeHelper
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UCollisionComponentBridgeHelper : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseQuery.CollisionComponentBridgeHelper");
			return ret;
		}

		void HandleActorComponentHit(UPrimitiveComponent* PrimitiveComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms|HasDefaults, Memory Exec: 0x7FF74D6C8884(relative to base address)
		void HandleActorComponentEndOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF7504198EC(relative to base address)
		void HandleActorComponentBeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750419698(relative to base address)
	};


	// Class VerseQuery.EntityQueryManager
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UEntityQueryManager : public UObject	
	{
	public:
		UEntityTypeQueryContainer* EntityTypeQueryContainer; // 0x28(0x8)
		UTaggedObjectQueryContainer* TagQueryContainer; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseQuery.EntityQueryManager");
			return ret;
		}
	};


	// Class VerseQuery.EntityRegistry
	// Inherited from UEntityRegistryBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEntityRegistry : public UEntityRegistryBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseQuery.EntityRegistry");
			return ret;
		}
	};


	// Class VerseQuery.EntityTypeQueryContainer
	// Inherited from UObject
	// Size: 0xA0 (0xC8 - 0x28)
	class UEntityTypeQueryContainer : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xA0]; // 0x28(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseQuery.EntityTypeQueryContainer");
			return ret;
		}
	};


	// Class VerseQuery.TaggedObjectQueryContainer
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UTaggedObjectQueryContainer : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x28(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseQuery.TaggedObjectQueryContainer");
			return ret;
		}
	};

}
