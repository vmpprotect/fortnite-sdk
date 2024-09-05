#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayCameras
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/GameplayCameras.ECameraBuildStatus
	enum ECameraBuildStatus
	{
		ECameraBuildStatus__Clean = 0,
		ECameraBuildStatus__CleanWithWarnings = 1,
		ECameraBuildStatus__WithErrors = 2,
		ECameraBuildStatus__Dirty = 3,
	};


	// Enum /Script/GameplayCameras.ECameraNodeSpace
	enum ECameraNodeSpace
	{
		ECameraNodeSpace__CameraPose = 0,
		ECameraNodeSpace__Context = 1,
		ECameraNodeSpace__World = 2,
	};


	// Enum /Script/GameplayCameras.ECameraVariableType
	enum ECameraVariableType
	{
		ECameraVariableType__Boolean = 0,
		ECameraVariableType__Integer32 = 1,
		ECameraVariableType__Float = 2,
		ECameraVariableType__Double = 3,
		ECameraVariableType__Vector2f = 4,
		ECameraVariableType__Vector2d = 5,
		ECameraVariableType__Vector3f = 6,
		ECameraVariableType__Vector3d = 7,
		ECameraVariableType__Vector4f = 8,
		ECameraVariableType__Vector4d = 9,
		ECameraVariableType__Rotator3f = A,
		ECameraVariableType__Rotator3d = B,
		ECameraVariableType__Transform3f = C,
		ECameraVariableType__Transform3d = D,
	};


	// Enum /Script/GameplayCameras.EOscillatorWaveform
	enum EOscillatorWaveform
	{
		EOscillatorWaveform__SineWave = 0,
		EOscillatorWaveform__PerlinNoise = 1,
	};


	// Enum /Script/GameplayCameras.EInitialOscillatorOffset
	enum EInitialOscillatorOffset
	{
		EOO_OffsetRandom = 0,
		EOO_OffsetZero = 1,
	};


	// Enum /Script/GameplayCameras.ECameraAnimationPlaySpace
	enum ECameraAnimationPlaySpace
	{
		ECameraAnimationPlaySpace__CameraLocal = 0,
		ECameraAnimationPlaySpace__World = 1,
		ECameraAnimationPlaySpace__UserDefined = 2,
	};


	// Enum /Script/GameplayCameras.ECameraAnimationEasingType
	enum ECameraAnimationEasingType
	{
		ECameraAnimationEasingType__Linear = 0,
		ECameraAnimationEasingType__Sinusoidal = 1,
		ECameraAnimationEasingType__Quadratic = 2,
		ECameraAnimationEasingType__Cubic = 3,
		ECameraAnimationEasingType__Quartic = 4,
		ECameraAnimationEasingType__Quintic = 5,
		ECameraAnimationEasingType__Exponential = 6,
		ECameraAnimationEasingType__Circular = 7,
	};


	// Enum /Script/GameplayCameras.ECameraRigLayer
	enum ECameraRigLayer
	{
		ECameraRigLayer__Base = 0,
		ECameraRigLayer__Main = 1,
		ECameraRigLayer__Global = 2,
		ECameraRigLayer__Visual = 3,
		ECameraRigLayer__User0 = 4,
		ECameraRigLayer__User1 = 5,
		ECameraRigLayer__User2 = 6,
	};


	// Enum /Script/GameplayCameras.ESmoothCameraBlendType
	enum ESmoothCameraBlendType
	{
		ESmoothCameraBlendType__SmoothStep = 0,
		ESmoothCameraBlendType__SmootherStep = 1,
	};


	// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
	enum EInitialWaveOscillatorOffsetType
	{
		EInitialWaveOscillatorOffsetType__Random = 0,
		EInitialWaveOscillatorOffsetType__Zero = 1,
	};

}
