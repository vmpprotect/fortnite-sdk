#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ProceduralMeshComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ProceduralMeshComponent.ProcMeshTangent
	// Size: 0x20 (0x20 - 0x0)
	struct FProcMeshTangent	
	{
	public:
		FVector TangentX; // 0x0(0x18)
		bool bFlipTangentY; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct ProceduralMeshComponent.ProcMeshVertex
	// Size: 0x98 (0x98 - 0x0)
	struct FProcMeshVertex	
	{
	public:
		FVector Position; // 0x0(0x18)
		FVector Normal; // 0x18(0x18)
		FProcMeshTangent Tangent; // 0x30(0x20)
		FColor Color; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FVector2D UV0; // 0x58(0x10)
		FVector2D UV1; // 0x68(0x10)
		FVector2D UV2; // 0x78(0x10)
		FVector2D UV3; // 0x88(0x10)
	};


	// Struct ProceduralMeshComponent.ProcMeshSection
	// Size: 0x60 (0x60 - 0x0)
	struct FProcMeshSection	
	{
	public:
		TArray ProcVertexBuffer; // 0x0(0x10)
		TArray ProcIndexBuffer; // 0x10(0x10)
		FBox SectionLocalBox; // 0x20(0x38)
		bool bEnableCollision; // 0x58(0x1)
		bool bSectionVisible; // 0x59(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY
	};

}
