#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassCommon
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MassCommon.TransformFragment
	// Inherited from FMassFragment
	// Size: 0x60 (0x60 - 0x0)
	struct FTransformFragment : public FMassFragment	
	{
	public:
		FTransform Transform; // 0x0(0x60)
	};


	// Struct MassCommon.AgentRadiusFragment
	// Inherited from FMassFragment
	// Size: 0x4 (0x4 - 0x0)
	struct FAgentRadiusFragment : public FMassFragment	
	{
	public:
		float Radius; // 0x0(0x4)
	};


	// Struct MassCommon.ObjectWrapperFragment
	// Inherited from FMassFragment
	// Size: 0x1 (0x1 - 0x0)
	struct FObjectWrapperFragment : public FMassFragment	
	{
	public:
	};


	// Struct MassCommon.MassNetworkID
	// Inherited from FSequentialIDBase
	// Size: 0x0 (0x4 - 0x4)
	struct FMassNetworkID : public FSequentialIDBase	
	{
	public:
	};


	// Struct MassCommon.MassInt16Real
	// Size: 0x2 (0x2 - 0x0)
	struct FMassInt16Real	
	{
	public:
		int16_t Value; // 0x0(0x2)
	};


	// Struct MassCommon.MassInt16Real10
	// Size: 0x2 (0x2 - 0x0)
	struct FMassInt16Real10	
	{
	public:
		int16_t Value; // 0x0(0x2)
	};


	// Struct MassCommon.MassSnorm8Vector
	// Size: 0x3 (0x3 - 0x0)
	struct FMassSnorm8Vector	
	{
	public:
		int8_t X; // 0x0(0x1)
		int8_t Y; // 0x1(0x1)
		int8_t Z; // 0x2(0x1)
	};


	// Struct MassCommon.MassSnorm8Vector2D
	// Size: 0x2 (0x2 - 0x0)
	struct FMassSnorm8Vector2D	
	{
	public:
		int8_t X; // 0x0(0x1)
		int8_t Y; // 0x1(0x1)
	};


	// Struct MassCommon.MassUnorm8Real
	// Size: 0x1 (0x1 - 0x0)
	struct FMassUnorm8Real	
	{
	public:
		char Value; // 0x0(0x1)
	};


	// Struct MassCommon.MassInt16Vector
	// Size: 0x6 (0x6 - 0x0)
	struct FMassInt16Vector	
	{
	public:
		int16_t X; // 0x0(0x2)
		int16_t Y; // 0x2(0x2)
		int16_t Z; // 0x4(0x2)
	};


	// Struct MassCommon.MassInt16Vector2D
	// Size: 0x4 (0x4 - 0x0)
	struct FMassInt16Vector2D	
	{
	public:
		int16_t X; // 0x0(0x2)
		int16_t Y; // 0x2(0x2)
	};

}
