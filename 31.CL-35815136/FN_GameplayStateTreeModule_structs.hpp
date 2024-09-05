#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayStateTreeModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameplayStateTreeModule.StateTreeAIConditionBase
	// Inherited from FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeAIConditionBase : public FStateTreeConditionBase	
	{
	public:
	};


	// Struct GameplayStateTreeModule.StateTreeAITaskBase
	// Inherited from FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeAITaskBase : public FStateTreeTaskBase	
	{
	public:
	};


	// Struct GameplayStateTreeModule.StateTreeAIActionTaskBase
	// Inherited from FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeAIActionTaskBase : public FStateTreeAITaskBase	
	{
	public:
	};


	// Struct GameplayStateTreeModule.StateTreeRunEnvQueryInstanceData
	// Size: 0x48 (0x48 - 0x0)
	struct FStateTreeRunEnvQueryInstanceData	
	{
	public:
		FStateTreePropertyRef Result; // 0x0(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		AActor* QueryOwner; // 0x8(0x8)
		UEnvQuery* QueryTemplate; // 0x10(0x8)
		TArray<FAIDynamicParam> QueryConfig; // 0x18(0x10)
		TEnumAsByte<EEnvQueryRunMode> RunMode; // 0x28(0x1)
		unsigned char UnknownData01_7[0x1F]; // 0x29(0x1F) UNKNOWN PROPERTY
	};


	// Struct GameplayStateTreeModule.StateTreeRunEnvQueryTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeRunEnvQueryTask : public FStateTreeTaskCommonBase	
	{
	public:
	};


	// Struct GameplayStateTreeModule.StateTreeMoveToTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FStateTreeMoveToTaskInstanceData	
	{
	public:
		AAIController* AIController; // 0x0(0x8)
		FVector Destination; // 0x8(0x18)
		AActor* TargetActor; // 0x20(0x8)
		float AcceptableRadius; // 0x28(0x4)
		float DestinationMoveTolerance; // 0x2C(0x4)
		UClass* FilterClass; // 0x30(0x8)
		bool bAllowStrafe; // 0x38(0x1)
		bool bAllowPartialPath; // 0x39(0x1)
		bool bTrackMovingGoal; // 0x3A(0x1)
		bool bRequireNavigableEndLocation; // 0x3B(0x1)
		bool bProjectGoalLocation; // 0x3C(0x1)
		bool bReachTestIncludesAgentRadius; // 0x3D(0x1)
		bool bReachTestIncludesGoalRadius; // 0x3E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3F(0x1) UNKNOWN PROPERTY
		UAITask_MoveTo* MoveToTask; // 0x40(0x8)
		TScriptInterface<Class> TaskOwner; // 0x48(0x10)
	};


	// Struct GameplayStateTreeModule.StateTreeMoveToTask
	// Inherited from FStateTreeAIActionTaskBase -> FStateTreeAITaskBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeMoveToTask : public FStateTreeAIActionTaskBase	
	{
	public:
	};

}
