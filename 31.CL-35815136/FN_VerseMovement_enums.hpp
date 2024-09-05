#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseMovement
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/VerseMovement.ENetPhysicsMoveTriggerType
	enum ENetPhysicsMoveTriggerType
	{
		ENetPhysicsMoveTriggerType__Input = 0,
		ENetPhysicsMoveTriggerType__Constraint = 1,
		ENetPhysicsMoveTriggerType__Physics = 2,
		ENetPhysicsMoveTriggerType__Trace = 3,
		ENetPhysicsMoveTriggerType__Constant = 4,
	};


	// Enum /Script/VerseMovement.ENetPhysicsMoveResponseType
	enum ENetPhysicsMoveResponseType
	{
		ENetPhysicsMoveResponseType__Linear = 0,
		ENetPhysicsMoveResponseType__Angular = 1,
	};


	// Enum /Script/VerseMovement.ENetPhysicsMoveResponseFrame
	enum ENetPhysicsMoveResponseFrame
	{
		ENetPhysicsMoveResponseFrame__Absolute = 0,
		ENetPhysicsMoveResponseFrame__Object = 1,
		ENetPhysicsMoveResponseFrame__Camera = 2,
	};


	// Enum /Script/VerseMovement.ENetPhysicsMoveResponseEffect
	enum ENetPhysicsMoveResponseEffect
	{
		ENetPhysicsMoveResponseEffect__Force = 0,
		ENetPhysicsMoveResponseEffect__VelocityChange = 1,
		ENetPhysicsMoveResponseEffect__Transform = 2,
	};


	// Enum /Script/VerseMovement.ENetPhysicsMoveResponseModifier
	enum ENetPhysicsMoveResponseModifier
	{
		ENetPhysicsMoveResponseModifier__Add = 0,
		ENetPhysicsMoveResponseModifier__TargetTransform = 1,
		ENetPhysicsMoveResponseModifier__TargetVelocity = 2,
		ENetPhysicsMoveResponseModifier__OverrideTransform = 3,
		ENetPhysicsMoveResponseModifier__OverrideVelocity = 4,
	};

}
