#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosSolverEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ChaosSolverEngine.ChaosDebugDrawSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UChaosDebugDrawSubsystem : public UWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosDebugDrawSubsystem");
			return ret;
		}
	};


	// Class ChaosSolverEngine.ChaosDebugDrawComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UChaosDebugDrawComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosDebugDrawComponent");
			return ret;
		}
	};


	// Class ChaosSolverEngine.ChaosEventListenerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UChaosEventListenerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosEventListenerComponent");
			return ret;
		}
	};


	// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
	// Inherited from UChaosEventListenerComponent -> UActorComponent -> UObject
	// Size: 0x210 (0x2B8 - 0xA8)
	class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent	
	{
	public:
		unsigned char UnknownData02_3[0xC0]; // 0xA8(0xC0) UNKNOWN PROPERTY
		TMap CollisionEventRegistrations; // 0x168(0x50)
		TMap BreakEventRegistrations; // 0x1B8(0x50)
		TMap RemovalEventRegistrations; // 0x208(0x50)
		TMap CrumblingEventRegistrations; // 0x258(0x50)
		unsigned char UnknownData03_7[0x10]; // 0x2A8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosGameplayEventDispatcher");
			return ret;
		}
	};


	// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChaosNotifyHandlerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosNotifyHandlerInterface");
			return ret;
		}
	};


	// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
			return ret;
		}

		FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144A3D58
	};


	// Class ChaosSolverEngine.ChaosSolver
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UChaosSolver : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosSolver");
			return ret;
		}
	};


	// Class ChaosSolverEngine.ChaosSolverActor
	// Inherited from AActor -> UObject
	// Size: 0x100 (0x390 - 0x290)
	class AChaosSolverActor : public AActor	
	{
	public:
		FChaosSolverConfiguration Properties; // 0x290(0x6C)
		float TimeStepMultiplier; // 0x2FC(0x4)
		int32_t CollisionIterations; // 0x300(0x4)
		int32_t PushOutIterations; // 0x304(0x4)
		int32_t PushOutPairIterations; // 0x308(0x4)
		float ClusterConnectionFactor; // 0x30C(0x4)
		EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x310(0x1)
		bool DoGenerateCollisionData; // 0x311(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x312(0x2) UNKNOWN PROPERTY
		FSolverCollisionFilterSettings CollisionFilterSettings; // 0x314(0x10)
		bool DoGenerateBreakingData; // 0x324(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x325(0x3) UNKNOWN PROPERTY
		FSolverBreakingFilterSettings BreakingFilterSettings; // 0x328(0x10)
		bool DoGenerateTrailingData; // 0x338(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x339(0x3) UNKNOWN PROPERTY
		FSolverTrailingFilterSettings TrailingFilterSettings; // 0x33C(0x10)
		float MassScale; // 0x34C(0x4)
		bool bHasFloor; // 0x350(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x351(0x3) UNKNOWN PROPERTY
		float FloorHeight; // 0x354(0x4)
		FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x358(0x3)
		unsigned char UnknownData11_6[0x5]; // 0x35B(0x5) UNKNOWN PROPERTY
		UBillboardComponent SpriteComponent; // 0x360(0x8)
		unsigned char UnknownData12_6[0x18]; // 0x368(0x18) UNKNOWN PROPERTY
		UChaosGameplayEventDispatcher GameplayEventDispatcherComponent; // 0x380(0x8)
		unsigned char UnknownData13_7[0x8]; // 0x388(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosSolverActor");
			return ret;
		}

		void SetSolverActive(bool bActive); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A3F18
		void SetAsCurrentWorldSolver(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A3E38
	};


	// Class ChaosSolverEngine.ChaosSolverSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UChaosSolverSettings : public UDeveloperSettings	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FSoftClassPath DefaultChaosSolverActorClass; // 0x38(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosSolverSettings");
			return ret;
		}
	};

}
