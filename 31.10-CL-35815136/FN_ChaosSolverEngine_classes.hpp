#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosSolverEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0xC0]; // 0xA8(0xC0) UNKNOWN PROPERTY
		TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x168(0x50)
		TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x1B8(0x50)
		TMap<UPrimitiveComponent*, FRemovalEventCallbackWrapper> RemovalEventRegistrations; // 0x208(0x50)
		TMap<UPrimitiveComponent*, FCrumblingEventCallbackWrapper> CrumblingEventRegistrations; // 0x258(0x50)
		unsigned char UnknownData01_7[0x10]; // 0x2A8(0x10) UNKNOWN PROPERTY

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

		FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C0EBE08(relative to base address)
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
		unsigned char UnknownData00_6[0x2]; // 0x312(0x2) UNKNOWN PROPERTY
		FSolverCollisionFilterSettings CollisionFilterSettings; // 0x314(0x10)
		bool DoGenerateBreakingData; // 0x324(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x325(0x3) UNKNOWN PROPERTY
		FSolverBreakingFilterSettings BreakingFilterSettings; // 0x328(0x10)
		bool DoGenerateTrailingData; // 0x338(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x339(0x3) UNKNOWN PROPERTY
		FSolverTrailingFilterSettings TrailingFilterSettings; // 0x33C(0x10)
		float MassScale; // 0x34C(0x4)
		bool bHasFloor; // 0x350(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x351(0x3) UNKNOWN PROPERTY
		float FloorHeight; // 0x354(0x4)
		FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x358(0x3)
		unsigned char UnknownData04_6[0x5]; // 0x35B(0x5) UNKNOWN PROPERTY
		UBillboardComponent* SpriteComponent; // 0x360(0x8)
		unsigned char UnknownData05_6[0x18]; // 0x368(0x18) UNKNOWN PROPERTY
		UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x380(0x8)
		unsigned char UnknownData06_7[0x8]; // 0x388(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosSolverActor");
			return ret;
		}

		void SetSolverActive(bool bActive); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0EBF40(relative to base address)
		void SetAsCurrentWorldSolver(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C0EBF2C(relative to base address)
	};


	// Class ChaosSolverEngine.ChaosSolverSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UChaosSolverSettings : public UDeveloperSettings	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FSoftClassPath DefaultChaosSolverActorClass; // 0x38(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChaosSolverEngine.ChaosSolverSettings");
			return ret;
		}
	};

}
