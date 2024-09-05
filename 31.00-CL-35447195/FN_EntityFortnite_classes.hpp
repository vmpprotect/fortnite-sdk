#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EntityFortnite
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		UClass StormSpawnerClass; // 0x58(0x8)
		AEntityFortniteStormSpawner StormSpawner; // 0x60(0x8)

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
		USceneComponent SceneComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EntityFortnite.EntityFortniteStormSpawner");
			return ret;
		}

		void Stop(); // Flags: Event|Public|BlueprintEvent 0x7FF414BA7B78
		void Start(float StartRadius, float BoundsRadius, TArray& Phases); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414BA7A98
		void Pause(); // Flags: Event|Public|BlueprintEvent 0x7FF414BA79B8
		bool Exists(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414BA78D8
	};

}
