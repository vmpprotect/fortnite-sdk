#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Procedural
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Procedural.EProceduralParameterModifierBlendMode
	enum EProceduralParameterModifierBlendMode
	{
		EProceduralParameterModifierBlendMode__Min = 0,
		EProceduralParameterModifierBlendMode__Max = 1,
		EProceduralParameterModifierBlendMode__Additive = 2,
		EProceduralParameterModifierBlendMode__Subtractive = 3,
		EProceduralParameterModifierBlendMode__Multiply = 4,
		EProceduralParameterModifierBlendMode__Interpolate = 5,
	};


	// Enum /Script/Procedural.EProceduralRotationFormat
	enum EProceduralRotationFormat
	{
		EProceduralRotationFormat__VectorXAxis = 0,
		EProceduralRotationFormat__VectorXAxisNegative = 1,
		EProceduralRotationFormat__VectorYAxis = 2,
		EProceduralRotationFormat__VectorYAxisNegative = 3,
		EProceduralRotationFormat__VectorZAxis = 4,
		EProceduralRotationFormat__VectorZAxisNegative = 5,
		EProceduralRotationFormat__Vector2DXAxis = 6,
		EProceduralRotationFormat__Vector2DXAxisNegative = 7,
		EProceduralRotationFormat__Vector2DYAxis = 8,
		EProceduralRotationFormat__Vector2DYAxisNegative = 9,
		EProceduralRotationFormat__Vector2DZAxis = A,
		EProceduralRotationFormat__Vector2DZAxisNegative = B,
		EProceduralRotationFormat__RangedRotator = C,
	};


	// Enum /Script/Procedural.EProceduralTextureColorChannel
	enum EProceduralTextureColorChannel
	{
		EProceduralTextureColorChannel__Red = 0,
		EProceduralTextureColorChannel__Green = 1,
		EProceduralTextureColorChannel__Blue = 2,
		EProceduralTextureColorChannel__Alpha = 3,
	};


	// Enum /Script/Procedural.EProceduralScatterContentPivotMode
	enum EProceduralScatterContentPivotMode
	{
		EProceduralScatterContentPivotMode__UsePivot = 0,
		EProceduralScatterContentPivotMode__UseBoundingBoxCenter = 1,
		EProceduralScatterContentPivotMode__UseBoundingBoxBottomCenter = 2,
		EProceduralScatterContentPivotMode__UseFootprintBoundingBoxBottomCenter = 3,
	};


	// Enum /Script/Procedural.EProceduralScatterTileRandomGenerator
	enum EProceduralScatterTileRandomGenerator
	{
		EProceduralScatterTileRandomGenerator__PseudoRandom = 0,
		EProceduralScatterTileRandomGenerator__HaltonSequence = 1,
	};


	// Enum /Script/Procedural.EProceduralScatterMethod
	enum EProceduralScatterMethod
	{
		EProceduralScatterMethod__Density = 0,
		EProceduralScatterMethod__SourcePoints = 1,
		EProceduralScatterMethod__Grid = 2,
	};


	// Enum /Script/Procedural.EProceduralScatterStaticMeshMode
	enum EProceduralScatterStaticMeshMode
	{
		EProceduralScatterStaticMeshMode__FromStaticMesh = 0,
		EProceduralScatterStaticMeshMode__FromActor = 1,
	};

}
