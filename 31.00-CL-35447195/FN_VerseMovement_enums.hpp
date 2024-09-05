#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseMovement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
