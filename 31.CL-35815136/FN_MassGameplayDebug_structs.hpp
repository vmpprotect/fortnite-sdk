#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassGameplayDebug
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MassGameplayDebug.SimDebugDataRow
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FSimDebugDataRow : public FTableRowBase	
	{
	public:
		UStaticMesh* Mesh; // 0x8(0x8)
		UMaterialInterface* MaterialOverride; // 0x10(0x8)
		float Scale; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct MassGameplayDebug.SimDebugVisFragment
	// Inherited from FMassFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FSimDebugVisFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MassGameplayDebug.DataFragment_DebugVis
	// Inherited from FMassFragment
	// Size: 0x1 (0x1 - 0x0)
	struct FDataFragment_DebugVis : public FMassFragment	
	{
	public:
		EMassEntityDebugShape Shape; // 0x0(0x1)
	};


	// Struct MassGameplayDebug.MassDebuggableTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassDebuggableTag : public FMassTag	
	{
	public:
	};


	// Struct MassGameplayDebug.AgentDebugVisualization
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FAgentDebugVisualization : public FTableRowBase	
	{
	public:
		UStaticMesh* Mesh; // 0x8(0x8)
		UMaterialInterface* MaterialOverride; // 0x10(0x8)
		uint32_t VisualNearCullDistance; // 0x18(0x4)
		uint32_t VisualFarCullDistance; // 0x1C(0x4)
		EMassEntityDebugShape WireShape; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};

}
