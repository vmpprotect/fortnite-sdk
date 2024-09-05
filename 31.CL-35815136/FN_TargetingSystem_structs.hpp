#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TargetingSystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct TargetingSystem.TargetingRequestHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FTargetingRequestHandle	
	{
	public:
		unsigned char UnknownData00_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct TargetingSystem.CollisionQueryTaskData
	// Size: 0x10 (0x10 - 0x0)
	struct FCollisionQueryTaskData	
	{
	public:
		TArray<AActor*> IgnoredActors; // 0x0(0x10)
	};


	// Struct TargetingSystem.TargetingTaskSet
	// Size: 0x10 (0x10 - 0x0)
	struct FTargetingTaskSet	
	{
	public:
		TArray<UTargetingTask*> Tasks; // 0x0(0x10)
	};


	// Struct TargetingSystem.TargetingDefaultResultData
	// Size: 0x100 (0x100 - 0x0)
	struct FTargetingDefaultResultData	
	{
	public:
		FHitResult HitResult; // 0x0(0xF8)
		float Score; // 0xF8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
	};


	// Struct TargetingSystem.TargetingDefaultResultsSet
	// Size: 0x10 (0x10 - 0x0)
	struct FTargetingDefaultResultsSet	
	{
	public:
		TArray<FTargetingDefaultResultData> TargetResults; // 0x0(0x10)
	};


	// Struct TargetingSystem.TargetingSourceContext
	// Size: 0x38 (0x38 - 0x0)
	struct FTargetingSourceContext	
	{
	public:
		AActor* SourceActor; // 0x0(0x8)
		AActor* InstigatorActor; // 0x8(0x8)
		FVector SourceLocation; // 0x10(0x18)
		FName SourceSocketName; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UObject* SourceObject; // 0x30(0x8)
	};


	// Struct TargetingSystem.TargetingRequestData
	// Size: 0x30 (0x30 - 0x0)
	struct FTargetingRequestData	
	{
	public:
		unsigned char UnknownData00_7[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
		FDelegateProperty TargetingRequestDynamicDelegate; // 0x20(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct TargetingSystem.TargetingAsyncTaskData
	// Size: 0x8 (0x8 - 0x0)
	struct FTargetingAsyncTaskData	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct TargetingSystem.TargetingImmediateTaskData
	// Size: 0x1 (0x1 - 0x0)
	struct FTargetingImmediateTaskData	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct TargetingSystem.TargetingDebugData
	// Size: 0x1 (0x1 - 0x0)
	struct FTargetingDebugData	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
