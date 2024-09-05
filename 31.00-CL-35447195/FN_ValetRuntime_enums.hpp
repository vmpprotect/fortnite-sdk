#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ValetRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ValetRuntime.EFortDagwoodSimEvent
	enum EFortDagwoodSimEvent
	{
		EFortDagwoodSimEvent__EnterLandscape = 0,
		EFortDagwoodSimEvent__ExitLandscape = 1,
		EFortDagwoodSimEvent__EnterRoad = 2,
		EFortDagwoodSimEvent__ExitRoad = 3,
		EFortDagwoodSimEvent__Explode = 4,
		EFortDagwoodSimEvent__FlipImpact = 5,
		EFortDagwoodSimEvent__StartBoost = 6,
		EFortDagwoodSimEvent__FinishBoost = 7,
	};


	// Enum /Script/ValetRuntime.EControlsPrototypes
	enum EControlsPrototypes
	{
		EControlsPrototypes__CameraSteering = 0,
		EControlsPrototypes__NonCameraSteering = 1,
		EControlsPrototypes__HybridCameraSteering = 2,
		EControlsPrototypes__MaxCount = 3,
	};


	// Enum /Script/ValetRuntime.EPoppedTireReactionStates
	enum EPoppedTireReactionStates
	{
		EPoppedTireReactionStates__None = 0,
		EPoppedTireReactionStates__VeerLeft = 1,
		EPoppedTireReactionStates__VeerRight = 2,
		EPoppedTireReactionStates__Wiggle = 3,
		EPoppedTireReactionStates__Yaw90 = 4,
		EPoppedTireReactionStates__FlipPitch = 5,
		EPoppedTireReactionStates__FlipRoll = 6,
	};


	// Enum /Script/ValetRuntime.EVehicleClass
	enum EVehicleClass
	{
		EVehicleClass__Sedan = 0,
		EVehicleClass__Sport = 1,
		EVehicleClass__PickupTruck = 2,
		EVehicleClass__SemiTruck = 3,
	};


	// Enum /Script/ValetRuntime.EVehicleWheelAndTireNiagaraParams
	enum EVehicleWheelAndTireNiagaraParams
	{
		None = 0,
		Sparks_Wheel_FL = 1,
		Sparks_Wheel_FR = 2,
		Sparks_Wheel_ML = 4,
		Sparks_Wheel_MR = 8,
		Sparks_Wheel_RL = 10,
		Sparks_Wheel_RR = 20,
		UNUSED = 40,
		UNUSED = 80,
		Dust_Wheel_FL = 100,
		Dust_Wheel_FR = 200,
		Dust_Wheel_ML = 400,
		Dust_Wheel_MR = 800,
		Dust_Wheel_RL = 1000,
		Dust_Wheel_RR = 2000,
		UNUSED = 4000,
		UNUSED = 8000,
		TireIntactFL = 10000,
		TireIntactFR = 20000,
		TireIntactRL = 40000,
		TireIntactRR = 80000,
		TireIntactML = 100000,
		TireIntactMR = 200000,
		IsShifting = 400000,
		UNUSED = 800000,
		PeelOut_Wheel_RL = 1000000,
		PeelOut_Wheel_RR = 2000000,
		IsBigRig = 4000000,
		IsWaterDeep = 8000000,
		VehicleHasDriver = 10000000,
		VehicleHasFuel = 20000000,
		Downshifting = 40000000,
		UNUSED = 80000000,
	};

}
