#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Chaos
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Chaos.ManagedArrayCollection
	// Size: 0xB0 (0xB0 - 0x0)
	struct FManagedArrayCollection	
	{
	public:
		unsigned char UnknownData01_2[0xB0]; // 0x0(0xB0) UNKNOWN PROPERTY
	};


	// Struct Chaos.FieldCollection
	// Inherited from FManagedArrayCollection
	// Size: 0x0 (0xB0 - 0xB0)
	struct FFieldCollection : public FManagedArrayCollection	
	{
	public:
	};


	// Struct Chaos.ClosestPhysicsObjectResult
	// Size: 0x28 (0x28 - 0x0)
	struct FClosestPhysicsObjectResult	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct Chaos.ChaosSolverConfiguration
	// Size: 0x6C (0x6C - 0x0)
	struct FChaosSolverConfiguration	
	{
	public:
		int32_t PositionIterations; // 0x0(0x4)
		int32_t VelocityIterations; // 0x4(0x4)
		int32_t ProjectionIterations; // 0x8(0x4)
		float CollisionMarginFraction; // 0xC(0x4)
		float CollisionMarginMax; // 0x10(0x4)
		float CollisionCullDistance; // 0x14(0x4)
		float CollisionMaxPushOutVelocity; // 0x18(0x4)
		float CollisionInitialOverlapDepenetrationVelocity; // 0x1C(0x4)
		float ClusterConnectionFactor; // 0x20(0x4)
		EClusterUnionMethod ClusterUnionConnectionType; // 0x24(0x1)
		bool bGenerateCollisionData; // 0x25(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
		FSolverCollisionFilterSettings CollisionFilterSettings; // 0x28(0x10)
		bool bGenerateBreakData; // 0x38(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FSolverBreakingFilterSettings BreakingFilterSettings; // 0x3C(0x10)
		bool bGenerateTrailingData; // 0x4C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		FSolverTrailingFilterSettings TrailingFilterSettings; // 0x50(0x10)
		int32_t Iterations; // 0x60(0x4)
		int32_t PushOutIterations; // 0x64(0x4)
		bool bGenerateContactGraph; // 0x68(0x1)
		unsigned char UnknownData07_7[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
	};


	// Struct Chaos.SolverTrailingFilterSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSolverTrailingFilterSettings	
	{
	public:
		bool FilterEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MinMass; // 0x4(0x4)
		float MinSpeed; // 0x8(0x4)
		float MinVolume; // 0xC(0x4)
	};


	// Struct Chaos.SolverBreakingFilterSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSolverBreakingFilterSettings	
	{
	public:
		bool FilterEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MinMass; // 0x4(0x4)
		float MinSpeed; // 0x8(0x4)
		float MinVolume; // 0xC(0x4)
	};


	// Struct Chaos.SolverCollisionFilterSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSolverCollisionFilterSettings	
	{
	public:
		bool FilterEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MinMass; // 0x4(0x4)
		float MinSpeed; // 0x8(0x4)
		float MinImpulse; // 0xC(0x4)
	};


	// Struct Chaos.SolverCollisionData
	// Size: 0xC0 (0xC0 - 0x0)
	struct FSolverCollisionData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector AccumulatedImpulse; // 0x18(0x18)
		FVector Normal; // 0x30(0x18)
		FVector Velocity1; // 0x48(0x18)
		FVector Velocity2; // 0x60(0x18)
		FVector AngularVelocity1; // 0x78(0x18)
		FVector AngularVelocity2; // 0x90(0x18)
		float Mass1; // 0xA8(0x4)
		float Mass2; // 0xAC(0x4)
		int32_t ParticleIndex; // 0xB0(0x4)
		int32_t LevelsetIndex; // 0xB4(0x4)
		int32_t ParticleIndexMesh; // 0xB8(0x4)
		int32_t LevelsetIndexMesh; // 0xBC(0x4)
	};


	// Struct Chaos.SolverBreakingData
	// Size: 0x58 (0x58 - 0x0)
	struct FSolverBreakingData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector Velocity; // 0x18(0x18)
		FVector AngularVelocity; // 0x30(0x18)
		float Mass; // 0x48(0x4)
		int32_t ParticleIndex; // 0x4C(0x4)
		int32_t ParticleIndexMesh; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct Chaos.SolverTrailingData
	// Size: 0x58 (0x58 - 0x0)
	struct FSolverTrailingData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector Velocity; // 0x18(0x18)
		FVector AngularVelocity; // 0x30(0x18)
		float Mass; // 0x48(0x4)
		int32_t ParticleIndex; // 0x4C(0x4)
		int32_t ParticleIndexMesh; // 0x50(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct Chaos.RecordedFrame
	// Size: 0xB8 (0xB8 - 0x0)
	struct FRecordedFrame	
	{
	public:
		TArray Transforms; // 0x0(0x10)
		TArray TransformIndices; // 0x10(0x10)
		TArray PreviousTransformIndices; // 0x20(0x10)
		TArray DisabledFlags; // 0x30(0x10)
		TArray Collisions; // 0x40(0x10)
		TArray Breakings; // 0x50(0x10)
		TSet Trailings; // 0x60(0x50)
		float Timestamp; // 0xB0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
	};


	// Struct Chaos.RecordedTransformTrack
	// Size: 0x10 (0x10 - 0x0)
	struct FRecordedTransformTrack	
	{
	public:
		TArray Records; // 0x0(0x10)
	};


	// Struct Chaos.SolverRemovalFilterSettings
	// Size: 0xC (0xC - 0x0)
	struct FSolverRemovalFilterSettings	
	{
	public:
		bool FilterEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MinMass; // 0x4(0x4)
		float MinVolume; // 0x8(0x4)
	};

}
