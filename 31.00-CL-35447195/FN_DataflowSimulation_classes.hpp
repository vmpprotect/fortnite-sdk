#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataflowSimulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DataflowSimulation.DataflowSimulationInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataflowSimulationInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowSimulation.DataflowSimulationInterface");
			return ret;
		}
	};


	// Class DataflowSimulation.DataflowPhysicsObjectInterface
	// Inherited from UDataflowSimulationInterface -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataflowPhysicsObjectInterface : public UDataflowSimulationInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowSimulation.DataflowPhysicsObjectInterface");
			return ret;
		}
	};


	// Class DataflowSimulation.DataflowCollisionObjectInterface
	// Inherited from UDataflowPhysicsObjectInterface -> UDataflowSimulationInterface -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataflowCollisionObjectInterface : public UDataflowPhysicsObjectInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowSimulation.DataflowCollisionObjectInterface");
			return ret;
		}
	};


	// Class DataflowSimulation.DataflowConstraintObjectInterface
	// Inherited from UDataflowPhysicsObjectInterface -> UDataflowSimulationInterface -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataflowConstraintObjectInterface : public UDataflowPhysicsObjectInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowSimulation.DataflowConstraintObjectInterface");
			return ret;
		}
	};


	// Class DataflowSimulation.DataflowPhysicsSolverInterface
	// Inherited from UDataflowSimulationInterface -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataflowPhysicsSolverInterface : public UDataflowSimulationInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowSimulation.DataflowPhysicsSolverInterface");
			return ret;
		}
	};


	// Class DataflowSimulation.DataflowSimulationManager
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0xA8 - 0x40)
	class UDataflowSimulationManager : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x68]; // 0x40(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowSimulation.DataflowSimulationManager");
			return ret;
		}
	};


	// Class DataflowSimulation.DataflowSimulationActor
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDataflowSimulationActor : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowSimulation.DataflowSimulationActor");
			return ret;
		}

		void PreDataflowSimulationTick(float SimulationTime, float DeltaTime); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414EC0620
		void PostDataflowSimulationTick(float SimulationTime, float DeltaTime); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414EC0540
	};

}
