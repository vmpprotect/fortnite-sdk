#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ScoutDroneRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ScoutDroneRuntime.FortScoutDroneDiveTransitionData
	// Size: 0x30 (0x30 - 0x0)
	struct FFortScoutDroneDiveTransitionData	
	{
	public:
		UCurveFloat* Curve; // 0x0(0x8)
		FScalableFloat TransitionDuration; // 0x8(0x28)
	};


	// Struct ScoutDroneRuntime.OnFortScoutDroneDeployed
	// Size: 0x8 (0x8 - 0x0)
	struct FOnFortScoutDroneDeployed	
	{
	public:
		TWeakObjectPtr<AFortScoutDrone*> DeployedDrone; // 0x0(0x8)
	};


	// Struct ScoutDroneRuntime.OnFortScoutDroneDismissed
	// Size: 0x4 (0x4 - 0x0)
	struct FOnFortScoutDroneDismissed	
	{
	public:
		FGameplayTag DismissalReason; // 0x0(0x4)
	};


	// Struct ScoutDroneRuntime.OnFortScoutDroneMarkedEnemies
	// Size: 0x18 (0x18 - 0x0)
	struct FOnFortScoutDroneMarkedEnemies	
	{
	public:
		FGameplayTag Source; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<AActor*> MarkedActors; // 0x8(0x10)
	};


	// Struct ScoutDroneRuntime.OnFortScoutDroneFinishedLongInteract
	// Size: 0x1 (0x1 - 0x0)
	struct FOnFortScoutDroneFinishedLongInteract	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct ScoutDroneRuntime.ScoutDroneDeferredDestructionData
	// Size: 0x10 (0x10 - 0x0)
	struct FScoutDroneDeferredDestructionData	
	{
	public:
		float DeposessDelay; // 0x0(0x4)
		float DestroyDelay; // 0x4(0x4)
		FGameplayTag DismissalReason; // 0x8(0x4)
		float ServerDismissStartTime; // 0xC(0x4)
	};


	// Struct ScoutDroneRuntime.ScoutDronePickupTargets
	// Size: 0x18 (0x18 - 0x0)
	struct FScoutDronePickupTargets	
	{
	public:
		TArray<AActor*> Items; // 0x0(0x10)
		AFortPawn* DBNOPawn; // 0x10(0x8)
	};


	// Struct ScoutDroneRuntime.ScoutDroneStatusData
	// Size: 0x8 (0x8 - 0x0)
	struct FScoutDroneStatusData	
	{
	public:
		EFortScoutDroneTargetStatus Status; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ServerTimeStatusChanged; // 0x4(0x4)
	};


	// Struct ScoutDroneRuntime.ScoutDroneInputTriggerableEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FScoutDroneInputTriggerableEvent	
	{
	public:
		FName InputActionName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UInputAction* InputAction; // 0x8(0x8)
		FGameplayTag GameplayEventToTrigger; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct ScoutDroneRuntime.ScoutDroneCapsuleSizeData
	// Size: 0x50 (0x50 - 0x0)
	struct FScoutDroneCapsuleSizeData	
	{
	public:
		FScalableFloat CapsuleHalfHeight; // 0x0(0x28)
		FScalableFloat CapsuleRadius; // 0x28(0x28)
	};

}
