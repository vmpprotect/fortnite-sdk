#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RigLogicModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/RigLogicModule.EArchetype
	enum EArchetype
	{
		EArchetype__Asian = 0,
		EArchetype__Black = 1,
		EArchetype__Caucasian = 2,
		EArchetype__Hispanic = 3,
		EArchetype__Alien = 4,
		EArchetype__Other = 5,
	};


	// Enum /Script/RigLogicModule.EGender
	enum EGender
	{
		EGender__Male = 0,
		EGender__Female = 1,
		EGender__Other = 2,
	};


	// Enum /Script/RigLogicModule.ETranslationUnit
	enum ETranslationUnit
	{
		ETranslationUnit__CM = 0,
		ETranslationUnit__M = 1,
	};


	// Enum /Script/RigLogicModule.ERotationUnit
	enum ERotationUnit
	{
		ERotationUnit__Degrees = 0,
		ERotationUnit__Radians = 1,
	};


	// Enum /Script/RigLogicModule.EDirection
	enum EDirection
	{
		EDirection__Left = 0,
		EDirection__Right = 1,
		EDirection__Up = 2,
		EDirection__Down = 3,
		EDirection__Front = 4,
		EDirection__Back = 5,
	};


	// Enum /Script/RigLogicModule.EDNADataLayer
	enum EDNADataLayer
	{
		EDNADataLayer__None = 0,
		EDNADataLayer__Descriptor = 1,
		EDNADataLayer__Definition = 3,
		EDNADataLayer__Behavior = 7,
		EDNADataLayer__Geometry = B,
		EDNADataLayer__GeometryWithoutBlendShapes = 13,
		EDNADataLayer__MachineLearnedBehavior = 23,
		EDNADataLayer__All = 2F,
	};


	// Enum /Script/RigLogicModule.EActivationFunction
	enum EActivationFunction
	{
		EActivationFunction__Linear = 0,
		EActivationFunction__ReLU = 1,
		EActivationFunction__LeakyReLU = 2,
		EActivationFunction__Tanh = 3,
		EActivationFunction__Sigmoid = 4,
	};


	// Enum /Script/RigLogicModule.ERigLogicCalculationType
	enum ERigLogicCalculationType
	{
		ERigLogicCalculationType__Scalar = 0,
		ERigLogicCalculationType__SSE = 1,
		ERigLogicCalculationType__AVX = 2,
	};


	// Enum /Script/RigLogicModule.ELodUpdateOption
	enum ELodUpdateOption
	{
		ELodUpdateOption__LOD0Only = 0,
		ELodUpdateOption__LOD1AndHigher = 1,
		ELodUpdateOption__All = 2,
	};

}
