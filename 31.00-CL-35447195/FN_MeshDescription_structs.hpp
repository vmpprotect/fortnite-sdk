#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshDescription
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MeshDescription.ElementID
	// Size: 0x4 (0x4 - 0x0)
	struct FElementID	
	{
	public:
		int32_t IDValue; // 0x0(0x4)
	};


	// Struct MeshDescription.VertexID
	// Inherited from FElementID
	// Size: 0x0 (0x4 - 0x4)
	struct FVertexID : public FElementID	
	{
	public:
	};


	// Struct MeshDescription.VertexInstanceID
	// Inherited from FElementID
	// Size: 0x0 (0x4 - 0x4)
	struct FVertexInstanceID : public FElementID	
	{
	public:
	};


	// Struct MeshDescription.EdgeID
	// Inherited from FElementID
	// Size: 0x0 (0x4 - 0x4)
	struct FEdgeID : public FElementID	
	{
	public:
	};


	// Struct MeshDescription.UVID
	// Inherited from FElementID
	// Size: 0x0 (0x4 - 0x4)
	struct FUVID : public FElementID	
	{
	public:
	};


	// Struct MeshDescription.TriangleID
	// Inherited from FElementID
	// Size: 0x0 (0x4 - 0x4)
	struct FTriangleID : public FElementID	
	{
	public:
	};


	// Struct MeshDescription.PolygonGroupID
	// Inherited from FElementID
	// Size: 0x0 (0x4 - 0x4)
	struct FPolygonGroupID : public FElementID	
	{
	public:
	};


	// Struct MeshDescription.PolygonID
	// Inherited from FElementID
	// Size: 0x0 (0x4 - 0x4)
	struct FPolygonID : public FElementID	
	{
	public:
	};

}
