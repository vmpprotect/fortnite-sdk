#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EntityFortnite
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EntityFortnite.EntityFortniteInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEntityFortniteInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityFortnite.EntityFortniteInterface");
			return ret;
		}
	};


	// Class EntityFortnite.EntityFortnitePlayerComponent
	// Inherited from UEntityActorPlayerComponent -> UEntityDataBackedComponent -> UEntityComponent -> UObject
	// Size: 0x0 (0xD0 - 0xD0)
	class UEntityFortnitePlayerComponent : public UEntityActorPlayerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityFortnite.EntityFortnitePlayerComponent");
			return ret;
		}
	};


	// Class EntityFortnite.EntityFortniteStormControllerComponent
	// Inherited from UEntityComponent -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UEntityFortniteStormControllerComponent : public UEntityComponent	
	{
	public:
		UClass* StormSpawnerClass; // 0x58(0x8)
		AEntityFortniteStormSpawner* StormSpawner; // 0x60(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityFortnite.EntityFortniteStormControllerComponent");
			return ret;
		}
	};


	// Class EntityFortnite.EntityFortniteStormSpawner
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AEntityFortniteStormSpawner : public AActor	
	{
	public:
		USceneComponent* SceneComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityFortnite.EntityFortniteStormSpawner");
			return ret;
		}

		void Stop(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Start(float StartRadius, float BoundsRadius, TArray<FEntityFortniteStormPhase>& Phases); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Pause(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool Exists(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
