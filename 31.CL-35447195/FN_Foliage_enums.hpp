#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Foliage
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Foliage.FoliageVertexColorMask
	enum FoliageVertexColorMask
	{
		FOLIAGEVERTEXCOLORMASK_Disabled = 0,
		FOLIAGEVERTEXCOLORMASK_Red = 1,
		FOLIAGEVERTEXCOLORMASK_Green = 2,
		FOLIAGEVERTEXCOLORMASK_Blue = 3,
		FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	};


	// Enum /Script/Foliage.EVertexColorMaskChannel
	enum EVertexColorMaskChannel
	{
		EVertexColorMaskChannel__Red = 0,
		EVertexColorMaskChannel__Green = 1,
		EVertexColorMaskChannel__Blue = 2,
		EVertexColorMaskChannel__Alpha = 3,
		EVertexColorMaskChannel__MAX_None = 4,
	};


	// Enum /Script/Foliage.EFoliageScaling
	enum EFoliageScaling
	{
		EFoliageScaling__Uniform = 0,
		EFoliageScaling__Free = 1,
		EFoliageScaling__LockXY = 2,
		EFoliageScaling__LockXZ = 3,
		EFoliageScaling__LockYZ = 4,
	};


	// Enum /Script/Foliage.ESimulationOverlap
	enum ESimulationOverlap
	{
		ESimulationOverlap__CollisionOverlap = 0,
		ESimulationOverlap__ShadeOverlap = 1,
		ESimulationOverlap__None = 2,
	};


	// Enum /Script/Foliage.ESimulationQuery
	enum ESimulationQuery
	{
		ESimulationQuery__None = 0,
		ESimulationQuery__CollisionOverlap = 1,
		ESimulationQuery__ShadeOverlap = 2,
		ESimulationQuery__AnyOverlap = 3,
	};

}
