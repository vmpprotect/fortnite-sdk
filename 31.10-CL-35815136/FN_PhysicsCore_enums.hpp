#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PhysicsCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/PhysicsCore.ECollisionTraceFlag
	enum ECollisionTraceFlag
	{
		CTF_UseDefault = 0,
		CTF_UseSimpleAndComplex = 1,
		CTF_UseSimpleAsComplex = 2,
		CTF_UseComplexAsSimple = 3,
	};


	// Enum /Script/PhysicsCore.EPhysicsType
	enum EPhysicsType
	{
		PhysType_Default = 0,
		PhysType_Kinematic = 1,
		PhysType_Simulated = 2,
	};


	// Enum /Script/PhysicsCore.EBodyCollisionResponse
	enum EBodyCollisionResponse
	{
		EBodyCollisionResponse__BodyCollision_Enabled = 0,
		EBodyCollisionResponse__BodyCollision_Disabled = 1,
	};


	// Enum /Script/PhysicsCore.EPhysicalSurface
	enum EPhysicalSurface
	{
		SurfaceType_Default = 0,
		SurfaceType1 = 1,
		SurfaceType2 = 2,
		SurfaceType3 = 3,
		SurfaceType4 = 4,
		SurfaceType5 = 5,
		SurfaceType6 = 6,
		SurfaceType7 = 7,
		SurfaceType8 = 8,
		SurfaceType9 = 9,
		SurfaceType10 = A,
		SurfaceType11 = B,
		SurfaceType12 = C,
		SurfaceType13 = D,
		SurfaceType14 = E,
		SurfaceType15 = F,
		SurfaceType16 = 10,
		SurfaceType17 = 11,
		SurfaceType18 = 12,
		SurfaceType19 = 13,
		SurfaceType20 = 14,
		SurfaceType21 = 15,
		SurfaceType22 = 16,
		SurfaceType23 = 17,
		SurfaceType24 = 18,
		SurfaceType25 = 19,
		SurfaceType26 = 1A,
		SurfaceType27 = 1B,
		SurfaceType28 = 1C,
		SurfaceType29 = 1D,
		SurfaceType30 = 1E,
		SurfaceType31 = 1F,
		SurfaceType32 = 20,
		SurfaceType33 = 21,
		SurfaceType34 = 22,
		SurfaceType35 = 23,
		SurfaceType36 = 24,
		SurfaceType37 = 25,
		SurfaceType38 = 26,
		SurfaceType39 = 27,
		SurfaceType40 = 28,
		SurfaceType41 = 29,
		SurfaceType42 = 2A,
		SurfaceType43 = 2B,
		SurfaceType44 = 2C,
		SurfaceType45 = 2D,
		SurfaceType46 = 2E,
		SurfaceType47 = 2F,
		SurfaceType48 = 30,
		SurfaceType49 = 31,
		SurfaceType50 = 32,
		SurfaceType51 = 33,
		SurfaceType52 = 34,
		SurfaceType53 = 35,
		SurfaceType54 = 36,
		SurfaceType55 = 37,
		SurfaceType56 = 38,
		SurfaceType57 = 39,
		SurfaceType58 = 3A,
		SurfaceType59 = 3B,
		SurfaceType60 = 3C,
		SurfaceType61 = 3D,
		SurfaceType62 = 3E,
		SurfaceType_Max = 3F,
	};


	// Enum /Script/PhysicsCore.ERadialImpulseFalloff
	enum ERadialImpulseFalloff
	{
		RIF_Constant = 0,
		RIF_Linear = 1,
	};


	// Enum /Script/PhysicsCore.ESleepFamily
	enum ESleepFamily
	{
		ESleepFamily__Normal = 0,
		ESleepFamily__Sensitive = 1,
		ESleepFamily__Custom = 2,
	};


	// Enum /Script/PhysicsCore.EAngularConstraintMotion
	enum EAngularConstraintMotion
	{
		ACM_Free = 0,
		ACM_Limited = 1,
		ACM_Locked = 2,
	};


	// Enum /Script/PhysicsCore.EConstraintFrame
	enum EConstraintFrame
	{
		EConstraintFrame__Frame1 = 0,
		EConstraintFrame__Frame2 = 1,
	};


	// Enum /Script/PhysicsCore.EConstraintPlasticityType
	enum EConstraintPlasticityType
	{
		CCPT_Free = 0,
		CCPT_Shrink = 1,
		CCPT_Grow = 2,
	};


	// Enum /Script/PhysicsCore.ELinearConstraintMotion
	enum ELinearConstraintMotion
	{
		LCM_Free = 0,
		LCM_Limited = 1,
		LCM_Locked = 2,
	};


	// Enum /Script/PhysicsCore.EFrictionCombineMode
	enum EFrictionCombineMode
	{
		EFrictionCombineMode__Average = 0,
		EFrictionCombineMode__Min = 1,
		EFrictionCombineMode__Multiply = 2,
		EFrictionCombineMode__Max = 3,
	};


	// Enum /Script/PhysicsCore.EPhysicalMaterialSoftCollisionMode
	enum EPhysicalMaterialSoftCollisionMode
	{
		EPhysicalMaterialSoftCollisionMode__None = 0,
		EPhysicalMaterialSoftCollisionMode__RelativeThickness = 1,
		EPhysicalMaterialSoftCollisionMode__AbsoluteThickess = 2,
	};

}
