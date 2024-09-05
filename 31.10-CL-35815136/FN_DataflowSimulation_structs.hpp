#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataflowSimulation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DataflowSimulation.DataflowSimulationProxy
	// Size: 0x78 (0x78 - 0x0)
	struct FDataflowSimulationProxy	
	{
	public:
		unsigned char UnknownData00_2[0x78]; // 0x0(0x78) UNKNOWN PROPERTY
	};


	// Struct DataflowSimulation.DataflowPhysicsObjectProxy
	// Inherited from FDataflowSimulationProxy
	// Size: 0x0 (0x78 - 0x78)
	struct FDataflowPhysicsObjectProxy : public FDataflowSimulationProxy	
	{
	public:
	};


	// Struct DataflowSimulation.DataflowCollisionObjectProxy
	// Inherited from FDataflowPhysicsObjectProxy -> FDataflowSimulationProxy
	// Size: 0x0 (0x78 - 0x78)
	struct FDataflowCollisionObjectProxy : public FDataflowPhysicsObjectProxy	
	{
	public:
	};


	// Struct DataflowSimulation.DataflowConstraintObjectProxy
	// Inherited from FDataflowPhysicsObjectProxy -> FDataflowSimulationProxy
	// Size: 0x0 (0x78 - 0x78)
	struct FDataflowConstraintObjectProxy : public FDataflowPhysicsObjectProxy	
	{
	public:
	};


	// Struct DataflowSimulation.DataflowPhysicsSolverProxy
	// Inherited from FDataflowSimulationProxy
	// Size: 0x0 (0x78 - 0x78)
	struct FDataflowPhysicsSolverProxy : public FDataflowSimulationProxy	
	{
	public:
	};


	// Struct DataflowSimulation.DataflowSimulationAsset
	// Size: 0x58 (0x58 - 0x0)
	struct FDataflowSimulationAsset	
	{
	public:
		UDataflow* DataflowAsset; // 0x0(0x8)
		TSet<FString> SimulationGroups; // 0x8(0x50)
	};


	// Struct DataflowSimulation.DataflowSimulationProperty
	// Size: 0x8 (0x8 - 0x0)
	struct FDataflowSimulationProperty	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct DataflowSimulation.DataflowSimulationNode
	// Inherited from FDataflowNode
	// Size: 0x0 (0x198 - 0x198)
	struct FDataflowSimulationNode : public FDataflowNode	
	{
	public:
	};


	// Struct DataflowSimulation.DataflowInvalidNode
	// Inherited from FDataflowSimulationNode -> FDataflowNode
	// Size: 0x0 (0x198 - 0x198)
	struct FDataflowInvalidNode : public FDataflowSimulationNode	
	{
	public:
	};


	// Struct DataflowSimulation.DataflowExecutionNode
	// Inherited from FDataflowSimulationNode -> FDataflowNode
	// Size: 0x0 (0x198 - 0x198)
	struct FDataflowExecutionNode : public FDataflowSimulationNode	
	{
	public:
	};


	// Struct DataflowSimulation.DataflowSimulationTime
	// Size: 0x8 (0x8 - 0x0)
	struct FDataflowSimulationTime	
	{
	public:
		float DeltaTime; // 0x0(0x4)
		float CurrentTime; // 0x4(0x4)
	};


	// Struct DataflowSimulation.GetSimulationTimeDataflowNode
	// Inherited from FDataflowInvalidNode -> FDataflowSimulationNode -> FDataflowNode
	// Size: 0x8 (0x1A0 - 0x198)
	struct FGetSimulationTimeDataflowNode : public FDataflowInvalidNode	
	{
	public:
		FDataflowSimulationTime SimulationTime; // 0x198(0x8)
	};


	// Struct DataflowSimulation.SimulationProxiesTerminalDataflowNode
	// Inherited from FDataflowExecutionNode -> FDataflowSimulationNode -> FDataflowNode
	// Size: 0x10 (0x1A8 - 0x198)
	struct FSimulationProxiesTerminalDataflowNode : public FDataflowExecutionNode	
	{
	public:
		TArray<FDataflowSimulationProperty> SimulationProxies; // 0x198(0x10)
	};


	// Struct DataflowSimulation.GetPhysicsSolversDataflowNode
	// Inherited from FDataflowInvalidNode -> FDataflowSimulationNode -> FDataflowNode
	// Size: 0x20 (0x1B8 - 0x198)
	struct FGetPhysicsSolversDataflowNode : public FDataflowInvalidNode	
	{
	public:
		TArray<FDataflowSimulationProperty> PhysicsSolvers; // 0x198(0x10)
		TArray<FString> SimulationGroups; // 0x1A8(0x10)
	};


	// Struct DataflowSimulation.FilterSimulationProxiesDataflowNode
	// Inherited from FDataflowSimulationNode -> FDataflowNode
	// Size: 0x30 (0x1C8 - 0x198)
	struct FFilterSimulationProxiesDataflowNode : public FDataflowSimulationNode	
	{
	public:
		TArray<FDataflowSimulationProperty> SimulationProxies; // 0x198(0x10)
		TArray<FDataflowSimulationProperty> FilteredProxies; // 0x1A8(0x10)
		TArray<FString> SimulationGroups; // 0x1B8(0x10)
	};


	// Struct DataflowSimulation.AdvancePhysicsSolversDataflowNode
	// Inherited from FDataflowSimulationNode -> FDataflowNode
	// Size: 0x18 (0x1B0 - 0x198)
	struct FAdvancePhysicsSolversDataflowNode : public FDataflowSimulationNode	
	{
	public:
		FDataflowSimulationTime SimulationTime; // 0x198(0x8)
		TArray<FDataflowSimulationProperty> PhysicsSolvers; // 0x1A0(0x10)
	};

}
