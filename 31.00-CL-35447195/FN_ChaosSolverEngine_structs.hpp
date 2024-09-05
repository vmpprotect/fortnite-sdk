#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosSolverEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ChaosSolverEngine.ChaosPhysicsCollisionInfo
	// Size: 0xC0 (0xC0 - 0x0)
	struct FChaosPhysicsCollisionInfo	
	{
	public:
		UPrimitiveComponent Component; // 0x0(0x8)
		UPrimitiveComponent OtherComponent; // 0x8(0x8)
		FVector Location; // 0x10(0x18)
		FVector Normal; // 0x28(0x18)
		FVector AccumulatedImpulse; // 0x40(0x18)
		FVector Velocity; // 0x58(0x18)
		FVector OtherVelocity; // 0x70(0x18)
		FVector AngularVelocity; // 0x88(0x18)
		FVector OtherAngularVelocity; // 0xA0(0x18)
		float Mass; // 0xB8(0x4)
		float OtherMass; // 0xBC(0x4)
	};


	// Struct ChaosSolverEngine.BreakEventCallbackWrapper
	// Size: 0x40 (0x40 - 0x0)
	struct FBreakEventCallbackWrapper	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct ChaosSolverEngine.RemovalEventCallbackWrapper
	// Size: 0x40 (0x40 - 0x0)
	struct FRemovalEventCallbackWrapper	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct ChaosSolverEngine.CrumblingEventCallbackWrapper
	// Size: 0x40 (0x40 - 0x0)
	struct FCrumblingEventCallbackWrapper	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct ChaosSolverEngine.ChaosHandlerSet
	// Size: 0x58 (0x58 - 0x0)
	struct FChaosHandlerSet	
	{
	public:
		unsigned char UnknownData01_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TSet ChaosHandlers; // 0x8(0x50)
	};


	// Struct ChaosSolverEngine.ChaosDebugSubstepControl
	// Size: 0x3 (0x3 - 0x0)
	struct FChaosDebugSubstepControl	
	{
	public:
		bool bPause; // 0x0(0x1)
		bool bSubstep; // 0x1(0x1)
		bool bStep; // 0x2(0x1)
	};

}
