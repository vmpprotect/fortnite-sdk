#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryCache
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GeometryCache.TrackRenderData
	// Size: 0xC0 (0xC0 - 0x0)
	struct FTrackRenderData	
	{
	public:
		unsigned char UnknownData00_2[0xC0]; // 0x0(0xC0) UNKNOWN PROPERTY
	};


	// Struct GeometryCache.GeometryCacheMeshBatchInfo
	// Size: 0xC (0xC - 0x0)
	struct FGeometryCacheMeshBatchInfo	
	{
	public:
		unsigned char UnknownData00_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct GeometryCache.GeometryCacheVertexInfo
	// Size: 0x9 (0x9 - 0x0)
	struct FGeometryCacheVertexInfo	
	{
	public:
		unsigned char UnknownData00_2[0x9]; // 0x0(0x9) UNKNOWN PROPERTY
	};


	// Struct GeometryCache.GeometryCacheMeshData
	// Size: 0xC8 (0xC8 - 0x0)
	struct FGeometryCacheMeshData	
	{
	public:
		unsigned char UnknownData00_2[0xC8]; // 0x0(0xC8) UNKNOWN PROPERTY
	};


	// Struct GeometryCache.NiagaraGeometryCacheMICOverride
	// Size: 0x10 (0x10 - 0x0)
	struct FNiagaraGeometryCacheMICOverride	
	{
	public:
		UMaterialInterface* OriginalMaterial; // 0x0(0x8)
		UMaterialInstanceConstant* ReplacementMaterial; // 0x8(0x8)
	};


	// Struct GeometryCache.NiagaraGeometryCacheReference
	// Size: 0x40 (0x40 - 0x0)
	struct FNiagaraGeometryCacheReference	
	{
	public:
		UGeometryCache* GeometryCache; // 0x0(0x8)
		FNiagaraUserParameterBinding GeometryCacheUserParamBinding; // 0x8(0x18)
		TArray<UMaterialInterface*> OverrideMaterials; // 0x20(0x10)
		TArray<FNiagaraGeometryCacheMICOverride> MICOverrideMaterials; // 0x30(0x10)
	};

}
