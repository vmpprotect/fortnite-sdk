#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortVehicleSimulationStepsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/FortVehicleSimulationStepsRuntime.EVehicleSimStep
	enum EVehicleSimStep
	{
		EVehicleSimStep__None = 0,
		EVehicleSimStep__Update = 1,
		EVehicleSimStep__UpdateSleepType = 2,
		EVehicleSimStep__UpdatePlatform = 3,
		EVehicleSimStep__UpdateBoundarySpline = 4,
		EVehicleSimStep__UpdateIgnoredPawnsForDamage = 5,
		EVehicleSimStep__UpdatePredictedDestroyedBuildings = 6,
		EVehicleSimStep__UpdateForcedDebugInput = 7,
		EVehicleSimStep__UpdateAutoCameraTimer = 8,
		EVehicleSimStep__UpdateCameraOffset = 9,
		EVehicleSimStep__UpdateLocalPlayerInVehicle = A,
		EVehicleSimStep__UpdateOverlappingWaterBodies = B,
		EVehicleSimStep__UpdateIgnoredBuildingActors = C,
		EVehicleSimStep__UpdateFOV = D,
		EVehicleSimStep__UpdateAutoEject = E,
		EVehicleSimStep__UpdateHonk = F,
		EVehicleSimStep__UpdateOnFire = 10,
		EVehicleSimStep__UpdateExplodeDelay = 11,
		EVehicleSimStep__UpdateWaterIdle = 12,
		EVehicleSimStep__UpdateFX = 13,
		EVehicleSimStep__UpdateAutoRun = 14,
		EVehicleSimStep__UpdateWorldMovementDir = 15,
		EVehicleSimStep__UpdatePlayerGravityScales = 16,
		EVehicleSimStep__UpdateSafeTeleport = 17,
		EVehicleSimStep__UpdateWaterLevel = 18,
		EVehicleSimStep__UpdateWaterTest = 19,
		EVehicleSimStep__UpdatePontoons = 1A,
		EVehicleSimStep__UpdateOrientationCorrection = 1B,
		EVehicleSimStep__UpdateReplicatedAttributes = 1C,
		EVehicleSimStep__UpdateImpactBuckets = 1D,
		EVehicleSimStep__UpdateCameraShakeTick = 1E,
		EVehicleSimStep__UpdateForceFeedbackTick = 1F,
		EVehicleSimStep__UpdateAudioTick = 20,
		EVehicleSimStep__UpdateFXTick = 21,
		EVehicleSimStep__UpdatePhysicsSimulation = 22,
		EVehicleSimStep__UpdateSurfaceTypeVehicleIsOn = 23,
		EVehicleSimStep__UpdateRimScraping = 24,
		EVehicleSimStep__UpdateInterfaceFrameUpdate = 25,
		EVehicleSimStep__AsyncTick = 26,
		EVehicleSimStep__SKVehicleUpdateWheels = 27,
		EVehicleSimStep__SKMotorUpdateCosmeticEffectParams = 28,
		EVehicleSimStep__DagwoodUpdateAsyncDriverIO = 29,
		EVehicleSimStep__DagwoodUpdatePushDriveMode = 2A,
		EVehicleSimStep__DagwoodUpdateBoost = 2B,
		EVehicleSimStep__DagwoodUpdateCameraAssist = 2C,
		EVehicleSimStep__DagwoodUpdatePassengersLeaning = 2D,
		EVehicleSimStep__DagwoodUpdateDestroyInitiallyOverlappingActors = 2E,
		EVehicleSimStep__DagwoodUpdatePlayersBasedOnVehicle = 2F,
		EVehicleSimStep__DagwoodUpdateSelfDestruct = 30,
		EVehicleSimStep__MotorcycleUpdatePassengerAnimations = 31,
		EVehicleSimStep__MotorcycleUpdateCameraAssist = 32,
		EVehicleSimStep__MotorcycleUpdateDoorBash = 33,
	};


	// Enum /Script/FortVehicleSimulationStepsRuntime.EVehicleSimStepFlags
	enum EVehicleSimStepFlags
	{
		EVehicleSimStepFlags__None = 0,
		EVehicleSimStepFlags__ServerEnabled = 1,
		EVehicleSimStepFlags__LocalClientEnabled = 2,
		EVehicleSimStepFlags__RemoteClientEnabled = 4,
		EVehicleSimStepFlags__RemoteDisabled = 3,
		EVehicleSimStepFlags__AllEnabled = 7,
	};

}
